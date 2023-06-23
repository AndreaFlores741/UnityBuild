extern "C" void RegisterStaticallyLinkedModulesGranular()
{
	void RegisterModule_SharedInternals();
	RegisterModule_SharedInternals();

	void RegisterModule_Core();
	RegisterModule_Core();

	void RegisterModule_AI();
	RegisterModule_AI();

	void RegisterModule_AndroidJNI();
	RegisterModule_AndroidJNI();

	void RegisterModule_Animation();
	RegisterModule_Animation();

	void RegisterModule_AssetBundle();
	RegisterModule_AssetBundle();

	void RegisterModule_Audio();
	RegisterModule_Audio();

	void RegisterModule_Director();
	RegisterModule_Director();

	void RegisterModule_GameCenter();
	RegisterModule_GameCenter();

	void RegisterModule_HotReload();
	RegisterModule_HotReload();

	void RegisterModule_ImageConversion();
	RegisterModule_ImageConversion();

	void RegisterModule_IMGUI();
	RegisterModule_IMGUI();

	void RegisterModule_Input();
	RegisterModule_Input();

	void RegisterModule_InputLegacy();
	RegisterModule_InputLegacy();

	void RegisterModule_JSONSerialize();
	RegisterModule_JSONSerialize();

	void RegisterModule_ParticleSystem();
	RegisterModule_ParticleSystem();

	void RegisterModule_Physics();
	RegisterModule_Physics();

	void RegisterModule_Physics2D();
	RegisterModule_Physics2D();

	void RegisterModule_RuntimeInitializeOnLoadManagerInitializer();
	RegisterModule_RuntimeInitializeOnLoadManagerInitializer();

	void RegisterModule_ScreenCapture();
	RegisterModule_ScreenCapture();

	void RegisterModule_SpriteMask();
	RegisterModule_SpriteMask();

	void RegisterModule_SpriteShape();
	RegisterModule_SpriteShape();

	void RegisterModule_Subsystems();
	RegisterModule_Subsystems();

	void RegisterModule_Terrain();
	RegisterModule_Terrain();

	void RegisterModule_TerrainPhysics();
	RegisterModule_TerrainPhysics();

	void RegisterModule_TextRendering();
	RegisterModule_TextRendering();

	void RegisterModule_TextCoreFontEngine();
	RegisterModule_TextCoreFontEngine();

	void RegisterModule_TextCoreTextEngine();
	RegisterModule_TextCoreTextEngine();

	void RegisterModule_TLS();
	RegisterModule_TLS();

	void RegisterModule_UI();
	RegisterModule_UI();

	void RegisterModule_UIElementsNative();
	RegisterModule_UIElementsNative();

	void RegisterModule_UIElements();
	RegisterModule_UIElements();

	void RegisterModule_UnityWebRequest();
	RegisterModule_UnityWebRequest();

	void RegisterModule_UnityWebRequestAssetBundle();
	RegisterModule_UnityWebRequestAssetBundle();

	void RegisterModule_UnityWebRequestTexture();
	RegisterModule_UnityWebRequestTexture();

	void RegisterModule_Video();
	RegisterModule_Video();

	void RegisterModule_XR();
	RegisterModule_XR();

	void RegisterModule_VR();
	RegisterModule_VR();

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
namespace Unity { class ArticulationBody; } 
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
class CircleCollider2D; template <> void RegisterUnityClass<CircleCollider2D>(const char*);
class CompositeCollider2D; template <> void RegisterUnityClass<CompositeCollider2D>(const char*);
class CustomCollider2D; 
class EdgeCollider2D; template <> void RegisterUnityClass<EdgeCollider2D>(const char*);
class PolygonCollider2D; template <> void RegisterUnityClass<PolygonCollider2D>(const char*);
class TilemapCollider2D; 
class ConstantForce; 
class Effector2D; 
class AreaEffector2D; 
class BuoyancyEffector2D; 
class PlatformEffector2D; 
class PointEffector2D; 
class SurfaceEffector2D; 
class FlareLayer; 
class GridLayout; 
class Grid; 
class Tilemap; 
class Halo; 
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
class PlayableDirector; template <> void RegisterUnityClass<PlayableDirector>(const char*);
class Projector; 
class ReflectionProbe; template <> void RegisterUnityClass<ReflectionProbe>(const char*);
class Skybox; template <> void RegisterUnityClass<Skybox>(const char*);
class SortingGroup; 
class StreamingController; 
class Terrain; template <> void RegisterUnityClass<Terrain>(const char*);
class VideoPlayer; template <> void RegisterUnityClass<VideoPlayer>(const char*);
class VisualEffect; 
class WindZone; 
namespace UI { class CanvasRenderer; } template <> void RegisterUnityClass<UI::CanvasRenderer>(const char*);
class Collider; template <> void RegisterUnityClass<Collider>(const char*);
class BoxCollider; template <> void RegisterUnityClass<BoxCollider>(const char*);
class CapsuleCollider; template <> void RegisterUnityClass<CapsuleCollider>(const char*);
class CharacterController; template <> void RegisterUnityClass<CharacterController>(const char*);
class MeshCollider; template <> void RegisterUnityClass<MeshCollider>(const char*);
class SphereCollider; template <> void RegisterUnityClass<SphereCollider>(const char*);
class TerrainCollider; template <> void RegisterUnityClass<TerrainCollider>(const char*);
class WheelCollider; 
namespace Unity { class Joint; } 
namespace Unity { class CharacterJoint; } 
namespace Unity { class ConfigurableJoint; } 
namespace Unity { class FixedJoint; } 
namespace Unity { class HingeJoint; } 
namespace Unity { class SpringJoint; } 
class LODGroup; 
class MeshFilter; template <> void RegisterUnityClass<MeshFilter>(const char*);
class OcclusionArea; 
class OcclusionPortal; 
class ParticleSystem; template <> void RegisterUnityClass<ParticleSystem>(const char*);
class Renderer; template <> void RegisterUnityClass<Renderer>(const char*);
class BillboardRenderer; 
class LineRenderer; template <> void RegisterUnityClass<LineRenderer>(const char*);
class MeshRenderer; template <> void RegisterUnityClass<MeshRenderer>(const char*);
class ParticleSystemRenderer; template <> void RegisterUnityClass<ParticleSystemRenderer>(const char*);
class SkinnedMeshRenderer; template <> void RegisterUnityClass<SkinnedMeshRenderer>(const char*);
class SpriteMask; template <> void RegisterUnityClass<SpriteMask>(const char*);
class SpriteRenderer; template <> void RegisterUnityClass<SpriteRenderer>(const char*);
class SpriteShapeRenderer; template <> void RegisterUnityClass<SpriteShapeRenderer>(const char*);
class TilemapRenderer; 
class TrailRenderer; template <> void RegisterUnityClass<TrailRenderer>(const char*);
class VFXRenderer; 
class Rigidbody; template <> void RegisterUnityClass<Rigidbody>(const char*);
class Rigidbody2D; template <> void RegisterUnityClass<Rigidbody2D>(const char*);
namespace TextRenderingPrivate { class TextMesh; } template <> void RegisterUnityClass<TextRenderingPrivate::TextMesh>(const char*);
class Transform; template <> void RegisterUnityClass<Transform>(const char*);
namespace UI { class RectTransform; } template <> void RegisterUnityClass<UI::RectTransform>(const char*);
class Tree; 
class GameObject; template <> void RegisterUnityClass<GameObject>(const char*);
class NamedObject; template <> void RegisterUnityClass<NamedObject>(const char*);
class AssetBundle; template <> void RegisterUnityClass<AssetBundle>(const char*);
class AssetBundleManifest; 
class AudioMixer; template <> void RegisterUnityClass<AudioMixer>(const char*);
class AudioMixerController; 
class AudioMixerGroup; 
class AudioMixerGroupController; 
class AudioMixerSnapshot; 
class AudioMixerSnapshotController; 
class Avatar; template <> void RegisterUnityClass<Avatar>(const char*);
class AvatarMask; template <> void RegisterUnityClass<AvatarMask>(const char*);
class BillboardAsset; 
class ComputeShader; template <> void RegisterUnityClass<ComputeShader>(const char*);
class Flare; template <> void RegisterUnityClass<Flare>(const char*);
namespace TextRendering { class Font; } template <> void RegisterUnityClass<TextRendering::Font>(const char*);
class LightProbes; template <> void RegisterUnityClass<LightProbes>(const char*);
class LightingSettings; template <> void RegisterUnityClass<LightingSettings>(const char*);
class LocalizationAsset; 
class Material; template <> void RegisterUnityClass<Material>(const char*);
class ProceduralMaterial; 
class Mesh; template <> void RegisterUnityClass<Mesh>(const char*);
class Motion; template <> void RegisterUnityClass<Motion>(const char*);
class AnimationClip; template <> void RegisterUnityClass<AnimationClip>(const char*);
class NavMeshData; 
class OcclusionCullingData; 
class PhysicMaterial; template <> void RegisterUnityClass<PhysicMaterial>(const char*);
class PhysicsMaterial2D; 
class PreloadData; template <> void RegisterUnityClass<PreloadData>(const char*);
class RayTracingShader; 
class RuntimeAnimatorController; template <> void RegisterUnityClass<RuntimeAnimatorController>(const char*);
class AnimatorController; template <> void RegisterUnityClass<AnimatorController>(const char*);
class AnimatorOverrideController; template <> void RegisterUnityClass<AnimatorOverrideController>(const char*);
class SampleClip; template <> void RegisterUnityClass<SampleClip>(const char*);
class AudioClip; template <> void RegisterUnityClass<AudioClip>(const char*);
class Shader; template <> void RegisterUnityClass<Shader>(const char*);
class ShaderVariantCollection; 
class SpeedTreeWindAsset; 
class Sprite; template <> void RegisterUnityClass<Sprite>(const char*);
class SpriteAtlas; template <> void RegisterUnityClass<SpriteAtlas>(const char*);
class SubstanceArchive; 
class TerrainData; template <> void RegisterUnityClass<TerrainData>(const char*);
class TerrainLayer; 
class TextAsset; template <> void RegisterUnityClass<TextAsset>(const char*);
class MonoScript; template <> void RegisterUnityClass<MonoScript>(const char*);
class Texture; template <> void RegisterUnityClass<Texture>(const char*);
class BaseVideoTexture; template <> void RegisterUnityClass<BaseVideoTexture>(const char*);
class WebCamTexture; template <> void RegisterUnityClass<WebCamTexture>(const char*);
class CubemapArray; template <> void RegisterUnityClass<CubemapArray>(const char*);
class LowerResBlitTexture; template <> void RegisterUnityClass<LowerResBlitTexture>(const char*);
class MovieTexture; 
class ProceduralTexture; 
class RenderTexture; template <> void RegisterUnityClass<RenderTexture>(const char*);
class CustomRenderTexture; 
class SparseTexture; 
class Texture2D; template <> void RegisterUnityClass<Texture2D>(const char*);
class Cubemap; template <> void RegisterUnityClass<Cubemap>(const char*);
class Texture2DArray; template <> void RegisterUnityClass<Texture2DArray>(const char*);
class Texture3D; template <> void RegisterUnityClass<Texture3D>(const char*);
class VideoClip; template <> void RegisterUnityClass<VideoClip>(const char*);
class VisualEffectObject; 
class VisualEffectAsset; 
class VisualEffectSubgraph; 
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
class ShaderNameRegistry; template <> void RegisterUnityClass<ShaderNameRegistry>(const char*);
class StreamingManager; 
class TagManager; template <> void RegisterUnityClass<TagManager>(const char*);
class TimeManager; template <> void RegisterUnityClass<TimeManager>(const char*);
class UnityConnectSettings; 
class VFXManager; 
class LevelGameManager; template <> void RegisterUnityClass<LevelGameManager>(const char*);
class LightmapSettings; template <> void RegisterUnityClass<LightmapSettings>(const char*);
class NavMeshSettings; template <> void RegisterUnityClass<NavMeshSettings>(const char*);
class OcclusionCullingSettings; 
class RenderSettings; template <> void RegisterUnityClass<RenderSettings>(const char*);

void RegisterAllClasses()
{
void RegisterBuiltinTypes();
RegisterBuiltinTypes();
	//Total: 110 non stripped classes
	//0. NavMeshAgent
	RegisterUnityClass<NavMeshAgent>("AI");
	//1. NavMeshProjectSettings
	RegisterUnityClass<NavMeshProjectSettings>("AI");
	//2. NavMeshSettings
	RegisterUnityClass<NavMeshSettings>("AI");
	//3. Animation
	RegisterUnityClass<Animation>("Animation");
	//4. AnimationClip
	RegisterUnityClass<AnimationClip>("Animation");
	//5. Animator
	RegisterUnityClass<Animator>("Animation");
	//6. AnimatorController
	RegisterUnityClass<AnimatorController>("Animation");
	//7. AnimatorOverrideController
	RegisterUnityClass<AnimatorOverrideController>("Animation");
	//8. Avatar
	RegisterUnityClass<Avatar>("Animation");
	//9. AvatarMask
	RegisterUnityClass<AvatarMask>("Animation");
	//10. Motion
	RegisterUnityClass<Motion>("Animation");
	//11. RuntimeAnimatorController
	RegisterUnityClass<RuntimeAnimatorController>("Animation");
	//12. AssetBundle
	RegisterUnityClass<AssetBundle>("AssetBundle");
	//13. AudioBehaviour
	RegisterUnityClass<AudioBehaviour>("Audio");
	//14. AudioClip
	RegisterUnityClass<AudioClip>("Audio");
	//15. AudioListener
	RegisterUnityClass<AudioListener>("Audio");
	//16. AudioManager
	RegisterUnityClass<AudioManager>("Audio");
	//17. AudioMixer
	RegisterUnityClass<AudioMixer>("Audio");
	//18. AudioSource
	RegisterUnityClass<AudioSource>("Audio");
	//19. BaseVideoTexture
	RegisterUnityClass<BaseVideoTexture>("Audio");
	//20. SampleClip
	RegisterUnityClass<SampleClip>("Audio");
	//21. WebCamTexture
	RegisterUnityClass<WebCamTexture>("Audio");
	//22. Behaviour
	RegisterUnityClass<Behaviour>("Core");
	//23. BuildSettings
	RegisterUnityClass<BuildSettings>("Core");
	//24. Camera
	RegisterUnityClass<Camera>("Core");
	//25. Unity::Component
	RegisterUnityClass<Unity::Component>("Core");
	//26. ComputeShader
	RegisterUnityClass<ComputeShader>("Core");
	//27. Cubemap
	RegisterUnityClass<Cubemap>("Core");
	//28. CubemapArray
	RegisterUnityClass<CubemapArray>("Core");
	//29. DelayedCallManager
	RegisterUnityClass<DelayedCallManager>("Core");
	//30. EditorExtension
	RegisterUnityClass<EditorExtension>("Core");
	//31. Flare
	RegisterUnityClass<Flare>("Core");
	//32. GameManager
	RegisterUnityClass<GameManager>("Core");
	//33. GameObject
	RegisterUnityClass<GameObject>("Core");
	//34. GlobalGameManager
	RegisterUnityClass<GlobalGameManager>("Core");
	//35. GraphicsSettings
	RegisterUnityClass<GraphicsSettings>("Core");
	//36. InputManager
	RegisterUnityClass<InputManager>("Core");
	//37. LevelGameManager
	RegisterUnityClass<LevelGameManager>("Core");
	//38. Light
	RegisterUnityClass<Light>("Core");
	//39. LightingSettings
	RegisterUnityClass<LightingSettings>("Core");
	//40. LightmapSettings
	RegisterUnityClass<LightmapSettings>("Core");
	//41. LightProbes
	RegisterUnityClass<LightProbes>("Core");
	//42. LineRenderer
	RegisterUnityClass<LineRenderer>("Core");
	//43. LowerResBlitTexture
	RegisterUnityClass<LowerResBlitTexture>("Core");
	//44. Material
	RegisterUnityClass<Material>("Core");
	//45. Mesh
	RegisterUnityClass<Mesh>("Core");
	//46. MeshFilter
	RegisterUnityClass<MeshFilter>("Core");
	//47. MeshRenderer
	RegisterUnityClass<MeshRenderer>("Core");
	//48. MonoBehaviour
	RegisterUnityClass<MonoBehaviour>("Core");
	//49. MonoManager
	RegisterUnityClass<MonoManager>("Core");
	//50. MonoScript
	RegisterUnityClass<MonoScript>("Core");
	//51. NamedObject
	RegisterUnityClass<NamedObject>("Core");
	//52. Object
	//Skipping Object
	//53. PlayerSettings
	RegisterUnityClass<PlayerSettings>("Core");
	//54. PreloadData
	RegisterUnityClass<PreloadData>("Core");
	//55. QualitySettings
	RegisterUnityClass<QualitySettings>("Core");
	//56. UI::RectTransform
	RegisterUnityClass<UI::RectTransform>("Core");
	//57. ReflectionProbe
	RegisterUnityClass<ReflectionProbe>("Core");
	//58. Renderer
	RegisterUnityClass<Renderer>("Core");
	//59. RenderSettings
	RegisterUnityClass<RenderSettings>("Core");
	//60. RenderTexture
	RegisterUnityClass<RenderTexture>("Core");
	//61. ResourceManager
	RegisterUnityClass<ResourceManager>("Core");
	//62. RuntimeInitializeOnLoadManager
	RegisterUnityClass<RuntimeInitializeOnLoadManager>("Core");
	//63. Shader
	RegisterUnityClass<Shader>("Core");
	//64. ShaderNameRegistry
	RegisterUnityClass<ShaderNameRegistry>("Core");
	//65. SkinnedMeshRenderer
	RegisterUnityClass<SkinnedMeshRenderer>("Core");
	//66. Skybox
	RegisterUnityClass<Skybox>("Core");
	//67. Sprite
	RegisterUnityClass<Sprite>("Core");
	//68. SpriteAtlas
	RegisterUnityClass<SpriteAtlas>("Core");
	//69. SpriteRenderer
	RegisterUnityClass<SpriteRenderer>("Core");
	//70. TagManager
	RegisterUnityClass<TagManager>("Core");
	//71. TextAsset
	RegisterUnityClass<TextAsset>("Core");
	//72. Texture
	RegisterUnityClass<Texture>("Core");
	//73. Texture2D
	RegisterUnityClass<Texture2D>("Core");
	//74. Texture2DArray
	RegisterUnityClass<Texture2DArray>("Core");
	//75. Texture3D
	RegisterUnityClass<Texture3D>("Core");
	//76. TimeManager
	RegisterUnityClass<TimeManager>("Core");
	//77. TrailRenderer
	RegisterUnityClass<TrailRenderer>("Core");
	//78. Transform
	RegisterUnityClass<Transform>("Core");
	//79. PlayableDirector
	RegisterUnityClass<PlayableDirector>("Director");
	//80. ParticleSystem
	RegisterUnityClass<ParticleSystem>("ParticleSystem");
	//81. ParticleSystemRenderer
	RegisterUnityClass<ParticleSystemRenderer>("ParticleSystem");
	//82. BoxCollider
	RegisterUnityClass<BoxCollider>("Physics");
	//83. CapsuleCollider
	RegisterUnityClass<CapsuleCollider>("Physics");
	//84. CharacterController
	RegisterUnityClass<CharacterController>("Physics");
	//85. Collider
	RegisterUnityClass<Collider>("Physics");
	//86. MeshCollider
	RegisterUnityClass<MeshCollider>("Physics");
	//87. PhysicMaterial
	RegisterUnityClass<PhysicMaterial>("Physics");
	//88. PhysicsManager
	RegisterUnityClass<PhysicsManager>("Physics");
	//89. Rigidbody
	RegisterUnityClass<Rigidbody>("Physics");
	//90. SphereCollider
	RegisterUnityClass<SphereCollider>("Physics");
	//91. CircleCollider2D
	RegisterUnityClass<CircleCollider2D>("Physics2D");
	//92. Collider2D
	RegisterUnityClass<Collider2D>("Physics2D");
	//93. CompositeCollider2D
	RegisterUnityClass<CompositeCollider2D>("Physics2D");
	//94. EdgeCollider2D
	RegisterUnityClass<EdgeCollider2D>("Physics2D");
	//95. Physics2DSettings
	RegisterUnityClass<Physics2DSettings>("Physics2D");
	//96. PolygonCollider2D
	RegisterUnityClass<PolygonCollider2D>("Physics2D");
	//97. Rigidbody2D
	RegisterUnityClass<Rigidbody2D>("Physics2D");
	//98. SpriteMask
	RegisterUnityClass<SpriteMask>("SpriteMask");
	//99. SpriteShapeRenderer
	RegisterUnityClass<SpriteShapeRenderer>("SpriteShape");
	//100. Terrain
	RegisterUnityClass<Terrain>("Terrain");
	//101. TerrainData
	RegisterUnityClass<TerrainData>("Terrain");
	//102. TerrainCollider
	RegisterUnityClass<TerrainCollider>("TerrainPhysics");
	//103. TextRendering::Font
	RegisterUnityClass<TextRendering::Font>("TextRendering");
	//104. TextRenderingPrivate::TextMesh
	RegisterUnityClass<TextRenderingPrivate::TextMesh>("TextRendering");
	//105. UI::Canvas
	RegisterUnityClass<UI::Canvas>("UI");
	//106. UI::CanvasGroup
	RegisterUnityClass<UI::CanvasGroup>("UI");
	//107. UI::CanvasRenderer
	RegisterUnityClass<UI::CanvasRenderer>("UI");
	//108. VideoClip
	RegisterUnityClass<VideoClip>("Video");
	//109. VideoPlayer
	RegisterUnityClass<VideoPlayer>("Video");

}
