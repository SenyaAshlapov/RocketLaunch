#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


struct VirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct GenericVirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct GenericInterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct InvokerActionInvoker0
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj)
	{
		method->invoker_method(methodPtr, method, obj, NULL, NULL);
	}
};
template <typename T1>
struct InvokerActionInvoker1
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1)
	{
		void* params[1] = { &p1 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1>
struct InvokerActionInvoker1<T1*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2;
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2)
	{
		void* params[2] = { p1, &p2 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};

// System.Action`1<TMPro.TMP_TextInfo>
struct Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180;
// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset>
struct Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C;
// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset>
struct Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5;
// System.Collections.Generic.List`1<BaseData>
struct List_1_t18BD6E268F9F6583CEEE974C0C08EF6E26DCA9D7;
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19;
// System.Collections.Generic.List`1<LevelData>
struct List_1_t5D51C2F548F7E4364A14BB81D41C0CAE0A900E0A;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<RocketPartData>
struct List_1_tD33F0782DD5C792201F436775D584D14E82EAE5C;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// TMPro.TMP_TextProcessingStack`1<System.Int32>[]
struct TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2;
// BaseData[]
struct BaseDataU5BU5D_tB11F26CAA318A3DF37068818E558FC6EA96A3940;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// UnityEngine.Color32[]
struct Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259;
// UnityEngine.ContactPoint2D[]
struct ContactPoint2DU5BU5D_t427621BF8902AE33C86E7BF384D9B2B5B781F949;
// System.Decimal[]
struct DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// TMPro.FontWeight[]
struct FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA;
// TMPro.HighlightState[]
struct HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622;
// TMPro.HorizontalAlignmentOptions[]
struct HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// LevelData[]
struct LevelDataU5BU5D_t1F77318E13E41A51407DA0EF55EAFF9B21A5C9D9;
// UnityEngine.Material[]
struct MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D;
// TMPro.MaterialReference[]
struct MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// TMPro.RichTextTagAttribute[]
struct RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D;
// RocketPartData[]
struct RocketPartDataU5BU5D_t0325E97AA61FCD2E250EB02856979AAF10C7BF6D;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// TMPro.TMP_CharacterInfo[]
struct TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99;
// TMPro.TMP_ColorGradient[]
struct TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F;
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// TMPro.WordWrapState[]
struct WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9;
// TMPro.TMP_Text/UnicodeChar[]
struct UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5;
// UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// UnityEngine.Audio.AudioMixer
struct AudioMixer_tE2E8D79241711CDF9AB428C7FB96A35D80E40B04;
// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299;
// Base
struct Base_tB0E39575E6C88869B432ADD314CBDC55F04FAECB;
// BaseCamera
struct BaseCamera_t29BC3F9897A65213D2D9A5EC36D83751BABDD9B5;
// BaseData
struct BaseData_t5144136E89F73ED714F412780B5FC9AD12F42B90;
// BaseStore
struct BaseStore_t83AB0F9340CBCB63C4FB015CED41A9BCD629E2CB;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// Cell
struct Cell_t88832599049D1ADACE41CE1CF9C147304CF76D5A;
// CloseButton
struct CloseButton_t709E9B0B9178C798AFD2FC1ACB7AA5E86AA734B0;
// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76;
// UnityEngine.Collision2D
struct Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// Control
struct Control_t173E621579F19553D3CDA3C97DA9068EFF1C9694;
// Controller
struct Controller_t080F3A02FE42D755CC6A8B605F85CA157ED61BB9;
// Deflector
struct Deflector_t1F58E4F5F11EE15B7C7A869008F0B14BAC192E54;
// DeflectorData
struct DeflectorData_t6B09A69A7FF8BEF1E1CC861DDABDC15E9A8318A5;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// DestroyState
struct DestroyState_t604C1F481A0FC76542E54D449FBBE63DDBEBCC4B;
// Engine
struct Engine_t59D31EC59AD8AAF189236F53F6E5B083856B0F00;
// EngineData
struct EngineData_t82D35F92377644522DEBEADE8F95040A3F65C6AA;
// Events
struct Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F;
// Explosion
struct Explosion_t75EBC696AB674B02BDDEA9D47C842389FD72C847;
// FinishLevel
struct FinishLevel_tACFA3010643E0E036858BB5967D7D9006954B268;
// FinishState
struct FinishState_t4564B3253E31DEEA3C919DF87A20BBDDB888198D;
// UnityEngine.UI.FontData
struct FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.Gradient
struct Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// IState
struct IState_tCEB6CB011AADE266AD08F5538B1A1593D7E29CA0;
// TMPro.ITextPreprocessor
struct ITextPreprocessor_tDBB49C8B68D7B80E8D233B9D9666C43981EFAAB9;
// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E;
// InformationWindow
struct InformationWindow_tCE1FE4060843C189EFCE677746B85DB140C906B1;
// Launch
struct Launch_t52BE88240575DDC0FBF94BD3F933E375864CF2C3;
// LaunchingState
struct LaunchingState_t7AA2A699C342C794CCABDE103D030DAF663CFF7D;
// UnityEngine.UI.LayoutElement
struct LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A;
// Level
struct Level_t1CED3B73CCB94716BF67A03B39D9DE9A991FD5A1;
// LevelCell
struct LevelCell_tADC4647C88211220C302069A345C4675278773CB;
// LevelData
struct LevelData_tE6EAE053C277D3E4ED073363F0BF24BDBADFC4D5;
// LevelMenu
struct LevelMenu_t6891BFAF859BCE6FD3FC107B0A40B48DFF968D8A;
// LevelSaverLoader
struct LevelSaverLoader_t9A00927063FF8A8DEFDFDDA5D0BA47688D4D2BAF;
// UnityEngine.Light
struct Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3;
// LoadScreen
struct LoadScreen_t84A9FD098EB6D41345E4EC1D7B31DFFA3947B3D3;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// Menu
struct Menu_t818E8DA587A0E558DE9BC83947BABC9A6FDD0C05;
// MenuBudget
struct MenuBudget_t85890A4C72C1B046830CF1AB2A798553120D4792;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// MissionInformationWindow
struct MissionInformationWindow_tCAD9D85E87544887EB8EE5A089D3E2C87556D0AF;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// Monye
struct Monye_tD7CE1445FFBC575D6656B0F71D4B793D4DA248B5;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// Plumage
struct Plumage_tE14F878A24757929120FE226D2268E486A8384F9;
// PlumageData
struct PlumageData_tF8E9C197181F7308588184A8236BFA6838D26F4F;
// PreparationState
struct PreparationState_t308D1841187A356B256D8B9067F63E1E79A3FF82;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// UnityEngine.Rigidbody
struct Rigidbody_t268697F5A994213ED97393309870968BC1C7393C;
// Rocket
struct Rocket_t46CF4BC5917C91D995808226A9F11EA125C89AFB;
// RocketPart
struct RocketPart_t012AE5380211CCEE66BD0807CE9406A26BECFAFC;
// RocketPartData
struct RocketPartData_t5D52B3A630DE734008E8AC3C974C6604543F03C3;
// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A;
// Sky
struct Sky_t5309122E3A5E560852B42BF0BB7E76D549ECC420;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// StateMachine
struct StateMachine_tAF6DB96F038DEE14284C0C0AE342050A544B20EB;
// Store
struct Store_t883F7E4E1E6CD105C7227F062ECCF41D86B511ED;
// StoreCamera
struct StoreCamera_tA7B5465998E2E5AEDA6458ECF3001D4FB915B2A7;
// System.String
struct String_t;
// TMPro.TMP_Character
struct TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35;
// TMPro.TMP_ColorGradient
struct TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB;
// TMPro.TMP_FontAsset
struct TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160;
// TMPro.TMP_SpriteAnimator
struct TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4;
// TMPro.TMP_SpriteAsset
struct TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39;
// TMPro.TMP_Style
struct TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C;
// TMPro.TMP_StyleSheet
struct TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859;
// TMPro.TMP_Text
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9;
// TMPro.TMP_TextElement
struct TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5;
// TMPro.TMP_TextInfo
struct TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D;
// Tank
struct Tank_t2AFD1F8BD4E308EA6AC4B0EAEA9C9D7FC5B187ED;
// TankData
struct TankData_t928F6B9458C59DFABB9B9083374169207AC416F0;
// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62;
// UnityEngine.TextGenerator
struct TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// Cell/CellDelegate
struct CellDelegate_t96442117D3C482D1AF013088C40ADF19D1E6AB5C;
// Events/DeflectorDelegate
struct DeflectorDelegate_t7F503635DF21105D46E33B53A4921DA342943B1B;
// Events/EngineDelegate
struct EngineDelegate_t7BD0ACF919FD17DB5AED3D8609768F62FE90FC5D;
// Events/FloatDelegate
struct FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46;
// Events/GameObjectDelegate
struct GameObjectDelegate_t2014FF2A7D5B2ACE8C6D43C262A0D07379B70A95;
// Events/PlumagageDelegate
struct PlumagageDelegate_t7796A8A34036A8879878AF048A60102069DA5EDF;
// Events/SimpleDelegate
struct SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1;
// Events/TankDelegate
struct TankDelegate_tD05489FE7D4AAD92C0F65F9D07006F7522B875C5;
// LevelCell/cellDelegate
struct cellDelegate_t460ACF0FFE0D0FC85DF14E2203498FE748D74EEE;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;

IL2CPP_EXTERN_C RuntimeClass* CellDelegate_t96442117D3C482D1AF013088C40ADF19D1E6AB5C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DeflectorDelegate_t7F503635DF21105D46E33B53A4921DA342943B1B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Deflector_t1F58E4F5F11EE15B7C7A869008F0B14BAC192E54_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DestroyState_t604C1F481A0FC76542E54D449FBBE63DDBEBCC4B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EngineDelegate_t7BD0ACF919FD17DB5AED3D8609768F62FE90FC5D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Engine_t59D31EC59AD8AAF189236F53F6E5B083856B0F00_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FinishState_t4564B3253E31DEEA3C919DF87A20BBDDB888198D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObjectDelegate_t2014FF2A7D5B2ACE8C6D43C262A0D07379B70A95_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IState_tCEB6CB011AADE266AD08F5538B1A1593D7E29CA0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LaunchingState_t7AA2A699C342C794CCABDE103D030DAF663CFF7D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LevelSaverLoader_t9A00927063FF8A8DEFDFDDA5D0BA47688D4D2BAF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Level_t1CED3B73CCB94716BF67A03B39D9DE9A991FD5A1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t18BD6E268F9F6583CEEE974C0C08EF6E26DCA9D7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t5D51C2F548F7E4364A14BB81D41C0CAE0A900E0A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tD33F0782DD5C792201F436775D584D14E82EAE5C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlumagageDelegate_t7796A8A34036A8879878AF048A60102069DA5EDF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Plumage_tE14F878A24757929120FE226D2268E486A8384F9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PreparationState_t308D1841187A356B256D8B9067F63E1E79A3FF82_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Rocket_t46CF4BC5917C91D995808226A9F11EA125C89AFB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TankDelegate_tD05489FE7D4AAD92C0F65F9D07006F7522B875C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Tank_t2AFD1F8BD4E308EA6AC4B0EAEA9C9D7FC5B187ED_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* cellDelegate_t460ACF0FFE0D0FC85DF14E2203498FE748D74EEE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0B5ECFF84CE073C4971D637741C560F910E4D128;
IL2CPP_EXTERN_C String_t* _stringLiteral182C2A78AF257E9851C84BE3704750B192AAB7B0;
IL2CPP_EXTERN_C String_t* _stringLiteral19DAC2BBD0713CAA8195656E2C9A7DFECCC2F9DC;
IL2CPP_EXTERN_C String_t* _stringLiteral323E13B62A8E11412F118D31AE91D101CEC5491F;
IL2CPP_EXTERN_C String_t* _stringLiteral467A66D30ED588479B8BB1F0A243068F289B2D48;
IL2CPP_EXTERN_C String_t* _stringLiteral54AACD55CE45DD72A0F6224E34DECDE3F823EC38;
IL2CPP_EXTERN_C String_t* _stringLiteral6A37501FBBDBCACDE765086128EE76167E54DD75;
IL2CPP_EXTERN_C String_t* _stringLiteral7591C6B2C207685CBD36BB3D5ED56CC4ADA8FBD5;
IL2CPP_EXTERN_C String_t* _stringLiteral7D1364D44BA8F634BB9CD0BC5617C11222D23BFC;
IL2CPP_EXTERN_C String_t* _stringLiteral846D8ED6616B4D6E7392237C86E1FB52B8C2CBF8;
IL2CPP_EXTERN_C String_t* _stringLiteral869A443090ACD17B689B5152A13DADBF5445451D;
IL2CPP_EXTERN_C String_t* _stringLiteral870FD4D50F09EC758F01ED42459CE4987EE22655;
IL2CPP_EXTERN_C String_t* _stringLiteral8F1928D5DA25C89A4CD46EC3DA2E02BA44FDBD4B;
IL2CPP_EXTERN_C String_t* _stringLiteral9450BF3D4D0C78B1514029C2FBAA5CCA18382EB9;
IL2CPP_EXTERN_C String_t* _stringLiteralA667198969A6CE769D867D3EB36BD8261A2BE870;
IL2CPP_EXTERN_C String_t* _stringLiteralAFD25614266ED6007957EF75A44ECE2F6DA1F4A9;
IL2CPP_EXTERN_C String_t* _stringLiteralB224A2EFE789603DFDDB79BA6CD8E1B7A89B708B;
IL2CPP_EXTERN_C String_t* _stringLiteralB305C2946D16F6BB63A1E49A2DDD862798EF81AB;
IL2CPP_EXTERN_C String_t* _stringLiteralBE4680F295084BED47969E2B4FC8E3997061587D;
IL2CPP_EXTERN_C String_t* _stringLiteralBF0E2D83FC1238E093ECBFA37A50775CAE5B5A51;
IL2CPP_EXTERN_C String_t* _stringLiteralC5459B4C2DCEAC561AB686D972B1A11EC5A9D3BE;
IL2CPP_EXTERN_C String_t* _stringLiteralCF1CD87FDFAC87AC835B1D3D847F56D3E6E59F66;
IL2CPP_EXTERN_C String_t* _stringLiteralD85D8B9A49ED9C7531192DE34CB63E8CB53A05EA;
IL2CPP_EXTERN_C String_t* _stringLiteralE1291C4D47635E327ECFE39842BD1A93F58C61A2;
IL2CPP_EXTERN_C String_t* _stringLiteralF67C3EA90FCC8C1942290E54C4613FE4B105E4CA;
IL2CPP_EXTERN_C const RuntimeMethod* BaseCamera_backToStartCamera_mDA559350C6D5B64ADBD5D1B099B6A4C0F30E7521_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BaseCamera_lookAtBaseStore_m9EA88710C03A490AC10659DD167DB60AEEF87810_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BaseCamera_lookAtMissionsStore_m68E5B69714EDCDB983A35959FAADA01AB7F5BF30_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Base_renedrBase_m76C33AFE9E192390A09C8F3F242FA57059687A12_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Control_startControling_m038CE054527EC5905EE172652D48277CD28A341B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Control_stopContolling_m9E380057A1212E85C3AA50EB87748FB561250960_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Control_updateSpeed_mDFB245AD9A788708267837DFF565611062C26191_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Deflector_backToCurrentPart_m44DAF2B34923A72B686A9652974F47ABF265BA03_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Deflector_updateDeflector_mE16D9B12E31D58A0914CAA23496A8E631034B705_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Engine_backToCurrentPart_mA65B3A3F3B4CC83CCE9D6273885A250882F1B2B1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Engine_updateEngine_m7B8F321626DB23E6CB5F4761C66437EE59580B22_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m62EEB495F8C407E1396B8E49E9C5F80FA4A88B60_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mA21FBF50D67D9E84F34007835E6A899C0F7031A0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mAB2F9A493B9407B42C8E1AB74ACCB5C567BDDB17_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m1D96BA3D440A88F1C0811A494B986BD81011052C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mD6B01A66A8590288667BE5CBAE5056030CB4E289_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mDD682DD5B55673C86BB4ADC070BA9F8CC3B99208_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m5D05F036C21C364B1997C69DEC0047A15453137A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m8BE99FA76955640697D9D607B42F71E04FB1EDEE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mE9BB6FDFFF24640F407E05E1738DEA4BA3DF2521_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Explosion_renderExplosion_m6ED3DDE42B6D10DC1059CF20D74C7A608D6F6A78_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FinishLevel_missionFail_m2AD13F91194C54A9C9F3B796A09E8B15F0F34201_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FinishLevel_missionSucsces_m5370B6346336F988F6277A66A052B674C29DB1F9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m03A761629A3F71B0248F1B26EF612F592B757093_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InformationWindow_closeWindow_m3ADED969BD8298753E826F4E297DD8C5EE26B158_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InformationWindow_updateAtmResistance_mEAFB690A231B9FD1FAE1A2E66967FCEF529CDA9C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InformationWindow_updateControl_mCB4BC1596E8C0B1626B5C9B501B5AC2EB848DAA1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InformationWindow_updateGravity_m5558BD7C31B0AAF8682E1EDA0F477BA35C2FAE6B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InformationWindow_updateImpulse_m6EB47A956AD10FA565336CE9C9A34BACC8E26F71_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InformationWindow_updateResistance_m357690F2CB9E7FFB66D1FBFB03A8B037ADC6B188_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InformationWindow_updateThrust_mA9187593ACAF973C116A775F4EA97CE23533771E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InformationWindow_updateWeight_m0B457F02205E269E85A0DC9B82E1F52D85EEE5C7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LevelCell_loadLevel_m35AB54D8F2C127C4F6E3645A260557A9512D433C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LevelMenu_initLevelList_mB28B60622DDD4B4AF014B3001FEBC54EE4450517_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Level_completeLevel_mE7870928E2D62CF5DB82EEA2142F1F221AF2008C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m81E0CEC164686859C689EB0C4B2B6911F1B20729_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m901E88E24A6D3BA25BC887089D21913E675E2315_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mA19A5DD3F06B10BBE2861B3E241CD33D94227F53_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m8F27E8AABFB53268913A2C731EF1CB13B00F1A2D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mAD7089571B98D6D711E15E78A187D2913B42BB33_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mDE2C59020503FE976B03DA5B58DE1D32DBDE0454_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m634C797B91EA3162B923A56ECF66DE828EAB7134_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mBB843ADB13AA49C70185ECAC18C36ADF4F932FFC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LoadScreen_showLoadScreen_mCFB95E2D699D022A0228617AC123C7CF0F8940F6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MenuBudget_updateBudget_m9A5B590D3C9F2CC2B519649EBF88394E9659B021_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Monye_hideMoneyUI_m3E48DC46A8F878FA0A379585DD81B0B21575ED2D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Monye_updateBudget_mB62C7AAB493CE54DD2BCB7E5621AA98F1B7FDAE6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisCell_t88832599049D1ADACE41CE1CF9C147304CF76D5A_m6152200E039251C666072A4E99AB84927B5DCBD2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m002192C406088F7BA156339AAA9B1BB5D69BE934_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisLevelCell_tADC4647C88211220C302069A345C4675278773CB_m9D0E6DC89A0CF36B6E6771B193A1B72565F7C8CB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Plumage_backToCurrentPart_mD834F31CC44ADDB3CAD5B77C35A1EDE4686400BE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Plumage_updatePlumage_m223CF8C8579CB8B8E95E8377654699F70F92B67F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RocketPart_previewPart_m1B665AD4AFCE4503FD22B2EBC2AFFC7395C1E5A1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Rocket_updateControl_m4AAA0EDD04DAE5C4A7C646ACDBC229BD2BAC079E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Rocket_updateResistance_m958DA55EFB6336F90092FE3F7F1EB0FBF2564AD6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Rocket_updateSpecificImpulse_mC4309713AADDC4B630151CF7F8CB1BC68ED2B0AA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Rocket_updateThrust_m69C0ED2738BE5BE722BFCE1A458ECD4789D52385_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StateMachine_destroyRocket_m785080EE97F622972010CBC88290446043A4B85F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StateMachine_levelComplete_mEDC60B375E9B85AAD68249F864E3E5ABB5777FAE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StateMachine_tryLaunch_m373016EDD5649514EB2634EB65A6708828C01EF2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StoreCamera_lookAtDeflector_mBBAAD7B727D8D29EF6E06687C8DDAF596016AC5E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StoreCamera_lookAtEngine_m2C8B8D260E4E5592ACD499B269BF0E4B1189CCC6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StoreCamera_lookAtPlumage_mE51C55B8BF2A05763B1FBF6BD9B3A4513FBCCDEE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StoreCamera_lookAtRocket_m5E948A715F125B9F202BAAB9CFA86F6C6C0CEE2C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StoreCamera_lookAtTank_m47A1F165C0701CF5F4BF13DC90183353E46BEE61_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Store_hideAllStoreUI_m1C40E2EBD8AE396864AEA1A14760819096753131_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Store_hideStores_m20952E0D8C191FD8A46D17F4F00F5F902E930595_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Tank_backToCurrentPart_mFFEFDE9D2739BFAFBDD87D8277DF72AC04A8FC25_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Tank_updateTank_m108CDFFDC537A24318B7FA70B34C39A77A3A0DEB_RuntimeMethod_var;
struct ContactPoint2D_t16A7EE2DDFB4FA3A09C6554E11F30CEDAEBFA801;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tBB65183F1134474D09FF49B95625D25472B9BA8B 
{
};

// System.Collections.Generic.List`1<BaseData>
struct List_1_t18BD6E268F9F6583CEEE974C0C08EF6E26DCA9D7  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	BaseDataU5BU5D_tB11F26CAA318A3DF37068818E558FC6EA96A3940* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t18BD6E268F9F6583CEEE974C0C08EF6E26DCA9D7_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	BaseDataU5BU5D_tB11F26CAA318A3DF37068818E558FC6EA96A3940* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<LevelData>
struct List_1_t5D51C2F548F7E4364A14BB81D41C0CAE0A900E0A  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	LevelDataU5BU5D_t1F77318E13E41A51407DA0EF55EAFF9B21A5C9D9* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t5D51C2F548F7E4364A14BB81D41C0CAE0A900E0A_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	LevelDataU5BU5D_t1F77318E13E41A51407DA0EF55EAFF9B21A5C9D9* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<RocketPartData>
struct List_1_tD33F0782DD5C792201F436775D584D14E82EAE5C  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	RocketPartDataU5BU5D_t0325E97AA61FCD2E250EB02856979AAF10C7BF6D* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tD33F0782DD5C792201F436775D584D14E82EAE5C_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	RocketPartDataU5BU5D_t0325E97AA61FCD2E250EB02856979AAF10C7BF6D* ___s_emptyArray_5;
};
struct Il2CppArrayBounds;

// Bezier
struct Bezier_tB0A1CF03ECB58597AE25DA8A7A4EFEA90C88C8BE  : public RuntimeObject
{
};

// DestroyState
struct DestroyState_t604C1F481A0FC76542E54D449FBBE63DDBEBCC4B  : public RuntimeObject
{
};

// FinishState
struct FinishState_t4564B3253E31DEEA3C919DF87A20BBDDB888198D  : public RuntimeObject
{
};

// LaunchingState
struct LaunchingState_t7AA2A699C342C794CCABDE103D030DAF663CFF7D  : public RuntimeObject
{
};

// LevelSaverLoader
struct LevelSaverLoader_t9A00927063FF8A8DEFDFDDA5D0BA47688D4D2BAF  : public RuntimeObject
{
};

struct LevelSaverLoader_t9A00927063FF8A8DEFDFDDA5D0BA47688D4D2BAF_StaticFields
{
	// System.String LevelSaverLoader::SAVES_KEY
	String_t* ___SAVES_KEY_0;
	// System.String LevelSaverLoader::SAVE_CURRENT_LEVEL_KEY
	String_t* ___SAVE_CURRENT_LEVEL_KEY_1;
	// System.String LevelSaverLoader::SAVE_BASE_RANG_KEY
	String_t* ___SAVE_BASE_RANG_KEY_2;
	// System.String LevelSaverLoader::SAVE_BUDGET_KEY
	String_t* ___SAVE_BUDGET_KEY_3;
};

// PreparationState
struct PreparationState_t308D1841187A356B256D8B9067F63E1E79A3FF82  : public RuntimeObject
{
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// System.Collections.Generic.List`1/Enumerator<BaseData>
struct Enumerator_tA10393DDF9C05EED829F84968687591C0E06F965 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t18BD6E268F9F6583CEEE974C0C08EF6E26DCA9D7* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	BaseData_t5144136E89F73ED714F412780B5FC9AD12F42B90* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<LevelData>
struct Enumerator_tBFF6DA9BE8EA2640F1C5F642D2436586AA67434B 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t5D51C2F548F7E4364A14BB81D41C0CAE0A900E0A* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	LevelData_tE6EAE053C277D3E4ED073363F0BF24BDBADFC4D5* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	RuntimeObject* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<RocketPartData>
struct Enumerator_tB48663E6C2779374FD14FD95868F926EFE5FD596 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tD33F0782DD5C792201F436775D584D14E82EAE5C* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	RocketPartData_t5D52B3A630DE734008E8AC3C974C6604543F03C3* ____current_3;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight>
struct TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions>
struct TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<System.Int32>
struct TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<System.Single>
struct TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	float ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient>
struct TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
};

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// UnityEngine.Color32
struct Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 UnityEngine.Color32::rgba
			int32_t ___rgba_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___rgba_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte UnityEngine.Color32::r
			uint8_t ___r_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___r_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___g_2_OffsetPadding[1];
			// System.Byte UnityEngine.Color32::g
			uint8_t ___g_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___g_2_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___g_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___b_3_OffsetPadding[2];
			// System.Byte UnityEngine.Color32::b
			uint8_t ___b_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___b_3_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___b_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___a_4_OffsetPadding[3];
			// System.Byte UnityEngine.Color32::a
			uint8_t ___a_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___a_4_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___a_4_forAlignmentOnly;
		};
	};
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B 
{
	// System.Int32 TMPro.MaterialReference::index
	int32_t ___index_0;
	// TMPro.TMP_FontAsset TMPro.MaterialReference::fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	// TMPro.TMP_SpriteAsset TMPro.MaterialReference::spriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	// UnityEngine.Material TMPro.MaterialReference::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	// System.Boolean TMPro.MaterialReference::isDefaultMaterial
	bool ___isDefaultMaterial_4;
	// System.Boolean TMPro.MaterialReference::isFallbackMaterial
	bool ___isFallbackMaterial_5;
	// UnityEngine.Material TMPro.MaterialReference::fallbackMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	// System.Single TMPro.MaterialReference::padding
	float ___padding_7;
	// System.Int32 TMPro.MaterialReference::referenceCount
	int32_t ___referenceCount_8;
};
// Native definition for P/Invoke marshalling of TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_pinvoke
{
	int32_t ___index_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};
// Native definition for COM marshalling of TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_com
{
	int32_t ___index_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};

// UnityEngine.Matrix4x4
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 
{
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;
};

struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_StaticFields
{
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___identityMatrix_17;
};

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;
};

struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// UnityEngine.SceneManagement.Scene
struct Scene_tA1DC762B79745EB5140F054C884855B922318356 
{
	// System.Int32 UnityEngine.SceneManagement.Scene::m_Handle
	int32_t ___m_Handle_0;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// TMPro.TMP_FontStyleStack
struct TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC 
{
	// System.Byte TMPro.TMP_FontStyleStack::bold
	uint8_t ___bold_0;
	// System.Byte TMPro.TMP_FontStyleStack::italic
	uint8_t ___italic_1;
	// System.Byte TMPro.TMP_FontStyleStack::underline
	uint8_t ___underline_2;
	// System.Byte TMPro.TMP_FontStyleStack::strikethrough
	uint8_t ___strikethrough_3;
	// System.Byte TMPro.TMP_FontStyleStack::highlight
	uint8_t ___highlight_4;
	// System.Byte TMPro.TMP_FontStyleStack::superscript
	uint8_t ___superscript_5;
	// System.Byte TMPro.TMP_FontStyleStack::subscript
	uint8_t ___subscript_6;
	// System.Byte TMPro.TMP_FontStyleStack::uppercase
	uint8_t ___uppercase_7;
	// System.Byte TMPro.TMP_FontStyleStack::lowercase
	uint8_t ___lowercase_8;
	// System.Byte TMPro.TMP_FontStyleStack::smallcaps
	uint8_t ___smallcaps_9;
};

// TMPro.TMP_Offset
struct TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 
{
	// System.Single TMPro.TMP_Offset::m_Left
	float ___m_Left_0;
	// System.Single TMPro.TMP_Offset::m_Right
	float ___m_Right_1;
	// System.Single TMPro.TMP_Offset::m_Top
	float ___m_Top_2;
	// System.Single TMPro.TMP_Offset::m_Bottom
	float ___m_Bottom_3;
};

struct TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6_StaticFields
{
	// TMPro.TMP_Offset TMPro.TMP_Offset::k_ZeroOffset
	TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 ___k_ZeroOffset_4;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
};

struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector_8;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 
{
	// TMPro.TMP_Character TMPro.TMP_Text/SpecialCharacter::character
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	// TMPro.TMP_FontAsset TMPro.TMP_Text/SpecialCharacter::fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	// UnityEngine.Material TMPro.TMP_Text/SpecialCharacter::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	// System.Int32 TMPro.TMP_Text/SpecialCharacter::materialIndex
	int32_t ___materialIndex_3;
};
// Native definition for P/Invoke marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777_marshaled_pinvoke
{
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	int32_t ___materialIndex_3;
};
// Native definition for COM marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777_marshaled_com
{
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	int32_t ___materialIndex_3;
};

// TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 
{
	// System.UInt32[] TMPro.TMP_Text/TextBackingContainer::m_Array
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___m_Array_0;
	// System.Int32 TMPro.TMP_Text/TextBackingContainer::m_Count
	int32_t ___m_Count_1;
};
// Native definition for P/Invoke marshalling of TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361_marshaled_pinvoke
{
	Il2CppSafeArray/*NONE*/* ___m_Array_0;
	int32_t ___m_Count_1;
};
// Native definition for COM marshalling of TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361_marshaled_com
{
	Il2CppSafeArray/*NONE*/* ___m_Array_0;
	int32_t ___m_Count_1;
};

// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32>
struct TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference>
struct TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354  : public RuntimeObject
{
	// System.IntPtr UnityEngine.AnimationCurve::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// UnityEngine.Collision2D
struct Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B  : public RuntimeObject
{
	// System.Int32 UnityEngine.Collision2D::m_Collider
	int32_t ___m_Collider_0;
	// System.Int32 UnityEngine.Collision2D::m_OtherCollider
	int32_t ___m_OtherCollider_1;
	// System.Int32 UnityEngine.Collision2D::m_Rigidbody
	int32_t ___m_Rigidbody_2;
	// System.Int32 UnityEngine.Collision2D::m_OtherRigidbody
	int32_t ___m_OtherRigidbody_3;
	// UnityEngine.Vector2 UnityEngine.Collision2D::m_RelativeVelocity
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_RelativeVelocity_4;
	// System.Int32 UnityEngine.Collision2D::m_Enabled
	int32_t ___m_Enabled_5;
	// System.Int32 UnityEngine.Collision2D::m_ContactCount
	int32_t ___m_ContactCount_6;
	// UnityEngine.ContactPoint2D[] UnityEngine.Collision2D::m_ReusedContacts
	ContactPoint2DU5BU5D_t427621BF8902AE33C86E7BF384D9B2B5B781F949* ___m_ReusedContacts_7;
	// UnityEngine.ContactPoint2D[] UnityEngine.Collision2D::m_LegacyContacts
	ContactPoint2DU5BU5D_t427621BF8902AE33C86E7BF384D9B2B5B781F949* ___m_LegacyContacts_8;
};
// Native definition for P/Invoke marshalling of UnityEngine.Collision2D
struct Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B_marshaled_pinvoke
{
	int32_t ___m_Collider_0;
	int32_t ___m_OtherCollider_1;
	int32_t ___m_Rigidbody_2;
	int32_t ___m_OtherRigidbody_3;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_RelativeVelocity_4;
	int32_t ___m_Enabled_5;
	int32_t ___m_ContactCount_6;
	ContactPoint2D_t16A7EE2DDFB4FA3A09C6554E11F30CEDAEBFA801* ___m_ReusedContacts_7;
	ContactPoint2D_t16A7EE2DDFB4FA3A09C6554E11F30CEDAEBFA801* ___m_LegacyContacts_8;
};
// Native definition for COM marshalling of UnityEngine.Collision2D
struct Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B_marshaled_com
{
	int32_t ___m_Collider_0;
	int32_t ___m_OtherCollider_1;
	int32_t ___m_Rigidbody_2;
	int32_t ___m_OtherRigidbody_3;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_RelativeVelocity_4;
	int32_t ___m_Enabled_5;
	int32_t ___m_ContactCount_6;
	ContactPoint2D_t16A7EE2DDFB4FA3A09C6554E11F30CEDAEBFA801* ___m_ReusedContacts_7;
	ContactPoint2D_t16A7EE2DDFB4FA3A09C6554E11F30CEDAEBFA801* ___m_LegacyContacts_8;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// TMPro.Extents
struct Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 
{
	// UnityEngine.Vector2 TMPro.Extents::min
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___min_2;
	// UnityEngine.Vector2 TMPro.Extents::max
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___max_3;
};

struct Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8_StaticFields
{
	// TMPro.Extents TMPro.Extents::zero
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___zero_0;
	// TMPro.Extents TMPro.Extents::uninitialized
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___uninitialized_1;
};

// TMPro.HighlightState
struct HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B 
{
	// UnityEngine.Color32 TMPro.HighlightState::color
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color_0;
	// TMPro.TMP_Offset TMPro.HighlightState::padding
	TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 ___padding_1;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// Unity.Profiling.ProfilerMarker
struct ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD 
{
	// System.IntPtr Unity.Profiling.ProfilerMarker::m_Ptr
	intptr_t ___m_Ptr_0;
};

// TMPro.VertexGradient
struct VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F 
{
	// UnityEngine.Color TMPro.VertexGradient::topLeft
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topLeft_0;
	// UnityEngine.Color TMPro.VertexGradient::topRight
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topRight_1;
	// UnityEngine.Color TMPro.VertexGradient::bottomLeft
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomLeft_2;
	// UnityEngine.Color TMPro.VertexGradient::bottomRight
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomRight_3;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState>
struct TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.Audio.AudioMixer
struct AudioMixer_tE2E8D79241711CDF9AB428C7FB96A35D80E40B04  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_pinvoke : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_com : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
};

// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// TMPro.TMP_LineInfo
struct TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 
{
	// System.Int32 TMPro.TMP_LineInfo::controlCharacterCount
	int32_t ___controlCharacterCount_0;
	// System.Int32 TMPro.TMP_LineInfo::characterCount
	int32_t ___characterCount_1;
	// System.Int32 TMPro.TMP_LineInfo::visibleCharacterCount
	int32_t ___visibleCharacterCount_2;
	// System.Int32 TMPro.TMP_LineInfo::spaceCount
	int32_t ___spaceCount_3;
	// System.Int32 TMPro.TMP_LineInfo::wordCount
	int32_t ___wordCount_4;
	// System.Int32 TMPro.TMP_LineInfo::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.TMP_LineInfo::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.TMP_LineInfo::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.TMP_LineInfo::lastVisibleCharacterIndex
	int32_t ___lastVisibleCharacterIndex_8;
	// System.Single TMPro.TMP_LineInfo::length
	float ___length_9;
	// System.Single TMPro.TMP_LineInfo::lineHeight
	float ___lineHeight_10;
	// System.Single TMPro.TMP_LineInfo::ascender
	float ___ascender_11;
	// System.Single TMPro.TMP_LineInfo::baseline
	float ___baseline_12;
	// System.Single TMPro.TMP_LineInfo::descender
	float ___descender_13;
	// System.Single TMPro.TMP_LineInfo::maxAdvance
	float ___maxAdvance_14;
	// System.Single TMPro.TMP_LineInfo::width
	float ___width_15;
	// System.Single TMPro.TMP_LineInfo::marginLeft
	float ___marginLeft_16;
	// System.Single TMPro.TMP_LineInfo::marginRight
	float ___marginRight_17;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_LineInfo::alignment
	int32_t ___alignment_18;
	// TMPro.Extents TMPro.TMP_LineInfo::lineExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___lineExtents_19;
};

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// BaseData
struct BaseData_t5144136E89F73ED714F412780B5FC9AD12F42B90  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// System.Int32 BaseData::BaseRang
	int32_t ___BaseRang_4;
	// UnityEngine.GameObject BaseData::BasePrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___BasePrefab_5;
	// UnityEngine.GameObject BaseData::BasePrefabForLevel
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___BasePrefabForLevel_6;
	// System.Int32 BaseData::BasePrice
	int32_t ___BasePrice_7;
	// UnityEngine.Sprite BaseData::BaseIcon
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___BaseIcon_8;
	// UnityEngine.Color32 BaseData::BaseUIColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___BaseUIColor_9;
	// System.String BaseData::BaseName
	String_t* ___BaseName_10;
	// System.String BaseData::BaseDescription
	String_t* ___BaseDescription_11;
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// LevelData
struct LevelData_tE6EAE053C277D3E4ED073363F0BF24BDBADFC4D5  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// System.Int32 LevelData::LevelID
	int32_t ___LevelID_4;
	// System.Int32 LevelData::LevelRang
	int32_t ___LevelRang_5;
	// System.Single LevelData::Budget
	float ___Budget_6;
	// System.Single LevelData::Gravity
	float ___Gravity_7;
	// System.Single LevelData::AtmosphereResistance
	float ___AtmosphereResistance_8;
	// System.String LevelData::LevelCodeName
	String_t* ___LevelCodeName_9;
	// System.String LevelData::LevelDescription
	String_t* ___LevelDescription_10;
};

// UnityEngine.Rigidbody
struct Rigidbody_t268697F5A994213ED97393309870968BC1C7393C  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// RocketPartData
struct RocketPartData_t5D52B3A630DE734008E8AC3C974C6604543F03C3  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// RocketPartData/Parametrs RocketPartData::Parametr
	int32_t ___Parametr_4;
	// UnityEngine.GameObject RocketPartData::Prefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___Prefab_5;
	// System.Single RocketPartData::Weight
	float ___Weight_6;
	// System.Single RocketPartData::Price
	float ___Price_7;
	// UnityEngine.Sprite RocketPartData::Icon
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___Icon_8;
	// System.String RocketPartData::Name
	String_t* ___Name_9;
	// UnityEngine.Color32 RocketPartData::BackGroundColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___BackGroundColor_10;
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A 
{
	// System.Int32 TMPro.WordWrapState::previous_WordBreak
	int32_t ___previous_WordBreak_0;
	// System.Int32 TMPro.WordWrapState::total_CharacterCount
	int32_t ___total_CharacterCount_1;
	// System.Int32 TMPro.WordWrapState::visible_CharacterCount
	int32_t ___visible_CharacterCount_2;
	// System.Int32 TMPro.WordWrapState::visible_SpriteCount
	int32_t ___visible_SpriteCount_3;
	// System.Int32 TMPro.WordWrapState::visible_LinkCount
	int32_t ___visible_LinkCount_4;
	// System.Int32 TMPro.WordWrapState::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.WordWrapState::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.WordWrapState::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.WordWrapState::lastVisibleCharIndex
	int32_t ___lastVisibleCharIndex_8;
	// System.Int32 TMPro.WordWrapState::lineNumber
	int32_t ___lineNumber_9;
	// System.Single TMPro.WordWrapState::maxCapHeight
	float ___maxCapHeight_10;
	// System.Single TMPro.WordWrapState::maxAscender
	float ___maxAscender_11;
	// System.Single TMPro.WordWrapState::maxDescender
	float ___maxDescender_12;
	// System.Single TMPro.WordWrapState::startOfLineAscender
	float ___startOfLineAscender_13;
	// System.Single TMPro.WordWrapState::maxLineAscender
	float ___maxLineAscender_14;
	// System.Single TMPro.WordWrapState::maxLineDescender
	float ___maxLineDescender_15;
	// System.Single TMPro.WordWrapState::pageAscender
	float ___pageAscender_16;
	// TMPro.HorizontalAlignmentOptions TMPro.WordWrapState::horizontalAlignment
	int32_t ___horizontalAlignment_17;
	// System.Single TMPro.WordWrapState::marginLeft
	float ___marginLeft_18;
	// System.Single TMPro.WordWrapState::marginRight
	float ___marginRight_19;
	// System.Single TMPro.WordWrapState::xAdvance
	float ___xAdvance_20;
	// System.Single TMPro.WordWrapState::preferredWidth
	float ___preferredWidth_21;
	// System.Single TMPro.WordWrapState::preferredHeight
	float ___preferredHeight_22;
	// System.Single TMPro.WordWrapState::previousLineScale
	float ___previousLineScale_23;
	// System.Int32 TMPro.WordWrapState::wordCount
	int32_t ___wordCount_24;
	// TMPro.FontStyles TMPro.WordWrapState::fontStyle
	int32_t ___fontStyle_25;
	// System.Int32 TMPro.WordWrapState::italicAngle
	int32_t ___italicAngle_26;
	// System.Single TMPro.WordWrapState::fontScaleMultiplier
	float ___fontScaleMultiplier_27;
	// System.Single TMPro.WordWrapState::currentFontSize
	float ___currentFontSize_28;
	// System.Single TMPro.WordWrapState::baselineOffset
	float ___baselineOffset_29;
	// System.Single TMPro.WordWrapState::lineOffset
	float ___lineOffset_30;
	// System.Boolean TMPro.WordWrapState::isDrivenLineSpacing
	bool ___isDrivenLineSpacing_31;
	// System.Single TMPro.WordWrapState::glyphHorizontalAdvanceAdjustment
	float ___glyphHorizontalAdvanceAdjustment_32;
	// System.Single TMPro.WordWrapState::cSpace
	float ___cSpace_33;
	// System.Single TMPro.WordWrapState::mSpace
	float ___mSpace_34;
	// TMPro.TMP_TextInfo TMPro.WordWrapState::textInfo
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	// TMPro.TMP_LineInfo TMPro.WordWrapState::lineInfo
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	// UnityEngine.Color32 TMPro.WordWrapState::vertexColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	// UnityEngine.Color32 TMPro.WordWrapState::underlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	// UnityEngine.Color32 TMPro.WordWrapState::strikethroughColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	// UnityEngine.Color32 TMPro.WordWrapState::highlightColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	// TMPro.TMP_FontStyleStack TMPro.WordWrapState::basicStyleStack
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::italicAngleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::colorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::underlineColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::strikethroughColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::highlightColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.WordWrapState::highlightStateStack
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.WordWrapState::colorGradientStack
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::sizeStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::indentStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.WordWrapState::fontWeightStack
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::styleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::baselineStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::actionStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.WordWrapState::materialReferenceStack
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.WordWrapState::lineJustificationStack
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	// System.Int32 TMPro.WordWrapState::spriteAnimationID
	int32_t ___spriteAnimationID_57;
	// TMPro.TMP_FontAsset TMPro.WordWrapState::currentFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	// TMPro.TMP_SpriteAsset TMPro.WordWrapState::currentSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	// UnityEngine.Material TMPro.WordWrapState::currentMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	// System.Int32 TMPro.WordWrapState::currentMaterialIndex
	int32_t ___currentMaterialIndex_61;
	// TMPro.Extents TMPro.WordWrapState::meshExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	// System.Boolean TMPro.WordWrapState::tagNoParsing
	bool ___tagNoParsing_63;
	// System.Boolean TMPro.WordWrapState::isNonBreakingSpace
	bool ___isNonBreakingSpace_64;
};
// Native definition for P/Invoke marshalling of TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_pinvoke
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScaleMultiplier_27;
	float ___currentFontSize_28;
	float ___baselineOffset_29;
	float ___lineOffset_30;
	int32_t ___isDrivenLineSpacing_31;
	float ___glyphHorizontalAdvanceAdjustment_32;
	float ___cSpace_33;
	float ___mSpace_34;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};
// Native definition for COM marshalling of TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_com
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScaleMultiplier_27;
	float ___currentFontSize_28;
	float ___baselineOffset_29;
	float ___lineOffset_30;
	int32_t ___isDrivenLineSpacing_31;
	float ___glyphHorizontalAdvanceAdjustment_32;
	float ___cSpace_33;
	float ___mSpace_34;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};

// Cell/CellDelegate
struct CellDelegate_t96442117D3C482D1AF013088C40ADF19D1E6AB5C  : public MulticastDelegate_t
{
};

// Events/DeflectorDelegate
struct DeflectorDelegate_t7F503635DF21105D46E33B53A4921DA342943B1B  : public MulticastDelegate_t
{
};

// Events/EngineDelegate
struct EngineDelegate_t7BD0ACF919FD17DB5AED3D8609768F62FE90FC5D  : public MulticastDelegate_t
{
};

// Events/FloatDelegate
struct FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46  : public MulticastDelegate_t
{
};

// Events/GameObjectDelegate
struct GameObjectDelegate_t2014FF2A7D5B2ACE8C6D43C262A0D07379B70A95  : public MulticastDelegate_t
{
};

// Events/PlumagageDelegate
struct PlumagageDelegate_t7796A8A34036A8879878AF048A60102069DA5EDF  : public MulticastDelegate_t
{
};

// Events/SimpleDelegate
struct SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1  : public MulticastDelegate_t
{
};

// Events/TankDelegate
struct TankDelegate_tD05489FE7D4AAD92C0F65F9D07006F7522B875C5  : public MulticastDelegate_t
{
};

// LevelCell/cellDelegate
struct cellDelegate_t460ACF0FFE0D0FC85DF14E2203498FE748D74EEE  : public MulticastDelegate_t
{
};

// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState>
struct TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.AudioBehaviour
struct AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// DeflectorData
struct DeflectorData_t6B09A69A7FF8BEF1E1CC861DDABDC15E9A8318A5  : public RocketPartData_t5D52B3A630DE734008E8AC3C974C6604543F03C3
{
	// System.Single DeflectorData::Resistance
	float ___Resistance_11;
};

// EngineData
struct EngineData_t82D35F92377644522DEBEADE8F95040A3F65C6AA  : public RocketPartData_t5D52B3A630DE734008E8AC3C974C6604543F03C3
{
	// System.Single EngineData::Thrust
	float ___Thrust_11;
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// PlumageData
struct PlumageData_tF8E9C197181F7308588184A8236BFA6838D26F4F  : public RocketPartData_t5D52B3A630DE734008E8AC3C974C6604543F03C3
{
	// System.Single PlumageData::Control
	float ___Control_11;
};

// TankData
struct TankData_t928F6B9458C59DFABB9B9083374169207AC416F0  : public RocketPartData_t5D52B3A630DE734008E8AC3C974C6604543F03C3
{
	// System.Single TankData::SpecificImpulse
	float ___SpecificImpulse_11;
};

// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299  : public AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941
{
};

// Base
struct Base_tB0E39575E6C88869B432ADD314CBDC55F04FAECB  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 Base::_baseRang
	int32_t ____baseRang_4;
	// System.Collections.Generic.List`1<BaseData> Base::_basesList
	List_1_t18BD6E268F9F6583CEEE974C0C08EF6E26DCA9D7* ____basesList_5;
	// UnityEngine.Transform Base::_basePosition
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ____basePosition_6;
};

// BaseCamera
struct BaseCamera_t29BC3F9897A65213D2D9A5EC36D83751BABDD9B5  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject BaseCamera::_mainCamera
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____mainCamera_4;
	// UnityEngine.GameObject BaseCamera::_missionsStoreCamera
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____missionsStoreCamera_5;
	// UnityEngine.GameObject BaseCamera::_baseStoreCamera
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____baseStoreCamera_6;
	// UnityEngine.GameObject BaseCamera::_activeCamera
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____activeCamera_7;
};

// BaseStore
struct BaseStore_t83AB0F9340CBCB63C4FB015CED41A9BCD629E2CB  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Collections.Generic.List`1<BaseData> BaseStore::_basesList
	List_1_t18BD6E268F9F6583CEEE974C0C08EF6E26DCA9D7* ____basesList_4;
	// UnityEngine.GameObject BaseStore::_basesStore
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____basesStore_5;
	// TMPro.TMP_Text BaseStore::_nextBaseName
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ____nextBaseName_6;
	// TMPro.TMP_Text BaseStore::_nextBaseDescription
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ____nextBaseDescription_7;
	// TMPro.TMP_Text BaseStore::_nextBasePrice
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ____nextBasePrice_8;
	// UnityEngine.UI.Image BaseStore::_nextBaseIcon
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ____nextBaseIcon_9;
	// UnityEngine.UI.Image BaseStore::_nextBaseBackgroundImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ____nextBaseBackgroundImage_10;
	// BaseData BaseStore::_nextBase
	BaseData_t5144136E89F73ED714F412780B5FC9AD12F42B90* ____nextBase_11;
};

// Cell
struct Cell_t88832599049D1ADACE41CE1CF9C147304CF76D5A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Cell/CellDelegate Cell::OnClickFunction
	CellDelegate_t96442117D3C482D1AF013088C40ADF19D1E6AB5C* ___OnClickFunction_4;
	// UnityEngine.UI.Image Cell::_icon
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ____icon_5;
	// UnityEngine.UI.Image Cell::_parametrIcon
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ____parametrIcon_6;
	// UnityEngine.UI.Image Cell::_backGround
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ____backGround_7;
	// UnityEngine.UI.Text Cell::_name
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ____name_8;
	// UnityEngine.UI.Text Cell::_price
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ____price_9;
	// UnityEngine.UI.Text Cell::_parametrValue
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ____parametrValue_10;
	// UnityEngine.UI.Text Cell::_weightValue
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ____weightValue_11;
	// System.Boolean Cell::IsPayed
	bool ___IsPayed_12;
};

// CloseButton
struct CloseButton_t709E9B0B9178C798AFD2FC1ACB7AA5E86AA734B0  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// Control
struct Control_t173E621579F19553D3CDA3C97DA9068EFF1C9694  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject Control::_controlUI
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____controlUI_4;
	// UnityEngine.Transform Control::_controller
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ____controller_5;
	// UnityEngine.Transform Control::_overEngine
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ____overEngine_6;
	// System.Single Control::_controlSpeed
	float ____controlSpeed_7;
	// System.Single Control::_currentSpeed
	float ____currentSpeed_8;
	// System.Single Control::_speedCoeficent
	float ____speedCoeficent_9;
	// System.Single Control::_overEngineScaleSpeed
	float ____overEngineScaleSpeed_10;
	// System.Single Control::_controlDerection
	float ____controlDerection_11;
};

// Controller
struct Controller_t080F3A02FE42D755CC6A8B605F85CA157ED61BB9  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// Events
struct Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

struct Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields
{
	// Events/EngineDelegate Events::UpdateEngineEvent
	EngineDelegate_t7BD0ACF919FD17DB5AED3D8609768F62FE90FC5D* ___UpdateEngineEvent_4;
	// Events/DeflectorDelegate Events::UpdateDeflectorEvent
	DeflectorDelegate_t7F503635DF21105D46E33B53A4921DA342943B1B* ___UpdateDeflectorEvent_5;
	// Events/TankDelegate Events::UpdateTankEvent
	TankDelegate_tD05489FE7D4AAD92C0F65F9D07006F7522B875C5* ___UpdateTankEvent_6;
	// Events/PlumagageDelegate Events::UpdatePlumageEvent
	PlumagageDelegate_t7796A8A34036A8879878AF048A60102069DA5EDF* ___UpdatePlumageEvent_7;
	// Events/GameObjectDelegate Events::PreviewEngineEvent
	GameObjectDelegate_t2014FF2A7D5B2ACE8C6D43C262A0D07379B70A95* ___PreviewEngineEvent_8;
	// Events/GameObjectDelegate Events::PreviewDeflectorEvent
	GameObjectDelegate_t2014FF2A7D5B2ACE8C6D43C262A0D07379B70A95* ___PreviewDeflectorEvent_9;
	// Events/GameObjectDelegate Events::PreviewTankEvent
	GameObjectDelegate_t2014FF2A7D5B2ACE8C6D43C262A0D07379B70A95* ___PreviewTankEvent_10;
	// Events/GameObjectDelegate Events::PreviewPlumageEvent
	GameObjectDelegate_t2014FF2A7D5B2ACE8C6D43C262A0D07379B70A95* ___PreviewPlumageEvent_11;
	// Events/FloatDelegate Events::UpdateThrust
	FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46* ___UpdateThrust_12;
	// Events/FloatDelegate Events::UpdateControl
	FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46* ___UpdateControl_13;
	// Events/FloatDelegate Events::UpdateSpecificImpulse
	FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46* ___UpdateSpecificImpulse_14;
	// Events/FloatDelegate Events::UpdateResistance
	FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46* ___UpdateResistance_15;
	// Events/FloatDelegate Events::UpdateWeight
	FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46* ___UpdateWeight_16;
	// Events/FloatDelegate Events::UpdateBudgetUI
	FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46* ___UpdateBudgetUI_17;
	// Events/FloatDelegate Events::UpdateGravity
	FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46* ___UpdateGravity_18;
	// Events/FloatDelegate Events::UpdateAtmResistance
	FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46* ___UpdateAtmResistance_19;
	// Events/FloatDelegate Events::UpdateBudgetOnMenuUI
	FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46* ___UpdateBudgetOnMenuUI_20;
	// Events/SimpleDelegate Events::SelectEngineStore
	SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1* ___SelectEngineStore_21;
	// Events/SimpleDelegate Events::SelectDeflectorStore
	SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1* ___SelectDeflectorStore_22;
	// Events/SimpleDelegate Events::SelectTankStore
	SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1* ___SelectTankStore_23;
	// Events/SimpleDelegate Events::SelectPlumageStore
	SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1* ___SelectPlumageStore_24;
	// Events/SimpleDelegate Events::HideStore
	SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1* ___HideStore_25;
	// Events/SimpleDelegate Events::HideStoreUI
	SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1* ___HideStoreUI_26;
	// Events/SimpleDelegate Events::LaunchRocket
	SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1* ___LaunchRocket_27;
	// Events/SimpleDelegate Events::ShowLaunchUI
	SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1* ___ShowLaunchUI_28;
	// Events/SimpleDelegate Events::DestroyRocket
	SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1* ___DestroyRocket_29;
	// Events/SimpleDelegate Events::LevelComplete
	SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1* ___LevelComplete_30;
	// Events/SimpleDelegate Events::UpdateBaseRang
	SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1* ___UpdateBaseRang_31;
	// Events/SimpleDelegate Events::ShowBaseStore
	SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1* ___ShowBaseStore_32;
	// Events/SimpleDelegate Events::ShowMissionsStore
	SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1* ___ShowMissionsStore_33;
	// Events/SimpleDelegate Events::ShowBase
	SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1* ___ShowBase_34;
	// Events/SimpleDelegate Events::LoadLevel
	SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1* ___LoadLevel_35;
};

// Explosion
struct Explosion_t75EBC696AB674B02BDDEA9D47C842389FD72C847  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject Explosion::_explosion
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____explosion_4;
};

// FinishLevel
struct FinishLevel_tACFA3010643E0E036858BB5967D7D9006954B268  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject FinishLevel::_succcesFinish
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____succcesFinish_4;
	// UnityEngine.GameObject FinishLevel::_failFinish
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____failFinish_5;
	// UnityEngine.GameObject FinishLevel::_UI
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____UI_6;
	// UnityEngine.GameObject FinishLevel::_loadScreen
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____loadScreen_7;
	// UnityEngine.AudioSource FinishLevel::_failSound
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ____failSound_8;
	// UnityEngine.AudioSource FinishLevel::_succesSound
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ____succesSound_9;
};

// InformationWindow
struct InformationWindow_tCE1FE4060843C189EFCE677746B85DB140C906B1  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject InformationWindow::_informationWindow
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____informationWindow_4;
	// TMPro.TMP_Text InformationWindow::_gravity
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ____gravity_5;
	// TMPro.TMP_Text InformationWindow::_atmResistance
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ____atmResistance_6;
	// TMPro.TMP_Text InformationWindow::_totalWeight
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ____totalWeight_7;
	// TMPro.TMP_Text InformationWindow::_control
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ____control_8;
	// TMPro.TMP_Text InformationWindow::_impulse
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ____impulse_9;
	// TMPro.TMP_Text InformationWindow::_resistance
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ____resistance_10;
	// TMPro.TMP_Text InformationWindow::_thrust
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ____thrust_11;
};

// Launch
struct Launch_t52BE88240575DDC0FBF94BD3F933E375864CF2C3  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// Level
struct Level_t1CED3B73CCB94716BF67A03B39D9DE9A991FD5A1  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Collections.Generic.List`1<LevelData> Level::_levelDataList
	List_1_t5D51C2F548F7E4364A14BB81D41C0CAE0A900E0A* ____levelDataList_4;
	// System.Collections.Generic.List`1<BaseData> Level::_baseList
	List_1_t18BD6E268F9F6583CEEE974C0C08EF6E26DCA9D7* ____baseList_5;
	// UnityEngine.Transform Level::_baseSpawnPoint
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ____baseSpawnPoint_6;
	// LevelData Level::_levelData
	LevelData_tE6EAE053C277D3E4ED073363F0BF24BDBADFC4D5* ____levelData_7;
};

struct Level_t1CED3B73CCB94716BF67A03B39D9DE9A991FD5A1_StaticFields
{
	// System.Int32 Level::LevelID
	int32_t ___LevelID_8;
	// System.Single Level::LevelBudget
	float ___LevelBudget_9;
	// System.Single Level::LevelGravity
	float ___LevelGravity_10;
	// System.Single Level::LevelAtmosphereResistance
	float ___LevelAtmosphereResistance_11;
};

// LevelCell
struct LevelCell_tADC4647C88211220C302069A345C4675278773CB  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// LevelCell/cellDelegate LevelCell::onClick
	cellDelegate_t460ACF0FFE0D0FC85DF14E2203498FE748D74EEE* ___onClick_4;
	// UnityEngine.UI.Text LevelCell::_cellLevelNumber
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ____cellLevelNumber_5;
	// UnityEngine.UI.Text LevelCell::_cellBudget
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ____cellBudget_6;
	// UnityEngine.UI.Text LevelCell::_cellCodeName
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ____cellCodeName_7;
	// MissionInformationWindow LevelCell::_missionInformationWindow
	MissionInformationWindow_tCAD9D85E87544887EB8EE5A089D3E2C87556D0AF* ____missionInformationWindow_8;
	// System.Int32 LevelCell::_levelID
	int32_t ____levelID_9;
	// LevelData LevelCell::_thisLevel
	LevelData_tE6EAE053C277D3E4ED073363F0BF24BDBADFC4D5* ____thisLevel_10;
};

// LevelMenu
struct LevelMenu_t6891BFAF859BCE6FD3FC107B0A40B48DFF968D8A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Collections.Generic.List`1<LevelData> LevelMenu::_levels
	List_1_t5D51C2F548F7E4364A14BB81D41C0CAE0A900E0A* ____levels_4;
	// LevelCell LevelMenu::_cellPrefab
	LevelCell_tADC4647C88211220C302069A345C4675278773CB* ____cellPrefab_5;
	// UnityEngine.Transform LevelMenu::_container
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ____container_6;
	// MissionInformationWindow LevelMenu::_informationWindow
	MissionInformationWindow_tCAD9D85E87544887EB8EE5A089D3E2C87556D0AF* ____informationWindow_7;
	// UnityEngine.GameObject LevelMenu::_levelMenuWindow
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____levelMenuWindow_8;
};

// LoadScreen
struct LoadScreen_t84A9FD098EB6D41345E4EC1D7B31DFFA3947B3D3  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject LoadScreen::_UI
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____UI_4;
	// UnityEngine.GameObject LoadScreen::_loadScreen
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____loadScreen_5;
};

// Menu
struct Menu_t818E8DA587A0E558DE9BC83947BABC9A6FDD0C05  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Audio.AudioMixer Menu::_mainAudioMixer
	AudioMixer_tE2E8D79241711CDF9AB428C7FB96A35D80E40B04* ____mainAudioMixer_4;
};

// MenuBudget
struct MenuBudget_t85890A4C72C1B046830CF1AB2A798553120D4792  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// TMPro.TMP_Text MenuBudget::_budget
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ____budget_4;
};

// MissionInformationWindow
struct MissionInformationWindow_tCAD9D85E87544887EB8EE5A089D3E2C87556D0AF  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Text MissionInformationWindow::_name
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ____name_4;
	// UnityEngine.UI.Text MissionInformationWindow::_description
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ____description_5;
	// UnityEngine.UI.Text MissionInformationWindow::_budget
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ____budget_6;
};

// Monye
struct Monye_tD7CE1445FFBC575D6656B0F71D4B793D4DA248B5  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// TMPro.TMP_Text Monye::_budget
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ____budget_4;
	// UnityEngine.GameObject Monye::_moneyUI
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____moneyUI_5;
};

// Rocket
struct Rocket_t46CF4BC5917C91D995808226A9F11EA125C89AFB  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single Rocket::_rocketThrust
	float ____rocketThrust_4;
	// System.Single Rocket::_rocketControl
	float ____rocketControl_5;
	// System.Single Rocket::_rocketSpecificImpulse
	float ____rocketSpecificImpulse_6;
	// System.Single Rocket::_rocketResistance
	float ____rocketResistance_7;
	// Deflector Rocket::_deflector
	Deflector_t1F58E4F5F11EE15B7C7A869008F0B14BAC192E54* ____deflector_9;
	// Tank Rocket::_tank
	Tank_t2AFD1F8BD4E308EA6AC4B0EAEA9C9D7FC5B187ED* ____tank_10;
	// Plumage Rocket::_plumage
	Plumage_tE14F878A24757929120FE226D2268E486A8384F9* ____plumage_11;
	// Engine Rocket::_engine
	Engine_t59D31EC59AD8AAF189236F53F6E5B083856B0F00* ____engine_12;
	// UnityEngine.GameObject Rocket::_rocket
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____rocket_13;
	// UnityEngine.Transform Rocket::_curvePoint0
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ____curvePoint0_14;
	// UnityEngine.Transform Rocket::_curvePoint1
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ____curvePoint1_15;
	// UnityEngine.Transform Rocket::_curvePoint2
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ____curvePoint2_16;
	// UnityEngine.Transform Rocket::_curvePoint3
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ____curvePoint3_17;
	// System.Single Rocket::_curveT
	float ____curveT_18;
	// System.Single Rocket::_speedT
	float ____speedT_19;
	// System.Single Rocket::_speedCoefficient
	float ____speedCoefficient_20;
	// UnityEngine.AnimationCurve Rocket::_speedAcceleration
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ____speedAcceleration_21;
	// System.Single Rocket::_launchTime
	float ____launchTime_22;
};

struct Rocket_t46CF4BC5917C91D995808226A9F11EA125C89AFB_StaticFields
{
	// System.Single Rocket::RocketWeigt
	float ___RocketWeigt_8;
};

// RocketPart
struct RocketPart_t012AE5380211CCEE66BD0807CE9406A26BECFAFC  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Transform RocketPart::_partPosition
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ____partPosition_4;
	// System.Single RocketPart::_explosionForce
	float ____explosionForce_5;
	// UnityEngine.GameObject RocketPart::_partModel
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____partModel_6;
};

// Sky
struct Sky_t5309122E3A5E560852B42BF0BB7E76D549ECC420  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Gradient Sky::_directionLight
	Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* ____directionLight_4;
	// UnityEngine.Gradient Sky::_ambientLight
	Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* ____ambientLight_5;
	// System.Single Sky::_changeProgress
	float ____changeProgress_6;
	// System.Single Sky::_changeSpeed
	float ____changeSpeed_7;
	// UnityEngine.Material Sky::_basicSkyMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ____basicSkyMaterial_8;
	// UnityEngine.Material Sky::_spaceSkyMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ____spaceSkyMaterial_9;
	// UnityEngine.Light Sky::_lightSource
	Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* ____lightSource_10;
	// UnityEngine.Material Sky::_skyMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ____skyMaterial_11;
};

// StateMachine
struct StateMachine_tAF6DB96F038DEE14284C0C0AE342050A544B20EB  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Rocket StateMachine::_rocket
	Rocket_t46CF4BC5917C91D995808226A9F11EA125C89AFB* ____rocket_4;
	// Store StateMachine::_store
	Store_t883F7E4E1E6CD105C7227F062ECCF41D86B511ED* ____store_5;
	// IState StateMachine::_currentState
	RuntimeObject* ____currentState_6;
	// PreparationState StateMachine::_preparationState
	PreparationState_t308D1841187A356B256D8B9067F63E1E79A3FF82* ____preparationState_7;
	// LaunchingState StateMachine::_launchingState
	LaunchingState_t7AA2A699C342C794CCABDE103D030DAF663CFF7D* ____launchingState_8;
	// DestroyState StateMachine::_destroyState
	DestroyState_t604C1F481A0FC76542E54D449FBBE63DDBEBCC4B* ____destroyState_9;
	// FinishState StateMachine::_finishState
	FinishState_t4564B3253E31DEEA3C919DF87A20BBDDB888198D* ____finishState_10;
};

// Store
struct Store_t883F7E4E1E6CD105C7227F062ECCF41D86B511ED  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Collections.Generic.List`1<RocketPartData> Store::_engineStoreList
	List_1_tD33F0782DD5C792201F436775D584D14E82EAE5C* ____engineStoreList_4;
	// System.Collections.Generic.List`1<RocketPartData> Store::_plumageStoreList
	List_1_tD33F0782DD5C792201F436775D584D14E82EAE5C* ____plumageStoreList_5;
	// System.Collections.Generic.List`1<RocketPartData> Store::_tankStoreList
	List_1_tD33F0782DD5C792201F436775D584D14E82EAE5C* ____tankStoreList_6;
	// System.Collections.Generic.List`1<RocketPartData> Store::_deflectorStoreList
	List_1_tD33F0782DD5C792201F436775D584D14E82EAE5C* ____deflectorStoreList_7;
	// UnityEngine.Transform Store::_storeView
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ____storeView_8;
	// UnityEngine.GameObject Store::_store
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____store_9;
	// UnityEngine.GameObject Store::_launchButton
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____launchButton_10;
	// UnityEngine.GameObject Store::_storeBar
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____storeBar_11;
	// Cell Store::_cellPrefab
	Cell_t88832599049D1ADACE41CE1CF9C147304CF76D5A* ____cellPrefab_12;
	// UnityEngine.Sprite Store::_resistanceSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ____resistanceSprite_13;
	// UnityEngine.Sprite Store::_impulseSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ____impulseSprite_14;
	// UnityEngine.Sprite Store::_controlSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ____controlSprite_15;
	// UnityEngine.Sprite Store::_thrustSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ____thrustSprite_16;
	// UnityEngine.Sprite Store::parametrIcon
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___parametrIcon_17;
};

// StoreCamera
struct StoreCamera_tA7B5465998E2E5AEDA6458ECF3001D4FB915B2A7  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject StoreCamera::_mainCamera
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____mainCamera_4;
	// UnityEngine.GameObject StoreCamera::_deflectorCamera
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____deflectorCamera_5;
	// UnityEngine.GameObject StoreCamera::_tankCamera
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____tankCamera_6;
	// UnityEngine.GameObject StoreCamera::_plumageCamera
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____plumageCamera_7;
	// UnityEngine.GameObject StoreCamera::_engineCamera
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____engineCamera_8;
	// UnityEngine.GameObject StoreCamera::_activeCamera
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____activeCamera_9;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// Deflector
struct Deflector_t1F58E4F5F11EE15B7C7A869008F0B14BAC192E54  : public RocketPart_t012AE5380211CCEE66BD0807CE9406A26BECFAFC
{
	// DeflectorData Deflector::_startDeflector
	DeflectorData_t6B09A69A7FF8BEF1E1CC861DDABDC15E9A8318A5* ____startDeflector_8;
};

struct Deflector_t1F58E4F5F11EE15B7C7A869008F0B14BAC192E54_StaticFields
{
	// DeflectorData Deflector::_currentDeflector
	DeflectorData_t6B09A69A7FF8BEF1E1CC861DDABDC15E9A8318A5* ____currentDeflector_7;
};

// Engine
struct Engine_t59D31EC59AD8AAF189236F53F6E5B083856B0F00  : public RocketPart_t012AE5380211CCEE66BD0807CE9406A26BECFAFC
{
	// EngineData Engine::_startEngine
	EngineData_t82D35F92377644522DEBEADE8F95040A3F65C6AA* ____startEngine_8;
};

struct Engine_t59D31EC59AD8AAF189236F53F6E5B083856B0F00_StaticFields
{
	// EngineData Engine::_currentEngine
	EngineData_t82D35F92377644522DEBEADE8F95040A3F65C6AA* ____currentEngine_7;
};

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;
};

struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___s_VertexHelper_21;
};

// Plumage
struct Plumage_tE14F878A24757929120FE226D2268E486A8384F9  : public RocketPart_t012AE5380211CCEE66BD0807CE9406A26BECFAFC
{
	// PlumageData Plumage::_startPlumage
	PlumageData_tF8E9C197181F7308588184A8236BFA6838D26F4F* ____startPlumage_8;
};

struct Plumage_tE14F878A24757929120FE226D2268E486A8384F9_StaticFields
{
	// PlumageData Plumage::_currentPlumage
	PlumageData_tF8E9C197181F7308588184A8236BFA6838D26F4F* ____currentPlumage_7;
};

// Tank
struct Tank_t2AFD1F8BD4E308EA6AC4B0EAEA9C9D7FC5B187ED  : public RocketPart_t012AE5380211CCEE66BD0807CE9406A26BECFAFC
{
	// TankData Tank::_startTank
	TankData_t928F6B9458C59DFABB9B9083374169207AC416F0* ____startTank_8;
};

struct Tank_t2AFD1F8BD4E308EA6AC4B0EAEA9C9D7FC5B187ED_StaticFields
{
	// TankData Tank::_currentTank
	TankData_t928F6B9458C59DFABB9B9083374169207AC416F0* ____currentTank_7;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_35;
};

// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_Sprite_37;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_OverrideSprite_38;
	// UnityEngine.UI.Image/Type UnityEngine.UI.Image::m_Type
	int32_t ___m_Type_39;
	// System.Boolean UnityEngine.UI.Image::m_PreserveAspect
	bool ___m_PreserveAspect_40;
	// System.Boolean UnityEngine.UI.Image::m_FillCenter
	bool ___m_FillCenter_41;
	// UnityEngine.UI.Image/FillMethod UnityEngine.UI.Image::m_FillMethod
	int32_t ___m_FillMethod_42;
	// System.Single UnityEngine.UI.Image::m_FillAmount
	float ___m_FillAmount_43;
	// System.Boolean UnityEngine.UI.Image::m_FillClockwise
	bool ___m_FillClockwise_44;
	// System.Int32 UnityEngine.UI.Image::m_FillOrigin
	int32_t ___m_FillOrigin_45;
	// System.Single UnityEngine.UI.Image::m_AlphaHitTestMinimumThreshold
	float ___m_AlphaHitTestMinimumThreshold_46;
	// System.Boolean UnityEngine.UI.Image::m_Tracked
	bool ___m_Tracked_47;
	// System.Boolean UnityEngine.UI.Image::m_UseSpriteMesh
	bool ___m_UseSpriteMesh_48;
	// System.Single UnityEngine.UI.Image::m_PixelsPerUnitMultiplier
	float ___m_PixelsPerUnitMultiplier_49;
	// System.Single UnityEngine.UI.Image::m_CachedReferencePixelsPerUnit
	float ___m_CachedReferencePixelsPerUnit_50;
};

struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Image::s_ETC1DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_ETC1DefaultUI_36;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_VertScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_VertScratch_51;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_UVScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_UVScratch_52;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Xy
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Xy_53;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Uv
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Uv_54;
	// System.Collections.Generic.List`1<UnityEngine.UI.Image> UnityEngine.UI.Image::m_TrackedTexturelessImages
	List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19* ___m_TrackedTexturelessImages_55;
	// System.Boolean UnityEngine.UI.Image::s_Initialized
	bool ___s_Initialized_56;
};

// TMPro.TMP_Text
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// System.String TMPro.TMP_Text::m_text
	String_t* ___m_text_36;
	// System.Boolean TMPro.TMP_Text::m_IsTextBackingStringDirty
	bool ___m_IsTextBackingStringDirty_37;
	// TMPro.ITextPreprocessor TMPro.TMP_Text::m_TextPreprocessor
	RuntimeObject* ___m_TextPreprocessor_38;
	// System.Boolean TMPro.TMP_Text::m_isRightToLeft
	bool ___m_isRightToLeft_39;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_fontAsset_40;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_currentFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_currentFontAsset_41;
	// System.Boolean TMPro.TMP_Text::m_isSDFShader
	bool ___m_isSDFShader_42;
	// UnityEngine.Material TMPro.TMP_Text::m_sharedMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_sharedMaterial_43;
	// UnityEngine.Material TMPro.TMP_Text::m_currentMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_currentMaterial_44;
	// System.Int32 TMPro.TMP_Text::m_currentMaterialIndex
	int32_t ___m_currentMaterialIndex_48;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontSharedMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontSharedMaterials_49;
	// UnityEngine.Material TMPro.TMP_Text::m_fontMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_fontMaterial_50;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontMaterials_51;
	// System.Boolean TMPro.TMP_Text::m_isMaterialDirty
	bool ___m_isMaterialDirty_52;
	// UnityEngine.Color32 TMPro.TMP_Text::m_fontColor32
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_fontColor32_53;
	// UnityEngine.Color TMPro.TMP_Text::m_fontColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_fontColor_54;
	// UnityEngine.Color32 TMPro.TMP_Text::m_underlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_underlineColor_56;
	// UnityEngine.Color32 TMPro.TMP_Text::m_strikethroughColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_strikethroughColor_57;
	// System.Boolean TMPro.TMP_Text::m_enableVertexGradient
	bool ___m_enableVertexGradient_58;
	// TMPro.ColorMode TMPro.TMP_Text::m_colorMode
	int32_t ___m_colorMode_59;
	// TMPro.VertexGradient TMPro.TMP_Text::m_fontColorGradient
	VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F ___m_fontColorGradient_60;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_fontColorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_fontColorGradientPreset_61;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_spriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_spriteAsset_62;
	// System.Boolean TMPro.TMP_Text::m_tintAllSprites
	bool ___m_tintAllSprites_63;
	// System.Boolean TMPro.TMP_Text::m_tintSprite
	bool ___m_tintSprite_64;
	// UnityEngine.Color32 TMPro.TMP_Text::m_spriteColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_spriteColor_65;
	// TMPro.TMP_StyleSheet TMPro.TMP_Text::m_StyleSheet
	TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859* ___m_StyleSheet_66;
	// TMPro.TMP_Style TMPro.TMP_Text::m_TextStyle
	TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C* ___m_TextStyle_67;
	// System.Int32 TMPro.TMP_Text::m_TextStyleHashCode
	int32_t ___m_TextStyleHashCode_68;
	// System.Boolean TMPro.TMP_Text::m_overrideHtmlColors
	bool ___m_overrideHtmlColors_69;
	// UnityEngine.Color32 TMPro.TMP_Text::m_faceColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_faceColor_70;
	// UnityEngine.Color32 TMPro.TMP_Text::m_outlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_outlineColor_71;
	// System.Single TMPro.TMP_Text::m_outlineWidth
	float ___m_outlineWidth_72;
	// System.Single TMPro.TMP_Text::m_fontSize
	float ___m_fontSize_73;
	// System.Single TMPro.TMP_Text::m_currentFontSize
	float ___m_currentFontSize_74;
	// System.Single TMPro.TMP_Text::m_fontSizeBase
	float ___m_fontSizeBase_75;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_sizeStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_sizeStack_76;
	// TMPro.FontWeight TMPro.TMP_Text::m_fontWeight
	int32_t ___m_fontWeight_77;
	// TMPro.FontWeight TMPro.TMP_Text::m_FontWeightInternal
	int32_t ___m_FontWeightInternal_78;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.TMP_Text::m_FontWeightStack
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___m_FontWeightStack_79;
	// System.Boolean TMPro.TMP_Text::m_enableAutoSizing
	bool ___m_enableAutoSizing_80;
	// System.Single TMPro.TMP_Text::m_maxFontSize
	float ___m_maxFontSize_81;
	// System.Single TMPro.TMP_Text::m_minFontSize
	float ___m_minFontSize_82;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeIterationCount
	int32_t ___m_AutoSizeIterationCount_83;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeMaxIterationCount
	int32_t ___m_AutoSizeMaxIterationCount_84;
	// System.Boolean TMPro.TMP_Text::m_IsAutoSizePointSizeSet
	bool ___m_IsAutoSizePointSizeSet_85;
	// System.Single TMPro.TMP_Text::m_fontSizeMin
	float ___m_fontSizeMin_86;
	// System.Single TMPro.TMP_Text::m_fontSizeMax
	float ___m_fontSizeMax_87;
	// TMPro.FontStyles TMPro.TMP_Text::m_fontStyle
	int32_t ___m_fontStyle_88;
	// TMPro.FontStyles TMPro.TMP_Text::m_FontStyleInternal
	int32_t ___m_FontStyleInternal_89;
	// TMPro.TMP_FontStyleStack TMPro.TMP_Text::m_fontStyleStack
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___m_fontStyleStack_90;
	// System.Boolean TMPro.TMP_Text::m_isUsingBold
	bool ___m_isUsingBold_91;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_HorizontalAlignment
	int32_t ___m_HorizontalAlignment_92;
	// TMPro.VerticalAlignmentOptions TMPro.TMP_Text::m_VerticalAlignment
	int32_t ___m_VerticalAlignment_93;
	// TMPro.TextAlignmentOptions TMPro.TMP_Text::m_textAlignment
	int32_t ___m_textAlignment_94;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_lineJustification
	int32_t ___m_lineJustification_95;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.TMP_Text::m_lineJustificationStack
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___m_lineJustificationStack_96;
	// UnityEngine.Vector3[] TMPro.TMP_Text::m_textContainerLocalCorners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_textContainerLocalCorners_97;
	// System.Single TMPro.TMP_Text::m_characterSpacing
	float ___m_characterSpacing_98;
	// System.Single TMPro.TMP_Text::m_cSpacing
	float ___m_cSpacing_99;
	// System.Single TMPro.TMP_Text::m_monoSpacing
	float ___m_monoSpacing_100;
	// System.Single TMPro.TMP_Text::m_wordSpacing
	float ___m_wordSpacing_101;
	// System.Single TMPro.TMP_Text::m_lineSpacing
	float ___m_lineSpacing_102;
	// System.Single TMPro.TMP_Text::m_lineSpacingDelta
	float ___m_lineSpacingDelta_103;
	// System.Single TMPro.TMP_Text::m_lineHeight
	float ___m_lineHeight_104;
	// System.Boolean TMPro.TMP_Text::m_IsDrivenLineSpacing
	bool ___m_IsDrivenLineSpacing_105;
	// System.Single TMPro.TMP_Text::m_lineSpacingMax
	float ___m_lineSpacingMax_106;
	// System.Single TMPro.TMP_Text::m_paragraphSpacing
	float ___m_paragraphSpacing_107;
	// System.Single TMPro.TMP_Text::m_charWidthMaxAdj
	float ___m_charWidthMaxAdj_108;
	// System.Single TMPro.TMP_Text::m_charWidthAdjDelta
	float ___m_charWidthAdjDelta_109;
	// System.Boolean TMPro.TMP_Text::m_enableWordWrapping
	bool ___m_enableWordWrapping_110;
	// System.Boolean TMPro.TMP_Text::m_isCharacterWrappingEnabled
	bool ___m_isCharacterWrappingEnabled_111;
	// System.Boolean TMPro.TMP_Text::m_isNonBreakingSpace
	bool ___m_isNonBreakingSpace_112;
	// System.Boolean TMPro.TMP_Text::m_isIgnoringAlignment
	bool ___m_isIgnoringAlignment_113;
	// System.Single TMPro.TMP_Text::m_wordWrappingRatios
	float ___m_wordWrappingRatios_114;
	// TMPro.TextOverflowModes TMPro.TMP_Text::m_overflowMode
	int32_t ___m_overflowMode_115;
	// System.Int32 TMPro.TMP_Text::m_firstOverflowCharacterIndex
	int32_t ___m_firstOverflowCharacterIndex_116;
	// TMPro.TMP_Text TMPro.TMP_Text::m_linkedTextComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___m_linkedTextComponent_117;
	// TMPro.TMP_Text TMPro.TMP_Text::parentLinkedComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___parentLinkedComponent_118;
	// System.Boolean TMPro.TMP_Text::m_isTextTruncated
	bool ___m_isTextTruncated_119;
	// System.Boolean TMPro.TMP_Text::m_enableKerning
	bool ___m_enableKerning_120;
	// System.Single TMPro.TMP_Text::m_GlyphHorizontalAdvanceAdjustment
	float ___m_GlyphHorizontalAdvanceAdjustment_121;
	// System.Boolean TMPro.TMP_Text::m_enableExtraPadding
	bool ___m_enableExtraPadding_122;
	// System.Boolean TMPro.TMP_Text::checkPaddingRequired
	bool ___checkPaddingRequired_123;
	// System.Boolean TMPro.TMP_Text::m_isRichText
	bool ___m_isRichText_124;
	// System.Boolean TMPro.TMP_Text::m_parseCtrlCharacters
	bool ___m_parseCtrlCharacters_125;
	// System.Boolean TMPro.TMP_Text::m_isOverlay
	bool ___m_isOverlay_126;
	// System.Boolean TMPro.TMP_Text::m_isOrthographic
	bool ___m_isOrthographic_127;
	// System.Boolean TMPro.TMP_Text::m_isCullingEnabled
	bool ___m_isCullingEnabled_128;
	// System.Boolean TMPro.TMP_Text::m_isMaskingEnabled
	bool ___m_isMaskingEnabled_129;
	// System.Boolean TMPro.TMP_Text::isMaskUpdateRequired
	bool ___isMaskUpdateRequired_130;
	// System.Boolean TMPro.TMP_Text::m_ignoreCulling
	bool ___m_ignoreCulling_131;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_horizontalMapping
	int32_t ___m_horizontalMapping_132;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_verticalMapping
	int32_t ___m_verticalMapping_133;
	// System.Single TMPro.TMP_Text::m_uvLineOffset
	float ___m_uvLineOffset_134;
	// TMPro.TextRenderFlags TMPro.TMP_Text::m_renderMode
	int32_t ___m_renderMode_135;
	// TMPro.VertexSortingOrder TMPro.TMP_Text::m_geometrySortingOrder
	int32_t ___m_geometrySortingOrder_136;
	// System.Boolean TMPro.TMP_Text::m_IsTextObjectScaleStatic
	bool ___m_IsTextObjectScaleStatic_137;
	// System.Boolean TMPro.TMP_Text::m_VertexBufferAutoSizeReduction
	bool ___m_VertexBufferAutoSizeReduction_138;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacter
	int32_t ___m_firstVisibleCharacter_139;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleCharacters
	int32_t ___m_maxVisibleCharacters_140;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleWords
	int32_t ___m_maxVisibleWords_141;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleLines
	int32_t ___m_maxVisibleLines_142;
	// System.Boolean TMPro.TMP_Text::m_useMaxVisibleDescender
	bool ___m_useMaxVisibleDescender_143;
	// System.Int32 TMPro.TMP_Text::m_pageToDisplay
	int32_t ___m_pageToDisplay_144;
	// System.Boolean TMPro.TMP_Text::m_isNewPage
	bool ___m_isNewPage_145;
	// UnityEngine.Vector4 TMPro.TMP_Text::m_margin
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_margin_146;
	// System.Single TMPro.TMP_Text::m_marginLeft
	float ___m_marginLeft_147;
	// System.Single TMPro.TMP_Text::m_marginRight
	float ___m_marginRight_148;
	// System.Single TMPro.TMP_Text::m_marginWidth
	float ___m_marginWidth_149;
	// System.Single TMPro.TMP_Text::m_marginHeight
	float ___m_marginHeight_150;
	// System.Single TMPro.TMP_Text::m_width
	float ___m_width_151;
	// TMPro.TMP_TextInfo TMPro.TMP_Text::m_textInfo
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___m_textInfo_152;
	// System.Boolean TMPro.TMP_Text::m_havePropertiesChanged
	bool ___m_havePropertiesChanged_153;
	// System.Boolean TMPro.TMP_Text::m_isUsingLegacyAnimationComponent
	bool ___m_isUsingLegacyAnimationComponent_154;
	// UnityEngine.Transform TMPro.TMP_Text::m_transform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_transform_155;
	// UnityEngine.RectTransform TMPro.TMP_Text::m_rectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_rectTransform_156;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousRectTransformSize
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousRectTransformSize_157;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousPivotPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousPivotPosition_158;
	// System.Boolean TMPro.TMP_Text::<autoSizeTextContainer>k__BackingField
	bool ___U3CautoSizeTextContainerU3Ek__BackingField_159;
	// System.Boolean TMPro.TMP_Text::m_autoSizeTextContainer
	bool ___m_autoSizeTextContainer_160;
	// UnityEngine.Mesh TMPro.TMP_Text::m_mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_mesh_161;
	// System.Boolean TMPro.TMP_Text::m_isVolumetricText
	bool ___m_isVolumetricText_162;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TMP_Text::OnPreRenderText
	Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1* ___OnPreRenderText_165;
	// TMPro.TMP_SpriteAnimator TMPro.TMP_Text::m_spriteAnimator
	TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4* ___m_spriteAnimator_166;
	// System.Single TMPro.TMP_Text::m_flexibleHeight
	float ___m_flexibleHeight_167;
	// System.Single TMPro.TMP_Text::m_flexibleWidth
	float ___m_flexibleWidth_168;
	// System.Single TMPro.TMP_Text::m_minWidth
	float ___m_minWidth_169;
	// System.Single TMPro.TMP_Text::m_minHeight
	float ___m_minHeight_170;
	// System.Single TMPro.TMP_Text::m_maxWidth
	float ___m_maxWidth_171;
	// System.Single TMPro.TMP_Text::m_maxHeight
	float ___m_maxHeight_172;
	// UnityEngine.UI.LayoutElement TMPro.TMP_Text::m_LayoutElement
	LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A* ___m_LayoutElement_173;
	// System.Single TMPro.TMP_Text::m_preferredWidth
	float ___m_preferredWidth_174;
	// System.Single TMPro.TMP_Text::m_renderedWidth
	float ___m_renderedWidth_175;
	// System.Boolean TMPro.TMP_Text::m_isPreferredWidthDirty
	bool ___m_isPreferredWidthDirty_176;
	// System.Single TMPro.TMP_Text::m_preferredHeight
	float ___m_preferredHeight_177;
	// System.Single TMPro.TMP_Text::m_renderedHeight
	float ___m_renderedHeight_178;
	// System.Boolean TMPro.TMP_Text::m_isPreferredHeightDirty
	bool ___m_isPreferredHeightDirty_179;
	// System.Boolean TMPro.TMP_Text::m_isCalculatingPreferredValues
	bool ___m_isCalculatingPreferredValues_180;
	// System.Int32 TMPro.TMP_Text::m_layoutPriority
	int32_t ___m_layoutPriority_181;
	// System.Boolean TMPro.TMP_Text::m_isLayoutDirty
	bool ___m_isLayoutDirty_182;
	// System.Boolean TMPro.TMP_Text::m_isAwake
	bool ___m_isAwake_183;
	// System.Boolean TMPro.TMP_Text::m_isWaitingOnResourceLoad
	bool ___m_isWaitingOnResourceLoad_184;
	// TMPro.TMP_Text/TextInputSources TMPro.TMP_Text::m_inputSource
	int32_t ___m_inputSource_185;
	// System.Single TMPro.TMP_Text::m_fontScaleMultiplier
	float ___m_fontScaleMultiplier_186;
	// System.Single TMPro.TMP_Text::tag_LineIndent
	float ___tag_LineIndent_190;
	// System.Single TMPro.TMP_Text::tag_Indent
	float ___tag_Indent_191;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_indentStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_indentStack_192;
	// System.Boolean TMPro.TMP_Text::tag_NoParsing
	bool ___tag_NoParsing_193;
	// System.Boolean TMPro.TMP_Text::m_isParsingText
	bool ___m_isParsingText_194;
	// UnityEngine.Matrix4x4 TMPro.TMP_Text::m_FXMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_FXMatrix_195;
	// System.Boolean TMPro.TMP_Text::m_isFXMatrixSet
	bool ___m_isFXMatrixSet_196;
	// TMPro.TMP_Text/UnicodeChar[] TMPro.TMP_Text::m_TextProcessingArray
	UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5* ___m_TextProcessingArray_197;
	// System.Int32 TMPro.TMP_Text::m_InternalTextProcessingArraySize
	int32_t ___m_InternalTextProcessingArraySize_198;
	// TMPro.TMP_CharacterInfo[] TMPro.TMP_Text::m_internalCharacterInfo
	TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99* ___m_internalCharacterInfo_199;
	// System.Int32 TMPro.TMP_Text::m_totalCharacterCount
	int32_t ___m_totalCharacterCount_200;
	// System.Int32 TMPro.TMP_Text::m_characterCount
	int32_t ___m_characterCount_207;
	// System.Int32 TMPro.TMP_Text::m_firstCharacterOfLine
	int32_t ___m_firstCharacterOfLine_208;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacterOfLine
	int32_t ___m_firstVisibleCharacterOfLine_209;
	// System.Int32 TMPro.TMP_Text::m_lastCharacterOfLine
	int32_t ___m_lastCharacterOfLine_210;
	// System.Int32 TMPro.TMP_Text::m_lastVisibleCharacterOfLine
	int32_t ___m_lastVisibleCharacterOfLine_211;
	// System.Int32 TMPro.TMP_Text::m_lineNumber
	int32_t ___m_lineNumber_212;
	// System.Int32 TMPro.TMP_Text::m_lineVisibleCharacterCount
	int32_t ___m_lineVisibleCharacterCount_213;
	// System.Int32 TMPro.TMP_Text::m_pageNumber
	int32_t ___m_pageNumber_214;
	// System.Single TMPro.TMP_Text::m_PageAscender
	float ___m_PageAscender_215;
	// System.Single TMPro.TMP_Text::m_maxTextAscender
	float ___m_maxTextAscender_216;
	// System.Single TMPro.TMP_Text::m_maxCapHeight
	float ___m_maxCapHeight_217;
	// System.Single TMPro.TMP_Text::m_ElementAscender
	float ___m_ElementAscender_218;
	// System.Single TMPro.TMP_Text::m_ElementDescender
	float ___m_ElementDescender_219;
	// System.Single TMPro.TMP_Text::m_maxLineAscender
	float ___m_maxLineAscender_220;
	// System.Single TMPro.TMP_Text::m_maxLineDescender
	float ___m_maxLineDescender_221;
	// System.Single TMPro.TMP_Text::m_startOfLineAscender
	float ___m_startOfLineAscender_222;
	// System.Single TMPro.TMP_Text::m_startOfLineDescender
	float ___m_startOfLineDescender_223;
	// System.Single TMPro.TMP_Text::m_lineOffset
	float ___m_lineOffset_224;
	// TMPro.Extents TMPro.TMP_Text::m_meshExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___m_meshExtents_225;
	// UnityEngine.Color32 TMPro.TMP_Text::m_htmlColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_htmlColor_226;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_colorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_colorStack_227;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_underlineColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_underlineColorStack_228;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_strikethroughColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_strikethroughColorStack_229;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.TMP_Text::m_HighlightStateStack
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___m_HighlightStateStack_230;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_colorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_colorGradientPreset_231;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.TMP_Text::m_colorGradientStack
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___m_colorGradientStack_232;
	// System.Boolean TMPro.TMP_Text::m_colorGradientPresetIsTinted
	bool ___m_colorGradientPresetIsTinted_233;
	// System.Single TMPro.TMP_Text::m_tabSpacing
	float ___m_tabSpacing_234;
	// System.Single TMPro.TMP_Text::m_spacing
	float ___m_spacing_235;
	// TMPro.TMP_TextProcessingStack`1<System.Int32>[] TMPro.TMP_Text::m_TextStyleStacks
	TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2* ___m_TextStyleStacks_236;
	// System.Int32 TMPro.TMP_Text::m_TextStyleStackDepth
	int32_t ___m_TextStyleStackDepth_237;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_ItalicAngleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_ItalicAngleStack_238;
	// System.Int32 TMPro.TMP_Text::m_ItalicAngle
	int32_t ___m_ItalicAngle_239;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_actionStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_actionStack_240;
	// System.Single TMPro.TMP_Text::m_padding
	float ___m_padding_241;
	// System.Single TMPro.TMP_Text::m_baselineOffset
	float ___m_baselineOffset_242;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_baselineOffsetStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_baselineOffsetStack_243;
	// System.Single TMPro.TMP_Text::m_xAdvance
	float ___m_xAdvance_244;
	// TMPro.TMP_TextElementType TMPro.TMP_Text::m_textElementType
	int32_t ___m_textElementType_245;
	// TMPro.TMP_TextElement TMPro.TMP_Text::m_cached_TextElement
	TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5* ___m_cached_TextElement_246;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Ellipsis
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Ellipsis_247;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Underline
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Underline_248;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_defaultSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_defaultSpriteAsset_249;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_currentSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_currentSpriteAsset_250;
	// System.Int32 TMPro.TMP_Text::m_spriteCount
	int32_t ___m_spriteCount_251;
	// System.Int32 TMPro.TMP_Text::m_spriteIndex
	int32_t ___m_spriteIndex_252;
	// System.Int32 TMPro.TMP_Text::m_spriteAnimationID
	int32_t ___m_spriteAnimationID_253;
	// System.Boolean TMPro.TMP_Text::m_ignoreActiveState
	bool ___m_ignoreActiveState_256;
	// TMPro.TMP_Text/TextBackingContainer TMPro.TMP_Text::m_TextBackingArray
	TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 ___m_TextBackingArray_257;
	// System.Decimal[] TMPro.TMP_Text::k_Power
	DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615* ___k_Power_258;
};

struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_StaticFields
{
	// TMPro.MaterialReference[] TMPro.TMP_Text::m_materialReferences
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___m_materialReferences_45;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> TMPro.TMP_Text::m_materialReferenceIndexLookup
	Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* ___m_materialReferenceIndexLookup_46;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.TMP_Text::m_materialReferenceStack
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___m_materialReferenceStack_47;
	// UnityEngine.Color32 TMPro.TMP_Text::s_colorWhite
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___s_colorWhite_55;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset> TMPro.TMP_Text::OnFontAssetRequest
	Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C* ___OnFontAssetRequest_163;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset> TMPro.TMP_Text::OnSpriteAssetRequest
	Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5* ___OnSpriteAssetRequest_164;
	// System.Char[] TMPro.TMP_Text::m_htmlTag
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_htmlTag_187;
	// TMPro.RichTextTagAttribute[] TMPro.TMP_Text::m_xmlAttribute
	RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D* ___m_xmlAttribute_188;
	// System.Single[] TMPro.TMP_Text::m_attributeParameterValues
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___m_attributeParameterValues_189;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedWordWrapState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedWordWrapState_201;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLineState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLineState_202;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedEllipsisState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedEllipsisState_203;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLastValidState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLastValidState_204;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedSoftLineBreakState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedSoftLineBreakState_205;
	// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState> TMPro.TMP_Text::m_EllipsisInsertionCandidateStack
	TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F ___m_EllipsisInsertionCandidateStack_206;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_ParseTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ParseTextMarker_254;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_InsertNewLineMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_InsertNewLineMarker_255;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargePositiveVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargePositiveVector2_259;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargeNegativeVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargeNegativeVector2_260;
	// System.Single TMPro.TMP_Text::k_LargePositiveFloat
	float ___k_LargePositiveFloat_261;
	// System.Single TMPro.TMP_Text::k_LargeNegativeFloat
	float ___k_LargeNegativeFloat_262;
	// System.Int32 TMPro.TMP_Text::k_LargePositiveInt
	int32_t ___k_LargePositiveInt_263;
	// System.Int32 TMPro.TMP_Text::k_LargeNegativeInt
	int32_t ___k_LargeNegativeInt_264;
};

// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224* ___m_FontData_36;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_37;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCache_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCacheForLayout_39;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_41;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ___m_TempVerts_42;
};

struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultText_40;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m872899879F710B2E55BC157F35464F03877C8DFA_gshared (RuntimeObject* ___original0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent1, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;

// System.Void Events/SimpleDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleDelegate__ctor_m52198E5C89703FE51B58861C8D85FBC3885F4082 (SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C (Delegate_t* ___a0, Delegate_t* ___b1, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116 (Delegate_t* ___source0, Delegate_t* ___value1, const RuntimeMethod* method) ;
// System.Void Base::renedrBase()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Base_renedrBase_m76C33AFE9E192390A09C8F3F242FA57059687A12 (Base_tB0E39575E6C88869B432ADD314CBDC55F04FAECB* __this, const RuntimeMethod* method) ;
// System.Int32 LevelSaverLoader::LoadBaseRang()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LevelSaverLoader_LoadBaseRang_m924ADC988E570E3AE43174F7BC4185468F4A0A3F (const RuntimeMethod* method) ;
// System.Collections.IEnumerator UnityEngine.Transform::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Transform_GetEnumerator_mA7E1C882ACA0C33E284711CD09971DEA3FFEF404 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<BaseData>::GetEnumerator()
inline Enumerator_tA10393DDF9C05EED829F84968687591C0E06F965 List_1_GetEnumerator_mA19A5DD3F06B10BBE2861B3E241CD33D94227F53 (List_1_t18BD6E268F9F6583CEEE974C0C08EF6E26DCA9D7* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tA10393DDF9C05EED829F84968687591C0E06F965 (*) (List_1_t18BD6E268F9F6583CEEE974C0C08EF6E26DCA9D7*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<BaseData>::Dispose()
inline void Enumerator_Dispose_mA21FBF50D67D9E84F34007835E6A899C0F7031A0 (Enumerator_tA10393DDF9C05EED829F84968687591C0E06F965* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tA10393DDF9C05EED829F84968687591C0E06F965*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<BaseData>::get_Current()
inline BaseData_t5144136E89F73ED714F412780B5FC9AD12F42B90* Enumerator_get_Current_m5D05F036C21C364B1997C69DEC0047A15453137A_inline (Enumerator_tA10393DDF9C05EED829F84968687591C0E06F965* __this, const RuntimeMethod* method)
{
	return ((  BaseData_t5144136E89F73ED714F412780B5FC9AD12F42B90* (*) (Enumerator_tA10393DDF9C05EED829F84968687591C0E06F965*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T,UnityEngine.Transform)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m002192C406088F7BA156339AAA9B1BB5D69BE934 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___original0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent1, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m872899879F710B2E55BC157F35464F03877C8DFA_gshared)(___original0, ___parent1, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<BaseData>::MoveNext()
inline bool Enumerator_MoveNext_m1D96BA3D440A88F1C0811A494B986BD81011052C (Enumerator_tA10393DDF9C05EED829F84968687591C0E06F965* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tA10393DDF9C05EED829F84968687591C0E06F965*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<BaseData>::.ctor()
inline void List_1__ctor_mDE2C59020503FE976B03DA5B58DE1D32DBDE0454 (List_1_t18BD6E268F9F6583CEEE974C0C08EF6E26DCA9D7* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t18BD6E268F9F6583CEEE974C0C08EF6E26DCA9D7*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void BaseCamera::activateCamera(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseCamera_activateCamera_m5267EBB4578A38CF3EA0E6155F30EAE03A905D71 (BaseCamera_t29BC3F9897A65213D2D9A5EC36D83751BABDD9B5* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___activeCamera0, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Void UnityEngine.ScriptableObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF (ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetKey(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKey_m0BF0499CADC378F02B6BEE2399FB945AB929B81A (int32_t ___key0, const RuntimeMethod* method) ;
// System.Void LevelSaverLoader::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelSaverLoader_Reset_m9A9E6E475ABA64231B25978F7DC7644999637053 (const RuntimeMethod* method) ;
// System.Void BaseStore::initStore()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseStore_initStore_m4F22A4B1DC3BCACDEB924CCF8AC56BB9B136BF21 (BaseStore_t83AB0F9340CBCB63C4FB015CED41A9BCD629E2CB* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<BaseData>::get_Count()
inline int32_t List_1_get_Count_m634C797B91EA3162B923A56ECF66DE828EAB7134_inline (List_1_t18BD6E268F9F6583CEEE974C0C08EF6E26DCA9D7* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t18BD6E268F9F6583CEEE974C0C08EF6E26DCA9D7*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Void BaseStore::showBaseStore()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseStore_showBaseStore_mF4961FA40D750B7BA4E7F8DB2839826B1F97F168 (BaseStore_t83AB0F9340CBCB63C4FB015CED41A9BCD629E2CB* __this, const RuntimeMethod* method) ;
// System.Void Events/SimpleDelegate::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SimpleDelegate_Invoke_mE39CE43C6B97CE701F70DE6A5DCDAB2EAAA05C94_inline (SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1* __this, const RuntimeMethod* method) ;
// System.Int32 LevelSaverLoader::LoadBudget()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LevelSaverLoader_LoadBudget_m6A1C69213A55E0EEFC9426FB0DE5ADB64E888432 (const RuntimeMethod* method) ;
// System.Void LevelSaverLoader::SaveBudget(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelSaverLoader_SaveBudget_m8DD52955218827D1615ECA889824161100FC3DE1 (int32_t ___budget0, const RuntimeMethod* method) ;
// System.Void LevelSaverLoader::SaveBaseRang(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelSaverLoader_SaveBaseRang_mEE7757FC09D8F59D764D6E1E7CD975469FCB751F (int32_t ___rang0, const RuntimeMethod* method) ;
// System.Void Events/FloatDelegate::Invoke(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FloatDelegate_Invoke_m4D49E45F98F312099A4ADDA6AEC51B40771DE2E6_inline (FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46* __this, float ___f0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<BaseData>::get_Item(System.Int32)
inline BaseData_t5144136E89F73ED714F412780B5FC9AD12F42B90* List_1_get_Item_mBB843ADB13AA49C70185ECAC18C36ADF4F932FFC (List_1_t18BD6E268F9F6583CEEE974C0C08EF6E26DCA9D7* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  BaseData_t5144136E89F73ED714F412780B5FC9AD12F42B90* (*) (List_1_t18BD6E268F9F6583CEEE974C0C08EF6E26DCA9D7*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Void UnityEngine.UI.Image::set_sprite(UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE (Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* __this, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___value0, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color32::op_Implicit(UnityEngine.Color32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color32_op_Implicit_m203A634DBB77053C9400C68065CA29529103D172_inline (Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___c0, const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline (float ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(System.Single,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m29F4414A9D30B7C0CD8455C4B2F049E8CCF66745_inline (float ___d0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) ;
// UnityEngine.SceneManagement.Scene UnityEngine.SceneManagement.SceneManager::GetActiveScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Scene_tA1DC762B79745EB5140F054C884855B922318356 SceneManager_GetActiveScene_m2DB2A1ACB84805968A4B6396BFDFB92C0AF32BCE (const RuntimeMethod* method) ;
// System.String UnityEngine.SceneManagement.Scene::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Scene_get_name_m3C818DFA663E159274DAD823B780C7616C5E2A8C (Scene_tA1DC762B79745EB5140F054C884855B922318356* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String,UnityEngine.SceneManagement.LoadSceneMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m92684F7A44947924E5EB26D9D534C0ABEC8686E4 (String_t* ___sceneName0, int32_t ___mode1, const RuntimeMethod* method) ;
// LevelData Level::loadLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LevelData_tE6EAE053C277D3E4ED073363F0BF24BDBADFC4D5* Level_loadLevel_m4843AE8B2F76476DA07937FD0E159CD1AB7F519A (Level_t1CED3B73CCB94716BF67A03B39D9DE9A991FD5A1* __this, const RuntimeMethod* method) ;
// System.Void Level::renderBase()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Level_renderBase_m57C67962330217360AF065ED85D16072E700D09B (Level_t1CED3B73CCB94716BF67A03B39D9DE9A991FD5A1* __this, const RuntimeMethod* method) ;
// System.Void LevelSaverLoader::SaveLevel(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelSaverLoader_SaveLevel_m088C6E7A4C4B38DD7C21F7B011C9A78FC8A985E0 (int32_t ___level0, const RuntimeMethod* method) ;
// System.Int32 LevelSaverLoader::LoadCurrentLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LevelSaverLoader_LoadCurrentLevel_mD6E98B2D6AC3147BA236D2E492EF193611BCAE05 (const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<LevelData>::GetEnumerator()
inline Enumerator_tBFF6DA9BE8EA2640F1C5F642D2436586AA67434B List_1_GetEnumerator_m81E0CEC164686859C689EB0C4B2B6911F1B20729 (List_1_t5D51C2F548F7E4364A14BB81D41C0CAE0A900E0A* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tBFF6DA9BE8EA2640F1C5F642D2436586AA67434B (*) (List_1_t5D51C2F548F7E4364A14BB81D41C0CAE0A900E0A*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<LevelData>::Dispose()
inline void Enumerator_Dispose_mAB2F9A493B9407B42C8E1AB74ACCB5C567BDDB17 (Enumerator_tBFF6DA9BE8EA2640F1C5F642D2436586AA67434B* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tBFF6DA9BE8EA2640F1C5F642D2436586AA67434B*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<LevelData>::get_Current()
inline LevelData_tE6EAE053C277D3E4ED073363F0BF24BDBADFC4D5* Enumerator_get_Current_m8BE99FA76955640697D9D607B42F71E04FB1EDEE_inline (Enumerator_tBFF6DA9BE8EA2640F1C5F642D2436586AA67434B* __this, const RuntimeMethod* method)
{
	return ((  LevelData_tE6EAE053C277D3E4ED073363F0BF24BDBADFC4D5* (*) (Enumerator_tBFF6DA9BE8EA2640F1C5F642D2436586AA67434B*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<LevelData>::MoveNext()
inline bool Enumerator_MoveNext_mD6B01A66A8590288667BE5CBAE5056030CB4E289 (Enumerator_tBFF6DA9BE8EA2640F1C5F642D2436586AA67434B* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tBFF6DA9BE8EA2640F1C5F642D2436586AA67434B*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Boolean UnityEngine.PlayerPrefs::HasKey(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayerPrefs_HasKey_m9EB15A18BE611107251F2E2F6CE70636F88CAB5F (String_t* ___key0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.PlayerPrefs::GetInt(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayerPrefs_GetInt_m35C13A87BBC7907554CE5405EB5D00CF85E7457B (String_t* ___key0, const RuntimeMethod* method) ;
// System.Void UnityEngine.PlayerPrefs::SetInt(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_SetInt_mDC9617BFD56FEC670626A1002D9A5FE963D8D175 (String_t* ___key0, int32_t ___value1, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void Events/DeflectorDelegate::Invoke(DeflectorData)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DeflectorDelegate_Invoke_m729B6CA0909341CAAAD4E822F99E81B74CD0BB66_inline (DeflectorDelegate_t7F503635DF21105D46E33B53A4921DA342943B1B* __this, DeflectorData_t6B09A69A7FF8BEF1E1CC861DDABDC15E9A8318A5* ___data0, const RuntimeMethod* method) ;
// System.String System.Single::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972 (float* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Void RocketPartData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RocketPartData__ctor_m7ED5ED1EE80D7B87FD9C9771741B7A11474A3349 (RocketPartData_t5D52B3A630DE734008E8AC3C974C6604543F03C3* __this, const RuntimeMethod* method) ;
// System.Void Events/EngineDelegate::Invoke(EngineData)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EngineDelegate_Invoke_m0B2D282E44DDEAEEE5C8C95DABC07A2179B92722_inline (EngineDelegate_t7BD0ACF919FD17DB5AED3D8609768F62FE90FC5D* __this, EngineData_t82D35F92377644522DEBEADE8F95040A3F65C6AA* ___data0, const RuntimeMethod* method) ;
// System.Void Events/PlumagageDelegate::Invoke(PlumageData)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PlumagageDelegate_Invoke_m7BFA66B023F4F9A87ECEE93B7DBBE2B1E182C487_inline (PlumagageDelegate_t7796A8A34036A8879878AF048A60102069DA5EDF* __this, PlumageData_tF8E9C197181F7308588184A8236BFA6838D26F4F* ___data0, const RuntimeMethod* method) ;
// System.Void Events/TankDelegate::Invoke(TankData)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TankDelegate_Invoke_m6C16B27CFCCFDAF6621280BEEB2B0137F498847A_inline (TankDelegate_tD05489FE7D4AAD92C0F65F9D07006F7522B875C5* __this, TankData_t928F6B9458C59DFABB9B9083374169207AC416F0* ___data0, const RuntimeMethod* method) ;
// System.Void Events/FloatDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FloatDelegate__ctor_mF5CFDCFA2728F6F061009EDF3AE1BEC8F79B3B6C (FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void Rocket::calculateSpeed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rocket_calculateSpeed_m9FC618557D1979E2E90AB31BE151D93E0146F104 (Rocket_t46CF4BC5917C91D995808226A9F11EA125C89AFB* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D (const RuntimeMethod* method) ;
// System.Single UnityEngine.AnimationCurve::Evaluate(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AnimationCurve_Evaluate_m50B857043DE251A186032ADBCBB4CEF817F4EE3C (AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* __this, float ___time0, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 Bezier::GetCurveTrajectory(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Bezier_GetCurveTrajectory_mA659FD6173BC9A1C932C7958E6A5358F6D620992 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___p00, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___p11, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___p22, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___p33, float ___t4, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 Bezier::GetCurveDeirection(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Bezier_GetCurveDeirection_m28986DC5A641F31FCDB6330735211B436E380838 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___p00, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___p11, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___p22, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___p33, float ___t4, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::LookRotation(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_LookRotation_m8C0F294E5143F93D378E020EAD9DA2288A5907A3 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forward0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Gizmos::DrawLine(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gizmos_DrawLine_m09F46DC2EA3C2200E465435A29960E8BCD84DD9C (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___from0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___to1, const RuntimeMethod* method) ;
// System.String UnityEngine.Component::get_tag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Component_get_tag_m7561A81116CAB82B8A459E934662BFC2039FB7EF (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Void RocketPart::Explosion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RocketPart_Explosion_m221B47BB0FB5B4E82E3190DEE208FA7D3305FD71 (RocketPart_t012AE5380211CCEE66BD0807CE9406A26BECFAFC* __this, const RuntimeMethod* method) ;
// System.Void Events/GameObjectDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObjectDelegate__ctor_m58ADAF680615D0BF7C4F42CC621E509D115A87AE (GameObjectDelegate_t2014FF2A7D5B2ACE8C6D43C262A0D07379B70A95* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void Events/DeflectorDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflectorDelegate__ctor_m18733098E71A041B5D1C6D28695BB280C333BF18 (DeflectorDelegate_t7F503635DF21105D46E33B53A4921DA342943B1B* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void Deflector::updateDeflector(DeflectorData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Deflector_updateDeflector_mE16D9B12E31D58A0914CAA23496A8E631034B705 (Deflector_t1F58E4F5F11EE15B7C7A869008F0B14BAC192E54* __this, DeflectorData_t6B09A69A7FF8BEF1E1CC861DDABDC15E9A8318A5* ___newDeflector0, const RuntimeMethod* method) ;
// System.Void RocketPart::renderPart(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RocketPart_renderPart_m21CE2B1E6035BAE71A967FFB1019F3DB166429C2 (RocketPart_t012AE5380211CCEE66BD0807CE9406A26BECFAFC* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___part0, const RuntimeMethod* method) ;
// System.Void RocketPart::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RocketPart__ctor_mB15DBBF4A7E906E14523FE2D9E09FC35F74DADDC (RocketPart_t012AE5380211CCEE66BD0807CE9406A26BECFAFC* __this, const RuntimeMethod* method) ;
// System.Void Events/EngineDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EngineDelegate__ctor_mFF985FFC8F94D0389EFC2A73E3BD36C3B67514DA (EngineDelegate_t7BD0ACF919FD17DB5AED3D8609768F62FE90FC5D* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void Engine::updateEngine(EngineData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Engine_updateEngine_m7B8F321626DB23E6CB5F4761C66437EE59580B22 (Engine_t59D31EC59AD8AAF189236F53F6E5B083856B0F00* __this, EngineData_t82D35F92377644522DEBEADE8F95040A3F65C6AA* ___newEngine0, const RuntimeMethod* method) ;
// System.Void Events/PlumagageDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlumagageDelegate__ctor_m273F874A0EFB43F2154C7AB7E36E14AE3DEE0EA8 (PlumagageDelegate_t7796A8A34036A8879878AF048A60102069DA5EDF* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void Plumage::updatePlumage(PlumageData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Plumage_updatePlumage_m223CF8C8579CB8B8E95E8377654699F70F92B67F (Plumage_tE14F878A24757929120FE226D2268E486A8384F9* __this, PlumageData_tF8E9C197181F7308588184A8236BFA6838D26F4F* ___newPlumage0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Random::Range(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Random_Range_mF26F26EB446B76823B4815C91FA0907B484DF02B (float ___minInclusive0, float ___maxInclusive1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<UnityEngine.Rigidbody>()
inline Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* GameObject_AddComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m03A761629A3F71B0248F1B26EF612F592B757093 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// System.Void UnityEngine.Rigidbody::AddForce(UnityEngine.Vector3,UnityEngine.ForceMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_AddForce_mBDBC288D0E266BC1B62E3649B4FCE46E7EA9CCBC (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___force0, int32_t ___mode1, const RuntimeMethod* method) ;
// System.Void Events/TankDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TankDelegate__ctor_mF2C45BA0BFC2B5BB989F75DFB9322F4DD2E12597 (TankDelegate_tD05489FE7D4AAD92C0F65F9D07006F7522B875C5* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void Tank::updateTank(TankData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tank_updateTank_m108CDFFDC537A24318B7FA70B34C39A77A3A0DEB (Tank_t2AFD1F8BD4E308EA6AC4B0EAEA9C9D7FC5B187ED* __this, TankData_t928F6B9458C59DFABB9B9083374169207AC416F0* ___newTank0, const RuntimeMethod* method) ;
// System.Void PreparationState::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PreparationState__ctor_m608A1377D614E8977477AB6AAB2E1E33E647660B (PreparationState_t308D1841187A356B256D8B9067F63E1E79A3FF82* __this, const RuntimeMethod* method) ;
// System.Void LaunchingState::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LaunchingState__ctor_m493DA61F6094B32B3988BED81A553FC81FAD2EC2 (LaunchingState_t7AA2A699C342C794CCABDE103D030DAF663CFF7D* __this, const RuntimeMethod* method) ;
// System.Void DestroyState::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DestroyState__ctor_m97A1ADECB8843A0CB081FE68A9987F4C6A41F109 (DestroyState_t604C1F481A0FC76542E54D449FBBE63DDBEBCC4B* __this, const RuntimeMethod* method) ;
// System.Void FinishState::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FinishState__ctor_mBF6509A367361D24AFC41C8123053D355335D2CA (FinishState_t4564B3253E31DEEA3C919DF87A20BBDDB888198D* __this, const RuntimeMethod* method) ;
// System.Boolean Rocket::RockedIsReady()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Rocket_RockedIsReady_m4AA35FB621B70899D41BFD3D8E09AACD24E02931 (Rocket_t46CF4BC5917C91D995808226A9F11EA125C89AFB* __this, const RuntimeMethod* method) ;
// System.Void StateMachine::changeState(IState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateMachine_changeState_m7D68674326F76AC77067C0D0222D82027AD20784 (StateMachine_tAF6DB96F038DEE14284C0C0AE342050A544B20EB* __this, RuntimeObject* ___newState0, const RuntimeMethod* method) ;
// System.Void Rocket::DestroyRocket()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rocket_DestroyRocket_m322F640C0568BFFFCA2FC90B611F0E5CDC2C595F (Rocket_t46CF4BC5917C91D995808226A9F11EA125C89AFB* __this, const RuntimeMethod* method) ;
// System.Void Rocket::LaunchRocket()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rocket_LaunchRocket_mB61F5182C372BAB2A132822961ECB87CBD65056A (Rocket_t46CF4BC5917C91D995808226A9F11EA125C89AFB* __this, const RuntimeMethod* method) ;
// System.Void Rocket::SubscribeRocketToPreparationEvents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rocket_SubscribeRocketToPreparationEvents_m3344B4A9421C4A6269477AF80CCE377A9AE28B28 (Rocket_t46CF4BC5917C91D995808226A9F11EA125C89AFB* __this, const RuntimeMethod* method) ;
// System.Void Store::SubscribeStoreToPreparationEvents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Store_SubscribeStoreToPreparationEvents_m86A8482E61AC62800F38CA8893709BAD7A7EF769 (Store_t883F7E4E1E6CD105C7227F062ECCF41D86B511ED* __this, const RuntimeMethod* method) ;
// System.Void Rocket::UnSubscribeRocketToPreparationEvents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rocket_UnSubscribeRocketToPreparationEvents_m84F3A1A4DB07D41AA5DFBDD88F7D2933DF7A9B19 (Rocket_t46CF4BC5917C91D995808226A9F11EA125C89AFB* __this, const RuntimeMethod* method) ;
// System.Void Store::UnSubscribeStoreToPreparationEvents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Store_UnSubscribeStoreToPreparationEvents_m5FF2683F8BA0AB68D4DBB7C51FB45EFE557A8E9B (Store_t883F7E4E1E6CD105C7227F062ECCF41D86B511ED* __this, const RuntimeMethod* method) ;
// System.Void Store::hideAllStoreUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Store_hideAllStoreUI_m1C40E2EBD8AE396864AEA1A14760819096753131 (Store_t883F7E4E1E6CD105C7227F062ECCF41D86B511ED* __this, const RuntimeMethod* method) ;
// System.Void StoreCamera::activateCamera(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StoreCamera_activateCamera_m2C77A72D2104EDAAF2ABCE8AD374A27A70617538 (StoreCamera_tA7B5465998E2E5AEDA6458ECF3001D4FB915B2A7* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___activeCamera0, const RuntimeMethod* method) ;
// System.Void LevelCell/cellDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void cellDelegate__ctor_mF2FE6119AA070C41A67D37A81D003C49699A1EB8 (cellDelegate_t460ACF0FFE0D0FC85DF14E2203498FE748D74EEE* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void MissionInformationWindow::ShowInformation(System.String,System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MissionInformationWindow_ShowInformation_m8A9821F245789101CD275D90EDA23FDC86C777CB (MissionInformationWindow_tCAD9D85E87544887EB8EE5A089D3E2C87556D0AF* __this, String_t* ___name0, String_t* ___description1, float ___budget2, const RuntimeMethod* method) ;
// System.Void LevelCell/cellDelegate::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void cellDelegate_Invoke_mA7D3F9F5CE9223F8F4B7689C85C2640D1C58DDAE_inline (cellDelegate_t460ACF0FFE0D0FC85DF14E2203498FE748D74EEE* __this, const RuntimeMethod* method) ;
// System.Void LevelSaverLoader::SaveCurrentLevel(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelSaverLoader_SaveCurrentLevel_mEB769C5EC39F6BD103BC56519D32C7878EE11B4F (int32_t ___level0, const RuntimeMethod* method) ;
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m7237839058F581BFCA0A79BB96F6F931469E43CF (String_t* ___sceneName0, const RuntimeMethod* method) ;
// System.Void LevelMenu::initLevelList()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelMenu_initLevelList_mB28B60622DDD4B4AF014B3001FEBC54EE4450517 (LevelMenu_t6891BFAF859BCE6FD3FC107B0A40B48DFF968D8A* __this, const RuntimeMethod* method) ;
// System.Int32 LevelSaverLoader::LoadLevels()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LevelSaverLoader_LoadLevels_m642C839D2854E6003764905222DD1979F53D15FE (const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<LevelCell>(T,UnityEngine.Transform)
inline LevelCell_tADC4647C88211220C302069A345C4675278773CB* Object_Instantiate_TisLevelCell_tADC4647C88211220C302069A345C4675278773CB_m9D0E6DC89A0CF36B6E6771B193A1B72565F7C8CB (LevelCell_tADC4647C88211220C302069A345C4675278773CB* ___original0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent1, const RuntimeMethod* method)
{
	return ((  LevelCell_tADC4647C88211220C302069A345C4675278773CB* (*) (LevelCell_tADC4647C88211220C302069A345C4675278773CB*, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m872899879F710B2E55BC157F35464F03877C8DFA_gshared)(___original0, ___parent1, method);
}
// System.Void LevelCell::InitLevelCell(LevelData,System.Boolean,MissionInformationWindow)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelCell_InitLevelCell_mAF183DDA9340D970FB2E82B9ED58282E4D3C06A8 (LevelCell_tADC4647C88211220C302069A345C4675278773CB* __this, LevelData_tE6EAE053C277D3E4ED073363F0BF24BDBADFC4D5* ___levelData0, bool ___isActive1, MissionInformationWindow_tCAD9D85E87544887EB8EE5A089D3E2C87556D0AF* ___infoWindow2, const RuntimeMethod* method) ;
// System.Void LevelMenu::showLevelMenu()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelMenu_showLevelMenu_mA57F06C01CA5E624A9681C1D530E400653C4F7B3 (LevelMenu_t6891BFAF859BCE6FD3FC107B0A40B48DFF968D8A* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<LevelData>::.ctor()
inline void List_1__ctor_m8F27E8AABFB53268913A2C731EF1CB13B00F1A2D (List_1_t5D51C2F548F7E4364A14BB81D41C0CAE0A900E0A* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t5D51C2F548F7E4364A14BB81D41C0CAE0A900E0A*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void MenuBudget::updateBudget(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuBudget_updateBudget_m9A5B590D3C9F2CC2B519649EBF88394E9659B021 (MenuBudget_t85890A4C72C1B046830CF1AB2A798553120D4792* __this, float ___budget0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::Translate(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Translate_m018D015E89C8CB743C54A21B4A1C5202EBF6297A (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___translation0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetKeyDown(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyDown_m4D8FE3CF83D6650C34E66A95175DC37DF2D98916 (String_t* ___name0, const RuntimeMethod* method) ;
// System.Void Cell/CellDelegate::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CellDelegate_Invoke_mDDA9289DD40B5A74F4B0A9FDF6BC4535BD386A43_inline (CellDelegate_t96442117D3C482D1AF013088C40ADF19D1E6AB5C* __this, const RuntimeMethod* method) ;
// System.Void Store::initStore(System.Collections.Generic.List`1<RocketPartData>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Store_initStore_mC615015619B73BBB5DE10D6168A09836A3C8D908 (Store_t883F7E4E1E6CD105C7227F062ECCF41D86B511ED* __this, List_1_tD33F0782DD5C792201F436775D584D14E82EAE5C* ___partData0, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<RocketPartData>::GetEnumerator()
inline Enumerator_tB48663E6C2779374FD14FD95868F926EFE5FD596 List_1_GetEnumerator_m901E88E24A6D3BA25BC887089D21913E675E2315 (List_1_tD33F0782DD5C792201F436775D584D14E82EAE5C* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tB48663E6C2779374FD14FD95868F926EFE5FD596 (*) (List_1_tD33F0782DD5C792201F436775D584D14E82EAE5C*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<RocketPartData>::Dispose()
inline void Enumerator_Dispose_m62EEB495F8C407E1396B8E49E9C5F80FA4A88B60 (Enumerator_tB48663E6C2779374FD14FD95868F926EFE5FD596* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tB48663E6C2779374FD14FD95868F926EFE5FD596*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<RocketPartData>::get_Current()
inline RocketPartData_t5D52B3A630DE734008E8AC3C974C6604543F03C3* Enumerator_get_Current_mE9BB6FDFFF24640F407E05E1738DEA4BA3DF2521_inline (Enumerator_tB48663E6C2779374FD14FD95868F926EFE5FD596* __this, const RuntimeMethod* method)
{
	return ((  RocketPartData_t5D52B3A630DE734008E8AC3C974C6604543F03C3* (*) (Enumerator_tB48663E6C2779374FD14FD95868F926EFE5FD596*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// T UnityEngine.Object::Instantiate<Cell>(T,UnityEngine.Transform)
inline Cell_t88832599049D1ADACE41CE1CF9C147304CF76D5A* Object_Instantiate_TisCell_t88832599049D1ADACE41CE1CF9C147304CF76D5A_m6152200E039251C666072A4E99AB84927B5DCBD2 (Cell_t88832599049D1ADACE41CE1CF9C147304CF76D5A* ___original0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent1, const RuntimeMethod* method)
{
	return ((  Cell_t88832599049D1ADACE41CE1CF9C147304CF76D5A* (*) (Cell_t88832599049D1ADACE41CE1CF9C147304CF76D5A*, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m872899879F710B2E55BC157F35464F03877C8DFA_gshared)(___original0, ___parent1, method);
}
// System.Void Cell::InitCell(UnityEngine.Sprite,UnityEngine.Sprite,UnityEngine.Color32,System.String,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cell_InitCell_mCFF27F2BAE41D4E3C77804C183C1357E9E715FB0 (Cell_t88832599049D1ADACE41CE1CF9C147304CF76D5A* __this, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___icon0, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___parametrIcon1, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___backGroundColor2, String_t* ___name3, float ___price4, float ___parametrValue5, float ___weight6, const RuntimeMethod* method) ;
// System.Void Cell/CellDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CellDelegate__ctor_m70B49E1636005C718C80725A03C38A0BEC657256 (CellDelegate_t96442117D3C482D1AF013088C40ADF19D1E6AB5C* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<RocketPartData>::MoveNext()
inline bool Enumerator_MoveNext_mDD682DD5B55673C86BB4ADC070BA9F8CC3B99208 (Enumerator_tB48663E6C2779374FD14FD95868F926EFE5FD596* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tB48663E6C2779374FD14FD95868F926EFE5FD596*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<RocketPartData>::.ctor()
inline void List_1__ctor_mAD7089571B98D6D711E15E78A187D2913B42BB33 (List_1_tD33F0782DD5C792201F436775D584D14E82EAE5C* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tD33F0782DD5C792201F436775D584D14E82EAE5C*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Boolean UnityEngine.Audio.AudioMixer::SetFloat(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioMixer_SetFloat_m4789959013BE79E4F84F446405914908ADC3F335 (AudioMixer_tE2E8D79241711CDF9AB428C7FB96A35D80E40B04* __this, String_t* ___name0, float ___value1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Base::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Base_Awake_m6C7BF185DCCF4DAEF75A69569EF1382A07AD8250 (Base_tB0E39575E6C88869B432ADD314CBDC55F04FAECB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Base_renedrBase_m76C33AFE9E192390A09C8F3F242FA57059687A12_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Events.UpdateBaseRang += renedrBase;
		SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1* L_0 = ((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___UpdateBaseRang_31;
		SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1* L_1 = (SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1*)il2cpp_codegen_object_new(SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1_il2cpp_TypeInfo_var);
		SimpleDelegate__ctor_m52198E5C89703FE51B58861C8D85FBC3885F4082(L_1, __this, (intptr_t)((void*)Base_renedrBase_m76C33AFE9E192390A09C8F3F242FA57059687A12_RuntimeMethod_var), NULL);
		Delegate_t* L_2;
		L_2 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_0, L_1, NULL);
		((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___UpdateBaseRang_31 = ((SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1*)CastclassSealed((RuntimeObject*)L_2, SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___UpdateBaseRang_31), (void*)((SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1*)CastclassSealed((RuntimeObject*)L_2, SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1_il2cpp_TypeInfo_var)));
		// }
		return;
	}
}
// System.Void Base::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Base_OnDestroy_mE26F73769BF75DBB10BE0D666E7CBBA70DCA2464 (Base_tB0E39575E6C88869B432ADD314CBDC55F04FAECB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Base_renedrBase_m76C33AFE9E192390A09C8F3F242FA57059687A12_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Events.UpdateBaseRang -= renedrBase;
		SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1* L_0 = ((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___UpdateBaseRang_31;
		SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1* L_1 = (SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1*)il2cpp_codegen_object_new(SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1_il2cpp_TypeInfo_var);
		SimpleDelegate__ctor_m52198E5C89703FE51B58861C8D85FBC3885F4082(L_1, __this, (intptr_t)((void*)Base_renedrBase_m76C33AFE9E192390A09C8F3F242FA57059687A12_RuntimeMethod_var), NULL);
		Delegate_t* L_2;
		L_2 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_0, L_1, NULL);
		((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___UpdateBaseRang_31 = ((SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1*)CastclassSealed((RuntimeObject*)L_2, SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___UpdateBaseRang_31), (void*)((SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1*)CastclassSealed((RuntimeObject*)L_2, SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1_il2cpp_TypeInfo_var)));
		// }
		return;
	}
}
// System.Void Base::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Base_Start_m2781D1A42FF3D2AC2ADEC016934B4A584C9A7B98 (Base_tB0E39575E6C88869B432ADD314CBDC55F04FAECB* __this, const RuntimeMethod* method) 
{
	{
		// renedrBase();
		Base_renedrBase_m76C33AFE9E192390A09C8F3F242FA57059687A12(__this, NULL);
		// }
		return;
	}
}
// System.Void Base::renedrBase()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Base_renedrBase_m76C33AFE9E192390A09C8F3F242FA57059687A12 (Base_tB0E39575E6C88869B432ADD314CBDC55F04FAECB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mA21FBF50D67D9E84F34007835E6A899C0F7031A0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m1D96BA3D440A88F1C0811A494B986BD81011052C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m5D05F036C21C364B1997C69DEC0047A15453137A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LevelSaverLoader_t9A00927063FF8A8DEFDFDDA5D0BA47688D4D2BAF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mA19A5DD3F06B10BBE2861B3E241CD33D94227F53_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m002192C406088F7BA156339AAA9B1BB5D69BE934_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	Enumerator_tA10393DDF9C05EED829F84968687591C0E06F965 V_2;
	memset((&V_2), 0, sizeof(V_2));
	BaseData_t5144136E89F73ED714F412780B5FC9AD12F42B90* V_3 = NULL;
	{
		// _baseRang = LevelSaverLoader.LoadBaseRang();
		il2cpp_codegen_runtime_class_init_inline(LevelSaverLoader_t9A00927063FF8A8DEFDFDDA5D0BA47688D4D2BAF_il2cpp_TypeInfo_var);
		int32_t L_0;
		L_0 = LevelSaverLoader_LoadBaseRang_m924ADC988E570E3AE43174F7BC4185468F4A0A3F(NULL);
		__this->____baseRang_4 = L_0;
		// foreach(Transform child in _basePosition){
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = __this->____basePosition_6;
		RuntimeObject* L_2;
		L_2 = Transform_GetEnumerator_mA7E1C882ACA0C33E284711CD09971DEA3FFEF404(L_1, NULL);
		V_0 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0038:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_3 = V_0;
					V_1 = ((RuntimeObject*)IsInst((RuntimeObject*)L_3, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_4 = V_1;
					if (!L_4)
					{
						goto IL_0048;
					}
				}
				{
					RuntimeObject* L_5 = V_1;
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_5);
				}

IL_0048:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_002e_1;
			}

IL_0019_1:
			{
				// foreach(Transform child in _basePosition){
				RuntimeObject* L_6 = V_0;
				RuntimeObject* L_7;
				L_7 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_6);
				// Destroy(child.gameObject);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
				L_8 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(((Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)CastclassClass((RuntimeObject*)L_7, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var)), NULL);
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_8, NULL);
			}

IL_002e_1:
			{
				// foreach(Transform child in _basePosition){
				RuntimeObject* L_9 = V_0;
				bool L_10;
				L_10 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_9);
				if (L_10)
				{
					goto IL_0019_1;
				}
			}
			{
				goto IL_0049;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0049:
	{
		// foreach(BaseData data in _basesList){
		List_1_t18BD6E268F9F6583CEEE974C0C08EF6E26DCA9D7* L_11 = __this->____basesList_5;
		Enumerator_tA10393DDF9C05EED829F84968687591C0E06F965 L_12;
		L_12 = List_1_GetEnumerator_mA19A5DD3F06B10BBE2861B3E241CD33D94227F53(L_11, List_1_GetEnumerator_mA19A5DD3F06B10BBE2861B3E241CD33D94227F53_RuntimeMethod_var);
		V_2 = L_12;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_008a:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mA21FBF50D67D9E84F34007835E6A899C0F7031A0((&V_2), Enumerator_Dispose_mA21FBF50D67D9E84F34007835E6A899C0F7031A0_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_007f_1;
			}

IL_0057_1:
			{
				// foreach(BaseData data in _basesList){
				BaseData_t5144136E89F73ED714F412780B5FC9AD12F42B90* L_13;
				L_13 = Enumerator_get_Current_m5D05F036C21C364B1997C69DEC0047A15453137A_inline((&V_2), Enumerator_get_Current_m5D05F036C21C364B1997C69DEC0047A15453137A_RuntimeMethod_var);
				V_3 = L_13;
				// if(data.BaseRang == _baseRang){
				BaseData_t5144136E89F73ED714F412780B5FC9AD12F42B90* L_14 = V_3;
				int32_t L_15 = L_14->___BaseRang_4;
				int32_t L_16 = __this->____baseRang_4;
				if ((!(((uint32_t)L_15) == ((uint32_t)L_16))))
				{
					goto IL_007f_1;
				}
			}
			{
				// Instantiate(data.BasePrefab, _basePosition);
				BaseData_t5144136E89F73ED714F412780B5FC9AD12F42B90* L_17 = V_3;
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_18 = L_17->___BasePrefab_5;
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19 = __this->____basePosition_6;
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_20;
				L_20 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m002192C406088F7BA156339AAA9B1BB5D69BE934(L_18, L_19, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m002192C406088F7BA156339AAA9B1BB5D69BE934_RuntimeMethod_var);
			}

IL_007f_1:
			{
				// foreach(BaseData data in _basesList){
				bool L_21;
				L_21 = Enumerator_MoveNext_m1D96BA3D440A88F1C0811A494B986BD81011052C((&V_2), Enumerator_MoveNext_m1D96BA3D440A88F1C0811A494B986BD81011052C_RuntimeMethod_var);
				if (L_21)
				{
					goto IL_0057_1;
				}
			}
			{
				goto IL_0098;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0098:
	{
		// }
		return;
	}
}
// System.Void Base::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Base__ctor_mC57B9F9C97AA047E435B7CF01763ACB24805AB5B (Base_tB0E39575E6C88869B432ADD314CBDC55F04FAECB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mDE2C59020503FE976B03DA5B58DE1D32DBDE0454_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t18BD6E268F9F6583CEEE974C0C08EF6E26DCA9D7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [SerializeField]private List<BaseData> _basesList = new List<BaseData>();
		List_1_t18BD6E268F9F6583CEEE974C0C08EF6E26DCA9D7* L_0 = (List_1_t18BD6E268F9F6583CEEE974C0C08EF6E26DCA9D7*)il2cpp_codegen_object_new(List_1_t18BD6E268F9F6583CEEE974C0C08EF6E26DCA9D7_il2cpp_TypeInfo_var);
		List_1__ctor_mDE2C59020503FE976B03DA5B58DE1D32DBDE0454(L_0, List_1__ctor_mDE2C59020503FE976B03DA5B58DE1D32DBDE0454_RuntimeMethod_var);
		__this->____basesList_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____basesList_5), (void*)L_0);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void BaseCamera::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseCamera_Awake_mC9E435A56CBB52F41A94CABB553883A7FAAE10E3 (BaseCamera_t29BC3F9897A65213D2D9A5EC36D83751BABDD9B5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseCamera_backToStartCamera_mDA559350C6D5B64ADBD5D1B099B6A4C0F30E7521_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseCamera_lookAtBaseStore_m9EA88710C03A490AC10659DD167DB60AEEF87810_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseCamera_lookAtMissionsStore_m68E5B69714EDCDB983A35959FAADA01AB7F5BF30_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Events.ShowBaseStore += lookAtBaseStore;
		SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1* L_0 = ((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___ShowBaseStore_32;
		SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1* L_1 = (SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1*)il2cpp_codegen_object_new(SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1_il2cpp_TypeInfo_var);
		SimpleDelegate__ctor_m52198E5C89703FE51B58861C8D85FBC3885F4082(L_1, __this, (intptr_t)((void*)BaseCamera_lookAtBaseStore_m9EA88710C03A490AC10659DD167DB60AEEF87810_RuntimeMethod_var), NULL);
		Delegate_t* L_2;
		L_2 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_0, L_1, NULL);
		((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___ShowBaseStore_32 = ((SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1*)CastclassSealed((RuntimeObject*)L_2, SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___ShowBaseStore_32), (void*)((SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1*)CastclassSealed((RuntimeObject*)L_2, SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1_il2cpp_TypeInfo_var)));
		// Events.ShowMissionsStore += lookAtMissionsStore;
		SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1* L_3 = ((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___ShowMissionsStore_33;
		SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1* L_4 = (SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1*)il2cpp_codegen_object_new(SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1_il2cpp_TypeInfo_var);
		SimpleDelegate__ctor_m52198E5C89703FE51B58861C8D85FBC3885F4082(L_4, __this, (intptr_t)((void*)BaseCamera_lookAtMissionsStore_m68E5B69714EDCDB983A35959FAADA01AB7F5BF30_RuntimeMethod_var), NULL);
		Delegate_t* L_5;
		L_5 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_3, L_4, NULL);
		((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___ShowMissionsStore_33 = ((SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1*)CastclassSealed((RuntimeObject*)L_5, SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___ShowMissionsStore_33), (void*)((SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1*)CastclassSealed((RuntimeObject*)L_5, SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1_il2cpp_TypeInfo_var)));
		// Events.ShowBase += backToStartCamera;
		SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1* L_6 = ((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___ShowBase_34;
		SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1* L_7 = (SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1*)il2cpp_codegen_object_new(SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1_il2cpp_TypeInfo_var);
		SimpleDelegate__ctor_m52198E5C89703FE51B58861C8D85FBC3885F4082(L_7, __this, (intptr_t)((void*)BaseCamera_backToStartCamera_mDA559350C6D5B64ADBD5D1B099B6A4C0F30E7521_RuntimeMethod_var), NULL);
		Delegate_t* L_8;
		L_8 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_6, L_7, NULL);
		((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___ShowBase_34 = ((SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1*)CastclassSealed((RuntimeObject*)L_8, SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___ShowBase_34), (void*)((SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1*)CastclassSealed((RuntimeObject*)L_8, SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1_il2cpp_TypeInfo_var)));
		// }
		return;
	}
}
// System.Void BaseCamera::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseCamera_OnDestroy_mE96BC63C279B9CFD0449CB4BA5857175296C6A5C (BaseCamera_t29BC3F9897A65213D2D9A5EC36D83751BABDD9B5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseCamera_backToStartCamera_mDA559350C6D5B64ADBD5D1B099B6A4C0F30E7521_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseCamera_lookAtBaseStore_m9EA88710C03A490AC10659DD167DB60AEEF87810_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseCamera_lookAtMissionsStore_m68E5B69714EDCDB983A35959FAADA01AB7F5BF30_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Events.ShowBaseStore -= lookAtBaseStore;
		SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1* L_0 = ((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___ShowBaseStore_32;
		SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1* L_1 = (SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1*)il2cpp_codegen_object_new(SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1_il2cpp_TypeInfo_var);
		SimpleDelegate__ctor_m52198E5C89703FE51B58861C8D85FBC3885F4082(L_1, __this, (intptr_t)((void*)BaseCamera_lookAtBaseStore_m9EA88710C03A490AC10659DD167DB60AEEF87810_RuntimeMethod_var), NULL);
		Delegate_t* L_2;
		L_2 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_0, L_1, NULL);
		((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___ShowBaseStore_32 = ((SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1*)CastclassSealed((RuntimeObject*)L_2, SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___ShowBaseStore_32), (void*)((SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1*)CastclassSealed((RuntimeObject*)L_2, SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1_il2cpp_TypeInfo_var)));
		// Events.ShowMissionsStore -= lookAtMissionsStore;
		SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1* L_3 = ((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___ShowMissionsStore_33;
		SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1* L_4 = (SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1*)il2cpp_codegen_object_new(SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1_il2cpp_TypeInfo_var);
		SimpleDelegate__ctor_m52198E5C89703FE51B58861C8D85FBC3885F4082(L_4, __this, (intptr_t)((void*)BaseCamera_lookAtMissionsStore_m68E5B69714EDCDB983A35959FAADA01AB7F5BF30_RuntimeMethod_var), NULL);
		Delegate_t* L_5;
		L_5 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_3, L_4, NULL);
		((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___ShowMissionsStore_33 = ((SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1*)CastclassSealed((RuntimeObject*)L_5, SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___ShowMissionsStore_33), (void*)((SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1*)CastclassSealed((RuntimeObject*)L_5, SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1_il2cpp_TypeInfo_var)));
		// Events.ShowBase -= backToStartCamera;
		SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1* L_6 = ((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___ShowBase_34;
		SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1* L_7 = (SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1*)il2cpp_codegen_object_new(SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1_il2cpp_TypeInfo_var);
		SimpleDelegate__ctor_m52198E5C89703FE51B58861C8D85FBC3885F4082(L_7, __this, (intptr_t)((void*)BaseCamera_backToStartCamera_mDA559350C6D5B64ADBD5D1B099B6A4C0F30E7521_RuntimeMethod_var), NULL);
		Delegate_t* L_8;
		L_8 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_6, L_7, NULL);
		((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___ShowBase_34 = ((SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1*)CastclassSealed((RuntimeObject*)L_8, SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___ShowBase_34), (void*)((SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1*)CastclassSealed((RuntimeObject*)L_8, SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1_il2cpp_TypeInfo_var)));
		// }
		return;
	}
}
// System.Void BaseCamera::lookAtBaseStore()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseCamera_lookAtBaseStore_m9EA88710C03A490AC10659DD167DB60AEEF87810 (BaseCamera_t29BC3F9897A65213D2D9A5EC36D83751BABDD9B5* __this, const RuntimeMethod* method) 
{
	{
		// private void lookAtBaseStore() => activateCamera(_baseStoreCamera);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->____baseStoreCamera_6;
		BaseCamera_activateCamera_m5267EBB4578A38CF3EA0E6155F30EAE03A905D71(__this, L_0, NULL);
		return;
	}
}
// System.Void BaseCamera::lookAtMissionsStore()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseCamera_lookAtMissionsStore_m68E5B69714EDCDB983A35959FAADA01AB7F5BF30 (BaseCamera_t29BC3F9897A65213D2D9A5EC36D83751BABDD9B5* __this, const RuntimeMethod* method) 
{
	{
		// private void lookAtMissionsStore() => activateCamera(_missionsStoreCamera);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->____missionsStoreCamera_5;
		BaseCamera_activateCamera_m5267EBB4578A38CF3EA0E6155F30EAE03A905D71(__this, L_0, NULL);
		return;
	}
}
// System.Void BaseCamera::backToStartCamera()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseCamera_backToStartCamera_mDA559350C6D5B64ADBD5D1B099B6A4C0F30E7521 (BaseCamera_t29BC3F9897A65213D2D9A5EC36D83751BABDD9B5* __this, const RuntimeMethod* method) 
{
	{
		// _mainCamera.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->____mainCamera_4;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)1, NULL);
		// _activeCamera.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->____activeCamera_7;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void BaseCamera::activateCamera(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseCamera_activateCamera_m5267EBB4578A38CF3EA0E6155F30EAE03A905D71 (BaseCamera_t29BC3F9897A65213D2D9A5EC36D83751BABDD9B5* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___activeCamera0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(_activeCamera != null){
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->____activeCamera_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		// _activeCamera.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->____activeCamera_7;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_2, (bool)0, NULL);
	}

IL_001a:
	{
		// _activeCamera = activeCamera;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = ___activeCamera0;
		__this->____activeCamera_7 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____activeCamera_7), (void*)L_3);
		// activeCamera.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = ___activeCamera0;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_4, (bool)1, NULL);
		// _mainCamera.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = __this->____mainCamera_4;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_5, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void BaseCamera::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseCamera__ctor_m9625021AD93339F2EE9069160A704DE42862A5F7 (BaseCamera_t29BC3F9897A65213D2D9A5EC36D83751BABDD9B5* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void BaseData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseData__ctor_m0D7676FB9252C0457345B0FA1934222BD0F5B3A6 (BaseData_t5144136E89F73ED714F412780B5FC9AD12F42B90* __this, const RuntimeMethod* method) 
{
	{
		ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void BaseStore::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseStore_Update_mF21098E868D2CE3C767DC5A8839125608E11C991 (BaseStore_t83AB0F9340CBCB63C4FB015CED41A9BCD629E2CB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LevelSaverLoader_t9A00927063FF8A8DEFDFDDA5D0BA47688D4D2BAF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Input.GetKey(KeyCode.P)){
		bool L_0;
		L_0 = Input_GetKey_m0BF0499CADC378F02B6BEE2399FB945AB929B81A(((int32_t)112), NULL);
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		// LevelSaverLoader.Reset();
		il2cpp_codegen_runtime_class_init_inline(LevelSaverLoader_t9A00927063FF8A8DEFDFDDA5D0BA47688D4D2BAF_il2cpp_TypeInfo_var);
		LevelSaverLoader_Reset_m9A9E6E475ABA64231B25978F7DC7644999637053(NULL);
	}

IL_000e:
	{
		// }
		return;
	}
}
// System.Void BaseStore::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseStore_Start_mAE61CDCBEE9A6A2E2DF1EE309EBE95A614368017 (BaseStore_t83AB0F9340CBCB63C4FB015CED41A9BCD629E2CB* __this, const RuntimeMethod* method) 
{
	{
		// initStore();
		BaseStore_initStore_m4F22A4B1DC3BCACDEB924CCF8AC56BB9B136BF21(__this, NULL);
		// }
		return;
	}
}
// System.Void BaseStore::OnMouseDown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseStore_OnMouseDown_mCDB833BAF5ACEE5B9DB15F4C76067DB383C4D855 (BaseStore_t83AB0F9340CBCB63C4FB015CED41A9BCD629E2CB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LevelSaverLoader_t9A00927063FF8A8DEFDFDDA5D0BA47688D4D2BAF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m634C797B91EA3162B923A56ECF66DE828EAB7134_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1* G_B3_0 = NULL;
	SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1* G_B2_0 = NULL;
	{
		// if(LevelSaverLoader.LoadBaseRang() != (_basesList.Count-1)){
		il2cpp_codegen_runtime_class_init_inline(LevelSaverLoader_t9A00927063FF8A8DEFDFDDA5D0BA47688D4D2BAF_il2cpp_TypeInfo_var);
		int32_t L_0;
		L_0 = LevelSaverLoader_LoadBaseRang_m924ADC988E570E3AE43174F7BC4185468F4A0A3F(NULL);
		List_1_t18BD6E268F9F6583CEEE974C0C08EF6E26DCA9D7* L_1 = __this->____basesList_4;
		int32_t L_2;
		L_2 = List_1_get_Count_m634C797B91EA3162B923A56ECF66DE828EAB7134_inline(L_1, List_1_get_Count_m634C797B91EA3162B923A56ECF66DE828EAB7134_RuntimeMethod_var);
		if ((((int32_t)L_0) == ((int32_t)((int32_t)il2cpp_codegen_subtract(L_2, 1)))))
		{
			goto IL_002f;
		}
	}
	{
		// showBaseStore();
		BaseStore_showBaseStore_mF4961FA40D750B7BA4E7F8DB2839826B1F97F168(__this, NULL);
		// initStore();
		BaseStore_initStore_m4F22A4B1DC3BCACDEB924CCF8AC56BB9B136BF21(__this, NULL);
		// Events.ShowBaseStore?.Invoke();
		SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1* L_3 = ((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___ShowBaseStore_32;
		SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1* L_4 = L_3;
		G_B2_0 = L_4;
		if (L_4)
		{
			G_B3_0 = L_4;
			goto IL_002a;
		}
	}
	{
		return;
	}

IL_002a:
	{
		SimpleDelegate_Invoke_mE39CE43C6B97CE701F70DE6A5DCDAB2EAAA05C94_inline(G_B3_0, NULL);
	}

IL_002f:
	{
		// }
		return;
	}
}
// System.Void BaseStore::UpdateBase()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseStore_UpdateBase_m23933A9AC15F5A800B9013BE710C4D5C19B41E11 (BaseStore_t83AB0F9340CBCB63C4FB015CED41A9BCD629E2CB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LevelSaverLoader_t9A00927063FF8A8DEFDFDDA5D0BA47688D4D2BAF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1* G_B3_0 = NULL;
	SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1* G_B2_0 = NULL;
	FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46* G_B6_0 = NULL;
	FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46* G_B5_0 = NULL;
	{
		// if(LevelSaverLoader.LoadBudget() >= _nextBase.BasePrice)
		il2cpp_codegen_runtime_class_init_inline(LevelSaverLoader_t9A00927063FF8A8DEFDFDDA5D0BA47688D4D2BAF_il2cpp_TypeInfo_var);
		int32_t L_0;
		L_0 = LevelSaverLoader_LoadBudget_m6A1C69213A55E0EEFC9426FB0DE5ADB64E888432(NULL);
		BaseData_t5144136E89F73ED714F412780B5FC9AD12F42B90* L_1 = __this->____nextBase_11;
		int32_t L_2 = L_1->___BasePrice_7;
		if ((((int32_t)L_0) < ((int32_t)L_2)))
		{
			goto IL_005f;
		}
	}
	{
		// LevelSaverLoader.SaveBudget(LevelSaverLoader.LoadBudget() - _nextBase.BasePrice);
		il2cpp_codegen_runtime_class_init_inline(LevelSaverLoader_t9A00927063FF8A8DEFDFDDA5D0BA47688D4D2BAF_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = LevelSaverLoader_LoadBudget_m6A1C69213A55E0EEFC9426FB0DE5ADB64E888432(NULL);
		BaseData_t5144136E89F73ED714F412780B5FC9AD12F42B90* L_4 = __this->____nextBase_11;
		int32_t L_5 = L_4->___BasePrice_7;
		LevelSaverLoader_SaveBudget_m8DD52955218827D1615ECA889824161100FC3DE1(((int32_t)il2cpp_codegen_subtract(L_3, L_5)), NULL);
		// LevelSaverLoader.SaveBaseRang(LevelSaverLoader.LoadBaseRang() + 1);
		int32_t L_6;
		L_6 = LevelSaverLoader_LoadBaseRang_m924ADC988E570E3AE43174F7BC4185468F4A0A3F(NULL);
		LevelSaverLoader_SaveBaseRang_mEE7757FC09D8F59D764D6E1E7CD975469FCB751F(((int32_t)il2cpp_codegen_add(L_6, 1)), NULL);
		// initStore();
		BaseStore_initStore_m4F22A4B1DC3BCACDEB924CCF8AC56BB9B136BF21(__this, NULL);
		// Events.UpdateBaseRang?.Invoke();
		SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1* L_7 = ((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___UpdateBaseRang_31;
		SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1* L_8 = L_7;
		G_B2_0 = L_8;
		if (L_8)
		{
			G_B3_0 = L_8;
			goto IL_0045;
		}
	}
	{
		goto IL_004a;
	}

IL_0045:
	{
		SimpleDelegate_Invoke_mE39CE43C6B97CE701F70DE6A5DCDAB2EAAA05C94_inline(G_B3_0, NULL);
	}

IL_004a:
	{
		// Events.UpdateBudgetOnMenuUI?.Invoke(LevelSaverLoader.LoadBudget());
		FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46* L_9 = ((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___UpdateBudgetOnMenuUI_20;
		FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46* L_10 = L_9;
		G_B5_0 = L_10;
		if (L_10)
		{
			G_B6_0 = L_10;
			goto IL_0054;
		}
	}
	{
		return;
	}

IL_0054:
	{
		il2cpp_codegen_runtime_class_init_inline(LevelSaverLoader_t9A00927063FF8A8DEFDFDDA5D0BA47688D4D2BAF_il2cpp_TypeInfo_var);
		int32_t L_11;
		L_11 = LevelSaverLoader_LoadBudget_m6A1C69213A55E0EEFC9426FB0DE5ADB64E888432(NULL);
		FloatDelegate_Invoke_m4D49E45F98F312099A4ADDA6AEC51B40771DE2E6_inline(G_B6_0, ((float)L_11), NULL);
	}

IL_005f:
	{
		// }
		return;
	}
}
// System.Void BaseStore::initStore()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseStore_initStore_m4F22A4B1DC3BCACDEB924CCF8AC56BB9B136BF21 (BaseStore_t83AB0F9340CBCB63C4FB015CED41A9BCD629E2CB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LevelSaverLoader_t9A00927063FF8A8DEFDFDDA5D0BA47688D4D2BAF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m634C797B91EA3162B923A56ECF66DE828EAB7134_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mBB843ADB13AA49C70185ECAC18C36ADF4F932FFC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log(LevelSaverLoader.LoadBaseRang());
		il2cpp_codegen_runtime_class_init_inline(LevelSaverLoader_t9A00927063FF8A8DEFDFDDA5D0BA47688D4D2BAF_il2cpp_TypeInfo_var);
		int32_t L_0;
		L_0 = LevelSaverLoader_LoadBaseRang_m924ADC988E570E3AE43174F7BC4185468F4A0A3F(NULL);
		int32_t L_1 = L_0;
		RuntimeObject* L_2 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_1);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_2, NULL);
		// if(LevelSaverLoader.LoadBaseRang() != (_basesList.Count-1))
		int32_t L_3;
		L_3 = LevelSaverLoader_LoadBaseRang_m924ADC988E570E3AE43174F7BC4185468F4A0A3F(NULL);
		List_1_t18BD6E268F9F6583CEEE974C0C08EF6E26DCA9D7* L_4 = __this->____basesList_4;
		int32_t L_5;
		L_5 = List_1_get_Count_m634C797B91EA3162B923A56ECF66DE828EAB7134_inline(L_4, List_1_get_Count_m634C797B91EA3162B923A56ECF66DE828EAB7134_RuntimeMethod_var);
		if ((((int32_t)L_3) == ((int32_t)((int32_t)il2cpp_codegen_subtract(L_5, 1)))))
		{
			goto IL_00b6;
		}
	}
	{
		// _nextBase = _basesList[LevelSaverLoader.LoadBaseRang() + 1];
		List_1_t18BD6E268F9F6583CEEE974C0C08EF6E26DCA9D7* L_6 = __this->____basesList_4;
		il2cpp_codegen_runtime_class_init_inline(LevelSaverLoader_t9A00927063FF8A8DEFDFDDA5D0BA47688D4D2BAF_il2cpp_TypeInfo_var);
		int32_t L_7;
		L_7 = LevelSaverLoader_LoadBaseRang_m924ADC988E570E3AE43174F7BC4185468F4A0A3F(NULL);
		BaseData_t5144136E89F73ED714F412780B5FC9AD12F42B90* L_8;
		L_8 = List_1_get_Item_mBB843ADB13AA49C70185ECAC18C36ADF4F932FFC(L_6, ((int32_t)il2cpp_codegen_add(L_7, 1)), List_1_get_Item_mBB843ADB13AA49C70185ECAC18C36ADF4F932FFC_RuntimeMethod_var);
		__this->____nextBase_11 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____nextBase_11), (void*)L_8);
		// _nextBaseIcon.sprite = _nextBase.BaseIcon;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_9 = __this->____nextBaseIcon_9;
		BaseData_t5144136E89F73ED714F412780B5FC9AD12F42B90* L_10 = __this->____nextBase_11;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_11 = L_10->___BaseIcon_8;
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_9, L_11, NULL);
		// _nextBaseBackgroundImage.color = _nextBase.BaseUIColor;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_12 = __this->____nextBaseBackgroundImage_10;
		BaseData_t5144136E89F73ED714F412780B5FC9AD12F42B90* L_13 = __this->____nextBase_11;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_14 = L_13->___BaseUIColor_9;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_15;
		L_15 = Color32_op_Implicit_m203A634DBB77053C9400C68065CA29529103D172_inline(L_14, NULL);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_12, L_15);
		// _nextBasePrice.text = _nextBase.BasePrice.ToString();
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_16 = __this->____nextBasePrice_8;
		BaseData_t5144136E89F73ED714F412780B5FC9AD12F42B90* L_17 = __this->____nextBase_11;
		int32_t* L_18 = (&L_17->___BasePrice_7);
		String_t* L_19;
		L_19 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_18, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_16, L_19);
		// _nextBaseName.text = _nextBase.BaseName;
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_20 = __this->____nextBaseName_6;
		BaseData_t5144136E89F73ED714F412780B5FC9AD12F42B90* L_21 = __this->____nextBase_11;
		String_t* L_22 = L_21->___BaseName_10;
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_20, L_22);
		// _nextBaseDescription.text = _nextBase.BaseDescription;
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_23 = __this->____nextBaseDescription_7;
		BaseData_t5144136E89F73ED714F412780B5FC9AD12F42B90* L_24 = __this->____nextBase_11;
		String_t* L_25 = L_24->___BaseDescription_11;
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_23, L_25);
	}

IL_00b6:
	{
		// }
		return;
	}
}
// System.Void BaseStore::showBaseStore()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseStore_showBaseStore_mF4961FA40D750B7BA4E7F8DB2839826B1F97F168 (BaseStore_t83AB0F9340CBCB63C4FB015CED41A9BCD629E2CB* __this, const RuntimeMethod* method) 
{
	{
		// private void showBaseStore() => _basesStore.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->____basesStore_5;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)1, NULL);
		return;
	}
}
// System.Void BaseStore::HideBaseStore()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseStore_HideBaseStore_mBA535DEC9A4DA8A70B1E303548FF7DC692A47793 (BaseStore_t83AB0F9340CBCB63C4FB015CED41A9BCD629E2CB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1* G_B2_0 = NULL;
	SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1* G_B1_0 = NULL;
	{
		// _basesStore.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->____basesStore_5;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// Events.ShowBase?.Invoke();
		SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1* L_1 = ((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___ShowBase_34;
		SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1* L_2 = L_1;
		G_B1_0 = L_2;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_0016;
		}
	}
	{
		return;
	}

IL_0016:
	{
		SimpleDelegate_Invoke_mE39CE43C6B97CE701F70DE6A5DCDAB2EAAA05C94_inline(G_B2_0, NULL);
		// }
		return;
	}
}
// System.Void BaseStore::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseStore__ctor_mB4BF4712DA6640461D5C463F0FE32DC1B7CC2782 (BaseStore_t83AB0F9340CBCB63C4FB015CED41A9BCD629E2CB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mDE2C59020503FE976B03DA5B58DE1D32DBDE0454_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t18BD6E268F9F6583CEEE974C0C08EF6E26DCA9D7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [SerializeField]private List<BaseData> _basesList = new List<BaseData>();
		List_1_t18BD6E268F9F6583CEEE974C0C08EF6E26DCA9D7* L_0 = (List_1_t18BD6E268F9F6583CEEE974C0C08EF6E26DCA9D7*)il2cpp_codegen_object_new(List_1_t18BD6E268F9F6583CEEE974C0C08EF6E26DCA9D7_il2cpp_TypeInfo_var);
		List_1__ctor_mDE2C59020503FE976B03DA5B58DE1D32DBDE0454(L_0, List_1__ctor_mDE2C59020503FE976B03DA5B58DE1D32DBDE0454_RuntimeMethod_var);
		__this->____basesList_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____basesList_4), (void*)L_0);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Vector3 Bezier::GetCurveTrajectory(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Bezier_GetCurveTrajectory_mA659FD6173BC9A1C932C7958E6A5358F6D620992 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___p00, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___p11, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___p22, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___p33, float ___t4, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// t = Mathf.Clamp01(t);
		float L_0 = ___t4;
		float L_1;
		L_1 = Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline(L_0, NULL);
		___t4 = L_1;
		// float oneMinusT = 1f - t;
		float L_2 = ___t4;
		V_0 = ((float)il2cpp_codegen_subtract((1.0f), L_2));
		// return
		//     oneMinusT * oneMinusT * oneMinusT * p0 +
		//     3f * oneMinusT * oneMinusT * t * p1 +
		//     3f * oneMinusT * t * t * p2 +
		//     t * t * t * p3;
		float L_3 = V_0;
		float L_4 = V_0;
		float L_5 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___p00;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_op_Multiply_m29F4414A9D30B7C0CD8455C4B2F049E8CCF66745_inline(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_3, L_4)), L_5)), L_6, NULL);
		float L_8 = V_0;
		float L_9 = V_0;
		float L_10 = ___t4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = ___p11;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Vector3_op_Multiply_m29F4414A9D30B7C0CD8455C4B2F049E8CCF66745_inline(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply((3.0f), L_8)), L_9)), L_10)), L_11, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_7, L_12, NULL);
		float L_14 = V_0;
		float L_15 = ___t4;
		float L_16 = ___t4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17 = ___p22;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Vector3_op_Multiply_m29F4414A9D30B7C0CD8455C4B2F049E8CCF66745_inline(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply((3.0f), L_14)), L_15)), L_16)), L_17, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_13, L_18, NULL);
		float L_20 = ___t4;
		float L_21 = ___t4;
		float L_22 = ___t4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23 = ___p33;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		L_24 = Vector3_op_Multiply_m29F4414A9D30B7C0CD8455C4B2F049E8CCF66745_inline(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_20, L_21)), L_22)), L_23, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		L_25 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_19, L_24, NULL);
		return L_25;
	}
}
// UnityEngine.Vector3 Bezier::GetCurveDeirection(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Bezier_GetCurveDeirection_m28986DC5A641F31FCDB6330735211B436E380838 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___p00, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___p11, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___p22, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___p33, float ___t4, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// t = Mathf.Clamp01(t);
		float L_0 = ___t4;
		float L_1;
		L_1 = Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline(L_0, NULL);
		___t4 = L_1;
		// float oneMinusT = 1f - t;
		float L_2 = ___t4;
		V_0 = ((float)il2cpp_codegen_subtract((1.0f), L_2));
		// return
		//     3f * oneMinusT * oneMinusT * (p1 - p0) +
		//     6f * oneMinusT * t * (p2 - p1) +
		//     3f * t * t * (p3 - p2);
		float L_3 = V_0;
		float L_4 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = ___p11;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___p00;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_5, L_6, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Vector3_op_Multiply_m29F4414A9D30B7C0CD8455C4B2F049E8CCF66745_inline(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply((3.0f), L_3)), L_4)), L_7, NULL);
		float L_9 = V_0;
		float L_10 = ___t4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = ___p22;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = ___p11;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_11, L_12, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Vector3_op_Multiply_m29F4414A9D30B7C0CD8455C4B2F049E8CCF66745_inline(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply((6.0f), L_9)), L_10)), L_13, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_8, L_14, NULL);
		float L_16 = ___t4;
		float L_17 = ___t4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = ___p33;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19 = ___p22;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_18, L_19, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = Vector3_op_Multiply_m29F4414A9D30B7C0CD8455C4B2F049E8CCF66745_inline(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply((3.0f), L_16)), L_17)), L_20, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_15, L_21, NULL);
		return L_22;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Events::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Events__ctor_m7252526B9DDE74A4BC4145D658080478E9D6AC43 (Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void EngineDelegate_Invoke_m0B2D282E44DDEAEEE5C8C95DABC07A2179B92722_Multicast(EngineDelegate_t7BD0ACF919FD17DB5AED3D8609768F62FE90FC5D* __this, EngineData_t82D35F92377644522DEBEADE8F95040A3F65C6AA* ___data0, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		EngineDelegate_t7BD0ACF919FD17DB5AED3D8609768F62FE90FC5D* currentDelegate = reinterpret_cast<EngineDelegate_t7BD0ACF919FD17DB5AED3D8609768F62FE90FC5D*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, EngineData_t82D35F92377644522DEBEADE8F95040A3F65C6AA*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___data0, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void EngineDelegate_Invoke_m0B2D282E44DDEAEEE5C8C95DABC07A2179B92722_Open(EngineDelegate_t7BD0ACF919FD17DB5AED3D8609768F62FE90FC5D* __this, EngineData_t82D35F92377644522DEBEADE8F95040A3F65C6AA* ___data0, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (EngineData_t82D35F92377644522DEBEADE8F95040A3F65C6AA*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___data0, method);
}
void EngineDelegate_Invoke_m0B2D282E44DDEAEEE5C8C95DABC07A2179B92722_OpenStaticInvoker(EngineDelegate_t7BD0ACF919FD17DB5AED3D8609768F62FE90FC5D* __this, EngineData_t82D35F92377644522DEBEADE8F95040A3F65C6AA* ___data0, const RuntimeMethod* method)
{
	InvokerActionInvoker1< EngineData_t82D35F92377644522DEBEADE8F95040A3F65C6AA* >::Invoke(__this->___method_ptr_0, method, NULL, ___data0);
}
void EngineDelegate_Invoke_m0B2D282E44DDEAEEE5C8C95DABC07A2179B92722_ClosedStaticInvoker(EngineDelegate_t7BD0ACF919FD17DB5AED3D8609768F62FE90FC5D* __this, EngineData_t82D35F92377644522DEBEADE8F95040A3F65C6AA* ___data0, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, EngineData_t82D35F92377644522DEBEADE8F95040A3F65C6AA* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___data0);
}
void EngineDelegate_Invoke_m0B2D282E44DDEAEEE5C8C95DABC07A2179B92722_OpenVirtual(EngineDelegate_t7BD0ACF919FD17DB5AED3D8609768F62FE90FC5D* __this, EngineData_t82D35F92377644522DEBEADE8F95040A3F65C6AA* ___data0, const RuntimeMethod* method)
{
	VirtualActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(method), ___data0);
}
void EngineDelegate_Invoke_m0B2D282E44DDEAEEE5C8C95DABC07A2179B92722_OpenInterface(EngineDelegate_t7BD0ACF919FD17DB5AED3D8609768F62FE90FC5D* __this, EngineData_t82D35F92377644522DEBEADE8F95040A3F65C6AA* ___data0, const RuntimeMethod* method)
{
	InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___data0);
}
void EngineDelegate_Invoke_m0B2D282E44DDEAEEE5C8C95DABC07A2179B92722_OpenGenericVirtual(EngineDelegate_t7BD0ACF919FD17DB5AED3D8609768F62FE90FC5D* __this, EngineData_t82D35F92377644522DEBEADE8F95040A3F65C6AA* ___data0, const RuntimeMethod* method)
{
	GenericVirtualActionInvoker0::Invoke(method, ___data0);
}
void EngineDelegate_Invoke_m0B2D282E44DDEAEEE5C8C95DABC07A2179B92722_OpenGenericInterface(EngineDelegate_t7BD0ACF919FD17DB5AED3D8609768F62FE90FC5D* __this, EngineData_t82D35F92377644522DEBEADE8F95040A3F65C6AA* ___data0, const RuntimeMethod* method)
{
	GenericInterfaceActionInvoker0::Invoke(method, ___data0);
}
// System.Void Events/EngineDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EngineDelegate__ctor_mFF985FFC8F94D0389EFC2A73E3BD36C3B67514DA (EngineDelegate_t7BD0ACF919FD17DB5AED3D8609768F62FE90FC5D* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&EngineDelegate_Invoke_m0B2D282E44DDEAEEE5C8C95DABC07A2179B92722_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&EngineDelegate_Invoke_m0B2D282E44DDEAEEE5C8C95DABC07A2179B92722_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&EngineDelegate_Invoke_m0B2D282E44DDEAEEE5C8C95DABC07A2179B92722_Open;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___method1))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&EngineDelegate_Invoke_m0B2D282E44DDEAEEE5C8C95DABC07A2179B92722_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&EngineDelegate_Invoke_m0B2D282E44DDEAEEE5C8C95DABC07A2179B92722_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&EngineDelegate_Invoke_m0B2D282E44DDEAEEE5C8C95DABC07A2179B92722_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&EngineDelegate_Invoke_m0B2D282E44DDEAEEE5C8C95DABC07A2179B92722_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&EngineDelegate_Invoke_m0B2D282E44DDEAEEE5C8C95DABC07A2179B92722_Open;
			}
		}
		else
		{
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&EngineDelegate_Invoke_m0B2D282E44DDEAEEE5C8C95DABC07A2179B92722_Multicast;
}
// System.Void Events/EngineDelegate::Invoke(EngineData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EngineDelegate_Invoke_m0B2D282E44DDEAEEE5C8C95DABC07A2179B92722 (EngineDelegate_t7BD0ACF919FD17DB5AED3D8609768F62FE90FC5D* __this, EngineData_t82D35F92377644522DEBEADE8F95040A3F65C6AA* ___data0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, EngineData_t82D35F92377644522DEBEADE8F95040A3F65C6AA*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___data0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Events/EngineDelegate::BeginInvoke(EngineData,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* EngineDelegate_BeginInvoke_mDDAA4D71CB6957E32E9039409A22E3B0794CC397 (EngineDelegate_t7BD0ACF919FD17DB5AED3D8609768F62FE90FC5D* __this, EngineData_t82D35F92377644522DEBEADE8F95040A3F65C6AA* ___data0, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback1, RuntimeObject* ___object2, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = ___data0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void Events/EngineDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EngineDelegate_EndInvoke_m1C540FED844BE4A4151EA2ED63EEDE0AD9AA3BF6 (EngineDelegate_t7BD0ACF919FD17DB5AED3D8609768F62FE90FC5D* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void DeflectorDelegate_Invoke_m729B6CA0909341CAAAD4E822F99E81B74CD0BB66_Multicast(DeflectorDelegate_t7F503635DF21105D46E33B53A4921DA342943B1B* __this, DeflectorData_t6B09A69A7FF8BEF1E1CC861DDABDC15E9A8318A5* ___data0, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		DeflectorDelegate_t7F503635DF21105D46E33B53A4921DA342943B1B* currentDelegate = reinterpret_cast<DeflectorDelegate_t7F503635DF21105D46E33B53A4921DA342943B1B*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, DeflectorData_t6B09A69A7FF8BEF1E1CC861DDABDC15E9A8318A5*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___data0, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void DeflectorDelegate_Invoke_m729B6CA0909341CAAAD4E822F99E81B74CD0BB66_Open(DeflectorDelegate_t7F503635DF21105D46E33B53A4921DA342943B1B* __this, DeflectorData_t6B09A69A7FF8BEF1E1CC861DDABDC15E9A8318A5* ___data0, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (DeflectorData_t6B09A69A7FF8BEF1E1CC861DDABDC15E9A8318A5*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___data0, method);
}
void DeflectorDelegate_Invoke_m729B6CA0909341CAAAD4E822F99E81B74CD0BB66_OpenStaticInvoker(DeflectorDelegate_t7F503635DF21105D46E33B53A4921DA342943B1B* __this, DeflectorData_t6B09A69A7FF8BEF1E1CC861DDABDC15E9A8318A5* ___data0, const RuntimeMethod* method)
{
	InvokerActionInvoker1< DeflectorData_t6B09A69A7FF8BEF1E1CC861DDABDC15E9A8318A5* >::Invoke(__this->___method_ptr_0, method, NULL, ___data0);
}
void DeflectorDelegate_Invoke_m729B6CA0909341CAAAD4E822F99E81B74CD0BB66_ClosedStaticInvoker(DeflectorDelegate_t7F503635DF21105D46E33B53A4921DA342943B1B* __this, DeflectorData_t6B09A69A7FF8BEF1E1CC861DDABDC15E9A8318A5* ___data0, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, DeflectorData_t6B09A69A7FF8BEF1E1CC861DDABDC15E9A8318A5* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___data0);
}
void DeflectorDelegate_Invoke_m729B6CA0909341CAAAD4E822F99E81B74CD0BB66_OpenVirtual(DeflectorDelegate_t7F503635DF21105D46E33B53A4921DA342943B1B* __this, DeflectorData_t6B09A69A7FF8BEF1E1CC861DDABDC15E9A8318A5* ___data0, const RuntimeMethod* method)
{
	VirtualActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(method), ___data0);
}
void DeflectorDelegate_Invoke_m729B6CA0909341CAAAD4E822F99E81B74CD0BB66_OpenInterface(DeflectorDelegate_t7F503635DF21105D46E33B53A4921DA342943B1B* __this, DeflectorData_t6B09A69A7FF8BEF1E1CC861DDABDC15E9A8318A5* ___data0, const RuntimeMethod* method)
{
	InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___data0);
}
void DeflectorDelegate_Invoke_m729B6CA0909341CAAAD4E822F99E81B74CD0BB66_OpenGenericVirtual(DeflectorDelegate_t7F503635DF21105D46E33B53A4921DA342943B1B* __this, DeflectorData_t6B09A69A7FF8BEF1E1CC861DDABDC15E9A8318A5* ___data0, const RuntimeMethod* method)
{
	GenericVirtualActionInvoker0::Invoke(method, ___data0);
}
void DeflectorDelegate_Invoke_m729B6CA0909341CAAAD4E822F99E81B74CD0BB66_OpenGenericInterface(DeflectorDelegate_t7F503635DF21105D46E33B53A4921DA342943B1B* __this, DeflectorData_t6B09A69A7FF8BEF1E1CC861DDABDC15E9A8318A5* ___data0, const RuntimeMethod* method)
{
	GenericInterfaceActionInvoker0::Invoke(method, ___data0);
}
// System.Void Events/DeflectorDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflectorDelegate__ctor_m18733098E71A041B5D1C6D28695BB280C333BF18 (DeflectorDelegate_t7F503635DF21105D46E33B53A4921DA342943B1B* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&DeflectorDelegate_Invoke_m729B6CA0909341CAAAD4E822F99E81B74CD0BB66_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&DeflectorDelegate_Invoke_m729B6CA0909341CAAAD4E822F99E81B74CD0BB66_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&DeflectorDelegate_Invoke_m729B6CA0909341CAAAD4E822F99E81B74CD0BB66_Open;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___method1))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&DeflectorDelegate_Invoke_m729B6CA0909341CAAAD4E822F99E81B74CD0BB66_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&DeflectorDelegate_Invoke_m729B6CA0909341CAAAD4E822F99E81B74CD0BB66_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&DeflectorDelegate_Invoke_m729B6CA0909341CAAAD4E822F99E81B74CD0BB66_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&DeflectorDelegate_Invoke_m729B6CA0909341CAAAD4E822F99E81B74CD0BB66_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&DeflectorDelegate_Invoke_m729B6CA0909341CAAAD4E822F99E81B74CD0BB66_Open;
			}
		}
		else
		{
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&DeflectorDelegate_Invoke_m729B6CA0909341CAAAD4E822F99E81B74CD0BB66_Multicast;
}
// System.Void Events/DeflectorDelegate::Invoke(DeflectorData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflectorDelegate_Invoke_m729B6CA0909341CAAAD4E822F99E81B74CD0BB66 (DeflectorDelegate_t7F503635DF21105D46E33B53A4921DA342943B1B* __this, DeflectorData_t6B09A69A7FF8BEF1E1CC861DDABDC15E9A8318A5* ___data0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, DeflectorData_t6B09A69A7FF8BEF1E1CC861DDABDC15E9A8318A5*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___data0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Events/DeflectorDelegate::BeginInvoke(DeflectorData,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DeflectorDelegate_BeginInvoke_m6F228A2800FBB0E2EB1EF36F3EC249EE4B849A35 (DeflectorDelegate_t7F503635DF21105D46E33B53A4921DA342943B1B* __this, DeflectorData_t6B09A69A7FF8BEF1E1CC861DDABDC15E9A8318A5* ___data0, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback1, RuntimeObject* ___object2, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = ___data0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void Events/DeflectorDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflectorDelegate_EndInvoke_mCC8833682A2219973C5B5A588AAEE67E30AED80A (DeflectorDelegate_t7F503635DF21105D46E33B53A4921DA342943B1B* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void TankDelegate_Invoke_m6C16B27CFCCFDAF6621280BEEB2B0137F498847A_Multicast(TankDelegate_tD05489FE7D4AAD92C0F65F9D07006F7522B875C5* __this, TankData_t928F6B9458C59DFABB9B9083374169207AC416F0* ___data0, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		TankDelegate_tD05489FE7D4AAD92C0F65F9D07006F7522B875C5* currentDelegate = reinterpret_cast<TankDelegate_tD05489FE7D4AAD92C0F65F9D07006F7522B875C5*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, TankData_t928F6B9458C59DFABB9B9083374169207AC416F0*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___data0, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void TankDelegate_Invoke_m6C16B27CFCCFDAF6621280BEEB2B0137F498847A_Open(TankDelegate_tD05489FE7D4AAD92C0F65F9D07006F7522B875C5* __this, TankData_t928F6B9458C59DFABB9B9083374169207AC416F0* ___data0, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (TankData_t928F6B9458C59DFABB9B9083374169207AC416F0*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___data0, method);
}
void TankDelegate_Invoke_m6C16B27CFCCFDAF6621280BEEB2B0137F498847A_OpenStaticInvoker(TankDelegate_tD05489FE7D4AAD92C0F65F9D07006F7522B875C5* __this, TankData_t928F6B9458C59DFABB9B9083374169207AC416F0* ___data0, const RuntimeMethod* method)
{
	InvokerActionInvoker1< TankData_t928F6B9458C59DFABB9B9083374169207AC416F0* >::Invoke(__this->___method_ptr_0, method, NULL, ___data0);
}
void TankDelegate_Invoke_m6C16B27CFCCFDAF6621280BEEB2B0137F498847A_ClosedStaticInvoker(TankDelegate_tD05489FE7D4AAD92C0F65F9D07006F7522B875C5* __this, TankData_t928F6B9458C59DFABB9B9083374169207AC416F0* ___data0, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, TankData_t928F6B9458C59DFABB9B9083374169207AC416F0* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___data0);
}
void TankDelegate_Invoke_m6C16B27CFCCFDAF6621280BEEB2B0137F498847A_OpenVirtual(TankDelegate_tD05489FE7D4AAD92C0F65F9D07006F7522B875C5* __this, TankData_t928F6B9458C59DFABB9B9083374169207AC416F0* ___data0, const RuntimeMethod* method)
{
	VirtualActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(method), ___data0);
}
void TankDelegate_Invoke_m6C16B27CFCCFDAF6621280BEEB2B0137F498847A_OpenInterface(TankDelegate_tD05489FE7D4AAD92C0F65F9D07006F7522B875C5* __this, TankData_t928F6B9458C59DFABB9B9083374169207AC416F0* ___data0, const RuntimeMethod* method)
{
	InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___data0);
}
void TankDelegate_Invoke_m6C16B27CFCCFDAF6621280BEEB2B0137F498847A_OpenGenericVirtual(TankDelegate_tD05489FE7D4AAD92C0F65F9D07006F7522B875C5* __this, TankData_t928F6B9458C59DFABB9B9083374169207AC416F0* ___data0, const RuntimeMethod* method)
{
	GenericVirtualActionInvoker0::Invoke(method, ___data0);
}
void TankDelegate_Invoke_m6C16B27CFCCFDAF6621280BEEB2B0137F498847A_OpenGenericInterface(TankDelegate_tD05489FE7D4AAD92C0F65F9D07006F7522B875C5* __this, TankData_t928F6B9458C59DFABB9B9083374169207AC416F0* ___data0, const RuntimeMethod* method)
{
	GenericInterfaceActionInvoker0::Invoke(method, ___data0);
}
// System.Void Events/TankDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TankDelegate__ctor_mF2C45BA0BFC2B5BB989F75DFB9322F4DD2E12597 (TankDelegate_tD05489FE7D4AAD92C0F65F9D07006F7522B875C5* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&TankDelegate_Invoke_m6C16B27CFCCFDAF6621280BEEB2B0137F498847A_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&TankDelegate_Invoke_m6C16B27CFCCFDAF6621280BEEB2B0137F498847A_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&TankDelegate_Invoke_m6C16B27CFCCFDAF6621280BEEB2B0137F498847A_Open;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___method1))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&TankDelegate_Invoke_m6C16B27CFCCFDAF6621280BEEB2B0137F498847A_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&TankDelegate_Invoke_m6C16B27CFCCFDAF6621280BEEB2B0137F498847A_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&TankDelegate_Invoke_m6C16B27CFCCFDAF6621280BEEB2B0137F498847A_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&TankDelegate_Invoke_m6C16B27CFCCFDAF6621280BEEB2B0137F498847A_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&TankDelegate_Invoke_m6C16B27CFCCFDAF6621280BEEB2B0137F498847A_Open;
			}
		}
		else
		{
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&TankDelegate_Invoke_m6C16B27CFCCFDAF6621280BEEB2B0137F498847A_Multicast;
}
// System.Void Events/TankDelegate::Invoke(TankData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TankDelegate_Invoke_m6C16B27CFCCFDAF6621280BEEB2B0137F498847A (TankDelegate_tD05489FE7D4AAD92C0F65F9D07006F7522B875C5* __this, TankData_t928F6B9458C59DFABB9B9083374169207AC416F0* ___data0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, TankData_t928F6B9458C59DFABB9B9083374169207AC416F0*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___data0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Events/TankDelegate::BeginInvoke(TankData,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TankDelegate_BeginInvoke_m3DE0D0E806F9A70DBAD7396CC74A1B0EC7A7748B (TankDelegate_tD05489FE7D4AAD92C0F65F9D07006F7522B875C5* __this, TankData_t928F6B9458C59DFABB9B9083374169207AC416F0* ___data0, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback1, RuntimeObject* ___object2, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = ___data0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void Events/TankDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TankDelegate_EndInvoke_mAD563F902B1B23C171A0581B7F5F0D1CE86C6BBE (TankDelegate_tD05489FE7D4AAD92C0F65F9D07006F7522B875C5* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void PlumagageDelegate_Invoke_m7BFA66B023F4F9A87ECEE93B7DBBE2B1E182C487_Multicast(PlumagageDelegate_t7796A8A34036A8879878AF048A60102069DA5EDF* __this, PlumageData_tF8E9C197181F7308588184A8236BFA6838D26F4F* ___data0, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		PlumagageDelegate_t7796A8A34036A8879878AF048A60102069DA5EDF* currentDelegate = reinterpret_cast<PlumagageDelegate_t7796A8A34036A8879878AF048A60102069DA5EDF*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, PlumageData_tF8E9C197181F7308588184A8236BFA6838D26F4F*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___data0, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void PlumagageDelegate_Invoke_m7BFA66B023F4F9A87ECEE93B7DBBE2B1E182C487_Open(PlumagageDelegate_t7796A8A34036A8879878AF048A60102069DA5EDF* __this, PlumageData_tF8E9C197181F7308588184A8236BFA6838D26F4F* ___data0, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (PlumageData_tF8E9C197181F7308588184A8236BFA6838D26F4F*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___data0, method);
}
void PlumagageDelegate_Invoke_m7BFA66B023F4F9A87ECEE93B7DBBE2B1E182C487_OpenStaticInvoker(PlumagageDelegate_t7796A8A34036A8879878AF048A60102069DA5EDF* __this, PlumageData_tF8E9C197181F7308588184A8236BFA6838D26F4F* ___data0, const RuntimeMethod* method)
{
	InvokerActionInvoker1< PlumageData_tF8E9C197181F7308588184A8236BFA6838D26F4F* >::Invoke(__this->___method_ptr_0, method, NULL, ___data0);
}
void PlumagageDelegate_Invoke_m7BFA66B023F4F9A87ECEE93B7DBBE2B1E182C487_ClosedStaticInvoker(PlumagageDelegate_t7796A8A34036A8879878AF048A60102069DA5EDF* __this, PlumageData_tF8E9C197181F7308588184A8236BFA6838D26F4F* ___data0, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, PlumageData_tF8E9C197181F7308588184A8236BFA6838D26F4F* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___data0);
}
void PlumagageDelegate_Invoke_m7BFA66B023F4F9A87ECEE93B7DBBE2B1E182C487_OpenVirtual(PlumagageDelegate_t7796A8A34036A8879878AF048A60102069DA5EDF* __this, PlumageData_tF8E9C197181F7308588184A8236BFA6838D26F4F* ___data0, const RuntimeMethod* method)
{
	VirtualActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(method), ___data0);
}
void PlumagageDelegate_Invoke_m7BFA66B023F4F9A87ECEE93B7DBBE2B1E182C487_OpenInterface(PlumagageDelegate_t7796A8A34036A8879878AF048A60102069DA5EDF* __this, PlumageData_tF8E9C197181F7308588184A8236BFA6838D26F4F* ___data0, const RuntimeMethod* method)
{
	InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___data0);
}
void PlumagageDelegate_Invoke_m7BFA66B023F4F9A87ECEE93B7DBBE2B1E182C487_OpenGenericVirtual(PlumagageDelegate_t7796A8A34036A8879878AF048A60102069DA5EDF* __this, PlumageData_tF8E9C197181F7308588184A8236BFA6838D26F4F* ___data0, const RuntimeMethod* method)
{
	GenericVirtualActionInvoker0::Invoke(method, ___data0);
}
void PlumagageDelegate_Invoke_m7BFA66B023F4F9A87ECEE93B7DBBE2B1E182C487_OpenGenericInterface(PlumagageDelegate_t7796A8A34036A8879878AF048A60102069DA5EDF* __this, PlumageData_tF8E9C197181F7308588184A8236BFA6838D26F4F* ___data0, const RuntimeMethod* method)
{
	GenericInterfaceActionInvoker0::Invoke(method, ___data0);
}
// System.Void Events/PlumagageDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlumagageDelegate__ctor_m273F874A0EFB43F2154C7AB7E36E14AE3DEE0EA8 (PlumagageDelegate_t7796A8A34036A8879878AF048A60102069DA5EDF* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&PlumagageDelegate_Invoke_m7BFA66B023F4F9A87ECEE93B7DBBE2B1E182C487_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&PlumagageDelegate_Invoke_m7BFA66B023F4F9A87ECEE93B7DBBE2B1E182C487_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&PlumagageDelegate_Invoke_m7BFA66B023F4F9A87ECEE93B7DBBE2B1E182C487_Open;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___method1))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&PlumagageDelegate_Invoke_m7BFA66B023F4F9A87ECEE93B7DBBE2B1E182C487_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&PlumagageDelegate_Invoke_m7BFA66B023F4F9A87ECEE93B7DBBE2B1E182C487_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&PlumagageDelegate_Invoke_m7BFA66B023F4F9A87ECEE93B7DBBE2B1E182C487_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&PlumagageDelegate_Invoke_m7BFA66B023F4F9A87ECEE93B7DBBE2B1E182C487_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&PlumagageDelegate_Invoke_m7BFA66B023F4F9A87ECEE93B7DBBE2B1E182C487_Open;
			}
		}
		else
		{
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&PlumagageDelegate_Invoke_m7BFA66B023F4F9A87ECEE93B7DBBE2B1E182C487_Multicast;
}
// System.Void Events/PlumagageDelegate::Invoke(PlumageData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlumagageDelegate_Invoke_m7BFA66B023F4F9A87ECEE93B7DBBE2B1E182C487 (PlumagageDelegate_t7796A8A34036A8879878AF048A60102069DA5EDF* __this, PlumageData_tF8E9C197181F7308588184A8236BFA6838D26F4F* ___data0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, PlumageData_tF8E9C197181F7308588184A8236BFA6838D26F4F*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___data0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Events/PlumagageDelegate::BeginInvoke(PlumageData,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PlumagageDelegate_BeginInvoke_mB3E6D8BF05CC9F8DC11DDD6ABFFA159B634B8ECF (PlumagageDelegate_t7796A8A34036A8879878AF048A60102069DA5EDF* __this, PlumageData_tF8E9C197181F7308588184A8236BFA6838D26F4F* ___data0, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback1, RuntimeObject* ___object2, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = ___data0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void Events/PlumagageDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlumagageDelegate_EndInvoke_m722335A5FF0730885CC0727E9AE36BED380119E5 (PlumagageDelegate_t7796A8A34036A8879878AF048A60102069DA5EDF* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void GameObjectDelegate_Invoke_mB20CFCB96744E7066E9472C0229534752B1EB5D6_Multicast(GameObjectDelegate_t2014FF2A7D5B2ACE8C6D43C262A0D07379B70A95* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___GO0, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		GameObjectDelegate_t2014FF2A7D5B2ACE8C6D43C262A0D07379B70A95* currentDelegate = reinterpret_cast<GameObjectDelegate_t2014FF2A7D5B2ACE8C6D43C262A0D07379B70A95*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___GO0, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void GameObjectDelegate_Invoke_mB20CFCB96744E7066E9472C0229534752B1EB5D6_Open(GameObjectDelegate_t2014FF2A7D5B2ACE8C6D43C262A0D07379B70A95* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___GO0, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___GO0, method);
}
void GameObjectDelegate_Invoke_mB20CFCB96744E7066E9472C0229534752B1EB5D6_OpenStaticInvoker(GameObjectDelegate_t2014FF2A7D5B2ACE8C6D43C262A0D07379B70A95* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___GO0, const RuntimeMethod* method)
{
	InvokerActionInvoker1< GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* >::Invoke(__this->___method_ptr_0, method, NULL, ___GO0);
}
void GameObjectDelegate_Invoke_mB20CFCB96744E7066E9472C0229534752B1EB5D6_ClosedStaticInvoker(GameObjectDelegate_t2014FF2A7D5B2ACE8C6D43C262A0D07379B70A95* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___GO0, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___GO0);
}
// System.Void Events/GameObjectDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObjectDelegate__ctor_m58ADAF680615D0BF7C4F42CC621E509D115A87AE (GameObjectDelegate_t2014FF2A7D5B2ACE8C6D43C262A0D07379B70A95* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&GameObjectDelegate_Invoke_mB20CFCB96744E7066E9472C0229534752B1EB5D6_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&GameObjectDelegate_Invoke_mB20CFCB96744E7066E9472C0229534752B1EB5D6_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&GameObjectDelegate_Invoke_mB20CFCB96744E7066E9472C0229534752B1EB5D6_Open;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&GameObjectDelegate_Invoke_mB20CFCB96744E7066E9472C0229534752B1EB5D6_Open;
		}
		else
		{
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&GameObjectDelegate_Invoke_mB20CFCB96744E7066E9472C0229534752B1EB5D6_Multicast;
}
// System.Void Events/GameObjectDelegate::Invoke(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObjectDelegate_Invoke_mB20CFCB96744E7066E9472C0229534752B1EB5D6 (GameObjectDelegate_t2014FF2A7D5B2ACE8C6D43C262A0D07379B70A95* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___GO0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___GO0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Events/GameObjectDelegate::BeginInvoke(UnityEngine.GameObject,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObjectDelegate_BeginInvoke_mF3B564FC62AF8B0720C1A998AE09D192EEE5D139 (GameObjectDelegate_t2014FF2A7D5B2ACE8C6D43C262A0D07379B70A95* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___GO0, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback1, RuntimeObject* ___object2, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = ___GO0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void Events/GameObjectDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObjectDelegate_EndInvoke_mA580B5CABD999626A0E35A9346B48EC2ACCDA953 (GameObjectDelegate_t2014FF2A7D5B2ACE8C6D43C262A0D07379B70A95* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void FloatDelegate_Invoke_m4D49E45F98F312099A4ADDA6AEC51B40771DE2E6_Multicast(FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46* __this, float ___f0, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46* currentDelegate = reinterpret_cast<FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, float, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___f0, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void FloatDelegate_Invoke_m4D49E45F98F312099A4ADDA6AEC51B40771DE2E6_Open(FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46* __this, float ___f0, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (float, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___f0, method);
}
void FloatDelegate_Invoke_m4D49E45F98F312099A4ADDA6AEC51B40771DE2E6_OpenStaticInvoker(FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46* __this, float ___f0, const RuntimeMethod* method)
{
	InvokerActionInvoker1< float >::Invoke(__this->___method_ptr_0, method, NULL, ___f0);
}
void FloatDelegate_Invoke_m4D49E45F98F312099A4ADDA6AEC51B40771DE2E6_ClosedStaticInvoker(FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46* __this, float ___f0, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, float >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___f0);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46 (FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46* __this, float ___f0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(float);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc(___f0);

}
// System.Void Events/FloatDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FloatDelegate__ctor_mF5CFDCFA2728F6F061009EDF3AE1BEC8F79B3B6C (FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&FloatDelegate_Invoke_m4D49E45F98F312099A4ADDA6AEC51B40771DE2E6_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&FloatDelegate_Invoke_m4D49E45F98F312099A4ADDA6AEC51B40771DE2E6_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&FloatDelegate_Invoke_m4D49E45F98F312099A4ADDA6AEC51B40771DE2E6_Open;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&FloatDelegate_Invoke_m4D49E45F98F312099A4ADDA6AEC51B40771DE2E6_Multicast;
}
// System.Void Events/FloatDelegate::Invoke(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FloatDelegate_Invoke_m4D49E45F98F312099A4ADDA6AEC51B40771DE2E6 (FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46* __this, float ___f0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, float, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___f0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Events/FloatDelegate::BeginInvoke(System.Single,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FloatDelegate_BeginInvoke_mB085656776A584C4449219E65F2415EB5AC4DB9C (FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46* __this, float ___f0, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback1, RuntimeObject* ___object2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &___f0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void Events/FloatDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FloatDelegate_EndInvoke_mAA891895C1D65439039DEC22FDFA714463E8B70D (FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void SimpleDelegate_Invoke_mE39CE43C6B97CE701F70DE6A5DCDAB2EAAA05C94_Multicast(SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1* __this, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1* currentDelegate = reinterpret_cast<SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void SimpleDelegate_Invoke_mE39CE43C6B97CE701F70DE6A5DCDAB2EAAA05C94_Open(SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(method);
}
void SimpleDelegate_Invoke_mE39CE43C6B97CE701F70DE6A5DCDAB2EAAA05C94_OpenStaticInvoker(SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker0::Invoke(__this->___method_ptr_0, method, NULL);
}
void SimpleDelegate_Invoke_mE39CE43C6B97CE701F70DE6A5DCDAB2EAAA05C94_ClosedStaticInvoker(SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker1< RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1 (SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1* __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void Events/SimpleDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleDelegate__ctor_m52198E5C89703FE51B58861C8D85FBC3885F4082 (SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 0;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&SimpleDelegate_Invoke_mE39CE43C6B97CE701F70DE6A5DCDAB2EAAA05C94_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&SimpleDelegate_Invoke_mE39CE43C6B97CE701F70DE6A5DCDAB2EAAA05C94_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&SimpleDelegate_Invoke_mE39CE43C6B97CE701F70DE6A5DCDAB2EAAA05C94_Open;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&SimpleDelegate_Invoke_mE39CE43C6B97CE701F70DE6A5DCDAB2EAAA05C94_Multicast;
}
// System.Void Events/SimpleDelegate::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleDelegate_Invoke_mE39CE43C6B97CE701F70DE6A5DCDAB2EAAA05C94 (SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Events/SimpleDelegate::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SimpleDelegate_BeginInvoke_mEE8EE85C75F447082F046EC2CB55A1C740A5CE86 (SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1* __this, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback0, RuntimeObject* ___object1, const RuntimeMethod* method) 
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);
}
// System.Void Events/SimpleDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleDelegate_EndInvoke_m4F28A7E72246BF45361F11F49DCA736D86DE9C85 (SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void FinishLevel::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FinishLevel_Start_m198B09FE9CA7219907453DBB4B3F1A1BFA23F06C (FinishLevel_tACFA3010643E0E036858BB5967D7D9006954B268* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FinishLevel_missionFail_m2AD13F91194C54A9C9F3B796A09E8B15F0F34201_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FinishLevel_missionSucsces_m5370B6346336F988F6277A66A052B674C29DB1F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Events.LevelComplete += missionSucsces;
		SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1* L_0 = ((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___LevelComplete_30;
		SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1* L_1 = (SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1*)il2cpp_codegen_object_new(SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1_il2cpp_TypeInfo_var);
		SimpleDelegate__ctor_m52198E5C89703FE51B58861C8D85FBC3885F4082(L_1, __this, (intptr_t)((void*)FinishLevel_missionSucsces_m5370B6346336F988F6277A66A052B674C29DB1F9_RuntimeMethod_var), NULL);
		Delegate_t* L_2;
		L_2 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_0, L_1, NULL);
		((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___LevelComplete_30 = ((SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1*)CastclassSealed((RuntimeObject*)L_2, SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___LevelComplete_30), (void*)((SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1*)CastclassSealed((RuntimeObject*)L_2, SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1_il2cpp_TypeInfo_var)));
		// Events.DestroyRocket += missionFail;
		SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1* L_3 = ((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___DestroyRocket_29;
		SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1* L_4 = (SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1*)il2cpp_codegen_object_new(SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1_il2cpp_TypeInfo_var);
		SimpleDelegate__ctor_m52198E5C89703FE51B58861C8D85FBC3885F4082(L_4, __this, (intptr_t)((void*)FinishLevel_missionFail_m2AD13F91194C54A9C9F3B796A09E8B15F0F34201_RuntimeMethod_var), NULL);
		Delegate_t* L_5;
		L_5 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_3, L_4, NULL);
		((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___DestroyRocket_29 = ((SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1*)CastclassSealed((RuntimeObject*)L_5, SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___DestroyRocket_29), (void*)((SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1*)CastclassSealed((RuntimeObject*)L_5, SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1_il2cpp_TypeInfo_var)));
		// }
		return;
	}
}
// System.Void FinishLevel::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FinishLevel_OnDestroy_m0EF3433933F70A7505F96CBB4ABD73A7AA66C8CF (FinishLevel_tACFA3010643E0E036858BB5967D7D9006954B268* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FinishLevel_missionFail_m2AD13F91194C54A9C9F3B796A09E8B15F0F34201_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FinishLevel_missionSucsces_m5370B6346336F988F6277A66A052B674C29DB1F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Events.LevelComplete -= missionSucsces;
		SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1* L_0 = ((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___LevelComplete_30;
		SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1* L_1 = (SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1*)il2cpp_codegen_object_new(SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1_il2cpp_TypeInfo_var);
		SimpleDelegate__ctor_m52198E5C89703FE51B58861C8D85FBC3885F4082(L_1, __this, (intptr_t)((void*)FinishLevel_missionSucsces_m5370B6346336F988F6277A66A052B674C29DB1F9_RuntimeMethod_var), NULL);
		Delegate_t* L_2;
		L_2 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_0, L_1, NULL);
		((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___LevelComplete_30 = ((SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1*)CastclassSealed((RuntimeObject*)L_2, SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___LevelComplete_30), (void*)((SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1*)CastclassSealed((RuntimeObject*)L_2, SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1_il2cpp_TypeInfo_var)));
		// Events.DestroyRocket -= missionFail;
		SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1* L_3 = ((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___DestroyRocket_29;
		SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1* L_4 = (SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1*)il2cpp_codegen_object_new(SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1_il2cpp_TypeInfo_var);
		SimpleDelegate__ctor_m52198E5C89703FE51B58861C8D85FBC3885F4082(L_4, __this, (intptr_t)((void*)FinishLevel_missionFail_m2AD13F91194C54A9C9F3B796A09E8B15F0F34201_RuntimeMethod_var), NULL);
		Delegate_t* L_5;
		L_5 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_3, L_4, NULL);
		((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___DestroyRocket_29 = ((SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1*)CastclassSealed((RuntimeObject*)L_5, SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___DestroyRocket_29), (void*)((SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1*)CastclassSealed((RuntimeObject*)L_5, SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1_il2cpp_TypeInfo_var)));
		// }
		return;
	}
}
// System.Void FinishLevel::missionSucsces()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FinishLevel_missionSucsces_m5370B6346336F988F6277A66A052B674C29DB1F9 (FinishLevel_tACFA3010643E0E036858BB5967D7D9006954B268* __this, const RuntimeMethod* method) 
{
	{
		// _succcesFinish.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->____succcesFinish_4;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)1, NULL);
		// _succesSound.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_1 = __this->____succesSound_9;
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_1, NULL);
		// }
		return;
	}
}
// System.Void FinishLevel::missionFail()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FinishLevel_missionFail_m2AD13F91194C54A9C9F3B796A09E8B15F0F34201 (FinishLevel_tACFA3010643E0E036858BB5967D7D9006954B268* __this, const RuntimeMethod* method) 
{
	{
		// _failFinish.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->____failFinish_5;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)1, NULL);
		// _failSound.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_1 = __this->____failSound_8;
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_1, NULL);
		// }
		return;
	}
}
// System.Void FinishLevel::restartLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FinishLevel_restartLevel_m764F76E6F0841AFDFE76AFFC4C9F5F692FBE06BA (FinishLevel_tACFA3010643E0E036858BB5967D7D9006954B268* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Scene_tA1DC762B79745EB5140F054C884855B922318356 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// _UI.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->____UI_6;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// _loadScreen.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->____loadScreen_7;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)1, NULL);
		// SceneManager.LoadScene(SceneManager.GetActiveScene().name,  LoadSceneMode.Single);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_2;
		L_2 = SceneManager_GetActiveScene_m2DB2A1ACB84805968A4B6396BFDFB92C0AF32BCE(NULL);
		V_0 = L_2;
		String_t* L_3;
		L_3 = Scene_get_name_m3C818DFA663E159274DAD823B780C7616C5E2A8C((&V_0), NULL);
		SceneManager_LoadScene_m92684F7A44947924E5EB26D9D534C0ABEC8686E4(L_3, 0, NULL);
		// }
		return;
	}
}
// System.Void FinishLevel::backToMenu()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FinishLevel_backToMenu_mF31C183C30F8DC1638549287230E1287F40572E8 (FinishLevel_tACFA3010643E0E036858BB5967D7D9006954B268* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0B5ECFF84CE073C4971D637741C560F910E4D128);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _UI.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->____UI_6;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// _loadScreen.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->____loadScreen_7;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)1, NULL);
		// SceneManager.LoadScene("menu",  LoadSceneMode.Single);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m92684F7A44947924E5EB26D9D534C0ABEC8686E4(_stringLiteral0B5ECFF84CE073C4971D637741C560F910E4D128, 0, NULL);
		// }
		return;
	}
}
// System.Void FinishLevel::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FinishLevel__ctor_m1A69DF8EC8897AE2CEAED8BFAA1B8D288C39CEF5 (FinishLevel_tACFA3010643E0E036858BB5967D7D9006954B268* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Level::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Level_Awake_mFDF6A35C5BB6CFEBCB8F899762D083216B602019 (Level_t1CED3B73CCB94716BF67A03B39D9DE9A991FD5A1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Level_completeLevel_mE7870928E2D62CF5DB82EEA2142F1F221AF2008C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _levelData = loadLevel();
		LevelData_tE6EAE053C277D3E4ED073363F0BF24BDBADFC4D5* L_0;
		L_0 = Level_loadLevel_m4843AE8B2F76476DA07937FD0E159CD1AB7F519A(__this, NULL);
		__this->____levelData_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____levelData_7), (void*)L_0);
		// renderBase();
		Level_renderBase_m57C67962330217360AF065ED85D16072E700D09B(__this, NULL);
		// Events.LevelComplete += completeLevel;
		SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1* L_1 = ((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___LevelComplete_30;
		SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1* L_2 = (SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1*)il2cpp_codegen_object_new(SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1_il2cpp_TypeInfo_var);
		SimpleDelegate__ctor_m52198E5C89703FE51B58861C8D85FBC3885F4082(L_2, __this, (intptr_t)((void*)Level_completeLevel_mE7870928E2D62CF5DB82EEA2142F1F221AF2008C_RuntimeMethod_var), NULL);
		Delegate_t* L_3;
		L_3 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_1, L_2, NULL);
		((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___LevelComplete_30 = ((SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1*)CastclassSealed((RuntimeObject*)L_3, SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___LevelComplete_30), (void*)((SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1*)CastclassSealed((RuntimeObject*)L_3, SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1_il2cpp_TypeInfo_var)));
		// }
		return;
	}
}
// System.Void Level::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Level_OnDestroy_mD7D0C47E30BE3BCC86A65DA49D5D7BA3BDD69ED0 (Level_t1CED3B73CCB94716BF67A03B39D9DE9A991FD5A1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Level_completeLevel_mE7870928E2D62CF5DB82EEA2142F1F221AF2008C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Events.LevelComplete -= completeLevel;
		SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1* L_0 = ((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___LevelComplete_30;
		SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1* L_1 = (SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1*)il2cpp_codegen_object_new(SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1_il2cpp_TypeInfo_var);
		SimpleDelegate__ctor_m52198E5C89703FE51B58861C8D85FBC3885F4082(L_1, __this, (intptr_t)((void*)Level_completeLevel_mE7870928E2D62CF5DB82EEA2142F1F221AF2008C_RuntimeMethod_var), NULL);
		Delegate_t* L_2;
		L_2 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_0, L_1, NULL);
		((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___LevelComplete_30 = ((SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1*)CastclassSealed((RuntimeObject*)L_2, SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___LevelComplete_30), (void*)((SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1*)CastclassSealed((RuntimeObject*)L_2, SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1_il2cpp_TypeInfo_var)));
		// }
		return;
	}
}
// System.Void Level::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Level_Start_m56A0908CDEC199AB83EB0C8B6935AB23D8108E4B (Level_t1CED3B73CCB94716BF67A03B39D9DE9A991FD5A1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Level_t1CED3B73CCB94716BF67A03B39D9DE9A991FD5A1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46* G_B2_0 = NULL;
	FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46* G_B1_0 = NULL;
	FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46* G_B5_0 = NULL;
	FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46* G_B4_0 = NULL;
	FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46* G_B8_0 = NULL;
	FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46* G_B7_0 = NULL;
	{
		// LevelID = _levelData.LevelID;
		LevelData_tE6EAE053C277D3E4ED073363F0BF24BDBADFC4D5* L_0 = __this->____levelData_7;
		int32_t L_1 = L_0->___LevelID_4;
		((Level_t1CED3B73CCB94716BF67A03B39D9DE9A991FD5A1_StaticFields*)il2cpp_codegen_static_fields_for(Level_t1CED3B73CCB94716BF67A03B39D9DE9A991FD5A1_il2cpp_TypeInfo_var))->___LevelID_8 = L_1;
		// LevelBudget = _levelData.Budget;
		LevelData_tE6EAE053C277D3E4ED073363F0BF24BDBADFC4D5* L_2 = __this->____levelData_7;
		float L_3 = L_2->___Budget_6;
		((Level_t1CED3B73CCB94716BF67A03B39D9DE9A991FD5A1_StaticFields*)il2cpp_codegen_static_fields_for(Level_t1CED3B73CCB94716BF67A03B39D9DE9A991FD5A1_il2cpp_TypeInfo_var))->___LevelBudget_9 = L_3;
		// LevelGravity = _levelData.Gravity;
		LevelData_tE6EAE053C277D3E4ED073363F0BF24BDBADFC4D5* L_4 = __this->____levelData_7;
		float L_5 = L_4->___Gravity_7;
		((Level_t1CED3B73CCB94716BF67A03B39D9DE9A991FD5A1_StaticFields*)il2cpp_codegen_static_fields_for(Level_t1CED3B73CCB94716BF67A03B39D9DE9A991FD5A1_il2cpp_TypeInfo_var))->___LevelGravity_10 = L_5;
		// LevelAtmosphereResistance = _levelData.AtmosphereResistance;
		LevelData_tE6EAE053C277D3E4ED073363F0BF24BDBADFC4D5* L_6 = __this->____levelData_7;
		float L_7 = L_6->___AtmosphereResistance_8;
		((Level_t1CED3B73CCB94716BF67A03B39D9DE9A991FD5A1_StaticFields*)il2cpp_codegen_static_fields_for(Level_t1CED3B73CCB94716BF67A03B39D9DE9A991FD5A1_il2cpp_TypeInfo_var))->___LevelAtmosphereResistance_11 = L_7;
		// Events.UpdateGravity?.Invoke(LevelGravity);
		FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46* L_8 = ((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___UpdateGravity_18;
		FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46* L_9 = L_8;
		G_B1_0 = L_9;
		if (L_9)
		{
			G_B2_0 = L_9;
			goto IL_004b;
		}
	}
	{
		goto IL_0055;
	}

IL_004b:
	{
		float L_10 = ((Level_t1CED3B73CCB94716BF67A03B39D9DE9A991FD5A1_StaticFields*)il2cpp_codegen_static_fields_for(Level_t1CED3B73CCB94716BF67A03B39D9DE9A991FD5A1_il2cpp_TypeInfo_var))->___LevelGravity_10;
		FloatDelegate_Invoke_m4D49E45F98F312099A4ADDA6AEC51B40771DE2E6_inline(G_B2_0, L_10, NULL);
	}

IL_0055:
	{
		// Events.UpdateAtmResistance?.Invoke(LevelAtmosphereResistance);
		FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46* L_11 = ((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___UpdateAtmResistance_19;
		FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46* L_12 = L_11;
		G_B4_0 = L_12;
		if (L_12)
		{
			G_B5_0 = L_12;
			goto IL_0060;
		}
	}
	{
		goto IL_006a;
	}

IL_0060:
	{
		float L_13 = ((Level_t1CED3B73CCB94716BF67A03B39D9DE9A991FD5A1_StaticFields*)il2cpp_codegen_static_fields_for(Level_t1CED3B73CCB94716BF67A03B39D9DE9A991FD5A1_il2cpp_TypeInfo_var))->___LevelAtmosphereResistance_11;
		FloatDelegate_Invoke_m4D49E45F98F312099A4ADDA6AEC51B40771DE2E6_inline(G_B5_0, L_13, NULL);
	}

IL_006a:
	{
		// Events.UpdateBudgetUI?.Invoke(LevelBudget);
		FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46* L_14 = ((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___UpdateBudgetUI_17;
		FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46* L_15 = L_14;
		G_B7_0 = L_15;
		if (L_15)
		{
			G_B8_0 = L_15;
			goto IL_0074;
		}
	}
	{
		return;
	}

IL_0074:
	{
		float L_16 = ((Level_t1CED3B73CCB94716BF67A03B39D9DE9A991FD5A1_StaticFields*)il2cpp_codegen_static_fields_for(Level_t1CED3B73CCB94716BF67A03B39D9DE9A991FD5A1_il2cpp_TypeInfo_var))->___LevelBudget_9;
		FloatDelegate_Invoke_m4D49E45F98F312099A4ADDA6AEC51B40771DE2E6_inline(G_B8_0, L_16, NULL);
		// }
		return;
	}
}
// System.Void Level::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Level__ctor_m43FF8216177BF87D2C80121AAD4227B5D6A444B2 (Level_t1CED3B73CCB94716BF67A03B39D9DE9A991FD5A1* __this, int32_t ___id0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Level_t1CED3B73CCB94716BF67A03B39D9DE9A991FD5A1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public Level(int id)
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		// LevelID = id;
		int32_t L_0 = ___id0;
		((Level_t1CED3B73CCB94716BF67A03B39D9DE9A991FD5A1_StaticFields*)il2cpp_codegen_static_fields_for(Level_t1CED3B73CCB94716BF67A03B39D9DE9A991FD5A1_il2cpp_TypeInfo_var))->___LevelID_8 = L_0;
		// }
		return;
	}
}
// System.Void Level::completeLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Level_completeLevel_mE7870928E2D62CF5DB82EEA2142F1F221AF2008C (Level_t1CED3B73CCB94716BF67A03B39D9DE9A991FD5A1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LevelSaverLoader_t9A00927063FF8A8DEFDFDDA5D0BA47688D4D2BAF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Level_t1CED3B73CCB94716BF67A03B39D9DE9A991FD5A1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private void completeLevel() => LevelSaverLoader.SaveLevel(LevelID);
		int32_t L_0 = ((Level_t1CED3B73CCB94716BF67A03B39D9DE9A991FD5A1_StaticFields*)il2cpp_codegen_static_fields_for(Level_t1CED3B73CCB94716BF67A03B39D9DE9A991FD5A1_il2cpp_TypeInfo_var))->___LevelID_8;
		il2cpp_codegen_runtime_class_init_inline(LevelSaverLoader_t9A00927063FF8A8DEFDFDDA5D0BA47688D4D2BAF_il2cpp_TypeInfo_var);
		LevelSaverLoader_SaveLevel_m088C6E7A4C4B38DD7C21F7B011C9A78FC8A985E0(L_0, NULL);
		return;
	}
}
// LevelData Level::loadLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LevelData_tE6EAE053C277D3E4ED073363F0BF24BDBADFC4D5* Level_loadLevel_m4843AE8B2F76476DA07937FD0E159CD1AB7F519A (Level_t1CED3B73CCB94716BF67A03B39D9DE9A991FD5A1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mAB2F9A493B9407B42C8E1AB74ACCB5C567BDDB17_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mD6B01A66A8590288667BE5CBAE5056030CB4E289_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m8BE99FA76955640697D9D607B42F71E04FB1EDEE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LevelSaverLoader_t9A00927063FF8A8DEFDFDDA5D0BA47688D4D2BAF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m81E0CEC164686859C689EB0C4B2B6911F1B20729_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Enumerator_tBFF6DA9BE8EA2640F1C5F642D2436586AA67434B V_1;
	memset((&V_1), 0, sizeof(V_1));
	LevelData_tE6EAE053C277D3E4ED073363F0BF24BDBADFC4D5* V_2 = NULL;
	LevelData_tE6EAE053C277D3E4ED073363F0BF24BDBADFC4D5* V_3 = NULL;
	{
		// int currentLevel = LevelSaverLoader.LoadCurrentLevel();
		il2cpp_codegen_runtime_class_init_inline(LevelSaverLoader_t9A00927063FF8A8DEFDFDDA5D0BA47688D4D2BAF_il2cpp_TypeInfo_var);
		int32_t L_0;
		L_0 = LevelSaverLoader_LoadCurrentLevel_mD6E98B2D6AC3147BA236D2E492EF193611BCAE05(NULL);
		V_0 = L_0;
		// foreach(LevelData level in _levelDataList){
		List_1_t5D51C2F548F7E4364A14BB81D41C0CAE0A900E0A* L_1 = __this->____levelDataList_4;
		Enumerator_tBFF6DA9BE8EA2640F1C5F642D2436586AA67434B L_2;
		L_2 = List_1_GetEnumerator_m81E0CEC164686859C689EB0C4B2B6911F1B20729(L_1, List_1_GetEnumerator_m81E0CEC164686859C689EB0C4B2B6911F1B20729_RuntimeMethod_var);
		V_1 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0034:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mAB2F9A493B9407B42C8E1AB74ACCB5C567BDDB17((&V_1), Enumerator_Dispose_mAB2F9A493B9407B42C8E1AB74ACCB5C567BDDB17_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0029_1;
			}

IL_0014_1:
			{
				// foreach(LevelData level in _levelDataList){
				LevelData_tE6EAE053C277D3E4ED073363F0BF24BDBADFC4D5* L_3;
				L_3 = Enumerator_get_Current_m8BE99FA76955640697D9D607B42F71E04FB1EDEE_inline((&V_1), Enumerator_get_Current_m8BE99FA76955640697D9D607B42F71E04FB1EDEE_RuntimeMethod_var);
				V_2 = L_3;
				// if(level.LevelID == currentLevel){
				LevelData_tE6EAE053C277D3E4ED073363F0BF24BDBADFC4D5* L_4 = V_2;
				int32_t L_5 = L_4->___LevelID_4;
				int32_t L_6 = V_0;
				if ((!(((uint32_t)L_5) == ((uint32_t)L_6))))
				{
					goto IL_0029_1;
				}
			}
			{
				// return level;
				LevelData_tE6EAE053C277D3E4ED073363F0BF24BDBADFC4D5* L_7 = V_2;
				V_3 = L_7;
				goto IL_0044;
			}

IL_0029_1:
			{
				// foreach(LevelData level in _levelDataList){
				bool L_8;
				L_8 = Enumerator_MoveNext_mD6B01A66A8590288667BE5CBAE5056030CB4E289((&V_1), Enumerator_MoveNext_mD6B01A66A8590288667BE5CBAE5056030CB4E289_RuntimeMethod_var);
				if (L_8)
				{
					goto IL_0014_1;
				}
			}
			{
				goto IL_0042;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0042:
	{
		// return null;
		return (LevelData_tE6EAE053C277D3E4ED073363F0BF24BDBADFC4D5*)NULL;
	}

IL_0044:
	{
		// }
		LevelData_tE6EAE053C277D3E4ED073363F0BF24BDBADFC4D5* L_9 = V_3;
		return L_9;
	}
}
// System.Void Level::renderBase()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Level_renderBase_m57C67962330217360AF065ED85D16072E700D09B (Level_t1CED3B73CCB94716BF67A03B39D9DE9A991FD5A1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mA21FBF50D67D9E84F34007835E6A899C0F7031A0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m1D96BA3D440A88F1C0811A494B986BD81011052C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m5D05F036C21C364B1997C69DEC0047A15453137A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LevelSaverLoader_t9A00927063FF8A8DEFDFDDA5D0BA47688D4D2BAF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mA19A5DD3F06B10BBE2861B3E241CD33D94227F53_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m002192C406088F7BA156339AAA9B1BB5D69BE934_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Enumerator_tA10393DDF9C05EED829F84968687591C0E06F965 V_1;
	memset((&V_1), 0, sizeof(V_1));
	BaseData_t5144136E89F73ED714F412780B5FC9AD12F42B90* V_2 = NULL;
	{
		// int rang = LevelSaverLoader.LoadBaseRang();
		il2cpp_codegen_runtime_class_init_inline(LevelSaverLoader_t9A00927063FF8A8DEFDFDDA5D0BA47688D4D2BAF_il2cpp_TypeInfo_var);
		int32_t L_0;
		L_0 = LevelSaverLoader_LoadBaseRang_m924ADC988E570E3AE43174F7BC4185468F4A0A3F(NULL);
		V_0 = L_0;
		// foreach(BaseData data in _baseList){
		List_1_t18BD6E268F9F6583CEEE974C0C08EF6E26DCA9D7* L_1 = __this->____baseList_5;
		Enumerator_tA10393DDF9C05EED829F84968687591C0E06F965 L_2;
		L_2 = List_1_GetEnumerator_mA19A5DD3F06B10BBE2861B3E241CD33D94227F53(L_1, List_1_GetEnumerator_mA19A5DD3F06B10BBE2861B3E241CD33D94227F53_RuntimeMethod_var);
		V_1 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0042:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mA21FBF50D67D9E84F34007835E6A899C0F7031A0((&V_1), Enumerator_Dispose_mA21FBF50D67D9E84F34007835E6A899C0F7031A0_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0037_1;
			}

IL_0014_1:
			{
				// foreach(BaseData data in _baseList){
				BaseData_t5144136E89F73ED714F412780B5FC9AD12F42B90* L_3;
				L_3 = Enumerator_get_Current_m5D05F036C21C364B1997C69DEC0047A15453137A_inline((&V_1), Enumerator_get_Current_m5D05F036C21C364B1997C69DEC0047A15453137A_RuntimeMethod_var);
				V_2 = L_3;
				// if(rang == data.BaseRang)
				int32_t L_4 = V_0;
				BaseData_t5144136E89F73ED714F412780B5FC9AD12F42B90* L_5 = V_2;
				int32_t L_6 = L_5->___BaseRang_4;
				if ((!(((uint32_t)L_4) == ((uint32_t)L_6))))
				{
					goto IL_0037_1;
				}
			}
			{
				// Instantiate(data.BasePrefabForLevel, _baseSpawnPoint);
				BaseData_t5144136E89F73ED714F412780B5FC9AD12F42B90* L_7 = V_2;
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = L_7->___BasePrefabForLevel_6;
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9 = __this->____baseSpawnPoint_6;
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10;
				L_10 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m002192C406088F7BA156339AAA9B1BB5D69BE934(L_8, L_9, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m002192C406088F7BA156339AAA9B1BB5D69BE934_RuntimeMethod_var);
			}

IL_0037_1:
			{
				// foreach(BaseData data in _baseList){
				bool L_11;
				L_11 = Enumerator_MoveNext_m1D96BA3D440A88F1C0811A494B986BD81011052C((&V_1), Enumerator_MoveNext_m1D96BA3D440A88F1C0811A494B986BD81011052C_RuntimeMethod_var);
				if (L_11)
				{
					goto IL_0014_1;
				}
			}
			{
				goto IL_0050;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0050:
	{
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void LevelData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelData__ctor_m923000759B849E6F472A21ECEDD12006D85EDEDD (LevelData_tE6EAE053C277D3E4ED073363F0BF24BDBADFC4D5* __this, const RuntimeMethod* method) 
{
	{
		ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void LevelSaverLoader::SaveLevel(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelSaverLoader_SaveLevel_m088C6E7A4C4B38DD7C21F7B011C9A78FC8A985E0 (int32_t ___level0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LevelSaverLoader_t9A00927063FF8A8DEFDFDDA5D0BA47688D4D2BAF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral467A66D30ED588479B8BB1F0A243068F289B2D48);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9450BF3D4D0C78B1514029C2FBAA5CCA18382EB9);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if(PlayerPrefs.HasKey(SAVES_KEY))
		il2cpp_codegen_runtime_class_init_inline(LevelSaverLoader_t9A00927063FF8A8DEFDFDDA5D0BA47688D4D2BAF_il2cpp_TypeInfo_var);
		String_t* L_0 = ((LevelSaverLoader_t9A00927063FF8A8DEFDFDDA5D0BA47688D4D2BAF_StaticFields*)il2cpp_codegen_static_fields_for(LevelSaverLoader_t9A00927063FF8A8DEFDFDDA5D0BA47688D4D2BAF_il2cpp_TypeInfo_var))->___SAVES_KEY_0;
		bool L_1;
		L_1 = PlayerPrefs_HasKey_m9EB15A18BE611107251F2E2F6CE70636F88CAB5F(L_0, NULL);
		if (!L_1)
		{
			goto IL_003e;
		}
	}
	{
		// int savedLevel =  PlayerPrefs.GetInt(SAVES_KEY);
		il2cpp_codegen_runtime_class_init_inline(LevelSaverLoader_t9A00927063FF8A8DEFDFDDA5D0BA47688D4D2BAF_il2cpp_TypeInfo_var);
		String_t* L_2 = ((LevelSaverLoader_t9A00927063FF8A8DEFDFDDA5D0BA47688D4D2BAF_StaticFields*)il2cpp_codegen_static_fields_for(LevelSaverLoader_t9A00927063FF8A8DEFDFDDA5D0BA47688D4D2BAF_il2cpp_TypeInfo_var))->___SAVES_KEY_0;
		int32_t L_3;
		L_3 = PlayerPrefs_GetInt_m35C13A87BBC7907554CE5405EB5D00CF85E7457B(L_2, NULL);
		V_0 = L_3;
		// if(savedLevel == level)
		int32_t L_4 = V_0;
		int32_t L_5 = ___level0;
		if ((!(((uint32_t)L_4) == ((uint32_t)L_5))))
		{
			goto IL_0033;
		}
	}
	{
		// PlayerPrefs.SetInt(SAVES_KEY, savedLevel+1);
		il2cpp_codegen_runtime_class_init_inline(LevelSaverLoader_t9A00927063FF8A8DEFDFDDA5D0BA47688D4D2BAF_il2cpp_TypeInfo_var);
		String_t* L_6 = ((LevelSaverLoader_t9A00927063FF8A8DEFDFDDA5D0BA47688D4D2BAF_StaticFields*)il2cpp_codegen_static_fields_for(LevelSaverLoader_t9A00927063FF8A8DEFDFDDA5D0BA47688D4D2BAF_il2cpp_TypeInfo_var))->___SAVES_KEY_0;
		int32_t L_7 = V_0;
		PlayerPrefs_SetInt_mDC9617BFD56FEC670626A1002D9A5FE963D8D175(L_6, ((int32_t)il2cpp_codegen_add(L_7, 1)), NULL);
		// Debug.Log("Save sucsesfull");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteral467A66D30ED588479B8BB1F0A243068F289B2D48, NULL);
		return;
	}

IL_0033:
	{
		// Debug.Log("we coplete this level yet");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteral9450BF3D4D0C78B1514029C2FBAA5CCA18382EB9, NULL);
		return;
	}

IL_003e:
	{
		// PlayerPrefs.SetInt(SAVES_KEY, 2);
		il2cpp_codegen_runtime_class_init_inline(LevelSaverLoader_t9A00927063FF8A8DEFDFDDA5D0BA47688D4D2BAF_il2cpp_TypeInfo_var);
		String_t* L_8 = ((LevelSaverLoader_t9A00927063FF8A8DEFDFDDA5D0BA47688D4D2BAF_StaticFields*)il2cpp_codegen_static_fields_for(LevelSaverLoader_t9A00927063FF8A8DEFDFDDA5D0BA47688D4D2BAF_il2cpp_TypeInfo_var))->___SAVES_KEY_0;
		PlayerPrefs_SetInt_mDC9617BFD56FEC670626A1002D9A5FE963D8D175(L_8, 2, NULL);
		// Debug.Log("Save sucsesfull");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteral467A66D30ED588479B8BB1F0A243068F289B2D48, NULL);
		// }
		return;
	}
}
// System.Int32 LevelSaverLoader::LoadLevels()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LevelSaverLoader_LoadLevels_m642C839D2854E6003764905222DD1979F53D15FE (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LevelSaverLoader_t9A00927063FF8A8DEFDFDDA5D0BA47688D4D2BAF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(PlayerPrefs.HasKey(SAVES_KEY))
		il2cpp_codegen_runtime_class_init_inline(LevelSaverLoader_t9A00927063FF8A8DEFDFDDA5D0BA47688D4D2BAF_il2cpp_TypeInfo_var);
		String_t* L_0 = ((LevelSaverLoader_t9A00927063FF8A8DEFDFDDA5D0BA47688D4D2BAF_StaticFields*)il2cpp_codegen_static_fields_for(LevelSaverLoader_t9A00927063FF8A8DEFDFDDA5D0BA47688D4D2BAF_il2cpp_TypeInfo_var))->___SAVES_KEY_0;
		bool L_1;
		L_1 = PlayerPrefs_HasKey_m9EB15A18BE611107251F2E2F6CE70636F88CAB5F(L_0, NULL);
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		// return PlayerPrefs.GetInt(SAVES_KEY);
		il2cpp_codegen_runtime_class_init_inline(LevelSaverLoader_t9A00927063FF8A8DEFDFDDA5D0BA47688D4D2BAF_il2cpp_TypeInfo_var);
		String_t* L_2 = ((LevelSaverLoader_t9A00927063FF8A8DEFDFDDA5D0BA47688D4D2BAF_StaticFields*)il2cpp_codegen_static_fields_for(LevelSaverLoader_t9A00927063FF8A8DEFDFDDA5D0BA47688D4D2BAF_il2cpp_TypeInfo_var))->___SAVES_KEY_0;
		int32_t L_3;
		L_3 = PlayerPrefs_GetInt_m35C13A87BBC7907554CE5405EB5D00CF85E7457B(L_2, NULL);
		return L_3;
	}

IL_0017:
	{
		// PlayerPrefs.SetInt(SAVES_KEY, 1);
		il2cpp_codegen_runtime_class_init_inline(LevelSaverLoader_t9A00927063FF8A8DEFDFDDA5D0BA47688D4D2BAF_il2cpp_TypeInfo_var);
		String_t* L_4 = ((LevelSaverLoader_t9A00927063FF8A8DEFDFDDA5D0BA47688D4D2BAF_StaticFields*)il2cpp_codegen_static_fields_for(LevelSaverLoader_t9A00927063FF8A8DEFDFDDA5D0BA47688D4D2BAF_il2cpp_TypeInfo_var))->___SAVES_KEY_0;
		PlayerPrefs_SetInt_mDC9617BFD56FEC670626A1002D9A5FE963D8D175(L_4, 1, NULL);
		// return 1;
		return 1;
	}
}
// System.Void LevelSaverLoader::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelSaverLoader_Reset_m9A9E6E475ABA64231B25978F7DC7644999637053 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LevelSaverLoader_t9A00927063FF8A8DEFDFDDA5D0BA47688D4D2BAF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PlayerPrefs.SetInt(SAVES_KEY,1);
		il2cpp_codegen_runtime_class_init_inline(LevelSaverLoader_t9A00927063FF8A8DEFDFDDA5D0BA47688D4D2BAF_il2cpp_TypeInfo_var);
		String_t* L_0 = ((LevelSaverLoader_t9A00927063FF8A8DEFDFDDA5D0BA47688D4D2BAF_StaticFields*)il2cpp_codegen_static_fields_for(LevelSaverLoader_t9A00927063FF8A8DEFDFDDA5D0BA47688D4D2BAF_il2cpp_TypeInfo_var))->___SAVES_KEY_0;
		PlayerPrefs_SetInt_mDC9617BFD56FEC670626A1002D9A5FE963D8D175(L_0, 1, NULL);
		// PlayerPrefs.SetInt(SAVE_BASE_RANG_KEY,0);
		String_t* L_1 = ((LevelSaverLoader_t9A00927063FF8A8DEFDFDDA5D0BA47688D4D2BAF_StaticFields*)il2cpp_codegen_static_fields_for(LevelSaverLoader_t9A00927063FF8A8DEFDFDDA5D0BA47688D4D2BAF_il2cpp_TypeInfo_var))->___SAVE_BASE_RANG_KEY_2;
		PlayerPrefs_SetInt_mDC9617BFD56FEC670626A1002D9A5FE963D8D175(L_1, 0, NULL);
		// PlayerPrefs.SetInt(SAVE_BUDGET_KEY,0);
		String_t* L_2 = ((LevelSaverLoader_t9A00927063FF8A8DEFDFDDA5D0BA47688D4D2BAF_StaticFields*)il2cpp_codegen_static_fields_for(LevelSaverLoader_t9A00927063FF8A8DEFDFDDA5D0BA47688D4D2BAF_il2cpp_TypeInfo_var))->___SAVE_BUDGET_KEY_3;
		PlayerPrefs_SetInt_mDC9617BFD56FEC670626A1002D9A5FE963D8D175(L_2, 0, NULL);
		// PlayerPrefs.SetInt(SAVE_CURRENT_LEVEL_KEY,1);
		String_t* L_3 = ((LevelSaverLoader_t9A00927063FF8A8DEFDFDDA5D0BA47688D4D2BAF_StaticFields*)il2cpp_codegen_static_fields_for(LevelSaverLoader_t9A00927063FF8A8DEFDFDDA5D0BA47688D4D2BAF_il2cpp_TypeInfo_var))->___SAVE_CURRENT_LEVEL_KEY_1;
		PlayerPrefs_SetInt_mDC9617BFD56FEC670626A1002D9A5FE963D8D175(L_3, 1, NULL);
		// }
		return;
	}
}
// System.Void LevelSaverLoader::SaveBaseRang(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelSaverLoader_SaveBaseRang_mEE7757FC09D8F59D764D6E1E7CD975469FCB751F (int32_t ___rang0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LevelSaverLoader_t9A00927063FF8A8DEFDFDDA5D0BA47688D4D2BAF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PlayerPrefs.SetInt(SAVE_BASE_RANG_KEY, rang);
		il2cpp_codegen_runtime_class_init_inline(LevelSaverLoader_t9A00927063FF8A8DEFDFDDA5D0BA47688D4D2BAF_il2cpp_TypeInfo_var);
		String_t* L_0 = ((LevelSaverLoader_t9A00927063FF8A8DEFDFDDA5D0BA47688D4D2BAF_StaticFields*)il2cpp_codegen_static_fields_for(LevelSaverLoader_t9A00927063FF8A8DEFDFDDA5D0BA47688D4D2BAF_il2cpp_TypeInfo_var))->___SAVE_BASE_RANG_KEY_2;
		int32_t L_1 = ___rang0;
		PlayerPrefs_SetInt_mDC9617BFD56FEC670626A1002D9A5FE963D8D175(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Int32 LevelSaverLoader::LoadBaseRang()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LevelSaverLoader_LoadBaseRang_m924ADC988E570E3AE43174F7BC4185468F4A0A3F (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LevelSaverLoader_t9A00927063FF8A8DEFDFDDA5D0BA47688D4D2BAF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(PlayerPrefs.HasKey(SAVE_BASE_RANG_KEY))
		il2cpp_codegen_runtime_class_init_inline(LevelSaverLoader_t9A00927063FF8A8DEFDFDDA5D0BA47688D4D2BAF_il2cpp_TypeInfo_var);
		String_t* L_0 = ((LevelSaverLoader_t9A00927063FF8A8DEFDFDDA5D0BA47688D4D2BAF_StaticFields*)il2cpp_codegen_static_fields_for(LevelSaverLoader_t9A00927063FF8A8DEFDFDDA5D0BA47688D4D2BAF_il2cpp_TypeInfo_var))->___SAVE_BASE_RANG_KEY_2;
		bool L_1;
		L_1 = PlayerPrefs_HasKey_m9EB15A18BE611107251F2E2F6CE70636F88CAB5F(L_0, NULL);
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		// return PlayerPrefs.GetInt(SAVE_BASE_RANG_KEY);
		il2cpp_codegen_runtime_class_init_inline(LevelSaverLoader_t9A00927063FF8A8DEFDFDDA5D0BA47688D4D2BAF_il2cpp_TypeInfo_var);
		String_t* L_2 = ((LevelSaverLoader_t9A00927063FF8A8DEFDFDDA5D0BA47688D4D2BAF_StaticFields*)il2cpp_codegen_static_fields_for(LevelSaverLoader_t9A00927063FF8A8DEFDFDDA5D0BA47688D4D2BAF_il2cpp_TypeInfo_var))->___SAVE_BASE_RANG_KEY_2;
		int32_t L_3;
		L_3 = PlayerPrefs_GetInt_m35C13A87BBC7907554CE5405EB5D00CF85E7457B(L_2, NULL);
		return L_3;
	}

IL_0017:
	{
		// PlayerPrefs.SetInt(SAVE_BASE_RANG_KEY,0);
		il2cpp_codegen_runtime_class_init_inline(LevelSaverLoader_t9A00927063FF8A8DEFDFDDA5D0BA47688D4D2BAF_il2cpp_TypeInfo_var);
		String_t* L_4 = ((LevelSaverLoader_t9A00927063FF8A8DEFDFDDA5D0BA47688D4D2BAF_StaticFields*)il2cpp_codegen_static_fields_for(LevelSaverLoader_t9A00927063FF8A8DEFDFDDA5D0BA47688D4D2BAF_il2cpp_TypeInfo_var))->___SAVE_BASE_RANG_KEY_2;
		PlayerPrefs_SetInt_mDC9617BFD56FEC670626A1002D9A5FE963D8D175(L_4, 0, NULL);
		// return 0;
		return 0;
	}
}
// System.Void LevelSaverLoader::SaveBudget(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelSaverLoader_SaveBudget_m8DD52955218827D1615ECA889824161100FC3DE1 (int32_t ___budget0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LevelSaverLoader_t9A00927063FF8A8DEFDFDDA5D0BA47688D4D2BAF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PlayerPrefs.SetInt(SAVE_BUDGET_KEY, budget);
		il2cpp_codegen_runtime_class_init_inline(LevelSaverLoader_t9A00927063FF8A8DEFDFDDA5D0BA47688D4D2BAF_il2cpp_TypeInfo_var);
		String_t* L_0 = ((LevelSaverLoader_t9A00927063FF8A8DEFDFDDA5D0BA47688D4D2BAF_StaticFields*)il2cpp_codegen_static_fields_for(LevelSaverLoader_t9A00927063FF8A8DEFDFDDA5D0BA47688D4D2BAF_il2cpp_TypeInfo_var))->___SAVE_BUDGET_KEY_3;
		int32_t L_1 = ___budget0;
		PlayerPrefs_SetInt_mDC9617BFD56FEC670626A1002D9A5FE963D8D175(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Int32 LevelSaverLoader::LoadBudget()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LevelSaverLoader_LoadBudget_m6A1C69213A55E0EEFC9426FB0DE5ADB64E888432 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LevelSaverLoader_t9A00927063FF8A8DEFDFDDA5D0BA47688D4D2BAF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(PlayerPrefs.HasKey(SAVE_BUDGET_KEY))
		il2cpp_codegen_runtime_class_init_inline(LevelSaverLoader_t9A00927063FF8A8DEFDFDDA5D0BA47688D4D2BAF_il2cpp_TypeInfo_var);
		String_t* L_0 = ((LevelSaverLoader_t9A00927063FF8A8DEFDFDDA5D0BA47688D4D2BAF_StaticFields*)il2cpp_codegen_static_fields_for(LevelSaverLoader_t9A00927063FF8A8DEFDFDDA5D0BA47688D4D2BAF_il2cpp_TypeInfo_var))->___SAVE_BUDGET_KEY_3;
		bool L_1;
		L_1 = PlayerPrefs_HasKey_m9EB15A18BE611107251F2E2F6CE70636F88CAB5F(L_0, NULL);
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		// return PlayerPrefs.GetInt(SAVE_BUDGET_KEY);
		il2cpp_codegen_runtime_class_init_inline(LevelSaverLoader_t9A00927063FF8A8DEFDFDDA5D0BA47688D4D2BAF_il2cpp_TypeInfo_var);
		String_t* L_2 = ((LevelSaverLoader_t9A00927063FF8A8DEFDFDDA5D0BA47688D4D2BAF_StaticFields*)il2cpp_codegen_static_fields_for(LevelSaverLoader_t9A00927063FF8A8DEFDFDDA5D0BA47688D4D2BAF_il2cpp_TypeInfo_var))->___SAVE_BUDGET_KEY_3;
		int32_t L_3;
		L_3 = PlayerPrefs_GetInt_m35C13A87BBC7907554CE5405EB5D00CF85E7457B(L_2, NULL);
		return L_3;
	}

IL_0017:
	{
		// PlayerPrefs.SetInt(SAVE_BUDGET_KEY,0);
		il2cpp_codegen_runtime_class_init_inline(LevelSaverLoader_t9A00927063FF8A8DEFDFDDA5D0BA47688D4D2BAF_il2cpp_TypeInfo_var);
		String_t* L_4 = ((LevelSaverLoader_t9A00927063FF8A8DEFDFDDA5D0BA47688D4D2BAF_StaticFields*)il2cpp_codegen_static_fields_for(LevelSaverLoader_t9A00927063FF8A8DEFDFDDA5D0BA47688D4D2BAF_il2cpp_TypeInfo_var))->___SAVE_BUDGET_KEY_3;
		PlayerPrefs_SetInt_mDC9617BFD56FEC670626A1002D9A5FE963D8D175(L_4, 0, NULL);
		// return 0;
		return 0;
	}
}
// System.Void LevelSaverLoader::SaveCurrentLevel(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelSaverLoader_SaveCurrentLevel_mEB769C5EC39F6BD103BC56519D32C7878EE11B4F (int32_t ___level0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LevelSaverLoader_t9A00927063FF8A8DEFDFDDA5D0BA47688D4D2BAF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PlayerPrefs.SetInt(SAVE_CURRENT_LEVEL_KEY, level);
		il2cpp_codegen_runtime_class_init_inline(LevelSaverLoader_t9A00927063FF8A8DEFDFDDA5D0BA47688D4D2BAF_il2cpp_TypeInfo_var);
		String_t* L_0 = ((LevelSaverLoader_t9A00927063FF8A8DEFDFDDA5D0BA47688D4D2BAF_StaticFields*)il2cpp_codegen_static_fields_for(LevelSaverLoader_t9A00927063FF8A8DEFDFDDA5D0BA47688D4D2BAF_il2cpp_TypeInfo_var))->___SAVE_CURRENT_LEVEL_KEY_1;
		int32_t L_1 = ___level0;
		PlayerPrefs_SetInt_mDC9617BFD56FEC670626A1002D9A5FE963D8D175(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Int32 LevelSaverLoader::LoadCurrentLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LevelSaverLoader_LoadCurrentLevel_mD6E98B2D6AC3147BA236D2E492EF193611BCAE05 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LevelSaverLoader_t9A00927063FF8A8DEFDFDDA5D0BA47688D4D2BAF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(PlayerPrefs.HasKey(SAVE_CURRENT_LEVEL_KEY)){
		il2cpp_codegen_runtime_class_init_inline(LevelSaverLoader_t9A00927063FF8A8DEFDFDDA5D0BA47688D4D2BAF_il2cpp_TypeInfo_var);
		String_t* L_0 = ((LevelSaverLoader_t9A00927063FF8A8DEFDFDDA5D0BA47688D4D2BAF_StaticFields*)il2cpp_codegen_static_fields_for(LevelSaverLoader_t9A00927063FF8A8DEFDFDDA5D0BA47688D4D2BAF_il2cpp_TypeInfo_var))->___SAVE_CURRENT_LEVEL_KEY_1;
		bool L_1;
		L_1 = PlayerPrefs_HasKey_m9EB15A18BE611107251F2E2F6CE70636F88CAB5F(L_0, NULL);
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		// return PlayerPrefs.GetInt(SAVE_CURRENT_LEVEL_KEY);
		il2cpp_codegen_runtime_class_init_inline(LevelSaverLoader_t9A00927063FF8A8DEFDFDDA5D0BA47688D4D2BAF_il2cpp_TypeInfo_var);
		String_t* L_2 = ((LevelSaverLoader_t9A00927063FF8A8DEFDFDDA5D0BA47688D4D2BAF_StaticFields*)il2cpp_codegen_static_fields_for(LevelSaverLoader_t9A00927063FF8A8DEFDFDDA5D0BA47688D4D2BAF_il2cpp_TypeInfo_var))->___SAVE_CURRENT_LEVEL_KEY_1;
		int32_t L_3;
		L_3 = PlayerPrefs_GetInt_m35C13A87BBC7907554CE5405EB5D00CF85E7457B(L_2, NULL);
		return L_3;
	}

IL_0017:
	{
		// return 1;
		return 1;
	}
}
// System.Void LevelSaverLoader::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelSaverLoader__ctor_m44E74A43E4C1452B6BA2730FC4B765F09CCD1044 (LevelSaverLoader_t9A00927063FF8A8DEFDFDDA5D0BA47688D4D2BAF* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void LevelSaverLoader::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelSaverLoader__cctor_m9FFBB8636EA0D6F64B2E8D1E446EB413E0E1FE53 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LevelSaverLoader_t9A00927063FF8A8DEFDFDDA5D0BA47688D4D2BAF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral182C2A78AF257E9851C84BE3704750B192AAB7B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6A37501FBBDBCACDE765086128EE76167E54DD75);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5459B4C2DCEAC561AB686D972B1A11EC5A9D3BE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCF1CD87FDFAC87AC835B1D3D847F56D3E6E59F66);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static string SAVES_KEY = "LevelsCounted";
		((LevelSaverLoader_t9A00927063FF8A8DEFDFDDA5D0BA47688D4D2BAF_StaticFields*)il2cpp_codegen_static_fields_for(LevelSaverLoader_t9A00927063FF8A8DEFDFDDA5D0BA47688D4D2BAF_il2cpp_TypeInfo_var))->___SAVES_KEY_0 = _stringLiteral6A37501FBBDBCACDE765086128EE76167E54DD75;
		Il2CppCodeGenWriteBarrier((void**)(&((LevelSaverLoader_t9A00927063FF8A8DEFDFDDA5D0BA47688D4D2BAF_StaticFields*)il2cpp_codegen_static_fields_for(LevelSaverLoader_t9A00927063FF8A8DEFDFDDA5D0BA47688D4D2BAF_il2cpp_TypeInfo_var))->___SAVES_KEY_0), (void*)_stringLiteral6A37501FBBDBCACDE765086128EE76167E54DD75);
		// public static string SAVE_CURRENT_LEVEL_KEY = "CurrentLevel";
		((LevelSaverLoader_t9A00927063FF8A8DEFDFDDA5D0BA47688D4D2BAF_StaticFields*)il2cpp_codegen_static_fields_for(LevelSaverLoader_t9A00927063FF8A8DEFDFDDA5D0BA47688D4D2BAF_il2cpp_TypeInfo_var))->___SAVE_CURRENT_LEVEL_KEY_1 = _stringLiteralCF1CD87FDFAC87AC835B1D3D847F56D3E6E59F66;
		Il2CppCodeGenWriteBarrier((void**)(&((LevelSaverLoader_t9A00927063FF8A8DEFDFDDA5D0BA47688D4D2BAF_StaticFields*)il2cpp_codegen_static_fields_for(LevelSaverLoader_t9A00927063FF8A8DEFDFDDA5D0BA47688D4D2BAF_il2cpp_TypeInfo_var))->___SAVE_CURRENT_LEVEL_KEY_1), (void*)_stringLiteralCF1CD87FDFAC87AC835B1D3D847F56D3E6E59F66);
		// public static string SAVE_BASE_RANG_KEY = "BaseRang";
		((LevelSaverLoader_t9A00927063FF8A8DEFDFDDA5D0BA47688D4D2BAF_StaticFields*)il2cpp_codegen_static_fields_for(LevelSaverLoader_t9A00927063FF8A8DEFDFDDA5D0BA47688D4D2BAF_il2cpp_TypeInfo_var))->___SAVE_BASE_RANG_KEY_2 = _stringLiteralC5459B4C2DCEAC561AB686D972B1A11EC5A9D3BE;
		Il2CppCodeGenWriteBarrier((void**)(&((LevelSaverLoader_t9A00927063FF8A8DEFDFDDA5D0BA47688D4D2BAF_StaticFields*)il2cpp_codegen_static_fields_for(LevelSaverLoader_t9A00927063FF8A8DEFDFDDA5D0BA47688D4D2BAF_il2cpp_TypeInfo_var))->___SAVE_BASE_RANG_KEY_2), (void*)_stringLiteralC5459B4C2DCEAC561AB686D972B1A11EC5A9D3BE);
		// public static string SAVE_BUDGET_KEY = "Budget";
		((LevelSaverLoader_t9A00927063FF8A8DEFDFDDA5D0BA47688D4D2BAF_StaticFields*)il2cpp_codegen_static_fields_for(LevelSaverLoader_t9A00927063FF8A8DEFDFDDA5D0BA47688D4D2BAF_il2cpp_TypeInfo_var))->___SAVE_BUDGET_KEY_3 = _stringLiteral182C2A78AF257E9851C84BE3704750B192AAB7B0;
		Il2CppCodeGenWriteBarrier((void**)(&((LevelSaverLoader_t9A00927063FF8A8DEFDFDDA5D0BA47688D4D2BAF_StaticFields*)il2cpp_codegen_static_fields_for(LevelSaverLoader_t9A00927063FF8A8DEFDFDDA5D0BA47688D4D2BAF_il2cpp_TypeInfo_var))->___SAVE_BUDGET_KEY_3), (void*)_stringLiteral182C2A78AF257E9851C84BE3704750B192AAB7B0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void DeflectorData::TryBuyRocketPart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflectorData_TryBuyRocketPart_m18FB8280264E759872574DDF30080FEC54466BD1 (DeflectorData_t6B09A69A7FF8BEF1E1CC861DDABDC15E9A8318A5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Deflector_t1F58E4F5F11EE15B7C7A869008F0B14BAC192E54_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Level_t1CED3B73CCB94716BF67A03B39D9DE9A991FD5A1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Rocket_t46CF4BC5917C91D995808226A9F11EA125C89AFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral846D8ED6616B4D6E7392237C86E1FB52B8C2CBF8);
		s_Il2CppMethodInitialized = true;
	}
	DeflectorDelegate_t7F503635DF21105D46E33B53A4921DA342943B1B* G_B3_0 = NULL;
	DeflectorDelegate_t7F503635DF21105D46E33B53A4921DA342943B1B* G_B2_0 = NULL;
	FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46* G_B6_0 = NULL;
	FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46* G_B5_0 = NULL;
	SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1* G_B9_0 = NULL;
	SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1* G_B8_0 = NULL;
	{
		// float _budget = Level.LevelBudget + Deflector._currentDeflector.Price;
		float L_0 = ((Level_t1CED3B73CCB94716BF67A03B39D9DE9A991FD5A1_StaticFields*)il2cpp_codegen_static_fields_for(Level_t1CED3B73CCB94716BF67A03B39D9DE9A991FD5A1_il2cpp_TypeInfo_var))->___LevelBudget_9;
		DeflectorData_t6B09A69A7FF8BEF1E1CC861DDABDC15E9A8318A5* L_1 = ((Deflector_t1F58E4F5F11EE15B7C7A869008F0B14BAC192E54_StaticFields*)il2cpp_codegen_static_fields_for(Deflector_t1F58E4F5F11EE15B7C7A869008F0B14BAC192E54_il2cpp_TypeInfo_var))->____currentDeflector_7;
		float L_2 = ((RocketPartData_t5D52B3A630DE734008E8AC3C974C6604543F03C3*)L_1)->___Price_7;
		// if(_budget > Price){
		float L_3 = ((RocketPartData_t5D52B3A630DE734008E8AC3C974C6604543F03C3*)__this)->___Price_7;
		if ((!(((float)((float)il2cpp_codegen_add(L_0, L_2))) > ((float)L_3))))
		{
			goto IL_00b1;
		}
	}
	{
		// Level.LevelBudget = Level.LevelBudget + Deflector._currentDeflector.Price - Price;
		float L_4 = ((Level_t1CED3B73CCB94716BF67A03B39D9DE9A991FD5A1_StaticFields*)il2cpp_codegen_static_fields_for(Level_t1CED3B73CCB94716BF67A03B39D9DE9A991FD5A1_il2cpp_TypeInfo_var))->___LevelBudget_9;
		DeflectorData_t6B09A69A7FF8BEF1E1CC861DDABDC15E9A8318A5* L_5 = ((Deflector_t1F58E4F5F11EE15B7C7A869008F0B14BAC192E54_StaticFields*)il2cpp_codegen_static_fields_for(Deflector_t1F58E4F5F11EE15B7C7A869008F0B14BAC192E54_il2cpp_TypeInfo_var))->____currentDeflector_7;
		float L_6 = ((RocketPartData_t5D52B3A630DE734008E8AC3C974C6604543F03C3*)L_5)->___Price_7;
		float L_7 = ((RocketPartData_t5D52B3A630DE734008E8AC3C974C6604543F03C3*)__this)->___Price_7;
		((Level_t1CED3B73CCB94716BF67A03B39D9DE9A991FD5A1_StaticFields*)il2cpp_codegen_static_fields_for(Level_t1CED3B73CCB94716BF67A03B39D9DE9A991FD5A1_il2cpp_TypeInfo_var))->___LevelBudget_9 = ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(L_4, L_6)), L_7));
		// Rocket.RocketWeigt = Rocket.RocketWeigt - Deflector._currentDeflector.Weight + Weight;
		float L_8 = ((Rocket_t46CF4BC5917C91D995808226A9F11EA125C89AFB_StaticFields*)il2cpp_codegen_static_fields_for(Rocket_t46CF4BC5917C91D995808226A9F11EA125C89AFB_il2cpp_TypeInfo_var))->___RocketWeigt_8;
		DeflectorData_t6B09A69A7FF8BEF1E1CC861DDABDC15E9A8318A5* L_9 = ((Deflector_t1F58E4F5F11EE15B7C7A869008F0B14BAC192E54_StaticFields*)il2cpp_codegen_static_fields_for(Deflector_t1F58E4F5F11EE15B7C7A869008F0B14BAC192E54_il2cpp_TypeInfo_var))->____currentDeflector_7;
		float L_10 = ((RocketPartData_t5D52B3A630DE734008E8AC3C974C6604543F03C3*)L_9)->___Weight_6;
		float L_11 = ((RocketPartData_t5D52B3A630DE734008E8AC3C974C6604543F03C3*)__this)->___Weight_6;
		((Rocket_t46CF4BC5917C91D995808226A9F11EA125C89AFB_StaticFields*)il2cpp_codegen_static_fields_for(Rocket_t46CF4BC5917C91D995808226A9F11EA125C89AFB_il2cpp_TypeInfo_var))->___RocketWeigt_8 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_subtract(L_8, L_10)), L_11));
		// Events.UpdateDeflectorEvent?.Invoke(this);
		DeflectorDelegate_t7F503635DF21105D46E33B53A4921DA342943B1B* L_12 = ((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___UpdateDeflectorEvent_5;
		DeflectorDelegate_t7F503635DF21105D46E33B53A4921DA342943B1B* L_13 = L_12;
		G_B2_0 = L_13;
		if (L_13)
		{
			G_B3_0 = L_13;
			goto IL_005e;
		}
	}
	{
		goto IL_0064;
	}

IL_005e:
	{
		DeflectorDelegate_Invoke_m729B6CA0909341CAAAD4E822F99E81B74CD0BB66_inline(G_B3_0, __this, NULL);
	}

IL_0064:
	{
		// Events.UpdateBudgetUI?.Invoke(Level.LevelBudget);
		FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46* L_14 = ((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___UpdateBudgetUI_17;
		FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46* L_15 = L_14;
		G_B5_0 = L_15;
		if (L_15)
		{
			G_B6_0 = L_15;
			goto IL_006f;
		}
	}
	{
		goto IL_0079;
	}

IL_006f:
	{
		float L_16 = ((Level_t1CED3B73CCB94716BF67A03B39D9DE9A991FD5A1_StaticFields*)il2cpp_codegen_static_fields_for(Level_t1CED3B73CCB94716BF67A03B39D9DE9A991FD5A1_il2cpp_TypeInfo_var))->___LevelBudget_9;
		FloatDelegate_Invoke_m4D49E45F98F312099A4ADDA6AEC51B40771DE2E6_inline(G_B6_0, L_16, NULL);
	}

IL_0079:
	{
		// Events.HideStore?.Invoke();
		SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1* L_17 = ((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___HideStore_25;
		SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1* L_18 = L_17;
		G_B8_0 = L_18;
		if (L_18)
		{
			G_B9_0 = L_18;
			goto IL_0084;
		}
	}
	{
		goto IL_0089;
	}

IL_0084:
	{
		SimpleDelegate_Invoke_mE39CE43C6B97CE701F70DE6A5DCDAB2EAAA05C94_inline(G_B9_0, NULL);
	}

IL_0089:
	{
		// Debug.Log("weight: " + Rocket.RocketWeigt);
		String_t* L_19;
		L_19 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972((&((Rocket_t46CF4BC5917C91D995808226A9F11EA125C89AFB_StaticFields*)il2cpp_codegen_static_fields_for(Rocket_t46CF4BC5917C91D995808226A9F11EA125C89AFB_il2cpp_TypeInfo_var))->___RocketWeigt_8), NULL);
		String_t* L_20;
		L_20 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral846D8ED6616B4D6E7392237C86E1FB52B8C2CBF8, L_19, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_20, NULL);
		// Debug.Log(Level.LevelBudget);
		float L_21 = ((Level_t1CED3B73CCB94716BF67A03B39D9DE9A991FD5A1_StaticFields*)il2cpp_codegen_static_fields_for(Level_t1CED3B73CCB94716BF67A03B39D9DE9A991FD5A1_il2cpp_TypeInfo_var))->___LevelBudget_9;
		float L_22 = L_21;
		RuntimeObject* L_23 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_22);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_23, NULL);
	}

IL_00b1:
	{
		// }
		return;
	}
}
// System.Single DeflectorData::ReturnParametr()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float DeflectorData_ReturnParametr_m52EE3C7E729B116DEFAF99298DCA25E88A89095E (DeflectorData_t6B09A69A7FF8BEF1E1CC861DDABDC15E9A8318A5* __this, const RuntimeMethod* method) 
{
	{
		// return(Resistance);
		float L_0 = __this->___Resistance_11;
		return L_0;
	}
}
// System.Void DeflectorData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflectorData__ctor_m0F958987EB43F945F5FEFAC1505A5B618B61EFAD (DeflectorData_t6B09A69A7FF8BEF1E1CC861DDABDC15E9A8318A5* __this, const RuntimeMethod* method) 
{
	{
		RocketPartData__ctor_m7ED5ED1EE80D7B87FD9C9771741B7A11474A3349(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void EngineData::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EngineData_Awake_mC9F1D1A13D9B7BCDA7237B7682044877F783605E (EngineData_t82D35F92377644522DEBEADE8F95040A3F65C6AA* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void EngineData::TryBuyRocketPart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EngineData_TryBuyRocketPart_m4CFB0ABDA4F0E59F6A2EE81FB777337731447B0A (EngineData_t82D35F92377644522DEBEADE8F95040A3F65C6AA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Engine_t59D31EC59AD8AAF189236F53F6E5B083856B0F00_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Level_t1CED3B73CCB94716BF67A03B39D9DE9A991FD5A1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Rocket_t46CF4BC5917C91D995808226A9F11EA125C89AFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral846D8ED6616B4D6E7392237C86E1FB52B8C2CBF8);
		s_Il2CppMethodInitialized = true;
	}
	EngineDelegate_t7BD0ACF919FD17DB5AED3D8609768F62FE90FC5D* G_B3_0 = NULL;
	EngineDelegate_t7BD0ACF919FD17DB5AED3D8609768F62FE90FC5D* G_B2_0 = NULL;
	FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46* G_B6_0 = NULL;
	FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46* G_B5_0 = NULL;
	SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1* G_B9_0 = NULL;
	SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1* G_B8_0 = NULL;
	{
		// float _budget = Level.LevelBudget + Engine._currentEngine.Price;
		float L_0 = ((Level_t1CED3B73CCB94716BF67A03B39D9DE9A991FD5A1_StaticFields*)il2cpp_codegen_static_fields_for(Level_t1CED3B73CCB94716BF67A03B39D9DE9A991FD5A1_il2cpp_TypeInfo_var))->___LevelBudget_9;
		EngineData_t82D35F92377644522DEBEADE8F95040A3F65C6AA* L_1 = ((Engine_t59D31EC59AD8AAF189236F53F6E5B083856B0F00_StaticFields*)il2cpp_codegen_static_fields_for(Engine_t59D31EC59AD8AAF189236F53F6E5B083856B0F00_il2cpp_TypeInfo_var))->____currentEngine_7;
		float L_2 = ((RocketPartData_t5D52B3A630DE734008E8AC3C974C6604543F03C3*)L_1)->___Price_7;
		// if(_budget > Price){
		float L_3 = ((RocketPartData_t5D52B3A630DE734008E8AC3C974C6604543F03C3*)__this)->___Price_7;
		if ((!(((float)((float)il2cpp_codegen_add(L_0, L_2))) > ((float)L_3))))
		{
			goto IL_00b1;
		}
	}
	{
		// Level.LevelBudget = Level.LevelBudget + Engine._currentEngine.Price - Price;
		float L_4 = ((Level_t1CED3B73CCB94716BF67A03B39D9DE9A991FD5A1_StaticFields*)il2cpp_codegen_static_fields_for(Level_t1CED3B73CCB94716BF67A03B39D9DE9A991FD5A1_il2cpp_TypeInfo_var))->___LevelBudget_9;
		EngineData_t82D35F92377644522DEBEADE8F95040A3F65C6AA* L_5 = ((Engine_t59D31EC59AD8AAF189236F53F6E5B083856B0F00_StaticFields*)il2cpp_codegen_static_fields_for(Engine_t59D31EC59AD8AAF189236F53F6E5B083856B0F00_il2cpp_TypeInfo_var))->____currentEngine_7;
		float L_6 = ((RocketPartData_t5D52B3A630DE734008E8AC3C974C6604543F03C3*)L_5)->___Price_7;
		float L_7 = ((RocketPartData_t5D52B3A630DE734008E8AC3C974C6604543F03C3*)__this)->___Price_7;
		((Level_t1CED3B73CCB94716BF67A03B39D9DE9A991FD5A1_StaticFields*)il2cpp_codegen_static_fields_for(Level_t1CED3B73CCB94716BF67A03B39D9DE9A991FD5A1_il2cpp_TypeInfo_var))->___LevelBudget_9 = ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(L_4, L_6)), L_7));
		// Rocket.RocketWeigt = Rocket.RocketWeigt - Engine._currentEngine.Weight + Weight;
		float L_8 = ((Rocket_t46CF4BC5917C91D995808226A9F11EA125C89AFB_StaticFields*)il2cpp_codegen_static_fields_for(Rocket_t46CF4BC5917C91D995808226A9F11EA125C89AFB_il2cpp_TypeInfo_var))->___RocketWeigt_8;
		EngineData_t82D35F92377644522DEBEADE8F95040A3F65C6AA* L_9 = ((Engine_t59D31EC59AD8AAF189236F53F6E5B083856B0F00_StaticFields*)il2cpp_codegen_static_fields_for(Engine_t59D31EC59AD8AAF189236F53F6E5B083856B0F00_il2cpp_TypeInfo_var))->____currentEngine_7;
		float L_10 = ((RocketPartData_t5D52B3A630DE734008E8AC3C974C6604543F03C3*)L_9)->___Weight_6;
		float L_11 = ((RocketPartData_t5D52B3A630DE734008E8AC3C974C6604543F03C3*)__this)->___Weight_6;
		((Rocket_t46CF4BC5917C91D995808226A9F11EA125C89AFB_StaticFields*)il2cpp_codegen_static_fields_for(Rocket_t46CF4BC5917C91D995808226A9F11EA125C89AFB_il2cpp_TypeInfo_var))->___RocketWeigt_8 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_subtract(L_8, L_10)), L_11));
		// Events.UpdateEngineEvent?.Invoke(this);
		EngineDelegate_t7BD0ACF919FD17DB5AED3D8609768F62FE90FC5D* L_12 = ((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___UpdateEngineEvent_4;
		EngineDelegate_t7BD0ACF919FD17DB5AED3D8609768F62FE90FC5D* L_13 = L_12;
		G_B2_0 = L_13;
		if (L_13)
		{
			G_B3_0 = L_13;
			goto IL_005e;
		}
	}
	{
		goto IL_0064;
	}

IL_005e:
	{
		EngineDelegate_Invoke_m0B2D282E44DDEAEEE5C8C95DABC07A2179B92722_inline(G_B3_0, __this, NULL);
	}

IL_0064:
	{
		// Events.UpdateBudgetUI?.Invoke(Level.LevelBudget);
		FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46* L_14 = ((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___UpdateBudgetUI_17;
		FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46* L_15 = L_14;
		G_B5_0 = L_15;
		if (L_15)
		{
			G_B6_0 = L_15;
			goto IL_006f;
		}
	}
	{
		goto IL_0079;
	}

IL_006f:
	{
		float L_16 = ((Level_t1CED3B73CCB94716BF67A03B39D9DE9A991FD5A1_StaticFields*)il2cpp_codegen_static_fields_for(Level_t1CED3B73CCB94716BF67A03B39D9DE9A991FD5A1_il2cpp_TypeInfo_var))->___LevelBudget_9;
		FloatDelegate_Invoke_m4D49E45F98F312099A4ADDA6AEC51B40771DE2E6_inline(G_B6_0, L_16, NULL);
	}

IL_0079:
	{
		// Events.HideStore?.Invoke();
		SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1* L_17 = ((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___HideStore_25;
		SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1* L_18 = L_17;
		G_B8_0 = L_18;
		if (L_18)
		{
			G_B9_0 = L_18;
			goto IL_0084;
		}
	}
	{
		goto IL_0089;
	}

IL_0084:
	{
		SimpleDelegate_Invoke_mE39CE43C6B97CE701F70DE6A5DCDAB2EAAA05C94_inline(G_B9_0, NULL);
	}

IL_0089:
	{
		// Debug.Log("weight: " + Rocket.RocketWeigt);
		String_t* L_19;
		L_19 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972((&((Rocket_t46CF4BC5917C91D995808226A9F11EA125C89AFB_StaticFields*)il2cpp_codegen_static_fields_for(Rocket_t46CF4BC5917C91D995808226A9F11EA125C89AFB_il2cpp_TypeInfo_var))->___RocketWeigt_8), NULL);
		String_t* L_20;
		L_20 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral846D8ED6616B4D6E7392237C86E1FB52B8C2CBF8, L_19, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_20, NULL);
		// Debug.Log(Level.LevelBudget);
		float L_21 = ((Level_t1CED3B73CCB94716BF67A03B39D9DE9A991FD5A1_StaticFields*)il2cpp_codegen_static_fields_for(Level_t1CED3B73CCB94716BF67A03B39D9DE9A991FD5A1_il2cpp_TypeInfo_var))->___LevelBudget_9;
		float L_22 = L_21;
		RuntimeObject* L_23 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_22);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_23, NULL);
	}

IL_00b1:
	{
		// }
		return;
	}
}
// System.Single EngineData::ReturnParametr()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float EngineData_ReturnParametr_mFD3931281F6E56520B526483B8AD49254C379EEC (EngineData_t82D35F92377644522DEBEADE8F95040A3F65C6AA* __this, const RuntimeMethod* method) 
{
	{
		// return(Thrust);
		float L_0 = __this->___Thrust_11;
		return L_0;
	}
}
// System.Void EngineData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EngineData__ctor_m7111EF6A78825D85D2AEECF771FDF549B70E2D12 (EngineData_t82D35F92377644522DEBEADE8F95040A3F65C6AA* __this, const RuntimeMethod* method) 
{
	{
		RocketPartData__ctor_m7ED5ED1EE80D7B87FD9C9771741B7A11474A3349(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void PlumageData::TryBuyRocketPart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlumageData_TryBuyRocketPart_m130D6E0BAC40DA46474B3149161680BCAE9E107A (PlumageData_tF8E9C197181F7308588184A8236BFA6838D26F4F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Level_t1CED3B73CCB94716BF67A03B39D9DE9A991FD5A1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Plumage_tE14F878A24757929120FE226D2268E486A8384F9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Rocket_t46CF4BC5917C91D995808226A9F11EA125C89AFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral846D8ED6616B4D6E7392237C86E1FB52B8C2CBF8);
		s_Il2CppMethodInitialized = true;
	}
	PlumagageDelegate_t7796A8A34036A8879878AF048A60102069DA5EDF* G_B3_0 = NULL;
	PlumagageDelegate_t7796A8A34036A8879878AF048A60102069DA5EDF* G_B2_0 = NULL;
	FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46* G_B6_0 = NULL;
	FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46* G_B5_0 = NULL;
	SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1* G_B9_0 = NULL;
	SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1* G_B8_0 = NULL;
	{
		// float _budget = Level.LevelBudget + Plumage._currentPlumage.Price;
		float L_0 = ((Level_t1CED3B73CCB94716BF67A03B39D9DE9A991FD5A1_StaticFields*)il2cpp_codegen_static_fields_for(Level_t1CED3B73CCB94716BF67A03B39D9DE9A991FD5A1_il2cpp_TypeInfo_var))->___LevelBudget_9;
		PlumageData_tF8E9C197181F7308588184A8236BFA6838D26F4F* L_1 = ((Plumage_tE14F878A24757929120FE226D2268E486A8384F9_StaticFields*)il2cpp_codegen_static_fields_for(Plumage_tE14F878A24757929120FE226D2268E486A8384F9_il2cpp_TypeInfo_var))->____currentPlumage_7;
		float L_2 = ((RocketPartData_t5D52B3A630DE734008E8AC3C974C6604543F03C3*)L_1)->___Price_7;
		// if(_budget > Price){
		float L_3 = ((RocketPartData_t5D52B3A630DE734008E8AC3C974C6604543F03C3*)__this)->___Price_7;
		if ((!(((float)((float)il2cpp_codegen_add(L_0, L_2))) > ((float)L_3))))
		{
			goto IL_00b1;
		}
	}
	{
		// Level.LevelBudget = Level.LevelBudget + Plumage._currentPlumage.Price - Price;
		float L_4 = ((Level_t1CED3B73CCB94716BF67A03B39D9DE9A991FD5A1_StaticFields*)il2cpp_codegen_static_fields_for(Level_t1CED3B73CCB94716BF67A03B39D9DE9A991FD5A1_il2cpp_TypeInfo_var))->___LevelBudget_9;
		PlumageData_tF8E9C197181F7308588184A8236BFA6838D26F4F* L_5 = ((Plumage_tE14F878A24757929120FE226D2268E486A8384F9_StaticFields*)il2cpp_codegen_static_fields_for(Plumage_tE14F878A24757929120FE226D2268E486A8384F9_il2cpp_TypeInfo_var))->____currentPlumage_7;
		float L_6 = ((RocketPartData_t5D52B3A630DE734008E8AC3C974C6604543F03C3*)L_5)->___Price_7;
		float L_7 = ((RocketPartData_t5D52B3A630DE734008E8AC3C974C6604543F03C3*)__this)->___Price_7;
		((Level_t1CED3B73CCB94716BF67A03B39D9DE9A991FD5A1_StaticFields*)il2cpp_codegen_static_fields_for(Level_t1CED3B73CCB94716BF67A03B39D9DE9A991FD5A1_il2cpp_TypeInfo_var))->___LevelBudget_9 = ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(L_4, L_6)), L_7));
		// Rocket.RocketWeigt = Rocket.RocketWeigt - Plumage._currentPlumage.Weight + Weight;
		float L_8 = ((Rocket_t46CF4BC5917C91D995808226A9F11EA125C89AFB_StaticFields*)il2cpp_codegen_static_fields_for(Rocket_t46CF4BC5917C91D995808226A9F11EA125C89AFB_il2cpp_TypeInfo_var))->___RocketWeigt_8;
		PlumageData_tF8E9C197181F7308588184A8236BFA6838D26F4F* L_9 = ((Plumage_tE14F878A24757929120FE226D2268E486A8384F9_StaticFields*)il2cpp_codegen_static_fields_for(Plumage_tE14F878A24757929120FE226D2268E486A8384F9_il2cpp_TypeInfo_var))->____currentPlumage_7;
		float L_10 = ((RocketPartData_t5D52B3A630DE734008E8AC3C974C6604543F03C3*)L_9)->___Weight_6;
		float L_11 = ((RocketPartData_t5D52B3A630DE734008E8AC3C974C6604543F03C3*)__this)->___Weight_6;
		((Rocket_t46CF4BC5917C91D995808226A9F11EA125C89AFB_StaticFields*)il2cpp_codegen_static_fields_for(Rocket_t46CF4BC5917C91D995808226A9F11EA125C89AFB_il2cpp_TypeInfo_var))->___RocketWeigt_8 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_subtract(L_8, L_10)), L_11));
		// Events.UpdatePlumageEvent?.Invoke(this);
		PlumagageDelegate_t7796A8A34036A8879878AF048A60102069DA5EDF* L_12 = ((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___UpdatePlumageEvent_7;
		PlumagageDelegate_t7796A8A34036A8879878AF048A60102069DA5EDF* L_13 = L_12;
		G_B2_0 = L_13;
		if (L_13)
		{
			G_B3_0 = L_13;
			goto IL_005e;
		}
	}
	{
		goto IL_0064;
	}

IL_005e:
	{
		PlumagageDelegate_Invoke_m7BFA66B023F4F9A87ECEE93B7DBBE2B1E182C487_inline(G_B3_0, __this, NULL);
	}

IL_0064:
	{
		// Events.UpdateBudgetUI?.Invoke(Level.LevelBudget);
		FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46* L_14 = ((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___UpdateBudgetUI_17;
		FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46* L_15 = L_14;
		G_B5_0 = L_15;
		if (L_15)
		{
			G_B6_0 = L_15;
			goto IL_006f;
		}
	}
	{
		goto IL_0079;
	}

IL_006f:
	{
		float L_16 = ((Level_t1CED3B73CCB94716BF67A03B39D9DE9A991FD5A1_StaticFields*)il2cpp_codegen_static_fields_for(Level_t1CED3B73CCB94716BF67A03B39D9DE9A991FD5A1_il2cpp_TypeInfo_var))->___LevelBudget_9;
		FloatDelegate_Invoke_m4D49E45F98F312099A4ADDA6AEC51B40771DE2E6_inline(G_B6_0, L_16, NULL);
	}

IL_0079:
	{
		// Events.HideStore?.Invoke();
		SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1* L_17 = ((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___HideStore_25;
		SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1* L_18 = L_17;
		G_B8_0 = L_18;
		if (L_18)
		{
			G_B9_0 = L_18;
			goto IL_0084;
		}
	}
	{
		goto IL_0089;
	}

IL_0084:
	{
		SimpleDelegate_Invoke_mE39CE43C6B97CE701F70DE6A5DCDAB2EAAA05C94_inline(G_B9_0, NULL);
	}

IL_0089:
	{
		// Debug.Log("weight: " + Rocket.RocketWeigt);
		String_t* L_19;
		L_19 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972((&((Rocket_t46CF4BC5917C91D995808226A9F11EA125C89AFB_StaticFields*)il2cpp_codegen_static_fields_for(Rocket_t46CF4BC5917C91D995808226A9F11EA125C89AFB_il2cpp_TypeInfo_var))->___RocketWeigt_8), NULL);
		String_t* L_20;
		L_20 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral846D8ED6616B4D6E7392237C86E1FB52B8C2CBF8, L_19, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_20, NULL);
		// Debug.Log(Level.LevelBudget);
		float L_21 = ((Level_t1CED3B73CCB94716BF67A03B39D9DE9A991FD5A1_StaticFields*)il2cpp_codegen_static_fields_for(Level_t1CED3B73CCB94716BF67A03B39D9DE9A991FD5A1_il2cpp_TypeInfo_var))->___LevelBudget_9;
		float L_22 = L_21;
		RuntimeObject* L_23 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_22);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_23, NULL);
	}

IL_00b1:
	{
		// }
		return;
	}
}
// System.Single PlumageData::ReturnParametr()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PlumageData_ReturnParametr_mB0175CFD44F9294F4BA06ADDDB741001347CF7FC (PlumageData_tF8E9C197181F7308588184A8236BFA6838D26F4F* __this, const RuntimeMethod* method) 
{
	{
		// return(Control);
		float L_0 = __this->___Control_11;
		return L_0;
	}
}
// System.Void PlumageData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlumageData__ctor_m8442EE2EE09D45821E7227D6A12567393E258A13 (PlumageData_tF8E9C197181F7308588184A8236BFA6838D26F4F* __this, const RuntimeMethod* method) 
{
	{
		RocketPartData__ctor_m7ED5ED1EE80D7B87FD9C9771741B7A11474A3349(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void RocketPartData::TryBuyRocketPart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RocketPartData_TryBuyRocketPart_m649C8E6C0AB9EB247ABCF5FB605AA55D85D43646 (RocketPartData_t5D52B3A630DE734008E8AC3C974C6604543F03C3* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Single RocketPartData::ReturnParametr()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float RocketPartData_ReturnParametr_m37AF705CE072A17C3F9034288B44ED9DBBC6667F (RocketPartData_t5D52B3A630DE734008E8AC3C974C6604543F03C3* __this, const RuntimeMethod* method) 
{
	{
		// return(0);
		return (0.0f);
	}
}
// System.Void RocketPartData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RocketPartData__ctor_m7ED5ED1EE80D7B87FD9C9771741B7A11474A3349 (RocketPartData_t5D52B3A630DE734008E8AC3C974C6604543F03C3* __this, const RuntimeMethod* method) 
{
	{
		ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TankData::TryBuyRocketPart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TankData_TryBuyRocketPart_m22765F019FA528B988CEFB85ACCFA6D7C0818358 (TankData_t928F6B9458C59DFABB9B9083374169207AC416F0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Level_t1CED3B73CCB94716BF67A03B39D9DE9A991FD5A1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Rocket_t46CF4BC5917C91D995808226A9F11EA125C89AFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tank_t2AFD1F8BD4E308EA6AC4B0EAEA9C9D7FC5B187ED_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral846D8ED6616B4D6E7392237C86E1FB52B8C2CBF8);
		s_Il2CppMethodInitialized = true;
	}
	TankDelegate_tD05489FE7D4AAD92C0F65F9D07006F7522B875C5* G_B3_0 = NULL;
	TankDelegate_tD05489FE7D4AAD92C0F65F9D07006F7522B875C5* G_B2_0 = NULL;
	FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46* G_B6_0 = NULL;
	FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46* G_B5_0 = NULL;
	SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1* G_B9_0 = NULL;
	SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1* G_B8_0 = NULL;
	{
		// float _budget = Level.LevelBudget + Tank._currentTank.Price;
		float L_0 = ((Level_t1CED3B73CCB94716BF67A03B39D9DE9A991FD5A1_StaticFields*)il2cpp_codegen_static_fields_for(Level_t1CED3B73CCB94716BF67A03B39D9DE9A991FD5A1_il2cpp_TypeInfo_var))->___LevelBudget_9;
		TankData_t928F6B9458C59DFABB9B9083374169207AC416F0* L_1 = ((Tank_t2AFD1F8BD4E308EA6AC4B0EAEA9C9D7FC5B187ED_StaticFields*)il2cpp_codegen_static_fields_for(Tank_t2AFD1F8BD4E308EA6AC4B0EAEA9C9D7FC5B187ED_il2cpp_TypeInfo_var))->____currentTank_7;
		float L_2 = ((RocketPartData_t5D52B3A630DE734008E8AC3C974C6604543F03C3*)L_1)->___Price_7;
		// if(_budget > Price){
		float L_3 = ((RocketPartData_t5D52B3A630DE734008E8AC3C974C6604543F03C3*)__this)->___Price_7;
		if ((!(((float)((float)il2cpp_codegen_add(L_0, L_2))) > ((float)L_3))))
		{
			goto IL_00b1;
		}
	}
	{
		// Level.LevelBudget = Level.LevelBudget + Tank._currentTank.Price - Price;
		float L_4 = ((Level_t1CED3B73CCB94716BF67A03B39D9DE9A991FD5A1_StaticFields*)il2cpp_codegen_static_fields_for(Level_t1CED3B73CCB94716BF67A03B39D9DE9A991FD5A1_il2cpp_TypeInfo_var))->___LevelBudget_9;
		TankData_t928F6B9458C59DFABB9B9083374169207AC416F0* L_5 = ((Tank_t2AFD1F8BD4E308EA6AC4B0EAEA9C9D7FC5B187ED_StaticFields*)il2cpp_codegen_static_fields_for(Tank_t2AFD1F8BD4E308EA6AC4B0EAEA9C9D7FC5B187ED_il2cpp_TypeInfo_var))->____currentTank_7;
		float L_6 = ((RocketPartData_t5D52B3A630DE734008E8AC3C974C6604543F03C3*)L_5)->___Price_7;
		float L_7 = ((RocketPartData_t5D52B3A630DE734008E8AC3C974C6604543F03C3*)__this)->___Price_7;
		((Level_t1CED3B73CCB94716BF67A03B39D9DE9A991FD5A1_StaticFields*)il2cpp_codegen_static_fields_for(Level_t1CED3B73CCB94716BF67A03B39D9DE9A991FD5A1_il2cpp_TypeInfo_var))->___LevelBudget_9 = ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(L_4, L_6)), L_7));
		// Rocket.RocketWeigt = Rocket.RocketWeigt - Tank._currentTank.Weight + Weight;
		float L_8 = ((Rocket_t46CF4BC5917C91D995808226A9F11EA125C89AFB_StaticFields*)il2cpp_codegen_static_fields_for(Rocket_t46CF4BC5917C91D995808226A9F11EA125C89AFB_il2cpp_TypeInfo_var))->___RocketWeigt_8;
		TankData_t928F6B9458C59DFABB9B9083374169207AC416F0* L_9 = ((Tank_t2AFD1F8BD4E308EA6AC4B0EAEA9C9D7FC5B187ED_StaticFields*)il2cpp_codegen_static_fields_for(Tank_t2AFD1F8BD4E308EA6AC4B0EAEA9C9D7FC5B187ED_il2cpp_TypeInfo_var))->____currentTank_7;
		float L_10 = ((RocketPartData_t5D52B3A630DE734008E8AC3C974C6604543F03C3*)L_9)->___Weight_6;
		float L_11 = ((RocketPartData_t5D52B3A630DE734008E8AC3C974C6604543F03C3*)__this)->___Weight_6;
		((Rocket_t46CF4BC5917C91D995808226A9F11EA125C89AFB_StaticFields*)il2cpp_codegen_static_fields_for(Rocket_t46CF4BC5917C91D995808226A9F11EA125C89AFB_il2cpp_TypeInfo_var))->___RocketWeigt_8 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_subtract(L_8, L_10)), L_11));
		// Events.UpdateTankEvent?.Invoke(this);
		TankDelegate_tD05489FE7D4AAD92C0F65F9D07006F7522B875C5* L_12 = ((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___UpdateTankEvent_6;
		TankDelegate_tD05489FE7D4AAD92C0F65F9D07006F7522B875C5* L_13 = L_12;
		G_B2_0 = L_13;
		if (L_13)
		{
			G_B3_0 = L_13;
			goto IL_005e;
		}
	}
	{
		goto IL_0064;
	}

IL_005e:
	{
		TankDelegate_Invoke_m6C16B27CFCCFDAF6621280BEEB2B0137F498847A_inline(G_B3_0, __this, NULL);
	}

IL_0064:
	{
		// Events.UpdateBudgetUI?.Invoke(Level.LevelBudget);
		FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46* L_14 = ((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___UpdateBudgetUI_17;
		FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46* L_15 = L_14;
		G_B5_0 = L_15;
		if (L_15)
		{
			G_B6_0 = L_15;
			goto IL_006f;
		}
	}
	{
		goto IL_0079;
	}

IL_006f:
	{
		float L_16 = ((Level_t1CED3B73CCB94716BF67A03B39D9DE9A991FD5A1_StaticFields*)il2cpp_codegen_static_fields_for(Level_t1CED3B73CCB94716BF67A03B39D9DE9A991FD5A1_il2cpp_TypeInfo_var))->___LevelBudget_9;
		FloatDelegate_Invoke_m4D49E45F98F312099A4ADDA6AEC51B40771DE2E6_inline(G_B6_0, L_16, NULL);
	}

IL_0079:
	{
		// Events.HideStore?.Invoke();
		SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1* L_17 = ((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___HideStore_25;
		SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1* L_18 = L_17;
		G_B8_0 = L_18;
		if (L_18)
		{
			G_B9_0 = L_18;
			goto IL_0084;
		}
	}
	{
		goto IL_0089;
	}

IL_0084:
	{
		SimpleDelegate_Invoke_mE39CE43C6B97CE701F70DE6A5DCDAB2EAAA05C94_inline(G_B9_0, NULL);
	}

IL_0089:
	{
		// Debug.Log("weight: " + Rocket.RocketWeigt);
		String_t* L_19;
		L_19 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972((&((Rocket_t46CF4BC5917C91D995808226A9F11EA125C89AFB_StaticFields*)il2cpp_codegen_static_fields_for(Rocket_t46CF4BC5917C91D995808226A9F11EA125C89AFB_il2cpp_TypeInfo_var))->___RocketWeigt_8), NULL);
		String_t* L_20;
		L_20 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral846D8ED6616B4D6E7392237C86E1FB52B8C2CBF8, L_19, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_20, NULL);
		// Debug.Log(Level.LevelBudget);
		float L_21 = ((Level_t1CED3B73CCB94716BF67A03B39D9DE9A991FD5A1_StaticFields*)il2cpp_codegen_static_fields_for(Level_t1CED3B73CCB94716BF67A03B39D9DE9A991FD5A1_il2cpp_TypeInfo_var))->___LevelBudget_9;
		float L_22 = L_21;
		RuntimeObject* L_23 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_22);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_23, NULL);
	}

IL_00b1:
	{
		// }
		return;
	}
}
// System.Single TankData::ReturnParametr()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TankData_ReturnParametr_m796E1B748204CAA7D83C60007308D7FF706C6CB5 (TankData_t928F6B9458C59DFABB9B9083374169207AC416F0* __this, const RuntimeMethod* method) 
{
	{
		// return(SpecificImpulse);
		float L_0 = __this->___SpecificImpulse_11;
		return L_0;
	}
}
// System.Void TankData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TankData__ctor_m84E7DBD2380019BD3B63CE1E41E3CD75292D6DF2 (TankData_t928F6B9458C59DFABB9B9083374169207AC416F0* __this, const RuntimeMethod* method) 
{
	{
		RocketPartData__ctor_m7ED5ED1EE80D7B87FD9C9771741B7A11474A3349(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Explosion::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Explosion_Awake_mD15B2FDAB21C62E81D1E6D45B60785182AF3FB75 (Explosion_t75EBC696AB674B02BDDEA9D47C842389FD72C847* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Explosion_renderExplosion_m6ED3DDE42B6D10DC1059CF20D74C7A608D6F6A78_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Events.DestroyRocket += renderExplosion;
		SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1* L_0 = ((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___DestroyRocket_29;
		SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1* L_1 = (SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1*)il2cpp_codegen_object_new(SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1_il2cpp_TypeInfo_var);
		SimpleDelegate__ctor_m52198E5C89703FE51B58861C8D85FBC3885F4082(L_1, __this, (intptr_t)((void*)Explosion_renderExplosion_m6ED3DDE42B6D10DC1059CF20D74C7A608D6F6A78_RuntimeMethod_var), NULL);
		Delegate_t* L_2;
		L_2 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_0, L_1, NULL);
		((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___DestroyRocket_29 = ((SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1*)CastclassSealed((RuntimeObject*)L_2, SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___DestroyRocket_29), (void*)((SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1*)CastclassSealed((RuntimeObject*)L_2, SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1_il2cpp_TypeInfo_var)));
		// }
		return;
	}
}
// System.Void Explosion::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Explosion_OnDestroy_m9155189D6F571E09C25A0DAB6F876AFC8FFFA368 (Explosion_t75EBC696AB674B02BDDEA9D47C842389FD72C847* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Explosion_renderExplosion_m6ED3DDE42B6D10DC1059CF20D74C7A608D6F6A78_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Events.DestroyRocket -= renderExplosion;
		SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1* L_0 = ((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___DestroyRocket_29;
		SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1* L_1 = (SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1*)il2cpp_codegen_object_new(SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1_il2cpp_TypeInfo_var);
		SimpleDelegate__ctor_m52198E5C89703FE51B58861C8D85FBC3885F4082(L_1, __this, (intptr_t)((void*)Explosion_renderExplosion_m6ED3DDE42B6D10DC1059CF20D74C7A608D6F6A78_RuntimeMethod_var), NULL);
		Delegate_t* L_2;
		L_2 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_0, L_1, NULL);
		((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___DestroyRocket_29 = ((SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1*)CastclassSealed((RuntimeObject*)L_2, SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___DestroyRocket_29), (void*)((SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1*)CastclassSealed((RuntimeObject*)L_2, SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1_il2cpp_TypeInfo_var)));
		// }
		return;
	}
}
// System.Void Explosion::renderExplosion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Explosion_renderExplosion_m6ED3DDE42B6D10DC1059CF20D74C7A608D6F6A78 (Explosion_t75EBC696AB674B02BDDEA9D47C842389FD72C847* __this, const RuntimeMethod* method) 
{
	{
		// private void renderExplosion() => _explosion.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->____explosion_4;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)1, NULL);
		return;
	}
}
// System.Void Explosion::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Explosion__ctor_mCE002252DB377B0FC990478B1F6EE4414E832403 (Explosion_t75EBC696AB674B02BDDEA9D47C842389FD72C847* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Rocket::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rocket_OnDestroy_m044FB769BB148D2D18D03B90701DAECEF9B274C4 (Rocket_t46CF4BC5917C91D995808226A9F11EA125C89AFB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Rocket_updateControl_m4AAA0EDD04DAE5C4A7C646ACDBC229BD2BAC079E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Rocket_updateResistance_m958DA55EFB6336F90092FE3F7F1EB0FBF2564AD6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Rocket_updateSpecificImpulse_mC4309713AADDC4B630151CF7F8CB1BC68ED2B0AA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Rocket_updateThrust_m69C0ED2738BE5BE722BFCE1A458ECD4789D52385_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Events.UpdateThrust -= updateThrust;
		FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46* L_0 = ((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___UpdateThrust_12;
		FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46* L_1 = (FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46*)il2cpp_codegen_object_new(FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46_il2cpp_TypeInfo_var);
		FloatDelegate__ctor_mF5CFDCFA2728F6F061009EDF3AE1BEC8F79B3B6C(L_1, __this, (intptr_t)((void*)Rocket_updateThrust_m69C0ED2738BE5BE722BFCE1A458ECD4789D52385_RuntimeMethod_var), NULL);
		Delegate_t* L_2;
		L_2 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_0, L_1, NULL);
		((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___UpdateThrust_12 = ((FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46*)CastclassSealed((RuntimeObject*)L_2, FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___UpdateThrust_12), (void*)((FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46*)CastclassSealed((RuntimeObject*)L_2, FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46_il2cpp_TypeInfo_var)));
		// Events.UpdateControl -= updateControl;
		FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46* L_3 = ((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___UpdateControl_13;
		FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46* L_4 = (FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46*)il2cpp_codegen_object_new(FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46_il2cpp_TypeInfo_var);
		FloatDelegate__ctor_mF5CFDCFA2728F6F061009EDF3AE1BEC8F79B3B6C(L_4, __this, (intptr_t)((void*)Rocket_updateControl_m4AAA0EDD04DAE5C4A7C646ACDBC229BD2BAC079E_RuntimeMethod_var), NULL);
		Delegate_t* L_5;
		L_5 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_3, L_4, NULL);
		((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___UpdateControl_13 = ((FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46*)CastclassSealed((RuntimeObject*)L_5, FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___UpdateControl_13), (void*)((FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46*)CastclassSealed((RuntimeObject*)L_5, FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46_il2cpp_TypeInfo_var)));
		// Events.UpdateSpecificImpulse -= updateSpecificImpulse;
		FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46* L_6 = ((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___UpdateSpecificImpulse_14;
		FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46* L_7 = (FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46*)il2cpp_codegen_object_new(FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46_il2cpp_TypeInfo_var);
		FloatDelegate__ctor_mF5CFDCFA2728F6F061009EDF3AE1BEC8F79B3B6C(L_7, __this, (intptr_t)((void*)Rocket_updateSpecificImpulse_mC4309713AADDC4B630151CF7F8CB1BC68ED2B0AA_RuntimeMethod_var), NULL);
		Delegate_t* L_8;
		L_8 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_6, L_7, NULL);
		((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___UpdateSpecificImpulse_14 = ((FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46*)CastclassSealed((RuntimeObject*)L_8, FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___UpdateSpecificImpulse_14), (void*)((FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46*)CastclassSealed((RuntimeObject*)L_8, FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46_il2cpp_TypeInfo_var)));
		// Events.UpdateResistance -= updateResistance;
		FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46* L_9 = ((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___UpdateResistance_15;
		FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46* L_10 = (FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46*)il2cpp_codegen_object_new(FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46_il2cpp_TypeInfo_var);
		FloatDelegate__ctor_mF5CFDCFA2728F6F061009EDF3AE1BEC8F79B3B6C(L_10, __this, (intptr_t)((void*)Rocket_updateResistance_m958DA55EFB6336F90092FE3F7F1EB0FBF2564AD6_RuntimeMethod_var), NULL);
		Delegate_t* L_11;
		L_11 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_9, L_10, NULL);
		((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___UpdateResistance_15 = ((FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46*)CastclassSealed((RuntimeObject*)L_11, FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___UpdateResistance_15), (void*)((FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46*)CastclassSealed((RuntimeObject*)L_11, FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46_il2cpp_TypeInfo_var)));
		// }
		return;
	}
}
// System.Void Rocket::updateThrust(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rocket_updateThrust_m69C0ED2738BE5BE722BFCE1A458ECD4789D52385 (Rocket_t46CF4BC5917C91D995808226A9F11EA125C89AFB* __this, float ___newThrust0, const RuntimeMethod* method) 
{
	{
		// private void updateThrust(float newThrust) => _rocketThrust = newThrust;
		float L_0 = ___newThrust0;
		__this->____rocketThrust_4 = L_0;
		return;
	}
}
// System.Void Rocket::updateControl(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rocket_updateControl_m4AAA0EDD04DAE5C4A7C646ACDBC229BD2BAC079E (Rocket_t46CF4BC5917C91D995808226A9F11EA125C89AFB* __this, float ___newControl0, const RuntimeMethod* method) 
{
	{
		// private void updateControl(float newControl) => _rocketControl = newControl;
		float L_0 = ___newControl0;
		__this->____rocketControl_5 = L_0;
		return;
	}
}
// System.Void Rocket::updateSpecificImpulse(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rocket_updateSpecificImpulse_mC4309713AADDC4B630151CF7F8CB1BC68ED2B0AA (Rocket_t46CF4BC5917C91D995808226A9F11EA125C89AFB* __this, float ___newSpecificImpulse0, const RuntimeMethod* method) 
{
	{
		// private void updateSpecificImpulse(float newSpecificImpulse) => _rocketSpecificImpulse = newSpecificImpulse;
		float L_0 = ___newSpecificImpulse0;
		__this->____rocketSpecificImpulse_6 = L_0;
		return;
	}
}
// System.Void Rocket::updateResistance(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rocket_updateResistance_m958DA55EFB6336F90092FE3F7F1EB0FBF2564AD6 (Rocket_t46CF4BC5917C91D995808226A9F11EA125C89AFB* __this, float ___newResistance0, const RuntimeMethod* method) 
{
	{
		// private void updateResistance(float newResistance) => _rocketResistance = newResistance;
		float L_0 = ___newResistance0;
		__this->____rocketResistance_7 = L_0;
		return;
	}
}
// System.Void Rocket::SubscribeRocketToPreparationEvents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rocket_SubscribeRocketToPreparationEvents_m3344B4A9421C4A6269477AF80CCE377A9AE28B28 (Rocket_t46CF4BC5917C91D995808226A9F11EA125C89AFB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Rocket_updateControl_m4AAA0EDD04DAE5C4A7C646ACDBC229BD2BAC079E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Rocket_updateResistance_m958DA55EFB6336F90092FE3F7F1EB0FBF2564AD6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Rocket_updateSpecificImpulse_mC4309713AADDC4B630151CF7F8CB1BC68ED2B0AA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Rocket_updateThrust_m69C0ED2738BE5BE722BFCE1A458ECD4789D52385_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Events.UpdateThrust += updateThrust;
		FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46* L_0 = ((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___UpdateThrust_12;
		FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46* L_1 = (FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46*)il2cpp_codegen_object_new(FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46_il2cpp_TypeInfo_var);
		FloatDelegate__ctor_mF5CFDCFA2728F6F061009EDF3AE1BEC8F79B3B6C(L_1, __this, (intptr_t)((void*)Rocket_updateThrust_m69C0ED2738BE5BE722BFCE1A458ECD4789D52385_RuntimeMethod_var), NULL);
		Delegate_t* L_2;
		L_2 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_0, L_1, NULL);
		((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___UpdateThrust_12 = ((FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46*)CastclassSealed((RuntimeObject*)L_2, FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___UpdateThrust_12), (void*)((FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46*)CastclassSealed((RuntimeObject*)L_2, FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46_il2cpp_TypeInfo_var)));
		// Events.UpdateControl += updateControl;
		FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46* L_3 = ((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___UpdateControl_13;
		FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46* L_4 = (FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46*)il2cpp_codegen_object_new(FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46_il2cpp_TypeInfo_var);
		FloatDelegate__ctor_mF5CFDCFA2728F6F061009EDF3AE1BEC8F79B3B6C(L_4, __this, (intptr_t)((void*)Rocket_updateControl_m4AAA0EDD04DAE5C4A7C646ACDBC229BD2BAC079E_RuntimeMethod_var), NULL);
		Delegate_t* L_5;
		L_5 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_3, L_4, NULL);
		((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___UpdateControl_13 = ((FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46*)CastclassSealed((RuntimeObject*)L_5, FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___UpdateControl_13), (void*)((FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46*)CastclassSealed((RuntimeObject*)L_5, FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46_il2cpp_TypeInfo_var)));
		// Events.UpdateSpecificImpulse += updateSpecificImpulse;
		FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46* L_6 = ((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___UpdateSpecificImpulse_14;
		FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46* L_7 = (FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46*)il2cpp_codegen_object_new(FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46_il2cpp_TypeInfo_var);
		FloatDelegate__ctor_mF5CFDCFA2728F6F061009EDF3AE1BEC8F79B3B6C(L_7, __this, (intptr_t)((void*)Rocket_updateSpecificImpulse_mC4309713AADDC4B630151CF7F8CB1BC68ED2B0AA_RuntimeMethod_var), NULL);
		Delegate_t* L_8;
		L_8 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_6, L_7, NULL);
		((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___UpdateSpecificImpulse_14 = ((FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46*)CastclassSealed((RuntimeObject*)L_8, FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___UpdateSpecificImpulse_14), (void*)((FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46*)CastclassSealed((RuntimeObject*)L_8, FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46_il2cpp_TypeInfo_var)));
		// Events.UpdateResistance += updateResistance;
		FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46* L_9 = ((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___UpdateResistance_15;
		FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46* L_10 = (FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46*)il2cpp_codegen_object_new(FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46_il2cpp_TypeInfo_var);
		FloatDelegate__ctor_mF5CFDCFA2728F6F061009EDF3AE1BEC8F79B3B6C(L_10, __this, (intptr_t)((void*)Rocket_updateResistance_m958DA55EFB6336F90092FE3F7F1EB0FBF2564AD6_RuntimeMethod_var), NULL);
		Delegate_t* L_11;
		L_11 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_9, L_10, NULL);
		((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___UpdateResistance_15 = ((FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46*)CastclassSealed((RuntimeObject*)L_11, FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___UpdateResistance_15), (void*)((FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46*)CastclassSealed((RuntimeObject*)L_11, FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46_il2cpp_TypeInfo_var)));
		// }
		return;
	}
}
// System.Void Rocket::UnSubscribeRocketToPreparationEvents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rocket_UnSubscribeRocketToPreparationEvents_m84F3A1A4DB07D41AA5DFBDD88F7D2933DF7A9B19 (Rocket_t46CF4BC5917C91D995808226A9F11EA125C89AFB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Rocket_updateControl_m4AAA0EDD04DAE5C4A7C646ACDBC229BD2BAC079E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Rocket_updateResistance_m958DA55EFB6336F90092FE3F7F1EB0FBF2564AD6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Rocket_updateSpecificImpulse_mC4309713AADDC4B630151CF7F8CB1BC68ED2B0AA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Rocket_updateThrust_m69C0ED2738BE5BE722BFCE1A458ECD4789D52385_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Events.UpdateThrust -= updateThrust;
		FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46* L_0 = ((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___UpdateThrust_12;
		FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46* L_1 = (FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46*)il2cpp_codegen_object_new(FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46_il2cpp_TypeInfo_var);
		FloatDelegate__ctor_mF5CFDCFA2728F6F061009EDF3AE1BEC8F79B3B6C(L_1, __this, (intptr_t)((void*)Rocket_updateThrust_m69C0ED2738BE5BE722BFCE1A458ECD4789D52385_RuntimeMethod_var), NULL);
		Delegate_t* L_2;
		L_2 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_0, L_1, NULL);
		((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___UpdateThrust_12 = ((FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46*)CastclassSealed((RuntimeObject*)L_2, FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___UpdateThrust_12), (void*)((FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46*)CastclassSealed((RuntimeObject*)L_2, FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46_il2cpp_TypeInfo_var)));
		// Events.UpdateControl -= updateControl;
		FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46* L_3 = ((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___UpdateControl_13;
		FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46* L_4 = (FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46*)il2cpp_codegen_object_new(FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46_il2cpp_TypeInfo_var);
		FloatDelegate__ctor_mF5CFDCFA2728F6F061009EDF3AE1BEC8F79B3B6C(L_4, __this, (intptr_t)((void*)Rocket_updateControl_m4AAA0EDD04DAE5C4A7C646ACDBC229BD2BAC079E_RuntimeMethod_var), NULL);
		Delegate_t* L_5;
		L_5 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_3, L_4, NULL);
		((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___UpdateControl_13 = ((FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46*)CastclassSealed((RuntimeObject*)L_5, FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___UpdateControl_13), (void*)((FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46*)CastclassSealed((RuntimeObject*)L_5, FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46_il2cpp_TypeInfo_var)));
		// Events.UpdateSpecificImpulse -= updateSpecificImpulse;
		FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46* L_6 = ((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___UpdateSpecificImpulse_14;
		FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46* L_7 = (FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46*)il2cpp_codegen_object_new(FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46_il2cpp_TypeInfo_var);
		FloatDelegate__ctor_mF5CFDCFA2728F6F061009EDF3AE1BEC8F79B3B6C(L_7, __this, (intptr_t)((void*)Rocket_updateSpecificImpulse_mC4309713AADDC4B630151CF7F8CB1BC68ED2B0AA_RuntimeMethod_var), NULL);
		Delegate_t* L_8;
		L_8 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_6, L_7, NULL);
		((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___UpdateSpecificImpulse_14 = ((FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46*)CastclassSealed((RuntimeObject*)L_8, FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___UpdateSpecificImpulse_14), (void*)((FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46*)CastclassSealed((RuntimeObject*)L_8, FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46_il2cpp_TypeInfo_var)));
		// Events.UpdateResistance -= updateResistance;
		FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46* L_9 = ((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___UpdateResistance_15;
		FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46* L_10 = (FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46*)il2cpp_codegen_object_new(FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46_il2cpp_TypeInfo_var);
		FloatDelegate__ctor_mF5CFDCFA2728F6F061009EDF3AE1BEC8F79B3B6C(L_10, __this, (intptr_t)((void*)Rocket_updateResistance_m958DA55EFB6336F90092FE3F7F1EB0FBF2564AD6_RuntimeMethod_var), NULL);
		Delegate_t* L_11;
		L_11 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_9, L_10, NULL);
		((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___UpdateResistance_15 = ((FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46*)CastclassSealed((RuntimeObject*)L_11, FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___UpdateResistance_15), (void*)((FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46*)CastclassSealed((RuntimeObject*)L_11, FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46_il2cpp_TypeInfo_var)));
		// }
		return;
	}
}
// System.Boolean Rocket::RockedIsReady()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Rocket_RockedIsReady_m4AA35FB621B70899D41BFD3D8E09AACD24E02931 (Rocket_t46CF4BC5917C91D995808226A9F11EA125C89AFB* __this, const RuntimeMethod* method) 
{
	{
		// if(_rocketControl != 0 & _rocketResistance != 0 & _rocketSpecificImpulse != 0 & _rocketThrust != 0){
		float L_0 = __this->____rocketControl_5;
		float L_1 = __this->____rocketResistance_7;
		float L_2 = __this->____rocketSpecificImpulse_6;
		float L_3 = __this->____rocketThrust_4;
		if (!((int32_t)(((int32_t)(((int32_t)(((((int32_t)((((float)L_0) == ((float)(0.0f)))? 1 : 0)) == ((int32_t)0))? 1 : 0)&((((int32_t)((((float)L_1) == ((float)(0.0f)))? 1 : 0)) == ((int32_t)0))? 1 : 0)))&((((int32_t)((((float)L_2) == ((float)(0.0f)))? 1 : 0)) == ((int32_t)0))? 1 : 0)))&((((int32_t)((((float)L_3) == ((float)(0.0f)))? 1 : 0)) == ((int32_t)0))? 1 : 0))))
		{
			goto IL_0047;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_0047:
	{
		// return false;
		return (bool)0;
	}
}
// System.Void Rocket::LaunchRocket()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rocket_LaunchRocket_mB61F5182C372BAB2A132822961ECB87CBD65056A (Rocket_t46CF4BC5917C91D995808226A9F11EA125C89AFB* __this, const RuntimeMethod* method) 
{
	{
		// calculateSpeed();
		Rocket_calculateSpeed_m9FC618557D1979E2E90AB31BE151D93E0146F104(__this, NULL);
		// if(_curveT < 1){
		float L_0 = __this->____curveT_18;
		if ((!(((float)L_0) < ((float)(1.0f)))))
		{
			goto IL_004a;
		}
	}
	{
		// _launchTime += Time.deltaTime;
		float L_1 = __this->____launchTime_22;
		float L_2;
		L_2 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		__this->____launchTime_22 = ((float)il2cpp_codegen_add(L_1, L_2));
		// _curveT = _curveT + (_speedT * _speedAcceleration.Evaluate(_launchTime));
		float L_3 = __this->____curveT_18;
		float L_4 = __this->____speedT_19;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_5 = __this->____speedAcceleration_21;
		float L_6 = __this->____launchTime_22;
		float L_7;
		L_7 = AnimationCurve_Evaluate_m50B857043DE251A186032ADBCBB4CEF817F4EE3C(L_5, L_6, NULL);
		__this->____curveT_18 = ((float)il2cpp_codegen_add(L_3, ((float)il2cpp_codegen_multiply(L_4, L_7))));
	}

IL_004a:
	{
		// _rocket.transform.position = Bezier.GetCurveTrajectory(_curvePoint0.position, _curvePoint1.position, _curvePoint2.position, _curvePoint3.position, _curveT);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = __this->____rocket_13;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_8, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10 = __this->____curvePoint0_14;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_10, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12 = __this->____curvePoint1_15;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_12, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14 = __this->____curvePoint2_16;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_14, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16 = __this->____curvePoint3_17;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_16, NULL);
		float L_18 = __this->____curveT_18;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Bezier_GetCurveTrajectory_mA659FD6173BC9A1C932C7958E6A5358F6D620992(L_11, L_13, L_15, L_17, L_18, NULL);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_9, L_19, NULL);
		// _rocket.transform.rotation = Quaternion.LookRotation(Bezier.GetCurveDeirection(_curvePoint0.position, _curvePoint1.position, _curvePoint2.position, _curvePoint3.position, _curveT));
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_20 = __this->____rocket_13;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_21;
		L_21 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_20, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_22 = __this->____curvePoint0_14;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_22, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_24 = __this->____curvePoint1_15;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		L_25 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_24, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_26 = __this->____curvePoint2_16;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27;
		L_27 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_26, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_28 = __this->____curvePoint3_17;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29;
		L_29 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_28, NULL);
		float L_30 = __this->____curveT_18;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31;
		L_31 = Bezier_GetCurveDeirection_m28986DC5A641F31FCDB6330735211B436E380838(L_23, L_25, L_27, L_29, L_30, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_32;
		L_32 = Quaternion_LookRotation_m8C0F294E5143F93D378E020EAD9DA2288A5907A3(L_31, NULL);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_21, L_32, NULL);
		// }
		return;
	}
}
// System.Void Rocket::calculateSpeed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rocket_calculateSpeed_m9FC618557D1979E2E90AB31BE151D93E0146F104 (Rocket_t46CF4BC5917C91D995808226A9F11EA125C89AFB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Level_t1CED3B73CCB94716BF67A03B39D9DE9A991FD5A1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Rocket_t46CF4BC5917C91D995808226A9F11EA125C89AFB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _speedT = (((_rocketThrust * _rocketSpecificImpulse))/((_rocketResistance * RocketWeigt) + (Level.LevelAtmosphereResistance * Level.LevelGravity))) *  _speedCoefficient;
		float L_0 = __this->____rocketThrust_4;
		float L_1 = __this->____rocketSpecificImpulse_6;
		float L_2 = __this->____rocketResistance_7;
		float L_3 = ((Rocket_t46CF4BC5917C91D995808226A9F11EA125C89AFB_StaticFields*)il2cpp_codegen_static_fields_for(Rocket_t46CF4BC5917C91D995808226A9F11EA125C89AFB_il2cpp_TypeInfo_var))->___RocketWeigt_8;
		float L_4 = ((Level_t1CED3B73CCB94716BF67A03B39D9DE9A991FD5A1_StaticFields*)il2cpp_codegen_static_fields_for(Level_t1CED3B73CCB94716BF67A03B39D9DE9A991FD5A1_il2cpp_TypeInfo_var))->___LevelAtmosphereResistance_11;
		float L_5 = ((Level_t1CED3B73CCB94716BF67A03B39D9DE9A991FD5A1_StaticFields*)il2cpp_codegen_static_fields_for(Level_t1CED3B73CCB94716BF67A03B39D9DE9A991FD5A1_il2cpp_TypeInfo_var))->___LevelGravity_10;
		float L_6 = __this->____speedCoefficient_20;
		__this->____speedT_19 = ((float)il2cpp_codegen_multiply(((float)(((float)il2cpp_codegen_multiply(L_0, L_1))/((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_2, L_3)), ((float)il2cpp_codegen_multiply(L_4, L_5)))))), L_6));
		// }
		return;
	}
}
// System.Void Rocket::OnDrawGizmos()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rocket_OnDrawGizmos_m6176554276966B0873E62A8781F553BF057B6BAB (Rocket_t46CF4BC5917C91D995808226A9F11EA125C89AFB* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	float V_3 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		// int sigmentsNumber = 20;
		V_0 = ((int32_t)20);
		// Vector3 preveousePoint = _curvePoint0.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->____curvePoint0_14;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		V_1 = L_1;
		// for (int i = 0; i < sigmentsNumber + 1; i++) {
		V_2 = 0;
		goto IL_005c;
	}

IL_0013:
	{
		// float paremeter = (float)i / sigmentsNumber;
		int32_t L_2 = V_2;
		int32_t L_3 = V_0;
		V_3 = ((float)(((float)L_2)/((float)L_3)));
		// Vector3 point = Bezier.GetCurveTrajectory(_curvePoint0.position, _curvePoint1.position, _curvePoint2.position, _curvePoint3.position, paremeter);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = __this->____curvePoint0_14;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_4, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6 = __this->____curvePoint1_15;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_6, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8 = __this->____curvePoint2_16;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_8, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10 = __this->____curvePoint3_17;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_10, NULL);
		float L_12 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Bezier_GetCurveTrajectory_mA659FD6173BC9A1C932C7958E6A5358F6D620992(L_5, L_7, L_9, L_11, L_12, NULL);
		V_4 = L_13;
		// Gizmos.DrawLine(preveousePoint, point);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = V_4;
		Gizmos_DrawLine_m09F46DC2EA3C2200E465435A29960E8BCD84DD9C(L_14, L_15, NULL);
		// preveousePoint = point;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = V_4;
		V_1 = L_16;
		// for (int i = 0; i < sigmentsNumber + 1; i++) {
		int32_t L_17 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_17, 1));
	}

IL_005c:
	{
		// for (int i = 0; i < sigmentsNumber + 1; i++) {
		int32_t L_18 = V_2;
		int32_t L_19 = V_0;
		if ((((int32_t)L_18) < ((int32_t)((int32_t)il2cpp_codegen_add(L_19, 1)))))
		{
			goto IL_0013;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Rocket::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rocket_OnTriggerEnter_m8A66339867347F5F171961E0C70A95506F2F4D7B (Rocket_t46CF4BC5917C91D995808226A9F11EA125C89AFB* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7591C6B2C207685CBD36BB3D5ED56CC4ADA8FBD5);
		s_Il2CppMethodInitialized = true;
	}
	SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1* G_B3_0 = NULL;
	SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1* G_B2_0 = NULL;
	{
		// if(other.tag  == "Finish"){
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0 = ___other0;
		String_t* L_1;
		L_1 = Component_get_tag_m7561A81116CAB82B8A459E934662BFC2039FB7EF(L_0, NULL);
		bool L_2;
		L_2 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_1, _stringLiteral7591C6B2C207685CBD36BB3D5ED56CC4ADA8FBD5, NULL);
		if (!L_2)
		{
			goto IL_0021;
		}
	}
	{
		// Events.LevelComplete?.Invoke();
		SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1* L_3 = ((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___LevelComplete_30;
		SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1* L_4 = L_3;
		G_B2_0 = L_4;
		if (L_4)
		{
			G_B3_0 = L_4;
			goto IL_001c;
		}
	}
	{
		return;
	}

IL_001c:
	{
		SimpleDelegate_Invoke_mE39CE43C6B97CE701F70DE6A5DCDAB2EAAA05C94_inline(G_B3_0, NULL);
	}

IL_0021:
	{
		// }
		return;
	}
}
// System.Void Rocket::DestroyRocket()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rocket_DestroyRocket_m322F640C0568BFFFCA2FC90B611F0E5CDC2C595F (Rocket_t46CF4BC5917C91D995808226A9F11EA125C89AFB* __this, const RuntimeMethod* method) 
{
	{
		// _deflector.Explosion();
		Deflector_t1F58E4F5F11EE15B7C7A869008F0B14BAC192E54* L_0 = __this->____deflector_9;
		RocketPart_Explosion_m221B47BB0FB5B4E82E3190DEE208FA7D3305FD71(L_0, NULL);
		// _tank.Explosion();
		Tank_t2AFD1F8BD4E308EA6AC4B0EAEA9C9D7FC5B187ED* L_1 = __this->____tank_10;
		RocketPart_Explosion_m221B47BB0FB5B4E82E3190DEE208FA7D3305FD71(L_1, NULL);
		// _plumage.Explosion();
		Plumage_tE14F878A24757929120FE226D2268E486A8384F9* L_2 = __this->____plumage_11;
		RocketPart_Explosion_m221B47BB0FB5B4E82E3190DEE208FA7D3305FD71(L_2, NULL);
		// _engine.Explosion();
		Engine_t59D31EC59AD8AAF189236F53F6E5B083856B0F00* L_3 = __this->____engine_12;
		RocketPart_Explosion_m221B47BB0FB5B4E82E3190DEE208FA7D3305FD71(L_3, NULL);
		// }
		return;
	}
}
// System.Void Rocket::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rocket__ctor_mA413B17C46BD087DB80D491B57AB19EA000EDBF1 (Rocket_t46CF4BC5917C91D995808226A9F11EA125C89AFB* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Deflector::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Deflector_Awake_m6C38D24D07211DE4F99178C5BCC5C2293748FEC6 (Deflector_t1F58E4F5F11EE15B7C7A869008F0B14BAC192E54* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeflectorDelegate_t7F503635DF21105D46E33B53A4921DA342943B1B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Deflector_backToCurrentPart_m44DAF2B34923A72B686A9652974F47ABF265BA03_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Deflector_updateDeflector_mE16D9B12E31D58A0914CAA23496A8E631034B705_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObjectDelegate_t2014FF2A7D5B2ACE8C6D43C262A0D07379B70A95_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RocketPart_previewPart_m1B665AD4AFCE4503FD22B2EBC2AFFC7395C1E5A1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Events.PreviewDeflectorEvent += previewPart;
		GameObjectDelegate_t2014FF2A7D5B2ACE8C6D43C262A0D07379B70A95* L_0 = ((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___PreviewDeflectorEvent_9;
		GameObjectDelegate_t2014FF2A7D5B2ACE8C6D43C262A0D07379B70A95* L_1 = (GameObjectDelegate_t2014FF2A7D5B2ACE8C6D43C262A0D07379B70A95*)il2cpp_codegen_object_new(GameObjectDelegate_t2014FF2A7D5B2ACE8C6D43C262A0D07379B70A95_il2cpp_TypeInfo_var);
		GameObjectDelegate__ctor_m58ADAF680615D0BF7C4F42CC621E509D115A87AE(L_1, __this, (intptr_t)((void*)RocketPart_previewPart_m1B665AD4AFCE4503FD22B2EBC2AFFC7395C1E5A1_RuntimeMethod_var), NULL);
		Delegate_t* L_2;
		L_2 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_0, L_1, NULL);
		((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___PreviewDeflectorEvent_9 = ((GameObjectDelegate_t2014FF2A7D5B2ACE8C6D43C262A0D07379B70A95*)CastclassSealed((RuntimeObject*)L_2, GameObjectDelegate_t2014FF2A7D5B2ACE8C6D43C262A0D07379B70A95_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___PreviewDeflectorEvent_9), (void*)((GameObjectDelegate_t2014FF2A7D5B2ACE8C6D43C262A0D07379B70A95*)CastclassSealed((RuntimeObject*)L_2, GameObjectDelegate_t2014FF2A7D5B2ACE8C6D43C262A0D07379B70A95_il2cpp_TypeInfo_var)));
		// Events.UpdateDeflectorEvent += updateDeflector;
		DeflectorDelegate_t7F503635DF21105D46E33B53A4921DA342943B1B* L_3 = ((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___UpdateDeflectorEvent_5;
		DeflectorDelegate_t7F503635DF21105D46E33B53A4921DA342943B1B* L_4 = (DeflectorDelegate_t7F503635DF21105D46E33B53A4921DA342943B1B*)il2cpp_codegen_object_new(DeflectorDelegate_t7F503635DF21105D46E33B53A4921DA342943B1B_il2cpp_TypeInfo_var);
		DeflectorDelegate__ctor_m18733098E71A041B5D1C6D28695BB280C333BF18(L_4, __this, (intptr_t)((void*)Deflector_updateDeflector_mE16D9B12E31D58A0914CAA23496A8E631034B705_RuntimeMethod_var), NULL);
		Delegate_t* L_5;
		L_5 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_3, L_4, NULL);
		((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___UpdateDeflectorEvent_5 = ((DeflectorDelegate_t7F503635DF21105D46E33B53A4921DA342943B1B*)CastclassSealed((RuntimeObject*)L_5, DeflectorDelegate_t7F503635DF21105D46E33B53A4921DA342943B1B_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___UpdateDeflectorEvent_5), (void*)((DeflectorDelegate_t7F503635DF21105D46E33B53A4921DA342943B1B*)CastclassSealed((RuntimeObject*)L_5, DeflectorDelegate_t7F503635DF21105D46E33B53A4921DA342943B1B_il2cpp_TypeInfo_var)));
		// Events.HideStore += backToCurrentPart;
		SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1* L_6 = ((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___HideStore_25;
		SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1* L_7 = (SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1*)il2cpp_codegen_object_new(SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1_il2cpp_TypeInfo_var);
		SimpleDelegate__ctor_m52198E5C89703FE51B58861C8D85FBC3885F4082(L_7, __this, (intptr_t)((void*)Deflector_backToCurrentPart_m44DAF2B34923A72B686A9652974F47ABF265BA03_RuntimeMethod_var), NULL);
		Delegate_t* L_8;
		L_8 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_6, L_7, NULL);
		((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___HideStore_25 = ((SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1*)CastclassSealed((RuntimeObject*)L_8, SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___HideStore_25), (void*)((SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1*)CastclassSealed((RuntimeObject*)L_8, SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1_il2cpp_TypeInfo_var)));
		// }
		return;
	}
}
// System.Void Deflector::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Deflector_Start_m6A9B443A41D2C9D6E6AB8FD0F133E315D987D8CC (Deflector_t1F58E4F5F11EE15B7C7A869008F0B14BAC192E54* __this, const RuntimeMethod* method) 
{
	{
		// private void Start() => updateDeflector(_startDeflector);
		DeflectorData_t6B09A69A7FF8BEF1E1CC861DDABDC15E9A8318A5* L_0 = __this->____startDeflector_8;
		Deflector_updateDeflector_mE16D9B12E31D58A0914CAA23496A8E631034B705(__this, L_0, NULL);
		return;
	}
}
// System.Void Deflector::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Deflector_OnDestroy_mC7A17D2346E2C1457685D13D33AD5B234E57C419 (Deflector_t1F58E4F5F11EE15B7C7A869008F0B14BAC192E54* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeflectorDelegate_t7F503635DF21105D46E33B53A4921DA342943B1B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Deflector_backToCurrentPart_m44DAF2B34923A72B686A9652974F47ABF265BA03_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Deflector_updateDeflector_mE16D9B12E31D58A0914CAA23496A8E631034B705_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObjectDelegate_t2014FF2A7D5B2ACE8C6D43C262A0D07379B70A95_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RocketPart_previewPart_m1B665AD4AFCE4503FD22B2EBC2AFFC7395C1E5A1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Events.PreviewDeflectorEvent -= previewPart;
		GameObjectDelegate_t2014FF2A7D5B2ACE8C6D43C262A0D07379B70A95* L_0 = ((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___PreviewDeflectorEvent_9;
		GameObjectDelegate_t2014FF2A7D5B2ACE8C6D43C262A0D07379B70A95* L_1 = (GameObjectDelegate_t2014FF2A7D5B2ACE8C6D43C262A0D07379B70A95*)il2cpp_codegen_object_new(GameObjectDelegate_t2014FF2A7D5B2ACE8C6D43C262A0D07379B70A95_il2cpp_TypeInfo_var);
		GameObjectDelegate__ctor_m58ADAF680615D0BF7C4F42CC621E509D115A87AE(L_1, __this, (intptr_t)((void*)RocketPart_previewPart_m1B665AD4AFCE4503FD22B2EBC2AFFC7395C1E5A1_RuntimeMethod_var), NULL);
		Delegate_t* L_2;
		L_2 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_0, L_1, NULL);
		((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___PreviewDeflectorEvent_9 = ((GameObjectDelegate_t2014FF2A7D5B2ACE8C6D43C262A0D07379B70A95*)CastclassSealed((RuntimeObject*)L_2, GameObjectDelegate_t2014FF2A7D5B2ACE8C6D43C262A0D07379B70A95_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___PreviewDeflectorEvent_9), (void*)((GameObjectDelegate_t2014FF2A7D5B2ACE8C6D43C262A0D07379B70A95*)CastclassSealed((RuntimeObject*)L_2, GameObjectDelegate_t2014FF2A7D5B2ACE8C6D43C262A0D07379B70A95_il2cpp_TypeInfo_var)));
		// Events.UpdateDeflectorEvent -= updateDeflector;
		DeflectorDelegate_t7F503635DF21105D46E33B53A4921DA342943B1B* L_3 = ((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___UpdateDeflectorEvent_5;
		DeflectorDelegate_t7F503635DF21105D46E33B53A4921DA342943B1B* L_4 = (DeflectorDelegate_t7F503635DF21105D46E33B53A4921DA342943B1B*)il2cpp_codegen_object_new(DeflectorDelegate_t7F503635DF21105D46E33B53A4921DA342943B1B_il2cpp_TypeInfo_var);
		DeflectorDelegate__ctor_m18733098E71A041B5D1C6D28695BB280C333BF18(L_4, __this, (intptr_t)((void*)Deflector_updateDeflector_mE16D9B12E31D58A0914CAA23496A8E631034B705_RuntimeMethod_var), NULL);
		Delegate_t* L_5;
		L_5 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_3, L_4, NULL);
		((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___UpdateDeflectorEvent_5 = ((DeflectorDelegate_t7F503635DF21105D46E33B53A4921DA342943B1B*)CastclassSealed((RuntimeObject*)L_5, DeflectorDelegate_t7F503635DF21105D46E33B53A4921DA342943B1B_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___UpdateDeflectorEvent_5), (void*)((DeflectorDelegate_t7F503635DF21105D46E33B53A4921DA342943B1B*)CastclassSealed((RuntimeObject*)L_5, DeflectorDelegate_t7F503635DF21105D46E33B53A4921DA342943B1B_il2cpp_TypeInfo_var)));
		// Events.HideStore -= backToCurrentPart;
		SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1* L_6 = ((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___HideStore_25;
		SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1* L_7 = (SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1*)il2cpp_codegen_object_new(SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1_il2cpp_TypeInfo_var);
		SimpleDelegate__ctor_m52198E5C89703FE51B58861C8D85FBC3885F4082(L_7, __this, (intptr_t)((void*)Deflector_backToCurrentPart_m44DAF2B34923A72B686A9652974F47ABF265BA03_RuntimeMethod_var), NULL);
		Delegate_t* L_8;
		L_8 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_6, L_7, NULL);
		((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___HideStore_25 = ((SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1*)CastclassSealed((RuntimeObject*)L_8, SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___HideStore_25), (void*)((SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1*)CastclassSealed((RuntimeObject*)L_8, SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1_il2cpp_TypeInfo_var)));
		// }
		return;
	}
}
// System.Void Deflector::updateDeflector(DeflectorData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Deflector_updateDeflector_mE16D9B12E31D58A0914CAA23496A8E631034B705 (Deflector_t1F58E4F5F11EE15B7C7A869008F0B14BAC192E54* __this, DeflectorData_t6B09A69A7FF8BEF1E1CC861DDABDC15E9A8318A5* ___newDeflector0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Deflector_t1F58E4F5F11EE15B7C7A869008F0B14BAC192E54_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Rocket_t46CF4BC5917C91D995808226A9F11EA125C89AFB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46* G_B2_0 = NULL;
	FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46* G_B1_0 = NULL;
	FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46* G_B5_0 = NULL;
	FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46* G_B4_0 = NULL;
	{
		// _currentDeflector = newDeflector;
		DeflectorData_t6B09A69A7FF8BEF1E1CC861DDABDC15E9A8318A5* L_0 = ___newDeflector0;
		((Deflector_t1F58E4F5F11EE15B7C7A869008F0B14BAC192E54_StaticFields*)il2cpp_codegen_static_fields_for(Deflector_t1F58E4F5F11EE15B7C7A869008F0B14BAC192E54_il2cpp_TypeInfo_var))->____currentDeflector_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((Deflector_t1F58E4F5F11EE15B7C7A869008F0B14BAC192E54_StaticFields*)il2cpp_codegen_static_fields_for(Deflector_t1F58E4F5F11EE15B7C7A869008F0B14BAC192E54_il2cpp_TypeInfo_var))->____currentDeflector_7), (void*)L_0);
		// renderPart(_currentDeflector.Prefab);
		DeflectorData_t6B09A69A7FF8BEF1E1CC861DDABDC15E9A8318A5* L_1 = ((Deflector_t1F58E4F5F11EE15B7C7A869008F0B14BAC192E54_StaticFields*)il2cpp_codegen_static_fields_for(Deflector_t1F58E4F5F11EE15B7C7A869008F0B14BAC192E54_il2cpp_TypeInfo_var))->____currentDeflector_7;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = ((RocketPartData_t5D52B3A630DE734008E8AC3C974C6604543F03C3*)L_1)->___Prefab_5;
		RocketPart_renderPart_m21CE2B1E6035BAE71A967FFB1019F3DB166429C2(__this, L_2, NULL);
		// Events.UpdateResistance?.Invoke(_currentDeflector.Resistance);
		FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46* L_3 = ((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___UpdateResistance_15;
		FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46* L_4 = L_3;
		G_B1_0 = L_4;
		if (L_4)
		{
			G_B2_0 = L_4;
			goto IL_0021;
		}
	}
	{
		goto IL_0030;
	}

IL_0021:
	{
		DeflectorData_t6B09A69A7FF8BEF1E1CC861DDABDC15E9A8318A5* L_5 = ((Deflector_t1F58E4F5F11EE15B7C7A869008F0B14BAC192E54_StaticFields*)il2cpp_codegen_static_fields_for(Deflector_t1F58E4F5F11EE15B7C7A869008F0B14BAC192E54_il2cpp_TypeInfo_var))->____currentDeflector_7;
		float L_6 = L_5->___Resistance_11;
		FloatDelegate_Invoke_m4D49E45F98F312099A4ADDA6AEC51B40771DE2E6_inline(G_B2_0, L_6, NULL);
	}

IL_0030:
	{
		// Events.UpdateWeight?.Invoke(Rocket.RocketWeigt);
		FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46* L_7 = ((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___UpdateWeight_16;
		FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46* L_8 = L_7;
		G_B4_0 = L_8;
		if (L_8)
		{
			G_B5_0 = L_8;
			goto IL_003a;
		}
	}
	{
		return;
	}

IL_003a:
	{
		float L_9 = ((Rocket_t46CF4BC5917C91D995808226A9F11EA125C89AFB_StaticFields*)il2cpp_codegen_static_fields_for(Rocket_t46CF4BC5917C91D995808226A9F11EA125C89AFB_il2cpp_TypeInfo_var))->___RocketWeigt_8;
		FloatDelegate_Invoke_m4D49E45F98F312099A4ADDA6AEC51B40771DE2E6_inline(G_B5_0, L_9, NULL);
		// }
		return;
	}
}
// System.Void Deflector::backToCurrentPart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Deflector_backToCurrentPart_m44DAF2B34923A72B686A9652974F47ABF265BA03 (Deflector_t1F58E4F5F11EE15B7C7A869008F0B14BAC192E54* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Deflector_t1F58E4F5F11EE15B7C7A869008F0B14BAC192E54_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// renderPart(_currentDeflector.Prefab);
		DeflectorData_t6B09A69A7FF8BEF1E1CC861DDABDC15E9A8318A5* L_0 = ((Deflector_t1F58E4F5F11EE15B7C7A869008F0B14BAC192E54_StaticFields*)il2cpp_codegen_static_fields_for(Deflector_t1F58E4F5F11EE15B7C7A869008F0B14BAC192E54_il2cpp_TypeInfo_var))->____currentDeflector_7;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = ((RocketPartData_t5D52B3A630DE734008E8AC3C974C6604543F03C3*)L_0)->___Prefab_5;
		RocketPart_renderPart_m21CE2B1E6035BAE71A967FFB1019F3DB166429C2(__this, L_1, NULL);
		// }
		return;
	}
}
// System.Void Deflector::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Deflector__ctor_m81A2174F9D05C89E44D1A8803076071618C023D7 (Deflector_t1F58E4F5F11EE15B7C7A869008F0B14BAC192E54* __this, const RuntimeMethod* method) 
{
	{
		RocketPart__ctor_mB15DBBF4A7E906E14523FE2D9E09FC35F74DADDC(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Engine::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Engine_Awake_mFF00F3A8F3D94AD8A4CA032A6AC02F10C8107FBD (Engine_t59D31EC59AD8AAF189236F53F6E5B083856B0F00* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EngineDelegate_t7BD0ACF919FD17DB5AED3D8609768F62FE90FC5D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Engine_backToCurrentPart_mA65B3A3F3B4CC83CCE9D6273885A250882F1B2B1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Engine_updateEngine_m7B8F321626DB23E6CB5F4761C66437EE59580B22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObjectDelegate_t2014FF2A7D5B2ACE8C6D43C262A0D07379B70A95_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RocketPart_previewPart_m1B665AD4AFCE4503FD22B2EBC2AFFC7395C1E5A1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Events.PreviewEngineEvent += previewPart;
		GameObjectDelegate_t2014FF2A7D5B2ACE8C6D43C262A0D07379B70A95* L_0 = ((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___PreviewEngineEvent_8;
		GameObjectDelegate_t2014FF2A7D5B2ACE8C6D43C262A0D07379B70A95* L_1 = (GameObjectDelegate_t2014FF2A7D5B2ACE8C6D43C262A0D07379B70A95*)il2cpp_codegen_object_new(GameObjectDelegate_t2014FF2A7D5B2ACE8C6D43C262A0D07379B70A95_il2cpp_TypeInfo_var);
		GameObjectDelegate__ctor_m58ADAF680615D0BF7C4F42CC621E509D115A87AE(L_1, __this, (intptr_t)((void*)RocketPart_previewPart_m1B665AD4AFCE4503FD22B2EBC2AFFC7395C1E5A1_RuntimeMethod_var), NULL);
		Delegate_t* L_2;
		L_2 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_0, L_1, NULL);
		((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___PreviewEngineEvent_8 = ((GameObjectDelegate_t2014FF2A7D5B2ACE8C6D43C262A0D07379B70A95*)CastclassSealed((RuntimeObject*)L_2, GameObjectDelegate_t2014FF2A7D5B2ACE8C6D43C262A0D07379B70A95_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___PreviewEngineEvent_8), (void*)((GameObjectDelegate_t2014FF2A7D5B2ACE8C6D43C262A0D07379B70A95*)CastclassSealed((RuntimeObject*)L_2, GameObjectDelegate_t2014FF2A7D5B2ACE8C6D43C262A0D07379B70A95_il2cpp_TypeInfo_var)));
		// Events.UpdateEngineEvent += updateEngine;
		EngineDelegate_t7BD0ACF919FD17DB5AED3D8609768F62FE90FC5D* L_3 = ((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___UpdateEngineEvent_4;
		EngineDelegate_t7BD0ACF919FD17DB5AED3D8609768F62FE90FC5D* L_4 = (EngineDelegate_t7BD0ACF919FD17DB5AED3D8609768F62FE90FC5D*)il2cpp_codegen_object_new(EngineDelegate_t7BD0ACF919FD17DB5AED3D8609768F62FE90FC5D_il2cpp_TypeInfo_var);
		EngineDelegate__ctor_mFF985FFC8F94D0389EFC2A73E3BD36C3B67514DA(L_4, __this, (intptr_t)((void*)Engine_updateEngine_m7B8F321626DB23E6CB5F4761C66437EE59580B22_RuntimeMethod_var), NULL);
		Delegate_t* L_5;
		L_5 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_3, L_4, NULL);
		((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___UpdateEngineEvent_4 = ((EngineDelegate_t7BD0ACF919FD17DB5AED3D8609768F62FE90FC5D*)CastclassSealed((RuntimeObject*)L_5, EngineDelegate_t7BD0ACF919FD17DB5AED3D8609768F62FE90FC5D_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___UpdateEngineEvent_4), (void*)((EngineDelegate_t7BD0ACF919FD17DB5AED3D8609768F62FE90FC5D*)CastclassSealed((RuntimeObject*)L_5, EngineDelegate_t7BD0ACF919FD17DB5AED3D8609768F62FE90FC5D_il2cpp_TypeInfo_var)));
		// Events.HideStore += backToCurrentPart;
		SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1* L_6 = ((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___HideStore_25;
		SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1* L_7 = (SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1*)il2cpp_codegen_object_new(SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1_il2cpp_TypeInfo_var);
		SimpleDelegate__ctor_m52198E5C89703FE51B58861C8D85FBC3885F4082(L_7, __this, (intptr_t)((void*)Engine_backToCurrentPart_mA65B3A3F3B4CC83CCE9D6273885A250882F1B2B1_RuntimeMethod_var), NULL);
		Delegate_t* L_8;
		L_8 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_6, L_7, NULL);
		((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___HideStore_25 = ((SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1*)CastclassSealed((RuntimeObject*)L_8, SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___HideStore_25), (void*)((SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1*)CastclassSealed((RuntimeObject*)L_8, SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1_il2cpp_TypeInfo_var)));
		// }
		return;
	}
}
// System.Void Engine::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Engine_Start_m870F46F9313208B4308F3D410D71DBB2C5F1DE20 (Engine_t59D31EC59AD8AAF189236F53F6E5B083856B0F00* __this, const RuntimeMethod* method) 
{
	{
		// private void Start() => updateEngine(_startEngine);
		EngineData_t82D35F92377644522DEBEADE8F95040A3F65C6AA* L_0 = __this->____startEngine_8;
		Engine_updateEngine_m7B8F321626DB23E6CB5F4761C66437EE59580B22(__this, L_0, NULL);
		return;
	}
}
// System.Void Engine::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Engine_OnDestroy_m3D19DC5AC64A5EC78B0F01C227398CA5E16316C6 (Engine_t59D31EC59AD8AAF189236F53F6E5B083856B0F00* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EngineDelegate_t7BD0ACF919FD17DB5AED3D8609768F62FE90FC5D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Engine_backToCurrentPart_mA65B3A3F3B4CC83CCE9D6273885A250882F1B2B1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Engine_updateEngine_m7B8F321626DB23E6CB5F4761C66437EE59580B22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObjectDelegate_t2014FF2A7D5B2ACE8C6D43C262A0D07379B70A95_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RocketPart_previewPart_m1B665AD4AFCE4503FD22B2EBC2AFFC7395C1E5A1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Events.PreviewEngineEvent -= previewPart;
		GameObjectDelegate_t2014FF2A7D5B2ACE8C6D43C262A0D07379B70A95* L_0 = ((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___PreviewEngineEvent_8;
		GameObjectDelegate_t2014FF2A7D5B2ACE8C6D43C262A0D07379B70A95* L_1 = (GameObjectDelegate_t2014FF2A7D5B2ACE8C6D43C262A0D07379B70A95*)il2cpp_codegen_object_new(GameObjectDelegate_t2014FF2A7D5B2ACE8C6D43C262A0D07379B70A95_il2cpp_TypeInfo_var);
		GameObjectDelegate__ctor_m58ADAF680615D0BF7C4F42CC621E509D115A87AE(L_1, __this, (intptr_t)((void*)RocketPart_previewPart_m1B665AD4AFCE4503FD22B2EBC2AFFC7395C1E5A1_RuntimeMethod_var), NULL);
		Delegate_t* L_2;
		L_2 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_0, L_1, NULL);
		((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___PreviewEngineEvent_8 = ((GameObjectDelegate_t2014FF2A7D5B2ACE8C6D43C262A0D07379B70A95*)CastclassSealed((RuntimeObject*)L_2, GameObjectDelegate_t2014FF2A7D5B2ACE8C6D43C262A0D07379B70A95_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___PreviewEngineEvent_8), (void*)((GameObjectDelegate_t2014FF2A7D5B2ACE8C6D43C262A0D07379B70A95*)CastclassSealed((RuntimeObject*)L_2, GameObjectDelegate_t2014FF2A7D5B2ACE8C6D43C262A0D07379B70A95_il2cpp_TypeInfo_var)));
		// Events.UpdateEngineEvent -= updateEngine;
		EngineDelegate_t7BD0ACF919FD17DB5AED3D8609768F62FE90FC5D* L_3 = ((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___UpdateEngineEvent_4;
		EngineDelegate_t7BD0ACF919FD17DB5AED3D8609768F62FE90FC5D* L_4 = (EngineDelegate_t7BD0ACF919FD17DB5AED3D8609768F62FE90FC5D*)il2cpp_codegen_object_new(EngineDelegate_t7BD0ACF919FD17DB5AED3D8609768F62FE90FC5D_il2cpp_TypeInfo_var);
		EngineDelegate__ctor_mFF985FFC8F94D0389EFC2A73E3BD36C3B67514DA(L_4, __this, (intptr_t)((void*)Engine_updateEngine_m7B8F321626DB23E6CB5F4761C66437EE59580B22_RuntimeMethod_var), NULL);
		Delegate_t* L_5;
		L_5 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_3, L_4, NULL);
		((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___UpdateEngineEvent_4 = ((EngineDelegate_t7BD0ACF919FD17DB5AED3D8609768F62FE90FC5D*)CastclassSealed((RuntimeObject*)L_5, EngineDelegate_t7BD0ACF919FD17DB5AED3D8609768F62FE90FC5D_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___UpdateEngineEvent_4), (void*)((EngineDelegate_t7BD0ACF919FD17DB5AED3D8609768F62FE90FC5D*)CastclassSealed((RuntimeObject*)L_5, EngineDelegate_t7BD0ACF919FD17DB5AED3D8609768F62FE90FC5D_il2cpp_TypeInfo_var)));
		// Events.HideStore -= backToCurrentPart;
		SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1* L_6 = ((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___HideStore_25;
		SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1* L_7 = (SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1*)il2cpp_codegen_object_new(SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1_il2cpp_TypeInfo_var);
		SimpleDelegate__ctor_m52198E5C89703FE51B58861C8D85FBC3885F4082(L_7, __this, (intptr_t)((void*)Engine_backToCurrentPart_mA65B3A3F3B4CC83CCE9D6273885A250882F1B2B1_RuntimeMethod_var), NULL);
		Delegate_t* L_8;
		L_8 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_6, L_7, NULL);
		((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___HideStore_25 = ((SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1*)CastclassSealed((RuntimeObject*)L_8, SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___HideStore_25), (void*)((SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1*)CastclassSealed((RuntimeObject*)L_8, SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1_il2cpp_TypeInfo_var)));
		// }
		return;
	}
}
// System.Void Engine::updateEngine(EngineData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Engine_updateEngine_m7B8F321626DB23E6CB5F4761C66437EE59580B22 (Engine_t59D31EC59AD8AAF189236F53F6E5B083856B0F00* __this, EngineData_t82D35F92377644522DEBEADE8F95040A3F65C6AA* ___newEngine0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Engine_t59D31EC59AD8AAF189236F53F6E5B083856B0F00_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Rocket_t46CF4BC5917C91D995808226A9F11EA125C89AFB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46* G_B2_0 = NULL;
	FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46* G_B1_0 = NULL;
	FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46* G_B5_0 = NULL;
	FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46* G_B4_0 = NULL;
	{
		// _currentEngine = newEngine;
		EngineData_t82D35F92377644522DEBEADE8F95040A3F65C6AA* L_0 = ___newEngine0;
		((Engine_t59D31EC59AD8AAF189236F53F6E5B083856B0F00_StaticFields*)il2cpp_codegen_static_fields_for(Engine_t59D31EC59AD8AAF189236F53F6E5B083856B0F00_il2cpp_TypeInfo_var))->____currentEngine_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((Engine_t59D31EC59AD8AAF189236F53F6E5B083856B0F00_StaticFields*)il2cpp_codegen_static_fields_for(Engine_t59D31EC59AD8AAF189236F53F6E5B083856B0F00_il2cpp_TypeInfo_var))->____currentEngine_7), (void*)L_0);
		// renderPart(_currentEngine.Prefab);
		EngineData_t82D35F92377644522DEBEADE8F95040A3F65C6AA* L_1 = ((Engine_t59D31EC59AD8AAF189236F53F6E5B083856B0F00_StaticFields*)il2cpp_codegen_static_fields_for(Engine_t59D31EC59AD8AAF189236F53F6E5B083856B0F00_il2cpp_TypeInfo_var))->____currentEngine_7;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = ((RocketPartData_t5D52B3A630DE734008E8AC3C974C6604543F03C3*)L_1)->___Prefab_5;
		RocketPart_renderPart_m21CE2B1E6035BAE71A967FFB1019F3DB166429C2(__this, L_2, NULL);
		// Events.UpdateThrust?.Invoke(_currentEngine.Thrust);
		FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46* L_3 = ((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___UpdateThrust_12;
		FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46* L_4 = L_3;
		G_B1_0 = L_4;
		if (L_4)
		{
			G_B2_0 = L_4;
			goto IL_0021;
		}
	}
	{
		goto IL_0030;
	}

IL_0021:
	{
		EngineData_t82D35F92377644522DEBEADE8F95040A3F65C6AA* L_5 = ((Engine_t59D31EC59AD8AAF189236F53F6E5B083856B0F00_StaticFields*)il2cpp_codegen_static_fields_for(Engine_t59D31EC59AD8AAF189236F53F6E5B083856B0F00_il2cpp_TypeInfo_var))->____currentEngine_7;
		float L_6 = L_5->___Thrust_11;
		FloatDelegate_Invoke_m4D49E45F98F312099A4ADDA6AEC51B40771DE2E6_inline(G_B2_0, L_6, NULL);
	}

IL_0030:
	{
		// Events.UpdateWeight?.Invoke(Rocket.RocketWeigt);
		FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46* L_7 = ((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___UpdateWeight_16;
		FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46* L_8 = L_7;
		G_B4_0 = L_8;
		if (L_8)
		{
			G_B5_0 = L_8;
			goto IL_003a;
		}
	}
	{
		return;
	}

IL_003a:
	{
		float L_9 = ((Rocket_t46CF4BC5917C91D995808226A9F11EA125C89AFB_StaticFields*)il2cpp_codegen_static_fields_for(Rocket_t46CF4BC5917C91D995808226A9F11EA125C89AFB_il2cpp_TypeInfo_var))->___RocketWeigt_8;
		FloatDelegate_Invoke_m4D49E45F98F312099A4ADDA6AEC51B40771DE2E6_inline(G_B5_0, L_9, NULL);
		// }
		return;
	}
}
// System.Void Engine::backToCurrentPart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Engine_backToCurrentPart_mA65B3A3F3B4CC83CCE9D6273885A250882F1B2B1 (Engine_t59D31EC59AD8AAF189236F53F6E5B083856B0F00* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Engine_t59D31EC59AD8AAF189236F53F6E5B083856B0F00_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// renderPart(_currentEngine.Prefab);
		EngineData_t82D35F92377644522DEBEADE8F95040A3F65C6AA* L_0 = ((Engine_t59D31EC59AD8AAF189236F53F6E5B083856B0F00_StaticFields*)il2cpp_codegen_static_fields_for(Engine_t59D31EC59AD8AAF189236F53F6E5B083856B0F00_il2cpp_TypeInfo_var))->____currentEngine_7;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = ((RocketPartData_t5D52B3A630DE734008E8AC3C974C6604543F03C3*)L_0)->___Prefab_5;
		RocketPart_renderPart_m21CE2B1E6035BAE71A967FFB1019F3DB166429C2(__this, L_1, NULL);
		// }
		return;
	}
}
// System.Void Engine::OnMouseDown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Engine_OnMouseDown_mB3D5AFC0BC955707C2002603CDE420CF4E074F19 (Engine_t59D31EC59AD8AAF189236F53F6E5B083856B0F00* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1* G_B2_0 = NULL;
	SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1* G_B1_0 = NULL;
	{
		// Events.SelectEngineStore?.Invoke();
		SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1* L_0 = ((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___SelectEngineStore_21;
		SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000a;
		}
	}
	{
		return;
	}

IL_000a:
	{
		SimpleDelegate_Invoke_mE39CE43C6B97CE701F70DE6A5DCDAB2EAAA05C94_inline(G_B2_0, NULL);
		// }
		return;
	}
}
// System.Void Engine::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Engine__ctor_m164A039162BE620A61BAF25F773E6F89D98B36BD (Engine_t59D31EC59AD8AAF189236F53F6E5B083856B0F00* __this, const RuntimeMethod* method) 
{
	{
		RocketPart__ctor_mB15DBBF4A7E906E14523FE2D9E09FC35F74DADDC(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Plumage::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Plumage_Awake_m6E7F5DFD06B7FFB7CE01E3F1CF33E7FF55D7E5E3 (Plumage_tE14F878A24757929120FE226D2268E486A8384F9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObjectDelegate_t2014FF2A7D5B2ACE8C6D43C262A0D07379B70A95_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlumagageDelegate_t7796A8A34036A8879878AF048A60102069DA5EDF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Plumage_backToCurrentPart_mD834F31CC44ADDB3CAD5B77C35A1EDE4686400BE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Plumage_updatePlumage_m223CF8C8579CB8B8E95E8377654699F70F92B67F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RocketPart_previewPart_m1B665AD4AFCE4503FD22B2EBC2AFFC7395C1E5A1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Events.PreviewPlumageEvent += previewPart;
		GameObjectDelegate_t2014FF2A7D5B2ACE8C6D43C262A0D07379B70A95* L_0 = ((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___PreviewPlumageEvent_11;
		GameObjectDelegate_t2014FF2A7D5B2ACE8C6D43C262A0D07379B70A95* L_1 = (GameObjectDelegate_t2014FF2A7D5B2ACE8C6D43C262A0D07379B70A95*)il2cpp_codegen_object_new(GameObjectDelegate_t2014FF2A7D5B2ACE8C6D43C262A0D07379B70A95_il2cpp_TypeInfo_var);
		GameObjectDelegate__ctor_m58ADAF680615D0BF7C4F42CC621E509D115A87AE(L_1, __this, (intptr_t)((void*)RocketPart_previewPart_m1B665AD4AFCE4503FD22B2EBC2AFFC7395C1E5A1_RuntimeMethod_var), NULL);
		Delegate_t* L_2;
		L_2 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_0, L_1, NULL);
		((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___PreviewPlumageEvent_11 = ((GameObjectDelegate_t2014FF2A7D5B2ACE8C6D43C262A0D07379B70A95*)CastclassSealed((RuntimeObject*)L_2, GameObjectDelegate_t2014FF2A7D5B2ACE8C6D43C262A0D07379B70A95_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___PreviewPlumageEvent_11), (void*)((GameObjectDelegate_t2014FF2A7D5B2ACE8C6D43C262A0D07379B70A95*)CastclassSealed((RuntimeObject*)L_2, GameObjectDelegate_t2014FF2A7D5B2ACE8C6D43C262A0D07379B70A95_il2cpp_TypeInfo_var)));
		// Events.UpdatePlumageEvent += updatePlumage;
		PlumagageDelegate_t7796A8A34036A8879878AF048A60102069DA5EDF* L_3 = ((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___UpdatePlumageEvent_7;
		PlumagageDelegate_t7796A8A34036A8879878AF048A60102069DA5EDF* L_4 = (PlumagageDelegate_t7796A8A34036A8879878AF048A60102069DA5EDF*)il2cpp_codegen_object_new(PlumagageDelegate_t7796A8A34036A8879878AF048A60102069DA5EDF_il2cpp_TypeInfo_var);
		PlumagageDelegate__ctor_m273F874A0EFB43F2154C7AB7E36E14AE3DEE0EA8(L_4, __this, (intptr_t)((void*)Plumage_updatePlumage_m223CF8C8579CB8B8E95E8377654699F70F92B67F_RuntimeMethod_var), NULL);
		Delegate_t* L_5;
		L_5 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_3, L_4, NULL);
		((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___UpdatePlumageEvent_7 = ((PlumagageDelegate_t7796A8A34036A8879878AF048A60102069DA5EDF*)CastclassSealed((RuntimeObject*)L_5, PlumagageDelegate_t7796A8A34036A8879878AF048A60102069DA5EDF_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___UpdatePlumageEvent_7), (void*)((PlumagageDelegate_t7796A8A34036A8879878AF048A60102069DA5EDF*)CastclassSealed((RuntimeObject*)L_5, PlumagageDelegate_t7796A8A34036A8879878AF048A60102069DA5EDF_il2cpp_TypeInfo_var)));
		// Events.HideStore += backToCurrentPart;
		SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1* L_6 = ((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___HideStore_25;
		SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1* L_7 = (SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1*)il2cpp_codegen_object_new(SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1_il2cpp_TypeInfo_var);
		SimpleDelegate__ctor_m52198E5C89703FE51B58861C8D85FBC3885F4082(L_7, __this, (intptr_t)((void*)Plumage_backToCurrentPart_mD834F31CC44ADDB3CAD5B77C35A1EDE4686400BE_RuntimeMethod_var), NULL);
		Delegate_t* L_8;
		L_8 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_6, L_7, NULL);
		((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___HideStore_25 = ((SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1*)CastclassSealed((RuntimeObject*)L_8, SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___HideStore_25), (void*)((SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1*)CastclassSealed((RuntimeObject*)L_8, SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1_il2cpp_TypeInfo_var)));
		// }
		return;
	}
}
// System.Void Plumage::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Plumage_Start_m51B83770F9AB9693EA99CC121AA699D3E2CB25BB (Plumage_tE14F878A24757929120FE226D2268E486A8384F9* __this, const RuntimeMethod* method) 
{
	{
		// private void Start() => updatePlumage(_startPlumage);
		PlumageData_tF8E9C197181F7308588184A8236BFA6838D26F4F* L_0 = __this->____startPlumage_8;
		Plumage_updatePlumage_m223CF8C8579CB8B8E95E8377654699F70F92B67F(__this, L_0, NULL);
		return;
	}
}
// System.Void Plumage::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Plumage_OnDestroy_mBC4D665087524A82CF5C3C8BB0257DFA513BB20E (Plumage_tE14F878A24757929120FE226D2268E486A8384F9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObjectDelegate_t2014FF2A7D5B2ACE8C6D43C262A0D07379B70A95_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlumagageDelegate_t7796A8A34036A8879878AF048A60102069DA5EDF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Plumage_backToCurrentPart_mD834F31CC44ADDB3CAD5B77C35A1EDE4686400BE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Plumage_updatePlumage_m223CF8C8579CB8B8E95E8377654699F70F92B67F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RocketPart_previewPart_m1B665AD4AFCE4503FD22B2EBC2AFFC7395C1E5A1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Events.PreviewPlumageEvent -= previewPart;
		GameObjectDelegate_t2014FF2A7D5B2ACE8C6D43C262A0D07379B70A95* L_0 = ((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___PreviewPlumageEvent_11;
		GameObjectDelegate_t2014FF2A7D5B2ACE8C6D43C262A0D07379B70A95* L_1 = (GameObjectDelegate_t2014FF2A7D5B2ACE8C6D43C262A0D07379B70A95*)il2cpp_codegen_object_new(GameObjectDelegate_t2014FF2A7D5B2ACE8C6D43C262A0D07379B70A95_il2cpp_TypeInfo_var);
		GameObjectDelegate__ctor_m58ADAF680615D0BF7C4F42CC621E509D115A87AE(L_1, __this, (intptr_t)((void*)RocketPart_previewPart_m1B665AD4AFCE4503FD22B2EBC2AFFC7395C1E5A1_RuntimeMethod_var), NULL);
		Delegate_t* L_2;
		L_2 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_0, L_1, NULL);
		((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___PreviewPlumageEvent_11 = ((GameObjectDelegate_t2014FF2A7D5B2ACE8C6D43C262A0D07379B70A95*)CastclassSealed((RuntimeObject*)L_2, GameObjectDelegate_t2014FF2A7D5B2ACE8C6D43C262A0D07379B70A95_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___PreviewPlumageEvent_11), (void*)((GameObjectDelegate_t2014FF2A7D5B2ACE8C6D43C262A0D07379B70A95*)CastclassSealed((RuntimeObject*)L_2, GameObjectDelegate_t2014FF2A7D5B2ACE8C6D43C262A0D07379B70A95_il2cpp_TypeInfo_var)));
		// Events.UpdatePlumageEvent -= updatePlumage;
		PlumagageDelegate_t7796A8A34036A8879878AF048A60102069DA5EDF* L_3 = ((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___UpdatePlumageEvent_7;
		PlumagageDelegate_t7796A8A34036A8879878AF048A60102069DA5EDF* L_4 = (PlumagageDelegate_t7796A8A34036A8879878AF048A60102069DA5EDF*)il2cpp_codegen_object_new(PlumagageDelegate_t7796A8A34036A8879878AF048A60102069DA5EDF_il2cpp_TypeInfo_var);
		PlumagageDelegate__ctor_m273F874A0EFB43F2154C7AB7E36E14AE3DEE0EA8(L_4, __this, (intptr_t)((void*)Plumage_updatePlumage_m223CF8C8579CB8B8E95E8377654699F70F92B67F_RuntimeMethod_var), NULL);
		Delegate_t* L_5;
		L_5 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_3, L_4, NULL);
		((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___UpdatePlumageEvent_7 = ((PlumagageDelegate_t7796A8A34036A8879878AF048A60102069DA5EDF*)CastclassSealed((RuntimeObject*)L_5, PlumagageDelegate_t7796A8A34036A8879878AF048A60102069DA5EDF_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___UpdatePlumageEvent_7), (void*)((PlumagageDelegate_t7796A8A34036A8879878AF048A60102069DA5EDF*)CastclassSealed((RuntimeObject*)L_5, PlumagageDelegate_t7796A8A34036A8879878AF048A60102069DA5EDF_il2cpp_TypeInfo_var)));
		// Events.HideStore -= backToCurrentPart;
		SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1* L_6 = ((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___HideStore_25;
		SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1* L_7 = (SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1*)il2cpp_codegen_object_new(SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1_il2cpp_TypeInfo_var);
		SimpleDelegate__ctor_m52198E5C89703FE51B58861C8D85FBC3885F4082(L_7, __this, (intptr_t)((void*)Plumage_backToCurrentPart_mD834F31CC44ADDB3CAD5B77C35A1EDE4686400BE_RuntimeMethod_var), NULL);
		Delegate_t* L_8;
		L_8 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_6, L_7, NULL);
		((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___HideStore_25 = ((SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1*)CastclassSealed((RuntimeObject*)L_8, SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___HideStore_25), (void*)((SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1*)CastclassSealed((RuntimeObject*)L_8, SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1_il2cpp_TypeInfo_var)));
		// }
		return;
	}
}
// System.Void Plumage::updatePlumage(PlumageData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Plumage_updatePlumage_m223CF8C8579CB8B8E95E8377654699F70F92B67F (Plumage_tE14F878A24757929120FE226D2268E486A8384F9* __this, PlumageData_tF8E9C197181F7308588184A8236BFA6838D26F4F* ___newPlumage0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Plumage_tE14F878A24757929120FE226D2268E486A8384F9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Rocket_t46CF4BC5917C91D995808226A9F11EA125C89AFB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46* G_B2_0 = NULL;
	FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46* G_B1_0 = NULL;
	FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46* G_B5_0 = NULL;
	FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46* G_B4_0 = NULL;
	{
		// _currentPlumage = newPlumage;
		PlumageData_tF8E9C197181F7308588184A8236BFA6838D26F4F* L_0 = ___newPlumage0;
		((Plumage_tE14F878A24757929120FE226D2268E486A8384F9_StaticFields*)il2cpp_codegen_static_fields_for(Plumage_tE14F878A24757929120FE226D2268E486A8384F9_il2cpp_TypeInfo_var))->____currentPlumage_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((Plumage_tE14F878A24757929120FE226D2268E486A8384F9_StaticFields*)il2cpp_codegen_static_fields_for(Plumage_tE14F878A24757929120FE226D2268E486A8384F9_il2cpp_TypeInfo_var))->____currentPlumage_7), (void*)L_0);
		// renderPart(_currentPlumage.Prefab);
		PlumageData_tF8E9C197181F7308588184A8236BFA6838D26F4F* L_1 = ((Plumage_tE14F878A24757929120FE226D2268E486A8384F9_StaticFields*)il2cpp_codegen_static_fields_for(Plumage_tE14F878A24757929120FE226D2268E486A8384F9_il2cpp_TypeInfo_var))->____currentPlumage_7;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = ((RocketPartData_t5D52B3A630DE734008E8AC3C974C6604543F03C3*)L_1)->___Prefab_5;
		RocketPart_renderPart_m21CE2B1E6035BAE71A967FFB1019F3DB166429C2(__this, L_2, NULL);
		// Events.UpdateControl?.Invoke(_currentPlumage.ReturnParametr());
		FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46* L_3 = ((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___UpdateControl_13;
		FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46* L_4 = L_3;
		G_B1_0 = L_4;
		if (L_4)
		{
			G_B2_0 = L_4;
			goto IL_0021;
		}
	}
	{
		goto IL_0030;
	}

IL_0021:
	{
		PlumageData_tF8E9C197181F7308588184A8236BFA6838D26F4F* L_5 = ((Plumage_tE14F878A24757929120FE226D2268E486A8384F9_StaticFields*)il2cpp_codegen_static_fields_for(Plumage_tE14F878A24757929120FE226D2268E486A8384F9_il2cpp_TypeInfo_var))->____currentPlumage_7;
		float L_6;
		L_6 = VirtualFuncInvoker0< float >::Invoke(5 /* System.Single RocketPartData::ReturnParametr() */, L_5);
		FloatDelegate_Invoke_m4D49E45F98F312099A4ADDA6AEC51B40771DE2E6_inline(G_B2_0, L_6, NULL);
	}

IL_0030:
	{
		// Events.UpdateWeight?.Invoke(Rocket.RocketWeigt);
		FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46* L_7 = ((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___UpdateWeight_16;
		FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46* L_8 = L_7;
		G_B4_0 = L_8;
		if (L_8)
		{
			G_B5_0 = L_8;
			goto IL_003a;
		}
	}
	{
		return;
	}

IL_003a:
	{
		float L_9 = ((Rocket_t46CF4BC5917C91D995808226A9F11EA125C89AFB_StaticFields*)il2cpp_codegen_static_fields_for(Rocket_t46CF4BC5917C91D995808226A9F11EA125C89AFB_il2cpp_TypeInfo_var))->___RocketWeigt_8;
		FloatDelegate_Invoke_m4D49E45F98F312099A4ADDA6AEC51B40771DE2E6_inline(G_B5_0, L_9, NULL);
		// }
		return;
	}
}
// System.Void Plumage::backToCurrentPart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Plumage_backToCurrentPart_mD834F31CC44ADDB3CAD5B77C35A1EDE4686400BE (Plumage_tE14F878A24757929120FE226D2268E486A8384F9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Plumage_tE14F878A24757929120FE226D2268E486A8384F9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// renderPart(_currentPlumage.Prefab);
		PlumageData_tF8E9C197181F7308588184A8236BFA6838D26F4F* L_0 = ((Plumage_tE14F878A24757929120FE226D2268E486A8384F9_StaticFields*)il2cpp_codegen_static_fields_for(Plumage_tE14F878A24757929120FE226D2268E486A8384F9_il2cpp_TypeInfo_var))->____currentPlumage_7;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = ((RocketPartData_t5D52B3A630DE734008E8AC3C974C6604543F03C3*)L_0)->___Prefab_5;
		RocketPart_renderPart_m21CE2B1E6035BAE71A967FFB1019F3DB166429C2(__this, L_1, NULL);
		// }
		return;
	}
}
// System.Void Plumage::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Plumage__ctor_mFB27AFC36BA53E90A22446FFFEE8DD887381F7AF (Plumage_tE14F878A24757929120FE226D2268E486A8384F9* __this, const RuntimeMethod* method) 
{
	{
		RocketPart__ctor_mB15DBBF4A7E906E14523FE2D9E09FC35F74DADDC(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void RocketPart::previewPart(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RocketPart_previewPart_m1B665AD4AFCE4503FD22B2EBC2AFFC7395C1E5A1 (RocketPart_t012AE5380211CCEE66BD0807CE9406A26BECFAFC* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___part0, const RuntimeMethod* method) 
{
	{
		// renderPart(part);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___part0;
		RocketPart_renderPart_m21CE2B1E6035BAE71A967FFB1019F3DB166429C2(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void RocketPart::renderPart(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RocketPart_renderPart_m21CE2B1E6035BAE71A967FFB1019F3DB166429C2 (RocketPart_t012AE5380211CCEE66BD0807CE9406A26BECFAFC* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___part0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m002192C406088F7BA156339AAA9B1BB5D69BE934_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	{
		// foreach(Transform child in _partPosition){
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->____partPosition_4;
		RuntimeObject* L_1;
		L_1 = Transform_GetEnumerator_mA7E1C882ACA0C33E284711CD09971DEA3FFEF404(L_0, NULL);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_002d:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_2 = V_0;
					V_1 = ((RuntimeObject*)IsInst((RuntimeObject*)L_2, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_3 = V_1;
					if (!L_3)
					{
						goto IL_003d;
					}
				}
				{
					RuntimeObject* L_4 = V_1;
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_4);
				}

IL_003d:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0023_1;
			}

IL_000e_1:
			{
				// foreach(Transform child in _partPosition){
				RuntimeObject* L_5 = V_0;
				RuntimeObject* L_6;
				L_6 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_5);
				// Destroy(child.gameObject);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
				L_7 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(((Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)CastclassClass((RuntimeObject*)L_6, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var)), NULL);
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_7, NULL);
			}

IL_0023_1:
			{
				// foreach(Transform child in _partPosition){
				RuntimeObject* L_8 = V_0;
				bool L_9;
				L_9 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_8);
				if (L_9)
				{
					goto IL_000e_1;
				}
			}
			{
				goto IL_003e;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003e:
	{
		// _partModel = Instantiate(part, _partPosition);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = ___part0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11 = __this->____partPosition_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12;
		L_12 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m002192C406088F7BA156339AAA9B1BB5D69BE934(L_10, L_11, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m002192C406088F7BA156339AAA9B1BB5D69BE934_RuntimeMethod_var);
		__this->____partModel_6 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____partModel_6), (void*)L_12);
		// }
		return;
	}
}
// System.Void RocketPart::Explosion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RocketPart_Explosion_m221B47BB0FB5B4E82E3190DEE208FA7D3305FD71 (RocketPart_t012AE5380211CCEE66BD0807CE9406A26BECFAFC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m03A761629A3F71B0248F1B26EF612F592B757093_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral19DAC2BBD0713CAA8195656E2C9A7DFECCC2F9DC);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Debug.Log("work");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteral19DAC2BBD0713CAA8195656E2C9A7DFECCC2F9DC, NULL);
		// Vector3 explosionDirection = new Vector3(Random.Range(0f, _explosionForce), Random.Range(0f, _explosionForce), Random.Range(0f, _explosionForce));
		float L_0 = __this->____explosionForce_5;
		float L_1;
		L_1 = Random_Range_mF26F26EB446B76823B4815C91FA0907B484DF02B((0.0f), L_0, NULL);
		float L_2 = __this->____explosionForce_5;
		float L_3;
		L_3 = Random_Range_mF26F26EB446B76823B4815C91FA0907B484DF02B((0.0f), L_2, NULL);
		float L_4 = __this->____explosionForce_5;
		float L_5;
		L_5 = Random_Range_mF26F26EB446B76823B4815C91FA0907B484DF02B((0.0f), L_4, NULL);
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_0), L_1, L_3, L_5, NULL);
		// Rigidbody rigidBody = _partModel.AddComponent<Rigidbody>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = __this->____partModel_6;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_7;
		L_7 = GameObject_AddComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m03A761629A3F71B0248F1B26EF612F592B757093(L_6, GameObject_AddComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m03A761629A3F71B0248F1B26EF612F592B757093_RuntimeMethod_var);
		// rigidBody.AddForce(explosionDirection,ForceMode.Impulse);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = V_0;
		Rigidbody_AddForce_mBDBC288D0E266BC1B62E3649B4FCE46E7EA9CCBC(L_7, L_8, 1, NULL);
		// }
		return;
	}
}
// System.Void RocketPart::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RocketPart__ctor_mB15DBBF4A7E906E14523FE2D9E09FC35F74DADDC (RocketPart_t012AE5380211CCEE66BD0807CE9406A26BECFAFC* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Tank::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tank_Awake_m305A9F6FFA3716D04BB04D096DCD56403CF840AB (Tank_t2AFD1F8BD4E308EA6AC4B0EAEA9C9D7FC5B187ED* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObjectDelegate_t2014FF2A7D5B2ACE8C6D43C262A0D07379B70A95_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RocketPart_previewPart_m1B665AD4AFCE4503FD22B2EBC2AFFC7395C1E5A1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TankDelegate_tD05489FE7D4AAD92C0F65F9D07006F7522B875C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tank_backToCurrentPart_mFFEFDE9D2739BFAFBDD87D8277DF72AC04A8FC25_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tank_updateTank_m108CDFFDC537A24318B7FA70B34C39A77A3A0DEB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Events.PreviewTankEvent += previewPart;
		GameObjectDelegate_t2014FF2A7D5B2ACE8C6D43C262A0D07379B70A95* L_0 = ((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___PreviewTankEvent_10;
		GameObjectDelegate_t2014FF2A7D5B2ACE8C6D43C262A0D07379B70A95* L_1 = (GameObjectDelegate_t2014FF2A7D5B2ACE8C6D43C262A0D07379B70A95*)il2cpp_codegen_object_new(GameObjectDelegate_t2014FF2A7D5B2ACE8C6D43C262A0D07379B70A95_il2cpp_TypeInfo_var);
		GameObjectDelegate__ctor_m58ADAF680615D0BF7C4F42CC621E509D115A87AE(L_1, __this, (intptr_t)((void*)RocketPart_previewPart_m1B665AD4AFCE4503FD22B2EBC2AFFC7395C1E5A1_RuntimeMethod_var), NULL);
		Delegate_t* L_2;
		L_2 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_0, L_1, NULL);
		((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___PreviewTankEvent_10 = ((GameObjectDelegate_t2014FF2A7D5B2ACE8C6D43C262A0D07379B70A95*)CastclassSealed((RuntimeObject*)L_2, GameObjectDelegate_t2014FF2A7D5B2ACE8C6D43C262A0D07379B70A95_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___PreviewTankEvent_10), (void*)((GameObjectDelegate_t2014FF2A7D5B2ACE8C6D43C262A0D07379B70A95*)CastclassSealed((RuntimeObject*)L_2, GameObjectDelegate_t2014FF2A7D5B2ACE8C6D43C262A0D07379B70A95_il2cpp_TypeInfo_var)));
		// Events.UpdateTankEvent += updateTank;
		TankDelegate_tD05489FE7D4AAD92C0F65F9D07006F7522B875C5* L_3 = ((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___UpdateTankEvent_6;
		TankDelegate_tD05489FE7D4AAD92C0F65F9D07006F7522B875C5* L_4 = (TankDelegate_tD05489FE7D4AAD92C0F65F9D07006F7522B875C5*)il2cpp_codegen_object_new(TankDelegate_tD05489FE7D4AAD92C0F65F9D07006F7522B875C5_il2cpp_TypeInfo_var);
		TankDelegate__ctor_mF2C45BA0BFC2B5BB989F75DFB9322F4DD2E12597(L_4, __this, (intptr_t)((void*)Tank_updateTank_m108CDFFDC537A24318B7FA70B34C39A77A3A0DEB_RuntimeMethod_var), NULL);
		Delegate_t* L_5;
		L_5 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_3, L_4, NULL);
		((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___UpdateTankEvent_6 = ((TankDelegate_tD05489FE7D4AAD92C0F65F9D07006F7522B875C5*)CastclassSealed((RuntimeObject*)L_5, TankDelegate_tD05489FE7D4AAD92C0F65F9D07006F7522B875C5_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___UpdateTankEvent_6), (void*)((TankDelegate_tD05489FE7D4AAD92C0F65F9D07006F7522B875C5*)CastclassSealed((RuntimeObject*)L_5, TankDelegate_tD05489FE7D4AAD92C0F65F9D07006F7522B875C5_il2cpp_TypeInfo_var)));
		// Events.HideStore += backToCurrentPart;
		SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1* L_6 = ((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___HideStore_25;
		SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1* L_7 = (SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1*)il2cpp_codegen_object_new(SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1_il2cpp_TypeInfo_var);
		SimpleDelegate__ctor_m52198E5C89703FE51B58861C8D85FBC3885F4082(L_7, __this, (intptr_t)((void*)Tank_backToCurrentPart_mFFEFDE9D2739BFAFBDD87D8277DF72AC04A8FC25_RuntimeMethod_var), NULL);
		Delegate_t* L_8;
		L_8 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_6, L_7, NULL);
		((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___HideStore_25 = ((SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1*)CastclassSealed((RuntimeObject*)L_8, SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___HideStore_25), (void*)((SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1*)CastclassSealed((RuntimeObject*)L_8, SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1_il2cpp_TypeInfo_var)));
		// }
		return;
	}
}
// System.Void Tank::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tank_Start_m05A4DD1BDEA02722351D0F27598CF907B63BF5BA (Tank_t2AFD1F8BD4E308EA6AC4B0EAEA9C9D7FC5B187ED* __this, const RuntimeMethod* method) 
{
	{
		// private void Start() => updateTank(_startTank);
		TankData_t928F6B9458C59DFABB9B9083374169207AC416F0* L_0 = __this->____startTank_8;
		Tank_updateTank_m108CDFFDC537A24318B7FA70B34C39A77A3A0DEB(__this, L_0, NULL);
		return;
	}
}
// System.Void Tank::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tank_OnDestroy_mC0FB8222E1D12329CC8E4BE8B698ADE75C3059A6 (Tank_t2AFD1F8BD4E308EA6AC4B0EAEA9C9D7FC5B187ED* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObjectDelegate_t2014FF2A7D5B2ACE8C6D43C262A0D07379B70A95_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RocketPart_previewPart_m1B665AD4AFCE4503FD22B2EBC2AFFC7395C1E5A1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TankDelegate_tD05489FE7D4AAD92C0F65F9D07006F7522B875C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tank_backToCurrentPart_mFFEFDE9D2739BFAFBDD87D8277DF72AC04A8FC25_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tank_updateTank_m108CDFFDC537A24318B7FA70B34C39A77A3A0DEB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Events.PreviewTankEvent -= previewPart;
		GameObjectDelegate_t2014FF2A7D5B2ACE8C6D43C262A0D07379B70A95* L_0 = ((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___PreviewTankEvent_10;
		GameObjectDelegate_t2014FF2A7D5B2ACE8C6D43C262A0D07379B70A95* L_1 = (GameObjectDelegate_t2014FF2A7D5B2ACE8C6D43C262A0D07379B70A95*)il2cpp_codegen_object_new(GameObjectDelegate_t2014FF2A7D5B2ACE8C6D43C262A0D07379B70A95_il2cpp_TypeInfo_var);
		GameObjectDelegate__ctor_m58ADAF680615D0BF7C4F42CC621E509D115A87AE(L_1, __this, (intptr_t)((void*)RocketPart_previewPart_m1B665AD4AFCE4503FD22B2EBC2AFFC7395C1E5A1_RuntimeMethod_var), NULL);
		Delegate_t* L_2;
		L_2 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_0, L_1, NULL);
		((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___PreviewTankEvent_10 = ((GameObjectDelegate_t2014FF2A7D5B2ACE8C6D43C262A0D07379B70A95*)CastclassSealed((RuntimeObject*)L_2, GameObjectDelegate_t2014FF2A7D5B2ACE8C6D43C262A0D07379B70A95_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___PreviewTankEvent_10), (void*)((GameObjectDelegate_t2014FF2A7D5B2ACE8C6D43C262A0D07379B70A95*)CastclassSealed((RuntimeObject*)L_2, GameObjectDelegate_t2014FF2A7D5B2ACE8C6D43C262A0D07379B70A95_il2cpp_TypeInfo_var)));
		// Events.UpdateTankEvent -= updateTank;
		TankDelegate_tD05489FE7D4AAD92C0F65F9D07006F7522B875C5* L_3 = ((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___UpdateTankEvent_6;
		TankDelegate_tD05489FE7D4AAD92C0F65F9D07006F7522B875C5* L_4 = (TankDelegate_tD05489FE7D4AAD92C0F65F9D07006F7522B875C5*)il2cpp_codegen_object_new(TankDelegate_tD05489FE7D4AAD92C0F65F9D07006F7522B875C5_il2cpp_TypeInfo_var);
		TankDelegate__ctor_mF2C45BA0BFC2B5BB989F75DFB9322F4DD2E12597(L_4, __this, (intptr_t)((void*)Tank_updateTank_m108CDFFDC537A24318B7FA70B34C39A77A3A0DEB_RuntimeMethod_var), NULL);
		Delegate_t* L_5;
		L_5 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_3, L_4, NULL);
		((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___UpdateTankEvent_6 = ((TankDelegate_tD05489FE7D4AAD92C0F65F9D07006F7522B875C5*)CastclassSealed((RuntimeObject*)L_5, TankDelegate_tD05489FE7D4AAD92C0F65F9D07006F7522B875C5_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___UpdateTankEvent_6), (void*)((TankDelegate_tD05489FE7D4AAD92C0F65F9D07006F7522B875C5*)CastclassSealed((RuntimeObject*)L_5, TankDelegate_tD05489FE7D4AAD92C0F65F9D07006F7522B875C5_il2cpp_TypeInfo_var)));
		// Events.HideStore -= backToCurrentPart;
		SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1* L_6 = ((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___HideStore_25;
		SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1* L_7 = (SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1*)il2cpp_codegen_object_new(SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1_il2cpp_TypeInfo_var);
		SimpleDelegate__ctor_m52198E5C89703FE51B58861C8D85FBC3885F4082(L_7, __this, (intptr_t)((void*)Tank_backToCurrentPart_mFFEFDE9D2739BFAFBDD87D8277DF72AC04A8FC25_RuntimeMethod_var), NULL);
		Delegate_t* L_8;
		L_8 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_6, L_7, NULL);
		((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___HideStore_25 = ((SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1*)CastclassSealed((RuntimeObject*)L_8, SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___HideStore_25), (void*)((SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1*)CastclassSealed((RuntimeObject*)L_8, SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1_il2cpp_TypeInfo_var)));
		// }
		return;
	}
}
// System.Void Tank::updateTank(TankData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tank_updateTank_m108CDFFDC537A24318B7FA70B34C39A77A3A0DEB (Tank_t2AFD1F8BD4E308EA6AC4B0EAEA9C9D7FC5B187ED* __this, TankData_t928F6B9458C59DFABB9B9083374169207AC416F0* ___newTank0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Rocket_t46CF4BC5917C91D995808226A9F11EA125C89AFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tank_t2AFD1F8BD4E308EA6AC4B0EAEA9C9D7FC5B187ED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46* G_B2_0 = NULL;
	FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46* G_B1_0 = NULL;
	FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46* G_B5_0 = NULL;
	FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46* G_B4_0 = NULL;
	{
		// _currentTank = newTank;
		TankData_t928F6B9458C59DFABB9B9083374169207AC416F0* L_0 = ___newTank0;
		((Tank_t2AFD1F8BD4E308EA6AC4B0EAEA9C9D7FC5B187ED_StaticFields*)il2cpp_codegen_static_fields_for(Tank_t2AFD1F8BD4E308EA6AC4B0EAEA9C9D7FC5B187ED_il2cpp_TypeInfo_var))->____currentTank_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((Tank_t2AFD1F8BD4E308EA6AC4B0EAEA9C9D7FC5B187ED_StaticFields*)il2cpp_codegen_static_fields_for(Tank_t2AFD1F8BD4E308EA6AC4B0EAEA9C9D7FC5B187ED_il2cpp_TypeInfo_var))->____currentTank_7), (void*)L_0);
		// renderPart(_currentTank.Prefab);
		TankData_t928F6B9458C59DFABB9B9083374169207AC416F0* L_1 = ((Tank_t2AFD1F8BD4E308EA6AC4B0EAEA9C9D7FC5B187ED_StaticFields*)il2cpp_codegen_static_fields_for(Tank_t2AFD1F8BD4E308EA6AC4B0EAEA9C9D7FC5B187ED_il2cpp_TypeInfo_var))->____currentTank_7;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = ((RocketPartData_t5D52B3A630DE734008E8AC3C974C6604543F03C3*)L_1)->___Prefab_5;
		RocketPart_renderPart_m21CE2B1E6035BAE71A967FFB1019F3DB166429C2(__this, L_2, NULL);
		// Events.UpdateSpecificImpulse?.Invoke(_currentTank.SpecificImpulse);
		FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46* L_3 = ((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___UpdateSpecificImpulse_14;
		FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46* L_4 = L_3;
		G_B1_0 = L_4;
		if (L_4)
		{
			G_B2_0 = L_4;
			goto IL_0021;
		}
	}
	{
		goto IL_0030;
	}

IL_0021:
	{
		TankData_t928F6B9458C59DFABB9B9083374169207AC416F0* L_5 = ((Tank_t2AFD1F8BD4E308EA6AC4B0EAEA9C9D7FC5B187ED_StaticFields*)il2cpp_codegen_static_fields_for(Tank_t2AFD1F8BD4E308EA6AC4B0EAEA9C9D7FC5B187ED_il2cpp_TypeInfo_var))->____currentTank_7;
		float L_6 = L_5->___SpecificImpulse_11;
		FloatDelegate_Invoke_m4D49E45F98F312099A4ADDA6AEC51B40771DE2E6_inline(G_B2_0, L_6, NULL);
	}

IL_0030:
	{
		// Events.UpdateWeight?.Invoke(Rocket.RocketWeigt);
		FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46* L_7 = ((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___UpdateWeight_16;
		FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46* L_8 = L_7;
		G_B4_0 = L_8;
		if (L_8)
		{
			G_B5_0 = L_8;
			goto IL_003a;
		}
	}
	{
		return;
	}

IL_003a:
	{
		float L_9 = ((Rocket_t46CF4BC5917C91D995808226A9F11EA125C89AFB_StaticFields*)il2cpp_codegen_static_fields_for(Rocket_t46CF4BC5917C91D995808226A9F11EA125C89AFB_il2cpp_TypeInfo_var))->___RocketWeigt_8;
		FloatDelegate_Invoke_m4D49E45F98F312099A4ADDA6AEC51B40771DE2E6_inline(G_B5_0, L_9, NULL);
		// }
		return;
	}
}
// System.Void Tank::backToCurrentPart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tank_backToCurrentPart_mFFEFDE9D2739BFAFBDD87D8277DF72AC04A8FC25 (Tank_t2AFD1F8BD4E308EA6AC4B0EAEA9C9D7FC5B187ED* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tank_t2AFD1F8BD4E308EA6AC4B0EAEA9C9D7FC5B187ED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// renderPart(_currentTank.Prefab);
		TankData_t928F6B9458C59DFABB9B9083374169207AC416F0* L_0 = ((Tank_t2AFD1F8BD4E308EA6AC4B0EAEA9C9D7FC5B187ED_StaticFields*)il2cpp_codegen_static_fields_for(Tank_t2AFD1F8BD4E308EA6AC4B0EAEA9C9D7FC5B187ED_il2cpp_TypeInfo_var))->____currentTank_7;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = ((RocketPartData_t5D52B3A630DE734008E8AC3C974C6604543F03C3*)L_0)->___Prefab_5;
		RocketPart_renderPart_m21CE2B1E6035BAE71A967FFB1019F3DB166429C2(__this, L_1, NULL);
		// }
		return;
	}
}
// System.Void Tank::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tank__ctor_mE0F2A82A0C5A275B98A2C974381736E26D776A9E (Tank_t2AFD1F8BD4E308EA6AC4B0EAEA9C9D7FC5B187ED* __this, const RuntimeMethod* method) 
{
	{
		RocketPart__ctor_mB15DBBF4A7E906E14523FE2D9E09FC35F74DADDC(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Sky::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sky_Start_mD960387A22E5A0EA0A10AF511ACF73A2070A35C1 (Sky_t5309122E3A5E560852B42BF0BB7E76D549ECC420* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Sky::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sky_Update_mEA8875109960C2276396BAECED24B730752FFEE3 (Sky_t5309122E3A5E560852B42BF0BB7E76D549ECC420* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Sky::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sky__ctor_m0547CFB227ED5FBC47C3A61B95FF0E4939A41181 (Sky_t5309122E3A5E560852B42BF0BB7E76D549ECC420* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void StateMachine::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateMachine_Awake_m15947C4B357EBDDB72705778E5DA7BC4A2564F90 (StateMachine_tAF6DB96F038DEE14284C0C0AE342050A544B20EB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StateMachine_destroyRocket_m785080EE97F622972010CBC88290446043A4B85F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StateMachine_levelComplete_mEDC60B375E9B85AAD68249F864E3E5ABB5777FAE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StateMachine_tryLaunch_m373016EDD5649514EB2634EB65A6708828C01EF2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Events.LaunchRocket += tryLaunch;
		SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1* L_0 = ((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___LaunchRocket_27;
		SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1* L_1 = (SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1*)il2cpp_codegen_object_new(SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1_il2cpp_TypeInfo_var);
		SimpleDelegate__ctor_m52198E5C89703FE51B58861C8D85FBC3885F4082(L_1, __this, (intptr_t)((void*)StateMachine_tryLaunch_m373016EDD5649514EB2634EB65A6708828C01EF2_RuntimeMethod_var), NULL);
		Delegate_t* L_2;
		L_2 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_0, L_1, NULL);
		((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___LaunchRocket_27 = ((SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1*)CastclassSealed((RuntimeObject*)L_2, SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___LaunchRocket_27), (void*)((SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1*)CastclassSealed((RuntimeObject*)L_2, SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1_il2cpp_TypeInfo_var)));
		// Events.DestroyRocket += destroyRocket;
		SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1* L_3 = ((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___DestroyRocket_29;
		SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1* L_4 = (SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1*)il2cpp_codegen_object_new(SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1_il2cpp_TypeInfo_var);
		SimpleDelegate__ctor_m52198E5C89703FE51B58861C8D85FBC3885F4082(L_4, __this, (intptr_t)((void*)StateMachine_destroyRocket_m785080EE97F622972010CBC88290446043A4B85F_RuntimeMethod_var), NULL);
		Delegate_t* L_5;
		L_5 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_3, L_4, NULL);
		((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___DestroyRocket_29 = ((SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1*)CastclassSealed((RuntimeObject*)L_5, SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___DestroyRocket_29), (void*)((SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1*)CastclassSealed((RuntimeObject*)L_5, SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1_il2cpp_TypeInfo_var)));
		// Events.LevelComplete += levelComplete;
		SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1* L_6 = ((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___LevelComplete_30;
		SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1* L_7 = (SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1*)il2cpp_codegen_object_new(SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1_il2cpp_TypeInfo_var);
		SimpleDelegate__ctor_m52198E5C89703FE51B58861C8D85FBC3885F4082(L_7, __this, (intptr_t)((void*)StateMachine_levelComplete_mEDC60B375E9B85AAD68249F864E3E5ABB5777FAE_RuntimeMethod_var), NULL);
		Delegate_t* L_8;
		L_8 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_6, L_7, NULL);
		((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___LevelComplete_30 = ((SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1*)CastclassSealed((RuntimeObject*)L_8, SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___LevelComplete_30), (void*)((SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1*)CastclassSealed((RuntimeObject*)L_8, SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1_il2cpp_TypeInfo_var)));
		// }
		return;
	}
}
// System.Void StateMachine::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateMachine_Start_m6D2B6826B4EE8D6CD368C18E77A14D56C3FAAA99 (StateMachine_tAF6DB96F038DEE14284C0C0AE342050A544B20EB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DestroyState_t604C1F481A0FC76542E54D449FBBE63DDBEBCC4B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FinishState_t4564B3253E31DEEA3C919DF87A20BBDDB888198D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IState_tCEB6CB011AADE266AD08F5538B1A1593D7E29CA0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LaunchingState_t7AA2A699C342C794CCABDE103D030DAF663CFF7D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PreparationState_t308D1841187A356B256D8B9067F63E1E79A3FF82_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _preparationState = new PreparationState();
		PreparationState_t308D1841187A356B256D8B9067F63E1E79A3FF82* L_0 = (PreparationState_t308D1841187A356B256D8B9067F63E1E79A3FF82*)il2cpp_codegen_object_new(PreparationState_t308D1841187A356B256D8B9067F63E1E79A3FF82_il2cpp_TypeInfo_var);
		PreparationState__ctor_m608A1377D614E8977477AB6AAB2E1E33E647660B(L_0, NULL);
		__this->____preparationState_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____preparationState_7), (void*)L_0);
		// _launchingState = new LaunchingState();
		LaunchingState_t7AA2A699C342C794CCABDE103D030DAF663CFF7D* L_1 = (LaunchingState_t7AA2A699C342C794CCABDE103D030DAF663CFF7D*)il2cpp_codegen_object_new(LaunchingState_t7AA2A699C342C794CCABDE103D030DAF663CFF7D_il2cpp_TypeInfo_var);
		LaunchingState__ctor_m493DA61F6094B32B3988BED81A553FC81FAD2EC2(L_1, NULL);
		__this->____launchingState_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____launchingState_8), (void*)L_1);
		// _destroyState = new DestroyState();
		DestroyState_t604C1F481A0FC76542E54D449FBBE63DDBEBCC4B* L_2 = (DestroyState_t604C1F481A0FC76542E54D449FBBE63DDBEBCC4B*)il2cpp_codegen_object_new(DestroyState_t604C1F481A0FC76542E54D449FBBE63DDBEBCC4B_il2cpp_TypeInfo_var);
		DestroyState__ctor_m97A1ADECB8843A0CB081FE68A9987F4C6A41F109(L_2, NULL);
		__this->____destroyState_9 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____destroyState_9), (void*)L_2);
		// _finishState = new FinishState();
		FinishState_t4564B3253E31DEEA3C919DF87A20BBDDB888198D* L_3 = (FinishState_t4564B3253E31DEEA3C919DF87A20BBDDB888198D*)il2cpp_codegen_object_new(FinishState_t4564B3253E31DEEA3C919DF87A20BBDDB888198D_il2cpp_TypeInfo_var);
		FinishState__ctor_mBF6509A367361D24AFC41C8123053D355335D2CA(L_3, NULL);
		__this->____finishState_10 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____finishState_10), (void*)L_3);
		// _currentState = _preparationState;
		PreparationState_t308D1841187A356B256D8B9067F63E1E79A3FF82* L_4 = __this->____preparationState_7;
		__this->____currentState_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____currentState_6), (void*)L_4);
		// _currentState.EnterState(_rocket,_store);
		RuntimeObject* L_5 = __this->____currentState_6;
		Rocket_t46CF4BC5917C91D995808226A9F11EA125C89AFB* L_6 = __this->____rocket_4;
		Store_t883F7E4E1E6CD105C7227F062ECCF41D86B511ED* L_7 = __this->____store_5;
		InterfaceActionInvoker2< Rocket_t46CF4BC5917C91D995808226A9F11EA125C89AFB*, Store_t883F7E4E1E6CD105C7227F062ECCF41D86B511ED* >::Invoke(0 /* System.Void IState::EnterState(Rocket,Store) */, IState_tCEB6CB011AADE266AD08F5538B1A1593D7E29CA0_il2cpp_TypeInfo_var, L_5, L_6, L_7);
		// }
		return;
	}
}
// System.Void StateMachine::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateMachine_OnDestroy_m00341DC5763BA7DA92C7289C2550630D77C35649 (StateMachine_tAF6DB96F038DEE14284C0C0AE342050A544B20EB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StateMachine_destroyRocket_m785080EE97F622972010CBC88290446043A4B85F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StateMachine_levelComplete_mEDC60B375E9B85AAD68249F864E3E5ABB5777FAE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StateMachine_tryLaunch_m373016EDD5649514EB2634EB65A6708828C01EF2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Events.LaunchRocket -= tryLaunch;
		SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1* L_0 = ((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___LaunchRocket_27;
		SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1* L_1 = (SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1*)il2cpp_codegen_object_new(SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1_il2cpp_TypeInfo_var);
		SimpleDelegate__ctor_m52198E5C89703FE51B58861C8D85FBC3885F4082(L_1, __this, (intptr_t)((void*)StateMachine_tryLaunch_m373016EDD5649514EB2634EB65A6708828C01EF2_RuntimeMethod_var), NULL);
		Delegate_t* L_2;
		L_2 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_0, L_1, NULL);
		((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___LaunchRocket_27 = ((SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1*)CastclassSealed((RuntimeObject*)L_2, SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___LaunchRocket_27), (void*)((SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1*)CastclassSealed((RuntimeObject*)L_2, SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1_il2cpp_TypeInfo_var)));
		// Events.DestroyRocket -= destroyRocket;
		SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1* L_3 = ((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___DestroyRocket_29;
		SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1* L_4 = (SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1*)il2cpp_codegen_object_new(SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1_il2cpp_TypeInfo_var);
		SimpleDelegate__ctor_m52198E5C89703FE51B58861C8D85FBC3885F4082(L_4, __this, (intptr_t)((void*)StateMachine_destroyRocket_m785080EE97F622972010CBC88290446043A4B85F_RuntimeMethod_var), NULL);
		Delegate_t* L_5;
		L_5 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_3, L_4, NULL);
		((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___DestroyRocket_29 = ((SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1*)CastclassSealed((RuntimeObject*)L_5, SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___DestroyRocket_29), (void*)((SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1*)CastclassSealed((RuntimeObject*)L_5, SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1_il2cpp_TypeInfo_var)));
		// Events.LevelComplete -= levelComplete;
		SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1* L_6 = ((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___LevelComplete_30;
		SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1* L_7 = (SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1*)il2cpp_codegen_object_new(SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1_il2cpp_TypeInfo_var);
		SimpleDelegate__ctor_m52198E5C89703FE51B58861C8D85FBC3885F4082(L_7, __this, (intptr_t)((void*)StateMachine_levelComplete_mEDC60B375E9B85AAD68249F864E3E5ABB5777FAE_RuntimeMethod_var), NULL);
		Delegate_t* L_8;
		L_8 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_6, L_7, NULL);
		((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___LevelComplete_30 = ((SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1*)CastclassSealed((RuntimeObject*)L_8, SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___LevelComplete_30), (void*)((SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1*)CastclassSealed((RuntimeObject*)L_8, SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1_il2cpp_TypeInfo_var)));
		// }
		return;
	}
}
// System.Void StateMachine::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateMachine_FixedUpdate_mD7BE2E20514A6B7C31C717114DDB03AEFB94A73C (StateMachine_tAF6DB96F038DEE14284C0C0AE342050A544B20EB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IState_tCEB6CB011AADE266AD08F5538B1A1593D7E29CA0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _currentState.LogicState(_rocket,_store);
		RuntimeObject* L_0 = __this->____currentState_6;
		Rocket_t46CF4BC5917C91D995808226A9F11EA125C89AFB* L_1 = __this->____rocket_4;
		Store_t883F7E4E1E6CD105C7227F062ECCF41D86B511ED* L_2 = __this->____store_5;
		InterfaceActionInvoker2< Rocket_t46CF4BC5917C91D995808226A9F11EA125C89AFB*, Store_t883F7E4E1E6CD105C7227F062ECCF41D86B511ED* >::Invoke(1 /* System.Void IState::LogicState(Rocket,Store) */, IState_tCEB6CB011AADE266AD08F5538B1A1593D7E29CA0_il2cpp_TypeInfo_var, L_0, L_1, L_2);
		// }
		return;
	}
}
// System.Void StateMachine::changeState(IState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateMachine_changeState_m7D68674326F76AC77067C0D0222D82027AD20784 (StateMachine_tAF6DB96F038DEE14284C0C0AE342050A544B20EB* __this, RuntimeObject* ___newState0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IState_tCEB6CB011AADE266AD08F5538B1A1593D7E29CA0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _currentState.ExitState(_rocket,_store);
		RuntimeObject* L_0 = __this->____currentState_6;
		Rocket_t46CF4BC5917C91D995808226A9F11EA125C89AFB* L_1 = __this->____rocket_4;
		Store_t883F7E4E1E6CD105C7227F062ECCF41D86B511ED* L_2 = __this->____store_5;
		InterfaceActionInvoker2< Rocket_t46CF4BC5917C91D995808226A9F11EA125C89AFB*, Store_t883F7E4E1E6CD105C7227F062ECCF41D86B511ED* >::Invoke(2 /* System.Void IState::ExitState(Rocket,Store) */, IState_tCEB6CB011AADE266AD08F5538B1A1593D7E29CA0_il2cpp_TypeInfo_var, L_0, L_1, L_2);
		// newState.EnterState(_rocket,_store);
		RuntimeObject* L_3 = ___newState0;
		Rocket_t46CF4BC5917C91D995808226A9F11EA125C89AFB* L_4 = __this->____rocket_4;
		Store_t883F7E4E1E6CD105C7227F062ECCF41D86B511ED* L_5 = __this->____store_5;
		InterfaceActionInvoker2< Rocket_t46CF4BC5917C91D995808226A9F11EA125C89AFB*, Store_t883F7E4E1E6CD105C7227F062ECCF41D86B511ED* >::Invoke(0 /* System.Void IState::EnterState(Rocket,Store) */, IState_tCEB6CB011AADE266AD08F5538B1A1593D7E29CA0_il2cpp_TypeInfo_var, L_3, L_4, L_5);
		// _currentState = newState;
		RuntimeObject* L_6 = ___newState0;
		__this->____currentState_6 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____currentState_6), (void*)L_6);
		// }
		return;
	}
}
// System.Void StateMachine::tryLaunch()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateMachine_tryLaunch_m373016EDD5649514EB2634EB65A6708828C01EF2 (StateMachine_tAF6DB96F038DEE14284C0C0AE342050A544B20EB* __this, const RuntimeMethod* method) 
{
	{
		// if(_rocket.RockedIsReady() == true){
		Rocket_t46CF4BC5917C91D995808226A9F11EA125C89AFB* L_0 = __this->____rocket_4;
		bool L_1;
		L_1 = Rocket_RockedIsReady_m4AA35FB621B70899D41BFD3D8E09AACD24E02931(L_0, NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// changeState(_launchingState);
		LaunchingState_t7AA2A699C342C794CCABDE103D030DAF663CFF7D* L_2 = __this->____launchingState_8;
		StateMachine_changeState_m7D68674326F76AC77067C0D0222D82027AD20784(__this, L_2, NULL);
	}

IL_0019:
	{
		// }
		return;
	}
}
// System.Void StateMachine::destroyRocket()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateMachine_destroyRocket_m785080EE97F622972010CBC88290446043A4B85F (StateMachine_tAF6DB96F038DEE14284C0C0AE342050A544B20EB* __this, const RuntimeMethod* method) 
{
	{
		// private void destroyRocket() => changeState(_destroyState);
		DestroyState_t604C1F481A0FC76542E54D449FBBE63DDBEBCC4B* L_0 = __this->____destroyState_9;
		StateMachine_changeState_m7D68674326F76AC77067C0D0222D82027AD20784(__this, L_0, NULL);
		return;
	}
}
// System.Void StateMachine::levelComplete()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateMachine_levelComplete_mEDC60B375E9B85AAD68249F864E3E5ABB5777FAE (StateMachine_tAF6DB96F038DEE14284C0C0AE342050A544B20EB* __this, const RuntimeMethod* method) 
{
	{
		// private void levelComplete() => changeState(_finishState);
		FinishState_t4564B3253E31DEEA3C919DF87A20BBDDB888198D* L_0 = __this->____finishState_10;
		StateMachine_changeState_m7D68674326F76AC77067C0D0222D82027AD20784(__this, L_0, NULL);
		return;
	}
}
// System.Void StateMachine::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateMachine__ctor_mD02F107E96CE9A55AB0563A3254479A997CBF341 (StateMachine_tAF6DB96F038DEE14284C0C0AE342050A544B20EB* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void DestroyState::EnterState(Rocket,Store)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DestroyState_EnterState_mB8C5C8A68E14EC6DE3C78FF94D7DA698281AD99A (DestroyState_t604C1F481A0FC76542E54D449FBBE63DDBEBCC4B* __this, Rocket_t46CF4BC5917C91D995808226A9F11EA125C89AFB* ___rocket0, Store_t883F7E4E1E6CD105C7227F062ECCF41D86B511ED* ___store1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral323E13B62A8E11412F118D31AE91D101CEC5491F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("Destroy enter");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteral323E13B62A8E11412F118D31AE91D101CEC5491F, NULL);
		// rocket.DestroyRocket();
		Rocket_t46CF4BC5917C91D995808226A9F11EA125C89AFB* L_0 = ___rocket0;
		Rocket_DestroyRocket_m322F640C0568BFFFCA2FC90B611F0E5CDC2C595F(L_0, NULL);
		// }
		return;
	}
}
// System.Void DestroyState::LogicState(Rocket,Store)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DestroyState_LogicState_m664C6BCDECCD67762DA2A3B808851927C5EB3EB9 (DestroyState_t604C1F481A0FC76542E54D449FBBE63DDBEBCC4B* __this, Rocket_t46CF4BC5917C91D995808226A9F11EA125C89AFB* ___rocket0, Store_t883F7E4E1E6CD105C7227F062ECCF41D86B511ED* ___store1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF0E2D83FC1238E093ECBFA37A50775CAE5B5A51);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("Destroy looping");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteralBF0E2D83FC1238E093ECBFA37A50775CAE5B5A51, NULL);
		// }
		return;
	}
}
// System.Void DestroyState::ExitState(Rocket,Store)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DestroyState_ExitState_mE357641C3397C900D53939FDA6FB99AF207E02E5 (DestroyState_t604C1F481A0FC76542E54D449FBBE63DDBEBCC4B* __this, Rocket_t46CF4BC5917C91D995808226A9F11EA125C89AFB* ___rocket0, Store_t883F7E4E1E6CD105C7227F062ECCF41D86B511ED* ___store1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF67C3EA90FCC8C1942290E54C4613FE4B105E4CA);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("Destory exit");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteralF67C3EA90FCC8C1942290E54C4613FE4B105E4CA, NULL);
		// }
		return;
	}
}
// System.Void DestroyState::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DestroyState__ctor_m97A1ADECB8843A0CB081FE68A9987F4C6A41F109 (DestroyState_t604C1F481A0FC76542E54D449FBBE63DDBEBCC4B* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void FinishState::EnterState(Rocket,Store)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FinishState_EnterState_m46292E01C2ED60DCCDBF3A8C31C8BF7D26198F73 (FinishState_t4564B3253E31DEEA3C919DF87A20BBDDB888198D* __this, Rocket_t46CF4BC5917C91D995808226A9F11EA125C89AFB* ___rocket0, Store_t883F7E4E1E6CD105C7227F062ECCF41D86B511ED* ___store1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LevelSaverLoader_t9A00927063FF8A8DEFDFDDA5D0BA47688D4D2BAF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Level_t1CED3B73CCB94716BF67A03B39D9DE9A991FD5A1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8F1928D5DA25C89A4CD46EC3DA2E02BA44FDBD4B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("Finish enter");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteral8F1928D5DA25C89A4CD46EC3DA2E02BA44FDBD4B, NULL);
		// LevelSaverLoader.SaveBudget(LevelSaverLoader.LoadBudget() + (int)Level.LevelBudget);
		il2cpp_codegen_runtime_class_init_inline(LevelSaverLoader_t9A00927063FF8A8DEFDFDDA5D0BA47688D4D2BAF_il2cpp_TypeInfo_var);
		int32_t L_0;
		L_0 = LevelSaverLoader_LoadBudget_m6A1C69213A55E0EEFC9426FB0DE5ADB64E888432(NULL);
		float L_1 = ((Level_t1CED3B73CCB94716BF67A03B39D9DE9A991FD5A1_StaticFields*)il2cpp_codegen_static_fields_for(Level_t1CED3B73CCB94716BF67A03B39D9DE9A991FD5A1_il2cpp_TypeInfo_var))->___LevelBudget_9;
		LevelSaverLoader_SaveBudget_m8DD52955218827D1615ECA889824161100FC3DE1(((int32_t)il2cpp_codegen_add(L_0, il2cpp_codegen_cast_double_to_int<int32_t>(L_1))), NULL);
		// }
		return;
	}
}
// System.Void FinishState::LogicState(Rocket,Store)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FinishState_LogicState_mBE76B3A18861027DB5DBACE8A727900C88C823C9 (FinishState_t4564B3253E31DEEA3C919DF87A20BBDDB888198D* __this, Rocket_t46CF4BC5917C91D995808226A9F11EA125C89AFB* ___rocket0, Store_t883F7E4E1E6CD105C7227F062ECCF41D86B511ED* ___store1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD85D8B9A49ED9C7531192DE34CB63E8CB53A05EA);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("Finish looping");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteralD85D8B9A49ED9C7531192DE34CB63E8CB53A05EA, NULL);
		// }
		return;
	}
}
// System.Void FinishState::ExitState(Rocket,Store)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FinishState_ExitState_mE98E0CE9F0AEC2C784D707283D3C4BE8B13A50F6 (FinishState_t4564B3253E31DEEA3C919DF87A20BBDDB888198D* __this, Rocket_t46CF4BC5917C91D995808226A9F11EA125C89AFB* ___rocket0, Store_t883F7E4E1E6CD105C7227F062ECCF41D86B511ED* ___store1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBE4680F295084BED47969E2B4FC8E3997061587D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("Finish exit");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteralBE4680F295084BED47969E2B4FC8E3997061587D, NULL);
		// }
		return;
	}
}
// System.Void FinishState::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FinishState__ctor_mBF6509A367361D24AFC41C8123053D355335D2CA (FinishState_t4564B3253E31DEEA3C919DF87A20BBDDB888198D* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void LaunchingState::EnterState(Rocket,Store)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LaunchingState_EnterState_m90F506F0EF8CDC6942596D2BFBDE14CD34F4504F (LaunchingState_t7AA2A699C342C794CCABDE103D030DAF663CFF7D* __this, Rocket_t46CF4BC5917C91D995808226A9F11EA125C89AFB* ___rocket0, Store_t883F7E4E1E6CD105C7227F062ECCF41D86B511ED* ___store1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB305C2946D16F6BB63A1E49A2DDD862798EF81AB);
		s_Il2CppMethodInitialized = true;
	}
	SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1* G_B2_0 = NULL;
	SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1* G_B1_0 = NULL;
	SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1* G_B5_0 = NULL;
	SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1* G_B4_0 = NULL;
	{
		// Events.ShowLaunchUI?.Invoke();
		SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1* L_0 = ((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___ShowLaunchUI_28;
		SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		goto IL_0010;
	}

IL_000b:
	{
		SimpleDelegate_Invoke_mE39CE43C6B97CE701F70DE6A5DCDAB2EAAA05C94_inline(G_B2_0, NULL);
	}

IL_0010:
	{
		// Events.HideStoreUI?.Invoke();
		SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1* L_2 = ((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___HideStoreUI_26;
		SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1* L_3 = L_2;
		G_B4_0 = L_3;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_001b;
		}
	}
	{
		goto IL_0020;
	}

IL_001b:
	{
		SimpleDelegate_Invoke_mE39CE43C6B97CE701F70DE6A5DCDAB2EAAA05C94_inline(G_B5_0, NULL);
	}

IL_0020:
	{
		// Debug.Log("Launch enter");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteralB305C2946D16F6BB63A1E49A2DDD862798EF81AB, NULL);
		// }
		return;
	}
}
// System.Void LaunchingState::LogicState(Rocket,Store)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LaunchingState_LogicState_m5DD5509749AD4F066A3B5E39D190868403726172 (LaunchingState_t7AA2A699C342C794CCABDE103D030DAF663CFF7D* __this, Rocket_t46CF4BC5917C91D995808226A9F11EA125C89AFB* ___rocket0, Store_t883F7E4E1E6CD105C7227F062ECCF41D86B511ED* ___store1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral870FD4D50F09EC758F01ED42459CE4987EE22655);
		s_Il2CppMethodInitialized = true;
	}
	{
		// rocket.LaunchRocket();
		Rocket_t46CF4BC5917C91D995808226A9F11EA125C89AFB* L_0 = ___rocket0;
		Rocket_LaunchRocket_mB61F5182C372BAB2A132822961ECB87CBD65056A(L_0, NULL);
		// Debug.Log("Launch looping");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteral870FD4D50F09EC758F01ED42459CE4987EE22655, NULL);
		// }
		return;
	}
}
// System.Void LaunchingState::ExitState(Rocket,Store)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LaunchingState_ExitState_mEBA59C4C5ED3575DB3C1402F74F24605E5DBBFA5 (LaunchingState_t7AA2A699C342C794CCABDE103D030DAF663CFF7D* __this, Rocket_t46CF4BC5917C91D995808226A9F11EA125C89AFB* ___rocket0, Store_t883F7E4E1E6CD105C7227F062ECCF41D86B511ED* ___store1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral54AACD55CE45DD72A0F6224E34DECDE3F823EC38);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("Launch exit");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteral54AACD55CE45DD72A0F6224E34DECDE3F823EC38, NULL);
		// }
		return;
	}
}
// System.Void LaunchingState::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LaunchingState__ctor_m493DA61F6094B32B3988BED81A553FC81FAD2EC2 (LaunchingState_t7AA2A699C342C794CCABDE103D030DAF663CFF7D* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void PreparationState::EnterState(Rocket,Store)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PreparationState_EnterState_mE0DE90F1629076D26E930A9CA33A00B059F57396 (PreparationState_t308D1841187A356B256D8B9067F63E1E79A3FF82* __this, Rocket_t46CF4BC5917C91D995808226A9F11EA125C89AFB* ___rocket0, Store_t883F7E4E1E6CD105C7227F062ECCF41D86B511ED* ___store1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA667198969A6CE769D867D3EB36BD8261A2BE870);
		s_Il2CppMethodInitialized = true;
	}
	{
		// rocket.SubscribeRocketToPreparationEvents();
		Rocket_t46CF4BC5917C91D995808226A9F11EA125C89AFB* L_0 = ___rocket0;
		Rocket_SubscribeRocketToPreparationEvents_m3344B4A9421C4A6269477AF80CCE377A9AE28B28(L_0, NULL);
		// store.SubscribeStoreToPreparationEvents();
		Store_t883F7E4E1E6CD105C7227F062ECCF41D86B511ED* L_1 = ___store1;
		Store_SubscribeStoreToPreparationEvents_m86A8482E61AC62800F38CA8893709BAD7A7EF769(L_1, NULL);
		// Debug.Log("Preparation enter");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteralA667198969A6CE769D867D3EB36BD8261A2BE870, NULL);
		// }
		return;
	}
}
// System.Void PreparationState::LogicState(Rocket,Store)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PreparationState_LogicState_m55D9A221E5D5BEBA1A969C3EE56AA220DA28741D (PreparationState_t308D1841187A356B256D8B9067F63E1E79A3FF82* __this, Rocket_t46CF4BC5917C91D995808226A9F11EA125C89AFB* ___rocket0, Store_t883F7E4E1E6CD105C7227F062ECCF41D86B511ED* ___store1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAFD25614266ED6007957EF75A44ECE2F6DA1F4A9);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("Preparation looping");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteralAFD25614266ED6007957EF75A44ECE2F6DA1F4A9, NULL);
		// }
		return;
	}
}
// System.Void PreparationState::ExitState(Rocket,Store)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PreparationState_ExitState_mA2A69A4C4CB95290519143245DC6992F17CA7DBC (PreparationState_t308D1841187A356B256D8B9067F63E1E79A3FF82* __this, Rocket_t46CF4BC5917C91D995808226A9F11EA125C89AFB* ___rocket0, Store_t883F7E4E1E6CD105C7227F062ECCF41D86B511ED* ___store1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral869A443090ACD17B689B5152A13DADBF5445451D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// rocket.UnSubscribeRocketToPreparationEvents();
		Rocket_t46CF4BC5917C91D995808226A9F11EA125C89AFB* L_0 = ___rocket0;
		Rocket_UnSubscribeRocketToPreparationEvents_m84F3A1A4DB07D41AA5DFBDD88F7D2933DF7A9B19(L_0, NULL);
		// store.UnSubscribeStoreToPreparationEvents();
		Store_t883F7E4E1E6CD105C7227F062ECCF41D86B511ED* L_1 = ___store1;
		Store_UnSubscribeStoreToPreparationEvents_m5FF2683F8BA0AB68D4DBB7C51FB45EFE557A8E9B(L_1, NULL);
		// store.hideAllStoreUI();
		Store_t883F7E4E1E6CD105C7227F062ECCF41D86B511ED* L_2 = ___store1;
		Store_hideAllStoreUI_m1C40E2EBD8AE396864AEA1A14760819096753131(L_2, NULL);
		// Debug.Log("Preparation exit");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteral869A443090ACD17B689B5152A13DADBF5445451D, NULL);
		// }
		return;
	}
}
// System.Void PreparationState::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PreparationState__ctor_m608A1377D614E8977477AB6AAB2E1E33E647660B (PreparationState_t308D1841187A356B256D8B9067F63E1E79A3FF82* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void StoreCamera::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StoreCamera_Awake_m5486C3C0F0DEB07B60100CB03BA2A93973909B58 (StoreCamera_tA7B5465998E2E5AEDA6458ECF3001D4FB915B2A7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StoreCamera_lookAtDeflector_mBBAAD7B727D8D29EF6E06687C8DDAF596016AC5E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StoreCamera_lookAtEngine_m2C8B8D260E4E5592ACD499B269BF0E4B1189CCC6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StoreCamera_lookAtPlumage_mE51C55B8BF2A05763B1FBF6BD9B3A4513FBCCDEE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StoreCamera_lookAtRocket_m5E948A715F125B9F202BAAB9CFA86F6C6C0CEE2C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StoreCamera_lookAtTank_m47A1F165C0701CF5F4BF13DC90183353E46BEE61_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Events.SelectDeflectorStore += lookAtDeflector;
		SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1* L_0 = ((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___SelectDeflectorStore_22;
		SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1* L_1 = (SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1*)il2cpp_codegen_object_new(SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1_il2cpp_TypeInfo_var);
		SimpleDelegate__ctor_m52198E5C89703FE51B58861C8D85FBC3885F4082(L_1, __this, (intptr_t)((void*)StoreCamera_lookAtDeflector_mBBAAD7B727D8D29EF6E06687C8DDAF596016AC5E_RuntimeMethod_var), NULL);
		Delegate_t* L_2;
		L_2 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_0, L_1, NULL);
		((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___SelectDeflectorStore_22 = ((SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1*)CastclassSealed((RuntimeObject*)L_2, SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___SelectDeflectorStore_22), (void*)((SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1*)CastclassSealed((RuntimeObject*)L_2, SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1_il2cpp_TypeInfo_var)));
		// Events.SelectTankStore += lookAtTank;
		SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1* L_3 = ((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___SelectTankStore_23;
		SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1* L_4 = (SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1*)il2cpp_codegen_object_new(SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1_il2cpp_TypeInfo_var);
		SimpleDelegate__ctor_m52198E5C89703FE51B58861C8D85FBC3885F4082(L_4, __this, (intptr_t)((void*)StoreCamera_lookAtTank_m47A1F165C0701CF5F4BF13DC90183353E46BEE61_RuntimeMethod_var), NULL);
		Delegate_t* L_5;
		L_5 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_3, L_4, NULL);
		((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___SelectTankStore_23 = ((SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1*)CastclassSealed((RuntimeObject*)L_5, SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___SelectTankStore_23), (void*)((SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1*)CastclassSealed((RuntimeObject*)L_5, SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1_il2cpp_TypeInfo_var)));
		// Events.SelectPlumageStore += lookAtPlumage;
		SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1* L_6 = ((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___SelectPlumageStore_24;
		SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1* L_7 = (SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1*)il2cpp_codegen_object_new(SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1_il2cpp_TypeInfo_var);
		SimpleDelegate__ctor_m52198E5C89703FE51B58861C8D85FBC3885F4082(L_7, __this, (intptr_t)((void*)StoreCamera_lookAtPlumage_mE51C55B8BF2A05763B1FBF6BD9B3A4513FBCCDEE_RuntimeMethod_var), NULL);
		Delegate_t* L_8;
		L_8 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_6, L_7, NULL);
		((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___SelectPlumageStore_24 = ((SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1*)CastclassSealed((RuntimeObject*)L_8, SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___SelectPlumageStore_24), (void*)((SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1*)CastclassSealed((RuntimeObject*)L_8, SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1_il2cpp_TypeInfo_var)));
		// Events.SelectEngineStore += lookAtEngine;
		SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1* L_9 = ((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___SelectEngineStore_21;
		SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1* L_10 = (SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1*)il2cpp_codegen_object_new(SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1_il2cpp_TypeInfo_var);
		SimpleDelegate__ctor_m52198E5C89703FE51B58861C8D85FBC3885F4082(L_10, __this, (intptr_t)((void*)StoreCamera_lookAtEngine_m2C8B8D260E4E5592ACD499B269BF0E4B1189CCC6_RuntimeMethod_var), NULL);
		Delegate_t* L_11;
		L_11 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_9, L_10, NULL);
		((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___SelectEngineStore_21 = ((SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1*)CastclassSealed((RuntimeObject*)L_11, SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___SelectEngineStore_21), (void*)((SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1*)CastclassSealed((RuntimeObject*)L_11, SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1_il2cpp_TypeInfo_var)));
		// Events.HideStore += lookAtRocket;
		SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1* L_12 = ((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___HideStore_25;
		SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1* L_13 = (SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1*)il2cpp_codegen_object_new(SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1_il2cpp_TypeInfo_var);
		SimpleDelegate__ctor_m52198E5C89703FE51B58861C8D85FBC3885F4082(L_13, __this, (intptr_t)((void*)StoreCamera_lookAtRocket_m5E948A715F125B9F202BAAB9CFA86F6C6C0CEE2C_RuntimeMethod_var), NULL);
		Delegate_t* L_14;
		L_14 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_12, L_13, NULL);
		((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___HideStore_25 = ((SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1*)CastclassSealed((RuntimeObject*)L_14, SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___HideStore_25), (void*)((SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1*)CastclassSealed((RuntimeObject*)L_14, SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1_il2cpp_TypeInfo_var)));
		// }
		return;
	}
}
// System.Void StoreCamera::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StoreCamera_OnDestroy_m0D787E290A018E7277DAC35AEF6B67547167BA5B (StoreCamera_tA7B5465998E2E5AEDA6458ECF3001D4FB915B2A7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StoreCamera_lookAtDeflector_mBBAAD7B727D8D29EF6E06687C8DDAF596016AC5E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StoreCamera_lookAtEngine_m2C8B8D260E4E5592ACD499B269BF0E4B1189CCC6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StoreCamera_lookAtPlumage_mE51C55B8BF2A05763B1FBF6BD9B3A4513FBCCDEE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StoreCamera_lookAtRocket_m5E948A715F125B9F202BAAB9CFA86F6C6C0CEE2C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StoreCamera_lookAtTank_m47A1F165C0701CF5F4BF13DC90183353E46BEE61_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Events.SelectDeflectorStore -= lookAtDeflector;
		SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1* L_0 = ((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___SelectDeflectorStore_22;
		SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1* L_1 = (SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1*)il2cpp_codegen_object_new(SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1_il2cpp_TypeInfo_var);
		SimpleDelegate__ctor_m52198E5C89703FE51B58861C8D85FBC3885F4082(L_1, __this, (intptr_t)((void*)StoreCamera_lookAtDeflector_mBBAAD7B727D8D29EF6E06687C8DDAF596016AC5E_RuntimeMethod_var), NULL);
		Delegate_t* L_2;
		L_2 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_0, L_1, NULL);
		((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___SelectDeflectorStore_22 = ((SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1*)CastclassSealed((RuntimeObject*)L_2, SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___SelectDeflectorStore_22), (void*)((SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1*)CastclassSealed((RuntimeObject*)L_2, SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1_il2cpp_TypeInfo_var)));
		// Events.SelectTankStore -= lookAtTank;
		SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1* L_3 = ((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___SelectTankStore_23;
		SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1* L_4 = (SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1*)il2cpp_codegen_object_new(SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1_il2cpp_TypeInfo_var);
		SimpleDelegate__ctor_m52198E5C89703FE51B58861C8D85FBC3885F4082(L_4, __this, (intptr_t)((void*)StoreCamera_lookAtTank_m47A1F165C0701CF5F4BF13DC90183353E46BEE61_RuntimeMethod_var), NULL);
		Delegate_t* L_5;
		L_5 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_3, L_4, NULL);
		((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___SelectTankStore_23 = ((SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1*)CastclassSealed((RuntimeObject*)L_5, SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___SelectTankStore_23), (void*)((SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1*)CastclassSealed((RuntimeObject*)L_5, SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1_il2cpp_TypeInfo_var)));
		// Events.SelectPlumageStore -= lookAtPlumage;
		SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1* L_6 = ((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___SelectPlumageStore_24;
		SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1* L_7 = (SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1*)il2cpp_codegen_object_new(SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1_il2cpp_TypeInfo_var);
		SimpleDelegate__ctor_m52198E5C89703FE51B58861C8D85FBC3885F4082(L_7, __this, (intptr_t)((void*)StoreCamera_lookAtPlumage_mE51C55B8BF2A05763B1FBF6BD9B3A4513FBCCDEE_RuntimeMethod_var), NULL);
		Delegate_t* L_8;
		L_8 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_6, L_7, NULL);
		((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___SelectPlumageStore_24 = ((SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1*)CastclassSealed((RuntimeObject*)L_8, SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___SelectPlumageStore_24), (void*)((SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1*)CastclassSealed((RuntimeObject*)L_8, SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1_il2cpp_TypeInfo_var)));
		// Events.SelectEngineStore -= lookAtEngine;
		SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1* L_9 = ((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___SelectEngineStore_21;
		SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1* L_10 = (SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1*)il2cpp_codegen_object_new(SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1_il2cpp_TypeInfo_var);
		SimpleDelegate__ctor_m52198E5C89703FE51B58861C8D85FBC3885F4082(L_10, __this, (intptr_t)((void*)StoreCamera_lookAtEngine_m2C8B8D260E4E5592ACD499B269BF0E4B1189CCC6_RuntimeMethod_var), NULL);
		Delegate_t* L_11;
		L_11 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_9, L_10, NULL);
		((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___SelectEngineStore_21 = ((SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1*)CastclassSealed((RuntimeObject*)L_11, SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___SelectEngineStore_21), (void*)((SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1*)CastclassSealed((RuntimeObject*)L_11, SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1_il2cpp_TypeInfo_var)));
		// Events.HideStore -= lookAtRocket;
		SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1* L_12 = ((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___HideStore_25;
		SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1* L_13 = (SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1*)il2cpp_codegen_object_new(SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1_il2cpp_TypeInfo_var);
		SimpleDelegate__ctor_m52198E5C89703FE51B58861C8D85FBC3885F4082(L_13, __this, (intptr_t)((void*)StoreCamera_lookAtRocket_m5E948A715F125B9F202BAAB9CFA86F6C6C0CEE2C_RuntimeMethod_var), NULL);
		Delegate_t* L_14;
		L_14 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_12, L_13, NULL);
		((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___HideStore_25 = ((SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1*)CastclassSealed((RuntimeObject*)L_14, SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___HideStore_25), (void*)((SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1*)CastclassSealed((RuntimeObject*)L_14, SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1_il2cpp_TypeInfo_var)));
		// }
		return;
	}
}
// System.Void StoreCamera::lookAtDeflector()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StoreCamera_lookAtDeflector_mBBAAD7B727D8D29EF6E06687C8DDAF596016AC5E (StoreCamera_tA7B5465998E2E5AEDA6458ECF3001D4FB915B2A7* __this, const RuntimeMethod* method) 
{
	{
		// private void lookAtDeflector() => activateCamera(_deflectorCamera);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->____deflectorCamera_5;
		StoreCamera_activateCamera_m2C77A72D2104EDAAF2ABCE8AD374A27A70617538(__this, L_0, NULL);
		return;
	}
}
// System.Void StoreCamera::lookAtTank()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StoreCamera_lookAtTank_m47A1F165C0701CF5F4BF13DC90183353E46BEE61 (StoreCamera_tA7B5465998E2E5AEDA6458ECF3001D4FB915B2A7* __this, const RuntimeMethod* method) 
{
	{
		// private void lookAtTank()  => activateCamera(_tankCamera);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->____tankCamera_6;
		StoreCamera_activateCamera_m2C77A72D2104EDAAF2ABCE8AD374A27A70617538(__this, L_0, NULL);
		return;
	}
}
// System.Void StoreCamera::lookAtPlumage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StoreCamera_lookAtPlumage_mE51C55B8BF2A05763B1FBF6BD9B3A4513FBCCDEE (StoreCamera_tA7B5465998E2E5AEDA6458ECF3001D4FB915B2A7* __this, const RuntimeMethod* method) 
{
	{
		// private void lookAtPlumage()  => activateCamera(_plumageCamera);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->____plumageCamera_7;
		StoreCamera_activateCamera_m2C77A72D2104EDAAF2ABCE8AD374A27A70617538(__this, L_0, NULL);
		return;
	}
}
// System.Void StoreCamera::lookAtEngine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StoreCamera_lookAtEngine_m2C8B8D260E4E5592ACD499B269BF0E4B1189CCC6 (StoreCamera_tA7B5465998E2E5AEDA6458ECF3001D4FB915B2A7* __this, const RuntimeMethod* method) 
{
	{
		// private void lookAtEngine()  => activateCamera(_engineCamera);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->____engineCamera_8;
		StoreCamera_activateCamera_m2C77A72D2104EDAAF2ABCE8AD374A27A70617538(__this, L_0, NULL);
		return;
	}
}
// System.Void StoreCamera::lookAtRocket()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StoreCamera_lookAtRocket_m5E948A715F125B9F202BAAB9CFA86F6C6C0CEE2C (StoreCamera_tA7B5465998E2E5AEDA6458ECF3001D4FB915B2A7* __this, const RuntimeMethod* method) 
{
	{
		// _activeCamera.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->____activeCamera_9;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// _mainCamera.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->____mainCamera_4;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void StoreCamera::activateCamera(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StoreCamera_activateCamera_m2C77A72D2104EDAAF2ABCE8AD374A27A70617538 (StoreCamera_tA7B5465998E2E5AEDA6458ECF3001D4FB915B2A7* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___activeCamera0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(_activeCamera != null){
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->____activeCamera_9;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		// _activeCamera.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->____activeCamera_9;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_2, (bool)0, NULL);
	}

IL_001a:
	{
		// _activeCamera = activeCamera;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = ___activeCamera0;
		__this->____activeCamera_9 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____activeCamera_9), (void*)L_3);
		// activeCamera.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = ___activeCamera0;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_4, (bool)1, NULL);
		// _mainCamera.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = __this->____mainCamera_4;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_5, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void StoreCamera::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StoreCamera__ctor_mDBAC372DEE292E19E7F96CE6F8B438BF890CB94F (StoreCamera_tA7B5465998E2E5AEDA6458ECF3001D4FB915B2A7* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void LevelCell::InitLevelCell(LevelData,System.Boolean,MissionInformationWindow)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelCell_InitLevelCell_mAF183DDA9340D970FB2E82B9ED58282E4D3C06A8 (LevelCell_tADC4647C88211220C302069A345C4675278773CB* __this, LevelData_tE6EAE053C277D3E4ED073363F0BF24BDBADFC4D5* ___levelData0, bool ___isActive1, MissionInformationWindow_tCAD9D85E87544887EB8EE5A089D3E2C87556D0AF* ___infoWindow2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LevelCell_loadLevel_m35AB54D8F2C127C4F6E3645A260557A9512D433C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&cellDelegate_t460ACF0FFE0D0FC85DF14E2203498FE748D74EEE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _levelID = levelData.LevelID;
		LevelData_tE6EAE053C277D3E4ED073363F0BF24BDBADFC4D5* L_0 = ___levelData0;
		int32_t L_1 = L_0->___LevelID_4;
		__this->____levelID_9 = L_1;
		// _thisLevel = levelData;
		LevelData_tE6EAE053C277D3E4ED073363F0BF24BDBADFC4D5* L_2 = ___levelData0;
		__this->____thisLevel_10 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____thisLevel_10), (void*)L_2);
		// _missionInformationWindow = infoWindow;
		MissionInformationWindow_tCAD9D85E87544887EB8EE5A089D3E2C87556D0AF* L_3 = ___infoWindow2;
		__this->____missionInformationWindow_8 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____missionInformationWindow_8), (void*)L_3);
		// _cellLevelNumber.text = levelData.LevelID.ToString();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_4 = __this->____cellLevelNumber_5;
		LevelData_tE6EAE053C277D3E4ED073363F0BF24BDBADFC4D5* L_5 = ___levelData0;
		int32_t* L_6 = (&L_5->___LevelID_4);
		String_t* L_7;
		L_7 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_6, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_4, L_7);
		// _cellCodeName.text = levelData.LevelCodeName;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_8 = __this->____cellCodeName_7;
		LevelData_tE6EAE053C277D3E4ED073363F0BF24BDBADFC4D5* L_9 = ___levelData0;
		String_t* L_10 = L_9->___LevelCodeName_9;
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_8, L_10);
		// _cellBudget.text = levelData.Budget.ToString();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_11 = __this->____cellBudget_6;
		LevelData_tE6EAE053C277D3E4ED073363F0BF24BDBADFC4D5* L_12 = ___levelData0;
		float* L_13 = (&L_12->___Budget_6);
		String_t* L_14;
		L_14 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972(L_13, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_11, L_14);
		// if(isActive == true){
		bool L_15 = ___isActive1;
		if (!L_15)
		{
			goto IL_006c;
		}
	}
	{
		// onClick = loadLevel;
		cellDelegate_t460ACF0FFE0D0FC85DF14E2203498FE748D74EEE* L_16 = (cellDelegate_t460ACF0FFE0D0FC85DF14E2203498FE748D74EEE*)il2cpp_codegen_object_new(cellDelegate_t460ACF0FFE0D0FC85DF14E2203498FE748D74EEE_il2cpp_TypeInfo_var);
		cellDelegate__ctor_mF2FE6119AA070C41A67D37A81D003C49699A1EB8(L_16, __this, (intptr_t)((void*)LevelCell_loadLevel_m35AB54D8F2C127C4F6E3645A260557A9512D433C_RuntimeMethod_var), NULL);
		__this->___onClick_4 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___onClick_4), (void*)L_16);
	}

IL_006c:
	{
		// }
		return;
	}
}
// System.Void LevelCell::showMissionInformationWindow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelCell_showMissionInformationWindow_mFBFDAEC88A2FBEA209C42727D618246A4DC39D81 (LevelCell_tADC4647C88211220C302069A345C4675278773CB* __this, const RuntimeMethod* method) 
{
	{
		// _missionInformationWindow.gameObject.SetActive(true);
		MissionInformationWindow_tCAD9D85E87544887EB8EE5A089D3E2C87556D0AF* L_0 = __this->____missionInformationWindow_8;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)1, NULL);
		// _missionInformationWindow.ShowInformation(_thisLevel.LevelCodeName.ToString(), _thisLevel.LevelDescription.ToString(), _thisLevel.Budget);
		MissionInformationWindow_tCAD9D85E87544887EB8EE5A089D3E2C87556D0AF* L_2 = __this->____missionInformationWindow_8;
		LevelData_tE6EAE053C277D3E4ED073363F0BF24BDBADFC4D5* L_3 = __this->____thisLevel_10;
		String_t* L_4 = L_3->___LevelCodeName_9;
		String_t* L_5;
		L_5 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_4);
		LevelData_tE6EAE053C277D3E4ED073363F0BF24BDBADFC4D5* L_6 = __this->____thisLevel_10;
		String_t* L_7 = L_6->___LevelDescription_10;
		String_t* L_8;
		L_8 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_7);
		LevelData_tE6EAE053C277D3E4ED073363F0BF24BDBADFC4D5* L_9 = __this->____thisLevel_10;
		float L_10 = L_9->___Budget_6;
		MissionInformationWindow_ShowInformation_m8A9821F245789101CD275D90EDA23FDC86C777CB(L_2, L_5, L_8, L_10, NULL);
		// }
		return;
	}
}
// System.Void LevelCell::hideMissionInformationWindow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelCell_hideMissionInformationWindow_mBB2F038C052A788AC139009004C20B7DA253A9FF (LevelCell_tADC4647C88211220C302069A345C4675278773CB* __this, const RuntimeMethod* method) 
{
	{
		// _missionInformationWindow.gameObject.SetActive(false);
		MissionInformationWindow_tCAD9D85E87544887EB8EE5A089D3E2C87556D0AF* L_0 = __this->____missionInformationWindow_8;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void LevelCell::OnClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelCell_OnClick_m13B44697ECF32570EC4632F552FFBDE32666436A (LevelCell_tADC4647C88211220C302069A345C4675278773CB* __this, const RuntimeMethod* method) 
{
	{
		// public void OnClick() => onClick();
		cellDelegate_t460ACF0FFE0D0FC85DF14E2203498FE748D74EEE* L_0 = __this->___onClick_4;
		cellDelegate_Invoke_mA7D3F9F5CE9223F8F4B7689C85C2640D1C58DDAE_inline(L_0, NULL);
		return;
	}
}
// System.Void LevelCell::loadLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelCell_loadLevel_m35AB54D8F2C127C4F6E3645A260557A9512D433C (LevelCell_tADC4647C88211220C302069A345C4675278773CB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LevelSaverLoader_t9A00927063FF8A8DEFDFDDA5D0BA47688D4D2BAF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB224A2EFE789603DFDDB79BA6CD8E1B7A89B708B);
		s_Il2CppMethodInitialized = true;
	}
	SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1* G_B2_0 = NULL;
	SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1* G_B1_0 = NULL;
	{
		// Events.LoadLevel?.Invoke();
		SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1* L_0 = ((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___LoadLevel_35;
		SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		goto IL_0010;
	}

IL_000b:
	{
		SimpleDelegate_Invoke_mE39CE43C6B97CE701F70DE6A5DCDAB2EAAA05C94_inline(G_B2_0, NULL);
	}

IL_0010:
	{
		// LevelSaverLoader.SaveCurrentLevel(_levelID);
		int32_t L_2 = __this->____levelID_9;
		il2cpp_codegen_runtime_class_init_inline(LevelSaverLoader_t9A00927063FF8A8DEFDFDDA5D0BA47688D4D2BAF_il2cpp_TypeInfo_var);
		LevelSaverLoader_SaveCurrentLevel_mEB769C5EC39F6BD103BC56519D32C7878EE11B4F(L_2, NULL);
		// SceneManager.LoadScene("Level");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7237839058F581BFCA0A79BB96F6F931469E43CF(_stringLiteralB224A2EFE789603DFDDB79BA6CD8E1B7A89B708B, NULL);
		// }
		return;
	}
}
// System.Void LevelCell::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelCell__ctor_mCE08C58255C7B96E5A7650C2BF35269B512518D4 (LevelCell_tADC4647C88211220C302069A345C4675278773CB* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void cellDelegate_Invoke_mA7D3F9F5CE9223F8F4B7689C85C2640D1C58DDAE_Multicast(cellDelegate_t460ACF0FFE0D0FC85DF14E2203498FE748D74EEE* __this, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		cellDelegate_t460ACF0FFE0D0FC85DF14E2203498FE748D74EEE* currentDelegate = reinterpret_cast<cellDelegate_t460ACF0FFE0D0FC85DF14E2203498FE748D74EEE*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void cellDelegate_Invoke_mA7D3F9F5CE9223F8F4B7689C85C2640D1C58DDAE_Open(cellDelegate_t460ACF0FFE0D0FC85DF14E2203498FE748D74EEE* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(method);
}
void cellDelegate_Invoke_mA7D3F9F5CE9223F8F4B7689C85C2640D1C58DDAE_OpenStaticInvoker(cellDelegate_t460ACF0FFE0D0FC85DF14E2203498FE748D74EEE* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker0::Invoke(__this->___method_ptr_0, method, NULL);
}
void cellDelegate_Invoke_mA7D3F9F5CE9223F8F4B7689C85C2640D1C58DDAE_ClosedStaticInvoker(cellDelegate_t460ACF0FFE0D0FC85DF14E2203498FE748D74EEE* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker1< RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_cellDelegate_t460ACF0FFE0D0FC85DF14E2203498FE748D74EEE (cellDelegate_t460ACF0FFE0D0FC85DF14E2203498FE748D74EEE* __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void LevelCell/cellDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void cellDelegate__ctor_mF2FE6119AA070C41A67D37A81D003C49699A1EB8 (cellDelegate_t460ACF0FFE0D0FC85DF14E2203498FE748D74EEE* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 0;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&cellDelegate_Invoke_mA7D3F9F5CE9223F8F4B7689C85C2640D1C58DDAE_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&cellDelegate_Invoke_mA7D3F9F5CE9223F8F4B7689C85C2640D1C58DDAE_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&cellDelegate_Invoke_mA7D3F9F5CE9223F8F4B7689C85C2640D1C58DDAE_Open;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&cellDelegate_Invoke_mA7D3F9F5CE9223F8F4B7689C85C2640D1C58DDAE_Multicast;
}
// System.Void LevelCell/cellDelegate::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void cellDelegate_Invoke_mA7D3F9F5CE9223F8F4B7689C85C2640D1C58DDAE (cellDelegate_t460ACF0FFE0D0FC85DF14E2203498FE748D74EEE* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult LevelCell/cellDelegate::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* cellDelegate_BeginInvoke_m0499899ED66238CFB33EE442CAF7713796B5113F (cellDelegate_t460ACF0FFE0D0FC85DF14E2203498FE748D74EEE* __this, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback0, RuntimeObject* ___object1, const RuntimeMethod* method) 
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);
}
// System.Void LevelCell/cellDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void cellDelegate_EndInvoke_m0F66DE869D2D192AA1E02DC1FD6DEE3CBAA7DA8F (cellDelegate_t460ACF0FFE0D0FC85DF14E2203498FE748D74EEE* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void LevelMenu::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelMenu_Awake_m8AD8565A1C5A9D8E389E5DF2E135D2CA8C5632E7 (LevelMenu_t6891BFAF859BCE6FD3FC107B0A40B48DFF968D8A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LevelMenu_initLevelList_mB28B60622DDD4B4AF014B3001FEBC54EE4450517_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Events.UpdateBaseRang += initLevelList;
		SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1* L_0 = ((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___UpdateBaseRang_31;
		SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1* L_1 = (SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1*)il2cpp_codegen_object_new(SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1_il2cpp_TypeInfo_var);
		SimpleDelegate__ctor_m52198E5C89703FE51B58861C8D85FBC3885F4082(L_1, __this, (intptr_t)((void*)LevelMenu_initLevelList_mB28B60622DDD4B4AF014B3001FEBC54EE4450517_RuntimeMethod_var), NULL);
		Delegate_t* L_2;
		L_2 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_0, L_1, NULL);
		((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___UpdateBaseRang_31 = ((SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1*)CastclassSealed((RuntimeObject*)L_2, SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___UpdateBaseRang_31), (void*)((SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1*)CastclassSealed((RuntimeObject*)L_2, SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1_il2cpp_TypeInfo_var)));
		// }
		return;
	}
}
// System.Void LevelMenu::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelMenu_Start_m427A91544406639156A20C054E840AF4AB2AF1F4 (LevelMenu_t6891BFAF859BCE6FD3FC107B0A40B48DFF968D8A* __this, const RuntimeMethod* method) 
{
	{
		// void Start() =>  initLevelList();
		LevelMenu_initLevelList_mB28B60622DDD4B4AF014B3001FEBC54EE4450517(__this, NULL);
		return;
	}
}
// System.Void LevelMenu::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelMenu_OnDestroy_m98D2D3BB7F169AF6E022FD2B357ACCC1C81580F5 (LevelMenu_t6891BFAF859BCE6FD3FC107B0A40B48DFF968D8A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LevelMenu_initLevelList_mB28B60622DDD4B4AF014B3001FEBC54EE4450517_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Events.UpdateBaseRang -= initLevelList;
		SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1* L_0 = ((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___UpdateBaseRang_31;
		SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1* L_1 = (SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1*)il2cpp_codegen_object_new(SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1_il2cpp_TypeInfo_var);
		SimpleDelegate__ctor_m52198E5C89703FE51B58861C8D85FBC3885F4082(L_1, __this, (intptr_t)((void*)LevelMenu_initLevelList_mB28B60622DDD4B4AF014B3001FEBC54EE4450517_RuntimeMethod_var), NULL);
		Delegate_t* L_2;
		L_2 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_0, L_1, NULL);
		((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___UpdateBaseRang_31 = ((SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1*)CastclassSealed((RuntimeObject*)L_2, SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___UpdateBaseRang_31), (void*)((SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1*)CastclassSealed((RuntimeObject*)L_2, SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1_il2cpp_TypeInfo_var)));
		// }
		return;
	}
}
// System.Void LevelMenu::initLevelList()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelMenu_initLevelList_mB28B60622DDD4B4AF014B3001FEBC54EE4450517 (LevelMenu_t6891BFAF859BCE6FD3FC107B0A40B48DFF968D8A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mAB2F9A493B9407B42C8E1AB74ACCB5C567BDDB17_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mD6B01A66A8590288667BE5CBAE5056030CB4E289_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m8BE99FA76955640697D9D607B42F71E04FB1EDEE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LevelSaverLoader_t9A00927063FF8A8DEFDFDDA5D0BA47688D4D2BAF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m81E0CEC164686859C689EB0C4B2B6911F1B20729_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisLevelCell_tADC4647C88211220C302069A345C4675278773CB_m9D0E6DC89A0CF36B6E6771B193A1B72565F7C8CB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	RuntimeObject* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	Enumerator_tBFF6DA9BE8EA2640F1C5F642D2436586AA67434B V_4;
	memset((&V_4), 0, sizeof(V_4));
	LevelData_tE6EAE053C277D3E4ED073363F0BF24BDBADFC4D5* V_5 = NULL;
	bool V_6 = false;
	{
		// int count = LevelSaverLoader.LoadLevels();
		il2cpp_codegen_runtime_class_init_inline(LevelSaverLoader_t9A00927063FF8A8DEFDFDDA5D0BA47688D4D2BAF_il2cpp_TypeInfo_var);
		int32_t L_0;
		L_0 = LevelSaverLoader_LoadLevels_m642C839D2854E6003764905222DD1979F53D15FE(NULL);
		V_0 = L_0;
		// int rang = LevelSaverLoader.LoadBaseRang();
		int32_t L_1;
		L_1 = LevelSaverLoader_LoadBaseRang_m924ADC988E570E3AE43174F7BC4185468F4A0A3F(NULL);
		V_1 = L_1;
		// foreach(Transform child in _container){
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = __this->____container_6;
		RuntimeObject* L_3;
		L_3 = Transform_GetEnumerator_mA7E1C882ACA0C33E284711CD09971DEA3FFEF404(L_2, NULL);
		V_2 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0039:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_4 = V_2;
					V_3 = ((RuntimeObject*)IsInst((RuntimeObject*)L_4, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_5 = V_3;
					if (!L_5)
					{
						goto IL_0049;
					}
				}
				{
					RuntimeObject* L_6 = V_3;
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_6);
				}

IL_0049:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_002f_1;
			}

IL_001a_1:
			{
				// foreach(Transform child in _container){
				RuntimeObject* L_7 = V_2;
				RuntimeObject* L_8;
				L_8 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_7);
				// Destroy(child.gameObject);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9;
				L_9 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(((Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)CastclassClass((RuntimeObject*)L_8, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var)), NULL);
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_9, NULL);
			}

IL_002f_1:
			{
				// foreach(Transform child in _container){
				RuntimeObject* L_10 = V_2;
				bool L_11;
				L_11 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_10);
				if (L_11)
				{
					goto IL_001a_1;
				}
			}
			{
				goto IL_004a;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_004a:
	{
		// foreach(LevelData level in _levels){
		List_1_t5D51C2F548F7E4364A14BB81D41C0CAE0A900E0A* L_12 = __this->____levels_4;
		Enumerator_tBFF6DA9BE8EA2640F1C5F642D2436586AA67434B L_13;
		L_13 = List_1_GetEnumerator_m81E0CEC164686859C689EB0C4B2B6911F1B20729(L_12, List_1_GetEnumerator_m81E0CEC164686859C689EB0C4B2B6911F1B20729_RuntimeMethod_var);
		V_4 = L_13;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00a7:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mAB2F9A493B9407B42C8E1AB74ACCB5C567BDDB17((&V_4), Enumerator_Dispose_mAB2F9A493B9407B42C8E1AB74ACCB5C567BDDB17_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_009c_1;
			}

IL_0059_1:
			{
				// foreach(LevelData level in _levels){
				LevelData_tE6EAE053C277D3E4ED073363F0BF24BDBADFC4D5* L_14;
				L_14 = Enumerator_get_Current_m8BE99FA76955640697D9D607B42F71E04FB1EDEE_inline((&V_4), Enumerator_get_Current_m8BE99FA76955640697D9D607B42F71E04FB1EDEE_RuntimeMethod_var);
				V_5 = L_14;
				// bool active = true;
				V_6 = (bool)1;
				// if(level.LevelID > count)
				LevelData_tE6EAE053C277D3E4ED073363F0BF24BDBADFC4D5* L_15 = V_5;
				int32_t L_16 = L_15->___LevelID_4;
				int32_t L_17 = V_0;
				if ((((int32_t)L_16) <= ((int32_t)L_17)))
				{
					goto IL_0072_1;
				}
			}
			{
				// active = false;
				V_6 = (bool)0;
			}

IL_0072_1:
			{
				// if(level.LevelRang <= rang){
				LevelData_tE6EAE053C277D3E4ED073363F0BF24BDBADFC4D5* L_18 = V_5;
				int32_t L_19 = L_18->___LevelRang_5;
				int32_t L_20 = V_1;
				if ((((int32_t)L_19) > ((int32_t)L_20)))
				{
					goto IL_009c_1;
				}
			}
			{
				// var cell = Instantiate(_cellPrefab,_container);
				LevelCell_tADC4647C88211220C302069A345C4675278773CB* L_21 = __this->____cellPrefab_5;
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_22 = __this->____container_6;
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				LevelCell_tADC4647C88211220C302069A345C4675278773CB* L_23;
				L_23 = Object_Instantiate_TisLevelCell_tADC4647C88211220C302069A345C4675278773CB_m9D0E6DC89A0CF36B6E6771B193A1B72565F7C8CB(L_21, L_22, Object_Instantiate_TisLevelCell_tADC4647C88211220C302069A345C4675278773CB_m9D0E6DC89A0CF36B6E6771B193A1B72565F7C8CB_RuntimeMethod_var);
				// cell.InitLevelCell(level, active, _informationWindow);
				LevelData_tE6EAE053C277D3E4ED073363F0BF24BDBADFC4D5* L_24 = V_5;
				bool L_25 = V_6;
				MissionInformationWindow_tCAD9D85E87544887EB8EE5A089D3E2C87556D0AF* L_26 = __this->____informationWindow_7;
				LevelCell_InitLevelCell_mAF183DDA9340D970FB2E82B9ED58282E4D3C06A8(L_23, L_24, L_25, L_26, NULL);
			}

IL_009c_1:
			{
				// foreach(LevelData level in _levels){
				bool L_27;
				L_27 = Enumerator_MoveNext_mD6B01A66A8590288667BE5CBAE5056030CB4E289((&V_4), Enumerator_MoveNext_mD6B01A66A8590288667BE5CBAE5056030CB4E289_RuntimeMethod_var);
				if (L_27)
				{
					goto IL_0059_1;
				}
			}
			{
				goto IL_00b5;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00b5:
	{
		// }
		return;
	}
}
// System.Void LevelMenu::OnMouseDown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelMenu_OnMouseDown_m2DF9F2ECC3E093AC6002B1F034DFD5BA3D039F87 (LevelMenu_t6891BFAF859BCE6FD3FC107B0A40B48DFF968D8A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1* G_B2_0 = NULL;
	SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1* G_B1_0 = NULL;
	{
		// showLevelMenu();
		LevelMenu_showLevelMenu_mA57F06C01CA5E624A9681C1D530E400653C4F7B3(__this, NULL);
		// Events.ShowMissionsStore?.Invoke();
		SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1* L_0 = ((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___ShowMissionsStore_33;
		SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_0010;
		}
	}
	{
		return;
	}

IL_0010:
	{
		SimpleDelegate_Invoke_mE39CE43C6B97CE701F70DE6A5DCDAB2EAAA05C94_inline(G_B2_0, NULL);
		// }
		return;
	}
}
// System.Void LevelMenu::showLevelMenu()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelMenu_showLevelMenu_mA57F06C01CA5E624A9681C1D530E400653C4F7B3 (LevelMenu_t6891BFAF859BCE6FD3FC107B0A40B48DFF968D8A* __this, const RuntimeMethod* method) 
{
	{
		// private void showLevelMenu() => _levelMenuWindow.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->____levelMenuWindow_8;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)1, NULL);
		return;
	}
}
// System.Void LevelMenu::HideLevelMenu()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelMenu_HideLevelMenu_m564F4F0DD8DA6B10B7D6C4066F578DF334D58CC7 (LevelMenu_t6891BFAF859BCE6FD3FC107B0A40B48DFF968D8A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1* G_B2_0 = NULL;
	SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1* G_B1_0 = NULL;
	{
		// _levelMenuWindow.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->____levelMenuWindow_8;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// Events.ShowBase?.Invoke();
		SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1* L_1 = ((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___ShowBase_34;
		SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1* L_2 = L_1;
		G_B1_0 = L_2;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_0016;
		}
	}
	{
		return;
	}

IL_0016:
	{
		SimpleDelegate_Invoke_mE39CE43C6B97CE701F70DE6A5DCDAB2EAAA05C94_inline(G_B2_0, NULL);
		// }
		return;
	}
}
// System.Void LevelMenu::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelMenu__ctor_mEDD578461B262CECD2EBC46E9645E5A74A7DF761 (LevelMenu_t6891BFAF859BCE6FD3FC107B0A40B48DFF968D8A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m8F27E8AABFB53268913A2C731EF1CB13B00F1A2D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t5D51C2F548F7E4364A14BB81D41C0CAE0A900E0A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [SerializeField]private List<LevelData> _levels = new List<LevelData>();
		List_1_t5D51C2F548F7E4364A14BB81D41C0CAE0A900E0A* L_0 = (List_1_t5D51C2F548F7E4364A14BB81D41C0CAE0A900E0A*)il2cpp_codegen_object_new(List_1_t5D51C2F548F7E4364A14BB81D41C0CAE0A900E0A_il2cpp_TypeInfo_var);
		List_1__ctor_m8F27E8AABFB53268913A2C731EF1CB13B00F1A2D(L_0, List_1__ctor_m8F27E8AABFB53268913A2C731EF1CB13B00F1A2D_RuntimeMethod_var);
		__this->____levels_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____levels_4), (void*)L_0);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void LoadScreen::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadScreen_Awake_m860B78DE879D3D04E481C881E2E8351795143102 (LoadScreen_t84A9FD098EB6D41345E4EC1D7B31DFFA3947B3D3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LoadScreen_showLoadScreen_mCFB95E2D699D022A0228617AC123C7CF0F8940F6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Events.LoadLevel += showLoadScreen;
		SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1* L_0 = ((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___LoadLevel_35;
		SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1* L_1 = (SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1*)il2cpp_codegen_object_new(SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1_il2cpp_TypeInfo_var);
		SimpleDelegate__ctor_m52198E5C89703FE51B58861C8D85FBC3885F4082(L_1, __this, (intptr_t)((void*)LoadScreen_showLoadScreen_mCFB95E2D699D022A0228617AC123C7CF0F8940F6_RuntimeMethod_var), NULL);
		Delegate_t* L_2;
		L_2 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_0, L_1, NULL);
		((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___LoadLevel_35 = ((SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1*)CastclassSealed((RuntimeObject*)L_2, SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___LoadLevel_35), (void*)((SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1*)CastclassSealed((RuntimeObject*)L_2, SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1_il2cpp_TypeInfo_var)));
		// }
		return;
	}
}
// System.Void LoadScreen::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadScreen_OnDestroy_mCEB59EACA1171DF95DBD38F14C206E8F6A0B8FC1 (LoadScreen_t84A9FD098EB6D41345E4EC1D7B31DFFA3947B3D3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LoadScreen_showLoadScreen_mCFB95E2D699D022A0228617AC123C7CF0F8940F6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Events.LoadLevel -= showLoadScreen;
		SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1* L_0 = ((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___LoadLevel_35;
		SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1* L_1 = (SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1*)il2cpp_codegen_object_new(SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1_il2cpp_TypeInfo_var);
		SimpleDelegate__ctor_m52198E5C89703FE51B58861C8D85FBC3885F4082(L_1, __this, (intptr_t)((void*)LoadScreen_showLoadScreen_mCFB95E2D699D022A0228617AC123C7CF0F8940F6_RuntimeMethod_var), NULL);
		Delegate_t* L_2;
		L_2 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_0, L_1, NULL);
		((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___LoadLevel_35 = ((SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1*)CastclassSealed((RuntimeObject*)L_2, SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___LoadLevel_35), (void*)((SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1*)CastclassSealed((RuntimeObject*)L_2, SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1_il2cpp_TypeInfo_var)));
		// }
		return;
	}
}
// System.Void LoadScreen::showLoadScreen()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadScreen_showLoadScreen_mCFB95E2D699D022A0228617AC123C7CF0F8940F6 (LoadScreen_t84A9FD098EB6D41345E4EC1D7B31DFFA3947B3D3* __this, const RuntimeMethod* method) 
{
	{
		// _UI.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->____UI_4;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// _loadScreen.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->____loadScreen_5;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void LoadScreen::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadScreen__ctor_m2980574F635EA778361DE5DF57DC009BF66F0821 (LoadScreen_t84A9FD098EB6D41345E4EC1D7B31DFFA3947B3D3* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void MenuBudget::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuBudget_Awake_m57801B4038435F504C8A3CC0BFAAD3BB853FAC19 (MenuBudget_t85890A4C72C1B046830CF1AB2A798553120D4792* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LevelSaverLoader_t9A00927063FF8A8DEFDFDDA5D0BA47688D4D2BAF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MenuBudget_updateBudget_m9A5B590D3C9F2CC2B519649EBF88394E9659B021_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Events.UpdateBudgetOnMenuUI += updateBudget;
		FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46* L_0 = ((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___UpdateBudgetOnMenuUI_20;
		FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46* L_1 = (FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46*)il2cpp_codegen_object_new(FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46_il2cpp_TypeInfo_var);
		FloatDelegate__ctor_mF5CFDCFA2728F6F061009EDF3AE1BEC8F79B3B6C(L_1, __this, (intptr_t)((void*)MenuBudget_updateBudget_m9A5B590D3C9F2CC2B519649EBF88394E9659B021_RuntimeMethod_var), NULL);
		Delegate_t* L_2;
		L_2 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_0, L_1, NULL);
		((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___UpdateBudgetOnMenuUI_20 = ((FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46*)CastclassSealed((RuntimeObject*)L_2, FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___UpdateBudgetOnMenuUI_20), (void*)((FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46*)CastclassSealed((RuntimeObject*)L_2, FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46_il2cpp_TypeInfo_var)));
		// updateBudget(LevelSaverLoader.LoadBudget());
		il2cpp_codegen_runtime_class_init_inline(LevelSaverLoader_t9A00927063FF8A8DEFDFDDA5D0BA47688D4D2BAF_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = LevelSaverLoader_LoadBudget_m6A1C69213A55E0EEFC9426FB0DE5ADB64E888432(NULL);
		MenuBudget_updateBudget_m9A5B590D3C9F2CC2B519649EBF88394E9659B021(__this, ((float)L_3), NULL);
		// }
		return;
	}
}
// System.Void MenuBudget::updateBudget(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuBudget_updateBudget_m9A5B590D3C9F2CC2B519649EBF88394E9659B021 (MenuBudget_t85890A4C72C1B046830CF1AB2A798553120D4792* __this, float ___budget0, const RuntimeMethod* method) 
{
	{
		// private void updateBudget(float budget) => _budget.text = budget.ToString();
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_0 = __this->____budget_4;
		String_t* L_1;
		L_1 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972((&___budget0), NULL);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_0, L_1);
		return;
	}
}
// System.Void MenuBudget::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuBudget__ctor_mF58E524417C757B031B6CAEC9A3809731AA114CA (MenuBudget_t85890A4C72C1B046830CF1AB2A798553120D4792* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void MissionInformationWindow::ShowInformation(System.String,System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MissionInformationWindow_ShowInformation_m8A9821F245789101CD275D90EDA23FDC86C777CB (MissionInformationWindow_tCAD9D85E87544887EB8EE5A089D3E2C87556D0AF* __this, String_t* ___name0, String_t* ___description1, float ___budget2, const RuntimeMethod* method) 
{
	{
		// _name.text = name;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->____name_4;
		String_t* L_1 = ___name0;
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_1);
		// _description.text = description;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_2 = __this->____description_5;
		String_t* L_3 = ___description1;
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_2, L_3);
		// _budget.text = budget.ToString();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_4 = __this->____budget_6;
		String_t* L_5;
		L_5 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972((&___budget2), NULL);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_4, L_5);
		// }
		return;
	}
}
// System.Void MissionInformationWindow::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MissionInformationWindow__ctor_m73CD702D64E834BD85F6006E2BD1D6D2B2F1CD0A (MissionInformationWindow_tCAD9D85E87544887EB8EE5A089D3E2C87556D0AF* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CloseButton::OnClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CloseButton_OnClick_m013C64830B066BA383D9A30A7FD40AFE5C62ABD7 (CloseButton_t709E9B0B9178C798AFD2FC1ACB7AA5E86AA734B0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1* G_B2_0 = NULL;
	SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1* G_B1_0 = NULL;
	{
		// public void OnClick() => Events.HideStore?.Invoke();
		SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1* L_0 = ((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___HideStore_25;
		SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000a;
		}
	}
	{
		return;
	}

IL_000a:
	{
		SimpleDelegate_Invoke_mE39CE43C6B97CE701F70DE6A5DCDAB2EAAA05C94_inline(G_B2_0, NULL);
		return;
	}
}
// System.Void CloseButton::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CloseButton__ctor_m1C905B81F0AA85E2B3996D252DD246A0A056770F (CloseButton_t709E9B0B9178C798AFD2FC1ACB7AA5E86AA734B0* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Control::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Control_Awake_mFB1BADD37AC5E499F15650289276C56188B0D79B (Control_t173E621579F19553D3CDA3C97DA9068EFF1C9694* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Control_startControling_m038CE054527EC5905EE172652D48277CD28A341B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Control_stopContolling_m9E380057A1212E85C3AA50EB87748FB561250960_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Control_updateSpeed_mDFB245AD9A788708267837DFF565611062C26191_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Events.ShowLaunchUI += startControling;
		SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1* L_0 = ((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___ShowLaunchUI_28;
		SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1* L_1 = (SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1*)il2cpp_codegen_object_new(SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1_il2cpp_TypeInfo_var);
		SimpleDelegate__ctor_m52198E5C89703FE51B58861C8D85FBC3885F4082(L_1, __this, (intptr_t)((void*)Control_startControling_m038CE054527EC5905EE172652D48277CD28A341B_RuntimeMethod_var), NULL);
		Delegate_t* L_2;
		L_2 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_0, L_1, NULL);
		((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___ShowLaunchUI_28 = ((SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1*)CastclassSealed((RuntimeObject*)L_2, SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___ShowLaunchUI_28), (void*)((SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1*)CastclassSealed((RuntimeObject*)L_2, SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1_il2cpp_TypeInfo_var)));
		// Events.UpdateControl += updateSpeed;
		FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46* L_3 = ((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___UpdateControl_13;
		FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46* L_4 = (FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46*)il2cpp_codegen_object_new(FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46_il2cpp_TypeInfo_var);
		FloatDelegate__ctor_mF5CFDCFA2728F6F061009EDF3AE1BEC8F79B3B6C(L_4, __this, (intptr_t)((void*)Control_updateSpeed_mDFB245AD9A788708267837DFF565611062C26191_RuntimeMethod_var), NULL);
		Delegate_t* L_5;
		L_5 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_3, L_4, NULL);
		((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___UpdateControl_13 = ((FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46*)CastclassSealed((RuntimeObject*)L_5, FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___UpdateControl_13), (void*)((FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46*)CastclassSealed((RuntimeObject*)L_5, FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46_il2cpp_TypeInfo_var)));
		// Events.DestroyRocket += stopContolling;
		SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1* L_6 = ((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___DestroyRocket_29;
		SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1* L_7 = (SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1*)il2cpp_codegen_object_new(SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1_il2cpp_TypeInfo_var);
		SimpleDelegate__ctor_m52198E5C89703FE51B58861C8D85FBC3885F4082(L_7, __this, (intptr_t)((void*)Control_stopContolling_m9E380057A1212E85C3AA50EB87748FB561250960_RuntimeMethod_var), NULL);
		Delegate_t* L_8;
		L_8 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_6, L_7, NULL);
		((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___DestroyRocket_29 = ((SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1*)CastclassSealed((RuntimeObject*)L_8, SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___DestroyRocket_29), (void*)((SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1*)CastclassSealed((RuntimeObject*)L_8, SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1_il2cpp_TypeInfo_var)));
		// Events.LevelComplete += stopContolling;
		SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1* L_9 = ((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___LevelComplete_30;
		SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1* L_10 = (SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1*)il2cpp_codegen_object_new(SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1_il2cpp_TypeInfo_var);
		SimpleDelegate__ctor_m52198E5C89703FE51B58861C8D85FBC3885F4082(L_10, __this, (intptr_t)((void*)Control_stopContolling_m9E380057A1212E85C3AA50EB87748FB561250960_RuntimeMethod_var), NULL);
		Delegate_t* L_11;
		L_11 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_9, L_10, NULL);
		((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___LevelComplete_30 = ((SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1*)CastclassSealed((RuntimeObject*)L_11, SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___LevelComplete_30), (void*)((SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1*)CastclassSealed((RuntimeObject*)L_11, SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1_il2cpp_TypeInfo_var)));
		// }
		return;
	}
}
// System.Void Control::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Control_OnDestroy_m399CB054996D2529D77807C28DBA5BDB4CAD4D2B (Control_t173E621579F19553D3CDA3C97DA9068EFF1C9694* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Control_startControling_m038CE054527EC5905EE172652D48277CD28A341B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Control_stopContolling_m9E380057A1212E85C3AA50EB87748FB561250960_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Control_updateSpeed_mDFB245AD9A788708267837DFF565611062C26191_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Events.ShowLaunchUI -= startControling;
		SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1* L_0 = ((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___ShowLaunchUI_28;
		SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1* L_1 = (SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1*)il2cpp_codegen_object_new(SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1_il2cpp_TypeInfo_var);
		SimpleDelegate__ctor_m52198E5C89703FE51B58861C8D85FBC3885F4082(L_1, __this, (intptr_t)((void*)Control_startControling_m038CE054527EC5905EE172652D48277CD28A341B_RuntimeMethod_var), NULL);
		Delegate_t* L_2;
		L_2 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_0, L_1, NULL);
		((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___ShowLaunchUI_28 = ((SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1*)CastclassSealed((RuntimeObject*)L_2, SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___ShowLaunchUI_28), (void*)((SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1*)CastclassSealed((RuntimeObject*)L_2, SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1_il2cpp_TypeInfo_var)));
		// Events.UpdateControl -= updateSpeed;
		FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46* L_3 = ((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___UpdateControl_13;
		FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46* L_4 = (FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46*)il2cpp_codegen_object_new(FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46_il2cpp_TypeInfo_var);
		FloatDelegate__ctor_mF5CFDCFA2728F6F061009EDF3AE1BEC8F79B3B6C(L_4, __this, (intptr_t)((void*)Control_updateSpeed_mDFB245AD9A788708267837DFF565611062C26191_RuntimeMethod_var), NULL);
		Delegate_t* L_5;
		L_5 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_3, L_4, NULL);
		((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___UpdateControl_13 = ((FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46*)CastclassSealed((RuntimeObject*)L_5, FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___UpdateControl_13), (void*)((FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46*)CastclassSealed((RuntimeObject*)L_5, FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46_il2cpp_TypeInfo_var)));
		// Events.DestroyRocket -= stopContolling;
		SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1* L_6 = ((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___DestroyRocket_29;
		SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1* L_7 = (SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1*)il2cpp_codegen_object_new(SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1_il2cpp_TypeInfo_var);
		SimpleDelegate__ctor_m52198E5C89703FE51B58861C8D85FBC3885F4082(L_7, __this, (intptr_t)((void*)Control_stopContolling_m9E380057A1212E85C3AA50EB87748FB561250960_RuntimeMethod_var), NULL);
		Delegate_t* L_8;
		L_8 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_6, L_7, NULL);
		((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___DestroyRocket_29 = ((SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1*)CastclassSealed((RuntimeObject*)L_8, SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___DestroyRocket_29), (void*)((SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1*)CastclassSealed((RuntimeObject*)L_8, SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1_il2cpp_TypeInfo_var)));
		// Events.LevelComplete -= stopContolling;
		SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1* L_9 = ((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___LevelComplete_30;
		SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1* L_10 = (SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1*)il2cpp_codegen_object_new(SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1_il2cpp_TypeInfo_var);
		SimpleDelegate__ctor_m52198E5C89703FE51B58861C8D85FBC3885F4082(L_10, __this, (intptr_t)((void*)Control_stopContolling_m9E380057A1212E85C3AA50EB87748FB561250960_RuntimeMethod_var), NULL);
		Delegate_t* L_11;
		L_11 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_9, L_10, NULL);
		((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___LevelComplete_30 = ((SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1*)CastclassSealed((RuntimeObject*)L_11, SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___LevelComplete_30), (void*)((SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1*)CastclassSealed((RuntimeObject*)L_11, SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1_il2cpp_TypeInfo_var)));
		// }
		return;
	}
}
// System.Void Control::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Control_Update_mCE2B2E5B7A43ED1E76ED9B3F321212A01283F8C7 (Control_t173E621579F19553D3CDA3C97DA9068EFF1C9694* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE1291C4D47635E327ECFE39842BD1A93F58C61A2);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _controller.Translate(new Vector3(1f,0,0) * Time.deltaTime * _controlSpeed * _controlDerection);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->____controller_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_1), (1.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		float L_2;
		L_2 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_1, L_2, NULL);
		float L_4 = __this->____controlSpeed_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_3, L_4, NULL);
		float L_6 = __this->____controlDerection_11;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_5, L_6, NULL);
		Transform_Translate_m018D015E89C8CB743C54A21B4A1C5202EBF6297A(L_0, L_7, NULL);
		// _overEngine.localScale -= new Vector3(_overEngineScaleSpeed, 0, 0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8 = __this->____overEngine_6;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9 = L_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_9, NULL);
		float L_11 = __this->____overEngineScaleSpeed_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), L_11, (0.0f), (0.0f), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_10, L_12, NULL);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_9, L_13, NULL);
		// if (Input.GetKeyDown("space")){
		bool L_14;
		L_14 = Input_GetKeyDown_m4D8FE3CF83D6650C34E66A95175DC37DF2D98916(_stringLiteralE1291C4D47635E327ECFE39842BD1A93F58C61A2, NULL);
		if (!L_14)
		{
			goto IL_0088;
		}
	}
	{
		// _controlDerection *= -1;
		float L_15 = __this->____controlDerection_11;
		__this->____controlDerection_11 = ((float)il2cpp_codegen_multiply(L_15, (-1.0f)));
	}

IL_0088:
	{
		// }
		return;
	}
}
// System.Void Control::startControling()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Control_startControling_m038CE054527EC5905EE172652D48277CD28A341B (Control_t173E621579F19553D3CDA3C97DA9068EFF1C9694* __this, const RuntimeMethod* method) 
{
	{
		// _controlSpeed = _currentSpeed;
		float L_0 = __this->____currentSpeed_8;
		__this->____controlSpeed_7 = L_0;
		// _controlUI.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->____controlUI_4;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void Control::updateSpeed(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Control_updateSpeed_mDFB245AD9A788708267837DFF565611062C26191 (Control_t173E621579F19553D3CDA3C97DA9068EFF1C9694* __this, float ___control0, const RuntimeMethod* method) 
{
	{
		// _currentSpeed = _speedCoeficent / control;
		float L_0 = __this->____speedCoeficent_9;
		float L_1 = ___control0;
		__this->____currentSpeed_8 = ((float)(L_0/L_1));
		// }
		return;
	}
}
// System.Void Control::stopContolling()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Control_stopContolling_m9E380057A1212E85C3AA50EB87748FB561250960 (Control_t173E621579F19553D3CDA3C97DA9068EFF1C9694* __this, const RuntimeMethod* method) 
{
	{
		// _controlSpeed = 0;
		__this->____controlSpeed_7 = (0.0f);
		// _controlUI.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->____controlUI_4;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void Control::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Control__ctor_mEAB84F82268EB35BBA7634ED456BBA8EF3FDDFDB (Control_t173E621579F19553D3CDA3C97DA9068EFF1C9694* __this, const RuntimeMethod* method) 
{
	{
		// private float _controlDerection = 1;
		__this->____controlDerection_11 = (1.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Controller::OnCollisionEnter2D(UnityEngine.Collision2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Controller_OnCollisionEnter2D_m473AF6191CEAF4A49B8E8BEB9C87B2C294CA3054 (Controller_t080F3A02FE42D755CC6A8B605F85CA157ED61BB9* __this, Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B* ___col0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1* G_B2_0 = NULL;
	SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1* G_B1_0 = NULL;
	{
		// Events.DestroyRocket?.Invoke();
		SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1* L_0 = ((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___DestroyRocket_29;
		SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000a;
		}
	}
	{
		return;
	}

IL_000a:
	{
		SimpleDelegate_Invoke_mE39CE43C6B97CE701F70DE6A5DCDAB2EAAA05C94_inline(G_B2_0, NULL);
		// }
		return;
	}
}
// System.Void Controller::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Controller__ctor_mD8A105DFD9CAFDD0B419A5ECD5BC3B789338476A (Controller_t080F3A02FE42D755CC6A8B605F85CA157ED61BB9* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void InformationWindow::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InformationWindow_Awake_m0461F679EBB9756D6D6338BE3653725B9679A264 (InformationWindow_tCE1FE4060843C189EFCE677746B85DB140C906B1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InformationWindow_closeWindow_m3ADED969BD8298753E826F4E297DD8C5EE26B158_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InformationWindow_updateAtmResistance_mEAFB690A231B9FD1FAE1A2E66967FCEF529CDA9C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InformationWindow_updateControl_mCB4BC1596E8C0B1626B5C9B501B5AC2EB848DAA1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InformationWindow_updateGravity_m5558BD7C31B0AAF8682E1EDA0F477BA35C2FAE6B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InformationWindow_updateImpulse_m6EB47A956AD10FA565336CE9C9A34BACC8E26F71_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InformationWindow_updateResistance_m357690F2CB9E7FFB66D1FBFB03A8B037ADC6B188_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InformationWindow_updateThrust_mA9187593ACAF973C116A775F4EA97CE23533771E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InformationWindow_updateWeight_m0B457F02205E269E85A0DC9B82E1F52D85EEE5C7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Events.UpdateControl += updateControl;
		FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46* L_0 = ((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___UpdateControl_13;
		FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46* L_1 = (FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46*)il2cpp_codegen_object_new(FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46_il2cpp_TypeInfo_var);
		FloatDelegate__ctor_mF5CFDCFA2728F6F061009EDF3AE1BEC8F79B3B6C(L_1, __this, (intptr_t)((void*)InformationWindow_updateControl_mCB4BC1596E8C0B1626B5C9B501B5AC2EB848DAA1_RuntimeMethod_var), NULL);
		Delegate_t* L_2;
		L_2 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_0, L_1, NULL);
		((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___UpdateControl_13 = ((FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46*)CastclassSealed((RuntimeObject*)L_2, FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___UpdateControl_13), (void*)((FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46*)CastclassSealed((RuntimeObject*)L_2, FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46_il2cpp_TypeInfo_var)));
		// Events.UpdateSpecificImpulse += updateImpulse;
		FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46* L_3 = ((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___UpdateSpecificImpulse_14;
		FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46* L_4 = (FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46*)il2cpp_codegen_object_new(FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46_il2cpp_TypeInfo_var);
		FloatDelegate__ctor_mF5CFDCFA2728F6F061009EDF3AE1BEC8F79B3B6C(L_4, __this, (intptr_t)((void*)InformationWindow_updateImpulse_m6EB47A956AD10FA565336CE9C9A34BACC8E26F71_RuntimeMethod_var), NULL);
		Delegate_t* L_5;
		L_5 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_3, L_4, NULL);
		((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___UpdateSpecificImpulse_14 = ((FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46*)CastclassSealed((RuntimeObject*)L_5, FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___UpdateSpecificImpulse_14), (void*)((FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46*)CastclassSealed((RuntimeObject*)L_5, FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46_il2cpp_TypeInfo_var)));
		// Events.UpdateResistance += updateResistance;
		FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46* L_6 = ((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___UpdateResistance_15;
		FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46* L_7 = (FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46*)il2cpp_codegen_object_new(FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46_il2cpp_TypeInfo_var);
		FloatDelegate__ctor_mF5CFDCFA2728F6F061009EDF3AE1BEC8F79B3B6C(L_7, __this, (intptr_t)((void*)InformationWindow_updateResistance_m357690F2CB9E7FFB66D1FBFB03A8B037ADC6B188_RuntimeMethod_var), NULL);
		Delegate_t* L_8;
		L_8 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_6, L_7, NULL);
		((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___UpdateResistance_15 = ((FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46*)CastclassSealed((RuntimeObject*)L_8, FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___UpdateResistance_15), (void*)((FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46*)CastclassSealed((RuntimeObject*)L_8, FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46_il2cpp_TypeInfo_var)));
		// Events.UpdateThrust += updateThrust;
		FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46* L_9 = ((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___UpdateThrust_12;
		FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46* L_10 = (FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46*)il2cpp_codegen_object_new(FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46_il2cpp_TypeInfo_var);
		FloatDelegate__ctor_mF5CFDCFA2728F6F061009EDF3AE1BEC8F79B3B6C(L_10, __this, (intptr_t)((void*)InformationWindow_updateThrust_mA9187593ACAF973C116A775F4EA97CE23533771E_RuntimeMethod_var), NULL);
		Delegate_t* L_11;
		L_11 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_9, L_10, NULL);
		((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___UpdateThrust_12 = ((FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46*)CastclassSealed((RuntimeObject*)L_11, FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___UpdateThrust_12), (void*)((FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46*)CastclassSealed((RuntimeObject*)L_11, FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46_il2cpp_TypeInfo_var)));
		// Events.UpdateWeight += updateWeight;
		FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46* L_12 = ((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___UpdateWeight_16;
		FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46* L_13 = (FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46*)il2cpp_codegen_object_new(FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46_il2cpp_TypeInfo_var);
		FloatDelegate__ctor_mF5CFDCFA2728F6F061009EDF3AE1BEC8F79B3B6C(L_13, __this, (intptr_t)((void*)InformationWindow_updateWeight_m0B457F02205E269E85A0DC9B82E1F52D85EEE5C7_RuntimeMethod_var), NULL);
		Delegate_t* L_14;
		L_14 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_12, L_13, NULL);
		((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___UpdateWeight_16 = ((FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46*)CastclassSealed((RuntimeObject*)L_14, FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___UpdateWeight_16), (void*)((FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46*)CastclassSealed((RuntimeObject*)L_14, FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46_il2cpp_TypeInfo_var)));
		// Events.HideStoreUI += closeWindow;
		SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1* L_15 = ((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___HideStoreUI_26;
		SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1* L_16 = (SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1*)il2cpp_codegen_object_new(SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1_il2cpp_TypeInfo_var);
		SimpleDelegate__ctor_m52198E5C89703FE51B58861C8D85FBC3885F4082(L_16, __this, (intptr_t)((void*)InformationWindow_closeWindow_m3ADED969BD8298753E826F4E297DD8C5EE26B158_RuntimeMethod_var), NULL);
		Delegate_t* L_17;
		L_17 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_15, L_16, NULL);
		((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___HideStoreUI_26 = ((SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1*)CastclassSealed((RuntimeObject*)L_17, SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___HideStoreUI_26), (void*)((SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1*)CastclassSealed((RuntimeObject*)L_17, SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1_il2cpp_TypeInfo_var)));
		// Events.UpdateAtmResistance += updateAtmResistance;
		FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46* L_18 = ((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___UpdateAtmResistance_19;
		FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46* L_19 = (FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46*)il2cpp_codegen_object_new(FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46_il2cpp_TypeInfo_var);
		FloatDelegate__ctor_mF5CFDCFA2728F6F061009EDF3AE1BEC8F79B3B6C(L_19, __this, (intptr_t)((void*)InformationWindow_updateAtmResistance_mEAFB690A231B9FD1FAE1A2E66967FCEF529CDA9C_RuntimeMethod_var), NULL);
		Delegate_t* L_20;
		L_20 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_18, L_19, NULL);
		((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___UpdateAtmResistance_19 = ((FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46*)CastclassSealed((RuntimeObject*)L_20, FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___UpdateAtmResistance_19), (void*)((FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46*)CastclassSealed((RuntimeObject*)L_20, FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46_il2cpp_TypeInfo_var)));
		// Events.UpdateGravity += updateGravity;
		FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46* L_21 = ((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___UpdateGravity_18;
		FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46* L_22 = (FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46*)il2cpp_codegen_object_new(FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46_il2cpp_TypeInfo_var);
		FloatDelegate__ctor_mF5CFDCFA2728F6F061009EDF3AE1BEC8F79B3B6C(L_22, __this, (intptr_t)((void*)InformationWindow_updateGravity_m5558BD7C31B0AAF8682E1EDA0F477BA35C2FAE6B_RuntimeMethod_var), NULL);
		Delegate_t* L_23;
		L_23 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_21, L_22, NULL);
		((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___UpdateGravity_18 = ((FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46*)CastclassSealed((RuntimeObject*)L_23, FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___UpdateGravity_18), (void*)((FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46*)CastclassSealed((RuntimeObject*)L_23, FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46_il2cpp_TypeInfo_var)));
		// }
		return;
	}
}
// System.Void InformationWindow::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InformationWindow_OnDestroy_mD34BA71C45AA9A9A47DB0A5BE64A7214C5818F4D (InformationWindow_tCE1FE4060843C189EFCE677746B85DB140C906B1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InformationWindow_closeWindow_m3ADED969BD8298753E826F4E297DD8C5EE26B158_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InformationWindow_updateAtmResistance_mEAFB690A231B9FD1FAE1A2E66967FCEF529CDA9C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InformationWindow_updateControl_mCB4BC1596E8C0B1626B5C9B501B5AC2EB848DAA1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InformationWindow_updateGravity_m5558BD7C31B0AAF8682E1EDA0F477BA35C2FAE6B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InformationWindow_updateImpulse_m6EB47A956AD10FA565336CE9C9A34BACC8E26F71_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InformationWindow_updateResistance_m357690F2CB9E7FFB66D1FBFB03A8B037ADC6B188_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InformationWindow_updateThrust_mA9187593ACAF973C116A775F4EA97CE23533771E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InformationWindow_updateWeight_m0B457F02205E269E85A0DC9B82E1F52D85EEE5C7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Events.UpdateControl -= updateControl;
		FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46* L_0 = ((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___UpdateControl_13;
		FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46* L_1 = (FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46*)il2cpp_codegen_object_new(FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46_il2cpp_TypeInfo_var);
		FloatDelegate__ctor_mF5CFDCFA2728F6F061009EDF3AE1BEC8F79B3B6C(L_1, __this, (intptr_t)((void*)InformationWindow_updateControl_mCB4BC1596E8C0B1626B5C9B501B5AC2EB848DAA1_RuntimeMethod_var), NULL);
		Delegate_t* L_2;
		L_2 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_0, L_1, NULL);
		((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___UpdateControl_13 = ((FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46*)CastclassSealed((RuntimeObject*)L_2, FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___UpdateControl_13), (void*)((FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46*)CastclassSealed((RuntimeObject*)L_2, FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46_il2cpp_TypeInfo_var)));
		// Events.UpdateSpecificImpulse -= updateImpulse;
		FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46* L_3 = ((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___UpdateSpecificImpulse_14;
		FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46* L_4 = (FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46*)il2cpp_codegen_object_new(FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46_il2cpp_TypeInfo_var);
		FloatDelegate__ctor_mF5CFDCFA2728F6F061009EDF3AE1BEC8F79B3B6C(L_4, __this, (intptr_t)((void*)InformationWindow_updateImpulse_m6EB47A956AD10FA565336CE9C9A34BACC8E26F71_RuntimeMethod_var), NULL);
		Delegate_t* L_5;
		L_5 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_3, L_4, NULL);
		((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___UpdateSpecificImpulse_14 = ((FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46*)CastclassSealed((RuntimeObject*)L_5, FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___UpdateSpecificImpulse_14), (void*)((FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46*)CastclassSealed((RuntimeObject*)L_5, FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46_il2cpp_TypeInfo_var)));
		// Events.UpdateResistance += updateResistance;
		FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46* L_6 = ((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___UpdateResistance_15;
		FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46* L_7 = (FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46*)il2cpp_codegen_object_new(FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46_il2cpp_TypeInfo_var);
		FloatDelegate__ctor_mF5CFDCFA2728F6F061009EDF3AE1BEC8F79B3B6C(L_7, __this, (intptr_t)((void*)InformationWindow_updateResistance_m357690F2CB9E7FFB66D1FBFB03A8B037ADC6B188_RuntimeMethod_var), NULL);
		Delegate_t* L_8;
		L_8 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_6, L_7, NULL);
		((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___UpdateResistance_15 = ((FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46*)CastclassSealed((RuntimeObject*)L_8, FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___UpdateResistance_15), (void*)((FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46*)CastclassSealed((RuntimeObject*)L_8, FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46_il2cpp_TypeInfo_var)));
		// Events.UpdateThrust -= updateThrust;
		FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46* L_9 = ((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___UpdateThrust_12;
		FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46* L_10 = (FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46*)il2cpp_codegen_object_new(FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46_il2cpp_TypeInfo_var);
		FloatDelegate__ctor_mF5CFDCFA2728F6F061009EDF3AE1BEC8F79B3B6C(L_10, __this, (intptr_t)((void*)InformationWindow_updateThrust_mA9187593ACAF973C116A775F4EA97CE23533771E_RuntimeMethod_var), NULL);
		Delegate_t* L_11;
		L_11 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_9, L_10, NULL);
		((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___UpdateThrust_12 = ((FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46*)CastclassSealed((RuntimeObject*)L_11, FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___UpdateThrust_12), (void*)((FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46*)CastclassSealed((RuntimeObject*)L_11, FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46_il2cpp_TypeInfo_var)));
		// Events.UpdateWeight -= updateWeight;
		FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46* L_12 = ((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___UpdateWeight_16;
		FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46* L_13 = (FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46*)il2cpp_codegen_object_new(FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46_il2cpp_TypeInfo_var);
		FloatDelegate__ctor_mF5CFDCFA2728F6F061009EDF3AE1BEC8F79B3B6C(L_13, __this, (intptr_t)((void*)InformationWindow_updateWeight_m0B457F02205E269E85A0DC9B82E1F52D85EEE5C7_RuntimeMethod_var), NULL);
		Delegate_t* L_14;
		L_14 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_12, L_13, NULL);
		((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___UpdateWeight_16 = ((FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46*)CastclassSealed((RuntimeObject*)L_14, FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___UpdateWeight_16), (void*)((FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46*)CastclassSealed((RuntimeObject*)L_14, FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46_il2cpp_TypeInfo_var)));
		// Events.HideStoreUI -= closeWindow;
		SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1* L_15 = ((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___HideStoreUI_26;
		SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1* L_16 = (SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1*)il2cpp_codegen_object_new(SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1_il2cpp_TypeInfo_var);
		SimpleDelegate__ctor_m52198E5C89703FE51B58861C8D85FBC3885F4082(L_16, __this, (intptr_t)((void*)InformationWindow_closeWindow_m3ADED969BD8298753E826F4E297DD8C5EE26B158_RuntimeMethod_var), NULL);
		Delegate_t* L_17;
		L_17 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_15, L_16, NULL);
		((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___HideStoreUI_26 = ((SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1*)CastclassSealed((RuntimeObject*)L_17, SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___HideStoreUI_26), (void*)((SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1*)CastclassSealed((RuntimeObject*)L_17, SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1_il2cpp_TypeInfo_var)));
		// Events.UpdateAtmResistance -= updateAtmResistance;
		FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46* L_18 = ((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___UpdateAtmResistance_19;
		FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46* L_19 = (FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46*)il2cpp_codegen_object_new(FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46_il2cpp_TypeInfo_var);
		FloatDelegate__ctor_mF5CFDCFA2728F6F061009EDF3AE1BEC8F79B3B6C(L_19, __this, (intptr_t)((void*)InformationWindow_updateAtmResistance_mEAFB690A231B9FD1FAE1A2E66967FCEF529CDA9C_RuntimeMethod_var), NULL);
		Delegate_t* L_20;
		L_20 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_18, L_19, NULL);
		((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___UpdateAtmResistance_19 = ((FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46*)CastclassSealed((RuntimeObject*)L_20, FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___UpdateAtmResistance_19), (void*)((FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46*)CastclassSealed((RuntimeObject*)L_20, FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46_il2cpp_TypeInfo_var)));
		// Events.UpdateGravity -= updateGravity;
		FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46* L_21 = ((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___UpdateGravity_18;
		FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46* L_22 = (FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46*)il2cpp_codegen_object_new(FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46_il2cpp_TypeInfo_var);
		FloatDelegate__ctor_mF5CFDCFA2728F6F061009EDF3AE1BEC8F79B3B6C(L_22, __this, (intptr_t)((void*)InformationWindow_updateGravity_m5558BD7C31B0AAF8682E1EDA0F477BA35C2FAE6B_RuntimeMethod_var), NULL);
		Delegate_t* L_23;
		L_23 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_21, L_22, NULL);
		((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___UpdateGravity_18 = ((FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46*)CastclassSealed((RuntimeObject*)L_23, FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___UpdateGravity_18), (void*)((FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46*)CastclassSealed((RuntimeObject*)L_23, FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46_il2cpp_TypeInfo_var)));
		// }
		return;
	}
}
// System.Void InformationWindow::updateControl(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InformationWindow_updateControl_mCB4BC1596E8C0B1626B5C9B501B5AC2EB848DAA1 (InformationWindow_tCE1FE4060843C189EFCE677746B85DB140C906B1* __this, float ___newControl0, const RuntimeMethod* method) 
{
	{
		// private void updateControl(float newControl) => _control.text = newControl.ToString();
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_0 = __this->____control_8;
		String_t* L_1;
		L_1 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972((&___newControl0), NULL);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_0, L_1);
		return;
	}
}
// System.Void InformationWindow::updateImpulse(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InformationWindow_updateImpulse_m6EB47A956AD10FA565336CE9C9A34BACC8E26F71 (InformationWindow_tCE1FE4060843C189EFCE677746B85DB140C906B1* __this, float ___newImpulse0, const RuntimeMethod* method) 
{
	{
		// private void updateImpulse(float newImpulse) => _impulse.text = newImpulse.ToString();
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_0 = __this->____impulse_9;
		String_t* L_1;
		L_1 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972((&___newImpulse0), NULL);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_0, L_1);
		return;
	}
}
// System.Void InformationWindow::updateResistance(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InformationWindow_updateResistance_m357690F2CB9E7FFB66D1FBFB03A8B037ADC6B188 (InformationWindow_tCE1FE4060843C189EFCE677746B85DB140C906B1* __this, float ___newResistance0, const RuntimeMethod* method) 
{
	{
		// private void updateResistance(float newResistance) => _resistance.text = newResistance.ToString();
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_0 = __this->____resistance_10;
		String_t* L_1;
		L_1 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972((&___newResistance0), NULL);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_0, L_1);
		return;
	}
}
// System.Void InformationWindow::updateThrust(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InformationWindow_updateThrust_mA9187593ACAF973C116A775F4EA97CE23533771E (InformationWindow_tCE1FE4060843C189EFCE677746B85DB140C906B1* __this, float ___newThrust0, const RuntimeMethod* method) 
{
	{
		// private void updateThrust(float newThrust) => _thrust.text = newThrust.ToString();
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_0 = __this->____thrust_11;
		String_t* L_1;
		L_1 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972((&___newThrust0), NULL);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_0, L_1);
		return;
	}
}
// System.Void InformationWindow::updateWeight(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InformationWindow_updateWeight_m0B457F02205E269E85A0DC9B82E1F52D85EEE5C7 (InformationWindow_tCE1FE4060843C189EFCE677746B85DB140C906B1* __this, float ___newWeight0, const RuntimeMethod* method) 
{
	{
		// private void updateWeight(float newWeight) => _totalWeight.text = newWeight.ToString();
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_0 = __this->____totalWeight_7;
		String_t* L_1;
		L_1 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972((&___newWeight0), NULL);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_0, L_1);
		return;
	}
}
// System.Void InformationWindow::closeWindow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InformationWindow_closeWindow_m3ADED969BD8298753E826F4E297DD8C5EE26B158 (InformationWindow_tCE1FE4060843C189EFCE677746B85DB140C906B1* __this, const RuntimeMethod* method) 
{
	{
		// private void closeWindow() => _informationWindow.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->____informationWindow_4;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		return;
	}
}
// System.Void InformationWindow::updateGravity(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InformationWindow_updateGravity_m5558BD7C31B0AAF8682E1EDA0F477BA35C2FAE6B (InformationWindow_tCE1FE4060843C189EFCE677746B85DB140C906B1* __this, float ___gravity0, const RuntimeMethod* method) 
{
	{
		// private void updateGravity(float gravity) =>  _gravity.text = gravity.ToString();
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_0 = __this->____gravity_5;
		String_t* L_1;
		L_1 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972((&___gravity0), NULL);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_0, L_1);
		return;
	}
}
// System.Void InformationWindow::updateAtmResistance(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InformationWindow_updateAtmResistance_mEAFB690A231B9FD1FAE1A2E66967FCEF529CDA9C (InformationWindow_tCE1FE4060843C189EFCE677746B85DB140C906B1* __this, float ___resistance0, const RuntimeMethod* method) 
{
	{
		// private void updateAtmResistance(float resistance) =>  _atmResistance.text = resistance.ToString();
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_0 = __this->____atmResistance_6;
		String_t* L_1;
		L_1 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972((&___resistance0), NULL);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_0, L_1);
		return;
	}
}
// System.Void InformationWindow::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InformationWindow__ctor_m76D6D7C56FC9D488EFDD1C96FD89C3BEB037BDDB (InformationWindow_tCE1FE4060843C189EFCE677746B85DB140C906B1* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Launch::onClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Launch_onClick_m54B844468B1E22A1FE8B0E923870D76E49CB76FE (Launch_t52BE88240575DDC0FBF94BD3F933E375864CF2C3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1* G_B2_0 = NULL;
	SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1* G_B1_0 = NULL;
	{
		// public void onClick() => Events.LaunchRocket?.Invoke();
		SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1* L_0 = ((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___LaunchRocket_27;
		SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000a;
		}
	}
	{
		return;
	}

IL_000a:
	{
		SimpleDelegate_Invoke_mE39CE43C6B97CE701F70DE6A5DCDAB2EAAA05C94_inline(G_B2_0, NULL);
		return;
	}
}
// System.Void Launch::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Launch__ctor_mDBB092F80F45AB5FA636B7B912BF3A4944617CBA (Launch_t52BE88240575DDC0FBF94BD3F933E375864CF2C3* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Cell::InitCell(UnityEngine.Sprite,UnityEngine.Sprite,UnityEngine.Color32,System.String,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cell_InitCell_mCFF27F2BAE41D4E3C77804C183C1357E9E715FB0 (Cell_t88832599049D1ADACE41CE1CF9C147304CF76D5A* __this, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___icon0, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___parametrIcon1, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___backGroundColor2, String_t* ___name3, float ___price4, float ___parametrValue5, float ___weight6, const RuntimeMethod* method) 
{
	{
		// _icon.sprite = icon;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_0 = __this->____icon_5;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_1 = ___icon0;
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_0, L_1, NULL);
		// _parametrIcon.sprite = parametrIcon;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_2 = __this->____parametrIcon_6;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_3 = ___parametrIcon1;
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_2, L_3, NULL);
		// _name.text = name;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_4 = __this->____name_8;
		String_t* L_5 = ___name3;
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_4, L_5);
		// _price.text = price.ToString();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_6 = __this->____price_9;
		String_t* L_7;
		L_7 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972((&___price4), NULL);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_6, L_7);
		// _parametrValue.text = parametrValue.ToString();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_8 = __this->____parametrValue_10;
		String_t* L_9;
		L_9 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972((&___parametrValue5), NULL);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_8, L_9);
		// _weightValue.text = weight.ToString();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_10 = __this->____weightValue_11;
		String_t* L_11;
		L_11 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972((&___weight6), NULL);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_10, L_11);
		// _backGround.color = backGroundColor;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_12 = __this->____backGround_7;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_13 = ___backGroundColor2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_14;
		L_14 = Color32_op_Implicit_m203A634DBB77053C9400C68065CA29529103D172_inline(L_13, NULL);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_12, L_14);
		// }
		return;
	}
}
// System.Void Cell::OnClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cell_OnClick_m0FB9203909F2074DFB8F051062BA2046178C428F (Cell_t88832599049D1ADACE41CE1CF9C147304CF76D5A* __this, const RuntimeMethod* method) 
{
	{
		// OnClickFunction();
		CellDelegate_t96442117D3C482D1AF013088C40ADF19D1E6AB5C* L_0 = __this->___OnClickFunction_4;
		CellDelegate_Invoke_mDDA9289DD40B5A74F4B0A9FDF6BC4535BD386A43_inline(L_0, NULL);
		// }
		return;
	}
}
// System.Void Cell::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cell__ctor_m46B529AC926B052FF62C750561098BAB4321350F (Cell_t88832599049D1ADACE41CE1CF9C147304CF76D5A* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void CellDelegate_Invoke_mDDA9289DD40B5A74F4B0A9FDF6BC4535BD386A43_Multicast(CellDelegate_t96442117D3C482D1AF013088C40ADF19D1E6AB5C* __this, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		CellDelegate_t96442117D3C482D1AF013088C40ADF19D1E6AB5C* currentDelegate = reinterpret_cast<CellDelegate_t96442117D3C482D1AF013088C40ADF19D1E6AB5C*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void CellDelegate_Invoke_mDDA9289DD40B5A74F4B0A9FDF6BC4535BD386A43_Open(CellDelegate_t96442117D3C482D1AF013088C40ADF19D1E6AB5C* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(method);
}
void CellDelegate_Invoke_mDDA9289DD40B5A74F4B0A9FDF6BC4535BD386A43_OpenStaticInvoker(CellDelegate_t96442117D3C482D1AF013088C40ADF19D1E6AB5C* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker0::Invoke(__this->___method_ptr_0, method, NULL);
}
void CellDelegate_Invoke_mDDA9289DD40B5A74F4B0A9FDF6BC4535BD386A43_ClosedStaticInvoker(CellDelegate_t96442117D3C482D1AF013088C40ADF19D1E6AB5C* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker1< RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_CellDelegate_t96442117D3C482D1AF013088C40ADF19D1E6AB5C (CellDelegate_t96442117D3C482D1AF013088C40ADF19D1E6AB5C* __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void Cell/CellDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CellDelegate__ctor_m70B49E1636005C718C80725A03C38A0BEC657256 (CellDelegate_t96442117D3C482D1AF013088C40ADF19D1E6AB5C* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 0;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&CellDelegate_Invoke_mDDA9289DD40B5A74F4B0A9FDF6BC4535BD386A43_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&CellDelegate_Invoke_mDDA9289DD40B5A74F4B0A9FDF6BC4535BD386A43_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&CellDelegate_Invoke_mDDA9289DD40B5A74F4B0A9FDF6BC4535BD386A43_Open;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&CellDelegate_Invoke_mDDA9289DD40B5A74F4B0A9FDF6BC4535BD386A43_Multicast;
}
// System.Void Cell/CellDelegate::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CellDelegate_Invoke_mDDA9289DD40B5A74F4B0A9FDF6BC4535BD386A43 (CellDelegate_t96442117D3C482D1AF013088C40ADF19D1E6AB5C* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Cell/CellDelegate::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CellDelegate_BeginInvoke_m29B9FFD2F6A888E286571D993423B29A307211FD (CellDelegate_t96442117D3C482D1AF013088C40ADF19D1E6AB5C* __this, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback0, RuntimeObject* ___object1, const RuntimeMethod* method) 
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);
}
// System.Void Cell/CellDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CellDelegate_EndInvoke_mF94A727BED46371922D3E74947284BA3B13665BA (CellDelegate_t96442117D3C482D1AF013088C40ADF19D1E6AB5C* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Monye::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monye_Awake_m270FC6E9822923267EF57EB6282C7D86022381F3 (Monye_tD7CE1445FFBC575D6656B0F71D4B793D4DA248B5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Monye_hideMoneyUI_m3E48DC46A8F878FA0A379585DD81B0B21575ED2D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Monye_updateBudget_mB62C7AAB493CE54DD2BCB7E5621AA98F1B7FDAE6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Events.UpdateBudgetUI += updateBudget;
		FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46* L_0 = ((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___UpdateBudgetUI_17;
		FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46* L_1 = (FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46*)il2cpp_codegen_object_new(FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46_il2cpp_TypeInfo_var);
		FloatDelegate__ctor_mF5CFDCFA2728F6F061009EDF3AE1BEC8F79B3B6C(L_1, __this, (intptr_t)((void*)Monye_updateBudget_mB62C7AAB493CE54DD2BCB7E5621AA98F1B7FDAE6_RuntimeMethod_var), NULL);
		Delegate_t* L_2;
		L_2 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_0, L_1, NULL);
		((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___UpdateBudgetUI_17 = ((FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46*)CastclassSealed((RuntimeObject*)L_2, FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___UpdateBudgetUI_17), (void*)((FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46*)CastclassSealed((RuntimeObject*)L_2, FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46_il2cpp_TypeInfo_var)));
		// Events.ShowLaunchUI += hideMoneyUI;
		SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1* L_3 = ((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___ShowLaunchUI_28;
		SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1* L_4 = (SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1*)il2cpp_codegen_object_new(SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1_il2cpp_TypeInfo_var);
		SimpleDelegate__ctor_m52198E5C89703FE51B58861C8D85FBC3885F4082(L_4, __this, (intptr_t)((void*)Monye_hideMoneyUI_m3E48DC46A8F878FA0A379585DD81B0B21575ED2D_RuntimeMethod_var), NULL);
		Delegate_t* L_5;
		L_5 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_3, L_4, NULL);
		((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___ShowLaunchUI_28 = ((SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1*)CastclassSealed((RuntimeObject*)L_5, SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___ShowLaunchUI_28), (void*)((SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1*)CastclassSealed((RuntimeObject*)L_5, SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1_il2cpp_TypeInfo_var)));
		// }
		return;
	}
}
// System.Void Monye::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monye_OnDestroy_m5141489E2A04CFF01DF4D2ECF7EED0FC8BD03DF3 (Monye_tD7CE1445FFBC575D6656B0F71D4B793D4DA248B5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Monye_hideMoneyUI_m3E48DC46A8F878FA0A379585DD81B0B21575ED2D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Monye_updateBudget_mB62C7AAB493CE54DD2BCB7E5621AA98F1B7FDAE6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Events.UpdateBudgetUI -= updateBudget;
		FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46* L_0 = ((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___UpdateBudgetUI_17;
		FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46* L_1 = (FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46*)il2cpp_codegen_object_new(FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46_il2cpp_TypeInfo_var);
		FloatDelegate__ctor_mF5CFDCFA2728F6F061009EDF3AE1BEC8F79B3B6C(L_1, __this, (intptr_t)((void*)Monye_updateBudget_mB62C7AAB493CE54DD2BCB7E5621AA98F1B7FDAE6_RuntimeMethod_var), NULL);
		Delegate_t* L_2;
		L_2 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_0, L_1, NULL);
		((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___UpdateBudgetUI_17 = ((FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46*)CastclassSealed((RuntimeObject*)L_2, FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___UpdateBudgetUI_17), (void*)((FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46*)CastclassSealed((RuntimeObject*)L_2, FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46_il2cpp_TypeInfo_var)));
		// Events.ShowLaunchUI -= hideMoneyUI;
		SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1* L_3 = ((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___ShowLaunchUI_28;
		SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1* L_4 = (SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1*)il2cpp_codegen_object_new(SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1_il2cpp_TypeInfo_var);
		SimpleDelegate__ctor_m52198E5C89703FE51B58861C8D85FBC3885F4082(L_4, __this, (intptr_t)((void*)Monye_hideMoneyUI_m3E48DC46A8F878FA0A379585DD81B0B21575ED2D_RuntimeMethod_var), NULL);
		Delegate_t* L_5;
		L_5 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_3, L_4, NULL);
		((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___ShowLaunchUI_28 = ((SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1*)CastclassSealed((RuntimeObject*)L_5, SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___ShowLaunchUI_28), (void*)((SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1*)CastclassSealed((RuntimeObject*)L_5, SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1_il2cpp_TypeInfo_var)));
		// }
		return;
	}
}
// System.Void Monye::updateBudget(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monye_updateBudget_mB62C7AAB493CE54DD2BCB7E5621AA98F1B7FDAE6 (Monye_tD7CE1445FFBC575D6656B0F71D4B793D4DA248B5* __this, float ___nuewBudget0, const RuntimeMethod* method) 
{
	{
		// _budget.text =  nuewBudget.ToString();
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_0 = __this->____budget_4;
		String_t* L_1;
		L_1 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972((&___nuewBudget0), NULL);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_0, L_1);
		// }
		return;
	}
}
// System.Void Monye::hideMoneyUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monye_hideMoneyUI_m3E48DC46A8F878FA0A379585DD81B0B21575ED2D (Monye_tD7CE1445FFBC575D6656B0F71D4B793D4DA248B5* __this, const RuntimeMethod* method) 
{
	{
		// private void hideMoneyUI() => _moneyUI.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->____moneyUI_5;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		return;
	}
}
// System.Void Monye::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monye__ctor_m9221D2825C21837E04117349F20117AC26AF1F9C (Monye_tD7CE1445FFBC575D6656B0F71D4B793D4DA248B5* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Store::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Store_OnDestroy_m829025521F2C3F699806A4878387BDD08BEE1508 (Store_t883F7E4E1E6CD105C7227F062ECCF41D86B511ED* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Store_hideAllStoreUI_m1C40E2EBD8AE396864AEA1A14760819096753131_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Store_hideStores_m20952E0D8C191FD8A46D17F4F00F5F902E930595_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Events.HideStore -= hideStores;
		SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1* L_0 = ((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___HideStore_25;
		SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1* L_1 = (SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1*)il2cpp_codegen_object_new(SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1_il2cpp_TypeInfo_var);
		SimpleDelegate__ctor_m52198E5C89703FE51B58861C8D85FBC3885F4082(L_1, __this, (intptr_t)((void*)Store_hideStores_m20952E0D8C191FD8A46D17F4F00F5F902E930595_RuntimeMethod_var), NULL);
		Delegate_t* L_2;
		L_2 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_0, L_1, NULL);
		((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___HideStore_25 = ((SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1*)CastclassSealed((RuntimeObject*)L_2, SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___HideStore_25), (void*)((SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1*)CastclassSealed((RuntimeObject*)L_2, SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1_il2cpp_TypeInfo_var)));
		// Events.HideStoreUI -= hideAllStoreUI;
		SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1* L_3 = ((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___HideStoreUI_26;
		SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1* L_4 = (SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1*)il2cpp_codegen_object_new(SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1_il2cpp_TypeInfo_var);
		SimpleDelegate__ctor_m52198E5C89703FE51B58861C8D85FBC3885F4082(L_4, __this, (intptr_t)((void*)Store_hideAllStoreUI_m1C40E2EBD8AE396864AEA1A14760819096753131_RuntimeMethod_var), NULL);
		Delegate_t* L_5;
		L_5 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_3, L_4, NULL);
		((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___HideStoreUI_26 = ((SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1*)CastclassSealed((RuntimeObject*)L_5, SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___HideStoreUI_26), (void*)((SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1*)CastclassSealed((RuntimeObject*)L_5, SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1_il2cpp_TypeInfo_var)));
		// }
		return;
	}
}
// System.Void Store::initEngineStore()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Store_initEngineStore_mFAEE21F16FD7B99C45A24405942DE0B5CB734DE4 (Store_t883F7E4E1E6CD105C7227F062ECCF41D86B511ED* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1* G_B2_0 = NULL;
	SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1* G_B1_0 = NULL;
	{
		// initStore(_engineStoreList);
		List_1_tD33F0782DD5C792201F436775D584D14E82EAE5C* L_0 = __this->____engineStoreList_4;
		Store_initStore_mC615015619B73BBB5DE10D6168A09836A3C8D908(__this, L_0, NULL);
		// Events.SelectEngineStore?.Invoke();
		SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1* L_1 = ((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___SelectEngineStore_21;
		SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1* L_2 = L_1;
		G_B1_0 = L_2;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_0016;
		}
	}
	{
		return;
	}

IL_0016:
	{
		SimpleDelegate_Invoke_mE39CE43C6B97CE701F70DE6A5DCDAB2EAAA05C94_inline(G_B2_0, NULL);
		// }
		return;
	}
}
// System.Void Store::initDeflectorStore()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Store_initDeflectorStore_mEF6B47171A10E77356AE973F0F82454EBA15CFB3 (Store_t883F7E4E1E6CD105C7227F062ECCF41D86B511ED* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1* G_B2_0 = NULL;
	SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1* G_B1_0 = NULL;
	{
		// initStore(_deflectorStoreList);
		List_1_tD33F0782DD5C792201F436775D584D14E82EAE5C* L_0 = __this->____deflectorStoreList_7;
		Store_initStore_mC615015619B73BBB5DE10D6168A09836A3C8D908(__this, L_0, NULL);
		// Events.SelectDeflectorStore?.Invoke();
		SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1* L_1 = ((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___SelectDeflectorStore_22;
		SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1* L_2 = L_1;
		G_B1_0 = L_2;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_0016;
		}
	}
	{
		return;
	}

IL_0016:
	{
		SimpleDelegate_Invoke_mE39CE43C6B97CE701F70DE6A5DCDAB2EAAA05C94_inline(G_B2_0, NULL);
		// }
		return;
	}
}
// System.Void Store::initTankStore()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Store_initTankStore_m23A24E102616D72E8360DFBAC33C8AC06854509C (Store_t883F7E4E1E6CD105C7227F062ECCF41D86B511ED* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1* G_B2_0 = NULL;
	SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1* G_B1_0 = NULL;
	{
		// initStore(_tankStoreList);
		List_1_tD33F0782DD5C792201F436775D584D14E82EAE5C* L_0 = __this->____tankStoreList_6;
		Store_initStore_mC615015619B73BBB5DE10D6168A09836A3C8D908(__this, L_0, NULL);
		// Events.SelectTankStore?.Invoke();
		SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1* L_1 = ((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___SelectTankStore_23;
		SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1* L_2 = L_1;
		G_B1_0 = L_2;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_0016;
		}
	}
	{
		return;
	}

IL_0016:
	{
		SimpleDelegate_Invoke_mE39CE43C6B97CE701F70DE6A5DCDAB2EAAA05C94_inline(G_B2_0, NULL);
		// }
		return;
	}
}
// System.Void Store::initPlumageStore()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Store_initPlumageStore_m532639BD956F59316AB876CA098E0B76F58A90FF (Store_t883F7E4E1E6CD105C7227F062ECCF41D86B511ED* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1* G_B2_0 = NULL;
	SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1* G_B1_0 = NULL;
	{
		// initStore(_plumageStoreList);
		List_1_tD33F0782DD5C792201F436775D584D14E82EAE5C* L_0 = __this->____plumageStoreList_5;
		Store_initStore_mC615015619B73BBB5DE10D6168A09836A3C8D908(__this, L_0, NULL);
		// Events.SelectPlumageStore?.Invoke();
		SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1* L_1 = ((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___SelectPlumageStore_24;
		SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1* L_2 = L_1;
		G_B1_0 = L_2;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_0016;
		}
	}
	{
		return;
	}

IL_0016:
	{
		SimpleDelegate_Invoke_mE39CE43C6B97CE701F70DE6A5DCDAB2EAAA05C94_inline(G_B2_0, NULL);
		// }
		return;
	}
}
// System.Void Store::initStore(System.Collections.Generic.List`1<RocketPartData>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Store_initStore_mC615015619B73BBB5DE10D6168A09836A3C8D908 (Store_t883F7E4E1E6CD105C7227F062ECCF41D86B511ED* __this, List_1_tD33F0782DD5C792201F436775D584D14E82EAE5C* ___partData0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CellDelegate_t96442117D3C482D1AF013088C40ADF19D1E6AB5C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m62EEB495F8C407E1396B8E49E9C5F80FA4A88B60_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mDD682DD5B55673C86BB4ADC070BA9F8CC3B99208_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mE9BB6FDFFF24640F407E05E1738DEA4BA3DF2521_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m901E88E24A6D3BA25BC887089D21913E675E2315_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisCell_t88832599049D1ADACE41CE1CF9C147304CF76D5A_m6152200E039251C666072A4E99AB84927B5DCBD2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	Enumerator_tB48663E6C2779374FD14FD95868F926EFE5FD596 V_2;
	memset((&V_2), 0, sizeof(V_2));
	RocketPartData_t5D52B3A630DE734008E8AC3C974C6604543F03C3* V_3 = NULL;
	{
		// if(_store != null & _launchButton != null){
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->____store_9;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->____launchButton_10;
		bool L_3;
		L_3 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!((int32_t)((int32_t)L_1&(int32_t)L_3)))
		{
			goto IL_0150;
		}
	}
	{
		// _store.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->____store_9;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_4, (bool)1, NULL);
		// _launchButton.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = __this->____launchButton_10;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_5, (bool)0, NULL);
		// foreach(Transform child in _storeView)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6 = __this->____storeView_8;
		RuntimeObject* L_7;
		L_7 = Transform_GetEnumerator_mA7E1C882ACA0C33E284711CD09971DEA3FFEF404(L_6, NULL);
		V_0 = L_7;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0063:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_8 = V_0;
					V_1 = ((RuntimeObject*)IsInst((RuntimeObject*)L_8, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_9 = V_1;
					if (!L_9)
					{
						goto IL_0073;
					}
				}
				{
					RuntimeObject* L_10 = V_1;
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_10);
				}

IL_0073:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0059_1;
			}

IL_0044_1:
			{
				// foreach(Transform child in _storeView)
				RuntimeObject* L_11 = V_0;
				RuntimeObject* L_12;
				L_12 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_11);
				// Destroy(child.gameObject);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13;
				L_13 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(((Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)CastclassClass((RuntimeObject*)L_12, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var)), NULL);
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_13, NULL);
			}

IL_0059_1:
			{
				// foreach(Transform child in _storeView)
				RuntimeObject* L_14 = V_0;
				bool L_15;
				L_15 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_14);
				if (L_15)
				{
					goto IL_0044_1;
				}
			}
			{
				goto IL_0074;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0074:
	{
		// foreach(RocketPartData data in partData)
		List_1_tD33F0782DD5C792201F436775D584D14E82EAE5C* L_16 = ___partData0;
		Enumerator_tB48663E6C2779374FD14FD95868F926EFE5FD596 L_17;
		L_17 = List_1_GetEnumerator_m901E88E24A6D3BA25BC887089D21913E675E2315(L_16, List_1_GetEnumerator_m901E88E24A6D3BA25BC887089D21913E675E2315_RuntimeMethod_var);
		V_2 = L_17;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0142:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m62EEB495F8C407E1396B8E49E9C5F80FA4A88B60((&V_2), Enumerator_Dispose_m62EEB495F8C407E1396B8E49E9C5F80FA4A88B60_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0134_1;
			}

IL_0080_1:
			{
				// foreach(RocketPartData data in partData)
				RocketPartData_t5D52B3A630DE734008E8AC3C974C6604543F03C3* L_18;
				L_18 = Enumerator_get_Current_mE9BB6FDFFF24640F407E05E1738DEA4BA3DF2521_inline((&V_2), Enumerator_get_Current_mE9BB6FDFFF24640F407E05E1738DEA4BA3DF2521_RuntimeMethod_var);
				V_3 = L_18;
				// if(data.Parametr == RocketPartData.Parametrs.Deflector)
				RocketPartData_t5D52B3A630DE734008E8AC3C974C6604543F03C3* L_19 = V_3;
				int32_t L_20 = L_19->___Parametr_4;
				if (L_20)
				{
					goto IL_009e_1;
				}
			}
			{
				// parametrIcon = _resistanceSprite;
				Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_21 = __this->____resistanceSprite_13;
				__this->___parametrIcon_17 = L_21;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___parametrIcon_17), (void*)L_21);
				goto IL_00e1_1;
			}

IL_009e_1:
			{
				// else if(data.Parametr == RocketPartData.Parametrs.Tank)
				RocketPartData_t5D52B3A630DE734008E8AC3C974C6604543F03C3* L_22 = V_3;
				int32_t L_23 = L_22->___Parametr_4;
				if ((!(((uint32_t)L_23) == ((uint32_t)1))))
				{
					goto IL_00b5_1;
				}
			}
			{
				// parametrIcon = _impulseSprite;
				Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_24 = __this->____impulseSprite_14;
				__this->___parametrIcon_17 = L_24;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___parametrIcon_17), (void*)L_24);
				goto IL_00e1_1;
			}

IL_00b5_1:
			{
				// else if(data.Parametr == RocketPartData.Parametrs.Plumage)
				RocketPartData_t5D52B3A630DE734008E8AC3C974C6604543F03C3* L_25 = V_3;
				int32_t L_26 = L_25->___Parametr_4;
				if ((!(((uint32_t)L_26) == ((uint32_t)2))))
				{
					goto IL_00cc_1;
				}
			}
			{
				// parametrIcon = _controlSprite;
				Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_27 = __this->____controlSprite_15;
				__this->___parametrIcon_17 = L_27;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___parametrIcon_17), (void*)L_27);
				goto IL_00e1_1;
			}

IL_00cc_1:
			{
				// else if(data.Parametr == RocketPartData.Parametrs.Engine)
				RocketPartData_t5D52B3A630DE734008E8AC3C974C6604543F03C3* L_28 = V_3;
				int32_t L_29 = L_28->___Parametr_4;
				if ((!(((uint32_t)L_29) == ((uint32_t)3))))
				{
					goto IL_00e1_1;
				}
			}
			{
				// parametrIcon = _thrustSprite;
				Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_30 = __this->____thrustSprite_16;
				__this->___parametrIcon_17 = L_30;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___parametrIcon_17), (void*)L_30);
			}

IL_00e1_1:
			{
				// var cell = Instantiate(_cellPrefab, _storeView);
				Cell_t88832599049D1ADACE41CE1CF9C147304CF76D5A* L_31 = __this->____cellPrefab_12;
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_32 = __this->____storeView_8;
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				Cell_t88832599049D1ADACE41CE1CF9C147304CF76D5A* L_33;
				L_33 = Object_Instantiate_TisCell_t88832599049D1ADACE41CE1CF9C147304CF76D5A_m6152200E039251C666072A4E99AB84927B5DCBD2(L_31, L_32, Object_Instantiate_TisCell_t88832599049D1ADACE41CE1CF9C147304CF76D5A_m6152200E039251C666072A4E99AB84927B5DCBD2_RuntimeMethod_var);
				// cell.InitCell(
				//     data.Icon,
				//     parametrIcon,
				//     data.BackGroundColor,
				//     data.Name, data.Price,
				//     data.ReturnParametr(),
				//     data.Weight);
				Cell_t88832599049D1ADACE41CE1CF9C147304CF76D5A* L_34 = L_33;
				RocketPartData_t5D52B3A630DE734008E8AC3C974C6604543F03C3* L_35 = V_3;
				Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_36 = L_35->___Icon_8;
				Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_37 = __this->___parametrIcon_17;
				RocketPartData_t5D52B3A630DE734008E8AC3C974C6604543F03C3* L_38 = V_3;
				Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_39 = L_38->___BackGroundColor_10;
				RocketPartData_t5D52B3A630DE734008E8AC3C974C6604543F03C3* L_40 = V_3;
				String_t* L_41 = L_40->___Name_9;
				RocketPartData_t5D52B3A630DE734008E8AC3C974C6604543F03C3* L_42 = V_3;
				float L_43 = L_42->___Price_7;
				RocketPartData_t5D52B3A630DE734008E8AC3C974C6604543F03C3* L_44 = V_3;
				float L_45;
				L_45 = VirtualFuncInvoker0< float >::Invoke(5 /* System.Single RocketPartData::ReturnParametr() */, L_44);
				RocketPartData_t5D52B3A630DE734008E8AC3C974C6604543F03C3* L_46 = V_3;
				float L_47 = L_46->___Weight_6;
				Cell_InitCell_mCFF27F2BAE41D4E3C77804C183C1357E9E715FB0(L_34, L_36, L_37, L_39, L_41, L_43, L_45, L_47, NULL);
				// cell.OnClickFunction = data.TryBuyRocketPart;
				RocketPartData_t5D52B3A630DE734008E8AC3C974C6604543F03C3* L_48 = V_3;
				RocketPartData_t5D52B3A630DE734008E8AC3C974C6604543F03C3* L_49 = L_48;
				CellDelegate_t96442117D3C482D1AF013088C40ADF19D1E6AB5C* L_50 = (CellDelegate_t96442117D3C482D1AF013088C40ADF19D1E6AB5C*)il2cpp_codegen_object_new(CellDelegate_t96442117D3C482D1AF013088C40ADF19D1E6AB5C_il2cpp_TypeInfo_var);
				CellDelegate__ctor_m70B49E1636005C718C80725A03C38A0BEC657256(L_50, L_49, (intptr_t)((void*)GetVirtualMethodInfo(L_49, 4)), NULL);
				L_34->___OnClickFunction_4 = L_50;
				Il2CppCodeGenWriteBarrier((void**)(&L_34->___OnClickFunction_4), (void*)L_50);
			}

IL_0134_1:
			{
				// foreach(RocketPartData data in partData)
				bool L_51;
				L_51 = Enumerator_MoveNext_mDD682DD5B55673C86BB4ADC070BA9F8CC3B99208((&V_2), Enumerator_MoveNext_mDD682DD5B55673C86BB4ADC070BA9F8CC3B99208_RuntimeMethod_var);
				if (L_51)
				{
					goto IL_0080_1;
				}
			}
			{
				goto IL_0150;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0150:
	{
		// }
		return;
	}
}
// System.Void Store::hideStores()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Store_hideStores_m20952E0D8C191FD8A46D17F4F00F5F902E930595 (Store_t883F7E4E1E6CD105C7227F062ECCF41D86B511ED* __this, const RuntimeMethod* method) 
{
	{
		// _store.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->____store_9;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// _launchButton.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->____launchButton_10;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void Store::hideAllStoreUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Store_hideAllStoreUI_m1C40E2EBD8AE396864AEA1A14760819096753131 (Store_t883F7E4E1E6CD105C7227F062ECCF41D86B511ED* __this, const RuntimeMethod* method) 
{
	{
		// _launchButton.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->____launchButton_10;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// _store.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->____store_9;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)0, NULL);
		// _storeBar.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->____storeBar_11;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_2, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void Store::SubscribeStoreToPreparationEvents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Store_SubscribeStoreToPreparationEvents_m86A8482E61AC62800F38CA8893709BAD7A7EF769 (Store_t883F7E4E1E6CD105C7227F062ECCF41D86B511ED* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Store_hideAllStoreUI_m1C40E2EBD8AE396864AEA1A14760819096753131_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Store_hideStores_m20952E0D8C191FD8A46D17F4F00F5F902E930595_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Events.HideStore += hideStores;
		SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1* L_0 = ((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___HideStore_25;
		SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1* L_1 = (SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1*)il2cpp_codegen_object_new(SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1_il2cpp_TypeInfo_var);
		SimpleDelegate__ctor_m52198E5C89703FE51B58861C8D85FBC3885F4082(L_1, __this, (intptr_t)((void*)Store_hideStores_m20952E0D8C191FD8A46D17F4F00F5F902E930595_RuntimeMethod_var), NULL);
		Delegate_t* L_2;
		L_2 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_0, L_1, NULL);
		((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___HideStore_25 = ((SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1*)CastclassSealed((RuntimeObject*)L_2, SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___HideStore_25), (void*)((SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1*)CastclassSealed((RuntimeObject*)L_2, SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1_il2cpp_TypeInfo_var)));
		// Events.HideStoreUI += hideAllStoreUI;
		SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1* L_3 = ((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___HideStoreUI_26;
		SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1* L_4 = (SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1*)il2cpp_codegen_object_new(SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1_il2cpp_TypeInfo_var);
		SimpleDelegate__ctor_m52198E5C89703FE51B58861C8D85FBC3885F4082(L_4, __this, (intptr_t)((void*)Store_hideAllStoreUI_m1C40E2EBD8AE396864AEA1A14760819096753131_RuntimeMethod_var), NULL);
		Delegate_t* L_5;
		L_5 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_3, L_4, NULL);
		((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___HideStoreUI_26 = ((SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1*)CastclassSealed((RuntimeObject*)L_5, SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___HideStoreUI_26), (void*)((SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1*)CastclassSealed((RuntimeObject*)L_5, SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1_il2cpp_TypeInfo_var)));
		// }
		return;
	}
}
// System.Void Store::UnSubscribeStoreToPreparationEvents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Store_UnSubscribeStoreToPreparationEvents_m5FF2683F8BA0AB68D4DBB7C51FB45EFE557A8E9B (Store_t883F7E4E1E6CD105C7227F062ECCF41D86B511ED* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Store_hideAllStoreUI_m1C40E2EBD8AE396864AEA1A14760819096753131_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Store_hideStores_m20952E0D8C191FD8A46D17F4F00F5F902E930595_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Events.HideStore -= hideStores;
		SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1* L_0 = ((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___HideStore_25;
		SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1* L_1 = (SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1*)il2cpp_codegen_object_new(SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1_il2cpp_TypeInfo_var);
		SimpleDelegate__ctor_m52198E5C89703FE51B58861C8D85FBC3885F4082(L_1, __this, (intptr_t)((void*)Store_hideStores_m20952E0D8C191FD8A46D17F4F00F5F902E930595_RuntimeMethod_var), NULL);
		Delegate_t* L_2;
		L_2 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_0, L_1, NULL);
		((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___HideStore_25 = ((SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1*)CastclassSealed((RuntimeObject*)L_2, SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___HideStore_25), (void*)((SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1*)CastclassSealed((RuntimeObject*)L_2, SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1_il2cpp_TypeInfo_var)));
		// Events.HideStoreUI -= hideAllStoreUI;
		SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1* L_3 = ((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___HideStoreUI_26;
		SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1* L_4 = (SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1*)il2cpp_codegen_object_new(SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1_il2cpp_TypeInfo_var);
		SimpleDelegate__ctor_m52198E5C89703FE51B58861C8D85FBC3885F4082(L_4, __this, (intptr_t)((void*)Store_hideAllStoreUI_m1C40E2EBD8AE396864AEA1A14760819096753131_RuntimeMethod_var), NULL);
		Delegate_t* L_5;
		L_5 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_3, L_4, NULL);
		((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___HideStoreUI_26 = ((SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1*)CastclassSealed((RuntimeObject*)L_5, SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_StaticFields*)il2cpp_codegen_static_fields_for(Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F_il2cpp_TypeInfo_var))->___HideStoreUI_26), (void*)((SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1*)CastclassSealed((RuntimeObject*)L_5, SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1_il2cpp_TypeInfo_var)));
		// }
		return;
	}
}
// System.Void Store::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Store__ctor_m09C8BB1D501AEF2C1AAF02AB22A81A245DF1C464 (Store_t883F7E4E1E6CD105C7227F062ECCF41D86B511ED* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mAD7089571B98D6D711E15E78A187D2913B42BB33_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tD33F0782DD5C792201F436775D584D14E82EAE5C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [SerializeField]private List<RocketPartData> _engineStoreList = new List<RocketPartData>();
		List_1_tD33F0782DD5C792201F436775D584D14E82EAE5C* L_0 = (List_1_tD33F0782DD5C792201F436775D584D14E82EAE5C*)il2cpp_codegen_object_new(List_1_tD33F0782DD5C792201F436775D584D14E82EAE5C_il2cpp_TypeInfo_var);
		List_1__ctor_mAD7089571B98D6D711E15E78A187D2913B42BB33(L_0, List_1__ctor_mAD7089571B98D6D711E15E78A187D2913B42BB33_RuntimeMethod_var);
		__this->____engineStoreList_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____engineStoreList_4), (void*)L_0);
		// [SerializeField]private List<RocketPartData> _plumageStoreList = new List<RocketPartData>();
		List_1_tD33F0782DD5C792201F436775D584D14E82EAE5C* L_1 = (List_1_tD33F0782DD5C792201F436775D584D14E82EAE5C*)il2cpp_codegen_object_new(List_1_tD33F0782DD5C792201F436775D584D14E82EAE5C_il2cpp_TypeInfo_var);
		List_1__ctor_mAD7089571B98D6D711E15E78A187D2913B42BB33(L_1, List_1__ctor_mAD7089571B98D6D711E15E78A187D2913B42BB33_RuntimeMethod_var);
		__this->____plumageStoreList_5 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____plumageStoreList_5), (void*)L_1);
		// [SerializeField]private List<RocketPartData> _tankStoreList = new List<RocketPartData>();
		List_1_tD33F0782DD5C792201F436775D584D14E82EAE5C* L_2 = (List_1_tD33F0782DD5C792201F436775D584D14E82EAE5C*)il2cpp_codegen_object_new(List_1_tD33F0782DD5C792201F436775D584D14E82EAE5C_il2cpp_TypeInfo_var);
		List_1__ctor_mAD7089571B98D6D711E15E78A187D2913B42BB33(L_2, List_1__ctor_mAD7089571B98D6D711E15E78A187D2913B42BB33_RuntimeMethod_var);
		__this->____tankStoreList_6 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____tankStoreList_6), (void*)L_2);
		// [SerializeField]private List<RocketPartData> _deflectorStoreList = new List<RocketPartData>();
		List_1_tD33F0782DD5C792201F436775D584D14E82EAE5C* L_3 = (List_1_tD33F0782DD5C792201F436775D584D14E82EAE5C*)il2cpp_codegen_object_new(List_1_tD33F0782DD5C792201F436775D584D14E82EAE5C_il2cpp_TypeInfo_var);
		List_1__ctor_mAD7089571B98D6D711E15E78A187D2913B42BB33(L_3, List_1__ctor_mAD7089571B98D6D711E15E78A187D2913B42BB33_RuntimeMethod_var);
		__this->____deflectorStoreList_7 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____deflectorStoreList_7), (void*)L_3);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Menu::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Menu_Start_mC49986718939F87924A1391044721CAC6E28919D (Menu_t818E8DA587A0E558DE9BC83947BABC9A6FDD0C05* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Menu::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Menu_Update_m664984862D794DB3E17B79AFC35D12A9ED961B5D (Menu_t818E8DA587A0E558DE9BC83947BABC9A6FDD0C05* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Menu::SetMasterVolume(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Menu_SetMasterVolume_m875C60C6843E36B42CBB3A920484AF94C930C810 (Menu_t818E8DA587A0E558DE9BC83947BABC9A6FDD0C05* __this, float ___volume0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7D1364D44BA8F634BB9CD0BC5617C11222D23BFC);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _mainAudioMixer.SetFloat("MasterVolume", volume);
		AudioMixer_tE2E8D79241711CDF9AB428C7FB96A35D80E40B04* L_0 = __this->____mainAudioMixer_4;
		float L_1 = ___volume0;
		bool L_2;
		L_2 = AudioMixer_SetFloat_m4789959013BE79E4F84F446405914908ADC3F335(L_0, _stringLiteral7D1364D44BA8F634BB9CD0BC5617C11222D23BFC, L_1, NULL);
		// }
		return;
	}
}
// System.Void Menu::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Menu__ctor_mBEF2B96BC9E3D64E020EBE40FEF9CF25E6C3ED00 (Menu_t818E8DA587A0E558DE9BC83947BABC9A6FDD0C05* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SimpleDelegate_Invoke_mE39CE43C6B97CE701F70DE6A5DCDAB2EAAA05C94_inline (SimpleDelegate_t9E9D4DD827F88208033DC3640A07A0597D2BC2E1* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FloatDelegate_Invoke_m4D49E45F98F312099A4ADDA6AEC51B40771DE2E6_inline (FloatDelegate_t2334D5B86B444D0B27EA03F8E10E641D096F0C46* __this, float ___f0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, float, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___f0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color32_op_Implicit_m203A634DBB77053C9400C68065CA29529103D172_inline (Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___c0, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_0 = ___c0;
		uint8_t L_1 = L_0.___r_1;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_2 = ___c0;
		uint8_t L_3 = L_2.___g_2;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_4 = ___c0;
		uint8_t L_5 = L_4.___b_3;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_6 = ___c0;
		uint8_t L_7 = L_6.___a_4;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_8;
		memset((&L_8), 0, sizeof(L_8));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_8), ((float)(((float)L_1)/(255.0f))), ((float)(((float)L_3)/(255.0f))), ((float)(((float)L_5)/(255.0f))), ((float)(((float)L_7)/(255.0f))), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_003d;
	}

IL_003d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline (float ___value0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		float L_0 = ___value0;
		V_0 = (bool)((((float)L_0) < ((float)(0.0f)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = (0.0f);
		goto IL_002d;
	}

IL_0015:
	{
		float L_2 = ___value0;
		V_2 = (bool)((((float)L_2) > ((float)(1.0f)))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		V_1 = (1.0f);
		goto IL_002d;
	}

IL_0029:
	{
		float L_4 = ___value0;
		V_1 = L_4;
		goto IL_002d;
	}

IL_002d:
	{
		float L_5 = V_1;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m29F4414A9D30B7C0CD8455C4B2F049E8CCF66745_inline (float ___d0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a1;
		float L_1 = L_0.___x_2;
		float L_2 = ___d0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a1;
		float L_4 = L_3.___y_3;
		float L_5 = ___d0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a1;
		float L_7 = L_6.___z_4;
		float L_8 = ___d0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), ((float)il2cpp_codegen_add(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), ((float)il2cpp_codegen_subtract(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DeflectorDelegate_Invoke_m729B6CA0909341CAAAD4E822F99E81B74CD0BB66_inline (DeflectorDelegate_t7F503635DF21105D46E33B53A4921DA342943B1B* __this, DeflectorData_t6B09A69A7FF8BEF1E1CC861DDABDC15E9A8318A5* ___data0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, DeflectorData_t6B09A69A7FF8BEF1E1CC861DDABDC15E9A8318A5*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___data0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EngineDelegate_Invoke_m0B2D282E44DDEAEEE5C8C95DABC07A2179B92722_inline (EngineDelegate_t7BD0ACF919FD17DB5AED3D8609768F62FE90FC5D* __this, EngineData_t82D35F92377644522DEBEADE8F95040A3F65C6AA* ___data0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, EngineData_t82D35F92377644522DEBEADE8F95040A3F65C6AA*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___data0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PlumagageDelegate_Invoke_m7BFA66B023F4F9A87ECEE93B7DBBE2B1E182C487_inline (PlumagageDelegate_t7796A8A34036A8879878AF048A60102069DA5EDF* __this, PlumageData_tF8E9C197181F7308588184A8236BFA6838D26F4F* ___data0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, PlumageData_tF8E9C197181F7308588184A8236BFA6838D26F4F*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___data0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TankDelegate_Invoke_m6C16B27CFCCFDAF6621280BEEB2B0137F498847A_inline (TankDelegate_tD05489FE7D4AAD92C0F65F9D07006F7522B875C5* __this, TankData_t928F6B9458C59DFABB9B9083374169207AC416F0* ___data0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, TankData_t928F6B9458C59DFABB9B9083374169207AC416F0*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___data0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_2 = L_0;
		float L_1 = ___y1;
		__this->___y_3 = L_1;
		float L_2 = ___z2;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void cellDelegate_Invoke_mA7D3F9F5CE9223F8F4B7689C85C2640D1C58DDAE_inline (cellDelegate_t460ACF0FFE0D0FC85DF14E2203498FE748D74EEE* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CellDelegate_Invoke_mDDA9289DD40B5A74F4B0A9FDF6BC4535BD386A43_inline (CellDelegate_t96442117D3C482D1AF013088C40ADF19D1E6AB5C* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___r0;
		__this->___r_0 = L_0;
		float L_1 = ___g1;
		__this->___g_1 = L_1;
		float L_2 = ___b2;
		__this->___b_2 = L_2;
		float L_3 = ___a3;
		__this->___a_3 = L_3;
		return;
	}
}
