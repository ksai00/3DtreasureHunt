struct ClassRegistrationContext;
void InvokeRegisterStaticallyLinkedModuleClasses(ClassRegistrationContext& context)
{
	// Do nothing (we're in stripping mode)
}

void RegisterStaticallyLinkedModulesGranular()
{
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

	void RegisterModule_TextRendering();
	RegisterModule_TextRendering();

	void RegisterModule_UI();
	RegisterModule_UI();

	void RegisterModule_IMGUI();
	RegisterModule_IMGUI();

}

void RegisterAllClasses()
{
	//Total: 73 classes
	//0. QualitySettings
	void RegisterClass_QualitySettings();
	RegisterClass_QualitySettings();

	//1. GlobalGameManager
	void RegisterClass_GlobalGameManager();
	RegisterClass_GlobalGameManager();

	//2. GameManager
	void RegisterClass_GameManager();
	RegisterClass_GameManager();

	//3. Mesh
	void RegisterClass_Mesh();
	RegisterClass_Mesh();

	//4. NamedObject
	void RegisterClass_NamedObject();
	RegisterClass_NamedObject();

	//5. EditorExtension
	void RegisterClass_EditorExtension();
	RegisterClass_EditorExtension();

	//6. Renderer
	void RegisterClass_Renderer();
	RegisterClass_Renderer();

	//7. Component
	void RegisterClass_Component();
	RegisterClass_Component();

	//8. Skybox
	void RegisterClass_Skybox();
	RegisterClass_Skybox();

	//9. Behaviour
	void RegisterClass_Behaviour();
	RegisterClass_Behaviour();

	//10. GUILayer
	void RegisterClass_GUILayer();
	RegisterClass_GUILayer();

	//11. Texture
	void RegisterClass_Texture();
	RegisterClass_Texture();

	//12. Texture2D
	void RegisterClass_Texture2D();
	RegisterClass_Texture2D();

	//13. RenderTexture
	void RegisterClass_RenderTexture();
	RegisterClass_RenderTexture();

	//14. RectTransform
	void RegisterClass_RectTransform();
	RegisterClass_RectTransform();

	//15. Transform
	void RegisterClass_Transform();
	RegisterClass_Transform();

	//16. Shader
	void RegisterClass_Shader();
	RegisterClass_Shader();

	//17. TextAsset
	void RegisterClass_TextAsset();
	RegisterClass_TextAsset();

	//18. Material
	void RegisterClass_Material();
	RegisterClass_Material();

	//19. Sprite
	void RegisterClass_Sprite();
	RegisterClass_Sprite();

	//20. Camera
	void RegisterClass_Camera();
	RegisterClass_Camera();

	//21. MonoBehaviour
	void RegisterClass_MonoBehaviour();
	RegisterClass_MonoBehaviour();

	//22. Light
	void RegisterClass_Light();
	RegisterClass_Light();

	//23. GameObject
	void RegisterClass_GameObject();
	RegisterClass_GameObject();

	//24. ParticleSystem
	void RegisterClass_ParticleSystem();
	RegisterClass_ParticleSystem();

	//25. Rigidbody
	void RegisterClass_Rigidbody();
	RegisterClass_Rigidbody();

	//26. Joint
	void RegisterClass_Joint();
	RegisterClass_Joint();

	//27. SpringJoint
	void RegisterClass_SpringJoint();
	RegisterClass_SpringJoint();

	//28. Collider
	void RegisterClass_Collider();
	RegisterClass_Collider();

	//29. Collider2D
	void RegisterClass_Collider2D();
	RegisterClass_Collider2D();

	//30. AudioClip
	void RegisterClass_AudioClip();
	RegisterClass_AudioClip();

	//31. SampleClip
	void RegisterClass_SampleClip();
	RegisterClass_SampleClip();

	//32. Animation
	void RegisterClass_Animation();
	RegisterClass_Animation();

	//33. Animator
	void RegisterClass_Animator();
	RegisterClass_Animator();

	//34. DirectorPlayer
	void RegisterClass_DirectorPlayer();
	RegisterClass_DirectorPlayer();

	//35. GUIText
	void RegisterClass_GUIText();
	RegisterClass_GUIText();

	//36. GUIElement
	void RegisterClass_GUIElement();
	RegisterClass_GUIElement();

	//37. Font
	void RegisterClass_Font();
	RegisterClass_Font();

	//38. Canvas
	void RegisterClass_Canvas();
	RegisterClass_Canvas();

	//39. CanvasGroup
	void RegisterClass_CanvasGroup();
	RegisterClass_CanvasGroup();

	//40. CanvasRenderer
	void RegisterClass_CanvasRenderer();
	RegisterClass_CanvasRenderer();

	//41. SpriteRenderer
	void RegisterClass_SpriteRenderer();
	RegisterClass_SpriteRenderer();

	//42. RuntimeAnimatorController
	void RegisterClass_RuntimeAnimatorController();
	RegisterClass_RuntimeAnimatorController();

	//43. FlareLayer
	void RegisterClass_FlareLayer();
	RegisterClass_FlareLayer();

	//44. PreloadData
	void RegisterClass_PreloadData();
	RegisterClass_PreloadData();

	//45. Cubemap
	void RegisterClass_Cubemap();
	RegisterClass_Cubemap();

	//46. Texture3D
	void RegisterClass_Texture3D();
	RegisterClass_Texture3D();

	//47. LevelGameManager
	void RegisterClass_LevelGameManager();
	RegisterClass_LevelGameManager();

	//48. TimeManager
	void RegisterClass_TimeManager();
	RegisterClass_TimeManager();

	//49. AudioManager
	void RegisterClass_AudioManager();
	RegisterClass_AudioManager();

	//50. InputManager
	void RegisterClass_InputManager();
	RegisterClass_InputManager();

	//51. Physics2DSettings
	void RegisterClass_Physics2DSettings();
	RegisterClass_Physics2DSettings();

	//52. MeshRenderer
	void RegisterClass_MeshRenderer();
	RegisterClass_MeshRenderer();

	//53. GraphicsSettings
	void RegisterClass_GraphicsSettings();
	RegisterClass_GraphicsSettings();

	//54. MeshFilter
	void RegisterClass_MeshFilter();
	RegisterClass_MeshFilter();

	//55. PhysicsManager
	void RegisterClass_PhysicsManager();
	RegisterClass_PhysicsManager();

	//56. MeshCollider
	void RegisterClass_MeshCollider();
	RegisterClass_MeshCollider();

	//57. BoxCollider
	void RegisterClass_BoxCollider();
	RegisterClass_BoxCollider();

	//58. TagManager
	void RegisterClass_TagManager();
	RegisterClass_TagManager();

	//59. AudioListener
	void RegisterClass_AudioListener();
	RegisterClass_AudioListener();

	//60. AudioBehaviour
	void RegisterClass_AudioBehaviour();
	RegisterClass_AudioBehaviour();

	//61. ScriptMapper
	void RegisterClass_ScriptMapper();
	RegisterClass_ScriptMapper();

	//62. DelayedCallManager
	void RegisterClass_DelayedCallManager();
	RegisterClass_DelayedCallManager();

	//63. RenderSettings
	void RegisterClass_RenderSettings();
	RegisterClass_RenderSettings();

	//64. MonoScript
	void RegisterClass_MonoScript();
	RegisterClass_MonoScript();

	//65. MonoManager
	void RegisterClass_MonoManager();
	RegisterClass_MonoManager();

	//66. PlayerSettings
	void RegisterClass_PlayerSettings();
	RegisterClass_PlayerSettings();

	//67. SphereCollider
	void RegisterClass_SphereCollider();
	RegisterClass_SphereCollider();

	//68. BuildSettings
	void RegisterClass_BuildSettings();
	RegisterClass_BuildSettings();

	//69. ResourceManager
	void RegisterClass_ResourceManager();
	RegisterClass_ResourceManager();

	//70. LightmapSettings
	void RegisterClass_LightmapSettings();
	RegisterClass_LightmapSettings();

	//71. ParticleSystemRenderer
	void RegisterClass_ParticleSystemRenderer();
	RegisterClass_ParticleSystemRenderer();

	//72. RuntimeInitializeOnLoadManager
	void RegisterClass_RuntimeInitializeOnLoadManager();
	RegisterClass_RuntimeInitializeOnLoadManager();

}
