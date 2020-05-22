extern "C" void RegisterStaticallyLinkedModulesGranular()
{
	void RegisterModule_SharedInternals();
	RegisterModule_SharedInternals();

	void RegisterModule_Core();
	RegisterModule_Core();

	void RegisterModule_AI();
	RegisterModule_AI();

	void RegisterModule_Animation();
	RegisterModule_Animation();

	void RegisterModule_Audio();
	RegisterModule_Audio();

	void RegisterModule_ParticleSystem();
	RegisterModule_ParticleSystem();

	void RegisterModule_Physics();
	RegisterModule_Physics();

	void RegisterModule_Physics2D();
	RegisterModule_Physics2D();

	void RegisterModule_Terrain();
	RegisterModule_Terrain();

	void RegisterModule_TerrainPhysics();
	RegisterModule_TerrainPhysics();

	void RegisterModule_TextRendering();
	RegisterModule_TextRendering();

	void RegisterModule_UI();
	RegisterModule_UI();

	void RegisterModule_UnityConnect();
	RegisterModule_UnityConnect();

	void RegisterModule_Vehicles();
	RegisterModule_Vehicles();

	void RegisterModule_IMGUI();
	RegisterModule_IMGUI();

	void RegisterModule_UnityWebRequest();
	RegisterModule_UnityWebRequest();

	void RegisterModule_JSONSerialize();
	RegisterModule_JSONSerialize();

	void RegisterModule_UnityAnalytics();
	RegisterModule_UnityAnalytics();

	void RegisterModule_TLS();
	RegisterModule_TLS();

	void RegisterModule_WebGL();
	RegisterModule_WebGL();

}

template <typename T> void RegisterUnityClass(const char*);
template <typename T> void RegisterStrippedType(int, const char*, const char*);

void InvokeRegisterStaticallyLinkedModuleClasses()
{
	// Do nothing (we're in stripping mode)
}

