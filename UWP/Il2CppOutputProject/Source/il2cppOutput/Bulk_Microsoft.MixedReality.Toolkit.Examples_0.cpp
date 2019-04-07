#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "il2cpp-class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InterfaceFuncInvoker4
{
	typedef R (*Func)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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

// Microsoft.MixedReality.Toolkit.Core.Definitions.BoundarySystem.MixedRealityBoundaryVisualizationProfile
struct MixedRealityBoundaryVisualizationProfile_tA198D88A478CBC4C97D067F75F016ED4CC053BB1;
// Microsoft.MixedReality.Toolkit.Core.Definitions.Diagnostics.MixedRealityDiagnosticsProfile
struct MixedRealityDiagnosticsProfile_t093357B7B457411776568A856093ECA44D550536;
// Microsoft.MixedReality.Toolkit.Core.Definitions.InputSystem.MixedRealityInputSystemProfile
struct MixedRealityInputSystemProfile_tA212A9C49D4B1609CD1841D77C24E8237E7C3A09;
// Microsoft.MixedReality.Toolkit.Core.Definitions.MixedRealityCameraProfile
struct MixedRealityCameraProfile_tB0588DE1F58A8E5D9DCF69428333BC4A37737991;
// Microsoft.MixedReality.Toolkit.Core.Definitions.MixedRealityRegisteredServiceProvidersProfile
struct MixedRealityRegisteredServiceProvidersProfile_tBC087C562618F974722B0809985377E92D3DB9D3;
// Microsoft.MixedReality.Toolkit.Core.Definitions.MixedRealityToolkitConfigurationProfile
struct MixedRealityToolkitConfigurationProfile_t8FD0BE1E29894247405C6A2A716461F7FD9984D7;
// Microsoft.MixedReality.Toolkit.Core.Definitions.SpatialAwarenessSystem.SpatialAwarenessMeshObject
struct SpatialAwarenessMeshObject_t6FEF14D4690B2AC03FCED6BE6A0DFDF8A5595EBF;
// Microsoft.MixedReality.Toolkit.Core.Definitions.Utilities.SystemType
struct SystemType_t5CE0281F867A3B90634A45B1A7C5A9D34F6A2931;
// Microsoft.MixedReality.Toolkit.Core.EventDatum.Boundary.BoundaryEventData
struct BoundaryEventData_t5DDE2CD200A1E4BC0941E4B2D78C72087E2BDA81;
// Microsoft.MixedReality.Toolkit.Core.EventDatum.Input.BaseInputEventData
struct BaseInputEventData_t4E713D4242FE17A0386036D68C4C910847E7F697;
// Microsoft.MixedReality.Toolkit.Core.EventDatum.Input.InputEventData
struct InputEventData_t222623A7632AE66699840C7E19A3E967B552E9C2;
// Microsoft.MixedReality.Toolkit.Core.EventDatum.Input.MixedRealityPointerEventData
struct MixedRealityPointerEventData_t74D5F359F15D4B61B3F9C2702BC786EC1F400CCC;
// Microsoft.MixedReality.Toolkit.Core.EventDatum.SpatialAwarenessSystem.MixedRealitySpatialAwarenessEventData
struct MixedRealitySpatialAwarenessEventData_tDBA07404F7418047BA73DC78BEAF6B16929DB1CF;
// Microsoft.MixedReality.Toolkit.Core.EventDatum.SpatialAwarenessSystem.MixedRealitySpatialAwarenessEventData`1<Microsoft.MixedReality.Toolkit.Core.Definitions.SpatialAwarenessSystem.SpatialAwarenessMeshObject>
struct MixedRealitySpatialAwarenessEventData_1_t063FEEA002DF8A7DF94374B546118BAE6D4D32BD;
// Microsoft.MixedReality.Toolkit.Core.Interfaces.BoundarySystem.IMixedRealityBoundarySystem
struct IMixedRealityBoundarySystem_tFFA9C4D286DAF8C1E633DF43C6398BE616C2AEE9;
// Microsoft.MixedReality.Toolkit.Core.Interfaces.Diagnostics.IMixedRealityDiagnosticsSystem
struct IMixedRealityDiagnosticsSystem_tEBA5742EE17D2675DF7640DA5C85A1776C4BDFA4;
// Microsoft.MixedReality.Toolkit.Core.Interfaces.Events.IMixedRealityEventSource
struct IMixedRealityEventSource_t8F333E1BB0BBE25581EEC55DB0B74307E01E9E94;
// Microsoft.MixedReality.Toolkit.Core.Interfaces.InputSystem.IMixedRealityInputSource
struct IMixedRealityInputSource_tF730E20FF70F623AE5C5A6EEE2B20A34A439C5A9;
// Microsoft.MixedReality.Toolkit.Core.Interfaces.InputSystem.IMixedRealityInputSystem
struct IMixedRealityInputSystem_t462CA4E6BAACFCC4DF6E2A65EF5D0498EB81B9A0;
// Microsoft.MixedReality.Toolkit.Core.Interfaces.InputSystem.IMixedRealityPointer
struct IMixedRealityPointer_t8452A75C74DFF7144E5F4502952A0AC1B160C47A;
// Microsoft.MixedReality.Toolkit.Core.Interfaces.SpatialAwarenessSystem.IMixedRealitySpatialAwarenessSystem
struct IMixedRealitySpatialAwarenessSystem_t811C59BBC6515F6C30820D3342E6385093ECAF19;
// Microsoft.MixedReality.Toolkit.Core.Interfaces.TeleportSystem.IMixedRealityTeleportSystem
struct IMixedRealityTeleportSystem_tBDC277E48EB85AABE9C115382DF433C1FAC2D6F6;
// Microsoft.MixedReality.Toolkit.Core.Services.MixedRealityToolkit
struct MixedRealityToolkit_t638B1380E4669477D1FBF5DD68B45532D1BF0FDC;
// Microsoft.MixedReality.Toolkit.Core.Utilities.Async.AwaiterExtensions/SimpleCoroutineAwaiter
struct SimpleCoroutineAwaiter_tCF325F4B6190A2598489893345F0EB1D192F3398;
// Microsoft.MixedReality.Toolkit.Examples.Demos.BoundaryVisualizationDemo
struct BoundaryVisualizationDemo_tD5E48F3995846BA4A1909932098B3C4C09520AA4;
// Microsoft.MixedReality.Toolkit.Examples.Demos.BoundaryVisualizationDemo/<>c
struct U3CU3Ec_t5D59C0DC847EC110DE14F60C6F49962A469C1757;
// Microsoft.MixedReality.Toolkit.Examples.Demos.DemoSpatialMeshHandler
struct DemoSpatialMeshHandler_t5EA2499E558DC2033B27F8CAD6B3CB5B2C0B2A7D;
// Microsoft.MixedReality.Toolkit.Examples.Demos.DemoSpatialMeshHandler/<>c
struct U3CU3Ec_t80516076D9F25352BFE485243B172C0ECF0805F3;
// Microsoft.MixedReality.Toolkit.Examples.Demos.DiagnosticsDemoControls
struct DiagnosticsDemoControls_t46271501D3A290B12B2BA9042F9C64D62582E527;
// Microsoft.MixedReality.Toolkit.Examples.Demos.DiagnosticsDemoControls/<>c
struct U3CU3Ec_t67D746E3173732F25991D94DA2F12136EFE8DA72;
// Microsoft.MixedReality.Toolkit.Examples.Demos.LoFiFilterSelection
struct LoFiFilterSelection_tC30D19C8655BCD00E2748CC5DEEBDE0F154E4C52;
// Microsoft.MixedReality.Toolkit.Examples.Demos.StandardShader.MaterialMatrix
struct MaterialMatrix_t4C38EA16270583C7EACDC8BCF1BC292DEE1C0BB1;
// Microsoft.MixedReality.Toolkit.Examples.Demos.SwapVolume
struct SwapVolume_t30B5649189807539575F16461023F16BF8A1D904;
// Microsoft.MixedReality.Toolkit.SDK.Audio.Influencers.AudioInfluencerController
struct AudioInfluencerController_t2EB0358E5EEF5751A6545CC94A566534FDA8E660;
// Microsoft.MixedReality.Toolkit.SDK.Audio.Influencers.AudioLoFiEffect
struct AudioLoFiEffect_t2A51E9DCCA37B112EC859D6F3E923F7BA863E5DC;
// Microsoft.MixedReality.Toolkit.SDK.Utilities.Solvers.SolverHandler
struct SolverHandler_t321FA96B537A6B29F38A2020FEBFD5757CADE0FD;
// System.Action
struct Action_t591D2A86165F896B4B800BB5C25CE18672A55579;
// System.AsyncCallback
struct AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,System.UInt32>[]
struct EntryU5BU5D_tD5D5ECBBDF5A5D4DDCE8F7D2A600EB6B780A4989;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.UInt32>
struct KeyCollection_t037CA861FA8D3174C29ABC4BB8B3149D1BFA1487;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.UInt32>
struct ValueCollection_tE0BB880795681A7DAE27ED8A82793892AF5D2920;
// System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.SDK.Audio.Influencers.AudioLoFiSourceQuality,Microsoft.MixedReality.Toolkit.SDK.Audio.Influencers.AudioLoFiEffect/AudioLoFiFilterSettings>
struct Dictionary_2_tA21D86C525E0218F2C3DFF2F8E009383F46EEA64;
// System.Collections.Generic.Dictionary`2<System.Int32,System.UInt32>
struct Dictionary_2_tEBA39BE6427C28D1FC2365D442B32E6BE63BE02B;
// System.Collections.Generic.Dictionary`2<System.Type,Microsoft.MixedReality.Toolkit.Core.Interfaces.IMixedRealityService>
struct Dictionary_2_tD804D59C4C3F8DFF7C988E97912F1BFA2FC5582F;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t2F75FCBEC68AFE08982DA43985F9D04056E2BE73;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Transform>
struct IEnumerable_1_t42472AE9C2FE699C57A3900EDE1B2D22194D9D0D;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t7B82AA0F8B96BAAA21E36DDF7A1FE4348BDDBE95;
// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.SDK.Utilities.Solvers.Solver>
struct List_1_tB00775C04959271EC1C9C49656E978CA884FA9E8;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D;
// System.Collections.Generic.List`1<System.Tuple`2<System.Type,Microsoft.MixedReality.Toolkit.Core.Interfaces.IMixedRealityService>>
struct List_1_tDF897447ECFD689CCDDEDAB95FECA6B2EF119E20;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tBA8D772D87B6502B2A4D0EFE166C846285F50650;
// System.Collections.Generic.List`1<UnityEngine.Transform>
struct List_1_t1863EF4EE1FDEED14D460C85AF61BE0850892F6D;
// System.Collections.IDictionary
struct IDictionary_t1BD5C1546718A374EA8122FBD6C6EE45331E8CE7;
// System.Collections.IEnumerable
struct IEnumerable_tD74549CEA1AA48E768382B94FEACBB07E2E3FA2C;
// System.DelegateData
struct DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE;
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196;
// System.Exception
struct Exception_t;
// System.Func`1<System.Boolean>
struct Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1;
// System.IAsyncResult
struct IAsyncResult_t8E194308510B375B42432981AE5E7488C458D598;
// System.Int32[]
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83;
// System.IntPtr[]
struct IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.CompilerServices.IAsyncStateMachine
struct IAsyncStateMachine_tEFDFBE18E061A6065AB2FF735F1425FB59F919BC;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770;
// System.String
struct String_t;
// System.Threading.SynchronizationContext
struct SynchronizationContext_t06AEFE2C7CFCFC242D0A5729A74464AF18CF84E7;
// System.Threading.Tasks.Task
struct Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// UnityEngine.AudioHighPassFilter
struct AudioHighPassFilter_tAF7C56386170F84139A84528E2EC43DBC9E2C473;
// UnityEngine.AudioLowPassFilter
struct AudioLowPassFilter_t97DD6F50E1F0D2D9404D8A28A97CA3D232BF44CE;
// UnityEngine.Component
struct Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77;
// UnityEngine.GameObject
struct GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t30E337C5B5FBBCBAEDAF4093924D916CF2944067;
// UnityEngine.Material
struct Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598;
// UnityEngine.Mesh
struct Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C;
// UnityEngine.MeshCollider
struct MeshCollider_t60EB55ADE92499FE8D1AA206D2BD96E65B2766DE;
// UnityEngine.MeshFilter
struct MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0;
// UnityEngine.MeshRenderer
struct MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429;
// UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0;
// UnityEngine.Renderer
struct Renderer_t0556D67DD582620D1F495627EDE30D03284151F4;
// UnityEngine.SphereCollider
struct SphereCollider_tAC3E5E20B385DF1C0B17F3EA5C7214F71367706F;
// UnityEngine.Transform
struct Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA;
// UnityEngine.Transform[]
struct TransformU5BU5D_t3EB9781D1A1DE2674F0632C956A66AA423343139;
// UnityEngine.WaitUntil
struct WaitUntil_t012561515C0E1D3DEA19DB3A05444B020C68E13F;

extern RuntimeClass* Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var;
extern RuntimeClass* Dictionary_2_tEBA39BE6427C28D1FC2365D442B32E6BE63BE02B_il2cpp_TypeInfo_var;
extern RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
extern RuntimeClass* Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1_il2cpp_TypeInfo_var;
extern RuntimeClass* GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_il2cpp_TypeInfo_var;
extern RuntimeClass* IMixedRealityBoundarySystem_tFFA9C4D286DAF8C1E633DF43C6398BE616C2AEE9_il2cpp_TypeInfo_var;
extern RuntimeClass* IMixedRealityDiagnosticsSystem_tEBA5742EE17D2675DF7640DA5C85A1776C4BDFA4_il2cpp_TypeInfo_var;
extern RuntimeClass* IMixedRealityEventSystem_t2FA76B59455C041D6529E6EC75DD8E29A9284B8D_il2cpp_TypeInfo_var;
extern RuntimeClass* Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_tBA8D772D87B6502B2A4D0EFE166C846285F50650_il2cpp_TypeInfo_var;
extern RuntimeClass* Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598_il2cpp_TypeInfo_var;
extern RuntimeClass* MixedRealityInputAction_tB87A712377383583B43FC255F442492403992C96_il2cpp_TypeInfo_var;
extern RuntimeClass* MixedRealityToolkit_t638B1380E4669477D1FBF5DD68B45532D1BF0FDC_il2cpp_TypeInfo_var;
extern RuntimeClass* Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var;
extern RuntimeClass* Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var;
extern RuntimeClass* SimpleCoroutineAwaiter_tCF325F4B6190A2598489893345F0EB1D192F3398_il2cpp_TypeInfo_var;
extern RuntimeClass* U3CU3Ec_t5D59C0DC847EC110DE14F60C6F49962A469C1757_il2cpp_TypeInfo_var;
extern RuntimeClass* U3CU3Ec_t67D746E3173732F25991D94DA2F12136EFE8DA72_il2cpp_TypeInfo_var;
extern RuntimeClass* U3CU3Ec_t80516076D9F25352BFE485243B172C0ECF0805F3_il2cpp_TypeInfo_var;
extern RuntimeClass* UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_il2cpp_TypeInfo_var;
extern RuntimeClass* Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var;
extern RuntimeClass* WaitUntil_t012561515C0E1D3DEA19DB3A05444B020C68E13F_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral198BCEC94D4602889E6BE9EA255235FE63E9232E;
extern String_t* _stringLiteral49FA9FD831096C82AB950BC7AA0A0A7EF8A10998;
extern String_t* _stringLiteral4FEC3E1B51328AE0888C2F032A7A812DCD6E5932;
extern String_t* _stringLiteral6EF6EE07DC9D5690EBF69A0BDA7FD2041B5B51D2;
extern String_t* _stringLiteral76DB1AA30D048277794F2EB6004B5AE7BAA0CBC7;
extern String_t* _stringLiteral8254DEC6865AD0424E87DA9BFBF60837DCC65570;
extern String_t* _stringLiteral827AF2DDFE14E6C05BEB656A7ABE3AFA7FFF5DCF;
extern String_t* _stringLiteral950AF6817FC43E2E7F84DF55C56271A185CC0031;
extern String_t* _stringLiteralB9567DED74E1C05B65EAB2AE2C2B49CC75B1660A;
extern String_t* _stringLiteralC38358FDA2BB6A88ECCCFC5B161CDD90EDC182E4;
extern String_t* _stringLiteralEDADB60AC5EAA39A5120690FF8D71DFD54427CA9;
extern const RuntimeMethod* AsyncVoidMethodBuilder_AwaitOnCompleted_TisSimpleCoroutineAwaiter_tCF325F4B6190A2598489893345F0EB1D192F3398_TisU3COnEnableU3Ed__10_t25F3A91E4757E23B70B1F0FA0CC2DD63BD2B14AB_m21439A5474E724904E3715D2F60658BEB7133F3C_RuntimeMethod_var;
extern const RuntimeMethod* AsyncVoidMethodBuilder_AwaitOnCompleted_TisSimpleCoroutineAwaiter_tCF325F4B6190A2598489893345F0EB1D192F3398_TisU3COnEnableU3Ed__1_t132401ED97C6F847289963908CFA73F19D2A4544_mE16E8B570144545EF138210017BF9781AE6C2BF2_RuntimeMethod_var;
extern const RuntimeMethod* AsyncVoidMethodBuilder_AwaitOnCompleted_TisSimpleCoroutineAwaiter_tCF325F4B6190A2598489893345F0EB1D192F3398_TisU3CStartU3Ed__0_t7C225461B16887823D2847728502C5D852E3950C_m7419BE6FD90226C3FBAE528398D81D9582F86D74_RuntimeMethod_var;
extern const RuntimeMethod* AsyncVoidMethodBuilder_Start_TisU3COnEnableU3Ed__10_t25F3A91E4757E23B70B1F0FA0CC2DD63BD2B14AB_m5E1D08016260EA06FD92F079AEA0FE471BF20C1E_RuntimeMethod_var;
extern const RuntimeMethod* AsyncVoidMethodBuilder_Start_TisU3COnEnableU3Ed__1_t132401ED97C6F847289963908CFA73F19D2A4544_m5E7AEF701DB7ED147E1EE5763D4C3C789D96B73A_RuntimeMethod_var;
extern const RuntimeMethod* AsyncVoidMethodBuilder_Start_TisU3CStartU3Ed__0_t7C225461B16887823D2847728502C5D852E3950C_m1DB9609425FA088A513C10A9FD93070D2FEBE2CD_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_Add_mA325F23C42F93F9A111F6192EC1CEC7D8E481599_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_ContainsKey_m6DB80E33ECB9F99824545A77760D313CCF6DD8B9_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_Remove_m0C628D9C267769495DA8B5F019F3FA7383D71E79_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_TryGetValue_m87B04E07308BDD9404C3E7C1976D52B69517C6C8_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2__ctor_m936D2F2C58E41A0BBA2C4977D82339392359549B_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_set_Item_mAC6062FF357307AFEB797A602E8380AEF272F442_RuntimeMethod_var;
extern const RuntimeMethod* Enumerable_Cast_TisTransform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA_m2C894D1B76F567B4A8207065C8BD617503335937_RuntimeMethod_var;
extern const RuntimeMethod* Enumerable_ToList_TisTransform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA_m576129E7E9EA1B0D9D2882C862DD0416A519CA00_RuntimeMethod_var;
extern const RuntimeMethod* Func_1__ctor_m479BA9DCBE3F496111BD05CC90CB1044C5FFD552_RuntimeMethod_var;
extern const RuntimeMethod* GameObject_AddComponent_TisMeshCollider_t60EB55ADE92499FE8D1AA206D2BD96E65B2766DE_m38A789A66BD8A824B7D5FF46C20C4BD3CE0F3B3C_RuntimeMethod_var;
extern const RuntimeMethod* GameObject_GetComponent_TisAudioLoFiEffect_t2A51E9DCCA37B112EC859D6F3E923F7BA863E5DC_m7F834A0A0869721E37749214FE35A6FCD0B58DB6_RuntimeMethod_var;
extern const RuntimeMethod* GameObject_GetComponent_TisMeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0_mD1BA4FFEB800AB3D102141CD0A0ECE237EA70FB4_RuntimeMethod_var;
extern const RuntimeMethod* GameObject_GetComponent_TisMeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED_m91C1D9637A332988C72E62D52DFCFE89A6DDAB72_RuntimeMethod_var;
extern const RuntimeMethod* GameObject_GetComponent_TisRenderer_t0556D67DD582620D1F495627EDE30D03284151F4_mD65E2552CCFED4D0EC506EE90DE51215D90AEF85_RuntimeMethod_var;
extern const RuntimeMethod* GameObject_GetComponent_TisSolverHandler_t321FA96B537A6B29F38A2020FEBFD5757CADE0FD_m0985BD76C43DCDF9DE361DA4E3BDB469A3A5EC12_RuntimeMethod_var;
extern const RuntimeMethod* GameObject_GetComponent_TisSphereCollider_tAC3E5E20B385DF1C0B17F3EA5C7214F71367706F_m4DEC2B4735AA4EA2D41E2D02AF512A49659AD039_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m94A913D452C8522AD16D2EB42D46016D83D86112_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_m70B8A20433AEEDEB942CD3EEC229497AB693E9D6_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Count_m448499BD6BA2B98A6E4F92B96088CEA9EE3F4D35_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Count_m60ECB73FE15B95838DB91630185659793A5B3B8B_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Item_mA33D8A6F21573AD262EE055BA64C73668489B86D_RuntimeMethod_var;
extern const RuntimeMethod* Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m4F397BCC6697902B40033E61129D4EA6FE93570F_RuntimeMethod_var;
extern const RuntimeMethod* U3CU3Ec_U3COnEnableU3Eb__10_0_m05B3F51EE3504F3F2DBA5DFF46198781B0229EDB_RuntimeMethod_var;
extern const RuntimeMethod* U3CU3Ec_U3COnEnableU3Eb__1_0_m0DAD51E2B496591F538356D28B851DB9A0B24B40_RuntimeMethod_var;
extern const RuntimeMethod* U3CU3Ec_U3CStartU3Eb__0_0_m3A4D7731BB2D848AF897209FB1EB0B9666444CC5_RuntimeMethod_var;
extern const uint32_t BoundaryVisualizationDemo_AddMarkers_m5F7A12FF2E1C30208AA156A2B68FFCAD5A1D2A31_MetadataUsageId;
extern const uint32_t BoundaryVisualizationDemo_Awake_mC9C5771F3D8AD8D65E43732349A1DF6869F830DA_MetadataUsageId;
extern const uint32_t BoundaryVisualizationDemo_OnBoundaryVisualizationChanged_m0BE3CB64DA17978EFAB727EBDC8FF35A1EF020D0_MetadataUsageId;
extern const uint32_t BoundaryVisualizationDemo_OnDisable_mF5CBA59E396DEC6CAB3EF928908078911496A888_MetadataUsageId;
extern const uint32_t BoundaryVisualizationDemo_OnEnable_mDEC4960492803CE7E841D4F91178721B1C3F24DE_MetadataUsageId;
extern const uint32_t BoundaryVisualizationDemo_Start_mDD4F37D1285AF82E7835042581B13E784CD30EE0_MetadataUsageId;
extern const uint32_t BoundaryVisualizationDemo_Update_mF383A7D4EFA0A7DEE5504230D48E2F988E9971B4_MetadataUsageId;
extern const uint32_t BoundaryVisualizationDemo__ctor_m36673756CDC840CF309141318A65008B66888463_MetadataUsageId;
extern const uint32_t DemoSpatialMeshHandler_OnDisable_m7462CFEDA74845AEFCA58321CE333504823C2F0A_MetadataUsageId;
extern const uint32_t DemoSpatialMeshHandler_OnEnable_m9C1F9A6E9DE60C365CA39C286400700B4CD5C325_MetadataUsageId;
extern const uint32_t DemoSpatialMeshHandler_OnObservationAdded_m0788772A2EF4606E92A493C566FB3C0B3E850DB1_MetadataUsageId;
extern const uint32_t DemoSpatialMeshHandler_OnObservationRemoved_mE72C6FAD78FE9C06052F9E0C0C1E0BDCF4295B83_MetadataUsageId;
extern const uint32_t DemoSpatialMeshHandler_OnObservationUpdated_m7A655CE30DB0EEDAC65B347D96385955B806A49D_MetadataUsageId;
extern const uint32_t DemoSpatialMeshHandler__ctor_m128FF5A42EB7BEF2A1D463B5E6179FF7E8D0EAB4_MetadataUsageId;
extern const uint32_t DiagnosticsDemoControls_OnToggleDiagnostics_m055C713D11E3DFD3463E235CFA7E91204FBC7F9E_MetadataUsageId;
extern const uint32_t DiagnosticsDemoControls_OnToggleProfiler_m2AE7FC432220E62506C6F0BC02C5243AC0E46020_MetadataUsageId;
extern const uint32_t DiagnosticsDemoControls_Start_m2EE05F8C10DC846C6F63B2BE3D8B7D8EDA5E5492_MetadataUsageId;
extern const uint32_t LoFiFilterSelection_OnPointerClicked_m10BF6B7CC454F01183999CE9FC5CCD50F752AE7A_MetadataUsageId;
extern const uint32_t LoFiFilterSelection_Start_m9FC6CAA21C5BF0CE6A109DCADEBAA36ED38E87F9_MetadataUsageId;
extern const uint32_t MaterialMatrix_BuildMatrix_m2E173BFBB7F2BD9F1B8A5922CED661C78E5E5294_MetadataUsageId;
extern const uint32_t MaterialMatrix__ctor_mFCCC0A86E66D0E3B69B1C497B366F32E71F752E6_MetadataUsageId;
extern const uint32_t SwapVolume_Awake_m96C2D3001E1508636521A857A930976DB3324F0B_MetadataUsageId;
extern const uint32_t SwapVolume_OnDestroy_mCAF68BE5D734301B1FDB18F42991B3720D06422C_MetadataUsageId;
extern const uint32_t SwapVolume_OnPointerClicked_mC16666B10E130A24225313A343BB5255A01BBE6C_MetadataUsageId;
extern const uint32_t SwapVolume_Start_m8AA462E44E48A93870D984073CA394F635C58762_MetadataUsageId;
extern const uint32_t SwapVolume__ctor_mC61D2157AB81F9886568DD344E57F3B45F3577F6_MetadataUsageId;
extern const uint32_t U3COnEnableU3Ed__10_MoveNext_m1F40E12D5574152F9B647533BCF770A9ED9A229C_MetadataUsageId;
extern const uint32_t U3COnEnableU3Ed__1_MoveNext_mC5F58C5326EF7CE7BE264CC67D7166C0505E0284_MetadataUsageId;
extern const uint32_t U3CStartU3Ed__0_MoveNext_m9CE0D730F4FD3EE2C5BF6E46EDF9E09D9BC6E777_MetadataUsageId;
extern const uint32_t U3CU3Ec_U3COnEnableU3Eb__10_0_m05B3F51EE3504F3F2DBA5DFF46198781B0229EDB_MetadataUsageId;
extern const uint32_t U3CU3Ec_U3COnEnableU3Eb__1_0_m0DAD51E2B496591F538356D28B851DB9A0B24B40_MetadataUsageId;
extern const uint32_t U3CU3Ec_U3CStartU3Eb__0_0_m3A4D7731BB2D848AF897209FB1EB0B9666444CC5_MetadataUsageId;
extern const uint32_t U3CU3Ec__cctor_m667695B05CD783BA72264F068BB0F3D1B459DF86_MetadataUsageId;
extern const uint32_t U3CU3Ec__cctor_m76BD9A112F3836812533902BF6DAA3FDC34BAE0F_MetadataUsageId;
extern const uint32_t U3CU3Ec__cctor_m999963161EC954443327E4D8B51474A0C1B12CDE_MetadataUsageId;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;



#ifndef U3CMODULEU3E_T4585E70202B48634B3000975BF4807556F40405B_H
#define U3CMODULEU3E_T4585E70202B48634B3000975BF4807556F40405B_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t4585E70202B48634B3000975BF4807556F40405B 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T4585E70202B48634B3000975BF4807556F40405B_H
#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
#ifndef SIMPLECOROUTINEAWAITER_TCF325F4B6190A2598489893345F0EB1D192F3398_H
#define SIMPLECOROUTINEAWAITER_TCF325F4B6190A2598489893345F0EB1D192F3398_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Core.Utilities.Async.AwaiterExtensions_SimpleCoroutineAwaiter
struct  SimpleCoroutineAwaiter_tCF325F4B6190A2598489893345F0EB1D192F3398  : public RuntimeObject
{
public:
	// System.Exception Microsoft.MixedReality.Toolkit.Core.Utilities.Async.AwaiterExtensions_SimpleCoroutineAwaiter::exception
	Exception_t * ___exception_0;
	// System.Action Microsoft.MixedReality.Toolkit.Core.Utilities.Async.AwaiterExtensions_SimpleCoroutineAwaiter::continuation
	Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * ___continuation_1;
	// System.Boolean Microsoft.MixedReality.Toolkit.Core.Utilities.Async.AwaiterExtensions_SimpleCoroutineAwaiter::<IsCompleted>k__BackingField
	bool ___U3CIsCompletedU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_exception_0() { return static_cast<int32_t>(offsetof(SimpleCoroutineAwaiter_tCF325F4B6190A2598489893345F0EB1D192F3398, ___exception_0)); }
	inline Exception_t * get_exception_0() const { return ___exception_0; }
	inline Exception_t ** get_address_of_exception_0() { return &___exception_0; }
	inline void set_exception_0(Exception_t * value)
	{
		___exception_0 = value;
		Il2CppCodeGenWriteBarrier((&___exception_0), value);
	}

	inline static int32_t get_offset_of_continuation_1() { return static_cast<int32_t>(offsetof(SimpleCoroutineAwaiter_tCF325F4B6190A2598489893345F0EB1D192F3398, ___continuation_1)); }
	inline Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * get_continuation_1() const { return ___continuation_1; }
	inline Action_t591D2A86165F896B4B800BB5C25CE18672A55579 ** get_address_of_continuation_1() { return &___continuation_1; }
	inline void set_continuation_1(Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * value)
	{
		___continuation_1 = value;
		Il2CppCodeGenWriteBarrier((&___continuation_1), value);
	}

	inline static int32_t get_offset_of_U3CIsCompletedU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(SimpleCoroutineAwaiter_tCF325F4B6190A2598489893345F0EB1D192F3398, ___U3CIsCompletedU3Ek__BackingField_2)); }
	inline bool get_U3CIsCompletedU3Ek__BackingField_2() const { return ___U3CIsCompletedU3Ek__BackingField_2; }
	inline bool* get_address_of_U3CIsCompletedU3Ek__BackingField_2() { return &___U3CIsCompletedU3Ek__BackingField_2; }
	inline void set_U3CIsCompletedU3Ek__BackingField_2(bool value)
	{
		___U3CIsCompletedU3Ek__BackingField_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SIMPLECOROUTINEAWAITER_TCF325F4B6190A2598489893345F0EB1D192F3398_H
#ifndef U3CU3EC_T5D59C0DC847EC110DE14F60C6F49962A469C1757_H
#define U3CU3EC_T5D59C0DC847EC110DE14F60C6F49962A469C1757_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Examples.Demos.BoundaryVisualizationDemo_<>c
struct  U3CU3Ec_t5D59C0DC847EC110DE14F60C6F49962A469C1757  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t5D59C0DC847EC110DE14F60C6F49962A469C1757_StaticFields
{
public:
	// Microsoft.MixedReality.Toolkit.Examples.Demos.BoundaryVisualizationDemo_<>c Microsoft.MixedReality.Toolkit.Examples.Demos.BoundaryVisualizationDemo_<>c::<>9
	U3CU3Ec_t5D59C0DC847EC110DE14F60C6F49962A469C1757 * ___U3CU3E9_0;
	// System.Func`1<System.Boolean> Microsoft.MixedReality.Toolkit.Examples.Demos.BoundaryVisualizationDemo_<>c::<>9__10_0
	Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 * ___U3CU3E9__10_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t5D59C0DC847EC110DE14F60C6F49962A469C1757_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t5D59C0DC847EC110DE14F60C6F49962A469C1757 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t5D59C0DC847EC110DE14F60C6F49962A469C1757 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t5D59C0DC847EC110DE14F60C6F49962A469C1757 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E9_0), value);
	}

	inline static int32_t get_offset_of_U3CU3E9__10_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t5D59C0DC847EC110DE14F60C6F49962A469C1757_StaticFields, ___U3CU3E9__10_0_1)); }
	inline Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 * get_U3CU3E9__10_0_1() const { return ___U3CU3E9__10_0_1; }
	inline Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 ** get_address_of_U3CU3E9__10_0_1() { return &___U3CU3E9__10_0_1; }
	inline void set_U3CU3E9__10_0_1(Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 * value)
	{
		___U3CU3E9__10_0_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E9__10_0_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CU3EC_T5D59C0DC847EC110DE14F60C6F49962A469C1757_H
#ifndef U3CU3EC_T80516076D9F25352BFE485243B172C0ECF0805F3_H
#define U3CU3EC_T80516076D9F25352BFE485243B172C0ECF0805F3_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Examples.Demos.DemoSpatialMeshHandler_<>c
struct  U3CU3Ec_t80516076D9F25352BFE485243B172C0ECF0805F3  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t80516076D9F25352BFE485243B172C0ECF0805F3_StaticFields
{
public:
	// Microsoft.MixedReality.Toolkit.Examples.Demos.DemoSpatialMeshHandler_<>c Microsoft.MixedReality.Toolkit.Examples.Demos.DemoSpatialMeshHandler_<>c::<>9
	U3CU3Ec_t80516076D9F25352BFE485243B172C0ECF0805F3 * ___U3CU3E9_0;
	// System.Func`1<System.Boolean> Microsoft.MixedReality.Toolkit.Examples.Demos.DemoSpatialMeshHandler_<>c::<>9__1_0
	Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 * ___U3CU3E9__1_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t80516076D9F25352BFE485243B172C0ECF0805F3_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t80516076D9F25352BFE485243B172C0ECF0805F3 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t80516076D9F25352BFE485243B172C0ECF0805F3 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t80516076D9F25352BFE485243B172C0ECF0805F3 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E9_0), value);
	}

	inline static int32_t get_offset_of_U3CU3E9__1_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t80516076D9F25352BFE485243B172C0ECF0805F3_StaticFields, ___U3CU3E9__1_0_1)); }
	inline Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 * get_U3CU3E9__1_0_1() const { return ___U3CU3E9__1_0_1; }
	inline Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 ** get_address_of_U3CU3E9__1_0_1() { return &___U3CU3E9__1_0_1; }
	inline void set_U3CU3E9__1_0_1(Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 * value)
	{
		___U3CU3E9__1_0_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E9__1_0_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CU3EC_T80516076D9F25352BFE485243B172C0ECF0805F3_H
#ifndef U3CU3EC_T67D746E3173732F25991D94DA2F12136EFE8DA72_H
#define U3CU3EC_T67D746E3173732F25991D94DA2F12136EFE8DA72_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Examples.Demos.DiagnosticsDemoControls_<>c
struct  U3CU3Ec_t67D746E3173732F25991D94DA2F12136EFE8DA72  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t67D746E3173732F25991D94DA2F12136EFE8DA72_StaticFields
{
public:
	// Microsoft.MixedReality.Toolkit.Examples.Demos.DiagnosticsDemoControls_<>c Microsoft.MixedReality.Toolkit.Examples.Demos.DiagnosticsDemoControls_<>c::<>9
	U3CU3Ec_t67D746E3173732F25991D94DA2F12136EFE8DA72 * ___U3CU3E9_0;
	// System.Func`1<System.Boolean> Microsoft.MixedReality.Toolkit.Examples.Demos.DiagnosticsDemoControls_<>c::<>9__0_0
	Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 * ___U3CU3E9__0_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t67D746E3173732F25991D94DA2F12136EFE8DA72_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t67D746E3173732F25991D94DA2F12136EFE8DA72 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t67D746E3173732F25991D94DA2F12136EFE8DA72 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t67D746E3173732F25991D94DA2F12136EFE8DA72 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E9_0), value);
	}

	inline static int32_t get_offset_of_U3CU3E9__0_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t67D746E3173732F25991D94DA2F12136EFE8DA72_StaticFields, ___U3CU3E9__0_0_1)); }
	inline Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 * get_U3CU3E9__0_0_1() const { return ___U3CU3E9__0_0_1; }
	inline Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 ** get_address_of_U3CU3E9__0_0_1() { return &___U3CU3E9__0_0_1; }
	inline void set_U3CU3E9__0_0_1(Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 * value)
	{
		___U3CU3E9__0_0_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E9__0_0_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CU3EC_T67D746E3173732F25991D94DA2F12136EFE8DA72_H
struct Il2CppArrayBounds;
#ifndef RUNTIMEARRAY_H
#define RUNTIMEARRAY_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Array

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEARRAY_H
#ifndef DICTIONARY_2_TEBA39BE6427C28D1FC2365D442B32E6BE63BE02B_H
#define DICTIONARY_2_TEBA39BE6427C28D1FC2365D442B32E6BE63BE02B_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.Int32,System.UInt32>
struct  Dictionary_2_tEBA39BE6427C28D1FC2365D442B32E6BE63BE02B  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___buckets_0;
	// System.Collections.Generic.Dictionary`2_Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tD5D5ECBBDF5A5D4DDCE8F7D2A600EB6B780A4989* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2_KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t037CA861FA8D3174C29ABC4BB8B3149D1BFA1487 * ___keys_7;
	// System.Collections.Generic.Dictionary`2_ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tE0BB880795681A7DAE27ED8A82793892AF5D2920 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tEBA39BE6427C28D1FC2365D442B32E6BE63BE02B, ___buckets_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((&___buckets_0), value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tEBA39BE6427C28D1FC2365D442B32E6BE63BE02B, ___entries_1)); }
	inline EntryU5BU5D_tD5D5ECBBDF5A5D4DDCE8F7D2A600EB6B780A4989* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tD5D5ECBBDF5A5D4DDCE8F7D2A600EB6B780A4989** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tD5D5ECBBDF5A5D4DDCE8F7D2A600EB6B780A4989* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((&___entries_1), value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tEBA39BE6427C28D1FC2365D442B32E6BE63BE02B, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tEBA39BE6427C28D1FC2365D442B32E6BE63BE02B, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tEBA39BE6427C28D1FC2365D442B32E6BE63BE02B, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tEBA39BE6427C28D1FC2365D442B32E6BE63BE02B, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tEBA39BE6427C28D1FC2365D442B32E6BE63BE02B, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((&___comparer_6), value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tEBA39BE6427C28D1FC2365D442B32E6BE63BE02B, ___keys_7)); }
	inline KeyCollection_t037CA861FA8D3174C29ABC4BB8B3149D1BFA1487 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t037CA861FA8D3174C29ABC4BB8B3149D1BFA1487 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t037CA861FA8D3174C29ABC4BB8B3149D1BFA1487 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((&___keys_7), value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tEBA39BE6427C28D1FC2365D442B32E6BE63BE02B, ___values_8)); }
	inline ValueCollection_tE0BB880795681A7DAE27ED8A82793892AF5D2920 * get_values_8() const { return ___values_8; }
	inline ValueCollection_tE0BB880795681A7DAE27ED8A82793892AF5D2920 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tE0BB880795681A7DAE27ED8A82793892AF5D2920 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((&___values_8), value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tEBA39BE6427C28D1FC2365D442B32E6BE63BE02B, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_TEBA39BE6427C28D1FC2365D442B32E6BE63BE02B_H
#ifndef LIST_1_TBA8D772D87B6502B2A4D0EFE166C846285F50650_H
#define LIST_1_TBA8D772D87B6502B2A4D0EFE166C846285F50650_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct  List_1_tBA8D772D87B6502B2A4D0EFE166C846285F50650  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	GameObjectU5BU5D_t30E337C5B5FBBCBAEDAF4093924D916CF2944067* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tBA8D772D87B6502B2A4D0EFE166C846285F50650, ____items_1)); }
	inline GameObjectU5BU5D_t30E337C5B5FBBCBAEDAF4093924D916CF2944067* get__items_1() const { return ____items_1; }
	inline GameObjectU5BU5D_t30E337C5B5FBBCBAEDAF4093924D916CF2944067** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(GameObjectU5BU5D_t30E337C5B5FBBCBAEDAF4093924D916CF2944067* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tBA8D772D87B6502B2A4D0EFE166C846285F50650, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tBA8D772D87B6502B2A4D0EFE166C846285F50650, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tBA8D772D87B6502B2A4D0EFE166C846285F50650, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_4), value);
	}
};

struct List_1_tBA8D772D87B6502B2A4D0EFE166C846285F50650_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	GameObjectU5BU5D_t30E337C5B5FBBCBAEDAF4093924D916CF2944067* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tBA8D772D87B6502B2A4D0EFE166C846285F50650_StaticFields, ____emptyArray_5)); }
	inline GameObjectU5BU5D_t30E337C5B5FBBCBAEDAF4093924D916CF2944067* get__emptyArray_5() const { return ____emptyArray_5; }
	inline GameObjectU5BU5D_t30E337C5B5FBBCBAEDAF4093924D916CF2944067** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(GameObjectU5BU5D_t30E337C5B5FBBCBAEDAF4093924D916CF2944067* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((&____emptyArray_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_TBA8D772D87B6502B2A4D0EFE166C846285F50650_H
#ifndef LIST_1_T1863EF4EE1FDEED14D460C85AF61BE0850892F6D_H
#define LIST_1_T1863EF4EE1FDEED14D460C85AF61BE0850892F6D_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<UnityEngine.Transform>
struct  List_1_t1863EF4EE1FDEED14D460C85AF61BE0850892F6D  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	TransformU5BU5D_t3EB9781D1A1DE2674F0632C956A66AA423343139* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t1863EF4EE1FDEED14D460C85AF61BE0850892F6D, ____items_1)); }
	inline TransformU5BU5D_t3EB9781D1A1DE2674F0632C956A66AA423343139* get__items_1() const { return ____items_1; }
	inline TransformU5BU5D_t3EB9781D1A1DE2674F0632C956A66AA423343139** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(TransformU5BU5D_t3EB9781D1A1DE2674F0632C956A66AA423343139* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t1863EF4EE1FDEED14D460C85AF61BE0850892F6D, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t1863EF4EE1FDEED14D460C85AF61BE0850892F6D, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t1863EF4EE1FDEED14D460C85AF61BE0850892F6D, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_4), value);
	}
};

struct List_1_t1863EF4EE1FDEED14D460C85AF61BE0850892F6D_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	TransformU5BU5D_t3EB9781D1A1DE2674F0632C956A66AA423343139* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t1863EF4EE1FDEED14D460C85AF61BE0850892F6D_StaticFields, ____emptyArray_5)); }
	inline TransformU5BU5D_t3EB9781D1A1DE2674F0632C956A66AA423343139* get__emptyArray_5() const { return ____emptyArray_5; }
	inline TransformU5BU5D_t3EB9781D1A1DE2674F0632C956A66AA423343139** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(TransformU5BU5D_t3EB9781D1A1DE2674F0632C956A66AA423343139* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((&____emptyArray_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T1863EF4EE1FDEED14D460C85AF61BE0850892F6D_H
#ifndef EXCEPTION_T_H
#define EXCEPTION_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Exception
struct  Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((&____className_1), value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((&____message_2), value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((&____data_3), value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((&____innerException_4), value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((&____helpURL_5), value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((&____stackTrace_6), value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((&____stackTraceString_7), value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((&____remoteStackTraceString_8), value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((&____dynamicMethods_10), value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((&____source_12), value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((&____safeSerializationManager_13), value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((&___captured_traces_14), value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((&___native_trace_ips_15), value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_EDILock_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	intptr_t* ___native_trace_ips_15;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	intptr_t* ___native_trace_ips_15;
};
#endif // EXCEPTION_T_H
#ifndef STRING_T_H
#define STRING_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRING_T_H
#ifndef VALUETYPE_T4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_H
#define VALUETYPE_T4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_com
{
};
#endif // VALUETYPE_T4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_H
#ifndef CUSTOMYIELDINSTRUCTION_T819BB0973AFF22766749FF087B8AEFEAF3C2CB7D_H
#define CUSTOMYIELDINSTRUCTION_T819BB0973AFF22766749FF087B8AEFEAF3C2CB7D_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.CustomYieldInstruction
struct  CustomYieldInstruction_t819BB0973AFF22766749FF087B8AEFEAF3C2CB7D  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CUSTOMYIELDINSTRUCTION_T819BB0973AFF22766749FF087B8AEFEAF3C2CB7D_H
#ifndef ABSTRACTEVENTDATA_T636F385820C291DAE25897BCEB4FBCADDA3B75F6_H
#define ABSTRACTEVENTDATA_T636F385820C291DAE25897BCEB4FBCADDA3B75F6_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.AbstractEventData
struct  AbstractEventData_t636F385820C291DAE25897BCEB4FBCADDA3B75F6  : public RuntimeObject
{
public:
	// System.Boolean UnityEngine.EventSystems.AbstractEventData::m_Used
	bool ___m_Used_0;

public:
	inline static int32_t get_offset_of_m_Used_0() { return static_cast<int32_t>(offsetof(AbstractEventData_t636F385820C291DAE25897BCEB4FBCADDA3B75F6, ___m_Used_0)); }
	inline bool get_m_Used_0() const { return ___m_Used_0; }
	inline bool* get_address_of_m_Used_0() { return &___m_Used_0; }
	inline void set_m_Used_0(bool value)
	{
		___m_Used_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ABSTRACTEVENTDATA_T636F385820C291DAE25897BCEB4FBCADDA3B75F6_H
#ifndef AUDIOLOFIFILTERSETTINGS_T64888742AE555FA0F38BFA198078A216AAD3951C_H
#define AUDIOLOFIFILTERSETTINGS_T64888742AE555FA0F38BFA198078A216AAD3951C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.SDK.Audio.Influencers.AudioLoFiEffect_AudioLoFiFilterSettings
struct  AudioLoFiFilterSettings_t64888742AE555FA0F38BFA198078A216AAD3951C 
{
public:
	// System.Single Microsoft.MixedReality.Toolkit.SDK.Audio.Influencers.AudioLoFiEffect_AudioLoFiFilterSettings::<LowPassCutoff>k__BackingField
	float ___U3CLowPassCutoffU3Ek__BackingField_0;
	// System.Single Microsoft.MixedReality.Toolkit.SDK.Audio.Influencers.AudioLoFiEffect_AudioLoFiFilterSettings::<HighPassCutoff>k__BackingField
	float ___U3CHighPassCutoffU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CLowPassCutoffU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(AudioLoFiFilterSettings_t64888742AE555FA0F38BFA198078A216AAD3951C, ___U3CLowPassCutoffU3Ek__BackingField_0)); }
	inline float get_U3CLowPassCutoffU3Ek__BackingField_0() const { return ___U3CLowPassCutoffU3Ek__BackingField_0; }
	inline float* get_address_of_U3CLowPassCutoffU3Ek__BackingField_0() { return &___U3CLowPassCutoffU3Ek__BackingField_0; }
	inline void set_U3CLowPassCutoffU3Ek__BackingField_0(float value)
	{
		___U3CLowPassCutoffU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CHighPassCutoffU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(AudioLoFiFilterSettings_t64888742AE555FA0F38BFA198078A216AAD3951C, ___U3CHighPassCutoffU3Ek__BackingField_1)); }
	inline float get_U3CHighPassCutoffU3Ek__BackingField_1() const { return ___U3CHighPassCutoffU3Ek__BackingField_1; }
	inline float* get_address_of_U3CHighPassCutoffU3Ek__BackingField_1() { return &___U3CHighPassCutoffU3Ek__BackingField_1; }
	inline void set_U3CHighPassCutoffU3Ek__BackingField_1(float value)
	{
		___U3CHighPassCutoffU3Ek__BackingField_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUDIOLOFIFILTERSETTINGS_T64888742AE555FA0F38BFA198078A216AAD3951C_H
#ifndef BOOLEAN_TB53F6830F670160873277339AA58F15CAED4399C_H
#define BOOLEAN_TB53F6830F670160873277339AA58F15CAED4399C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
struct  Boolean_tB53F6830F670160873277339AA58F15CAED4399C 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((&___TrueString_5), value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEAN_TB53F6830F670160873277339AA58F15CAED4399C_H
#ifndef DATETIME_T349B7449FBAAFF4192636E2B7A07694DA9236132_H
#define DATETIME_T349B7449FBAAFF4192636E2B7A07694DA9236132_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTime
struct  DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 
{
public:
	// System.UInt64 System.DateTime::dateData
	uint64_t ___dateData_44;

public:
	inline static int32_t get_offset_of_dateData_44() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132, ___dateData_44)); }
	inline uint64_t get_dateData_44() const { return ___dateData_44; }
	inline uint64_t* get_address_of_dateData_44() { return &___dateData_44; }
	inline void set_dateData_44(uint64_t value)
	{
		___dateData_44 = value;
	}
};

struct DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields
{
public:
	// System.Int32[] System.DateTime::DaysToMonth365
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___DaysToMonth365_29;
	// System.Int32[] System.DateTime::DaysToMonth366
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___DaysToMonth366_30;
	// System.DateTime System.DateTime::MinValue
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___MinValue_31;
	// System.DateTime System.DateTime::MaxValue
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___MaxValue_32;

public:
	inline static int32_t get_offset_of_DaysToMonth365_29() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___DaysToMonth365_29)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_DaysToMonth365_29() const { return ___DaysToMonth365_29; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_DaysToMonth365_29() { return &___DaysToMonth365_29; }
	inline void set_DaysToMonth365_29(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___DaysToMonth365_29 = value;
		Il2CppCodeGenWriteBarrier((&___DaysToMonth365_29), value);
	}

	inline static int32_t get_offset_of_DaysToMonth366_30() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___DaysToMonth366_30)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_DaysToMonth366_30() const { return ___DaysToMonth366_30; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_DaysToMonth366_30() { return &___DaysToMonth366_30; }
	inline void set_DaysToMonth366_30(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___DaysToMonth366_30 = value;
		Il2CppCodeGenWriteBarrier((&___DaysToMonth366_30), value);
	}

	inline static int32_t get_offset_of_MinValue_31() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___MinValue_31)); }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  get_MinValue_31() const { return ___MinValue_31; }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * get_address_of_MinValue_31() { return &___MinValue_31; }
	inline void set_MinValue_31(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  value)
	{
		___MinValue_31 = value;
	}

	inline static int32_t get_offset_of_MaxValue_32() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___MaxValue_32)); }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  get_MaxValue_32() const { return ___MaxValue_32; }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * get_address_of_MaxValue_32() { return &___MaxValue_32; }
	inline void set_MaxValue_32(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  value)
	{
		___MaxValue_32 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATETIME_T349B7449FBAAFF4192636E2B7A07694DA9236132_H
#ifndef ENUM_T2AF27C02B8653AE29442467390005ABC74D8F521_H
#define ENUM_T2AF27C02B8653AE29442467390005ABC74D8F521_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t2AF27C02B8653AE29442467390005ABC74D8F521  : public ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF
{
public:

public:
};

struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((&___enumSeperatorCharArray_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_com
{
};
#endif // ENUM_T2AF27C02B8653AE29442467390005ABC74D8F521_H
#ifndef INT32_T585191389E07734F19F3156FF88FB3EF4800D102_H
#define INT32_T585191389E07734F19F3156FF88FB3EF4800D102_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32
struct  Int32_t585191389E07734F19F3156FF88FB3EF4800D102 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_t585191389E07734F19F3156FF88FB3EF4800D102, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32_T585191389E07734F19F3156FF88FB3EF4800D102_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef ASYNCMETHODBUILDERCORE_T4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01_H
#define ASYNCMETHODBUILDERCORE_T4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct  AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01 
{
public:
	// System.Runtime.CompilerServices.IAsyncStateMachine System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_stateMachine
	RuntimeObject* ___m_stateMachine_0;
	// System.Action System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_defaultContextAction
	Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * ___m_defaultContextAction_1;

public:
	inline static int32_t get_offset_of_m_stateMachine_0() { return static_cast<int32_t>(offsetof(AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01, ___m_stateMachine_0)); }
	inline RuntimeObject* get_m_stateMachine_0() const { return ___m_stateMachine_0; }
	inline RuntimeObject** get_address_of_m_stateMachine_0() { return &___m_stateMachine_0; }
	inline void set_m_stateMachine_0(RuntimeObject* value)
	{
		___m_stateMachine_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_stateMachine_0), value);
	}

	inline static int32_t get_offset_of_m_defaultContextAction_1() { return static_cast<int32_t>(offsetof(AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01, ___m_defaultContextAction_1)); }
	inline Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * get_m_defaultContextAction_1() const { return ___m_defaultContextAction_1; }
	inline Action_t591D2A86165F896B4B800BB5C25CE18672A55579 ** get_address_of_m_defaultContextAction_1() { return &___m_defaultContextAction_1; }
	inline void set_m_defaultContextAction_1(Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * value)
	{
		___m_defaultContextAction_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_defaultContextAction_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01_marshaled_pinvoke
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01_marshaled_com
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};
#endif // ASYNCMETHODBUILDERCORE_T4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01_H
#ifndef SINGLE_TDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_H
#define SINGLE_TDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Single
struct  Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINGLE_TDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_H
#ifndef UINT32_T4980FA09003AFAAB5A6E361BA2748EA9A005709B_H
#define UINT32_T4980FA09003AFAAB5A6E361BA2748EA9A005709B_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UInt32
struct  UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B, ___m_value_0)); }
	inline uint32_t get_m_value_0() const { return ___m_value_0; }
	inline uint32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint32_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT32_T4980FA09003AFAAB5A6E361BA2748EA9A005709B_H
#ifndef VOID_T22962CB4C05B1D89B55A6E1139F0E87A90987017_H
#define VOID_T22962CB4C05B1D89B55A6E1139F0E87A90987017_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T22962CB4C05B1D89B55A6E1139F0E87A90987017_H
#ifndef BASEEVENTDATA_T46C9D2AE3183A742EDE89944AF64A23DBF1B80A5_H
#define BASEEVENTDATA_T46C9D2AE3183A742EDE89944AF64A23DBF1B80A5_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.BaseEventData
struct  BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5  : public AbstractEventData_t636F385820C291DAE25897BCEB4FBCADDA3B75F6
{
public:
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.BaseEventData::m_EventSystem
	EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 * ___m_EventSystem_1;

public:
	inline static int32_t get_offset_of_m_EventSystem_1() { return static_cast<int32_t>(offsetof(BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5, ___m_EventSystem_1)); }
	inline EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 * get_m_EventSystem_1() const { return ___m_EventSystem_1; }
	inline EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 ** get_address_of_m_EventSystem_1() { return &___m_EventSystem_1; }
	inline void set_m_EventSystem_1(EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 * value)
	{
		___m_EventSystem_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_EventSystem_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BASEEVENTDATA_T46C9D2AE3183A742EDE89944AF64A23DBF1B80A5_H
#ifndef QUATERNION_T319F3319A7D43FFA5D819AD6C0A98851F0095357_H
#define QUATERNION_T319F3319A7D43FFA5D819AD6C0A98851F0095357_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Quaternion
struct  Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___identityQuaternion_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // QUATERNION_T319F3319A7D43FFA5D819AD6C0A98851F0095357_H
#ifndef VECTOR2_TA85D2DD88578276CA8A8796756458277E72D073D_H
#define VECTOR2_TA85D2DD88578276CA8A8796756458277E72D073D_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector2
struct  Vector2_tA85D2DD88578276CA8A8796756458277E72D073D 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___zeroVector_2)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___oneVector_3)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___upVector_4)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___downVector_5)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___leftVector_6)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___rightVector_7)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___negativeInfinityVector_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR2_TA85D2DD88578276CA8A8796756458277E72D073D_H
#ifndef VECTOR3_TDCF05E21F632FE2BA260C06E0D10CA81513E6720_H
#define VECTOR3_TDCF05E21F632FE2BA260C06E0D10CA81513E6720_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector3
struct  Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___zeroVector_5)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___oneVector_6)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___upVector_7)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___downVector_8)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___leftVector_9)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___rightVector_10)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___forwardVector_11)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___backVector_12)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___negativeInfinityVector_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR3_TDCF05E21F632FE2BA260C06E0D10CA81513E6720_H
#ifndef WAITUNTIL_T012561515C0E1D3DEA19DB3A05444B020C68E13F_H
#define WAITUNTIL_T012561515C0E1D3DEA19DB3A05444B020C68E13F_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.WaitUntil
struct  WaitUntil_t012561515C0E1D3DEA19DB3A05444B020C68E13F  : public CustomYieldInstruction_t819BB0973AFF22766749FF087B8AEFEAF3C2CB7D
{
public:
	// System.Func`1<System.Boolean> UnityEngine.WaitUntil::m_Predicate
	Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 * ___m_Predicate_0;

public:
	inline static int32_t get_offset_of_m_Predicate_0() { return static_cast<int32_t>(offsetof(WaitUntil_t012561515C0E1D3DEA19DB3A05444B020C68E13F, ___m_Predicate_0)); }
	inline Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 * get_m_Predicate_0() const { return ___m_Predicate_0; }
	inline Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 ** get_address_of_m_Predicate_0() { return &___m_Predicate_0; }
	inline void set_m_Predicate_0(Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 * value)
	{
		___m_Predicate_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Predicate_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WAITUNTIL_T012561515C0E1D3DEA19DB3A05444B020C68E13F_H
#ifndef AXISTYPE_T2C42254D0B6158D9AD6479D6A2AFD28EDFA39F3F_H
#define AXISTYPE_T2C42254D0B6158D9AD6479D6A2AFD28EDFA39F3F_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Core.Definitions.Utilities.AxisType
struct  AxisType_t2C42254D0B6158D9AD6479D6A2AFD28EDFA39F3F 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Core.Definitions.Utilities.AxisType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AxisType_t2C42254D0B6158D9AD6479D6A2AFD28EDFA39F3F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AXISTYPE_T2C42254D0B6158D9AD6479D6A2AFD28EDFA39F3F_H
#ifndef EXPERIENCESCALE_TAAC9BD759FCCFE4893BE867776AFE1FA1A9D981A_H
#define EXPERIENCESCALE_TAAC9BD759FCCFE4893BE867776AFE1FA1A9D981A_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Core.Definitions.Utilities.ExperienceScale
struct  ExperienceScale_tAAC9BD759FCCFE4893BE867776AFE1FA1A9D981A 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Core.Definitions.Utilities.ExperienceScale::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ExperienceScale_tAAC9BD759FCCFE4893BE867776AFE1FA1A9D981A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXPERIENCESCALE_TAAC9BD759FCCFE4893BE867776AFE1FA1A9D981A_H
#ifndef HANDEDNESS_TDB273D49A6F837AB4DE699FCC4E88F346E7521B0_H
#define HANDEDNESS_TDB273D49A6F837AB4DE699FCC4E88F346E7521B0_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Core.Definitions.Utilities.Handedness
struct  Handedness_tDB273D49A6F837AB4DE699FCC4E88F346E7521B0 
{
public:
	// System.Byte Microsoft.MixedReality.Toolkit.Core.Definitions.Utilities.Handedness::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Handedness_tDB273D49A6F837AB4DE699FCC4E88F346E7521B0, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HANDEDNESS_TDB273D49A6F837AB4DE699FCC4E88F346E7521B0_H
#ifndef TRACKEDOBJECTTYPE_T4DA3CD70D0FBBC461267B430F0CB5A3B02F10F61_H
#define TRACKEDOBJECTTYPE_T4DA3CD70D0FBBC461267B430F0CB5A3B02F10F61_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Core.Definitions.Utilities.TrackedObjectType
struct  TrackedObjectType_t4DA3CD70D0FBBC461267B430F0CB5A3B02F10F61 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Core.Definitions.Utilities.TrackedObjectType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TrackedObjectType_t4DA3CD70D0FBBC461267B430F0CB5A3B02F10F61, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRACKEDOBJECTTYPE_T4DA3CD70D0FBBC461267B430F0CB5A3B02F10F61_H
#ifndef VECTOR3SMOOTHED_T90F20DA025654E8BD043A5F7B39F70DC504B4579_H
#define VECTOR3SMOOTHED_T90F20DA025654E8BD043A5F7B39F70DC504B4579_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Core.Definitions.Utilities.Vector3Smoothed
struct  Vector3Smoothed_t90F20DA025654E8BD043A5F7B39F70DC504B4579 
{
public:
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Core.Definitions.Utilities.Vector3Smoothed::<Current>k__BackingField
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___U3CCurrentU3Ek__BackingField_0;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Core.Definitions.Utilities.Vector3Smoothed::<Goal>k__BackingField
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___U3CGoalU3Ek__BackingField_1;
	// System.Single Microsoft.MixedReality.Toolkit.Core.Definitions.Utilities.Vector3Smoothed::<SmoothTime>k__BackingField
	float ___U3CSmoothTimeU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CCurrentU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Vector3Smoothed_t90F20DA025654E8BD043A5F7B39F70DC504B4579, ___U3CCurrentU3Ek__BackingField_0)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_U3CCurrentU3Ek__BackingField_0() const { return ___U3CCurrentU3Ek__BackingField_0; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_U3CCurrentU3Ek__BackingField_0() { return &___U3CCurrentU3Ek__BackingField_0; }
	inline void set_U3CCurrentU3Ek__BackingField_0(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___U3CCurrentU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CGoalU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Vector3Smoothed_t90F20DA025654E8BD043A5F7B39F70DC504B4579, ___U3CGoalU3Ek__BackingField_1)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_U3CGoalU3Ek__BackingField_1() const { return ___U3CGoalU3Ek__BackingField_1; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_U3CGoalU3Ek__BackingField_1() { return &___U3CGoalU3Ek__BackingField_1; }
	inline void set_U3CGoalU3Ek__BackingField_1(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___U3CGoalU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CSmoothTimeU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(Vector3Smoothed_t90F20DA025654E8BD043A5F7B39F70DC504B4579, ___U3CSmoothTimeU3Ek__BackingField_2)); }
	inline float get_U3CSmoothTimeU3Ek__BackingField_2() const { return ___U3CSmoothTimeU3Ek__BackingField_2; }
	inline float* get_address_of_U3CSmoothTimeU3Ek__BackingField_2() { return &___U3CSmoothTimeU3Ek__BackingField_2; }
	inline void set_U3CSmoothTimeU3Ek__BackingField_2(float value)
	{
		___U3CSmoothTimeU3Ek__BackingField_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR3SMOOTHED_T90F20DA025654E8BD043A5F7B39F70DC504B4579_H
#ifndef GENERICBASEEVENTDATA_TA0241C166550C9541A877D546D2F3FDAD999CB8C_H
#define GENERICBASEEVENTDATA_TA0241C166550C9541A877D546D2F3FDAD999CB8C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Core.EventDatum.GenericBaseEventData
struct  GenericBaseEventData_tA0241C166550C9541A877D546D2F3FDAD999CB8C  : public BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5
{
public:
	// Microsoft.MixedReality.Toolkit.Core.Interfaces.Events.IMixedRealityEventSource Microsoft.MixedReality.Toolkit.Core.EventDatum.GenericBaseEventData::<EventSource>k__BackingField
	RuntimeObject* ___U3CEventSourceU3Ek__BackingField_2;
	// System.DateTime Microsoft.MixedReality.Toolkit.Core.EventDatum.GenericBaseEventData::<EventTime>k__BackingField
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___U3CEventTimeU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CEventSourceU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(GenericBaseEventData_tA0241C166550C9541A877D546D2F3FDAD999CB8C, ___U3CEventSourceU3Ek__BackingField_2)); }
	inline RuntimeObject* get_U3CEventSourceU3Ek__BackingField_2() const { return ___U3CEventSourceU3Ek__BackingField_2; }
	inline RuntimeObject** get_address_of_U3CEventSourceU3Ek__BackingField_2() { return &___U3CEventSourceU3Ek__BackingField_2; }
	inline void set_U3CEventSourceU3Ek__BackingField_2(RuntimeObject* value)
	{
		___U3CEventSourceU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CEventSourceU3Ek__BackingField_2), value);
	}

	inline static int32_t get_offset_of_U3CEventTimeU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(GenericBaseEventData_tA0241C166550C9541A877D546D2F3FDAD999CB8C, ___U3CEventTimeU3Ek__BackingField_3)); }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  get_U3CEventTimeU3Ek__BackingField_3() const { return ___U3CEventTimeU3Ek__BackingField_3; }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * get_address_of_U3CEventTimeU3Ek__BackingField_3() { return &___U3CEventTimeU3Ek__BackingField_3; }
	inline void set_U3CEventTimeU3Ek__BackingField_3(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  value)
	{
		___U3CEventTimeU3Ek__BackingField_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GENERICBASEEVENTDATA_TA0241C166550C9541A877D546D2F3FDAD999CB8C_H
#ifndef AUDIOLOFISOURCEQUALITY_TB00785F7EC587A460C1D1445614EED5568D03704_H
#define AUDIOLOFISOURCEQUALITY_TB00785F7EC587A460C1D1445614EED5568D03704_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.SDK.Audio.Influencers.AudioLoFiSourceQuality
struct  AudioLoFiSourceQuality_tB00785F7EC587A460C1D1445614EED5568D03704 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.SDK.Audio.Influencers.AudioLoFiSourceQuality::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AudioLoFiSourceQuality_tB00785F7EC587A460C1D1445614EED5568D03704, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUDIOLOFISOURCEQUALITY_TB00785F7EC587A460C1D1445614EED5568D03704_H
#ifndef DELEGATE_T_H
#define DELEGATE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Delegate
struct  Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_target_2), value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((&___method_info_7), value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((&___original_method_info_8), value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * get_data_9() const { return ___data_9; }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((&___data_9), value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
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
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
};
#endif // DELEGATE_T_H
#ifndef ASYNCVOIDMETHODBUILDER_T44E3C9B52B019BB5BDCC0E1BB83188B536161CFF_H
#define ASYNCVOIDMETHODBUILDER_T44E3C9B52B019BB5BDCC0E1BB83188B536161CFF_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.AsyncVoidMethodBuilder
struct  AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF 
{
public:
	// System.Threading.SynchronizationContext System.Runtime.CompilerServices.AsyncVoidMethodBuilder::m_synchronizationContext
	SynchronizationContext_t06AEFE2C7CFCFC242D0A5729A74464AF18CF84E7 * ___m_synchronizationContext_0;
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncVoidMethodBuilder::m_coreState
	AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01  ___m_coreState_1;
	// System.Threading.Tasks.Task System.Runtime.CompilerServices.AsyncVoidMethodBuilder::m_task
	Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * ___m_task_2;

public:
	inline static int32_t get_offset_of_m_synchronizationContext_0() { return static_cast<int32_t>(offsetof(AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF, ___m_synchronizationContext_0)); }
	inline SynchronizationContext_t06AEFE2C7CFCFC242D0A5729A74464AF18CF84E7 * get_m_synchronizationContext_0() const { return ___m_synchronizationContext_0; }
	inline SynchronizationContext_t06AEFE2C7CFCFC242D0A5729A74464AF18CF84E7 ** get_address_of_m_synchronizationContext_0() { return &___m_synchronizationContext_0; }
	inline void set_m_synchronizationContext_0(SynchronizationContext_t06AEFE2C7CFCFC242D0A5729A74464AF18CF84E7 * value)
	{
		___m_synchronizationContext_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_synchronizationContext_0), value);
	}

	inline static int32_t get_offset_of_m_coreState_1() { return static_cast<int32_t>(offsetof(AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF, ___m_coreState_1)); }
	inline AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01  get_m_coreState_1() const { return ___m_coreState_1; }
	inline AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01 * get_address_of_m_coreState_1() { return &___m_coreState_1; }
	inline void set_m_coreState_1(AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01  value)
	{
		___m_coreState_1 = value;
	}

	inline static int32_t get_offset_of_m_task_2() { return static_cast<int32_t>(offsetof(AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF, ___m_task_2)); }
	inline Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * get_m_task_2() const { return ___m_task_2; }
	inline Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 ** get_address_of_m_task_2() { return &___m_task_2; }
	inline void set_m_task_2(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * value)
	{
		___m_task_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_task_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncVoidMethodBuilder
struct AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF_marshaled_pinvoke
{
	SynchronizationContext_t06AEFE2C7CFCFC242D0A5729A74464AF18CF84E7 * ___m_synchronizationContext_0;
	AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01_marshaled_pinvoke ___m_coreState_1;
	Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * ___m_task_2;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncVoidMethodBuilder
struct AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF_marshaled_com
{
	SynchronizationContext_t06AEFE2C7CFCFC242D0A5729A74464AF18CF84E7 * ___m_synchronizationContext_0;
	AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01_marshaled_com ___m_coreState_1;
	Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * ___m_task_2;
};
#endif // ASYNCVOIDMETHODBUILDER_T44E3C9B52B019BB5BDCC0E1BB83188B536161CFF_H
#ifndef TYPE_T94CEB95ABED1654F7AF6B2CACCA1769C4061A288_H
#define TYPE_T94CEB95ABED1654F7AF6B2CACCA1769C4061A288_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.XR.Boundary_Type
struct  Type_t94CEB95ABED1654F7AF6B2CACCA1769C4061A288 
{
public:
	// System.Int32 UnityEngine.Experimental.XR.Boundary_Type::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Type_t94CEB95ABED1654F7AF6B2CACCA1769C4061A288, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPE_T94CEB95ABED1654F7AF6B2CACCA1769C4061A288_H
#ifndef OBJECT_TAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_H
#define OBJECT_TAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Object
struct  Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};
#endif // OBJECT_TAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_H
#ifndef PRIMITIVETYPE_T37F0056BA9C61594039522E27426D4D52D0943DE_H
#define PRIMITIVETYPE_T37F0056BA9C61594039522E27426D4D52D0943DE_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PrimitiveType
struct  PrimitiveType_t37F0056BA9C61594039522E27426D4D52D0943DE 
{
public:
	// System.Int32 UnityEngine.PrimitiveType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PrimitiveType_t37F0056BA9C61594039522E27426D4D52D0943DE, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PRIMITIVETYPE_T37F0056BA9C61594039522E27426D4D52D0943DE_H
#ifndef MIXEDREALITYINPUTACTION_TB87A712377383583B43FC255F442492403992C96_H
#define MIXEDREALITYINPUTACTION_TB87A712377383583B43FC255F442492403992C96_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Core.Definitions.InputSystem.MixedRealityInputAction
struct  MixedRealityInputAction_tB87A712377383583B43FC255F442492403992C96 
{
public:
	// System.UInt32 Microsoft.MixedReality.Toolkit.Core.Definitions.InputSystem.MixedRealityInputAction::id
	uint32_t ___id_1;
	// System.String Microsoft.MixedReality.Toolkit.Core.Definitions.InputSystem.MixedRealityInputAction::description
	String_t* ___description_2;
	// Microsoft.MixedReality.Toolkit.Core.Definitions.Utilities.AxisType Microsoft.MixedReality.Toolkit.Core.Definitions.InputSystem.MixedRealityInputAction::axisConstraint
	int32_t ___axisConstraint_3;

public:
	inline static int32_t get_offset_of_id_1() { return static_cast<int32_t>(offsetof(MixedRealityInputAction_tB87A712377383583B43FC255F442492403992C96, ___id_1)); }
	inline uint32_t get_id_1() const { return ___id_1; }
	inline uint32_t* get_address_of_id_1() { return &___id_1; }
	inline void set_id_1(uint32_t value)
	{
		___id_1 = value;
	}

	inline static int32_t get_offset_of_description_2() { return static_cast<int32_t>(offsetof(MixedRealityInputAction_tB87A712377383583B43FC255F442492403992C96, ___description_2)); }
	inline String_t* get_description_2() const { return ___description_2; }
	inline String_t** get_address_of_description_2() { return &___description_2; }
	inline void set_description_2(String_t* value)
	{
		___description_2 = value;
		Il2CppCodeGenWriteBarrier((&___description_2), value);
	}

	inline static int32_t get_offset_of_axisConstraint_3() { return static_cast<int32_t>(offsetof(MixedRealityInputAction_tB87A712377383583B43FC255F442492403992C96, ___axisConstraint_3)); }
	inline int32_t get_axisConstraint_3() const { return ___axisConstraint_3; }
	inline int32_t* get_address_of_axisConstraint_3() { return &___axisConstraint_3; }
	inline void set_axisConstraint_3(int32_t value)
	{
		___axisConstraint_3 = value;
	}
};

struct MixedRealityInputAction_tB87A712377383583B43FC255F442492403992C96_StaticFields
{
public:
	// Microsoft.MixedReality.Toolkit.Core.Definitions.InputSystem.MixedRealityInputAction Microsoft.MixedReality.Toolkit.Core.Definitions.InputSystem.MixedRealityInputAction::<None>k__BackingField
	MixedRealityInputAction_tB87A712377383583B43FC255F442492403992C96  ___U3CNoneU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CNoneU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(MixedRealityInputAction_tB87A712377383583B43FC255F442492403992C96_StaticFields, ___U3CNoneU3Ek__BackingField_0)); }
	inline MixedRealityInputAction_tB87A712377383583B43FC255F442492403992C96  get_U3CNoneU3Ek__BackingField_0() const { return ___U3CNoneU3Ek__BackingField_0; }
	inline MixedRealityInputAction_tB87A712377383583B43FC255F442492403992C96 * get_address_of_U3CNoneU3Ek__BackingField_0() { return &___U3CNoneU3Ek__BackingField_0; }
	inline void set_U3CNoneU3Ek__BackingField_0(MixedRealityInputAction_tB87A712377383583B43FC255F442492403992C96  value)
	{
		___U3CNoneU3Ek__BackingField_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of Microsoft.MixedReality.Toolkit.Core.Definitions.InputSystem.MixedRealityInputAction
struct MixedRealityInputAction_tB87A712377383583B43FC255F442492403992C96_marshaled_pinvoke
{
	uint32_t ___id_1;
	char* ___description_2;
	int32_t ___axisConstraint_3;
};
// Native definition for COM marshalling of Microsoft.MixedReality.Toolkit.Core.Definitions.InputSystem.MixedRealityInputAction
struct MixedRealityInputAction_tB87A712377383583B43FC255F442492403992C96_marshaled_com
{
	uint32_t ___id_1;
	Il2CppChar* ___description_2;
	int32_t ___axisConstraint_3;
};
#endif // MIXEDREALITYINPUTACTION_TB87A712377383583B43FC255F442492403992C96_H
#ifndef BOUNDARYEVENTDATA_T5DDE2CD200A1E4BC0941E4B2D78C72087E2BDA81_H
#define BOUNDARYEVENTDATA_T5DDE2CD200A1E4BC0941E4B2D78C72087E2BDA81_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Core.EventDatum.Boundary.BoundaryEventData
struct  BoundaryEventData_t5DDE2CD200A1E4BC0941E4B2D78C72087E2BDA81  : public GenericBaseEventData_tA0241C166550C9541A877D546D2F3FDAD999CB8C
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.Core.EventDatum.Boundary.BoundaryEventData::<IsFloorVisualized>k__BackingField
	bool ___U3CIsFloorVisualizedU3Ek__BackingField_4;
	// System.Boolean Microsoft.MixedReality.Toolkit.Core.EventDatum.Boundary.BoundaryEventData::<IsPlayAreaVisualized>k__BackingField
	bool ___U3CIsPlayAreaVisualizedU3Ek__BackingField_5;
	// System.Boolean Microsoft.MixedReality.Toolkit.Core.EventDatum.Boundary.BoundaryEventData::<IsTrackedAreaVisualized>k__BackingField
	bool ___U3CIsTrackedAreaVisualizedU3Ek__BackingField_6;
	// System.Boolean Microsoft.MixedReality.Toolkit.Core.EventDatum.Boundary.BoundaryEventData::<AreBoundaryWallsVisualized>k__BackingField
	bool ___U3CAreBoundaryWallsVisualizedU3Ek__BackingField_7;
	// System.Boolean Microsoft.MixedReality.Toolkit.Core.EventDatum.Boundary.BoundaryEventData::<IsCeilingVisualized>k__BackingField
	bool ___U3CIsCeilingVisualizedU3Ek__BackingField_8;

public:
	inline static int32_t get_offset_of_U3CIsFloorVisualizedU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(BoundaryEventData_t5DDE2CD200A1E4BC0941E4B2D78C72087E2BDA81, ___U3CIsFloorVisualizedU3Ek__BackingField_4)); }
	inline bool get_U3CIsFloorVisualizedU3Ek__BackingField_4() const { return ___U3CIsFloorVisualizedU3Ek__BackingField_4; }
	inline bool* get_address_of_U3CIsFloorVisualizedU3Ek__BackingField_4() { return &___U3CIsFloorVisualizedU3Ek__BackingField_4; }
	inline void set_U3CIsFloorVisualizedU3Ek__BackingField_4(bool value)
	{
		___U3CIsFloorVisualizedU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CIsPlayAreaVisualizedU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(BoundaryEventData_t5DDE2CD200A1E4BC0941E4B2D78C72087E2BDA81, ___U3CIsPlayAreaVisualizedU3Ek__BackingField_5)); }
	inline bool get_U3CIsPlayAreaVisualizedU3Ek__BackingField_5() const { return ___U3CIsPlayAreaVisualizedU3Ek__BackingField_5; }
	inline bool* get_address_of_U3CIsPlayAreaVisualizedU3Ek__BackingField_5() { return &___U3CIsPlayAreaVisualizedU3Ek__BackingField_5; }
	inline void set_U3CIsPlayAreaVisualizedU3Ek__BackingField_5(bool value)
	{
		___U3CIsPlayAreaVisualizedU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CIsTrackedAreaVisualizedU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(BoundaryEventData_t5DDE2CD200A1E4BC0941E4B2D78C72087E2BDA81, ___U3CIsTrackedAreaVisualizedU3Ek__BackingField_6)); }
	inline bool get_U3CIsTrackedAreaVisualizedU3Ek__BackingField_6() const { return ___U3CIsTrackedAreaVisualizedU3Ek__BackingField_6; }
	inline bool* get_address_of_U3CIsTrackedAreaVisualizedU3Ek__BackingField_6() { return &___U3CIsTrackedAreaVisualizedU3Ek__BackingField_6; }
	inline void set_U3CIsTrackedAreaVisualizedU3Ek__BackingField_6(bool value)
	{
		___U3CIsTrackedAreaVisualizedU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CAreBoundaryWallsVisualizedU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(BoundaryEventData_t5DDE2CD200A1E4BC0941E4B2D78C72087E2BDA81, ___U3CAreBoundaryWallsVisualizedU3Ek__BackingField_7)); }
	inline bool get_U3CAreBoundaryWallsVisualizedU3Ek__BackingField_7() const { return ___U3CAreBoundaryWallsVisualizedU3Ek__BackingField_7; }
	inline bool* get_address_of_U3CAreBoundaryWallsVisualizedU3Ek__BackingField_7() { return &___U3CAreBoundaryWallsVisualizedU3Ek__BackingField_7; }
	inline void set_U3CAreBoundaryWallsVisualizedU3Ek__BackingField_7(bool value)
	{
		___U3CAreBoundaryWallsVisualizedU3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of_U3CIsCeilingVisualizedU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(BoundaryEventData_t5DDE2CD200A1E4BC0941E4B2D78C72087E2BDA81, ___U3CIsCeilingVisualizedU3Ek__BackingField_8)); }
	inline bool get_U3CIsCeilingVisualizedU3Ek__BackingField_8() const { return ___U3CIsCeilingVisualizedU3Ek__BackingField_8; }
	inline bool* get_address_of_U3CIsCeilingVisualizedU3Ek__BackingField_8() { return &___U3CIsCeilingVisualizedU3Ek__BackingField_8; }
	inline void set_U3CIsCeilingVisualizedU3Ek__BackingField_8(bool value)
	{
		___U3CIsCeilingVisualizedU3Ek__BackingField_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOUNDARYEVENTDATA_T5DDE2CD200A1E4BC0941E4B2D78C72087E2BDA81_H
#ifndef MIXEDREALITYSPATIALAWARENESSEVENTDATA_TDBA07404F7418047BA73DC78BEAF6B16929DB1CF_H
#define MIXEDREALITYSPATIALAWARENESSEVENTDATA_TDBA07404F7418047BA73DC78BEAF6B16929DB1CF_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Core.EventDatum.SpatialAwarenessSystem.MixedRealitySpatialAwarenessEventData
struct  MixedRealitySpatialAwarenessEventData_tDBA07404F7418047BA73DC78BEAF6B16929DB1CF  : public GenericBaseEventData_tA0241C166550C9541A877D546D2F3FDAD999CB8C
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Core.EventDatum.SpatialAwarenessSystem.MixedRealitySpatialAwarenessEventData::<Id>k__BackingField
	int32_t ___U3CIdU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CIdU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(MixedRealitySpatialAwarenessEventData_tDBA07404F7418047BA73DC78BEAF6B16929DB1CF, ___U3CIdU3Ek__BackingField_4)); }
	inline int32_t get_U3CIdU3Ek__BackingField_4() const { return ___U3CIdU3Ek__BackingField_4; }
	inline int32_t* get_address_of_U3CIdU3Ek__BackingField_4() { return &___U3CIdU3Ek__BackingField_4; }
	inline void set_U3CIdU3Ek__BackingField_4(int32_t value)
	{
		___U3CIdU3Ek__BackingField_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MIXEDREALITYSPATIALAWARENESSEVENTDATA_TDBA07404F7418047BA73DC78BEAF6B16929DB1CF_H
#ifndef U3CONENABLEU3ED__10_T25F3A91E4757E23B70B1F0FA0CC2DD63BD2B14AB_H
#define U3CONENABLEU3ED__10_T25F3A91E4757E23B70B1F0FA0CC2DD63BD2B14AB_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Examples.Demos.BoundaryVisualizationDemo_<OnEnable>d__10
struct  U3COnEnableU3Ed__10_t25F3A91E4757E23B70B1F0FA0CC2DD63BD2B14AB 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Examples.Demos.BoundaryVisualizationDemo_<OnEnable>d__10::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncVoidMethodBuilder Microsoft.MixedReality.Toolkit.Examples.Demos.BoundaryVisualizationDemo_<OnEnable>d__10::<>t__builder
	AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF  ___U3CU3Et__builder_1;
	// Microsoft.MixedReality.Toolkit.Examples.Demos.BoundaryVisualizationDemo Microsoft.MixedReality.Toolkit.Examples.Demos.BoundaryVisualizationDemo_<OnEnable>d__10::<>4__this
	BoundaryVisualizationDemo_tD5E48F3995846BA4A1909932098B3C4C09520AA4 * ___U3CU3E4__this_2;
	// System.Object Microsoft.MixedReality.Toolkit.Examples.Demos.BoundaryVisualizationDemo_<OnEnable>d__10::<>u__1
	RuntimeObject * ___U3CU3Eu__1_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3COnEnableU3Ed__10_t25F3A91E4757E23B70B1F0FA0CC2DD63BD2B14AB, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3COnEnableU3Ed__10_t25F3A91E4757E23B70B1F0FA0CC2DD63BD2B14AB, ___U3CU3Et__builder_1)); }
	inline AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF  value)
	{
		___U3CU3Et__builder_1 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3COnEnableU3Ed__10_t25F3A91E4757E23B70B1F0FA0CC2DD63BD2B14AB, ___U3CU3E4__this_2)); }
	inline BoundaryVisualizationDemo_tD5E48F3995846BA4A1909932098B3C4C09520AA4 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline BoundaryVisualizationDemo_tD5E48F3995846BA4A1909932098B3C4C09520AA4 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(BoundaryVisualizationDemo_tD5E48F3995846BA4A1909932098B3C4C09520AA4 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E4__this_2), value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_3() { return static_cast<int32_t>(offsetof(U3COnEnableU3Ed__10_t25F3A91E4757E23B70B1F0FA0CC2DD63BD2B14AB, ___U3CU3Eu__1_3)); }
	inline RuntimeObject * get_U3CU3Eu__1_3() const { return ___U3CU3Eu__1_3; }
	inline RuntimeObject ** get_address_of_U3CU3Eu__1_3() { return &___U3CU3Eu__1_3; }
	inline void set_U3CU3Eu__1_3(RuntimeObject * value)
	{
		___U3CU3Eu__1_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Eu__1_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CONENABLEU3ED__10_T25F3A91E4757E23B70B1F0FA0CC2DD63BD2B14AB_H
#ifndef U3CONENABLEU3ED__1_T132401ED97C6F847289963908CFA73F19D2A4544_H
#define U3CONENABLEU3ED__1_T132401ED97C6F847289963908CFA73F19D2A4544_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Examples.Demos.DemoSpatialMeshHandler_<OnEnable>d__1
struct  U3COnEnableU3Ed__1_t132401ED97C6F847289963908CFA73F19D2A4544 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Examples.Demos.DemoSpatialMeshHandler_<OnEnable>d__1::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncVoidMethodBuilder Microsoft.MixedReality.Toolkit.Examples.Demos.DemoSpatialMeshHandler_<OnEnable>d__1::<>t__builder
	AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF  ___U3CU3Et__builder_1;
	// Microsoft.MixedReality.Toolkit.Examples.Demos.DemoSpatialMeshHandler Microsoft.MixedReality.Toolkit.Examples.Demos.DemoSpatialMeshHandler_<OnEnable>d__1::<>4__this
	DemoSpatialMeshHandler_t5EA2499E558DC2033B27F8CAD6B3CB5B2C0B2A7D * ___U3CU3E4__this_2;
	// System.Object Microsoft.MixedReality.Toolkit.Examples.Demos.DemoSpatialMeshHandler_<OnEnable>d__1::<>u__1
	RuntimeObject * ___U3CU3Eu__1_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3COnEnableU3Ed__1_t132401ED97C6F847289963908CFA73F19D2A4544, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3COnEnableU3Ed__1_t132401ED97C6F847289963908CFA73F19D2A4544, ___U3CU3Et__builder_1)); }
	inline AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF  value)
	{
		___U3CU3Et__builder_1 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3COnEnableU3Ed__1_t132401ED97C6F847289963908CFA73F19D2A4544, ___U3CU3E4__this_2)); }
	inline DemoSpatialMeshHandler_t5EA2499E558DC2033B27F8CAD6B3CB5B2C0B2A7D * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline DemoSpatialMeshHandler_t5EA2499E558DC2033B27F8CAD6B3CB5B2C0B2A7D ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(DemoSpatialMeshHandler_t5EA2499E558DC2033B27F8CAD6B3CB5B2C0B2A7D * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E4__this_2), value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_3() { return static_cast<int32_t>(offsetof(U3COnEnableU3Ed__1_t132401ED97C6F847289963908CFA73F19D2A4544, ___U3CU3Eu__1_3)); }
	inline RuntimeObject * get_U3CU3Eu__1_3() const { return ___U3CU3Eu__1_3; }
	inline RuntimeObject ** get_address_of_U3CU3Eu__1_3() { return &___U3CU3Eu__1_3; }
	inline void set_U3CU3Eu__1_3(RuntimeObject * value)
	{
		___U3CU3Eu__1_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Eu__1_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CONENABLEU3ED__1_T132401ED97C6F847289963908CFA73F19D2A4544_H
#ifndef U3CSTARTU3ED__0_T7C225461B16887823D2847728502C5D852E3950C_H
#define U3CSTARTU3ED__0_T7C225461B16887823D2847728502C5D852E3950C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Examples.Demos.DiagnosticsDemoControls_<Start>d__0
struct  U3CStartU3Ed__0_t7C225461B16887823D2847728502C5D852E3950C 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Examples.Demos.DiagnosticsDemoControls_<Start>d__0::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncVoidMethodBuilder Microsoft.MixedReality.Toolkit.Examples.Demos.DiagnosticsDemoControls_<Start>d__0::<>t__builder
	AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF  ___U3CU3Et__builder_1;
	// System.Object Microsoft.MixedReality.Toolkit.Examples.Demos.DiagnosticsDemoControls_<Start>d__0::<>u__1
	RuntimeObject * ___U3CU3Eu__1_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__0_t7C225461B16887823D2847728502C5D852E3950C, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__0_t7C225461B16887823D2847728502C5D852E3950C, ___U3CU3Et__builder_1)); }
	inline AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF  value)
	{
		___U3CU3Et__builder_1 = value;
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_2() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__0_t7C225461B16887823D2847728502C5D852E3950C, ___U3CU3Eu__1_2)); }
	inline RuntimeObject * get_U3CU3Eu__1_2() const { return ___U3CU3Eu__1_2; }
	inline RuntimeObject ** get_address_of_U3CU3Eu__1_2() { return &___U3CU3Eu__1_2; }
	inline void set_U3CU3Eu__1_2(RuntimeObject * value)
	{
		___U3CU3Eu__1_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Eu__1_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CSTARTU3ED__0_T7C225461B16887823D2847728502C5D852E3950C_H
#ifndef MULTICASTDELEGATE_T_H
#define MULTICASTDELEGATE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((&___delegates_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};
#endif // MULTICASTDELEGATE_T_H
#ifndef COMPONENT_T05064EF382ABCAF4B8C94F8A350EA85184C26621_H
#define COMPONENT_T05064EF382ABCAF4B8C94F8A350EA85184C26621_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Component
struct  Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T05064EF382ABCAF4B8C94F8A350EA85184C26621_H
#ifndef GAMEOBJECT_TBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_H
#define GAMEOBJECT_TBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GameObject
struct  GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GAMEOBJECT_TBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_H
#ifndef MATERIAL_TF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598_H
#define MATERIAL_TF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Material
struct  Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MATERIAL_TF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598_H
#ifndef MESH_T6106B8D8E4C691321581AB0445552EC78B947B8C_H
#define MESH_T6106B8D8E4C691321581AB0445552EC78B947B8C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Mesh
struct  Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MESH_T6106B8D8E4C691321581AB0445552EC78B947B8C_H
#ifndef SCRIPTABLEOBJECT_TAB015486CEAB714DA0D5C1BA389B84FB90427734_H
#define SCRIPTABLEOBJECT_TAB015486CEAB714DA0D5C1BA389B84FB90427734_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ScriptableObject
struct  ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734_marshaled_pinvoke : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734_marshaled_com : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_com
{
};
#endif // SCRIPTABLEOBJECT_TAB015486CEAB714DA0D5C1BA389B84FB90427734_H
#ifndef BASEMIXEDREALITYPROFILE_T78CA4F585A8FC38B8F7610073EDF82DBA271E5DB_H
#define BASEMIXEDREALITYPROFILE_T78CA4F585A8FC38B8F7610073EDF82DBA271E5DB_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Core.Definitions.BaseMixedRealityProfile
struct  BaseMixedRealityProfile_t78CA4F585A8FC38B8F7610073EDF82DBA271E5DB  : public ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.Core.Definitions.BaseMixedRealityProfile::isCustomProfile
	bool ___isCustomProfile_4;

public:
	inline static int32_t get_offset_of_isCustomProfile_4() { return static_cast<int32_t>(offsetof(BaseMixedRealityProfile_t78CA4F585A8FC38B8F7610073EDF82DBA271E5DB, ___isCustomProfile_4)); }
	inline bool get_isCustomProfile_4() const { return ___isCustomProfile_4; }
	inline bool* get_address_of_isCustomProfile_4() { return &___isCustomProfile_4; }
	inline void set_isCustomProfile_4(bool value)
	{
		___isCustomProfile_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BASEMIXEDREALITYPROFILE_T78CA4F585A8FC38B8F7610073EDF82DBA271E5DB_H
#ifndef BASEINPUTEVENTDATA_T4E713D4242FE17A0386036D68C4C910847E7F697_H
#define BASEINPUTEVENTDATA_T4E713D4242FE17A0386036D68C4C910847E7F697_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Core.EventDatum.Input.BaseInputEventData
struct  BaseInputEventData_t4E713D4242FE17A0386036D68C4C910847E7F697  : public BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5
{
public:
	// System.DateTime Microsoft.MixedReality.Toolkit.Core.EventDatum.Input.BaseInputEventData::<EventTime>k__BackingField
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___U3CEventTimeU3Ek__BackingField_2;
	// Microsoft.MixedReality.Toolkit.Core.Interfaces.InputSystem.IMixedRealityInputSource Microsoft.MixedReality.Toolkit.Core.EventDatum.Input.BaseInputEventData::<InputSource>k__BackingField
	RuntimeObject* ___U3CInputSourceU3Ek__BackingField_3;
	// System.UInt32 Microsoft.MixedReality.Toolkit.Core.EventDatum.Input.BaseInputEventData::<SourceId>k__BackingField
	uint32_t ___U3CSourceIdU3Ek__BackingField_4;
	// Microsoft.MixedReality.Toolkit.Core.Definitions.InputSystem.MixedRealityInputAction Microsoft.MixedReality.Toolkit.Core.EventDatum.Input.BaseInputEventData::<MixedRealityInputAction>k__BackingField
	MixedRealityInputAction_tB87A712377383583B43FC255F442492403992C96  ___U3CMixedRealityInputActionU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of_U3CEventTimeU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(BaseInputEventData_t4E713D4242FE17A0386036D68C4C910847E7F697, ___U3CEventTimeU3Ek__BackingField_2)); }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  get_U3CEventTimeU3Ek__BackingField_2() const { return ___U3CEventTimeU3Ek__BackingField_2; }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * get_address_of_U3CEventTimeU3Ek__BackingField_2() { return &___U3CEventTimeU3Ek__BackingField_2; }
	inline void set_U3CEventTimeU3Ek__BackingField_2(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  value)
	{
		___U3CEventTimeU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CInputSourceU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(BaseInputEventData_t4E713D4242FE17A0386036D68C4C910847E7F697, ___U3CInputSourceU3Ek__BackingField_3)); }
	inline RuntimeObject* get_U3CInputSourceU3Ek__BackingField_3() const { return ___U3CInputSourceU3Ek__BackingField_3; }
	inline RuntimeObject** get_address_of_U3CInputSourceU3Ek__BackingField_3() { return &___U3CInputSourceU3Ek__BackingField_3; }
	inline void set_U3CInputSourceU3Ek__BackingField_3(RuntimeObject* value)
	{
		___U3CInputSourceU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3CInputSourceU3Ek__BackingField_3), value);
	}

	inline static int32_t get_offset_of_U3CSourceIdU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(BaseInputEventData_t4E713D4242FE17A0386036D68C4C910847E7F697, ___U3CSourceIdU3Ek__BackingField_4)); }
	inline uint32_t get_U3CSourceIdU3Ek__BackingField_4() const { return ___U3CSourceIdU3Ek__BackingField_4; }
	inline uint32_t* get_address_of_U3CSourceIdU3Ek__BackingField_4() { return &___U3CSourceIdU3Ek__BackingField_4; }
	inline void set_U3CSourceIdU3Ek__BackingField_4(uint32_t value)
	{
		___U3CSourceIdU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CMixedRealityInputActionU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(BaseInputEventData_t4E713D4242FE17A0386036D68C4C910847E7F697, ___U3CMixedRealityInputActionU3Ek__BackingField_5)); }
	inline MixedRealityInputAction_tB87A712377383583B43FC255F442492403992C96  get_U3CMixedRealityInputActionU3Ek__BackingField_5() const { return ___U3CMixedRealityInputActionU3Ek__BackingField_5; }
	inline MixedRealityInputAction_tB87A712377383583B43FC255F442492403992C96 * get_address_of_U3CMixedRealityInputActionU3Ek__BackingField_5() { return &___U3CMixedRealityInputActionU3Ek__BackingField_5; }
	inline void set_U3CMixedRealityInputActionU3Ek__BackingField_5(MixedRealityInputAction_tB87A712377383583B43FC255F442492403992C96  value)
	{
		___U3CMixedRealityInputActionU3Ek__BackingField_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BASEINPUTEVENTDATA_T4E713D4242FE17A0386036D68C4C910847E7F697_H
#ifndef MIXEDREALITYSPATIALAWARENESSEVENTDATA_1_T063FEEA002DF8A7DF94374B546118BAE6D4D32BD_H
#define MIXEDREALITYSPATIALAWARENESSEVENTDATA_1_T063FEEA002DF8A7DF94374B546118BAE6D4D32BD_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Core.EventDatum.SpatialAwarenessSystem.MixedRealitySpatialAwarenessEventData`1<Microsoft.MixedReality.Toolkit.Core.Definitions.SpatialAwarenessSystem.SpatialAwarenessMeshObject>
struct  MixedRealitySpatialAwarenessEventData_1_t063FEEA002DF8A7DF94374B546118BAE6D4D32BD  : public MixedRealitySpatialAwarenessEventData_tDBA07404F7418047BA73DC78BEAF6B16929DB1CF
{
public:
	// T Microsoft.MixedReality.Toolkit.Core.EventDatum.SpatialAwarenessSystem.MixedRealitySpatialAwarenessEventData`1::<SpatialObject>k__BackingField
	SpatialAwarenessMeshObject_t6FEF14D4690B2AC03FCED6BE6A0DFDF8A5595EBF * ___U3CSpatialObjectU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of_U3CSpatialObjectU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(MixedRealitySpatialAwarenessEventData_1_t063FEEA002DF8A7DF94374B546118BAE6D4D32BD, ___U3CSpatialObjectU3Ek__BackingField_5)); }
	inline SpatialAwarenessMeshObject_t6FEF14D4690B2AC03FCED6BE6A0DFDF8A5595EBF * get_U3CSpatialObjectU3Ek__BackingField_5() const { return ___U3CSpatialObjectU3Ek__BackingField_5; }
	inline SpatialAwarenessMeshObject_t6FEF14D4690B2AC03FCED6BE6A0DFDF8A5595EBF ** get_address_of_U3CSpatialObjectU3Ek__BackingField_5() { return &___U3CSpatialObjectU3Ek__BackingField_5; }
	inline void set_U3CSpatialObjectU3Ek__BackingField_5(SpatialAwarenessMeshObject_t6FEF14D4690B2AC03FCED6BE6A0DFDF8A5595EBF * value)
	{
		___U3CSpatialObjectU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((&___U3CSpatialObjectU3Ek__BackingField_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MIXEDREALITYSPATIALAWARENESSEVENTDATA_1_T063FEEA002DF8A7DF94374B546118BAE6D4D32BD_H
#ifndef FUNC_1_T4ABD6DAD480574F152452DD6B9C9A55F4F6655F1_H
#define FUNC_1_T4ABD6DAD480574F152452DD6B9C9A55F4F6655F1_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Func`1<System.Boolean>
struct  Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FUNC_1_T4ABD6DAD480574F152452DD6B9C9A55F4F6655F1_H
#ifndef BEHAVIOUR_TBDC7E9C3C898AD8348891B82D3E345801D920CA8_H
#define BEHAVIOUR_TBDC7E9C3C898AD8348891B82D3E345801D920CA8_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Behaviour
struct  Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BEHAVIOUR_TBDC7E9C3C898AD8348891B82D3E345801D920CA8_H
#ifndef COLLIDER_T0FEEB36760860AD21B3B1F0509C365B393EC4BDF_H
#define COLLIDER_T0FEEB36760860AD21B3B1F0509C365B393EC4BDF_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Collider
struct  Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLLIDER_T0FEEB36760860AD21B3B1F0509C365B393EC4BDF_H
#ifndef MESHFILTER_T8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0_H
#define MESHFILTER_T8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MeshFilter
struct  MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MESHFILTER_T8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0_H
#ifndef RENDERER_T0556D67DD582620D1F495627EDE30D03284151F4_H
#define RENDERER_T0556D67DD582620D1F495627EDE30D03284151F4_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Renderer
struct  Renderer_t0556D67DD582620D1F495627EDE30D03284151F4  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RENDERER_T0556D67DD582620D1F495627EDE30D03284151F4_H
#ifndef TRANSFORM_TBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA_H
#define TRANSFORM_TBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Transform
struct  Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORM_TBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA_H
#ifndef MIXEDREALITYBOUNDARYVISUALIZATIONPROFILE_TA198D88A478CBC4C97D067F75F016ED4CC053BB1_H
#define MIXEDREALITYBOUNDARYVISUALIZATIONPROFILE_TA198D88A478CBC4C97D067F75F016ED4CC053BB1_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Core.Definitions.BoundarySystem.MixedRealityBoundaryVisualizationProfile
struct  MixedRealityBoundaryVisualizationProfile_tA198D88A478CBC4C97D067F75F016ED4CC053BB1  : public BaseMixedRealityProfile_t78CA4F585A8FC38B8F7610073EDF82DBA271E5DB
{
public:
	// System.Single Microsoft.MixedReality.Toolkit.Core.Definitions.BoundarySystem.MixedRealityBoundaryVisualizationProfile::boundaryHeight
	float ___boundaryHeight_5;
	// System.Boolean Microsoft.MixedReality.Toolkit.Core.Definitions.BoundarySystem.MixedRealityBoundaryVisualizationProfile::showFloor
	bool ___showFloor_6;
	// UnityEngine.Material Microsoft.MixedReality.Toolkit.Core.Definitions.BoundarySystem.MixedRealityBoundaryVisualizationProfile::floorMaterial
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___floorMaterial_7;
	// System.Int32 Microsoft.MixedReality.Toolkit.Core.Definitions.BoundarySystem.MixedRealityBoundaryVisualizationProfile::floorPhysicsLayer
	int32_t ___floorPhysicsLayer_8;
	// UnityEngine.Vector2 Microsoft.MixedReality.Toolkit.Core.Definitions.BoundarySystem.MixedRealityBoundaryVisualizationProfile::floorScale
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___floorScale_9;
	// System.Boolean Microsoft.MixedReality.Toolkit.Core.Definitions.BoundarySystem.MixedRealityBoundaryVisualizationProfile::showPlayArea
	bool ___showPlayArea_10;
	// UnityEngine.Material Microsoft.MixedReality.Toolkit.Core.Definitions.BoundarySystem.MixedRealityBoundaryVisualizationProfile::playAreaMaterial
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___playAreaMaterial_11;
	// System.Int32 Microsoft.MixedReality.Toolkit.Core.Definitions.BoundarySystem.MixedRealityBoundaryVisualizationProfile::playAreaPhysicsLayer
	int32_t ___playAreaPhysicsLayer_12;
	// System.Boolean Microsoft.MixedReality.Toolkit.Core.Definitions.BoundarySystem.MixedRealityBoundaryVisualizationProfile::showTrackedArea
	bool ___showTrackedArea_13;
	// UnityEngine.Material Microsoft.MixedReality.Toolkit.Core.Definitions.BoundarySystem.MixedRealityBoundaryVisualizationProfile::trackedAreaMaterial
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___trackedAreaMaterial_14;
	// System.Int32 Microsoft.MixedReality.Toolkit.Core.Definitions.BoundarySystem.MixedRealityBoundaryVisualizationProfile::trackedAreaPhysicsLayer
	int32_t ___trackedAreaPhysicsLayer_15;
	// System.Boolean Microsoft.MixedReality.Toolkit.Core.Definitions.BoundarySystem.MixedRealityBoundaryVisualizationProfile::showBoundaryWalls
	bool ___showBoundaryWalls_16;
	// UnityEngine.Material Microsoft.MixedReality.Toolkit.Core.Definitions.BoundarySystem.MixedRealityBoundaryVisualizationProfile::boundaryWallMaterial
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___boundaryWallMaterial_17;
	// System.Int32 Microsoft.MixedReality.Toolkit.Core.Definitions.BoundarySystem.MixedRealityBoundaryVisualizationProfile::boundaryWallsPhysicsLayer
	int32_t ___boundaryWallsPhysicsLayer_18;
	// System.Boolean Microsoft.MixedReality.Toolkit.Core.Definitions.BoundarySystem.MixedRealityBoundaryVisualizationProfile::showBoundaryCeiling
	bool ___showBoundaryCeiling_19;
	// UnityEngine.Material Microsoft.MixedReality.Toolkit.Core.Definitions.BoundarySystem.MixedRealityBoundaryVisualizationProfile::boundaryCeilingMaterial
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___boundaryCeilingMaterial_20;
	// System.Int32 Microsoft.MixedReality.Toolkit.Core.Definitions.BoundarySystem.MixedRealityBoundaryVisualizationProfile::ceilingPhysicsLayer
	int32_t ___ceilingPhysicsLayer_21;

public:
	inline static int32_t get_offset_of_boundaryHeight_5() { return static_cast<int32_t>(offsetof(MixedRealityBoundaryVisualizationProfile_tA198D88A478CBC4C97D067F75F016ED4CC053BB1, ___boundaryHeight_5)); }
	inline float get_boundaryHeight_5() const { return ___boundaryHeight_5; }
	inline float* get_address_of_boundaryHeight_5() { return &___boundaryHeight_5; }
	inline void set_boundaryHeight_5(float value)
	{
		___boundaryHeight_5 = value;
	}

	inline static int32_t get_offset_of_showFloor_6() { return static_cast<int32_t>(offsetof(MixedRealityBoundaryVisualizationProfile_tA198D88A478CBC4C97D067F75F016ED4CC053BB1, ___showFloor_6)); }
	inline bool get_showFloor_6() const { return ___showFloor_6; }
	inline bool* get_address_of_showFloor_6() { return &___showFloor_6; }
	inline void set_showFloor_6(bool value)
	{
		___showFloor_6 = value;
	}

	inline static int32_t get_offset_of_floorMaterial_7() { return static_cast<int32_t>(offsetof(MixedRealityBoundaryVisualizationProfile_tA198D88A478CBC4C97D067F75F016ED4CC053BB1, ___floorMaterial_7)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_floorMaterial_7() const { return ___floorMaterial_7; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_floorMaterial_7() { return &___floorMaterial_7; }
	inline void set_floorMaterial_7(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___floorMaterial_7 = value;
		Il2CppCodeGenWriteBarrier((&___floorMaterial_7), value);
	}

	inline static int32_t get_offset_of_floorPhysicsLayer_8() { return static_cast<int32_t>(offsetof(MixedRealityBoundaryVisualizationProfile_tA198D88A478CBC4C97D067F75F016ED4CC053BB1, ___floorPhysicsLayer_8)); }
	inline int32_t get_floorPhysicsLayer_8() const { return ___floorPhysicsLayer_8; }
	inline int32_t* get_address_of_floorPhysicsLayer_8() { return &___floorPhysicsLayer_8; }
	inline void set_floorPhysicsLayer_8(int32_t value)
	{
		___floorPhysicsLayer_8 = value;
	}

	inline static int32_t get_offset_of_floorScale_9() { return static_cast<int32_t>(offsetof(MixedRealityBoundaryVisualizationProfile_tA198D88A478CBC4C97D067F75F016ED4CC053BB1, ___floorScale_9)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_floorScale_9() const { return ___floorScale_9; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_floorScale_9() { return &___floorScale_9; }
	inline void set_floorScale_9(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___floorScale_9 = value;
	}

	inline static int32_t get_offset_of_showPlayArea_10() { return static_cast<int32_t>(offsetof(MixedRealityBoundaryVisualizationProfile_tA198D88A478CBC4C97D067F75F016ED4CC053BB1, ___showPlayArea_10)); }
	inline bool get_showPlayArea_10() const { return ___showPlayArea_10; }
	inline bool* get_address_of_showPlayArea_10() { return &___showPlayArea_10; }
	inline void set_showPlayArea_10(bool value)
	{
		___showPlayArea_10 = value;
	}

	inline static int32_t get_offset_of_playAreaMaterial_11() { return static_cast<int32_t>(offsetof(MixedRealityBoundaryVisualizationProfile_tA198D88A478CBC4C97D067F75F016ED4CC053BB1, ___playAreaMaterial_11)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_playAreaMaterial_11() const { return ___playAreaMaterial_11; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_playAreaMaterial_11() { return &___playAreaMaterial_11; }
	inline void set_playAreaMaterial_11(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___playAreaMaterial_11 = value;
		Il2CppCodeGenWriteBarrier((&___playAreaMaterial_11), value);
	}

	inline static int32_t get_offset_of_playAreaPhysicsLayer_12() { return static_cast<int32_t>(offsetof(MixedRealityBoundaryVisualizationProfile_tA198D88A478CBC4C97D067F75F016ED4CC053BB1, ___playAreaPhysicsLayer_12)); }
	inline int32_t get_playAreaPhysicsLayer_12() const { return ___playAreaPhysicsLayer_12; }
	inline int32_t* get_address_of_playAreaPhysicsLayer_12() { return &___playAreaPhysicsLayer_12; }
	inline void set_playAreaPhysicsLayer_12(int32_t value)
	{
		___playAreaPhysicsLayer_12 = value;
	}

	inline static int32_t get_offset_of_showTrackedArea_13() { return static_cast<int32_t>(offsetof(MixedRealityBoundaryVisualizationProfile_tA198D88A478CBC4C97D067F75F016ED4CC053BB1, ___showTrackedArea_13)); }
	inline bool get_showTrackedArea_13() const { return ___showTrackedArea_13; }
	inline bool* get_address_of_showTrackedArea_13() { return &___showTrackedArea_13; }
	inline void set_showTrackedArea_13(bool value)
	{
		___showTrackedArea_13 = value;
	}

	inline static int32_t get_offset_of_trackedAreaMaterial_14() { return static_cast<int32_t>(offsetof(MixedRealityBoundaryVisualizationProfile_tA198D88A478CBC4C97D067F75F016ED4CC053BB1, ___trackedAreaMaterial_14)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_trackedAreaMaterial_14() const { return ___trackedAreaMaterial_14; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_trackedAreaMaterial_14() { return &___trackedAreaMaterial_14; }
	inline void set_trackedAreaMaterial_14(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___trackedAreaMaterial_14 = value;
		Il2CppCodeGenWriteBarrier((&___trackedAreaMaterial_14), value);
	}

	inline static int32_t get_offset_of_trackedAreaPhysicsLayer_15() { return static_cast<int32_t>(offsetof(MixedRealityBoundaryVisualizationProfile_tA198D88A478CBC4C97D067F75F016ED4CC053BB1, ___trackedAreaPhysicsLayer_15)); }
	inline int32_t get_trackedAreaPhysicsLayer_15() const { return ___trackedAreaPhysicsLayer_15; }
	inline int32_t* get_address_of_trackedAreaPhysicsLayer_15() { return &___trackedAreaPhysicsLayer_15; }
	inline void set_trackedAreaPhysicsLayer_15(int32_t value)
	{
		___trackedAreaPhysicsLayer_15 = value;
	}

	inline static int32_t get_offset_of_showBoundaryWalls_16() { return static_cast<int32_t>(offsetof(MixedRealityBoundaryVisualizationProfile_tA198D88A478CBC4C97D067F75F016ED4CC053BB1, ___showBoundaryWalls_16)); }
	inline bool get_showBoundaryWalls_16() const { return ___showBoundaryWalls_16; }
	inline bool* get_address_of_showBoundaryWalls_16() { return &___showBoundaryWalls_16; }
	inline void set_showBoundaryWalls_16(bool value)
	{
		___showBoundaryWalls_16 = value;
	}

	inline static int32_t get_offset_of_boundaryWallMaterial_17() { return static_cast<int32_t>(offsetof(MixedRealityBoundaryVisualizationProfile_tA198D88A478CBC4C97D067F75F016ED4CC053BB1, ___boundaryWallMaterial_17)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_boundaryWallMaterial_17() const { return ___boundaryWallMaterial_17; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_boundaryWallMaterial_17() { return &___boundaryWallMaterial_17; }
	inline void set_boundaryWallMaterial_17(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___boundaryWallMaterial_17 = value;
		Il2CppCodeGenWriteBarrier((&___boundaryWallMaterial_17), value);
	}

	inline static int32_t get_offset_of_boundaryWallsPhysicsLayer_18() { return static_cast<int32_t>(offsetof(MixedRealityBoundaryVisualizationProfile_tA198D88A478CBC4C97D067F75F016ED4CC053BB1, ___boundaryWallsPhysicsLayer_18)); }
	inline int32_t get_boundaryWallsPhysicsLayer_18() const { return ___boundaryWallsPhysicsLayer_18; }
	inline int32_t* get_address_of_boundaryWallsPhysicsLayer_18() { return &___boundaryWallsPhysicsLayer_18; }
	inline void set_boundaryWallsPhysicsLayer_18(int32_t value)
	{
		___boundaryWallsPhysicsLayer_18 = value;
	}

	inline static int32_t get_offset_of_showBoundaryCeiling_19() { return static_cast<int32_t>(offsetof(MixedRealityBoundaryVisualizationProfile_tA198D88A478CBC4C97D067F75F016ED4CC053BB1, ___showBoundaryCeiling_19)); }
	inline bool get_showBoundaryCeiling_19() const { return ___showBoundaryCeiling_19; }
	inline bool* get_address_of_showBoundaryCeiling_19() { return &___showBoundaryCeiling_19; }
	inline void set_showBoundaryCeiling_19(bool value)
	{
		___showBoundaryCeiling_19 = value;
	}

	inline static int32_t get_offset_of_boundaryCeilingMaterial_20() { return static_cast<int32_t>(offsetof(MixedRealityBoundaryVisualizationProfile_tA198D88A478CBC4C97D067F75F016ED4CC053BB1, ___boundaryCeilingMaterial_20)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_boundaryCeilingMaterial_20() const { return ___boundaryCeilingMaterial_20; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_boundaryCeilingMaterial_20() { return &___boundaryCeilingMaterial_20; }
	inline void set_boundaryCeilingMaterial_20(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___boundaryCeilingMaterial_20 = value;
		Il2CppCodeGenWriteBarrier((&___boundaryCeilingMaterial_20), value);
	}

	inline static int32_t get_offset_of_ceilingPhysicsLayer_21() { return static_cast<int32_t>(offsetof(MixedRealityBoundaryVisualizationProfile_tA198D88A478CBC4C97D067F75F016ED4CC053BB1, ___ceilingPhysicsLayer_21)); }
	inline int32_t get_ceilingPhysicsLayer_21() const { return ___ceilingPhysicsLayer_21; }
	inline int32_t* get_address_of_ceilingPhysicsLayer_21() { return &___ceilingPhysicsLayer_21; }
	inline void set_ceilingPhysicsLayer_21(int32_t value)
	{
		___ceilingPhysicsLayer_21 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MIXEDREALITYBOUNDARYVISUALIZATIONPROFILE_TA198D88A478CBC4C97D067F75F016ED4CC053BB1_H
#ifndef MIXEDREALITYTOOLKITCONFIGURATIONPROFILE_T8FD0BE1E29894247405C6A2A716461F7FD9984D7_H
#define MIXEDREALITYTOOLKITCONFIGURATIONPROFILE_T8FD0BE1E29894247405C6A2A716461F7FD9984D7_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Core.Definitions.MixedRealityToolkitConfigurationProfile
struct  MixedRealityToolkitConfigurationProfile_t8FD0BE1E29894247405C6A2A716461F7FD9984D7  : public BaseMixedRealityProfile_t78CA4F585A8FC38B8F7610073EDF82DBA271E5DB
{
public:
	// System.Collections.Generic.Dictionary`2<System.Type,Microsoft.MixedReality.Toolkit.Core.Interfaces.IMixedRealityService> Microsoft.MixedReality.Toolkit.Core.Definitions.MixedRealityToolkitConfigurationProfile::<ActiveServices>k__BackingField
	Dictionary_2_tD804D59C4C3F8DFF7C988E97912F1BFA2FC5582F * ___U3CActiveServicesU3Ek__BackingField_5;
	// Microsoft.MixedReality.Toolkit.Core.Definitions.Utilities.ExperienceScale Microsoft.MixedReality.Toolkit.Core.Definitions.MixedRealityToolkitConfigurationProfile::targetExperienceScale
	int32_t ___targetExperienceScale_6;
	// System.Boolean Microsoft.MixedReality.Toolkit.Core.Definitions.MixedRealityToolkitConfigurationProfile::enableCameraProfile
	bool ___enableCameraProfile_7;
	// Microsoft.MixedReality.Toolkit.Core.Definitions.MixedRealityCameraProfile Microsoft.MixedReality.Toolkit.Core.Definitions.MixedRealityToolkitConfigurationProfile::cameraProfile
	MixedRealityCameraProfile_tB0588DE1F58A8E5D9DCF69428333BC4A37737991 * ___cameraProfile_8;
	// System.Boolean Microsoft.MixedReality.Toolkit.Core.Definitions.MixedRealityToolkitConfigurationProfile::enableInputSystem
	bool ___enableInputSystem_9;
	// Microsoft.MixedReality.Toolkit.Core.Definitions.InputSystem.MixedRealityInputSystemProfile Microsoft.MixedReality.Toolkit.Core.Definitions.MixedRealityToolkitConfigurationProfile::inputSystemProfile
	MixedRealityInputSystemProfile_tA212A9C49D4B1609CD1841D77C24E8237E7C3A09 * ___inputSystemProfile_10;
	// Microsoft.MixedReality.Toolkit.Core.Definitions.Utilities.SystemType Microsoft.MixedReality.Toolkit.Core.Definitions.MixedRealityToolkitConfigurationProfile::inputSystemType
	SystemType_t5CE0281F867A3B90634A45B1A7C5A9D34F6A2931 * ___inputSystemType_11;
	// System.Boolean Microsoft.MixedReality.Toolkit.Core.Definitions.MixedRealityToolkitConfigurationProfile::enableBoundarySystem
	bool ___enableBoundarySystem_12;
	// Microsoft.MixedReality.Toolkit.Core.Definitions.Utilities.SystemType Microsoft.MixedReality.Toolkit.Core.Definitions.MixedRealityToolkitConfigurationProfile::boundarySystemType
	SystemType_t5CE0281F867A3B90634A45B1A7C5A9D34F6A2931 * ___boundarySystemType_13;
	// Microsoft.MixedReality.Toolkit.Core.Definitions.BoundarySystem.MixedRealityBoundaryVisualizationProfile Microsoft.MixedReality.Toolkit.Core.Definitions.MixedRealityToolkitConfigurationProfile::boundaryVisualizationProfile
	MixedRealityBoundaryVisualizationProfile_tA198D88A478CBC4C97D067F75F016ED4CC053BB1 * ___boundaryVisualizationProfile_14;
	// System.Boolean Microsoft.MixedReality.Toolkit.Core.Definitions.MixedRealityToolkitConfigurationProfile::enableTeleportSystem
	bool ___enableTeleportSystem_15;
	// Microsoft.MixedReality.Toolkit.Core.Definitions.Utilities.SystemType Microsoft.MixedReality.Toolkit.Core.Definitions.MixedRealityToolkitConfigurationProfile::teleportSystemType
	SystemType_t5CE0281F867A3B90634A45B1A7C5A9D34F6A2931 * ___teleportSystemType_16;
	// System.Boolean Microsoft.MixedReality.Toolkit.Core.Definitions.MixedRealityToolkitConfigurationProfile::enableSpatialAwarenessSystem
	bool ___enableSpatialAwarenessSystem_17;
	// Microsoft.MixedReality.Toolkit.Core.Definitions.Utilities.SystemType Microsoft.MixedReality.Toolkit.Core.Definitions.MixedRealityToolkitConfigurationProfile::spatialAwarenessSystemType
	SystemType_t5CE0281F867A3B90634A45B1A7C5A9D34F6A2931 * ___spatialAwarenessSystemType_18;
	// Microsoft.MixedReality.Toolkit.Core.Definitions.Diagnostics.MixedRealityDiagnosticsProfile Microsoft.MixedReality.Toolkit.Core.Definitions.MixedRealityToolkitConfigurationProfile::diagnosticsSystemProfile
	MixedRealityDiagnosticsProfile_t093357B7B457411776568A856093ECA44D550536 * ___diagnosticsSystemProfile_19;
	// System.Boolean Microsoft.MixedReality.Toolkit.Core.Definitions.MixedRealityToolkitConfigurationProfile::enableDiagnosticsSystem
	bool ___enableDiagnosticsSystem_20;
	// Microsoft.MixedReality.Toolkit.Core.Definitions.Utilities.SystemType Microsoft.MixedReality.Toolkit.Core.Definitions.MixedRealityToolkitConfigurationProfile::diagnosticsSystemType
	SystemType_t5CE0281F867A3B90634A45B1A7C5A9D34F6A2931 * ___diagnosticsSystemType_21;
	// Microsoft.MixedReality.Toolkit.Core.Definitions.MixedRealityRegisteredServiceProvidersProfile Microsoft.MixedReality.Toolkit.Core.Definitions.MixedRealityToolkitConfigurationProfile::registeredServiceProvidersProfile
	MixedRealityRegisteredServiceProvidersProfile_tBC087C562618F974722B0809985377E92D3DB9D3 * ___registeredServiceProvidersProfile_22;

public:
	inline static int32_t get_offset_of_U3CActiveServicesU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(MixedRealityToolkitConfigurationProfile_t8FD0BE1E29894247405C6A2A716461F7FD9984D7, ___U3CActiveServicesU3Ek__BackingField_5)); }
	inline Dictionary_2_tD804D59C4C3F8DFF7C988E97912F1BFA2FC5582F * get_U3CActiveServicesU3Ek__BackingField_5() const { return ___U3CActiveServicesU3Ek__BackingField_5; }
	inline Dictionary_2_tD804D59C4C3F8DFF7C988E97912F1BFA2FC5582F ** get_address_of_U3CActiveServicesU3Ek__BackingField_5() { return &___U3CActiveServicesU3Ek__BackingField_5; }
	inline void set_U3CActiveServicesU3Ek__BackingField_5(Dictionary_2_tD804D59C4C3F8DFF7C988E97912F1BFA2FC5582F * value)
	{
		___U3CActiveServicesU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((&___U3CActiveServicesU3Ek__BackingField_5), value);
	}

	inline static int32_t get_offset_of_targetExperienceScale_6() { return static_cast<int32_t>(offsetof(MixedRealityToolkitConfigurationProfile_t8FD0BE1E29894247405C6A2A716461F7FD9984D7, ___targetExperienceScale_6)); }
	inline int32_t get_targetExperienceScale_6() const { return ___targetExperienceScale_6; }
	inline int32_t* get_address_of_targetExperienceScale_6() { return &___targetExperienceScale_6; }
	inline void set_targetExperienceScale_6(int32_t value)
	{
		___targetExperienceScale_6 = value;
	}

	inline static int32_t get_offset_of_enableCameraProfile_7() { return static_cast<int32_t>(offsetof(MixedRealityToolkitConfigurationProfile_t8FD0BE1E29894247405C6A2A716461F7FD9984D7, ___enableCameraProfile_7)); }
	inline bool get_enableCameraProfile_7() const { return ___enableCameraProfile_7; }
	inline bool* get_address_of_enableCameraProfile_7() { return &___enableCameraProfile_7; }
	inline void set_enableCameraProfile_7(bool value)
	{
		___enableCameraProfile_7 = value;
	}

	inline static int32_t get_offset_of_cameraProfile_8() { return static_cast<int32_t>(offsetof(MixedRealityToolkitConfigurationProfile_t8FD0BE1E29894247405C6A2A716461F7FD9984D7, ___cameraProfile_8)); }
	inline MixedRealityCameraProfile_tB0588DE1F58A8E5D9DCF69428333BC4A37737991 * get_cameraProfile_8() const { return ___cameraProfile_8; }
	inline MixedRealityCameraProfile_tB0588DE1F58A8E5D9DCF69428333BC4A37737991 ** get_address_of_cameraProfile_8() { return &___cameraProfile_8; }
	inline void set_cameraProfile_8(MixedRealityCameraProfile_tB0588DE1F58A8E5D9DCF69428333BC4A37737991 * value)
	{
		___cameraProfile_8 = value;
		Il2CppCodeGenWriteBarrier((&___cameraProfile_8), value);
	}

	inline static int32_t get_offset_of_enableInputSystem_9() { return static_cast<int32_t>(offsetof(MixedRealityToolkitConfigurationProfile_t8FD0BE1E29894247405C6A2A716461F7FD9984D7, ___enableInputSystem_9)); }
	inline bool get_enableInputSystem_9() const { return ___enableInputSystem_9; }
	inline bool* get_address_of_enableInputSystem_9() { return &___enableInputSystem_9; }
	inline void set_enableInputSystem_9(bool value)
	{
		___enableInputSystem_9 = value;
	}

	inline static int32_t get_offset_of_inputSystemProfile_10() { return static_cast<int32_t>(offsetof(MixedRealityToolkitConfigurationProfile_t8FD0BE1E29894247405C6A2A716461F7FD9984D7, ___inputSystemProfile_10)); }
	inline MixedRealityInputSystemProfile_tA212A9C49D4B1609CD1841D77C24E8237E7C3A09 * get_inputSystemProfile_10() const { return ___inputSystemProfile_10; }
	inline MixedRealityInputSystemProfile_tA212A9C49D4B1609CD1841D77C24E8237E7C3A09 ** get_address_of_inputSystemProfile_10() { return &___inputSystemProfile_10; }
	inline void set_inputSystemProfile_10(MixedRealityInputSystemProfile_tA212A9C49D4B1609CD1841D77C24E8237E7C3A09 * value)
	{
		___inputSystemProfile_10 = value;
		Il2CppCodeGenWriteBarrier((&___inputSystemProfile_10), value);
	}

	inline static int32_t get_offset_of_inputSystemType_11() { return static_cast<int32_t>(offsetof(MixedRealityToolkitConfigurationProfile_t8FD0BE1E29894247405C6A2A716461F7FD9984D7, ___inputSystemType_11)); }
	inline SystemType_t5CE0281F867A3B90634A45B1A7C5A9D34F6A2931 * get_inputSystemType_11() const { return ___inputSystemType_11; }
	inline SystemType_t5CE0281F867A3B90634A45B1A7C5A9D34F6A2931 ** get_address_of_inputSystemType_11() { return &___inputSystemType_11; }
	inline void set_inputSystemType_11(SystemType_t5CE0281F867A3B90634A45B1A7C5A9D34F6A2931 * value)
	{
		___inputSystemType_11 = value;
		Il2CppCodeGenWriteBarrier((&___inputSystemType_11), value);
	}

	inline static int32_t get_offset_of_enableBoundarySystem_12() { return static_cast<int32_t>(offsetof(MixedRealityToolkitConfigurationProfile_t8FD0BE1E29894247405C6A2A716461F7FD9984D7, ___enableBoundarySystem_12)); }
	inline bool get_enableBoundarySystem_12() const { return ___enableBoundarySystem_12; }
	inline bool* get_address_of_enableBoundarySystem_12() { return &___enableBoundarySystem_12; }
	inline void set_enableBoundarySystem_12(bool value)
	{
		___enableBoundarySystem_12 = value;
	}

	inline static int32_t get_offset_of_boundarySystemType_13() { return static_cast<int32_t>(offsetof(MixedRealityToolkitConfigurationProfile_t8FD0BE1E29894247405C6A2A716461F7FD9984D7, ___boundarySystemType_13)); }
	inline SystemType_t5CE0281F867A3B90634A45B1A7C5A9D34F6A2931 * get_boundarySystemType_13() const { return ___boundarySystemType_13; }
	inline SystemType_t5CE0281F867A3B90634A45B1A7C5A9D34F6A2931 ** get_address_of_boundarySystemType_13() { return &___boundarySystemType_13; }
	inline void set_boundarySystemType_13(SystemType_t5CE0281F867A3B90634A45B1A7C5A9D34F6A2931 * value)
	{
		___boundarySystemType_13 = value;
		Il2CppCodeGenWriteBarrier((&___boundarySystemType_13), value);
	}

	inline static int32_t get_offset_of_boundaryVisualizationProfile_14() { return static_cast<int32_t>(offsetof(MixedRealityToolkitConfigurationProfile_t8FD0BE1E29894247405C6A2A716461F7FD9984D7, ___boundaryVisualizationProfile_14)); }
	inline MixedRealityBoundaryVisualizationProfile_tA198D88A478CBC4C97D067F75F016ED4CC053BB1 * get_boundaryVisualizationProfile_14() const { return ___boundaryVisualizationProfile_14; }
	inline MixedRealityBoundaryVisualizationProfile_tA198D88A478CBC4C97D067F75F016ED4CC053BB1 ** get_address_of_boundaryVisualizationProfile_14() { return &___boundaryVisualizationProfile_14; }
	inline void set_boundaryVisualizationProfile_14(MixedRealityBoundaryVisualizationProfile_tA198D88A478CBC4C97D067F75F016ED4CC053BB1 * value)
	{
		___boundaryVisualizationProfile_14 = value;
		Il2CppCodeGenWriteBarrier((&___boundaryVisualizationProfile_14), value);
	}

	inline static int32_t get_offset_of_enableTeleportSystem_15() { return static_cast<int32_t>(offsetof(MixedRealityToolkitConfigurationProfile_t8FD0BE1E29894247405C6A2A716461F7FD9984D7, ___enableTeleportSystem_15)); }
	inline bool get_enableTeleportSystem_15() const { return ___enableTeleportSystem_15; }
	inline bool* get_address_of_enableTeleportSystem_15() { return &___enableTeleportSystem_15; }
	inline void set_enableTeleportSystem_15(bool value)
	{
		___enableTeleportSystem_15 = value;
	}

	inline static int32_t get_offset_of_teleportSystemType_16() { return static_cast<int32_t>(offsetof(MixedRealityToolkitConfigurationProfile_t8FD0BE1E29894247405C6A2A716461F7FD9984D7, ___teleportSystemType_16)); }
	inline SystemType_t5CE0281F867A3B90634A45B1A7C5A9D34F6A2931 * get_teleportSystemType_16() const { return ___teleportSystemType_16; }
	inline SystemType_t5CE0281F867A3B90634A45B1A7C5A9D34F6A2931 ** get_address_of_teleportSystemType_16() { return &___teleportSystemType_16; }
	inline void set_teleportSystemType_16(SystemType_t5CE0281F867A3B90634A45B1A7C5A9D34F6A2931 * value)
	{
		___teleportSystemType_16 = value;
		Il2CppCodeGenWriteBarrier((&___teleportSystemType_16), value);
	}

	inline static int32_t get_offset_of_enableSpatialAwarenessSystem_17() { return static_cast<int32_t>(offsetof(MixedRealityToolkitConfigurationProfile_t8FD0BE1E29894247405C6A2A716461F7FD9984D7, ___enableSpatialAwarenessSystem_17)); }
	inline bool get_enableSpatialAwarenessSystem_17() const { return ___enableSpatialAwarenessSystem_17; }
	inline bool* get_address_of_enableSpatialAwarenessSystem_17() { return &___enableSpatialAwarenessSystem_17; }
	inline void set_enableSpatialAwarenessSystem_17(bool value)
	{
		___enableSpatialAwarenessSystem_17 = value;
	}

	inline static int32_t get_offset_of_spatialAwarenessSystemType_18() { return static_cast<int32_t>(offsetof(MixedRealityToolkitConfigurationProfile_t8FD0BE1E29894247405C6A2A716461F7FD9984D7, ___spatialAwarenessSystemType_18)); }
	inline SystemType_t5CE0281F867A3B90634A45B1A7C5A9D34F6A2931 * get_spatialAwarenessSystemType_18() const { return ___spatialAwarenessSystemType_18; }
	inline SystemType_t5CE0281F867A3B90634A45B1A7C5A9D34F6A2931 ** get_address_of_spatialAwarenessSystemType_18() { return &___spatialAwarenessSystemType_18; }
	inline void set_spatialAwarenessSystemType_18(SystemType_t5CE0281F867A3B90634A45B1A7C5A9D34F6A2931 * value)
	{
		___spatialAwarenessSystemType_18 = value;
		Il2CppCodeGenWriteBarrier((&___spatialAwarenessSystemType_18), value);
	}

	inline static int32_t get_offset_of_diagnosticsSystemProfile_19() { return static_cast<int32_t>(offsetof(MixedRealityToolkitConfigurationProfile_t8FD0BE1E29894247405C6A2A716461F7FD9984D7, ___diagnosticsSystemProfile_19)); }
	inline MixedRealityDiagnosticsProfile_t093357B7B457411776568A856093ECA44D550536 * get_diagnosticsSystemProfile_19() const { return ___diagnosticsSystemProfile_19; }
	inline MixedRealityDiagnosticsProfile_t093357B7B457411776568A856093ECA44D550536 ** get_address_of_diagnosticsSystemProfile_19() { return &___diagnosticsSystemProfile_19; }
	inline void set_diagnosticsSystemProfile_19(MixedRealityDiagnosticsProfile_t093357B7B457411776568A856093ECA44D550536 * value)
	{
		___diagnosticsSystemProfile_19 = value;
		Il2CppCodeGenWriteBarrier((&___diagnosticsSystemProfile_19), value);
	}

	inline static int32_t get_offset_of_enableDiagnosticsSystem_20() { return static_cast<int32_t>(offsetof(MixedRealityToolkitConfigurationProfile_t8FD0BE1E29894247405C6A2A716461F7FD9984D7, ___enableDiagnosticsSystem_20)); }
	inline bool get_enableDiagnosticsSystem_20() const { return ___enableDiagnosticsSystem_20; }
	inline bool* get_address_of_enableDiagnosticsSystem_20() { return &___enableDiagnosticsSystem_20; }
	inline void set_enableDiagnosticsSystem_20(bool value)
	{
		___enableDiagnosticsSystem_20 = value;
	}

	inline static int32_t get_offset_of_diagnosticsSystemType_21() { return static_cast<int32_t>(offsetof(MixedRealityToolkitConfigurationProfile_t8FD0BE1E29894247405C6A2A716461F7FD9984D7, ___diagnosticsSystemType_21)); }
	inline SystemType_t5CE0281F867A3B90634A45B1A7C5A9D34F6A2931 * get_diagnosticsSystemType_21() const { return ___diagnosticsSystemType_21; }
	inline SystemType_t5CE0281F867A3B90634A45B1A7C5A9D34F6A2931 ** get_address_of_diagnosticsSystemType_21() { return &___diagnosticsSystemType_21; }
	inline void set_diagnosticsSystemType_21(SystemType_t5CE0281F867A3B90634A45B1A7C5A9D34F6A2931 * value)
	{
		___diagnosticsSystemType_21 = value;
		Il2CppCodeGenWriteBarrier((&___diagnosticsSystemType_21), value);
	}

	inline static int32_t get_offset_of_registeredServiceProvidersProfile_22() { return static_cast<int32_t>(offsetof(MixedRealityToolkitConfigurationProfile_t8FD0BE1E29894247405C6A2A716461F7FD9984D7, ___registeredServiceProvidersProfile_22)); }
	inline MixedRealityRegisteredServiceProvidersProfile_tBC087C562618F974722B0809985377E92D3DB9D3 * get_registeredServiceProvidersProfile_22() const { return ___registeredServiceProvidersProfile_22; }
	inline MixedRealityRegisteredServiceProvidersProfile_tBC087C562618F974722B0809985377E92D3DB9D3 ** get_address_of_registeredServiceProvidersProfile_22() { return &___registeredServiceProvidersProfile_22; }
	inline void set_registeredServiceProvidersProfile_22(MixedRealityRegisteredServiceProvidersProfile_tBC087C562618F974722B0809985377E92D3DB9D3 * value)
	{
		___registeredServiceProvidersProfile_22 = value;
		Il2CppCodeGenWriteBarrier((&___registeredServiceProvidersProfile_22), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MIXEDREALITYTOOLKITCONFIGURATIONPROFILE_T8FD0BE1E29894247405C6A2A716461F7FD9984D7_H
#ifndef INPUTEVENTDATA_T222623A7632AE66699840C7E19A3E967B552E9C2_H
#define INPUTEVENTDATA_T222623A7632AE66699840C7E19A3E967B552E9C2_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Core.EventDatum.Input.InputEventData
struct  InputEventData_t222623A7632AE66699840C7E19A3E967B552E9C2  : public BaseInputEventData_t4E713D4242FE17A0386036D68C4C910847E7F697
{
public:
	// Microsoft.MixedReality.Toolkit.Core.Definitions.Utilities.Handedness Microsoft.MixedReality.Toolkit.Core.EventDatum.Input.InputEventData::<Handedness>k__BackingField
	uint8_t ___U3CHandednessU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_U3CHandednessU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(InputEventData_t222623A7632AE66699840C7E19A3E967B552E9C2, ___U3CHandednessU3Ek__BackingField_6)); }
	inline uint8_t get_U3CHandednessU3Ek__BackingField_6() const { return ___U3CHandednessU3Ek__BackingField_6; }
	inline uint8_t* get_address_of_U3CHandednessU3Ek__BackingField_6() { return &___U3CHandednessU3Ek__BackingField_6; }
	inline void set_U3CHandednessU3Ek__BackingField_6(uint8_t value)
	{
		___U3CHandednessU3Ek__BackingField_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INPUTEVENTDATA_T222623A7632AE66699840C7E19A3E967B552E9C2_H
#ifndef MESHCOLLIDER_T60EB55ADE92499FE8D1AA206D2BD96E65B2766DE_H
#define MESHCOLLIDER_T60EB55ADE92499FE8D1AA206D2BD96E65B2766DE_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MeshCollider
struct  MeshCollider_t60EB55ADE92499FE8D1AA206D2BD96E65B2766DE  : public Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MESHCOLLIDER_T60EB55ADE92499FE8D1AA206D2BD96E65B2766DE_H
#ifndef MESHRENDERER_T9D67CA54E83315F743623BDE8EADCD5074659EED_H
#define MESHRENDERER_T9D67CA54E83315F743623BDE8EADCD5074659EED_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MeshRenderer
struct  MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED  : public Renderer_t0556D67DD582620D1F495627EDE30D03284151F4
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MESHRENDERER_T9D67CA54E83315F743623BDE8EADCD5074659EED_H
#ifndef MONOBEHAVIOUR_T4A60845CF505405AF8BE8C61CC07F75CADEF6429_H
#define MONOBEHAVIOUR_T4A60845CF505405AF8BE8C61CC07F75CADEF6429_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOBEHAVIOUR_T4A60845CF505405AF8BE8C61CC07F75CADEF6429_H
#ifndef SPHERECOLLIDER_TAC3E5E20B385DF1C0B17F3EA5C7214F71367706F_H
#define SPHERECOLLIDER_TAC3E5E20B385DF1C0B17F3EA5C7214F71367706F_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SphereCollider
struct  SphereCollider_tAC3E5E20B385DF1C0B17F3EA5C7214F71367706F  : public Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SPHERECOLLIDER_TAC3E5E20B385DF1C0B17F3EA5C7214F71367706F_H
#ifndef MIXEDREALITYPOINTEREVENTDATA_T74D5F359F15D4B61B3F9C2702BC786EC1F400CCC_H
#define MIXEDREALITYPOINTEREVENTDATA_T74D5F359F15D4B61B3F9C2702BC786EC1F400CCC_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Core.EventDatum.Input.MixedRealityPointerEventData
struct  MixedRealityPointerEventData_t74D5F359F15D4B61B3F9C2702BC786EC1F400CCC  : public InputEventData_t222623A7632AE66699840C7E19A3E967B552E9C2
{
public:
	// Microsoft.MixedReality.Toolkit.Core.Interfaces.InputSystem.IMixedRealityPointer Microsoft.MixedReality.Toolkit.Core.EventDatum.Input.MixedRealityPointerEventData::<Pointer>k__BackingField
	RuntimeObject* ___U3CPointerU3Ek__BackingField_7;
	// System.Int32 Microsoft.MixedReality.Toolkit.Core.EventDatum.Input.MixedRealityPointerEventData::<Count>k__BackingField
	int32_t ___U3CCountU3Ek__BackingField_8;

public:
	inline static int32_t get_offset_of_U3CPointerU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(MixedRealityPointerEventData_t74D5F359F15D4B61B3F9C2702BC786EC1F400CCC, ___U3CPointerU3Ek__BackingField_7)); }
	inline RuntimeObject* get_U3CPointerU3Ek__BackingField_7() const { return ___U3CPointerU3Ek__BackingField_7; }
	inline RuntimeObject** get_address_of_U3CPointerU3Ek__BackingField_7() { return &___U3CPointerU3Ek__BackingField_7; }
	inline void set_U3CPointerU3Ek__BackingField_7(RuntimeObject* value)
	{
		___U3CPointerU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((&___U3CPointerU3Ek__BackingField_7), value);
	}

	inline static int32_t get_offset_of_U3CCountU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(MixedRealityPointerEventData_t74D5F359F15D4B61B3F9C2702BC786EC1F400CCC, ___U3CCountU3Ek__BackingField_8)); }
	inline int32_t get_U3CCountU3Ek__BackingField_8() const { return ___U3CCountU3Ek__BackingField_8; }
	inline int32_t* get_address_of_U3CCountU3Ek__BackingField_8() { return &___U3CCountU3Ek__BackingField_8; }
	inline void set_U3CCountU3Ek__BackingField_8(int32_t value)
	{
		___U3CCountU3Ek__BackingField_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MIXEDREALITYPOINTEREVENTDATA_T74D5F359F15D4B61B3F9C2702BC786EC1F400CCC_H
#ifndef MIXEDREALITYTOOLKIT_T638B1380E4669477D1FBF5DD68B45532D1BF0FDC_H
#define MIXEDREALITYTOOLKIT_T638B1380E4669477D1FBF5DD68B45532D1BF0FDC_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Core.Services.MixedRealityToolkit
struct  MixedRealityToolkit_t638B1380E4669477D1FBF5DD68B45532D1BF0FDC  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// Microsoft.MixedReality.Toolkit.Core.Definitions.MixedRealityToolkitConfigurationProfile Microsoft.MixedReality.Toolkit.Core.Services.MixedRealityToolkit::activeProfile
	MixedRealityToolkitConfigurationProfile_t8FD0BE1E29894247405C6A2A716461F7FD9984D7 * ___activeProfile_7;
	// UnityEngine.Transform Microsoft.MixedReality.Toolkit.Core.Services.MixedRealityToolkit::mixedRealityPlayspace
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___mixedRealityPlayspace_13;

public:
	inline static int32_t get_offset_of_activeProfile_7() { return static_cast<int32_t>(offsetof(MixedRealityToolkit_t638B1380E4669477D1FBF5DD68B45532D1BF0FDC, ___activeProfile_7)); }
	inline MixedRealityToolkitConfigurationProfile_t8FD0BE1E29894247405C6A2A716461F7FD9984D7 * get_activeProfile_7() const { return ___activeProfile_7; }
	inline MixedRealityToolkitConfigurationProfile_t8FD0BE1E29894247405C6A2A716461F7FD9984D7 ** get_address_of_activeProfile_7() { return &___activeProfile_7; }
	inline void set_activeProfile_7(MixedRealityToolkitConfigurationProfile_t8FD0BE1E29894247405C6A2A716461F7FD9984D7 * value)
	{
		___activeProfile_7 = value;
		Il2CppCodeGenWriteBarrier((&___activeProfile_7), value);
	}

	inline static int32_t get_offset_of_mixedRealityPlayspace_13() { return static_cast<int32_t>(offsetof(MixedRealityToolkit_t638B1380E4669477D1FBF5DD68B45532D1BF0FDC, ___mixedRealityPlayspace_13)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get_mixedRealityPlayspace_13() const { return ___mixedRealityPlayspace_13; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of_mixedRealityPlayspace_13() { return &___mixedRealityPlayspace_13; }
	inline void set_mixedRealityPlayspace_13(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		___mixedRealityPlayspace_13 = value;
		Il2CppCodeGenWriteBarrier((&___mixedRealityPlayspace_13), value);
	}
};

struct MixedRealityToolkit_t638B1380E4669477D1FBF5DD68B45532D1BF0FDC_StaticFields
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.Core.Services.MixedRealityToolkit::isInitializing
	bool ___isInitializing_5;
	// System.Boolean Microsoft.MixedReality.Toolkit.Core.Services.MixedRealityToolkit::isApplicationQuitting
	bool ___isApplicationQuitting_6;
	// System.Collections.Generic.Dictionary`2<System.Type,Microsoft.MixedReality.Toolkit.Core.Interfaces.IMixedRealityService> Microsoft.MixedReality.Toolkit.Core.Services.MixedRealityToolkit::activeSystems
	Dictionary_2_tD804D59C4C3F8DFF7C988E97912F1BFA2FC5582F * ___activeSystems_8;
	// System.Collections.Generic.List`1<System.Tuple`2<System.Type,Microsoft.MixedReality.Toolkit.Core.Interfaces.IMixedRealityService>> Microsoft.MixedReality.Toolkit.Core.Services.MixedRealityToolkit::registeredMixedRealityServices
	List_1_tDF897447ECFD689CCDDEDAB95FECA6B2EF119E20 * ___registeredMixedRealityServices_9;
	// Microsoft.MixedReality.Toolkit.Core.Services.MixedRealityToolkit Microsoft.MixedReality.Toolkit.Core.Services.MixedRealityToolkit::instance
	MixedRealityToolkit_t638B1380E4669477D1FBF5DD68B45532D1BF0FDC * ___instance_10;
	// System.Object Microsoft.MixedReality.Toolkit.Core.Services.MixedRealityToolkit::initializedLock
	RuntimeObject * ___initializedLock_11;
	// System.Boolean Microsoft.MixedReality.Toolkit.Core.Services.MixedRealityToolkit::searchForInstance
	bool ___searchForInstance_12;
	// Microsoft.MixedReality.Toolkit.Core.Interfaces.InputSystem.IMixedRealityInputSystem Microsoft.MixedReality.Toolkit.Core.Services.MixedRealityToolkit::inputSystem
	RuntimeObject* ___inputSystem_14;
	// System.Boolean Microsoft.MixedReality.Toolkit.Core.Services.MixedRealityToolkit::logInputSystem
	bool ___logInputSystem_15;
	// Microsoft.MixedReality.Toolkit.Core.Interfaces.BoundarySystem.IMixedRealityBoundarySystem Microsoft.MixedReality.Toolkit.Core.Services.MixedRealityToolkit::boundarySystem
	RuntimeObject* ___boundarySystem_16;
	// System.Boolean Microsoft.MixedReality.Toolkit.Core.Services.MixedRealityToolkit::logBoundarySystem
	bool ___logBoundarySystem_17;
	// Microsoft.MixedReality.Toolkit.Core.Interfaces.SpatialAwarenessSystem.IMixedRealitySpatialAwarenessSystem Microsoft.MixedReality.Toolkit.Core.Services.MixedRealityToolkit::spatialAwarenessSystem
	RuntimeObject* ___spatialAwarenessSystem_18;
	// System.Boolean Microsoft.MixedReality.Toolkit.Core.Services.MixedRealityToolkit::logSpatialAwarenessSystem
	bool ___logSpatialAwarenessSystem_19;
	// Microsoft.MixedReality.Toolkit.Core.Interfaces.TeleportSystem.IMixedRealityTeleportSystem Microsoft.MixedReality.Toolkit.Core.Services.MixedRealityToolkit::teleportSystem
	RuntimeObject* ___teleportSystem_20;
	// System.Boolean Microsoft.MixedReality.Toolkit.Core.Services.MixedRealityToolkit::logTeleportSystem
	bool ___logTeleportSystem_21;
	// Microsoft.MixedReality.Toolkit.Core.Interfaces.Diagnostics.IMixedRealityDiagnosticsSystem Microsoft.MixedReality.Toolkit.Core.Services.MixedRealityToolkit::diagnosticsSystem
	RuntimeObject* ___diagnosticsSystem_22;
	// System.Boolean Microsoft.MixedReality.Toolkit.Core.Services.MixedRealityToolkit::logDiagnosticsSystem
	bool ___logDiagnosticsSystem_23;

public:
	inline static int32_t get_offset_of_isInitializing_5() { return static_cast<int32_t>(offsetof(MixedRealityToolkit_t638B1380E4669477D1FBF5DD68B45532D1BF0FDC_StaticFields, ___isInitializing_5)); }
	inline bool get_isInitializing_5() const { return ___isInitializing_5; }
	inline bool* get_address_of_isInitializing_5() { return &___isInitializing_5; }
	inline void set_isInitializing_5(bool value)
	{
		___isInitializing_5 = value;
	}

	inline static int32_t get_offset_of_isApplicationQuitting_6() { return static_cast<int32_t>(offsetof(MixedRealityToolkit_t638B1380E4669477D1FBF5DD68B45532D1BF0FDC_StaticFields, ___isApplicationQuitting_6)); }
	inline bool get_isApplicationQuitting_6() const { return ___isApplicationQuitting_6; }
	inline bool* get_address_of_isApplicationQuitting_6() { return &___isApplicationQuitting_6; }
	inline void set_isApplicationQuitting_6(bool value)
	{
		___isApplicationQuitting_6 = value;
	}

	inline static int32_t get_offset_of_activeSystems_8() { return static_cast<int32_t>(offsetof(MixedRealityToolkit_t638B1380E4669477D1FBF5DD68B45532D1BF0FDC_StaticFields, ___activeSystems_8)); }
	inline Dictionary_2_tD804D59C4C3F8DFF7C988E97912F1BFA2FC5582F * get_activeSystems_8() const { return ___activeSystems_8; }
	inline Dictionary_2_tD804D59C4C3F8DFF7C988E97912F1BFA2FC5582F ** get_address_of_activeSystems_8() { return &___activeSystems_8; }
	inline void set_activeSystems_8(Dictionary_2_tD804D59C4C3F8DFF7C988E97912F1BFA2FC5582F * value)
	{
		___activeSystems_8 = value;
		Il2CppCodeGenWriteBarrier((&___activeSystems_8), value);
	}

	inline static int32_t get_offset_of_registeredMixedRealityServices_9() { return static_cast<int32_t>(offsetof(MixedRealityToolkit_t638B1380E4669477D1FBF5DD68B45532D1BF0FDC_StaticFields, ___registeredMixedRealityServices_9)); }
	inline List_1_tDF897447ECFD689CCDDEDAB95FECA6B2EF119E20 * get_registeredMixedRealityServices_9() const { return ___registeredMixedRealityServices_9; }
	inline List_1_tDF897447ECFD689CCDDEDAB95FECA6B2EF119E20 ** get_address_of_registeredMixedRealityServices_9() { return &___registeredMixedRealityServices_9; }
	inline void set_registeredMixedRealityServices_9(List_1_tDF897447ECFD689CCDDEDAB95FECA6B2EF119E20 * value)
	{
		___registeredMixedRealityServices_9 = value;
		Il2CppCodeGenWriteBarrier((&___registeredMixedRealityServices_9), value);
	}

	inline static int32_t get_offset_of_instance_10() { return static_cast<int32_t>(offsetof(MixedRealityToolkit_t638B1380E4669477D1FBF5DD68B45532D1BF0FDC_StaticFields, ___instance_10)); }
	inline MixedRealityToolkit_t638B1380E4669477D1FBF5DD68B45532D1BF0FDC * get_instance_10() const { return ___instance_10; }
	inline MixedRealityToolkit_t638B1380E4669477D1FBF5DD68B45532D1BF0FDC ** get_address_of_instance_10() { return &___instance_10; }
	inline void set_instance_10(MixedRealityToolkit_t638B1380E4669477D1FBF5DD68B45532D1BF0FDC * value)
	{
		___instance_10 = value;
		Il2CppCodeGenWriteBarrier((&___instance_10), value);
	}

	inline static int32_t get_offset_of_initializedLock_11() { return static_cast<int32_t>(offsetof(MixedRealityToolkit_t638B1380E4669477D1FBF5DD68B45532D1BF0FDC_StaticFields, ___initializedLock_11)); }
	inline RuntimeObject * get_initializedLock_11() const { return ___initializedLock_11; }
	inline RuntimeObject ** get_address_of_initializedLock_11() { return &___initializedLock_11; }
	inline void set_initializedLock_11(RuntimeObject * value)
	{
		___initializedLock_11 = value;
		Il2CppCodeGenWriteBarrier((&___initializedLock_11), value);
	}

	inline static int32_t get_offset_of_searchForInstance_12() { return static_cast<int32_t>(offsetof(MixedRealityToolkit_t638B1380E4669477D1FBF5DD68B45532D1BF0FDC_StaticFields, ___searchForInstance_12)); }
	inline bool get_searchForInstance_12() const { return ___searchForInstance_12; }
	inline bool* get_address_of_searchForInstance_12() { return &___searchForInstance_12; }
	inline void set_searchForInstance_12(bool value)
	{
		___searchForInstance_12 = value;
	}

	inline static int32_t get_offset_of_inputSystem_14() { return static_cast<int32_t>(offsetof(MixedRealityToolkit_t638B1380E4669477D1FBF5DD68B45532D1BF0FDC_StaticFields, ___inputSystem_14)); }
	inline RuntimeObject* get_inputSystem_14() const { return ___inputSystem_14; }
	inline RuntimeObject** get_address_of_inputSystem_14() { return &___inputSystem_14; }
	inline void set_inputSystem_14(RuntimeObject* value)
	{
		___inputSystem_14 = value;
		Il2CppCodeGenWriteBarrier((&___inputSystem_14), value);
	}

	inline static int32_t get_offset_of_logInputSystem_15() { return static_cast<int32_t>(offsetof(MixedRealityToolkit_t638B1380E4669477D1FBF5DD68B45532D1BF0FDC_StaticFields, ___logInputSystem_15)); }
	inline bool get_logInputSystem_15() const { return ___logInputSystem_15; }
	inline bool* get_address_of_logInputSystem_15() { return &___logInputSystem_15; }
	inline void set_logInputSystem_15(bool value)
	{
		___logInputSystem_15 = value;
	}

	inline static int32_t get_offset_of_boundarySystem_16() { return static_cast<int32_t>(offsetof(MixedRealityToolkit_t638B1380E4669477D1FBF5DD68B45532D1BF0FDC_StaticFields, ___boundarySystem_16)); }
	inline RuntimeObject* get_boundarySystem_16() const { return ___boundarySystem_16; }
	inline RuntimeObject** get_address_of_boundarySystem_16() { return &___boundarySystem_16; }
	inline void set_boundarySystem_16(RuntimeObject* value)
	{
		___boundarySystem_16 = value;
		Il2CppCodeGenWriteBarrier((&___boundarySystem_16), value);
	}

	inline static int32_t get_offset_of_logBoundarySystem_17() { return static_cast<int32_t>(offsetof(MixedRealityToolkit_t638B1380E4669477D1FBF5DD68B45532D1BF0FDC_StaticFields, ___logBoundarySystem_17)); }
	inline bool get_logBoundarySystem_17() const { return ___logBoundarySystem_17; }
	inline bool* get_address_of_logBoundarySystem_17() { return &___logBoundarySystem_17; }
	inline void set_logBoundarySystem_17(bool value)
	{
		___logBoundarySystem_17 = value;
	}

	inline static int32_t get_offset_of_spatialAwarenessSystem_18() { return static_cast<int32_t>(offsetof(MixedRealityToolkit_t638B1380E4669477D1FBF5DD68B45532D1BF0FDC_StaticFields, ___spatialAwarenessSystem_18)); }
	inline RuntimeObject* get_spatialAwarenessSystem_18() const { return ___spatialAwarenessSystem_18; }
	inline RuntimeObject** get_address_of_spatialAwarenessSystem_18() { return &___spatialAwarenessSystem_18; }
	inline void set_spatialAwarenessSystem_18(RuntimeObject* value)
	{
		___spatialAwarenessSystem_18 = value;
		Il2CppCodeGenWriteBarrier((&___spatialAwarenessSystem_18), value);
	}

	inline static int32_t get_offset_of_logSpatialAwarenessSystem_19() { return static_cast<int32_t>(offsetof(MixedRealityToolkit_t638B1380E4669477D1FBF5DD68B45532D1BF0FDC_StaticFields, ___logSpatialAwarenessSystem_19)); }
	inline bool get_logSpatialAwarenessSystem_19() const { return ___logSpatialAwarenessSystem_19; }
	inline bool* get_address_of_logSpatialAwarenessSystem_19() { return &___logSpatialAwarenessSystem_19; }
	inline void set_logSpatialAwarenessSystem_19(bool value)
	{
		___logSpatialAwarenessSystem_19 = value;
	}

	inline static int32_t get_offset_of_teleportSystem_20() { return static_cast<int32_t>(offsetof(MixedRealityToolkit_t638B1380E4669477D1FBF5DD68B45532D1BF0FDC_StaticFields, ___teleportSystem_20)); }
	inline RuntimeObject* get_teleportSystem_20() const { return ___teleportSystem_20; }
	inline RuntimeObject** get_address_of_teleportSystem_20() { return &___teleportSystem_20; }
	inline void set_teleportSystem_20(RuntimeObject* value)
	{
		___teleportSystem_20 = value;
		Il2CppCodeGenWriteBarrier((&___teleportSystem_20), value);
	}

	inline static int32_t get_offset_of_logTeleportSystem_21() { return static_cast<int32_t>(offsetof(MixedRealityToolkit_t638B1380E4669477D1FBF5DD68B45532D1BF0FDC_StaticFields, ___logTeleportSystem_21)); }
	inline bool get_logTeleportSystem_21() const { return ___logTeleportSystem_21; }
	inline bool* get_address_of_logTeleportSystem_21() { return &___logTeleportSystem_21; }
	inline void set_logTeleportSystem_21(bool value)
	{
		___logTeleportSystem_21 = value;
	}

	inline static int32_t get_offset_of_diagnosticsSystem_22() { return static_cast<int32_t>(offsetof(MixedRealityToolkit_t638B1380E4669477D1FBF5DD68B45532D1BF0FDC_StaticFields, ___diagnosticsSystem_22)); }
	inline RuntimeObject* get_diagnosticsSystem_22() const { return ___diagnosticsSystem_22; }
	inline RuntimeObject** get_address_of_diagnosticsSystem_22() { return &___diagnosticsSystem_22; }
	inline void set_diagnosticsSystem_22(RuntimeObject* value)
	{
		___diagnosticsSystem_22 = value;
		Il2CppCodeGenWriteBarrier((&___diagnosticsSystem_22), value);
	}

	inline static int32_t get_offset_of_logDiagnosticsSystem_23() { return static_cast<int32_t>(offsetof(MixedRealityToolkit_t638B1380E4669477D1FBF5DD68B45532D1BF0FDC_StaticFields, ___logDiagnosticsSystem_23)); }
	inline bool get_logDiagnosticsSystem_23() const { return ___logDiagnosticsSystem_23; }
	inline bool* get_address_of_logDiagnosticsSystem_23() { return &___logDiagnosticsSystem_23; }
	inline void set_logDiagnosticsSystem_23(bool value)
	{
		___logDiagnosticsSystem_23 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MIXEDREALITYTOOLKIT_T638B1380E4669477D1FBF5DD68B45532D1BF0FDC_H
#ifndef BOUNDARYVISUALIZATIONDEMO_TD5E48F3995846BA4A1909932098B3C4C09520AA4_H
#define BOUNDARYVISUALIZATIONDEMO_TD5E48F3995846BA4A1909932098B3C4C09520AA4_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Examples.Demos.BoundaryVisualizationDemo
struct  BoundaryVisualizationDemo_tD5E48F3995846BA4A1909932098B3C4C09520AA4  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Examples.Demos.BoundaryVisualizationDemo::markerParent
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___markerParent_4;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> Microsoft.MixedReality.Toolkit.Examples.Demos.BoundaryVisualizationDemo::markers
	List_1_tBA8D772D87B6502B2A4D0EFE166C846285F50650 * ___markers_5;
	// System.Boolean Microsoft.MixedReality.Toolkit.Examples.Demos.BoundaryVisualizationDemo::showFloor
	bool ___showFloor_6;
	// System.Boolean Microsoft.MixedReality.Toolkit.Examples.Demos.BoundaryVisualizationDemo::showPlayArea
	bool ___showPlayArea_7;
	// System.Boolean Microsoft.MixedReality.Toolkit.Examples.Demos.BoundaryVisualizationDemo::showTrackedArea
	bool ___showTrackedArea_8;
	// System.Boolean Microsoft.MixedReality.Toolkit.Examples.Demos.BoundaryVisualizationDemo::showBoundaryWalls
	bool ___showBoundaryWalls_9;
	// System.Boolean Microsoft.MixedReality.Toolkit.Examples.Demos.BoundaryVisualizationDemo::showBoundaryCeiling
	bool ___showBoundaryCeiling_10;

public:
	inline static int32_t get_offset_of_markerParent_4() { return static_cast<int32_t>(offsetof(BoundaryVisualizationDemo_tD5E48F3995846BA4A1909932098B3C4C09520AA4, ___markerParent_4)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_markerParent_4() const { return ___markerParent_4; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_markerParent_4() { return &___markerParent_4; }
	inline void set_markerParent_4(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___markerParent_4 = value;
		Il2CppCodeGenWriteBarrier((&___markerParent_4), value);
	}

	inline static int32_t get_offset_of_markers_5() { return static_cast<int32_t>(offsetof(BoundaryVisualizationDemo_tD5E48F3995846BA4A1909932098B3C4C09520AA4, ___markers_5)); }
	inline List_1_tBA8D772D87B6502B2A4D0EFE166C846285F50650 * get_markers_5() const { return ___markers_5; }
	inline List_1_tBA8D772D87B6502B2A4D0EFE166C846285F50650 ** get_address_of_markers_5() { return &___markers_5; }
	inline void set_markers_5(List_1_tBA8D772D87B6502B2A4D0EFE166C846285F50650 * value)
	{
		___markers_5 = value;
		Il2CppCodeGenWriteBarrier((&___markers_5), value);
	}

	inline static int32_t get_offset_of_showFloor_6() { return static_cast<int32_t>(offsetof(BoundaryVisualizationDemo_tD5E48F3995846BA4A1909932098B3C4C09520AA4, ___showFloor_6)); }
	inline bool get_showFloor_6() const { return ___showFloor_6; }
	inline bool* get_address_of_showFloor_6() { return &___showFloor_6; }
	inline void set_showFloor_6(bool value)
	{
		___showFloor_6 = value;
	}

	inline static int32_t get_offset_of_showPlayArea_7() { return static_cast<int32_t>(offsetof(BoundaryVisualizationDemo_tD5E48F3995846BA4A1909932098B3C4C09520AA4, ___showPlayArea_7)); }
	inline bool get_showPlayArea_7() const { return ___showPlayArea_7; }
	inline bool* get_address_of_showPlayArea_7() { return &___showPlayArea_7; }
	inline void set_showPlayArea_7(bool value)
	{
		___showPlayArea_7 = value;
	}

	inline static int32_t get_offset_of_showTrackedArea_8() { return static_cast<int32_t>(offsetof(BoundaryVisualizationDemo_tD5E48F3995846BA4A1909932098B3C4C09520AA4, ___showTrackedArea_8)); }
	inline bool get_showTrackedArea_8() const { return ___showTrackedArea_8; }
	inline bool* get_address_of_showTrackedArea_8() { return &___showTrackedArea_8; }
	inline void set_showTrackedArea_8(bool value)
	{
		___showTrackedArea_8 = value;
	}

	inline static int32_t get_offset_of_showBoundaryWalls_9() { return static_cast<int32_t>(offsetof(BoundaryVisualizationDemo_tD5E48F3995846BA4A1909932098B3C4C09520AA4, ___showBoundaryWalls_9)); }
	inline bool get_showBoundaryWalls_9() const { return ___showBoundaryWalls_9; }
	inline bool* get_address_of_showBoundaryWalls_9() { return &___showBoundaryWalls_9; }
	inline void set_showBoundaryWalls_9(bool value)
	{
		___showBoundaryWalls_9 = value;
	}

	inline static int32_t get_offset_of_showBoundaryCeiling_10() { return static_cast<int32_t>(offsetof(BoundaryVisualizationDemo_tD5E48F3995846BA4A1909932098B3C4C09520AA4, ___showBoundaryCeiling_10)); }
	inline bool get_showBoundaryCeiling_10() const { return ___showBoundaryCeiling_10; }
	inline bool* get_address_of_showBoundaryCeiling_10() { return &___showBoundaryCeiling_10; }
	inline void set_showBoundaryCeiling_10(bool value)
	{
		___showBoundaryCeiling_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOUNDARYVISUALIZATIONDEMO_TD5E48F3995846BA4A1909932098B3C4C09520AA4_H
#ifndef DEMOSPATIALMESHHANDLER_T5EA2499E558DC2033B27F8CAD6B3CB5B2C0B2A7D_H
#define DEMOSPATIALMESHHANDLER_T5EA2499E558DC2033B27F8CAD6B3CB5B2C0B2A7D_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Examples.Demos.DemoSpatialMeshHandler
struct  DemoSpatialMeshHandler_t5EA2499E558DC2033B27F8CAD6B3CB5B2C0B2A7D  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// System.Collections.Generic.Dictionary`2<System.Int32,System.UInt32> Microsoft.MixedReality.Toolkit.Examples.Demos.DemoSpatialMeshHandler::meshUpdateData
	Dictionary_2_tEBA39BE6427C28D1FC2365D442B32E6BE63BE02B * ___meshUpdateData_4;

public:
	inline static int32_t get_offset_of_meshUpdateData_4() { return static_cast<int32_t>(offsetof(DemoSpatialMeshHandler_t5EA2499E558DC2033B27F8CAD6B3CB5B2C0B2A7D, ___meshUpdateData_4)); }
	inline Dictionary_2_tEBA39BE6427C28D1FC2365D442B32E6BE63BE02B * get_meshUpdateData_4() const { return ___meshUpdateData_4; }
	inline Dictionary_2_tEBA39BE6427C28D1FC2365D442B32E6BE63BE02B ** get_address_of_meshUpdateData_4() { return &___meshUpdateData_4; }
	inline void set_meshUpdateData_4(Dictionary_2_tEBA39BE6427C28D1FC2365D442B32E6BE63BE02B * value)
	{
		___meshUpdateData_4 = value;
		Il2CppCodeGenWriteBarrier((&___meshUpdateData_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEMOSPATIALMESHHANDLER_T5EA2499E558DC2033B27F8CAD6B3CB5B2C0B2A7D_H
#ifndef DIAGNOSTICSDEMOCONTROLS_T46271501D3A290B12B2BA9042F9C64D62582E527_H
#define DIAGNOSTICSDEMOCONTROLS_T46271501D3A290B12B2BA9042F9C64D62582E527_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Examples.Demos.DiagnosticsDemoControls
struct  DiagnosticsDemoControls_t46271501D3A290B12B2BA9042F9C64D62582E527  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DIAGNOSTICSDEMOCONTROLS_T46271501D3A290B12B2BA9042F9C64D62582E527_H
#ifndef LOFIFILTERSELECTION_TC30D19C8655BCD00E2748CC5DEEBDE0F154E4C52_H
#define LOFIFILTERSELECTION_TC30D19C8655BCD00E2748CC5DEEBDE0F154E4C52_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Examples.Demos.LoFiFilterSelection
struct  LoFiFilterSelection_tC30D19C8655BCD00E2748CC5DEEBDE0F154E4C52  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.Material Microsoft.MixedReality.Toolkit.Examples.Demos.LoFiFilterSelection::NarrowBandTelephony
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___NarrowBandTelephony_4;
	// UnityEngine.Material Microsoft.MixedReality.Toolkit.Examples.Demos.LoFiFilterSelection::AmRadio
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___AmRadio_5;
	// UnityEngine.Material Microsoft.MixedReality.Toolkit.Examples.Demos.LoFiFilterSelection::FullRange
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___FullRange_6;
	// UnityEngine.Material Microsoft.MixedReality.Toolkit.Examples.Demos.LoFiFilterSelection::UnknownQuality
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___UnknownQuality_7;
	// Microsoft.MixedReality.Toolkit.SDK.Audio.Influencers.AudioLoFiEffect Microsoft.MixedReality.Toolkit.Examples.Demos.LoFiFilterSelection::loFiEffect
	AudioLoFiEffect_t2A51E9DCCA37B112EC859D6F3E923F7BA863E5DC * ___loFiEffect_8;
	// UnityEngine.Renderer Microsoft.MixedReality.Toolkit.Examples.Demos.LoFiFilterSelection::objectRenderer
	Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * ___objectRenderer_9;

public:
	inline static int32_t get_offset_of_NarrowBandTelephony_4() { return static_cast<int32_t>(offsetof(LoFiFilterSelection_tC30D19C8655BCD00E2748CC5DEEBDE0F154E4C52, ___NarrowBandTelephony_4)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_NarrowBandTelephony_4() const { return ___NarrowBandTelephony_4; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_NarrowBandTelephony_4() { return &___NarrowBandTelephony_4; }
	inline void set_NarrowBandTelephony_4(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___NarrowBandTelephony_4 = value;
		Il2CppCodeGenWriteBarrier((&___NarrowBandTelephony_4), value);
	}

	inline static int32_t get_offset_of_AmRadio_5() { return static_cast<int32_t>(offsetof(LoFiFilterSelection_tC30D19C8655BCD00E2748CC5DEEBDE0F154E4C52, ___AmRadio_5)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_AmRadio_5() const { return ___AmRadio_5; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_AmRadio_5() { return &___AmRadio_5; }
	inline void set_AmRadio_5(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___AmRadio_5 = value;
		Il2CppCodeGenWriteBarrier((&___AmRadio_5), value);
	}

	inline static int32_t get_offset_of_FullRange_6() { return static_cast<int32_t>(offsetof(LoFiFilterSelection_tC30D19C8655BCD00E2748CC5DEEBDE0F154E4C52, ___FullRange_6)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_FullRange_6() const { return ___FullRange_6; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_FullRange_6() { return &___FullRange_6; }
	inline void set_FullRange_6(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___FullRange_6 = value;
		Il2CppCodeGenWriteBarrier((&___FullRange_6), value);
	}

	inline static int32_t get_offset_of_UnknownQuality_7() { return static_cast<int32_t>(offsetof(LoFiFilterSelection_tC30D19C8655BCD00E2748CC5DEEBDE0F154E4C52, ___UnknownQuality_7)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_UnknownQuality_7() const { return ___UnknownQuality_7; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_UnknownQuality_7() { return &___UnknownQuality_7; }
	inline void set_UnknownQuality_7(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___UnknownQuality_7 = value;
		Il2CppCodeGenWriteBarrier((&___UnknownQuality_7), value);
	}

	inline static int32_t get_offset_of_loFiEffect_8() { return static_cast<int32_t>(offsetof(LoFiFilterSelection_tC30D19C8655BCD00E2748CC5DEEBDE0F154E4C52, ___loFiEffect_8)); }
	inline AudioLoFiEffect_t2A51E9DCCA37B112EC859D6F3E923F7BA863E5DC * get_loFiEffect_8() const { return ___loFiEffect_8; }
	inline AudioLoFiEffect_t2A51E9DCCA37B112EC859D6F3E923F7BA863E5DC ** get_address_of_loFiEffect_8() { return &___loFiEffect_8; }
	inline void set_loFiEffect_8(AudioLoFiEffect_t2A51E9DCCA37B112EC859D6F3E923F7BA863E5DC * value)
	{
		___loFiEffect_8 = value;
		Il2CppCodeGenWriteBarrier((&___loFiEffect_8), value);
	}

	inline static int32_t get_offset_of_objectRenderer_9() { return static_cast<int32_t>(offsetof(LoFiFilterSelection_tC30D19C8655BCD00E2748CC5DEEBDE0F154E4C52, ___objectRenderer_9)); }
	inline Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * get_objectRenderer_9() const { return ___objectRenderer_9; }
	inline Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 ** get_address_of_objectRenderer_9() { return &___objectRenderer_9; }
	inline void set_objectRenderer_9(Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * value)
	{
		___objectRenderer_9 = value;
		Il2CppCodeGenWriteBarrier((&___objectRenderer_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOFIFILTERSELECTION_TC30D19C8655BCD00E2748CC5DEEBDE0F154E4C52_H
#ifndef MATERIALMATRIX_T4C38EA16270583C7EACDC8BCF1BC292DEE1C0BB1_H
#define MATERIALMATRIX_T4C38EA16270583C7EACDC8BCF1BC292DEE1C0BB1_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Examples.Demos.StandardShader.MaterialMatrix
struct  MaterialMatrix_t4C38EA16270583C7EACDC8BCF1BC292DEE1C0BB1  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.Material Microsoft.MixedReality.Toolkit.Examples.Demos.StandardShader.MaterialMatrix::material
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___material_4;
	// UnityEngine.Mesh Microsoft.MixedReality.Toolkit.Examples.Demos.StandardShader.MaterialMatrix::mesh
	Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * ___mesh_5;
	// System.Int32 Microsoft.MixedReality.Toolkit.Examples.Demos.StandardShader.MaterialMatrix::dimension
	int32_t ___dimension_6;
	// System.Single Microsoft.MixedReality.Toolkit.Examples.Demos.StandardShader.MaterialMatrix::positionOffset
	float ___positionOffset_7;
	// System.String Microsoft.MixedReality.Toolkit.Examples.Demos.StandardShader.MaterialMatrix::firstPropertyName
	String_t* ___firstPropertyName_8;
	// System.String Microsoft.MixedReality.Toolkit.Examples.Demos.StandardShader.MaterialMatrix::secondPropertyName
	String_t* ___secondPropertyName_9;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Examples.Demos.StandardShader.MaterialMatrix::localRotation
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___localRotation_10;

public:
	inline static int32_t get_offset_of_material_4() { return static_cast<int32_t>(offsetof(MaterialMatrix_t4C38EA16270583C7EACDC8BCF1BC292DEE1C0BB1, ___material_4)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_material_4() const { return ___material_4; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_material_4() { return &___material_4; }
	inline void set_material_4(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___material_4 = value;
		Il2CppCodeGenWriteBarrier((&___material_4), value);
	}

	inline static int32_t get_offset_of_mesh_5() { return static_cast<int32_t>(offsetof(MaterialMatrix_t4C38EA16270583C7EACDC8BCF1BC292DEE1C0BB1, ___mesh_5)); }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * get_mesh_5() const { return ___mesh_5; }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C ** get_address_of_mesh_5() { return &___mesh_5; }
	inline void set_mesh_5(Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * value)
	{
		___mesh_5 = value;
		Il2CppCodeGenWriteBarrier((&___mesh_5), value);
	}

	inline static int32_t get_offset_of_dimension_6() { return static_cast<int32_t>(offsetof(MaterialMatrix_t4C38EA16270583C7EACDC8BCF1BC292DEE1C0BB1, ___dimension_6)); }
	inline int32_t get_dimension_6() const { return ___dimension_6; }
	inline int32_t* get_address_of_dimension_6() { return &___dimension_6; }
	inline void set_dimension_6(int32_t value)
	{
		___dimension_6 = value;
	}

	inline static int32_t get_offset_of_positionOffset_7() { return static_cast<int32_t>(offsetof(MaterialMatrix_t4C38EA16270583C7EACDC8BCF1BC292DEE1C0BB1, ___positionOffset_7)); }
	inline float get_positionOffset_7() const { return ___positionOffset_7; }
	inline float* get_address_of_positionOffset_7() { return &___positionOffset_7; }
	inline void set_positionOffset_7(float value)
	{
		___positionOffset_7 = value;
	}

	inline static int32_t get_offset_of_firstPropertyName_8() { return static_cast<int32_t>(offsetof(MaterialMatrix_t4C38EA16270583C7EACDC8BCF1BC292DEE1C0BB1, ___firstPropertyName_8)); }
	inline String_t* get_firstPropertyName_8() const { return ___firstPropertyName_8; }
	inline String_t** get_address_of_firstPropertyName_8() { return &___firstPropertyName_8; }
	inline void set_firstPropertyName_8(String_t* value)
	{
		___firstPropertyName_8 = value;
		Il2CppCodeGenWriteBarrier((&___firstPropertyName_8), value);
	}

	inline static int32_t get_offset_of_secondPropertyName_9() { return static_cast<int32_t>(offsetof(MaterialMatrix_t4C38EA16270583C7EACDC8BCF1BC292DEE1C0BB1, ___secondPropertyName_9)); }
	inline String_t* get_secondPropertyName_9() const { return ___secondPropertyName_9; }
	inline String_t** get_address_of_secondPropertyName_9() { return &___secondPropertyName_9; }
	inline void set_secondPropertyName_9(String_t* value)
	{
		___secondPropertyName_9 = value;
		Il2CppCodeGenWriteBarrier((&___secondPropertyName_9), value);
	}

	inline static int32_t get_offset_of_localRotation_10() { return static_cast<int32_t>(offsetof(MaterialMatrix_t4C38EA16270583C7EACDC8BCF1BC292DEE1C0BB1, ___localRotation_10)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_localRotation_10() const { return ___localRotation_10; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_localRotation_10() { return &___localRotation_10; }
	inline void set_localRotation_10(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___localRotation_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MATERIALMATRIX_T4C38EA16270583C7EACDC8BCF1BC292DEE1C0BB1_H
#ifndef SWAPVOLUME_T30B5649189807539575F16461023F16BF8A1D904_H
#define SWAPVOLUME_T30B5649189807539575F16461023F16BF8A1D904_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Examples.Demos.SwapVolume
struct  SwapVolume_t30B5649189807539575F16461023F16BF8A1D904  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// Microsoft.MixedReality.Toolkit.Core.Definitions.InputSystem.MixedRealityInputAction Microsoft.MixedReality.Toolkit.Examples.Demos.SwapVolume::selectAction
	MixedRealityInputAction_tB87A712377383583B43FC255F442492403992C96  ___selectAction_4;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Examples.Demos.SwapVolume::hideThisObject
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___hideThisObject_5;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Examples.Demos.SwapVolume::spawnThisPrefab
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___spawnThisPrefab_6;
	// System.Boolean Microsoft.MixedReality.Toolkit.Examples.Demos.SwapVolume::updateSolverTargetToClickSource
	bool ___updateSolverTargetToClickSource_7;
	// Microsoft.MixedReality.Toolkit.SDK.Utilities.Solvers.SolverHandler Microsoft.MixedReality.Toolkit.Examples.Demos.SwapVolume::solverHandler
	SolverHandler_t321FA96B537A6B29F38A2020FEBFD5757CADE0FD * ___solverHandler_8;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Examples.Demos.SwapVolume::spawnedObject
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___spawnedObject_9;

public:
	inline static int32_t get_offset_of_selectAction_4() { return static_cast<int32_t>(offsetof(SwapVolume_t30B5649189807539575F16461023F16BF8A1D904, ___selectAction_4)); }
	inline MixedRealityInputAction_tB87A712377383583B43FC255F442492403992C96  get_selectAction_4() const { return ___selectAction_4; }
	inline MixedRealityInputAction_tB87A712377383583B43FC255F442492403992C96 * get_address_of_selectAction_4() { return &___selectAction_4; }
	inline void set_selectAction_4(MixedRealityInputAction_tB87A712377383583B43FC255F442492403992C96  value)
	{
		___selectAction_4 = value;
	}

	inline static int32_t get_offset_of_hideThisObject_5() { return static_cast<int32_t>(offsetof(SwapVolume_t30B5649189807539575F16461023F16BF8A1D904, ___hideThisObject_5)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_hideThisObject_5() const { return ___hideThisObject_5; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_hideThisObject_5() { return &___hideThisObject_5; }
	inline void set_hideThisObject_5(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___hideThisObject_5 = value;
		Il2CppCodeGenWriteBarrier((&___hideThisObject_5), value);
	}

	inline static int32_t get_offset_of_spawnThisPrefab_6() { return static_cast<int32_t>(offsetof(SwapVolume_t30B5649189807539575F16461023F16BF8A1D904, ___spawnThisPrefab_6)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_spawnThisPrefab_6() const { return ___spawnThisPrefab_6; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_spawnThisPrefab_6() { return &___spawnThisPrefab_6; }
	inline void set_spawnThisPrefab_6(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___spawnThisPrefab_6 = value;
		Il2CppCodeGenWriteBarrier((&___spawnThisPrefab_6), value);
	}

	inline static int32_t get_offset_of_updateSolverTargetToClickSource_7() { return static_cast<int32_t>(offsetof(SwapVolume_t30B5649189807539575F16461023F16BF8A1D904, ___updateSolverTargetToClickSource_7)); }
	inline bool get_updateSolverTargetToClickSource_7() const { return ___updateSolverTargetToClickSource_7; }
	inline bool* get_address_of_updateSolverTargetToClickSource_7() { return &___updateSolverTargetToClickSource_7; }
	inline void set_updateSolverTargetToClickSource_7(bool value)
	{
		___updateSolverTargetToClickSource_7 = value;
	}

	inline static int32_t get_offset_of_solverHandler_8() { return static_cast<int32_t>(offsetof(SwapVolume_t30B5649189807539575F16461023F16BF8A1D904, ___solverHandler_8)); }
	inline SolverHandler_t321FA96B537A6B29F38A2020FEBFD5757CADE0FD * get_solverHandler_8() const { return ___solverHandler_8; }
	inline SolverHandler_t321FA96B537A6B29F38A2020FEBFD5757CADE0FD ** get_address_of_solverHandler_8() { return &___solverHandler_8; }
	inline void set_solverHandler_8(SolverHandler_t321FA96B537A6B29F38A2020FEBFD5757CADE0FD * value)
	{
		___solverHandler_8 = value;
		Il2CppCodeGenWriteBarrier((&___solverHandler_8), value);
	}

	inline static int32_t get_offset_of_spawnedObject_9() { return static_cast<int32_t>(offsetof(SwapVolume_t30B5649189807539575F16461023F16BF8A1D904, ___spawnedObject_9)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_spawnedObject_9() const { return ___spawnedObject_9; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_spawnedObject_9() { return &___spawnedObject_9; }
	inline void set_spawnedObject_9(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___spawnedObject_9 = value;
		Il2CppCodeGenWriteBarrier((&___spawnedObject_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SWAPVOLUME_T30B5649189807539575F16461023F16BF8A1D904_H
#ifndef AUDIOLOFIEFFECT_T2A51E9DCCA37B112EC859D6F3E923F7BA863E5DC_H
#define AUDIOLOFIEFFECT_T2A51E9DCCA37B112EC859D6F3E923F7BA863E5DC_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.SDK.Audio.Influencers.AudioLoFiEffect
struct  AudioLoFiEffect_t2A51E9DCCA37B112EC859D6F3E923F7BA863E5DC  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// Microsoft.MixedReality.Toolkit.SDK.Audio.Influencers.AudioLoFiSourceQuality Microsoft.MixedReality.Toolkit.SDK.Audio.Influencers.AudioLoFiEffect::sourceQuality
	int32_t ___sourceQuality_4;
	// Microsoft.MixedReality.Toolkit.SDK.Audio.Influencers.AudioInfluencerController Microsoft.MixedReality.Toolkit.SDK.Audio.Influencers.AudioLoFiEffect::influencerController
	AudioInfluencerController_t2EB0358E5EEF5751A6545CC94A566534FDA8E660 * ___influencerController_5;
	// Microsoft.MixedReality.Toolkit.SDK.Audio.Influencers.AudioLoFiEffect_AudioLoFiFilterSettings Microsoft.MixedReality.Toolkit.SDK.Audio.Influencers.AudioLoFiEffect::filterSettings
	AudioLoFiFilterSettings_t64888742AE555FA0F38BFA198078A216AAD3951C  ___filterSettings_6;
	// UnityEngine.AudioLowPassFilter Microsoft.MixedReality.Toolkit.SDK.Audio.Influencers.AudioLoFiEffect::lowPassFilter
	AudioLowPassFilter_t97DD6F50E1F0D2D9404D8A28A97CA3D232BF44CE * ___lowPassFilter_7;
	// UnityEngine.AudioHighPassFilter Microsoft.MixedReality.Toolkit.SDK.Audio.Influencers.AudioLoFiEffect::highPassFilter
	AudioHighPassFilter_tAF7C56386170F84139A84528E2EC43DBC9E2C473 * ___highPassFilter_8;
	// System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.SDK.Audio.Influencers.AudioLoFiSourceQuality,Microsoft.MixedReality.Toolkit.SDK.Audio.Influencers.AudioLoFiEffect_AudioLoFiFilterSettings> Microsoft.MixedReality.Toolkit.SDK.Audio.Influencers.AudioLoFiEffect::sourceQualityFilterSettings
	Dictionary_2_tA21D86C525E0218F2C3DFF2F8E009383F46EEA64 * ___sourceQualityFilterSettings_9;

public:
	inline static int32_t get_offset_of_sourceQuality_4() { return static_cast<int32_t>(offsetof(AudioLoFiEffect_t2A51E9DCCA37B112EC859D6F3E923F7BA863E5DC, ___sourceQuality_4)); }
	inline int32_t get_sourceQuality_4() const { return ___sourceQuality_4; }
	inline int32_t* get_address_of_sourceQuality_4() { return &___sourceQuality_4; }
	inline void set_sourceQuality_4(int32_t value)
	{
		___sourceQuality_4 = value;
	}

	inline static int32_t get_offset_of_influencerController_5() { return static_cast<int32_t>(offsetof(AudioLoFiEffect_t2A51E9DCCA37B112EC859D6F3E923F7BA863E5DC, ___influencerController_5)); }
	inline AudioInfluencerController_t2EB0358E5EEF5751A6545CC94A566534FDA8E660 * get_influencerController_5() const { return ___influencerController_5; }
	inline AudioInfluencerController_t2EB0358E5EEF5751A6545CC94A566534FDA8E660 ** get_address_of_influencerController_5() { return &___influencerController_5; }
	inline void set_influencerController_5(AudioInfluencerController_t2EB0358E5EEF5751A6545CC94A566534FDA8E660 * value)
	{
		___influencerController_5 = value;
		Il2CppCodeGenWriteBarrier((&___influencerController_5), value);
	}

	inline static int32_t get_offset_of_filterSettings_6() { return static_cast<int32_t>(offsetof(AudioLoFiEffect_t2A51E9DCCA37B112EC859D6F3E923F7BA863E5DC, ___filterSettings_6)); }
	inline AudioLoFiFilterSettings_t64888742AE555FA0F38BFA198078A216AAD3951C  get_filterSettings_6() const { return ___filterSettings_6; }
	inline AudioLoFiFilterSettings_t64888742AE555FA0F38BFA198078A216AAD3951C * get_address_of_filterSettings_6() { return &___filterSettings_6; }
	inline void set_filterSettings_6(AudioLoFiFilterSettings_t64888742AE555FA0F38BFA198078A216AAD3951C  value)
	{
		___filterSettings_6 = value;
	}

	inline static int32_t get_offset_of_lowPassFilter_7() { return static_cast<int32_t>(offsetof(AudioLoFiEffect_t2A51E9DCCA37B112EC859D6F3E923F7BA863E5DC, ___lowPassFilter_7)); }
	inline AudioLowPassFilter_t97DD6F50E1F0D2D9404D8A28A97CA3D232BF44CE * get_lowPassFilter_7() const { return ___lowPassFilter_7; }
	inline AudioLowPassFilter_t97DD6F50E1F0D2D9404D8A28A97CA3D232BF44CE ** get_address_of_lowPassFilter_7() { return &___lowPassFilter_7; }
	inline void set_lowPassFilter_7(AudioLowPassFilter_t97DD6F50E1F0D2D9404D8A28A97CA3D232BF44CE * value)
	{
		___lowPassFilter_7 = value;
		Il2CppCodeGenWriteBarrier((&___lowPassFilter_7), value);
	}

	inline static int32_t get_offset_of_highPassFilter_8() { return static_cast<int32_t>(offsetof(AudioLoFiEffect_t2A51E9DCCA37B112EC859D6F3E923F7BA863E5DC, ___highPassFilter_8)); }
	inline AudioHighPassFilter_tAF7C56386170F84139A84528E2EC43DBC9E2C473 * get_highPassFilter_8() const { return ___highPassFilter_8; }
	inline AudioHighPassFilter_tAF7C56386170F84139A84528E2EC43DBC9E2C473 ** get_address_of_highPassFilter_8() { return &___highPassFilter_8; }
	inline void set_highPassFilter_8(AudioHighPassFilter_tAF7C56386170F84139A84528E2EC43DBC9E2C473 * value)
	{
		___highPassFilter_8 = value;
		Il2CppCodeGenWriteBarrier((&___highPassFilter_8), value);
	}

	inline static int32_t get_offset_of_sourceQualityFilterSettings_9() { return static_cast<int32_t>(offsetof(AudioLoFiEffect_t2A51E9DCCA37B112EC859D6F3E923F7BA863E5DC, ___sourceQualityFilterSettings_9)); }
	inline Dictionary_2_tA21D86C525E0218F2C3DFF2F8E009383F46EEA64 * get_sourceQualityFilterSettings_9() const { return ___sourceQualityFilterSettings_9; }
	inline Dictionary_2_tA21D86C525E0218F2C3DFF2F8E009383F46EEA64 ** get_address_of_sourceQualityFilterSettings_9() { return &___sourceQualityFilterSettings_9; }
	inline void set_sourceQualityFilterSettings_9(Dictionary_2_tA21D86C525E0218F2C3DFF2F8E009383F46EEA64 * value)
	{
		___sourceQualityFilterSettings_9 = value;
		Il2CppCodeGenWriteBarrier((&___sourceQualityFilterSettings_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUDIOLOFIEFFECT_T2A51E9DCCA37B112EC859D6F3E923F7BA863E5DC_H
#ifndef CONTROLLERFINDER_T354F5433D26DD07FA74F0DAEB1CEA6CDE6815A2E_H
#define CONTROLLERFINDER_T354F5433D26DD07FA74F0DAEB1CEA6CDE6815A2E_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.SDK.Utilities.Solvers.ControllerFinder
struct  ControllerFinder_t354F5433D26DD07FA74F0DAEB1CEA6CDE6815A2E  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// Microsoft.MixedReality.Toolkit.Core.Definitions.Utilities.Handedness Microsoft.MixedReality.Toolkit.SDK.Utilities.Solvers.ControllerFinder::handedness
	uint8_t ___handedness_4;
	// UnityEngine.Transform Microsoft.MixedReality.Toolkit.SDK.Utilities.Solvers.ControllerFinder::ControllerTransform
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___ControllerTransform_5;

public:
	inline static int32_t get_offset_of_handedness_4() { return static_cast<int32_t>(offsetof(ControllerFinder_t354F5433D26DD07FA74F0DAEB1CEA6CDE6815A2E, ___handedness_4)); }
	inline uint8_t get_handedness_4() const { return ___handedness_4; }
	inline uint8_t* get_address_of_handedness_4() { return &___handedness_4; }
	inline void set_handedness_4(uint8_t value)
	{
		___handedness_4 = value;
	}

	inline static int32_t get_offset_of_ControllerTransform_5() { return static_cast<int32_t>(offsetof(ControllerFinder_t354F5433D26DD07FA74F0DAEB1CEA6CDE6815A2E, ___ControllerTransform_5)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get_ControllerTransform_5() const { return ___ControllerTransform_5; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of_ControllerTransform_5() { return &___ControllerTransform_5; }
	inline void set_ControllerTransform_5(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		___ControllerTransform_5 = value;
		Il2CppCodeGenWriteBarrier((&___ControllerTransform_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONTROLLERFINDER_T354F5433D26DD07FA74F0DAEB1CEA6CDE6815A2E_H
#ifndef SOLVERHANDLER_T321FA96B537A6B29F38A2020FEBFD5757CADE0FD_H
#define SOLVERHANDLER_T321FA96B537A6B29F38A2020FEBFD5757CADE0FD_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.SDK.Utilities.Solvers.SolverHandler
struct  SolverHandler_t321FA96B537A6B29F38A2020FEBFD5757CADE0FD  : public ControllerFinder_t354F5433D26DD07FA74F0DAEB1CEA6CDE6815A2E
{
public:
	// Microsoft.MixedReality.Toolkit.Core.Definitions.Utilities.TrackedObjectType Microsoft.MixedReality.Toolkit.SDK.Utilities.Solvers.SolverHandler::trackedObjectToReference
	int32_t ___trackedObjectToReference_6;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.SDK.Utilities.Solvers.SolverHandler::additionalOffset
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___additionalOffset_7;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.SDK.Utilities.Solvers.SolverHandler::additionalRotation
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___additionalRotation_8;
	// UnityEngine.Transform Microsoft.MixedReality.Toolkit.SDK.Utilities.Solvers.SolverHandler::transformTarget
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___transformTarget_9;
	// System.Boolean Microsoft.MixedReality.Toolkit.SDK.Utilities.Solvers.SolverHandler::updateSolvers
	bool ___updateSolvers_10;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.SDK.Utilities.Solvers.SolverHandler::<GoalPosition>k__BackingField
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___U3CGoalPositionU3Ek__BackingField_11;
	// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.SDK.Utilities.Solvers.SolverHandler::<GoalRotation>k__BackingField
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___U3CGoalRotationU3Ek__BackingField_12;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.SDK.Utilities.Solvers.SolverHandler::<GoalScale>k__BackingField
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___U3CGoalScaleU3Ek__BackingField_13;
	// Microsoft.MixedReality.Toolkit.Core.Definitions.Utilities.Vector3Smoothed Microsoft.MixedReality.Toolkit.SDK.Utilities.Solvers.SolverHandler::<AltScale>k__BackingField
	Vector3Smoothed_t90F20DA025654E8BD043A5F7B39F70DC504B4579  ___U3CAltScaleU3Ek__BackingField_14;
	// System.Single Microsoft.MixedReality.Toolkit.SDK.Utilities.Solvers.SolverHandler::<DeltaTime>k__BackingField
	float ___U3CDeltaTimeU3Ek__BackingField_15;
	// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.SDK.Utilities.Solvers.Solver> Microsoft.MixedReality.Toolkit.SDK.Utilities.Solvers.SolverHandler::solvers
	List_1_tB00775C04959271EC1C9C49656E978CA884FA9E8 * ___solvers_16;
	// System.Single Microsoft.MixedReality.Toolkit.SDK.Utilities.Solvers.SolverHandler::lastUpdateTime
	float ___lastUpdateTime_17;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.SDK.Utilities.Solvers.SolverHandler::transformWithOffset
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___transformWithOffset_18;

public:
	inline static int32_t get_offset_of_trackedObjectToReference_6() { return static_cast<int32_t>(offsetof(SolverHandler_t321FA96B537A6B29F38A2020FEBFD5757CADE0FD, ___trackedObjectToReference_6)); }
	inline int32_t get_trackedObjectToReference_6() const { return ___trackedObjectToReference_6; }
	inline int32_t* get_address_of_trackedObjectToReference_6() { return &___trackedObjectToReference_6; }
	inline void set_trackedObjectToReference_6(int32_t value)
	{
		___trackedObjectToReference_6 = value;
	}

	inline static int32_t get_offset_of_additionalOffset_7() { return static_cast<int32_t>(offsetof(SolverHandler_t321FA96B537A6B29F38A2020FEBFD5757CADE0FD, ___additionalOffset_7)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_additionalOffset_7() const { return ___additionalOffset_7; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_additionalOffset_7() { return &___additionalOffset_7; }
	inline void set_additionalOffset_7(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___additionalOffset_7 = value;
	}

	inline static int32_t get_offset_of_additionalRotation_8() { return static_cast<int32_t>(offsetof(SolverHandler_t321FA96B537A6B29F38A2020FEBFD5757CADE0FD, ___additionalRotation_8)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_additionalRotation_8() const { return ___additionalRotation_8; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_additionalRotation_8() { return &___additionalRotation_8; }
	inline void set_additionalRotation_8(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___additionalRotation_8 = value;
	}

	inline static int32_t get_offset_of_transformTarget_9() { return static_cast<int32_t>(offsetof(SolverHandler_t321FA96B537A6B29F38A2020FEBFD5757CADE0FD, ___transformTarget_9)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get_transformTarget_9() const { return ___transformTarget_9; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of_transformTarget_9() { return &___transformTarget_9; }
	inline void set_transformTarget_9(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		___transformTarget_9 = value;
		Il2CppCodeGenWriteBarrier((&___transformTarget_9), value);
	}

	inline static int32_t get_offset_of_updateSolvers_10() { return static_cast<int32_t>(offsetof(SolverHandler_t321FA96B537A6B29F38A2020FEBFD5757CADE0FD, ___updateSolvers_10)); }
	inline bool get_updateSolvers_10() const { return ___updateSolvers_10; }
	inline bool* get_address_of_updateSolvers_10() { return &___updateSolvers_10; }
	inline void set_updateSolvers_10(bool value)
	{
		___updateSolvers_10 = value;
	}

	inline static int32_t get_offset_of_U3CGoalPositionU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(SolverHandler_t321FA96B537A6B29F38A2020FEBFD5757CADE0FD, ___U3CGoalPositionU3Ek__BackingField_11)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_U3CGoalPositionU3Ek__BackingField_11() const { return ___U3CGoalPositionU3Ek__BackingField_11; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_U3CGoalPositionU3Ek__BackingField_11() { return &___U3CGoalPositionU3Ek__BackingField_11; }
	inline void set_U3CGoalPositionU3Ek__BackingField_11(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___U3CGoalPositionU3Ek__BackingField_11 = value;
	}

	inline static int32_t get_offset_of_U3CGoalRotationU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(SolverHandler_t321FA96B537A6B29F38A2020FEBFD5757CADE0FD, ___U3CGoalRotationU3Ek__BackingField_12)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_U3CGoalRotationU3Ek__BackingField_12() const { return ___U3CGoalRotationU3Ek__BackingField_12; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_U3CGoalRotationU3Ek__BackingField_12() { return &___U3CGoalRotationU3Ek__BackingField_12; }
	inline void set_U3CGoalRotationU3Ek__BackingField_12(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___U3CGoalRotationU3Ek__BackingField_12 = value;
	}

	inline static int32_t get_offset_of_U3CGoalScaleU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(SolverHandler_t321FA96B537A6B29F38A2020FEBFD5757CADE0FD, ___U3CGoalScaleU3Ek__BackingField_13)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_U3CGoalScaleU3Ek__BackingField_13() const { return ___U3CGoalScaleU3Ek__BackingField_13; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_U3CGoalScaleU3Ek__BackingField_13() { return &___U3CGoalScaleU3Ek__BackingField_13; }
	inline void set_U3CGoalScaleU3Ek__BackingField_13(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___U3CGoalScaleU3Ek__BackingField_13 = value;
	}

	inline static int32_t get_offset_of_U3CAltScaleU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(SolverHandler_t321FA96B537A6B29F38A2020FEBFD5757CADE0FD, ___U3CAltScaleU3Ek__BackingField_14)); }
	inline Vector3Smoothed_t90F20DA025654E8BD043A5F7B39F70DC504B4579  get_U3CAltScaleU3Ek__BackingField_14() const { return ___U3CAltScaleU3Ek__BackingField_14; }
	inline Vector3Smoothed_t90F20DA025654E8BD043A5F7B39F70DC504B4579 * get_address_of_U3CAltScaleU3Ek__BackingField_14() { return &___U3CAltScaleU3Ek__BackingField_14; }
	inline void set_U3CAltScaleU3Ek__BackingField_14(Vector3Smoothed_t90F20DA025654E8BD043A5F7B39F70DC504B4579  value)
	{
		___U3CAltScaleU3Ek__BackingField_14 = value;
	}

	inline static int32_t get_offset_of_U3CDeltaTimeU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(SolverHandler_t321FA96B537A6B29F38A2020FEBFD5757CADE0FD, ___U3CDeltaTimeU3Ek__BackingField_15)); }
	inline float get_U3CDeltaTimeU3Ek__BackingField_15() const { return ___U3CDeltaTimeU3Ek__BackingField_15; }
	inline float* get_address_of_U3CDeltaTimeU3Ek__BackingField_15() { return &___U3CDeltaTimeU3Ek__BackingField_15; }
	inline void set_U3CDeltaTimeU3Ek__BackingField_15(float value)
	{
		___U3CDeltaTimeU3Ek__BackingField_15 = value;
	}

	inline static int32_t get_offset_of_solvers_16() { return static_cast<int32_t>(offsetof(SolverHandler_t321FA96B537A6B29F38A2020FEBFD5757CADE0FD, ___solvers_16)); }
	inline List_1_tB00775C04959271EC1C9C49656E978CA884FA9E8 * get_solvers_16() const { return ___solvers_16; }
	inline List_1_tB00775C04959271EC1C9C49656E978CA884FA9E8 ** get_address_of_solvers_16() { return &___solvers_16; }
	inline void set_solvers_16(List_1_tB00775C04959271EC1C9C49656E978CA884FA9E8 * value)
	{
		___solvers_16 = value;
		Il2CppCodeGenWriteBarrier((&___solvers_16), value);
	}

	inline static int32_t get_offset_of_lastUpdateTime_17() { return static_cast<int32_t>(offsetof(SolverHandler_t321FA96B537A6B29F38A2020FEBFD5757CADE0FD, ___lastUpdateTime_17)); }
	inline float get_lastUpdateTime_17() const { return ___lastUpdateTime_17; }
	inline float* get_address_of_lastUpdateTime_17() { return &___lastUpdateTime_17; }
	inline void set_lastUpdateTime_17(float value)
	{
		___lastUpdateTime_17 = value;
	}

	inline static int32_t get_offset_of_transformWithOffset_18() { return static_cast<int32_t>(offsetof(SolverHandler_t321FA96B537A6B29F38A2020FEBFD5757CADE0FD, ___transformWithOffset_18)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_transformWithOffset_18() const { return ___transformWithOffset_18; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_transformWithOffset_18() { return &___transformWithOffset_18; }
	inline void set_transformWithOffset_18(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___transformWithOffset_18 = value;
		Il2CppCodeGenWriteBarrier((&___transformWithOffset_18), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SOLVERHANDLER_T321FA96B537A6B29F38A2020FEBFD5757CADE0FD_H


// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
extern "C" IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<Microsoft.MixedReality.Toolkit.Examples.Demos.BoundaryVisualizationDemo/<OnEnable>d__10>(!!0&)
extern "C" IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_Start_TisU3COnEnableU3Ed__10_t25F3A91E4757E23B70B1F0FA0CC2DD63BD2B14AB_m5E1D08016260EA06FD92F079AEA0FE471BF20C1E_gshared (AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF * __this, U3COnEnableU3Ed__10_t25F3A91E4757E23B70B1F0FA0CC2DD63BD2B14AB * p0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_mE03C66715289D7957CA068A675826B7EE0887BE3_gshared (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
extern "C" IL2CPP_METHOD_ATTR void List_1_Add_m6930161974C7504C80F52EC379EF012387D43138_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// System.Void System.Func`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void Func_1__ctor_m479BA9DCBE3F496111BD05CC90CB1044C5FFD552_gshared (Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitOnCompleted<System.Object,Microsoft.MixedReality.Toolkit.Examples.Demos.BoundaryVisualizationDemo/<OnEnable>d__10>(!!0&,!!1&)
extern "C" IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_AwaitOnCompleted_TisRuntimeObject_TisU3COnEnableU3Ed__10_t25F3A91E4757E23B70B1F0FA0CC2DD63BD2B14AB_m90612FB6F3AD2ADF68C633C6902582C3DF74031E_gshared (AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF * __this, RuntimeObject ** p0, U3COnEnableU3Ed__10_t25F3A91E4757E23B70B1F0FA0CC2DD63BD2B14AB * p1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<Microsoft.MixedReality.Toolkit.Examples.Demos.DemoSpatialMeshHandler/<OnEnable>d__1>(!!0&)
extern "C" IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_Start_TisU3COnEnableU3Ed__1_t132401ED97C6F847289963908CFA73F19D2A4544_m5E7AEF701DB7ED147E1EE5763D4C3C789D96B73A_gshared (AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF * __this, U3COnEnableU3Ed__1_t132401ED97C6F847289963908CFA73F19D2A4544 * p0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.UInt32>::ContainsKey(!0)
extern "C" IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m6DB80E33ECB9F99824545A77760D313CCF6DD8B9_gshared (Dictionary_2_tEBA39BE6427C28D1FC2365D442B32E6BE63BE02B * __this, int32_t p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.UInt32>::Add(!0,!1)
extern "C" IL2CPP_METHOD_ATTR void Dictionary_2_Add_mA325F23C42F93F9A111F6192EC1CEC7D8E481599_gshared (Dictionary_2_tEBA39BE6427C28D1FC2365D442B32E6BE63BE02B * __this, int32_t p0, uint32_t p1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.UInt32>::TryGetValue(!0,!1&)
extern "C" IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m87B04E07308BDD9404C3E7C1976D52B69517C6C8_gshared (Dictionary_2_tEBA39BE6427C28D1FC2365D442B32E6BE63BE02B * __this, int32_t p0, uint32_t* p1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.UInt32>::set_Item(!0,!1)
extern "C" IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_mAC6062FF357307AFEB797A602E8380AEF272F442_gshared (Dictionary_2_tEBA39BE6427C28D1FC2365D442B32E6BE63BE02B * __this, int32_t p0, uint32_t p1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.UInt32>::Remove(!0)
extern "C" IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m0C628D9C267769495DA8B5F019F3FA7383D71E79_gshared (Dictionary_2_tEBA39BE6427C28D1FC2365D442B32E6BE63BE02B * __this, int32_t p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.UInt32>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m936D2F2C58E41A0BBA2C4977D82339392359549B_gshared (Dictionary_2_tEBA39BE6427C28D1FC2365D442B32E6BE63BE02B * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitOnCompleted<System.Object,Microsoft.MixedReality.Toolkit.Examples.Demos.DemoSpatialMeshHandler/<OnEnable>d__1>(!!0&,!!1&)
extern "C" IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_AwaitOnCompleted_TisRuntimeObject_TisU3COnEnableU3Ed__1_t132401ED97C6F847289963908CFA73F19D2A4544_m9CD0587B4217F610BFBA20B18A611AEB575E556F_gshared (AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF * __this, RuntimeObject ** p0, U3COnEnableU3Ed__1_t132401ED97C6F847289963908CFA73F19D2A4544 * p1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<Microsoft.MixedReality.Toolkit.Examples.Demos.DiagnosticsDemoControls/<Start>d__0>(!!0&)
extern "C" IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_Start_TisU3CStartU3Ed__0_t7C225461B16887823D2847728502C5D852E3950C_m1DB9609425FA088A513C10A9FD93070D2FEBE2CD_gshared (AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF * __this, U3CStartU3Ed__0_t7C225461B16887823D2847728502C5D852E3950C * p0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitOnCompleted<System.Object,Microsoft.MixedReality.Toolkit.Examples.Demos.DiagnosticsDemoControls/<Start>d__0>(!!0&,!!1&)
extern "C" IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_AwaitOnCompleted_TisRuntimeObject_TisU3CStartU3Ed__0_t7C225461B16887823D2847728502C5D852E3950C_mC00442D17B98C10281F7D34CEDCB6A6C8B64F074_gshared (AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF * __this, RuntimeObject ** p0, U3CStartU3Ed__0_t7C225461B16887823D2847728502C5D852E3950C * p1, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Cast<System.Object>(System.Collections.IEnumerable)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Cast_TisRuntimeObject_m171A353AB1F6591654B6668EBFA95B2516EA53F4_gshared (RuntimeObject* p0, const RuntimeMethod* method);
// System.Collections.Generic.List`1<!!0> System.Linq.Enumerable::ToList<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>)
extern "C" IL2CPP_METHOD_ATTR List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * Enumerable_ToList_TisRuntimeObject_m60A4853FE3E8D49EA18001EEBDF8D2773159A337_gshared (RuntimeObject* p0, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mFDB8AD680C600072736579BBF5F38F7416396588_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, int32_t p0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<System.Object>()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * GameObject_AddComponent_TisRuntimeObject_mE053F7A95F30AFF07D69F0DED3DA13AE2EC25E03_gshared (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_mFE9C42D5336D4F9EFF8CD96E2A26962EFF523947_gshared (RuntimeObject * p0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p1, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  p2, const RuntimeMethod* method);

// System.Void UnityEngine.GameObject::.ctor()
extern "C" IL2CPP_METHOD_ATTR void GameObject__ctor_mA4DFA8F4471418C248E95B55070665EF344B4B2D (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Object::set_name(System.String)
extern "C" IL2CPP_METHOD_ATTR void Object_set_name_m538711B144CDE30F929376BCF72D0DC8F85D0826 (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * __this, String_t* p0, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
extern "C" IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Core.Services.MixedRealityToolkit Microsoft.MixedReality.Toolkit.Core.Services.MixedRealityToolkit::get_Instance()
extern "C" IL2CPP_METHOD_ATTR MixedRealityToolkit_t638B1380E4669477D1FBF5DD68B45532D1BF0FDC * MixedRealityToolkit_get_Instance_m8E85DEB2FCE5996BD4E0784E1D334E594DA21341 (const RuntimeMethod* method);
// UnityEngine.Transform Microsoft.MixedReality.Toolkit.Core.Services.MixedRealityToolkit::get_MixedRealityPlayspace()
extern "C" IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * MixedRealityToolkit_get_MixedRealityPlayspace_m3467356987E1D56725429A833CEC4C9ABCD29DD8 (MixedRealityToolkit_t638B1380E4669477D1FBF5DD68B45532D1BF0FDC * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_parent(UnityEngine.Transform)
extern "C" IL2CPP_METHOD_ATTR void Transform_set_parent_m65B8E4660B2C554069C57A957D9E55FECA7AA73E (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * p0, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Core.Interfaces.BoundarySystem.IMixedRealityBoundarySystem Microsoft.MixedReality.Toolkit.Core.Services.MixedRealityToolkit::get_BoundarySystem()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* MixedRealityToolkit_get_BoundarySystem_m1C5BF97AB22C43EAC844A6795A19E752BCDF59DC (const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Count()
inline int32_t List_1_get_Count_m448499BD6BA2B98A6E4F92B96088CEA9EE3F4D35 (List_1_tBA8D772D87B6502B2A4D0EFE166C846285F50650 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tBA8D772D87B6502B2A4D0EFE166C846285F50650 *, const RuntimeMethod*))List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared)(__this, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.BoundaryVisualizationDemo::AddMarkers()
extern "C" IL2CPP_METHOD_ATTR void BoundaryVisualizationDemo_AddMarkers_m5F7A12FF2E1C30208AA156A2B68FFCAD5A1D2A31 (BoundaryVisualizationDemo_tD5E48F3995846BA4A1909932098B3C4C09520AA4 * __this, const RuntimeMethod* method);
// System.Runtime.CompilerServices.AsyncVoidMethodBuilder System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Create()
extern "C" IL2CPP_METHOD_ATTR AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF  AsyncVoidMethodBuilder_Create_m2EF884A75C3C230F0E6A63B1E23DC82F3B159130 (const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<Microsoft.MixedReality.Toolkit.Examples.Demos.BoundaryVisualizationDemo/<OnEnable>d__10>(!!0&)
inline void AsyncVoidMethodBuilder_Start_TisU3COnEnableU3Ed__10_t25F3A91E4757E23B70B1F0FA0CC2DD63BD2B14AB_m5E1D08016260EA06FD92F079AEA0FE471BF20C1E (AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF * __this, U3COnEnableU3Ed__10_t25F3A91E4757E23B70B1F0FA0CC2DD63BD2B14AB * p0, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF *, U3COnEnableU3Ed__10_t25F3A91E4757E23B70B1F0FA0CC2DD63BD2B14AB *, const RuntimeMethod*))AsyncVoidMethodBuilder_Start_TisU3COnEnableU3Ed__10_t25F3A91E4757E23B70B1F0FA0CC2DD63BD2B14AB_m5E1D08016260EA06FD92F079AEA0FE471BF20C1E_gshared)(__this, p0, method);
}
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
extern "C" IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
extern "C" IL2CPP_METHOD_ATTR void Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708 (RuntimeObject * p0, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Core.Definitions.MixedRealityToolkitConfigurationProfile Microsoft.MixedReality.Toolkit.Core.Services.MixedRealityToolkit::get_ActiveProfile()
extern "C" IL2CPP_METHOD_ATTR MixedRealityToolkitConfigurationProfile_t8FD0BE1E29894247405C6A2A716461F7FD9984D7 * MixedRealityToolkit_get_ActiveProfile_mEEBAE3FBF4176BFC4A376C715E595AE9E5E57FD7 (MixedRealityToolkit_t638B1380E4669477D1FBF5DD68B45532D1BF0FDC * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Core.Definitions.BoundarySystem.MixedRealityBoundaryVisualizationProfile Microsoft.MixedReality.Toolkit.Core.Definitions.MixedRealityToolkitConfigurationProfile::get_BoundaryVisualizationProfile()
extern "C" IL2CPP_METHOD_ATTR MixedRealityBoundaryVisualizationProfile_tA198D88A478CBC4C97D067F75F016ED4CC053BB1 * MixedRealityToolkitConfigurationProfile_get_BoundaryVisualizationProfile_m252F4CE530386C069AF9BD4F2AE3A182AA60CA07 (MixedRealityToolkitConfigurationProfile_t8FD0BE1E29894247405C6A2A716461F7FD9984D7 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
extern "C" IL2CPP_METHOD_ATTR bool Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * p0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * p1, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * __this, float p0, float p1, float p2, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, float p1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p1, const RuntimeMethod* method);
// UnityEngine.Material Microsoft.MixedReality.Toolkit.Core.Definitions.BoundarySystem.MixedRealityBoundaryVisualizationProfile::get_PlayAreaMaterial()
extern "C" IL2CPP_METHOD_ATTR Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * MixedRealityBoundaryVisualizationProfile_get_PlayAreaMaterial_m2D98DB049ABBC91C88F0DEF51812567BCFD2F6F6 (MixedRealityBoundaryVisualizationProfile_tA198D88A478CBC4C97D067F75F016ED4CC053BB1 * __this, const RuntimeMethod* method);
// UnityEngine.Material Microsoft.MixedReality.Toolkit.Core.Definitions.BoundarySystem.MixedRealityBoundaryVisualizationProfile::get_TrackedAreaMaterial()
extern "C" IL2CPP_METHOD_ATTR Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * MixedRealityBoundaryVisualizationProfile_get_TrackedAreaMaterial_mCFAFE67B22A23444B53CA7B8EA9C56DA4F1353C7 (MixedRealityBoundaryVisualizationProfile_tA198D88A478CBC4C97D067F75F016ED4CC053BB1 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
extern "C" IL2CPP_METHOD_ATTR bool Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1 (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * p0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * p1, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.GameObject::CreatePrimitive(UnityEngine.PrimitiveType)
extern "C" IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * GameObject_CreatePrimitive_mA4D35085D817369E4A513FF31D745CEB27B07F6A (int32_t p0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_one()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_get_one_mA11B83037CB269C6076CBCF754E24C8F3ACEC2AB (const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Transform_set_localScale_m7ED1A6E5A87CD1D483515B99D6D3121FB92B0556 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.MeshRenderer>()
inline MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED * GameObject_GetComponent_TisMeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED_m91C1D9637A332988C72E62D52DFCFE89A6DDAB72 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mE03C66715289D7957CA068A675826B7EE0887BE3_gshared)(__this, method);
}
// System.Void UnityEngine.Renderer::set_sharedMaterial(UnityEngine.Material)
extern "C" IL2CPP_METHOD_ATTR void Renderer_set_sharedMaterial_mC94A354D9B0FCA081754A7CB51AEE5A9AD3946A3 (Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * __this, Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::Add(!0)
inline void List_1_Add_m94A913D452C8522AD16D2EB42D46016D83D86112 (List_1_tBA8D772D87B6502B2A4D0EFE166C846285F50650 * __this, GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * p0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tBA8D772D87B6502B2A4D0EFE166C846285F50650 *, GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))List_1_Add_m6930161974C7504C80F52EC379EF012387D43138_gshared)(__this, p0, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::.ctor()
inline void List_1__ctor_m70B8A20433AEEDEB942CD3EEC229497AB693E9D6 (List_1_tBA8D772D87B6502B2A4D0EFE166C846285F50650 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tBA8D772D87B6502B2A4D0EFE166C846285F50650 *, const RuntimeMethod*))List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_gshared)(__this, method);
}
// System.Void UnityEngine.MonoBehaviour::.ctor()
extern "C" IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97 (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.BoundaryVisualizationDemo/<>c::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m7EBB336B87036F2649F2ACB4D281BE2171F78458 (U3CU3Ec_t5D59C0DC847EC110DE14F60C6F49962A469C1757 * __this, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void System.Func`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_1__ctor_m479BA9DCBE3F496111BD05CC90CB1044C5FFD552 (Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method)
{
	((  void (*) (Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_1__ctor_m479BA9DCBE3F496111BD05CC90CB1044C5FFD552_gshared)(__this, p0, p1, method);
}
// System.Void UnityEngine.WaitUntil::.ctor(System.Func`1<System.Boolean>)
extern "C" IL2CPP_METHOD_ATTR void WaitUntil__ctor_mC1A43A512B185C55FBE858F741BEA6D4417105C1 (WaitUntil_t012561515C0E1D3DEA19DB3A05444B020C68E13F * __this, Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 * p0, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Core.Utilities.Async.AwaiterExtensions/SimpleCoroutineAwaiter Microsoft.MixedReality.Toolkit.Core.Utilities.Async.AwaiterExtensions::GetAwaiter(UnityEngine.WaitUntil)
extern "C" IL2CPP_METHOD_ATTR SimpleCoroutineAwaiter_tCF325F4B6190A2598489893345F0EB1D192F3398 * AwaiterExtensions_GetAwaiter_m376CBBC7E7253D99838FBF6C67E60B30F6C23A53 (WaitUntil_t012561515C0E1D3DEA19DB3A05444B020C68E13F * p0, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Core.Utilities.Async.AwaiterExtensions/SimpleCoroutineAwaiter::get_IsCompleted()
extern "C" IL2CPP_METHOD_ATTR bool SimpleCoroutineAwaiter_get_IsCompleted_mBC1F6B4EBF85ABFC39B9AFCB4F5181E7476CFA80 (SimpleCoroutineAwaiter_tCF325F4B6190A2598489893345F0EB1D192F3398 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitOnCompleted<Microsoft.MixedReality.Toolkit.Core.Utilities.Async.AwaiterExtensions/SimpleCoroutineAwaiter,Microsoft.MixedReality.Toolkit.Examples.Demos.BoundaryVisualizationDemo/<OnEnable>d__10>(!!0&,!!1&)
inline void AsyncVoidMethodBuilder_AwaitOnCompleted_TisSimpleCoroutineAwaiter_tCF325F4B6190A2598489893345F0EB1D192F3398_TisU3COnEnableU3Ed__10_t25F3A91E4757E23B70B1F0FA0CC2DD63BD2B14AB_m21439A5474E724904E3715D2F60658BEB7133F3C (AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF * __this, SimpleCoroutineAwaiter_tCF325F4B6190A2598489893345F0EB1D192F3398 ** p0, U3COnEnableU3Ed__10_t25F3A91E4757E23B70B1F0FA0CC2DD63BD2B14AB * p1, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF *, SimpleCoroutineAwaiter_tCF325F4B6190A2598489893345F0EB1D192F3398 **, U3COnEnableU3Ed__10_t25F3A91E4757E23B70B1F0FA0CC2DD63BD2B14AB *, const RuntimeMethod*))AsyncVoidMethodBuilder_AwaitOnCompleted_TisRuntimeObject_TisU3COnEnableU3Ed__10_t25F3A91E4757E23B70B1F0FA0CC2DD63BD2B14AB_m90612FB6F3AD2ADF68C633C6902582C3DF74031E_gshared)(__this, p0, p1, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Core.Utilities.Async.AwaiterExtensions/SimpleCoroutineAwaiter::GetResult()
extern "C" IL2CPP_METHOD_ATTR void SimpleCoroutineAwaiter_GetResult_mE8195C2E665E76BAA6662741177BA4CC4E3A1F54 (SimpleCoroutineAwaiter_tCF325F4B6190A2598489893345F0EB1D192F3398 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::SetException(System.Exception)
extern "C" IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_SetException_mA7D834CA1ECA91D65074D7608AADA2E2A9533136 (AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF * __this, Exception_t * p0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::SetResult()
extern "C" IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_SetResult_mFF6028CDDC809252656354DC1714B4EB5E40A625 (AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.BoundaryVisualizationDemo/<OnEnable>d__10::MoveNext()
extern "C" IL2CPP_METHOD_ATTR void U3COnEnableU3Ed__10_MoveNext_m1F40E12D5574152F9B647533BCF770A9ED9A229C (U3COnEnableU3Ed__10_t25F3A91E4757E23B70B1F0FA0CC2DD63BD2B14AB * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern "C" IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_SetStateMachine_mF3AEE42ED8474F11A5521D94271E884CF99E65B3 (AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF * __this, RuntimeObject* p0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.BoundaryVisualizationDemo/<OnEnable>d__10::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern "C" IL2CPP_METHOD_ATTR void U3COnEnableU3Ed__10_SetStateMachine_m04823BC11C1BC774DEE13014582B0B940030E1F2 (U3COnEnableU3Ed__10_t25F3A91E4757E23B70B1F0FA0CC2DD63BD2B14AB * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<Microsoft.MixedReality.Toolkit.Examples.Demos.DemoSpatialMeshHandler/<OnEnable>d__1>(!!0&)
inline void AsyncVoidMethodBuilder_Start_TisU3COnEnableU3Ed__1_t132401ED97C6F847289963908CFA73F19D2A4544_m5E7AEF701DB7ED147E1EE5763D4C3C789D96B73A (AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF * __this, U3COnEnableU3Ed__1_t132401ED97C6F847289963908CFA73F19D2A4544 * p0, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF *, U3COnEnableU3Ed__1_t132401ED97C6F847289963908CFA73F19D2A4544 *, const RuntimeMethod*))AsyncVoidMethodBuilder_Start_TisU3COnEnableU3Ed__1_t132401ED97C6F847289963908CFA73F19D2A4544_m5E7AEF701DB7ED147E1EE5763D4C3C789D96B73A_gshared)(__this, p0, method);
}
// Microsoft.MixedReality.Toolkit.Core.Interfaces.SpatialAwarenessSystem.IMixedRealitySpatialAwarenessSystem Microsoft.MixedReality.Toolkit.Core.Services.MixedRealityToolkit::get_SpatialAwarenessSystem()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* MixedRealityToolkit_get_SpatialAwarenessSystem_m79DCC20B74437DF1107D3BE177B32086C046D1E6 (const RuntimeMethod* method);
// System.Int32 Microsoft.MixedReality.Toolkit.Core.EventDatum.SpatialAwarenessSystem.MixedRealitySpatialAwarenessEventData::get_Id()
extern "C" IL2CPP_METHOD_ATTR int32_t MixedRealitySpatialAwarenessEventData_get_Id_mE78C3060E98636AA1DB879A8025D078A46507D94 (MixedRealitySpatialAwarenessEventData_tDBA07404F7418047BA73DC78BEAF6B16929DB1CF * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.UInt32>::ContainsKey(!0)
inline bool Dictionary_2_ContainsKey_m6DB80E33ECB9F99824545A77760D313CCF6DD8B9 (Dictionary_2_tEBA39BE6427C28D1FC2365D442B32E6BE63BE02B * __this, int32_t p0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tEBA39BE6427C28D1FC2365D442B32E6BE63BE02B *, int32_t, const RuntimeMethod*))Dictionary_2_ContainsKey_m6DB80E33ECB9F99824545A77760D313CCF6DD8B9_gshared)(__this, p0, method);
}
// System.String System.String::Format(System.String,System.Object)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA (String_t* p0, RuntimeObject * p1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.UInt32>::Add(!0,!1)
inline void Dictionary_2_Add_mA325F23C42F93F9A111F6192EC1CEC7D8E481599 (Dictionary_2_tEBA39BE6427C28D1FC2365D442B32E6BE63BE02B * __this, int32_t p0, uint32_t p1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tEBA39BE6427C28D1FC2365D442B32E6BE63BE02B *, int32_t, uint32_t, const RuntimeMethod*))Dictionary_2_Add_mA325F23C42F93F9A111F6192EC1CEC7D8E481599_gshared)(__this, p0, p1, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.UInt32>::TryGetValue(!0,!1&)
inline bool Dictionary_2_TryGetValue_m87B04E07308BDD9404C3E7C1976D52B69517C6C8 (Dictionary_2_tEBA39BE6427C28D1FC2365D442B32E6BE63BE02B * __this, int32_t p0, uint32_t* p1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tEBA39BE6427C28D1FC2365D442B32E6BE63BE02B *, int32_t, uint32_t*, const RuntimeMethod*))Dictionary_2_TryGetValue_m87B04E07308BDD9404C3E7C1976D52B69517C6C8_gshared)(__this, p0, p1, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.UInt32>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_mAC6062FF357307AFEB797A602E8380AEF272F442 (Dictionary_2_tEBA39BE6427C28D1FC2365D442B32E6BE63BE02B * __this, int32_t p0, uint32_t p1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tEBA39BE6427C28D1FC2365D442B32E6BE63BE02B *, int32_t, uint32_t, const RuntimeMethod*))Dictionary_2_set_Item_mAC6062FF357307AFEB797A602E8380AEF272F442_gshared)(__this, p0, p1, method);
}
// System.String System.String::Format(System.String,System.Object,System.Object)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Format_m19325298DBC61AAC016C16F7B3CF97A8A3DEA34A (String_t* p0, RuntimeObject * p1, RuntimeObject * p2, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.UInt32>::Remove(!0)
inline bool Dictionary_2_Remove_m0C628D9C267769495DA8B5F019F3FA7383D71E79 (Dictionary_2_tEBA39BE6427C28D1FC2365D442B32E6BE63BE02B * __this, int32_t p0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tEBA39BE6427C28D1FC2365D442B32E6BE63BE02B *, int32_t, const RuntimeMethod*))Dictionary_2_Remove_m0C628D9C267769495DA8B5F019F3FA7383D71E79_gshared)(__this, p0, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.UInt32>::.ctor()
inline void Dictionary_2__ctor_m936D2F2C58E41A0BBA2C4977D82339392359549B (Dictionary_2_tEBA39BE6427C28D1FC2365D442B32E6BE63BE02B * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tEBA39BE6427C28D1FC2365D442B32E6BE63BE02B *, const RuntimeMethod*))Dictionary_2__ctor_m936D2F2C58E41A0BBA2C4977D82339392359549B_gshared)(__this, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.DemoSpatialMeshHandler/<>c::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m30CB22E1C53B83C618B3831BAF4E4F49D7E86681 (U3CU3Ec_t80516076D9F25352BFE485243B172C0ECF0805F3 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitOnCompleted<Microsoft.MixedReality.Toolkit.Core.Utilities.Async.AwaiterExtensions/SimpleCoroutineAwaiter,Microsoft.MixedReality.Toolkit.Examples.Demos.DemoSpatialMeshHandler/<OnEnable>d__1>(!!0&,!!1&)
inline void AsyncVoidMethodBuilder_AwaitOnCompleted_TisSimpleCoroutineAwaiter_tCF325F4B6190A2598489893345F0EB1D192F3398_TisU3COnEnableU3Ed__1_t132401ED97C6F847289963908CFA73F19D2A4544_mE16E8B570144545EF138210017BF9781AE6C2BF2 (AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF * __this, SimpleCoroutineAwaiter_tCF325F4B6190A2598489893345F0EB1D192F3398 ** p0, U3COnEnableU3Ed__1_t132401ED97C6F847289963908CFA73F19D2A4544 * p1, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF *, SimpleCoroutineAwaiter_tCF325F4B6190A2598489893345F0EB1D192F3398 **, U3COnEnableU3Ed__1_t132401ED97C6F847289963908CFA73F19D2A4544 *, const RuntimeMethod*))AsyncVoidMethodBuilder_AwaitOnCompleted_TisRuntimeObject_TisU3COnEnableU3Ed__1_t132401ED97C6F847289963908CFA73F19D2A4544_m9CD0587B4217F610BFBA20B18A611AEB575E556F_gshared)(__this, p0, p1, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.DemoSpatialMeshHandler/<OnEnable>d__1::MoveNext()
extern "C" IL2CPP_METHOD_ATTR void U3COnEnableU3Ed__1_MoveNext_mC5F58C5326EF7CE7BE264CC67D7166C0505E0284 (U3COnEnableU3Ed__1_t132401ED97C6F847289963908CFA73F19D2A4544 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.DemoSpatialMeshHandler/<OnEnable>d__1::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern "C" IL2CPP_METHOD_ATTR void U3COnEnableU3Ed__1_SetStateMachine_m25F00DAD4524B96422F8DB4CD81FEA9E6FF822F7 (U3COnEnableU3Ed__1_t132401ED97C6F847289963908CFA73F19D2A4544 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<Microsoft.MixedReality.Toolkit.Examples.Demos.DiagnosticsDemoControls/<Start>d__0>(!!0&)
inline void AsyncVoidMethodBuilder_Start_TisU3CStartU3Ed__0_t7C225461B16887823D2847728502C5D852E3950C_m1DB9609425FA088A513C10A9FD93070D2FEBE2CD (AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF * __this, U3CStartU3Ed__0_t7C225461B16887823D2847728502C5D852E3950C * p0, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF *, U3CStartU3Ed__0_t7C225461B16887823D2847728502C5D852E3950C *, const RuntimeMethod*))AsyncVoidMethodBuilder_Start_TisU3CStartU3Ed__0_t7C225461B16887823D2847728502C5D852E3950C_m1DB9609425FA088A513C10A9FD93070D2FEBE2CD_gshared)(__this, p0, method);
}
// Microsoft.MixedReality.Toolkit.Core.Interfaces.Diagnostics.IMixedRealityDiagnosticsSystem Microsoft.MixedReality.Toolkit.Core.Services.MixedRealityToolkit::get_DiagnosticsSystem()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* MixedRealityToolkit_get_DiagnosticsSystem_mD807CB6D9AF3EBB382C6D613FB7CB7EC6F892B1D (const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.DiagnosticsDemoControls/<>c::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mCD1FF6911EC8A141806F9FC179250F16CF316D1B (U3CU3Ec_t67D746E3173732F25991D94DA2F12136EFE8DA72 * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Core.Definitions.MixedRealityToolkitConfigurationProfile::get_IsDiagnosticsSystemEnabled()
extern "C" IL2CPP_METHOD_ATTR bool MixedRealityToolkitConfigurationProfile_get_IsDiagnosticsSystemEnabled_m741E07D2ACDA2E58CD6FB878470217577ABB04B1 (MixedRealityToolkitConfigurationProfile_t8FD0BE1E29894247405C6A2A716461F7FD9984D7 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogWarning(System.Object)
extern "C" IL2CPP_METHOD_ATTR void Debug_LogWarning_m37338644DC81F640CCDFEAE35A223F0E965F0568 (RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitOnCompleted<Microsoft.MixedReality.Toolkit.Core.Utilities.Async.AwaiterExtensions/SimpleCoroutineAwaiter,Microsoft.MixedReality.Toolkit.Examples.Demos.DiagnosticsDemoControls/<Start>d__0>(!!0&,!!1&)
inline void AsyncVoidMethodBuilder_AwaitOnCompleted_TisSimpleCoroutineAwaiter_tCF325F4B6190A2598489893345F0EB1D192F3398_TisU3CStartU3Ed__0_t7C225461B16887823D2847728502C5D852E3950C_m7419BE6FD90226C3FBAE528398D81D9582F86D74 (AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF * __this, SimpleCoroutineAwaiter_tCF325F4B6190A2598489893345F0EB1D192F3398 ** p0, U3CStartU3Ed__0_t7C225461B16887823D2847728502C5D852E3950C * p1, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF *, SimpleCoroutineAwaiter_tCF325F4B6190A2598489893345F0EB1D192F3398 **, U3CStartU3Ed__0_t7C225461B16887823D2847728502C5D852E3950C *, const RuntimeMethod*))AsyncVoidMethodBuilder_AwaitOnCompleted_TisRuntimeObject_TisU3CStartU3Ed__0_t7C225461B16887823D2847728502C5D852E3950C_mC00442D17B98C10281F7D34CEDCB6A6C8B64F074_gshared)(__this, p0, p1, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.DiagnosticsDemoControls/<Start>d__0::MoveNext()
extern "C" IL2CPP_METHOD_ATTR void U3CStartU3Ed__0_MoveNext_m9CE0D730F4FD3EE2C5BF6E46EDF9E09D9BC6E777 (U3CStartU3Ed__0_t7C225461B16887823D2847728502C5D852E3950C * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.DiagnosticsDemoControls/<Start>d__0::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern "C" IL2CPP_METHOD_ATTR void U3CStartU3Ed__0_SetStateMachine_mFCBFEEEFA506686D8DCB8DEB7FE688415139886F (U3CStartU3Ed__0_t7C225461B16887823D2847728502C5D852E3950C * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<Microsoft.MixedReality.Toolkit.SDK.Audio.Influencers.AudioLoFiEffect>()
inline AudioLoFiEffect_t2A51E9DCCA37B112EC859D6F3E923F7BA863E5DC * GameObject_GetComponent_TisAudioLoFiEffect_t2A51E9DCCA37B112EC859D6F3E923F7BA863E5DC_m7F834A0A0869721E37749214FE35A6FCD0B58DB6 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  AudioLoFiEffect_t2A51E9DCCA37B112EC859D6F3E923F7BA863E5DC * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mE03C66715289D7957CA068A675826B7EE0887BE3_gshared)(__this, method);
}
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Renderer>()
inline Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * GameObject_GetComponent_TisRenderer_t0556D67DD582620D1F495627EDE30D03284151F4_mD65E2552CCFED4D0EC506EE90DE51215D90AEF85 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mE03C66715289D7957CA068A675826B7EE0887BE3_gshared)(__this, method);
}
// Microsoft.MixedReality.Toolkit.SDK.Audio.Influencers.AudioLoFiSourceQuality Microsoft.MixedReality.Toolkit.SDK.Audio.Influencers.AudioLoFiEffect::get_SourceQuality()
extern "C" IL2CPP_METHOD_ATTR int32_t AudioLoFiEffect_get_SourceQuality_mED85F1240323AED83214B5D9404AF64AFA3AB330 (AudioLoFiEffect_t2A51E9DCCA37B112EC859D6F3E923F7BA863E5DC * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.LoFiFilterSelection::SetEmitterMaterial(Microsoft.MixedReality.Toolkit.SDK.Audio.Influencers.AudioLoFiSourceQuality)
extern "C" IL2CPP_METHOD_ATTR void LoFiFilterSelection_SetEmitterMaterial_mA3BE258490C6BA197E43F616A7ADE92E8C930A65 (LoFiFilterSelection_tC30D19C8655BCD00E2748CC5DEEBDE0F154E4C52 * __this, int32_t ___sourceQuality0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.SDK.Audio.Influencers.AudioLoFiEffect::set_SourceQuality(Microsoft.MixedReality.Toolkit.SDK.Audio.Influencers.AudioLoFiSourceQuality)
extern "C" IL2CPP_METHOD_ATTR void AudioLoFiEffect_set_SourceQuality_mD9EAEBED2A26469242760617672691BA0E9E0A5B (AudioLoFiEffect_t2A51E9DCCA37B112EC859D6F3E923F7BA863E5DC * __this, int32_t p0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.StandardShader.MaterialMatrix::BuildMatrix()
extern "C" IL2CPP_METHOD_ATTR void MaterialMatrix_BuildMatrix_m2E173BFBB7F2BD9F1B8A5922CED661C78E5E5294 (MaterialMatrix_t4C38EA16270583C7EACDC8BCF1BC292DEE1C0BB1 * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
extern "C" IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9 (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Cast<UnityEngine.Transform>(System.Collections.IEnumerable)
inline RuntimeObject* Enumerable_Cast_TisTransform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA_m2C894D1B76F567B4A8207065C8BD617503335937 (RuntimeObject* p0, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_Cast_TisRuntimeObject_m171A353AB1F6591654B6668EBFA95B2516EA53F4_gshared)(p0, method);
}
// System.Collections.Generic.List`1<!!0> System.Linq.Enumerable::ToList<UnityEngine.Transform>(System.Collections.Generic.IEnumerable`1<!!0>)
inline List_1_t1863EF4EE1FDEED14D460C85AF61BE0850892F6D * Enumerable_ToList_TisTransform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA_m576129E7E9EA1B0D9D2882C862DD0416A519CA00 (RuntimeObject* p0, const RuntimeMethod* method)
{
	return ((  List_1_t1863EF4EE1FDEED14D460C85AF61BE0850892F6D * (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToList_TisRuntimeObject_m60A4853FE3E8D49EA18001EEBDF8D2773159A337_gshared)(p0, method);
}
// !0 System.Collections.Generic.List`1<UnityEngine.Transform>::get_Item(System.Int32)
inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * List_1_get_Item_mA33D8A6F21573AD262EE055BA64C73668489B86D (List_1_t1863EF4EE1FDEED14D460C85AF61BE0850892F6D * __this, int32_t p0, const RuntimeMethod* method)
{
	return ((  Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * (*) (List_1_t1863EF4EE1FDEED14D460C85AF61BE0850892F6D *, int32_t, const RuntimeMethod*))List_1_get_Item_mFDB8AD680C600072736579BBF5F38F7416396588_gshared)(__this, p0, method);
}
// System.Boolean UnityEngine.Application::get_isPlaying()
extern "C" IL2CPP_METHOD_ATTR bool Application_get_isPlaying_mF43B519662E7433DD90D883E5AE22EC3CFB65CA5 (const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
extern "C" IL2CPP_METHOD_ATTR void Object_Destroy_m23B4562495BA35A74266D4372D45368F8C05109A (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * p0, const RuntimeMethod* method);
// System.Void UnityEngine.Object::DestroyImmediate(UnityEngine.Object)
extern "C" IL2CPP_METHOD_ATTR void Object_DestroyImmediate_mF6F4415EF22249D6E650FAA40E403283F19B7446 (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * p0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Transform>::get_Count()
inline int32_t List_1_get_Count_m60ECB73FE15B95838DB91630185659793A5B3B8B (List_1_t1863EF4EE1FDEED14D460C85AF61BE0850892F6D * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t1863EF4EE1FDEED14D460C85AF61BE0850892F6D *, const RuntimeMethod*))List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared)(__this, method);
}
// System.Void UnityEngine.Debug::LogError(System.Object)
extern "C" IL2CPP_METHOD_ATTR void Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29 (RuntimeObject * p0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Shader::PropertyToID(System.String)
extern "C" IL2CPP_METHOD_ATTR int32_t Shader_PropertyToID_m831E5B48743620DB9E3E3DD15A8DEA483981DD45 (String_t* p0, const RuntimeMethod* method);
// System.String System.String::Concat(System.Object,System.Object)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_mBB19C73816BDD1C3519F248E1ADC8E11A6FDB495 (RuntimeObject * p0, RuntimeObject * p1, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Transform_set_localPosition_m275F5550DD939F83AFEB5E8D681131172E2E1728 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Quaternion_Euler_m55C96FCD397CC69109261572710608D12A4CBD2B (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localRotation(UnityEngine.Quaternion)
extern "C" IL2CPP_METHOD_ATTR void Transform_set_localRotation_mE2BECB0954FFC1D93FB631600D9A9BEFF41D9C8A (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  p0, const RuntimeMethod* method);
// System.Void UnityEngine.Material::.ctor(UnityEngine.Material)
extern "C" IL2CPP_METHOD_ATTR void Material__ctor_m0171C6D4D3FD04D58C70808F255DBA67D0ED2BDE (Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * __this, Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * p0, const RuntimeMethod* method);
// System.Void UnityEngine.Material::SetFloat(System.Int32,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Material_SetFloat_mC2FDDF0798373DEE6BBA9B9FFFE03EC3CFB9BF47 (Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * __this, int32_t p0, float p1, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.MeshFilter>()
inline MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * GameObject_GetComponent_TisMeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0_mD1BA4FFEB800AB3D102141CD0A0ECE237EA70FB4 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mE03C66715289D7957CA068A675826B7EE0887BE3_gshared)(__this, method);
}
// System.Void UnityEngine.Renderer::set_material(UnityEngine.Material)
extern "C" IL2CPP_METHOD_ATTR void Renderer_set_material_mB4988AD6A93C7FDACC4C07A99D1DAC23D10C0344 (Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * __this, Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * p0, const RuntimeMethod* method);
// System.Void UnityEngine.MeshFilter::set_mesh(UnityEngine.Mesh)
extern "C" IL2CPP_METHOD_ATTR void MeshFilter_set_mesh_mA18AA96C75CC91CF0917BA1F437626499FAAF496 (MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * __this, Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * p0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.SphereCollider>()
inline SphereCollider_tAC3E5E20B385DF1C0B17F3EA5C7214F71367706F * GameObject_GetComponent_TisSphereCollider_tAC3E5E20B385DF1C0B17F3EA5C7214F71367706F_m4DEC2B4735AA4EA2D41E2D02AF512A49659AD039 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  SphereCollider_tAC3E5E20B385DF1C0B17F3EA5C7214F71367706F * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mE03C66715289D7957CA068A675826B7EE0887BE3_gshared)(__this, method);
}
// !!0 UnityEngine.GameObject::AddComponent<UnityEngine.MeshCollider>()
inline MeshCollider_t60EB55ADE92499FE8D1AA206D2BD96E65B2766DE * GameObject_AddComponent_TisMeshCollider_t60EB55ADE92499FE8D1AA206D2BD96E65B2766DE_m38A789A66BD8A824B7D5FF46C20C4BD3CE0F3B3C (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  MeshCollider_t60EB55ADE92499FE8D1AA206D2BD96E65B2766DE * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_mE053F7A95F30AFF07D69F0DED3DA13AE2EC25E03_gshared)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2 (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
extern "C" IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Transform_get_rotation_m3AB90A67403249AECCA5E02BC70FCE8C90FE9FB9 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m4F397BCC6697902B40033E61129D4EA6FE93570F (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * p0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p1, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  p2, const RuntimeMethod* method)
{
	return ((  GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 , const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_mFE9C42D5336D4F9EFF8CD96E2A26962EFF523947_gshared)(p0, p1, p2, method);
}
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, bool p0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<Microsoft.MixedReality.Toolkit.SDK.Utilities.Solvers.SolverHandler>()
inline SolverHandler_t321FA96B537A6B29F38A2020FEBFD5757CADE0FD * GameObject_GetComponent_TisSolverHandler_t321FA96B537A6B29F38A2020FEBFD5757CADE0FD_m0985BD76C43DCDF9DE361DA4E3BDB469A3A5EC12 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  SolverHandler_t321FA96B537A6B29F38A2020FEBFD5757CADE0FD * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mE03C66715289D7957CA068A675826B7EE0887BE3_gshared)(__this, method);
}
// Microsoft.MixedReality.Toolkit.Core.Definitions.InputSystem.MixedRealityInputAction Microsoft.MixedReality.Toolkit.Core.EventDatum.Input.BaseInputEventData::get_MixedRealityInputAction()
extern "C" IL2CPP_METHOD_ATTR MixedRealityInputAction_tB87A712377383583B43FC255F442492403992C96  BaseInputEventData_get_MixedRealityInputAction_m47CF3B10BAAD06BEA073E2F43625AC83F40043F5 (BaseInputEventData_t4E713D4242FE17A0386036D68C4C910847E7F697 * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Core.Definitions.InputSystem.MixedRealityInputAction::op_Inequality(Microsoft.MixedReality.Toolkit.Core.Definitions.InputSystem.MixedRealityInputAction,Microsoft.MixedReality.Toolkit.Core.Definitions.InputSystem.MixedRealityInputAction)
extern "C" IL2CPP_METHOD_ATTR bool MixedRealityInputAction_op_Inequality_mEDB1AE0C6A572071A693270B978AF08F827396BF (MixedRealityInputAction_tB87A712377383583B43FC255F442492403992C96  p0, MixedRealityInputAction_tB87A712377383583B43FC255F442492403992C96  p1, const RuntimeMethod* method);
// System.Boolean UnityEngine.GameObject::get_activeSelf()
extern "C" IL2CPP_METHOD_ATTR bool GameObject_get_activeSelf_mFE1834886CAE59884AC2BE707A3B821A1DB61F44 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Core.Definitions.Utilities.Handedness Microsoft.MixedReality.Toolkit.Core.EventDatum.Input.InputEventData::get_Handedness()
extern "C" IL2CPP_METHOD_ATTR uint8_t InputEventData_get_Handedness_m0409ABB26C493B212975C2C952E628512118231C (InputEventData_t222623A7632AE66699840C7E19A3E967B552E9C2 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.SDK.Utilities.Solvers.SolverHandler::set_TrackedObjectToReference(Microsoft.MixedReality.Toolkit.Core.Definitions.Utilities.TrackedObjectType)
extern "C" IL2CPP_METHOD_ATTR void SolverHandler_set_TrackedObjectToReference_m437053EA6DCD2F49E4A3E814CFA0FB6A2CBA1E4F (SolverHandler_t321FA96B537A6B29F38A2020FEBFD5757CADE0FD * __this, int32_t p0, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Core.Definitions.InputSystem.MixedRealityInputAction Microsoft.MixedReality.Toolkit.Core.Definitions.InputSystem.MixedRealityInputAction::get_None()
extern "C" IL2CPP_METHOD_ATTR MixedRealityInputAction_tB87A712377383583B43FC255F442492403992C96  MixedRealityInputAction_get_None_m3A6CA9CBA65C11749C760EA6984CAEB3062AB062 (const RuntimeMethod* method);
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
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.BoundaryVisualizationDemo::Awake()
extern "C" IL2CPP_METHOD_ATTR void BoundaryVisualizationDemo_Awake_mC9C5771F3D8AD8D65E43732349A1DF6869F830DA (BoundaryVisualizationDemo_tD5E48F3995846BA4A1909932098B3C4C09520AA4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BoundaryVisualizationDemo_Awake_mC9C5771F3D8AD8D65E43732349A1DF6869F830DA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// markerParent = new GameObject();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)il2cpp_codegen_object_new(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_il2cpp_TypeInfo_var);
		GameObject__ctor_mA4DFA8F4471418C248E95B55070665EF344B4B2D(L_0, /*hidden argument*/NULL);
		__this->set_markerParent_4(L_0);
		// markerParent.name = "Boundary Demo Markers";
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_1 = __this->get_markerParent_4();
		NullCheck(L_1);
		Object_set_name_m538711B144CDE30F929376BCF72D0DC8F85D0826(L_1, _stringLiteral827AF2DDFE14E6C05BEB656A7ABE3AFA7FFF5DCF, /*hidden argument*/NULL);
		// markerParent.transform.parent = MixedRealityToolkit.Instance.MixedRealityPlayspace;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_2 = __this->get_markerParent_4();
		NullCheck(L_2);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_3 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityToolkit_t638B1380E4669477D1FBF5DD68B45532D1BF0FDC_il2cpp_TypeInfo_var);
		MixedRealityToolkit_t638B1380E4669477D1FBF5DD68B45532D1BF0FDC * L_4 = MixedRealityToolkit_get_Instance_m8E85DEB2FCE5996BD4E0784E1D334E594DA21341(/*hidden argument*/NULL);
		NullCheck(L_4);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_5 = MixedRealityToolkit_get_MixedRealityPlayspace_m3467356987E1D56725429A833CEC4C9ABCD29DD8(L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		Transform_set_parent_m65B8E4660B2C554069C57A957D9E55FECA7AA73E(L_3, L_5, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.BoundaryVisualizationDemo::Start()
extern "C" IL2CPP_METHOD_ATTR void BoundaryVisualizationDemo_Start_mDD4F37D1285AF82E7835042581B13E784CD30EE0 (BoundaryVisualizationDemo_tD5E48F3995846BA4A1909932098B3C4C09520AA4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BoundaryVisualizationDemo_Start_mDD4F37D1285AF82E7835042581B13E784CD30EE0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (MixedRealityToolkit.BoundarySystem != null)
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityToolkit_t638B1380E4669477D1FBF5DD68B45532D1BF0FDC_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = MixedRealityToolkit_get_BoundarySystem_m1C5BF97AB22C43EAC844A6795A19E752BCDF59DC(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		// if (markers.Count == 0)
		List_1_tBA8D772D87B6502B2A4D0EFE166C846285F50650 * L_1 = __this->get_markers_5();
		NullCheck(L_1);
		int32_t L_2 = List_1_get_Count_m448499BD6BA2B98A6E4F92B96088CEA9EE3F4D35(L_1, /*hidden argument*/List_1_get_Count_m448499BD6BA2B98A6E4F92B96088CEA9EE3F4D35_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_001a;
		}
	}
	{
		// AddMarkers();
		BoundaryVisualizationDemo_AddMarkers_m5F7A12FF2E1C30208AA156A2B68FFCAD5A1D2A31(__this, /*hidden argument*/NULL);
	}

IL_001a:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.BoundaryVisualizationDemo::Update()
extern "C" IL2CPP_METHOD_ATTR void BoundaryVisualizationDemo_Update_mF383A7D4EFA0A7DEE5504230D48E2F988E9971B4 (BoundaryVisualizationDemo_tD5E48F3995846BA4A1909932098B3C4C09520AA4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BoundaryVisualizationDemo_Update_mF383A7D4EFA0A7DEE5504230D48E2F988E9971B4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (MixedRealityToolkit.BoundarySystem != null)
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityToolkit_t638B1380E4669477D1FBF5DD68B45532D1BF0FDC_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = MixedRealityToolkit_get_BoundarySystem_m1C5BF97AB22C43EAC844A6795A19E752BCDF59DC(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0057;
		}
	}
	{
		// MixedRealityToolkit.BoundarySystem.ShowFloor = showFloor;
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityToolkit_t638B1380E4669477D1FBF5DD68B45532D1BF0FDC_il2cpp_TypeInfo_var);
		RuntimeObject* L_1 = MixedRealityToolkit_get_BoundarySystem_m1C5BF97AB22C43EAC844A6795A19E752BCDF59DC(/*hidden argument*/NULL);
		bool L_2 = __this->get_showFloor_6();
		NullCheck(L_1);
		InterfaceActionInvoker1< bool >::Invoke(5 /* System.Void Microsoft.MixedReality.Toolkit.Core.Interfaces.BoundarySystem.IMixedRealityBoundarySystem::set_ShowFloor(System.Boolean) */, IMixedRealityBoundarySystem_tFFA9C4D286DAF8C1E633DF43C6398BE616C2AEE9_il2cpp_TypeInfo_var, L_1, L_2);
		// MixedRealityToolkit.BoundarySystem.ShowPlayArea = showPlayArea;
		RuntimeObject* L_3 = MixedRealityToolkit_get_BoundarySystem_m1C5BF97AB22C43EAC844A6795A19E752BCDF59DC(/*hidden argument*/NULL);
		bool L_4 = __this->get_showPlayArea_7();
		NullCheck(L_3);
		InterfaceActionInvoker1< bool >::Invoke(9 /* System.Void Microsoft.MixedReality.Toolkit.Core.Interfaces.BoundarySystem.IMixedRealityBoundarySystem::set_ShowPlayArea(System.Boolean) */, IMixedRealityBoundarySystem_tFFA9C4D286DAF8C1E633DF43C6398BE616C2AEE9_il2cpp_TypeInfo_var, L_3, L_4);
		// MixedRealityToolkit.BoundarySystem.ShowTrackedArea = showTrackedArea;
		RuntimeObject* L_5 = MixedRealityToolkit_get_BoundarySystem_m1C5BF97AB22C43EAC844A6795A19E752BCDF59DC(/*hidden argument*/NULL);
		bool L_6 = __this->get_showTrackedArea_8();
		NullCheck(L_5);
		InterfaceActionInvoker1< bool >::Invoke(13 /* System.Void Microsoft.MixedReality.Toolkit.Core.Interfaces.BoundarySystem.IMixedRealityBoundarySystem::set_ShowTrackedArea(System.Boolean) */, IMixedRealityBoundarySystem_tFFA9C4D286DAF8C1E633DF43C6398BE616C2AEE9_il2cpp_TypeInfo_var, L_5, L_6);
		// MixedRealityToolkit.BoundarySystem.ShowBoundaryWalls = showBoundaryWalls;
		RuntimeObject* L_7 = MixedRealityToolkit_get_BoundarySystem_m1C5BF97AB22C43EAC844A6795A19E752BCDF59DC(/*hidden argument*/NULL);
		bool L_8 = __this->get_showBoundaryWalls_9();
		NullCheck(L_7);
		InterfaceActionInvoker1< bool >::Invoke(17 /* System.Void Microsoft.MixedReality.Toolkit.Core.Interfaces.BoundarySystem.IMixedRealityBoundarySystem::set_ShowBoundaryWalls(System.Boolean) */, IMixedRealityBoundarySystem_tFFA9C4D286DAF8C1E633DF43C6398BE616C2AEE9_il2cpp_TypeInfo_var, L_7, L_8);
		// MixedRealityToolkit.BoundarySystem.ShowBoundaryCeiling = showBoundaryCeiling;
		RuntimeObject* L_9 = MixedRealityToolkit_get_BoundarySystem_m1C5BF97AB22C43EAC844A6795A19E752BCDF59DC(/*hidden argument*/NULL);
		bool L_10 = __this->get_showBoundaryCeiling_10();
		NullCheck(L_9);
		InterfaceActionInvoker1< bool >::Invoke(21 /* System.Void Microsoft.MixedReality.Toolkit.Core.Interfaces.BoundarySystem.IMixedRealityBoundarySystem::set_ShowBoundaryCeiling(System.Boolean) */, IMixedRealityBoundarySystem_tFFA9C4D286DAF8C1E633DF43C6398BE616C2AEE9_il2cpp_TypeInfo_var, L_9, L_10);
	}

IL_0057:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.BoundaryVisualizationDemo::OnEnable()
extern "C" IL2CPP_METHOD_ATTR void BoundaryVisualizationDemo_OnEnable_mDEC4960492803CE7E841D4F91178721B1C3F24DE (BoundaryVisualizationDemo_tD5E48F3995846BA4A1909932098B3C4C09520AA4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BoundaryVisualizationDemo_OnEnable_mDEC4960492803CE7E841D4F91178721B1C3F24DE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3COnEnableU3Ed__10_t25F3A91E4757E23B70B1F0FA0CC2DD63BD2B14AB  V_0;
	memset(&V_0, 0, sizeof(V_0));
	AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		(&V_0)->set_U3CU3E4__this_2(__this);
		AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF  L_0 = AsyncVoidMethodBuilder_Create_m2EF884A75C3C230F0E6A63B1E23DC82F3B159130(/*hidden argument*/NULL);
		(&V_0)->set_U3CU3Et__builder_1(L_0);
		(&V_0)->set_U3CU3E1__state_0((-1));
		U3COnEnableU3Ed__10_t25F3A91E4757E23B70B1F0FA0CC2DD63BD2B14AB  L_1 = V_0;
		AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF  L_2 = L_1.get_U3CU3Et__builder_1();
		V_1 = L_2;
		AsyncVoidMethodBuilder_Start_TisU3COnEnableU3Ed__10_t25F3A91E4757E23B70B1F0FA0CC2DD63BD2B14AB_m5E1D08016260EA06FD92F079AEA0FE471BF20C1E((AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF *)(&V_1), (U3COnEnableU3Ed__10_t25F3A91E4757E23B70B1F0FA0CC2DD63BD2B14AB *)(&V_0), /*hidden argument*/AsyncVoidMethodBuilder_Start_TisU3COnEnableU3Ed__10_t25F3A91E4757E23B70B1F0FA0CC2DD63BD2B14AB_m5E1D08016260EA06FD92F079AEA0FE471BF20C1E_RuntimeMethod_var);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.BoundaryVisualizationDemo::OnDisable()
extern "C" IL2CPP_METHOD_ATTR void BoundaryVisualizationDemo_OnDisable_mF5CBA59E396DEC6CAB3EF928908078911496A888 (BoundaryVisualizationDemo_tD5E48F3995846BA4A1909932098B3C4C09520AA4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BoundaryVisualizationDemo_OnDisable_mF5CBA59E396DEC6CAB3EF928908078911496A888_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		// MixedRealityToolkit.BoundarySystem?.Unregister(gameObject);
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityToolkit_t638B1380E4669477D1FBF5DD68B45532D1BF0FDC_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = MixedRealityToolkit_get_BoundarySystem_m1C5BF97AB22C43EAC844A6795A19E752BCDF59DC(/*hidden argument*/NULL);
		RuntimeObject* L_1 = L_0;
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
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_2 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(__this, /*hidden argument*/NULL);
		NullCheck(G_B2_0);
		InterfaceActionInvoker1< GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * >::Invoke(3 /* System.Void Microsoft.MixedReality.Toolkit.Core.Interfaces.Events.IMixedRealityEventSystem::Unregister(UnityEngine.GameObject) */, IMixedRealityEventSystem_t2FA76B59455C041D6529E6EC75DD8E29A9284B8D_il2cpp_TypeInfo_var, G_B2_0, L_2);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.BoundaryVisualizationDemo::OnBoundaryVisualizationChanged(Microsoft.MixedReality.Toolkit.Core.EventDatum.Boundary.BoundaryEventData)
extern "C" IL2CPP_METHOD_ATTR void BoundaryVisualizationDemo_OnBoundaryVisualizationChanged_m0BE3CB64DA17978EFAB727EBDC8FF35A1EF020D0 (BoundaryVisualizationDemo_tD5E48F3995846BA4A1909932098B3C4C09520AA4 * __this, BoundaryEventData_t5DDE2CD200A1E4BC0941E4B2D78C72087E2BDA81 * ___eventData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BoundaryVisualizationDemo_OnBoundaryVisualizationChanged_m0BE3CB64DA17978EFAB727EBDC8FF35A1EF020D0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("[BoundaryVisualizationDemo] Boundary visualization changed.");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(_stringLiteral8254DEC6865AD0424E87DA9BFBF60837DCC65570, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.BoundaryVisualizationDemo::AddMarkers()
extern "C" IL2CPP_METHOD_ATTR void BoundaryVisualizationDemo_AddMarkers_m5F7A12FF2E1C30208AA156A2B68FFCAD5A1D2A31 (BoundaryVisualizationDemo_tD5E48F3995846BA4A1909932098B3C4C09520AA4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BoundaryVisualizationDemo_AddMarkers_m5F7A12FF2E1C30208AA156A2B68FFCAD5A1D2A31_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  V_0;
	memset(&V_0, 0, sizeof(V_0));
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	MixedRealityBoundaryVisualizationProfile_tA198D88A478CBC4C97D067F75F016ED4CC053BB1 * V_4 = NULL;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_5;
	memset(&V_5, 0, sizeof(V_5));
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_8;
	memset(&V_8, 0, sizeof(V_8));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_9;
	memset(&V_9, 0, sizeof(V_9));
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * V_10 = NULL;
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * V_11 = NULL;
	{
		// if (!MixedRealityToolkit.BoundarySystem.TryGetRectangularBoundsParams(out centerRect, out angleRect, out widthRect, out heightRect))
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityToolkit_t638B1380E4669477D1FBF5DD68B45532D1BF0FDC_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = MixedRealityToolkit_get_BoundarySystem_m1C5BF97AB22C43EAC844A6795A19E752BCDF59DC(/*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_1 = InterfaceFuncInvoker4< bool, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D *, float*, float*, float* >::Invoke(27 /* System.Boolean Microsoft.MixedReality.Toolkit.Core.Interfaces.BoundarySystem.IMixedRealityBoundarySystem::TryGetRectangularBoundsParams(UnityEngine.Vector2&,System.Single&,System.Single&,System.Single&) */, IMixedRealityBoundarySystem_tFFA9C4D286DAF8C1E633DF43C6398BE616C2AEE9_il2cpp_TypeInfo_var, L_0, (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D *)(&V_0), (float*)(&V_1), (float*)(&V_2), (float*)(&V_3));
		if (L_1)
		{
			goto IL_0015;
		}
	}
	{
		// return;
		return;
	}

IL_0015:
	{
		// MixedRealityBoundaryVisualizationProfile visualizationProfile = MixedRealityToolkit.Instance.ActiveProfile.BoundaryVisualizationProfile;
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityToolkit_t638B1380E4669477D1FBF5DD68B45532D1BF0FDC_il2cpp_TypeInfo_var);
		MixedRealityToolkit_t638B1380E4669477D1FBF5DD68B45532D1BF0FDC * L_2 = MixedRealityToolkit_get_Instance_m8E85DEB2FCE5996BD4E0784E1D334E594DA21341(/*hidden argument*/NULL);
		NullCheck(L_2);
		MixedRealityToolkitConfigurationProfile_t8FD0BE1E29894247405C6A2A716461F7FD9984D7 * L_3 = MixedRealityToolkit_get_ActiveProfile_mEEBAE3FBF4176BFC4A376C715E595AE9E5E57FD7(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		MixedRealityBoundaryVisualizationProfile_tA198D88A478CBC4C97D067F75F016ED4CC053BB1 * L_4 = MixedRealityToolkitConfigurationProfile_get_BoundaryVisualizationProfile_m252F4CE530386C069AF9BD4F2AE3A182AA60CA07(L_3, /*hidden argument*/NULL);
		V_4 = L_4;
		// if (visualizationProfile == null)
		MixedRealityBoundaryVisualizationProfile_tA198D88A478CBC4C97D067F75F016ED4CC053BB1 * L_5 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_6 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_5, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0031;
		}
	}
	{
		// return;
		return;
	}

IL_0031:
	{
		// Vector3 center = new Vector3(centerRect.x, 0f, centerRect.y);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_7 = V_0;
		float L_8 = L_7.get_x_0();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_9 = V_0;
		float L_10 = L_9.get_y_1();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_11;
		memset(&L_11, 0, sizeof(L_11));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_11), L_8, (0.0f), L_10, /*hidden argument*/NULL);
		// Vector3 corner = center - (new Vector3(dimension, 0.0f, dimension) * 0.5f);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_12;
		memset(&L_12, 0, sizeof(L_12));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_12), (4.0f), (0.0f), (4.0f), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_13 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_12, (0.5f), /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_14 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_11, L_13, /*hidden argument*/NULL);
		V_5 = L_14;
		// corner.y += 0.05f;
		float* L_15 = (&V_5)->get_address_of_y_3();
		float* L_16 = L_15;
		float L_17 = *((float*)L_16);
		*((float*)L_16) = (float)((float)il2cpp_codegen_add((float)L_17, (float)(0.05f)));
		// for (int xIndex = 0; xIndex < indicatorCount; ++xIndex)
		V_6 = 0;
		goto IL_0178;
	}

IL_0084:
	{
		// for (int yIndex = 0; yIndex < indicatorCount; ++yIndex)
		V_7 = 0;
		goto IL_0169;
	}

IL_008c:
	{
		// Vector3 offset = new Vector3(xIndex * indicatorDistance, 0.0f, yIndex * indicatorDistance);
		int32_t L_18 = V_6;
		int32_t L_19 = V_7;
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_8), ((float)il2cpp_codegen_multiply((float)(((float)((float)L_18))), (float)(0.2f))), (0.0f), ((float)il2cpp_codegen_multiply((float)(((float)((float)L_19))), (float)(0.2f))), /*hidden argument*/NULL);
		// Vector3 position = corner + offset;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_20 = V_5;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_21 = V_8;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_22 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_20, L_21, /*hidden argument*/NULL);
		V_9 = L_22;
		// Material material = null;
		V_10 = (Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 *)NULL;
		// if (MixedRealityToolkit.BoundarySystem.Contains(position, Boundary.Type.PlayArea))
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityToolkit_t638B1380E4669477D1FBF5DD68B45532D1BF0FDC_il2cpp_TypeInfo_var);
		RuntimeObject* L_23 = MixedRealityToolkit_get_BoundarySystem_m1C5BF97AB22C43EAC844A6795A19E752BCDF59DC(/*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_24 = V_9;
		NullCheck(L_23);
		bool L_25 = InterfaceFuncInvoker2< bool, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , int32_t >::Invoke(26 /* System.Boolean Microsoft.MixedReality.Toolkit.Core.Interfaces.BoundarySystem.IMixedRealityBoundarySystem::Contains(UnityEngine.Vector3,UnityEngine.Experimental.XR.Boundary/Type) */, IMixedRealityBoundarySystem_tFFA9C4D286DAF8C1E633DF43C6398BE616C2AEE9_il2cpp_TypeInfo_var, L_23, L_24, 0);
		if (!L_25)
		{
			goto IL_00d2;
		}
	}
	{
		// material = visualizationProfile.PlayAreaMaterial;
		MixedRealityBoundaryVisualizationProfile_tA198D88A478CBC4C97D067F75F016ED4CC053BB1 * L_26 = V_4;
		NullCheck(L_26);
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_27 = MixedRealityBoundaryVisualizationProfile_get_PlayAreaMaterial_m2D98DB049ABBC91C88F0DEF51812567BCFD2F6F6(L_26, /*hidden argument*/NULL);
		V_10 = L_27;
		// }
		goto IL_00ea;
	}

IL_00d2:
	{
		// else if (MixedRealityToolkit.BoundarySystem.Contains(position, Boundary.Type.TrackedArea))
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityToolkit_t638B1380E4669477D1FBF5DD68B45532D1BF0FDC_il2cpp_TypeInfo_var);
		RuntimeObject* L_28 = MixedRealityToolkit_get_BoundarySystem_m1C5BF97AB22C43EAC844A6795A19E752BCDF59DC(/*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_29 = V_9;
		NullCheck(L_28);
		bool L_30 = InterfaceFuncInvoker2< bool, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , int32_t >::Invoke(26 /* System.Boolean Microsoft.MixedReality.Toolkit.Core.Interfaces.BoundarySystem.IMixedRealityBoundarySystem::Contains(UnityEngine.Vector3,UnityEngine.Experimental.XR.Boundary/Type) */, IMixedRealityBoundarySystem_tFFA9C4D286DAF8C1E633DF43C6398BE616C2AEE9_il2cpp_TypeInfo_var, L_28, L_29, 1);
		if (!L_30)
		{
			goto IL_00ea;
		}
	}
	{
		// material = visualizationProfile.TrackedAreaMaterial;
		MixedRealityBoundaryVisualizationProfile_tA198D88A478CBC4C97D067F75F016ED4CC053BB1 * L_31 = V_4;
		NullCheck(L_31);
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_32 = MixedRealityBoundaryVisualizationProfile_get_TrackedAreaMaterial_mCFAFE67B22A23444B53CA7B8EA9C56DA4F1353C7(L_31, /*hidden argument*/NULL);
		V_10 = L_32;
	}

IL_00ea:
	{
		// if (material != null)
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_33 = V_10;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_34 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_33, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_34)
		{
			goto IL_0163;
		}
	}
	{
		// GameObject marker = GameObject.CreatePrimitive(PrimitiveType.Sphere);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_35 = GameObject_CreatePrimitive_mA4D35085D817369E4A513FF31D745CEB27B07F6A(0, /*hidden argument*/NULL);
		V_11 = L_35;
		// marker.name = "Boundary Demo Marker";
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_36 = V_11;
		NullCheck(L_36);
		Object_set_name_m538711B144CDE30F929376BCF72D0DC8F85D0826(L_36, _stringLiteralEDADB60AC5EAA39A5120690FF8D71DFD54427CA9, /*hidden argument*/NULL);
		// marker.transform.parent = markerParent.transform;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_37 = V_11;
		NullCheck(L_37);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_38 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_37, /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_39 = __this->get_markerParent_4();
		NullCheck(L_39);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_40 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_39, /*hidden argument*/NULL);
		NullCheck(L_38);
		Transform_set_parent_m65B8E4660B2C554069C57A957D9E55FECA7AA73E(L_38, L_40, /*hidden argument*/NULL);
		// marker.transform.position = position;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_41 = V_11;
		NullCheck(L_41);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_42 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_41, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_43 = V_9;
		NullCheck(L_42);
		Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC(L_42, L_43, /*hidden argument*/NULL);
		// marker.transform.localScale = Vector3.one * indicatorScale;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_44 = V_11;
		NullCheck(L_44);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_45 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_44, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_46 = Vector3_get_one_mA11B83037CB269C6076CBCF754E24C8F3ACEC2AB(/*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_47 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_46, (0.1f), /*hidden argument*/NULL);
		NullCheck(L_45);
		Transform_set_localScale_m7ED1A6E5A87CD1D483515B99D6D3121FB92B0556(L_45, L_47, /*hidden argument*/NULL);
		// marker.GetComponent<MeshRenderer>().sharedMaterial = material;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_48 = V_11;
		NullCheck(L_48);
		MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED * L_49 = GameObject_GetComponent_TisMeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED_m91C1D9637A332988C72E62D52DFCFE89A6DDAB72(L_48, /*hidden argument*/GameObject_GetComponent_TisMeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED_m91C1D9637A332988C72E62D52DFCFE89A6DDAB72_RuntimeMethod_var);
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_50 = V_10;
		NullCheck(L_49);
		Renderer_set_sharedMaterial_mC94A354D9B0FCA081754A7CB51AEE5A9AD3946A3(L_49, L_50, /*hidden argument*/NULL);
		// markers.Add(marker);
		List_1_tBA8D772D87B6502B2A4D0EFE166C846285F50650 * L_51 = __this->get_markers_5();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_52 = V_11;
		NullCheck(L_51);
		List_1_Add_m94A913D452C8522AD16D2EB42D46016D83D86112(L_51, L_52, /*hidden argument*/List_1_Add_m94A913D452C8522AD16D2EB42D46016D83D86112_RuntimeMethod_var);
	}

IL_0163:
	{
		// for (int yIndex = 0; yIndex < indicatorCount; ++yIndex)
		int32_t L_53 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_53, (int32_t)1));
	}

IL_0169:
	{
		// for (int yIndex = 0; yIndex < indicatorCount; ++yIndex)
		int32_t L_54 = V_7;
		if ((((int32_t)L_54) < ((int32_t)((int32_t)20))))
		{
			goto IL_008c;
		}
	}
	{
		// for (int xIndex = 0; xIndex < indicatorCount; ++xIndex)
		int32_t L_55 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_55, (int32_t)1));
	}

IL_0178:
	{
		// for (int xIndex = 0; xIndex < indicatorCount; ++xIndex)
		int32_t L_56 = V_6;
		if ((((int32_t)L_56) < ((int32_t)((int32_t)20))))
		{
			goto IL_0084;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.BoundaryVisualizationDemo::.ctor()
extern "C" IL2CPP_METHOD_ATTR void BoundaryVisualizationDemo__ctor_m36673756CDC840CF309141318A65008B66888463 (BoundaryVisualizationDemo_tD5E48F3995846BA4A1909932098B3C4C09520AA4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BoundaryVisualizationDemo__ctor_m36673756CDC840CF309141318A65008B66888463_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private readonly List<GameObject> markers = new List<GameObject>();
		List_1_tBA8D772D87B6502B2A4D0EFE166C846285F50650 * L_0 = (List_1_tBA8D772D87B6502B2A4D0EFE166C846285F50650 *)il2cpp_codegen_object_new(List_1_tBA8D772D87B6502B2A4D0EFE166C846285F50650_il2cpp_TypeInfo_var);
		List_1__ctor_m70B8A20433AEEDEB942CD3EEC229497AB693E9D6(L_0, /*hidden argument*/List_1__ctor_m70B8A20433AEEDEB942CD3EEC229497AB693E9D6_RuntimeMethod_var);
		__this->set_markers_5(L_0);
		// private bool showFloor = true;
		__this->set_showFloor_6((bool)1);
		// private bool showPlayArea = true;
		__this->set_showPlayArea_7((bool)1);
		// private bool showTrackedArea = true;
		__this->set_showTrackedArea_8((bool)1);
		// private bool showBoundaryWalls = true;
		__this->set_showBoundaryWalls_9((bool)1);
		// private bool showBoundaryCeiling = true;
		__this->set_showBoundaryCeiling_10((bool)1);
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
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
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.BoundaryVisualizationDemo_<>c::.cctor()
extern "C" IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m76BD9A112F3836812533902BF6DAA3FDC34BAE0F (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__cctor_m76BD9A112F3836812533902BF6DAA3FDC34BAE0F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t5D59C0DC847EC110DE14F60C6F49962A469C1757 * L_0 = (U3CU3Ec_t5D59C0DC847EC110DE14F60C6F49962A469C1757 *)il2cpp_codegen_object_new(U3CU3Ec_t5D59C0DC847EC110DE14F60C6F49962A469C1757_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m7EBB336B87036F2649F2ACB4D281BE2171F78458(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t5D59C0DC847EC110DE14F60C6F49962A469C1757_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t5D59C0DC847EC110DE14F60C6F49962A469C1757_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.BoundaryVisualizationDemo_<>c::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m7EBB336B87036F2649F2ACB4D281BE2171F78458 (U3CU3Ec_t5D59C0DC847EC110DE14F60C6F49962A469C1757 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Examples.Demos.BoundaryVisualizationDemo_<>c::<OnEnable>b__10_0()
extern "C" IL2CPP_METHOD_ATTR bool U3CU3Ec_U3COnEnableU3Eb__10_0_m05B3F51EE3504F3F2DBA5DFF46198781B0229EDB (U3CU3Ec_t5D59C0DC847EC110DE14F60C6F49962A469C1757 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec_U3COnEnableU3Eb__10_0_m05B3F51EE3504F3F2DBA5DFF46198781B0229EDB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// await new WaitUntil(() => MixedRealityToolkit.BoundarySystem != null);
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityToolkit_t638B1380E4669477D1FBF5DD68B45532D1BF0FDC_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = MixedRealityToolkit_get_BoundarySystem_m1C5BF97AB22C43EAC844A6795A19E752BCDF59DC(/*hidden argument*/NULL);
		return (bool)((!(((RuntimeObject*)(RuntimeObject*)L_0) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
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
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.BoundaryVisualizationDemo_<OnEnable>d__10::MoveNext()
extern "C" IL2CPP_METHOD_ATTR void U3COnEnableU3Ed__10_MoveNext_m1F40E12D5574152F9B647533BCF770A9ED9A229C (U3COnEnableU3Ed__10_t25F3A91E4757E23B70B1F0FA0CC2DD63BD2B14AB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3COnEnableU3Ed__10_MoveNext_m1F40E12D5574152F9B647533BCF770A9ED9A229C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	BoundaryVisualizationDemo_tD5E48F3995846BA4A1909932098B3C4C09520AA4 * V_1 = NULL;
	SimpleCoroutineAwaiter_tCF325F4B6190A2598489893345F0EB1D192F3398 * V_2 = NULL;
	Exception_t * V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 * G_B4_0 = NULL;
	Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 * G_B3_0 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		BoundaryVisualizationDemo_tD5E48F3995846BA4A1909932098B3C4C09520AA4 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_0063;
			}
		}

IL_0011:
		{
			// await new WaitUntil(() => MixedRealityToolkit.BoundarySystem != null);
			IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t5D59C0DC847EC110DE14F60C6F49962A469C1757_il2cpp_TypeInfo_var);
			Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 * L_3 = ((U3CU3Ec_t5D59C0DC847EC110DE14F60C6F49962A469C1757_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t5D59C0DC847EC110DE14F60C6F49962A469C1757_il2cpp_TypeInfo_var))->get_U3CU3E9__10_0_1();
			Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 * L_4 = L_3;
			G_B3_0 = L_4;
			if (L_4)
			{
				G_B4_0 = L_4;
				goto IL_0030;
			}
		}

IL_0019:
		{
			IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t5D59C0DC847EC110DE14F60C6F49962A469C1757_il2cpp_TypeInfo_var);
			U3CU3Ec_t5D59C0DC847EC110DE14F60C6F49962A469C1757 * L_5 = ((U3CU3Ec_t5D59C0DC847EC110DE14F60C6F49962A469C1757_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t5D59C0DC847EC110DE14F60C6F49962A469C1757_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
			Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 * L_6 = (Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 *)il2cpp_codegen_object_new(Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1_il2cpp_TypeInfo_var);
			Func_1__ctor_m479BA9DCBE3F496111BD05CC90CB1044C5FFD552(L_6, L_5, (intptr_t)((intptr_t)U3CU3Ec_U3COnEnableU3Eb__10_0_m05B3F51EE3504F3F2DBA5DFF46198781B0229EDB_RuntimeMethod_var), /*hidden argument*/Func_1__ctor_m479BA9DCBE3F496111BD05CC90CB1044C5FFD552_RuntimeMethod_var);
			Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 * L_7 = L_6;
			((U3CU3Ec_t5D59C0DC847EC110DE14F60C6F49962A469C1757_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t5D59C0DC847EC110DE14F60C6F49962A469C1757_il2cpp_TypeInfo_var))->set_U3CU3E9__10_0_1(L_7);
			G_B4_0 = L_7;
		}

IL_0030:
		{
			WaitUntil_t012561515C0E1D3DEA19DB3A05444B020C68E13F * L_8 = (WaitUntil_t012561515C0E1D3DEA19DB3A05444B020C68E13F *)il2cpp_codegen_object_new(WaitUntil_t012561515C0E1D3DEA19DB3A05444B020C68E13F_il2cpp_TypeInfo_var);
			WaitUntil__ctor_mC1A43A512B185C55FBE858F741BEA6D4417105C1(L_8, G_B4_0, /*hidden argument*/NULL);
			SimpleCoroutineAwaiter_tCF325F4B6190A2598489893345F0EB1D192F3398 * L_9 = AwaiterExtensions_GetAwaiter_m376CBBC7E7253D99838FBF6C67E60B30F6C23A53(L_8, /*hidden argument*/NULL);
			V_2 = L_9;
			SimpleCoroutineAwaiter_tCF325F4B6190A2598489893345F0EB1D192F3398 * L_10 = V_2;
			NullCheck(L_10);
			bool L_11 = SimpleCoroutineAwaiter_get_IsCompleted_mBC1F6B4EBF85ABFC39B9AFCB4F5181E7476CFA80(L_10, /*hidden argument*/NULL);
			if (L_11)
			{
				goto IL_007f;
			}
		}

IL_0043:
		{
			int32_t L_12 = 0;
			V_0 = L_12;
			__this->set_U3CU3E1__state_0(L_12);
			SimpleCoroutineAwaiter_tCF325F4B6190A2598489893345F0EB1D192F3398 * L_13 = V_2;
			__this->set_U3CU3Eu__1_3(L_13);
			AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF * L_14 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncVoidMethodBuilder_AwaitOnCompleted_TisSimpleCoroutineAwaiter_tCF325F4B6190A2598489893345F0EB1D192F3398_TisU3COnEnableU3Ed__10_t25F3A91E4757E23B70B1F0FA0CC2DD63BD2B14AB_m21439A5474E724904E3715D2F60658BEB7133F3C((AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF *)L_14, (SimpleCoroutineAwaiter_tCF325F4B6190A2598489893345F0EB1D192F3398 **)(&V_2), (U3COnEnableU3Ed__10_t25F3A91E4757E23B70B1F0FA0CC2DD63BD2B14AB *)__this, /*hidden argument*/AsyncVoidMethodBuilder_AwaitOnCompleted_TisSimpleCoroutineAwaiter_tCF325F4B6190A2598489893345F0EB1D192F3398_TisU3COnEnableU3Ed__10_t25F3A91E4757E23B70B1F0FA0CC2DD63BD2B14AB_m21439A5474E724904E3715D2F60658BEB7133F3C_RuntimeMethod_var);
			goto IL_00c1;
		}

IL_0063:
		{
			RuntimeObject * L_15 = __this->get_U3CU3Eu__1_3();
			V_2 = ((SimpleCoroutineAwaiter_tCF325F4B6190A2598489893345F0EB1D192F3398 *)CastclassClass((RuntimeObject*)L_15, SimpleCoroutineAwaiter_tCF325F4B6190A2598489893345F0EB1D192F3398_il2cpp_TypeInfo_var));
			__this->set_U3CU3Eu__1_3(NULL);
			int32_t L_16 = (-1);
			V_0 = L_16;
			__this->set_U3CU3E1__state_0(L_16);
		}

IL_007f:
		{
			SimpleCoroutineAwaiter_tCF325F4B6190A2598489893345F0EB1D192F3398 * L_17 = V_2;
			NullCheck(L_17);
			SimpleCoroutineAwaiter_GetResult_mE8195C2E665E76BAA6662741177BA4CC4E3A1F54(L_17, /*hidden argument*/NULL);
			// MixedRealityToolkit.BoundarySystem.Register(gameObject);
			IL2CPP_RUNTIME_CLASS_INIT(MixedRealityToolkit_t638B1380E4669477D1FBF5DD68B45532D1BF0FDC_il2cpp_TypeInfo_var);
			RuntimeObject* L_18 = MixedRealityToolkit_get_BoundarySystem_m1C5BF97AB22C43EAC844A6795A19E752BCDF59DC(/*hidden argument*/NULL);
			BoundaryVisualizationDemo_tD5E48F3995846BA4A1909932098B3C4C09520AA4 * L_19 = V_1;
			NullCheck(L_19);
			GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_20 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_19, /*hidden argument*/NULL);
			NullCheck(L_18);
			InterfaceActionInvoker1< GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * >::Invoke(2 /* System.Void Microsoft.MixedReality.Toolkit.Core.Interfaces.Events.IMixedRealityEventSystem::Register(UnityEngine.GameObject) */, IMixedRealityEventSystem_t2FA76B59455C041D6529E6EC75DD8E29A9284B8D_il2cpp_TypeInfo_var, L_18, L_20);
			goto IL_00ae;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0097;
		throw e;
	}

CATCH_0097:
	{ // begin catch(System.Exception)
		V_3 = ((Exception_t *)__exception_local);
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF * L_21 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_22 = V_3;
		AsyncVoidMethodBuilder_SetException_mA7D834CA1ECA91D65074D7608AADA2E2A9533136((AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF *)L_21, L_22, /*hidden argument*/NULL);
		goto IL_00c1;
	} // end catch (depth: 1)

IL_00ae:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF * L_23 = __this->get_address_of_U3CU3Et__builder_1();
		AsyncVoidMethodBuilder_SetResult_mFF6028CDDC809252656354DC1714B4EB5E40A625((AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF *)L_23, /*hidden argument*/NULL);
	}

IL_00c1:
	{
		return;
	}
}
extern "C"  void U3COnEnableU3Ed__10_MoveNext_m1F40E12D5574152F9B647533BCF770A9ED9A229C_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	U3COnEnableU3Ed__10_t25F3A91E4757E23B70B1F0FA0CC2DD63BD2B14AB * _thisAdjusted = reinterpret_cast<U3COnEnableU3Ed__10_t25F3A91E4757E23B70B1F0FA0CC2DD63BD2B14AB *>(__this + 1);
	U3COnEnableU3Ed__10_MoveNext_m1F40E12D5574152F9B647533BCF770A9ED9A229C(_thisAdjusted, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.BoundaryVisualizationDemo_<OnEnable>d__10::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern "C" IL2CPP_METHOD_ATTR void U3COnEnableU3Ed__10_SetStateMachine_m04823BC11C1BC774DEE13014582B0B940030E1F2 (U3COnEnableU3Ed__10_t25F3A91E4757E23B70B1F0FA0CC2DD63BD2B14AB * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	{
		AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncVoidMethodBuilder_SetStateMachine_mF3AEE42ED8474F11A5521D94271E884CF99E65B3((AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF *)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
extern "C"  void U3COnEnableU3Ed__10_SetStateMachine_m04823BC11C1BC774DEE13014582B0B940030E1F2_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	U3COnEnableU3Ed__10_t25F3A91E4757E23B70B1F0FA0CC2DD63BD2B14AB * _thisAdjusted = reinterpret_cast<U3COnEnableU3Ed__10_t25F3A91E4757E23B70B1F0FA0CC2DD63BD2B14AB *>(__this + 1);
	U3COnEnableU3Ed__10_SetStateMachine_m04823BC11C1BC774DEE13014582B0B940030E1F2(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.DemoSpatialMeshHandler::OnEnable()
extern "C" IL2CPP_METHOD_ATTR void DemoSpatialMeshHandler_OnEnable_m9C1F9A6E9DE60C365CA39C286400700B4CD5C325 (DemoSpatialMeshHandler_t5EA2499E558DC2033B27F8CAD6B3CB5B2C0B2A7D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DemoSpatialMeshHandler_OnEnable_m9C1F9A6E9DE60C365CA39C286400700B4CD5C325_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3COnEnableU3Ed__1_t132401ED97C6F847289963908CFA73F19D2A4544  V_0;
	memset(&V_0, 0, sizeof(V_0));
	AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		(&V_0)->set_U3CU3E4__this_2(__this);
		AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF  L_0 = AsyncVoidMethodBuilder_Create_m2EF884A75C3C230F0E6A63B1E23DC82F3B159130(/*hidden argument*/NULL);
		(&V_0)->set_U3CU3Et__builder_1(L_0);
		(&V_0)->set_U3CU3E1__state_0((-1));
		U3COnEnableU3Ed__1_t132401ED97C6F847289963908CFA73F19D2A4544  L_1 = V_0;
		AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF  L_2 = L_1.get_U3CU3Et__builder_1();
		V_1 = L_2;
		AsyncVoidMethodBuilder_Start_TisU3COnEnableU3Ed__1_t132401ED97C6F847289963908CFA73F19D2A4544_m5E7AEF701DB7ED147E1EE5763D4C3C789D96B73A((AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF *)(&V_1), (U3COnEnableU3Ed__1_t132401ED97C6F847289963908CFA73F19D2A4544 *)(&V_0), /*hidden argument*/AsyncVoidMethodBuilder_Start_TisU3COnEnableU3Ed__1_t132401ED97C6F847289963908CFA73F19D2A4544_m5E7AEF701DB7ED147E1EE5763D4C3C789D96B73A_RuntimeMethod_var);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.DemoSpatialMeshHandler::OnDisable()
extern "C" IL2CPP_METHOD_ATTR void DemoSpatialMeshHandler_OnDisable_m7462CFEDA74845AEFCA58321CE333504823C2F0A (DemoSpatialMeshHandler_t5EA2499E558DC2033B27F8CAD6B3CB5B2C0B2A7D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DemoSpatialMeshHandler_OnDisable_m7462CFEDA74845AEFCA58321CE333504823C2F0A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		// MixedRealityToolkit.SpatialAwarenessSystem?.Unregister(gameObject);
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityToolkit_t638B1380E4669477D1FBF5DD68B45532D1BF0FDC_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = MixedRealityToolkit_get_SpatialAwarenessSystem_m79DCC20B74437DF1107D3BE177B32086C046D1E6(/*hidden argument*/NULL);
		RuntimeObject* L_1 = L_0;
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
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_2 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(__this, /*hidden argument*/NULL);
		NullCheck(G_B2_0);
		InterfaceActionInvoker1< GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * >::Invoke(3 /* System.Void Microsoft.MixedReality.Toolkit.Core.Interfaces.Events.IMixedRealityEventSystem::Unregister(UnityEngine.GameObject) */, IMixedRealityEventSystem_t2FA76B59455C041D6529E6EC75DD8E29A9284B8D_il2cpp_TypeInfo_var, G_B2_0, L_2);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.DemoSpatialMeshHandler::OnObservationAdded(Microsoft.MixedReality.Toolkit.Core.EventDatum.SpatialAwarenessSystem.MixedRealitySpatialAwarenessEventData`1<Microsoft.MixedReality.Toolkit.Core.Definitions.SpatialAwarenessSystem.SpatialAwarenessMeshObject>)
extern "C" IL2CPP_METHOD_ATTR void DemoSpatialMeshHandler_OnObservationAdded_m0788772A2EF4606E92A493C566FB3C0B3E850DB1 (DemoSpatialMeshHandler_t5EA2499E558DC2033B27F8CAD6B3CB5B2C0B2A7D * __this, MixedRealitySpatialAwarenessEventData_1_t063FEEA002DF8A7DF94374B546118BAE6D4D32BD * ___eventData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DemoSpatialMeshHandler_OnObservationAdded_m0788772A2EF4606E92A493C566FB3C0B3E850DB1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!meshUpdateData.ContainsKey(eventData.Id))
		Dictionary_2_tEBA39BE6427C28D1FC2365D442B32E6BE63BE02B * L_0 = __this->get_meshUpdateData_4();
		MixedRealitySpatialAwarenessEventData_1_t063FEEA002DF8A7DF94374B546118BAE6D4D32BD * L_1 = ___eventData0;
		NullCheck(L_1);
		int32_t L_2 = MixedRealitySpatialAwarenessEventData_get_Id_mE78C3060E98636AA1DB879A8025D078A46507D94(L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_3 = Dictionary_2_ContainsKey_m6DB80E33ECB9F99824545A77760D313CCF6DD8B9(L_0, L_2, /*hidden argument*/Dictionary_2_ContainsKey_m6DB80E33ECB9F99824545A77760D313CCF6DD8B9_RuntimeMethod_var);
		if (L_3)
		{
			goto IL_003f;
		}
	}
	{
		// Debug.Log($"Tracking mesh {eventData.Id}");
		MixedRealitySpatialAwarenessEventData_1_t063FEEA002DF8A7DF94374B546118BAE6D4D32BD * L_4 = ___eventData0;
		NullCheck(L_4);
		int32_t L_5 = MixedRealitySpatialAwarenessEventData_get_Id_mE78C3060E98636AA1DB879A8025D078A46507D94(L_4, /*hidden argument*/NULL);
		int32_t L_6 = L_5;
		RuntimeObject * L_7 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_6);
		String_t* L_8 = String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA(_stringLiteral198BCEC94D4602889E6BE9EA255235FE63E9232E, L_7, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(L_8, /*hidden argument*/NULL);
		// meshUpdateData.Add(eventData.Id, 0);
		Dictionary_2_tEBA39BE6427C28D1FC2365D442B32E6BE63BE02B * L_9 = __this->get_meshUpdateData_4();
		MixedRealitySpatialAwarenessEventData_1_t063FEEA002DF8A7DF94374B546118BAE6D4D32BD * L_10 = ___eventData0;
		NullCheck(L_10);
		int32_t L_11 = MixedRealitySpatialAwarenessEventData_get_Id_mE78C3060E98636AA1DB879A8025D078A46507D94(L_10, /*hidden argument*/NULL);
		NullCheck(L_9);
		Dictionary_2_Add_mA325F23C42F93F9A111F6192EC1CEC7D8E481599(L_9, L_11, 0, /*hidden argument*/Dictionary_2_Add_mA325F23C42F93F9A111F6192EC1CEC7D8E481599_RuntimeMethod_var);
	}

IL_003f:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.DemoSpatialMeshHandler::OnObservationUpdated(Microsoft.MixedReality.Toolkit.Core.EventDatum.SpatialAwarenessSystem.MixedRealitySpatialAwarenessEventData`1<Microsoft.MixedReality.Toolkit.Core.Definitions.SpatialAwarenessSystem.SpatialAwarenessMeshObject>)
extern "C" IL2CPP_METHOD_ATTR void DemoSpatialMeshHandler_OnObservationUpdated_m7A655CE30DB0EEDAC65B347D96385955B806A49D (DemoSpatialMeshHandler_t5EA2499E558DC2033B27F8CAD6B3CB5B2C0B2A7D * __this, MixedRealitySpatialAwarenessEventData_1_t063FEEA002DF8A7DF94374B546118BAE6D4D32BD * ___eventData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DemoSpatialMeshHandler_OnObservationUpdated_m7A655CE30DB0EEDAC65B347D96385955B806A49D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		// uint updateCount = 0;
		V_0 = 0;
		// if (meshUpdateData.TryGetValue(eventData.Id, out updateCount))
		Dictionary_2_tEBA39BE6427C28D1FC2365D442B32E6BE63BE02B * L_0 = __this->get_meshUpdateData_4();
		MixedRealitySpatialAwarenessEventData_1_t063FEEA002DF8A7DF94374B546118BAE6D4D32BD * L_1 = ___eventData0;
		NullCheck(L_1);
		int32_t L_2 = MixedRealitySpatialAwarenessEventData_get_Id_mE78C3060E98636AA1DB879A8025D078A46507D94(L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_3 = Dictionary_2_TryGetValue_m87B04E07308BDD9404C3E7C1976D52B69517C6C8(L_0, L_2, (uint32_t*)(&V_0), /*hidden argument*/Dictionary_2_TryGetValue_m87B04E07308BDD9404C3E7C1976D52B69517C6C8_RuntimeMethod_var);
		if (!L_3)
		{
			goto IL_004d;
		}
	}
	{
		// meshUpdateData[eventData.Id] = ++updateCount;
		Dictionary_2_tEBA39BE6427C28D1FC2365D442B32E6BE63BE02B * L_4 = __this->get_meshUpdateData_4();
		MixedRealitySpatialAwarenessEventData_1_t063FEEA002DF8A7DF94374B546118BAE6D4D32BD * L_5 = ___eventData0;
		NullCheck(L_5);
		int32_t L_6 = MixedRealitySpatialAwarenessEventData_get_Id_mE78C3060E98636AA1DB879A8025D078A46507D94(L_5, /*hidden argument*/NULL);
		uint32_t L_7 = V_0;
		int32_t L_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
		V_0 = L_8;
		NullCheck(L_4);
		Dictionary_2_set_Item_mAC6062FF357307AFEB797A602E8380AEF272F442(L_4, L_6, L_8, /*hidden argument*/Dictionary_2_set_Item_mAC6062FF357307AFEB797A602E8380AEF272F442_RuntimeMethod_var);
		// Debug.Log($"Mesh {eventData.Id} has been updated {updateCount} times.");
		MixedRealitySpatialAwarenessEventData_1_t063FEEA002DF8A7DF94374B546118BAE6D4D32BD * L_9 = ___eventData0;
		NullCheck(L_9);
		int32_t L_10 = MixedRealitySpatialAwarenessEventData_get_Id_mE78C3060E98636AA1DB879A8025D078A46507D94(L_9, /*hidden argument*/NULL);
		int32_t L_11 = L_10;
		RuntimeObject * L_12 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_11);
		uint32_t L_13 = V_0;
		uint32_t L_14 = L_13;
		RuntimeObject * L_15 = Box(UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_il2cpp_TypeInfo_var, &L_14);
		String_t* L_16 = String_Format_m19325298DBC61AAC016C16F7B3CF97A8A3DEA34A(_stringLiteral6EF6EE07DC9D5690EBF69A0BDA7FD2041B5B51D2, L_12, L_15, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(L_16, /*hidden argument*/NULL);
	}

IL_004d:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.DemoSpatialMeshHandler::OnObservationRemoved(Microsoft.MixedReality.Toolkit.Core.EventDatum.SpatialAwarenessSystem.MixedRealitySpatialAwarenessEventData`1<Microsoft.MixedReality.Toolkit.Core.Definitions.SpatialAwarenessSystem.SpatialAwarenessMeshObject>)
extern "C" IL2CPP_METHOD_ATTR void DemoSpatialMeshHandler_OnObservationRemoved_mE72C6FAD78FE9C06052F9E0C0C1E0BDCF4295B83 (DemoSpatialMeshHandler_t5EA2499E558DC2033B27F8CAD6B3CB5B2C0B2A7D * __this, MixedRealitySpatialAwarenessEventData_1_t063FEEA002DF8A7DF94374B546118BAE6D4D32BD * ___eventData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DemoSpatialMeshHandler_OnObservationRemoved_mE72C6FAD78FE9C06052F9E0C0C1E0BDCF4295B83_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (meshUpdateData.ContainsKey(eventData.Id))
		Dictionary_2_tEBA39BE6427C28D1FC2365D442B32E6BE63BE02B * L_0 = __this->get_meshUpdateData_4();
		MixedRealitySpatialAwarenessEventData_1_t063FEEA002DF8A7DF94374B546118BAE6D4D32BD * L_1 = ___eventData0;
		NullCheck(L_1);
		int32_t L_2 = MixedRealitySpatialAwarenessEventData_get_Id_mE78C3060E98636AA1DB879A8025D078A46507D94(L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_3 = Dictionary_2_ContainsKey_m6DB80E33ECB9F99824545A77760D313CCF6DD8B9(L_0, L_2, /*hidden argument*/Dictionary_2_ContainsKey_m6DB80E33ECB9F99824545A77760D313CCF6DD8B9_RuntimeMethod_var);
		if (!L_3)
		{
			goto IL_003f;
		}
	}
	{
		// Debug.Log($"No longer tracking mesh {eventData.Id}.");
		MixedRealitySpatialAwarenessEventData_1_t063FEEA002DF8A7DF94374B546118BAE6D4D32BD * L_4 = ___eventData0;
		NullCheck(L_4);
		int32_t L_5 = MixedRealitySpatialAwarenessEventData_get_Id_mE78C3060E98636AA1DB879A8025D078A46507D94(L_4, /*hidden argument*/NULL);
		int32_t L_6 = L_5;
		RuntimeObject * L_7 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_6);
		String_t* L_8 = String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA(_stringLiteral950AF6817FC43E2E7F84DF55C56271A185CC0031, L_7, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(L_8, /*hidden argument*/NULL);
		// meshUpdateData.Remove(eventData.Id);
		Dictionary_2_tEBA39BE6427C28D1FC2365D442B32E6BE63BE02B * L_9 = __this->get_meshUpdateData_4();
		MixedRealitySpatialAwarenessEventData_1_t063FEEA002DF8A7DF94374B546118BAE6D4D32BD * L_10 = ___eventData0;
		NullCheck(L_10);
		int32_t L_11 = MixedRealitySpatialAwarenessEventData_get_Id_mE78C3060E98636AA1DB879A8025D078A46507D94(L_10, /*hidden argument*/NULL);
		NullCheck(L_9);
		Dictionary_2_Remove_m0C628D9C267769495DA8B5F019F3FA7383D71E79(L_9, L_11, /*hidden argument*/Dictionary_2_Remove_m0C628D9C267769495DA8B5F019F3FA7383D71E79_RuntimeMethod_var);
	}

IL_003f:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.DemoSpatialMeshHandler::.ctor()
extern "C" IL2CPP_METHOD_ATTR void DemoSpatialMeshHandler__ctor_m128FF5A42EB7BEF2A1D463B5E6179FF7E8D0EAB4 (DemoSpatialMeshHandler_t5EA2499E558DC2033B27F8CAD6B3CB5B2C0B2A7D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DemoSpatialMeshHandler__ctor_m128FF5A42EB7BEF2A1D463B5E6179FF7E8D0EAB4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private Dictionary<int, uint> meshUpdateData = new Dictionary<int, uint>();
		Dictionary_2_tEBA39BE6427C28D1FC2365D442B32E6BE63BE02B * L_0 = (Dictionary_2_tEBA39BE6427C28D1FC2365D442B32E6BE63BE02B *)il2cpp_codegen_object_new(Dictionary_2_tEBA39BE6427C28D1FC2365D442B32E6BE63BE02B_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m936D2F2C58E41A0BBA2C4977D82339392359549B(L_0, /*hidden argument*/Dictionary_2__ctor_m936D2F2C58E41A0BBA2C4977D82339392359549B_RuntimeMethod_var);
		__this->set_meshUpdateData_4(L_0);
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
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
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.DemoSpatialMeshHandler_<>c::.cctor()
extern "C" IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m667695B05CD783BA72264F068BB0F3D1B459DF86 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__cctor_m667695B05CD783BA72264F068BB0F3D1B459DF86_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t80516076D9F25352BFE485243B172C0ECF0805F3 * L_0 = (U3CU3Ec_t80516076D9F25352BFE485243B172C0ECF0805F3 *)il2cpp_codegen_object_new(U3CU3Ec_t80516076D9F25352BFE485243B172C0ECF0805F3_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m30CB22E1C53B83C618B3831BAF4E4F49D7E86681(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t80516076D9F25352BFE485243B172C0ECF0805F3_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t80516076D9F25352BFE485243B172C0ECF0805F3_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.DemoSpatialMeshHandler_<>c::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m30CB22E1C53B83C618B3831BAF4E4F49D7E86681 (U3CU3Ec_t80516076D9F25352BFE485243B172C0ECF0805F3 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Examples.Demos.DemoSpatialMeshHandler_<>c::<OnEnable>b__1_0()
extern "C" IL2CPP_METHOD_ATTR bool U3CU3Ec_U3COnEnableU3Eb__1_0_m0DAD51E2B496591F538356D28B851DB9A0B24B40 (U3CU3Ec_t80516076D9F25352BFE485243B172C0ECF0805F3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec_U3COnEnableU3Eb__1_0_m0DAD51E2B496591F538356D28B851DB9A0B24B40_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// await new WaitUntil(() => MixedRealityToolkit.SpatialAwarenessSystem != null);
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityToolkit_t638B1380E4669477D1FBF5DD68B45532D1BF0FDC_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = MixedRealityToolkit_get_SpatialAwarenessSystem_m79DCC20B74437DF1107D3BE177B32086C046D1E6(/*hidden argument*/NULL);
		return (bool)((!(((RuntimeObject*)(RuntimeObject*)L_0) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
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
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.DemoSpatialMeshHandler_<OnEnable>d__1::MoveNext()
extern "C" IL2CPP_METHOD_ATTR void U3COnEnableU3Ed__1_MoveNext_mC5F58C5326EF7CE7BE264CC67D7166C0505E0284 (U3COnEnableU3Ed__1_t132401ED97C6F847289963908CFA73F19D2A4544 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3COnEnableU3Ed__1_MoveNext_mC5F58C5326EF7CE7BE264CC67D7166C0505E0284_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	DemoSpatialMeshHandler_t5EA2499E558DC2033B27F8CAD6B3CB5B2C0B2A7D * V_1 = NULL;
	SimpleCoroutineAwaiter_tCF325F4B6190A2598489893345F0EB1D192F3398 * V_2 = NULL;
	Exception_t * V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 * G_B4_0 = NULL;
	Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 * G_B3_0 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		DemoSpatialMeshHandler_t5EA2499E558DC2033B27F8CAD6B3CB5B2C0B2A7D * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_0063;
			}
		}

IL_0011:
		{
			// await new WaitUntil(() => MixedRealityToolkit.SpatialAwarenessSystem != null);
			IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t80516076D9F25352BFE485243B172C0ECF0805F3_il2cpp_TypeInfo_var);
			Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 * L_3 = ((U3CU3Ec_t80516076D9F25352BFE485243B172C0ECF0805F3_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t80516076D9F25352BFE485243B172C0ECF0805F3_il2cpp_TypeInfo_var))->get_U3CU3E9__1_0_1();
			Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 * L_4 = L_3;
			G_B3_0 = L_4;
			if (L_4)
			{
				G_B4_0 = L_4;
				goto IL_0030;
			}
		}

IL_0019:
		{
			IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t80516076D9F25352BFE485243B172C0ECF0805F3_il2cpp_TypeInfo_var);
			U3CU3Ec_t80516076D9F25352BFE485243B172C0ECF0805F3 * L_5 = ((U3CU3Ec_t80516076D9F25352BFE485243B172C0ECF0805F3_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t80516076D9F25352BFE485243B172C0ECF0805F3_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
			Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 * L_6 = (Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 *)il2cpp_codegen_object_new(Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1_il2cpp_TypeInfo_var);
			Func_1__ctor_m479BA9DCBE3F496111BD05CC90CB1044C5FFD552(L_6, L_5, (intptr_t)((intptr_t)U3CU3Ec_U3COnEnableU3Eb__1_0_m0DAD51E2B496591F538356D28B851DB9A0B24B40_RuntimeMethod_var), /*hidden argument*/Func_1__ctor_m479BA9DCBE3F496111BD05CC90CB1044C5FFD552_RuntimeMethod_var);
			Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 * L_7 = L_6;
			((U3CU3Ec_t80516076D9F25352BFE485243B172C0ECF0805F3_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t80516076D9F25352BFE485243B172C0ECF0805F3_il2cpp_TypeInfo_var))->set_U3CU3E9__1_0_1(L_7);
			G_B4_0 = L_7;
		}

IL_0030:
		{
			WaitUntil_t012561515C0E1D3DEA19DB3A05444B020C68E13F * L_8 = (WaitUntil_t012561515C0E1D3DEA19DB3A05444B020C68E13F *)il2cpp_codegen_object_new(WaitUntil_t012561515C0E1D3DEA19DB3A05444B020C68E13F_il2cpp_TypeInfo_var);
			WaitUntil__ctor_mC1A43A512B185C55FBE858F741BEA6D4417105C1(L_8, G_B4_0, /*hidden argument*/NULL);
			SimpleCoroutineAwaiter_tCF325F4B6190A2598489893345F0EB1D192F3398 * L_9 = AwaiterExtensions_GetAwaiter_m376CBBC7E7253D99838FBF6C67E60B30F6C23A53(L_8, /*hidden argument*/NULL);
			V_2 = L_9;
			SimpleCoroutineAwaiter_tCF325F4B6190A2598489893345F0EB1D192F3398 * L_10 = V_2;
			NullCheck(L_10);
			bool L_11 = SimpleCoroutineAwaiter_get_IsCompleted_mBC1F6B4EBF85ABFC39B9AFCB4F5181E7476CFA80(L_10, /*hidden argument*/NULL);
			if (L_11)
			{
				goto IL_007f;
			}
		}

IL_0043:
		{
			int32_t L_12 = 0;
			V_0 = L_12;
			__this->set_U3CU3E1__state_0(L_12);
			SimpleCoroutineAwaiter_tCF325F4B6190A2598489893345F0EB1D192F3398 * L_13 = V_2;
			__this->set_U3CU3Eu__1_3(L_13);
			AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF * L_14 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncVoidMethodBuilder_AwaitOnCompleted_TisSimpleCoroutineAwaiter_tCF325F4B6190A2598489893345F0EB1D192F3398_TisU3COnEnableU3Ed__1_t132401ED97C6F847289963908CFA73F19D2A4544_mE16E8B570144545EF138210017BF9781AE6C2BF2((AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF *)L_14, (SimpleCoroutineAwaiter_tCF325F4B6190A2598489893345F0EB1D192F3398 **)(&V_2), (U3COnEnableU3Ed__1_t132401ED97C6F847289963908CFA73F19D2A4544 *)__this, /*hidden argument*/AsyncVoidMethodBuilder_AwaitOnCompleted_TisSimpleCoroutineAwaiter_tCF325F4B6190A2598489893345F0EB1D192F3398_TisU3COnEnableU3Ed__1_t132401ED97C6F847289963908CFA73F19D2A4544_mE16E8B570144545EF138210017BF9781AE6C2BF2_RuntimeMethod_var);
			goto IL_00c1;
		}

IL_0063:
		{
			RuntimeObject * L_15 = __this->get_U3CU3Eu__1_3();
			V_2 = ((SimpleCoroutineAwaiter_tCF325F4B6190A2598489893345F0EB1D192F3398 *)CastclassClass((RuntimeObject*)L_15, SimpleCoroutineAwaiter_tCF325F4B6190A2598489893345F0EB1D192F3398_il2cpp_TypeInfo_var));
			__this->set_U3CU3Eu__1_3(NULL);
			int32_t L_16 = (-1);
			V_0 = L_16;
			__this->set_U3CU3E1__state_0(L_16);
		}

IL_007f:
		{
			SimpleCoroutineAwaiter_tCF325F4B6190A2598489893345F0EB1D192F3398 * L_17 = V_2;
			NullCheck(L_17);
			SimpleCoroutineAwaiter_GetResult_mE8195C2E665E76BAA6662741177BA4CC4E3A1F54(L_17, /*hidden argument*/NULL);
			// MixedRealityToolkit.SpatialAwarenessSystem.Register(gameObject);
			IL2CPP_RUNTIME_CLASS_INIT(MixedRealityToolkit_t638B1380E4669477D1FBF5DD68B45532D1BF0FDC_il2cpp_TypeInfo_var);
			RuntimeObject* L_18 = MixedRealityToolkit_get_SpatialAwarenessSystem_m79DCC20B74437DF1107D3BE177B32086C046D1E6(/*hidden argument*/NULL);
			DemoSpatialMeshHandler_t5EA2499E558DC2033B27F8CAD6B3CB5B2C0B2A7D * L_19 = V_1;
			NullCheck(L_19);
			GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_20 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_19, /*hidden argument*/NULL);
			NullCheck(L_18);
			InterfaceActionInvoker1< GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * >::Invoke(2 /* System.Void Microsoft.MixedReality.Toolkit.Core.Interfaces.Events.IMixedRealityEventSystem::Register(UnityEngine.GameObject) */, IMixedRealityEventSystem_t2FA76B59455C041D6529E6EC75DD8E29A9284B8D_il2cpp_TypeInfo_var, L_18, L_20);
			goto IL_00ae;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0097;
		throw e;
	}

CATCH_0097:
	{ // begin catch(System.Exception)
		V_3 = ((Exception_t *)__exception_local);
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF * L_21 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_22 = V_3;
		AsyncVoidMethodBuilder_SetException_mA7D834CA1ECA91D65074D7608AADA2E2A9533136((AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF *)L_21, L_22, /*hidden argument*/NULL);
		goto IL_00c1;
	} // end catch (depth: 1)

IL_00ae:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF * L_23 = __this->get_address_of_U3CU3Et__builder_1();
		AsyncVoidMethodBuilder_SetResult_mFF6028CDDC809252656354DC1714B4EB5E40A625((AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF *)L_23, /*hidden argument*/NULL);
	}

IL_00c1:
	{
		return;
	}
}
extern "C"  void U3COnEnableU3Ed__1_MoveNext_mC5F58C5326EF7CE7BE264CC67D7166C0505E0284_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	U3COnEnableU3Ed__1_t132401ED97C6F847289963908CFA73F19D2A4544 * _thisAdjusted = reinterpret_cast<U3COnEnableU3Ed__1_t132401ED97C6F847289963908CFA73F19D2A4544 *>(__this + 1);
	U3COnEnableU3Ed__1_MoveNext_mC5F58C5326EF7CE7BE264CC67D7166C0505E0284(_thisAdjusted, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.DemoSpatialMeshHandler_<OnEnable>d__1::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern "C" IL2CPP_METHOD_ATTR void U3COnEnableU3Ed__1_SetStateMachine_m25F00DAD4524B96422F8DB4CD81FEA9E6FF822F7 (U3COnEnableU3Ed__1_t132401ED97C6F847289963908CFA73F19D2A4544 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	{
		AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncVoidMethodBuilder_SetStateMachine_mF3AEE42ED8474F11A5521D94271E884CF99E65B3((AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF *)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
extern "C"  void U3COnEnableU3Ed__1_SetStateMachine_m25F00DAD4524B96422F8DB4CD81FEA9E6FF822F7_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	U3COnEnableU3Ed__1_t132401ED97C6F847289963908CFA73F19D2A4544 * _thisAdjusted = reinterpret_cast<U3COnEnableU3Ed__1_t132401ED97C6F847289963908CFA73F19D2A4544 *>(__this + 1);
	U3COnEnableU3Ed__1_SetStateMachine_m25F00DAD4524B96422F8DB4CD81FEA9E6FF822F7(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.DiagnosticsDemoControls::Start()
extern "C" IL2CPP_METHOD_ATTR void DiagnosticsDemoControls_Start_m2EE05F8C10DC846C6F63B2BE3D8B7D8EDA5E5492 (DiagnosticsDemoControls_t46271501D3A290B12B2BA9042F9C64D62582E527 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DiagnosticsDemoControls_Start_m2EE05F8C10DC846C6F63B2BE3D8B7D8EDA5E5492_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CStartU3Ed__0_t7C225461B16887823D2847728502C5D852E3950C  V_0;
	memset(&V_0, 0, sizeof(V_0));
	AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF  L_0 = AsyncVoidMethodBuilder_Create_m2EF884A75C3C230F0E6A63B1E23DC82F3B159130(/*hidden argument*/NULL);
		(&V_0)->set_U3CU3Et__builder_1(L_0);
		(&V_0)->set_U3CU3E1__state_0((-1));
		U3CStartU3Ed__0_t7C225461B16887823D2847728502C5D852E3950C  L_1 = V_0;
		AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF  L_2 = L_1.get_U3CU3Et__builder_1();
		V_1 = L_2;
		AsyncVoidMethodBuilder_Start_TisU3CStartU3Ed__0_t7C225461B16887823D2847728502C5D852E3950C_m1DB9609425FA088A513C10A9FD93070D2FEBE2CD((AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF *)(&V_1), (U3CStartU3Ed__0_t7C225461B16887823D2847728502C5D852E3950C *)(&V_0), /*hidden argument*/AsyncVoidMethodBuilder_Start_TisU3CStartU3Ed__0_t7C225461B16887823D2847728502C5D852E3950C_m1DB9609425FA088A513C10A9FD93070D2FEBE2CD_RuntimeMethod_var);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.DiagnosticsDemoControls::OnToggleDiagnostics()
extern "C" IL2CPP_METHOD_ATTR void DiagnosticsDemoControls_OnToggleDiagnostics_m055C713D11E3DFD3463E235CFA7E91204FBC7F9E (DiagnosticsDemoControls_t46271501D3A290B12B2BA9042F9C64D62582E527 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DiagnosticsDemoControls_OnToggleDiagnostics_m055C713D11E3DFD3463E235CFA7E91204FBC7F9E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// MixedRealityToolkit.DiagnosticsSystem.ShowDiagnostics = !MixedRealityToolkit.DiagnosticsSystem.ShowDiagnostics;
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityToolkit_t638B1380E4669477D1FBF5DD68B45532D1BF0FDC_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = MixedRealityToolkit_get_DiagnosticsSystem_mD807CB6D9AF3EBB382C6D613FB7CB7EC6F892B1D(/*hidden argument*/NULL);
		RuntimeObject* L_1 = MixedRealityToolkit_get_DiagnosticsSystem_mD807CB6D9AF3EBB382C6D613FB7CB7EC6F892B1D(/*hidden argument*/NULL);
		NullCheck(L_1);
		bool L_2 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean Microsoft.MixedReality.Toolkit.Core.Interfaces.Diagnostics.IMixedRealityDiagnosticsSystem::get_ShowDiagnostics() */, IMixedRealityDiagnosticsSystem_tEBA5742EE17D2675DF7640DA5C85A1776C4BDFA4_il2cpp_TypeInfo_var, L_1);
		NullCheck(L_0);
		InterfaceActionInvoker1< bool >::Invoke(1 /* System.Void Microsoft.MixedReality.Toolkit.Core.Interfaces.Diagnostics.IMixedRealityDiagnosticsSystem::set_ShowDiagnostics(System.Boolean) */, IMixedRealityDiagnosticsSystem_tEBA5742EE17D2675DF7640DA5C85A1776C4BDFA4_il2cpp_TypeInfo_var, L_0, (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0));
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.DiagnosticsDemoControls::OnToggleProfiler()
extern "C" IL2CPP_METHOD_ATTR void DiagnosticsDemoControls_OnToggleProfiler_m2AE7FC432220E62506C6F0BC02C5243AC0E46020 (DiagnosticsDemoControls_t46271501D3A290B12B2BA9042F9C64D62582E527 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DiagnosticsDemoControls_OnToggleProfiler_m2AE7FC432220E62506C6F0BC02C5243AC0E46020_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// MixedRealityToolkit.DiagnosticsSystem.ShowProfiler = !MixedRealityToolkit.DiagnosticsSystem.ShowProfiler;
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityToolkit_t638B1380E4669477D1FBF5DD68B45532D1BF0FDC_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = MixedRealityToolkit_get_DiagnosticsSystem_mD807CB6D9AF3EBB382C6D613FB7CB7EC6F892B1D(/*hidden argument*/NULL);
		RuntimeObject* L_1 = MixedRealityToolkit_get_DiagnosticsSystem_mD807CB6D9AF3EBB382C6D613FB7CB7EC6F892B1D(/*hidden argument*/NULL);
		NullCheck(L_1);
		bool L_2 = InterfaceFuncInvoker0< bool >::Invoke(2 /* System.Boolean Microsoft.MixedReality.Toolkit.Core.Interfaces.Diagnostics.IMixedRealityDiagnosticsSystem::get_ShowProfiler() */, IMixedRealityDiagnosticsSystem_tEBA5742EE17D2675DF7640DA5C85A1776C4BDFA4_il2cpp_TypeInfo_var, L_1);
		NullCheck(L_0);
		InterfaceActionInvoker1< bool >::Invoke(3 /* System.Void Microsoft.MixedReality.Toolkit.Core.Interfaces.Diagnostics.IMixedRealityDiagnosticsSystem::set_ShowProfiler(System.Boolean) */, IMixedRealityDiagnosticsSystem_tEBA5742EE17D2675DF7640DA5C85A1776C4BDFA4_il2cpp_TypeInfo_var, L_0, (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0));
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.DiagnosticsDemoControls::.ctor()
extern "C" IL2CPP_METHOD_ATTR void DiagnosticsDemoControls__ctor_m925C5792CC814E1B0A4187E444D14420D5BB12A7 (DiagnosticsDemoControls_t46271501D3A290B12B2BA9042F9C64D62582E527 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
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
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.DiagnosticsDemoControls_<>c::.cctor()
extern "C" IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m999963161EC954443327E4D8B51474A0C1B12CDE (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__cctor_m999963161EC954443327E4D8B51474A0C1B12CDE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t67D746E3173732F25991D94DA2F12136EFE8DA72 * L_0 = (U3CU3Ec_t67D746E3173732F25991D94DA2F12136EFE8DA72 *)il2cpp_codegen_object_new(U3CU3Ec_t67D746E3173732F25991D94DA2F12136EFE8DA72_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mCD1FF6911EC8A141806F9FC179250F16CF316D1B(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t67D746E3173732F25991D94DA2F12136EFE8DA72_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t67D746E3173732F25991D94DA2F12136EFE8DA72_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.DiagnosticsDemoControls_<>c::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mCD1FF6911EC8A141806F9FC179250F16CF316D1B (U3CU3Ec_t67D746E3173732F25991D94DA2F12136EFE8DA72 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Examples.Demos.DiagnosticsDemoControls_<>c::<Start>b__0_0()
extern "C" IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CStartU3Eb__0_0_m3A4D7731BB2D848AF897209FB1EB0B9666444CC5 (U3CU3Ec_t67D746E3173732F25991D94DA2F12136EFE8DA72 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec_U3CStartU3Eb__0_0_m3A4D7731BB2D848AF897209FB1EB0B9666444CC5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// await new WaitUntil(() => MixedRealityToolkit.DiagnosticsSystem != null);
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityToolkit_t638B1380E4669477D1FBF5DD68B45532D1BF0FDC_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = MixedRealityToolkit_get_DiagnosticsSystem_mD807CB6D9AF3EBB382C6D613FB7CB7EC6F892B1D(/*hidden argument*/NULL);
		return (bool)((!(((RuntimeObject*)(RuntimeObject*)L_0) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
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
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.DiagnosticsDemoControls_<Start>d__0::MoveNext()
extern "C" IL2CPP_METHOD_ATTR void U3CStartU3Ed__0_MoveNext_m9CE0D730F4FD3EE2C5BF6E46EDF9E09D9BC6E777 (U3CStartU3Ed__0_t7C225461B16887823D2847728502C5D852E3950C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CStartU3Ed__0_MoveNext_m9CE0D730F4FD3EE2C5BF6E46EDF9E09D9BC6E777_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	SimpleCoroutineAwaiter_tCF325F4B6190A2598489893345F0EB1D192F3398 * V_1 = NULL;
	Exception_t * V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 * G_B6_0 = NULL;
	Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 * G_B5_0 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_1 = V_0;
			if (!L_1)
			{
				goto IL_007c;
			}
		}

IL_000a:
		{
			// if (!MixedRealityToolkit.Instance.ActiveProfile.IsDiagnosticsSystemEnabled)
			IL2CPP_RUNTIME_CLASS_INIT(MixedRealityToolkit_t638B1380E4669477D1FBF5DD68B45532D1BF0FDC_il2cpp_TypeInfo_var);
			MixedRealityToolkit_t638B1380E4669477D1FBF5DD68B45532D1BF0FDC * L_2 = MixedRealityToolkit_get_Instance_m8E85DEB2FCE5996BD4E0784E1D334E594DA21341(/*hidden argument*/NULL);
			NullCheck(L_2);
			MixedRealityToolkitConfigurationProfile_t8FD0BE1E29894247405C6A2A716461F7FD9984D7 * L_3 = MixedRealityToolkit_get_ActiveProfile_mEEBAE3FBF4176BFC4A376C715E595AE9E5E57FD7(L_2, /*hidden argument*/NULL);
			NullCheck(L_3);
			bool L_4 = MixedRealityToolkitConfigurationProfile_get_IsDiagnosticsSystemEnabled_m741E07D2ACDA2E58CD6FB878470217577ABB04B1(L_3, /*hidden argument*/NULL);
			if (L_4)
			{
				goto IL_002a;
			}
		}

IL_001b:
		{
			// Debug.LogWarning("Diagnostics system is disabled. To run this demo, it needs to be enabled. Check your configuration settings.");
			IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
			Debug_LogWarning_m37338644DC81F640CCDFEAE35A223F0E965F0568(_stringLiteralC38358FDA2BB6A88ECCCFC5B161CDD90EDC182E4, /*hidden argument*/NULL);
			// return;
			goto IL_00c2;
		}

IL_002a:
		{
			// await new WaitUntil(() => MixedRealityToolkit.DiagnosticsSystem != null);
			IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t67D746E3173732F25991D94DA2F12136EFE8DA72_il2cpp_TypeInfo_var);
			Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 * L_5 = ((U3CU3Ec_t67D746E3173732F25991D94DA2F12136EFE8DA72_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t67D746E3173732F25991D94DA2F12136EFE8DA72_il2cpp_TypeInfo_var))->get_U3CU3E9__0_0_1();
			Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 * L_6 = L_5;
			G_B5_0 = L_6;
			if (L_6)
			{
				G_B6_0 = L_6;
				goto IL_0049;
			}
		}

IL_0032:
		{
			IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t67D746E3173732F25991D94DA2F12136EFE8DA72_il2cpp_TypeInfo_var);
			U3CU3Ec_t67D746E3173732F25991D94DA2F12136EFE8DA72 * L_7 = ((U3CU3Ec_t67D746E3173732F25991D94DA2F12136EFE8DA72_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t67D746E3173732F25991D94DA2F12136EFE8DA72_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
			Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 * L_8 = (Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 *)il2cpp_codegen_object_new(Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1_il2cpp_TypeInfo_var);
			Func_1__ctor_m479BA9DCBE3F496111BD05CC90CB1044C5FFD552(L_8, L_7, (intptr_t)((intptr_t)U3CU3Ec_U3CStartU3Eb__0_0_m3A4D7731BB2D848AF897209FB1EB0B9666444CC5_RuntimeMethod_var), /*hidden argument*/Func_1__ctor_m479BA9DCBE3F496111BD05CC90CB1044C5FFD552_RuntimeMethod_var);
			Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 * L_9 = L_8;
			((U3CU3Ec_t67D746E3173732F25991D94DA2F12136EFE8DA72_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t67D746E3173732F25991D94DA2F12136EFE8DA72_il2cpp_TypeInfo_var))->set_U3CU3E9__0_0_1(L_9);
			G_B6_0 = L_9;
		}

IL_0049:
		{
			WaitUntil_t012561515C0E1D3DEA19DB3A05444B020C68E13F * L_10 = (WaitUntil_t012561515C0E1D3DEA19DB3A05444B020C68E13F *)il2cpp_codegen_object_new(WaitUntil_t012561515C0E1D3DEA19DB3A05444B020C68E13F_il2cpp_TypeInfo_var);
			WaitUntil__ctor_mC1A43A512B185C55FBE858F741BEA6D4417105C1(L_10, G_B6_0, /*hidden argument*/NULL);
			SimpleCoroutineAwaiter_tCF325F4B6190A2598489893345F0EB1D192F3398 * L_11 = AwaiterExtensions_GetAwaiter_m376CBBC7E7253D99838FBF6C67E60B30F6C23A53(L_10, /*hidden argument*/NULL);
			V_1 = L_11;
			SimpleCoroutineAwaiter_tCF325F4B6190A2598489893345F0EB1D192F3398 * L_12 = V_1;
			NullCheck(L_12);
			bool L_13 = SimpleCoroutineAwaiter_get_IsCompleted_mBC1F6B4EBF85ABFC39B9AFCB4F5181E7476CFA80(L_12, /*hidden argument*/NULL);
			if (L_13)
			{
				goto IL_0098;
			}
		}

IL_005c:
		{
			int32_t L_14 = 0;
			V_0 = L_14;
			__this->set_U3CU3E1__state_0(L_14);
			SimpleCoroutineAwaiter_tCF325F4B6190A2598489893345F0EB1D192F3398 * L_15 = V_1;
			__this->set_U3CU3Eu__1_2(L_15);
			AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF * L_16 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncVoidMethodBuilder_AwaitOnCompleted_TisSimpleCoroutineAwaiter_tCF325F4B6190A2598489893345F0EB1D192F3398_TisU3CStartU3Ed__0_t7C225461B16887823D2847728502C5D852E3950C_m7419BE6FD90226C3FBAE528398D81D9582F86D74((AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF *)L_16, (SimpleCoroutineAwaiter_tCF325F4B6190A2598489893345F0EB1D192F3398 **)(&V_1), (U3CStartU3Ed__0_t7C225461B16887823D2847728502C5D852E3950C *)__this, /*hidden argument*/AsyncVoidMethodBuilder_AwaitOnCompleted_TisSimpleCoroutineAwaiter_tCF325F4B6190A2598489893345F0EB1D192F3398_TisU3CStartU3Ed__0_t7C225461B16887823D2847728502C5D852E3950C_m7419BE6FD90226C3FBAE528398D81D9582F86D74_RuntimeMethod_var);
			goto IL_00d5;
		}

IL_007c:
		{
			RuntimeObject * L_17 = __this->get_U3CU3Eu__1_2();
			V_1 = ((SimpleCoroutineAwaiter_tCF325F4B6190A2598489893345F0EB1D192F3398 *)CastclassClass((RuntimeObject*)L_17, SimpleCoroutineAwaiter_tCF325F4B6190A2598489893345F0EB1D192F3398_il2cpp_TypeInfo_var));
			__this->set_U3CU3Eu__1_2(NULL);
			int32_t L_18 = (-1);
			V_0 = L_18;
			__this->set_U3CU3E1__state_0(L_18);
		}

IL_0098:
		{
			SimpleCoroutineAwaiter_tCF325F4B6190A2598489893345F0EB1D192F3398 * L_19 = V_1;
			NullCheck(L_19);
			SimpleCoroutineAwaiter_GetResult_mE8195C2E665E76BAA6662741177BA4CC4E3A1F54(L_19, /*hidden argument*/NULL);
			// MixedRealityToolkit.DiagnosticsSystem.ShowDiagnostics = true;
			IL2CPP_RUNTIME_CLASS_INIT(MixedRealityToolkit_t638B1380E4669477D1FBF5DD68B45532D1BF0FDC_il2cpp_TypeInfo_var);
			RuntimeObject* L_20 = MixedRealityToolkit_get_DiagnosticsSystem_mD807CB6D9AF3EBB382C6D613FB7CB7EC6F892B1D(/*hidden argument*/NULL);
			NullCheck(L_20);
			InterfaceActionInvoker1< bool >::Invoke(1 /* System.Void Microsoft.MixedReality.Toolkit.Core.Interfaces.Diagnostics.IMixedRealityDiagnosticsSystem::set_ShowDiagnostics(System.Boolean) */, IMixedRealityDiagnosticsSystem_tEBA5742EE17D2675DF7640DA5C85A1776C4BDFA4_il2cpp_TypeInfo_var, L_20, (bool)1);
			goto IL_00c2;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_00ab;
		throw e;
	}

CATCH_00ab:
	{ // begin catch(System.Exception)
		V_2 = ((Exception_t *)__exception_local);
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF * L_21 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_22 = V_2;
		AsyncVoidMethodBuilder_SetException_mA7D834CA1ECA91D65074D7608AADA2E2A9533136((AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF *)L_21, L_22, /*hidden argument*/NULL);
		goto IL_00d5;
	} // end catch (depth: 1)

IL_00c2:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF * L_23 = __this->get_address_of_U3CU3Et__builder_1();
		AsyncVoidMethodBuilder_SetResult_mFF6028CDDC809252656354DC1714B4EB5E40A625((AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF *)L_23, /*hidden argument*/NULL);
	}

IL_00d5:
	{
		return;
	}
}
extern "C"  void U3CStartU3Ed__0_MoveNext_m9CE0D730F4FD3EE2C5BF6E46EDF9E09D9BC6E777_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	U3CStartU3Ed__0_t7C225461B16887823D2847728502C5D852E3950C * _thisAdjusted = reinterpret_cast<U3CStartU3Ed__0_t7C225461B16887823D2847728502C5D852E3950C *>(__this + 1);
	U3CStartU3Ed__0_MoveNext_m9CE0D730F4FD3EE2C5BF6E46EDF9E09D9BC6E777(_thisAdjusted, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.DiagnosticsDemoControls_<Start>d__0::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern "C" IL2CPP_METHOD_ATTR void U3CStartU3Ed__0_SetStateMachine_mFCBFEEEFA506686D8DCB8DEB7FE688415139886F (U3CStartU3Ed__0_t7C225461B16887823D2847728502C5D852E3950C * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	{
		AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncVoidMethodBuilder_SetStateMachine_mF3AEE42ED8474F11A5521D94271E884CF99E65B3((AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF *)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
extern "C"  void U3CStartU3Ed__0_SetStateMachine_mFCBFEEEFA506686D8DCB8DEB7FE688415139886F_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	U3CStartU3Ed__0_t7C225461B16887823D2847728502C5D852E3950C * _thisAdjusted = reinterpret_cast<U3CStartU3Ed__0_t7C225461B16887823D2847728502C5D852E3950C *>(__this + 1);
	U3CStartU3Ed__0_SetStateMachine_mFCBFEEEFA506686D8DCB8DEB7FE688415139886F(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.LoFiFilterSelection::Start()
extern "C" IL2CPP_METHOD_ATTR void LoFiFilterSelection_Start_m9FC6CAA21C5BF0CE6A109DCADEBAA36ED38E87F9 (LoFiFilterSelection_tC30D19C8655BCD00E2748CC5DEEBDE0F154E4C52 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (LoFiFilterSelection_Start_m9FC6CAA21C5BF0CE6A109DCADEBAA36ED38E87F9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// loFiEffect = gameObject.GetComponent<AudioLoFiEffect>();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		AudioLoFiEffect_t2A51E9DCCA37B112EC859D6F3E923F7BA863E5DC * L_1 = GameObject_GetComponent_TisAudioLoFiEffect_t2A51E9DCCA37B112EC859D6F3E923F7BA863E5DC_m7F834A0A0869721E37749214FE35A6FCD0B58DB6(L_0, /*hidden argument*/GameObject_GetComponent_TisAudioLoFiEffect_t2A51E9DCCA37B112EC859D6F3E923F7BA863E5DC_m7F834A0A0869721E37749214FE35A6FCD0B58DB6_RuntimeMethod_var);
		__this->set_loFiEffect_8(L_1);
		// objectRenderer = gameObject.GetComponent<Renderer>();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_2 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * L_3 = GameObject_GetComponent_TisRenderer_t0556D67DD582620D1F495627EDE30D03284151F4_mD65E2552CCFED4D0EC506EE90DE51215D90AEF85(L_2, /*hidden argument*/GameObject_GetComponent_TisRenderer_t0556D67DD582620D1F495627EDE30D03284151F4_mD65E2552CCFED4D0EC506EE90DE51215D90AEF85_RuntimeMethod_var);
		__this->set_objectRenderer_9(L_3);
		// SetEmitterMaterial(loFiEffect.SourceQuality);
		AudioLoFiEffect_t2A51E9DCCA37B112EC859D6F3E923F7BA863E5DC * L_4 = __this->get_loFiEffect_8();
		NullCheck(L_4);
		int32_t L_5 = AudioLoFiEffect_get_SourceQuality_mED85F1240323AED83214B5D9404AF64AFA3AB330(L_4, /*hidden argument*/NULL);
		LoFiFilterSelection_SetEmitterMaterial_mA3BE258490C6BA197E43F616A7ADE92E8C930A65(__this, L_5, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.LoFiFilterSelection::OnPointerClicked(Microsoft.MixedReality.Toolkit.Core.EventDatum.Input.MixedRealityPointerEventData)
extern "C" IL2CPP_METHOD_ATTR void LoFiFilterSelection_OnPointerClicked_m10BF6B7CC454F01183999CE9FC5CCD50F752AE7A (LoFiFilterSelection_tC30D19C8655BCD00E2748CC5DEEBDE0F154E4C52 * __this, MixedRealityPointerEventData_t74D5F359F15D4B61B3F9C2702BC786EC1F400CCC * ___eventData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (LoFiFilterSelection_OnPointerClicked_m10BF6B7CC454F01183999CE9FC5CCD50F752AE7A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (loFiEffect == null) { return; }
		AudioLoFiEffect_t2A51E9DCCA37B112EC859D6F3E923F7BA863E5DC * L_0 = __this->get_loFiEffect_8();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		// if (loFiEffect == null) { return; }
		return;
	}

IL_000f:
	{
		// AudioLoFiSourceQuality sourceQuality = loFiEffect.SourceQuality;
		AudioLoFiEffect_t2A51E9DCCA37B112EC859D6F3E923F7BA863E5DC * L_2 = __this->get_loFiEffect_8();
		NullCheck(L_2);
		int32_t L_3 = AudioLoFiEffect_get_SourceQuality_mED85F1240323AED83214B5D9404AF64AFA3AB330(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		// switch (sourceQuality)
		int32_t L_4 = V_0;
		switch (L_4)
		{
			case 0:
			{
				goto IL_0037;
			}
			case 1:
			{
				goto IL_0041;
			}
			case 2:
			{
				goto IL_003b;
			}
			case 3:
			{
				goto IL_0041;
			}
			case 4:
			{
				goto IL_003f;
			}
		}
	}
	{
		goto IL_0041;
	}

IL_0037:
	{
		// sourceQuality = AudioLoFiSourceQuality.AmRadio;
		V_0 = 2;
		// break;
		goto IL_0041;
	}

IL_003b:
	{
		// sourceQuality = AudioLoFiSourceQuality.FullRange;
		V_0 = 4;
		// break;
		goto IL_0041;
	}

IL_003f:
	{
		// sourceQuality = AudioLoFiSourceQuality.NarrowBandTelephony;
		V_0 = 0;
	}

IL_0041:
	{
		// SetEmitterMaterial(sourceQuality);
		int32_t L_5 = V_0;
		LoFiFilterSelection_SetEmitterMaterial_mA3BE258490C6BA197E43F616A7ADE92E8C930A65(__this, L_5, /*hidden argument*/NULL);
		// loFiEffect.SourceQuality = sourceQuality;
		AudioLoFiEffect_t2A51E9DCCA37B112EC859D6F3E923F7BA863E5DC * L_6 = __this->get_loFiEffect_8();
		int32_t L_7 = V_0;
		NullCheck(L_6);
		AudioLoFiEffect_set_SourceQuality_mD9EAEBED2A26469242760617672691BA0E9E0A5B(L_6, L_7, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.LoFiFilterSelection::OnPointerDown(Microsoft.MixedReality.Toolkit.Core.EventDatum.Input.MixedRealityPointerEventData)
extern "C" IL2CPP_METHOD_ATTR void LoFiFilterSelection_OnPointerDown_m20BEDD89C5963BFA0A8B982E701D473CE5F7B33D (LoFiFilterSelection_tC30D19C8655BCD00E2748CC5DEEBDE0F154E4C52 * __this, MixedRealityPointerEventData_t74D5F359F15D4B61B3F9C2702BC786EC1F400CCC * ___eventData0, const RuntimeMethod* method)
{
	{
		// { }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.LoFiFilterSelection::OnPointerUp(Microsoft.MixedReality.Toolkit.Core.EventDatum.Input.MixedRealityPointerEventData)
extern "C" IL2CPP_METHOD_ATTR void LoFiFilterSelection_OnPointerUp_mD0E12F57B59E7FF90ED9C2BCD759869C024026CB (LoFiFilterSelection_tC30D19C8655BCD00E2748CC5DEEBDE0F154E4C52 * __this, MixedRealityPointerEventData_t74D5F359F15D4B61B3F9C2702BC786EC1F400CCC * ___eventData0, const RuntimeMethod* method)
{
	{
		// { }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.LoFiFilterSelection::SetEmitterMaterial(Microsoft.MixedReality.Toolkit.SDK.Audio.Influencers.AudioLoFiSourceQuality)
extern "C" IL2CPP_METHOD_ATTR void LoFiFilterSelection_SetEmitterMaterial_mA3BE258490C6BA197E43F616A7ADE92E8C930A65 (LoFiFilterSelection_tC30D19C8655BCD00E2748CC5DEEBDE0F154E4C52 * __this, int32_t ___sourceQuality0, const RuntimeMethod* method)
{
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * V_0 = NULL;
	{
		// Material emitterMaterial = UnknownQuality;
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_0 = __this->get_UnknownQuality_7();
		V_0 = L_0;
		// switch (sourceQuality)
		int32_t L_1 = ___sourceQuality0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0023;
			}
			case 1:
			{
				goto IL_003c;
			}
			case 2:
			{
				goto IL_002c;
			}
			case 3:
			{
				goto IL_003c;
			}
			case 4:
			{
				goto IL_0035;
			}
		}
	}
	{
		goto IL_003c;
	}

IL_0023:
	{
		// emitterMaterial = NarrowBandTelephony;
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_2 = __this->get_NarrowBandTelephony_4();
		V_0 = L_2;
		// break;
		goto IL_003c;
	}

IL_002c:
	{
		// emitterMaterial = AmRadio;
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_3 = __this->get_AmRadio_5();
		V_0 = L_3;
		// break;
		goto IL_003c;
	}

IL_0035:
	{
		// emitterMaterial = FullRange;
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_4 = __this->get_FullRange_6();
		V_0 = L_4;
	}

IL_003c:
	{
		// objectRenderer.sharedMaterial = emitterMaterial;
		Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * L_5 = __this->get_objectRenderer_9();
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_6 = V_0;
		NullCheck(L_5);
		Renderer_set_sharedMaterial_mC94A354D9B0FCA081754A7CB51AEE5A9AD3946A3(L_5, L_6, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.LoFiFilterSelection::.ctor()
extern "C" IL2CPP_METHOD_ATTR void LoFiFilterSelection__ctor_m7BED1751FD7E941B1BA04287B12B62F485DB75DB (LoFiFilterSelection_tC30D19C8655BCD00E2748CC5DEEBDE0F154E4C52 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
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
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.StandardShader.MaterialMatrix::Awake()
extern "C" IL2CPP_METHOD_ATTR void MaterialMatrix_Awake_m899DC97E01B170BEA171B3218C45B764B0D3F65B (MaterialMatrix_t4C38EA16270583C7EACDC8BCF1BC292DEE1C0BB1 * __this, const RuntimeMethod* method)
{
	{
		// BuildMatrix();
		MaterialMatrix_BuildMatrix_m2E173BFBB7F2BD9F1B8A5922CED661C78E5E5294(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.StandardShader.MaterialMatrix::BuildMatrix()
extern "C" IL2CPP_METHOD_ATTR void MaterialMatrix_BuildMatrix_m2E173BFBB7F2BD9F1B8A5922CED661C78E5E5294 (MaterialMatrix_t4C38EA16270583C7EACDC8BCF1BC292DEE1C0BB1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MaterialMatrix_BuildMatrix_m2E173BFBB7F2BD9F1B8A5922CED661C78E5E5294_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t1863EF4EE1FDEED14D460C85AF61BE0850892F6D * V_0 = NULL;
	float V_1 = 0.0f;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_2;
	memset(&V_2, 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	int32_t V_7 = 0;
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * V_8 = NULL;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * V_11 = NULL;
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * V_12 = NULL;
	Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * V_13 = NULL;
	MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * V_14 = NULL;
	{
		// List<Transform> children = transform.Cast<Transform>().ToList();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		RuntimeObject* L_1 = Enumerable_Cast_TisTransform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA_m2C894D1B76F567B4A8207065C8BD617503335937(L_0, /*hidden argument*/Enumerable_Cast_TisTransform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA_m2C894D1B76F567B4A8207065C8BD617503335937_RuntimeMethod_var);
		List_1_t1863EF4EE1FDEED14D460C85AF61BE0850892F6D * L_2 = Enumerable_ToList_TisTransform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA_m576129E7E9EA1B0D9D2882C862DD0416A519CA00(L_1, /*hidden argument*/Enumerable_ToList_TisTransform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA_m576129E7E9EA1B0D9D2882C862DD0416A519CA00_RuntimeMethod_var);
		V_0 = L_2;
		// for (int i = 0; i < children.Count; ++i)
		V_7 = 0;
		goto IL_0047;
	}

IL_0016:
	{
		// Transform child = children[i];
		List_1_t1863EF4EE1FDEED14D460C85AF61BE0850892F6D * L_3 = V_0;
		int32_t L_4 = V_7;
		NullCheck(L_3);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_5 = List_1_get_Item_mA33D8A6F21573AD262EE055BA64C73668489B86D(L_3, L_4, /*hidden argument*/List_1_get_Item_mA33D8A6F21573AD262EE055BA64C73668489B86D_RuntimeMethod_var);
		V_8 = L_5;
		// if (Application.isPlaying)
		bool L_6 = Application_get_isPlaying_mF43B519662E7433DD90D883E5AE22EC3CFB65CA5(/*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0035;
		}
	}
	{
		// Destroy(child.gameObject);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_7 = V_8;
		NullCheck(L_7);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_8 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_7, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Object_Destroy_m23B4562495BA35A74266D4372D45368F8C05109A(L_8, /*hidden argument*/NULL);
		// }
		goto IL_0041;
	}

IL_0035:
	{
		// DestroyImmediate(child.gameObject);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_9 = V_8;
		NullCheck(L_9);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_10 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_9, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_mF6F4415EF22249D6E650FAA40E403283F19B7446(L_10, /*hidden argument*/NULL);
	}

IL_0041:
	{
		// for (int i = 0; i < children.Count; ++i)
		int32_t L_11 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1));
	}

IL_0047:
	{
		// for (int i = 0; i < children.Count; ++i)
		int32_t L_12 = V_7;
		List_1_t1863EF4EE1FDEED14D460C85AF61BE0850892F6D * L_13 = V_0;
		NullCheck(L_13);
		int32_t L_14 = List_1_get_Count_m60ECB73FE15B95838DB91630185659793A5B3B8B(L_13, /*hidden argument*/List_1_get_Count_m60ECB73FE15B95838DB91630185659793A5B3B8B_RuntimeMethod_var);
		if ((((int32_t)L_12) < ((int32_t)L_14)))
		{
			goto IL_0016;
		}
	}
	{
		// if (material == null)
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_15 = __this->get_material_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_16 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_15, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_16)
		{
			goto IL_006a;
		}
	}
	{
		// Debug.LogError("Failed to build material matrix due to missing material.");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29(_stringLiteral4FEC3E1B51328AE0888C2F032A7A812DCD6E5932, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_006a:
	{
		// float center = (dimension - 1) * positionOffset * -0.5f;
		int32_t L_17 = __this->get_dimension_6();
		float L_18 = __this->get_positionOffset_7();
		V_1 = ((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)(((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)L_17, (int32_t)1))))), (float)L_18)), (float)(-0.5f)));
		// Vector3 position = new Vector3(center, 0.0f, center);
		float L_19 = V_1;
		float L_20 = V_1;
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_2), L_19, (0.0f), L_20, /*hidden argument*/NULL);
		// int firstPropertyId = Shader.PropertyToID(firstPropertyName);
		String_t* L_21 = __this->get_firstPropertyName_8();
		int32_t L_22 = Shader_PropertyToID_m831E5B48743620DB9E3E3DD15A8DEA483981DD45(L_21, /*hidden argument*/NULL);
		V_3 = L_22;
		// int secondPropertyId = Shader.PropertyToID(secondPropertyName);
		String_t* L_23 = __this->get_secondPropertyName_9();
		int32_t L_24 = Shader_PropertyToID_m831E5B48743620DB9E3E3DD15A8DEA483981DD45(L_23, /*hidden argument*/NULL);
		V_4 = L_24;
		// float firstProperty = 0.0f;
		V_5 = (0.0f);
		// float secondProperty = 0.0f;
		V_6 = (0.0f);
		// for (int i = 0; i < dimension; ++i)
		V_9 = 0;
		goto IL_0245;
	}

IL_00be:
	{
		// for (int j = 0; j < dimension; ++j)
		V_10 = 0;
		goto IL_01fe;
	}

IL_00c6:
	{
		// GameObject element = GameObject.CreatePrimitive(PrimitiveType.Sphere);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_25 = GameObject_CreatePrimitive_mA4D35085D817369E4A513FF31D745CEB27B07F6A(0, /*hidden argument*/NULL);
		V_11 = L_25;
		// element.name = "Element" + (i * dimension + j);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_26 = V_11;
		int32_t L_27 = V_9;
		int32_t L_28 = __this->get_dimension_6();
		int32_t L_29 = V_10;
		int32_t L_30 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_27, (int32_t)L_28)), (int32_t)L_29));
		RuntimeObject * L_31 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_30);
		String_t* L_32 = String_Concat_mBB19C73816BDD1C3519F248E1ADC8E11A6FDB495(_stringLiteral49FA9FD831096C82AB950BC7AA0A0A7EF8A10998, L_31, /*hidden argument*/NULL);
		NullCheck(L_26);
		Object_set_name_m538711B144CDE30F929376BCF72D0DC8F85D0826(L_26, L_32, /*hidden argument*/NULL);
		// element.transform.parent = transform;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_33 = V_11;
		NullCheck(L_33);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_34 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_33, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_35 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_34);
		Transform_set_parent_m65B8E4660B2C554069C57A957D9E55FECA7AA73E(L_34, L_35, /*hidden argument*/NULL);
		// element.transform.localPosition = position;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_36 = V_11;
		NullCheck(L_36);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_37 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_36, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_38 = V_2;
		NullCheck(L_37);
		Transform_set_localPosition_m275F5550DD939F83AFEB5E8D681131172E2E1728(L_37, L_38, /*hidden argument*/NULL);
		// element.transform.localRotation = Quaternion.Euler(localRotation);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_39 = V_11;
		NullCheck(L_39);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_40 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_39, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_41 = __this->get_localRotation_10();
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_42 = Quaternion_Euler_m55C96FCD397CC69109261572710608D12A4CBD2B(L_41, /*hidden argument*/NULL);
		NullCheck(L_40);
		Transform_set_localRotation_mE2BECB0954FFC1D93FB631600D9A9BEFF41D9C8A(L_40, L_42, /*hidden argument*/NULL);
		// position.x += positionOffset;
		float* L_43 = (&V_2)->get_address_of_x_2();
		float* L_44 = L_43;
		float L_45 = *((float*)L_44);
		float L_46 = __this->get_positionOffset_7();
		*((float*)L_44) = (float)((float)il2cpp_codegen_add((float)L_45, (float)L_46));
		// Material newMaterial = new Material(material);
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_47 = __this->get_material_4();
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_48 = (Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 *)il2cpp_codegen_object_new(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598_il2cpp_TypeInfo_var);
		Material__ctor_m0171C6D4D3FD04D58C70808F255DBA67D0ED2BDE(L_48, L_47, /*hidden argument*/NULL);
		V_12 = L_48;
		// newMaterial.SetFloat(firstPropertyId, firstProperty);
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_49 = V_12;
		int32_t L_50 = V_3;
		float L_51 = V_5;
		NullCheck(L_49);
		Material_SetFloat_mC2FDDF0798373DEE6BBA9B9FFFE03EC3CFB9BF47(L_49, L_50, L_51, /*hidden argument*/NULL);
		// newMaterial.SetFloat(secondPropertyId, secondProperty);
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_52 = V_12;
		int32_t L_53 = V_4;
		float L_54 = V_6;
		NullCheck(L_52);
		Material_SetFloat_mC2FDDF0798373DEE6BBA9B9FFFE03EC3CFB9BF47(L_52, L_53, L_54, /*hidden argument*/NULL);
		// Renderer _renderer = element.GetComponent<Renderer>();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_55 = V_11;
		NullCheck(L_55);
		Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * L_56 = GameObject_GetComponent_TisRenderer_t0556D67DD582620D1F495627EDE30D03284151F4_mD65E2552CCFED4D0EC506EE90DE51215D90AEF85(L_55, /*hidden argument*/GameObject_GetComponent_TisRenderer_t0556D67DD582620D1F495627EDE30D03284151F4_mD65E2552CCFED4D0EC506EE90DE51215D90AEF85_RuntimeMethod_var);
		V_13 = L_56;
		// MeshFilter meshFilter = element.GetComponent<MeshFilter>();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_57 = V_11;
		NullCheck(L_57);
		MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * L_58 = GameObject_GetComponent_TisMeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0_mD1BA4FFEB800AB3D102141CD0A0ECE237EA70FB4(L_57, /*hidden argument*/GameObject_GetComponent_TisMeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0_mD1BA4FFEB800AB3D102141CD0A0ECE237EA70FB4_RuntimeMethod_var);
		V_14 = L_58;
		// if (Application.isPlaying == true)
		bool L_59 = Application_get_isPlaying_mF43B519662E7433DD90D883E5AE22EC3CFB65CA5(/*hidden argument*/NULL);
		if (!L_59)
		{
			goto IL_01ac;
		}
	}
	{
		// _renderer.material = newMaterial;
		Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * L_60 = V_13;
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_61 = V_12;
		NullCheck(L_60);
		Renderer_set_material_mB4988AD6A93C7FDACC4C07A99D1DAC23D10C0344(L_60, L_61, /*hidden argument*/NULL);
		// if (mesh != null)
		Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * L_62 = __this->get_mesh_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_63 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_62, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_63)
		{
			goto IL_01e4;
		}
	}
	{
		// meshFilter.mesh = mesh;
		MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * L_64 = V_14;
		Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * L_65 = __this->get_mesh_5();
		NullCheck(L_64);
		MeshFilter_set_mesh_mA18AA96C75CC91CF0917BA1F437626499FAAF496(L_64, L_65, /*hidden argument*/NULL);
		// Destroy(element.GetComponent<SphereCollider>());
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_66 = V_11;
		NullCheck(L_66);
		SphereCollider_tAC3E5E20B385DF1C0B17F3EA5C7214F71367706F * L_67 = GameObject_GetComponent_TisSphereCollider_tAC3E5E20B385DF1C0B17F3EA5C7214F71367706F_m4DEC2B4735AA4EA2D41E2D02AF512A49659AD039(L_66, /*hidden argument*/GameObject_GetComponent_TisSphereCollider_tAC3E5E20B385DF1C0B17F3EA5C7214F71367706F_m4DEC2B4735AA4EA2D41E2D02AF512A49659AD039_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Object_Destroy_m23B4562495BA35A74266D4372D45368F8C05109A(L_67, /*hidden argument*/NULL);
		// element.AddComponent<MeshCollider>();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_68 = V_11;
		NullCheck(L_68);
		GameObject_AddComponent_TisMeshCollider_t60EB55ADE92499FE8D1AA206D2BD96E65B2766DE_m38A789A66BD8A824B7D5FF46C20C4BD3CE0F3B3C(L_68, /*hidden argument*/GameObject_AddComponent_TisMeshCollider_t60EB55ADE92499FE8D1AA206D2BD96E65B2766DE_m38A789A66BD8A824B7D5FF46C20C4BD3CE0F3B3C_RuntimeMethod_var);
		// }
		goto IL_01e4;
	}

IL_01ac:
	{
		// _renderer.sharedMaterial = newMaterial;
		Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * L_69 = V_13;
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_70 = V_12;
		NullCheck(L_69);
		Renderer_set_sharedMaterial_mC94A354D9B0FCA081754A7CB51AEE5A9AD3946A3(L_69, L_70, /*hidden argument*/NULL);
		// if (mesh != null)
		Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * L_71 = __this->get_mesh_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_72 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_71, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_72)
		{
			goto IL_01e4;
		}
	}
	{
		// meshFilter.mesh = mesh;
		MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * L_73 = V_14;
		Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * L_74 = __this->get_mesh_5();
		NullCheck(L_73);
		MeshFilter_set_mesh_mA18AA96C75CC91CF0917BA1F437626499FAAF496(L_73, L_74, /*hidden argument*/NULL);
		// DestroyImmediate(element.GetComponent<SphereCollider>());
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_75 = V_11;
		NullCheck(L_75);
		SphereCollider_tAC3E5E20B385DF1C0B17F3EA5C7214F71367706F * L_76 = GameObject_GetComponent_TisSphereCollider_tAC3E5E20B385DF1C0B17F3EA5C7214F71367706F_m4DEC2B4735AA4EA2D41E2D02AF512A49659AD039(L_75, /*hidden argument*/GameObject_GetComponent_TisSphereCollider_tAC3E5E20B385DF1C0B17F3EA5C7214F71367706F_m4DEC2B4735AA4EA2D41E2D02AF512A49659AD039_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_mF6F4415EF22249D6E650FAA40E403283F19B7446(L_76, /*hidden argument*/NULL);
		// element.AddComponent<MeshCollider>();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_77 = V_11;
		NullCheck(L_77);
		GameObject_AddComponent_TisMeshCollider_t60EB55ADE92499FE8D1AA206D2BD96E65B2766DE_m38A789A66BD8A824B7D5FF46C20C4BD3CE0F3B3C(L_77, /*hidden argument*/GameObject_AddComponent_TisMeshCollider_t60EB55ADE92499FE8D1AA206D2BD96E65B2766DE_m38A789A66BD8A824B7D5FF46C20C4BD3CE0F3B3C_RuntimeMethod_var);
	}

IL_01e4:
	{
		// firstProperty += 1.0f / (dimension - 1);
		float L_78 = V_5;
		int32_t L_79 = __this->get_dimension_6();
		V_5 = ((float)il2cpp_codegen_add((float)L_78, (float)((float)((float)(1.0f)/(float)(((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)L_79, (int32_t)1)))))))));
		// for (int j = 0; j < dimension; ++j)
		int32_t L_80 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add((int32_t)L_80, (int32_t)1));
	}

IL_01fe:
	{
		// for (int j = 0; j < dimension; ++j)
		int32_t L_81 = V_10;
		int32_t L_82 = __this->get_dimension_6();
		if ((((int32_t)L_81) < ((int32_t)L_82)))
		{
			goto IL_00c6;
		}
	}
	{
		// position.x = center;
		float L_83 = V_1;
		(&V_2)->set_x_2(L_83);
		// position.z += positionOffset;
		float* L_84 = (&V_2)->get_address_of_z_4();
		float* L_85 = L_84;
		float L_86 = *((float*)L_85);
		float L_87 = __this->get_positionOffset_7();
		*((float*)L_85) = (float)((float)il2cpp_codegen_add((float)L_86, (float)L_87));
		// firstProperty = 0.0f;
		V_5 = (0.0f);
		// secondProperty += 1.0f / (dimension - 1);
		float L_88 = V_6;
		int32_t L_89 = __this->get_dimension_6();
		V_6 = ((float)il2cpp_codegen_add((float)L_88, (float)((float)((float)(1.0f)/(float)(((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)L_89, (int32_t)1)))))))));
		// for (int i = 0; i < dimension; ++i)
		int32_t L_90 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add((int32_t)L_90, (int32_t)1));
	}

IL_0245:
	{
		// for (int i = 0; i < dimension; ++i)
		int32_t L_91 = V_9;
		int32_t L_92 = __this->get_dimension_6();
		if ((((int32_t)L_91) < ((int32_t)L_92)))
		{
			goto IL_00be;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.StandardShader.MaterialMatrix::.ctor()
extern "C" IL2CPP_METHOD_ATTR void MaterialMatrix__ctor_mFCCC0A86E66D0E3B69B1C497B366F32E71F752E6 (MaterialMatrix_t4C38EA16270583C7EACDC8BCF1BC292DEE1C0BB1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MaterialMatrix__ctor_mFCCC0A86E66D0E3B69B1C497B366F32E71F752E6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private int dimension = 5;
		__this->set_dimension_6(5);
		// private float positionOffset = 0.1f;
		__this->set_positionOffset_7((0.1f));
		// private string firstPropertyName = "_Metallic";
		__this->set_firstPropertyName_8(_stringLiteralB9567DED74E1C05B65EAB2AE2C2B49CC75B1660A);
		// private string secondPropertyName = "_Glossiness";
		__this->set_secondPropertyName_9(_stringLiteral76DB1AA30D048277794F2EB6004B5AE7BAA0CBC7);
		// private Vector3 localRotation = Vector3.zero;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		__this->set_localRotation_10(L_0);
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
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
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.SwapVolume::Awake()
extern "C" IL2CPP_METHOD_ATTR void SwapVolume_Awake_m96C2D3001E1508636521A857A930976DB3324F0B (SwapVolume_t30B5649189807539575F16461023F16BF8A1D904 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SwapVolume_Awake_m96C2D3001E1508636521A857A930976DB3324F0B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (hideThisObject == null || spawnThisPrefab == null)
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = __this->get_hideThisObject_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_001c;
		}
	}
	{
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_2 = __this->get_spawnThisPrefab_6();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_3 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_2, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0027;
		}
	}

IL_001c:
	{
		// Destroy(gameObject);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_4 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Object_Destroy_m23B4562495BA35A74266D4372D45368F8C05109A(L_4, /*hidden argument*/NULL);
	}

IL_0027:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.SwapVolume::Start()
extern "C" IL2CPP_METHOD_ATTR void SwapVolume_Start_m8AA462E44E48A93870D984073CA394F635C58762 (SwapVolume_t30B5649189807539575F16461023F16BF8A1D904 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SwapVolume_Start_m8AA462E44E48A93870D984073CA394F635C58762_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// spawnedObject = Instantiate(spawnThisPrefab, hideThisObject.transform.position, hideThisObject.transform.rotation);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = __this->get_spawnThisPrefab_6();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_1 = __this->get_hideThisObject_5();
		NullCheck(L_1);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_2 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_2, /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_4 = __this->get_hideThisObject_5();
		NullCheck(L_4);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_5 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_6 = Transform_get_rotation_m3AB90A67403249AECCA5E02BC70FCE8C90FE9FB9(L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_7 = Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m4F397BCC6697902B40033E61129D4EA6FE93570F(L_0, L_3, L_6, /*hidden argument*/Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m4F397BCC6697902B40033E61129D4EA6FE93570F_RuntimeMethod_var);
		__this->set_spawnedObject_9(L_7);
		// spawnedObject.SetActive(false);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_8 = __this->get_spawnedObject_9();
		NullCheck(L_8);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_8, (bool)0, /*hidden argument*/NULL);
		// solverHandler = spawnedObject.GetComponent<SolverHandler>();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_9 = __this->get_spawnedObject_9();
		NullCheck(L_9);
		SolverHandler_t321FA96B537A6B29F38A2020FEBFD5757CADE0FD * L_10 = GameObject_GetComponent_TisSolverHandler_t321FA96B537A6B29F38A2020FEBFD5757CADE0FD_m0985BD76C43DCDF9DE361DA4E3BDB469A3A5EC12(L_9, /*hidden argument*/GameObject_GetComponent_TisSolverHandler_t321FA96B537A6B29F38A2020FEBFD5757CADE0FD_m0985BD76C43DCDF9DE361DA4E3BDB469A3A5EC12_RuntimeMethod_var);
		__this->set_solverHandler_8(L_10);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.SwapVolume::OnPointerUp(Microsoft.MixedReality.Toolkit.Core.EventDatum.Input.MixedRealityPointerEventData)
extern "C" IL2CPP_METHOD_ATTR void SwapVolume_OnPointerUp_m2293EB223F776800217025FBFC8F20AB61B4E7DD (SwapVolume_t30B5649189807539575F16461023F16BF8A1D904 * __this, MixedRealityPointerEventData_t74D5F359F15D4B61B3F9C2702BC786EC1F400CCC * ___eventData0, const RuntimeMethod* method)
{
	{
		// public void OnPointerUp(MixedRealityPointerEventData eventData) { }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.SwapVolume::OnPointerDown(Microsoft.MixedReality.Toolkit.Core.EventDatum.Input.MixedRealityPointerEventData)
extern "C" IL2CPP_METHOD_ATTR void SwapVolume_OnPointerDown_mB2D2DDF7766977F5044C0F51A4F96A803365847F (SwapVolume_t30B5649189807539575F16461023F16BF8A1D904 * __this, MixedRealityPointerEventData_t74D5F359F15D4B61B3F9C2702BC786EC1F400CCC * ___eventData0, const RuntimeMethod* method)
{
	{
		// public void OnPointerDown(MixedRealityPointerEventData eventData) { }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.SwapVolume::OnPointerClicked(Microsoft.MixedReality.Toolkit.Core.EventDatum.Input.MixedRealityPointerEventData)
extern "C" IL2CPP_METHOD_ATTR void SwapVolume_OnPointerClicked_mC16666B10E130A24225313A343BB5255A01BBE6C (SwapVolume_t30B5649189807539575F16461023F16BF8A1D904 * __this, MixedRealityPointerEventData_t74D5F359F15D4B61B3F9C2702BC786EC1F400CCC * ___eventData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SwapVolume_OnPointerClicked_mC16666B10E130A24225313A343BB5255A01BBE6C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (eventData.MixedRealityInputAction != selectAction)
		MixedRealityPointerEventData_t74D5F359F15D4B61B3F9C2702BC786EC1F400CCC * L_0 = ___eventData0;
		NullCheck(L_0);
		MixedRealityInputAction_tB87A712377383583B43FC255F442492403992C96  L_1 = BaseInputEventData_get_MixedRealityInputAction_m47CF3B10BAAD06BEA073E2F43625AC83F40043F5(L_0, /*hidden argument*/NULL);
		MixedRealityInputAction_tB87A712377383583B43FC255F442492403992C96  L_2 = __this->get_selectAction_4();
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityInputAction_tB87A712377383583B43FC255F442492403992C96_il2cpp_TypeInfo_var);
		bool L_3 = MixedRealityInputAction_op_Inequality_mEDB1AE0C6A572071A693270B978AF08F827396BF(L_1, L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0014;
		}
	}
	{
		// return;
		return;
	}

IL_0014:
	{
		// if (spawnedObject.activeSelf)
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_4 = __this->get_spawnedObject_9();
		NullCheck(L_4);
		bool L_5 = GameObject_get_activeSelf_mFE1834886CAE59884AC2BE707A3B821A1DB61F44(L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_003b;
		}
	}
	{
		// spawnedObject.SetActive(false);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_6 = __this->get_spawnedObject_9();
		NullCheck(L_6);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_6, (bool)0, /*hidden argument*/NULL);
		// hideThisObject.SetActive(true);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_7 = __this->get_hideThisObject_5();
		NullCheck(L_7);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_7, (bool)1, /*hidden argument*/NULL);
		// }
		goto IL_00a3;
	}

IL_003b:
	{
		// spawnedObject.SetActive(true);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_8 = __this->get_spawnedObject_9();
		NullCheck(L_8);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_8, (bool)1, /*hidden argument*/NULL);
		// if (updateSolverTargetToClickSource && solverHandler != null)
		bool L_9 = __this->get_updateSolverTargetToClickSource_7();
		if (!L_9)
		{
			goto IL_0097;
		}
	}
	{
		SolverHandler_t321FA96B537A6B29F38A2020FEBFD5757CADE0FD * L_10 = __this->get_solverHandler_8();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_11 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_10, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_0097;
		}
	}
	{
		// if (eventData.Handedness == Handedness.Right)
		MixedRealityPointerEventData_t74D5F359F15D4B61B3F9C2702BC786EC1F400CCC * L_12 = ___eventData0;
		NullCheck(L_12);
		uint8_t L_13 = InputEventData_get_Handedness_m0409ABB26C493B212975C2C952E628512118231C(L_12, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_13) == ((uint32_t)2))))
		{
			goto IL_0074;
		}
	}
	{
		// solverHandler.TrackedObjectToReference = TrackedObjectType.MotionControllerRight;
		SolverHandler_t321FA96B537A6B29F38A2020FEBFD5757CADE0FD * L_14 = __this->get_solverHandler_8();
		NullCheck(L_14);
		SolverHandler_set_TrackedObjectToReference_m437053EA6DCD2F49E4A3E814CFA0FB6A2CBA1E4F(L_14, 2, /*hidden argument*/NULL);
		// }
		goto IL_0097;
	}

IL_0074:
	{
		// else if (eventData.Handedness == Handedness.Left)
		MixedRealityPointerEventData_t74D5F359F15D4B61B3F9C2702BC786EC1F400CCC * L_15 = ___eventData0;
		NullCheck(L_15);
		uint8_t L_16 = InputEventData_get_Handedness_m0409ABB26C493B212975C2C952E628512118231C(L_15, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_16) == ((uint32_t)1))))
		{
			goto IL_008b;
		}
	}
	{
		// solverHandler.TrackedObjectToReference = TrackedObjectType.MotionControllerLeft;
		SolverHandler_t321FA96B537A6B29F38A2020FEBFD5757CADE0FD * L_17 = __this->get_solverHandler_8();
		NullCheck(L_17);
		SolverHandler_set_TrackedObjectToReference_m437053EA6DCD2F49E4A3E814CFA0FB6A2CBA1E4F(L_17, 1, /*hidden argument*/NULL);
		// }
		goto IL_0097;
	}

IL_008b:
	{
		// solverHandler.TrackedObjectToReference = TrackedObjectType.Head;
		SolverHandler_t321FA96B537A6B29F38A2020FEBFD5757CADE0FD * L_18 = __this->get_solverHandler_8();
		NullCheck(L_18);
		SolverHandler_set_TrackedObjectToReference_m437053EA6DCD2F49E4A3E814CFA0FB6A2CBA1E4F(L_18, 0, /*hidden argument*/NULL);
	}

IL_0097:
	{
		// hideThisObject.SetActive(false);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_19 = __this->get_hideThisObject_5();
		NullCheck(L_19);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_19, (bool)0, /*hidden argument*/NULL);
	}

IL_00a3:
	{
		// eventData.Use(); // Mark the event as used, so it doesn't fall through to other handlers.
		MixedRealityPointerEventData_t74D5F359F15D4B61B3F9C2702BC786EC1F400CCC * L_20 = ___eventData0;
		NullCheck(L_20);
		VirtActionInvoker0::Invoke(5 /* System.Void UnityEngine.EventSystems.AbstractEventData::Use() */, L_20);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.SwapVolume::OnDestroy()
extern "C" IL2CPP_METHOD_ATTR void SwapVolume_OnDestroy_mCAF68BE5D734301B1FDB18F42991B3720D06422C (SwapVolume_t30B5649189807539575F16461023F16BF8A1D904 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SwapVolume_OnDestroy_mCAF68BE5D734301B1FDB18F42991B3720D06422C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Destroy(spawnedObject);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = __this->get_spawnedObject_9();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Object_Destroy_m23B4562495BA35A74266D4372D45368F8C05109A(L_0, /*hidden argument*/NULL);
		// Destroy(hideThisObject);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_1 = __this->get_hideThisObject_5();
		Object_Destroy_m23B4562495BA35A74266D4372D45368F8C05109A(L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.SwapVolume::.ctor()
extern "C" IL2CPP_METHOD_ATTR void SwapVolume__ctor_mC61D2157AB81F9886568DD344E57F3B45F3577F6 (SwapVolume_t30B5649189807539575F16461023F16BF8A1D904 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SwapVolume__ctor_mC61D2157AB81F9886568DD344E57F3B45F3577F6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private MixedRealityInputAction selectAction = MixedRealityInputAction.None;
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityInputAction_tB87A712377383583B43FC255F442492403992C96_il2cpp_TypeInfo_var);
		MixedRealityInputAction_tB87A712377383583B43FC255F442492403992C96  L_0 = MixedRealityInputAction_get_None_m3A6CA9CBA65C11749C760EA6984CAEB3062AB062(/*hidden argument*/NULL);
		__this->set_selectAction_4(L_0);
		// private bool updateSolverTargetToClickSource = true;
		__this->set_updateSolverTargetToClickSource_7((bool)1);
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
