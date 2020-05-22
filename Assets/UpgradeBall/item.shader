Shader "Custom/item"
{
  Properties {
     _MainTex ("Main Texture", 2D) = "white" {}
     _DispTex ("Displacement Texture", 2D) = "white" {}
     _MaxDisplacement ("Max Displacement", Float) = 1.0
  }
  SubShader {
     Pass {   
        CGPROGRAM
 
        #pragma vertex vert
        #pragma fragment frag
 
        uniform sampler2D _MainTex;
        uniform sampler2D _DispTex;
        uniform float _MaxDisplacement;
 
        struct vertexInput {
           float4 vertex : POSITION;
           float3 normal : NORMAL;
           float4 texcoord : TEXCOORD0;
        };
 
        struct vertexOutput {
           float4 position : SV_POSITION;
           float4 texcoord : TEXCOORD0;
        };
 
        vertexOutput vert(vertexInput i) {
           vertexOutput o;
          
           // Pega o valor da textura no ponto mapeado da geometria
           float4 dispTex = tex2Dlod(_DispTex, float4(i.texcoord.xy, 0.0, 0.0));
 
           // Pega canal vermelho [0 a 1], ajusta para -0.5 a 0.5 * deslocamento
           float displacement = (dispTex.r-0.5) * _MaxDisplacement;
 
           // Ajusta a posição do vértice em função da normal dele
           float4 newVertexPos = i.vertex + float4(i.normal * displacement, 0.0);  
 
           // Salva nova posição do vértice já em 2D
           o.position = UnityObjectToClipPos(newVertexPos);
          
           o.texcoord = i.texcoord;
           return o;  
        }
 
        float4 frag(vertexOutput i) : COLOR
        {
           fixed4 col = tex2D(_MainTex, i.texcoord.xy);
           return col;
        }
 
        ENDCG
     }
  }
}