class EditorExtension; template <> void RegisterUnityClass<EditorExtension>(const char*);
namespace Unity { class Component; } template <> void RegisterUnityClass<Unity::Component>(const char*);
class Behaviour; template <> void RegisterUnityClass<Behaviour>(const char*);
class Animation; template <> void RegisterUnityClass<Animation>(const char*);
class Animator; template <> void RegisterUnityClass<Animator>(const char*);
class AudioBehaviour; template <> void RegisterUnityClass<AudioBehaviour>(const char*);
class AudioListener; template <> void RegisterUnityClass<AudioListener>(const char*);
class AudioSource; template <> void RegisterUnityClass<AudioSource>(const char*);
class AudioFilter; 
class AudioChorusFilter; 
class AudioDistortionFilter; 
class AudioEchoFilter; 
class AudioHighPassFilter; 
class AudioLowPassFilter; 
class AudioReverbFilter; 
class AudioReverbZone; 
class Camera; template <> void RegisterUnityClass<Camera>(const char*);
namespace UI { class Canvas; } template <> void RegisterUnityClass<UI::Canvas>(const char*);
namespace UI { class CanvasGroup; } template <> void RegisterUnityClass<UI::CanvasGroup>(const char*);
namespace Unity { class Cloth; } 
class Collider2D; template <> void RegisterUnityClass<Collider2D>(const char*);
class BoxCollider2D; 
class CapsuleCollider2D; 
class CircleCollider2D; 
class CompositeCollider2D; 
class EdgeCollider2D; 
class PolygonCollider2D; 
class TilemapCollider2D; 
class ConstantForce; 
class Effector2D; 
class AreaEffector2D; 
class BuoyancyEffector2D; 
class PlatformEffector2D; 
class PointEffector2D; 
class SurfaceEffector2D; 
class FlareLayer; template <> void RegisterUnityClass<FlareLayer>(const char*);
class GUIElement; template <> void RegisterUnityClass<GUIElement>(const char*);
namespace TextRenderingPrivate { class GUIText; } template <> void RegisterUnityClass<TextRenderingPrivate::GUIText>(const char*);
class GUITexture; 
class GUILayer; template <> void RegisterUnityClass<GUILayer>(const char*);
class GridLayout; 
class Grid; 
class Tilemap; 
class Halo; 
class HaloLayer; 
class IConstraint; 
class AimConstraint; 
class LookAtConstraint; 
class ParentConstraint; 
class PositionConstraint; 
class RotationConstraint; 
class ScaleConstraint; 
class Joint2D; 
class AnchoredJoint2D; 
class DistanceJoint2D; 
class FixedJoint2D; 
class FrictionJoint2D; 
class HingeJoint2D; 
class SliderJoint2D; 
class SpringJoint2D; 
class WheelJoint2D; 
class RelativeJoint2D; 
class TargetJoint2D; 
class LensFlare; 
class Light; template <> void RegisterUnityClass<Light>(const char*);
class LightProbeGroup; 
class LightProbeProxyVolume; 
class MonoBehaviour; template <> void RegisterUnityClass<MonoBehaviour>(const char*);
class NavMeshAgent; template <> void RegisterUnityClass<NavMeshAgent>(const char*);
class NavMeshObstacle; 
class OffMeshLink; 
class ParticleSystemForceField; 
class PhysicsUpdateBehaviour2D; 
class ConstantForce2D; 
class PlayableDirector; 
class Projector; 
class ReflectionProbe; template <> void RegisterUnityClass<ReflectionProbe>(const char*);
class Skybox; template <> void RegisterUnityClass<Skybox>(const char*);
class SortingGroup; 
class StreamingController; 
class Terrain; template <> void RegisterUnityClass<Terrain>(const char*);
class VideoPlayer; 
class VisualEffect; 
class WindZone; 
namespace UI { class CanvasRenderer; } template <> void RegisterUnityClass<UI::CanvasRenderer>(const char*);
class Collider; template <> void RegisterUnityClass<Collider>(const char*);
class BoxCollider; 
class CapsuleCollider; template <> void RegisterUnityClass<CapsuleCollider>(const char*);
class CharacterController; template <> void RegisterUnityClass<CharacterController>(const char*);
class MeshCollider; 
class SphereCollider; template <> void RegisterUnityClass<SphereCollider>(const char*);
class TerrainCollider; template <> void RegisterUnityClass<TerrainCollider>(const char*);
class WheelCollider; template <> void RegisterUnityClass<WheelCollider>(const char*);
namespace Unity { class Joint; } template <> void RegisterUnityClass<Unity::Joint>(const char*);
namespace Unity { class CharacterJoint; } 
namespace Unity { class ConfigurableJoint; } 
namespace Unity { class FixedJoint; } 
namespace Unity { class HingeJoint; } 
namespace Unity { class SpringJoint; } template <> void RegisterUnityClass<Unity::SpringJoint>(const char*);
class LODGroup; template <> void RegisterUnityClass<LODGroup>(const char*);
class MeshFilter; template <> void RegisterUnityClass<MeshFilter>(const char*);
class OcclusionArea; 
class OcclusionPortal; 
class ParticleSystem; template <> void RegisterUnityClass<ParticleSystem>(const char*);
class Renderer; template <> void RegisterUnityClass<Renderer>(const char*);
class BillboardRenderer; template <> void RegisterUnityClass<BillboardRenderer>(const char*);
class LineRenderer; 
class MeshRenderer; template <> void RegisterUnityClass<MeshRenderer>(const char*);
class ParticleSystemRenderer; template <> void RegisterUnityClass<ParticleSystemRenderer>(const char*);
class SkinnedMeshRenderer; template <> void RegisterUnityClass<SkinnedMeshRenderer>(const char*);
class SpriteMask; 
class SpriteRenderer; 
class SpriteShapeRenderer; 
class TilemapRenderer; 
class TrailRenderer; template <> void RegisterUnityClass<TrailRenderer>(const char*);
class VFXRenderer; 
class Rigidbody; template <> void RegisterUnityClass<Rigidbody>(const char*);
class Rigidbody2D; template <> void RegisterUnityClass<Rigidbody2D>(const char*);
namespace TextRenderingPrivate { class TextMesh; } 
class Transform; template <> void RegisterUnityClass<Transform>(const char*);
namespace UI { class RectTransform; } template <> void RegisterUnityClass<UI::RectTransform>(const char*);
class Tree; template <> void RegisterUnityClass<Tree>(const char*);
class GameObject; template <> void RegisterUnityClass<GameObject>(const char*);
class NamedObject; template <> void RegisterUnityClass<NamedObject>(const char*);
class AssetBundle; 
class AssetBundleManifest; 
class AudioMixer; 
class AudioMixerController; 
class AudioMixerGroup; 
class AudioMixerGroupController; 
class AudioMixerSnapshot; 
class AudioMixerSnapshotController; 
class Avatar; template <> void RegisterUnityClass<Avatar>(const char*);
class AvatarMask; 
class BillboardAsset; template <> void RegisterUnityClass<BillboardAsset>(const char*);
class ComputeShader; template <> void RegisterUnityClass<ComputeShader>(const char*);
class Flare; 
namespace TextRendering { class Font; } template <> void RegisterUnityClass<TextRendering::Font>(const char*);
class LightProbes; template <> void RegisterUnityClass<LightProbes>(const char*);
class LocalizationAsset; 
class Material; template <> void RegisterUnityClass<Material>(const char*);
class ProceduralMaterial; 
class Mesh; template <> void RegisterUnityClass<Mesh>(const char*);
class Motion; template <> void RegisterUnityClass<Motion>(const char*);
class AnimationClip; template <> void RegisterUnityClass<AnimationClip>(const char*);
class NavMeshData; template <> void RegisterUnityClass<NavMeshData>(const char*);
class OcclusionCullingData; 
class PhysicMaterial; 
class PhysicsMaterial2D; 
class PreloadData; template <> void RegisterUnityClass<PreloadData>(const char*);
class RuntimeAnimatorController; template <> void RegisterUnityClass<RuntimeAnimatorController>(const char*);
class AnimatorController; template <> void RegisterUnityClass<AnimatorController>(const char*);
class AnimatorOverrideController; template <> void RegisterUnityClass<AnimatorOverrideController>(const char*);
class SampleClip; template <> void RegisterUnityClass<SampleClip>(const char*);
class AudioClip; template <> void RegisterUnityClass<AudioClip>(const char*);
class Shader; template <> void RegisterUnityClass<Shader>(const char*);
class ShaderVariantCollection; 
class SpeedTreeWindAsset; template <> void RegisterUnityClass<SpeedTreeWindAsset>(const char*);
class Sprite; template <> void RegisterUnityClass<Sprite>(const char*);
class SpriteAtlas; template <> void RegisterUnityClass<SpriteAtlas>(const char*);
class SubstanceArchive; 
class TerrainData; template <> void RegisterUnityClass<TerrainData>(const char*);
class TerrainLayer; template <> void RegisterUnityClass<TerrainLayer>(const char*);
class TextAsset; template <> void RegisterUnityClass<TextAsset>(const char*);
class CGProgram; template <> void RegisterUnityClass<CGProgram>(const char*);
class MonoScript; template <> void RegisterUnityClass<MonoScript>(const char*);
class Texture; template <> void RegisterUnityClass<Texture>(const char*);
class BaseVideoTexture; 
class WebCamTexture; 
class CubemapArray; template <> void RegisterUnityClass<CubemapArray>(const char*);
class LowerResBlitTexture; template <> void RegisterUnityClass<LowerResBlitTexture>(const char*);
class ProceduralTexture; 
class RenderTexture; template <> void RegisterUnityClass<RenderTexture>(const char*);
class CustomRenderTexture; 
class SparseTexture; 
class Texture2D; template <> void RegisterUnityClass<Texture2D>(const char*);
class Cubemap; template <> void RegisterUnityClass<Cubemap>(const char*);
class Texture2DArray; template <> void RegisterUnityClass<Texture2DArray>(const char*);
class Texture3D; template <> void RegisterUnityClass<Texture3D>(const char*);
class VideoClip; 
class VisualEffectAsset; 
class GameManager; template <> void RegisterUnityClass<GameManager>(const char*);
class GlobalGameManager; template <> void RegisterUnityClass<GlobalGameManager>(const char*);
class AudioManager; template <> void RegisterUnityClass<AudioManager>(const char*);
class BuildSettings; template <> void RegisterUnityClass<BuildSettings>(const char*);
class DelayedCallManager; template <> void RegisterUnityClass<DelayedCallManager>(const char*);
class GraphicsSettings; template <> void RegisterUnityClass<GraphicsSettings>(const char*);
class InputManager; template <> void RegisterUnityClass<InputManager>(const char*);
class MonoManager; template <> void RegisterUnityClass<MonoManager>(const char*);
class NavMeshProjectSettings; template <> void RegisterUnityClass<NavMeshProjectSettings>(const char*);
class Physics2DSettings; template <> void RegisterUnityClass<Physics2DSettings>(const char*);
class PhysicsManager; template <> void RegisterUnityClass<PhysicsManager>(const char*);
class PlayerSettings; template <> void RegisterUnityClass<PlayerSettings>(const char*);
class QualitySettings; template <> void RegisterUnityClass<QualitySettings>(const char*);
class ResourceManager; template <> void RegisterUnityClass<ResourceManager>(const char*);
class RuntimeInitializeOnLoadManager; template <> void RegisterUnityClass<RuntimeInitializeOnLoadManager>(const char*);
class ScriptMapper; template <> void RegisterUnityClass<ScriptMapper>(const char*);
class StreamingManager; 
class TagManager; template <> void RegisterUnityClass<TagManager>(const char*);
class TimeManager; template <> void RegisterUnityClass<TimeManager>(const char*);
class UnityConnectSettings; template <> void RegisterUnityClass<UnityConnectSettings>(const char*);
class VFXManager; 
class LevelGameManager; template <> void RegisterUnityClass<LevelGameManager>(const char*);
class LightmapSettings; template <> void RegisterUnityClass<LightmapSettings>(const char*);
class NavMeshSettings; template <> void RegisterUnityClass<NavMeshSettings>(const char*);
class OcclusionCullingSettings; 
class RenderSettings; template <> void RegisterUnityClass<RenderSettings>(const char*);
class RenderPassAttachment; 

