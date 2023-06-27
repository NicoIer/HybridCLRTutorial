#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
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
template <typename T1, typename T2, typename T3>
struct InterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
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
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// System.Action`1<UnityEngine.AsyncOperation>
struct Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB;
// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Action`1<UnityEngine.TextAsset>
struct Action_1_tCBB7BCB0560FBDC8B3457953A50A7FBCDA13572C;
// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1<System.Collections.Generic.IList`1<System.Object>>
struct AsyncOperationBase_1_tF2678F4023386F66EBAA08E93CC7490F090FBF70;
// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1<System.Collections.Generic.IList`1<UnityEngine.TextAsset>>
struct AsyncOperationBase_1_t467A94EE3B34333E03E89A40A24634E08CB2D75C;
// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1<System.Collections.Generic.List`1<UnityEngine.AddressableAssets.ResourceLocators.IResourceLocator>>
struct AsyncOperationBase_1_t6C0B1FFBBFC6F03B8212E7C1CA3679364DDE83E9;
// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1<System.Collections.Generic.List`1<System.String>>
struct AsyncOperationBase_1_t8BFB6142CEBF919881F2972D476E2B0A36EE6EC3;
// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1<UnityEngine.AddressableAssets.ResourceLocators.IResourceLocator>
struct AsyncOperationBase_1_t710981A6C015CC62ADE562002416C75827C2D70B;
// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1<System.Int64>
struct AsyncOperationBase_1_tAEE4108C50A99611516FD568A0F32F241C92179F;
// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1<System.Object>
struct AsyncOperationBase_1_t777EC3ACED7579A0B8EFE3EEE605D824516B3C13;
// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1<UnityEngine.ResourceManagement.ResourceProviders.SceneInstance>
struct AsyncOperationBase_1_t53CEC258A81CC6E6C433249F4DBF1B719395DBD7;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t349E66EC5F09B881A8E52EE40A1AB9EC60E08E44;
// System.Collections.Generic.IList`1<UnityEngine.TextAsset>
struct IList_1_t41197D8BEF4B49150DE2882FD3E4E3AB1F03D62F;
// Cysharp.Threading.Tasks.IUniTaskSource`1<System.Collections.Generic.IList`1<UnityEngine.TextAsset>>
struct IUniTaskSource_1_tB0C84AFC84BEC46D3394ABD72E36CD4864B73C05;
// Cysharp.Threading.Tasks.IUniTaskSource`1<System.Collections.Generic.List`1<UnityEngine.AddressableAssets.ResourceLocators.IResourceLocator>>
struct IUniTaskSource_1_t5D469D67DCE37624BF972E946A40D9343E89E69F;
// Cysharp.Threading.Tasks.IUniTaskSource`1<System.Collections.Generic.List`1<System.String>>
struct IUniTaskSource_1_t9EF40DE0AD54BF0616CE0B2114CB4616E32172A9;
// Cysharp.Threading.Tasks.IUniTaskSource`1<System.Int64>
struct IUniTaskSource_1_tE897B7736A4F7A6923CE32E4D43E3506188EE795;
// Cysharp.Threading.Tasks.IUniTaskSource`1<System.Object>
struct IUniTaskSource_1_tDC639FD163E4613AFE1D3F2749CA5B177DC702F5;
// Cysharp.Threading.Tasks.IUniTaskSource`1<UnityEngine.ResourceManagement.ResourceProviders.SceneInstance>
struct IUniTaskSource_1_t10D3FF99FFCA613E99FE42EB02FB7776739D78B1;
// System.Collections.Generic.List`1<UnityEngine.AddressableAssets.ResourceLocators.IResourceLocator>
struct List_1_t540309E962CB768808E54FF9E53136790E1C4975;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
// System.Predicate`1<System.Object>
struct Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED;
// System.Threading.Tasks.Task`1<UnityEngine.AddressableAssets.ResourceLocators.IResourceLocator>
struct Task_1_tAF937EF1CA4B1527DA6CEB7CDABB2116AFF43CA1;
// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// UnityEngine.AddressableAssets.ResourceLocators.IResourceLocator[]
struct IResourceLocatorU5BU5D_t6B06AAAEFD8A8883C4138533CDE7D5EC641A4735;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// System.Reflection.Assembly
struct Assembly_t;
// UnityEngine.AddressableAssets.AssetLabelReference
struct AssetLabelReference_t2E4688A3D816970FC18B8221E042E92B0B6B2A16;
// UnityEngine.AddressableAssets.AssetReference
struct AssetReference_t6AF4EE7422535138F655BFF2636B23D0BE26C740;
// UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C;
// System.Threading.ContextCallback
struct ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// Main.EntryManager
struct EntryManager_t5E007CC610B9C44A6887E3B6A5A0B42D9F719E80;
// System.Exception
struct Exception_t;
// UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation
struct IAsyncOperation_tAA751C850291C1C50151BE8313DE52B2A894023C;
// System.Runtime.CompilerServices.IAsyncStateMachine
struct IAsyncStateMachine_t0680C7F905C553076B552D5A1A6E39E2F0F36AA2;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerable
struct IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131;
// UnityEngine.AddressableAssets.ResourceLocators.IResourceLocator
struct IResourceLocator_tB4E18FC0113846B03B2C4E0714C30F699F0B78BE;
// Cysharp.Threading.Tasks.CompilerServices.IStateMachineRunnerPromise
struct IStateMachineRunnerPromise_t5CE1FDF2F619E55F7DCFBE22E2B97835C6781C7B;
// Cysharp.Threading.Tasks.IUniTaskSource
struct IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.Threading.Tasks.StackGuard
struct StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352;
// System.String
struct String_t;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E;
// UnityEngine.TextAsset
struct TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540;

IL2CPP_EXTERN_C RuntimeClass* Addressables_tB93529ED0B034BF1A8C7830710BAA45C20A0F7D6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AwaiterActions_t5D05CAC006FDEBCF6B65E2B9224BC4B44783BBE5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t82D8539679564C8A0A1EEB4699662623AD898FC6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_tB18184CBAD09F13A294B19F6E31DBDCB29B3AC74_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IResourceLocator_tB4E18FC0113846B03B2C4E0714C30F699F0B78BE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IStateMachineRunnerPromise_t5CE1FDF2F619E55F7DCFBE22E2B97835C6781C7B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LoadImageErrorCode_tC778A2553ADB45B8C61EFE26C20837C23894FEB3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral315A0DB78E4B7025EF5AA4C425DA0C8E88F374E8;
IL2CPP_EXTERN_C String_t* _stringLiteral419942A02D410409B7B3822EEFC1509AE6DA407B;
IL2CPP_EXTERN_C String_t* _stringLiteral5D8680035BE790925076A087AB73E9FB073A0772;
IL2CPP_EXTERN_C String_t* _stringLiteral6410322643E79635617FBD1ABC04C07BD50C84A9;
IL2CPP_EXTERN_C String_t* _stringLiteral742AB32FC51B28B013E0515C193B77F34F20BDA6;
IL2CPP_EXTERN_C String_t* _stringLiteral7D0E74747A146E780636333F9CDF36151D29153B;
IL2CPP_EXTERN_C String_t* _stringLiteral9353260D431D22A3C7198ADA114FE3CF82123DF9;
IL2CPP_EXTERN_C const RuntimeMethod* AddressablesAsyncExtensions_GetAwaiter_TisIList_1_t41197D8BEF4B49150DE2882FD3E4E3AB1F03D62F_m4DABCC7A63F140064D236B6BD8BB35301E5FB7B5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AddressablesAsyncExtensions_GetAwaiter_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m14636F69724E842FA9662EAE709589B85618C551_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AddressablesAsyncExtensions_GetAwaiter_TisList_1_t540309E962CB768808E54FF9E53136790E1C4975_m847F6622D76C1002DC88557FCDDD022BCAF87921_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AddressablesAsyncExtensions_GetAwaiter_TisList_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_m69D6C4192B1B7A92537E67795F1ABEAC4D04581A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AddressablesAsyncExtensions_GetAwaiter_TisSceneInstance_t9D8203A59AA2C8EE21045B75AFA429EB1B6BF14A_m87B27639F3E7B5E0B7E8CF6D8D5E8D84A37E2B3D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Addressables_LoadAssetsAsync_TisTextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69_m8F1825C823927E945B0CF6E0045E413304231620_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncOperationHandle_1_get_Task_m758BF97BB1FF1A2ED1EDA51B1382845A5D21F063_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAsyncOperationAwaiter_t31DC22FCC690816BA1A3508437F3D208F7CE3CFF_TisU3C_enter_hotfix_main_sceneU3Ed__9_t9B561018599EEBB76E27BFE7574480D196AB56EC_mFBDB511684F553EA71D295512AAC71D70986AECE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_t1DDEDE7E04BB8D7D1E27227C101ED09A90BAABE2_TisU3C_update_address_ablesU3Ed__5_t1FF32C47FEFD857C04A3820565973362359C9708_m4E01B3AA4178ABCA2D6718C896C5260FF0C4D8EB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_t2FED8B6C42FE0974C7571445A740264E4CEFFD29_TisU3C_enter_hotfix_main_sceneU3Ed__9_t9B561018599EEBB76E27BFE7574480D196AB56EC_mE8EB5A5AA77A091821D8F6BCCAE1CD67C7041870_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_t7AE9CC84360E7F09FFB9D68779935EE4FE333A0E_TisU3C_downloadU3Ed__6_t9FDE76F9ADCA6BBDA45A209199A06BBF4CEA504E_m41AF4E246B77874BCD24B99B47E3A74D2F9DE267_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_t8B500B68E8763F6139A8470A24AB065434A17220_TisU3C_wait_for_enter_inputU3Ed__10_t1F519E78F77BE52FDE3B74FDC96C4E295EE733EE_m0CEBCEDA176C92139C16412C524EAE120F929492_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tD6901CCEDFC008EF054E21499F3DCFE124F52792_TisU3C_load_hotfix_dllsU3Ed__7_t779C30021B738E08FCFBE0CA14B688F31D262DF1_mEB6D44D8CCE495E8BFC2CE38E02BC65108BBF6CA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tD6901CCEDFC008EF054E21499F3DCFE124F52792_TisU3C_load_meta_data_for_aot_dllsU3Ed__8_tCAEEC6F4B744F2FA13F4EBBA82E82ECCC865F2AE_m29FA0B7CD2C9AA26F05E0B18A8BA05A1B5A99ACE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tE6CAD4D39AD4E3DC47F1BFE0ACC22A288650F25E_TisU3C_update_address_ablesU3Ed__5_t1FF32C47FEFD857C04A3820565973362359C9708_m1063BD34136E5DF0BE8BFA8BF4F23CD73CCD24D1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956_TisU3C_check_updateU3Ed__4_tC52AC11C5C7BC7CDB895194FA2D8EE5F4512B709_m056ABA85B0354271FF823CC6002E1C0684584C7E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956_TisU3C_downloadU3Ed__6_t9FDE76F9ADCA6BBDA45A209199A06BBF4CEA504E_m9751D888B9EF86588BA0D458A8D997C3D6DFF312_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956_TisU3C_enter_hotfix_main_sceneU3Ed__9_t9B561018599EEBB76E27BFE7574480D196AB56EC_mDE7530F3B1ABA76703CBDBA4F855D2A6A9476D3A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956_TisU3C_update_address_ablesU3Ed__5_t1FF32C47FEFD857C04A3820565973362359C9708_m6D0F2B4D522926147973B8FB250701AA85F23BEB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t56729B862AE97EABC420EB2261CE66FAB0E31166_TisU3C_update_address_ablesU3Ed__5_t1FF32C47FEFD857C04A3820565973362359C9708_m9A9E83D443C8FF56A720873EE2660A125BD986F3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncUniTaskMethodBuilder_Start_TisU3C_check_updateU3Ed__4_tC52AC11C5C7BC7CDB895194FA2D8EE5F4512B709_mE37C3544B701FBB183C034145D74043CDDB9E278_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncUniTaskMethodBuilder_Start_TisU3C_downloadU3Ed__6_t9FDE76F9ADCA6BBDA45A209199A06BBF4CEA504E_m2A58C814FFD6876E5E9040D52C73ED7BFA86BC3E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncUniTaskMethodBuilder_Start_TisU3C_enter_hotfix_main_sceneU3Ed__9_t9B561018599EEBB76E27BFE7574480D196AB56EC_mB10580251D3D79C0C95ED729B10C3D31FE33D57F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncUniTaskMethodBuilder_Start_TisU3C_load_hotfix_dllsU3Ed__7_t779C30021B738E08FCFBE0CA14B688F31D262DF1_m565D3F029CBBC67D6AFC52393E4E5B094AB84828_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncUniTaskMethodBuilder_Start_TisU3C_load_meta_data_for_aot_dllsU3Ed__8_tCAEEC6F4B744F2FA13F4EBBA82E82ECCC865F2AE_m0836399DFBD550E2531305CF00C37E233B6D80CB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncUniTaskMethodBuilder_Start_TisU3C_update_address_ablesU3Ed__5_t1FF32C47FEFD857C04A3820565973362359C9708_mE27CCF76B76BEB6C13772B29DD08C16A0CBEE1C8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncUniTaskMethodBuilder_Start_TisU3C_wait_for_enter_inputU3Ed__10_t1F519E78F77BE52FDE3B74FDC96C4E295EE733EE_m3BEAC30B7E729A4CD959677128FA3A32BA4DD925_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Awaiter_GetResult_m1BF227B2EC0B21CBE419CFF22BDBA6A7C9C79081_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Awaiter_GetResult_m1C61637BC91C1BE8CCD0B118EB65366E62B474BF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Awaiter_GetResult_m22850F7F33D4F8D29DF3725D6AE1627F7DBA8973_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Awaiter_GetResult_m4B63F7992C6A60270E7A65D3BA029B02E8492A15_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Awaiter_GetResult_mBBE5BA716B80F751D651580F18EF6D3564D6DEC4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Awaiter_get_IsCompleted_m5D9029DBD1082223118EBD2EF522323FD4FA28F8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Awaiter_get_IsCompleted_m6CFEF07FF823DE21C6CD5161E22FEDC0B9026072_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Awaiter_get_IsCompleted_m8A6B8683C02077FA5D55439EB08681166BB565BA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Awaiter_get_IsCompleted_mCFE009603778E0BD45941A0C4BFD6C5437934777_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Awaiter_get_IsCompleted_mEA517CCC52750E414219358F57E9AB3F6F8667E2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m9E27CB96C767F816BF5E072668F628209615053B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mE20EB0F3435DA5E172879D43541140BF1F5F2978_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m70628B9BE52F8E6A761C9A5B2F2486E296FD1FBE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m3F5700A99F79B66C45E7C5377D838DFE6F8D7DCA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m5FC569B19E1FE556C71A122795F87D563D42433E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_GetResult_mE4F31E35A089C54FBEA50786ECCF4CEB21D0417B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_get_IsCompleted_m409031C4DC9B07B8D94AF0E101A508771F5BDE8D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_GetAwaiter_m4A461E790248B13491BA593232A5390C6F90B1D4_RuntimeMethod_var;
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_com;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;

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

// System.Collections.Generic.List`1<UnityEngine.AddressableAssets.ResourceLocators.IResourceLocator>
struct List_1_t540309E962CB768808E54FF9E53136790E1C4975  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	IResourceLocatorU5BU5D_t6B06AAAEFD8A8883C4138533CDE7D5EC641A4735* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t540309E962CB768808E54FF9E53136790E1C4975_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	IResourceLocatorU5BU5D_t6B06AAAEFD8A8883C4138533CDE7D5EC641A4735* ___s_emptyArray_5;
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

// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___s_emptyArray_5;
};
struct Il2CppArrayBounds;

// System.Reflection.Assembly
struct Assembly_t  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.Reflection.Assembly
struct Assembly_t_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Reflection.Assembly
struct Assembly_t_marshaled_com
{
};

// UnityEngine.AddressableAssets.AssetLabelReference
struct AssetLabelReference_t2E4688A3D816970FC18B8221E042E92B0B6B2A16  : public RuntimeObject
{
	// System.String UnityEngine.AddressableAssets.AssetLabelReference::m_LabelString
	String_t* ___m_LabelString_0;
};

// Cysharp.Threading.Tasks.AwaiterActions
struct AwaiterActions_t5D05CAC006FDEBCF6B65E2B9224BC4B44783BBE5  : public RuntimeObject
{
};

struct AwaiterActions_t5D05CAC006FDEBCF6B65E2B9224BC4B44783BBE5_StaticFields
{
	// System.Action`1<System.Object> Cysharp.Threading.Tasks.AwaiterActions::InvokeContinuationDelegate
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___InvokeContinuationDelegate_0;
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

// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572  : public RuntimeObject
{
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_taskId
	int32_t ___m_taskId_1;
	// System.Delegate System.Threading.Tasks.Task::m_action
	Delegate_t* ___m_action_2;
	// System.Object System.Threading.Tasks.Task::m_stateObject
	RuntimeObject* ___m_stateObject_3;
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.Task::m_taskScheduler
	TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* ___m_taskScheduler_4;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::m_parent
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_parent_5;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_stateFlags
	int32_t ___m_stateFlags_6;
	// System.Object modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_continuationObject
	RuntimeObject* ___m_continuationObject_7;
	// System.Threading.Tasks.Task/ContingentProperties modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_contingentProperties
	ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540* ___m_contingentProperties_10;
};

struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticFields
{
	// System.Int32 System.Threading.Tasks.Task::s_taskIdCounter
	int32_t ___s_taskIdCounter_0;
	// System.Object System.Threading.Tasks.Task::s_taskCompletionSentinel
	RuntimeObject* ___s_taskCompletionSentinel_8;
	// System.Boolean System.Threading.Tasks.Task::s_asyncDebuggingEnabled
	bool ___s_asyncDebuggingEnabled_9;
	// System.Action`1<System.Object> System.Threading.Tasks.Task::s_taskCancelCallback
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___s_taskCancelCallback_11;
	// System.Func`1<System.Threading.Tasks.Task/ContingentProperties> System.Threading.Tasks.Task::s_createContingentProperties
	Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1* ___s_createContingentProperties_14;
	// System.Threading.Tasks.TaskFactory System.Threading.Tasks.Task::<Factory>k__BackingField
	TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* ___U3CFactoryU3Ek__BackingField_15;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::<CompletedTask>k__BackingField
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___U3CCompletedTaskU3Ek__BackingField_16;
	// System.Predicate`1<System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_IsExceptionObservedByParentPredicate
	Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED* ___s_IsExceptionObservedByParentPredicate_17;
	// System.Threading.ContextCallback System.Threading.Tasks.Task::s_ecCallback
	ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007* ___s_ecCallback_18;
	// System.Predicate`1<System.Object> System.Threading.Tasks.Task::s_IsTaskContinuationNullPredicate
	Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* ___s_IsTaskContinuationNullPredicate_19;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_currentActiveTasks
	Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55* ___s_currentActiveTasks_20;
	// System.Object System.Threading.Tasks.Task::s_activeTasksLock
	RuntimeObject* ___s_activeTasksLock_21;
};

struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_ThreadStaticFields
{
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::t_currentTask
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___t_currentTask_12;
	// System.Threading.Tasks.StackGuard System.Threading.Tasks.Task::t_stackGuard
	StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352* ___t_stackGuard_13;
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

// UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
};

// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<System.Collections.Generic.IList`1<System.Object>>
struct AsyncOperationHandle_1_t3000C87509C4839FB9B2B42FB09606B4A77341CA 
{
	// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1<TObject> UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1::m_InternalOp
	AsyncOperationBase_1_tF2678F4023386F66EBAA08E93CC7490F090FBF70* ___m_InternalOp_0;
	// System.Int32 UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1::m_Version
	int32_t ___m_Version_1;
	// System.String UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1::m_LocationName
	String_t* ___m_LocationName_2;
	// System.Boolean UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1::m_UnloadSceneOpExcludeReleaseCallback
	bool ___m_UnloadSceneOpExcludeReleaseCallback_3;
};

// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<System.Collections.Generic.IList`1<UnityEngine.TextAsset>>
struct AsyncOperationHandle_1_t3800DB64F3866CE794693A68107374760A72703E 
{
	// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1<TObject> UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1::m_InternalOp
	AsyncOperationBase_1_t467A94EE3B34333E03E89A40A24634E08CB2D75C* ___m_InternalOp_0;
	// System.Int32 UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1::m_Version
	int32_t ___m_Version_1;
	// System.String UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1::m_LocationName
	String_t* ___m_LocationName_2;
	// System.Boolean UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1::m_UnloadSceneOpExcludeReleaseCallback
	bool ___m_UnloadSceneOpExcludeReleaseCallback_3;
};

// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<System.Collections.Generic.List`1<UnityEngine.AddressableAssets.ResourceLocators.IResourceLocator>>
struct AsyncOperationHandle_1_tB06077285DDBB8B950592F6ACC37C333ADDD997F 
{
	// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1<TObject> UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1::m_InternalOp
	AsyncOperationBase_1_t6C0B1FFBBFC6F03B8212E7C1CA3679364DDE83E9* ___m_InternalOp_0;
	// System.Int32 UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1::m_Version
	int32_t ___m_Version_1;
	// System.String UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1::m_LocationName
	String_t* ___m_LocationName_2;
	// System.Boolean UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1::m_UnloadSceneOpExcludeReleaseCallback
	bool ___m_UnloadSceneOpExcludeReleaseCallback_3;
};

// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<System.Collections.Generic.List`1<System.String>>
struct AsyncOperationHandle_1_tAA8468BA8C5994CD242CA70D05A8474AF68F7646 
{
	// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1<TObject> UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1::m_InternalOp
	AsyncOperationBase_1_t8BFB6142CEBF919881F2972D476E2B0A36EE6EC3* ___m_InternalOp_0;
	// System.Int32 UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1::m_Version
	int32_t ___m_Version_1;
	// System.String UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1::m_LocationName
	String_t* ___m_LocationName_2;
	// System.Boolean UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1::m_UnloadSceneOpExcludeReleaseCallback
	bool ___m_UnloadSceneOpExcludeReleaseCallback_3;
};

// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<UnityEngine.AddressableAssets.ResourceLocators.IResourceLocator>
struct AsyncOperationHandle_1_t42BB61262B05D32A3C3C0E42ADB3294DFE46A8AC 
{
	// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1<TObject> UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1::m_InternalOp
	AsyncOperationBase_1_t710981A6C015CC62ADE562002416C75827C2D70B* ___m_InternalOp_0;
	// System.Int32 UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1::m_Version
	int32_t ___m_Version_1;
	// System.String UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1::m_LocationName
	String_t* ___m_LocationName_2;
	// System.Boolean UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1::m_UnloadSceneOpExcludeReleaseCallback
	bool ___m_UnloadSceneOpExcludeReleaseCallback_3;
};

// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<System.Int64>
struct AsyncOperationHandle_1_tFCA9C8A0842BE8A0771A40EA2C7FC9C94E2564BA 
{
	// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1<TObject> UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1::m_InternalOp
	AsyncOperationBase_1_tAEE4108C50A99611516FD568A0F32F241C92179F* ___m_InternalOp_0;
	// System.Int32 UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1::m_Version
	int32_t ___m_Version_1;
	// System.String UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1::m_LocationName
	String_t* ___m_LocationName_2;
	// System.Boolean UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1::m_UnloadSceneOpExcludeReleaseCallback
	bool ___m_UnloadSceneOpExcludeReleaseCallback_3;
};

// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<System.Object>
struct AsyncOperationHandle_1_tDD1D892D87C7A0C3189DD56DDB997AB1A2089A74 
{
	// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1<TObject> UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1::m_InternalOp
	AsyncOperationBase_1_t777EC3ACED7579A0B8EFE3EEE605D824516B3C13* ___m_InternalOp_0;
	// System.Int32 UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1::m_Version
	int32_t ___m_Version_1;
	// System.String UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1::m_LocationName
	String_t* ___m_LocationName_2;
	// System.Boolean UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1::m_UnloadSceneOpExcludeReleaseCallback
	bool ___m_UnloadSceneOpExcludeReleaseCallback_3;
};

// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<UnityEngine.ResourceManagement.ResourceProviders.SceneInstance>
struct AsyncOperationHandle_1_t074166892865CF484A3C77A1E9FB6F5E83DA1DA5 
{
	// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1<TObject> UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1::m_InternalOp
	AsyncOperationBase_1_t53CEC258A81CC6E6C433249F4DBF1B719395DBD7* ___m_InternalOp_0;
	// System.Int32 UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1::m_Version
	int32_t ___m_Version_1;
	// System.String UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1::m_LocationName
	String_t* ___m_LocationName_2;
	// System.Boolean UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1::m_UnloadSceneOpExcludeReleaseCallback
	bool ___m_UnloadSceneOpExcludeReleaseCallback_3;
};

// System.Collections.Generic.List`1/Enumerator<UnityEngine.AddressableAssets.ResourceLocators.IResourceLocator>
struct Enumerator_tF83AE2D8E34F83214881DA69EE6A105A5A7855B3 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t540309E962CB768808E54FF9E53136790E1C4975* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	RuntimeObject* ____current_3;
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

// System.Runtime.CompilerServices.TaskAwaiter`1<UnityEngine.AddressableAssets.ResourceLocators.IResourceLocator>
struct TaskAwaiter_1_t56729B862AE97EABC420EB2261CE66FAB0E31166 
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_tAF937EF1CA4B1527DA6CEB7CDABB2116AFF43CA1* ___m_task_0;
};

// System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>
struct TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA 
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* ___m_task_0;
};

// System.Threading.Tasks.Task`1<UnityEngine.AddressableAssets.ResourceLocators.IResourceLocator>
struct Task_1_tAF937EF1CA4B1527DA6CEB7CDABB2116AFF43CA1  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	RuntimeObject* ___m_result_22;
};

// Cysharp.Threading.Tasks.UniTask`1<System.Collections.Generic.IList`1<UnityEngine.TextAsset>>
struct UniTask_1_t51A9C1E2676CC8DA90EC9A50C1770A71B2E6693E 
{
	// Cysharp.Threading.Tasks.IUniTaskSource`1<T> Cysharp.Threading.Tasks.UniTask`1::source
	RuntimeObject* ___source_0;
	// T Cysharp.Threading.Tasks.UniTask`1::result
	RuntimeObject* ___result_1;
	// System.Int16 Cysharp.Threading.Tasks.UniTask`1::token
	int16_t ___token_2;
};

// Cysharp.Threading.Tasks.UniTask`1<System.Collections.Generic.List`1<UnityEngine.AddressableAssets.ResourceLocators.IResourceLocator>>
struct UniTask_1_tE19598DC24D7AD8556B42C0E4D34BB6E8A0AA480 
{
	// Cysharp.Threading.Tasks.IUniTaskSource`1<T> Cysharp.Threading.Tasks.UniTask`1::source
	RuntimeObject* ___source_0;
	// T Cysharp.Threading.Tasks.UniTask`1::result
	List_1_t540309E962CB768808E54FF9E53136790E1C4975* ___result_1;
	// System.Int16 Cysharp.Threading.Tasks.UniTask`1::token
	int16_t ___token_2;
};

// Cysharp.Threading.Tasks.UniTask`1<System.Collections.Generic.List`1<System.String>>
struct UniTask_1_t9FA463F7E93D99251624985DBF689145C44B8855 
{
	// Cysharp.Threading.Tasks.IUniTaskSource`1<T> Cysharp.Threading.Tasks.UniTask`1::source
	RuntimeObject* ___source_0;
	// T Cysharp.Threading.Tasks.UniTask`1::result
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___result_1;
	// System.Int16 Cysharp.Threading.Tasks.UniTask`1::token
	int16_t ___token_2;
};

// Cysharp.Threading.Tasks.UniTask`1<System.Int64>
struct UniTask_1_tB7F6E76EE4A7F880D1169687FBCF7C85E3F1ED72 
{
	// Cysharp.Threading.Tasks.IUniTaskSource`1<T> Cysharp.Threading.Tasks.UniTask`1::source
	RuntimeObject* ___source_0;
	// T Cysharp.Threading.Tasks.UniTask`1::result
	int64_t ___result_1;
	// System.Int16 Cysharp.Threading.Tasks.UniTask`1::token
	int16_t ___token_2;
};

// Cysharp.Threading.Tasks.UniTask`1<System.Object>
struct UniTask_1_tB1B04E29E602E879F73EEA52804796621BBFE440 
{
	// Cysharp.Threading.Tasks.IUniTaskSource`1<T> Cysharp.Threading.Tasks.UniTask`1::source
	RuntimeObject* ___source_0;
	// T Cysharp.Threading.Tasks.UniTask`1::result
	RuntimeObject* ___result_1;
	// System.Int16 Cysharp.Threading.Tasks.UniTask`1::token
	int16_t ___token_2;
};

// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle
struct AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D 
{
	// UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle::m_InternalOp
	RuntimeObject* ___m_InternalOp_0;
	// System.Int32 UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle::m_Version
	int32_t ___m_Version_1;
	// System.String UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle::m_LocationName
	String_t* ___m_LocationName_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle
struct AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D_marshaled_pinvoke
{
	RuntimeObject* ___m_InternalOp_0;
	int32_t ___m_Version_1;
	char* ___m_LocationName_2;
};
// Native definition for COM marshalling of UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle
struct AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D_marshaled_com
{
	RuntimeObject* ___m_InternalOp_0;
	int32_t ___m_Version_1;
	Il2CppChar* ___m_LocationName_2;
};

// Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder
struct AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0 
{
	// Cysharp.Threading.Tasks.CompilerServices.IStateMachineRunnerPromise Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder::runnerPromise
	RuntimeObject* ___runnerPromise_0;
	// System.Exception Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder::ex
	Exception_t* ___ex_1;
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

// System.Int16
struct Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175 
{
	// System.Int16 System.Int16::m_value
	int16_t ___m_value_0;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.Int64
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;
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

// UnityEngine.SceneManagement.Scene
struct Scene_tA1DC762B79745EB5140F054C884855B922318356 
{
	// System.Int32 UnityEngine.SceneManagement.Scene::m_Handle
	int32_t ___m_Handle_0;
};

// Cysharp.Threading.Tasks.UniTask
struct UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 
{
	// Cysharp.Threading.Tasks.IUniTaskSource Cysharp.Threading.Tasks.UniTask::source
	RuntimeObject* ___source_0;
	// System.Int16 Cysharp.Threading.Tasks.UniTask::token
	int16_t ___token_1;
};

struct UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_StaticFields
{
	// Cysharp.Threading.Tasks.UniTask Cysharp.Threading.Tasks.UniTask::CanceledUniTask
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 ___CanceledUniTask_2;
	// Cysharp.Threading.Tasks.UniTask Cysharp.Threading.Tasks.UniTask::CompletedTask
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 ___CompletedTask_3;
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

// Cysharp.Threading.Tasks.YieldAwaitable
struct YieldAwaitable_t8A3F912BCBF6C4BB5599E92BA0159168B4E14B3A 
{
	// Cysharp.Threading.Tasks.PlayerLoopTiming Cysharp.Threading.Tasks.YieldAwaitable::timing
	int32_t ___timing_0;
};

// Cysharp.Threading.Tasks.YieldAwaitable/Awaiter
struct Awaiter_t8B500B68E8763F6139A8470A24AB065434A17220 
{
	// Cysharp.Threading.Tasks.PlayerLoopTiming Cysharp.Threading.Tasks.YieldAwaitable/Awaiter::timing
	int32_t ___timing_0;
};

// Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Collections.Generic.IList`1<UnityEngine.TextAsset>>
struct Awaiter_tD6901CCEDFC008EF054E21499F3DCFE124F52792 
{
	// Cysharp.Threading.Tasks.UniTask`1<T> Cysharp.Threading.Tasks.UniTask`1/Awaiter::task
	UniTask_1_t51A9C1E2676CC8DA90EC9A50C1770A71B2E6693E ___task_0;
};

// Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Collections.Generic.List`1<UnityEngine.AddressableAssets.ResourceLocators.IResourceLocator>>
struct Awaiter_tE6CAD4D39AD4E3DC47F1BFE0ACC22A288650F25E 
{
	// Cysharp.Threading.Tasks.UniTask`1<T> Cysharp.Threading.Tasks.UniTask`1/Awaiter::task
	UniTask_1_tE19598DC24D7AD8556B42C0E4D34BB6E8A0AA480 ___task_0;
};

// Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Collections.Generic.List`1<System.String>>
struct Awaiter_t1DDEDE7E04BB8D7D1E27227C101ED09A90BAABE2 
{
	// Cysharp.Threading.Tasks.UniTask`1<T> Cysharp.Threading.Tasks.UniTask`1/Awaiter::task
	UniTask_1_t9FA463F7E93D99251624985DBF689145C44B8855 ___task_0;
};

// Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Int64>
struct Awaiter_t7AE9CC84360E7F09FFB9D68779935EE4FE333A0E 
{
	// Cysharp.Threading.Tasks.UniTask`1<T> Cysharp.Threading.Tasks.UniTask`1/Awaiter::task
	UniTask_1_tB7F6E76EE4A7F880D1169687FBCF7C85E3F1ED72 ___task_0;
};

// Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Object>
struct Awaiter_t0767B80BBE72D416CD4F41DA0FB54CD61AFEB101 
{
	// Cysharp.Threading.Tasks.UniTask`1<T> Cysharp.Threading.Tasks.UniTask`1/Awaiter::task
	UniTask_1_tB1B04E29E602E879F73EEA52804796621BBFE440 ___task_0;
};

// UnityEngine.AddressableAssets.AssetReference
struct AssetReference_t6AF4EE7422535138F655BFF2636B23D0BE26C740  : public RuntimeObject
{
	// System.String UnityEngine.AddressableAssets.AssetReference::m_AssetGUID
	String_t* ___m_AssetGUID_0;
	// System.String UnityEngine.AddressableAssets.AssetReference::m_SubObjectName
	String_t* ___m_SubObjectName_1;
	// System.String UnityEngine.AddressableAssets.AssetReference::m_SubObjectType
	String_t* ___m_SubObjectType_2;
	// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle UnityEngine.AddressableAssets.AssetReference::m_Operation
	AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D ___m_Operation_3;
};

// UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.AsyncOperation::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Action`1<UnityEngine.AsyncOperation> UnityEngine.AsyncOperation::m_completeCallback
	Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB* ___m_completeCallback_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};
// Native definition for COM marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
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

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};
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
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
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
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
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

// Main.EntryManager/<_wait_for_enter_input>d__10
struct U3C_wait_for_enter_inputU3Ed__10_t1F519E78F77BE52FDE3B74FDC96C4E295EE733EE 
{
	// System.Int32 Main.EntryManager/<_wait_for_enter_input>d__10::<>1__state
	int32_t ___U3CU3E1__state_0;
	// Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder Main.EntryManager/<_wait_for_enter_input>d__10::<>t__builder
	AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0 ___U3CU3Et__builder_1;
	// Cysharp.Threading.Tasks.YieldAwaitable/Awaiter Main.EntryManager/<_wait_for_enter_input>d__10::<>u__1
	Awaiter_t8B500B68E8763F6139A8470A24AB065434A17220 ___U3CU3Eu__1_2;
};

// Cysharp.Threading.Tasks.UniTask/Awaiter
struct Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 
{
	// Cysharp.Threading.Tasks.UniTask Cysharp.Threading.Tasks.UniTask/Awaiter::task
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 ___task_0;
};
// Native definition for P/Invoke marshalling of Cysharp.Threading.Tasks.UniTask/Awaiter
struct Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956_marshaled_pinvoke
{
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 ___task_0;
};
// Native definition for COM marshalling of Cysharp.Threading.Tasks.UniTask/Awaiter
struct Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956_marshaled_com
{
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 ___task_0;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
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

// UnityEngine.ResourceManagement.ResourceProviders.SceneInstance
struct SceneInstance_t9D8203A59AA2C8EE21045B75AFA429EB1B6BF14A 
{
	// UnityEngine.SceneManagement.Scene UnityEngine.ResourceManagement.ResourceProviders.SceneInstance::m_Scene
	Scene_tA1DC762B79745EB5140F054C884855B922318356 ___m_Scene_0;
	// UnityEngine.AsyncOperation UnityEngine.ResourceManagement.ResourceProviders.SceneInstance::m_Operation
	AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* ___m_Operation_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.ResourceManagement.ResourceProviders.SceneInstance
struct SceneInstance_t9D8203A59AA2C8EE21045B75AFA429EB1B6BF14A_marshaled_pinvoke
{
	Scene_tA1DC762B79745EB5140F054C884855B922318356 ___m_Scene_0;
	AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_pinvoke ___m_Operation_1;
};
// Native definition for COM marshalling of UnityEngine.ResourceManagement.ResourceProviders.SceneInstance
struct SceneInstance_t9D8203A59AA2C8EE21045B75AFA429EB1B6BF14A_marshaled_com
{
	Scene_tA1DC762B79745EB5140F054C884855B922318356 ___m_Scene_0;
	AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_com* ___m_Operation_1;
};

// UnityEngine.TextAsset
struct TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// Main.EntryManager/<_check_update>d__4
struct U3C_check_updateU3Ed__4_tC52AC11C5C7BC7CDB895194FA2D8EE5F4512B709 
{
	// System.Int32 Main.EntryManager/<_check_update>d__4::<>1__state
	int32_t ___U3CU3E1__state_0;
	// Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder Main.EntryManager/<_check_update>d__4::<>t__builder
	AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0 ___U3CU3Et__builder_1;
	// Main.EntryManager Main.EntryManager/<_check_update>d__4::<>4__this
	EntryManager_t5E007CC610B9C44A6887E3B6A5A0B42D9F719E80* ___U3CU3E4__this_2;
	// Cysharp.Threading.Tasks.UniTask/Awaiter Main.EntryManager/<_check_update>d__4::<>u__1
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 ___U3CU3Eu__1_3;
};

// Main.EntryManager/<_download>d__6
struct U3C_downloadU3Ed__6_t9FDE76F9ADCA6BBDA45A209199A06BBF4CEA504E 
{
	// System.Int32 Main.EntryManager/<_download>d__6::<>1__state
	int32_t ___U3CU3E1__state_0;
	// Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder Main.EntryManager/<_download>d__6::<>t__builder
	AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0 ___U3CU3Et__builder_1;
	// UnityEngine.AddressableAssets.ResourceLocators.IResourceLocator Main.EntryManager/<_download>d__6::resourceLocator
	RuntimeObject* ___resourceLocator_2;
	// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle Main.EntryManager/<_download>d__6::<downloadHandle>5__2
	AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D ___U3CdownloadHandleU3E5__2_3;
	// Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Int64> Main.EntryManager/<_download>d__6::<>u__1
	Awaiter_t7AE9CC84360E7F09FFB9D68779935EE4FE333A0E ___U3CU3Eu__1_4;
	// Cysharp.Threading.Tasks.UniTask/Awaiter Main.EntryManager/<_download>d__6::<>u__2
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 ___U3CU3Eu__2_5;
};

// Main.EntryManager/<_load_hotfix_dlls>d__7
struct U3C_load_hotfix_dllsU3Ed__7_t779C30021B738E08FCFBE0CA14B688F31D262DF1 
{
	// System.Int32 Main.EntryManager/<_load_hotfix_dlls>d__7::<>1__state
	int32_t ___U3CU3E1__state_0;
	// Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder Main.EntryManager/<_load_hotfix_dlls>d__7::<>t__builder
	AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0 ___U3CU3Et__builder_1;
	// Main.EntryManager Main.EntryManager/<_load_hotfix_dlls>d__7::<>4__this
	EntryManager_t5E007CC610B9C44A6887E3B6A5A0B42D9F719E80* ___U3CU3E4__this_2;
	// Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Collections.Generic.IList`1<UnityEngine.TextAsset>> Main.EntryManager/<_load_hotfix_dlls>d__7::<>u__1
	Awaiter_tD6901CCEDFC008EF054E21499F3DCFE124F52792 ___U3CU3Eu__1_3;
};

// Main.EntryManager/<_load_meta_data_for_aot_dlls>d__8
struct U3C_load_meta_data_for_aot_dllsU3Ed__8_tCAEEC6F4B744F2FA13F4EBBA82E82ECCC865F2AE 
{
	// System.Int32 Main.EntryManager/<_load_meta_data_for_aot_dlls>d__8::<>1__state
	int32_t ___U3CU3E1__state_0;
	// Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder Main.EntryManager/<_load_meta_data_for_aot_dlls>d__8::<>t__builder
	AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0 ___U3CU3Et__builder_1;
	// Main.EntryManager Main.EntryManager/<_load_meta_data_for_aot_dlls>d__8::<>4__this
	EntryManager_t5E007CC610B9C44A6887E3B6A5A0B42D9F719E80* ___U3CU3E4__this_2;
	// HybridCLR.HomologousImageMode Main.EntryManager/<_load_meta_data_for_aot_dlls>d__8::<mode>5__2
	int32_t ___U3CmodeU3E5__2_3;
	// Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Collections.Generic.IList`1<UnityEngine.TextAsset>> Main.EntryManager/<_load_meta_data_for_aot_dlls>d__8::<>u__1
	Awaiter_tD6901CCEDFC008EF054E21499F3DCFE124F52792 ___U3CU3Eu__1_4;
};

// Main.EntryManager/<_update_address_ables>d__5
struct U3C_update_address_ablesU3Ed__5_t1FF32C47FEFD857C04A3820565973362359C9708 
{
	// System.Int32 Main.EntryManager/<_update_address_ables>d__5::<>1__state
	int32_t ___U3CU3E1__state_0;
	// Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder Main.EntryManager/<_update_address_ables>d__5::<>t__builder
	AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0 ___U3CU3Et__builder_1;
	// Main.EntryManager Main.EntryManager/<_update_address_ables>d__5::<>4__this
	EntryManager_t5E007CC610B9C44A6887E3B6A5A0B42D9F719E80* ___U3CU3E4__this_2;
	// System.Runtime.CompilerServices.TaskAwaiter`1<UnityEngine.AddressableAssets.ResourceLocators.IResourceLocator> Main.EntryManager/<_update_address_ables>d__5::<>u__1
	TaskAwaiter_1_t56729B862AE97EABC420EB2261CE66FAB0E31166 ___U3CU3Eu__1_3;
	// Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Collections.Generic.List`1<System.String>> Main.EntryManager/<_update_address_ables>d__5::<>u__2
	Awaiter_t1DDEDE7E04BB8D7D1E27227C101ED09A90BAABE2 ___U3CU3Eu__2_4;
	// Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Collections.Generic.List`1<UnityEngine.AddressableAssets.ResourceLocators.IResourceLocator>> Main.EntryManager/<_update_address_ables>d__5::<>u__3
	Awaiter_tE6CAD4D39AD4E3DC47F1BFE0ACC22A288650F25E ___U3CU3Eu__3_5;
	// System.Collections.Generic.List`1/Enumerator<UnityEngine.AddressableAssets.ResourceLocators.IResourceLocator> Main.EntryManager/<_update_address_ables>d__5::<>7__wrap1
	Enumerator_tF83AE2D8E34F83214881DA69EE6A105A5A7855B3 ___U3CU3E7__wrap1_6;
	// UnityEngine.AddressableAssets.ResourceLocators.IResourceLocator Main.EntryManager/<_update_address_ables>d__5::<resourceLocator>5__3
	RuntimeObject* ___U3CresourceLocatorU3E5__3_7;
	// Cysharp.Threading.Tasks.UniTask/Awaiter Main.EntryManager/<_update_address_ables>d__5::<>u__4
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 ___U3CU3Eu__4_8;
};

// Cysharp.Threading.Tasks.UnityAsyncExtensions/AsyncOperationAwaiter
struct AsyncOperationAwaiter_t31DC22FCC690816BA1A3508437F3D208F7CE3CFF 
{
	// UnityEngine.AsyncOperation Cysharp.Threading.Tasks.UnityAsyncExtensions/AsyncOperationAwaiter::asyncOperation
	AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* ___asyncOperation_0;
	// System.Action`1<UnityEngine.AsyncOperation> Cysharp.Threading.Tasks.UnityAsyncExtensions/AsyncOperationAwaiter::continuationAction
	Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB* ___continuationAction_1;
};
// Native definition for P/Invoke marshalling of Cysharp.Threading.Tasks.UnityAsyncExtensions/AsyncOperationAwaiter
struct AsyncOperationAwaiter_t31DC22FCC690816BA1A3508437F3D208F7CE3CFF_marshaled_pinvoke
{
	AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_pinvoke ___asyncOperation_0;
	Il2CppMethodPointer ___continuationAction_1;
};
// Native definition for COM marshalling of Cysharp.Threading.Tasks.UnityAsyncExtensions/AsyncOperationAwaiter
struct AsyncOperationAwaiter_t31DC22FCC690816BA1A3508437F3D208F7CE3CFF_marshaled_com
{
	AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_com* ___asyncOperation_0;
	Il2CppMethodPointer ___continuationAction_1;
};

// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87  : public MulticastDelegate_t
{
};

// System.Action`1<UnityEngine.TextAsset>
struct Action_1_tCBB7BCB0560FBDC8B3457953A50A7FBCDA13572C  : public MulticastDelegate_t
{
};

// Cysharp.Threading.Tasks.UniTask`1<UnityEngine.ResourceManagement.ResourceProviders.SceneInstance>
struct UniTask_1_t96D9A7E86D862B1E3481FF626D461A695D0CB2EE 
{
	// Cysharp.Threading.Tasks.IUniTaskSource`1<T> Cysharp.Threading.Tasks.UniTask`1::source
	RuntimeObject* ___source_0;
	// T Cysharp.Threading.Tasks.UniTask`1::result
	SceneInstance_t9D8203A59AA2C8EE21045B75AFA429EB1B6BF14A ___result_1;
	// System.Int16 Cysharp.Threading.Tasks.UniTask`1::token
	int16_t ___token_2;
};

// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// Cysharp.Threading.Tasks.UniTask`1/Awaiter<UnityEngine.ResourceManagement.ResourceProviders.SceneInstance>
struct Awaiter_t2FED8B6C42FE0974C7571445A740264E4CEFFD29 
{
	// Cysharp.Threading.Tasks.UniTask`1<T> Cysharp.Threading.Tasks.UniTask`1/Awaiter::task
	UniTask_1_t96D9A7E86D862B1E3481FF626D461A695D0CB2EE ___task_0;
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// Main.EntryManager
struct EntryManager_t5E007CC610B9C44A6887E3B6A5A0B42D9F719E80  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.AddressableAssets.AssetLabelReference Main.EntryManager::hotUpdateDllLabelRef
	AssetLabelReference_t2E4688A3D816970FC18B8221E042E92B0B6B2A16* ___hotUpdateDllLabelRef_4;
	// UnityEngine.AddressableAssets.AssetLabelReference Main.EntryManager::aotMetadataDllLabelRef
	AssetLabelReference_t2E4688A3D816970FC18B8221E042E92B0B6B2A16* ___aotMetadataDllLabelRef_5;
	// UnityEngine.AddressableAssets.AssetReference Main.EntryManager::hotUpdateMainSceneRef
	AssetReference_t6AF4EE7422535138F655BFF2636B23D0BE26C740* ___hotUpdateMainSceneRef_6;
};

// Main.EntryManager/<_enter_hotfix_main_scene>d__9
struct U3C_enter_hotfix_main_sceneU3Ed__9_t9B561018599EEBB76E27BFE7574480D196AB56EC 
{
	// System.Int32 Main.EntryManager/<_enter_hotfix_main_scene>d__9::<>1__state
	int32_t ___U3CU3E1__state_0;
	// Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder Main.EntryManager/<_enter_hotfix_main_scene>d__9::<>t__builder
	AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0 ___U3CU3Et__builder_1;
	// Main.EntryManager Main.EntryManager/<_enter_hotfix_main_scene>d__9::<>4__this
	EntryManager_t5E007CC610B9C44A6887E3B6A5A0B42D9F719E80* ___U3CU3E4__this_2;
	// Cysharp.Threading.Tasks.UniTask/Awaiter Main.EntryManager/<_enter_hotfix_main_scene>d__9::<>u__1
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 ___U3CU3Eu__1_3;
	// Cysharp.Threading.Tasks.UniTask`1/Awaiter<UnityEngine.ResourceManagement.ResourceProviders.SceneInstance> Main.EntryManager/<_enter_hotfix_main_scene>d__9::<>u__2
	Awaiter_t2FED8B6C42FE0974C7571445A740264E4CEFFD29 ___U3CU3Eu__2_4;
	// Cysharp.Threading.Tasks.UnityAsyncExtensions/AsyncOperationAwaiter Main.EntryManager/<_enter_hotfix_main_scene>d__9::<>u__3
	AsyncOperationAwaiter_t31DC22FCC690816BA1A3508437F3D208F7CE3CFF ___U3CU3Eu__3_5;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};


// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder::Start<Main.EntryManager/<_check_update>d__4>(TStateMachine&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_Start_TisU3C_check_updateU3Ed__4_tC52AC11C5C7BC7CDB895194FA2D8EE5F4512B709_mE37C3544B701FBB183C034145D74043CDDB9E278_gshared_inline (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* __this, U3C_check_updateU3Ed__4_tC52AC11C5C7BC7CDB895194FA2D8EE5F4512B709* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder::Start<Main.EntryManager/<_update_address_ables>d__5>(TStateMachine&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_Start_TisU3C_update_address_ablesU3Ed__5_t1FF32C47FEFD857C04A3820565973362359C9708_mE27CCF76B76BEB6C13772B29DD08C16A0CBEE1C8_gshared_inline (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* __this, U3C_update_address_ablesU3Ed__5_t1FF32C47FEFD857C04A3820565973362359C9708* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder::Start<Main.EntryManager/<_download>d__6>(TStateMachine&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_Start_TisU3C_downloadU3Ed__6_t9FDE76F9ADCA6BBDA45A209199A06BBF4CEA504E_m2A58C814FFD6876E5E9040D52C73ED7BFA86BC3E_gshared_inline (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* __this, U3C_downloadU3Ed__6_t9FDE76F9ADCA6BBDA45A209199A06BBF4CEA504E* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder::Start<Main.EntryManager/<_load_hotfix_dlls>d__7>(TStateMachine&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_Start_TisU3C_load_hotfix_dllsU3Ed__7_t779C30021B738E08FCFBE0CA14B688F31D262DF1_m565D3F029CBBC67D6AFC52393E4E5B094AB84828_gshared_inline (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* __this, U3C_load_hotfix_dllsU3Ed__7_t779C30021B738E08FCFBE0CA14B688F31D262DF1* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder::Start<Main.EntryManager/<_load_meta_data_for_aot_dlls>d__8>(TStateMachine&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_Start_TisU3C_load_meta_data_for_aot_dllsU3Ed__8_tCAEEC6F4B744F2FA13F4EBBA82E82ECCC865F2AE_m0836399DFBD550E2531305CF00C37E233B6D80CB_gshared_inline (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* __this, U3C_load_meta_data_for_aot_dllsU3Ed__8_tCAEEC6F4B744F2FA13F4EBBA82E82ECCC865F2AE* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder::Start<Main.EntryManager/<_enter_hotfix_main_scene>d__9>(TStateMachine&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_Start_TisU3C_enter_hotfix_main_sceneU3Ed__9_t9B561018599EEBB76E27BFE7574480D196AB56EC_mB10580251D3D79C0C95ED729B10C3D31FE33D57F_gshared_inline (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* __this, U3C_enter_hotfix_main_sceneU3Ed__9_t9B561018599EEBB76E27BFE7574480D196AB56EC* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder::Start<Main.EntryManager/<_wait_for_enter_input>d__10>(TStateMachine&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_Start_TisU3C_wait_for_enter_inputU3Ed__10_t1F519E78F77BE52FDE3B74FDC96C4E295EE733EE_m3BEAC30B7E729A4CD959677128FA3A32BA4DD925_gshared_inline (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* __this, U3C_wait_for_enter_inputU3Ed__10_t1F519E78F77BE52FDE3B74FDC96C4E295EE733EE* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder::AwaitUnsafeOnCompleted<Cysharp.Threading.Tasks.UniTask/Awaiter,Main.EntryManager/<_check_update>d__4>(TAwaiter&,TStateMachine&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956_TisU3C_check_updateU3Ed__4_tC52AC11C5C7BC7CDB895194FA2D8EE5F4512B709_m056ABA85B0354271FF823CC6002E1C0684584C7E_gshared_inline (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* __this, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* ___awaiter0, U3C_check_updateU3Ed__4_tC52AC11C5C7BC7CDB895194FA2D8EE5F4512B709* ___stateMachine1, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task`1<TObject> UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<System.Object>::get_Task()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* AsyncOperationHandle_1_get_Task_mAB8C9F6F80C744563526BF5DB8820400E55F183A_gshared (AsyncOperationHandle_1_tDD1D892D87C7A0C3189DD56DDB997AB1A2089A74* __this, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.TaskAwaiter`1<TResult> System.Threading.Tasks.Task`1<System.Object>::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA Task_1_GetAwaiter_mD80ED263BF3F1F8DBDBD177BA3401A0AAAFA38E3_gshared (Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* __this, const RuntimeMethod* method) ;
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskAwaiter_1_get_IsCompleted_mEEBB09E26F4165A0F864D92E1890CFCD2C8CFD54_gshared (TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA* __this, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>,Main.EntryManager/<_update_address_ables>d__5>(TAwaiter&,TStateMachine&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisU3C_update_address_ablesU3Ed__5_t1FF32C47FEFD857C04A3820565973362359C9708_mA90F888E2EC2F3EEF9F60FCB7F2A40AED821C8AA_gshared_inline (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* __this, TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA* ___awaiter0, U3C_update_address_ablesU3Ed__5_t1FF32C47FEFD857C04A3820565973362359C9708* ___stateMachine1, const RuntimeMethod* method) ;
// TResult System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TaskAwaiter_1_GetResult_mA4A8A1F43A456B40DDA251D00026C60919AED85B_gshared (TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA* __this, const RuntimeMethod* method) ;
// Cysharp.Threading.Tasks.UniTask`1/Awaiter<T> Cysharp.Threading.Tasks.AddressablesAsyncExtensions::GetAwaiter<System.Object>(UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Awaiter_t0767B80BBE72D416CD4F41DA0FB54CD61AFEB101 AddressablesAsyncExtensions_GetAwaiter_TisRuntimeObject_mA66F5C3ABBF51980FAC915A7B024B6C0370A2C39_gshared (AsyncOperationHandle_1_tDD1D892D87C7A0C3189DD56DDB997AB1A2089A74 ___handle0, const RuntimeMethod* method) ;
// System.Boolean Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Object>::get_IsCompleted()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Awaiter_get_IsCompleted_m64CB466F8C142312263397E37C6298E842139126_gshared_inline (Awaiter_t0767B80BBE72D416CD4F41DA0FB54CD61AFEB101* __this, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder::AwaitUnsafeOnCompleted<Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Object>,Main.EntryManager/<_update_address_ables>d__5>(TAwaiter&,TStateMachine&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_t0767B80BBE72D416CD4F41DA0FB54CD61AFEB101_TisU3C_update_address_ablesU3Ed__5_t1FF32C47FEFD857C04A3820565973362359C9708_m292D381BC401A91E9D150C005BA5D8C89BC9540C_gshared_inline (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* __this, Awaiter_t0767B80BBE72D416CD4F41DA0FB54CD61AFEB101* ___awaiter0, U3C_update_address_ablesU3Ed__5_t1FF32C47FEFD857C04A3820565973362359C9708* ___stateMachine1, const RuntimeMethod* method) ;
// T Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Object>::GetResult()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Awaiter_GetResult_mD47D2D1B93A9A867CBEDAC2D7033F31DBCE10C3B_gshared_inline (Awaiter_t0767B80BBE72D416CD4F41DA0FB54CD61AFEB101* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder::AwaitUnsafeOnCompleted<Cysharp.Threading.Tasks.UniTask/Awaiter,Main.EntryManager/<_update_address_ables>d__5>(TAwaiter&,TStateMachine&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956_TisU3C_update_address_ablesU3Ed__5_t1FF32C47FEFD857C04A3820565973362359C9708_m6D0F2B4D522926147973B8FB250701AA85F23BEB_gshared_inline (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* __this, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* ___awaiter0, U3C_update_address_ablesU3Ed__5_t1FF32C47FEFD857C04A3820565973362359C9708* ___stateMachine1, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// Cysharp.Threading.Tasks.UniTask`1/Awaiter<T> Cysharp.Threading.Tasks.AddressablesAsyncExtensions::GetAwaiter<System.Int64>(UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Awaiter_t7AE9CC84360E7F09FFB9D68779935EE4FE333A0E AddressablesAsyncExtensions_GetAwaiter_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m14636F69724E842FA9662EAE709589B85618C551_gshared (AsyncOperationHandle_1_tFCA9C8A0842BE8A0771A40EA2C7FC9C94E2564BA ___handle0, const RuntimeMethod* method) ;
// System.Boolean Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Int64>::get_IsCompleted()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Awaiter_get_IsCompleted_mCFE009603778E0BD45941A0C4BFD6C5437934777_gshared_inline (Awaiter_t7AE9CC84360E7F09FFB9D68779935EE4FE333A0E* __this, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder::AwaitUnsafeOnCompleted<Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Int64>,Main.EntryManager/<_download>d__6>(TAwaiter&,TStateMachine&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_t7AE9CC84360E7F09FFB9D68779935EE4FE333A0E_TisU3C_downloadU3Ed__6_t9FDE76F9ADCA6BBDA45A209199A06BBF4CEA504E_m41AF4E246B77874BCD24B99B47E3A74D2F9DE267_gshared_inline (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* __this, Awaiter_t7AE9CC84360E7F09FFB9D68779935EE4FE333A0E* ___awaiter0, U3C_downloadU3Ed__6_t9FDE76F9ADCA6BBDA45A209199A06BBF4CEA504E* ___stateMachine1, const RuntimeMethod* method) ;
// T Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Int64>::GetResult()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t Awaiter_GetResult_m4B63F7992C6A60270E7A65D3BA029B02E8492A15_gshared_inline (Awaiter_t7AE9CC84360E7F09FFB9D68779935EE4FE333A0E* __this, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder::AwaitUnsafeOnCompleted<Cysharp.Threading.Tasks.UniTask/Awaiter,Main.EntryManager/<_download>d__6>(TAwaiter&,TStateMachine&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956_TisU3C_downloadU3Ed__6_t9FDE76F9ADCA6BBDA45A209199A06BBF4CEA504E_m9751D888B9EF86588BA0D458A8D997C3D6DFF312_gshared_inline (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* __this, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* ___awaiter0, U3C_downloadU3Ed__6_t9FDE76F9ADCA6BBDA45A209199A06BBF4CEA504E* ___stateMachine1, const RuntimeMethod* method) ;
// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<System.Collections.Generic.IList`1<TObject>> UnityEngine.AddressableAssets.Addressables::LoadAssetsAsync<System.Object>(System.Object,System.Action`1<TObject>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncOperationHandle_1_t3000C87509C4839FB9B2B42FB09606B4A77341CA Addressables_LoadAssetsAsync_TisRuntimeObject_mB53CD7979CD8D5FE8E16D871A8FCE3957AC4A7A7_gshared (RuntimeObject* ___key0, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___callback1, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder::AwaitUnsafeOnCompleted<Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Object>,Main.EntryManager/<_load_hotfix_dlls>d__7>(TAwaiter&,TStateMachine&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_t0767B80BBE72D416CD4F41DA0FB54CD61AFEB101_TisU3C_load_hotfix_dllsU3Ed__7_t779C30021B738E08FCFBE0CA14B688F31D262DF1_mE18A908ADAE89124C1B0663D23C047DC31A87BFE_gshared_inline (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* __this, Awaiter_t0767B80BBE72D416CD4F41DA0FB54CD61AFEB101* ___awaiter0, U3C_load_hotfix_dllsU3Ed__7_t779C30021B738E08FCFBE0CA14B688F31D262DF1* ___stateMachine1, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder::AwaitUnsafeOnCompleted<Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Object>,Main.EntryManager/<_load_meta_data_for_aot_dlls>d__8>(TAwaiter&,TStateMachine&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_t0767B80BBE72D416CD4F41DA0FB54CD61AFEB101_TisU3C_load_meta_data_for_aot_dllsU3Ed__8_tCAEEC6F4B744F2FA13F4EBBA82E82ECCC865F2AE_m1B9D83F141ECB5E3FD67174A398541A5ADD98310_gshared_inline (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* __this, Awaiter_t0767B80BBE72D416CD4F41DA0FB54CD61AFEB101* ___awaiter0, U3C_load_meta_data_for_aot_dllsU3Ed__8_tCAEEC6F4B744F2FA13F4EBBA82E82ECCC865F2AE* ___stateMachine1, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder::AwaitUnsafeOnCompleted<Cysharp.Threading.Tasks.UniTask/Awaiter,Main.EntryManager/<_enter_hotfix_main_scene>d__9>(TAwaiter&,TStateMachine&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956_TisU3C_enter_hotfix_main_sceneU3Ed__9_t9B561018599EEBB76E27BFE7574480D196AB56EC_mDE7530F3B1ABA76703CBDBA4F855D2A6A9476D3A_gshared_inline (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* __this, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* ___awaiter0, U3C_enter_hotfix_main_sceneU3Ed__9_t9B561018599EEBB76E27BFE7574480D196AB56EC* ___stateMachine1, const RuntimeMethod* method) ;
// Cysharp.Threading.Tasks.UniTask`1/Awaiter<T> Cysharp.Threading.Tasks.AddressablesAsyncExtensions::GetAwaiter<UnityEngine.ResourceManagement.ResourceProviders.SceneInstance>(UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Awaiter_t2FED8B6C42FE0974C7571445A740264E4CEFFD29 AddressablesAsyncExtensions_GetAwaiter_TisSceneInstance_t9D8203A59AA2C8EE21045B75AFA429EB1B6BF14A_m87B27639F3E7B5E0B7E8CF6D8D5E8D84A37E2B3D_gshared (AsyncOperationHandle_1_t074166892865CF484A3C77A1E9FB6F5E83DA1DA5 ___handle0, const RuntimeMethod* method) ;
// System.Boolean Cysharp.Threading.Tasks.UniTask`1/Awaiter<UnityEngine.ResourceManagement.ResourceProviders.SceneInstance>::get_IsCompleted()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Awaiter_get_IsCompleted_mEA517CCC52750E414219358F57E9AB3F6F8667E2_gshared_inline (Awaiter_t2FED8B6C42FE0974C7571445A740264E4CEFFD29* __this, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder::AwaitUnsafeOnCompleted<Cysharp.Threading.Tasks.UniTask`1/Awaiter<UnityEngine.ResourceManagement.ResourceProviders.SceneInstance>,Main.EntryManager/<_enter_hotfix_main_scene>d__9>(TAwaiter&,TStateMachine&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_t2FED8B6C42FE0974C7571445A740264E4CEFFD29_TisU3C_enter_hotfix_main_sceneU3Ed__9_t9B561018599EEBB76E27BFE7574480D196AB56EC_mE8EB5A5AA77A091821D8F6BCCAE1CD67C7041870_gshared_inline (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* __this, Awaiter_t2FED8B6C42FE0974C7571445A740264E4CEFFD29* ___awaiter0, U3C_enter_hotfix_main_sceneU3Ed__9_t9B561018599EEBB76E27BFE7574480D196AB56EC* ___stateMachine1, const RuntimeMethod* method) ;
// T Cysharp.Threading.Tasks.UniTask`1/Awaiter<UnityEngine.ResourceManagement.ResourceProviders.SceneInstance>::GetResult()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SceneInstance_t9D8203A59AA2C8EE21045B75AFA429EB1B6BF14A Awaiter_GetResult_m1BF227B2EC0B21CBE419CFF22BDBA6A7C9C79081_gshared_inline (Awaiter_t2FED8B6C42FE0974C7571445A740264E4CEFFD29* __this, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder::AwaitUnsafeOnCompleted<Cysharp.Threading.Tasks.UnityAsyncExtensions/AsyncOperationAwaiter,Main.EntryManager/<_enter_hotfix_main_scene>d__9>(TAwaiter&,TStateMachine&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAsyncOperationAwaiter_t31DC22FCC690816BA1A3508437F3D208F7CE3CFF_TisU3C_enter_hotfix_main_sceneU3Ed__9_t9B561018599EEBB76E27BFE7574480D196AB56EC_mFBDB511684F553EA71D295512AAC71D70986AECE_gshared_inline (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* __this, AsyncOperationAwaiter_t31DC22FCC690816BA1A3508437F3D208F7CE3CFF* ___awaiter0, U3C_enter_hotfix_main_sceneU3Ed__9_t9B561018599EEBB76E27BFE7574480D196AB56EC* ___stateMachine1, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder::AwaitUnsafeOnCompleted<Cysharp.Threading.Tasks.YieldAwaitable/Awaiter,Main.EntryManager/<_wait_for_enter_input>d__10>(TAwaiter&,TStateMachine&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_t8B500B68E8763F6139A8470A24AB065434A17220_TisU3C_wait_for_enter_inputU3Ed__10_t1F519E78F77BE52FDE3B74FDC96C4E295EE733EE_m0CEBCEDA176C92139C16412C524EAE120F929492_gshared_inline (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* __this, Awaiter_t8B500B68E8763F6139A8470A24AB065434A17220* ___awaiter0, U3C_wait_for_enter_inputU3Ed__10_t1F519E78F77BE52FDE3B74FDC96C4E295EE733EE* ___stateMachine1, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>::UnsafeOnCompleted(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskAwaiter_1_UnsafeOnCompleted_m432BB796161116E663D0AEE2F77FD3B254442C0B_gshared (TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___continuation0, const RuntimeMethod* method) ;
// Cysharp.Threading.Tasks.UniTaskStatus Cysharp.Threading.Tasks.UniTask`1<System.Object>::get_Status()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UniTask_1_get_Status_mA5CFB18FB86A0F36F682D8E814F9A25CE84D87C5_gshared_inline (UniTask_1_tB1B04E29E602E879F73EEA52804796621BBFE440* __this, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Object>::UnsafeOnCompleted(System.Action)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Awaiter_UnsafeOnCompleted_m1CCB04A74D166784C6CDEFAA8AA67879A0CCE793_gshared_inline (Awaiter_t0767B80BBE72D416CD4F41DA0FB54CD61AFEB101* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___continuation0, const RuntimeMethod* method) ;
// Cysharp.Threading.Tasks.UniTaskStatus Cysharp.Threading.Tasks.UniTask`1<System.Int64>::get_Status()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UniTask_1_get_Status_m621A3ED628D31F42C69A04584E93A8A02E381117_gshared_inline (UniTask_1_tB7F6E76EE4A7F880D1169687FBCF7C85E3F1ED72* __this, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Int64>::UnsafeOnCompleted(System.Action)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Awaiter_UnsafeOnCompleted_mB8189A47DD4AD1C6B2865449D720708512EE20D5_gshared_inline (Awaiter_t7AE9CC84360E7F09FFB9D68779935EE4FE333A0E* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___continuation0, const RuntimeMethod* method) ;
// Cysharp.Threading.Tasks.UniTaskStatus Cysharp.Threading.Tasks.UniTask`1<UnityEngine.ResourceManagement.ResourceProviders.SceneInstance>::get_Status()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UniTask_1_get_Status_m28112EE74B6E94F3BC5A50BD09CBBE5B3D3D5005_gshared_inline (UniTask_1_t96D9A7E86D862B1E3481FF626D461A695D0CB2EE* __this, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.UniTask`1/Awaiter<UnityEngine.ResourceManagement.ResourceProviders.SceneInstance>::UnsafeOnCompleted(System.Action)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Awaiter_UnsafeOnCompleted_m879C5B3DA0025E382898DBC531A796B4B03D85A1_gshared_inline (Awaiter_t2FED8B6C42FE0974C7571445A740264E4CEFFD29* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___continuation0, const RuntimeMethod* method) ;

// Cysharp.Threading.Tasks.UniTask Main.EntryManager::_check_update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 EntryManager__check_update_mDA4A9E6F4013D1DFE67ED418983353B9CD893FA7 (EntryManager_t5E007CC610B9C44A6887E3B6A5A0B42D9F719E80* __this, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.UniTaskExtensions::Forget(Cysharp.Threading.Tasks.UniTask)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniTaskExtensions_Forget_m8F82202C3DB2020AAE7F874AE049DA711A01DF13 (UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 ___task0, const RuntimeMethod* method) ;
// Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder::Create()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0 AsyncUniTaskMethodBuilder_Create_m882DFD5EE004FF6F84F182A3AC170AEDCA8C5327_inline (const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder::Start<Main.EntryManager/<_check_update>d__4>(TStateMachine&)
inline void AsyncUniTaskMethodBuilder_Start_TisU3C_check_updateU3Ed__4_tC52AC11C5C7BC7CDB895194FA2D8EE5F4512B709_mE37C3544B701FBB183C034145D74043CDDB9E278_inline (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* __this, U3C_check_updateU3Ed__4_tC52AC11C5C7BC7CDB895194FA2D8EE5F4512B709* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, U3C_check_updateU3Ed__4_tC52AC11C5C7BC7CDB895194FA2D8EE5F4512B709*, const RuntimeMethod*))AsyncUniTaskMethodBuilder_Start_TisU3C_check_updateU3Ed__4_tC52AC11C5C7BC7CDB895194FA2D8EE5F4512B709_mE37C3544B701FBB183C034145D74043CDDB9E278_gshared_inline)(__this, ___stateMachine0, method);
}
// Cysharp.Threading.Tasks.UniTask Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder::get_Task()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 AsyncUniTaskMethodBuilder_get_Task_m11E43D69C4F85EB23AAC58143DE695309D1022EC_inline (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* __this, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder::Start<Main.EntryManager/<_update_address_ables>d__5>(TStateMachine&)
inline void AsyncUniTaskMethodBuilder_Start_TisU3C_update_address_ablesU3Ed__5_t1FF32C47FEFD857C04A3820565973362359C9708_mE27CCF76B76BEB6C13772B29DD08C16A0CBEE1C8_inline (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* __this, U3C_update_address_ablesU3Ed__5_t1FF32C47FEFD857C04A3820565973362359C9708* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, U3C_update_address_ablesU3Ed__5_t1FF32C47FEFD857C04A3820565973362359C9708*, const RuntimeMethod*))AsyncUniTaskMethodBuilder_Start_TisU3C_update_address_ablesU3Ed__5_t1FF32C47FEFD857C04A3820565973362359C9708_mE27CCF76B76BEB6C13772B29DD08C16A0CBEE1C8_gshared_inline)(__this, ___stateMachine0, method);
}
// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder::Start<Main.EntryManager/<_download>d__6>(TStateMachine&)
inline void AsyncUniTaskMethodBuilder_Start_TisU3C_downloadU3Ed__6_t9FDE76F9ADCA6BBDA45A209199A06BBF4CEA504E_m2A58C814FFD6876E5E9040D52C73ED7BFA86BC3E_inline (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* __this, U3C_downloadU3Ed__6_t9FDE76F9ADCA6BBDA45A209199A06BBF4CEA504E* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, U3C_downloadU3Ed__6_t9FDE76F9ADCA6BBDA45A209199A06BBF4CEA504E*, const RuntimeMethod*))AsyncUniTaskMethodBuilder_Start_TisU3C_downloadU3Ed__6_t9FDE76F9ADCA6BBDA45A209199A06BBF4CEA504E_m2A58C814FFD6876E5E9040D52C73ED7BFA86BC3E_gshared_inline)(__this, ___stateMachine0, method);
}
// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder::Start<Main.EntryManager/<_load_hotfix_dlls>d__7>(TStateMachine&)
inline void AsyncUniTaskMethodBuilder_Start_TisU3C_load_hotfix_dllsU3Ed__7_t779C30021B738E08FCFBE0CA14B688F31D262DF1_m565D3F029CBBC67D6AFC52393E4E5B094AB84828_inline (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* __this, U3C_load_hotfix_dllsU3Ed__7_t779C30021B738E08FCFBE0CA14B688F31D262DF1* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, U3C_load_hotfix_dllsU3Ed__7_t779C30021B738E08FCFBE0CA14B688F31D262DF1*, const RuntimeMethod*))AsyncUniTaskMethodBuilder_Start_TisU3C_load_hotfix_dllsU3Ed__7_t779C30021B738E08FCFBE0CA14B688F31D262DF1_m565D3F029CBBC67D6AFC52393E4E5B094AB84828_gshared_inline)(__this, ___stateMachine0, method);
}
// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder::Start<Main.EntryManager/<_load_meta_data_for_aot_dlls>d__8>(TStateMachine&)
inline void AsyncUniTaskMethodBuilder_Start_TisU3C_load_meta_data_for_aot_dllsU3Ed__8_tCAEEC6F4B744F2FA13F4EBBA82E82ECCC865F2AE_m0836399DFBD550E2531305CF00C37E233B6D80CB_inline (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* __this, U3C_load_meta_data_for_aot_dllsU3Ed__8_tCAEEC6F4B744F2FA13F4EBBA82E82ECCC865F2AE* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, U3C_load_meta_data_for_aot_dllsU3Ed__8_tCAEEC6F4B744F2FA13F4EBBA82E82ECCC865F2AE*, const RuntimeMethod*))AsyncUniTaskMethodBuilder_Start_TisU3C_load_meta_data_for_aot_dllsU3Ed__8_tCAEEC6F4B744F2FA13F4EBBA82E82ECCC865F2AE_m0836399DFBD550E2531305CF00C37E233B6D80CB_gshared_inline)(__this, ___stateMachine0, method);
}
// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder::Start<Main.EntryManager/<_enter_hotfix_main_scene>d__9>(TStateMachine&)
inline void AsyncUniTaskMethodBuilder_Start_TisU3C_enter_hotfix_main_sceneU3Ed__9_t9B561018599EEBB76E27BFE7574480D196AB56EC_mB10580251D3D79C0C95ED729B10C3D31FE33D57F_inline (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* __this, U3C_enter_hotfix_main_sceneU3Ed__9_t9B561018599EEBB76E27BFE7574480D196AB56EC* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, U3C_enter_hotfix_main_sceneU3Ed__9_t9B561018599EEBB76E27BFE7574480D196AB56EC*, const RuntimeMethod*))AsyncUniTaskMethodBuilder_Start_TisU3C_enter_hotfix_main_sceneU3Ed__9_t9B561018599EEBB76E27BFE7574480D196AB56EC_mB10580251D3D79C0C95ED729B10C3D31FE33D57F_gshared_inline)(__this, ___stateMachine0, method);
}
// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder::Start<Main.EntryManager/<_wait_for_enter_input>d__10>(TStateMachine&)
inline void AsyncUniTaskMethodBuilder_Start_TisU3C_wait_for_enter_inputU3Ed__10_t1F519E78F77BE52FDE3B74FDC96C4E295EE733EE_m3BEAC30B7E729A4CD959677128FA3A32BA4DD925_inline (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* __this, U3C_wait_for_enter_inputU3Ed__10_t1F519E78F77BE52FDE3B74FDC96C4E295EE733EE* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, U3C_wait_for_enter_inputU3Ed__10_t1F519E78F77BE52FDE3B74FDC96C4E295EE733EE*, const RuntimeMethod*))AsyncUniTaskMethodBuilder_Start_TisU3C_wait_for_enter_inputU3Ed__10_t1F519E78F77BE52FDE3B74FDC96C4E295EE733EE_m3BEAC30B7E729A4CD959677128FA3A32BA4DD925_gshared_inline)(__this, ___stateMachine0, method);
}
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// Cysharp.Threading.Tasks.UniTask Main.EntryManager::_update_address_ables()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 EntryManager__update_address_ables_mC63CFEDC6536CFA50719E534996943E24284916F (EntryManager_t5E007CC610B9C44A6887E3B6A5A0B42D9F719E80* __this, const RuntimeMethod* method) ;
// Cysharp.Threading.Tasks.UniTask/Awaiter Cysharp.Threading.Tasks.UniTask::GetAwaiter()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline (UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270* __this, const RuntimeMethod* method) ;
// System.Boolean Cysharp.Threading.Tasks.UniTask/Awaiter::get_IsCompleted()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* __this, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder::AwaitUnsafeOnCompleted<Cysharp.Threading.Tasks.UniTask/Awaiter,Main.EntryManager/<_check_update>d__4>(TAwaiter&,TStateMachine&)
inline void AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956_TisU3C_check_updateU3Ed__4_tC52AC11C5C7BC7CDB895194FA2D8EE5F4512B709_m056ABA85B0354271FF823CC6002E1C0684584C7E_inline (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* __this, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* ___awaiter0, U3C_check_updateU3Ed__4_tC52AC11C5C7BC7CDB895194FA2D8EE5F4512B709* ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3C_check_updateU3Ed__4_tC52AC11C5C7BC7CDB895194FA2D8EE5F4512B709*, const RuntimeMethod*))AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956_TisU3C_check_updateU3Ed__4_tC52AC11C5C7BC7CDB895194FA2D8EE5F4512B709_m056ABA85B0354271FF823CC6002E1C0684584C7E_gshared_inline)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void Cysharp.Threading.Tasks.UniTask/Awaiter::GetResult()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* __this, const RuntimeMethod* method) ;
// Cysharp.Threading.Tasks.UniTask Main.EntryManager::_load_meta_data_for_aot_dlls()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 EntryManager__load_meta_data_for_aot_dlls_m774D5A9F8B33899C3069069621DD437980EA1694 (EntryManager_t5E007CC610B9C44A6887E3B6A5A0B42D9F719E80* __this, const RuntimeMethod* method) ;
// Cysharp.Threading.Tasks.UniTask Main.EntryManager::_load_hotfix_dlls()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 EntryManager__load_hotfix_dlls_m0177EABB672B77EC28663D6BF757CE541CD7D3DA (EntryManager_t5E007CC610B9C44A6887E3B6A5A0B42D9F719E80* __this, const RuntimeMethod* method) ;
// Cysharp.Threading.Tasks.UniTask Main.EntryManager::_enter_hotfix_main_scene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 EntryManager__enter_hotfix_main_scene_m81B01F1256F06C108AD9B960C450239ECE2C7AC9 (EntryManager_t5E007CC610B9C44A6887E3B6A5A0B42D9F719E80* __this, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder::SetException(System.Exception)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_SetException_m0D772D62D01CC371F4AB0F6943BBBE0FEAB19643_inline (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* __this, Exception_t* ___exception0, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder::SetResult()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_SetResult_mBBA527F0F21E04D65A269C0D02597CE5B2D1E9CB_inline (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* __this, const RuntimeMethod* method) ;
// System.Void Main.EntryManager/<_check_update>d__4::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3C_check_updateU3Ed__4_MoveNext_m0E4BEA2825454A22367DD5352A65B3A8D8840B07 (U3C_check_updateU3Ed__4_tC52AC11C5C7BC7CDB895194FA2D8EE5F4512B709* __this, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_SetStateMachine_m466E6779CB9DEC814C0A59E7766D95EC2C3268CF (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void Main.EntryManager/<_check_update>d__4::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3C_check_updateU3Ed__4_SetStateMachine_mE69D62E5A945D7CF28A8B7CC7706B407116D78B4 (U3C_check_updateU3Ed__4_tC52AC11C5C7BC7CDB895194FA2D8EE5F4512B709* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) ;
// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<UnityEngine.AddressableAssets.ResourceLocators.IResourceLocator> UnityEngine.AddressableAssets.Addressables::InitializeAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncOperationHandle_1_t42BB61262B05D32A3C3C0E42ADB3294DFE46A8AC Addressables_InitializeAsync_m8F30FEFAF5514C2D0F978D4D92F09C6F575F80F3 (const RuntimeMethod* method) ;
// System.Threading.Tasks.Task`1<TObject> UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<UnityEngine.AddressableAssets.ResourceLocators.IResourceLocator>::get_Task()
inline Task_1_tAF937EF1CA4B1527DA6CEB7CDABB2116AFF43CA1* AsyncOperationHandle_1_get_Task_m758BF97BB1FF1A2ED1EDA51B1382845A5D21F063 (AsyncOperationHandle_1_t42BB61262B05D32A3C3C0E42ADB3294DFE46A8AC* __this, const RuntimeMethod* method)
{
	return ((  Task_1_tAF937EF1CA4B1527DA6CEB7CDABB2116AFF43CA1* (*) (AsyncOperationHandle_1_t42BB61262B05D32A3C3C0E42ADB3294DFE46A8AC*, const RuntimeMethod*))AsyncOperationHandle_1_get_Task_mAB8C9F6F80C744563526BF5DB8820400E55F183A_gshared)(__this, method);
}
// System.Runtime.CompilerServices.TaskAwaiter`1<TResult> System.Threading.Tasks.Task`1<UnityEngine.AddressableAssets.ResourceLocators.IResourceLocator>::GetAwaiter()
inline TaskAwaiter_1_t56729B862AE97EABC420EB2261CE66FAB0E31166 Task_1_GetAwaiter_m4A461E790248B13491BA593232A5390C6F90B1D4 (Task_1_tAF937EF1CA4B1527DA6CEB7CDABB2116AFF43CA1* __this, const RuntimeMethod* method)
{
	return ((  TaskAwaiter_1_t56729B862AE97EABC420EB2261CE66FAB0E31166 (*) (Task_1_tAF937EF1CA4B1527DA6CEB7CDABB2116AFF43CA1*, const RuntimeMethod*))Task_1_GetAwaiter_mD80ED263BF3F1F8DBDBD177BA3401A0AAAFA38E3_gshared)(__this, method);
}
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<UnityEngine.AddressableAssets.ResourceLocators.IResourceLocator>::get_IsCompleted()
inline bool TaskAwaiter_1_get_IsCompleted_m409031C4DC9B07B8D94AF0E101A508771F5BDE8D (TaskAwaiter_1_t56729B862AE97EABC420EB2261CE66FAB0E31166* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TaskAwaiter_1_t56729B862AE97EABC420EB2261CE66FAB0E31166*, const RuntimeMethod*))TaskAwaiter_1_get_IsCompleted_mEEBB09E26F4165A0F864D92E1890CFCD2C8CFD54_gshared)(__this, method);
}
// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<UnityEngine.AddressableAssets.ResourceLocators.IResourceLocator>,Main.EntryManager/<_update_address_ables>d__5>(TAwaiter&,TStateMachine&)
inline void AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t56729B862AE97EABC420EB2261CE66FAB0E31166_TisU3C_update_address_ablesU3Ed__5_t1FF32C47FEFD857C04A3820565973362359C9708_m9A9E83D443C8FF56A720873EE2660A125BD986F3_inline (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* __this, TaskAwaiter_1_t56729B862AE97EABC420EB2261CE66FAB0E31166* ___awaiter0, U3C_update_address_ablesU3Ed__5_t1FF32C47FEFD857C04A3820565973362359C9708* ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, TaskAwaiter_1_t56729B862AE97EABC420EB2261CE66FAB0E31166*, U3C_update_address_ablesU3Ed__5_t1FF32C47FEFD857C04A3820565973362359C9708*, const RuntimeMethod*))AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisU3C_update_address_ablesU3Ed__5_t1FF32C47FEFD857C04A3820565973362359C9708_mA90F888E2EC2F3EEF9F60FCB7F2A40AED821C8AA_gshared_inline)(__this, ___awaiter0, ___stateMachine1, method);
}
// TResult System.Runtime.CompilerServices.TaskAwaiter`1<UnityEngine.AddressableAssets.ResourceLocators.IResourceLocator>::GetResult()
inline RuntimeObject* TaskAwaiter_1_GetResult_mE4F31E35A089C54FBEA50786ECCF4CEB21D0417B (TaskAwaiter_1_t56729B862AE97EABC420EB2261CE66FAB0E31166* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (TaskAwaiter_1_t56729B862AE97EABC420EB2261CE66FAB0E31166*, const RuntimeMethod*))TaskAwaiter_1_GetResult_mA4A8A1F43A456B40DDA251D00026C60919AED85B_gshared)(__this, method);
}
// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<System.Collections.Generic.List`1<System.String>> UnityEngine.AddressableAssets.Addressables::CheckForCatalogUpdates(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncOperationHandle_1_tAA8468BA8C5994CD242CA70D05A8474AF68F7646 Addressables_CheckForCatalogUpdates_m4AB4B9D717C9BB941E9379B105A3479457D95A1D (bool ___autoReleaseHandle0, const RuntimeMethod* method) ;
// Cysharp.Threading.Tasks.UniTask`1/Awaiter<T> Cysharp.Threading.Tasks.AddressablesAsyncExtensions::GetAwaiter<System.Collections.Generic.List`1<System.String>>(UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<T>)
inline Awaiter_t1DDEDE7E04BB8D7D1E27227C101ED09A90BAABE2 AddressablesAsyncExtensions_GetAwaiter_TisList_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_m69D6C4192B1B7A92537E67795F1ABEAC4D04581A (AsyncOperationHandle_1_tAA8468BA8C5994CD242CA70D05A8474AF68F7646 ___handle0, const RuntimeMethod* method)
{
	return ((  Awaiter_t1DDEDE7E04BB8D7D1E27227C101ED09A90BAABE2 (*) (AsyncOperationHandle_1_tAA8468BA8C5994CD242CA70D05A8474AF68F7646, const RuntimeMethod*))AddressablesAsyncExtensions_GetAwaiter_TisRuntimeObject_mA66F5C3ABBF51980FAC915A7B024B6C0370A2C39_gshared)(___handle0, method);
}
// System.Boolean Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Collections.Generic.List`1<System.String>>::get_IsCompleted()
inline bool Awaiter_get_IsCompleted_m8A6B8683C02077FA5D55439EB08681166BB565BA_inline (Awaiter_t1DDEDE7E04BB8D7D1E27227C101ED09A90BAABE2* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Awaiter_t1DDEDE7E04BB8D7D1E27227C101ED09A90BAABE2*, const RuntimeMethod*))Awaiter_get_IsCompleted_m64CB466F8C142312263397E37C6298E842139126_gshared_inline)(__this, method);
}
// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder::AwaitUnsafeOnCompleted<Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Collections.Generic.List`1<System.String>>,Main.EntryManager/<_update_address_ables>d__5>(TAwaiter&,TStateMachine&)
inline void AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_t1DDEDE7E04BB8D7D1E27227C101ED09A90BAABE2_TisU3C_update_address_ablesU3Ed__5_t1FF32C47FEFD857C04A3820565973362359C9708_m4E01B3AA4178ABCA2D6718C896C5260FF0C4D8EB_inline (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* __this, Awaiter_t1DDEDE7E04BB8D7D1E27227C101ED09A90BAABE2* ___awaiter0, U3C_update_address_ablesU3Ed__5_t1FF32C47FEFD857C04A3820565973362359C9708* ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_t1DDEDE7E04BB8D7D1E27227C101ED09A90BAABE2*, U3C_update_address_ablesU3Ed__5_t1FF32C47FEFD857C04A3820565973362359C9708*, const RuntimeMethod*))AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_t0767B80BBE72D416CD4F41DA0FB54CD61AFEB101_TisU3C_update_address_ablesU3Ed__5_t1FF32C47FEFD857C04A3820565973362359C9708_m292D381BC401A91E9D150C005BA5D8C89BC9540C_gshared_inline)(__this, ___awaiter0, ___stateMachine1, method);
}
// T Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Collections.Generic.List`1<System.String>>::GetResult()
inline List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* Awaiter_GetResult_m22850F7F33D4F8D29DF3725D6AE1627F7DBA8973_inline (Awaiter_t1DDEDE7E04BB8D7D1E27227C101ED09A90BAABE2* __this, const RuntimeMethod* method)
{
	return ((  List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* (*) (Awaiter_t1DDEDE7E04BB8D7D1E27227C101ED09A90BAABE2*, const RuntimeMethod*))Awaiter_GetResult_mD47D2D1B93A9A867CBEDAC2D7033F31DBCE10C3B_gshared_inline)(__this, method);
}
// System.Int32 System.Collections.Generic.List`1<System.String>::get_Count()
inline int32_t List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_inline (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<System.Collections.Generic.List`1<UnityEngine.AddressableAssets.ResourceLocators.IResourceLocator>> UnityEngine.AddressableAssets.Addressables::UpdateCatalogs(System.Collections.Generic.IEnumerable`1<System.String>,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncOperationHandle_1_tB06077285DDBB8B950592F6ACC37C333ADDD997F Addressables_UpdateCatalogs_m7AEECFD1B41CD4A0EB2AF0AB3A9589564F0C3024 (RuntimeObject* ___catalogs0, bool ___autoReleaseHandle1, const RuntimeMethod* method) ;
// Cysharp.Threading.Tasks.UniTask`1/Awaiter<T> Cysharp.Threading.Tasks.AddressablesAsyncExtensions::GetAwaiter<System.Collections.Generic.List`1<UnityEngine.AddressableAssets.ResourceLocators.IResourceLocator>>(UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<T>)
inline Awaiter_tE6CAD4D39AD4E3DC47F1BFE0ACC22A288650F25E AddressablesAsyncExtensions_GetAwaiter_TisList_1_t540309E962CB768808E54FF9E53136790E1C4975_m847F6622D76C1002DC88557FCDDD022BCAF87921 (AsyncOperationHandle_1_tB06077285DDBB8B950592F6ACC37C333ADDD997F ___handle0, const RuntimeMethod* method)
{
	return ((  Awaiter_tE6CAD4D39AD4E3DC47F1BFE0ACC22A288650F25E (*) (AsyncOperationHandle_1_tB06077285DDBB8B950592F6ACC37C333ADDD997F, const RuntimeMethod*))AddressablesAsyncExtensions_GetAwaiter_TisRuntimeObject_mA66F5C3ABBF51980FAC915A7B024B6C0370A2C39_gshared)(___handle0, method);
}
// System.Boolean Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Collections.Generic.List`1<UnityEngine.AddressableAssets.ResourceLocators.IResourceLocator>>::get_IsCompleted()
inline bool Awaiter_get_IsCompleted_m5D9029DBD1082223118EBD2EF522323FD4FA28F8_inline (Awaiter_tE6CAD4D39AD4E3DC47F1BFE0ACC22A288650F25E* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Awaiter_tE6CAD4D39AD4E3DC47F1BFE0ACC22A288650F25E*, const RuntimeMethod*))Awaiter_get_IsCompleted_m64CB466F8C142312263397E37C6298E842139126_gshared_inline)(__this, method);
}
// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder::AwaitUnsafeOnCompleted<Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Collections.Generic.List`1<UnityEngine.AddressableAssets.ResourceLocators.IResourceLocator>>,Main.EntryManager/<_update_address_ables>d__5>(TAwaiter&,TStateMachine&)
inline void AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tE6CAD4D39AD4E3DC47F1BFE0ACC22A288650F25E_TisU3C_update_address_ablesU3Ed__5_t1FF32C47FEFD857C04A3820565973362359C9708_m1063BD34136E5DF0BE8BFA8BF4F23CD73CCD24D1_inline (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* __this, Awaiter_tE6CAD4D39AD4E3DC47F1BFE0ACC22A288650F25E* ___awaiter0, U3C_update_address_ablesU3Ed__5_t1FF32C47FEFD857C04A3820565973362359C9708* ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tE6CAD4D39AD4E3DC47F1BFE0ACC22A288650F25E*, U3C_update_address_ablesU3Ed__5_t1FF32C47FEFD857C04A3820565973362359C9708*, const RuntimeMethod*))AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_t0767B80BBE72D416CD4F41DA0FB54CD61AFEB101_TisU3C_update_address_ablesU3Ed__5_t1FF32C47FEFD857C04A3820565973362359C9708_m292D381BC401A91E9D150C005BA5D8C89BC9540C_gshared_inline)(__this, ___awaiter0, ___stateMachine1, method);
}
// T Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Collections.Generic.List`1<UnityEngine.AddressableAssets.ResourceLocators.IResourceLocator>>::GetResult()
inline List_1_t540309E962CB768808E54FF9E53136790E1C4975* Awaiter_GetResult_m1C61637BC91C1BE8CCD0B118EB65366E62B474BF_inline (Awaiter_tE6CAD4D39AD4E3DC47F1BFE0ACC22A288650F25E* __this, const RuntimeMethod* method)
{
	return ((  List_1_t540309E962CB768808E54FF9E53136790E1C4975* (*) (Awaiter_tE6CAD4D39AD4E3DC47F1BFE0ACC22A288650F25E*, const RuntimeMethod*))Awaiter_GetResult_mD47D2D1B93A9A867CBEDAC2D7033F31DBCE10C3B_gshared_inline)(__this, method);
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.AddressableAssets.ResourceLocators.IResourceLocator>::get_Count()
inline int32_t List_1_get_Count_m5FC569B19E1FE556C71A122795F87D563D42433E_inline (List_1_t540309E962CB768808E54FF9E53136790E1C4975* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t540309E962CB768808E54FF9E53136790E1C4975*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8 (String_t* ___format0, RuntimeObject* ___arg01, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.AddressableAssets.ResourceLocators.IResourceLocator>::GetEnumerator()
inline Enumerator_tF83AE2D8E34F83214881DA69EE6A105A5A7855B3 List_1_GetEnumerator_m3F5700A99F79B66C45E7C5377D838DFE6F8D7DCA (List_1_t540309E962CB768808E54FF9E53136790E1C4975* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tF83AE2D8E34F83214881DA69EE6A105A5A7855B3 (*) (List_1_t540309E962CB768808E54FF9E53136790E1C4975*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.AddressableAssets.ResourceLocators.IResourceLocator>::Dispose()
inline void Enumerator_Dispose_m9E27CB96C767F816BF5E072668F628209615053B (Enumerator_tF83AE2D8E34F83214881DA69EE6A105A5A7855B3* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tF83AE2D8E34F83214881DA69EE6A105A5A7855B3*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.AddressableAssets.ResourceLocators.IResourceLocator>::get_Current()
inline RuntimeObject* Enumerator_get_Current_m70628B9BE52F8E6A761C9A5B2F2486E296FD1FBE_inline (Enumerator_tF83AE2D8E34F83214881DA69EE6A105A5A7855B3* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Enumerator_tF83AE2D8E34F83214881DA69EE6A105A5A7855B3*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// Cysharp.Threading.Tasks.UniTask Main.EntryManager::_download(UnityEngine.AddressableAssets.ResourceLocators.IResourceLocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 EntryManager__download_m48680C1AAD8A9A9D0FBCAFC6794153BAFEACA7F4 (EntryManager_t5E007CC610B9C44A6887E3B6A5A0B42D9F719E80* __this, RuntimeObject* ___resourceLocator0, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder::AwaitUnsafeOnCompleted<Cysharp.Threading.Tasks.UniTask/Awaiter,Main.EntryManager/<_update_address_ables>d__5>(TAwaiter&,TStateMachine&)
inline void AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956_TisU3C_update_address_ablesU3Ed__5_t1FF32C47FEFD857C04A3820565973362359C9708_m6D0F2B4D522926147973B8FB250701AA85F23BEB_inline (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* __this, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* ___awaiter0, U3C_update_address_ablesU3Ed__5_t1FF32C47FEFD857C04A3820565973362359C9708* ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3C_update_address_ablesU3Ed__5_t1FF32C47FEFD857C04A3820565973362359C9708*, const RuntimeMethod*))AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956_TisU3C_update_address_ablesU3Ed__5_t1FF32C47FEFD857C04A3820565973362359C9708_m6D0F2B4D522926147973B8FB250701AA85F23BEB_gshared_inline)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.AddressableAssets.ResourceLocators.IResourceLocator>::MoveNext()
inline bool Enumerator_MoveNext_mE20EB0F3435DA5E172879D43541140BF1F5F2978 (Enumerator_tF83AE2D8E34F83214881DA69EE6A105A5A7855B3* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tF83AE2D8E34F83214881DA69EE6A105A5A7855B3*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Void Main.EntryManager/<_update_address_ables>d__5::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3C_update_address_ablesU3Ed__5_MoveNext_mFEDBFF39994F7D2E47F5D4188D980E63BADCFCE8 (U3C_update_address_ablesU3Ed__5_t1FF32C47FEFD857C04A3820565973362359C9708* __this, const RuntimeMethod* method) ;
// System.Void Main.EntryManager/<_update_address_ables>d__5::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3C_update_address_ablesU3Ed__5_SetStateMachine_m4E984B38D70EC70B558F76575EE604FF8FC6D25D (U3C_update_address_ablesU3Ed__5_t1FF32C47FEFD857C04A3820565973362359C9708* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) ;
// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<System.Int64> UnityEngine.AddressableAssets.Addressables::GetDownloadSizeAsync(System.Collections.IEnumerable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncOperationHandle_1_tFCA9C8A0842BE8A0771A40EA2C7FC9C94E2564BA Addressables_GetDownloadSizeAsync_m21569D24012E62C0D5B34AB060D8E4CEDAE4C427 (RuntimeObject* ___keys0, const RuntimeMethod* method) ;
// Cysharp.Threading.Tasks.UniTask`1/Awaiter<T> Cysharp.Threading.Tasks.AddressablesAsyncExtensions::GetAwaiter<System.Int64>(UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<T>)
inline Awaiter_t7AE9CC84360E7F09FFB9D68779935EE4FE333A0E AddressablesAsyncExtensions_GetAwaiter_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m14636F69724E842FA9662EAE709589B85618C551 (AsyncOperationHandle_1_tFCA9C8A0842BE8A0771A40EA2C7FC9C94E2564BA ___handle0, const RuntimeMethod* method)
{
	return ((  Awaiter_t7AE9CC84360E7F09FFB9D68779935EE4FE333A0E (*) (AsyncOperationHandle_1_tFCA9C8A0842BE8A0771A40EA2C7FC9C94E2564BA, const RuntimeMethod*))AddressablesAsyncExtensions_GetAwaiter_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m14636F69724E842FA9662EAE709589B85618C551_gshared)(___handle0, method);
}
// System.Boolean Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Int64>::get_IsCompleted()
inline bool Awaiter_get_IsCompleted_mCFE009603778E0BD45941A0C4BFD6C5437934777_inline (Awaiter_t7AE9CC84360E7F09FFB9D68779935EE4FE333A0E* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Awaiter_t7AE9CC84360E7F09FFB9D68779935EE4FE333A0E*, const RuntimeMethod*))Awaiter_get_IsCompleted_mCFE009603778E0BD45941A0C4BFD6C5437934777_gshared_inline)(__this, method);
}
// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder::AwaitUnsafeOnCompleted<Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Int64>,Main.EntryManager/<_download>d__6>(TAwaiter&,TStateMachine&)
inline void AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_t7AE9CC84360E7F09FFB9D68779935EE4FE333A0E_TisU3C_downloadU3Ed__6_t9FDE76F9ADCA6BBDA45A209199A06BBF4CEA504E_m41AF4E246B77874BCD24B99B47E3A74D2F9DE267_inline (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* __this, Awaiter_t7AE9CC84360E7F09FFB9D68779935EE4FE333A0E* ___awaiter0, U3C_downloadU3Ed__6_t9FDE76F9ADCA6BBDA45A209199A06BBF4CEA504E* ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_t7AE9CC84360E7F09FFB9D68779935EE4FE333A0E*, U3C_downloadU3Ed__6_t9FDE76F9ADCA6BBDA45A209199A06BBF4CEA504E*, const RuntimeMethod*))AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_t7AE9CC84360E7F09FFB9D68779935EE4FE333A0E_TisU3C_downloadU3Ed__6_t9FDE76F9ADCA6BBDA45A209199A06BBF4CEA504E_m41AF4E246B77874BCD24B99B47E3A74D2F9DE267_gshared_inline)(__this, ___awaiter0, ___stateMachine1, method);
}
// T Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Int64>::GetResult()
inline int64_t Awaiter_GetResult_m4B63F7992C6A60270E7A65D3BA029B02E8492A15_inline (Awaiter_t7AE9CC84360E7F09FFB9D68779935EE4FE333A0E* __this, const RuntimeMethod* method)
{
	return ((  int64_t (*) (Awaiter_t7AE9CC84360E7F09FFB9D68779935EE4FE333A0E*, const RuntimeMethod*))Awaiter_GetResult_m4B63F7992C6A60270E7A65D3BA029B02E8492A15_gshared_inline)(__this, method);
}
// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle UnityEngine.AddressableAssets.Addressables::DownloadDependenciesAsync(System.Collections.IEnumerable,UnityEngine.AddressableAssets.Addressables/MergeMode,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D Addressables_DownloadDependenciesAsync_m540DC6897FCC7409CC56B9BA77D6F91DFC7ECD98 (RuntimeObject* ___keys0, int32_t ___mode1, bool ___autoReleaseHandle2, const RuntimeMethod* method) ;
// Cysharp.Threading.Tasks.UniTask/Awaiter Cysharp.Threading.Tasks.AddressablesAsyncExtensions::GetAwaiter(UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 AddressablesAsyncExtensions_GetAwaiter_m9C0CEF7C2C34DA7CD7CF6191AD3A75D32A553A3B (AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D ___handle0, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder::AwaitUnsafeOnCompleted<Cysharp.Threading.Tasks.UniTask/Awaiter,Main.EntryManager/<_download>d__6>(TAwaiter&,TStateMachine&)
inline void AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956_TisU3C_downloadU3Ed__6_t9FDE76F9ADCA6BBDA45A209199A06BBF4CEA504E_m9751D888B9EF86588BA0D458A8D997C3D6DFF312_inline (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* __this, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* ___awaiter0, U3C_downloadU3Ed__6_t9FDE76F9ADCA6BBDA45A209199A06BBF4CEA504E* ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3C_downloadU3Ed__6_t9FDE76F9ADCA6BBDA45A209199A06BBF4CEA504E*, const RuntimeMethod*))AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956_TisU3C_downloadU3Ed__6_t9FDE76F9ADCA6BBDA45A209199A06BBF4CEA504E_m9751D888B9EF86588BA0D458A8D997C3D6DFF312_gshared_inline)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void UnityEngine.AddressableAssets.Addressables::Release(UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Addressables_Release_m0A186637EB825A9C793E94DD9D5B00842EC67589 (AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D ___handle0, const RuntimeMethod* method) ;
// System.Void Main.EntryManager/<_download>d__6::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3C_downloadU3Ed__6_MoveNext_mB866480A8BE4B4D8742A0A31F88FB7A0268CB8BA (U3C_downloadU3Ed__6_t9FDE76F9ADCA6BBDA45A209199A06BBF4CEA504E* __this, const RuntimeMethod* method) ;
// System.Void Main.EntryManager/<_download>d__6::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3C_downloadU3Ed__6_SetStateMachine_mA12F1F5E91C0119BF41AD07931AB2EBE10F70C5F (U3C_downloadU3Ed__6_t9FDE76F9ADCA6BBDA45A209199A06BBF4CEA504E* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) ;
// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<System.Collections.Generic.IList`1<TObject>> UnityEngine.AddressableAssets.Addressables::LoadAssetsAsync<UnityEngine.TextAsset>(System.Object,System.Action`1<TObject>)
inline AsyncOperationHandle_1_t3800DB64F3866CE794693A68107374760A72703E Addressables_LoadAssetsAsync_TisTextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69_m8F1825C823927E945B0CF6E0045E413304231620 (RuntimeObject* ___key0, Action_1_tCBB7BCB0560FBDC8B3457953A50A7FBCDA13572C* ___callback1, const RuntimeMethod* method)
{
	return ((  AsyncOperationHandle_1_t3800DB64F3866CE794693A68107374760A72703E (*) (RuntimeObject*, Action_1_tCBB7BCB0560FBDC8B3457953A50A7FBCDA13572C*, const RuntimeMethod*))Addressables_LoadAssetsAsync_TisRuntimeObject_mB53CD7979CD8D5FE8E16D871A8FCE3957AC4A7A7_gshared)(___key0, ___callback1, method);
}
// Cysharp.Threading.Tasks.UniTask`1/Awaiter<T> Cysharp.Threading.Tasks.AddressablesAsyncExtensions::GetAwaiter<System.Collections.Generic.IList`1<UnityEngine.TextAsset>>(UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<T>)
inline Awaiter_tD6901CCEDFC008EF054E21499F3DCFE124F52792 AddressablesAsyncExtensions_GetAwaiter_TisIList_1_t41197D8BEF4B49150DE2882FD3E4E3AB1F03D62F_m4DABCC7A63F140064D236B6BD8BB35301E5FB7B5 (AsyncOperationHandle_1_t3800DB64F3866CE794693A68107374760A72703E ___handle0, const RuntimeMethod* method)
{
	return ((  Awaiter_tD6901CCEDFC008EF054E21499F3DCFE124F52792 (*) (AsyncOperationHandle_1_t3800DB64F3866CE794693A68107374760A72703E, const RuntimeMethod*))AddressablesAsyncExtensions_GetAwaiter_TisRuntimeObject_mA66F5C3ABBF51980FAC915A7B024B6C0370A2C39_gshared)(___handle0, method);
}
// System.Boolean Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Collections.Generic.IList`1<UnityEngine.TextAsset>>::get_IsCompleted()
inline bool Awaiter_get_IsCompleted_m6CFEF07FF823DE21C6CD5161E22FEDC0B9026072_inline (Awaiter_tD6901CCEDFC008EF054E21499F3DCFE124F52792* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Awaiter_tD6901CCEDFC008EF054E21499F3DCFE124F52792*, const RuntimeMethod*))Awaiter_get_IsCompleted_m64CB466F8C142312263397E37C6298E842139126_gshared_inline)(__this, method);
}
// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder::AwaitUnsafeOnCompleted<Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Collections.Generic.IList`1<UnityEngine.TextAsset>>,Main.EntryManager/<_load_hotfix_dlls>d__7>(TAwaiter&,TStateMachine&)
inline void AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tD6901CCEDFC008EF054E21499F3DCFE124F52792_TisU3C_load_hotfix_dllsU3Ed__7_t779C30021B738E08FCFBE0CA14B688F31D262DF1_mEB6D44D8CCE495E8BFC2CE38E02BC65108BBF6CA_inline (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* __this, Awaiter_tD6901CCEDFC008EF054E21499F3DCFE124F52792* ___awaiter0, U3C_load_hotfix_dllsU3Ed__7_t779C30021B738E08FCFBE0CA14B688F31D262DF1* ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tD6901CCEDFC008EF054E21499F3DCFE124F52792*, U3C_load_hotfix_dllsU3Ed__7_t779C30021B738E08FCFBE0CA14B688F31D262DF1*, const RuntimeMethod*))AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_t0767B80BBE72D416CD4F41DA0FB54CD61AFEB101_TisU3C_load_hotfix_dllsU3Ed__7_t779C30021B738E08FCFBE0CA14B688F31D262DF1_mE18A908ADAE89124C1B0663D23C047DC31A87BFE_gshared_inline)(__this, ___awaiter0, ___stateMachine1, method);
}
// T Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Collections.Generic.IList`1<UnityEngine.TextAsset>>::GetResult()
inline RuntimeObject* Awaiter_GetResult_mBBE5BA716B80F751D651580F18EF6D3564D6DEC4_inline (Awaiter_tD6901CCEDFC008EF054E21499F3DCFE124F52792* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Awaiter_tD6901CCEDFC008EF054E21499F3DCFE124F52792*, const RuntimeMethod*))Awaiter_GetResult_mD47D2D1B93A9A867CBEDAC2D7033F31DBCE10C3B_gshared_inline)(__this, method);
}
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Byte[] UnityEngine.TextAsset::get_bytes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* TextAsset_get_bytes_m244B31755642C9623B570FC96B9A04523B1E5178 (TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* __this, const RuntimeMethod* method) ;
// System.Reflection.Assembly System.Reflection.Assembly::Load(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Assembly_t* Assembly_Load_mD9E9CED2EFF8BBE97ACDE83FB8ED492D1E42E975 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___rawAssembly0, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method) ;
// System.Void Main.EntryManager/<_load_hotfix_dlls>d__7::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3C_load_hotfix_dllsU3Ed__7_MoveNext_mE69E3D0A48D9A930890819A16223B623997CFD7A (U3C_load_hotfix_dllsU3Ed__7_t779C30021B738E08FCFBE0CA14B688F31D262DF1* __this, const RuntimeMethod* method) ;
// System.Void Main.EntryManager/<_load_hotfix_dlls>d__7::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3C_load_hotfix_dllsU3Ed__7_SetStateMachine_m18F2CAAC0A6D75C276B81ECDF536AA4A108A74C7 (U3C_load_hotfix_dllsU3Ed__7_t779C30021B738E08FCFBE0CA14B688F31D262DF1* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder::AwaitUnsafeOnCompleted<Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Collections.Generic.IList`1<UnityEngine.TextAsset>>,Main.EntryManager/<_load_meta_data_for_aot_dlls>d__8>(TAwaiter&,TStateMachine&)
inline void AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tD6901CCEDFC008EF054E21499F3DCFE124F52792_TisU3C_load_meta_data_for_aot_dllsU3Ed__8_tCAEEC6F4B744F2FA13F4EBBA82E82ECCC865F2AE_m29FA0B7CD2C9AA26F05E0B18A8BA05A1B5A99ACE_inline (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* __this, Awaiter_tD6901CCEDFC008EF054E21499F3DCFE124F52792* ___awaiter0, U3C_load_meta_data_for_aot_dllsU3Ed__8_tCAEEC6F4B744F2FA13F4EBBA82E82ECCC865F2AE* ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tD6901CCEDFC008EF054E21499F3DCFE124F52792*, U3C_load_meta_data_for_aot_dllsU3Ed__8_tCAEEC6F4B744F2FA13F4EBBA82E82ECCC865F2AE*, const RuntimeMethod*))AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_t0767B80BBE72D416CD4F41DA0FB54CD61AFEB101_TisU3C_load_meta_data_for_aot_dllsU3Ed__8_tCAEEC6F4B744F2FA13F4EBBA82E82ECCC865F2AE_m1B9D83F141ECB5E3FD67174A398541A5ADD98310_gshared_inline)(__this, ___awaiter0, ___stateMachine1, method);
}
// HybridCLR.LoadImageErrorCode HybridCLR.RuntimeApi::LoadMetadataForAOTAssembly(System.Byte[],HybridCLR.HomologousImageMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RuntimeApi_LoadMetadataForAOTAssembly_mE1E398132DBF86D7DE042300E1EE6AC37B7649D8 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___dllBytes0, int32_t ___mode1, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987 (String_t* ___format0, RuntimeObject* ___arg01, RuntimeObject* ___arg12, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void Main.EntryManager/<_load_meta_data_for_aot_dlls>d__8::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3C_load_meta_data_for_aot_dllsU3Ed__8_MoveNext_mA824370DE3451C71DD94676E983ED37DB052C696 (U3C_load_meta_data_for_aot_dllsU3Ed__8_tCAEEC6F4B744F2FA13F4EBBA82E82ECCC865F2AE* __this, const RuntimeMethod* method) ;
// System.Void Main.EntryManager/<_load_meta_data_for_aot_dlls>d__8::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3C_load_meta_data_for_aot_dllsU3Ed__8_SetStateMachine_m25F09A1FBDE578EB6EB43CF9D6D9993F55A91369 (U3C_load_meta_data_for_aot_dllsU3Ed__8_tCAEEC6F4B744F2FA13F4EBBA82E82ECCC865F2AE* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) ;
// Cysharp.Threading.Tasks.UniTask Main.EntryManager::_wait_for_enter_input()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 EntryManager__wait_for_enter_input_m3F42E08EF4512373FBAD1144CFA4458BAB26D12A (EntryManager_t5E007CC610B9C44A6887E3B6A5A0B42D9F719E80* __this, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder::AwaitUnsafeOnCompleted<Cysharp.Threading.Tasks.UniTask/Awaiter,Main.EntryManager/<_enter_hotfix_main_scene>d__9>(TAwaiter&,TStateMachine&)
inline void AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956_TisU3C_enter_hotfix_main_sceneU3Ed__9_t9B561018599EEBB76E27BFE7574480D196AB56EC_mDE7530F3B1ABA76703CBDBA4F855D2A6A9476D3A_inline (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* __this, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* ___awaiter0, U3C_enter_hotfix_main_sceneU3Ed__9_t9B561018599EEBB76E27BFE7574480D196AB56EC* ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3C_enter_hotfix_main_sceneU3Ed__9_t9B561018599EEBB76E27BFE7574480D196AB56EC*, const RuntimeMethod*))AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956_TisU3C_enter_hotfix_main_sceneU3Ed__9_t9B561018599EEBB76E27BFE7574480D196AB56EC_mDE7530F3B1ABA76703CBDBA4F855D2A6A9476D3A_gshared_inline)(__this, ___awaiter0, ___stateMachine1, method);
}
// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<UnityEngine.ResourceManagement.ResourceProviders.SceneInstance> UnityEngine.AddressableAssets.Addressables::LoadSceneAsync(System.Object,UnityEngine.SceneManagement.LoadSceneMode,System.Boolean,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncOperationHandle_1_t074166892865CF484A3C77A1E9FB6F5E83DA1DA5 Addressables_LoadSceneAsync_m3868019E92C7809B7352837DB3D2D81088DA6134 (RuntimeObject* ___key0, int32_t ___loadMode1, bool ___activateOnLoad2, int32_t ___priority3, const RuntimeMethod* method) ;
// Cysharp.Threading.Tasks.UniTask`1/Awaiter<T> Cysharp.Threading.Tasks.AddressablesAsyncExtensions::GetAwaiter<UnityEngine.ResourceManagement.ResourceProviders.SceneInstance>(UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<T>)
inline Awaiter_t2FED8B6C42FE0974C7571445A740264E4CEFFD29 AddressablesAsyncExtensions_GetAwaiter_TisSceneInstance_t9D8203A59AA2C8EE21045B75AFA429EB1B6BF14A_m87B27639F3E7B5E0B7E8CF6D8D5E8D84A37E2B3D (AsyncOperationHandle_1_t074166892865CF484A3C77A1E9FB6F5E83DA1DA5 ___handle0, const RuntimeMethod* method)
{
	return ((  Awaiter_t2FED8B6C42FE0974C7571445A740264E4CEFFD29 (*) (AsyncOperationHandle_1_t074166892865CF484A3C77A1E9FB6F5E83DA1DA5, const RuntimeMethod*))AddressablesAsyncExtensions_GetAwaiter_TisSceneInstance_t9D8203A59AA2C8EE21045B75AFA429EB1B6BF14A_m87B27639F3E7B5E0B7E8CF6D8D5E8D84A37E2B3D_gshared)(___handle0, method);
}
// System.Boolean Cysharp.Threading.Tasks.UniTask`1/Awaiter<UnityEngine.ResourceManagement.ResourceProviders.SceneInstance>::get_IsCompleted()
inline bool Awaiter_get_IsCompleted_mEA517CCC52750E414219358F57E9AB3F6F8667E2_inline (Awaiter_t2FED8B6C42FE0974C7571445A740264E4CEFFD29* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Awaiter_t2FED8B6C42FE0974C7571445A740264E4CEFFD29*, const RuntimeMethod*))Awaiter_get_IsCompleted_mEA517CCC52750E414219358F57E9AB3F6F8667E2_gshared_inline)(__this, method);
}
// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder::AwaitUnsafeOnCompleted<Cysharp.Threading.Tasks.UniTask`1/Awaiter<UnityEngine.ResourceManagement.ResourceProviders.SceneInstance>,Main.EntryManager/<_enter_hotfix_main_scene>d__9>(TAwaiter&,TStateMachine&)
inline void AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_t2FED8B6C42FE0974C7571445A740264E4CEFFD29_TisU3C_enter_hotfix_main_sceneU3Ed__9_t9B561018599EEBB76E27BFE7574480D196AB56EC_mE8EB5A5AA77A091821D8F6BCCAE1CD67C7041870_inline (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* __this, Awaiter_t2FED8B6C42FE0974C7571445A740264E4CEFFD29* ___awaiter0, U3C_enter_hotfix_main_sceneU3Ed__9_t9B561018599EEBB76E27BFE7574480D196AB56EC* ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_t2FED8B6C42FE0974C7571445A740264E4CEFFD29*, U3C_enter_hotfix_main_sceneU3Ed__9_t9B561018599EEBB76E27BFE7574480D196AB56EC*, const RuntimeMethod*))AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_t2FED8B6C42FE0974C7571445A740264E4CEFFD29_TisU3C_enter_hotfix_main_sceneU3Ed__9_t9B561018599EEBB76E27BFE7574480D196AB56EC_mE8EB5A5AA77A091821D8F6BCCAE1CD67C7041870_gshared_inline)(__this, ___awaiter0, ___stateMachine1, method);
}
// T Cysharp.Threading.Tasks.UniTask`1/Awaiter<UnityEngine.ResourceManagement.ResourceProviders.SceneInstance>::GetResult()
inline SceneInstance_t9D8203A59AA2C8EE21045B75AFA429EB1B6BF14A Awaiter_GetResult_m1BF227B2EC0B21CBE419CFF22BDBA6A7C9C79081_inline (Awaiter_t2FED8B6C42FE0974C7571445A740264E4CEFFD29* __this, const RuntimeMethod* method)
{
	return ((  SceneInstance_t9D8203A59AA2C8EE21045B75AFA429EB1B6BF14A (*) (Awaiter_t2FED8B6C42FE0974C7571445A740264E4CEFFD29*, const RuntimeMethod*))Awaiter_GetResult_m1BF227B2EC0B21CBE419CFF22BDBA6A7C9C79081_gshared_inline)(__this, method);
}
// UnityEngine.AsyncOperation UnityEngine.ResourceManagement.ResourceProviders.SceneInstance::ActivateAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* SceneInstance_ActivateAsync_mA5740ABD2A826DB7CCCA83C62F31AA8448DE08C6 (SceneInstance_t9D8203A59AA2C8EE21045B75AFA429EB1B6BF14A* __this, const RuntimeMethod* method) ;
// Cysharp.Threading.Tasks.UnityAsyncExtensions/AsyncOperationAwaiter Cysharp.Threading.Tasks.UnityAsyncExtensions::GetAwaiter(UnityEngine.AsyncOperation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncOperationAwaiter_t31DC22FCC690816BA1A3508437F3D208F7CE3CFF UnityAsyncExtensions_GetAwaiter_mC5F1D25704DF49CBCAD4B0B0E4F9B1528CCDB919 (AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* ___asyncOperation0, const RuntimeMethod* method) ;
// System.Boolean Cysharp.Threading.Tasks.UnityAsyncExtensions/AsyncOperationAwaiter::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AsyncOperationAwaiter_get_IsCompleted_mB1A89F2E5B9E1CD69315D33F6E5F5EC94DEB2DFC (AsyncOperationAwaiter_t31DC22FCC690816BA1A3508437F3D208F7CE3CFF* __this, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder::AwaitUnsafeOnCompleted<Cysharp.Threading.Tasks.UnityAsyncExtensions/AsyncOperationAwaiter,Main.EntryManager/<_enter_hotfix_main_scene>d__9>(TAwaiter&,TStateMachine&)
inline void AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAsyncOperationAwaiter_t31DC22FCC690816BA1A3508437F3D208F7CE3CFF_TisU3C_enter_hotfix_main_sceneU3Ed__9_t9B561018599EEBB76E27BFE7574480D196AB56EC_mFBDB511684F553EA71D295512AAC71D70986AECE_inline (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* __this, AsyncOperationAwaiter_t31DC22FCC690816BA1A3508437F3D208F7CE3CFF* ___awaiter0, U3C_enter_hotfix_main_sceneU3Ed__9_t9B561018599EEBB76E27BFE7574480D196AB56EC* ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, AsyncOperationAwaiter_t31DC22FCC690816BA1A3508437F3D208F7CE3CFF*, U3C_enter_hotfix_main_sceneU3Ed__9_t9B561018599EEBB76E27BFE7574480D196AB56EC*, const RuntimeMethod*))AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAsyncOperationAwaiter_t31DC22FCC690816BA1A3508437F3D208F7CE3CFF_TisU3C_enter_hotfix_main_sceneU3Ed__9_t9B561018599EEBB76E27BFE7574480D196AB56EC_mFBDB511684F553EA71D295512AAC71D70986AECE_gshared_inline)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void Cysharp.Threading.Tasks.UnityAsyncExtensions/AsyncOperationAwaiter::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncOperationAwaiter_GetResult_m40446B2CAF167A2C2FF346BDC11B460F97383BA9 (AsyncOperationAwaiter_t31DC22FCC690816BA1A3508437F3D208F7CE3CFF* __this, const RuntimeMethod* method) ;
// System.Void Main.EntryManager/<_enter_hotfix_main_scene>d__9::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3C_enter_hotfix_main_sceneU3Ed__9_MoveNext_mB840AB8F30805BAF74D25154F9337869386EAC35 (U3C_enter_hotfix_main_sceneU3Ed__9_t9B561018599EEBB76E27BFE7574480D196AB56EC* __this, const RuntimeMethod* method) ;
// System.Void Main.EntryManager/<_enter_hotfix_main_scene>d__9::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3C_enter_hotfix_main_sceneU3Ed__9_SetStateMachine_m945864B4347A5877E0407BF145665C1C7783D556 (U3C_enter_hotfix_main_sceneU3Ed__9_t9B561018599EEBB76E27BFE7574480D196AB56EC* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) ;
// UnityEngine.RuntimePlatform UnityEngine.Application::get_platform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Application_get_platform_m59EF7D6155D18891B24767F83F388160B1FF2138 (const RuntimeMethod* method) ;
// Cysharp.Threading.Tasks.YieldAwaitable Cysharp.Threading.Tasks.UniTask::WaitForFixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR YieldAwaitable_t8A3F912BCBF6C4BB5599E92BA0159168B4E14B3A UniTask_WaitForFixedUpdate_m6A99F0966CA3B825CBFB21FD424A920F9EA50732 (const RuntimeMethod* method) ;
// Cysharp.Threading.Tasks.YieldAwaitable/Awaiter Cysharp.Threading.Tasks.YieldAwaitable::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Awaiter_t8B500B68E8763F6139A8470A24AB065434A17220 YieldAwaitable_GetAwaiter_m56B2A4754DC798098A8ABD5DE2E6780BCEB64C7C (YieldAwaitable_t8A3F912BCBF6C4BB5599E92BA0159168B4E14B3A* __this, const RuntimeMethod* method) ;
// System.Boolean Cysharp.Threading.Tasks.YieldAwaitable/Awaiter::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Awaiter_get_IsCompleted_m380AD66439FAC48688A6348C575A8122F672D61A (Awaiter_t8B500B68E8763F6139A8470A24AB065434A17220* __this, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder::AwaitUnsafeOnCompleted<Cysharp.Threading.Tasks.YieldAwaitable/Awaiter,Main.EntryManager/<_wait_for_enter_input>d__10>(TAwaiter&,TStateMachine&)
inline void AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_t8B500B68E8763F6139A8470A24AB065434A17220_TisU3C_wait_for_enter_inputU3Ed__10_t1F519E78F77BE52FDE3B74FDC96C4E295EE733EE_m0CEBCEDA176C92139C16412C524EAE120F929492_inline (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* __this, Awaiter_t8B500B68E8763F6139A8470A24AB065434A17220* ___awaiter0, U3C_wait_for_enter_inputU3Ed__10_t1F519E78F77BE52FDE3B74FDC96C4E295EE733EE* ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_t8B500B68E8763F6139A8470A24AB065434A17220*, U3C_wait_for_enter_inputU3Ed__10_t1F519E78F77BE52FDE3B74FDC96C4E295EE733EE*, const RuntimeMethod*))AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_t8B500B68E8763F6139A8470A24AB065434A17220_TisU3C_wait_for_enter_inputU3Ed__10_t1F519E78F77BE52FDE3B74FDC96C4E295EE733EE_m0CEBCEDA176C92139C16412C524EAE120F929492_gshared_inline)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void Cysharp.Threading.Tasks.YieldAwaitable/Awaiter::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Awaiter_GetResult_m65B26AEE969C14E1A7010BCDF845982D6EE1A0AB (Awaiter_t8B500B68E8763F6139A8470A24AB065434A17220* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetKey(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKey_mE5681EF775F3CEBA7EAD7C63984F7B34C8E8D434 (int32_t ___key0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Input::get_touchCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Input_get_touchCount_m057388BFC67A0F4CA53764B1022867ED81D01E39 (const RuntimeMethod* method) ;
// System.Void Main.EntryManager/<_wait_for_enter_input>d__10::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3C_wait_for_enter_inputU3Ed__10_MoveNext_m84B2671F47EDAE51889D0ADD082260F88E2615A5 (U3C_wait_for_enter_inputU3Ed__10_t1F519E78F77BE52FDE3B74FDC96C4E295EE733EE* __this, const RuntimeMethod* method) ;
// System.Void Main.EntryManager/<_wait_for_enter_input>d__10::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3C_wait_for_enter_inputU3Ed__10_SetStateMachine_m934F222BA824800D354C30F9323C50D53E4593C6 (U3C_wait_for_enter_inputU3Ed__10_t1F519E78F77BE52FDE3B74FDC96C4E295EE733EE* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) ;
// Cysharp.Threading.Tasks.UniTask Cysharp.Threading.Tasks.UniTask::FromException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 UniTask_FromException_mC6AC508C727D591C6BE908F2014570963CE9E5EE (Exception_t* ___ex0, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.UniTask/Awaiter::.ctor(Cysharp.Threading.Tasks.UniTask&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Awaiter__ctor_m4154A3A6D62BB1657D17A8106633CD9E1CE51F04_inline (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* __this, UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270* ___task0, const RuntimeMethod* method) ;
// Cysharp.Threading.Tasks.UniTaskStatus Cysharp.Threading.Tasks.UniTask::get_Status()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UniTask_get_Status_mA15B0F13DE3CE36730357CF50F65AE99ADF564DA_inline (UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270* __this, const RuntimeMethod* method) ;
// System.Boolean Cysharp.Threading.Tasks.UniTaskStatusExtensions::IsCompleted(Cysharp.Threading.Tasks.UniTaskStatus)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool UniTaskStatusExtensions_IsCompleted_mF43C41C9CEB640E381D1F7A8B40142843AED87AE_inline (int32_t ___status0, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.UniTask/Awaiter::UnsafeOnCompleted(System.Action)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Awaiter_UnsafeOnCompleted_m6C4775F8F4F2BEFB8118EBBA1EA621440CE84D62_inline (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___continuation0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>::UnsafeOnCompleted(System.Action)
inline void TaskAwaiter_1_UnsafeOnCompleted_m432BB796161116E663D0AEE2F77FD3B254442C0B (TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___continuation0, const RuntimeMethod* method)
{
	((  void (*) (TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA*, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*, const RuntimeMethod*))TaskAwaiter_1_UnsafeOnCompleted_m432BB796161116E663D0AEE2F77FD3B254442C0B_gshared)(__this, ___continuation0, method);
}
// Cysharp.Threading.Tasks.UniTaskStatus Cysharp.Threading.Tasks.UniTask`1<System.Object>::get_Status()
inline int32_t UniTask_1_get_Status_mA5CFB18FB86A0F36F682D8E814F9A25CE84D87C5_inline (UniTask_1_tB1B04E29E602E879F73EEA52804796621BBFE440* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (UniTask_1_tB1B04E29E602E879F73EEA52804796621BBFE440*, const RuntimeMethod*))UniTask_1_get_Status_mA5CFB18FB86A0F36F682D8E814F9A25CE84D87C5_gshared_inline)(__this, method);
}
// System.Void Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Object>::UnsafeOnCompleted(System.Action)
inline void Awaiter_UnsafeOnCompleted_m1CCB04A74D166784C6CDEFAA8AA67879A0CCE793_inline (Awaiter_t0767B80BBE72D416CD4F41DA0FB54CD61AFEB101* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___continuation0, const RuntimeMethod* method)
{
	((  void (*) (Awaiter_t0767B80BBE72D416CD4F41DA0FB54CD61AFEB101*, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*, const RuntimeMethod*))Awaiter_UnsafeOnCompleted_m1CCB04A74D166784C6CDEFAA8AA67879A0CCE793_gshared_inline)(__this, ___continuation0, method);
}
// Cysharp.Threading.Tasks.UniTaskStatus Cysharp.Threading.Tasks.UniTask`1<System.Int64>::get_Status()
inline int32_t UniTask_1_get_Status_m621A3ED628D31F42C69A04584E93A8A02E381117_inline (UniTask_1_tB7F6E76EE4A7F880D1169687FBCF7C85E3F1ED72* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (UniTask_1_tB7F6E76EE4A7F880D1169687FBCF7C85E3F1ED72*, const RuntimeMethod*))UniTask_1_get_Status_m621A3ED628D31F42C69A04584E93A8A02E381117_gshared_inline)(__this, method);
}
// System.Void Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Int64>::UnsafeOnCompleted(System.Action)
inline void Awaiter_UnsafeOnCompleted_mB8189A47DD4AD1C6B2865449D720708512EE20D5_inline (Awaiter_t7AE9CC84360E7F09FFB9D68779935EE4FE333A0E* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___continuation0, const RuntimeMethod* method)
{
	((  void (*) (Awaiter_t7AE9CC84360E7F09FFB9D68779935EE4FE333A0E*, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*, const RuntimeMethod*))Awaiter_UnsafeOnCompleted_mB8189A47DD4AD1C6B2865449D720708512EE20D5_gshared_inline)(__this, ___continuation0, method);
}
// Cysharp.Threading.Tasks.UniTaskStatus Cysharp.Threading.Tasks.UniTask`1<UnityEngine.ResourceManagement.ResourceProviders.SceneInstance>::get_Status()
inline int32_t UniTask_1_get_Status_m28112EE74B6E94F3BC5A50BD09CBBE5B3D3D5005_inline (UniTask_1_t96D9A7E86D862B1E3481FF626D461A695D0CB2EE* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (UniTask_1_t96D9A7E86D862B1E3481FF626D461A695D0CB2EE*, const RuntimeMethod*))UniTask_1_get_Status_m28112EE74B6E94F3BC5A50BD09CBBE5B3D3D5005_gshared_inline)(__this, method);
}
// System.Void Cysharp.Threading.Tasks.UniTask`1/Awaiter<UnityEngine.ResourceManagement.ResourceProviders.SceneInstance>::UnsafeOnCompleted(System.Action)
inline void Awaiter_UnsafeOnCompleted_m879C5B3DA0025E382898DBC531A796B4B03D85A1_inline (Awaiter_t2FED8B6C42FE0974C7571445A740264E4CEFFD29* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___continuation0, const RuntimeMethod* method)
{
	((  void (*) (Awaiter_t2FED8B6C42FE0974C7571445A740264E4CEFFD29*, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*, const RuntimeMethod*))Awaiter_UnsafeOnCompleted_m879C5B3DA0025E382898DBC531A796B4B03D85A1_gshared_inline)(__this, ___continuation0, method);
}
// System.Void Cysharp.Threading.Tasks.UnityAsyncExtensions/AsyncOperationAwaiter::UnsafeOnCompleted(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncOperationAwaiter_UnsafeOnCompleted_m1FCE8D7EEF11CA5BC83FB9E7ECB4984D16DE8C04 (AsyncOperationAwaiter_t31DC22FCC690816BA1A3508437F3D208F7CE3CFF* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___continuation0, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.YieldAwaitable/Awaiter::UnsafeOnCompleted(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Awaiter_UnsafeOnCompleted_m449B902ED39DDF273B1DC642244CA8B4D3831BE5 (Awaiter_t8B500B68E8763F6139A8470A24AB065434A17220* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___continuation0, const RuntimeMethod* method) ;
// System.Void System.Action::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) ;
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
// System.Void Main.EntryManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EntryManager_Start_m98B3CEBECF6730890C96D2EF473EEAB9014A0EC2 (EntryManager_t5E007CC610B9C44A6887E3B6A5A0B42D9F719E80* __this, const RuntimeMethod* method) 
{
	{
		// _check_update().Forget();
		UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_0;
		L_0 = EntryManager__check_update_mDA4A9E6F4013D1DFE67ED418983353B9CD893FA7(__this, NULL);
		UniTaskExtensions_Forget_m8F82202C3DB2020AAE7F874AE049DA711A01DF13(L_0, NULL);
		// }
		return;
	}
}
// Cysharp.Threading.Tasks.UniTask Main.EntryManager::_check_update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 EntryManager__check_update_mDA4A9E6F4013D1DFE67ED418983353B9CD893FA7 (EntryManager_t5E007CC610B9C44A6887E3B6A5A0B42D9F719E80* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUniTaskMethodBuilder_Start_TisU3C_check_updateU3Ed__4_tC52AC11C5C7BC7CDB895194FA2D8EE5F4512B709_mE37C3544B701FBB183C034145D74043CDDB9E278_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	U3C_check_updateU3Ed__4_tC52AC11C5C7BC7CDB895194FA2D8EE5F4512B709 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0 L_0;
		L_0 = AsyncUniTaskMethodBuilder_Create_m882DFD5EE004FF6F84F182A3AC170AEDCA8C5327_inline(NULL);
		(&V_0)->___U3CU3Et__builder_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___runnerPromise_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___ex_1), (void*)NULL);
		#endif
		(&V_0)->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___U3CU3E4__this_2), (void*)__this);
		(&V_0)->___U3CU3E1__state_0 = (-1);
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_1 = (&(&V_0)->___U3CU3Et__builder_1);
		AsyncUniTaskMethodBuilder_Start_TisU3C_check_updateU3Ed__4_tC52AC11C5C7BC7CDB895194FA2D8EE5F4512B709_mE37C3544B701FBB183C034145D74043CDDB9E278_inline(L_1, (&V_0), AsyncUniTaskMethodBuilder_Start_TisU3C_check_updateU3Ed__4_tC52AC11C5C7BC7CDB895194FA2D8EE5F4512B709_mE37C3544B701FBB183C034145D74043CDDB9E278_RuntimeMethod_var);
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_2 = (&(&V_0)->___U3CU3Et__builder_1);
		UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_3;
		L_3 = AsyncUniTaskMethodBuilder_get_Task_m11E43D69C4F85EB23AAC58143DE695309D1022EC_inline(L_2, NULL);
		return L_3;
	}
}
// Cysharp.Threading.Tasks.UniTask Main.EntryManager::_update_address_ables()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 EntryManager__update_address_ables_mC63CFEDC6536CFA50719E534996943E24284916F (EntryManager_t5E007CC610B9C44A6887E3B6A5A0B42D9F719E80* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUniTaskMethodBuilder_Start_TisU3C_update_address_ablesU3Ed__5_t1FF32C47FEFD857C04A3820565973362359C9708_mE27CCF76B76BEB6C13772B29DD08C16A0CBEE1C8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	U3C_update_address_ablesU3Ed__5_t1FF32C47FEFD857C04A3820565973362359C9708 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0 L_0;
		L_0 = AsyncUniTaskMethodBuilder_Create_m882DFD5EE004FF6F84F182A3AC170AEDCA8C5327_inline(NULL);
		(&V_0)->___U3CU3Et__builder_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___runnerPromise_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___ex_1), (void*)NULL);
		#endif
		(&V_0)->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___U3CU3E4__this_2), (void*)__this);
		(&V_0)->___U3CU3E1__state_0 = (-1);
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_1 = (&(&V_0)->___U3CU3Et__builder_1);
		AsyncUniTaskMethodBuilder_Start_TisU3C_update_address_ablesU3Ed__5_t1FF32C47FEFD857C04A3820565973362359C9708_mE27CCF76B76BEB6C13772B29DD08C16A0CBEE1C8_inline(L_1, (&V_0), AsyncUniTaskMethodBuilder_Start_TisU3C_update_address_ablesU3Ed__5_t1FF32C47FEFD857C04A3820565973362359C9708_mE27CCF76B76BEB6C13772B29DD08C16A0CBEE1C8_RuntimeMethod_var);
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_2 = (&(&V_0)->___U3CU3Et__builder_1);
		UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_3;
		L_3 = AsyncUniTaskMethodBuilder_get_Task_m11E43D69C4F85EB23AAC58143DE695309D1022EC_inline(L_2, NULL);
		return L_3;
	}
}
// Cysharp.Threading.Tasks.UniTask Main.EntryManager::_download(UnityEngine.AddressableAssets.ResourceLocators.IResourceLocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 EntryManager__download_m48680C1AAD8A9A9D0FBCAFC6794153BAFEACA7F4 (EntryManager_t5E007CC610B9C44A6887E3B6A5A0B42D9F719E80* __this, RuntimeObject* ___resourceLocator0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUniTaskMethodBuilder_Start_TisU3C_downloadU3Ed__6_t9FDE76F9ADCA6BBDA45A209199A06BBF4CEA504E_m2A58C814FFD6876E5E9040D52C73ED7BFA86BC3E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	U3C_downloadU3Ed__6_t9FDE76F9ADCA6BBDA45A209199A06BBF4CEA504E V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0 L_0;
		L_0 = AsyncUniTaskMethodBuilder_Create_m882DFD5EE004FF6F84F182A3AC170AEDCA8C5327_inline(NULL);
		(&V_0)->___U3CU3Et__builder_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___runnerPromise_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___ex_1), (void*)NULL);
		#endif
		RuntimeObject* L_1 = ___resourceLocator0;
		(&V_0)->___resourceLocator_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___resourceLocator_2), (void*)L_1);
		(&V_0)->___U3CU3E1__state_0 = (-1);
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_2 = (&(&V_0)->___U3CU3Et__builder_1);
		AsyncUniTaskMethodBuilder_Start_TisU3C_downloadU3Ed__6_t9FDE76F9ADCA6BBDA45A209199A06BBF4CEA504E_m2A58C814FFD6876E5E9040D52C73ED7BFA86BC3E_inline(L_2, (&V_0), AsyncUniTaskMethodBuilder_Start_TisU3C_downloadU3Ed__6_t9FDE76F9ADCA6BBDA45A209199A06BBF4CEA504E_m2A58C814FFD6876E5E9040D52C73ED7BFA86BC3E_RuntimeMethod_var);
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_3 = (&(&V_0)->___U3CU3Et__builder_1);
		UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_4;
		L_4 = AsyncUniTaskMethodBuilder_get_Task_m11E43D69C4F85EB23AAC58143DE695309D1022EC_inline(L_3, NULL);
		return L_4;
	}
}
// Cysharp.Threading.Tasks.UniTask Main.EntryManager::_load_hotfix_dlls()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 EntryManager__load_hotfix_dlls_m0177EABB672B77EC28663D6BF757CE541CD7D3DA (EntryManager_t5E007CC610B9C44A6887E3B6A5A0B42D9F719E80* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUniTaskMethodBuilder_Start_TisU3C_load_hotfix_dllsU3Ed__7_t779C30021B738E08FCFBE0CA14B688F31D262DF1_m565D3F029CBBC67D6AFC52393E4E5B094AB84828_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	U3C_load_hotfix_dllsU3Ed__7_t779C30021B738E08FCFBE0CA14B688F31D262DF1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0 L_0;
		L_0 = AsyncUniTaskMethodBuilder_Create_m882DFD5EE004FF6F84F182A3AC170AEDCA8C5327_inline(NULL);
		(&V_0)->___U3CU3Et__builder_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___runnerPromise_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___ex_1), (void*)NULL);
		#endif
		(&V_0)->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___U3CU3E4__this_2), (void*)__this);
		(&V_0)->___U3CU3E1__state_0 = (-1);
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_1 = (&(&V_0)->___U3CU3Et__builder_1);
		AsyncUniTaskMethodBuilder_Start_TisU3C_load_hotfix_dllsU3Ed__7_t779C30021B738E08FCFBE0CA14B688F31D262DF1_m565D3F029CBBC67D6AFC52393E4E5B094AB84828_inline(L_1, (&V_0), AsyncUniTaskMethodBuilder_Start_TisU3C_load_hotfix_dllsU3Ed__7_t779C30021B738E08FCFBE0CA14B688F31D262DF1_m565D3F029CBBC67D6AFC52393E4E5B094AB84828_RuntimeMethod_var);
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_2 = (&(&V_0)->___U3CU3Et__builder_1);
		UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_3;
		L_3 = AsyncUniTaskMethodBuilder_get_Task_m11E43D69C4F85EB23AAC58143DE695309D1022EC_inline(L_2, NULL);
		return L_3;
	}
}
// Cysharp.Threading.Tasks.UniTask Main.EntryManager::_load_meta_data_for_aot_dlls()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 EntryManager__load_meta_data_for_aot_dlls_m774D5A9F8B33899C3069069621DD437980EA1694 (EntryManager_t5E007CC610B9C44A6887E3B6A5A0B42D9F719E80* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUniTaskMethodBuilder_Start_TisU3C_load_meta_data_for_aot_dllsU3Ed__8_tCAEEC6F4B744F2FA13F4EBBA82E82ECCC865F2AE_m0836399DFBD550E2531305CF00C37E233B6D80CB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	U3C_load_meta_data_for_aot_dllsU3Ed__8_tCAEEC6F4B744F2FA13F4EBBA82E82ECCC865F2AE V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0 L_0;
		L_0 = AsyncUniTaskMethodBuilder_Create_m882DFD5EE004FF6F84F182A3AC170AEDCA8C5327_inline(NULL);
		(&V_0)->___U3CU3Et__builder_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___runnerPromise_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___ex_1), (void*)NULL);
		#endif
		(&V_0)->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___U3CU3E4__this_2), (void*)__this);
		(&V_0)->___U3CU3E1__state_0 = (-1);
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_1 = (&(&V_0)->___U3CU3Et__builder_1);
		AsyncUniTaskMethodBuilder_Start_TisU3C_load_meta_data_for_aot_dllsU3Ed__8_tCAEEC6F4B744F2FA13F4EBBA82E82ECCC865F2AE_m0836399DFBD550E2531305CF00C37E233B6D80CB_inline(L_1, (&V_0), AsyncUniTaskMethodBuilder_Start_TisU3C_load_meta_data_for_aot_dllsU3Ed__8_tCAEEC6F4B744F2FA13F4EBBA82E82ECCC865F2AE_m0836399DFBD550E2531305CF00C37E233B6D80CB_RuntimeMethod_var);
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_2 = (&(&V_0)->___U3CU3Et__builder_1);
		UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_3;
		L_3 = AsyncUniTaskMethodBuilder_get_Task_m11E43D69C4F85EB23AAC58143DE695309D1022EC_inline(L_2, NULL);
		return L_3;
	}
}
// Cysharp.Threading.Tasks.UniTask Main.EntryManager::_enter_hotfix_main_scene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 EntryManager__enter_hotfix_main_scene_m81B01F1256F06C108AD9B960C450239ECE2C7AC9 (EntryManager_t5E007CC610B9C44A6887E3B6A5A0B42D9F719E80* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUniTaskMethodBuilder_Start_TisU3C_enter_hotfix_main_sceneU3Ed__9_t9B561018599EEBB76E27BFE7574480D196AB56EC_mB10580251D3D79C0C95ED729B10C3D31FE33D57F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	U3C_enter_hotfix_main_sceneU3Ed__9_t9B561018599EEBB76E27BFE7574480D196AB56EC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0 L_0;
		L_0 = AsyncUniTaskMethodBuilder_Create_m882DFD5EE004FF6F84F182A3AC170AEDCA8C5327_inline(NULL);
		(&V_0)->___U3CU3Et__builder_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___runnerPromise_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___ex_1), (void*)NULL);
		#endif
		(&V_0)->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___U3CU3E4__this_2), (void*)__this);
		(&V_0)->___U3CU3E1__state_0 = (-1);
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_1 = (&(&V_0)->___U3CU3Et__builder_1);
		AsyncUniTaskMethodBuilder_Start_TisU3C_enter_hotfix_main_sceneU3Ed__9_t9B561018599EEBB76E27BFE7574480D196AB56EC_mB10580251D3D79C0C95ED729B10C3D31FE33D57F_inline(L_1, (&V_0), AsyncUniTaskMethodBuilder_Start_TisU3C_enter_hotfix_main_sceneU3Ed__9_t9B561018599EEBB76E27BFE7574480D196AB56EC_mB10580251D3D79C0C95ED729B10C3D31FE33D57F_RuntimeMethod_var);
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_2 = (&(&V_0)->___U3CU3Et__builder_1);
		UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_3;
		L_3 = AsyncUniTaskMethodBuilder_get_Task_m11E43D69C4F85EB23AAC58143DE695309D1022EC_inline(L_2, NULL);
		return L_3;
	}
}
// Cysharp.Threading.Tasks.UniTask Main.EntryManager::_wait_for_enter_input()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 EntryManager__wait_for_enter_input_m3F42E08EF4512373FBAD1144CFA4458BAB26D12A (EntryManager_t5E007CC610B9C44A6887E3B6A5A0B42D9F719E80* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUniTaskMethodBuilder_Start_TisU3C_wait_for_enter_inputU3Ed__10_t1F519E78F77BE52FDE3B74FDC96C4E295EE733EE_m3BEAC30B7E729A4CD959677128FA3A32BA4DD925_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	U3C_wait_for_enter_inputU3Ed__10_t1F519E78F77BE52FDE3B74FDC96C4E295EE733EE V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0 L_0;
		L_0 = AsyncUniTaskMethodBuilder_Create_m882DFD5EE004FF6F84F182A3AC170AEDCA8C5327_inline(NULL);
		(&V_0)->___U3CU3Et__builder_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___runnerPromise_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___ex_1), (void*)NULL);
		#endif
		(&V_0)->___U3CU3E1__state_0 = (-1);
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_1 = (&(&V_0)->___U3CU3Et__builder_1);
		AsyncUniTaskMethodBuilder_Start_TisU3C_wait_for_enter_inputU3Ed__10_t1F519E78F77BE52FDE3B74FDC96C4E295EE733EE_m3BEAC30B7E729A4CD959677128FA3A32BA4DD925_inline(L_1, (&V_0), AsyncUniTaskMethodBuilder_Start_TisU3C_wait_for_enter_inputU3Ed__10_t1F519E78F77BE52FDE3B74FDC96C4E295EE733EE_m3BEAC30B7E729A4CD959677128FA3A32BA4DD925_RuntimeMethod_var);
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_2 = (&(&V_0)->___U3CU3Et__builder_1);
		UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_3;
		L_3 = AsyncUniTaskMethodBuilder_get_Task_m11E43D69C4F85EB23AAC58143DE695309D1022EC_inline(L_2, NULL);
		return L_3;
	}
}
// System.Void Main.EntryManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EntryManager__ctor_m01A0C0013006DF0FBB5743C5388949CFC598C54F (EntryManager_t5E007CC610B9C44A6887E3B6A5A0B42D9F719E80* __this, const RuntimeMethod* method) 
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
// System.Void Main.EntryManager/<_check_update>d__4::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3C_check_updateU3Ed__4_MoveNext_m0E4BEA2825454A22367DD5352A65B3A8D8840B07 (U3C_check_updateU3Ed__4_tC52AC11C5C7BC7CDB895194FA2D8EE5F4512B709* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956_TisU3C_check_updateU3Ed__4_tC52AC11C5C7BC7CDB895194FA2D8EE5F4512B709_m056ABA85B0354271FF823CC6002E1C0684584C7E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	EntryManager_t5E007CC610B9C44A6887E3B6A5A0B42D9F719E80* V_1 = NULL;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_2;
	memset((&V_2), 0, sizeof(V_2));
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Exception_t* V_4 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		EntryManager_t5E007CC610B9C44A6887E3B6A5A0B42D9F719E80* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			switch (L_2)
			{
				case 0:
				{
					goto IL_005f_1;
				}
				case 1:
				{
					goto IL_00bd_1;
				}
				case 2:
				{
					goto IL_011b_1;
				}
				case 3:
				{
					goto IL_0176_1;
				}
			}
		}
		{
			// await _update_address_ables();
			EntryManager_t5E007CC610B9C44A6887E3B6A5A0B42D9F719E80* L_3 = V_1;
			NullCheck(L_3);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_4;
			L_4 = EntryManager__update_address_ables_mC63CFEDC6536CFA50719E534996943E24284916F(L_3, NULL);
			V_3 = L_4;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_5;
			L_5 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
			V_2 = L_5;
			bool L_6;
			L_6 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_2), NULL);
			if (L_6)
			{
				goto IL_007b_1;
			}
		}
		{
			int32_t L_7 = 0;
			V_0 = L_7;
			__this->___U3CU3E1__state_0 = L_7;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_8 = V_2;
			__this->___U3CU3Eu__1_3 = L_8;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1_3))->___task_0))->___source_0), (void*)NULL);
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_9 = (&__this->___U3CU3Et__builder_1);
			AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956_TisU3C_check_updateU3Ed__4_tC52AC11C5C7BC7CDB895194FA2D8EE5F4512B709_m056ABA85B0354271FF823CC6002E1C0684584C7E_inline(L_9, (&V_2), __this, AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956_TisU3C_check_updateU3Ed__4_tC52AC11C5C7BC7CDB895194FA2D8EE5F4512B709_m056ABA85B0354271FF823CC6002E1C0684584C7E_RuntimeMethod_var);
			goto IL_01c7;
		}