void RegisterAllClasses()
{
void RegisterBuiltinTypes();
RegisterBuiltinTypes();
	//Total: 103 non stripped classes
	//0. Behaviour
	RegisterUnityClass<Behaviour>("Core");
	//1. Unity::Component
	RegisterUnityClass<Unity::Component>("Core");
	//2. EditorExtension
	RegisterUnityClass<EditorExtension>("Core");
	//3. Camera
	RegisterUnityClass<Camera>("Core");
	//4. LowerResBlitTexture
	RegisterUnityClass<LowerResBlitTexture>("Core");
	//5. Texture
	RegisterUnityClass<Texture>("Core");
	//6. NamedObject
	RegisterUnityClass<NamedObject>("Core");
	//7. PreloadData
	RegisterUnityClass<PreloadData>("Core");
	//8. GUIElement
	RegisterUnityClass<GUIElement>("Core");
	//9. GUILayer
	RegisterUnityClass<GUILayer>("Core");
	//10. GameObject
	RegisterUnityClass<GameObject>("Core");
	//11. QualitySettings
	RegisterUnityClass<QualitySettings>("Core");
	//12. GlobalGameManager
	RegisterUnityClass<GlobalGameManager>("Core");
	//13. GameManager
	RegisterUnityClass<GameManager>("Core");
	//14. Renderer
	RegisterUnityClass<Renderer>("Core");
	//15. RenderSettings
	RegisterUnityClass<RenderSettings>("Core");
	//16. LevelGameManager
	RegisterUnityClass<LevelGameManager>("Core");
	//17. Shader
	RegisterUnityClass<Shader>("Core");
	//18. Material
	RegisterUnityClass<Material>("Core");
	//19. Light
	RegisterUnityClass<Light>("Core");
	//20. Skybox
	RegisterUnityClass<Skybox>("Core");
	//21. MeshFilter
	RegisterUnityClass<MeshFilter>("Core");
	//22. MeshRenderer
	RegisterUnityClass<MeshRenderer>("Core");
	//23. Mesh
	RegisterUnityClass<Mesh>("Core");
	//24. MonoBehaviour
	RegisterUnityClass<MonoBehaviour>("Core");
	//25. ReflectionProbe
	RegisterUnityClass<ReflectionProbe>("Core");
	//26. ComputeShader
	RegisterUnityClass<ComputeShader>("Core");
	//27. Texture2D
	RegisterUnityClass<Texture2D>("Core");
	//28. Cubemap
	RegisterUnityClass<Cubemap>("Core");
	//29. Texture3D
	RegisterUnityClass<Texture3D>("Core");
	//30. Texture2DArray
	RegisterUnityClass<Texture2DArray>("Core");
	//31. CubemapArray
	RegisterUnityClass<CubemapArray>("Core");
	//32. RenderTexture
	RegisterUnityClass<RenderTexture>("Core");
	//33. UI::RectTransform
	RegisterUnityClass<UI::RectTransform>("Core");
	//34. Transform
	RegisterUnityClass<Transform>("Core");
	//35. Sprite
	RegisterUnityClass<Sprite>("Core");
	//36. SpriteAtlas
	RegisterUnityClass<SpriteAtlas>("Core");
	//37. UI::Canvas
	RegisterUnityClass<UI::Canvas>("UI");
	//38. UI::CanvasGroup
	RegisterUnityClass<UI::CanvasGroup>("UI");
	//39. UI::CanvasRenderer
	RegisterUnityClass<UI::CanvasRenderer>("UI");
	//40. TextRenderingPrivate::GUIText
	RegisterUnityClass<TextRenderingPrivate::GUIText>("TextRendering");
	//41. TextRendering::Font
	RegisterUnityClass<TextRendering::Font>("TextRendering");
	//42. ParticleSystem
	RegisterUnityClass<ParticleSystem>("ParticleSystem");
	//43. ParticleSystemRenderer
	RegisterUnityClass<ParticleSystemRenderer>("ParticleSystem");
	//44. Rigidbody
	RegisterUnityClass<Rigidbody>("Physics");
	//45. Collider
	RegisterUnityClass<Collider>("Physics");
	//46. CharacterController
	RegisterUnityClass<CharacterController>("Physics");
	//47. CapsuleCollider
	RegisterUnityClass<CapsuleCollider>("Physics");
	//48. SphereCollider
	RegisterUnityClass<SphereCollider>("Physics");
	//49. Unity::Joint
	RegisterUnityClass<Unity::Joint>("Physics");
	//50. Unity::SpringJoint
	RegisterUnityClass<Unity::SpringJoint>("Physics");
	//51. WheelCollider
	RegisterUnityClass<WheelCollider>("Vehicles");
	//52. Animator
	RegisterUnityClass<Animator>("Animation");
	//53. AnimatorOverrideController
	RegisterUnityClass<AnimatorOverrideController>("Animation");
	//54. RuntimeAnimatorController
	RegisterUnityClass<RuntimeAnimatorController>("Animation");
	//55. Animation
	RegisterUnityClass<Animation>("Animation");
	//56. NavMeshAgent
	RegisterUnityClass<NavMeshAgent>("AI");
	//57. AudioClip
	RegisterUnityClass<AudioClip>("Audio");
	//58. SampleClip
	RegisterUnityClass<SampleClip>("Audio");
	//59. AudioListener
	RegisterUnityClass<AudioListener>("Audio");
	//60. AudioBehaviour
	RegisterUnityClass<AudioBehaviour>("Audio");
	//61. AudioSource
	RegisterUnityClass<AudioSource>("Audio");
	//62. Rigidbody2D
	RegisterUnityClass<Rigidbody2D>("Physics2D");
	//63. Collider2D
	RegisterUnityClass<Collider2D>("Physics2D");
	//64. Terrain
	RegisterUnityClass<Terrain>("Terrain");
	//65. TerrainData
	RegisterUnityClass<TerrainData>("Terrain");
	//66. FlareLayer
	RegisterUnityClass<FlareLayer>("Core");
	//67. TrailRenderer
	RegisterUnityClass<TrailRenderer>("Core");
	//68. TagManager
	RegisterUnityClass<TagManager>("Core");
	//69. GraphicsSettings
	RegisterUnityClass<GraphicsSettings>("Core");
	//70. DelayedCallManager
	RegisterUnityClass<DelayedCallManager>("Core");
	//71. InputManager
	RegisterUnityClass<InputManager>("Core");
	//72. TimeManager
	RegisterUnityClass<TimeManager>("Core");
	//73. BuildSettings
	RegisterUnityClass<BuildSettings>("Core");
	//74. PlayerSettings
	RegisterUnityClass<PlayerSettings>("Core");
	//75. ResourceManager
	RegisterUnityClass<ResourceManager>("Core");
	//76. RuntimeInitializeOnLoadManager
	RegisterUnityClass<RuntimeInitializeOnLoadManager>("Core");
	//77. ScriptMapper
	RegisterUnityClass<ScriptMapper>("Core");
	//78. PhysicsManager
	RegisterUnityClass<PhysicsManager>("Physics");
	//79. MonoManager
	RegisterUnityClass<MonoManager>("Core");
	//80. TextAsset
	RegisterUnityClass<TextAsset>("Core");
	//81. MonoScript
	RegisterUnityClass<MonoScript>("Core");
	//82. UnityConnectSettings
	RegisterUnityClass<UnityConnectSettings>("UnityConnect");
	//83. NavMeshProjectSettings
	RegisterUnityClass<NavMeshProjectSettings>("AI");
	//84. AudioManager
	RegisterUnityClass<AudioManager>("Audio");
	//85. Physics2DSettings
	RegisterUnityClass<Physics2DSettings>("Physics2D");
	//86. SkinnedMeshRenderer
	RegisterUnityClass<SkinnedMeshRenderer>("Core");
	//87. Avatar
	RegisterUnityClass<Avatar>("Animation");
	//88. SpeedTreeWindAsset
	RegisterUnityClass<SpeedTreeWindAsset>("Terrain");
	//89. LightProbes
	RegisterUnityClass<LightProbes>("Core");
	//90. LightmapSettings
	RegisterUnityClass<LightmapSettings>("Core");
	//91. BillboardAsset
	RegisterUnityClass<BillboardAsset>("Core");
	//92. BillboardRenderer
	RegisterUnityClass<BillboardRenderer>("Core");
	//93. LODGroup
	RegisterUnityClass<LODGroup>("Core");
	//94. Tree
	RegisterUnityClass<Tree>("Terrain");
	//95. CGProgram
	RegisterUnityClass<CGProgram>("Core");
	//96. Motion
	RegisterUnityClass<Motion>("Animation");
	//97. AnimationClip
	RegisterUnityClass<AnimationClip>("Animation");
	//98. AnimatorController
	RegisterUnityClass<AnimatorController>("Animation");
	//99. TerrainLayer
	RegisterUnityClass<TerrainLayer>("Terrain");
	//100. NavMeshData
	RegisterUnityClass<NavMeshData>("AI");
	//101. TerrainCollider
	RegisterUnityClass<TerrainCollider>("TerrainPhysics");
	//102. NavMeshSettings
	RegisterUnityClass<NavMeshSettings>("AI");

}