IL_005f_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_10 = __this->___U3CU3Eu__1_3;
			V_2 = L_10;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_11 = (&__this->___U3CU3Eu__1_3);
			il2cpp_codegen_initobj(L_11, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_12 = (-1);
			V_0 = L_12;
			__this->___U3CU3E1__state_0 = L_12;
		}

IL_007b_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_2), NULL);
			// await _load_meta_data_for_aot_dlls();
			EntryManager_t5E007CC610B9C44A6887E3B6A5A0B42D9F719E80* L_13 = V_1;
			NullCheck(L_13);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_14;
			L_14 = EntryManager__load_meta_data_for_aot_dlls_m774D5A9F8B33899C3069069621DD437980EA1694(L_13, NULL);
			V_3 = L_14;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_15;
			L_15 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
			V_2 = L_15;
			bool L_16;
			L_16 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_2), NULL);
			if (L_16)
			{
				goto IL_00d9_1;
			}
		}
		{
			int32_t L_17 = 1;
			V_0 = L_17;
			__this->___U3CU3E1__state_0 = L_17;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_18 = V_2;
			__this->___U3CU3Eu__1_3 = L_18;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1_3))->___task_0))->___source_0), (void*)NULL);
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_19 = (&__this->___U3CU3Et__builder_1);
			AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956_TisU3C_check_updateU3Ed__4_tC52AC11C5C7BC7CDB895194FA2D8EE5F4512B709_m056ABA85B0354271FF823CC6002E1C0684584C7E_inline(L_19, (&V_2), __this, AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956_TisU3C_check_updateU3Ed__4_tC52AC11C5C7BC7CDB895194FA2D8EE5F4512B709_m056ABA85B0354271FF823CC6002E1C0684584C7E_RuntimeMethod_var);
			goto IL_01c7;
		}

IL_00bd_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_20 = __this->___U3CU3Eu__1_3;
			V_2 = L_20;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_21 = (&__this->___U3CU3Eu__1_3);
			il2cpp_codegen_initobj(L_21, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_22 = (-1);
			V_0 = L_22;
			__this->___U3CU3E1__state_0 = L_22;
		}

IL_00d9_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_2), NULL);
			// await _load_hotfix_dlls();
			EntryManager_t5E007CC610B9C44A6887E3B6A5A0B42D9F719E80* L_23 = V_1;
			NullCheck(L_23);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_24;
			L_24 = EntryManager__load_hotfix_dlls_m0177EABB672B77EC28663D6BF757CE541CD7D3DA(L_23, NULL);
			V_3 = L_24;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_25;
			L_25 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
			V_2 = L_25;
			bool L_26;
			L_26 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_2), NULL);
			if (L_26)
			{
				goto IL_0137_1;
			}
		}
		{
			int32_t L_27 = 2;
			V_0 = L_27;
			__this->___U3CU3E1__state_0 = L_27;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_28 = V_2;
			__this->___U3CU3Eu__1_3 = L_28;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1_3))->___task_0))->___source_0), (void*)NULL);
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_29 = (&__this->___U3CU3Et__builder_1);
			AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956_TisU3C_check_updateU3Ed__4_tC52AC11C5C7BC7CDB895194FA2D8EE5F4512B709_m056ABA85B0354271FF823CC6002E1C0684584C7E_inline(L_29, (&V_2), __this, AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956_TisU3C_check_updateU3Ed__4_tC52AC11C5C7BC7CDB895194FA2D8EE5F4512B709_m056ABA85B0354271FF823CC6002E1C0684584C7E_RuntimeMethod_var);
			goto IL_01c7;
		}

IL_011b_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_30 = __this->___U3CU3Eu__1_3;
			V_2 = L_30;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_31 = (&__this->___U3CU3Eu__1_3);
			il2cpp_codegen_initobj(L_31, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_32 = (-1);
			V_0 = L_32;
			__this->___U3CU3E1__state_0 = L_32;
		}

IL_0137_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_2), NULL);
			// await _enter_hotfix_main_scene();
			EntryManager_t5E007CC610B9C44A6887E3B6A5A0B42D9F719E80* L_33 = V_1;
			NullCheck(L_33);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_34;
			L_34 = EntryManager__enter_hotfix_main_scene_m81B01F1256F06C108AD9B960C450239ECE2C7AC9(L_33, NULL);
			V_3 = L_34;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_35;
			L_35 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
			V_2 = L_35;
			bool L_36;
			L_36 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_2), NULL);
			if (L_36)
			{
				goto IL_0192_1;
			}
		}
		{
			int32_t L_37 = 3;
			V_0 = L_37;
			__this->___U3CU3E1__state_0 = L_37;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_38 = V_2;
			__this->___U3CU3Eu__1_3 = L_38;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1_3))->___task_0))->___source_0), (void*)NULL);
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_39 = (&__this->___U3CU3Et__builder_1);
			AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956_TisU3C_check_updateU3Ed__4_tC52AC11C5C7BC7CDB895194FA2D8EE5F4512B709_m056ABA85B0354271FF823CC6002E1C0684584C7E_inline(L_39, (&V_2), __this, AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956_TisU3C_check_updateU3Ed__4_tC52AC11C5C7BC7CDB895194FA2D8EE5F4512B709_m056ABA85B0354271FF823CC6002E1C0684584C7E_RuntimeMethod_var);
			goto IL_01c7;
		}

IL_0176_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_40 = __this->___U3CU3Eu__1_3;
			V_2 = L_40;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_41 = (&__this->___U3CU3Eu__1_3);
			il2cpp_codegen_initobj(L_41, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_42 = (-1);
			V_0 = L_42;
			__this->___U3CU3E1__state_0 = L_42;
		}

IL_0192_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_2), NULL);
			goto IL_01b4;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_019b;
		}
		throw e;
	}

CATCH_019b:
	{// begin catch(System.Exception)
		V_4 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_43 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_44 = V_4;
		AsyncUniTaskMethodBuilder_SetException_m0D772D62D01CC371F4AB0F6943BBBE0FEAB19643_inline(L_43, L_44, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_01c7;
	}// end catch (depth: 1)

IL_01b4:
	{
		// }
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_45 = (&__this->___U3CU3Et__builder_1);
		AsyncUniTaskMethodBuilder_SetResult_mBBA527F0F21E04D65A269C0D02597CE5B2D1E9CB_inline(L_45, NULL);
	}

IL_01c7:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3C_check_updateU3Ed__4_MoveNext_m0E4BEA2825454A22367DD5352A65B3A8D8840B07_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3C_check_updateU3Ed__4_tC52AC11C5C7BC7CDB895194FA2D8EE5F4512B709* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3C_check_updateU3Ed__4_tC52AC11C5C7BC7CDB895194FA2D8EE5F4512B709*>(__this + _offset);
	U3C_check_updateU3Ed__4_MoveNext_m0E4BEA2825454A22367DD5352A65B3A8D8840B07(_thisAdjusted, method);
}
// System.Void Main.EntryManager/<_check_update>d__4::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3C_check_updateU3Ed__4_SetStateMachine_mE69D62E5A945D7CF28A8B7CC7706B407116D78B4 (U3C_check_updateU3Ed__4_tC52AC11C5C7BC7CDB895194FA2D8EE5F4512B709* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) 
{
	{
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_0 = (&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncUniTaskMethodBuilder_SetStateMachine_m466E6779CB9DEC814C0A59E7766D95EC2C3268CF(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3C_check_updateU3Ed__4_SetStateMachine_mE69D62E5A945D7CF28A8B7CC7706B407116D78B4_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	U3C_check_updateU3Ed__4_tC52AC11C5C7BC7CDB895194FA2D8EE5F4512B709* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3C_check_updateU3Ed__4_tC52AC11C5C7BC7CDB895194FA2D8EE5F4512B709*>(__this + _offset);
	U3C_check_updateU3Ed__4_SetStateMachine_mE69D62E5A945D7CF28A8B7CC7706B407116D78B4(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Main.EntryManager/<_update_address_ables>d__5::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3C_update_address_ablesU3Ed__5_MoveNext_mFEDBFF39994F7D2E47F5D4188D980E63BADCFCE8 (U3C_update_address_ablesU3Ed__5_t1FF32C47FEFD857C04A3820565973362359C9708* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AddressablesAsyncExtensions_GetAwaiter_TisList_1_t540309E962CB768808E54FF9E53136790E1C4975_m847F6622D76C1002DC88557FCDDD022BCAF87921_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AddressablesAsyncExtensions_GetAwaiter_TisList_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_m69D6C4192B1B7A92537E67795F1ABEAC4D04581A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Addressables_tB93529ED0B034BF1A8C7830710BAA45C20A0F7D6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncOperationHandle_1_get_Task_m758BF97BB1FF1A2ED1EDA51B1382845A5D21F063_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_t1DDEDE7E04BB8D7D1E27227C101ED09A90BAABE2_TisU3C_update_address_ablesU3Ed__5_t1FF32C47FEFD857C04A3820565973362359C9708_m4E01B3AA4178ABCA2D6718C896C5260FF0C4D8EB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tE6CAD4D39AD4E3DC47F1BFE0ACC22A288650F25E_TisU3C_update_address_ablesU3Ed__5_t1FF32C47FEFD857C04A3820565973362359C9708_m1063BD34136E5DF0BE8BFA8BF4F23CD73CCD24D1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956_TisU3C_update_address_ablesU3Ed__5_t1FF32C47FEFD857C04A3820565973362359C9708_m6D0F2B4D522926147973B8FB250701AA85F23BEB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t56729B862AE97EABC420EB2261CE66FAB0E31166_TisU3C_update_address_ablesU3Ed__5_t1FF32C47FEFD857C04A3820565973362359C9708_m9A9E83D443C8FF56A720873EE2660A125BD986F3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_GetResult_m1C61637BC91C1BE8CCD0B118EB65366E62B474BF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_GetResult_m22850F7F33D4F8D29DF3725D6AE1627F7DBA8973_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_get_IsCompleted_m5D9029DBD1082223118EBD2EF522323FD4FA28F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_get_IsCompleted_m8A6B8683C02077FA5D55439EB08681166BB565BA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m9E27CB96C767F816BF5E072668F628209615053B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mE20EB0F3435DA5E172879D43541140BF1F5F2978_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m70628B9BE52F8E6A761C9A5B2F2486E296FD1FBE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m3F5700A99F79B66C45E7C5377D838DFE6F8D7DCA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m5FC569B19E1FE556C71A122795F87D563D42433E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_mE4F31E35A089C54FBEA50786ECCF4CEB21D0417B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_m409031C4DC9B07B8D94AF0E101A508771F5BDE8D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_GetAwaiter_m4A461E790248B13491BA593232A5390C6F90B1D4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral315A0DB78E4B7025EF5AA4C425DA0C8E88F374E8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral742AB32FC51B28B013E0515C193B77F34F20BDA6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7D0E74747A146E780636333F9CDF36151D29153B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9353260D431D22A3C7198ADA114FE3CF82123DF9);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	EntryManager_t5E007CC610B9C44A6887E3B6A5A0B42D9F719E80* V_1 = NULL;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* V_2 = NULL;
	List_1_t540309E962CB768808E54FF9E53136790E1C4975* V_3 = NULL;
	TaskAwaiter_1_t56729B862AE97EABC420EB2261CE66FAB0E31166 V_4;
	memset((&V_4), 0, sizeof(V_4));
	AsyncOperationHandle_1_t42BB61262B05D32A3C3C0E42ADB3294DFE46A8AC V_5;
	memset((&V_5), 0, sizeof(V_5));
	Awaiter_t1DDEDE7E04BB8D7D1E27227C101ED09A90BAABE2 V_6;
	memset((&V_6), 0, sizeof(V_6));
	Awaiter_tE6CAD4D39AD4E3DC47F1BFE0ACC22A288650F25E V_7;
	memset((&V_7), 0, sizeof(V_7));
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_8;
	memset((&V_8), 0, sizeof(V_8));
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 V_9;
	memset((&V_9), 0, sizeof(V_9));
	Exception_t* V_10 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		EntryManager_t5E007CC610B9C44A6887E3B6A5A0B42D9F719E80* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			switch (L_2)
			{
				case 0:
				{
					goto IL_0066_1;
				}
				case 1:
				{
					goto IL_00c5_1;
				}
				case 2:
				{
					goto IL_013d_1;
				}
				case 3:
				{
					goto IL_0188_1;
				}
			}
		}
		{
			// await Addressables.InitializeAsync().Task;
			il2cpp_codegen_runtime_class_init_inline(Addressables_tB93529ED0B034BF1A8C7830710BAA45C20A0F7D6_il2cpp_TypeInfo_var);
			AsyncOperationHandle_1_t42BB61262B05D32A3C3C0E42ADB3294DFE46A8AC L_3;
			L_3 = Addressables_InitializeAsync_m8F30FEFAF5514C2D0F978D4D92F09C6F575F80F3(NULL);
			V_5 = L_3;
			Task_1_tAF937EF1CA4B1527DA6CEB7CDABB2116AFF43CA1* L_4;
			L_4 = AsyncOperationHandle_1_get_Task_m758BF97BB1FF1A2ED1EDA51B1382845A5D21F063((&V_5), AsyncOperationHandle_1_get_Task_m758BF97BB1FF1A2ED1EDA51B1382845A5D21F063_RuntimeMethod_var);
			NullCheck(L_4);
			TaskAwaiter_1_t56729B862AE97EABC420EB2261CE66FAB0E31166 L_5;
			L_5 = Task_1_GetAwaiter_m4A461E790248B13491BA593232A5390C6F90B1D4(L_4, Task_1_GetAwaiter_m4A461E790248B13491BA593232A5390C6F90B1D4_RuntimeMethod_var);
			V_4 = L_5;
			bool L_6;
			L_6 = TaskAwaiter_1_get_IsCompleted_m409031C4DC9B07B8D94AF0E101A508771F5BDE8D((&V_4), TaskAwaiter_1_get_IsCompleted_m409031C4DC9B07B8D94AF0E101A508771F5BDE8D_RuntimeMethod_var);
			if (L_6)
			{
				goto IL_0083_1;
			}
		}
		{
			int32_t L_7 = 0;
			V_0 = L_7;
			__this->___U3CU3E1__state_0 = L_7;
			TaskAwaiter_1_t56729B862AE97EABC420EB2261CE66FAB0E31166 L_8 = V_4;
			__this->___U3CU3Eu__1_3 = L_8;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_3))->___m_task_0), (void*)NULL);
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_9 = (&__this->___U3CU3Et__builder_1);
			AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t56729B862AE97EABC420EB2261CE66FAB0E31166_TisU3C_update_address_ablesU3Ed__5_t1FF32C47FEFD857C04A3820565973362359C9708_m9A9E83D443C8FF56A720873EE2660A125BD986F3_inline(L_9, (&V_4), __this, AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t56729B862AE97EABC420EB2261CE66FAB0E31166_TisU3C_update_address_ablesU3Ed__5_t1FF32C47FEFD857C04A3820565973362359C9708_m9A9E83D443C8FF56A720873EE2660A125BD986F3_RuntimeMethod_var);
			goto IL_029e;
		}

IL_0066_1:
		{
			TaskAwaiter_1_t56729B862AE97EABC420EB2261CE66FAB0E31166 L_10 = __this->___U3CU3Eu__1_3;
			V_4 = L_10;
			TaskAwaiter_1_t56729B862AE97EABC420EB2261CE66FAB0E31166* L_11 = (&__this->___U3CU3Eu__1_3);
			il2cpp_codegen_initobj(L_11, sizeof(TaskAwaiter_1_t56729B862AE97EABC420EB2261CE66FAB0E31166));
			int32_t L_12 = (-1);
			V_0 = L_12;
			__this->___U3CU3E1__state_0 = L_12;
		}

IL_0083_1:
		{
			RuntimeObject* L_13;
			L_13 = TaskAwaiter_1_GetResult_mE4F31E35A089C54FBEA50786ECCF4CEB21D0417B((&V_4), TaskAwaiter_1_GetResult_mE4F31E35A089C54FBEA50786ECCF4CEB21D0417B_RuntimeMethod_var);
			// List<string> catalogs = await Addressables.CheckForCatalogUpdates();
			il2cpp_codegen_runtime_class_init_inline(Addressables_tB93529ED0B034BF1A8C7830710BAA45C20A0F7D6_il2cpp_TypeInfo_var);
			AsyncOperationHandle_1_tAA8468BA8C5994CD242CA70D05A8474AF68F7646 L_14;
			L_14 = Addressables_CheckForCatalogUpdates_m4AB4B9D717C9BB941E9379B105A3479457D95A1D((bool)1, NULL);
			Awaiter_t1DDEDE7E04BB8D7D1E27227C101ED09A90BAABE2 L_15;
			L_15 = AddressablesAsyncExtensions_GetAwaiter_TisList_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_m69D6C4192B1B7A92537E67795F1ABEAC4D04581A(L_14, AddressablesAsyncExtensions_GetAwaiter_TisList_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_m69D6C4192B1B7A92537E67795F1ABEAC4D04581A_RuntimeMethod_var);
			V_6 = L_15;
			bool L_16;
			L_16 = Awaiter_get_IsCompleted_m8A6B8683C02077FA5D55439EB08681166BB565BA_inline((&V_6), Awaiter_get_IsCompleted_m8A6B8683C02077FA5D55439EB08681166BB565BA_RuntimeMethod_var);
			if (L_16)
			{
				goto IL_00e2_1;
			}
		}
		{
			int32_t L_17 = 1;
			V_0 = L_17;
			__this->___U3CU3E1__state_0 = L_17;
			Awaiter_t1DDEDE7E04BB8D7D1E27227C101ED09A90BAABE2 L_18 = V_6;
			__this->___U3CU3Eu__2_4 = L_18;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__2_4))->___task_0))->___source_0), (void*)NULL);
			#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__2_4))->___task_0))->___result_1), (void*)NULL);
			#endif
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_19 = (&__this->___U3CU3Et__builder_1);
			AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_t1DDEDE7E04BB8D7D1E27227C101ED09A90BAABE2_TisU3C_update_address_ablesU3Ed__5_t1FF32C47FEFD857C04A3820565973362359C9708_m4E01B3AA4178ABCA2D6718C896C5260FF0C4D8EB_inline(L_19, (&V_6), __this, AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_t1DDEDE7E04BB8D7D1E27227C101ED09A90BAABE2_TisU3C_update_address_ablesU3Ed__5_t1FF32C47FEFD857C04A3820565973362359C9708_m4E01B3AA4178ABCA2D6718C896C5260FF0C4D8EB_RuntimeMethod_var);
			goto IL_029e;
		}

IL_00c5_1:
		{
			Awaiter_t1DDEDE7E04BB8D7D1E27227C101ED09A90BAABE2 L_20 = __this->___U3CU3Eu__2_4;
			V_6 = L_20;
			Awaiter_t1DDEDE7E04BB8D7D1E27227C101ED09A90BAABE2* L_21 = (&__this->___U3CU3Eu__2_4);
			il2cpp_codegen_initobj(L_21, sizeof(Awaiter_t1DDEDE7E04BB8D7D1E27227C101ED09A90BAABE2));
			int32_t L_22 = (-1);
			V_0 = L_22;
			__this->___U3CU3E1__state_0 = L_22;
		}

IL_00e2_1:
		{
			List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_23;
			L_23 = Awaiter_GetResult_m22850F7F33D4F8D29DF3725D6AE1627F7DBA8973_inline((&V_6), Awaiter_GetResult_m22850F7F33D4F8D29DF3725D6AE1627F7DBA8973_RuntimeMethod_var);
			V_2 = L_23;
			// if (catalogs.Count <= 0)
			List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_24 = V_2;
			NullCheck(L_24);
			int32_t L_25;
			L_25 = List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_inline(L_24, List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
			if ((((int32_t)L_25) > ((int32_t)0)))
			{
				goto IL_0102_1;
			}
		}
		{
			// Debug.Log("?????????");
			il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
			Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral9353260D431D22A3C7198ADA114FE3CF82123DF9, NULL);
			// return;
			goto IL_028b;
		}

IL_0102_1:
		{
			// List<IResourceLocator> resourceLocators = await Addressables.UpdateCatalogs(catalogs);
			List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_26 = V_2;
			il2cpp_codegen_runtime_class_init_inline(Addressables_tB93529ED0B034BF1A8C7830710BAA45C20A0F7D6_il2cpp_TypeInfo_var);
			AsyncOperationHandle_1_tB06077285DDBB8B950592F6ACC37C333ADDD997F L_27;
			L_27 = Addressables_UpdateCatalogs_m7AEECFD1B41CD4A0EB2AF0AB3A9589564F0C3024(L_26, (bool)1, NULL);
			Awaiter_tE6CAD4D39AD4E3DC47F1BFE0ACC22A288650F25E L_28;
			L_28 = AddressablesAsyncExtensions_GetAwaiter_TisList_1_t540309E962CB768808E54FF9E53136790E1C4975_m847F6622D76C1002DC88557FCDDD022BCAF87921(L_27, AddressablesAsyncExtensions_GetAwaiter_TisList_1_t540309E962CB768808E54FF9E53136790E1C4975_m847F6622D76C1002DC88557FCDDD022BCAF87921_RuntimeMethod_var);
			V_7 = L_28;
			bool L_29;
			L_29 = Awaiter_get_IsCompleted_m5D9029DBD1082223118EBD2EF522323FD4FA28F8_inline((&V_7), Awaiter_get_IsCompleted_m5D9029DBD1082223118EBD2EF522323FD4FA28F8_RuntimeMethod_var);
			if (L_29)
			{
				goto IL_015a_1;
			}
		}
		{
			int32_t L_30 = 2;
			V_0 = L_30;
			__this->___U3CU3E1__state_0 = L_30;
			Awaiter_tE6CAD4D39AD4E3DC47F1BFE0ACC22A288650F25E L_31 = V_7;
			__this->___U3CU3Eu__3_5 = L_31;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__3_5))->___task_0))->___source_0), (void*)NULL);
			#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__3_5))->___task_0))->___result_1), (void*)NULL);
			#endif
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_32 = (&__this->___U3CU3Et__builder_1);
			AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tE6CAD4D39AD4E3DC47F1BFE0ACC22A288650F25E_TisU3C_update_address_ablesU3Ed__5_t1FF32C47FEFD857C04A3820565973362359C9708_m1063BD34136E5DF0BE8BFA8BF4F23CD73CCD24D1_inline(L_32, (&V_7), __this, AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tE6CAD4D39AD4E3DC47F1BFE0ACC22A288650F25E_TisU3C_update_address_ablesU3Ed__5_t1FF32C47FEFD857C04A3820565973362359C9708_m1063BD34136E5DF0BE8BFA8BF4F23CD73CCD24D1_RuntimeMethod_var);
			goto IL_029e;
		}

IL_013d_1:
		{
			Awaiter_tE6CAD4D39AD4E3DC47F1BFE0ACC22A288650F25E L_33 = __this->___U3CU3Eu__3_5;
			V_7 = L_33;
			Awaiter_tE6CAD4D39AD4E3DC47F1BFE0ACC22A288650F25E* L_34 = (&__this->___U3CU3Eu__3_5);
			il2cpp_codegen_initobj(L_34, sizeof(Awaiter_tE6CAD4D39AD4E3DC47F1BFE0ACC22A288650F25E));
			int32_t L_35 = (-1);
			V_0 = L_35;
			__this->___U3CU3E1__state_0 = L_35;
		}

IL_015a_1:
		{
			List_1_t540309E962CB768808E54FF9E53136790E1C4975* L_36;
			L_36 = Awaiter_GetResult_m1C61637BC91C1BE8CCD0B118EB65366E62B474BF_inline((&V_7), Awaiter_GetResult_m1C61637BC91C1BE8CCD0B118EB65366E62B474BF_RuntimeMethod_var);
			V_3 = L_36;
			// Debug.Log($"????:{resourceLocators.Count}???");
			List_1_t540309E962CB768808E54FF9E53136790E1C4975* L_37 = V_3;
			NullCheck(L_37);
			int32_t L_38;
			L_38 = List_1_get_Count_m5FC569B19E1FE556C71A122795F87D563D42433E_inline(L_37, List_1_get_Count_m5FC569B19E1FE556C71A122795F87D563D42433E_RuntimeMethod_var);
			int32_t L_39 = L_38;
			RuntimeObject* L_40 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_39);
			String_t* L_41;
			L_41 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral7D0E74747A146E780636333F9CDF36151D29153B, L_40, NULL);
			il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
			Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_41, NULL);
			// foreach (IResourceLocator resourceLocator in resourceLocators)
			List_1_t540309E962CB768808E54FF9E53136790E1C4975* L_42 = V_3;
			NullCheck(L_42);
			Enumerator_tF83AE2D8E34F83214881DA69EE6A105A5A7855B3 L_43;
			L_43 = List_1_GetEnumerator_m3F5700A99F79B66C45E7C5377D838DFE6F8D7DCA(L_42, List_1_GetEnumerator_m3F5700A99F79B66C45E7C5377D838DFE6F8D7DCA_RuntimeMethod_var);
			__this->___U3CU3E7__wrap1_6 = L_43;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3E7__wrap1_6))->____list_0), (void*)NULL);
			#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3E7__wrap1_6))->____current_3), (void*)NULL);
			#endif
		}

IL_0188_1:
		{
		}
		{
			auto __finallyBlock = il2cpp::utils::Finally([&]
			{

FINALLY_024e_1:
				{// begin finally (depth: 2)
					{
						int32_t L_44 = V_0;
						if ((((int32_t)L_44) >= ((int32_t)0)))
						{
							goto IL_0263_1;
						}
					}
					{
						Enumerator_tF83AE2D8E34F83214881DA69EE6A105A5A7855B3* L_45 = (&__this->___U3CU3E7__wrap1_6);
						Enumerator_Dispose_m9E27CB96C767F816BF5E072668F628209615053B(L_45, Enumerator_Dispose_m9E27CB96C767F816BF5E072668F628209615053B_RuntimeMethod_var);
					}

IL_0263_1:
					{
						return;
					}
				}// end finally (depth: 2)
			});
			try
			{// begin try (depth: 2)
				{
					int32_t L_46 = V_0;
					if ((((int32_t)L_46) == ((int32_t)3)))
					{
						goto IL_01fc_2;
					}
				}
				{
					goto IL_023c_2;
				}

IL_0192_2:
				{
					// foreach (IResourceLocator resourceLocator in resourceLocators)
					Enumerator_tF83AE2D8E34F83214881DA69EE6A105A5A7855B3* L_47 = (&__this->___U3CU3E7__wrap1_6);
					RuntimeObject* L_48;
					L_48 = Enumerator_get_Current_m70628B9BE52F8E6A761C9A5B2F2486E296FD1FBE_inline(L_47, Enumerator_get_Current_m70628B9BE52F8E6A761C9A5B2F2486E296FD1FBE_RuntimeMethod_var);
					__this->___U3CresourceLocatorU3E5__3_7 = L_48;
					Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CresourceLocatorU3E5__3_7), (void*)L_48);
					// Debug.Log($"??????:{resourceLocator}");
					RuntimeObject* L_49 = __this->___U3CresourceLocatorU3E5__3_7;
					String_t* L_50;
					L_50 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral315A0DB78E4B7025EF5AA4C425DA0C8E88F374E8, L_49, NULL);
					il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
					Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_50, NULL);
					// await _download(resourceLocator);
					EntryManager_t5E007CC610B9C44A6887E3B6A5A0B42D9F719E80* L_51 = V_1;
					RuntimeObject* L_52 = __this->___U3CresourceLocatorU3E5__3_7;
					NullCheck(L_51);
					UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_53;
					L_53 = EntryManager__download_m48680C1AAD8A9A9D0FBCAFC6794153BAFEACA7F4(L_51, L_52, NULL);
					V_9 = L_53;
					Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_54;
					L_54 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_9), NULL);
					V_8 = L_54;
					bool L_55;
					L_55 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_8), NULL);
					if (L_55)
					{
						goto IL_0219_2;
					}
				}
				{
					int32_t L_56 = 3;
					V_0 = L_56;
					__this->___U3CU3E1__state_0 = L_56;
					Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_57 = V_8;
					__this->___U3CU3Eu__4_8 = L_57;
					Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__4_8))->___task_0))->___source_0), (void*)NULL);
					AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_58 = (&__this->___U3CU3Et__builder_1);
					AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956_TisU3C_update_address_ablesU3Ed__5_t1FF32C47FEFD857C04A3820565973362359C9708_m6D0F2B4D522926147973B8FB250701AA85F23BEB_inline(L_58, (&V_8), __this, AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956_TisU3C_update_address_ablesU3Ed__5_t1FF32C47FEFD857C04A3820565973362359C9708_m6D0F2B4D522926147973B8FB250701AA85F23BEB_RuntimeMethod_var);
					goto IL_029e;
				}

IL_01fc_2:
				{
					Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_59 = __this->___U3CU3Eu__4_8;
					V_8 = L_59;
					Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_60 = (&__this->___U3CU3Eu__4_8);
					il2cpp_codegen_initobj(L_60, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
					int32_t L_61 = (-1);
					V_0 = L_61;
					__this->___U3CU3E1__state_0 = L_61;
				}

IL_0219_2:
				{
					Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_8), NULL);
					// Debug.Log($"????:{resourceLocator}??");
					RuntimeObject* L_62 = __this->___U3CresourceLocatorU3E5__3_7;
					String_t* L_63;
					L_63 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral742AB32FC51B28B013E0515C193B77F34F20BDA6, L_62, NULL);
					il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
					Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_63, NULL);
					// }
					__this->___U3CresourceLocatorU3E5__3_7 = (RuntimeObject*)NULL;
					Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CresourceLocatorU3E5__3_7), (void*)(RuntimeObject*)NULL);
				}

IL_023c_2:
				{
					// foreach (IResourceLocator resourceLocator in resourceLocators)
					Enumerator_tF83AE2D8E34F83214881DA69EE6A105A5A7855B3* L_64 = (&__this->___U3CU3E7__wrap1_6);
					bool L_65;
					L_65 = Enumerator_MoveNext_mE20EB0F3435DA5E172879D43541140BF1F5F2978(L_64, Enumerator_MoveNext_mE20EB0F3435DA5E172879D43541140BF1F5F2978_RuntimeMethod_var);
					if (L_65)
					{
						goto IL_0192_2;
					}
				}
				{
					goto IL_0264_1;
				}
			}// end try (depth: 2)
			catch(Il2CppExceptionWrapper& e)
			{
				__finallyBlock.StoreException(e.ex);
			}
		}

IL_0264_1:
		{
			Enumerator_tF83AE2D8E34F83214881DA69EE6A105A5A7855B3* L_66 = (&__this->___U3CU3E7__wrap1_6);
			il2cpp_codegen_initobj(L_66, sizeof(Enumerator_tF83AE2D8E34F83214881DA69EE6A105A5A7855B3));
			goto IL_028b;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0272;
		}
		throw e;
	}

CATCH_0272:
	{// begin catch(System.Exception)
		V_10 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_67 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_68 = V_10;
		AsyncUniTaskMethodBuilder_SetException_m0D772D62D01CC371F4AB0F6943BBBE0FEAB19643_inline(L_67, L_68, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_029e;
	}// end catch (depth: 1)

IL_028b:
	{
		// }
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_69 = (&__this->___U3CU3Et__builder_1);
		AsyncUniTaskMethodBuilder_SetResult_mBBA527F0F21E04D65A269C0D02597CE5B2D1E9CB_inline(L_69, NULL);
	}

IL_029e:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3C_update_address_ablesU3Ed__5_MoveNext_mFEDBFF39994F7D2E47F5D4188D980E63BADCFCE8_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3C_update_address_ablesU3Ed__5_t1FF32C47FEFD857C04A3820565973362359C9708* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3C_update_address_ablesU3Ed__5_t1FF32C47FEFD857C04A3820565973362359C9708*>(__this + _offset);
	U3C_update_address_ablesU3Ed__5_MoveNext_mFEDBFF39994F7D2E47F5D4188D980E63BADCFCE8(_thisAdjusted, method);
}
// System.Void Main.EntryManager/<_update_address_ables>d__5::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3C_update_address_ablesU3Ed__5_SetStateMachine_m4E984B38D70EC70B558F76575EE604FF8FC6D25D (U3C_update_address_ablesU3Ed__5_t1FF32C47FEFD857C04A3820565973362359C9708* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) 
{
	{
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_0 = (&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncUniTaskMethodBuilder_SetStateMachine_m466E6779CB9DEC814C0A59E7766D95EC2C3268CF(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3C_update_address_ablesU3Ed__5_SetStateMachine_m4E984B38D70EC70B558F76575EE604FF8FC6D25D_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	U3C_update_address_ablesU3Ed__5_t1FF32C47FEFD857C04A3820565973362359C9708* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3C_update_address_ablesU3Ed__5_t1FF32C47FEFD857C04A3820565973362359C9708*>(__this + _offset);
	U3C_update_address_ablesU3Ed__5_SetStateMachine_m4E984B38D70EC70B558F76575EE604FF8FC6D25D(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Main.EntryManager/<_download>d__6::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3C_downloadU3Ed__6_MoveNext_mB866480A8BE4B4D8742A0A31F88FB7A0268CB8BA (U3C_downloadU3Ed__6_t9FDE76F9ADCA6BBDA45A209199A06BBF4CEA504E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AddressablesAsyncExtensions_GetAwaiter_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m14636F69724E842FA9662EAE709589B85618C551_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Addressables_tB93529ED0B034BF1A8C7830710BAA45C20A0F7D6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_t7AE9CC84360E7F09FFB9D68779935EE4FE333A0E_TisU3C_downloadU3Ed__6_t9FDE76F9ADCA6BBDA45A209199A06BBF4CEA504E_m41AF4E246B77874BCD24B99B47E3A74D2F9DE267_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956_TisU3C_downloadU3Ed__6_t9FDE76F9ADCA6BBDA45A209199A06BBF4CEA504E_m9751D888B9EF86588BA0D458A8D997C3D6DFF312_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_GetResult_m4B63F7992C6A60270E7A65D3BA029B02E8492A15_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_get_IsCompleted_mCFE009603778E0BD45941A0C4BFD6C5437934777_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IResourceLocator_tB4E18FC0113846B03B2C4E0714C30F699F0B78BE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Awaiter_t7AE9CC84360E7F09FFB9D68779935EE4FE333A0E V_1;
	memset((&V_1), 0, sizeof(V_1));
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Exception_t* V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_1 = V_0;
			if (!L_1)
			{
				goto IL_0053_1;
			}
		}
		{
			int32_t L_2 = V_0;
			if ((((int32_t)L_2) == ((int32_t)1)))
			{
				goto IL_00cc_1;
			}
		}
		{
			// var size = await Addressables.GetDownloadSizeAsync(resourceLocator.Keys);
			RuntimeObject* L_3 = __this->___resourceLocator_2;
			NullCheck(L_3);
			RuntimeObject* L_4;
			L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Collections.Generic.IEnumerable`1<System.Object> UnityEngine.AddressableAssets.ResourceLocators.IResourceLocator::get_Keys() */, IResourceLocator_tB4E18FC0113846B03B2C4E0714C30F699F0B78BE_il2cpp_TypeInfo_var, L_3);
			il2cpp_codegen_runtime_class_init_inline(Addressables_tB93529ED0B034BF1A8C7830710BAA45C20A0F7D6_il2cpp_TypeInfo_var);
			AsyncOperationHandle_1_tFCA9C8A0842BE8A0771A40EA2C7FC9C94E2564BA L_5;
			L_5 = Addressables_GetDownloadSizeAsync_m21569D24012E62C0D5B34AB060D8E4CEDAE4C427(L_4, NULL);
			Awaiter_t7AE9CC84360E7F09FFB9D68779935EE4FE333A0E L_6;
			L_6 = AddressablesAsyncExtensions_GetAwaiter_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m14636F69724E842FA9662EAE709589B85618C551(L_5, AddressablesAsyncExtensions_GetAwaiter_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m14636F69724E842FA9662EAE709589B85618C551_RuntimeMethod_var);
			V_1 = L_6;
			bool L_7;
			L_7 = Awaiter_get_IsCompleted_mCFE009603778E0BD45941A0C4BFD6C5437934777_inline((&V_1), Awaiter_get_IsCompleted_mCFE009603778E0BD45941A0C4BFD6C5437934777_RuntimeMethod_var);
			if (L_7)
			{
				goto IL_006f_1;
			}
		}
		{
			int32_t L_8 = 0;
			V_0 = L_8;
			__this->___U3CU3E1__state_0 = L_8;
			Awaiter_t7AE9CC84360E7F09FFB9D68779935EE4FE333A0E L_9 = V_1;
			__this->___U3CU3Eu__1_4 = L_9;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1_4))->___task_0))->___source_0), (void*)NULL);
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_10 = (&__this->___U3CU3Et__builder_1);
			AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_t7AE9CC84360E7F09FFB9D68779935EE4FE333A0E_TisU3C_downloadU3Ed__6_t9FDE76F9ADCA6BBDA45A209199A06BBF4CEA504E_m41AF4E246B77874BCD24B99B47E3A74D2F9DE267_inline(L_10, (&V_1), __this, AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_t7AE9CC84360E7F09FFB9D68779935EE4FE333A0E_TisU3C_downloadU3Ed__6_t9FDE76F9ADCA6BBDA45A209199A06BBF4CEA504E_m41AF4E246B77874BCD24B99B47E3A74D2F9DE267_RuntimeMethod_var);
			goto IL_013e;
		}

IL_0053_1:
		{
			Awaiter_t7AE9CC84360E7F09FFB9D68779935EE4FE333A0E L_11 = __this->___U3CU3Eu__1_4;
			V_1 = L_11;
			Awaiter_t7AE9CC84360E7F09FFB9D68779935EE4FE333A0E* L_12 = (&__this->___U3CU3Eu__1_4);
			il2cpp_codegen_initobj(L_12, sizeof(Awaiter_t7AE9CC84360E7F09FFB9D68779935EE4FE333A0E));
			int32_t L_13 = (-1);
			V_0 = L_13;
			__this->___U3CU3E1__state_0 = L_13;
		}

IL_006f_1:
		{
			int64_t L_14;
			L_14 = Awaiter_GetResult_m4B63F7992C6A60270E7A65D3BA029B02E8492A15_inline((&V_1), Awaiter_GetResult_m4B63F7992C6A60270E7A65D3BA029B02E8492A15_RuntimeMethod_var);
			// if (size <= 0) return;
			if ((((int64_t)L_14) > ((int64_t)((int64_t)0))))
			{
				goto IL_007f_1;
			}
		}
		{
			// if (size <= 0) return;
			goto IL_011f;
		}

IL_007f_1:
		{
			// var downloadHandle =
			//     Addressables.DownloadDependenciesAsync(resourceLocator.Keys, Addressables.MergeMode.Union);
			RuntimeObject* L_15 = __this->___resourceLocator_2;
			NullCheck(L_15);
			RuntimeObject* L_16;
			L_16 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Collections.Generic.IEnumerable`1<System.Object> UnityEngine.AddressableAssets.ResourceLocators.IResourceLocator::get_Keys() */, IResourceLocator_tB4E18FC0113846B03B2C4E0714C30F699F0B78BE_il2cpp_TypeInfo_var, L_15);
			il2cpp_codegen_runtime_class_init_inline(Addressables_tB93529ED0B034BF1A8C7830710BAA45C20A0F7D6_il2cpp_TypeInfo_var);
			AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D L_17;
			L_17 = Addressables_DownloadDependenciesAsync_m540DC6897FCC7409CC56B9BA77D6F91DFC7ECD98(L_16, 1, (bool)0, NULL);
			__this->___U3CdownloadHandleU3E5__2_3 = L_17;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CdownloadHandleU3E5__2_3))->___m_InternalOp_0), (void*)NULL);
			#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CdownloadHandleU3E5__2_3))->___m_LocationName_2), (void*)NULL);
			#endif
			// await downloadHandle;
			AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D L_18 = __this->___U3CdownloadHandleU3E5__2_3;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_19;
			L_19 = AddressablesAsyncExtensions_GetAwaiter_m9C0CEF7C2C34DA7CD7CF6191AD3A75D32A553A3B(L_18, NULL);
			V_2 = L_19;
			bool L_20;
			L_20 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_2), NULL);
			if (L_20)
			{
				goto IL_00e8_1;
			}
		}
		{
			int32_t L_21 = 1;
			V_0 = L_21;
			__this->___U3CU3E1__state_0 = L_21;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_22 = V_2;
			__this->___U3CU3Eu__2_5 = L_22;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__2_5))->___task_0))->___source_0), (void*)NULL);
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_23 = (&__this->___U3CU3Et__builder_1);
			AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956_TisU3C_downloadU3Ed__6_t9FDE76F9ADCA6BBDA45A209199A06BBF4CEA504E_m9751D888B9EF86588BA0D458A8D997C3D6DFF312_inline(L_23, (&V_2), __this, AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956_TisU3C_downloadU3Ed__6_t9FDE76F9ADCA6BBDA45A209199A06BBF4CEA504E_m9751D888B9EF86588BA0D458A8D997C3D6DFF312_RuntimeMethod_var);
			goto IL_013e;
		}

IL_00cc_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_24 = __this->___U3CU3Eu__2_5;
			V_2 = L_24;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_25 = (&__this->___U3CU3Eu__2_5);
			il2cpp_codegen_initobj(L_25, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_26 = (-1);
			V_0 = L_26;
			__this->___U3CU3E1__state_0 = L_26;
		}

IL_00e8_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_2), NULL);
			// Addressables.Release(downloadHandle);
			AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D L_27 = __this->___U3CdownloadHandleU3E5__2_3;
			il2cpp_codegen_runtime_class_init_inline(Addressables_tB93529ED0B034BF1A8C7830710BAA45C20A0F7D6_il2cpp_TypeInfo_var);
			Addressables_Release_m0A186637EB825A9C793E94DD9D5B00842EC67589(L_27, NULL);
			goto IL_011f;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00fc;
		}
		throw e;
	}

CATCH_00fc:
	{// begin catch(System.Exception)
		V_3 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D* L_28 = (&__this->___U3CdownloadHandleU3E5__2_3);
		il2cpp_codegen_initobj(L_28, sizeof(AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D));
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_29 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_30 = V_3;
		AsyncUniTaskMethodBuilder_SetException_m0D772D62D01CC371F4AB0F6943BBBE0FEAB19643_inline(L_29, L_30, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_013e;
	}// end catch (depth: 1)

IL_011f:
	{
		// }
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D* L_31 = (&__this->___U3CdownloadHandleU3E5__2_3);
		il2cpp_codegen_initobj(L_31, sizeof(AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D));
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_32 = (&__this->___U3CU3Et__builder_1);
		AsyncUniTaskMethodBuilder_SetResult_mBBA527F0F21E04D65A269C0D02597CE5B2D1E9CB_inline(L_32, NULL);
	}

IL_013e:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3C_downloadU3Ed__6_MoveNext_mB866480A8BE4B4D8742A0A31F88FB7A0268CB8BA_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3C_downloadU3Ed__6_t9FDE76F9ADCA6BBDA45A209199A06BBF4CEA504E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3C_downloadU3Ed__6_t9FDE76F9ADCA6BBDA45A209199A06BBF4CEA504E*>(__this + _offset);
	U3C_downloadU3Ed__6_MoveNext_mB866480A8BE4B4D8742A0A31F88FB7A0268CB8BA(_thisAdjusted, method);
}
// System.Void Main.EntryManager/<_download>d__6::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3C_downloadU3Ed__6_SetStateMachine_mA12F1F5E91C0119BF41AD07931AB2EBE10F70C5F (U3C_downloadU3Ed__6_t9FDE76F9ADCA6BBDA45A209199A06BBF4CEA504E* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) 
{
	{
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_0 = (&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncUniTaskMethodBuilder_SetStateMachine_m466E6779CB9DEC814C0A59E7766D95EC2C3268CF(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3C_downloadU3Ed__6_SetStateMachine_mA12F1F5E91C0119BF41AD07931AB2EBE10F70C5F_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	U3C_downloadU3Ed__6_t9FDE76F9ADCA6BBDA45A209199A06BBF4CEA504E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3C_downloadU3Ed__6_t9FDE76F9ADCA6BBDA45A209199A06BBF4CEA504E*>(__this + _offset);
	U3C_downloadU3Ed__6_SetStateMachine_mA12F1F5E91C0119BF41AD07931AB2EBE10F70C5F(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Main.EntryManager/<_load_hotfix_dlls>d__7::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3C_load_hotfix_dllsU3Ed__7_MoveNext_mE69E3D0A48D9A930890819A16223B623997CFD7A (U3C_load_hotfix_dllsU3Ed__7_t779C30021B738E08FCFBE0CA14B688F31D262DF1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AddressablesAsyncExtensions_GetAwaiter_TisIList_1_t41197D8BEF4B49150DE2882FD3E4E3AB1F03D62F_m4DABCC7A63F140064D236B6BD8BB35301E5FB7B5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Addressables_LoadAssetsAsync_TisTextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69_m8F1825C823927E945B0CF6E0045E413304231620_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Addressables_tB93529ED0B034BF1A8C7830710BAA45C20A0F7D6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tD6901CCEDFC008EF054E21499F3DCFE124F52792_TisU3C_load_hotfix_dllsU3Ed__7_t779C30021B738E08FCFBE0CA14B688F31D262DF1_mEB6D44D8CCE495E8BFC2CE38E02BC65108BBF6CA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_GetResult_mBBE5BA716B80F751D651580F18EF6D3564D6DEC4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_get_IsCompleted_m6CFEF07FF823DE21C6CD5161E22FEDC0B9026072_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t82D8539679564C8A0A1EEB4699662623AD898FC6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_tB18184CBAD09F13A294B19F6E31DBDCB29B3AC74_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral419942A02D410409B7B3822EEFC1509AE6DA407B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5D8680035BE790925076A087AB73E9FB073A0772);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	EntryManager_t5E007CC610B9C44A6887E3B6A5A0B42D9F719E80* V_1 = NULL;
	Awaiter_tD6901CCEDFC008EF054E21499F3DCFE124F52792 V_2;
	memset((&V_2), 0, sizeof(V_2));
	RuntimeObject* V_3 = NULL;
	TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* V_4 = NULL;
	Exception_t* V_5 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		EntryManager_t5E007CC610B9C44A6887E3B6A5A0B42D9F719E80* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_004f_1;
			}
		}
		{
			// var dlls = await Addressables.LoadAssetsAsync<TextAsset>(hotUpdateDllLabelRef, null);
			EntryManager_t5E007CC610B9C44A6887E3B6A5A0B42D9F719E80* L_3 = V_1;
			NullCheck(L_3);
			AssetLabelReference_t2E4688A3D816970FC18B8221E042E92B0B6B2A16* L_4 = L_3->___hotUpdateDllLabelRef_4;
			il2cpp_codegen_runtime_class_init_inline(Addressables_tB93529ED0B034BF1A8C7830710BAA45C20A0F7D6_il2cpp_TypeInfo_var);
			AsyncOperationHandle_1_t3800DB64F3866CE794693A68107374760A72703E L_5;
			L_5 = Addressables_LoadAssetsAsync_TisTextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69_m8F1825C823927E945B0CF6E0045E413304231620(L_4, (Action_1_tCBB7BCB0560FBDC8B3457953A50A7FBCDA13572C*)NULL, Addressables_LoadAssetsAsync_TisTextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69_m8F1825C823927E945B0CF6E0045E413304231620_RuntimeMethod_var);
			Awaiter_tD6901CCEDFC008EF054E21499F3DCFE124F52792 L_6;
			L_6 = AddressablesAsyncExtensions_GetAwaiter_TisIList_1_t41197D8BEF4B49150DE2882FD3E4E3AB1F03D62F_m4DABCC7A63F140064D236B6BD8BB35301E5FB7B5(L_5, AddressablesAsyncExtensions_GetAwaiter_TisIList_1_t41197D8BEF4B49150DE2882FD3E4E3AB1F03D62F_m4DABCC7A63F140064D236B6BD8BB35301E5FB7B5_RuntimeMethod_var);
			V_2 = L_6;
			bool L_7;
			L_7 = Awaiter_get_IsCompleted_m6CFEF07FF823DE21C6CD5161E22FEDC0B9026072_inline((&V_2), Awaiter_get_IsCompleted_m6CFEF07FF823DE21C6CD5161E22FEDC0B9026072_RuntimeMethod_var);
			if (L_7)
			{
				goto IL_006b_1;
			}
		}
		{
			int32_t L_8 = 0;
			V_0 = L_8;
			__this->___U3CU3E1__state_0 = L_8;
			Awaiter_tD6901CCEDFC008EF054E21499F3DCFE124F52792 L_9 = V_2;
			__this->___U3CU3Eu__1_3 = L_9;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1_3))->___task_0))->___source_0), (void*)NULL);
			#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1_3))->___task_0))->___result_1), (void*)NULL);
			#endif
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_10 = (&__this->___U3CU3Et__builder_1);
			AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tD6901CCEDFC008EF054E21499F3DCFE124F52792_TisU3C_load_hotfix_dllsU3Ed__7_t779C30021B738E08FCFBE0CA14B688F31D262DF1_mEB6D44D8CCE495E8BFC2CE38E02BC65108BBF6CA_inline(L_10, (&V_2), __this, AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tD6901CCEDFC008EF054E21499F3DCFE124F52792_TisU3C_load_hotfix_dllsU3Ed__7_t779C30021B738E08FCFBE0CA14B688F31D262DF1_mEB6D44D8CCE495E8BFC2CE38E02BC65108BBF6CA_RuntimeMethod_var);
			goto IL_0106;
		}

IL_004f_1:
		{
			Awaiter_tD6901CCEDFC008EF054E21499F3DCFE124F52792 L_11 = __this->___U3CU3Eu__1_3;
			V_2 = L_11;
			Awaiter_tD6901CCEDFC008EF054E21499F3DCFE124F52792* L_12 = (&__this->___U3CU3Eu__1_3);
			il2cpp_codegen_initobj(L_12, sizeof(Awaiter_tD6901CCEDFC008EF054E21499F3DCFE124F52792));
			int32_t L_13 = (-1);
			V_0 = L_13;
			__this->___U3CU3E1__state_0 = L_13;
		}

IL_006b_1:
		{
			RuntimeObject* L_14;
			L_14 = Awaiter_GetResult_mBBE5BA716B80F751D651580F18EF6D3564D6DEC4_inline((&V_2), Awaiter_GetResult_mBBE5BA716B80F751D651580F18EF6D3564D6DEC4_RuntimeMethod_var);
			// foreach (var asset in dlls)
			NullCheck(L_14);
			RuntimeObject* L_15;
			L_15 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.TextAsset>::GetEnumerator() */, IEnumerable_1_t82D8539679564C8A0A1EEB4699662623AD898FC6_il2cpp_TypeInfo_var, L_14);
			V_3 = L_15;
		}
		{
			auto __finallyBlock = il2cpp::utils::Finally([&]
			{

FINALLY_00ca_1:
				{// begin finally (depth: 2)
					{
						int32_t L_16 = V_0;
						if ((((int32_t)L_16) >= ((int32_t)0)))
						{
							goto IL_00d7_1;
						}
					}
					{
						RuntimeObject* L_17 = V_3;
						if (!L_17)
						{
							goto IL_00d7_1;
						}
					}
					{
						RuntimeObject* L_18 = V_3;
						NullCheck(L_18);
						InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_18);
					}

IL_00d7_1:
					{
						return;
					}
				}// end finally (depth: 2)
			});
			try
			{// begin try (depth: 2)
				{
					goto IL_00c0_2;
				}

IL_007a_2:
				{
					// foreach (var asset in dlls)
					RuntimeObject* L_19 = V_3;
					NullCheck(L_19);
					TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* L_20;
					L_20 = InterfaceFuncInvoker0< TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<UnityEngine.TextAsset>::get_Current() */, IEnumerator_1_tB18184CBAD09F13A294B19F6E31DBDCB29B3AC74_il2cpp_TypeInfo_var, L_19);
					V_4 = L_20;
					// Debug.Log("????DLL:" + asset.name);
					TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* L_21 = V_4;
					NullCheck(L_21);
					String_t* L_22;
					L_22 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_21, NULL);
					String_t* L_23;
					L_23 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral419942A02D410409B7B3822EEFC1509AE6DA407B, L_22, NULL);
					il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
					Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_23, NULL);
					// Assembly.Load(asset.bytes);
					TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* L_24 = V_4;
					NullCheck(L_24);
					ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_25;
					L_25 = TextAsset_get_bytes_m244B31755642C9623B570FC96B9A04523B1E5178(L_24, NULL);
					Assembly_t* L_26;
					L_26 = Assembly_Load_mD9E9CED2EFF8BBE97ACDE83FB8ED492D1E42E975(L_25, NULL);
					// Debug.Log("????DLL:" + asset.name + "??");
					TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* L_27 = V_4;
					NullCheck(L_27);
					String_t* L_28;
					L_28 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_27, NULL);
					String_t* L_29;
					L_29 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteral419942A02D410409B7B3822EEFC1509AE6DA407B, L_28, _stringLiteral5D8680035BE790925076A087AB73E9FB073A0772, NULL);
					Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_29, NULL);
				}

IL_00c0_2:
				{
					// foreach (var asset in dlls)
					RuntimeObject* L_30 = V_3;
					NullCheck(L_30);
					bool L_31;
					L_31 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_30);
					if (L_31)
					{
						goto IL_007a_2;
					}
				}
				{
					goto IL_00d8_1;
				}
			}// end try (depth: 2)
			catch(Il2CppExceptionWrapper& e)
			{
				__finallyBlock.StoreException(e.ex);
			}
		}

IL_00d8_1:
		{
			goto IL_00f3;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00da;
		}
		throw e;
	}

CATCH_00da:
	{// begin catch(System.Exception)
		V_5 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_32 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_33 = V_5;
		AsyncUniTaskMethodBuilder_SetException_m0D772D62D01CC371F4AB0F6943BBBE0FEAB19643_inline(L_32, L_33, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0106;
	}// end catch (depth: 1)

IL_00f3:
	{
		// }
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_34 = (&__this->___U3CU3Et__builder_1);
		AsyncUniTaskMethodBuilder_SetResult_mBBA527F0F21E04D65A269C0D02597CE5B2D1E9CB_inline(L_34, NULL);
	}

IL_0106:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3C_load_hotfix_dllsU3Ed__7_MoveNext_mE69E3D0A48D9A930890819A16223B623997CFD7A_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3C_load_hotfix_dllsU3Ed__7_t779C30021B738E08FCFBE0CA14B688F31D262DF1* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3C_load_hotfix_dllsU3Ed__7_t779C30021B738E08FCFBE0CA14B688F31D262DF1*>(__this + _offset);
	U3C_load_hotfix_dllsU3Ed__7_MoveNext_mE69E3D0A48D9A930890819A16223B623997CFD7A(_thisAdjusted, method);
}
// System.Void Main.EntryManager/<_load_hotfix_dlls>d__7::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3C_load_hotfix_dllsU3Ed__7_SetStateMachine_m18F2CAAC0A6D75C276B81ECDF536AA4A108A74C7 (U3C_load_hotfix_dllsU3Ed__7_t779C30021B738E08FCFBE0CA14B688F31D262DF1* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) 
{
	{
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_0 = (&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncUniTaskMethodBuilder_SetStateMachine_m466E6779CB9DEC814C0A59E7766D95EC2C3268CF(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3C_load_hotfix_dllsU3Ed__7_SetStateMachine_m18F2CAAC0A6D75C276B81ECDF536AA4A108A74C7_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	U3C_load_hotfix_dllsU3Ed__7_t779C30021B738E08FCFBE0CA14B688F31D262DF1* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3C_load_hotfix_dllsU3Ed__7_t779C30021B738E08FCFBE0CA14B688F31D262DF1*>(__this + _offset);
	U3C_load_hotfix_dllsU3Ed__7_SetStateMachine_m18F2CAAC0A6D75C276B81ECDF536AA4A108A74C7(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Main.EntryManager/<_load_meta_data_for_aot_dlls>d__8::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3C_load_meta_data_for_aot_dllsU3Ed__8_MoveNext_mA824370DE3451C71DD94676E983ED37DB052C696 (U3C_load_meta_data_for_aot_dllsU3Ed__8_tCAEEC6F4B744F2FA13F4EBBA82E82ECCC865F2AE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AddressablesAsyncExtensions_GetAwaiter_TisIList_1_t41197D8BEF4B49150DE2882FD3E4E3AB1F03D62F_m4DABCC7A63F140064D236B6BD8BB35301E5FB7B5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Addressables_LoadAssetsAsync_TisTextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69_m8F1825C823927E945B0CF6E0045E413304231620_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Addressables_tB93529ED0B034BF1A8C7830710BAA45C20A0F7D6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tD6901CCEDFC008EF054E21499F3DCFE124F52792_TisU3C_load_meta_data_for_aot_dllsU3Ed__8_tCAEEC6F4B744F2FA13F4EBBA82E82ECCC865F2AE_m29FA0B7CD2C9AA26F05E0B18A8BA05A1B5A99ACE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_GetResult_mBBE5BA716B80F751D651580F18EF6D3564D6DEC4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_get_IsCompleted_m6CFEF07FF823DE21C6CD5161E22FEDC0B9026072_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t82D8539679564C8A0A1EEB4699662623AD898FC6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_tB18184CBAD09F13A294B19F6E31DBDCB29B3AC74_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LoadImageErrorCode_tC778A2553ADB45B8C61EFE26C20837C23894FEB3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6410322643E79635617FBD1ABC04C07BD50C84A9);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	EntryManager_t5E007CC610B9C44A6887E3B6A5A0B42D9F719E80* V_1 = NULL;
	Awaiter_tD6901CCEDFC008EF054E21499F3DCFE124F52792 V_2;
	memset((&V_2), 0, sizeof(V_2));
	RuntimeObject* V_3 = NULL;
	TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* V_4 = NULL;
	int32_t V_5 = 0;
	Exception_t* V_6 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		EntryManager_t5E007CC610B9C44A6887E3B6A5A0B42D9F719E80* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_0056_1;
			}
		}
		{
			// HomologousImageMode mode = HomologousImageMode.SuperSet;
			__this->___U3CmodeU3E5__2_3 = 1;
			// var aots = await Addressables.LoadAssetsAsync<TextAsset>(aotMetadataDllLabelRef, null);
			EntryManager_t5E007CC610B9C44A6887E3B6A5A0B42D9F719E80* L_3 = V_1;
			NullCheck(L_3);
			AssetLabelReference_t2E4688A3D816970FC18B8221E042E92B0B6B2A16* L_4 = L_3->___aotMetadataDllLabelRef_5;
			il2cpp_codegen_runtime_class_init_inline(Addressables_tB93529ED0B034BF1A8C7830710BAA45C20A0F7D6_il2cpp_TypeInfo_var);
			AsyncOperationHandle_1_t3800DB64F3866CE794693A68107374760A72703E L_5;
			L_5 = Addressables_LoadAssetsAsync_TisTextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69_m8F1825C823927E945B0CF6E0045E413304231620(L_4, (Action_1_tCBB7BCB0560FBDC8B3457953A50A7FBCDA13572C*)NULL, Addressables_LoadAssetsAsync_TisTextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69_m8F1825C823927E945B0CF6E0045E413304231620_RuntimeMethod_var);
			Awaiter_tD6901CCEDFC008EF054E21499F3DCFE124F52792 L_6;
			L_6 = AddressablesAsyncExtensions_GetAwaiter_TisIList_1_t41197D8BEF4B49150DE2882FD3E4E3AB1F03D62F_m4DABCC7A63F140064D236B6BD8BB35301E5FB7B5(L_5, AddressablesAsyncExtensions_GetAwaiter_TisIList_1_t41197D8BEF4B49150DE2882FD3E4E3AB1F03D62F_m4DABCC7A63F140064D236B6BD8BB35301E5FB7B5_RuntimeMethod_var);
			V_2 = L_6;
			bool L_7;
			L_7 = Awaiter_get_IsCompleted_m6CFEF07FF823DE21C6CD5161E22FEDC0B9026072_inline((&V_2), Awaiter_get_IsCompleted_m6CFEF07FF823DE21C6CD5161E22FEDC0B9026072_RuntimeMethod_var);
			if (L_7)
			{
				goto IL_0072_1;
			}
		}
		{
			int32_t L_8 = 0;
			V_0 = L_8;
			__this->___U3CU3E1__state_0 = L_8;
			Awaiter_tD6901CCEDFC008EF054E21499F3DCFE124F52792 L_9 = V_2;
			__this->___U3CU3Eu__1_4 = L_9;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1_4))->___task_0))->___source_0), (void*)NULL);
			#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1_4))->___task_0))->___result_1), (void*)NULL);
			#endif
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_10 = (&__this->___U3CU3Et__builder_1);
			AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tD6901CCEDFC008EF054E21499F3DCFE124F52792_TisU3C_load_meta_data_for_aot_dllsU3Ed__8_tCAEEC6F4B744F2FA13F4EBBA82E82ECCC865F2AE_m29FA0B7CD2C9AA26F05E0B18A8BA05A1B5A99ACE_inline(L_10, (&V_2), __this, AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tD6901CCEDFC008EF054E21499F3DCFE124F52792_TisU3C_load_meta_data_for_aot_dllsU3Ed__8_tCAEEC6F4B744F2FA13F4EBBA82E82ECCC865F2AE_m29FA0B7CD2C9AA26F05E0B18A8BA05A1B5A99ACE_RuntimeMethod_var);
			goto IL_0104;
		}

IL_0056_1:
		{
			Awaiter_tD6901CCEDFC008EF054E21499F3DCFE124F52792 L_11 = __this->___U3CU3Eu__1_4;
			V_2 = L_11;
			Awaiter_tD6901CCEDFC008EF054E21499F3DCFE124F52792* L_12 = (&__this->___U3CU3Eu__1_4);
			il2cpp_codegen_initobj(L_12, sizeof(Awaiter_tD6901CCEDFC008EF054E21499F3DCFE124F52792));
			int32_t L_13 = (-1);
			V_0 = L_13;
			__this->___U3CU3E1__state_0 = L_13;
		}

IL_0072_1:
		{
			RuntimeObject* L_14;
			L_14 = Awaiter_GetResult_mBBE5BA716B80F751D651580F18EF6D3564D6DEC4_inline((&V_2), Awaiter_GetResult_mBBE5BA716B80F751D651580F18EF6D3564D6DEC4_RuntimeMethod_var);
			// foreach (var asset in aots)
			NullCheck(L_14);
			RuntimeObject* L_15;
			L_15 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.TextAsset>::GetEnumerator() */, IEnumerable_1_t82D8539679564C8A0A1EEB4699662623AD898FC6_il2cpp_TypeInfo_var, L_14);
			V_3 = L_15;
		}
		{
			auto __finallyBlock = il2cpp::utils::Finally([&]
			{

FINALLY_00c8_1:
				{// begin finally (depth: 2)
					{
						int32_t L_16 = V_0;
						if ((((int32_t)L_16) >= ((int32_t)0)))
						{
							goto IL_00d5_1;
						}
					}
					{
						RuntimeObject* L_17 = V_3;
						if (!L_17)
						{
							goto IL_00d5_1;
						}
					}
					{
						RuntimeObject* L_18 = V_3;
						NullCheck(L_18);
						InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_18);
					}

IL_00d5_1:
					{
						return;
					}
				}// end finally (depth: 2)
			});
			try
			{// begin try (depth: 2)
				{
					goto IL_00be_2;
				}

IL_0081_2:
				{
					// foreach (var asset in aots)
					RuntimeObject* L_19 = V_3;
					NullCheck(L_19);
					TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* L_20;
					L_20 = InterfaceFuncInvoker0< TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<UnityEngine.TextAsset>::get_Current() */, IEnumerator_1_tB18184CBAD09F13A294B19F6E31DBDCB29B3AC74_il2cpp_TypeInfo_var, L_19);
					V_4 = L_20;
					// LoadImageErrorCode errorCode = RuntimeApi.LoadMetadataForAOTAssembly(asset.bytes, mode);
					TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* L_21 = V_4;
					NullCheck(L_21);
					ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22;
					L_22 = TextAsset_get_bytes_m244B31755642C9623B570FC96B9A04523B1E5178(L_21, NULL);
					int32_t L_23 = __this->___U3CmodeU3E5__2_3;
					int32_t L_24;
					L_24 = RuntimeApi_LoadMetadataForAOTAssembly_mE1E398132DBF86D7DE042300E1EE6AC37B7649D8(L_22, L_23, NULL);
					V_5 = L_24;
					// if (errorCode == LoadImageErrorCode.OK)
					int32_t L_25 = V_5;
					if (!L_25)
					{
						goto IL_00be_2;
					}
				}
				{
					// Debug.LogError($"??AOT???DLL:{asset.name}??,???:{errorCode}");
					TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* L_26 = V_4;
					NullCheck(L_26);
					String_t* L_27;
					L_27 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_26, NULL);
					int32_t L_28 = V_5;
					int32_t L_29 = L_28;
					RuntimeObject* L_30 = Box(LoadImageErrorCode_tC778A2553ADB45B8C61EFE26C20837C23894FEB3_il2cpp_TypeInfo_var, &L_29);
					String_t* L_31;
					L_31 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral6410322643E79635617FBD1ABC04C07BD50C84A9, L_27, L_30, NULL);
					il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
					Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_31, NULL);
				}

IL_00be_2:
				{
					// foreach (var asset in aots)
					RuntimeObject* L_32 = V_3;
					NullCheck(L_32);
					bool L_33;
					L_33 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_32);
					if (L_33)
					{
						goto IL_0081_2;
					}
				}
				{
					goto IL_00d6_1;
				}
			}// end try (depth: 2)
			catch(Il2CppExceptionWrapper& e)
			{
				__finallyBlock.StoreException(e.ex);
			}
		}

IL_00d6_1:
		{
			goto IL_00f1;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00d8;
		}
		throw e;
	}

CATCH_00d8:
	{// begin catch(System.Exception)
		V_6 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_34 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_35 = V_6;
		AsyncUniTaskMethodBuilder_SetException_m0D772D62D01CC371F4AB0F6943BBBE0FEAB19643_inline(L_34, L_35, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0104;
	}// end catch (depth: 1)

IL_00f1:
	{
		// }
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_36 = (&__this->___U3CU3Et__builder_1);
		AsyncUniTaskMethodBuilder_SetResult_mBBA527F0F21E04D65A269C0D02597CE5B2D1E9CB_inline(L_36, NULL);
	}

IL_0104:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3C_load_meta_data_for_aot_dllsU3Ed__8_MoveNext_mA824370DE3451C71DD94676E983ED37DB052C696_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3C_load_meta_data_for_aot_dllsU3Ed__8_tCAEEC6F4B744F2FA13F4EBBA82E82ECCC865F2AE* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3C_load_meta_data_for_aot_dllsU3Ed__8_tCAEEC6F4B744F2FA13F4EBBA82E82ECCC865F2AE*>(__this + _offset);
	U3C_load_meta_data_for_aot_dllsU3Ed__8_MoveNext_mA824370DE3451C71DD94676E983ED37DB052C696(_thisAdjusted, method);
}
// System.Void Main.EntryManager/<_load_meta_data_for_aot_dlls>d__8::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3C_load_meta_data_for_aot_dllsU3Ed__8_SetStateMachine_m25F09A1FBDE578EB6EB43CF9D6D9993F55A91369 (U3C_load_meta_data_for_aot_dllsU3Ed__8_tCAEEC6F4B744F2FA13F4EBBA82E82ECCC865F2AE* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) 
{
	{
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_0 = (&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncUniTaskMethodBuilder_SetStateMachine_m466E6779CB9DEC814C0A59E7766D95EC2C3268CF(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3C_load_meta_data_for_aot_dllsU3Ed__8_SetStateMachine_m25F09A1FBDE578EB6EB43CF9D6D9993F55A91369_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	U3C_load_meta_data_for_aot_dllsU3Ed__8_tCAEEC6F4B744F2FA13F4EBBA82E82ECCC865F2AE* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3C_load_meta_data_for_aot_dllsU3Ed__8_tCAEEC6F4B744F2FA13F4EBBA82E82ECCC865F2AE*>(__this + _offset);
	U3C_load_meta_data_for_aot_dllsU3Ed__8_SetStateMachine_m25F09A1FBDE578EB6EB43CF9D6D9993F55A91369(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Main.EntryManager/<_enter_hotfix_main_scene>d__9::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3C_enter_hotfix_main_sceneU3Ed__9_MoveNext_mB840AB8F30805BAF74D25154F9337869386EAC35 (U3C_enter_hotfix_main_sceneU3Ed__9_t9B561018599EEBB76E27BFE7574480D196AB56EC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AddressablesAsyncExtensions_GetAwaiter_TisSceneInstance_t9D8203A59AA2C8EE21045B75AFA429EB1B6BF14A_m87B27639F3E7B5E0B7E8CF6D8D5E8D84A37E2B3D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Addressables_tB93529ED0B034BF1A8C7830710BAA45C20A0F7D6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAsyncOperationAwaiter_t31DC22FCC690816BA1A3508437F3D208F7CE3CFF_TisU3C_enter_hotfix_main_sceneU3Ed__9_t9B561018599EEBB76E27BFE7574480D196AB56EC_mFBDB511684F553EA71D295512AAC71D70986AECE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_t2FED8B6C42FE0974C7571445A740264E4CEFFD29_TisU3C_enter_hotfix_main_sceneU3Ed__9_t9B561018599EEBB76E27BFE7574480D196AB56EC_mE8EB5A5AA77A091821D8F6BCCAE1CD67C7041870_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956_TisU3C_enter_hotfix_main_sceneU3Ed__9_t9B561018599EEBB76E27BFE7574480D196AB56EC_mDE7530F3B1ABA76703CBDBA4F855D2A6A9476D3A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_GetResult_m1BF227B2EC0B21CBE419CFF22BDBA6A7C9C79081_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_get_IsCompleted_mEA517CCC52750E414219358F57E9AB3F6F8667E2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	EntryManager_t5E007CC610B9C44A6887E3B6A5A0B42D9F719E80* V_1 = NULL;
	SceneInstance_t9D8203A59AA2C8EE21045B75AFA429EB1B6BF14A V_2;
	memset((&V_2), 0, sizeof(V_2));
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_3;
	memset((&V_3), 0, sizeof(V_3));
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Awaiter_t2FED8B6C42FE0974C7571445A740264E4CEFFD29 V_5;
	memset((&V_5), 0, sizeof(V_5));
	AsyncOperationAwaiter_t31DC22FCC690816BA1A3508437F3D208F7CE3CFF V_6;
	memset((&V_6), 0, sizeof(V_6));
	Exception_t* V_7 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		EntryManager_t5E007CC610B9C44A6887E3B6A5A0B42D9F719E80* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			switch (L_2)
			{
				case 0:
				{
					goto IL_005c_1;
				}
				case 1:
				{
					goto IL_00c2_1;
				}
				case 2:
				{
					goto IL_011f_1;
				}
			}
		}
		{
			// await _wait_for_enter_input();
			EntryManager_t5E007CC610B9C44A6887E3B6A5A0B42D9F719E80* L_3 = V_1;
			NullCheck(L_3);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_4;
			L_4 = EntryManager__wait_for_enter_input_m3F42E08EF4512373FBAD1144CFA4458BAB26D12A(L_3, NULL);
			V_4 = L_4;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_5;
			L_5 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_4), NULL);
			V_3 = L_5;
			bool L_6;
			L_6 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_3), NULL);
			if (L_6)
			{
				goto IL_0078_1;
			}
		}
		{
			int32_t L_7 = 0;
			V_0 = L_7;
			__this->___U3CU3E1__state_0 = L_7;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_8 = V_3;
			__this->___U3CU3Eu__1_3 = L_8;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1_3))->___task_0))->___source_0), (void*)NULL);
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_9 = (&__this->___U3CU3Et__builder_1);
			AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956_TisU3C_enter_hotfix_main_sceneU3Ed__9_t9B561018599EEBB76E27BFE7574480D196AB56EC_mDE7530F3B1ABA76703CBDBA4F855D2A6A9476D3A_inline(L_9, (&V_3), __this, AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956_TisU3C_enter_hotfix_main_sceneU3Ed__9_t9B561018599EEBB76E27BFE7574480D196AB56EC_mDE7530F3B1ABA76703CBDBA4F855D2A6A9476D3A_RuntimeMethod_var);
			goto IL_0171;
		}

IL_005c_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_10 = __this->___U3CU3Eu__1_3;
			V_3 = L_10;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_11 = (&__this->___U3CU3Eu__1_3);
			il2cpp_codegen_initobj(L_11, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_12 = (-1);
			V_0 = L_12;
			__this->___U3CU3E1__state_0 = L_12;
		}

IL_0078_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_3), NULL);
			// var scene = await Addressables.LoadSceneAsync(hotUpdateMainSceneRef);
			EntryManager_t5E007CC610B9C44A6887E3B6A5A0B42D9F719E80* L_13 = V_1;
			NullCheck(L_13);
			AssetReference_t6AF4EE7422535138F655BFF2636B23D0BE26C740* L_14 = L_13->___hotUpdateMainSceneRef_6;
			il2cpp_codegen_runtime_class_init_inline(Addressables_tB93529ED0B034BF1A8C7830710BAA45C20A0F7D6_il2cpp_TypeInfo_var);
			AsyncOperationHandle_1_t074166892865CF484A3C77A1E9FB6F5E83DA1DA5 L_15;
			L_15 = Addressables_LoadSceneAsync_m3868019E92C7809B7352837DB3D2D81088DA6134(L_14, 0, (bool)1, ((int32_t)100), NULL);
			Awaiter_t2FED8B6C42FE0974C7571445A740264E4CEFFD29 L_16;
			L_16 = AddressablesAsyncExtensions_GetAwaiter_TisSceneInstance_t9D8203A59AA2C8EE21045B75AFA429EB1B6BF14A_m87B27639F3E7B5E0B7E8CF6D8D5E8D84A37E2B3D(L_15, AddressablesAsyncExtensions_GetAwaiter_TisSceneInstance_t9D8203A59AA2C8EE21045B75AFA429EB1B6BF14A_m87B27639F3E7B5E0B7E8CF6D8D5E8D84A37E2B3D_RuntimeMethod_var);
			V_5 = L_16;
			bool L_17;
			L_17 = Awaiter_get_IsCompleted_mEA517CCC52750E414219358F57E9AB3F6F8667E2_inline((&V_5), Awaiter_get_IsCompleted_mEA517CCC52750E414219358F57E9AB3F6F8667E2_RuntimeMethod_var);
			if (L_17)
			{
				goto IL_00df_1;
			}
		}
		{
			int32_t L_18 = 1;
			V_0 = L_18;
			__this->___U3CU3E1__state_0 = L_18;
			Awaiter_t2FED8B6C42FE0974C7571445A740264E4CEFFD29 L_19 = V_5;
			__this->___U3CU3Eu__2_4 = L_19;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__2_4))->___task_0))->___source_0), (void*)NULL);
			#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
			Il2CppCodeGenWriteBarrier((void**)&((&((&(((&__this->___U3CU3Eu__2_4))->___task_0))->___result_1))->___m_Operation_1), (void*)NULL);
			#endif
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_20 = (&__this->___U3CU3Et__builder_1);
			AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_t2FED8B6C42FE0974C7571445A740264E4CEFFD29_TisU3C_enter_hotfix_main_sceneU3Ed__9_t9B561018599EEBB76E27BFE7574480D196AB56EC_mE8EB5A5AA77A091821D8F6BCCAE1CD67C7041870_inline(L_20, (&V_5), __this, AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_t2FED8B6C42FE0974C7571445A740264E4CEFFD29_TisU3C_enter_hotfix_main_sceneU3Ed__9_t9B561018599EEBB76E27BFE7574480D196AB56EC_mE8EB5A5AA77A091821D8F6BCCAE1CD67C7041870_RuntimeMethod_var);
			goto IL_0171;
		}

IL_00c2_1:
		{
			Awaiter_t2FED8B6C42FE0974C7571445A740264E4CEFFD29 L_21 = __this->___U3CU3Eu__2_4;
			V_5 = L_21;
			Awaiter_t2FED8B6C42FE0974C7571445A740264E4CEFFD29* L_22 = (&__this->___U3CU3Eu__2_4);
			il2cpp_codegen_initobj(L_22, sizeof(Awaiter_t2FED8B6C42FE0974C7571445A740264E4CEFFD29));
			int32_t L_23 = (-1);
			V_0 = L_23;
			__this->___U3CU3E1__state_0 = L_23;
		}

IL_00df_1:
		{
			SceneInstance_t9D8203A59AA2C8EE21045B75AFA429EB1B6BF14A L_24;
			L_24 = Awaiter_GetResult_m1BF227B2EC0B21CBE419CFF22BDBA6A7C9C79081_inline((&V_5), Awaiter_GetResult_m1BF227B2EC0B21CBE419CFF22BDBA6A7C9C79081_RuntimeMethod_var);
			V_2 = L_24;
			// await scene.ActivateAsync();
			AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* L_25;
			L_25 = SceneInstance_ActivateAsync_mA5740ABD2A826DB7CCCA83C62F31AA8448DE08C6((&V_2), NULL);
			AsyncOperationAwaiter_t31DC22FCC690816BA1A3508437F3D208F7CE3CFF L_26;
			L_26 = UnityAsyncExtensions_GetAwaiter_mC5F1D25704DF49CBCAD4B0B0E4F9B1528CCDB919(L_25, NULL);
			V_6 = L_26;
			bool L_27;
			L_27 = AsyncOperationAwaiter_get_IsCompleted_mB1A89F2E5B9E1CD69315D33F6E5F5EC94DEB2DFC((&V_6), NULL);
			if (L_27)
			{
				goto IL_013c_1;
			}
		}
		{
			int32_t L_28 = 2;
			V_0 = L_28;
			__this->___U3CU3E1__state_0 = L_28;
			AsyncOperationAwaiter_t31DC22FCC690816BA1A3508437F3D208F7CE3CFF L_29 = V_6;
			__this->___U3CU3Eu__3_5 = L_29;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__3_5))->___asyncOperation_0), (void*)NULL);
			#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__3_5))->___continuationAction_1), (void*)NULL);
			#endif
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_30 = (&__this->___U3CU3Et__builder_1);
			AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAsyncOperationAwaiter_t31DC22FCC690816BA1A3508437F3D208F7CE3CFF_TisU3C_enter_hotfix_main_sceneU3Ed__9_t9B561018599EEBB76E27BFE7574480D196AB56EC_mFBDB511684F553EA71D295512AAC71D70986AECE_inline(L_30, (&V_6), __this, AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAsyncOperationAwaiter_t31DC22FCC690816BA1A3508437F3D208F7CE3CFF_TisU3C_enter_hotfix_main_sceneU3Ed__9_t9B561018599EEBB76E27BFE7574480D196AB56EC_mFBDB511684F553EA71D295512AAC71D70986AECE_RuntimeMethod_var);
			goto IL_0171;
		}

IL_011f_1:
		{
			AsyncOperationAwaiter_t31DC22FCC690816BA1A3508437F3D208F7CE3CFF L_31 = __this->___U3CU3Eu__3_5;
			V_6 = L_31;
			AsyncOperationAwaiter_t31DC22FCC690816BA1A3508437F3D208F7CE3CFF* L_32 = (&__this->___U3CU3Eu__3_5);
			il2cpp_codegen_initobj(L_32, sizeof(AsyncOperationAwaiter_t31DC22FCC690816BA1A3508437F3D208F7CE3CFF));
			int32_t L_33 = (-1);
			V_0 = L_33;
			__this->___U3CU3E1__state_0 = L_33;
		}

IL_013c_1:
		{
			AsyncOperationAwaiter_GetResult_m40446B2CAF167A2C2FF346BDC11B460F97383BA9((&V_6), NULL);
			goto IL_015e;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0145;
		}
		throw e;
	}

CATCH_0145:
	{// begin catch(System.Exception)
		V_7 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_34 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_35 = V_7;
		AsyncUniTaskMethodBuilder_SetException_m0D772D62D01CC371F4AB0F6943BBBE0FEAB19643_inline(L_34, L_35, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0171;
	}// end catch (depth: 1)

IL_015e:
	{
		// }
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_36 = (&__this->___U3CU3Et__builder_1);
		AsyncUniTaskMethodBuilder_SetResult_mBBA527F0F21E04D65A269C0D02597CE5B2D1E9CB_inline(L_36, NULL);
	}

IL_0171:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3C_enter_hotfix_main_sceneU3Ed__9_MoveNext_mB840AB8F30805BAF74D25154F9337869386EAC35_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3C_enter_hotfix_main_sceneU3Ed__9_t9B561018599EEBB76E27BFE7574480D196AB56EC* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3C_enter_hotfix_main_sceneU3Ed__9_t9B561018599EEBB76E27BFE7574480D196AB56EC*>(__this + _offset);
	U3C_enter_hotfix_main_sceneU3Ed__9_MoveNext_mB840AB8F30805BAF74D25154F9337869386EAC35(_thisAdjusted, method);
}
// System.Void Main.EntryManager/<_enter_hotfix_main_scene>d__9::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3C_enter_hotfix_main_sceneU3Ed__9_SetStateMachine_m945864B4347A5877E0407BF145665C1C7783D556 (U3C_enter_hotfix_main_sceneU3Ed__9_t9B561018599EEBB76E27BFE7574480D196AB56EC* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) 
{
	{
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_0 = (&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncUniTaskMethodBuilder_SetStateMachine_m466E6779CB9DEC814C0A59E7766D95EC2C3268CF(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3C_enter_hotfix_main_sceneU3Ed__9_SetStateMachine_m945864B4347A5877E0407BF145665C1C7783D556_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	U3C_enter_hotfix_main_sceneU3Ed__9_t9B561018599EEBB76E27BFE7574480D196AB56EC* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3C_enter_hotfix_main_sceneU3Ed__9_t9B561018599EEBB76E27BFE7574480D196AB56EC*>(__this + _offset);
	U3C_enter_hotfix_main_sceneU3Ed__9_SetStateMachine_m945864B4347A5877E0407BF145665C1C7783D556(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Main.EntryManager/<_wait_for_enter_input>d__10::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3C_wait_for_enter_inputU3Ed__10_MoveNext_m84B2671F47EDAE51889D0ADD082260F88E2615A5 (U3C_wait_for_enter_inputU3Ed__10_t1F519E78F77BE52FDE3B74FDC96C4E295EE733EE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_t8B500B68E8763F6139A8470A24AB065434A17220_TisU3C_wait_for_enter_inputU3Ed__10_t1F519E78F77BE52FDE3B74FDC96C4E295EE733EE_m0CEBCEDA176C92139C16412C524EAE120F929492_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Awaiter_t8B500B68E8763F6139A8470A24AB065434A17220 V_2;
	memset((&V_2), 0, sizeof(V_2));
	YieldAwaitable_t8A3F912BCBF6C4BB5599E92BA0159168B4E14B3A V_3;
	memset((&V_3), 0, sizeof(V_3));
	Exception_t* V_4 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_1 = V_0;
			if (!L_1)
			{
				goto IL_0062_1;
			}
		}
		{
			int32_t L_2 = V_0;
			if ((((int32_t)L_2) == ((int32_t)1)))
			{
				goto IL_00c7_1;
			}
		}
		{
			// switch (Application.platform)
			int32_t L_3;
			L_3 = Application_get_platform_m59EF7D6155D18891B24767F83F388160B1FF2138(NULL);
			V_1 = L_3;
			int32_t L_4 = V_1;
			if ((((int32_t)L_4) == ((int32_t)2)))
			{
				goto IL_0085_1;
			}
		}
		{
			int32_t L_5 = V_1;
			if ((((int32_t)L_5) == ((int32_t)((int32_t)11))))
			{
				goto IL_00ea_1;
			}
		}
		{
			goto IL_00f1_1;
		}

IL_0028_1:
		{
			// await UniTask.WaitForFixedUpdate();
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			YieldAwaitable_t8A3F912BCBF6C4BB5599E92BA0159168B4E14B3A L_6;
			L_6 = UniTask_WaitForFixedUpdate_m6A99F0966CA3B825CBFB21FD424A920F9EA50732(NULL);
			V_3 = L_6;
			Awaiter_t8B500B68E8763F6139A8470A24AB065434A17220 L_7;
			L_7 = YieldAwaitable_GetAwaiter_m56B2A4754DC798098A8ABD5DE2E6780BCEB64C7C((&V_3), NULL);
			V_2 = L_7;
			bool L_8;
			L_8 = Awaiter_get_IsCompleted_m380AD66439FAC48688A6348C575A8122F672D61A((&V_2), NULL);
			if (L_8)
			{
				goto IL_007e_1;
			}
		}
		{
			int32_t L_9 = 0;
			V_0 = L_9;
			__this->___U3CU3E1__state_0 = L_9;
			Awaiter_t8B500B68E8763F6139A8470A24AB065434A17220 L_10 = V_2;
			__this->___U3CU3Eu__1_2 = L_10;
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_11 = (&__this->___U3CU3Et__builder_1);
			AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_t8B500B68E8763F6139A8470A24AB065434A17220_TisU3C_wait_for_enter_inputU3Ed__10_t1F519E78F77BE52FDE3B74FDC96C4E295EE733EE_m0CEBCEDA176C92139C16412C524EAE120F929492_inline(L_11, (&V_2), __this, AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_t8B500B68E8763F6139A8470A24AB065434A17220_TisU3C_wait_for_enter_inputU3Ed__10_t1F519E78F77BE52FDE3B74FDC96C4E295EE733EE_m0CEBCEDA176C92139C16412C524EAE120F929492_RuntimeMethod_var);
			goto IL_011f;
		}

IL_0062_1:
		{
			Awaiter_t8B500B68E8763F6139A8470A24AB065434A17220 L_12 = __this->___U3CU3Eu__1_2;
			V_2 = L_12;
			Awaiter_t8B500B68E8763F6139A8470A24AB065434A17220* L_13 = (&__this->___U3CU3Eu__1_2);
			il2cpp_codegen_initobj(L_13, sizeof(Awaiter_t8B500B68E8763F6139A8470A24AB065434A17220));
			int32_t L_14 = (-1);
			V_0 = L_14;
			__this->___U3CU3E1__state_0 = L_14;
		}

IL_007e_1:
		{
			Awaiter_GetResult_m65B26AEE969C14E1A7010BCDF845982D6EE1A0AB((&V_2), NULL);
		}

IL_0085_1:
		{
			// while (!Input.GetKey(KeyCode.Space))
			bool L_15;
			L_15 = Input_GetKey_mE5681EF775F3CEBA7EAD7C63984F7B34C8E8D434(((int32_t)32), NULL);
			if (!L_15)
			{
				goto IL_0028_1;
			}
		}
		{
			// break;
			goto IL_00f1_1;
		}

IL_0090_1:
		{
			// await UniTask.WaitForFixedUpdate();
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			YieldAwaitable_t8A3F912BCBF6C4BB5599E92BA0159168B4E14B3A L_16;
			L_16 = UniTask_WaitForFixedUpdate_m6A99F0966CA3B825CBFB21FD424A920F9EA50732(NULL);
			V_3 = L_16;
			Awaiter_t8B500B68E8763F6139A8470A24AB065434A17220 L_17;
			L_17 = YieldAwaitable_GetAwaiter_m56B2A4754DC798098A8ABD5DE2E6780BCEB64C7C((&V_3), NULL);
			V_2 = L_17;
			bool L_18;
			L_18 = Awaiter_get_IsCompleted_m380AD66439FAC48688A6348C575A8122F672D61A((&V_2), NULL);
			if (L_18)
			{
				goto IL_00e3_1;
			}
		}
		{
			int32_t L_19 = 1;
			V_0 = L_19;
			__this->___U3CU3E1__state_0 = L_19;
			Awaiter_t8B500B68E8763F6139A8470A24AB065434A17220 L_20 = V_2;
			__this->___U3CU3Eu__1_2 = L_20;
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_21 = (&__this->___U3CU3Et__builder_1);
			AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_t8B500B68E8763F6139A8470A24AB065434A17220_TisU3C_wait_for_enter_inputU3Ed__10_t1F519E78F77BE52FDE3B74FDC96C4E295EE733EE_m0CEBCEDA176C92139C16412C524EAE120F929492_inline(L_21, (&V_2), __this, AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_t8B500B68E8763F6139A8470A24AB065434A17220_TisU3C_wait_for_enter_inputU3Ed__10_t1F519E78F77BE52FDE3B74FDC96C4E295EE733EE_m0CEBCEDA176C92139C16412C524EAE120F929492_RuntimeMethod_var);
			goto IL_011f;
		}

IL_00c7_1:
		{
			Awaiter_t8B500B68E8763F6139A8470A24AB065434A17220 L_22 = __this->___U3CU3Eu__1_2;
			V_2 = L_22;
			Awaiter_t8B500B68E8763F6139A8470A24AB065434A17220* L_23 = (&__this->___U3CU3Eu__1_2);
			il2cpp_codegen_initobj(L_23, sizeof(Awaiter_t8B500B68E8763F6139A8470A24AB065434A17220));
			int32_t L_24 = (-1);
			V_0 = L_24;
			__this->___U3CU3E1__state_0 = L_24;
		}

IL_00e3_1:
		{
			Awaiter_GetResult_m65B26AEE969C14E1A7010BCDF845982D6EE1A0AB((&V_2), NULL);
		}

IL_00ea_1:
		{
			// while (Input.touchCount == 0)
			int32_t L_25;
			L_25 = Input_get_touchCount_m057388BFC67A0F4CA53764B1022867ED81D01E39(NULL);
			if (!L_25)
			{
				goto IL_0090_1;
			}
		}

IL_00f1_1:
		{
			goto IL_010c;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00f3;
		}
		throw e;
	}

CATCH_00f3:
	{// begin catch(System.Exception)
		V_4 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_26 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_27 = V_4;
		AsyncUniTaskMethodBuilder_SetException_m0D772D62D01CC371F4AB0F6943BBBE0FEAB19643_inline(L_26, L_27, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_011f;
	}// end catch (depth: 1)

IL_010c:
	{
		// }
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_28 = (&__this->___U3CU3Et__builder_1);
		AsyncUniTaskMethodBuilder_SetResult_mBBA527F0F21E04D65A269C0D02597CE5B2D1E9CB_inline(L_28, NULL);
	}

IL_011f:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3C_wait_for_enter_inputU3Ed__10_MoveNext_m84B2671F47EDAE51889D0ADD082260F88E2615A5_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3C_wait_for_enter_inputU3Ed__10_t1F519E78F77BE52FDE3B74FDC96C4E295EE733EE* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3C_wait_for_enter_inputU3Ed__10_t1F519E78F77BE52FDE3B74FDC96C4E295EE733EE*>(__this + _offset);
	U3C_wait_for_enter_inputU3Ed__10_MoveNext_m84B2671F47EDAE51889D0ADD082260F88E2615A5(_thisAdjusted, method);
}
// System.Void Main.EntryManager/<_wait_for_enter_input>d__10::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3C_wait_for_enter_inputU3Ed__10_SetStateMachine_m934F222BA824800D354C30F9323C50D53E4593C6 (U3C_wait_for_enter_inputU3Ed__10_t1F519E78F77BE52FDE3B74FDC96C4E295EE733EE* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) 
{
	{
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_0 = (&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncUniTaskMethodBuilder_SetStateMachine_m466E6779CB9DEC814C0A59E7766D95EC2C3268CF(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3C_wait_for_enter_inputU3Ed__10_SetStateMachine_m934F222BA824800D354C30F9323C50D53E4593C6_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	U3C_wait_for_enter_inputU3Ed__10_t1F519E78F77BE52FDE3B74FDC96C4E295EE733EE* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3C_wait_for_enter_inputU3Ed__10_t1F519E78F77BE52FDE3B74FDC96C4E295EE733EE*>(__this + _offset);
	U3C_wait_for_enter_inputU3Ed__10_SetStateMachine_m934F222BA824800D354C30F9323C50D53E4593C6(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0 AsyncUniTaskMethodBuilder_Create_m882DFD5EE004FF6F84F182A3AC170AEDCA8C5327_inline (const RuntimeMethod* method) 
{
	AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return default;
		il2cpp_codegen_initobj((&V_0), sizeof(AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0));
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0 L_0 = V_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 AsyncUniTaskMethodBuilder_get_Task_m11E43D69C4F85EB23AAC58143DE695309D1022EC_inline (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStateMachineRunnerPromise_t5CE1FDF2F619E55F7DCFBE22E2B97835C6781C7B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (runnerPromise != null)
		RuntimeObject* L_0 = __this->___runnerPromise_0;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		// return runnerPromise.Task;
		RuntimeObject* L_1 = __this->___runnerPromise_0;
		NullCheck(L_1);
		UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_2;
		L_2 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(1 /* Cysharp.Threading.Tasks.UniTask Cysharp.Threading.Tasks.CompilerServices.IStateMachineRunnerPromise::get_Task() */, IStateMachineRunnerPromise_t5CE1FDF2F619E55F7DCFBE22E2B97835C6781C7B_il2cpp_TypeInfo_var, L_1);
		return L_2;
	}

IL_0014:
	{
		// else if (ex != null)
		Exception_t* L_3 = __this->___ex_1;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		// return UniTask.FromException(ex);
		Exception_t* L_4 = __this->___ex_1;
		il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
		UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_5;
		L_5 = UniTask_FromException_mC6AC508C727D591C6BE908F2014570963CE9E5EE(L_4, NULL);
		return L_5;
	}

IL_0028:
	{
		// return UniTask.CompletedTask;
		il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
		UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_6 = ((UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_StaticFields*)il2cpp_codegen_static_fields_for(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var))->___CompletedTask_3;
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline (UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270* __this, const RuntimeMethod* method) 
{
	{
		// return new Awaiter(this);
		Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Awaiter__ctor_m4154A3A6D62BB1657D17A8106633CD9E1CE51F04_inline((&L_0), __this, /*hidden argument*/NULL);
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* __this, const RuntimeMethod* method) 
{
	{
		// return task.Status.IsCompleted();
		UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270* L_0 = (&__this->___task_0);
		int32_t L_1;
		L_1 = UniTask_get_Status_mA15B0F13DE3CE36730357CF50F65AE99ADF564DA_inline(L_0, NULL);
		bool L_2;
		L_2 = UniTaskStatusExtensions_IsCompleted_mF43C41C9CEB640E381D1F7A8B40142843AED87AE_inline(L_1, NULL);
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (task.source == null) return;
		UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270* L_0 = (&__this->___task_0);
		RuntimeObject* L_1 = L_0->___source_0;
		if (L_1)
		{
			goto IL_000e;
		}
	}
	{
		// if (task.source == null) return;
		return;
	}

IL_000e:
	{
		// task.source.GetResult(task.token);
		UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270* L_2 = (&__this->___task_0);
		RuntimeObject* L_3 = L_2->___source_0;
		UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270* L_4 = (&__this->___task_0);
		int16_t L_5 = L_4->___token_1;
		NullCheck(L_3);
		InterfaceActionInvoker1< int16_t >::Invoke(2 /* System.Void Cysharp.Threading.Tasks.IUniTaskSource::GetResult(System.Int16) */, IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D_il2cpp_TypeInfo_var, L_3, L_5);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_SetException_m0D772D62D01CC371F4AB0F6943BBBE0FEAB19643_inline (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* __this, Exception_t* ___exception0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStateMachineRunnerPromise_t5CE1FDF2F619E55F7DCFBE22E2B97835C6781C7B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (runnerPromise == null)
		RuntimeObject* L_0 = __this->___runnerPromise_0;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		// ex = exception;
		Exception_t* L_1 = ___exception0;
		__this->___ex_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ex_1), (void*)L_1);
		return;
	}

IL_0010:
	{
		// runnerPromise.SetException(exception);
		RuntimeObject* L_2 = __this->___runnerPromise_0;
		Exception_t* L_3 = ___exception0;
		NullCheck(L_2);
		InterfaceActionInvoker1< Exception_t* >::Invoke(3 /* System.Void Cysharp.Threading.Tasks.CompilerServices.IStateMachineRunnerPromise::SetException(System.Exception) */, IStateMachineRunnerPromise_t5CE1FDF2F619E55F7DCFBE22E2B97835C6781C7B_il2cpp_TypeInfo_var, L_2, L_3);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_SetResult_mBBA527F0F21E04D65A269C0D02597CE5B2D1E9CB_inline (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStateMachineRunnerPromise_t5CE1FDF2F619E55F7DCFBE22E2B97835C6781C7B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (runnerPromise != null)
		RuntimeObject* L_0 = __this->___runnerPromise_0;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// runnerPromise.SetResult();
		RuntimeObject* L_1 = __this->___runnerPromise_0;
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(2 /* System.Void Cysharp.Threading.Tasks.CompilerServices.IStateMachineRunnerPromise::SetResult() */, IStateMachineRunnerPromise_t5CE1FDF2F619E55F7DCFBE22E2B97835C6781C7B_il2cpp_TypeInfo_var, L_1);
	}

IL_0013:
	{
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_Start_TisU3C_check_updateU3Ed__4_tC52AC11C5C7BC7CDB895194FA2D8EE5F4512B709_mE37C3544B701FBB183C034145D74043CDDB9E278_gshared_inline (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* __this, U3C_check_updateU3Ed__4_tC52AC11C5C7BC7CDB895194FA2D8EE5F4512B709* ___stateMachine0, const RuntimeMethod* method) 
{
	{
		// stateMachine.MoveNext();
		U3C_check_updateU3Ed__4_tC52AC11C5C7BC7CDB895194FA2D8EE5F4512B709* L_0 = ___stateMachine0;
		U3C_check_updateU3Ed__4_MoveNext_m0E4BEA2825454A22367DD5352A65B3A8D8840B07(L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_Start_TisU3C_update_address_ablesU3Ed__5_t1FF32C47FEFD857C04A3820565973362359C9708_mE27CCF76B76BEB6C13772B29DD08C16A0CBEE1C8_gshared_inline (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* __this, U3C_update_address_ablesU3Ed__5_t1FF32C47FEFD857C04A3820565973362359C9708* ___stateMachine0, const RuntimeMethod* method) 
{
	{
		// stateMachine.MoveNext();
		U3C_update_address_ablesU3Ed__5_t1FF32C47FEFD857C04A3820565973362359C9708* L_0 = ___stateMachine0;
		U3C_update_address_ablesU3Ed__5_MoveNext_mFEDBFF39994F7D2E47F5D4188D980E63BADCFCE8(L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_Start_TisU3C_downloadU3Ed__6_t9FDE76F9ADCA6BBDA45A209199A06BBF4CEA504E_m2A58C814FFD6876E5E9040D52C73ED7BFA86BC3E_gshared_inline (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* __this, U3C_downloadU3Ed__6_t9FDE76F9ADCA6BBDA45A209199A06BBF4CEA504E* ___stateMachine0, const RuntimeMethod* method) 
{
	{
		// stateMachine.MoveNext();
		U3C_downloadU3Ed__6_t9FDE76F9ADCA6BBDA45A209199A06BBF4CEA504E* L_0 = ___stateMachine0;
		U3C_downloadU3Ed__6_MoveNext_mB866480A8BE4B4D8742A0A31F88FB7A0268CB8BA(L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_Start_TisU3C_load_hotfix_dllsU3Ed__7_t779C30021B738E08FCFBE0CA14B688F31D262DF1_m565D3F029CBBC67D6AFC52393E4E5B094AB84828_gshared_inline (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* __this, U3C_load_hotfix_dllsU3Ed__7_t779C30021B738E08FCFBE0CA14B688F31D262DF1* ___stateMachine0, const RuntimeMethod* method) 
{
	{
		// stateMachine.MoveNext();
		U3C_load_hotfix_dllsU3Ed__7_t779C30021B738E08FCFBE0CA14B688F31D262DF1* L_0 = ___stateMachine0;
		U3C_load_hotfix_dllsU3Ed__7_MoveNext_mE69E3D0A48D9A930890819A16223B623997CFD7A(L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_Start_TisU3C_load_meta_data_for_aot_dllsU3Ed__8_tCAEEC6F4B744F2FA13F4EBBA82E82ECCC865F2AE_m0836399DFBD550E2531305CF00C37E233B6D80CB_gshared_inline (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* __this, U3C_load_meta_data_for_aot_dllsU3Ed__8_tCAEEC6F4B744F2FA13F4EBBA82E82ECCC865F2AE* ___stateMachine0, const RuntimeMethod* method) 
{
	{
		// stateMachine.MoveNext();
		U3C_load_meta_data_for_aot_dllsU3Ed__8_tCAEEC6F4B744F2FA13F4EBBA82E82ECCC865F2AE* L_0 = ___stateMachine0;
		U3C_load_meta_data_for_aot_dllsU3Ed__8_MoveNext_mA824370DE3451C71DD94676E983ED37DB052C696(L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_Start_TisU3C_enter_hotfix_main_sceneU3Ed__9_t9B561018599EEBB76E27BFE7574480D196AB56EC_mB10580251D3D79C0C95ED729B10C3D31FE33D57F_gshared_inline (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* __this, U3C_enter_hotfix_main_sceneU3Ed__9_t9B561018599EEBB76E27BFE7574480D196AB56EC* ___stateMachine0, const RuntimeMethod* method) 
{
	{
		// stateMachine.MoveNext();
		U3C_enter_hotfix_main_sceneU3Ed__9_t9B561018599EEBB76E27BFE7574480D196AB56EC* L_0 = ___stateMachine0;
		U3C_enter_hotfix_main_sceneU3Ed__9_MoveNext_mB840AB8F30805BAF74D25154F9337869386EAC35(L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_Start_TisU3C_wait_for_enter_inputU3Ed__10_t1F519E78F77BE52FDE3B74FDC96C4E295EE733EE_m3BEAC30B7E729A4CD959677128FA3A32BA4DD925_gshared_inline (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* __this, U3C_wait_for_enter_inputU3Ed__10_t1F519E78F77BE52FDE3B74FDC96C4E295EE733EE* ___stateMachine0, const RuntimeMethod* method) 
{
	{
		// stateMachine.MoveNext();
		U3C_wait_for_enter_inputU3Ed__10_t1F519E78F77BE52FDE3B74FDC96C4E295EE733EE* L_0 = ___stateMachine0;
		U3C_wait_for_enter_inputU3Ed__10_MoveNext_m84B2671F47EDAE51889D0ADD082260F88E2615A5(L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956_TisU3C_check_updateU3Ed__4_tC52AC11C5C7BC7CDB895194FA2D8EE5F4512B709_m056ABA85B0354271FF823CC6002E1C0684584C7E_gshared_inline (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* __this, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* ___awaiter0, U3C_check_updateU3Ed__4_tC52AC11C5C7BC7CDB895194FA2D8EE5F4512B709* ___stateMachine1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStateMachineRunnerPromise_t5CE1FDF2F619E55F7DCFBE22E2B97835C6781C7B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (runnerPromise == null)
		RuntimeObject* L_0 = (RuntimeObject*)__this->___runnerPromise_0;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		// AsyncUniTask<TStateMachine>.SetStateMachine(ref stateMachine, ref runnerPromise);
		U3C_check_updateU3Ed__4_tC52AC11C5C7BC7CDB895194FA2D8EE5F4512B709* L_1 = ___stateMachine1;
		RuntimeObject** L_2 = (RuntimeObject**)(&__this->___runnerPromise_0);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		((  void (*) (U3C_check_updateU3Ed__4_tC52AC11C5C7BC7CDB895194FA2D8EE5F4512B709*, RuntimeObject**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
	}

IL_0014:
	{
		// awaiter.UnsafeOnCompleted(runnerPromise.MoveNext);
		Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_3 = ___awaiter0;
		RuntimeObject* L_4 = (RuntimeObject*)__this->___runnerPromise_0;
		NullCheck(L_4);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_5;
		L_5 = InterfaceFuncInvoker0< Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* >::Invoke(0 /* System.Action Cysharp.Threading.Tasks.CompilerServices.IStateMachineRunnerPromise::get_MoveNext() */, IStateMachineRunnerPromise_t5CE1FDF2F619E55F7DCFBE22E2B97835C6781C7B_il2cpp_TypeInfo_var, L_4);
		Awaiter_UnsafeOnCompleted_m6C4775F8F4F2BEFB8118EBBA1EA621440CE84D62_inline(L_3, L_5, il2cpp_rgctx_method(method->rgctx_data, 3));
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisU3C_update_address_ablesU3Ed__5_t1FF32C47FEFD857C04A3820565973362359C9708_mA90F888E2EC2F3EEF9F60FCB7F2A40AED821C8AA_gshared_inline (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* __this, TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA* ___awaiter0, U3C_update_address_ablesU3Ed__5_t1FF32C47FEFD857C04A3820565973362359C9708* ___stateMachine1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStateMachineRunnerPromise_t5CE1FDF2F619E55F7DCFBE22E2B97835C6781C7B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (runnerPromise == null)
		RuntimeObject* L_0 = (RuntimeObject*)__this->___runnerPromise_0;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		// AsyncUniTask<TStateMachine>.SetStateMachine(ref stateMachine, ref runnerPromise);
		U3C_update_address_ablesU3Ed__5_t1FF32C47FEFD857C04A3820565973362359C9708* L_1 = ___stateMachine1;
		RuntimeObject** L_2 = (RuntimeObject**)(&__this->___runnerPromise_0);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		((  void (*) (U3C_update_address_ablesU3Ed__5_t1FF32C47FEFD857C04A3820565973362359C9708*, RuntimeObject**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
	}

IL_0014:
	{
		// awaiter.UnsafeOnCompleted(runnerPromise.MoveNext);
		TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA* L_3 = ___awaiter0;
		RuntimeObject* L_4 = (RuntimeObject*)__this->___runnerPromise_0;
		NullCheck(L_4);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_5;
		L_5 = InterfaceFuncInvoker0< Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* >::Invoke(0 /* System.Action Cysharp.Threading.Tasks.CompilerServices.IStateMachineRunnerPromise::get_MoveNext() */, IStateMachineRunnerPromise_t5CE1FDF2F619E55F7DCFBE22E2B97835C6781C7B_il2cpp_TypeInfo_var, L_4);
		TaskAwaiter_1_UnsafeOnCompleted_m432BB796161116E663D0AEE2F77FD3B254442C0B(L_3, L_5, il2cpp_rgctx_method(method->rgctx_data, 3));
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Awaiter_get_IsCompleted_m64CB466F8C142312263397E37C6298E842139126_gshared_inline (Awaiter_t0767B80BBE72D416CD4F41DA0FB54CD61AFEB101* __this, const RuntimeMethod* method) 
{
	{
		// return task.Status.IsCompleted();
		UniTask_1_tB1B04E29E602E879F73EEA52804796621BBFE440* L_0 = (UniTask_1_tB1B04E29E602E879F73EEA52804796621BBFE440*)(&__this->___task_0);
		int32_t L_1;
		L_1 = UniTask_1_get_Status_mA5CFB18FB86A0F36F682D8E814F9A25CE84D87C5_inline(L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		bool L_2;
		L_2 = UniTaskStatusExtensions_IsCompleted_mF43C41C9CEB640E381D1F7A8B40142843AED87AE_inline(L_1, NULL);
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_t0767B80BBE72D416CD4F41DA0FB54CD61AFEB101_TisU3C_update_address_ablesU3Ed__5_t1FF32C47FEFD857C04A3820565973362359C9708_m292D381BC401A91E9D150C005BA5D8C89BC9540C_gshared_inline (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* __this, Awaiter_t0767B80BBE72D416CD4F41DA0FB54CD61AFEB101* ___awaiter0, U3C_update_address_ablesU3Ed__5_t1FF32C47FEFD857C04A3820565973362359C9708* ___stateMachine1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStateMachineRunnerPromise_t5CE1FDF2F619E55F7DCFBE22E2B97835C6781C7B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (runnerPromise == null)
		RuntimeObject* L_0 = (RuntimeObject*)__this->___runnerPromise_0;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		// AsyncUniTask<TStateMachine>.SetStateMachine(ref stateMachine, ref runnerPromise);
		U3C_update_address_ablesU3Ed__5_t1FF32C47FEFD857C04A3820565973362359C9708* L_1 = ___stateMachine1;
		RuntimeObject** L_2 = (RuntimeObject**)(&__this->___runnerPromise_0);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		((  void (*) (U3C_update_address_ablesU3Ed__5_t1FF32C47FEFD857C04A3820565973362359C9708*, RuntimeObject**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
	}

IL_0014:
	{
		// awaiter.UnsafeOnCompleted(runnerPromise.MoveNext);
		Awaiter_t0767B80BBE72D416CD4F41DA0FB54CD61AFEB101* L_3 = ___awaiter0;
		RuntimeObject* L_4 = (RuntimeObject*)__this->___runnerPromise_0;
		NullCheck(L_4);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_5;
		L_5 = InterfaceFuncInvoker0< Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* >::Invoke(0 /* System.Action Cysharp.Threading.Tasks.CompilerServices.IStateMachineRunnerPromise::get_MoveNext() */, IStateMachineRunnerPromise_t5CE1FDF2F619E55F7DCFBE22E2B97835C6781C7B_il2cpp_TypeInfo_var, L_4);
		Awaiter_UnsafeOnCompleted_m1CCB04A74D166784C6CDEFAA8AA67879A0CCE793_inline(L_3, L_5, il2cpp_rgctx_method(method->rgctx_data, 3));
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Awaiter_GetResult_mD47D2D1B93A9A867CBEDAC2D7033F31DBCE10C3B_gshared_inline (Awaiter_t0767B80BBE72D416CD4F41DA0FB54CD61AFEB101* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	{
		// var s = task.source;
		UniTask_1_tB1B04E29E602E879F73EEA52804796621BBFE440* L_0 = (UniTask_1_tB1B04E29E602E879F73EEA52804796621BBFE440*)(&__this->___task_0);
		RuntimeObject* L_1 = (RuntimeObject*)L_0->___source_0;
		V_0 = L_1;
		// if (s == null)
		RuntimeObject* L_2 = V_0;
		if (L_2)
		{
			goto IL_001b;
		}
	}
	{
		// return task.result;
		UniTask_1_tB1B04E29E602E879F73EEA52804796621BBFE440* L_3 = (UniTask_1_tB1B04E29E602E879F73EEA52804796621BBFE440*)(&__this->___task_0);
		RuntimeObject* L_4 = (RuntimeObject*)L_3->___result_1;
		return L_4;
	}

IL_001b:
	{
		// return s.GetResult(task.token);
		RuntimeObject* L_5 = V_0;
		UniTask_1_tB1B04E29E602E879F73EEA52804796621BBFE440* L_6 = (UniTask_1_tB1B04E29E602E879F73EEA52804796621BBFE440*)(&__this->___task_0);
		int16_t L_7 = (int16_t)L_6->___token_2;
		NullCheck(L_5);
		RuntimeObject* L_8;
		L_8 = InterfaceFuncInvoker1< RuntimeObject*, int16_t >::Invoke(0 /* T Cysharp.Threading.Tasks.IUniTaskSource`1<System.Object>::GetResult(System.Int16) */, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1), L_5, L_7);
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956_TisU3C_update_address_ablesU3Ed__5_t1FF32C47FEFD857C04A3820565973362359C9708_m6D0F2B4D522926147973B8FB250701AA85F23BEB_gshared_inline (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* __this, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* ___awaiter0, U3C_update_address_ablesU3Ed__5_t1FF32C47FEFD857C04A3820565973362359C9708* ___stateMachine1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStateMachineRunnerPromise_t5CE1FDF2F619E55F7DCFBE22E2B97835C6781C7B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (runnerPromise == null)
		RuntimeObject* L_0 = (RuntimeObject*)__this->___runnerPromise_0;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		// AsyncUniTask<TStateMachine>.SetStateMachine(ref stateMachine, ref runnerPromise);
		U3C_update_address_ablesU3Ed__5_t1FF32C47FEFD857C04A3820565973362359C9708* L_1 = ___stateMachine1;
		RuntimeObject** L_2 = (RuntimeObject**)(&__this->___runnerPromise_0);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		((  void (*) (U3C_update_address_ablesU3Ed__5_t1FF32C47FEFD857C04A3820565973362359C9708*, RuntimeObject**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
	}

IL_0014:
	{
		// awaiter.UnsafeOnCompleted(runnerPromise.MoveNext);
		Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_3 = ___awaiter0;
		RuntimeObject* L_4 = (RuntimeObject*)__this->___runnerPromise_0;
		NullCheck(L_4);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_5;
		L_5 = InterfaceFuncInvoker0< Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* >::Invoke(0 /* System.Action Cysharp.Threading.Tasks.CompilerServices.IStateMachineRunnerPromise::get_MoveNext() */, IStateMachineRunnerPromise_t5CE1FDF2F619E55F7DCFBE22E2B97835C6781C7B_il2cpp_TypeInfo_var, L_4);
		Awaiter_UnsafeOnCompleted_m6C4775F8F4F2BEFB8118EBBA1EA621440CE84D62_inline(L_3, L_5, il2cpp_rgctx_method(method->rgctx_data, 3));
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Awaiter_get_IsCompleted_mCFE009603778E0BD45941A0C4BFD6C5437934777_gshared_inline (Awaiter_t7AE9CC84360E7F09FFB9D68779935EE4FE333A0E* __this, const RuntimeMethod* method) 
{
	{
		// return task.Status.IsCompleted();
		UniTask_1_tB7F6E76EE4A7F880D1169687FBCF7C85E3F1ED72* L_0 = (UniTask_1_tB7F6E76EE4A7F880D1169687FBCF7C85E3F1ED72*)(&__this->___task_0);
		int32_t L_1;
		L_1 = UniTask_1_get_Status_m621A3ED628D31F42C69A04584E93A8A02E381117_inline(L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		bool L_2;
		L_2 = UniTaskStatusExtensions_IsCompleted_mF43C41C9CEB640E381D1F7A8B40142843AED87AE_inline(L_1, NULL);
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_t7AE9CC84360E7F09FFB9D68779935EE4FE333A0E_TisU3C_downloadU3Ed__6_t9FDE76F9ADCA6BBDA45A209199A06BBF4CEA504E_m41AF4E246B77874BCD24B99B47E3A74D2F9DE267_gshared_inline (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* __this, Awaiter_t7AE9CC84360E7F09FFB9D68779935EE4FE333A0E* ___awaiter0, U3C_downloadU3Ed__6_t9FDE76F9ADCA6BBDA45A209199A06BBF4CEA504E* ___stateMachine1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStateMachineRunnerPromise_t5CE1FDF2F619E55F7DCFBE22E2B97835C6781C7B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (runnerPromise == null)
		RuntimeObject* L_0 = (RuntimeObject*)__this->___runnerPromise_0;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		// AsyncUniTask<TStateMachine>.SetStateMachine(ref stateMachine, ref runnerPromise);
		U3C_downloadU3Ed__6_t9FDE76F9ADCA6BBDA45A209199A06BBF4CEA504E* L_1 = ___stateMachine1;
		RuntimeObject** L_2 = (RuntimeObject**)(&__this->___runnerPromise_0);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		((  void (*) (U3C_downloadU3Ed__6_t9FDE76F9ADCA6BBDA45A209199A06BBF4CEA504E*, RuntimeObject**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
	}

IL_0014:
	{
		// awaiter.UnsafeOnCompleted(runnerPromise.MoveNext);
		Awaiter_t7AE9CC84360E7F09FFB9D68779935EE4FE333A0E* L_3 = ___awaiter0;
		RuntimeObject* L_4 = (RuntimeObject*)__this->___runnerPromise_0;
		NullCheck(L_4);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_5;
		L_5 = InterfaceFuncInvoker0< Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* >::Invoke(0 /* System.Action Cysharp.Threading.Tasks.CompilerServices.IStateMachineRunnerPromise::get_MoveNext() */, IStateMachineRunnerPromise_t5CE1FDF2F619E55F7DCFBE22E2B97835C6781C7B_il2cpp_TypeInfo_var, L_4);
		Awaiter_UnsafeOnCompleted_mB8189A47DD4AD1C6B2865449D720708512EE20D5_inline(L_3, L_5, il2cpp_rgctx_method(method->rgctx_data, 3));
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t Awaiter_GetResult_m4B63F7992C6A60270E7A65D3BA029B02E8492A15_gshared_inline (Awaiter_t7AE9CC84360E7F09FFB9D68779935EE4FE333A0E* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	{
		// var s = task.source;
		UniTask_1_tB7F6E76EE4A7F880D1169687FBCF7C85E3F1ED72* L_0 = (UniTask_1_tB7F6E76EE4A7F880D1169687FBCF7C85E3F1ED72*)(&__this->___task_0);
		RuntimeObject* L_1 = (RuntimeObject*)L_0->___source_0;
		V_0 = L_1;
		// if (s == null)
		RuntimeObject* L_2 = V_0;
		if (L_2)
		{
			goto IL_001b;
		}
	}
	{
		// return task.result;
		UniTask_1_tB7F6E76EE4A7F880D1169687FBCF7C85E3F1ED72* L_3 = (UniTask_1_tB7F6E76EE4A7F880D1169687FBCF7C85E3F1ED72*)(&__this->___task_0);
		int64_t L_4 = (int64_t)L_3->___result_1;
		return L_4;
	}

IL_001b:
	{
		// return s.GetResult(task.token);
		RuntimeObject* L_5 = V_0;
		UniTask_1_tB7F6E76EE4A7F880D1169687FBCF7C85E3F1ED72* L_6 = (UniTask_1_tB7F6E76EE4A7F880D1169687FBCF7C85E3F1ED72*)(&__this->___task_0);
		int16_t L_7 = (int16_t)L_6->___token_2;
		NullCheck(L_5);
		int64_t L_8;
		L_8 = InterfaceFuncInvoker1< int64_t, int16_t >::Invoke(0 /* T Cysharp.Threading.Tasks.IUniTaskSource`1<System.Int64>::GetResult(System.Int16) */, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1), L_5, L_7);
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956_TisU3C_downloadU3Ed__6_t9FDE76F9ADCA6BBDA45A209199A06BBF4CEA504E_m9751D888B9EF86588BA0D458A8D997C3D6DFF312_gshared_inline (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* __this, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* ___awaiter0, U3C_downloadU3Ed__6_t9FDE76F9ADCA6BBDA45A209199A06BBF4CEA504E* ___stateMachine1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStateMachineRunnerPromise_t5CE1FDF2F619E55F7DCFBE22E2B97835C6781C7B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (runnerPromise == null)
		RuntimeObject* L_0 = (RuntimeObject*)__this->___runnerPromise_0;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		// AsyncUniTask<TStateMachine>.SetStateMachine(ref stateMachine, ref runnerPromise);
		U3C_downloadU3Ed__6_t9FDE76F9ADCA6BBDA45A209199A06BBF4CEA504E* L_1 = ___stateMachine1;
		RuntimeObject** L_2 = (RuntimeObject**)(&__this->___runnerPromise_0);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		((  void (*) (U3C_downloadU3Ed__6_t9FDE76F9ADCA6BBDA45A209199A06BBF4CEA504E*, RuntimeObject**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
	}

IL_0014:
	{
		// awaiter.UnsafeOnCompleted(runnerPromise.MoveNext);
		Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_3 = ___awaiter0;
		RuntimeObject* L_4 = (RuntimeObject*)__this->___runnerPromise_0;
		NullCheck(L_4);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_5;
		L_5 = InterfaceFuncInvoker0< Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* >::Invoke(0 /* System.Action Cysharp.Threading.Tasks.CompilerServices.IStateMachineRunnerPromise::get_MoveNext() */, IStateMachineRunnerPromise_t5CE1FDF2F619E55F7DCFBE22E2B97835C6781C7B_il2cpp_TypeInfo_var, L_4);
		Awaiter_UnsafeOnCompleted_m6C4775F8F4F2BEFB8118EBBA1EA621440CE84D62_inline(L_3, L_5, il2cpp_rgctx_method(method->rgctx_data, 3));
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_t0767B80BBE72D416CD4F41DA0FB54CD61AFEB101_TisU3C_load_hotfix_dllsU3Ed__7_t779C30021B738E08FCFBE0CA14B688F31D262DF1_mE18A908ADAE89124C1B0663D23C047DC31A87BFE_gshared_inline (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* __this, Awaiter_t0767B80BBE72D416CD4F41DA0FB54CD61AFEB101* ___awaiter0, U3C_load_hotfix_dllsU3Ed__7_t779C30021B738E08FCFBE0CA14B688F31D262DF1* ___stateMachine1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStateMachineRunnerPromise_t5CE1FDF2F619E55F7DCFBE22E2B97835C6781C7B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (runnerPromise == null)
		RuntimeObject* L_0 = (RuntimeObject*)__this->___runnerPromise_0;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		// AsyncUniTask<TStateMachine>.SetStateMachine(ref stateMachine, ref runnerPromise);
		U3C_load_hotfix_dllsU3Ed__7_t779C30021B738E08FCFBE0CA14B688F31D262DF1* L_1 = ___stateMachine1;
		RuntimeObject** L_2 = (RuntimeObject**)(&__this->___runnerPromise_0);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		((  void (*) (U3C_load_hotfix_dllsU3Ed__7_t779C30021B738E08FCFBE0CA14B688F31D262DF1*, RuntimeObject**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
	}

IL_0014:
	{
		// awaiter.UnsafeOnCompleted(runnerPromise.MoveNext);
		Awaiter_t0767B80BBE72D416CD4F41DA0FB54CD61AFEB101* L_3 = ___awaiter0;
		RuntimeObject* L_4 = (RuntimeObject*)__this->___runnerPromise_0;
		NullCheck(L_4);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_5;
		L_5 = InterfaceFuncInvoker0< Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* >::Invoke(0 /* System.Action Cysharp.Threading.Tasks.CompilerServices.IStateMachineRunnerPromise::get_MoveNext() */, IStateMachineRunnerPromise_t5CE1FDF2F619E55F7DCFBE22E2B97835C6781C7B_il2cpp_TypeInfo_var, L_4);
		Awaiter_UnsafeOnCompleted_m1CCB04A74D166784C6CDEFAA8AA67879A0CCE793_inline(L_3, L_5, il2cpp_rgctx_method(method->rgctx_data, 3));
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_t0767B80BBE72D416CD4F41DA0FB54CD61AFEB101_TisU3C_load_meta_data_for_aot_dllsU3Ed__8_tCAEEC6F4B744F2FA13F4EBBA82E82ECCC865F2AE_m1B9D83F141ECB5E3FD67174A398541A5ADD98310_gshared_inline (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* __this, Awaiter_t0767B80BBE72D416CD4F41DA0FB54CD61AFEB101* ___awaiter0, U3C_load_meta_data_for_aot_dllsU3Ed__8_tCAEEC6F4B744F2FA13F4EBBA82E82ECCC865F2AE* ___stateMachine1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStateMachineRunnerPromise_t5CE1FDF2F619E55F7DCFBE22E2B97835C6781C7B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (runnerPromise == null)
		RuntimeObject* L_0 = (RuntimeObject*)__this->___runnerPromise_0;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		// AsyncUniTask<TStateMachine>.SetStateMachine(ref stateMachine, ref runnerPromise);
		U3C_load_meta_data_for_aot_dllsU3Ed__8_tCAEEC6F4B744F2FA13F4EBBA82E82ECCC865F2AE* L_1 = ___stateMachine1;
		RuntimeObject** L_2 = (RuntimeObject**)(&__this->___runnerPromise_0);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		((  void (*) (U3C_load_meta_data_for_aot_dllsU3Ed__8_tCAEEC6F4B744F2FA13F4EBBA82E82ECCC865F2AE*, RuntimeObject**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
	}

IL_0014:
	{
		// awaiter.UnsafeOnCompleted(runnerPromise.MoveNext);
		Awaiter_t0767B80BBE72D416CD4F41DA0FB54CD61AFEB101* L_3 = ___awaiter0;
		RuntimeObject* L_4 = (RuntimeObject*)__this->___runnerPromise_0;
		NullCheck(L_4);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_5;
		L_5 = InterfaceFuncInvoker0< Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* >::Invoke(0 /* System.Action Cysharp.Threading.Tasks.CompilerServices.IStateMachineRunnerPromise::get_MoveNext() */, IStateMachineRunnerPromise_t5CE1FDF2F619E55F7DCFBE22E2B97835C6781C7B_il2cpp_TypeInfo_var, L_4);
		Awaiter_UnsafeOnCompleted_m1CCB04A74D166784C6CDEFAA8AA67879A0CCE793_inline(L_3, L_5, il2cpp_rgctx_method(method->rgctx_data, 3));
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956_TisU3C_enter_hotfix_main_sceneU3Ed__9_t9B561018599EEBB76E27BFE7574480D196AB56EC_mDE7530F3B1ABA76703CBDBA4F855D2A6A9476D3A_gshared_inline (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* __this, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* ___awaiter0, U3C_enter_hotfix_main_sceneU3Ed__9_t9B561018599EEBB76E27BFE7574480D196AB56EC* ___stateMachine1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStateMachineRunnerPromise_t5CE1FDF2F619E55F7DCFBE22E2B97835C6781C7B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (runnerPromise == null)
		RuntimeObject* L_0 = (RuntimeObject*)__this->___runnerPromise_0;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		// AsyncUniTask<TStateMachine>.SetStateMachine(ref stateMachine, ref runnerPromise);
		U3C_enter_hotfix_main_sceneU3Ed__9_t9B561018599EEBB76E27BFE7574480D196AB56EC* L_1 = ___stateMachine1;
		RuntimeObject** L_2 = (RuntimeObject**)(&__this->___runnerPromise_0);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		((  void (*) (U3C_enter_hotfix_main_sceneU3Ed__9_t9B561018599EEBB76E27BFE7574480D196AB56EC*, RuntimeObject**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
	}

IL_0014:
	{
		// awaiter.UnsafeOnCompleted(runnerPromise.MoveNext);
		Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_3 = ___awaiter0;
		RuntimeObject* L_4 = (RuntimeObject*)__this->___runnerPromise_0;
		NullCheck(L_4);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_5;
		L_5 = InterfaceFuncInvoker0< Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* >::Invoke(0 /* System.Action Cysharp.Threading.Tasks.CompilerServices.IStateMachineRunnerPromise::get_MoveNext() */, IStateMachineRunnerPromise_t5CE1FDF2F619E55F7DCFBE22E2B97835C6781C7B_il2cpp_TypeInfo_var, L_4);
		Awaiter_UnsafeOnCompleted_m6C4775F8F4F2BEFB8118EBBA1EA621440CE84D62_inline(L_3, L_5, il2cpp_rgctx_method(method->rgctx_data, 3));
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Awaiter_get_IsCompleted_mEA517CCC52750E414219358F57E9AB3F6F8667E2_gshared_inline (Awaiter_t2FED8B6C42FE0974C7571445A740264E4CEFFD29* __this, const RuntimeMethod* method) 
{
	{
		// return task.Status.IsCompleted();
		UniTask_1_t96D9A7E86D862B1E3481FF626D461A695D0CB2EE* L_0 = (UniTask_1_t96D9A7E86D862B1E3481FF626D461A695D0CB2EE*)(&__this->___task_0);
		int32_t L_1;
		L_1 = UniTask_1_get_Status_m28112EE74B6E94F3BC5A50BD09CBBE5B3D3D5005_inline(L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		bool L_2;
		L_2 = UniTaskStatusExtensions_IsCompleted_mF43C41C9CEB640E381D1F7A8B40142843AED87AE_inline(L_1, NULL);
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_t2FED8B6C42FE0974C7571445A740264E4CEFFD29_TisU3C_enter_hotfix_main_sceneU3Ed__9_t9B561018599EEBB76E27BFE7574480D196AB56EC_mE8EB5A5AA77A091821D8F6BCCAE1CD67C7041870_gshared_inline (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* __this, Awaiter_t2FED8B6C42FE0974C7571445A740264E4CEFFD29* ___awaiter0, U3C_enter_hotfix_main_sceneU3Ed__9_t9B561018599EEBB76E27BFE7574480D196AB56EC* ___stateMachine1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStateMachineRunnerPromise_t5CE1FDF2F619E55F7DCFBE22E2B97835C6781C7B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (runnerPromise == null)
		RuntimeObject* L_0 = (RuntimeObject*)__this->___runnerPromise_0;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		// AsyncUniTask<TStateMachine>.SetStateMachine(ref stateMachine, ref runnerPromise);
		U3C_enter_hotfix_main_sceneU3Ed__9_t9B561018599EEBB76E27BFE7574480D196AB56EC* L_1 = ___stateMachine1;
		RuntimeObject** L_2 = (RuntimeObject**)(&__this->___runnerPromise_0);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		((  void (*) (U3C_enter_hotfix_main_sceneU3Ed__9_t9B561018599EEBB76E27BFE7574480D196AB56EC*, RuntimeObject**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
	}

IL_0014:
	{
		// awaiter.UnsafeOnCompleted(runnerPromise.MoveNext);
		Awaiter_t2FED8B6C42FE0974C7571445A740264E4CEFFD29* L_3 = ___awaiter0;
		RuntimeObject* L_4 = (RuntimeObject*)__this->___runnerPromise_0;
		NullCheck(L_4);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_5;
		L_5 = InterfaceFuncInvoker0< Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* >::Invoke(0 /* System.Action Cysharp.Threading.Tasks.CompilerServices.IStateMachineRunnerPromise::get_MoveNext() */, IStateMachineRunnerPromise_t5CE1FDF2F619E55F7DCFBE22E2B97835C6781C7B_il2cpp_TypeInfo_var, L_4);
		Awaiter_UnsafeOnCompleted_m879C5B3DA0025E382898DBC531A796B4B03D85A1_inline(L_3, L_5, il2cpp_rgctx_method(method->rgctx_data, 3));
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SceneInstance_t9D8203A59AA2C8EE21045B75AFA429EB1B6BF14A Awaiter_GetResult_m1BF227B2EC0B21CBE419CFF22BDBA6A7C9C79081_gshared_inline (Awaiter_t2FED8B6C42FE0974C7571445A740264E4CEFFD29* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	{
		// var s = task.source;
		UniTask_1_t96D9A7E86D862B1E3481FF626D461A695D0CB2EE* L_0 = (UniTask_1_t96D9A7E86D862B1E3481FF626D461A695D0CB2EE*)(&__this->___task_0);
		RuntimeObject* L_1 = (RuntimeObject*)L_0->___source_0;
		V_0 = L_1;
		// if (s == null)
		RuntimeObject* L_2 = V_0;
		if (L_2)
		{
			goto IL_001b;
		}
	}
	{
		// return task.result;
		UniTask_1_t96D9A7E86D862B1E3481FF626D461A695D0CB2EE* L_3 = (UniTask_1_t96D9A7E86D862B1E3481FF626D461A695D0CB2EE*)(&__this->___task_0);
		SceneInstance_t9D8203A59AA2C8EE21045B75AFA429EB1B6BF14A L_4 = (SceneInstance_t9D8203A59AA2C8EE21045B75AFA429EB1B6BF14A)L_3->___result_1;
		return L_4;
	}

IL_001b:
	{
		// return s.GetResult(task.token);
		RuntimeObject* L_5 = V_0;
		UniTask_1_t96D9A7E86D862B1E3481FF626D461A695D0CB2EE* L_6 = (UniTask_1_t96D9A7E86D862B1E3481FF626D461A695D0CB2EE*)(&__this->___task_0);
		int16_t L_7 = (int16_t)L_6->___token_2;
		NullCheck(L_5);
		SceneInstance_t9D8203A59AA2C8EE21045B75AFA429EB1B6BF14A L_8;
		L_8 = InterfaceFuncInvoker1< SceneInstance_t9D8203A59AA2C8EE21045B75AFA429EB1B6BF14A, int16_t >::Invoke(0 /* T Cysharp.Threading.Tasks.IUniTaskSource`1<UnityEngine.ResourceManagement.ResourceProviders.SceneInstance>::GetResult(System.Int16) */, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1), L_5, L_7);
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAsyncOperationAwaiter_t31DC22FCC690816BA1A3508437F3D208F7CE3CFF_TisU3C_enter_hotfix_main_sceneU3Ed__9_t9B561018599EEBB76E27BFE7574480D196AB56EC_mFBDB511684F553EA71D295512AAC71D70986AECE_gshared_inline (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* __this, AsyncOperationAwaiter_t31DC22FCC690816BA1A3508437F3D208F7CE3CFF* ___awaiter0, U3C_enter_hotfix_main_sceneU3Ed__9_t9B561018599EEBB76E27BFE7574480D196AB56EC* ___stateMachine1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStateMachineRunnerPromise_t5CE1FDF2F619E55F7DCFBE22E2B97835C6781C7B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (runnerPromise == null)
		RuntimeObject* L_0 = (RuntimeObject*)__this->___runnerPromise_0;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		// AsyncUniTask<TStateMachine>.SetStateMachine(ref stateMachine, ref runnerPromise);
		U3C_enter_hotfix_main_sceneU3Ed__9_t9B561018599EEBB76E27BFE7574480D196AB56EC* L_1 = ___stateMachine1;
		RuntimeObject** L_2 = (RuntimeObject**)(&__this->___runnerPromise_0);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		((  void (*) (U3C_enter_hotfix_main_sceneU3Ed__9_t9B561018599EEBB76E27BFE7574480D196AB56EC*, RuntimeObject**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
	}

IL_0014:
	{
		// awaiter.UnsafeOnCompleted(runnerPromise.MoveNext);
		AsyncOperationAwaiter_t31DC22FCC690816BA1A3508437F3D208F7CE3CFF* L_3 = ___awaiter0;
		RuntimeObject* L_4 = (RuntimeObject*)__this->___runnerPromise_0;
		NullCheck(L_4);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_5;
		L_5 = InterfaceFuncInvoker0< Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* >::Invoke(0 /* System.Action Cysharp.Threading.Tasks.CompilerServices.IStateMachineRunnerPromise::get_MoveNext() */, IStateMachineRunnerPromise_t5CE1FDF2F619E55F7DCFBE22E2B97835C6781C7B_il2cpp_TypeInfo_var, L_4);
		AsyncOperationAwaiter_UnsafeOnCompleted_m1FCE8D7EEF11CA5BC83FB9E7ECB4984D16DE8C04(L_3, L_5, il2cpp_rgctx_method(method->rgctx_data, 3));
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_t8B500B68E8763F6139A8470A24AB065434A17220_TisU3C_wait_for_enter_inputU3Ed__10_t1F519E78F77BE52FDE3B74FDC96C4E295EE733EE_m0CEBCEDA176C92139C16412C524EAE120F929492_gshared_inline (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* __this, Awaiter_t8B500B68E8763F6139A8470A24AB065434A17220* ___awaiter0, U3C_wait_for_enter_inputU3Ed__10_t1F519E78F77BE52FDE3B74FDC96C4E295EE733EE* ___stateMachine1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStateMachineRunnerPromise_t5CE1FDF2F619E55F7DCFBE22E2B97835C6781C7B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (runnerPromise == null)
		RuntimeObject* L_0 = (RuntimeObject*)__this->___runnerPromise_0;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		// AsyncUniTask<TStateMachine>.SetStateMachine(ref stateMachine, ref runnerPromise);
		U3C_wait_for_enter_inputU3Ed__10_t1F519E78F77BE52FDE3B74FDC96C4E295EE733EE* L_1 = ___stateMachine1;
		RuntimeObject** L_2 = (RuntimeObject**)(&__this->___runnerPromise_0);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		((  void (*) (U3C_wait_for_enter_inputU3Ed__10_t1F519E78F77BE52FDE3B74FDC96C4E295EE733EE*, RuntimeObject**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
	}

IL_0014:
	{
		// awaiter.UnsafeOnCompleted(runnerPromise.MoveNext);
		Awaiter_t8B500B68E8763F6139A8470A24AB065434A17220* L_3 = ___awaiter0;
		RuntimeObject* L_4 = (RuntimeObject*)__this->___runnerPromise_0;
		NullCheck(L_4);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_5;
		L_5 = InterfaceFuncInvoker0< Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* >::Invoke(0 /* System.Action Cysharp.Threading.Tasks.CompilerServices.IStateMachineRunnerPromise::get_MoveNext() */, IStateMachineRunnerPromise_t5CE1FDF2F619E55F7DCFBE22E2B97835C6781C7B_il2cpp_TypeInfo_var, L_4);
		Awaiter_UnsafeOnCompleted_m449B902ED39DDF273B1DC642244CA8B4D3831BE5(L_3, L_5, il2cpp_rgctx_method(method->rgctx_data, 3));
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Awaiter__ctor_m4154A3A6D62BB1657D17A8106633CD9E1CE51F04_inline (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* __this, UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270* ___task0, const RuntimeMethod* method) 
{
	{
		// this.task = task;
		UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270* L_0 = ___task0;
		UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_1 = (*(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270*)L_0);
		__this->___task_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___task_0))->___source_0), (void*)NULL);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UniTask_get_Status_mA15B0F13DE3CE36730357CF50F65AE99ADF564DA_inline (UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (source == null) return UniTaskStatus.Succeeded;
		RuntimeObject* L_0 = __this->___source_0;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		// if (source == null) return UniTaskStatus.Succeeded;
		return (int32_t)(1);
	}

IL_000a:
	{
		// return source.GetStatus(token);
		RuntimeObject* L_1 = __this->___source_0;
		int16_t L_2 = __this->___token_1;
		NullCheck(L_1);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker1< int32_t, int16_t >::Invoke(0 /* Cysharp.Threading.Tasks.UniTaskStatus Cysharp.Threading.Tasks.IUniTaskSource::GetStatus(System.Int16) */, IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D_il2cpp_TypeInfo_var, L_1, L_2);
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool UniTaskStatusExtensions_IsCompleted_mF43C41C9CEB640E381D1F7A8B40142843AED87AE_inline (int32_t ___status0, const RuntimeMethod* method) 
{
	{
		// return status != UniTaskStatus.Pending;
		int32_t L_0 = ___status0;
		return (bool)((!(((uint32_t)L_0) <= ((uint32_t)0)))? 1 : 0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Awaiter_UnsafeOnCompleted_m6C4775F8F4F2BEFB8118EBBA1EA621440CE84D62_inline (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___continuation0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AwaiterActions_t5D05CAC006FDEBCF6B65E2B9224BC4B44783BBE5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (task.source == null)
		UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270* L_0 = (&__this->___task_0);
		RuntimeObject* L_1 = L_0->___source_0;
		if (L_1)
		{
			goto IL_0014;
		}
	}
	{
		// continuation();
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = ___continuation0;
		NullCheck(L_2);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(L_2, NULL);
		return;
	}

IL_0014:
	{
		// task.source.OnCompleted(AwaiterActions.InvokeContinuationDelegate, continuation, task.token);
		UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270* L_3 = (&__this->___task_0);
		RuntimeObject* L_4 = L_3->___source_0;
		il2cpp_codegen_runtime_class_init_inline(AwaiterActions_t5D05CAC006FDEBCF6B65E2B9224BC4B44783BBE5_il2cpp_TypeInfo_var);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_5 = ((AwaiterActions_t5D05CAC006FDEBCF6B65E2B9224BC4B44783BBE5_StaticFields*)il2cpp_codegen_static_fields_for(AwaiterActions_t5D05CAC006FDEBCF6B65E2B9224BC4B44783BBE5_il2cpp_TypeInfo_var))->___InvokeContinuationDelegate_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = ___continuation0;
		UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270* L_7 = (&__this->___task_0);
		int16_t L_8 = L_7->___token_1;
		NullCheck(L_4);
		InterfaceActionInvoker3< Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*, RuntimeObject*, int16_t >::Invoke(1 /* System.Void Cysharp.Threading.Tasks.IUniTaskSource::OnCompleted(System.Action`1<System.Object>,System.Object,System.Int16) */, IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D_il2cpp_TypeInfo_var, L_4, L_5, L_6, L_8);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UniTask_1_get_Status_mA5CFB18FB86A0F36F682D8E814F9A25CE84D87C5_gshared_inline (UniTask_1_tB1B04E29E602E879F73EEA52804796621BBFE440* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return (source == null) ? UniTaskStatus.Succeeded : source.GetStatus(token);
		RuntimeObject* L_0 = (RuntimeObject*)__this->___source_0;
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject* L_1 = (RuntimeObject*)__this->___source_0;
		int16_t L_2 = (int16_t)__this->___token_2;
		NullCheck((RuntimeObject*)L_1);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker1< int32_t, int16_t >::Invoke(0 /* Cysharp.Threading.Tasks.UniTaskStatus Cysharp.Threading.Tasks.IUniTaskSource::GetStatus(System.Int16) */, IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D_il2cpp_TypeInfo_var, (RuntimeObject*)L_1, L_2);
		return L_3;
	}

IL_001a:
	{
		return (int32_t)(1);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Awaiter_UnsafeOnCompleted_m1CCB04A74D166784C6CDEFAA8AA67879A0CCE793_gshared_inline (Awaiter_t0767B80BBE72D416CD4F41DA0FB54CD61AFEB101* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___continuation0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AwaiterActions_t5D05CAC006FDEBCF6B65E2B9224BC4B44783BBE5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// var s = task.source;
		UniTask_1_tB1B04E29E602E879F73EEA52804796621BBFE440* L_0 = (UniTask_1_tB1B04E29E602E879F73EEA52804796621BBFE440*)(&__this->___task_0);
		RuntimeObject* L_1 = (RuntimeObject*)L_0->___source_0;
		V_0 = L_1;
		// if (s == null)
		RuntimeObject* L_2 = V_0;
		if (L_2)
		{
			goto IL_0016;
		}
	}
	{
		// continuation();
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = ___continuation0;
		NullCheck(L_3);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(L_3, NULL);
		return;
	}

IL_0016:
	{
		// s.OnCompleted(AwaiterActions.InvokeContinuationDelegate, continuation, task.token);
		RuntimeObject* L_4 = V_0;
		il2cpp_codegen_runtime_class_init_inline(AwaiterActions_t5D05CAC006FDEBCF6B65E2B9224BC4B44783BBE5_il2cpp_TypeInfo_var);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_5 = ((AwaiterActions_t5D05CAC006FDEBCF6B65E2B9224BC4B44783BBE5_StaticFields*)il2cpp_codegen_static_fields_for(AwaiterActions_t5D05CAC006FDEBCF6B65E2B9224BC4B44783BBE5_il2cpp_TypeInfo_var))->___InvokeContinuationDelegate_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = ___continuation0;
		UniTask_1_tB1B04E29E602E879F73EEA52804796621BBFE440* L_7 = (UniTask_1_tB1B04E29E602E879F73EEA52804796621BBFE440*)(&__this->___task_0);
		int16_t L_8 = (int16_t)L_7->___token_2;
		NullCheck((RuntimeObject*)L_4);
		InterfaceActionInvoker3< Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*, RuntimeObject*, int16_t >::Invoke(1 /* System.Void Cysharp.Threading.Tasks.IUniTaskSource::OnCompleted(System.Action`1<System.Object>,System.Object,System.Int16) */, IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D_il2cpp_TypeInfo_var, (RuntimeObject*)L_4, L_5, (RuntimeObject*)L_6, L_8);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UniTask_1_get_Status_m621A3ED628D31F42C69A04584E93A8A02E381117_gshared_inline (UniTask_1_tB7F6E76EE4A7F880D1169687FBCF7C85E3F1ED72* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return (source == null) ? UniTaskStatus.Succeeded : source.GetStatus(token);
		RuntimeObject* L_0 = (RuntimeObject*)__this->___source_0;
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject* L_1 = (RuntimeObject*)__this->___source_0;
		int16_t L_2 = (int16_t)__this->___token_2;
		NullCheck((RuntimeObject*)L_1);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker1< int32_t, int16_t >::Invoke(0 /* Cysharp.Threading.Tasks.UniTaskStatus Cysharp.Threading.Tasks.IUniTaskSource::GetStatus(System.Int16) */, IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D_il2cpp_TypeInfo_var, (RuntimeObject*)L_1, L_2);
		return L_3;
	}

IL_001a:
	{
		return (int32_t)(1);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Awaiter_UnsafeOnCompleted_mB8189A47DD4AD1C6B2865449D720708512EE20D5_gshared_inline (Awaiter_t7AE9CC84360E7F09FFB9D68779935EE4FE333A0E* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___continuation0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AwaiterActions_t5D05CAC006FDEBCF6B65E2B9224BC4B44783BBE5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// var s = task.source;
		UniTask_1_tB7F6E76EE4A7F880D1169687FBCF7C85E3F1ED72* L_0 = (UniTask_1_tB7F6E76EE4A7F880D1169687FBCF7C85E3F1ED72*)(&__this->___task_0);
		RuntimeObject* L_1 = (RuntimeObject*)L_0->___source_0;
		V_0 = L_1;
		// if (s == null)
		RuntimeObject* L_2 = V_0;
		if (L_2)
		{
			goto IL_0016;
		}
	}
	{
		// continuation();
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = ___continuation0;
		NullCheck(L_3);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(L_3, NULL);
		return;
	}

IL_0016:
	{
		// s.OnCompleted(AwaiterActions.InvokeContinuationDelegate, continuation, task.token);
		RuntimeObject* L_4 = V_0;
		il2cpp_codegen_runtime_class_init_inline(AwaiterActions_t5D05CAC006FDEBCF6B65E2B9224BC4B44783BBE5_il2cpp_TypeInfo_var);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_5 = ((AwaiterActions_t5D05CAC006FDEBCF6B65E2B9224BC4B44783BBE5_StaticFields*)il2cpp_codegen_static_fields_for(AwaiterActions_t5D05CAC006FDEBCF6B65E2B9224BC4B44783BBE5_il2cpp_TypeInfo_var))->___InvokeContinuationDelegate_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = ___continuation0;
		UniTask_1_tB7F6E76EE4A7F880D1169687FBCF7C85E3F1ED72* L_7 = (UniTask_1_tB7F6E76EE4A7F880D1169687FBCF7C85E3F1ED72*)(&__this->___task_0);
		int16_t L_8 = (int16_t)L_7->___token_2;
		NullCheck((RuntimeObject*)L_4);
		InterfaceActionInvoker3< Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*, RuntimeObject*, int16_t >::Invoke(1 /* System.Void Cysharp.Threading.Tasks.IUniTaskSource::OnCompleted(System.Action`1<System.Object>,System.Object,System.Int16) */, IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D_il2cpp_TypeInfo_var, (RuntimeObject*)L_4, L_5, (RuntimeObject*)L_6, L_8);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UniTask_1_get_Status_m28112EE74B6E94F3BC5A50BD09CBBE5B3D3D5005_gshared_inline (UniTask_1_t96D9A7E86D862B1E3481FF626D461A695D0CB2EE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return (source == null) ? UniTaskStatus.Succeeded : source.GetStatus(token);
		RuntimeObject* L_0 = (RuntimeObject*)__this->___source_0;
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject* L_1 = (RuntimeObject*)__this->___source_0;
		int16_t L_2 = (int16_t)__this->___token_2;
		NullCheck((RuntimeObject*)L_1);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker1< int32_t, int16_t >::Invoke(0 /* Cysharp.Threading.Tasks.UniTaskStatus Cysharp.Threading.Tasks.IUniTaskSource::GetStatus(System.Int16) */, IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D_il2cpp_TypeInfo_var, (RuntimeObject*)L_1, L_2);
		return L_3;
	}

IL_001a:
	{
		return (int32_t)(1);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Awaiter_UnsafeOnCompleted_m879C5B3DA0025E382898DBC531A796B4B03D85A1_gshared_inline (Awaiter_t2FED8B6C42FE0974C7571445A740264E4CEFFD29* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___continuation0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AwaiterActions_t5D05CAC006FDEBCF6B65E2B9224BC4B44783BBE5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// var s = task.source;
		UniTask_1_t96D9A7E86D862B1E3481FF626D461A695D0CB2EE* L_0 = (UniTask_1_t96D9A7E86D862B1E3481FF626D461A695D0CB2EE*)(&__this->___task_0);
		RuntimeObject* L_1 = (RuntimeObject*)L_0->___source_0;
		V_0 = L_1;
		// if (s == null)
		RuntimeObject* L_2 = V_0;
		if (L_2)
		{
			goto IL_0016;
		}
	}
	{
		// continuation();
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = ___continuation0;
		NullCheck(L_3);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(L_3, NULL);
		return;
	}

IL_0016:
	{
		// s.OnCompleted(AwaiterActions.InvokeContinuationDelegate, continuation, task.token);
		RuntimeObject* L_4 = V_0;
		il2cpp_codegen_runtime_class_init_inline(AwaiterActions_t5D05CAC006FDEBCF6B65E2B9224BC4B44783BBE5_il2cpp_TypeInfo_var);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_5 = ((AwaiterActions_t5D05CAC006FDEBCF6B65E2B9224BC4B44783BBE5_StaticFields*)il2cpp_codegen_static_fields_for(AwaiterActions_t5D05CAC006FDEBCF6B65E2B9224BC4B44783BBE5_il2cpp_TypeInfo_var))->___InvokeContinuationDelegate_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = ___continuation0;
		UniTask_1_t96D9A7E86D862B1E3481FF626D461A695D0CB2EE* L_7 = (UniTask_1_t96D9A7E86D862B1E3481FF626D461A695D0CB2EE*)(&__this->___task_0);
		int16_t L_8 = (int16_t)L_7->___token_2;
		NullCheck((RuntimeObject*)L_4);
		InterfaceActionInvoker3< Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*, RuntimeObject*, int16_t >::Invoke(1 /* System.Void Cysharp.Threading.Tasks.IUniTaskSource::OnCompleted(System.Action`1<System.Object>,System.Object,System.Int16) */, IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D_il2cpp_TypeInfo_var, (RuntimeObject*)L_4, L_5, (RuntimeObject*)L_6, L_8);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
