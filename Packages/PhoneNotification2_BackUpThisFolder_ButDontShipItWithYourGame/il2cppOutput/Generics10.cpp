﻿#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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

// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Object>
struct ConditionalWeakTable_2_t87BE12792DC61EC9AE17609EC1ACA0671B3F5605;
// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Runtime.Serialization.SerializationInfo>
struct ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858;
// System.Collections.Generic.Dictionary`2<System.Object,System.UInt32>
struct Dictionary_2_tA9CFEFF33EC9A214A3FA9A889B9D8EAE95A49902;
// System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Vector2>
struct Dictionary_2_t41479D9F29C6C1BC07FC7F8D3DD313D8A9A419E1;
// System.Collections.Generic.Dictionary`2<System.Object,Oculus.Interaction.PoseDetection.JointRotationActiveState/JointRotationFeatureState>
struct Dictionary_2_tB21E9CF3B85CA9CAE5D23FD25B351F538B448F51;
// System.Collections.Generic.Dictionary`2<System.Object,Oculus.Interaction.PoseDetection.JointVelocityActiveState/JointVelocityFeatureState>
struct Dictionary_2_t572F5C2854D3453A19F550C26C592FBCEEF1BEF8;
// System.Collections.Generic.Dictionary`2<System.Object,OVRPassthroughLayer/PassthroughMeshInstance>
struct Dictionary_2_tEF99863F098CBEDBDF416E45D42452A1BD2A32BC;
// System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.UIElements.StyleComplexSelector/PseudoStateData>
struct Dictionary_2_t377C2B6CAA20982B0AC7A180E3800172E88C8BDE;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588;
// System.Collections.Generic.Dictionary`2<UnityEngine.TerrainUtils.TerrainTileCoord,System.Object>
struct Dictionary_2_t22B5EE7684537D7D143E6F6FCDC4C58B5D53F68F;
// System.Collections.Generic.EqualityComparer`1<System.Object>
struct EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2;
// System.Collections.Generic.EqualityComparer`1<UnityEngine.TerrainUtils.TerrainTileCoord>
struct EqualityComparer_1_t825BE29F8175FFB17D7A1752D208ACAB0066AEC2;
// System.Collections.Generic.EqualityComparer`1<System.UInt32>
struct EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862;
// System.Collections.Generic.EqualityComparer`1<UnityEngine.Vector2>
struct EqualityComparer_1_tF5B9124CEB160EFC53E943AA29271854DB5D5E8E;
// System.Collections.Generic.EqualityComparer`1<Oculus.Interaction.PoseDetection.JointRotationActiveState/JointRotationFeatureState>
struct EqualityComparer_1_tC60B76639F0D4CF6D1A1BDF4500A72E4EC1C4477;
// System.Collections.Generic.EqualityComparer`1<Oculus.Interaction.PoseDetection.JointVelocityActiveState/JointVelocityFeatureState>
struct EqualityComparer_1_t5460983A71721F37C24FEF605A8607F1862FC1E1;
// System.Collections.Generic.EqualityComparer`1<OVRPassthroughLayer/PassthroughMeshInstance>
struct EqualityComparer_1_t8305842F1638FD4EB0C6B9C2D7A5BDAACE522FE9;
// System.Collections.Generic.EqualityComparer`1<UnityEngine.UIElements.StyleComplexSelector/PseudoStateData>
struct EqualityComparer_1_t90245FEDC9E02D61898D3D788C4F1C3A159A1438;
// System.Collections.Generic.IDictionary`2<System.Object,System.UInt32>
struct IDictionary_2_tE25CC4CBE0E70F34FF0F26E384943CC121EDF1D2;
// System.Collections.Generic.IDictionary`2<System.Object,UnityEngine.Vector2>
struct IDictionary_2_tAA31599241FD7691FB7EB3EEAC9FBB0CD5A9F6AB;
// System.Collections.Generic.IDictionary`2<System.Object,Oculus.Interaction.PoseDetection.JointRotationActiveState/JointRotationFeatureState>
struct IDictionary_2_tC81F7888B37C9914CCB6142441C41CA4B2E4C6A7;
// System.Collections.Generic.IDictionary`2<System.Object,Oculus.Interaction.PoseDetection.JointVelocityActiveState/JointVelocityFeatureState>
struct IDictionary_2_t0781D05FF13043A97F1875285B241B2AA94CC5DE;
// System.Collections.Generic.IDictionary`2<System.Object,OVRPassthroughLayer/PassthroughMeshInstance>
struct IDictionary_2_t2670E4D8414D1C25BC3AD9A49DCE64DCAFDEB7B7;
// System.Collections.Generic.IDictionary`2<System.Object,UnityEngine.UIElements.StyleComplexSelector/PseudoStateData>
struct IDictionary_2_tDA6ADAC2521B7E0F0497A0849BC816A5FE734BEC;
// System.Collections.Generic.IDictionary`2<UnityEngine.TerrainUtils.TerrainTileCoord,System.Object>
struct IDictionary_2_t48BE9590588758359560704D695680A77E806981;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
// System.Collections.Generic.IEnumerable`1<System.UInt32>
struct IEnumerable_1_tF78C5A55C1D093F0B8CD95E0247BA2EE703D9D55;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Vector2>
struct IEnumerable_1_t6C47A8FE62321E6AD75C312B8549AFD2B13F0591;
// System.Collections.Generic.IEnumerable`1<Oculus.Interaction.PoseDetection.JointRotationActiveState/JointRotationFeatureState>
struct IEnumerable_1_tAF2E56A53D6A8DC44B0E378B1DCF117333CD9CD7;
// System.Collections.Generic.IEnumerable`1<Oculus.Interaction.PoseDetection.JointVelocityActiveState/JointVelocityFeatureState>
struct IEnumerable_1_t99F7620EDE2071496A87852A5C332EA8D4DA8942;
// System.Collections.Generic.IEnumerable`1<OVRPassthroughLayer/PassthroughMeshInstance>
struct IEnumerable_1_t9C95A4864C562273DED87C506B85C357E9FA81A1;
// System.Collections.Generic.IEnumerable`1<UnityEngine.UIElements.StyleComplexSelector/PseudoStateData>
struct IEnumerable_1_tF416B7691EB6641A380D2DABC15AD1C4FE03C61C;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>
struct IEnumerator_1_t116537E818B8A051B6A3C666096395D64CB9BEAA;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.Vector2>>
struct IEnumerator_1_t43F0B5E3FAC11AFC247B1B6F3766BE4A633FD8D4;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,Oculus.Interaction.PoseDetection.JointRotationActiveState/JointRotationFeatureState>>
struct IEnumerator_1_t7D02D504275505FE404381A7B318EFAED90E17D8;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,Oculus.Interaction.PoseDetection.JointVelocityActiveState/JointVelocityFeatureState>>
struct IEnumerator_1_tB65B630D6C918C01A7D5C1CEFD75514D9449F2C3;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,OVRPassthroughLayer/PassthroughMeshInstance>>
struct IEnumerator_1_t7F3B886941C6C79D8FBA1145871EF714ED6DFD4A;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.UIElements.StyleComplexSelector/PseudoStateData>>
struct IEnumerator_1_tE53E9F2A897A5CDBC84A61137B95C2B92FCC0FF9;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.TerrainUtils.TerrainTileCoord,System.Object>>
struct IEnumerator_1_t3F2BEB1C412F925719134BE6515257E4AA8F29BB;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t2CA7720C7ADCCDECD3B02E45878B4478619D5347;
// System.Collections.Generic.IEqualityComparer`1<UnityEngine.TerrainUtils.TerrainTileCoord>
struct IEqualityComparer_1_t88286C29EF8964DB1FA6326A0679A19AC8C74709;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.UInt32>
struct KeyCollection_tC04CC2B7A346756DEF5B0B6163FF284C2F45BD37;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,UnityEngine.Vector2>
struct KeyCollection_tA332CBAA47F362606393C419AACCDEF8FDA5904F;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,Oculus.Interaction.PoseDetection.JointRotationActiveState/JointRotationFeatureState>
struct KeyCollection_t8BC19090CC997012423345A01113E313C0402A52;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,Oculus.Interaction.PoseDetection.JointVelocityActiveState/JointVelocityFeatureState>
struct KeyCollection_t153627747EE0EA44EE46B91E8A6590B1467217AF;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,OVRPassthroughLayer/PassthroughMeshInstance>
struct KeyCollection_tB971EBFC30B3C62DC261473AF1BA8A20E0D6DCF9;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,UnityEngine.UIElements.StyleComplexSelector/PseudoStateData>
struct KeyCollection_t5138B138B96BD1F88FBA9549B659FE6FCB3F5A0A;
// System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.TerrainUtils.TerrainTileCoord,System.Object>
struct KeyCollection_t8A862CFF968D9AAD432E0AFA29DECB342BF06F59;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.UInt32>
struct ValueCollection_tF9BCC1C418D000EF64E21430DC20F900474B0F7D;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,UnityEngine.Vector2>
struct ValueCollection_t0F3CDE51F86239622C464290CE413781AC13CA62;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,Oculus.Interaction.PoseDetection.JointRotationActiveState/JointRotationFeatureState>
struct ValueCollection_t2EA6D714E0CF6D3E51B8FFE1037F5F0A91CB10F6;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,Oculus.Interaction.PoseDetection.JointVelocityActiveState/JointVelocityFeatureState>
struct ValueCollection_tB0679A5B8704616B8B82BA28682959BC3295A37F;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,OVRPassthroughLayer/PassthroughMeshInstance>
struct ValueCollection_t2217D10193E11B6B505B07C802B6CE706A42464E;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,UnityEngine.UIElements.StyleComplexSelector/PseudoStateData>
struct ValueCollection_t6F9658BF91E1BD2BEAED9D1C88FD4A3C255097C5;
// System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.TerrainUtils.TerrainTileCoord,System.Object>
struct ValueCollection_t0CA15D727691297C05CD9DFAFFEF94D100E53EEA;
// System.Collections.Generic.Dictionary`2/Entry<System.Object,System.UInt32>[]
struct EntryU5BU5D_tDDCFB52378DF4C6064B3947E47DE072BE041758E;
// System.Collections.Generic.Dictionary`2/Entry<System.Object,UnityEngine.Vector2>[]
struct EntryU5BU5D_tB701640026CE382655A04D3448D52F314990B3AF;
// System.Collections.Generic.Dictionary`2/Entry<System.Object,Oculus.Interaction.PoseDetection.JointRotationActiveState/JointRotationFeatureState>[]
struct EntryU5BU5D_t7E16E41EC34A6E7E94750CC3CB11F6B8ECBE6BB5;
// System.Collections.Generic.Dictionary`2/Entry<System.Object,Oculus.Interaction.PoseDetection.JointVelocityActiveState/JointVelocityFeatureState>[]
struct EntryU5BU5D_t699B149129E0838165C5A43C9C5F0E988EE1EF9A;
// System.Collections.Generic.Dictionary`2/Entry<System.Object,OVRPassthroughLayer/PassthroughMeshInstance>[]
struct EntryU5BU5D_t96093E698ECF890AFC3EBA8FD35D922C55DEA886;
// System.Collections.Generic.Dictionary`2/Entry<System.Object,UnityEngine.UIElements.StyleComplexSelector/PseudoStateData>[]
struct EntryU5BU5D_t68CA0D1367AB2807A569CCED387E01680CB52ED7;
// System.Collections.Generic.Dictionary`2/Entry<UnityEngine.TerrainUtils.TerrainTileCoord,System.Object>[]
struct EntryU5BU5D_t5CFAFF65A005CA040F5C92D1AFEF51CB84CECE56;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>[]
struct KeyValuePair_2U5BU5D_tFBE07C34404F8F624202E7C9A32A37AC93DCD171;
// System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.Vector2>[]
struct KeyValuePair_2U5BU5D_tD9CA47909C5DBB11E7BBC75787D8858E0668B81F;
// System.Collections.Generic.KeyValuePair`2<System.Object,Oculus.Interaction.PoseDetection.JointRotationActiveState/JointRotationFeatureState>[]
struct KeyValuePair_2U5BU5D_tBD10F6DC24C89CDB584693DEC3A9B0A08954D611;
// System.Collections.Generic.KeyValuePair`2<System.Object,Oculus.Interaction.PoseDetection.JointVelocityActiveState/JointVelocityFeatureState>[]
struct KeyValuePair_2U5BU5D_tDEA2BA7360626A115F7CF1B2A42C3102635C4D75;
// System.Collections.Generic.KeyValuePair`2<System.Object,OVRPassthroughLayer/PassthroughMeshInstance>[]
struct KeyValuePair_2U5BU5D_t27B5F90D6614A8F5D75BD15E0BA488F4FF7A6786;
// System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.UIElements.StyleComplexSelector/PseudoStateData>[]
struct KeyValuePair_2U5BU5D_t889086771E46EA552EA0DA1AE810C66A494D9F78;
// System.Collections.Generic.KeyValuePair`2<UnityEngine.TerrainUtils.TerrainTileCoord,System.Object>[]
struct KeyValuePair_2U5BU5D_t697102CA825793B9F049EE7FB6E4FA6CA679E0B3;
// System.Runtime.CompilerServices.Ephemeron[]
struct EphemeronU5BU5D_t4F80428A1142C3102C946127F8190063001742E8;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_tE129D608FCDB7207E0F0ECE33473CC950A83AD16;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// System.Runtime.Serialization.IFormatterConverter
struct IFormatterConverter_t726606DAC82C384B08C82471313C340968DDB609;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;

IL2CPP_EXTERN_C RuntimeClass* ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
IL2CPP_EXTERN_C String_t* _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
IL2CPP_EXTERN_C String_t* _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A;
IL2CPP_EXTERN_C String_t* _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1;
IL2CPP_EXTERN_C const RuntimeMethod* ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct EntryU5BU5D_tDDCFB52378DF4C6064B3947E47DE072BE041758E;
struct EntryU5BU5D_tB701640026CE382655A04D3448D52F314990B3AF;
struct EntryU5BU5D_t7E16E41EC34A6E7E94750CC3CB11F6B8ECBE6BB5;
struct EntryU5BU5D_t699B149129E0838165C5A43C9C5F0E988EE1EF9A;
struct EntryU5BU5D_t96093E698ECF890AFC3EBA8FD35D922C55DEA886;
struct EntryU5BU5D_t68CA0D1367AB2807A569CCED387E01680CB52ED7;
struct EntryU5BU5D_t5CFAFF65A005CA040F5C92D1AFEF51CB84CECE56;
struct KeyValuePair_2U5BU5D_tFBE07C34404F8F624202E7C9A32A37AC93DCD171;
struct KeyValuePair_2U5BU5D_tD9CA47909C5DBB11E7BBC75787D8858E0668B81F;
struct KeyValuePair_2U5BU5D_tBD10F6DC24C89CDB584693DEC3A9B0A08954D611;
struct KeyValuePair_2U5BU5D_tDEA2BA7360626A115F7CF1B2A42C3102635C4D75;
struct KeyValuePair_2U5BU5D_t27B5F90D6614A8F5D75BD15E0BA488F4FF7A6786;
struct KeyValuePair_2U5BU5D_t889086771E46EA552EA0DA1AE810C66A494D9F78;
struct KeyValuePair_2U5BU5D_t697102CA825793B9F049EE7FB6E4FA6CA679E0B3;
struct DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Runtime.Serialization.SerializationInfo>
struct ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858  : public RuntimeObject
{
	// System.Runtime.CompilerServices.Ephemeron[] System.Runtime.CompilerServices.ConditionalWeakTable`2::data
	EphemeronU5BU5D_t4F80428A1142C3102C946127F8190063001742E8* ___data_4;
	// System.Object System.Runtime.CompilerServices.ConditionalWeakTable`2::_lock
	RuntimeObject* ____lock_5;
	// System.Int32 System.Runtime.CompilerServices.ConditionalWeakTable`2::size
	int32_t ___size_6;
};

// System.Collections.Generic.Dictionary`2<System.Object,System.UInt32>
struct Dictionary_2_tA9CFEFF33EC9A214A3FA9A889B9D8EAE95A49902  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tDDCFB52378DF4C6064B3947E47DE072BE041758E* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_tC04CC2B7A346756DEF5B0B6163FF284C2F45BD37* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tF9BCC1C418D000EF64E21430DC20F900474B0F7D* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Vector2>
struct Dictionary_2_t41479D9F29C6C1BC07FC7F8D3DD313D8A9A419E1  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tB701640026CE382655A04D3448D52F314990B3AF* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_tA332CBAA47F362606393C419AACCDEF8FDA5904F* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t0F3CDE51F86239622C464290CE413781AC13CA62* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.Object,Oculus.Interaction.PoseDetection.JointRotationActiveState/JointRotationFeatureState>
struct Dictionary_2_tB21E9CF3B85CA9CAE5D23FD25B351F538B448F51  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t7E16E41EC34A6E7E94750CC3CB11F6B8ECBE6BB5* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t8BC19090CC997012423345A01113E313C0402A52* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t2EA6D714E0CF6D3E51B8FFE1037F5F0A91CB10F6* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.Object,Oculus.Interaction.PoseDetection.JointVelocityActiveState/JointVelocityFeatureState>
struct Dictionary_2_t572F5C2854D3453A19F550C26C592FBCEEF1BEF8  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t699B149129E0838165C5A43C9C5F0E988EE1EF9A* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t153627747EE0EA44EE46B91E8A6590B1467217AF* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tB0679A5B8704616B8B82BA28682959BC3295A37F* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.Object,OVRPassthroughLayer/PassthroughMeshInstance>
struct Dictionary_2_tEF99863F098CBEDBDF416E45D42452A1BD2A32BC  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t96093E698ECF890AFC3EBA8FD35D922C55DEA886* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_tB971EBFC30B3C62DC261473AF1BA8A20E0D6DCF9* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t2217D10193E11B6B505B07C802B6CE706A42464E* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.UIElements.StyleComplexSelector/PseudoStateData>
struct Dictionary_2_t377C2B6CAA20982B0AC7A180E3800172E88C8BDE  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t68CA0D1367AB2807A569CCED387E01680CB52ED7* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t5138B138B96BD1F88FBA9549B659FE6FCB3F5A0A* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t6F9658BF91E1BD2BEAED9D1C88FD4A3C255097C5* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<UnityEngine.TerrainUtils.TerrainTileCoord,System.Object>
struct Dictionary_2_t22B5EE7684537D7D143E6F6FCDC4C58B5D53F68F  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t5CFAFF65A005CA040F5C92D1AFEF51CB84CECE56* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t8A862CFF968D9AAD432E0AFA29DECB342BF06F59* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t0CA15D727691297C05CD9DFAFFEF94D100E53EEA* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.EqualityComparer`1<System.Object>
struct EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2  : public RuntimeObject
{
};

struct EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2_StaticFields
{
	// System.Collections.Generic.EqualityComparer`1<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Generic.EqualityComparer`1::defaultComparer
	EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* ___defaultComparer_0;
};

// System.Collections.Generic.EqualityComparer`1<UnityEngine.TerrainUtils.TerrainTileCoord>
struct EqualityComparer_1_t825BE29F8175FFB17D7A1752D208ACAB0066AEC2  : public RuntimeObject
{
};

struct EqualityComparer_1_t825BE29F8175FFB17D7A1752D208ACAB0066AEC2_StaticFields
{
	// System.Collections.Generic.EqualityComparer`1<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Generic.EqualityComparer`1::defaultComparer
	EqualityComparer_1_t825BE29F8175FFB17D7A1752D208ACAB0066AEC2* ___defaultComparer_0;
};

// System.Collections.Generic.EqualityComparer`1<System.UInt32>
struct EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862  : public RuntimeObject
{
};

struct EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862_StaticFields
{
	// System.Collections.Generic.EqualityComparer`1<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Generic.EqualityComparer`1::defaultComparer
	EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* ___defaultComparer_0;
};

// System.Collections.Generic.EqualityComparer`1<UnityEngine.Vector2>
struct EqualityComparer_1_tF5B9124CEB160EFC53E943AA29271854DB5D5E8E  : public RuntimeObject
{
};

struct EqualityComparer_1_tF5B9124CEB160EFC53E943AA29271854DB5D5E8E_StaticFields
{
	// System.Collections.Generic.EqualityComparer`1<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Generic.EqualityComparer`1::defaultComparer
	EqualityComparer_1_tF5B9124CEB160EFC53E943AA29271854DB5D5E8E* ___defaultComparer_0;
};

// System.Collections.Generic.EqualityComparer`1<Oculus.Interaction.PoseDetection.JointRotationActiveState/JointRotationFeatureState>
struct EqualityComparer_1_tC60B76639F0D4CF6D1A1BDF4500A72E4EC1C4477  : public RuntimeObject
{
};

struct EqualityComparer_1_tC60B76639F0D4CF6D1A1BDF4500A72E4EC1C4477_StaticFields
{
	// System.Collections.Generic.EqualityComparer`1<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Generic.EqualityComparer`1::defaultComparer
	EqualityComparer_1_tC60B76639F0D4CF6D1A1BDF4500A72E4EC1C4477* ___defaultComparer_0;
};

// System.Collections.Generic.EqualityComparer`1<Oculus.Interaction.PoseDetection.JointVelocityActiveState/JointVelocityFeatureState>
struct EqualityComparer_1_t5460983A71721F37C24FEF605A8607F1862FC1E1  : public RuntimeObject
{
};

struct EqualityComparer_1_t5460983A71721F37C24FEF605A8607F1862FC1E1_StaticFields
{
	// System.Collections.Generic.EqualityComparer`1<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Generic.EqualityComparer`1::defaultComparer
	EqualityComparer_1_t5460983A71721F37C24FEF605A8607F1862FC1E1* ___defaultComparer_0;
};

// System.Collections.Generic.EqualityComparer`1<OVRPassthroughLayer/PassthroughMeshInstance>
struct EqualityComparer_1_t8305842F1638FD4EB0C6B9C2D7A5BDAACE522FE9  : public RuntimeObject
{
};

struct EqualityComparer_1_t8305842F1638FD4EB0C6B9C2D7A5BDAACE522FE9_StaticFields
{
	// System.Collections.Generic.EqualityComparer`1<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Generic.EqualityComparer`1::defaultComparer
	EqualityComparer_1_t8305842F1638FD4EB0C6B9C2D7A5BDAACE522FE9* ___defaultComparer_0;
};

// System.Collections.Generic.EqualityComparer`1<UnityEngine.UIElements.StyleComplexSelector/PseudoStateData>
struct EqualityComparer_1_t90245FEDC9E02D61898D3D788C4F1C3A159A1438  : public RuntimeObject
{
};

struct EqualityComparer_1_t90245FEDC9E02D61898D3D788C4F1C3A159A1438_StaticFields
{
	// System.Collections.Generic.EqualityComparer`1<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Generic.EqualityComparer`1::defaultComparer
	EqualityComparer_1_t90245FEDC9E02D61898D3D788C4F1C3A159A1438* ___defaultComparer_0;
};

// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.UInt32>
struct KeyCollection_tC04CC2B7A346756DEF5B0B6163FF284C2F45BD37  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection::_dictionary
	Dictionary_2_tA9CFEFF33EC9A214A3FA9A889B9D8EAE95A49902* ____dictionary_0;
};

// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,UnityEngine.Vector2>
struct KeyCollection_tA332CBAA47F362606393C419AACCDEF8FDA5904F  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection::_dictionary
	Dictionary_2_t41479D9F29C6C1BC07FC7F8D3DD313D8A9A419E1* ____dictionary_0;
};

// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,Oculus.Interaction.PoseDetection.JointRotationActiveState/JointRotationFeatureState>
struct KeyCollection_t8BC19090CC997012423345A01113E313C0402A52  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection::_dictionary
	Dictionary_2_tB21E9CF3B85CA9CAE5D23FD25B351F538B448F51* ____dictionary_0;
};

// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,Oculus.Interaction.PoseDetection.JointVelocityActiveState/JointVelocityFeatureState>
struct KeyCollection_t153627747EE0EA44EE46B91E8A6590B1467217AF  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection::_dictionary
	Dictionary_2_t572F5C2854D3453A19F550C26C592FBCEEF1BEF8* ____dictionary_0;
};

// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,OVRPassthroughLayer/PassthroughMeshInstance>
struct KeyCollection_tB971EBFC30B3C62DC261473AF1BA8A20E0D6DCF9  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection::_dictionary
	Dictionary_2_tEF99863F098CBEDBDF416E45D42452A1BD2A32BC* ____dictionary_0;
};

// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,UnityEngine.UIElements.StyleComplexSelector/PseudoStateData>
struct KeyCollection_t5138B138B96BD1F88FBA9549B659FE6FCB3F5A0A  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection::_dictionary
	Dictionary_2_t377C2B6CAA20982B0AC7A180E3800172E88C8BDE* ____dictionary_0;
};

// System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.TerrainUtils.TerrainTileCoord,System.Object>
struct KeyCollection_t8A862CFF968D9AAD432E0AFA29DECB342BF06F59  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection::_dictionary
	Dictionary_2_t22B5EE7684537D7D143E6F6FCDC4C58B5D53F68F* ____dictionary_0;
};

// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.UInt32>
struct ValueCollection_tF9BCC1C418D000EF64E21430DC20F900474B0F7D  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection::_dictionary
	Dictionary_2_tA9CFEFF33EC9A214A3FA9A889B9D8EAE95A49902* ____dictionary_0;
};

// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,UnityEngine.Vector2>
struct ValueCollection_t0F3CDE51F86239622C464290CE413781AC13CA62  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection::_dictionary
	Dictionary_2_t41479D9F29C6C1BC07FC7F8D3DD313D8A9A419E1* ____dictionary_0;
};

// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,Oculus.Interaction.PoseDetection.JointRotationActiveState/JointRotationFeatureState>
struct ValueCollection_t2EA6D714E0CF6D3E51B8FFE1037F5F0A91CB10F6  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection::_dictionary
	Dictionary_2_tB21E9CF3B85CA9CAE5D23FD25B351F538B448F51* ____dictionary_0;
};

// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,Oculus.Interaction.PoseDetection.JointVelocityActiveState/JointVelocityFeatureState>
struct ValueCollection_tB0679A5B8704616B8B82BA28682959BC3295A37F  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection::_dictionary
	Dictionary_2_t572F5C2854D3453A19F550C26C592FBCEEF1BEF8* ____dictionary_0;
};

// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,OVRPassthroughLayer/PassthroughMeshInstance>
struct ValueCollection_t2217D10193E11B6B505B07C802B6CE706A42464E  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection::_dictionary
	Dictionary_2_tEF99863F098CBEDBDF416E45D42452A1BD2A32BC* ____dictionary_0;
};

// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,UnityEngine.UIElements.StyleComplexSelector/PseudoStateData>
struct ValueCollection_t6F9658BF91E1BD2BEAED9D1C88FD4A3C255097C5  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection::_dictionary
	Dictionary_2_t377C2B6CAA20982B0AC7A180E3800172E88C8BDE* ____dictionary_0;
};

// System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.TerrainUtils.TerrainTileCoord,System.Object>
struct ValueCollection_t0CA15D727691297C05CD9DFAFFEF94D100E53EEA  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection::_dictionary
	Dictionary_2_t22B5EE7684537D7D143E6F6FCDC4C58B5D53F68F* ____dictionary_0;
};
struct Il2CppArrayBounds;

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37  : public RuntimeObject
{
	// System.String[] System.Runtime.Serialization.SerializationInfo::m_members
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___m_members_3;
	// System.Object[] System.Runtime.Serialization.SerializationInfo::m_data
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_data_4;
	// System.Type[] System.Runtime.Serialization.SerializationInfo::m_types
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___m_types_5;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Runtime.Serialization.SerializationInfo::m_nameToIndex
	Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* ___m_nameToIndex_6;
	// System.Int32 System.Runtime.Serialization.SerializationInfo::m_currMember
	int32_t ___m_currMember_7;
	// System.Runtime.Serialization.IFormatterConverter System.Runtime.Serialization.SerializationInfo::m_converter
	RuntimeObject* ___m_converter_8;
	// System.String System.Runtime.Serialization.SerializationInfo::m_fullTypeName
	String_t* ___m_fullTypeName_9;
	// System.String System.Runtime.Serialization.SerializationInfo::m_assemName
	String_t* ___m_assemName_10;
	// System.Type System.Runtime.Serialization.SerializationInfo::objectType
	Type_t* ___objectType_11;
	// System.Boolean System.Runtime.Serialization.SerializationInfo::isFullTypeNameSetExplicit
	bool ___isFullTypeNameSetExplicit_12;
	// System.Boolean System.Runtime.Serialization.SerializationInfo::isAssemblyNameSetExplicit
	bool ___isAssemblyNameSetExplicit_13;
	// System.Boolean System.Runtime.Serialization.SerializationInfo::requireSameTokenInPartialTrust
	bool ___requireSameTokenInPartialTrust_14;
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

// System.Collections.Generic.Dictionary`2/Entry<System.Object,System.UInt32>
struct Entry_tC2C8EF34432BD0CDF0164C3590A242BCE9864A56 
{
	// System.Int32 System.Collections.Generic.Dictionary`2/Entry::hashCode
	int32_t ___hashCode_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Entry::next
	int32_t ___next_1;
	// TKey System.Collections.Generic.Dictionary`2/Entry::key
	RuntimeObject* ___key_2;
	// TValue System.Collections.Generic.Dictionary`2/Entry::value
	uint32_t ___value_3;
};

// System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>
struct KeyValuePair_2_t960579556437B99440AF144C7232735A5D4DA864 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	uint32_t ___value_1;
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

// System.Collections.DictionaryEntry
struct DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB 
{
	// System.Object System.Collections.DictionaryEntry::_key
	RuntimeObject* ____key_0;
	// System.Object System.Collections.DictionaryEntry::_value
	RuntimeObject* ____value_1;
};
// Native definition for P/Invoke marshalling of System.Collections.DictionaryEntry
struct DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_marshaled_pinvoke
{
	Il2CppIUnknown* ____key_0;
	Il2CppIUnknown* ____value_1;
};
// Native definition for COM marshalling of System.Collections.DictionaryEntry
struct DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_marshaled_com
{
	Il2CppIUnknown* ____key_0;
	Il2CppIUnknown* ____value_1;
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

// System.Runtime.Serialization.StreamingContext
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 
{
	// System.Object System.Runtime.Serialization.StreamingContext::m_additionalContext
	RuntimeObject* ___m_additionalContext_0;
	// System.Runtime.Serialization.StreamingContextStates System.Runtime.Serialization.StreamingContext::m_state
	int32_t ___m_state_1;
};
// Native definition for P/Invoke marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677_marshaled_pinvoke
{
	Il2CppIUnknown* ___m_additionalContext_0;
	int32_t ___m_state_1;
};
// Native definition for COM marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677_marshaled_com
{
	Il2CppIUnknown* ___m_additionalContext_0;
	int32_t ___m_state_1;
};

// UnityEngine.TerrainUtils.TerrainTileCoord
struct TerrainTileCoord_t2181DDF40A8A428A84817957CB7FB19A314F4F09 
{
	// System.Int32 UnityEngine.TerrainUtils.TerrainTileCoord::tileX
	int32_t ___tileX_0;
	// System.Int32 UnityEngine.TerrainUtils.TerrainTileCoord::tileZ
	int32_t ___tileZ_1;
};

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
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

// OVRPassthroughLayer/PassthroughMeshInstance
struct PassthroughMeshInstance_tC15BBC616D213426B55C4E59C74175581D2EFFDE 
{
	// System.UInt64 OVRPassthroughLayer/PassthroughMeshInstance::meshHandle
	uint64_t ___meshHandle_0;
	// System.UInt64 OVRPassthroughLayer/PassthroughMeshInstance::instanceHandle
	uint64_t ___instanceHandle_1;
	// System.Boolean OVRPassthroughLayer/PassthroughMeshInstance::updateTransform
	bool ___updateTransform_2;
};
// Native definition for P/Invoke marshalling of OVRPassthroughLayer/PassthroughMeshInstance
struct PassthroughMeshInstance_tC15BBC616D213426B55C4E59C74175581D2EFFDE_marshaled_pinvoke
{
	uint64_t ___meshHandle_0;
	uint64_t ___instanceHandle_1;
	int32_t ___updateTransform_2;
};
// Native definition for COM marshalling of OVRPassthroughLayer/PassthroughMeshInstance
struct PassthroughMeshInstance_tC15BBC616D213426B55C4E59C74175581D2EFFDE_marshaled_com
{
	uint64_t ___meshHandle_0;
	uint64_t ___instanceHandle_1;
	int32_t ___updateTransform_2;
};

// UnityEngine.UIElements.StyleComplexSelector/PseudoStateData
struct PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8 
{
	// UnityEngine.UIElements.PseudoStates UnityEngine.UIElements.StyleComplexSelector/PseudoStateData::state
	int32_t ___state_0;
	// System.Boolean UnityEngine.UIElements.StyleComplexSelector/PseudoStateData::negate
	bool ___negate_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.UIElements.StyleComplexSelector/PseudoStateData
struct PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8_marshaled_pinvoke
{
	int32_t ___state_0;
	int32_t ___negate_1;
};
// Native definition for COM marshalling of UnityEngine.UIElements.StyleComplexSelector/PseudoStateData
struct PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8_marshaled_com
{
	int32_t ___state_0;
	int32_t ___negate_1;
};

// System.Collections.Generic.Dictionary`2/Entry<System.Object,UnityEngine.Vector2>
struct Entry_tDA878B789C830BB6D853BCCA94EC9A56473F9192 
{
	// System.Int32 System.Collections.Generic.Dictionary`2/Entry::hashCode
	int32_t ___hashCode_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Entry::next
	int32_t ___next_1;
	// TKey System.Collections.Generic.Dictionary`2/Entry::key
	RuntimeObject* ___key_2;
	// TValue System.Collections.Generic.Dictionary`2/Entry::value
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value_3;
};

// System.Collections.Generic.Dictionary`2/Entry<System.Object,OVRPassthroughLayer/PassthroughMeshInstance>
struct Entry_t6CF4D930A0F94DDB4827D8C218B6316FF9327A8F 
{
	// System.Int32 System.Collections.Generic.Dictionary`2/Entry::hashCode
	int32_t ___hashCode_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Entry::next
	int32_t ___next_1;
	// TKey System.Collections.Generic.Dictionary`2/Entry::key
	RuntimeObject* ___key_2;
	// TValue System.Collections.Generic.Dictionary`2/Entry::value
	PassthroughMeshInstance_tC15BBC616D213426B55C4E59C74175581D2EFFDE ___value_3;
};

// System.Collections.Generic.Dictionary`2/Entry<System.Object,UnityEngine.UIElements.StyleComplexSelector/PseudoStateData>
struct Entry_t7570C0657D5A1E8127DA80AE9CF398FAE7F58164 
{
	// System.Int32 System.Collections.Generic.Dictionary`2/Entry::hashCode
	int32_t ___hashCode_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Entry::next
	int32_t ___next_1;
	// TKey System.Collections.Generic.Dictionary`2/Entry::key
	RuntimeObject* ___key_2;
	// TValue System.Collections.Generic.Dictionary`2/Entry::value
	PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8 ___value_3;
};

// System.Collections.Generic.Dictionary`2/Entry<UnityEngine.TerrainUtils.TerrainTileCoord,System.Object>
struct Entry_tC6604B503225E2D191CE25713A68DA2A5228CA1C 
{
	// System.Int32 System.Collections.Generic.Dictionary`2/Entry::hashCode
	int32_t ___hashCode_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Entry::next
	int32_t ___next_1;
	// TKey System.Collections.Generic.Dictionary`2/Entry::key
	TerrainTileCoord_t2181DDF40A8A428A84817957CB7FB19A314F4F09 ___key_2;
	// TValue System.Collections.Generic.Dictionary`2/Entry::value
	RuntimeObject* ___value_3;
};

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.UInt32>
struct Enumerator_t3B89D8847C267697DBDD0903E1C0989F9FB24E9B 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_dictionary
	Dictionary_2_tA9CFEFF33EC9A214A3FA9A889B9D8EAE95A49902* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_index
	int32_t ____index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_current
	KeyValuePair_2_t960579556437B99440AF144C7232735A5D4DA864 ____current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_getEnumeratorRetType
	int32_t ____getEnumeratorRetType_4;
};

// System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.Vector2>
struct KeyValuePair_2_t5FCDCECBAC4615B1D6C16612A028BBBF368C51D4 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value_1;
};

// System.Collections.Generic.KeyValuePair`2<System.Object,OVRPassthroughLayer/PassthroughMeshInstance>
struct KeyValuePair_2_tC7EE4E7E2715DB2FD352264EB3FAF4B38BBF15DF 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	PassthroughMeshInstance_tC15BBC616D213426B55C4E59C74175581D2EFFDE ___value_1;
};

// System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.UIElements.StyleComplexSelector/PseudoStateData>
struct KeyValuePair_2_t852F23A435B740B3D14D3CE08B14FFD4690334E7 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8 ___value_1;
};

// System.Collections.Generic.KeyValuePair`2<UnityEngine.TerrainUtils.TerrainTileCoord,System.Object>
struct KeyValuePair_2_t8760984FFCA6E11154C918347EA4C7CFB2D0B8CE 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	TerrainTileCoord_t2181DDF40A8A428A84817957CB7FB19A314F4F09 ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject* ___value_1;
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

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// Oculus.Interaction.PoseDetection.JointRotationActiveState/JointRotationFeatureState
struct JointRotationFeatureState_t293BD5640481C36FBD0E01AB30998C1D1C1D5ADE 
{
	// UnityEngine.Vector3 Oculus.Interaction.PoseDetection.JointRotationActiveState/JointRotationFeatureState::TargetAxis
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___TargetAxis_0;
	// System.Single Oculus.Interaction.PoseDetection.JointRotationActiveState/JointRotationFeatureState::Amount
	float ___Amount_1;
};

// Oculus.Interaction.PoseDetection.JointVelocityActiveState/JointVelocityFeatureState
struct JointVelocityFeatureState_tA17C290CDFB76352D9CEFC3E7B790E0CAEF22105 
{
	// UnityEngine.Vector3 Oculus.Interaction.PoseDetection.JointVelocityActiveState/JointVelocityFeatureState::TargetVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___TargetVector_0;
	// System.Single Oculus.Interaction.PoseDetection.JointVelocityActiveState/JointVelocityFeatureState::Amount
	float ___Amount_1;
};

// System.Collections.Generic.Dictionary`2/Entry<System.Object,Oculus.Interaction.PoseDetection.JointRotationActiveState/JointRotationFeatureState>
struct Entry_tFEAB9282B1FC12CB03875EF01DEC16F52E16A69A 
{
	// System.Int32 System.Collections.Generic.Dictionary`2/Entry::hashCode
	int32_t ___hashCode_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Entry::next
	int32_t ___next_1;
	// TKey System.Collections.Generic.Dictionary`2/Entry::key
	RuntimeObject* ___key_2;
	// TValue System.Collections.Generic.Dictionary`2/Entry::value
	JointRotationFeatureState_t293BD5640481C36FBD0E01AB30998C1D1C1D5ADE ___value_3;
};

// System.Collections.Generic.Dictionary`2/Entry<System.Object,Oculus.Interaction.PoseDetection.JointVelocityActiveState/JointVelocityFeatureState>
struct Entry_t293FC4E544C4ED33E35ABE29347846DD2D5516C5 
{
	// System.Int32 System.Collections.Generic.Dictionary`2/Entry::hashCode
	int32_t ___hashCode_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Entry::next
	int32_t ___next_1;
	// TKey System.Collections.Generic.Dictionary`2/Entry::key
	RuntimeObject* ___key_2;
	// TValue System.Collections.Generic.Dictionary`2/Entry::value
	JointVelocityFeatureState_tA17C290CDFB76352D9CEFC3E7B790E0CAEF22105 ___value_3;
};

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.Vector2>
struct Enumerator_t052E91D9E9A063D03D7D70EDB7407F42CEDDBD48 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_dictionary
	Dictionary_2_t41479D9F29C6C1BC07FC7F8D3DD313D8A9A419E1* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_index
	int32_t ____index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_current
	KeyValuePair_2_t5FCDCECBAC4615B1D6C16612A028BBBF368C51D4 ____current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_getEnumeratorRetType
	int32_t ____getEnumeratorRetType_4;
};

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,OVRPassthroughLayer/PassthroughMeshInstance>
struct Enumerator_t295153DF2610B637A0463DEDA52FE7BF360F0113 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_dictionary
	Dictionary_2_tEF99863F098CBEDBDF416E45D42452A1BD2A32BC* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_index
	int32_t ____index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_current
	KeyValuePair_2_tC7EE4E7E2715DB2FD352264EB3FAF4B38BBF15DF ____current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_getEnumeratorRetType
	int32_t ____getEnumeratorRetType_4;
};

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.UIElements.StyleComplexSelector/PseudoStateData>
struct Enumerator_tE506445EC02F2FBF2A0176A4BD4BBFFBCF214672 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_dictionary
	Dictionary_2_t377C2B6CAA20982B0AC7A180E3800172E88C8BDE* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_index
	int32_t ____index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_current
	KeyValuePair_2_t852F23A435B740B3D14D3CE08B14FFD4690334E7 ____current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_getEnumeratorRetType
	int32_t ____getEnumeratorRetType_4;
};

// System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.TerrainUtils.TerrainTileCoord,System.Object>
struct Enumerator_tB06F293668D09F345A54C8C836ABF567B9087FB7 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_dictionary
	Dictionary_2_t22B5EE7684537D7D143E6F6FCDC4C58B5D53F68F* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_index
	int32_t ____index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_current
	KeyValuePair_2_t8760984FFCA6E11154C918347EA4C7CFB2D0B8CE ____current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_getEnumeratorRetType
	int32_t ____getEnumeratorRetType_4;
};

// System.Collections.Generic.KeyValuePair`2<System.Object,Oculus.Interaction.PoseDetection.JointRotationActiveState/JointRotationFeatureState>
struct KeyValuePair_2_t665B386104A382EAC5AF8A124C067F531DE78120 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	JointRotationFeatureState_t293BD5640481C36FBD0E01AB30998C1D1C1D5ADE ___value_1;
};

// System.Collections.Generic.KeyValuePair`2<System.Object,Oculus.Interaction.PoseDetection.JointVelocityActiveState/JointVelocityFeatureState>
struct KeyValuePair_2_t14287996C615F8158516F8E8DB0AC54D578E8246 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	JointVelocityFeatureState_tA17C290CDFB76352D9CEFC3E7B790E0CAEF22105 ___value_1;
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

struct Type_t_StaticFields
{
	// System.Reflection.Binder modreq(System.Runtime.CompilerServices.IsVolatile) System.Type::s_defaultBinder
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder_0;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_1;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes_2;
	// System.Object System.Type::Missing
	RuntimeObject* ___Missing_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase_6;
};

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,Oculus.Interaction.PoseDetection.JointRotationActiveState/JointRotationFeatureState>
struct Enumerator_t84A88C194B63F67CEF824A6B4CE0DC3B5A993008 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_dictionary
	Dictionary_2_tB21E9CF3B85CA9CAE5D23FD25B351F538B448F51* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_index
	int32_t ____index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_current
	KeyValuePair_2_t665B386104A382EAC5AF8A124C067F531DE78120 ____current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_getEnumeratorRetType
	int32_t ____getEnumeratorRetType_4;
};

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,Oculus.Interaction.PoseDetection.JointVelocityActiveState/JointVelocityFeatureState>
struct Enumerator_t8FD3C43B2F6FD8121F33A320EE34ADDF6FD7DF0F 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_dictionary
	Dictionary_2_t572F5C2854D3453A19F550C26C592FBCEEF1BEF8* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_index
	int32_t ____index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_current
	KeyValuePair_2_t14287996C615F8158516F8E8DB0AC54D578E8246 ____current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_getEnumeratorRetType
	int32_t ____getEnumeratorRetType_4;
};

// System.ArrayTypeMismatchException
struct ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.InvalidCastException
struct InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Collections.Generic.Dictionary`2/Entry<System.Object,System.UInt32>[]
struct EntryU5BU5D_tDDCFB52378DF4C6064B3947E47DE072BE041758E  : public RuntimeArray
{
	ALIGN_FIELD (8) Entry_tC2C8EF34432BD0CDF0164C3590A242BCE9864A56 m_Items[1];

	inline Entry_tC2C8EF34432BD0CDF0164C3590A242BCE9864A56 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Entry_tC2C8EF34432BD0CDF0164C3590A242BCE9864A56* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Entry_tC2C8EF34432BD0CDF0164C3590A242BCE9864A56 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key_2), (void*)NULL);
	}
	inline Entry_tC2C8EF34432BD0CDF0164C3590A242BCE9864A56 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Entry_tC2C8EF34432BD0CDF0164C3590A242BCE9864A56* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Entry_tC2C8EF34432BD0CDF0164C3590A242BCE9864A56 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key_2), (void*)NULL);
	}
};
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>[]
struct KeyValuePair_2U5BU5D_tFBE07C34404F8F624202E7C9A32A37AC93DCD171  : public RuntimeArray
{
	ALIGN_FIELD (8) KeyValuePair_2_t960579556437B99440AF144C7232735A5D4DA864 m_Items[1];

	inline KeyValuePair_2_t960579556437B99440AF144C7232735A5D4DA864 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_t960579556437B99440AF144C7232735A5D4DA864* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_t960579556437B99440AF144C7232735A5D4DA864 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key_0), (void*)NULL);
	}
	inline KeyValuePair_2_t960579556437B99440AF144C7232735A5D4DA864 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_t960579556437B99440AF144C7232735A5D4DA864* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_t960579556437B99440AF144C7232735A5D4DA864 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key_0), (void*)NULL);
	}
};
// System.Collections.DictionaryEntry[]
struct DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533  : public RuntimeArray
{
	ALIGN_FIELD (8) DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB m_Items[1];

	inline DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->____key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->____value_1), (void*)NULL);
		#endif
	}
	inline DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->____key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->____value_1), (void*)NULL);
		#endif
	}
};
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Collections.Generic.Dictionary`2/Entry<System.Object,UnityEngine.Vector2>[]
struct EntryU5BU5D_tB701640026CE382655A04D3448D52F314990B3AF  : public RuntimeArray
{
	ALIGN_FIELD (8) Entry_tDA878B789C830BB6D853BCCA94EC9A56473F9192 m_Items[1];

	inline Entry_tDA878B789C830BB6D853BCCA94EC9A56473F9192 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Entry_tDA878B789C830BB6D853BCCA94EC9A56473F9192* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Entry_tDA878B789C830BB6D853BCCA94EC9A56473F9192 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key_2), (void*)NULL);
	}
	inline Entry_tDA878B789C830BB6D853BCCA94EC9A56473F9192 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Entry_tDA878B789C830BB6D853BCCA94EC9A56473F9192* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Entry_tDA878B789C830BB6D853BCCA94EC9A56473F9192 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key_2), (void*)NULL);
	}
};
// System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.Vector2>[]
struct KeyValuePair_2U5BU5D_tD9CA47909C5DBB11E7BBC75787D8858E0668B81F  : public RuntimeArray
{
	ALIGN_FIELD (8) KeyValuePair_2_t5FCDCECBAC4615B1D6C16612A028BBBF368C51D4 m_Items[1];

	inline KeyValuePair_2_t5FCDCECBAC4615B1D6C16612A028BBBF368C51D4 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_t5FCDCECBAC4615B1D6C16612A028BBBF368C51D4* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_t5FCDCECBAC4615B1D6C16612A028BBBF368C51D4 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key_0), (void*)NULL);
	}
	inline KeyValuePair_2_t5FCDCECBAC4615B1D6C16612A028BBBF368C51D4 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_t5FCDCECBAC4615B1D6C16612A028BBBF368C51D4* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_t5FCDCECBAC4615B1D6C16612A028BBBF368C51D4 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key_0), (void*)NULL);
	}
};
// System.Collections.Generic.Dictionary`2/Entry<System.Object,Oculus.Interaction.PoseDetection.JointRotationActiveState/JointRotationFeatureState>[]
struct EntryU5BU5D_t7E16E41EC34A6E7E94750CC3CB11F6B8ECBE6BB5  : public RuntimeArray
{
	ALIGN_FIELD (8) Entry_tFEAB9282B1FC12CB03875EF01DEC16F52E16A69A m_Items[1];

	inline Entry_tFEAB9282B1FC12CB03875EF01DEC16F52E16A69A GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Entry_tFEAB9282B1FC12CB03875EF01DEC16F52E16A69A* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Entry_tFEAB9282B1FC12CB03875EF01DEC16F52E16A69A value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key_2), (void*)NULL);
	}
	inline Entry_tFEAB9282B1FC12CB03875EF01DEC16F52E16A69A GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Entry_tFEAB9282B1FC12CB03875EF01DEC16F52E16A69A* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Entry_tFEAB9282B1FC12CB03875EF01DEC16F52E16A69A value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key_2), (void*)NULL);
	}
};
// System.Collections.Generic.KeyValuePair`2<System.Object,Oculus.Interaction.PoseDetection.JointRotationActiveState/JointRotationFeatureState>[]
struct KeyValuePair_2U5BU5D_tBD10F6DC24C89CDB584693DEC3A9B0A08954D611  : public RuntimeArray
{
	ALIGN_FIELD (8) KeyValuePair_2_t665B386104A382EAC5AF8A124C067F531DE78120 m_Items[1];

	inline KeyValuePair_2_t665B386104A382EAC5AF8A124C067F531DE78120 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_t665B386104A382EAC5AF8A124C067F531DE78120* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_t665B386104A382EAC5AF8A124C067F531DE78120 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key_0), (void*)NULL);
	}
	inline KeyValuePair_2_t665B386104A382EAC5AF8A124C067F531DE78120 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_t665B386104A382EAC5AF8A124C067F531DE78120* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_t665B386104A382EAC5AF8A124C067F531DE78120 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key_0), (void*)NULL);
	}
};
// System.Collections.Generic.Dictionary`2/Entry<System.Object,Oculus.Interaction.PoseDetection.JointVelocityActiveState/JointVelocityFeatureState>[]
struct EntryU5BU5D_t699B149129E0838165C5A43C9C5F0E988EE1EF9A  : public RuntimeArray
{
	ALIGN_FIELD (8) Entry_t293FC4E544C4ED33E35ABE29347846DD2D5516C5 m_Items[1];

	inline Entry_t293FC4E544C4ED33E35ABE29347846DD2D5516C5 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Entry_t293FC4E544C4ED33E35ABE29347846DD2D5516C5* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Entry_t293FC4E544C4ED33E35ABE29347846DD2D5516C5 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key_2), (void*)NULL);
	}
	inline Entry_t293FC4E544C4ED33E35ABE29347846DD2D5516C5 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Entry_t293FC4E544C4ED33E35ABE29347846DD2D5516C5* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Entry_t293FC4E544C4ED33E35ABE29347846DD2D5516C5 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key_2), (void*)NULL);
	}
};
// System.Collections.Generic.KeyValuePair`2<System.Object,Oculus.Interaction.PoseDetection.JointVelocityActiveState/JointVelocityFeatureState>[]
struct KeyValuePair_2U5BU5D_tDEA2BA7360626A115F7CF1B2A42C3102635C4D75  : public RuntimeArray
{
	ALIGN_FIELD (8) KeyValuePair_2_t14287996C615F8158516F8E8DB0AC54D578E8246 m_Items[1];

	inline KeyValuePair_2_t14287996C615F8158516F8E8DB0AC54D578E8246 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_t14287996C615F8158516F8E8DB0AC54D578E8246* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_t14287996C615F8158516F8E8DB0AC54D578E8246 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key_0), (void*)NULL);
	}
	inline KeyValuePair_2_t14287996C615F8158516F8E8DB0AC54D578E8246 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_t14287996C615F8158516F8E8DB0AC54D578E8246* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_t14287996C615F8158516F8E8DB0AC54D578E8246 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key_0), (void*)NULL);
	}
};
// System.Collections.Generic.Dictionary`2/Entry<System.Object,OVRPassthroughLayer/PassthroughMeshInstance>[]
struct EntryU5BU5D_t96093E698ECF890AFC3EBA8FD35D922C55DEA886  : public RuntimeArray
{
	ALIGN_FIELD (8) Entry_t6CF4D930A0F94DDB4827D8C218B6316FF9327A8F m_Items[1];

	inline Entry_t6CF4D930A0F94DDB4827D8C218B6316FF9327A8F GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Entry_t6CF4D930A0F94DDB4827D8C218B6316FF9327A8F* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Entry_t6CF4D930A0F94DDB4827D8C218B6316FF9327A8F value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key_2), (void*)NULL);
	}
	inline Entry_t6CF4D930A0F94DDB4827D8C218B6316FF9327A8F GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Entry_t6CF4D930A0F94DDB4827D8C218B6316FF9327A8F* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Entry_t6CF4D930A0F94DDB4827D8C218B6316FF9327A8F value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key_2), (void*)NULL);
	}
};
// System.Collections.Generic.KeyValuePair`2<System.Object,OVRPassthroughLayer/PassthroughMeshInstance>[]
struct KeyValuePair_2U5BU5D_t27B5F90D6614A8F5D75BD15E0BA488F4FF7A6786  : public RuntimeArray
{
	ALIGN_FIELD (8) KeyValuePair_2_tC7EE4E7E2715DB2FD352264EB3FAF4B38BBF15DF m_Items[1];

	inline KeyValuePair_2_tC7EE4E7E2715DB2FD352264EB3FAF4B38BBF15DF GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_tC7EE4E7E2715DB2FD352264EB3FAF4B38BBF15DF* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_tC7EE4E7E2715DB2FD352264EB3FAF4B38BBF15DF value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key_0), (void*)NULL);
	}
	inline KeyValuePair_2_tC7EE4E7E2715DB2FD352264EB3FAF4B38BBF15DF GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_tC7EE4E7E2715DB2FD352264EB3FAF4B38BBF15DF* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_tC7EE4E7E2715DB2FD352264EB3FAF4B38BBF15DF value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key_0), (void*)NULL);
	}
};
// System.Collections.Generic.Dictionary`2/Entry<System.Object,UnityEngine.UIElements.StyleComplexSelector/PseudoStateData>[]
struct EntryU5BU5D_t68CA0D1367AB2807A569CCED387E01680CB52ED7  : public RuntimeArray
{
	ALIGN_FIELD (8) Entry_t7570C0657D5A1E8127DA80AE9CF398FAE7F58164 m_Items[1];

	inline Entry_t7570C0657D5A1E8127DA80AE9CF398FAE7F58164 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Entry_t7570C0657D5A1E8127DA80AE9CF398FAE7F58164* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Entry_t7570C0657D5A1E8127DA80AE9CF398FAE7F58164 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key_2), (void*)NULL);
	}
	inline Entry_t7570C0657D5A1E8127DA80AE9CF398FAE7F58164 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Entry_t7570C0657D5A1E8127DA80AE9CF398FAE7F58164* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Entry_t7570C0657D5A1E8127DA80AE9CF398FAE7F58164 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key_2), (void*)NULL);
	}
};
// System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.UIElements.StyleComplexSelector/PseudoStateData>[]
struct KeyValuePair_2U5BU5D_t889086771E46EA552EA0DA1AE810C66A494D9F78  : public RuntimeArray
{
	ALIGN_FIELD (8) KeyValuePair_2_t852F23A435B740B3D14D3CE08B14FFD4690334E7 m_Items[1];

	inline KeyValuePair_2_t852F23A435B740B3D14D3CE08B14FFD4690334E7 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_t852F23A435B740B3D14D3CE08B14FFD4690334E7* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_t852F23A435B740B3D14D3CE08B14FFD4690334E7 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key_0), (void*)NULL);
	}
	inline KeyValuePair_2_t852F23A435B740B3D14D3CE08B14FFD4690334E7 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_t852F23A435B740B3D14D3CE08B14FFD4690334E7* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_t852F23A435B740B3D14D3CE08B14FFD4690334E7 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key_0), (void*)NULL);
	}
};
// System.Collections.Generic.Dictionary`2/Entry<UnityEngine.TerrainUtils.TerrainTileCoord,System.Object>[]
struct EntryU5BU5D_t5CFAFF65A005CA040F5C92D1AFEF51CB84CECE56  : public RuntimeArray
{
	ALIGN_FIELD (8) Entry_tC6604B503225E2D191CE25713A68DA2A5228CA1C m_Items[1];

	inline Entry_tC6604B503225E2D191CE25713A68DA2A5228CA1C GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Entry_tC6604B503225E2D191CE25713A68DA2A5228CA1C* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Entry_tC6604B503225E2D191CE25713A68DA2A5228CA1C value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value_3), (void*)NULL);
	}
	inline Entry_tC6604B503225E2D191CE25713A68DA2A5228CA1C GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Entry_tC6604B503225E2D191CE25713A68DA2A5228CA1C* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Entry_tC6604B503225E2D191CE25713A68DA2A5228CA1C value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value_3), (void*)NULL);
	}
};
// System.Collections.Generic.KeyValuePair`2<UnityEngine.TerrainUtils.TerrainTileCoord,System.Object>[]
struct KeyValuePair_2U5BU5D_t697102CA825793B9F049EE7FB6E4FA6CA679E0B3  : public RuntimeArray
{
	ALIGN_FIELD (8) KeyValuePair_2_t8760984FFCA6E11154C918347EA4C7CFB2D0B8CE m_Items[1];

	inline KeyValuePair_2_t8760984FFCA6E11154C918347EA4C7CFB2D0B8CE GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_t8760984FFCA6E11154C918347EA4C7CFB2D0B8CE* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_t8760984FFCA6E11154C918347EA4C7CFB2D0B8CE value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value_1), (void*)NULL);
	}
	inline KeyValuePair_2_t8760984FFCA6E11154C918347EA4C7CFB2D0B8CE GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_t8760984FFCA6E11154C918347EA4C7CFB2D0B8CE* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_t8760984FFCA6E11154C918347EA4C7CFB2D0B8CE value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value_1), (void*)NULL);
	}
};


// TKey System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Key_m580D4010966F948701F9955EB40BBD5AA9964565_gshared_inline (KeyValuePair_2_t960579556437B99440AF144C7232735A5D4DA864* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t KeyValuePair_2_get_Value_mAFD58B7195CA80B3A58A19185A2B2A4A70B2A726_gshared_inline (KeyValuePair_2_t960579556437B99440AF144C7232735A5D4DA864* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Object>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConditionalWeakTable_2_Add_mA45BB747BEE445F5A6D5ABC32B2070CAF5E9BE44_gshared (ConditionalWeakTable_2_t87BE12792DC61EC9AE17609EC1ACA0671B3F5605* __this, RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>::.ctor(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_m94200303A1DD6A660835074EF5D7A9676703AF93_gshared (KeyValuePair_2_t960579556437B99440AF144C7232735A5D4DA864* __this, RuntimeObject* ___key0, uint32_t ___value1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.UInt32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m159E85F401C16F937369C2BAEB2965E01A65C54F_gshared (Enumerator_t3B89D8847C267697DBDD0903E1C0989F9FB24E9B* __this, Dictionary_2_tA9CFEFF33EC9A214A3FA9A889B9D8EAE95A49902* ___dictionary0, int32_t ___getEnumeratorRetType1, const RuntimeMethod* method) ;
// System.Boolean System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Object>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConditionalWeakTable_2_TryGetValue_mA6697354DA1D2A76999FFDCC072C62AC5C364124_gshared (ConditionalWeakTable_2_t87BE12792DC61EC9AE17609EC1ACA0671B3F5605* __this, RuntimeObject* ___key0, RuntimeObject** ___value1, const RuntimeMethod* method) ;
// System.Boolean System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Object>::Remove(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConditionalWeakTable_2_Remove_m51E45FAFE5B1D6E9FDA123477422367F1F215DE6_gshared (ConditionalWeakTable_2_t87BE12792DC61EC9AE17609EC1ACA0671B3F5605* __this, RuntimeObject* ___key0, const RuntimeMethod* method) ;
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.Vector2>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Key_mC2F74F2C7913473C536D80C56A49C907525AA762_gshared_inline (KeyValuePair_2_t5FCDCECBAC4615B1D6C16612A028BBBF368C51D4* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.Vector2>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 KeyValuePair_2_get_Value_m8C9B6CC4F0B407E1AE61FC1F558FE1920BE127B0_gshared_inline (KeyValuePair_2_t5FCDCECBAC4615B1D6C16612A028BBBF368C51D4* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.Vector2>::.ctor(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_m4727158B54F9EB5857F41AA2AA93AF1815148077_gshared (KeyValuePair_2_t5FCDCECBAC4615B1D6C16612A028BBBF368C51D4* __this, RuntimeObject* ___key0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.Vector2>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m3DA0996D376CC3B5563A4EA329A46E2F1B91E38C_gshared (Enumerator_t052E91D9E9A063D03D7D70EDB7407F42CEDDBD48* __this, Dictionary_2_t41479D9F29C6C1BC07FC7F8D3DD313D8A9A419E1* ___dictionary0, int32_t ___getEnumeratorRetType1, const RuntimeMethod* method) ;
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,Oculus.Interaction.PoseDetection.JointRotationActiveState/JointRotationFeatureState>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Key_mA53994A88775FF1BE799F3FC3B7FC2484A7B83E6_gshared_inline (KeyValuePair_2_t665B386104A382EAC5AF8A124C067F531DE78120* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,Oculus.Interaction.PoseDetection.JointRotationActiveState/JointRotationFeatureState>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR JointRotationFeatureState_t293BD5640481C36FBD0E01AB30998C1D1C1D5ADE KeyValuePair_2_get_Value_m7B6AD86F22659AD0AC092AF5EC11E4C137517524_gshared_inline (KeyValuePair_2_t665B386104A382EAC5AF8A124C067F531DE78120* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,Oculus.Interaction.PoseDetection.JointRotationActiveState/JointRotationFeatureState>::.ctor(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_m39238B49A4DAE8C920EC0FC67F04D633DB08A75A_gshared (KeyValuePair_2_t665B386104A382EAC5AF8A124C067F531DE78120* __this, RuntimeObject* ___key0, JointRotationFeatureState_t293BD5640481C36FBD0E01AB30998C1D1C1D5ADE ___value1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,Oculus.Interaction.PoseDetection.JointRotationActiveState/JointRotationFeatureState>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m8C10F6C561DF44AA44B8F0E255A4F561B850C378_gshared (Enumerator_t84A88C194B63F67CEF824A6B4CE0DC3B5A993008* __this, Dictionary_2_tB21E9CF3B85CA9CAE5D23FD25B351F538B448F51* ___dictionary0, int32_t ___getEnumeratorRetType1, const RuntimeMethod* method) ;
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,Oculus.Interaction.PoseDetection.JointVelocityActiveState/JointVelocityFeatureState>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Key_m171B988FCFBB4CE7A964046A114247C8F4C611D6_gshared_inline (KeyValuePair_2_t14287996C615F8158516F8E8DB0AC54D578E8246* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,Oculus.Interaction.PoseDetection.JointVelocityActiveState/JointVelocityFeatureState>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR JointVelocityFeatureState_tA17C290CDFB76352D9CEFC3E7B790E0CAEF22105 KeyValuePair_2_get_Value_m29EF30BFC916771A4C2E50A55E1E6746E64A13B1_gshared_inline (KeyValuePair_2_t14287996C615F8158516F8E8DB0AC54D578E8246* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,Oculus.Interaction.PoseDetection.JointVelocityActiveState/JointVelocityFeatureState>::.ctor(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_mED95E75130763D3A24266DD0EF677FCA01C720D9_gshared (KeyValuePair_2_t14287996C615F8158516F8E8DB0AC54D578E8246* __this, RuntimeObject* ___key0, JointVelocityFeatureState_tA17C290CDFB76352D9CEFC3E7B790E0CAEF22105 ___value1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,Oculus.Interaction.PoseDetection.JointVelocityActiveState/JointVelocityFeatureState>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m38A45AF0B3DB2396892BDB7D284F330AC7CC6854_gshared (Enumerator_t8FD3C43B2F6FD8121F33A320EE34ADDF6FD7DF0F* __this, Dictionary_2_t572F5C2854D3453A19F550C26C592FBCEEF1BEF8* ___dictionary0, int32_t ___getEnumeratorRetType1, const RuntimeMethod* method) ;
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,OVRPassthroughLayer/PassthroughMeshInstance>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Key_mF8D0149496A6E9F97AA843ED176E84E689B58C92_gshared_inline (KeyValuePair_2_tC7EE4E7E2715DB2FD352264EB3FAF4B38BBF15DF* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,OVRPassthroughLayer/PassthroughMeshInstance>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR PassthroughMeshInstance_tC15BBC616D213426B55C4E59C74175581D2EFFDE KeyValuePair_2_get_Value_mEDECE70FEBCB73C3191AAB4215C0FC3505C3D06A_gshared_inline (KeyValuePair_2_tC7EE4E7E2715DB2FD352264EB3FAF4B38BBF15DF* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,OVRPassthroughLayer/PassthroughMeshInstance>::.ctor(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_mFB34CAD11D62DC93018E1826B3531AA2F4267402_gshared (KeyValuePair_2_tC7EE4E7E2715DB2FD352264EB3FAF4B38BBF15DF* __this, RuntimeObject* ___key0, PassthroughMeshInstance_tC15BBC616D213426B55C4E59C74175581D2EFFDE ___value1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,OVRPassthroughLayer/PassthroughMeshInstance>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m6CCFF0E2A0A9B3066DA75F3E35632527FBD59394_gshared (Enumerator_t295153DF2610B637A0463DEDA52FE7BF360F0113* __this, Dictionary_2_tEF99863F098CBEDBDF416E45D42452A1BD2A32BC* ___dictionary0, int32_t ___getEnumeratorRetType1, const RuntimeMethod* method) ;
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.UIElements.StyleComplexSelector/PseudoStateData>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Key_mBE72C27BFF193B87C192E8F269820D2296B6E172_gshared_inline (KeyValuePair_2_t852F23A435B740B3D14D3CE08B14FFD4690334E7* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.UIElements.StyleComplexSelector/PseudoStateData>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8 KeyValuePair_2_get_Value_m4436FB8460A00616072675A6DC8EF35E3C57021E_gshared_inline (KeyValuePair_2_t852F23A435B740B3D14D3CE08B14FFD4690334E7* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.UIElements.StyleComplexSelector/PseudoStateData>::.ctor(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_m899F53F40BCAA19E77F5E9A552CAA43D134B9CC9_gshared (KeyValuePair_2_t852F23A435B740B3D14D3CE08B14FFD4690334E7* __this, RuntimeObject* ___key0, PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8 ___value1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.UIElements.StyleComplexSelector/PseudoStateData>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_mEB026458339B7ECD4D5E558C57D012096E15822B_gshared (Enumerator_tE506445EC02F2FBF2A0176A4BD4BBFFBCF214672* __this, Dictionary_2_t377C2B6CAA20982B0AC7A180E3800172E88C8BDE* ___dictionary0, int32_t ___getEnumeratorRetType1, const RuntimeMethod* method) ;
// TKey System.Collections.Generic.KeyValuePair`2<UnityEngine.TerrainUtils.TerrainTileCoord,System.Object>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TerrainTileCoord_t2181DDF40A8A428A84817957CB7FB19A314F4F09 KeyValuePair_2_get_Key_mE27FF2218D103DBF58A36186AA62595EC4079388_gshared_inline (KeyValuePair_2_t8760984FFCA6E11154C918347EA4C7CFB2D0B8CE* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.KeyValuePair`2<UnityEngine.TerrainUtils.TerrainTileCoord,System.Object>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_m64463C12912AD06A73305FF2EEF67678D7281515_gshared_inline (KeyValuePair_2_t8760984FFCA6E11154C918347EA4C7CFB2D0B8CE* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.KeyValuePair`2<UnityEngine.TerrainUtils.TerrainTileCoord,System.Object>::.ctor(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_m384510E0549D9C5343A67620C046FC8791C82BAB_gshared (KeyValuePair_2_t8760984FFCA6E11154C918347EA4C7CFB2D0B8CE* __this, TerrainTileCoord_t2181DDF40A8A428A84817957CB7FB19A314F4F09 ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.TerrainUtils.TerrainTileCoord,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_mA03972C198139BFCEADE1562F82725B6A9BE6963_gshared (Enumerator_tB06F293668D09F345A54C8C836ABF567B9087FB7* __this, Dictionary_2_t22B5EE7684537D7D143E6F6FCDC4C58B5D53F68F* ___dictionary0, int32_t ___getEnumeratorRetType1, const RuntimeMethod* method) ;

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException(System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97 (int32_t ___argument0, const RuntimeMethod* method) ;
// System.Void System.ThrowHelper::ThrowArgumentNullException(System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC (int32_t ___argument0, const RuntimeMethod* method) ;
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___handle0, const RuntimeMethod* method) ;
// System.Boolean System.Type::op_Equality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC (Type_t* ___left0, Type_t* ___right1, const RuntimeMethod* method) ;
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>::get_Key()
inline RuntimeObject* KeyValuePair_2_get_Key_m580D4010966F948701F9955EB40BBD5AA9964565_inline (KeyValuePair_2_t960579556437B99440AF144C7232735A5D4DA864* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (KeyValuePair_2_t960579556437B99440AF144C7232735A5D4DA864*, const RuntimeMethod*))KeyValuePair_2_get_Key_m580D4010966F948701F9955EB40BBD5AA9964565_gshared_inline)(__this, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>::get_Value()
inline uint32_t KeyValuePair_2_get_Value_mAFD58B7195CA80B3A58A19185A2B2A4A70B2A726_inline (KeyValuePair_2_t960579556437B99440AF144C7232735A5D4DA864* __this, const RuntimeMethod* method)
{
	return ((  uint32_t (*) (KeyValuePair_2_t960579556437B99440AF144C7232735A5D4DA864*, const RuntimeMethod*))KeyValuePair_2_get_Value_mAFD58B7195CA80B3A58A19185A2B2A4A70B2A726_gshared_inline)(__this, method);
}
// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Runtime.Serialization.SerializationInfo> System.Collections.HashHelpers::get_SerializationInfoTable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F (const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Runtime.Serialization.SerializationInfo>::Add(TKey,TValue)
inline void ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7 (ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* __this, RuntimeObject* ___key0, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___value1, const RuntimeMethod* method)
{
	((  void (*) (ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858*, RuntimeObject*, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37*, const RuntimeMethod*))ConditionalWeakTable_2_Add_mA45BB747BEE445F5A6D5ABC32B2070CAF5E9BE44_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.ThrowHelper::ThrowKeyNotFoundException(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowKeyNotFoundException_m6A17735FA486AD43F2488DE39B755AC60BC99CE7 (RuntimeObject* ___key0, const RuntimeMethod* method) ;
// System.Void System.Array::Clear(System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB (RuntimeArray* ___array0, int32_t ___index1, int32_t ___length2, const RuntimeMethod* method) ;
// System.Void System.ThrowHelper::ThrowIndexArgumentOutOfRange_NeedNonNegNumException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F (const RuntimeMethod* method) ;
// System.Void System.ThrowHelper::ThrowArgumentException(System.ExceptionResource)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA (int32_t ___resource0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>::.ctor(TKey,TValue)
inline void KeyValuePair_2__ctor_m94200303A1DD6A660835074EF5D7A9676703AF93 (KeyValuePair_2_t960579556437B99440AF144C7232735A5D4DA864* __this, RuntimeObject* ___key0, uint32_t ___value1, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2_t960579556437B99440AF144C7232735A5D4DA864*, RuntimeObject*, uint32_t, const RuntimeMethod*))KeyValuePair_2__ctor_m94200303A1DD6A660835074EF5D7A9676703AF93_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.UInt32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>,System.Int32)
inline void Enumerator__ctor_m159E85F401C16F937369C2BAEB2965E01A65C54F (Enumerator_t3B89D8847C267697DBDD0903E1C0989F9FB24E9B* __this, Dictionary_2_tA9CFEFF33EC9A214A3FA9A889B9D8EAE95A49902* ___dictionary0, int32_t ___getEnumeratorRetType1, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t3B89D8847C267697DBDD0903E1C0989F9FB24E9B*, Dictionary_2_tA9CFEFF33EC9A214A3FA9A889B9D8EAE95A49902*, int32_t, const RuntimeMethod*))Enumerator__ctor_m159E85F401C16F937369C2BAEB2965E01A65C54F_gshared)(__this, ___dictionary0, ___getEnumeratorRetType1, method);
}
// System.Void System.Runtime.Serialization.SerializationInfo::AddValue(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4 (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* __this, String_t* ___name0, int32_t ___value1, const RuntimeMethod* method) ;
// System.Void System.Runtime.Serialization.SerializationInfo::AddValue(System.String,System.Object,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199 (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* __this, String_t* ___name0, RuntimeObject* ___value1, Type_t* ___type2, const RuntimeMethod* method) ;
// System.Void System.ThrowHelper::ThrowInvalidOperationException_ConcurrentOperationsNotSupported()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0 (const RuntimeMethod* method) ;
// System.Int32 System.Collections.HashHelpers::GetPrime(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472 (int32_t ___min0, const RuntimeMethod* method) ;
// System.Void System.ThrowHelper::ThrowAddingDuplicateWithKeyArgumentException(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5 (RuntimeObject* ___key0, const RuntimeMethod* method) ;
// System.Boolean System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Runtime.Serialization.SerializationInfo>::TryGetValue(TKey,TValue&)
inline bool ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F (ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* __this, RuntimeObject* ___key0, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858*, RuntimeObject*, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37**, const RuntimeMethod*))ConditionalWeakTable_2_TryGetValue_mA6697354DA1D2A76999FFDCC072C62AC5C364124_gshared)(__this, ___key0, ___value1, method);
}
// System.Int32 System.Runtime.Serialization.SerializationInfo::GetInt32(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5 (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.Object System.Runtime.Serialization.SerializationInfo::GetValue(System.String,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034 (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* __this, String_t* ___name0, Type_t* ___type1, const RuntimeMethod* method) ;
// System.Void System.ThrowHelper::ThrowSerializationException(System.ExceptionResource)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowSerializationException_m03BE2B48CD3617C32FBCEE16030F7C5563E04E16 (int32_t ___resource0, const RuntimeMethod* method) ;
// System.Boolean System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Runtime.Serialization.SerializationInfo>::Remove(TKey)
inline bool ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E (ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* __this, RuntimeObject* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858*, RuntimeObject*, const RuntimeMethod*))ConditionalWeakTable_2_Remove_m51E45FAFE5B1D6E9FDA123477422367F1F215DE6_gshared)(__this, ___key0, method);
}
// System.Int32 System.Collections.HashHelpers::ExpandPrime(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashHelpers_ExpandPrime_m9A35EC171AA0EA16F7C9F71EE6FAD5A82565ADB9 (int32_t ___oldSize0, const RuntimeMethod* method) ;
// System.Void System.Array::Copy(System.Array,System.Int32,System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41 (RuntimeArray* ___sourceArray0, int32_t ___sourceIndex1, RuntimeArray* ___destinationArray2, int32_t ___destinationIndex3, int32_t ___length4, const RuntimeMethod* method) ;
// System.Int32 System.Array::get_Rank()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F (RuntimeArray* __this, const RuntimeMethod* method) ;
// System.Int32 System.Array::GetLowerBound(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC (RuntimeArray* __this, int32_t ___dimension0, const RuntimeMethod* method) ;
// System.Int32 System.Array::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57 (RuntimeArray* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.DictionaryEntry::.ctor(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictionaryEntry__ctor_m2768353E53A75C4860E34B37DAF1342120C5D1EA (DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB* __this, RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Void System.ThrowHelper::ThrowArgumentException_Argument_InvalidArrayType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58 (const RuntimeMethod* method) ;
// System.Void System.ThrowHelper::ThrowWrongValueTypeArgumentException(System.Object,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910 (RuntimeObject* ___value0, Type_t* ___targetType1, const RuntimeMethod* method) ;
// System.Void System.ThrowHelper::ThrowWrongKeyTypeArgumentException(System.Object,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowWrongKeyTypeArgumentException_m90E5BCE2CB10EEC16F254C237121C6816C4D6982 (RuntimeObject* ___key0, Type_t* ___targetType1, const RuntimeMethod* method) ;
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.Vector2>::get_Key()
inline RuntimeObject* KeyValuePair_2_get_Key_mC2F74F2C7913473C536D80C56A49C907525AA762_inline (KeyValuePair_2_t5FCDCECBAC4615B1D6C16612A028BBBF368C51D4* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (KeyValuePair_2_t5FCDCECBAC4615B1D6C16612A028BBBF368C51D4*, const RuntimeMethod*))KeyValuePair_2_get_Key_mC2F74F2C7913473C536D80C56A49C907525AA762_gshared_inline)(__this, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.Vector2>::get_Value()
inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 KeyValuePair_2_get_Value_m8C9B6CC4F0B407E1AE61FC1F558FE1920BE127B0_inline (KeyValuePair_2_t5FCDCECBAC4615B1D6C16612A028BBBF368C51D4* __this, const RuntimeMethod* method)
{
	return ((  Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 (*) (KeyValuePair_2_t5FCDCECBAC4615B1D6C16612A028BBBF368C51D4*, const RuntimeMethod*))KeyValuePair_2_get_Value_m8C9B6CC4F0B407E1AE61FC1F558FE1920BE127B0_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.Vector2>::.ctor(TKey,TValue)
inline void KeyValuePair_2__ctor_m4727158B54F9EB5857F41AA2AA93AF1815148077 (KeyValuePair_2_t5FCDCECBAC4615B1D6C16612A028BBBF368C51D4* __this, RuntimeObject* ___key0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value1, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2_t5FCDCECBAC4615B1D6C16612A028BBBF368C51D4*, RuntimeObject*, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, const RuntimeMethod*))KeyValuePair_2__ctor_m4727158B54F9EB5857F41AA2AA93AF1815148077_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.Vector2>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>,System.Int32)
inline void Enumerator__ctor_m3DA0996D376CC3B5563A4EA329A46E2F1B91E38C (Enumerator_t052E91D9E9A063D03D7D70EDB7407F42CEDDBD48* __this, Dictionary_2_t41479D9F29C6C1BC07FC7F8D3DD313D8A9A419E1* ___dictionary0, int32_t ___getEnumeratorRetType1, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t052E91D9E9A063D03D7D70EDB7407F42CEDDBD48*, Dictionary_2_t41479D9F29C6C1BC07FC7F8D3DD313D8A9A419E1*, int32_t, const RuntimeMethod*))Enumerator__ctor_m3DA0996D376CC3B5563A4EA329A46E2F1B91E38C_gshared)(__this, ___dictionary0, ___getEnumeratorRetType1, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,Oculus.Interaction.PoseDetection.JointRotationActiveState/JointRotationFeatureState>::get_Key()
inline RuntimeObject* KeyValuePair_2_get_Key_mA53994A88775FF1BE799F3FC3B7FC2484A7B83E6_inline (KeyValuePair_2_t665B386104A382EAC5AF8A124C067F531DE78120* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (KeyValuePair_2_t665B386104A382EAC5AF8A124C067F531DE78120*, const RuntimeMethod*))KeyValuePair_2_get_Key_mA53994A88775FF1BE799F3FC3B7FC2484A7B83E6_gshared_inline)(__this, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,Oculus.Interaction.PoseDetection.JointRotationActiveState/JointRotationFeatureState>::get_Value()
inline JointRotationFeatureState_t293BD5640481C36FBD0E01AB30998C1D1C1D5ADE KeyValuePair_2_get_Value_m7B6AD86F22659AD0AC092AF5EC11E4C137517524_inline (KeyValuePair_2_t665B386104A382EAC5AF8A124C067F531DE78120* __this, const RuntimeMethod* method)
{
	return ((  JointRotationFeatureState_t293BD5640481C36FBD0E01AB30998C1D1C1D5ADE (*) (KeyValuePair_2_t665B386104A382EAC5AF8A124C067F531DE78120*, const RuntimeMethod*))KeyValuePair_2_get_Value_m7B6AD86F22659AD0AC092AF5EC11E4C137517524_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,Oculus.Interaction.PoseDetection.JointRotationActiveState/JointRotationFeatureState>::.ctor(TKey,TValue)
inline void KeyValuePair_2__ctor_m39238B49A4DAE8C920EC0FC67F04D633DB08A75A (KeyValuePair_2_t665B386104A382EAC5AF8A124C067F531DE78120* __this, RuntimeObject* ___key0, JointRotationFeatureState_t293BD5640481C36FBD0E01AB30998C1D1C1D5ADE ___value1, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2_t665B386104A382EAC5AF8A124C067F531DE78120*, RuntimeObject*, JointRotationFeatureState_t293BD5640481C36FBD0E01AB30998C1D1C1D5ADE, const RuntimeMethod*))KeyValuePair_2__ctor_m39238B49A4DAE8C920EC0FC67F04D633DB08A75A_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,Oculus.Interaction.PoseDetection.JointRotationActiveState/JointRotationFeatureState>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>,System.Int32)
inline void Enumerator__ctor_m8C10F6C561DF44AA44B8F0E255A4F561B850C378 (Enumerator_t84A88C194B63F67CEF824A6B4CE0DC3B5A993008* __this, Dictionary_2_tB21E9CF3B85CA9CAE5D23FD25B351F538B448F51* ___dictionary0, int32_t ___getEnumeratorRetType1, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t84A88C194B63F67CEF824A6B4CE0DC3B5A993008*, Dictionary_2_tB21E9CF3B85CA9CAE5D23FD25B351F538B448F51*, int32_t, const RuntimeMethod*))Enumerator__ctor_m8C10F6C561DF44AA44B8F0E255A4F561B850C378_gshared)(__this, ___dictionary0, ___getEnumeratorRetType1, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,Oculus.Interaction.PoseDetection.JointVelocityActiveState/JointVelocityFeatureState>::get_Key()
inline RuntimeObject* KeyValuePair_2_get_Key_m171B988FCFBB4CE7A964046A114247C8F4C611D6_inline (KeyValuePair_2_t14287996C615F8158516F8E8DB0AC54D578E8246* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (KeyValuePair_2_t14287996C615F8158516F8E8DB0AC54D578E8246*, const RuntimeMethod*))KeyValuePair_2_get_Key_m171B988FCFBB4CE7A964046A114247C8F4C611D6_gshared_inline)(__this, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,Oculus.Interaction.PoseDetection.JointVelocityActiveState/JointVelocityFeatureState>::get_Value()
inline JointVelocityFeatureState_tA17C290CDFB76352D9CEFC3E7B790E0CAEF22105 KeyValuePair_2_get_Value_m29EF30BFC916771A4C2E50A55E1E6746E64A13B1_inline (KeyValuePair_2_t14287996C615F8158516F8E8DB0AC54D578E8246* __this, const RuntimeMethod* method)
{
	return ((  JointVelocityFeatureState_tA17C290CDFB76352D9CEFC3E7B790E0CAEF22105 (*) (KeyValuePair_2_t14287996C615F8158516F8E8DB0AC54D578E8246*, const RuntimeMethod*))KeyValuePair_2_get_Value_m29EF30BFC916771A4C2E50A55E1E6746E64A13B1_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,Oculus.Interaction.PoseDetection.JointVelocityActiveState/JointVelocityFeatureState>::.ctor(TKey,TValue)
inline void KeyValuePair_2__ctor_mED95E75130763D3A24266DD0EF677FCA01C720D9 (KeyValuePair_2_t14287996C615F8158516F8E8DB0AC54D578E8246* __this, RuntimeObject* ___key0, JointVelocityFeatureState_tA17C290CDFB76352D9CEFC3E7B790E0CAEF22105 ___value1, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2_t14287996C615F8158516F8E8DB0AC54D578E8246*, RuntimeObject*, JointVelocityFeatureState_tA17C290CDFB76352D9CEFC3E7B790E0CAEF22105, const RuntimeMethod*))KeyValuePair_2__ctor_mED95E75130763D3A24266DD0EF677FCA01C720D9_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,Oculus.Interaction.PoseDetection.JointVelocityActiveState/JointVelocityFeatureState>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>,System.Int32)
inline void Enumerator__ctor_m38A45AF0B3DB2396892BDB7D284F330AC7CC6854 (Enumerator_t8FD3C43B2F6FD8121F33A320EE34ADDF6FD7DF0F* __this, Dictionary_2_t572F5C2854D3453A19F550C26C592FBCEEF1BEF8* ___dictionary0, int32_t ___getEnumeratorRetType1, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t8FD3C43B2F6FD8121F33A320EE34ADDF6FD7DF0F*, Dictionary_2_t572F5C2854D3453A19F550C26C592FBCEEF1BEF8*, int32_t, const RuntimeMethod*))Enumerator__ctor_m38A45AF0B3DB2396892BDB7D284F330AC7CC6854_gshared)(__this, ___dictionary0, ___getEnumeratorRetType1, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,OVRPassthroughLayer/PassthroughMeshInstance>::get_Key()
inline RuntimeObject* KeyValuePair_2_get_Key_mF8D0149496A6E9F97AA843ED176E84E689B58C92_inline (KeyValuePair_2_tC7EE4E7E2715DB2FD352264EB3FAF4B38BBF15DF* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (KeyValuePair_2_tC7EE4E7E2715DB2FD352264EB3FAF4B38BBF15DF*, const RuntimeMethod*))KeyValuePair_2_get_Key_mF8D0149496A6E9F97AA843ED176E84E689B58C92_gshared_inline)(__this, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,OVRPassthroughLayer/PassthroughMeshInstance>::get_Value()
inline PassthroughMeshInstance_tC15BBC616D213426B55C4E59C74175581D2EFFDE KeyValuePair_2_get_Value_mEDECE70FEBCB73C3191AAB4215C0FC3505C3D06A_inline (KeyValuePair_2_tC7EE4E7E2715DB2FD352264EB3FAF4B38BBF15DF* __this, const RuntimeMethod* method)
{
	return ((  PassthroughMeshInstance_tC15BBC616D213426B55C4E59C74175581D2EFFDE (*) (KeyValuePair_2_tC7EE4E7E2715DB2FD352264EB3FAF4B38BBF15DF*, const RuntimeMethod*))KeyValuePair_2_get_Value_mEDECE70FEBCB73C3191AAB4215C0FC3505C3D06A_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,OVRPassthroughLayer/PassthroughMeshInstance>::.ctor(TKey,TValue)
inline void KeyValuePair_2__ctor_mFB34CAD11D62DC93018E1826B3531AA2F4267402 (KeyValuePair_2_tC7EE4E7E2715DB2FD352264EB3FAF4B38BBF15DF* __this, RuntimeObject* ___key0, PassthroughMeshInstance_tC15BBC616D213426B55C4E59C74175581D2EFFDE ___value1, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2_tC7EE4E7E2715DB2FD352264EB3FAF4B38BBF15DF*, RuntimeObject*, PassthroughMeshInstance_tC15BBC616D213426B55C4E59C74175581D2EFFDE, const RuntimeMethod*))KeyValuePair_2__ctor_mFB34CAD11D62DC93018E1826B3531AA2F4267402_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,OVRPassthroughLayer/PassthroughMeshInstance>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>,System.Int32)
inline void Enumerator__ctor_m6CCFF0E2A0A9B3066DA75F3E35632527FBD59394 (Enumerator_t295153DF2610B637A0463DEDA52FE7BF360F0113* __this, Dictionary_2_tEF99863F098CBEDBDF416E45D42452A1BD2A32BC* ___dictionary0, int32_t ___getEnumeratorRetType1, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t295153DF2610B637A0463DEDA52FE7BF360F0113*, Dictionary_2_tEF99863F098CBEDBDF416E45D42452A1BD2A32BC*, int32_t, const RuntimeMethod*))Enumerator__ctor_m6CCFF0E2A0A9B3066DA75F3E35632527FBD59394_gshared)(__this, ___dictionary0, ___getEnumeratorRetType1, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.UIElements.StyleComplexSelector/PseudoStateData>::get_Key()
inline RuntimeObject* KeyValuePair_2_get_Key_mBE72C27BFF193B87C192E8F269820D2296B6E172_inline (KeyValuePair_2_t852F23A435B740B3D14D3CE08B14FFD4690334E7* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (KeyValuePair_2_t852F23A435B740B3D14D3CE08B14FFD4690334E7*, const RuntimeMethod*))KeyValuePair_2_get_Key_mBE72C27BFF193B87C192E8F269820D2296B6E172_gshared_inline)(__this, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.UIElements.StyleComplexSelector/PseudoStateData>::get_Value()
inline PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8 KeyValuePair_2_get_Value_m4436FB8460A00616072675A6DC8EF35E3C57021E_inline (KeyValuePair_2_t852F23A435B740B3D14D3CE08B14FFD4690334E7* __this, const RuntimeMethod* method)
{
	return ((  PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8 (*) (KeyValuePair_2_t852F23A435B740B3D14D3CE08B14FFD4690334E7*, const RuntimeMethod*))KeyValuePair_2_get_Value_m4436FB8460A00616072675A6DC8EF35E3C57021E_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.UIElements.StyleComplexSelector/PseudoStateData>::.ctor(TKey,TValue)
inline void KeyValuePair_2__ctor_m899F53F40BCAA19E77F5E9A552CAA43D134B9CC9 (KeyValuePair_2_t852F23A435B740B3D14D3CE08B14FFD4690334E7* __this, RuntimeObject* ___key0, PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8 ___value1, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2_t852F23A435B740B3D14D3CE08B14FFD4690334E7*, RuntimeObject*, PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8, const RuntimeMethod*))KeyValuePair_2__ctor_m899F53F40BCAA19E77F5E9A552CAA43D134B9CC9_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.UIElements.StyleComplexSelector/PseudoStateData>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>,System.Int32)
inline void Enumerator__ctor_mEB026458339B7ECD4D5E558C57D012096E15822B (Enumerator_tE506445EC02F2FBF2A0176A4BD4BBFFBCF214672* __this, Dictionary_2_t377C2B6CAA20982B0AC7A180E3800172E88C8BDE* ___dictionary0, int32_t ___getEnumeratorRetType1, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tE506445EC02F2FBF2A0176A4BD4BBFFBCF214672*, Dictionary_2_t377C2B6CAA20982B0AC7A180E3800172E88C8BDE*, int32_t, const RuntimeMethod*))Enumerator__ctor_mEB026458339B7ECD4D5E558C57D012096E15822B_gshared)(__this, ___dictionary0, ___getEnumeratorRetType1, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<UnityEngine.TerrainUtils.TerrainTileCoord,System.Object>::get_Key()
inline TerrainTileCoord_t2181DDF40A8A428A84817957CB7FB19A314F4F09 KeyValuePair_2_get_Key_mE27FF2218D103DBF58A36186AA62595EC4079388_inline (KeyValuePair_2_t8760984FFCA6E11154C918347EA4C7CFB2D0B8CE* __this, const RuntimeMethod* method)
{
	return ((  TerrainTileCoord_t2181DDF40A8A428A84817957CB7FB19A314F4F09 (*) (KeyValuePair_2_t8760984FFCA6E11154C918347EA4C7CFB2D0B8CE*, const RuntimeMethod*))KeyValuePair_2_get_Key_mE27FF2218D103DBF58A36186AA62595EC4079388_gshared_inline)(__this, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<UnityEngine.TerrainUtils.TerrainTileCoord,System.Object>::get_Value()
inline RuntimeObject* KeyValuePair_2_get_Value_m64463C12912AD06A73305FF2EEF67678D7281515_inline (KeyValuePair_2_t8760984FFCA6E11154C918347EA4C7CFB2D0B8CE* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (KeyValuePair_2_t8760984FFCA6E11154C918347EA4C7CFB2D0B8CE*, const RuntimeMethod*))KeyValuePair_2_get_Value_m64463C12912AD06A73305FF2EEF67678D7281515_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<UnityEngine.TerrainUtils.TerrainTileCoord,System.Object>::.ctor(TKey,TValue)
inline void KeyValuePair_2__ctor_m384510E0549D9C5343A67620C046FC8791C82BAB (KeyValuePair_2_t8760984FFCA6E11154C918347EA4C7CFB2D0B8CE* __this, TerrainTileCoord_t2181DDF40A8A428A84817957CB7FB19A314F4F09 ___key0, RuntimeObject* ___value1, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2_t8760984FFCA6E11154C918347EA4C7CFB2D0B8CE*, TerrainTileCoord_t2181DDF40A8A428A84817957CB7FB19A314F4F09, RuntimeObject*, const RuntimeMethod*))KeyValuePair_2__ctor_m384510E0549D9C5343A67620C046FC8791C82BAB_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.TerrainUtils.TerrainTileCoord,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>,System.Int32)
inline void Enumerator__ctor_mA03972C198139BFCEADE1562F82725B6A9BE6963 (Enumerator_tB06F293668D09F345A54C8C836ABF567B9087FB7* __this, Dictionary_2_t22B5EE7684537D7D143E6F6FCDC4C58B5D53F68F* ___dictionary0, int32_t ___getEnumeratorRetType1, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tB06F293668D09F345A54C8C836ABF567B9087FB7*, Dictionary_2_t22B5EE7684537D7D143E6F6FCDC4C58B5D53F68F*, int32_t, const RuntimeMethod*))Enumerator__ctor_mA03972C198139BFCEADE1562F82725B6A9BE6963_gshared)(__this, ___dictionary0, ___getEnumeratorRetType1, method);
}
// System.Int32 System.ValueType::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueType_GetHashCode_m3B47C72EA1FA846D9B0DFF3C444AB2BFA22CF3CE (RuntimeObject* __this, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt32>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m7A8E1EC6D35377352DD43654E151BB4C8FE37F93_gshared (Dictionary_2_tA9CFEFF33EC9A214A3FA9A889B9D8EAE95A49902* __this, const RuntimeMethod* method) 
{
	{
		((  void (*) (Dictionary_2_tA9CFEFF33EC9A214A3FA9A889B9D8EAE95A49902*, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, 0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt32>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mC23DA7701BAF28FBC5807FDE38E4B59AFFA2AB64_gshared (Dictionary_2_tA9CFEFF33EC9A214A3FA9A889B9D8EAE95A49902* __this, int32_t ___capacity0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___capacity0;
		((  void (*) (Dictionary_2_tA9CFEFF33EC9A214A3FA9A889B9D8EAE95A49902*, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt32>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mA3D5FF197EC3A35815E7A47CC112FE6B6AF7171F_gshared (Dictionary_2_tA9CFEFF33EC9A214A3FA9A889B9D8EAE95A49902* __this, RuntimeObject* ___comparer0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___comparer0;
		((  void (*) (Dictionary_2_tA9CFEFF33EC9A214A3FA9A889B9D8EAE95A49902*, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, 0, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt32>::.ctor(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m586E0FED135D4920925A4EBD3FC809096CE491F2_gshared (Dictionary_2_tA9CFEFF33EC9A214A3FA9A889B9D8EAE95A49902* __this, int32_t ___capacity0, RuntimeObject* ___comparer1, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___capacity0;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0011;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97((int32_t)((int32_t)12), NULL);
	}

IL_0011:
	{
		int32_t L_1 = ___capacity0;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_2 = ___capacity0;
		int32_t L_3;
		L_3 = ((  int32_t (*) (Dictionary_2_tA9CFEFF33EC9A214A3FA9A889B9D8EAE95A49902*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(__this, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
	}

IL_001d:
	{
		RuntimeObject* L_4 = ___comparer1;
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_5;
		L_5 = ((  EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if ((((RuntimeObject*)(RuntimeObject*)L_4) == ((RuntimeObject*)(EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2*)L_5)))
		{
			goto IL_002c;
		}
	}
	{
		RuntimeObject* L_6 = ___comparer1;
		__this->____comparer_6 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer_6), (void*)L_6);
	}

IL_002c:
	{
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt32>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m6ADAF758A8C674697FC7E1E97BB6B501AD9C93CA_gshared (Dictionary_2_tA9CFEFF33EC9A214A3FA9A889B9D8EAE95A49902* __this, RuntimeObject* ___dictionary0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___dictionary0;
		((  void (*) (Dictionary_2_tA9CFEFF33EC9A214A3FA9A889B9D8EAE95A49902*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)))(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt32>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m51B3FC57533E3E00A2A2E20CF8E80231337B2CB0_gshared (Dictionary_2_tA9CFEFF33EC9A214A3FA9A889B9D8EAE95A49902* __this, RuntimeObject* ___dictionary0, RuntimeObject* ___comparer1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	EntryU5BU5D_tDDCFB52378DF4C6064B3947E47DE072BE041758E* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	KeyValuePair_2_t960579556437B99440AF144C7232735A5D4DA864 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Dictionary_2_tA9CFEFF33EC9A214A3FA9A889B9D8EAE95A49902* G_B2_0 = NULL;
	Dictionary_2_tA9CFEFF33EC9A214A3FA9A889B9D8EAE95A49902* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	Dictionary_2_tA9CFEFF33EC9A214A3FA9A889B9D8EAE95A49902* G_B3_1 = NULL;
	{
		RuntimeObject* L_0 = ___dictionary0;
		G_B1_0 = __this;
		if (L_0)
		{
			G_B2_0 = __this;
			goto IL_0007;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_000d;
	}

IL_0007:
	{
		RuntimeObject* L_1 = ___dictionary0;
		NullCheck((RuntimeObject*)L_1);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::get_Count() */, il2cpp_rgctx_data(method->klass->rgctx_data, 5), (RuntimeObject*)L_1);
		G_B3_0 = L_2;
		G_B3_1 = G_B2_0;
	}

IL_000d:
	{
		RuntimeObject* L_3 = ___comparer1;
		((  void (*) (Dictionary_2_tA9CFEFF33EC9A214A3FA9A889B9D8EAE95A49902*, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(G_B3_1, G_B3_0, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		RuntimeObject* L_4 = ___dictionary0;
		if (L_4)
		{
			goto IL_001c;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)1, NULL);
	}

IL_001c:
	{
		RuntimeObject* L_5 = ___dictionary0;
		NullCheck((RuntimeObject*)L_5);
		Type_t* L_6;
		L_6 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)L_5, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 7)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		bool L_9;
		L_9 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_6, L_8, NULL);
		if (!L_9)
		{
			goto IL_0080;
		}
	}
	{
		RuntimeObject* L_10 = ___dictionary0;
		Dictionary_2_tA9CFEFF33EC9A214A3FA9A889B9D8EAE95A49902* L_11 = ((Dictionary_2_tA9CFEFF33EC9A214A3FA9A889B9D8EAE95A49902*)CastclassClass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 8)));
		NullCheck(L_11);
		int32_t L_12 = (int32_t)L_11->____count_2;
		V_0 = L_12;
		NullCheck(L_11);
		EntryU5BU5D_tDDCFB52378DF4C6064B3947E47DE072BE041758E* L_13 = (EntryU5BU5D_tDDCFB52378DF4C6064B3947E47DE072BE041758E*)L_11->____entries_1;
		V_1 = L_13;
		V_2 = 0;
		goto IL_007b;
	}

IL_004a:
	{
		EntryU5BU5D_tDDCFB52378DF4C6064B3947E47DE072BE041758E* L_14 = V_1;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		int32_t L_16 = (int32_t)((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)))->___hashCode_0;
		if ((((int32_t)L_16) < ((int32_t)0)))
		{
			goto IL_0077;
		}
	}
	{
		EntryU5BU5D_tDDCFB52378DF4C6064B3947E47DE072BE041758E* L_17 = V_1;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		RuntimeObject* L_19 = (RuntimeObject*)((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___key_2;
		EntryU5BU5D_tDDCFB52378DF4C6064B3947E47DE072BE041758E* L_20 = V_1;
		int32_t L_21 = V_2;
		NullCheck(L_20);
		uint32_t L_22 = (uint32_t)((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___value_3;
		((  void (*) (Dictionary_2_tA9CFEFF33EC9A214A3FA9A889B9D8EAE95A49902*, RuntimeObject*, uint32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(__this, L_19, L_22, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
	}

IL_0077:
	{
		int32_t L_23 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_007b:
	{
		int32_t L_24 = V_2;
		int32_t L_25 = V_0;
		if ((((int32_t)L_24) < ((int32_t)L_25)))
		{
			goto IL_004a;
		}
	}
	{
		return;
	}

IL_0080:
	{
		RuntimeObject* L_26 = ___dictionary0;
		NullCheck((RuntimeObject*)L_26);
		RuntimeObject* L_27;
		L_27 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::GetEnumerator() */, il2cpp_rgctx_data(method->klass->rgctx_data, 10), (RuntimeObject*)L_26);
		V_3 = L_27;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00af:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_28 = V_3;
					if (!L_28)
					{
						goto IL_00b8;
					}
				}
				{
					RuntimeObject* L_29 = V_3;
					NullCheck((RuntimeObject*)L_29);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_29);
				}

IL_00b8:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_00a5_1;
			}

IL_0089_1:
			{
				RuntimeObject* L_30 = V_3;
				NullCheck(L_30);
				KeyValuePair_2_t960579556437B99440AF144C7232735A5D4DA864 L_31;
				L_31 = InterfaceFuncInvoker0< KeyValuePair_2_t960579556437B99440AF144C7232735A5D4DA864 >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::get_Current() */, il2cpp_rgctx_data(method->klass->rgctx_data, 12), L_30);
				V_4 = L_31;
				RuntimeObject* L_32;
				L_32 = KeyValuePair_2_get_Key_m580D4010966F948701F9955EB40BBD5AA9964565_inline((&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
				uint32_t L_33;
				L_33 = KeyValuePair_2_get_Value_mAFD58B7195CA80B3A58A19185A2B2A4A70B2A726_inline((&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
				((  void (*) (Dictionary_2_tA9CFEFF33EC9A214A3FA9A889B9D8EAE95A49902*, RuntimeObject*, uint32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(__this, L_32, L_33, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
			}

IL_00a5_1:
			{
				RuntimeObject* L_34 = V_3;
				NullCheck((RuntimeObject*)L_34);
				bool L_35;
				L_35 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_34);
				if (L_35)
				{
					goto IL_0089_1;
				}
			}
			{
				goto IL_00b9;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00b9:
	{
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt32>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m6FC9C638C6CC8D9DB71630EBC3F97025A25C04B8_gshared (Dictionary_2_tA9CFEFF33EC9A214A3FA9A889B9D8EAE95A49902* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___info0, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___context1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___info0;
		NullCheck(L_0);
		ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7(L_0, (RuntimeObject*)__this, L_1, ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		return;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.UInt32>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_m60E3A303B6794BEA49FEB806AAE28FEB18CEBFAD_gshared (Dictionary_2_tA9CFEFF33EC9A214A3FA9A889B9D8EAE95A49902* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____count_2;
		int32_t L_1 = (int32_t)__this->____freeCount_4;
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.UInt32>::get_Keys()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_tC04CC2B7A346756DEF5B0B6163FF284C2F45BD37* Dictionary_2_get_Keys_m3E79E1EE3473CABB4043C688739ADB33CC93DD97_gshared (Dictionary_2_tA9CFEFF33EC9A214A3FA9A889B9D8EAE95A49902* __this, const RuntimeMethod* method) 
{
	{
		KeyCollection_tC04CC2B7A346756DEF5B0B6163FF284C2F45BD37* L_0 = (KeyCollection_tC04CC2B7A346756DEF5B0B6163FF284C2F45BD37*)__this->____keys_7;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		KeyCollection_tC04CC2B7A346756DEF5B0B6163FF284C2F45BD37* L_1 = (KeyCollection_tC04CC2B7A346756DEF5B0B6163FF284C2F45BD37*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 16));
		NullCheck(L_1);
		((  void (*) (KeyCollection_tC04CC2B7A346756DEF5B0B6163FF284C2F45BD37*, Dictionary_2_tA9CFEFF33EC9A214A3FA9A889B9D8EAE95A49902*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 17)))(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
		__this->____keys_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keys_7), (void*)L_1);
	}

IL_0014:
	{
		KeyCollection_tC04CC2B7A346756DEF5B0B6163FF284C2F45BD37* L_2 = (KeyCollection_tC04CC2B7A346756DEF5B0B6163FF284C2F45BD37*)__this->____keys_7;
		return L_2;
	}
}
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.UInt32>::get_Values()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_tF9BCC1C418D000EF64E21430DC20F900474B0F7D* Dictionary_2_get_Values_mB4E41EC7045F8BECC2BD697F6199E09EA60CCF0F_gshared (Dictionary_2_tA9CFEFF33EC9A214A3FA9A889B9D8EAE95A49902* __this, const RuntimeMethod* method) 
{
	{
		ValueCollection_tF9BCC1C418D000EF64E21430DC20F900474B0F7D* L_0 = (ValueCollection_tF9BCC1C418D000EF64E21430DC20F900474B0F7D*)__this->____values_8;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_tF9BCC1C418D000EF64E21430DC20F900474B0F7D* L_1 = (ValueCollection_tF9BCC1C418D000EF64E21430DC20F900474B0F7D*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 18));
		NullCheck(L_1);
		((  void (*) (ValueCollection_tF9BCC1C418D000EF64E21430DC20F900474B0F7D*, Dictionary_2_tA9CFEFF33EC9A214A3FA9A889B9D8EAE95A49902*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 19)))(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		__this->____values_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values_8), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_tF9BCC1C418D000EF64E21430DC20F900474B0F7D* L_2 = (ValueCollection_tF9BCC1C418D000EF64E21430DC20F900474B0F7D*)__this->____values_8;
		return L_2;
	}
}
// System.Collections.Generic.IEnumerable`1<TValue> System.Collections.Generic.Dictionary`2<System.Object,System.UInt32>::System.Collections.Generic.IReadOnlyDictionary<TKey,TValue>.get_Values()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IReadOnlyDictionaryU3CTKeyU2CTValueU3E_get_Values_mE05D59735E5416D8BD94E08704E4EAAC3B5A216B_gshared (Dictionary_2_tA9CFEFF33EC9A214A3FA9A889B9D8EAE95A49902* __this, const RuntimeMethod* method) 
{
	{
		ValueCollection_tF9BCC1C418D000EF64E21430DC20F900474B0F7D* L_0 = (ValueCollection_tF9BCC1C418D000EF64E21430DC20F900474B0F7D*)__this->____values_8;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_tF9BCC1C418D000EF64E21430DC20F900474B0F7D* L_1 = (ValueCollection_tF9BCC1C418D000EF64E21430DC20F900474B0F7D*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 18));
		NullCheck(L_1);
		((  void (*) (ValueCollection_tF9BCC1C418D000EF64E21430DC20F900474B0F7D*, Dictionary_2_tA9CFEFF33EC9A214A3FA9A889B9D8EAE95A49902*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 19)))(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		__this->____values_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values_8), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_tF9BCC1C418D000EF64E21430DC20F900474B0F7D* L_2 = (ValueCollection_tF9BCC1C418D000EF64E21430DC20F900474B0F7D*)__this->____values_8;
		return (RuntimeObject*)L_2;
	}
}
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.UInt32>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Dictionary_2_get_Item_mB12C3F9B6097F5E961B1B981546D7DDA39AB681A_gshared (Dictionary_2_tA9CFEFF33EC9A214A3FA9A889B9D8EAE95A49902* __this, RuntimeObject* ___key0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	uint32_t V_1 = 0;
	{
		RuntimeObject* L_0 = ___key0;
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_tA9CFEFF33EC9A214A3FA9A889B9D8EAE95A49902*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 20)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_001e;
		}
	}
	{
		EntryU5BU5D_tDDCFB52378DF4C6064B3947E47DE072BE041758E* L_3 = (EntryU5BU5D_tDDCFB52378DF4C6064B3947E47DE072BE041758E*)__this->____entries_1;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		uint32_t L_5 = (uint32_t)((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)))->___value_3;
		return L_5;
	}

IL_001e:
	{
		RuntimeObject* L_6 = ___key0;
		ThrowHelper_ThrowKeyNotFoundException_m6A17735FA486AD43F2488DE39B755AC60BC99CE7(L_6, NULL);
		il2cpp_codegen_initobj((&V_1), sizeof(uint32_t));
		uint32_t L_7 = V_1;
		return L_7;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt32>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m5C1AE2561C20F13549AB2918C989D1520DE5455E_gshared (Dictionary_2_tA9CFEFF33EC9A214A3FA9A889B9D8EAE95A49902* __this, RuntimeObject* ___key0, uint32_t ___value1, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___key0;
		uint32_t L_1 = ___value1;
		bool L_2;
		L_2 = ((  bool (*) (Dictionary_2_tA9CFEFF33EC9A214A3FA9A889B9D8EAE95A49902*, RuntimeObject*, uint32_t, uint8_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 22)))(__this, L_0, L_1, (uint8_t)1, il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt32>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m87257209A41BB1F3D0D5AD559D17EA420347360D_gshared (Dictionary_2_tA9CFEFF33EC9A214A3FA9A889B9D8EAE95A49902* __this, RuntimeObject* ___key0, uint32_t ___value1, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___key0;
		uint32_t L_1 = ___value1;
		bool L_2;
		L_2 = ((  bool (*) (Dictionary_2_tA9CFEFF33EC9A214A3FA9A889B9D8EAE95A49902*, RuntimeObject*, uint32_t, uint8_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 22)))(__this, L_0, L_1, (uint8_t)2, il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_mFA16398D2EAE410A5AB68CFE4D8C69E069BA87B7_gshared (Dictionary_2_tA9CFEFF33EC9A214A3FA9A889B9D8EAE95A49902* __this, KeyValuePair_2_t960579556437B99440AF144C7232735A5D4DA864 ___keyValuePair0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0;
		L_0 = KeyValuePair_2_get_Key_m580D4010966F948701F9955EB40BBD5AA9964565_inline((&___keyValuePair0), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		uint32_t L_1;
		L_1 = KeyValuePair_2_get_Value_mAFD58B7195CA80B3A58A19185A2B2A4A70B2A726_inline((&___keyValuePair0), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		((  void (*) (Dictionary_2_tA9CFEFF33EC9A214A3FA9A889B9D8EAE95A49902*, RuntimeObject*, uint32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.UInt32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m3120AC4CC776DDD2E971387BFC17A922C08F681F_gshared (Dictionary_2_tA9CFEFF33EC9A214A3FA9A889B9D8EAE95A49902* __this, KeyValuePair_2_t960579556437B99440AF144C7232735A5D4DA864 ___keyValuePair0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0;
		L_0 = KeyValuePair_2_get_Key_m580D4010966F948701F9955EB40BBD5AA9964565_inline((&___keyValuePair0), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_tA9CFEFF33EC9A214A3FA9A889B9D8EAE95A49902*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 20)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0038;
		}
	}
	{
		EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* L_3;
		L_3 = ((  EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 23)))(il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		EntryU5BU5D_tDDCFB52378DF4C6064B3947E47DE072BE041758E* L_4 = (EntryU5BU5D_tDDCFB52378DF4C6064B3947E47DE072BE041758E*)__this->____entries_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		uint32_t L_6 = (uint32_t)((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value_3;
		uint32_t L_7;
		L_7 = KeyValuePair_2_get_Value_mAFD58B7195CA80B3A58A19185A2B2A4A70B2A726_inline((&___keyValuePair0), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, uint32_t, uint32_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.UInt32>::Equals(T,T) */, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0038;
		}
	}
	{
		return (bool)1;
	}

IL_0038:
	{
		return (bool)0;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.UInt32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m182EE4D4B80784AA057B69B9D392B868E1F2A67B_gshared (Dictionary_2_tA9CFEFF33EC9A214A3FA9A889B9D8EAE95A49902* __this, KeyValuePair_2_t960579556437B99440AF144C7232735A5D4DA864 ___keyValuePair0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0;
		L_0 = KeyValuePair_2_get_Key_m580D4010966F948701F9955EB40BBD5AA9964565_inline((&___keyValuePair0), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_tA9CFEFF33EC9A214A3FA9A889B9D8EAE95A49902*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 20)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0046;
		}
	}
	{
		EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* L_3;
		L_3 = ((  EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 23)))(il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		EntryU5BU5D_tDDCFB52378DF4C6064B3947E47DE072BE041758E* L_4 = (EntryU5BU5D_tDDCFB52378DF4C6064B3947E47DE072BE041758E*)__this->____entries_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		uint32_t L_6 = (uint32_t)((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value_3;
		uint32_t L_7;
		L_7 = KeyValuePair_2_get_Value_mAFD58B7195CA80B3A58A19185A2B2A4A70B2A726_inline((&___keyValuePair0), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, uint32_t, uint32_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.UInt32>::Equals(T,T) */, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0046;
		}
	}
	{
		RuntimeObject* L_9;
		L_9 = KeyValuePair_2_get_Key_m580D4010966F948701F9955EB40BBD5AA9964565_inline((&___keyValuePair0), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		bool L_10;
		L_10 = ((  bool (*) (Dictionary_2_tA9CFEFF33EC9A214A3FA9A889B9D8EAE95A49902*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 27)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 27));
		return (bool)1;
	}

IL_0046:
	{
		return (bool)0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt32>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_mFB86B8A481D410F870D060319D5B455B79A721A9_gshared (Dictionary_2_tA9CFEFF33EC9A214A3FA9A889B9D8EAE95A49902* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->____count_2;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0041;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_3);
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_2, 0, ((int32_t)(((RuntimeArray*)L_3)->max_length)), NULL);
		__this->____count_2 = 0;
		__this->____freeList_3 = (-1);
		__this->____freeCount_4 = 0;
		EntryU5BU5D_tDDCFB52378DF4C6064B3947E47DE072BE041758E* L_4 = (EntryU5BU5D_tDDCFB52378DF4C6064B3947E47DE072BE041758E*)__this->____entries_1;
		int32_t L_5 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_4, 0, L_5, NULL);
	}

IL_0041:
	{
		int32_t L_6 = (int32_t)__this->____version_5;
		__this->____version_5 = ((int32_t)il2cpp_codegen_add(L_6, 1));
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.UInt32>::ContainsKey(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_mB0ABF16716CF72104C6EBDF6A440E6BE7D658FFE_gshared (Dictionary_2_tA9CFEFF33EC9A214A3FA9A889B9D8EAE95A49902* __this, RuntimeObject* ___key0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___key0;
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_tA9CFEFF33EC9A214A3FA9A889B9D8EAE95A49902*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 20)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		return (bool)((((int32_t)((((int32_t)L_1) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.UInt32>::ContainsValue(TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsValue_mB45E4C5E4DA16CC959CA5D1727DFB1D38FBD125B_gshared (Dictionary_2_tA9CFEFF33EC9A214A3FA9A889B9D8EAE95A49902* __this, uint32_t ___value0, const RuntimeMethod* method) 
{
	EntryU5BU5D_tDDCFB52378DF4C6064B3947E47DE072BE041758E* V_0 = NULL;
	int32_t V_1 = 0;
	uint32_t V_2 = 0;
	int32_t V_3 = 0;
	EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* V_4 = NULL;
	int32_t V_5 = 0;
	{
		EntryU5BU5D_tDDCFB52378DF4C6064B3947E47DE072BE041758E* L_0 = (EntryU5BU5D_tDDCFB52378DF4C6064B3947E47DE072BE041758E*)__this->____entries_1;
		V_0 = L_0;
		goto IL_0049;
	}
	{
		V_1 = 0;
		goto IL_003b;
	}

IL_0013:
	{
		EntryU5BU5D_tDDCFB52378DF4C6064B3947E47DE072BE041758E* L_2 = V_0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = (int32_t)((L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3)))->___hashCode_0;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0037;
		}
	}
	{
		EntryU5BU5D_tDDCFB52378DF4C6064B3947E47DE072BE041758E* L_5 = V_0;
		int32_t L_6 = V_1;
		NullCheck(L_5);
		uint32_t L_7 = (uint32_t)((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->___value_3;
		goto IL_0037;
	}
	{
		return (bool)1;
	}

IL_0037:
	{
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_003b:
	{
		int32_t L_9 = V_1;
		int32_t L_10 = (int32_t)__this->____count_2;
		if ((((int32_t)L_9) < ((int32_t)L_10)))
		{
			goto IL_0013;
		}
	}
	{
		goto IL_00db;
	}

IL_0049:
	{
		il2cpp_codegen_initobj((&V_2), sizeof(uint32_t));
	}
	{
		V_3 = 0;
		goto IL_008b;
	}

IL_005d:
	{
		EntryU5BU5D_tDDCFB52378DF4C6064B3947E47DE072BE041758E* L_12 = V_0;
		int32_t L_13 = V_3;
		NullCheck(L_12);
		int32_t L_14 = (int32_t)((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)))->___hashCode_0;
		if ((((int32_t)L_14) < ((int32_t)0)))
		{
			goto IL_0087;
		}
	}
	{
		EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* L_15;
		L_15 = ((  EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 23)))(il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		EntryU5BU5D_tDDCFB52378DF4C6064B3947E47DE072BE041758E* L_16 = V_0;
		int32_t L_17 = V_3;
		NullCheck(L_16);
		uint32_t L_18 = (uint32_t)((L_16)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_17)))->___value_3;
		uint32_t L_19 = ___value0;
		NullCheck(L_15);
		bool L_20;
		L_20 = VirtualFuncInvoker2< bool, uint32_t, uint32_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.UInt32>::Equals(T,T) */, L_15, L_18, L_19);
		if (!L_20)
		{
			goto IL_0087;
		}
	}
	{
		return (bool)1;
	}

IL_0087:
	{
		int32_t L_21 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_008b:
	{
		int32_t L_22 = V_3;
		int32_t L_23 = (int32_t)__this->____count_2;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_005d;
		}
	}
	{
		goto IL_00db;
	}

IL_0096:
	{
		EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* L_24;
		L_24 = ((  EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 23)))(il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		V_4 = L_24;
		V_5 = 0;
		goto IL_00d1;
	}

IL_00a2:
	{
		EntryU5BU5D_tDDCFB52378DF4C6064B3947E47DE072BE041758E* L_25 = V_0;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		int32_t L_27 = (int32_t)((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___hashCode_0;
		if ((((int32_t)L_27) < ((int32_t)0)))
		{
			goto IL_00cb;
		}
	}
	{
		EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* L_28 = V_4;
		EntryU5BU5D_tDDCFB52378DF4C6064B3947E47DE072BE041758E* L_29 = V_0;
		int32_t L_30 = V_5;
		NullCheck(L_29);
		uint32_t L_31 = (uint32_t)((L_29)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_30)))->___value_3;
		uint32_t L_32 = ___value0;
		NullCheck(L_28);
		bool L_33;
		L_33 = VirtualFuncInvoker2< bool, uint32_t, uint32_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.UInt32>::Equals(T,T) */, L_28, L_31, L_32);
		if (!L_33)
		{
			goto IL_00cb;
		}
	}
	{
		return (bool)1;
	}

IL_00cb:
	{
		int32_t L_34 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_00d1:
	{
		int32_t L_35 = V_5;
		int32_t L_36 = (int32_t)__this->____count_2;
		if ((((int32_t)L_35) < ((int32_t)L_36)))
		{
			goto IL_00a2;
		}
	}

IL_00db:
	{
		return (bool)0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt32>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_m5890D363711C2CE536BBB14DDB531DB47A6028A5_gshared (Dictionary_2_tA9CFEFF33EC9A214A3FA9A889B9D8EAE95A49902* __this, KeyValuePair_2U5BU5D_tFBE07C34404F8F624202E7C9A32A37AC93DCD171* ___array0, int32_t ___index1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	EntryU5BU5D_tDDCFB52378DF4C6064B3947E47DE072BE041758E* V_1 = NULL;
	int32_t V_2 = 0;
	{
		KeyValuePair_2U5BU5D_tFBE07C34404F8F624202E7C9A32A37AC93DCD171* L_0 = ___array0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)3, NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___index1;
		KeyValuePair_2U5BU5D_tFBE07C34404F8F624202E7C9A32A37AC93DCD171* L_2 = ___array0;
		NullCheck(L_2);
		if ((!(((uint32_t)L_1) > ((uint32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))))
		{
			goto IL_0014;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0014:
	{
		KeyValuePair_2U5BU5D_tFBE07C34404F8F624202E7C9A32A37AC93DCD171* L_3 = ___array0;
		NullCheck(L_3);
		int32_t L_4 = ___index1;
		int32_t L_5;
		L_5 = ((  int32_t (*) (Dictionary_2_tA9CFEFF33EC9A214A3FA9A889B9D8EAE95A49902*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 29)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_3)->max_length)), L_4))) >= ((int32_t)L_5)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)5, NULL);
	}

IL_0027:
	{
		int32_t L_6 = (int32_t)__this->____count_2;
		V_0 = L_6;
		EntryU5BU5D_tDDCFB52378DF4C6064B3947E47DE072BE041758E* L_7 = (EntryU5BU5D_tDDCFB52378DF4C6064B3947E47DE072BE041758E*)__this->____entries_1;
		V_1 = L_7;
		V_2 = 0;
		goto IL_0075;
	}

IL_0039:
	{
		EntryU5BU5D_tDDCFB52378DF4C6064B3947E47DE072BE041758E* L_8 = V_1;
		int32_t L_9 = V_2;
		NullCheck(L_8);
		int32_t L_10 = (int32_t)((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9)))->___hashCode_0;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_0071;
		}
	}
	{
		KeyValuePair_2U5BU5D_tFBE07C34404F8F624202E7C9A32A37AC93DCD171* L_11 = ___array0;
		int32_t L_12 = ___index1;
		int32_t L_13 = L_12;
		___index1 = ((int32_t)il2cpp_codegen_add(L_13, 1));
		EntryU5BU5D_tDDCFB52378DF4C6064B3947E47DE072BE041758E* L_14 = V_1;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		RuntimeObject* L_16 = (RuntimeObject*)((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)))->___key_2;
		EntryU5BU5D_tDDCFB52378DF4C6064B3947E47DE072BE041758E* L_17 = V_1;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		uint32_t L_19 = (uint32_t)((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___value_3;
		KeyValuePair_2_t960579556437B99440AF144C7232735A5D4DA864 L_20;
		memset((&L_20), 0, sizeof(L_20));
		KeyValuePair_2__ctor_m94200303A1DD6A660835074EF5D7A9676703AF93((&L_20), L_16, L_19, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (KeyValuePair_2_t960579556437B99440AF144C7232735A5D4DA864)L_20);
	}

IL_0071:
	{
		int32_t L_21 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0075:
	{
		int32_t L_22 = V_2;
		int32_t L_23 = V_0;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_0039;
		}
	}
	{
		return;
	}
}
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.UInt32>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t3B89D8847C267697DBDD0903E1C0989F9FB24E9B Dictionary_2_GetEnumerator_m939AFA8E2BEC912D5D37121A670012B123F1A06C_gshared (Dictionary_2_tA9CFEFF33EC9A214A3FA9A889B9D8EAE95A49902* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t3B89D8847C267697DBDD0903E1C0989F9FB24E9B L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m159E85F401C16F937369C2BAEB2965E01A65C54F((&L_0), __this, 2, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.UInt32>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m03975D527267E86FAEAD3242925FEF54B74D4194_gshared (Dictionary_2_tA9CFEFF33EC9A214A3FA9A889B9D8EAE95A49902* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t3B89D8847C267697DBDD0903E1C0989F9FB24E9B L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m159E85F401C16F937369C2BAEB2965E01A65C54F((&L_0), __this, 2, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		Enumerator_t3B89D8847C267697DBDD0903E1C0989F9FB24E9B L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 32), &L_1);
		return (RuntimeObject*)L_2;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt32>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_GetObjectData_mE33BB1525B1F9F3F727C112DE89B5507123B878D_gshared (Dictionary_2_tA9CFEFF33EC9A214A3FA9A889B9D8EAE95A49902* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___info0, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___context1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_tFBE07C34404F8F624202E7C9A32A37AC93DCD171* V_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	String_t* G_B4_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B4_2 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B3_2 = NULL;
	String_t* G_B6_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B6_1 = NULL;
	String_t* G_B5_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B5_1 = NULL;
	int32_t G_B7_0 = 0;
	String_t* G_B7_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B7_2 = NULL;
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___info0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)4, NULL);
	}

IL_0009:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___info0;
		int32_t L_2 = (int32_t)__this->____version_5;
		NullCheck(L_1);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(L_1, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, L_2, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = ___info0;
		RuntimeObject* L_4 = (RuntimeObject*)__this->____comparer_6;
		RuntimeObject* L_5 = L_4;
		G_B3_0 = L_5;
		G_B3_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
		G_B3_2 = L_3;
		if (L_5)
		{
			G_B4_0 = L_5;
			G_B4_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
			G_B4_2 = L_3;
			goto IL_002f;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_6;
		L_6 = ((  EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		G_B4_0 = ((RuntimeObject*)(L_6));
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
	}

IL_002f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 34)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		NullCheck(G_B4_2);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(G_B4_2, G_B4_1, (RuntimeObject*)G_B4_0, L_8, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_9 = ___info0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		G_B5_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
		G_B5_1 = L_9;
		if (!L_10)
		{
			G_B6_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
			G_B6_1 = L_9;
			goto IL_0056;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_11);
		G_B7_0 = ((int32_t)(((RuntimeArray*)L_11)->max_length));
		G_B7_1 = G_B5_0;
		G_B7_2 = G_B5_1;
		goto IL_0057;
	}

IL_0056:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
		G_B7_2 = G_B6_1;
	}

IL_0057:
	{
		NullCheck(G_B7_2);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(G_B7_2, G_B7_1, G_B7_0, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		if (!L_12)
		{
			goto IL_008e;
		}
	}
	{
		int32_t L_13;
		L_13 = ((  int32_t (*) (Dictionary_2_tA9CFEFF33EC9A214A3FA9A889B9D8EAE95A49902*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 29)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		KeyValuePair_2U5BU5D_tFBE07C34404F8F624202E7C9A32A37AC93DCD171* L_14 = (KeyValuePair_2U5BU5D_tFBE07C34404F8F624202E7C9A32A37AC93DCD171*)(KeyValuePair_2U5BU5D_tFBE07C34404F8F624202E7C9A32A37AC93DCD171*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 35), (uint32_t)L_13);
		V_0 = L_14;
		KeyValuePair_2U5BU5D_tFBE07C34404F8F624202E7C9A32A37AC93DCD171* L_15 = V_0;
		((  void (*) (Dictionary_2_tA9CFEFF33EC9A214A3FA9A889B9D8EAE95A49902*, KeyValuePair_2U5BU5D_tFBE07C34404F8F624202E7C9A32A37AC93DCD171*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 36)))(__this, L_15, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 36));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_16 = ___info0;
		KeyValuePair_2U5BU5D_tFBE07C34404F8F624202E7C9A32A37AC93DCD171* L_17 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 37)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		NullCheck(L_16);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(L_16, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, (RuntimeObject*)L_17, L_19, NULL);
	}

IL_008e:
	{
		return;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.UInt32>::FindEntry(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_mFDDE03487A9DBBEEC3E8CFBAD528163AF2FBFA1D_gshared (Dictionary_2_tA9CFEFF33EC9A214A3FA9A889B9D8EAE95A49902* __this, RuntimeObject* ___key0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	EntryU5BU5D_tDDCFB52378DF4C6064B3947E47DE072BE041758E* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	int32_t V_5 = 0;
	RuntimeObject* V_6 = NULL;
	EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* V_7 = NULL;
	int32_t V_8 = 0;
	{
		RuntimeObject* L_0 = ___key0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_000e:
	{
		V_0 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		V_1 = L_1;
		EntryU5BU5D_tDDCFB52378DF4C6064B3947E47DE072BE041758E* L_2 = (EntryU5BU5D_tDDCFB52378DF4C6064B3947E47DE072BE041758E*)__this->____entries_1;
		V_2 = L_2;
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = V_1;
		if (!L_3)
		{
			goto IL_0175;
		}
	}
	{
		RuntimeObject* L_4 = (RuntimeObject*)__this->____comparer_6;
		V_4 = L_4;
		RuntimeObject* L_5 = V_4;
		if (L_5)
		{
			goto IL_0110;
		}
	}
	{
		NullCheck((___key0));
		int32_t L_6;
		L_6 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, (___key0));
		V_5 = ((int32_t)(L_6&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = V_1;
		int32_t L_8 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = V_1;
		NullCheck(L_9);
		NullCheck(L_7);
		int32_t L_10 = ((int32_t)(L_8%((int32_t)(((RuntimeArray*)L_9)->max_length))));
		int32_t L_11 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_11, 1));
		il2cpp_codegen_initobj((&V_6), sizeof(RuntimeObject*));
		RuntimeObject* L_12 = V_6;
		if (!L_12)
		{
			goto IL_00b9;
		}
	}

IL_0066:
	{
		int32_t L_13 = V_0;
		EntryU5BU5D_tDDCFB52378DF4C6064B3947E47DE072BE041758E* L_14 = V_2;
		NullCheck(L_14);
		if ((!(((uint32_t)L_13) < ((uint32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_tDDCFB52378DF4C6064B3947E47DE072BE041758E* L_15 = V_2;
		int32_t L_16 = V_0;
		NullCheck(L_15);
		int32_t L_17 = (int32_t)((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___hashCode_0;
		int32_t L_18 = V_5;
		if ((!(((uint32_t)L_17) == ((uint32_t)L_18))))
		{
			goto IL_009b;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_19;
		L_19 = ((  EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		EntryU5BU5D_tDDCFB52378DF4C6064B3947E47DE072BE041758E* L_20 = V_2;
		int32_t L_21 = V_0;
		NullCheck(L_20);
		RuntimeObject* L_22 = (RuntimeObject*)((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___key_2;
		RuntimeObject* L_23 = ___key0;
		NullCheck(L_19);
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Object>::Equals(T,T) */, L_19, L_22, L_23);
		if (L_24)
		{
			goto IL_0175;
		}
	}

IL_009b:
	{
		EntryU5BU5D_tDDCFB52378DF4C6064B3947E47DE072BE041758E* L_25 = V_2;
		int32_t L_26 = V_0;
		NullCheck(L_25);
		int32_t L_27 = (int32_t)((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___next_1;
		V_0 = L_27;
		int32_t L_28 = V_3;
		EntryU5BU5D_tDDCFB52378DF4C6064B3947E47DE072BE041758E* L_29 = V_2;
		NullCheck(L_29);
		if ((((int32_t)L_28) < ((int32_t)((int32_t)(((RuntimeArray*)L_29)->max_length)))))
		{
			goto IL_00b3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_00b3:
	{
		int32_t L_30 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_30, 1));
		goto IL_0066;
	}

IL_00b9:
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_31;
		L_31 = ((  EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		V_7 = L_31;
	}

IL_00c0:
	{
		int32_t L_32 = V_0;
		EntryU5BU5D_tDDCFB52378DF4C6064B3947E47DE072BE041758E* L_33 = V_2;
		NullCheck(L_33);
		if ((!(((uint32_t)L_32) < ((uint32_t)((int32_t)(((RuntimeArray*)L_33)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_tDDCFB52378DF4C6064B3947E47DE072BE041758E* L_34 = V_2;
		int32_t L_35 = V_0;
		NullCheck(L_34);
		int32_t L_36 = (int32_t)((L_34)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_35)))->___hashCode_0;
		int32_t L_37 = V_5;
		if ((!(((uint32_t)L_36) == ((uint32_t)L_37))))
		{
			goto IL_00f2;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_38 = V_7;
		EntryU5BU5D_tDDCFB52378DF4C6064B3947E47DE072BE041758E* L_39 = V_2;
		int32_t L_40 = V_0;
		NullCheck(L_39);
		RuntimeObject* L_41 = (RuntimeObject*)((L_39)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_40)))->___key_2;
		RuntimeObject* L_42 = ___key0;
		NullCheck(L_38);
		bool L_43;
		L_43 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Object>::Equals(T,T) */, L_38, L_41, L_42);
		if (L_43)
		{
			goto IL_0175;
		}
	}

IL_00f2:
	{
		EntryU5BU5D_tDDCFB52378DF4C6064B3947E47DE072BE041758E* L_44 = V_2;
		int32_t L_45 = V_0;
		NullCheck(L_44);
		int32_t L_46 = (int32_t)((L_44)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_45)))->___next_1;
		V_0 = L_46;
		int32_t L_47 = V_3;
		EntryU5BU5D_tDDCFB52378DF4C6064B3947E47DE072BE041758E* L_48 = V_2;
		NullCheck(L_48);
		if ((((int32_t)L_47) < ((int32_t)((int32_t)(((RuntimeArray*)L_48)->max_length)))))
		{
			goto IL_010a;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_010a:
	{
		int32_t L_49 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_49, 1));
		goto IL_00c0;
	}

IL_0110:
	{
		RuntimeObject* L_50 = V_4;
		RuntimeObject* L_51 = ___key0;
		NullCheck(L_50);
		int32_t L_52;
		L_52 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Object>::GetHashCode(T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 41), L_50, L_51);
		V_8 = ((int32_t)(L_52&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_53 = V_1;
		int32_t L_54 = V_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_55 = V_1;
		NullCheck(L_55);
		NullCheck(L_53);
		int32_t L_56 = ((int32_t)(L_54%((int32_t)(((RuntimeArray*)L_55)->max_length))));
		int32_t L_57 = (L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_56));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_57, 1));
	}

IL_012b:
	{
		int32_t L_58 = V_0;
		EntryU5BU5D_tDDCFB52378DF4C6064B3947E47DE072BE041758E* L_59 = V_2;
		NullCheck(L_59);
		if ((!(((uint32_t)L_58) < ((uint32_t)((int32_t)(((RuntimeArray*)L_59)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_tDDCFB52378DF4C6064B3947E47DE072BE041758E* L_60 = V_2;
		int32_t L_61 = V_0;
		NullCheck(L_60);
		int32_t L_62 = (int32_t)((L_60)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_61)))->___hashCode_0;
		int32_t L_63 = V_8;
		if ((!(((uint32_t)L_62) == ((uint32_t)L_63))))
		{
			goto IL_0157;
		}
	}
	{
		RuntimeObject* L_64 = V_4;
		EntryU5BU5D_tDDCFB52378DF4C6064B3947E47DE072BE041758E* L_65 = V_2;
		int32_t L_66 = V_0;
		NullCheck(L_65);
		RuntimeObject* L_67 = (RuntimeObject*)((L_65)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_66)))->___key_2;
		RuntimeObject* L_68 = ___key0;
		NullCheck(L_64);
		bool L_69;
		L_69 = InterfaceFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Object>::Equals(T,T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 41), L_64, L_67, L_68);
		if (L_69)
		{
			goto IL_0175;
		}
	}

IL_0157:
	{
		EntryU5BU5D_tDDCFB52378DF4C6064B3947E47DE072BE041758E* L_70 = V_2;
		int32_t L_71 = V_0;
		NullCheck(L_70);
		int32_t L_72 = (int32_t)((L_70)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_71)))->___next_1;
		V_0 = L_72;
		int32_t L_73 = V_3;
		EntryU5BU5D_tDDCFB52378DF4C6064B3947E47DE072BE041758E* L_74 = V_2;
		NullCheck(L_74);
		if ((((int32_t)L_73) < ((int32_t)((int32_t)(((RuntimeArray*)L_74)->max_length)))))
		{
			goto IL_016f;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_016f:
	{
		int32_t L_75 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_75, 1));
		goto IL_012b;
	}

IL_0175:
	{
		int32_t L_76 = V_0;
		return L_76;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.UInt32>::Initialize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_mD2EF29521502461B68E4C980B73741654BD6FFD2_gshared (Dictionary_2_tA9CFEFF33EC9A214A3FA9A889B9D8EAE95A49902* __this, int32_t ___capacity0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___capacity0;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_0, NULL);
		V_0 = L_1;
		__this->____freeList_3 = (-1);
		int32_t L_2 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_2);
		__this->____buckets_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets_0), (void*)L_3);
		int32_t L_4 = V_0;
		EntryU5BU5D_tDDCFB52378DF4C6064B3947E47DE072BE041758E* L_5 = (EntryU5BU5D_tDDCFB52378DF4C6064B3947E47DE072BE041758E*)(EntryU5BU5D_tDDCFB52378DF4C6064B3947E47DE072BE041758E*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 44), (uint32_t)L_4);
		__this->____entries_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries_1), (void*)L_5);
		int32_t L_6 = V_0;
		return L_6;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.UInt32>::TryInsert(TKey,TValue,System.Collections.Generic.InsertionBehavior)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_m2620D44E1CDC4CD2093620924EAC8CB974B170CA_gshared (Dictionary_2_tA9CFEFF33EC9A214A3FA9A889B9D8EAE95A49902* __this, RuntimeObject* ___key0, uint32_t ___value1, uint8_t ___behavior2, const RuntimeMethod* method) 
{
	EntryU5BU5D_tDDCFB52378DF4C6064B3947E47DE072BE041758E* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	int32_t V_8 = 0;
	int32_t* V_9 = NULL;
	Entry_tC2C8EF34432BD0CDF0164C3590A242BCE9864A56* V_10 = NULL;
	RuntimeObject* V_11 = NULL;
	EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t G_B7_0 = 0;
	int32_t* G_B51_0 = NULL;
	{
		RuntimeObject* L_0 = ___key0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_000e:
	{
		int32_t L_1 = (int32_t)__this->____version_5;
		__this->____version_5 = ((int32_t)il2cpp_codegen_add(L_1, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		if (L_2)
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_3;
		L_3 = ((  int32_t (*) (Dictionary_2_tA9CFEFF33EC9A214A3FA9A889B9D8EAE95A49902*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(__this, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
	}

IL_002c:
	{
		EntryU5BU5D_tDDCFB52378DF4C6064B3947E47DE072BE041758E* L_4 = (EntryU5BU5D_tDDCFB52378DF4C6064B3947E47DE072BE041758E*)__this->____entries_1;
		V_0 = L_4;
		RuntimeObject* L_5 = (RuntimeObject*)__this->____comparer_6;
		V_1 = L_5;
		RuntimeObject* L_6 = V_1;
		if (!L_6)
		{
			goto IL_0046;
		}
	}
	{
		RuntimeObject* L_7 = V_1;
		RuntimeObject* L_8 = ___key0;
		NullCheck(L_7);
		int32_t L_9;
		L_9 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Object>::GetHashCode(T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 41), L_7, L_8);
		G_B7_0 = L_9;
		goto IL_0053;
	}

IL_0046:
	{
		NullCheck((___key0));
		int32_t L_10;
		L_10 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, (___key0));
		G_B7_0 = L_10;
	}

IL_0053:
	{
		V_2 = ((int32_t)(G_B7_0&((int32_t)2147483647LL)));
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		int32_t L_12 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_13);
		NullCheck(L_11);
		V_4 = ((L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_12%((int32_t)(((RuntimeArray*)L_13)->max_length)))))));
		int32_t* L_14 = V_4;
		int32_t L_15 = *((int32_t*)L_14);
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_15, 1));
		RuntimeObject* L_16 = V_1;
		if (L_16)
		{
			goto IL_0187;
		}
	}
	{
		il2cpp_codegen_initobj((&V_11), sizeof(RuntimeObject*));
		RuntimeObject* L_17 = V_11;
		if (!L_17)
		{
			goto IL_010a;
		}
	}

IL_0091:
	{
		int32_t L_18 = V_5;
		EntryU5BU5D_tDDCFB52378DF4C6064B3947E47DE072BE041758E* L_19 = V_0;
		NullCheck(L_19);
		if ((!(((uint32_t)L_18) < ((uint32_t)((int32_t)(((RuntimeArray*)L_19)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_tDDCFB52378DF4C6064B3947E47DE072BE041758E* L_20 = V_0;
		int32_t L_21 = V_5;
		NullCheck(L_20);
		int32_t L_22 = (int32_t)((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___hashCode_0;
		int32_t L_23 = V_2;
		if ((!(((uint32_t)L_22) == ((uint32_t)L_23))))
		{
			goto IL_00ea;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_24;
		L_24 = ((  EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		EntryU5BU5D_tDDCFB52378DF4C6064B3947E47DE072BE041758E* L_25 = V_0;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		RuntimeObject* L_27 = (RuntimeObject*)((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___key_2;
		RuntimeObject* L_28 = ___key0;
		NullCheck(L_24);
		bool L_29;
		L_29 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Object>::Equals(T,T) */, L_24, L_27, L_28);
		if (!L_29)
		{
			goto IL_00ea;
		}
	}
	{
		uint8_t L_30 = ___behavior2;
		if ((!(((uint32_t)L_30) == ((uint32_t)1))))
		{
			goto IL_00d9;
		}
	}
	{
		EntryU5BU5D_tDDCFB52378DF4C6064B3947E47DE072BE041758E* L_31 = V_0;
		int32_t L_32 = V_5;
		NullCheck(L_31);
		uint32_t L_33 = ___value1;
		((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___value_3 = L_33;
		return (bool)1;
	}

IL_00d9:
	{
		uint8_t L_34 = ___behavior2;
		if ((!(((uint32_t)L_34) == ((uint32_t)2))))
		{
			goto IL_00e8;
		}
	}
	{
		RuntimeObject* L_35 = ___key0;
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_35, NULL);
	}

IL_00e8:
	{
		return (bool)0;
	}

IL_00ea:
	{
		EntryU5BU5D_tDDCFB52378DF4C6064B3947E47DE072BE041758E* L_36 = V_0;
		int32_t L_37 = V_5;
		NullCheck(L_36);
		int32_t L_38 = (int32_t)((L_36)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_37)))->___next_1;
		V_5 = L_38;
		int32_t L_39 = V_3;
		EntryU5BU5D_tDDCFB52378DF4C6064B3947E47DE072BE041758E* L_40 = V_0;
		NullCheck(L_40);
		if ((((int32_t)L_39) < ((int32_t)((int32_t)(((RuntimeArray*)L_40)->max_length)))))
		{
			goto IL_0104;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_0104:
	{
		int32_t L_41 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_41, 1));
		goto IL_0091;
	}

IL_010a:
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_42;
		L_42 = ((  EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		V_12 = L_42;
	}

IL_0111:
	{
		int32_t L_43 = V_5;
		EntryU5BU5D_tDDCFB52378DF4C6064B3947E47DE072BE041758E* L_44 = V_0;
		NullCheck(L_44);
		if ((!(((uint32_t)L_43) < ((uint32_t)((int32_t)(((RuntimeArray*)L_44)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_tDDCFB52378DF4C6064B3947E47DE072BE041758E* L_45 = V_0;
		int32_t L_46 = V_5;
		NullCheck(L_45);
		int32_t L_47 = (int32_t)((L_45)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_46)))->___hashCode_0;
		int32_t L_48 = V_2;
		if ((!(((uint32_t)L_47) == ((uint32_t)L_48))))
		{
			goto IL_0167;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_49 = V_12;
		EntryU5BU5D_tDDCFB52378DF4C6064B3947E47DE072BE041758E* L_50 = V_0;
		int32_t L_51 = V_5;
		NullCheck(L_50);
		RuntimeObject* L_52 = (RuntimeObject*)((L_50)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_51)))->___key_2;
		RuntimeObject* L_53 = ___key0;
		NullCheck(L_49);
		bool L_54;
		L_54 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Object>::Equals(T,T) */, L_49, L_52, L_53);
		if (!L_54)
		{
			goto IL_0167;
		}
	}
	{
		uint8_t L_55 = ___behavior2;
		if ((!(((uint32_t)L_55) == ((uint32_t)1))))
		{
			goto IL_0156;
		}
	}
	{
		EntryU5BU5D_tDDCFB52378DF4C6064B3947E47DE072BE041758E* L_56 = V_0;
		int32_t L_57 = V_5;
		NullCheck(L_56);
		uint32_t L_58 = ___value1;
		((L_56)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_57)))->___value_3 = L_58;
		return (bool)1;
	}

IL_0156:
	{
		uint8_t L_59 = ___behavior2;
		if ((!(((uint32_t)L_59) == ((uint32_t)2))))
		{
			goto IL_0165;
		}
	}
	{
		RuntimeObject* L_60 = ___key0;
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_60, NULL);
	}

IL_0165:
	{
		return (bool)0;
	}

IL_0167:
	{
		EntryU5BU5D_tDDCFB52378DF4C6064B3947E47DE072BE041758E* L_61 = V_0;
		int32_t L_62 = V_5;
		NullCheck(L_61);
		int32_t L_63 = (int32_t)((L_61)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_62)))->___next_1;
		V_5 = L_63;
		int32_t L_64 = V_3;
		EntryU5BU5D_tDDCFB52378DF4C6064B3947E47DE072BE041758E* L_65 = V_0;
		NullCheck(L_65);
		if ((((int32_t)L_64) < ((int32_t)((int32_t)(((RuntimeArray*)L_65)->max_length)))))
		{
			goto IL_0181;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_0181:
	{
		int32_t L_66 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_66, 1));
		goto IL_0111;
	}

IL_0187:
	{
		int32_t L_67 = V_5;
		EntryU5BU5D_tDDCFB52378DF4C6064B3947E47DE072BE041758E* L_68 = V_0;
		NullCheck(L_68);
		if ((!(((uint32_t)L_67) < ((uint32_t)((int32_t)(((RuntimeArray*)L_68)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_tDDCFB52378DF4C6064B3947E47DE072BE041758E* L_69 = V_0;
		int32_t L_70 = V_5;
		NullCheck(L_69);
		int32_t L_71 = (int32_t)((L_69)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_70)))->___hashCode_0;
		int32_t L_72 = V_2;
		if ((!(((uint32_t)L_71) == ((uint32_t)L_72))))
		{
			goto IL_01d9;
		}
	}
	{
		RuntimeObject* L_73 = V_1;
		EntryU5BU5D_tDDCFB52378DF4C6064B3947E47DE072BE041758E* L_74 = V_0;
		int32_t L_75 = V_5;
		NullCheck(L_74);
		RuntimeObject* L_76 = (RuntimeObject*)((L_74)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_75)))->___key_2;
		RuntimeObject* L_77 = ___key0;
		NullCheck(L_73);
		bool L_78;
		L_78 = InterfaceFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Object>::Equals(T,T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 41), L_73, L_76, L_77);
		if (!L_78)
		{
			goto IL_01d9;
		}
	}
	{
		uint8_t L_79 = ___behavior2;
		if ((!(((uint32_t)L_79) == ((uint32_t)1))))
		{
			goto IL_01c8;
		}
	}
	{
		EntryU5BU5D_tDDCFB52378DF4C6064B3947E47DE072BE041758E* L_80 = V_0;
		int32_t L_81 = V_5;
		NullCheck(L_80);
		uint32_t L_82 = ___value1;
		((L_80)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_81)))->___value_3 = L_82;
		return (bool)1;
	}

IL_01c8:
	{
		uint8_t L_83 = ___behavior2;
		if ((!(((uint32_t)L_83) == ((uint32_t)2))))
		{
			goto IL_01d7;
		}
	}
	{
		RuntimeObject* L_84 = ___key0;
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_84, NULL);
	}

IL_01d7:
	{
		return (bool)0;
	}

IL_01d9:
	{
		EntryU5BU5D_tDDCFB52378DF4C6064B3947E47DE072BE041758E* L_85 = V_0;
		int32_t L_86 = V_5;
		NullCheck(L_85);
		int32_t L_87 = (int32_t)((L_85)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_86)))->___next_1;
		V_5 = L_87;
		int32_t L_88 = V_3;
		EntryU5BU5D_tDDCFB52378DF4C6064B3947E47DE072BE041758E* L_89 = V_0;
		NullCheck(L_89);
		if ((((int32_t)L_88) < ((int32_t)((int32_t)(((RuntimeArray*)L_89)->max_length)))))
		{
			goto IL_01f3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_01f3:
	{
		int32_t L_90 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_90, 1));
		goto IL_0187;
	}

IL_01f9:
	{
		V_6 = (bool)0;
		V_7 = (bool)0;
		int32_t L_91 = (int32_t)__this->____freeCount_4;
		if ((((int32_t)L_91) <= ((int32_t)0)))
		{
			goto IL_0223;
		}
	}
	{
		int32_t L_92 = (int32_t)__this->____freeList_3;
		V_8 = L_92;
		V_7 = (bool)1;
		int32_t L_93 = (int32_t)__this->____freeCount_4;
		__this->____freeCount_4 = ((int32_t)il2cpp_codegen_subtract(L_93, 1));
		goto IL_0250;
	}

IL_0223:
	{
		int32_t L_94 = (int32_t)__this->____count_2;
		V_13 = L_94;
		int32_t L_95 = V_13;
		EntryU5BU5D_tDDCFB52378DF4C6064B3947E47DE072BE041758E* L_96 = V_0;
		NullCheck(L_96);
		if ((!(((uint32_t)L_95) == ((uint32_t)((int32_t)(((RuntimeArray*)L_96)->max_length))))))
		{
			goto IL_023b;
		}
	}
	{
		((  void (*) (Dictionary_2_tA9CFEFF33EC9A214A3FA9A889B9D8EAE95A49902*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 45)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 45));
		V_6 = (bool)1;
	}

IL_023b:
	{
		int32_t L_97 = V_13;
		V_8 = L_97;
		int32_t L_98 = V_13;
		__this->____count_2 = ((int32_t)il2cpp_codegen_add(L_98, 1));
		EntryU5BU5D_tDDCFB52378DF4C6064B3947E47DE072BE041758E* L_99 = (EntryU5BU5D_tDDCFB52378DF4C6064B3947E47DE072BE041758E*)__this->____entries_1;
		V_0 = L_99;
	}

IL_0250:
	{
		bool L_100 = V_6;
		if (L_100)
		{
			goto IL_0258;
		}
	}
	{
		int32_t* L_101 = V_4;
		G_B51_0 = L_101;
		goto IL_026d;
	}

IL_0258:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_102 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		int32_t L_103 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_104 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_104);
		NullCheck(L_102);
		G_B51_0 = ((L_102)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_103%((int32_t)(((RuntimeArray*)L_104)->max_length)))))));
	}

IL_026d:
	{
		V_9 = G_B51_0;
		EntryU5BU5D_tDDCFB52378DF4C6064B3947E47DE072BE041758E* L_105 = V_0;
		int32_t L_106 = V_8;
		NullCheck(L_105);
		V_10 = ((L_105)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_106)));
		bool L_107 = V_7;
		if (!L_107)
		{
			goto IL_028a;
		}
	}
	{
		Entry_tC2C8EF34432BD0CDF0164C3590A242BCE9864A56* L_108 = V_10;
		int32_t L_109 = (int32_t)L_108->___next_1;
		__this->____freeList_3 = L_109;
	}

IL_028a:
	{
		Entry_tC2C8EF34432BD0CDF0164C3590A242BCE9864A56* L_110 = V_10;
		int32_t L_111 = V_2;
		L_110->___hashCode_0 = L_111;
		Entry_tC2C8EF34432BD0CDF0164C3590A242BCE9864A56* L_112 = V_10;
		int32_t* L_113 = V_9;
		int32_t L_114 = *((int32_t*)L_113);
		L_112->___next_1 = ((int32_t)il2cpp_codegen_subtract(L_114, 1));
		Entry_tC2C8EF34432BD0CDF0164C3590A242BCE9864A56* L_115 = V_10;
		RuntimeObject* L_116 = ___key0;
		L_115->___key_2 = L_116;
		Il2CppCodeGenWriteBarrier((void**)(&L_115->___key_2), (void*)L_116);
		Entry_tC2C8EF34432BD0CDF0164C3590A242BCE9864A56* L_117 = V_10;
		uint32_t L_118 = ___value1;
		L_117->___value_3 = L_118;
		int32_t* L_119 = V_9;
		int32_t L_120 = V_8;
		*((int32_t*)L_119) = (int32_t)((int32_t)il2cpp_codegen_add(L_120, 1));
		return (bool)1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt32>::OnDeserialization(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_OnDeserialization_m8D6804C983B57B7488FDC34E393244EED71292C9_gshared (Dictionary_2_tA9CFEFF33EC9A214A3FA9A889B9D8EAE95A49902* __this, RuntimeObject* ___sender0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	KeyValuePair_2U5BU5D_tFBE07C34404F8F624202E7C9A32A37AC93DCD171* V_3 = NULL;
	int32_t V_4 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F(L_0, (RuntimeObject*)__this, (&V_0), ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_2 = V_0;
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_3, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, NULL);
		V_1 = L_4;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_5, _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69, NULL);
		V_2 = L_6;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_7 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 34)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		RuntimeObject* L_10;
		L_10 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_7, _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9, L_9, NULL);
		__this->____comparer_6 = ((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 41)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer_6), (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 41))));
		int32_t L_11 = V_2;
		if (!L_11)
		{
			goto IL_00c9;
		}
	}
	{
		int32_t L_12 = V_2;
		int32_t L_13;
		L_13 = ((  int32_t (*) (Dictionary_2_tA9CFEFF33EC9A214A3FA9A889B9D8EAE95A49902*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(__this, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_14 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 37)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		NullCheck(L_14);
		RuntimeObject* L_17;
		L_17 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_14, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, L_16, NULL);
		V_3 = ((KeyValuePair_2U5BU5D_tFBE07C34404F8F624202E7C9A32A37AC93DCD171*)Castclass((RuntimeObject*)L_17, il2cpp_rgctx_data(method->klass->rgctx_data, 46)));
		KeyValuePair_2U5BU5D_tFBE07C34404F8F624202E7C9A32A37AC93DCD171* L_18 = V_3;
		if (L_18)
		{
			goto IL_007a;
		}
	}
	{
		ThrowHelper_ThrowSerializationException_m03BE2B48CD3617C32FBCEE16030F7C5563E04E16((int32_t)((int32_t)16), NULL);
	}

IL_007a:
	{
		V_4 = 0;
		goto IL_00c0;
	}

IL_007f:
	{
		KeyValuePair_2U5BU5D_tFBE07C34404F8F624202E7C9A32A37AC93DCD171* L_19 = V_3;
		int32_t L_20 = V_4;
		NullCheck(L_19);
		RuntimeObject* L_21;
		L_21 = KeyValuePair_2_get_Key_m580D4010966F948701F9955EB40BBD5AA9964565_inline(((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20))), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		if (L_21)
		{
			goto IL_009a;
		}
	}
	{
		ThrowHelper_ThrowSerializationException_m03BE2B48CD3617C32FBCEE16030F7C5563E04E16((int32_t)((int32_t)17), NULL);
	}

IL_009a:
	{
		KeyValuePair_2U5BU5D_tFBE07C34404F8F624202E7C9A32A37AC93DCD171* L_22 = V_3;
		int32_t L_23 = V_4;
		NullCheck(L_22);
		RuntimeObject* L_24;
		L_24 = KeyValuePair_2_get_Key_m580D4010966F948701F9955EB40BBD5AA9964565_inline(((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23))), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		KeyValuePair_2U5BU5D_tFBE07C34404F8F624202E7C9A32A37AC93DCD171* L_25 = V_3;
		int32_t L_26 = V_4;
		NullCheck(L_25);
		uint32_t L_27;
		L_27 = KeyValuePair_2_get_Value_mAFD58B7195CA80B3A58A19185A2B2A4A70B2A726_inline(((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26))), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		((  void (*) (Dictionary_2_tA9CFEFF33EC9A214A3FA9A889B9D8EAE95A49902*, RuntimeObject*, uint32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(__this, L_24, L_27, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		int32_t L_28 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_00c0:
	{
		int32_t L_29 = V_4;
		KeyValuePair_2U5BU5D_tFBE07C34404F8F624202E7C9A32A37AC93DCD171* L_30 = V_3;
		NullCheck(L_30);
		if ((((int32_t)L_29) < ((int32_t)((int32_t)(((RuntimeArray*)L_30)->max_length)))))
		{
			goto IL_007f;
		}
	}
	{
		goto IL_00d0;
	}

IL_00c9:
	{
		__this->____buckets_0 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets_0), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
	}

IL_00d0:
	{
		int32_t L_31 = V_1;
		__this->____version_5 = L_31;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_32;
		L_32 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		NullCheck(L_32);
		bool L_33;
		L_33 = ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E(L_32, (RuntimeObject*)__this, ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt32>::Resize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m9FE182ADB3243D2BE2E80A251047B4340918944A_gshared (Dictionary_2_tA9CFEFF33EC9A214A3FA9A889B9D8EAE95A49902* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = (int32_t)__this->____count_2;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_ExpandPrime_m9A35EC171AA0EA16F7C9F71EE6FAD5A82565ADB9(L_0, NULL);
		((  void (*) (Dictionary_2_tA9CFEFF33EC9A214A3FA9A889B9D8EAE95A49902*, int32_t, bool, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 47)))(__this, L_1, (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 47));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt32>::Resize(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_mFB35F8FD1C5D23012EDF0DB67CC8AB5DF2ADBDC0_gshared (Dictionary_2_tA9CFEFF33EC9A214A3FA9A889B9D8EAE95A49902* __this, int32_t ___newSize0, bool ___forceNewHashCodes1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	EntryU5BU5D_tDDCFB52378DF4C6064B3947E47DE072BE041758E* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		int32_t L_0 = ___newSize0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = ___newSize0;
		EntryU5BU5D_tDDCFB52378DF4C6064B3947E47DE072BE041758E* L_3 = (EntryU5BU5D_tDDCFB52378DF4C6064B3947E47DE072BE041758E*)(EntryU5BU5D_tDDCFB52378DF4C6064B3947E47DE072BE041758E*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 44), (uint32_t)L_2);
		V_1 = L_3;
		int32_t L_4 = (int32_t)__this->____count_2;
		V_2 = L_4;
		EntryU5BU5D_tDDCFB52378DF4C6064B3947E47DE072BE041758E* L_5 = (EntryU5BU5D_tDDCFB52378DF4C6064B3947E47DE072BE041758E*)__this->____entries_1;
		EntryU5BU5D_tDDCFB52378DF4C6064B3947E47DE072BE041758E* L_6 = V_1;
		int32_t L_7 = V_2;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, 0, (RuntimeArray*)L_6, 0, L_7, NULL);
		il2cpp_codegen_initobj((&V_3), sizeof(RuntimeObject*));
		RuntimeObject* L_8 = V_3;
		bool L_9 = ___forceNewHashCodes1;
		if (!((int32_t)(((((RuntimeObject*)(RuntimeObject*)L_8) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0)&(int32_t)L_9)))
		{
			goto IL_0084;
		}
	}
	{
		V_4 = 0;
		goto IL_007f;
	}

IL_003e:
	{
		EntryU5BU5D_tDDCFB52378DF4C6064B3947E47DE072BE041758E* L_10 = V_1;
		int32_t L_11 = V_4;
		NullCheck(L_10);
		int32_t L_12 = (int32_t)((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)))->___hashCode_0;
		if ((((int32_t)L_12) < ((int32_t)0)))
		{
			goto IL_0079;
		}
	}
	{
		EntryU5BU5D_tDDCFB52378DF4C6064B3947E47DE072BE041758E* L_13 = V_1;
		int32_t L_14 = V_4;
		NullCheck(L_13);
		EntryU5BU5D_tDDCFB52378DF4C6064B3947E47DE072BE041758E* L_15 = V_1;
		int32_t L_16 = V_4;
		NullCheck(L_15);
		RuntimeObject** L_17 = (RuntimeObject**)(&((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___key_2);
		NullCheck((*L_17));
		int32_t L_18;
		L_18 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, (*L_17));
		((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)))->___hashCode_0 = ((int32_t)(L_18&((int32_t)2147483647LL)));
	}

IL_0079:
	{
		int32_t L_19 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_007f:
	{
		int32_t L_20 = V_4;
		int32_t L_21 = V_2;
		if ((((int32_t)L_20) < ((int32_t)L_21)))
		{
			goto IL_003e;
		}
	}

IL_0084:
	{
		V_5 = 0;
		goto IL_00cb;
	}

IL_0089:
	{
		EntryU5BU5D_tDDCFB52378DF4C6064B3947E47DE072BE041758E* L_22 = V_1;
		int32_t L_23 = V_5;
		NullCheck(L_22);
		int32_t L_24 = (int32_t)((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23)))->___hashCode_0;
		if ((((int32_t)L_24) < ((int32_t)0)))
		{
			goto IL_00c5;
		}
	}
	{
		EntryU5BU5D_tDDCFB52378DF4C6064B3947E47DE072BE041758E* L_25 = V_1;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		int32_t L_27 = (int32_t)((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___hashCode_0;
		int32_t L_28 = ___newSize0;
		V_6 = ((int32_t)(L_27%L_28));
		EntryU5BU5D_tDDCFB52378DF4C6064B3947E47DE072BE041758E* L_29 = V_1;
		int32_t L_30 = V_5;
		NullCheck(L_29);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = V_0;
		int32_t L_32 = V_6;
		NullCheck(L_31);
		int32_t L_33 = L_32;
		int32_t L_34 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		((L_29)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_30)))->___next_1 = ((int32_t)il2cpp_codegen_subtract(L_34, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_35 = V_0;
		int32_t L_36 = V_6;
		int32_t L_37 = V_5;
		NullCheck(L_35);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(L_36), (int32_t)((int32_t)il2cpp_codegen_add(L_37, 1)));
	}

IL_00c5:
	{
		int32_t L_38 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
	}

IL_00cb:
	{
		int32_t L_39 = V_5;
		int32_t L_40 = V_2;
		if ((((int32_t)L_39) < ((int32_t)L_40)))
		{
			goto IL_0089;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_41 = V_0;
		__this->____buckets_0 = L_41;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets_0), (void*)L_41);
		EntryU5BU5D_tDDCFB52378DF4C6064B3947E47DE072BE041758E* L_42 = V_1;
		__this->____entries_1 = L_42;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries_1), (void*)L_42);
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.UInt32>::Remove(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m9AF48CC85F2571214930DF9DD781663C25A6BF63_gshared (Dictionary_2_tA9CFEFF33EC9A214A3FA9A889B9D8EAE95A49902* __this, RuntimeObject* ___key0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Entry_tC2C8EF34432BD0CDF0164C3590A242BCE9864A56* V_4 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	RuntimeObject* G_B10_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	bool G_B11_0 = false;
	{
		RuntimeObject* L_0 = ___key0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_000e:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		if (!L_1)
		{
			goto IL_0149;
		}
	}
	{
		RuntimeObject* L_2 = (RuntimeObject*)__this->____comparer_6;
		RuntimeObject* L_3 = L_2;
		G_B4_0 = L_3;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_0032;
		}
	}
	{
		NullCheck((___key0));
		int32_t L_4;
		L_4 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, (___key0));
		G_B6_0 = L_4;
		goto IL_0038;
	}

IL_0032:
	{
		RuntimeObject* L_5 = ___key0;
		NullCheck(G_B5_0);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Object>::GetHashCode(T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 41), G_B5_0, L_5);
		G_B6_0 = L_6;
	}

IL_0038:
	{
		V_0 = ((int32_t)(G_B6_0&((int32_t)2147483647LL)));
		int32_t L_7 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_8);
		V_1 = ((int32_t)(L_7%((int32_t)(((RuntimeArray*)L_8)->max_length))));
		V_2 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		int32_t L_10 = V_1;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		int32_t L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
		goto IL_0142;
	}

IL_005c:
	{
		EntryU5BU5D_tDDCFB52378DF4C6064B3947E47DE072BE041758E* L_13 = (EntryU5BU5D_tDDCFB52378DF4C6064B3947E47DE072BE041758E*)__this->____entries_1;
		int32_t L_14 = V_3;
		NullCheck(L_13);
		V_4 = ((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)));
		Entry_tC2C8EF34432BD0CDF0164C3590A242BCE9864A56* L_15 = V_4;
		int32_t L_16 = (int32_t)L_15->___hashCode_0;
		int32_t L_17 = V_0;
		if ((!(((uint32_t)L_16) == ((uint32_t)L_17))))
		{
			goto IL_0138;
		}
	}
	{
		RuntimeObject* L_18 = (RuntimeObject*)__this->____comparer_6;
		RuntimeObject* L_19 = L_18;
		G_B9_0 = L_19;
		if (L_19)
		{
			G_B10_0 = L_19;
			goto IL_0095;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_20;
		L_20 = ((  EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		Entry_tC2C8EF34432BD0CDF0164C3590A242BCE9864A56* L_21 = V_4;
		RuntimeObject* L_22 = (RuntimeObject*)L_21->___key_2;
		RuntimeObject* L_23 = ___key0;
		NullCheck(L_20);
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Object>::Equals(T,T) */, L_20, L_22, L_23);
		G_B11_0 = L_24;
		goto IL_00a2;
	}

IL_0095:
	{
		Entry_tC2C8EF34432BD0CDF0164C3590A242BCE9864A56* L_25 = V_4;
		RuntimeObject* L_26 = (RuntimeObject*)L_25->___key_2;
		RuntimeObject* L_27 = ___key0;
		NullCheck(G_B10_0);
		bool L_28;
		L_28 = InterfaceFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Object>::Equals(T,T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 41), G_B10_0, L_26, L_27);
		G_B11_0 = L_28;
	}

IL_00a2:
	{
		if (!G_B11_0)
		{
			goto IL_0138;
		}
	}
	{
		int32_t L_29 = V_2;
		if ((((int32_t)L_29) >= ((int32_t)0)))
		{
			goto IL_00be;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_30 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		int32_t L_31 = V_1;
		Entry_tC2C8EF34432BD0CDF0164C3590A242BCE9864A56* L_32 = V_4;
		int32_t L_33 = (int32_t)L_32->___next_1;
		NullCheck(L_30);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_31), (int32_t)((int32_t)il2cpp_codegen_add(L_33, 1)));
		goto IL_00d6;
	}

IL_00be:
	{
		EntryU5BU5D_tDDCFB52378DF4C6064B3947E47DE072BE041758E* L_34 = (EntryU5BU5D_tDDCFB52378DF4C6064B3947E47DE072BE041758E*)__this->____entries_1;
		int32_t L_35 = V_2;
		NullCheck(L_34);
		Entry_tC2C8EF34432BD0CDF0164C3590A242BCE9864A56* L_36 = V_4;
		int32_t L_37 = (int32_t)L_36->___next_1;
		((L_34)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_35)))->___next_1 = L_37;
	}

IL_00d6:
	{
		Entry_tC2C8EF34432BD0CDF0164C3590A242BCE9864A56* L_38 = V_4;
		L_38->___hashCode_0 = (-1);
		Entry_tC2C8EF34432BD0CDF0164C3590A242BCE9864A56* L_39 = V_4;
		int32_t L_40 = (int32_t)__this->____freeList_3;
		L_39->___next_1 = L_40;
		if (!true)
		{
			goto IL_00ff;
		}
	}
	{
		Entry_tC2C8EF34432BD0CDF0164C3590A242BCE9864A56* L_41 = V_4;
		RuntimeObject** L_42 = (RuntimeObject**)(&L_41->___key_2);
		il2cpp_codegen_initobj(L_42, sizeof(RuntimeObject*));
	}

IL_00ff:
	{
		if (!false)
		{
			goto IL_0113;
		}
	}
	{
		Entry_tC2C8EF34432BD0CDF0164C3590A242BCE9864A56* L_43 = V_4;
		uint32_t* L_44 = (uint32_t*)(&L_43->___value_3);
		il2cpp_codegen_initobj(L_44, sizeof(uint32_t));
	}

IL_0113:
	{
		int32_t L_45 = V_3;
		__this->____freeList_3 = L_45;
		int32_t L_46 = (int32_t)__this->____freeCount_4;
		__this->____freeCount_4 = ((int32_t)il2cpp_codegen_add(L_46, 1));
		int32_t L_47 = (int32_t)__this->____version_5;
		__this->____version_5 = ((int32_t)il2cpp_codegen_add(L_47, 1));
		return (bool)1;
	}

IL_0138:
	{
		int32_t L_48 = V_3;
		V_2 = L_48;
		Entry_tC2C8EF34432BD0CDF0164C3590A242BCE9864A56* L_49 = V_4;
		int32_t L_50 = (int32_t)L_49->___next_1;
		V_3 = L_50;
	}

IL_0142:
	{
		int32_t L_51 = V_3;
		if ((((int32_t)L_51) >= ((int32_t)0)))
		{
			goto IL_005c;
		}
	}

IL_0149:
	{
		return (bool)0;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.UInt32>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m147AB01ABDE2174D591C54DBBABCD020144D3666_gshared (Dictionary_2_tA9CFEFF33EC9A214A3FA9A889B9D8EAE95A49902* __this, RuntimeObject* ___key0, uint32_t* ___value1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = ___key0;
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_tA9CFEFF33EC9A214A3FA9A889B9D8EAE95A49902*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 20)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0025;
		}
	}
	{
		uint32_t* L_3 = ___value1;
		EntryU5BU5D_tDDCFB52378DF4C6064B3947E47DE072BE041758E* L_4 = (EntryU5BU5D_tDDCFB52378DF4C6064B3947E47DE072BE041758E*)__this->____entries_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		uint32_t L_6 = (uint32_t)((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value_3;
		*(uint32_t*)L_3 = L_6;
		return (bool)1;
	}

IL_0025:
	{
		uint32_t* L_7 = ___value1;
		il2cpp_codegen_initobj(L_7, sizeof(uint32_t));
		return (bool)0;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.UInt32>::TryAdd(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryAdd_m3C44452A5084FF8DA148A9F43768F3B9496857ED_gshared (Dictionary_2_tA9CFEFF33EC9A214A3FA9A889B9D8EAE95A49902* __this, RuntimeObject* ___key0, uint32_t ___value1, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___key0;
		uint32_t L_1 = ___value1;
		bool L_2;
		L_2 = ((  bool (*) (Dictionary_2_tA9CFEFF33EC9A214A3FA9A889B9D8EAE95A49902*, RuntimeObject*, uint32_t, uint8_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 22)))(__this, L_0, L_1, (uint8_t)0, il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		return L_2;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.UInt32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m0251349A0778208AFA90545759EBDED6B1649B71_gshared (Dictionary_2_tA9CFEFF33EC9A214A3FA9A889B9D8EAE95A49902* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_mB8E1FF2D4CED737287ED08E0D6E289931DBD9821_gshared (Dictionary_2_tA9CFEFF33EC9A214A3FA9A889B9D8EAE95A49902* __this, KeyValuePair_2U5BU5D_tFBE07C34404F8F624202E7C9A32A37AC93DCD171* ___array0, int32_t ___index1, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2U5BU5D_tFBE07C34404F8F624202E7C9A32A37AC93DCD171* L_0 = ___array0;
		int32_t L_1 = ___index1;
		((  void (*) (Dictionary_2_tA9CFEFF33EC9A214A3FA9A889B9D8EAE95A49902*, KeyValuePair_2U5BU5D_tFBE07C34404F8F624202E7C9A32A37AC93DCD171*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 36)))(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 36));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_ICollection_CopyTo_m81BCE90AC7E9B1AC3E452D8F4DFE3F0CEDCC0B99_gshared (Dictionary_2_tA9CFEFF33EC9A214A3FA9A889B9D8EAE95A49902* __this, RuntimeArray* ___array0, int32_t ___index1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_tFBE07C34404F8F624202E7C9A32A37AC93DCD171* V_0 = NULL;
	DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* V_1 = NULL;
	EntryU5BU5D_tDDCFB52378DF4C6064B3947E47DE072BE041758E* V_2 = NULL;
	int32_t V_3 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_4 = NULL;
	int32_t V_5 = 0;
	EntryU5BU5D_tDDCFB52378DF4C6064B3947E47DE072BE041758E* V_6 = NULL;
	int32_t V_7 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___array0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___array0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(L_1, NULL);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___array0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___index1;
		RuntimeArray* L_6 = ___array0;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_6, NULL);
		if ((!(((uint32_t)L_5) > ((uint32_t)L_7))))
		{
			goto IL_0035;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0035:
	{
		RuntimeArray* L_8 = ___array0;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_8, NULL);
		int32_t L_10 = ___index1;
		int32_t L_11;
		L_11 = ((  int32_t (*) (Dictionary_2_tA9CFEFF33EC9A214A3FA9A889B9D8EAE95A49902*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 29)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_9, L_10))) >= ((int32_t)L_11)))
		{
			goto IL_004b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)5, NULL);
	}

IL_004b:
	{
		RuntimeArray* L_12 = ___array0;
		V_0 = ((KeyValuePair_2U5BU5D_tFBE07C34404F8F624202E7C9A32A37AC93DCD171*)IsInst((RuntimeObject*)L_12, il2cpp_rgctx_data(method->klass->rgctx_data, 46)));
		KeyValuePair_2U5BU5D_tFBE07C34404F8F624202E7C9A32A37AC93DCD171* L_13 = V_0;
		if (!L_13)
		{
			goto IL_005e;
		}
	}
	{
		KeyValuePair_2U5BU5D_tFBE07C34404F8F624202E7C9A32A37AC93DCD171* L_14 = V_0;
		int32_t L_15 = ___index1;
		((  void (*) (Dictionary_2_tA9CFEFF33EC9A214A3FA9A889B9D8EAE95A49902*, KeyValuePair_2U5BU5D_tFBE07C34404F8F624202E7C9A32A37AC93DCD171*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 36)))(__this, L_14, L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 36));
		return;
	}

IL_005e:
	{
		RuntimeArray* L_16 = ___array0;
		V_1 = ((DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533*)IsInst((RuntimeObject*)L_16, DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var));
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_17 = V_1;
		if (!L_17)
		{
			goto IL_00c3;
		}
	}
	{
		EntryU5BU5D_tDDCFB52378DF4C6064B3947E47DE072BE041758E* L_18 = (EntryU5BU5D_tDDCFB52378DF4C6064B3947E47DE072BE041758E*)__this->____entries_1;
		V_2 = L_18;
		V_3 = 0;
		goto IL_00b9;
	}

IL_0073:
	{
		EntryU5BU5D_tDDCFB52378DF4C6064B3947E47DE072BE041758E* L_19 = V_2;
		int32_t L_20 = V_3;
		NullCheck(L_19);
		int32_t L_21 = (int32_t)((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20)))->___hashCode_0;
		if ((((int32_t)L_21) < ((int32_t)0)))
		{
			goto IL_00b5;
		}
	}
	{
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_22 = V_1;
		int32_t L_23 = ___index1;
		int32_t L_24 = L_23;
		___index1 = ((int32_t)il2cpp_codegen_add(L_24, 1));
		EntryU5BU5D_tDDCFB52378DF4C6064B3947E47DE072BE041758E* L_25 = V_2;
		int32_t L_26 = V_3;
		NullCheck(L_25);
		RuntimeObject* L_27 = (RuntimeObject*)((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___key_2;
		EntryU5BU5D_tDDCFB52378DF4C6064B3947E47DE072BE041758E* L_28 = V_2;
		int32_t L_29 = V_3;
		NullCheck(L_28);
		uint32_t L_30 = (uint32_t)((L_28)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_29)))->___value_3;
		uint32_t L_31 = L_30;
		RuntimeObject* L_32 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 28), &L_31);
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_33;
		memset((&L_33), 0, sizeof(L_33));
		DictionaryEntry__ctor_m2768353E53A75C4860E34B37DAF1342120C5D1EA((&L_33), L_27, L_32, /*hidden argument*/NULL);
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(L_24), (DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB)L_33);
	}

IL_00b5:
	{
		int32_t L_34 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_00b9:
	{
		int32_t L_35 = V_3;
		int32_t L_36 = (int32_t)__this->____count_2;
		if ((((int32_t)L_35) < ((int32_t)L_36)))
		{
			goto IL_0073;
		}
	}
	{
		return;
	}

IL_00c3:
	{
		RuntimeArray* L_37 = ___array0;
		V_4 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_37, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_38 = V_4;
		if (L_38)
		{
			goto IL_00d4;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_00d4:
	{
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_39 = (int32_t)__this->____count_2;
			V_5 = L_39;
			EntryU5BU5D_tDDCFB52378DF4C6064B3947E47DE072BE041758E* L_40 = (EntryU5BU5D_tDDCFB52378DF4C6064B3947E47DE072BE041758E*)__this->____entries_1;
			V_6 = L_40;
			V_7 = 0;
			goto IL_0130_1;
		}

IL_00ea_1:
		{
			EntryU5BU5D_tDDCFB52378DF4C6064B3947E47DE072BE041758E* L_41 = V_6;
			int32_t L_42 = V_7;
			NullCheck(L_41);
			int32_t L_43 = (int32_t)((L_41)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_42)))->___hashCode_0;
			if ((((int32_t)L_43) < ((int32_t)0)))
			{
				goto IL_012a_1;
			}
		}
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_44 = V_4;
			int32_t L_45 = ___index1;
			int32_t L_46 = L_45;
			___index1 = ((int32_t)il2cpp_codegen_add(L_46, 1));
			EntryU5BU5D_tDDCFB52378DF4C6064B3947E47DE072BE041758E* L_47 = V_6;
			int32_t L_48 = V_7;
			NullCheck(L_47);
			RuntimeObject* L_49 = (RuntimeObject*)((L_47)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_48)))->___key_2;
			EntryU5BU5D_tDDCFB52378DF4C6064B3947E47DE072BE041758E* L_50 = V_6;
			int32_t L_51 = V_7;
			NullCheck(L_50);
			uint32_t L_52 = (uint32_t)((L_50)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_51)))->___value_3;
			KeyValuePair_2_t960579556437B99440AF144C7232735A5D4DA864 L_53;
			memset((&L_53), 0, sizeof(L_53));
			KeyValuePair_2__ctor_m94200303A1DD6A660835074EF5D7A9676703AF93((&L_53), L_49, L_52, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 31));
			KeyValuePair_2_t960579556437B99440AF144C7232735A5D4DA864 L_54 = L_53;
			RuntimeObject* L_55 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 30), &L_54);
			NullCheck(L_44);
			ArrayElementTypeCheck (L_44, L_55);
			(L_44)->SetAt(static_cast<il2cpp_array_size_t>(L_46), (RuntimeObject*)L_55);
		}

IL_012a_1:
		{
			int32_t L_56 = V_7;
			V_7 = ((int32_t)il2cpp_codegen_add(L_56, 1));
		}

IL_0130_1:
		{
			int32_t L_57 = V_7;
			int32_t L_58 = V_5;
			if ((((int32_t)L_57) < ((int32_t)L_58)))
			{
				goto IL_00ea_1;
			}
		}
		{
			goto IL_0140;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0138;
		}
		throw e;
	}

CATCH_0138:
	{// begin catch(System.ArrayTypeMismatchException)
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0140;
	}// end catch (depth: 1)

IL_0140:
	{
		return;
	}
}
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.UInt32>::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m4801E27B36170124E92C2CB8043424E8C9EBB184_gshared (Dictionary_2_tA9CFEFF33EC9A214A3FA9A889B9D8EAE95A49902* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t3B89D8847C267697DBDD0903E1C0989F9FB24E9B L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m159E85F401C16F937369C2BAEB2965E01A65C54F((&L_0), __this, 2, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		Enumerator_t3B89D8847C267697DBDD0903E1C0989F9FB24E9B L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 32), &L_1);
		return (RuntimeObject*)L_2;
	}
}
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.UInt32>::System.Collections.ICollection.get_SyncRoot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_ICollection_get_SyncRoot_m952F7C0D330DD7D72614D8789AAFDFDD4392B6A0_gshared (Dictionary_2_tA9CFEFF33EC9A214A3FA9A889B9D8EAE95A49902* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____syncRoot_9;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot_9);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = (RuntimeObject*)__this->____syncRoot_9;
		return L_4;
	}
}
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.UInt32>::System.Collections.IDictionary.get_Item(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_get_Item_mA95D6BF5E0E9BBB6FE4566685447C5CF3966AA70_gshared (Dictionary_2_tA9CFEFF33EC9A214A3FA9A889B9D8EAE95A49902* __this, RuntimeObject* ___key0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = ___key0;
		bool L_1;
		L_1 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 48)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 48));
		if (!L_1)
		{
			goto IL_0030;
		}
	}
	{
		RuntimeObject* L_2 = ___key0;
		int32_t L_3;
		L_3 = ((  int32_t (*) (Dictionary_2_tA9CFEFF33EC9A214A3FA9A889B9D8EAE95A49902*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 20)))(__this, ((RuntimeObject*)Castclass((RuntimeObject*)L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 21))), il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		V_0 = L_3;
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		EntryU5BU5D_tDDCFB52378DF4C6064B3947E47DE072BE041758E* L_5 = (EntryU5BU5D_tDDCFB52378DF4C6064B3947E47DE072BE041758E*)__this->____entries_1;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		uint32_t L_7 = (uint32_t)((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->___value_3;
		uint32_t L_8 = L_7;
		RuntimeObject* L_9 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 28), &L_8);
		return L_9;
	}

IL_0030:
	{
		return NULL;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt32>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_IDictionary_set_Item_mB81E521CE872BD76AC27A163583AB89102C8A94E_gshared (Dictionary_2_tA9CFEFF33EC9A214A3FA9A889B9D8EAE95A49902* __this, RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		RuntimeObject* L_0 = ___key0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___value1;
		((  void (*) (RuntimeObject*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 50)))(L_1, (int32_t)((int32_t)15), il2cpp_rgctx_method(method->klass->rgctx_data, 50));
	}
	try
	{// begin try (depth: 1)
		{
			RuntimeObject* L_2 = ___key0;
			V_0 = ((RuntimeObject*)Castclass((RuntimeObject*)L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 21)));
		}
		try
		{// begin try (depth: 2)
			RuntimeObject* L_3 = V_0;
			RuntimeObject* L_4 = ___value1;
			((  void (*) (Dictionary_2_tA9CFEFF33EC9A214A3FA9A889B9D8EAE95A49902*, RuntimeObject*, uint32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 51)))(__this, L_3, ((*(uint32_t*)((uint32_t*)(uint32_t*)UnBox(L_4, il2cpp_rgctx_data(method->klass->rgctx_data, 28))))), il2cpp_rgctx_method(method->klass->rgctx_data, 51));
			goto IL_003a_1;
		}// end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0027_1;
			}
			throw e;
		}

CATCH_0027_1:
		{// begin catch(System.InvalidCastException)
			RuntimeObject* L_5 = ___value1;
			RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 52)) };
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
			Type_t* L_7;
			L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
			ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_5, L_7, NULL);
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_003a_1;
		}// end catch (depth: 2)

IL_003a_1:
		{
			goto IL_004f;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003c;
		}
		throw e;
	}

CATCH_003c:
	{// begin catch(System.InvalidCastException)
		RuntimeObject* L_8 = ___key0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 53)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		ThrowHelper_ThrowWrongKeyTypeArgumentException_m90E5BCE2CB10EEC16F254C237121C6816C4D6982(L_8, L_10, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_004f;
	}// end catch (depth: 1)

IL_004f:
	{
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.UInt32>::IsCompatibleKey(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_IsCompatibleKey_m2497F2EDB9593CF6512C931D8944E75FD9CCB3D8_gshared (RuntimeObject* ___key0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___key0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___key0;
		return (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_1, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 21)))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.UInt32>::System.Collections.IDictionary.Contains(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_IDictionary_Contains_m5AD39726917D170815EE08AE8E68601314347037_gshared (Dictionary_2_tA9CFEFF33EC9A214A3FA9A889B9D8EAE95A49902* __this, RuntimeObject* ___key0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___key0;
		bool L_1;
		L_1 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 48)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 48));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___key0;
		bool L_3;
		L_3 = ((  bool (*) (Dictionary_2_tA9CFEFF33EC9A214A3FA9A889B9D8EAE95A49902*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 54)))(__this, ((RuntimeObject*)Castclass((RuntimeObject*)L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 21))), il2cpp_rgctx_method(method->klass->rgctx_data, 54));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.UInt32>::System.Collections.IDictionary.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_GetEnumerator_m396507A78A4CB9836E6DD589F772454AC36494AF_gshared (Dictionary_2_tA9CFEFF33EC9A214A3FA9A889B9D8EAE95A49902* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t3B89D8847C267697DBDD0903E1C0989F9FB24E9B L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m159E85F401C16F937369C2BAEB2965E01A65C54F((&L_0), __this, 1, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		Enumerator_t3B89D8847C267697DBDD0903E1C0989F9FB24E9B L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 32), &L_1);
		return (RuntimeObject*)L_2;
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
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Vector2>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m05F523BA9BEBF58F2272B2FED787AB93DAA6773B_gshared (Dictionary_2_t41479D9F29C6C1BC07FC7F8D3DD313D8A9A419E1* __this, const RuntimeMethod* method) 
{
	{
		((  void (*) (Dictionary_2_t41479D9F29C6C1BC07FC7F8D3DD313D8A9A419E1*, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, 0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Vector2>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m9BFA43BFF5C0421EC5B1CD79E5123E2D9319E446_gshared (Dictionary_2_t41479D9F29C6C1BC07FC7F8D3DD313D8A9A419E1* __this, int32_t ___capacity0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___capacity0;
		((  void (*) (Dictionary_2_t41479D9F29C6C1BC07FC7F8D3DD313D8A9A419E1*, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Vector2>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m129FBFC8D6968D6C97E8592C4B6B7703FBD790A4_gshared (Dictionary_2_t41479D9F29C6C1BC07FC7F8D3DD313D8A9A419E1* __this, RuntimeObject* ___comparer0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___comparer0;
		((  void (*) (Dictionary_2_t41479D9F29C6C1BC07FC7F8D3DD313D8A9A419E1*, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, 0, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Vector2>::.ctor(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m1C7BC3795301A028FE7A52BCEE872CCA818490C7_gshared (Dictionary_2_t41479D9F29C6C1BC07FC7F8D3DD313D8A9A419E1* __this, int32_t ___capacity0, RuntimeObject* ___comparer1, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___capacity0;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0011;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97((int32_t)((int32_t)12), NULL);
	}

IL_0011:
	{
		int32_t L_1 = ___capacity0;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_2 = ___capacity0;
		int32_t L_3;
		L_3 = ((  int32_t (*) (Dictionary_2_t41479D9F29C6C1BC07FC7F8D3DD313D8A9A419E1*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(__this, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
	}

IL_001d:
	{
		RuntimeObject* L_4 = ___comparer1;
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_5;
		L_5 = ((  EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if ((((RuntimeObject*)(RuntimeObject*)L_4) == ((RuntimeObject*)(EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2*)L_5)))
		{
			goto IL_002c;
		}
	}
	{
		RuntimeObject* L_6 = ___comparer1;
		__this->____comparer_6 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer_6), (void*)L_6);
	}

IL_002c:
	{
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Vector2>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mB08DE55FA135B2C9E9847040BB4F9210A50768F8_gshared (Dictionary_2_t41479D9F29C6C1BC07FC7F8D3DD313D8A9A419E1* __this, RuntimeObject* ___dictionary0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___dictionary0;
		((  void (*) (Dictionary_2_t41479D9F29C6C1BC07FC7F8D3DD313D8A9A419E1*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)))(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Vector2>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m36DCC6328510899A546282D3C202C793013B4D29_gshared (Dictionary_2_t41479D9F29C6C1BC07FC7F8D3DD313D8A9A419E1* __this, RuntimeObject* ___dictionary0, RuntimeObject* ___comparer1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	EntryU5BU5D_tB701640026CE382655A04D3448D52F314990B3AF* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	KeyValuePair_2_t5FCDCECBAC4615B1D6C16612A028BBBF368C51D4 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Dictionary_2_t41479D9F29C6C1BC07FC7F8D3DD313D8A9A419E1* G_B2_0 = NULL;
	Dictionary_2_t41479D9F29C6C1BC07FC7F8D3DD313D8A9A419E1* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	Dictionary_2_t41479D9F29C6C1BC07FC7F8D3DD313D8A9A419E1* G_B3_1 = NULL;
	{
		RuntimeObject* L_0 = ___dictionary0;
		G_B1_0 = __this;
		if (L_0)
		{
			G_B2_0 = __this;
			goto IL_0007;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_000d;
	}

IL_0007:
	{
		RuntimeObject* L_1 = ___dictionary0;
		NullCheck((RuntimeObject*)L_1);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.Vector2>>::get_Count() */, il2cpp_rgctx_data(method->klass->rgctx_data, 5), (RuntimeObject*)L_1);
		G_B3_0 = L_2;
		G_B3_1 = G_B2_0;
	}

IL_000d:
	{
		RuntimeObject* L_3 = ___comparer1;
		((  void (*) (Dictionary_2_t41479D9F29C6C1BC07FC7F8D3DD313D8A9A419E1*, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(G_B3_1, G_B3_0, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		RuntimeObject* L_4 = ___dictionary0;
		if (L_4)
		{
			goto IL_001c;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)1, NULL);
	}

IL_001c:
	{
		RuntimeObject* L_5 = ___dictionary0;
		NullCheck((RuntimeObject*)L_5);
		Type_t* L_6;
		L_6 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)L_5, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 7)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		bool L_9;
		L_9 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_6, L_8, NULL);
		if (!L_9)
		{
			goto IL_0080;
		}
	}
	{
		RuntimeObject* L_10 = ___dictionary0;
		Dictionary_2_t41479D9F29C6C1BC07FC7F8D3DD313D8A9A419E1* L_11 = ((Dictionary_2_t41479D9F29C6C1BC07FC7F8D3DD313D8A9A419E1*)CastclassClass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 8)));
		NullCheck(L_11);
		int32_t L_12 = (int32_t)L_11->____count_2;
		V_0 = L_12;
		NullCheck(L_11);
		EntryU5BU5D_tB701640026CE382655A04D3448D52F314990B3AF* L_13 = (EntryU5BU5D_tB701640026CE382655A04D3448D52F314990B3AF*)L_11->____entries_1;
		V_1 = L_13;
		V_2 = 0;
		goto IL_007b;
	}

IL_004a:
	{
		EntryU5BU5D_tB701640026CE382655A04D3448D52F314990B3AF* L_14 = V_1;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		int32_t L_16 = (int32_t)((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)))->___hashCode_0;
		if ((((int32_t)L_16) < ((int32_t)0)))
		{
			goto IL_0077;
		}
	}
	{
		EntryU5BU5D_tB701640026CE382655A04D3448D52F314990B3AF* L_17 = V_1;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		RuntimeObject* L_19 = (RuntimeObject*)((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___key_2;
		EntryU5BU5D_tB701640026CE382655A04D3448D52F314990B3AF* L_20 = V_1;
		int32_t L_21 = V_2;
		NullCheck(L_20);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_22 = (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___value_3;
		((  void (*) (Dictionary_2_t41479D9F29C6C1BC07FC7F8D3DD313D8A9A419E1*, RuntimeObject*, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(__this, L_19, L_22, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
	}

IL_0077:
	{
		int32_t L_23 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_007b:
	{
		int32_t L_24 = V_2;
		int32_t L_25 = V_0;
		if ((((int32_t)L_24) < ((int32_t)L_25)))
		{
			goto IL_004a;
		}
	}
	{
		return;
	}

IL_0080:
	{
		RuntimeObject* L_26 = ___dictionary0;
		NullCheck((RuntimeObject*)L_26);
		RuntimeObject* L_27;
		L_27 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.Vector2>>::GetEnumerator() */, il2cpp_rgctx_data(method->klass->rgctx_data, 10), (RuntimeObject*)L_26);
		V_3 = L_27;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00af:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_28 = V_3;
					if (!L_28)
					{
						goto IL_00b8;
					}
				}
				{
					RuntimeObject* L_29 = V_3;
					NullCheck((RuntimeObject*)L_29);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_29);
				}

IL_00b8:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_00a5_1;
			}

IL_0089_1:
			{
				RuntimeObject* L_30 = V_3;
				NullCheck(L_30);
				KeyValuePair_2_t5FCDCECBAC4615B1D6C16612A028BBBF368C51D4 L_31;
				L_31 = InterfaceFuncInvoker0< KeyValuePair_2_t5FCDCECBAC4615B1D6C16612A028BBBF368C51D4 >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.Vector2>>::get_Current() */, il2cpp_rgctx_data(method->klass->rgctx_data, 12), L_30);
				V_4 = L_31;
				RuntimeObject* L_32;
				L_32 = KeyValuePair_2_get_Key_mC2F74F2C7913473C536D80C56A49C907525AA762_inline((&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
				Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_33;
				L_33 = KeyValuePair_2_get_Value_m8C9B6CC4F0B407E1AE61FC1F558FE1920BE127B0_inline((&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
				((  void (*) (Dictionary_2_t41479D9F29C6C1BC07FC7F8D3DD313D8A9A419E1*, RuntimeObject*, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(__this, L_32, L_33, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
			}

IL_00a5_1:
			{
				RuntimeObject* L_34 = V_3;
				NullCheck((RuntimeObject*)L_34);
				bool L_35;
				L_35 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_34);
				if (L_35)
				{
					goto IL_0089_1;
				}
			}
			{
				goto IL_00b9;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00b9:
	{
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Vector2>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m052D43602E86D4779FF5130B39063F1B5A923C7C_gshared (Dictionary_2_t41479D9F29C6C1BC07FC7F8D3DD313D8A9A419E1* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___info0, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___context1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___info0;
		NullCheck(L_0);
		ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7(L_0, (RuntimeObject*)__this, L_1, ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		return;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Vector2>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_m6043208ABE94A41D3E374E582A1FD4B3319C7109_gshared (Dictionary_2_t41479D9F29C6C1BC07FC7F8D3DD313D8A9A419E1* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____count_2;
		int32_t L_1 = (int32_t)__this->____freeCount_4;
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Vector2>::get_Keys()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_tA332CBAA47F362606393C419AACCDEF8FDA5904F* Dictionary_2_get_Keys_mAA4459C4D25A1E89C5406DF6E7902699E43995D8_gshared (Dictionary_2_t41479D9F29C6C1BC07FC7F8D3DD313D8A9A419E1* __this, const RuntimeMethod* method) 
{
	{
		KeyCollection_tA332CBAA47F362606393C419AACCDEF8FDA5904F* L_0 = (KeyCollection_tA332CBAA47F362606393C419AACCDEF8FDA5904F*)__this->____keys_7;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		KeyCollection_tA332CBAA47F362606393C419AACCDEF8FDA5904F* L_1 = (KeyCollection_tA332CBAA47F362606393C419AACCDEF8FDA5904F*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 16));
		NullCheck(L_1);
		((  void (*) (KeyCollection_tA332CBAA47F362606393C419AACCDEF8FDA5904F*, Dictionary_2_t41479D9F29C6C1BC07FC7F8D3DD313D8A9A419E1*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 17)))(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
		__this->____keys_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keys_7), (void*)L_1);
	}

IL_0014:
	{
		KeyCollection_tA332CBAA47F362606393C419AACCDEF8FDA5904F* L_2 = (KeyCollection_tA332CBAA47F362606393C419AACCDEF8FDA5904F*)__this->____keys_7;
		return L_2;
	}
}
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Vector2>::get_Values()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_t0F3CDE51F86239622C464290CE413781AC13CA62* Dictionary_2_get_Values_m0F05FE3499EBC17711376BE0CE9D2503A1EA3050_gshared (Dictionary_2_t41479D9F29C6C1BC07FC7F8D3DD313D8A9A419E1* __this, const RuntimeMethod* method) 
{
	{
		ValueCollection_t0F3CDE51F86239622C464290CE413781AC13CA62* L_0 = (ValueCollection_t0F3CDE51F86239622C464290CE413781AC13CA62*)__this->____values_8;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_t0F3CDE51F86239622C464290CE413781AC13CA62* L_1 = (ValueCollection_t0F3CDE51F86239622C464290CE413781AC13CA62*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 18));
		NullCheck(L_1);
		((  void (*) (ValueCollection_t0F3CDE51F86239622C464290CE413781AC13CA62*, Dictionary_2_t41479D9F29C6C1BC07FC7F8D3DD313D8A9A419E1*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 19)))(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		__this->____values_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values_8), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_t0F3CDE51F86239622C464290CE413781AC13CA62* L_2 = (ValueCollection_t0F3CDE51F86239622C464290CE413781AC13CA62*)__this->____values_8;
		return L_2;
	}
}
// System.Collections.Generic.IEnumerable`1<TValue> System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Vector2>::System.Collections.Generic.IReadOnlyDictionary<TKey,TValue>.get_Values()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IReadOnlyDictionaryU3CTKeyU2CTValueU3E_get_Values_m7E8DD22411058D0FE4093689C6DB9681FD19B931_gshared (Dictionary_2_t41479D9F29C6C1BC07FC7F8D3DD313D8A9A419E1* __this, const RuntimeMethod* method) 
{
	{
		ValueCollection_t0F3CDE51F86239622C464290CE413781AC13CA62* L_0 = (ValueCollection_t0F3CDE51F86239622C464290CE413781AC13CA62*)__this->____values_8;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_t0F3CDE51F86239622C464290CE413781AC13CA62* L_1 = (ValueCollection_t0F3CDE51F86239622C464290CE413781AC13CA62*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 18));
		NullCheck(L_1);
		((  void (*) (ValueCollection_t0F3CDE51F86239622C464290CE413781AC13CA62*, Dictionary_2_t41479D9F29C6C1BC07FC7F8D3DD313D8A9A419E1*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 19)))(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		__this->____values_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values_8), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_t0F3CDE51F86239622C464290CE413781AC13CA62* L_2 = (ValueCollection_t0F3CDE51F86239622C464290CE413781AC13CA62*)__this->____values_8;
		return (RuntimeObject*)L_2;
	}
}
// TValue System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Vector2>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Dictionary_2_get_Item_m258C63607421ED4C906A4D91121D2CC1D782E012_gshared (Dictionary_2_t41479D9F29C6C1BC07FC7F8D3DD313D8A9A419E1* __this, RuntimeObject* ___key0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		RuntimeObject* L_0 = ___key0;
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_t41479D9F29C6C1BC07FC7F8D3DD313D8A9A419E1*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 20)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_001e;
		}
	}
	{
		EntryU5BU5D_tB701640026CE382655A04D3448D52F314990B3AF* L_3 = (EntryU5BU5D_tB701640026CE382655A04D3448D52F314990B3AF*)__this->____entries_1;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)))->___value_3;
		return L_5;
	}

IL_001e:
	{
		RuntimeObject* L_6 = ___key0;
		ThrowHelper_ThrowKeyNotFoundException_m6A17735FA486AD43F2488DE39B755AC60BC99CE7(L_6, NULL);
		il2cpp_codegen_initobj((&V_1), sizeof(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = V_1;
		return L_7;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Vector2>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_mF30B801AA48FFBD9B95F320C393F85AEA8945E9A_gshared (Dictionary_2_t41479D9F29C6C1BC07FC7F8D3DD313D8A9A419E1* __this, RuntimeObject* ___key0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value1, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___key0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = ___value1;
		bool L_2;
		L_2 = ((  bool (*) (Dictionary_2_t41479D9F29C6C1BC07FC7F8D3DD313D8A9A419E1*, RuntimeObject*, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, uint8_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 22)))(__this, L_0, L_1, (uint8_t)1, il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Vector2>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m3583FCC8F552E5812B520957513E0CE577B594ED_gshared (Dictionary_2_t41479D9F29C6C1BC07FC7F8D3DD313D8A9A419E1* __this, RuntimeObject* ___key0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value1, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___key0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = ___value1;
		bool L_2;
		L_2 = ((  bool (*) (Dictionary_2_t41479D9F29C6C1BC07FC7F8D3DD313D8A9A419E1*, RuntimeObject*, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, uint8_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 22)))(__this, L_0, L_1, (uint8_t)2, il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Vector2>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m3683CAD9E178A8166F0507E735B54E717E04E705_gshared (Dictionary_2_t41479D9F29C6C1BC07FC7F8D3DD313D8A9A419E1* __this, KeyValuePair_2_t5FCDCECBAC4615B1D6C16612A028BBBF368C51D4 ___keyValuePair0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0;
		L_0 = KeyValuePair_2_get_Key_mC2F74F2C7913473C536D80C56A49C907525AA762_inline((&___keyValuePair0), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1;
		L_1 = KeyValuePair_2_get_Value_m8C9B6CC4F0B407E1AE61FC1F558FE1920BE127B0_inline((&___keyValuePair0), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		((  void (*) (Dictionary_2_t41479D9F29C6C1BC07FC7F8D3DD313D8A9A419E1*, RuntimeObject*, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Vector2>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m31AF42854545E7E7C51B747530D81547E5D7AD3F_gshared (Dictionary_2_t41479D9F29C6C1BC07FC7F8D3DD313D8A9A419E1* __this, KeyValuePair_2_t5FCDCECBAC4615B1D6C16612A028BBBF368C51D4 ___keyValuePair0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0;
		L_0 = KeyValuePair_2_get_Key_mC2F74F2C7913473C536D80C56A49C907525AA762_inline((&___keyValuePair0), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_t41479D9F29C6C1BC07FC7F8D3DD313D8A9A419E1*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 20)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0038;
		}
	}
	{
		EqualityComparer_1_tF5B9124CEB160EFC53E943AA29271854DB5D5E8E* L_3;
		L_3 = ((  EqualityComparer_1_tF5B9124CEB160EFC53E943AA29271854DB5D5E8E* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 23)))(il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		EntryU5BU5D_tB701640026CE382655A04D3448D52F314990B3AF* L_4 = (EntryU5BU5D_tB701640026CE382655A04D3448D52F314990B3AF*)__this->____entries_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7;
		L_7 = KeyValuePair_2_get_Value_m8C9B6CC4F0B407E1AE61FC1F558FE1920BE127B0_inline((&___keyValuePair0), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.Vector2>::Equals(T,T) */, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0038;
		}
	}
	{
		return (bool)1;
	}

IL_0038:
	{
		return (bool)0;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Vector2>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m9F5A901FD89D040C854D8DC4B9121859C4875DAA_gshared (Dictionary_2_t41479D9F29C6C1BC07FC7F8D3DD313D8A9A419E1* __this, KeyValuePair_2_t5FCDCECBAC4615B1D6C16612A028BBBF368C51D4 ___keyValuePair0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0;
		L_0 = KeyValuePair_2_get_Key_mC2F74F2C7913473C536D80C56A49C907525AA762_inline((&___keyValuePair0), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_t41479D9F29C6C1BC07FC7F8D3DD313D8A9A419E1*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 20)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0046;
		}
	}
	{
		EqualityComparer_1_tF5B9124CEB160EFC53E943AA29271854DB5D5E8E* L_3;
		L_3 = ((  EqualityComparer_1_tF5B9124CEB160EFC53E943AA29271854DB5D5E8E* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 23)))(il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		EntryU5BU5D_tB701640026CE382655A04D3448D52F314990B3AF* L_4 = (EntryU5BU5D_tB701640026CE382655A04D3448D52F314990B3AF*)__this->____entries_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7;
		L_7 = KeyValuePair_2_get_Value_m8C9B6CC4F0B407E1AE61FC1F558FE1920BE127B0_inline((&___keyValuePair0), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.Vector2>::Equals(T,T) */, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0046;
		}
	}
	{
		RuntimeObject* L_9;
		L_9 = KeyValuePair_2_get_Key_mC2F74F2C7913473C536D80C56A49C907525AA762_inline((&___keyValuePair0), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		bool L_10;
		L_10 = ((  bool (*) (Dictionary_2_t41479D9F29C6C1BC07FC7F8D3DD313D8A9A419E1*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 27)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 27));
		return (bool)1;
	}

IL_0046:
	{
		return (bool)0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Vector2>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_m1D370E904069F8BD47A5903DA8A59A08A180E586_gshared (Dictionary_2_t41479D9F29C6C1BC07FC7F8D3DD313D8A9A419E1* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->____count_2;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0041;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_3);
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_2, 0, ((int32_t)(((RuntimeArray*)L_3)->max_length)), NULL);
		__this->____count_2 = 0;
		__this->____freeList_3 = (-1);
		__this->____freeCount_4 = 0;
		EntryU5BU5D_tB701640026CE382655A04D3448D52F314990B3AF* L_4 = (EntryU5BU5D_tB701640026CE382655A04D3448D52F314990B3AF*)__this->____entries_1;
		int32_t L_5 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_4, 0, L_5, NULL);
	}

IL_0041:
	{
		int32_t L_6 = (int32_t)__this->____version_5;
		__this->____version_5 = ((int32_t)il2cpp_codegen_add(L_6, 1));
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Vector2>::ContainsKey(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_mEA83243BF00BED6E0729B156DAE73BF6CE806395_gshared (Dictionary_2_t41479D9F29C6C1BC07FC7F8D3DD313D8A9A419E1* __this, RuntimeObject* ___key0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___key0;
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_t41479D9F29C6C1BC07FC7F8D3DD313D8A9A419E1*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 20)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		return (bool)((((int32_t)((((int32_t)L_1) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Vector2>::ContainsValue(TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsValue_m611EB3B13D33E80464CC83A31EDE7637E830CC60_gshared (Dictionary_2_t41479D9F29C6C1BC07FC7F8D3DD313D8A9A419E1* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) 
{
	EntryU5BU5D_tB701640026CE382655A04D3448D52F314990B3AF* V_0 = NULL;
	int32_t V_1 = 0;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	EqualityComparer_1_tF5B9124CEB160EFC53E943AA29271854DB5D5E8E* V_4 = NULL;
	int32_t V_5 = 0;
	{
		EntryU5BU5D_tB701640026CE382655A04D3448D52F314990B3AF* L_0 = (EntryU5BU5D_tB701640026CE382655A04D3448D52F314990B3AF*)__this->____entries_1;
		V_0 = L_0;
		goto IL_0049;
	}
	{
		V_1 = 0;
		goto IL_003b;
	}

IL_0013:
	{
		EntryU5BU5D_tB701640026CE382655A04D3448D52F314990B3AF* L_2 = V_0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = (int32_t)((L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3)))->___hashCode_0;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0037;
		}
	}
	{
		EntryU5BU5D_tB701640026CE382655A04D3448D52F314990B3AF* L_5 = V_0;
		int32_t L_6 = V_1;
		NullCheck(L_5);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->___value_3;
		goto IL_0037;
	}
	{
		return (bool)1;
	}

IL_0037:
	{
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_003b:
	{
		int32_t L_9 = V_1;
		int32_t L_10 = (int32_t)__this->____count_2;
		if ((((int32_t)L_9) < ((int32_t)L_10)))
		{
			goto IL_0013;
		}
	}
	{
		goto IL_00db;
	}

IL_0049:
	{
		il2cpp_codegen_initobj((&V_2), sizeof(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7));
	}
	{
		V_3 = 0;
		goto IL_008b;
	}

IL_005d:
	{
		EntryU5BU5D_tB701640026CE382655A04D3448D52F314990B3AF* L_12 = V_0;
		int32_t L_13 = V_3;
		NullCheck(L_12);
		int32_t L_14 = (int32_t)((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)))->___hashCode_0;
		if ((((int32_t)L_14) < ((int32_t)0)))
		{
			goto IL_0087;
		}
	}
	{
		EqualityComparer_1_tF5B9124CEB160EFC53E943AA29271854DB5D5E8E* L_15;
		L_15 = ((  EqualityComparer_1_tF5B9124CEB160EFC53E943AA29271854DB5D5E8E* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 23)))(il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		EntryU5BU5D_tB701640026CE382655A04D3448D52F314990B3AF* L_16 = V_0;
		int32_t L_17 = V_3;
		NullCheck(L_16);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_18 = (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)((L_16)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_17)))->___value_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_19 = ___value0;
		NullCheck(L_15);
		bool L_20;
		L_20 = VirtualFuncInvoker2< bool, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.Vector2>::Equals(T,T) */, L_15, L_18, L_19);
		if (!L_20)
		{
			goto IL_0087;
		}
	}
	{
		return (bool)1;
	}

IL_0087:
	{
		int32_t L_21 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_008b:
	{
		int32_t L_22 = V_3;
		int32_t L_23 = (int32_t)__this->____count_2;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_005d;
		}
	}
	{
		goto IL_00db;
	}

IL_0096:
	{
		EqualityComparer_1_tF5B9124CEB160EFC53E943AA29271854DB5D5E8E* L_24;
		L_24 = ((  EqualityComparer_1_tF5B9124CEB160EFC53E943AA29271854DB5D5E8E* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 23)))(il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		V_4 = L_24;
		V_5 = 0;
		goto IL_00d1;
	}

IL_00a2:
	{
		EntryU5BU5D_tB701640026CE382655A04D3448D52F314990B3AF* L_25 = V_0;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		int32_t L_27 = (int32_t)((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___hashCode_0;
		if ((((int32_t)L_27) < ((int32_t)0)))
		{
			goto IL_00cb;
		}
	}
	{
		EqualityComparer_1_tF5B9124CEB160EFC53E943AA29271854DB5D5E8E* L_28 = V_4;
		EntryU5BU5D_tB701640026CE382655A04D3448D52F314990B3AF* L_29 = V_0;
		int32_t L_30 = V_5;
		NullCheck(L_29);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_31 = (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)((L_29)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_30)))->___value_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_32 = ___value0;
		NullCheck(L_28);
		bool L_33;
		L_33 = VirtualFuncInvoker2< bool, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.Vector2>::Equals(T,T) */, L_28, L_31, L_32);
		if (!L_33)
		{
			goto IL_00cb;
		}
	}
	{
		return (bool)1;
	}

IL_00cb:
	{
		int32_t L_34 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_00d1:
	{
		int32_t L_35 = V_5;
		int32_t L_36 = (int32_t)__this->____count_2;
		if ((((int32_t)L_35) < ((int32_t)L_36)))
		{
			goto IL_00a2;
		}
	}

IL_00db:
	{
		return (bool)0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Vector2>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_m7FCDD4A7B69179B78608283C1B1BDE3A9C19EBC1_gshared (Dictionary_2_t41479D9F29C6C1BC07FC7F8D3DD313D8A9A419E1* __this, KeyValuePair_2U5BU5D_tD9CA47909C5DBB11E7BBC75787D8858E0668B81F* ___array0, int32_t ___index1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	EntryU5BU5D_tB701640026CE382655A04D3448D52F314990B3AF* V_1 = NULL;
	int32_t V_2 = 0;
	{
		KeyValuePair_2U5BU5D_tD9CA47909C5DBB11E7BBC75787D8858E0668B81F* L_0 = ___array0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)3, NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___index1;
		KeyValuePair_2U5BU5D_tD9CA47909C5DBB11E7BBC75787D8858E0668B81F* L_2 = ___array0;
		NullCheck(L_2);
		if ((!(((uint32_t)L_1) > ((uint32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))))
		{
			goto IL_0014;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0014:
	{
		KeyValuePair_2U5BU5D_tD9CA47909C5DBB11E7BBC75787D8858E0668B81F* L_3 = ___array0;
		NullCheck(L_3);
		int32_t L_4 = ___index1;
		int32_t L_5;
		L_5 = ((  int32_t (*) (Dictionary_2_t41479D9F29C6C1BC07FC7F8D3DD313D8A9A419E1*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 29)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_3)->max_length)), L_4))) >= ((int32_t)L_5)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)5, NULL);
	}

IL_0027:
	{
		int32_t L_6 = (int32_t)__this->____count_2;
		V_0 = L_6;
		EntryU5BU5D_tB701640026CE382655A04D3448D52F314990B3AF* L_7 = (EntryU5BU5D_tB701640026CE382655A04D3448D52F314990B3AF*)__this->____entries_1;
		V_1 = L_7;
		V_2 = 0;
		goto IL_0075;
	}

IL_0039:
	{
		EntryU5BU5D_tB701640026CE382655A04D3448D52F314990B3AF* L_8 = V_1;
		int32_t L_9 = V_2;
		NullCheck(L_8);
		int32_t L_10 = (int32_t)((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9)))->___hashCode_0;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_0071;
		}
	}
	{
		KeyValuePair_2U5BU5D_tD9CA47909C5DBB11E7BBC75787D8858E0668B81F* L_11 = ___array0;
		int32_t L_12 = ___index1;
		int32_t L_13 = L_12;
		___index1 = ((int32_t)il2cpp_codegen_add(L_13, 1));
		EntryU5BU5D_tB701640026CE382655A04D3448D52F314990B3AF* L_14 = V_1;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		RuntimeObject* L_16 = (RuntimeObject*)((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)))->___key_2;
		EntryU5BU5D_tB701640026CE382655A04D3448D52F314990B3AF* L_17 = V_1;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_19 = (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___value_3;
		KeyValuePair_2_t5FCDCECBAC4615B1D6C16612A028BBBF368C51D4 L_20;
		memset((&L_20), 0, sizeof(L_20));
		KeyValuePair_2__ctor_m4727158B54F9EB5857F41AA2AA93AF1815148077((&L_20), L_16, L_19, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (KeyValuePair_2_t5FCDCECBAC4615B1D6C16612A028BBBF368C51D4)L_20);
	}

IL_0071:
	{
		int32_t L_21 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0075:
	{
		int32_t L_22 = V_2;
		int32_t L_23 = V_0;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_0039;
		}
	}
	{
		return;
	}
}
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Vector2>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t052E91D9E9A063D03D7D70EDB7407F42CEDDBD48 Dictionary_2_GetEnumerator_mF968EBF390DDD2AE4D9505FAA72607831E9F9B97_gshared (Dictionary_2_t41479D9F29C6C1BC07FC7F8D3DD313D8A9A419E1* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t052E91D9E9A063D03D7D70EDB7407F42CEDDBD48 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m3DA0996D376CC3B5563A4EA329A46E2F1B91E38C((&L_0), __this, 2, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Vector2>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m11C46FE459221FA039C891E3698FA3A87D0FC0CE_gshared (Dictionary_2_t41479D9F29C6C1BC07FC7F8D3DD313D8A9A419E1* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t052E91D9E9A063D03D7D70EDB7407F42CEDDBD48 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m3DA0996D376CC3B5563A4EA329A46E2F1B91E38C((&L_0), __this, 2, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		Enumerator_t052E91D9E9A063D03D7D70EDB7407F42CEDDBD48 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 32), &L_1);
		return (RuntimeObject*)L_2;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Vector2>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_GetObjectData_mF53B67D8432DDA76772BFFA8A1ED30B89506EB64_gshared (Dictionary_2_t41479D9F29C6C1BC07FC7F8D3DD313D8A9A419E1* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___info0, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___context1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_tD9CA47909C5DBB11E7BBC75787D8858E0668B81F* V_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	String_t* G_B4_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B4_2 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B3_2 = NULL;
	String_t* G_B6_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B6_1 = NULL;
	String_t* G_B5_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B5_1 = NULL;
	int32_t G_B7_0 = 0;
	String_t* G_B7_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B7_2 = NULL;
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___info0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)4, NULL);
	}

IL_0009:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___info0;
		int32_t L_2 = (int32_t)__this->____version_5;
		NullCheck(L_1);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(L_1, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, L_2, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = ___info0;
		RuntimeObject* L_4 = (RuntimeObject*)__this->____comparer_6;
		RuntimeObject* L_5 = L_4;
		G_B3_0 = L_5;
		G_B3_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
		G_B3_2 = L_3;
		if (L_5)
		{
			G_B4_0 = L_5;
			G_B4_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
			G_B4_2 = L_3;
			goto IL_002f;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_6;
		L_6 = ((  EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		G_B4_0 = ((RuntimeObject*)(L_6));
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
	}

IL_002f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 34)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		NullCheck(G_B4_2);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(G_B4_2, G_B4_1, (RuntimeObject*)G_B4_0, L_8, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_9 = ___info0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		G_B5_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
		G_B5_1 = L_9;
		if (!L_10)
		{
			G_B6_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
			G_B6_1 = L_9;
			goto IL_0056;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_11);
		G_B7_0 = ((int32_t)(((RuntimeArray*)L_11)->max_length));
		G_B7_1 = G_B5_0;
		G_B7_2 = G_B5_1;
		goto IL_0057;
	}

IL_0056:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
		G_B7_2 = G_B6_1;
	}

IL_0057:
	{
		NullCheck(G_B7_2);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(G_B7_2, G_B7_1, G_B7_0, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		if (!L_12)
		{
			goto IL_008e;
		}
	}
	{
		int32_t L_13;
		L_13 = ((  int32_t (*) (Dictionary_2_t41479D9F29C6C1BC07FC7F8D3DD313D8A9A419E1*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 29)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		KeyValuePair_2U5BU5D_tD9CA47909C5DBB11E7BBC75787D8858E0668B81F* L_14 = (KeyValuePair_2U5BU5D_tD9CA47909C5DBB11E7BBC75787D8858E0668B81F*)(KeyValuePair_2U5BU5D_tD9CA47909C5DBB11E7BBC75787D8858E0668B81F*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 35), (uint32_t)L_13);
		V_0 = L_14;
		KeyValuePair_2U5BU5D_tD9CA47909C5DBB11E7BBC75787D8858E0668B81F* L_15 = V_0;
		((  void (*) (Dictionary_2_t41479D9F29C6C1BC07FC7F8D3DD313D8A9A419E1*, KeyValuePair_2U5BU5D_tD9CA47909C5DBB11E7BBC75787D8858E0668B81F*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 36)))(__this, L_15, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 36));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_16 = ___info0;
		KeyValuePair_2U5BU5D_tD9CA47909C5DBB11E7BBC75787D8858E0668B81F* L_17 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 37)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		NullCheck(L_16);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(L_16, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, (RuntimeObject*)L_17, L_19, NULL);
	}

IL_008e:
	{
		return;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Vector2>::FindEntry(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_mA8C996117E1982A65B6508F2B4D174D5FE302F09_gshared (Dictionary_2_t41479D9F29C6C1BC07FC7F8D3DD313D8A9A419E1* __this, RuntimeObject* ___key0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	EntryU5BU5D_tB701640026CE382655A04D3448D52F314990B3AF* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	int32_t V_5 = 0;
	RuntimeObject* V_6 = NULL;
	EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* V_7 = NULL;
	int32_t V_8 = 0;
	{
		RuntimeObject* L_0 = ___key0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_000e:
	{
		V_0 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		V_1 = L_1;
		EntryU5BU5D_tB701640026CE382655A04D3448D52F314990B3AF* L_2 = (EntryU5BU5D_tB701640026CE382655A04D3448D52F314990B3AF*)__this->____entries_1;
		V_2 = L_2;
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = V_1;
		if (!L_3)
		{
			goto IL_0175;
		}
	}
	{
		RuntimeObject* L_4 = (RuntimeObject*)__this->____comparer_6;
		V_4 = L_4;
		RuntimeObject* L_5 = V_4;
		if (L_5)
		{
			goto IL_0110;
		}
	}
	{
		NullCheck((___key0));
		int32_t L_6;
		L_6 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, (___key0));
		V_5 = ((int32_t)(L_6&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = V_1;
		int32_t L_8 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = V_1;
		NullCheck(L_9);
		NullCheck(L_7);
		int32_t L_10 = ((int32_t)(L_8%((int32_t)(((RuntimeArray*)L_9)->max_length))));
		int32_t L_11 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_11, 1));
		il2cpp_codegen_initobj((&V_6), sizeof(RuntimeObject*));
		RuntimeObject* L_12 = V_6;
		if (!L_12)
		{
			goto IL_00b9;
		}
	}

IL_0066:
	{
		int32_t L_13 = V_0;
		EntryU5BU5D_tB701640026CE382655A04D3448D52F314990B3AF* L_14 = V_2;
		NullCheck(L_14);
		if ((!(((uint32_t)L_13) < ((uint32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_tB701640026CE382655A04D3448D52F314990B3AF* L_15 = V_2;
		int32_t L_16 = V_0;
		NullCheck(L_15);
		int32_t L_17 = (int32_t)((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___hashCode_0;
		int32_t L_18 = V_5;
		if ((!(((uint32_t)L_17) == ((uint32_t)L_18))))
		{
			goto IL_009b;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_19;
		L_19 = ((  EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		EntryU5BU5D_tB701640026CE382655A04D3448D52F314990B3AF* L_20 = V_2;
		int32_t L_21 = V_0;
		NullCheck(L_20);
		RuntimeObject* L_22 = (RuntimeObject*)((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___key_2;
		RuntimeObject* L_23 = ___key0;
		NullCheck(L_19);
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Object>::Equals(T,T) */, L_19, L_22, L_23);
		if (L_24)
		{
			goto IL_0175;
		}
	}

IL_009b:
	{
		EntryU5BU5D_tB701640026CE382655A04D3448D52F314990B3AF* L_25 = V_2;
		int32_t L_26 = V_0;
		NullCheck(L_25);
		int32_t L_27 = (int32_t)((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___next_1;
		V_0 = L_27;
		int32_t L_28 = V_3;
		EntryU5BU5D_tB701640026CE382655A04D3448D52F314990B3AF* L_29 = V_2;
		NullCheck(L_29);
		if ((((int32_t)L_28) < ((int32_t)((int32_t)(((RuntimeArray*)L_29)->max_length)))))
		{
			goto IL_00b3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_00b3:
	{
		int32_t L_30 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_30, 1));
		goto IL_0066;
	}

IL_00b9:
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_31;
		L_31 = ((  EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		V_7 = L_31;
	}

IL_00c0:
	{
		int32_t L_32 = V_0;
		EntryU5BU5D_tB701640026CE382655A04D3448D52F314990B3AF* L_33 = V_2;
		NullCheck(L_33);
		if ((!(((uint32_t)L_32) < ((uint32_t)((int32_t)(((RuntimeArray*)L_33)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_tB701640026CE382655A04D3448D52F314990B3AF* L_34 = V_2;
		int32_t L_35 = V_0;
		NullCheck(L_34);
		int32_t L_36 = (int32_t)((L_34)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_35)))->___hashCode_0;
		int32_t L_37 = V_5;
		if ((!(((uint32_t)L_36) == ((uint32_t)L_37))))
		{
			goto IL_00f2;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_38 = V_7;
		EntryU5BU5D_tB701640026CE382655A04D3448D52F314990B3AF* L_39 = V_2;
		int32_t L_40 = V_0;
		NullCheck(L_39);
		RuntimeObject* L_41 = (RuntimeObject*)((L_39)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_40)))->___key_2;
		RuntimeObject* L_42 = ___key0;
		NullCheck(L_38);
		bool L_43;
		L_43 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Object>::Equals(T,T) */, L_38, L_41, L_42);
		if (L_43)
		{
			goto IL_0175;
		}
	}

IL_00f2:
	{
		EntryU5BU5D_tB701640026CE382655A04D3448D52F314990B3AF* L_44 = V_2;
		int32_t L_45 = V_0;
		NullCheck(L_44);
		int32_t L_46 = (int32_t)((L_44)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_45)))->___next_1;
		V_0 = L_46;
		int32_t L_47 = V_3;
		EntryU5BU5D_tB701640026CE382655A04D3448D52F314990B3AF* L_48 = V_2;
		NullCheck(L_48);
		if ((((int32_t)L_47) < ((int32_t)((int32_t)(((RuntimeArray*)L_48)->max_length)))))
		{
			goto IL_010a;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_010a:
	{
		int32_t L_49 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_49, 1));
		goto IL_00c0;
	}

IL_0110:
	{
		RuntimeObject* L_50 = V_4;
		RuntimeObject* L_51 = ___key0;
		NullCheck(L_50);
		int32_t L_52;
		L_52 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Object>::GetHashCode(T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 41), L_50, L_51);
		V_8 = ((int32_t)(L_52&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_53 = V_1;
		int32_t L_54 = V_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_55 = V_1;
		NullCheck(L_55);
		NullCheck(L_53);
		int32_t L_56 = ((int32_t)(L_54%((int32_t)(((RuntimeArray*)L_55)->max_length))));
		int32_t L_57 = (L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_56));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_57, 1));
	}

IL_012b:
	{
		int32_t L_58 = V_0;
		EntryU5BU5D_tB701640026CE382655A04D3448D52F314990B3AF* L_59 = V_2;
		NullCheck(L_59);
		if ((!(((uint32_t)L_58) < ((uint32_t)((int32_t)(((RuntimeArray*)L_59)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_tB701640026CE382655A04D3448D52F314990B3AF* L_60 = V_2;
		int32_t L_61 = V_0;
		NullCheck(L_60);
		int32_t L_62 = (int32_t)((L_60)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_61)))->___hashCode_0;
		int32_t L_63 = V_8;
		if ((!(((uint32_t)L_62) == ((uint32_t)L_63))))
		{
			goto IL_0157;
		}
	}
	{
		RuntimeObject* L_64 = V_4;
		EntryU5BU5D_tB701640026CE382655A04D3448D52F314990B3AF* L_65 = V_2;
		int32_t L_66 = V_0;
		NullCheck(L_65);
		RuntimeObject* L_67 = (RuntimeObject*)((L_65)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_66)))->___key_2;
		RuntimeObject* L_68 = ___key0;
		NullCheck(L_64);
		bool L_69;
		L_69 = InterfaceFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Object>::Equals(T,T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 41), L_64, L_67, L_68);
		if (L_69)
		{
			goto IL_0175;
		}
	}

IL_0157:
	{
		EntryU5BU5D_tB701640026CE382655A04D3448D52F314990B3AF* L_70 = V_2;
		int32_t L_71 = V_0;
		NullCheck(L_70);
		int32_t L_72 = (int32_t)((L_70)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_71)))->___next_1;
		V_0 = L_72;
		int32_t L_73 = V_3;
		EntryU5BU5D_tB701640026CE382655A04D3448D52F314990B3AF* L_74 = V_2;
		NullCheck(L_74);
		if ((((int32_t)L_73) < ((int32_t)((int32_t)(((RuntimeArray*)L_74)->max_length)))))
		{
			goto IL_016f;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_016f:
	{
		int32_t L_75 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_75, 1));
		goto IL_012b;
	}

IL_0175:
	{
		int32_t L_76 = V_0;
		return L_76;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Vector2>::Initialize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_m4A08A7C0D18AA500A70D36746E5A105EDDE72C99_gshared (Dictionary_2_t41479D9F29C6C1BC07FC7F8D3DD313D8A9A419E1* __this, int32_t ___capacity0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___capacity0;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_0, NULL);
		V_0 = L_1;
		__this->____freeList_3 = (-1);
		int32_t L_2 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_2);
		__this->____buckets_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets_0), (void*)L_3);
		int32_t L_4 = V_0;
		EntryU5BU5D_tB701640026CE382655A04D3448D52F314990B3AF* L_5 = (EntryU5BU5D_tB701640026CE382655A04D3448D52F314990B3AF*)(EntryU5BU5D_tB701640026CE382655A04D3448D52F314990B3AF*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 44), (uint32_t)L_4);
		__this->____entries_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries_1), (void*)L_5);
		int32_t L_6 = V_0;
		return L_6;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Vector2>::TryInsert(TKey,TValue,System.Collections.Generic.InsertionBehavior)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_m4123EF7C11649CE9ECB7B7B3B5A88F99C3D1A406_gshared (Dictionary_2_t41479D9F29C6C1BC07FC7F8D3DD313D8A9A419E1* __this, RuntimeObject* ___key0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value1, uint8_t ___behavior2, const RuntimeMethod* method) 
{
	EntryU5BU5D_tB701640026CE382655A04D3448D52F314990B3AF* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	int32_t V_8 = 0;
	int32_t* V_9 = NULL;
	Entry_tDA878B789C830BB6D853BCCA94EC9A56473F9192* V_10 = NULL;
	RuntimeObject* V_11 = NULL;
	EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t G_B7_0 = 0;
	int32_t* G_B51_0 = NULL;
	{
		RuntimeObject* L_0 = ___key0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_000e:
	{
		int32_t L_1 = (int32_t)__this->____version_5;
		__this->____version_5 = ((int32_t)il2cpp_codegen_add(L_1, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		if (L_2)
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_3;
		L_3 = ((  int32_t (*) (Dictionary_2_t41479D9F29C6C1BC07FC7F8D3DD313D8A9A419E1*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(__this, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
	}

IL_002c:
	{
		EntryU5BU5D_tB701640026CE382655A04D3448D52F314990B3AF* L_4 = (EntryU5BU5D_tB701640026CE382655A04D3448D52F314990B3AF*)__this->____entries_1;
		V_0 = L_4;
		RuntimeObject* L_5 = (RuntimeObject*)__this->____comparer_6;
		V_1 = L_5;
		RuntimeObject* L_6 = V_1;
		if (!L_6)
		{
			goto IL_0046;
		}
	}
	{
		RuntimeObject* L_7 = V_1;
		RuntimeObject* L_8 = ___key0;
		NullCheck(L_7);
		int32_t L_9;
		L_9 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Object>::GetHashCode(T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 41), L_7, L_8);
		G_B7_0 = L_9;
		goto IL_0053;
	}

IL_0046:
	{
		NullCheck((___key0));
		int32_t L_10;
		L_10 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, (___key0));
		G_B7_0 = L_10;
	}

IL_0053:
	{
		V_2 = ((int32_t)(G_B7_0&((int32_t)2147483647LL)));
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		int32_t L_12 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_13);
		NullCheck(L_11);
		V_4 = ((L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_12%((int32_t)(((RuntimeArray*)L_13)->max_length)))))));
		int32_t* L_14 = V_4;
		int32_t L_15 = *((int32_t*)L_14);
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_15, 1));
		RuntimeObject* L_16 = V_1;
		if (L_16)
		{
			goto IL_0187;
		}
	}
	{
		il2cpp_codegen_initobj((&V_11), sizeof(RuntimeObject*));
		RuntimeObject* L_17 = V_11;
		if (!L_17)
		{
			goto IL_010a;
		}
	}

IL_0091:
	{
		int32_t L_18 = V_5;
		EntryU5BU5D_tB701640026CE382655A04D3448D52F314990B3AF* L_19 = V_0;
		NullCheck(L_19);
		if ((!(((uint32_t)L_18) < ((uint32_t)((int32_t)(((RuntimeArray*)L_19)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_tB701640026CE382655A04D3448D52F314990B3AF* L_20 = V_0;
		int32_t L_21 = V_5;
		NullCheck(L_20);
		int32_t L_22 = (int32_t)((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___hashCode_0;
		int32_t L_23 = V_2;
		if ((!(((uint32_t)L_22) == ((uint32_t)L_23))))
		{
			goto IL_00ea;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_24;
		L_24 = ((  EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		EntryU5BU5D_tB701640026CE382655A04D3448D52F314990B3AF* L_25 = V_0;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		RuntimeObject* L_27 = (RuntimeObject*)((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___key_2;
		RuntimeObject* L_28 = ___key0;
		NullCheck(L_24);
		bool L_29;
		L_29 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Object>::Equals(T,T) */, L_24, L_27, L_28);
		if (!L_29)
		{
			goto IL_00ea;
		}
	}
	{
		uint8_t L_30 = ___behavior2;
		if ((!(((uint32_t)L_30) == ((uint32_t)1))))
		{
			goto IL_00d9;
		}
	}
	{
		EntryU5BU5D_tB701640026CE382655A04D3448D52F314990B3AF* L_31 = V_0;
		int32_t L_32 = V_5;
		NullCheck(L_31);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_33 = ___value1;
		((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___value_3 = L_33;
		return (bool)1;
	}

IL_00d9:
	{
		uint8_t L_34 = ___behavior2;
		if ((!(((uint32_t)L_34) == ((uint32_t)2))))
		{
			goto IL_00e8;
		}
	}
	{
		RuntimeObject* L_35 = ___key0;
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_35, NULL);
	}

IL_00e8:
	{
		return (bool)0;
	}

IL_00ea:
	{
		EntryU5BU5D_tB701640026CE382655A04D3448D52F314990B3AF* L_36 = V_0;
		int32_t L_37 = V_5;
		NullCheck(L_36);
		int32_t L_38 = (int32_t)((L_36)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_37)))->___next_1;
		V_5 = L_38;
		int32_t L_39 = V_3;
		EntryU5BU5D_tB701640026CE382655A04D3448D52F314990B3AF* L_40 = V_0;
		NullCheck(L_40);
		if ((((int32_t)L_39) < ((int32_t)((int32_t)(((RuntimeArray*)L_40)->max_length)))))
		{
			goto IL_0104;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_0104:
	{
		int32_t L_41 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_41, 1));
		goto IL_0091;
	}

IL_010a:
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_42;
		L_42 = ((  EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		V_12 = L_42;
	}

IL_0111:
	{
		int32_t L_43 = V_5;
		EntryU5BU5D_tB701640026CE382655A04D3448D52F314990B3AF* L_44 = V_0;
		NullCheck(L_44);
		if ((!(((uint32_t)L_43) < ((uint32_t)((int32_t)(((RuntimeArray*)L_44)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_tB701640026CE382655A04D3448D52F314990B3AF* L_45 = V_0;
		int32_t L_46 = V_5;
		NullCheck(L_45);
		int32_t L_47 = (int32_t)((L_45)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_46)))->___hashCode_0;
		int32_t L_48 = V_2;
		if ((!(((uint32_t)L_47) == ((uint32_t)L_48))))
		{
			goto IL_0167;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_49 = V_12;
		EntryU5BU5D_tB701640026CE382655A04D3448D52F314990B3AF* L_50 = V_0;
		int32_t L_51 = V_5;
		NullCheck(L_50);
		RuntimeObject* L_52 = (RuntimeObject*)((L_50)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_51)))->___key_2;
		RuntimeObject* L_53 = ___key0;
		NullCheck(L_49);
		bool L_54;
		L_54 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Object>::Equals(T,T) */, L_49, L_52, L_53);
		if (!L_54)
		{
			goto IL_0167;
		}
	}
	{
		uint8_t L_55 = ___behavior2;
		if ((!(((uint32_t)L_55) == ((uint32_t)1))))
		{
			goto IL_0156;
		}
	}
	{
		EntryU5BU5D_tB701640026CE382655A04D3448D52F314990B3AF* L_56 = V_0;
		int32_t L_57 = V_5;
		NullCheck(L_56);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_58 = ___value1;
		((L_56)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_57)))->___value_3 = L_58;
		return (bool)1;
	}

IL_0156:
	{
		uint8_t L_59 = ___behavior2;
		if ((!(((uint32_t)L_59) == ((uint32_t)2))))
		{
			goto IL_0165;
		}
	}
	{
		RuntimeObject* L_60 = ___key0;
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_60, NULL);
	}

IL_0165:
	{
		return (bool)0;
	}

IL_0167:
	{
		EntryU5BU5D_tB701640026CE382655A04D3448D52F314990B3AF* L_61 = V_0;
		int32_t L_62 = V_5;
		NullCheck(L_61);
		int32_t L_63 = (int32_t)((L_61)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_62)))->___next_1;
		V_5 = L_63;
		int32_t L_64 = V_3;
		EntryU5BU5D_tB701640026CE382655A04D3448D52F314990B3AF* L_65 = V_0;
		NullCheck(L_65);
		if ((((int32_t)L_64) < ((int32_t)((int32_t)(((RuntimeArray*)L_65)->max_length)))))
		{
			goto IL_0181;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_0181:
	{
		int32_t L_66 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_66, 1));
		goto IL_0111;
	}

IL_0187:
	{
		int32_t L_67 = V_5;
		EntryU5BU5D_tB701640026CE382655A04D3448D52F314990B3AF* L_68 = V_0;
		NullCheck(L_68);
		if ((!(((uint32_t)L_67) < ((uint32_t)((int32_t)(((RuntimeArray*)L_68)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_tB701640026CE382655A04D3448D52F314990B3AF* L_69 = V_0;
		int32_t L_70 = V_5;
		NullCheck(L_69);
		int32_t L_71 = (int32_t)((L_69)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_70)))->___hashCode_0;
		int32_t L_72 = V_2;
		if ((!(((uint32_t)L_71) == ((uint32_t)L_72))))
		{
			goto IL_01d9;
		}
	}
	{
		RuntimeObject* L_73 = V_1;
		EntryU5BU5D_tB701640026CE382655A04D3448D52F314990B3AF* L_74 = V_0;
		int32_t L_75 = V_5;
		NullCheck(L_74);
		RuntimeObject* L_76 = (RuntimeObject*)((L_74)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_75)))->___key_2;
		RuntimeObject* L_77 = ___key0;
		NullCheck(L_73);
		bool L_78;
		L_78 = InterfaceFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Object>::Equals(T,T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 41), L_73, L_76, L_77);
		if (!L_78)
		{
			goto IL_01d9;
		}
	}
	{
		uint8_t L_79 = ___behavior2;
		if ((!(((uint32_t)L_79) == ((uint32_t)1))))
		{
			goto IL_01c8;
		}
	}
	{
		EntryU5BU5D_tB701640026CE382655A04D3448D52F314990B3AF* L_80 = V_0;
		int32_t L_81 = V_5;
		NullCheck(L_80);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_82 = ___value1;
		((L_80)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_81)))->___value_3 = L_82;
		return (bool)1;
	}

IL_01c8:
	{
		uint8_t L_83 = ___behavior2;
		if ((!(((uint32_t)L_83) == ((uint32_t)2))))
		{
			goto IL_01d7;
		}
	}
	{
		RuntimeObject* L_84 = ___key0;
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_84, NULL);
	}

IL_01d7:
	{
		return (bool)0;
	}

IL_01d9:
	{
		EntryU5BU5D_tB701640026CE382655A04D3448D52F314990B3AF* L_85 = V_0;
		int32_t L_86 = V_5;
		NullCheck(L_85);
		int32_t L_87 = (int32_t)((L_85)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_86)))->___next_1;
		V_5 = L_87;
		int32_t L_88 = V_3;
		EntryU5BU5D_tB701640026CE382655A04D3448D52F314990B3AF* L_89 = V_0;
		NullCheck(L_89);
		if ((((int32_t)L_88) < ((int32_t)((int32_t)(((RuntimeArray*)L_89)->max_length)))))
		{
			goto IL_01f3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_01f3:
	{
		int32_t L_90 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_90, 1));
		goto IL_0187;
	}

IL_01f9:
	{
		V_6 = (bool)0;
		V_7 = (bool)0;
		int32_t L_91 = (int32_t)__this->____freeCount_4;
		if ((((int32_t)L_91) <= ((int32_t)0)))
		{
			goto IL_0223;
		}
	}
	{
		int32_t L_92 = (int32_t)__this->____freeList_3;
		V_8 = L_92;
		V_7 = (bool)1;
		int32_t L_93 = (int32_t)__this->____freeCount_4;
		__this->____freeCount_4 = ((int32_t)il2cpp_codegen_subtract(L_93, 1));
		goto IL_0250;
	}

IL_0223:
	{
		int32_t L_94 = (int32_t)__this->____count_2;
		V_13 = L_94;
		int32_t L_95 = V_13;
		EntryU5BU5D_tB701640026CE382655A04D3448D52F314990B3AF* L_96 = V_0;
		NullCheck(L_96);
		if ((!(((uint32_t)L_95) == ((uint32_t)((int32_t)(((RuntimeArray*)L_96)->max_length))))))
		{
			goto IL_023b;
		}
	}
	{
		((  void (*) (Dictionary_2_t41479D9F29C6C1BC07FC7F8D3DD313D8A9A419E1*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 45)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 45));
		V_6 = (bool)1;
	}

IL_023b:
	{
		int32_t L_97 = V_13;
		V_8 = L_97;
		int32_t L_98 = V_13;
		__this->____count_2 = ((int32_t)il2cpp_codegen_add(L_98, 1));
		EntryU5BU5D_tB701640026CE382655A04D3448D52F314990B3AF* L_99 = (EntryU5BU5D_tB701640026CE382655A04D3448D52F314990B3AF*)__this->____entries_1;
		V_0 = L_99;
	}

IL_0250:
	{
		bool L_100 = V_6;
		if (L_100)
		{
			goto IL_0258;
		}
	}
	{
		int32_t* L_101 = V_4;
		G_B51_0 = L_101;
		goto IL_026d;
	}

IL_0258:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_102 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		int32_t L_103 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_104 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_104);
		NullCheck(L_102);
		G_B51_0 = ((L_102)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_103%((int32_t)(((RuntimeArray*)L_104)->max_length)))))));
	}

IL_026d:
	{
		V_9 = G_B51_0;
		EntryU5BU5D_tB701640026CE382655A04D3448D52F314990B3AF* L_105 = V_0;
		int32_t L_106 = V_8;
		NullCheck(L_105);
		V_10 = ((L_105)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_106)));
		bool L_107 = V_7;
		if (!L_107)
		{
			goto IL_028a;
		}
	}
	{
		Entry_tDA878B789C830BB6D853BCCA94EC9A56473F9192* L_108 = V_10;
		int32_t L_109 = (int32_t)L_108->___next_1;
		__this->____freeList_3 = L_109;
	}

IL_028a:
	{
		Entry_tDA878B789C830BB6D853BCCA94EC9A56473F9192* L_110 = V_10;
		int32_t L_111 = V_2;
		L_110->___hashCode_0 = L_111;
		Entry_tDA878B789C830BB6D853BCCA94EC9A56473F9192* L_112 = V_10;
		int32_t* L_113 = V_9;
		int32_t L_114 = *((int32_t*)L_113);
		L_112->___next_1 = ((int32_t)il2cpp_codegen_subtract(L_114, 1));
		Entry_tDA878B789C830BB6D853BCCA94EC9A56473F9192* L_115 = V_10;
		RuntimeObject* L_116 = ___key0;
		L_115->___key_2 = L_116;
		Il2CppCodeGenWriteBarrier((void**)(&L_115->___key_2), (void*)L_116);
		Entry_tDA878B789C830BB6D853BCCA94EC9A56473F9192* L_117 = V_10;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_118 = ___value1;
		L_117->___value_3 = L_118;
		int32_t* L_119 = V_9;
		int32_t L_120 = V_8;
		*((int32_t*)L_119) = (int32_t)((int32_t)il2cpp_codegen_add(L_120, 1));
		return (bool)1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Vector2>::OnDeserialization(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_OnDeserialization_m88ECE1375CF606F91426BCDC57309DCF330F013A_gshared (Dictionary_2_t41479D9F29C6C1BC07FC7F8D3DD313D8A9A419E1* __this, RuntimeObject* ___sender0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	KeyValuePair_2U5BU5D_tD9CA47909C5DBB11E7BBC75787D8858E0668B81F* V_3 = NULL;
	int32_t V_4 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F(L_0, (RuntimeObject*)__this, (&V_0), ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_2 = V_0;
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_3, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, NULL);
		V_1 = L_4;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_5, _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69, NULL);
		V_2 = L_6;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_7 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 34)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		RuntimeObject* L_10;
		L_10 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_7, _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9, L_9, NULL);
		__this->____comparer_6 = ((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 41)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer_6), (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 41))));
		int32_t L_11 = V_2;
		if (!L_11)
		{
			goto IL_00c9;
		}
	}
	{
		int32_t L_12 = V_2;
		int32_t L_13;
		L_13 = ((  int32_t (*) (Dictionary_2_t41479D9F29C6C1BC07FC7F8D3DD313D8A9A419E1*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(__this, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_14 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 37)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		NullCheck(L_14);
		RuntimeObject* L_17;
		L_17 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_14, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, L_16, NULL);
		V_3 = ((KeyValuePair_2U5BU5D_tD9CA47909C5DBB11E7BBC75787D8858E0668B81F*)Castclass((RuntimeObject*)L_17, il2cpp_rgctx_data(method->klass->rgctx_data, 46)));
		KeyValuePair_2U5BU5D_tD9CA47909C5DBB11E7BBC75787D8858E0668B81F* L_18 = V_3;
		if (L_18)
		{
			goto IL_007a;
		}
	}
	{
		ThrowHelper_ThrowSerializationException_m03BE2B48CD3617C32FBCEE16030F7C5563E04E16((int32_t)((int32_t)16), NULL);
	}

IL_007a:
	{
		V_4 = 0;
		goto IL_00c0;
	}

IL_007f:
	{
		KeyValuePair_2U5BU5D_tD9CA47909C5DBB11E7BBC75787D8858E0668B81F* L_19 = V_3;
		int32_t L_20 = V_4;
		NullCheck(L_19);
		RuntimeObject* L_21;
		L_21 = KeyValuePair_2_get_Key_mC2F74F2C7913473C536D80C56A49C907525AA762_inline(((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20))), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		if (L_21)
		{
			goto IL_009a;
		}
	}
	{
		ThrowHelper_ThrowSerializationException_m03BE2B48CD3617C32FBCEE16030F7C5563E04E16((int32_t)((int32_t)17), NULL);
	}

IL_009a:
	{
		KeyValuePair_2U5BU5D_tD9CA47909C5DBB11E7BBC75787D8858E0668B81F* L_22 = V_3;
		int32_t L_23 = V_4;
		NullCheck(L_22);
		RuntimeObject* L_24;
		L_24 = KeyValuePair_2_get_Key_mC2F74F2C7913473C536D80C56A49C907525AA762_inline(((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23))), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		KeyValuePair_2U5BU5D_tD9CA47909C5DBB11E7BBC75787D8858E0668B81F* L_25 = V_3;
		int32_t L_26 = V_4;
		NullCheck(L_25);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_27;
		L_27 = KeyValuePair_2_get_Value_m8C9B6CC4F0B407E1AE61FC1F558FE1920BE127B0_inline(((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26))), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		((  void (*) (Dictionary_2_t41479D9F29C6C1BC07FC7F8D3DD313D8A9A419E1*, RuntimeObject*, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(__this, L_24, L_27, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		int32_t L_28 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_00c0:
	{
		int32_t L_29 = V_4;
		KeyValuePair_2U5BU5D_tD9CA47909C5DBB11E7BBC75787D8858E0668B81F* L_30 = V_3;
		NullCheck(L_30);
		if ((((int32_t)L_29) < ((int32_t)((int32_t)(((RuntimeArray*)L_30)->max_length)))))
		{
			goto IL_007f;
		}
	}
	{
		goto IL_00d0;
	}

IL_00c9:
	{
		__this->____buckets_0 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets_0), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
	}

IL_00d0:
	{
		int32_t L_31 = V_1;
		__this->____version_5 = L_31;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_32;
		L_32 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		NullCheck(L_32);
		bool L_33;
		L_33 = ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E(L_32, (RuntimeObject*)__this, ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Vector2>::Resize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_mC4C90C17B59CF4BE93966A12197D9ACF814211E0_gshared (Dictionary_2_t41479D9F29C6C1BC07FC7F8D3DD313D8A9A419E1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = (int32_t)__this->____count_2;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_ExpandPrime_m9A35EC171AA0EA16F7C9F71EE6FAD5A82565ADB9(L_0, NULL);
		((  void (*) (Dictionary_2_t41479D9F29C6C1BC07FC7F8D3DD313D8A9A419E1*, int32_t, bool, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 47)))(__this, L_1, (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 47));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Vector2>::Resize(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m136923A7769E9999D2A64CBF9A6875814D366A5E_gshared (Dictionary_2_t41479D9F29C6C1BC07FC7F8D3DD313D8A9A419E1* __this, int32_t ___newSize0, bool ___forceNewHashCodes1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	EntryU5BU5D_tB701640026CE382655A04D3448D52F314990B3AF* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		int32_t L_0 = ___newSize0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = ___newSize0;
		EntryU5BU5D_tB701640026CE382655A04D3448D52F314990B3AF* L_3 = (EntryU5BU5D_tB701640026CE382655A04D3448D52F314990B3AF*)(EntryU5BU5D_tB701640026CE382655A04D3448D52F314990B3AF*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 44), (uint32_t)L_2);
		V_1 = L_3;
		int32_t L_4 = (int32_t)__this->____count_2;
		V_2 = L_4;
		EntryU5BU5D_tB701640026CE382655A04D3448D52F314990B3AF* L_5 = (EntryU5BU5D_tB701640026CE382655A04D3448D52F314990B3AF*)__this->____entries_1;
		EntryU5BU5D_tB701640026CE382655A04D3448D52F314990B3AF* L_6 = V_1;
		int32_t L_7 = V_2;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, 0, (RuntimeArray*)L_6, 0, L_7, NULL);
		il2cpp_codegen_initobj((&V_3), sizeof(RuntimeObject*));
		RuntimeObject* L_8 = V_3;
		bool L_9 = ___forceNewHashCodes1;
		if (!((int32_t)(((((RuntimeObject*)(RuntimeObject*)L_8) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0)&(int32_t)L_9)))
		{
			goto IL_0084;
		}
	}
	{
		V_4 = 0;
		goto IL_007f;
	}

IL_003e:
	{
		EntryU5BU5D_tB701640026CE382655A04D3448D52F314990B3AF* L_10 = V_1;
		int32_t L_11 = V_4;
		NullCheck(L_10);
		int32_t L_12 = (int32_t)((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)))->___hashCode_0;
		if ((((int32_t)L_12) < ((int32_t)0)))
		{
			goto IL_0079;
		}
	}
	{
		EntryU5BU5D_tB701640026CE382655A04D3448D52F314990B3AF* L_13 = V_1;
		int32_t L_14 = V_4;
		NullCheck(L_13);
		EntryU5BU5D_tB701640026CE382655A04D3448D52F314990B3AF* L_15 = V_1;
		int32_t L_16 = V_4;
		NullCheck(L_15);
		RuntimeObject** L_17 = (RuntimeObject**)(&((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___key_2);
		NullCheck((*L_17));
		int32_t L_18;
		L_18 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, (*L_17));
		((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)))->___hashCode_0 = ((int32_t)(L_18&((int32_t)2147483647LL)));
	}

IL_0079:
	{
		int32_t L_19 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_007f:
	{
		int32_t L_20 = V_4;
		int32_t L_21 = V_2;
		if ((((int32_t)L_20) < ((int32_t)L_21)))
		{
			goto IL_003e;
		}
	}

IL_0084:
	{
		V_5 = 0;
		goto IL_00cb;
	}

IL_0089:
	{
		EntryU5BU5D_tB701640026CE382655A04D3448D52F314990B3AF* L_22 = V_1;
		int32_t L_23 = V_5;
		NullCheck(L_22);
		int32_t L_24 = (int32_t)((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23)))->___hashCode_0;
		if ((((int32_t)L_24) < ((int32_t)0)))
		{
			goto IL_00c5;
		}
	}
	{
		EntryU5BU5D_tB701640026CE382655A04D3448D52F314990B3AF* L_25 = V_1;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		int32_t L_27 = (int32_t)((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___hashCode_0;
		int32_t L_28 = ___newSize0;
		V_6 = ((int32_t)(L_27%L_28));
		EntryU5BU5D_tB701640026CE382655A04D3448D52F314990B3AF* L_29 = V_1;
		int32_t L_30 = V_5;
		NullCheck(L_29);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = V_0;
		int32_t L_32 = V_6;
		NullCheck(L_31);
		int32_t L_33 = L_32;
		int32_t L_34 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		((L_29)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_30)))->___next_1 = ((int32_t)il2cpp_codegen_subtract(L_34, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_35 = V_0;
		int32_t L_36 = V_6;
		int32_t L_37 = V_5;
		NullCheck(L_35);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(L_36), (int32_t)((int32_t)il2cpp_codegen_add(L_37, 1)));
	}

IL_00c5:
	{
		int32_t L_38 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
	}

IL_00cb:
	{
		int32_t L_39 = V_5;
		int32_t L_40 = V_2;
		if ((((int32_t)L_39) < ((int32_t)L_40)))
		{
			goto IL_0089;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_41 = V_0;
		__this->____buckets_0 = L_41;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets_0), (void*)L_41);
		EntryU5BU5D_tB701640026CE382655A04D3448D52F314990B3AF* L_42 = V_1;
		__this->____entries_1 = L_42;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries_1), (void*)L_42);
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Vector2>::Remove(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m5359A59AD9E9B5D43B5915B69C392E9E4E173FAC_gshared (Dictionary_2_t41479D9F29C6C1BC07FC7F8D3DD313D8A9A419E1* __this, RuntimeObject* ___key0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Entry_tDA878B789C830BB6D853BCCA94EC9A56473F9192* V_4 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	RuntimeObject* G_B10_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	bool G_B11_0 = false;
	{
		RuntimeObject* L_0 = ___key0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_000e:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		if (!L_1)
		{
			goto IL_0149;
		}
	}
	{
		RuntimeObject* L_2 = (RuntimeObject*)__this->____comparer_6;
		RuntimeObject* L_3 = L_2;
		G_B4_0 = L_3;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_0032;
		}
	}
	{
		NullCheck((___key0));
		int32_t L_4;
		L_4 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, (___key0));
		G_B6_0 = L_4;
		goto IL_0038;
	}

IL_0032:
	{
		RuntimeObject* L_5 = ___key0;
		NullCheck(G_B5_0);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Object>::GetHashCode(T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 41), G_B5_0, L_5);
		G_B6_0 = L_6;
	}

IL_0038:
	{
		V_0 = ((int32_t)(G_B6_0&((int32_t)2147483647LL)));
		int32_t L_7 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_8);
		V_1 = ((int32_t)(L_7%((int32_t)(((RuntimeArray*)L_8)->max_length))));
		V_2 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		int32_t L_10 = V_1;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		int32_t L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
		goto IL_0142;
	}

IL_005c:
	{
		EntryU5BU5D_tB701640026CE382655A04D3448D52F314990B3AF* L_13 = (EntryU5BU5D_tB701640026CE382655A04D3448D52F314990B3AF*)__this->____entries_1;
		int32_t L_14 = V_3;
		NullCheck(L_13);
		V_4 = ((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)));
		Entry_tDA878B789C830BB6D853BCCA94EC9A56473F9192* L_15 = V_4;
		int32_t L_16 = (int32_t)L_15->___hashCode_0;
		int32_t L_17 = V_0;
		if ((!(((uint32_t)L_16) == ((uint32_t)L_17))))
		{
			goto IL_0138;
		}
	}
	{
		RuntimeObject* L_18 = (RuntimeObject*)__this->____comparer_6;
		RuntimeObject* L_19 = L_18;
		G_B9_0 = L_19;
		if (L_19)
		{
			G_B10_0 = L_19;
			goto IL_0095;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_20;
		L_20 = ((  EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		Entry_tDA878B789C830BB6D853BCCA94EC9A56473F9192* L_21 = V_4;
		RuntimeObject* L_22 = (RuntimeObject*)L_21->___key_2;
		RuntimeObject* L_23 = ___key0;
		NullCheck(L_20);
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Object>::Equals(T,T) */, L_20, L_22, L_23);
		G_B11_0 = L_24;
		goto IL_00a2;
	}

IL_0095:
	{
		Entry_tDA878B789C830BB6D853BCCA94EC9A56473F9192* L_25 = V_4;
		RuntimeObject* L_26 = (RuntimeObject*)L_25->___key_2;
		RuntimeObject* L_27 = ___key0;
		NullCheck(G_B10_0);
		bool L_28;
		L_28 = InterfaceFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Object>::Equals(T,T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 41), G_B10_0, L_26, L_27);
		G_B11_0 = L_28;
	}

IL_00a2:
	{
		if (!G_B11_0)
		{
			goto IL_0138;
		}
	}
	{
		int32_t L_29 = V_2;
		if ((((int32_t)L_29) >= ((int32_t)0)))
		{
			goto IL_00be;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_30 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		int32_t L_31 = V_1;
		Entry_tDA878B789C830BB6D853BCCA94EC9A56473F9192* L_32 = V_4;
		int32_t L_33 = (int32_t)L_32->___next_1;
		NullCheck(L_30);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_31), (int32_t)((int32_t)il2cpp_codegen_add(L_33, 1)));
		goto IL_00d6;
	}

IL_00be:
	{
		EntryU5BU5D_tB701640026CE382655A04D3448D52F314990B3AF* L_34 = (EntryU5BU5D_tB701640026CE382655A04D3448D52F314990B3AF*)__this->____entries_1;
		int32_t L_35 = V_2;
		NullCheck(L_34);
		Entry_tDA878B789C830BB6D853BCCA94EC9A56473F9192* L_36 = V_4;
		int32_t L_37 = (int32_t)L_36->___next_1;
		((L_34)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_35)))->___next_1 = L_37;
	}

IL_00d6:
	{
		Entry_tDA878B789C830BB6D853BCCA94EC9A56473F9192* L_38 = V_4;
		L_38->___hashCode_0 = (-1);
		Entry_tDA878B789C830BB6D853BCCA94EC9A56473F9192* L_39 = V_4;
		int32_t L_40 = (int32_t)__this->____freeList_3;
		L_39->___next_1 = L_40;
		if (!true)
		{
			goto IL_00ff;
		}
	}
	{
		Entry_tDA878B789C830BB6D853BCCA94EC9A56473F9192* L_41 = V_4;
		RuntimeObject** L_42 = (RuntimeObject**)(&L_41->___key_2);
		il2cpp_codegen_initobj(L_42, sizeof(RuntimeObject*));
	}

IL_00ff:
	{
		if (!false)
		{
			goto IL_0113;
		}
	}
	{
		Entry_tDA878B789C830BB6D853BCCA94EC9A56473F9192* L_43 = V_4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_44 = (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)(&L_43->___value_3);
		il2cpp_codegen_initobj(L_44, sizeof(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7));
	}

IL_0113:
	{
		int32_t L_45 = V_3;
		__this->____freeList_3 = L_45;
		int32_t L_46 = (int32_t)__this->____freeCount_4;
		__this->____freeCount_4 = ((int32_t)il2cpp_codegen_add(L_46, 1));
		int32_t L_47 = (int32_t)__this->____version_5;
		__this->____version_5 = ((int32_t)il2cpp_codegen_add(L_47, 1));
		return (bool)1;
	}

IL_0138:
	{
		int32_t L_48 = V_3;
		V_2 = L_48;
		Entry_tDA878B789C830BB6D853BCCA94EC9A56473F9192* L_49 = V_4;
		int32_t L_50 = (int32_t)L_49->___next_1;
		V_3 = L_50;
	}

IL_0142:
	{
		int32_t L_51 = V_3;
		if ((((int32_t)L_51) >= ((int32_t)0)))
		{
			goto IL_005c;
		}
	}

IL_0149:
	{
		return (bool)0;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Vector2>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m9C5A2CBD8FAE83C5A706FD6CB2B7C5B941461859_gshared (Dictionary_2_t41479D9F29C6C1BC07FC7F8D3DD313D8A9A419E1* __this, RuntimeObject* ___key0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___value1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = ___key0;
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_t41479D9F29C6C1BC07FC7F8D3DD313D8A9A419E1*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 20)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0025;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_3 = ___value1;
		EntryU5BU5D_tB701640026CE382655A04D3448D52F314990B3AF* L_4 = (EntryU5BU5D_tB701640026CE382655A04D3448D52F314990B3AF*)__this->____entries_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value_3;
		*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)L_3 = L_6;
		return (bool)1;
	}

IL_0025:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_7 = ___value1;
		il2cpp_codegen_initobj(L_7, sizeof(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7));
		return (bool)0;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Vector2>::TryAdd(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryAdd_mC47537523504CFB6B0E31CA3D68D62C777AE83E2_gshared (Dictionary_2_t41479D9F29C6C1BC07FC7F8D3DD313D8A9A419E1* __this, RuntimeObject* ___key0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value1, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___key0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = ___value1;
		bool L_2;
		L_2 = ((  bool (*) (Dictionary_2_t41479D9F29C6C1BC07FC7F8D3DD313D8A9A419E1*, RuntimeObject*, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, uint8_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 22)))(__this, L_0, L_1, (uint8_t)0, il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		return L_2;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Vector2>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m347B598806B303778E5B0A49959B786D24383EA9_gshared (Dictionary_2_t41479D9F29C6C1BC07FC7F8D3DD313D8A9A419E1* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Vector2>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_mA948267DF937F7366BB30D616F5581CAC39FD4F6_gshared (Dictionary_2_t41479D9F29C6C1BC07FC7F8D3DD313D8A9A419E1* __this, KeyValuePair_2U5BU5D_tD9CA47909C5DBB11E7BBC75787D8858E0668B81F* ___array0, int32_t ___index1, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2U5BU5D_tD9CA47909C5DBB11E7BBC75787D8858E0668B81F* L_0 = ___array0;
		int32_t L_1 = ___index1;
		((  void (*) (Dictionary_2_t41479D9F29C6C1BC07FC7F8D3DD313D8A9A419E1*, KeyValuePair_2U5BU5D_tD9CA47909C5DBB11E7BBC75787D8858E0668B81F*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 36)))(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 36));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Vector2>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_ICollection_CopyTo_m141F611EB2E3CD32C401EB6BDDB8D0CCB74A2D1B_gshared (Dictionary_2_t41479D9F29C6C1BC07FC7F8D3DD313D8A9A419E1* __this, RuntimeArray* ___array0, int32_t ___index1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_tD9CA47909C5DBB11E7BBC75787D8858E0668B81F* V_0 = NULL;
	DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* V_1 = NULL;
	EntryU5BU5D_tB701640026CE382655A04D3448D52F314990B3AF* V_2 = NULL;
	int32_t V_3 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_4 = NULL;
	int32_t V_5 = 0;
	EntryU5BU5D_tB701640026CE382655A04D3448D52F314990B3AF* V_6 = NULL;
	int32_t V_7 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___array0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___array0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(L_1, NULL);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___array0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___index1;
		RuntimeArray* L_6 = ___array0;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_6, NULL);
		if ((!(((uint32_t)L_5) > ((uint32_t)L_7))))
		{
			goto IL_0035;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0035:
	{
		RuntimeArray* L_8 = ___array0;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_8, NULL);
		int32_t L_10 = ___index1;
		int32_t L_11;
		L_11 = ((  int32_t (*) (Dictionary_2_t41479D9F29C6C1BC07FC7F8D3DD313D8A9A419E1*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 29)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_9, L_10))) >= ((int32_t)L_11)))
		{
			goto IL_004b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)5, NULL);
	}

IL_004b:
	{
		RuntimeArray* L_12 = ___array0;
		V_0 = ((KeyValuePair_2U5BU5D_tD9CA47909C5DBB11E7BBC75787D8858E0668B81F*)IsInst((RuntimeObject*)L_12, il2cpp_rgctx_data(method->klass->rgctx_data, 46)));
		KeyValuePair_2U5BU5D_tD9CA47909C5DBB11E7BBC75787D8858E0668B81F* L_13 = V_0;
		if (!L_13)
		{
			goto IL_005e;
		}
	}
	{
		KeyValuePair_2U5BU5D_tD9CA47909C5DBB11E7BBC75787D8858E0668B81F* L_14 = V_0;
		int32_t L_15 = ___index1;
		((  void (*) (Dictionary_2_t41479D9F29C6C1BC07FC7F8D3DD313D8A9A419E1*, KeyValuePair_2U5BU5D_tD9CA47909C5DBB11E7BBC75787D8858E0668B81F*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 36)))(__this, L_14, L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 36));
		return;
	}

IL_005e:
	{
		RuntimeArray* L_16 = ___array0;
		V_1 = ((DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533*)IsInst((RuntimeObject*)L_16, DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var));
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_17 = V_1;
		if (!L_17)
		{
			goto IL_00c3;
		}
	}
	{
		EntryU5BU5D_tB701640026CE382655A04D3448D52F314990B3AF* L_18 = (EntryU5BU5D_tB701640026CE382655A04D3448D52F314990B3AF*)__this->____entries_1;
		V_2 = L_18;
		V_3 = 0;
		goto IL_00b9;
	}

IL_0073:
	{
		EntryU5BU5D_tB701640026CE382655A04D3448D52F314990B3AF* L_19 = V_2;
		int32_t L_20 = V_3;
		NullCheck(L_19);
		int32_t L_21 = (int32_t)((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20)))->___hashCode_0;
		if ((((int32_t)L_21) < ((int32_t)0)))
		{
			goto IL_00b5;
		}
	}
	{
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_22 = V_1;
		int32_t L_23 = ___index1;
		int32_t L_24 = L_23;
		___index1 = ((int32_t)il2cpp_codegen_add(L_24, 1));
		EntryU5BU5D_tB701640026CE382655A04D3448D52F314990B3AF* L_25 = V_2;
		int32_t L_26 = V_3;
		NullCheck(L_25);
		RuntimeObject* L_27 = (RuntimeObject*)((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___key_2;
		EntryU5BU5D_tB701640026CE382655A04D3448D52F314990B3AF* L_28 = V_2;
		int32_t L_29 = V_3;
		NullCheck(L_28);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_30 = (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)((L_28)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_29)))->___value_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_31 = L_30;
		RuntimeObject* L_32 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 28), &L_31);
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_33;
		memset((&L_33), 0, sizeof(L_33));
		DictionaryEntry__ctor_m2768353E53A75C4860E34B37DAF1342120C5D1EA((&L_33), L_27, L_32, /*hidden argument*/NULL);
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(L_24), (DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB)L_33);
	}

IL_00b5:
	{
		int32_t L_34 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_00b9:
	{
		int32_t L_35 = V_3;
		int32_t L_36 = (int32_t)__this->____count_2;
		if ((((int32_t)L_35) < ((int32_t)L_36)))
		{
			goto IL_0073;
		}
	}
	{
		return;
	}

IL_00c3:
	{
		RuntimeArray* L_37 = ___array0;
		V_4 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_37, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_38 = V_4;
		if (L_38)
		{
			goto IL_00d4;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_00d4:
	{
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_39 = (int32_t)__this->____count_2;
			V_5 = L_39;
			EntryU5BU5D_tB701640026CE382655A04D3448D52F314990B3AF* L_40 = (EntryU5BU5D_tB701640026CE382655A04D3448D52F314990B3AF*)__this->____entries_1;
			V_6 = L_40;
			V_7 = 0;
			goto IL_0130_1;
		}

IL_00ea_1:
		{
			EntryU5BU5D_tB701640026CE382655A04D3448D52F314990B3AF* L_41 = V_6;
			int32_t L_42 = V_7;
			NullCheck(L_41);
			int32_t L_43 = (int32_t)((L_41)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_42)))->___hashCode_0;
			if ((((int32_t)L_43) < ((int32_t)0)))
			{
				goto IL_012a_1;
			}
		}
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_44 = V_4;
			int32_t L_45 = ___index1;
			int32_t L_46 = L_45;
			___index1 = ((int32_t)il2cpp_codegen_add(L_46, 1));
			EntryU5BU5D_tB701640026CE382655A04D3448D52F314990B3AF* L_47 = V_6;
			int32_t L_48 = V_7;
			NullCheck(L_47);
			RuntimeObject* L_49 = (RuntimeObject*)((L_47)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_48)))->___key_2;
			EntryU5BU5D_tB701640026CE382655A04D3448D52F314990B3AF* L_50 = V_6;
			int32_t L_51 = V_7;
			NullCheck(L_50);
			Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_52 = (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)((L_50)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_51)))->___value_3;
			KeyValuePair_2_t5FCDCECBAC4615B1D6C16612A028BBBF368C51D4 L_53;
			memset((&L_53), 0, sizeof(L_53));
			KeyValuePair_2__ctor_m4727158B54F9EB5857F41AA2AA93AF1815148077((&L_53), L_49, L_52, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 31));
			KeyValuePair_2_t5FCDCECBAC4615B1D6C16612A028BBBF368C51D4 L_54 = L_53;
			RuntimeObject* L_55 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 30), &L_54);
			NullCheck(L_44);
			ArrayElementTypeCheck (L_44, L_55);
			(L_44)->SetAt(static_cast<il2cpp_array_size_t>(L_46), (RuntimeObject*)L_55);
		}

IL_012a_1:
		{
			int32_t L_56 = V_7;
			V_7 = ((int32_t)il2cpp_codegen_add(L_56, 1));
		}

IL_0130_1:
		{
			int32_t L_57 = V_7;
			int32_t L_58 = V_5;
			if ((((int32_t)L_57) < ((int32_t)L_58)))
			{
				goto IL_00ea_1;
			}
		}
		{
			goto IL_0140;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0138;
		}
		throw e;
	}

CATCH_0138:
	{// begin catch(System.ArrayTypeMismatchException)
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0140;
	}// end catch (depth: 1)

IL_0140:
	{
		return;
	}
}
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Vector2>::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IEnumerable_GetEnumerator_mE405CF560B5246ADD7654297447EE45E7F26D381_gshared (Dictionary_2_t41479D9F29C6C1BC07FC7F8D3DD313D8A9A419E1* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t052E91D9E9A063D03D7D70EDB7407F42CEDDBD48 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m3DA0996D376CC3B5563A4EA329A46E2F1B91E38C((&L_0), __this, 2, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		Enumerator_t052E91D9E9A063D03D7D70EDB7407F42CEDDBD48 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 32), &L_1);
		return (RuntimeObject*)L_2;
	}
}
// System.Object System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Vector2>::System.Collections.ICollection.get_SyncRoot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_ICollection_get_SyncRoot_m4EAC9F81148C067F89804C7B3C4F0C249482208E_gshared (Dictionary_2_t41479D9F29C6C1BC07FC7F8D3DD313D8A9A419E1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____syncRoot_9;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot_9);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = (RuntimeObject*)__this->____syncRoot_9;
		return L_4;
	}
}
// System.Object System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Vector2>::System.Collections.IDictionary.get_Item(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_get_Item_mB1744EBE477A3D9BEAC62C01FE8645F649F30759_gshared (Dictionary_2_t41479D9F29C6C1BC07FC7F8D3DD313D8A9A419E1* __this, RuntimeObject* ___key0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = ___key0;
		bool L_1;
		L_1 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 48)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 48));
		if (!L_1)
		{
			goto IL_0030;
		}
	}
	{
		RuntimeObject* L_2 = ___key0;
		int32_t L_3;
		L_3 = ((  int32_t (*) (Dictionary_2_t41479D9F29C6C1BC07FC7F8D3DD313D8A9A419E1*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 20)))(__this, ((RuntimeObject*)Castclass((RuntimeObject*)L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 21))), il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		V_0 = L_3;
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		EntryU5BU5D_tB701640026CE382655A04D3448D52F314990B3AF* L_5 = (EntryU5BU5D_tB701640026CE382655A04D3448D52F314990B3AF*)__this->____entries_1;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->___value_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8 = L_7;
		RuntimeObject* L_9 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 28), &L_8);
		return L_9;
	}

IL_0030:
	{
		return NULL;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Vector2>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_IDictionary_set_Item_mB8DC56B1A5E4EFFC127CEA8CCF4B85D01A90D28B_gshared (Dictionary_2_t41479D9F29C6C1BC07FC7F8D3DD313D8A9A419E1* __this, RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		RuntimeObject* L_0 = ___key0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___value1;
		((  void (*) (RuntimeObject*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 50)))(L_1, (int32_t)((int32_t)15), il2cpp_rgctx_method(method->klass->rgctx_data, 50));
	}
	try
	{// begin try (depth: 1)
		{
			RuntimeObject* L_2 = ___key0;
			V_0 = ((RuntimeObject*)Castclass((RuntimeObject*)L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 21)));
		}
		try
		{// begin try (depth: 2)
			RuntimeObject* L_3 = V_0;
			RuntimeObject* L_4 = ___value1;
			((  void (*) (Dictionary_2_t41479D9F29C6C1BC07FC7F8D3DD313D8A9A419E1*, RuntimeObject*, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 51)))(__this, L_3, ((*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)((Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)UnBox(L_4, il2cpp_rgctx_data(method->klass->rgctx_data, 28))))), il2cpp_rgctx_method(method->klass->rgctx_data, 51));
			goto IL_003a_1;
		}// end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0027_1;
			}
			throw e;
		}

CATCH_0027_1:
		{// begin catch(System.InvalidCastException)
			RuntimeObject* L_5 = ___value1;
			RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 52)) };
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
			Type_t* L_7;
			L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
			ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_5, L_7, NULL);
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_003a_1;
		}// end catch (depth: 2)

IL_003a_1:
		{
			goto IL_004f;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003c;
		}
		throw e;
	}

CATCH_003c:
	{// begin catch(System.InvalidCastException)
		RuntimeObject* L_8 = ___key0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 53)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		ThrowHelper_ThrowWrongKeyTypeArgumentException_m90E5BCE2CB10EEC16F254C237121C6816C4D6982(L_8, L_10, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_004f;
	}// end catch (depth: 1)

IL_004f:
	{
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Vector2>::IsCompatibleKey(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_IsCompatibleKey_m50197CCD1B3C7D053FA29B1232773E7681BB10AD_gshared (RuntimeObject* ___key0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___key0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___key0;
		return (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_1, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 21)))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Vector2>::System.Collections.IDictionary.Contains(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_IDictionary_Contains_m0D981F33D13F97847AB8917ABCA8BEA865AECD23_gshared (Dictionary_2_t41479D9F29C6C1BC07FC7F8D3DD313D8A9A419E1* __this, RuntimeObject* ___key0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___key0;
		bool L_1;
		L_1 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 48)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 48));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___key0;
		bool L_3;
		L_3 = ((  bool (*) (Dictionary_2_t41479D9F29C6C1BC07FC7F8D3DD313D8A9A419E1*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 54)))(__this, ((RuntimeObject*)Castclass((RuntimeObject*)L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 21))), il2cpp_rgctx_method(method->klass->rgctx_data, 54));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Vector2>::System.Collections.IDictionary.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_GetEnumerator_mA76EB1E34673D8C78E3FD2FB2E0C9B2F0C612142_gshared (Dictionary_2_t41479D9F29C6C1BC07FC7F8D3DD313D8A9A419E1* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t052E91D9E9A063D03D7D70EDB7407F42CEDDBD48 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m3DA0996D376CC3B5563A4EA329A46E2F1B91E38C((&L_0), __this, 1, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		Enumerator_t052E91D9E9A063D03D7D70EDB7407F42CEDDBD48 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 32), &L_1);
		return (RuntimeObject*)L_2;
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
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Oculus.Interaction.PoseDetection.JointRotationActiveState/JointRotationFeatureState>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m4BE93C5DDD4DD199E772B2A224834A743B319EE3_gshared (Dictionary_2_tB21E9CF3B85CA9CAE5D23FD25B351F538B448F51* __this, const RuntimeMethod* method) 
{
	{
		((  void (*) (Dictionary_2_tB21E9CF3B85CA9CAE5D23FD25B351F538B448F51*, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, 0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Oculus.Interaction.PoseDetection.JointRotationActiveState/JointRotationFeatureState>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mCACC2E9537362BDA3D059DA0C9A6DD21AA7CA625_gshared (Dictionary_2_tB21E9CF3B85CA9CAE5D23FD25B351F538B448F51* __this, int32_t ___capacity0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___capacity0;
		((  void (*) (Dictionary_2_tB21E9CF3B85CA9CAE5D23FD25B351F538B448F51*, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Oculus.Interaction.PoseDetection.JointRotationActiveState/JointRotationFeatureState>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m7C68B2BE5BCA6100517D08978EC5334024698DBB_gshared (Dictionary_2_tB21E9CF3B85CA9CAE5D23FD25B351F538B448F51* __this, RuntimeObject* ___comparer0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___comparer0;
		((  void (*) (Dictionary_2_tB21E9CF3B85CA9CAE5D23FD25B351F538B448F51*, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, 0, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Oculus.Interaction.PoseDetection.JointRotationActiveState/JointRotationFeatureState>::.ctor(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m48F021E797BCC803AFF485631ABB8E34640AA8DB_gshared (Dictionary_2_tB21E9CF3B85CA9CAE5D23FD25B351F538B448F51* __this, int32_t ___capacity0, RuntimeObject* ___comparer1, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___capacity0;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0011;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97((int32_t)((int32_t)12), NULL);
	}

IL_0011:
	{
		int32_t L_1 = ___capacity0;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_2 = ___capacity0;
		int32_t L_3;
		L_3 = ((  int32_t (*) (Dictionary_2_tB21E9CF3B85CA9CAE5D23FD25B351F538B448F51*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(__this, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
	}

IL_001d:
	{
		RuntimeObject* L_4 = ___comparer1;
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_5;
		L_5 = ((  EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if ((((RuntimeObject*)(RuntimeObject*)L_4) == ((RuntimeObject*)(EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2*)L_5)))
		{
			goto IL_002c;
		}
	}
	{
		RuntimeObject* L_6 = ___comparer1;
		__this->____comparer_6 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer_6), (void*)L_6);
	}

IL_002c:
	{
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Oculus.Interaction.PoseDetection.JointRotationActiveState/JointRotationFeatureState>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m78CE6F178FF1739A80DE4AF06E02D2BA5B4885E6_gshared (Dictionary_2_tB21E9CF3B85CA9CAE5D23FD25B351F538B448F51* __this, RuntimeObject* ___dictionary0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___dictionary0;
		((  void (*) (Dictionary_2_tB21E9CF3B85CA9CAE5D23FD25B351F538B448F51*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)))(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Oculus.Interaction.PoseDetection.JointRotationActiveState/JointRotationFeatureState>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mFDE0A2016F91E6719967570F3DE9FA2CF019C1AB_gshared (Dictionary_2_tB21E9CF3B85CA9CAE5D23FD25B351F538B448F51* __this, RuntimeObject* ___dictionary0, RuntimeObject* ___comparer1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	EntryU5BU5D_t7E16E41EC34A6E7E94750CC3CB11F6B8ECBE6BB5* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	KeyValuePair_2_t665B386104A382EAC5AF8A124C067F531DE78120 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Dictionary_2_tB21E9CF3B85CA9CAE5D23FD25B351F538B448F51* G_B2_0 = NULL;
	Dictionary_2_tB21E9CF3B85CA9CAE5D23FD25B351F538B448F51* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	Dictionary_2_tB21E9CF3B85CA9CAE5D23FD25B351F538B448F51* G_B3_1 = NULL;
	{
		RuntimeObject* L_0 = ___dictionary0;
		G_B1_0 = __this;
		if (L_0)
		{
			G_B2_0 = __this;
			goto IL_0007;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_000d;
	}

IL_0007:
	{
		RuntimeObject* L_1 = ___dictionary0;
		NullCheck((RuntimeObject*)L_1);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,Oculus.Interaction.PoseDetection.JointRotationActiveState/JointRotationFeatureState>>::get_Count() */, il2cpp_rgctx_data(method->klass->rgctx_data, 5), (RuntimeObject*)L_1);
		G_B3_0 = L_2;
		G_B3_1 = G_B2_0;
	}

IL_000d:
	{
		RuntimeObject* L_3 = ___comparer1;
		((  void (*) (Dictionary_2_tB21E9CF3B85CA9CAE5D23FD25B351F538B448F51*, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(G_B3_1, G_B3_0, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		RuntimeObject* L_4 = ___dictionary0;
		if (L_4)
		{
			goto IL_001c;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)1, NULL);
	}

IL_001c:
	{
		RuntimeObject* L_5 = ___dictionary0;
		NullCheck((RuntimeObject*)L_5);
		Type_t* L_6;
		L_6 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)L_5, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 7)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		bool L_9;
		L_9 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_6, L_8, NULL);
		if (!L_9)
		{
			goto IL_0080;
		}
	}
	{
		RuntimeObject* L_10 = ___dictionary0;
		Dictionary_2_tB21E9CF3B85CA9CAE5D23FD25B351F538B448F51* L_11 = ((Dictionary_2_tB21E9CF3B85CA9CAE5D23FD25B351F538B448F51*)CastclassClass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 8)));
		NullCheck(L_11);
		int32_t L_12 = (int32_t)L_11->____count_2;
		V_0 = L_12;
		NullCheck(L_11);
		EntryU5BU5D_t7E16E41EC34A6E7E94750CC3CB11F6B8ECBE6BB5* L_13 = (EntryU5BU5D_t7E16E41EC34A6E7E94750CC3CB11F6B8ECBE6BB5*)L_11->____entries_1;
		V_1 = L_13;
		V_2 = 0;
		goto IL_007b;
	}

IL_004a:
	{
		EntryU5BU5D_t7E16E41EC34A6E7E94750CC3CB11F6B8ECBE6BB5* L_14 = V_1;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		int32_t L_16 = (int32_t)((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)))->___hashCode_0;
		if ((((int32_t)L_16) < ((int32_t)0)))
		{
			goto IL_0077;
		}
	}
	{
		EntryU5BU5D_t7E16E41EC34A6E7E94750CC3CB11F6B8ECBE6BB5* L_17 = V_1;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		RuntimeObject* L_19 = (RuntimeObject*)((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___key_2;
		EntryU5BU5D_t7E16E41EC34A6E7E94750CC3CB11F6B8ECBE6BB5* L_20 = V_1;
		int32_t L_21 = V_2;
		NullCheck(L_20);
		JointRotationFeatureState_t293BD5640481C36FBD0E01AB30998C1D1C1D5ADE L_22 = (JointRotationFeatureState_t293BD5640481C36FBD0E01AB30998C1D1C1D5ADE)((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___value_3;
		((  void (*) (Dictionary_2_tB21E9CF3B85CA9CAE5D23FD25B351F538B448F51*, RuntimeObject*, JointRotationFeatureState_t293BD5640481C36FBD0E01AB30998C1D1C1D5ADE, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(__this, L_19, L_22, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
	}

IL_0077:
	{
		int32_t L_23 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_007b:
	{
		int32_t L_24 = V_2;
		int32_t L_25 = V_0;
		if ((((int32_t)L_24) < ((int32_t)L_25)))
		{
			goto IL_004a;
		}
	}
	{
		return;
	}

IL_0080:
	{
		RuntimeObject* L_26 = ___dictionary0;
		NullCheck((RuntimeObject*)L_26);
		RuntimeObject* L_27;
		L_27 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,Oculus.Interaction.PoseDetection.JointRotationActiveState/JointRotationFeatureState>>::GetEnumerator() */, il2cpp_rgctx_data(method->klass->rgctx_data, 10), (RuntimeObject*)L_26);
		V_3 = L_27;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00af:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_28 = V_3;
					if (!L_28)
					{
						goto IL_00b8;
					}
				}
				{
					RuntimeObject* L_29 = V_3;
					NullCheck((RuntimeObject*)L_29);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_29);
				}

IL_00b8:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_00a5_1;
			}

IL_0089_1:
			{
				RuntimeObject* L_30 = V_3;
				NullCheck(L_30);
				KeyValuePair_2_t665B386104A382EAC5AF8A124C067F531DE78120 L_31;
				L_31 = InterfaceFuncInvoker0< KeyValuePair_2_t665B386104A382EAC5AF8A124C067F531DE78120 >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,Oculus.Interaction.PoseDetection.JointRotationActiveState/JointRotationFeatureState>>::get_Current() */, il2cpp_rgctx_data(method->klass->rgctx_data, 12), L_30);
				V_4 = L_31;
				RuntimeObject* L_32;
				L_32 = KeyValuePair_2_get_Key_mA53994A88775FF1BE799F3FC3B7FC2484A7B83E6_inline((&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
				JointRotationFeatureState_t293BD5640481C36FBD0E01AB30998C1D1C1D5ADE L_33;
				L_33 = KeyValuePair_2_get_Value_m7B6AD86F22659AD0AC092AF5EC11E4C137517524_inline((&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
				((  void (*) (Dictionary_2_tB21E9CF3B85CA9CAE5D23FD25B351F538B448F51*, RuntimeObject*, JointRotationFeatureState_t293BD5640481C36FBD0E01AB30998C1D1C1D5ADE, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(__this, L_32, L_33, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
			}

IL_00a5_1:
			{
				RuntimeObject* L_34 = V_3;
				NullCheck((RuntimeObject*)L_34);
				bool L_35;
				L_35 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_34);
				if (L_35)
				{
					goto IL_0089_1;
				}
			}
			{
				goto IL_00b9;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00b9:
	{
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Oculus.Interaction.PoseDetection.JointRotationActiveState/JointRotationFeatureState>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m2520CA96C6745A7324FCCDB0D5F285ABBC0BDAD3_gshared (Dictionary_2_tB21E9CF3B85CA9CAE5D23FD25B351F538B448F51* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___info0, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___context1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___info0;
		NullCheck(L_0);
		ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7(L_0, (RuntimeObject*)__this, L_1, ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		return;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,Oculus.Interaction.PoseDetection.JointRotationActiveState/JointRotationFeatureState>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_mAC958A12EFC388DCEA8E040649F2CE1443A0A663_gshared (Dictionary_2_tB21E9CF3B85CA9CAE5D23FD25B351F538B448F51* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____count_2;
		int32_t L_1 = (int32_t)__this->____freeCount_4;
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,Oculus.Interaction.PoseDetection.JointRotationActiveState/JointRotationFeatureState>::get_Keys()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_t8BC19090CC997012423345A01113E313C0402A52* Dictionary_2_get_Keys_m281A9B390F83268E15C1EE967FE849A101697C3C_gshared (Dictionary_2_tB21E9CF3B85CA9CAE5D23FD25B351F538B448F51* __this, const RuntimeMethod* method) 
{
	{
		KeyCollection_t8BC19090CC997012423345A01113E313C0402A52* L_0 = (KeyCollection_t8BC19090CC997012423345A01113E313C0402A52*)__this->____keys_7;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		KeyCollection_t8BC19090CC997012423345A01113E313C0402A52* L_1 = (KeyCollection_t8BC19090CC997012423345A01113E313C0402A52*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 16));
		NullCheck(L_1);
		((  void (*) (KeyCollection_t8BC19090CC997012423345A01113E313C0402A52*, Dictionary_2_tB21E9CF3B85CA9CAE5D23FD25B351F538B448F51*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 17)))(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
		__this->____keys_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keys_7), (void*)L_1);
	}

IL_0014:
	{
		KeyCollection_t8BC19090CC997012423345A01113E313C0402A52* L_2 = (KeyCollection_t8BC19090CC997012423345A01113E313C0402A52*)__this->____keys_7;
		return L_2;
	}
}
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,Oculus.Interaction.PoseDetection.JointRotationActiveState/JointRotationFeatureState>::get_Values()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_t2EA6D714E0CF6D3E51B8FFE1037F5F0A91CB10F6* Dictionary_2_get_Values_mE9877AB3B2B87BBA834FA9F44923059351874329_gshared (Dictionary_2_tB21E9CF3B85CA9CAE5D23FD25B351F538B448F51* __this, const RuntimeMethod* method) 
{
	{
		ValueCollection_t2EA6D714E0CF6D3E51B8FFE1037F5F0A91CB10F6* L_0 = (ValueCollection_t2EA6D714E0CF6D3E51B8FFE1037F5F0A91CB10F6*)__this->____values_8;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_t2EA6D714E0CF6D3E51B8FFE1037F5F0A91CB10F6* L_1 = (ValueCollection_t2EA6D714E0CF6D3E51B8FFE1037F5F0A91CB10F6*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 18));
		NullCheck(L_1);
		((  void (*) (ValueCollection_t2EA6D714E0CF6D3E51B8FFE1037F5F0A91CB10F6*, Dictionary_2_tB21E9CF3B85CA9CAE5D23FD25B351F538B448F51*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 19)))(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		__this->____values_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values_8), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_t2EA6D714E0CF6D3E51B8FFE1037F5F0A91CB10F6* L_2 = (ValueCollection_t2EA6D714E0CF6D3E51B8FFE1037F5F0A91CB10F6*)__this->____values_8;
		return L_2;
	}
}
// System.Collections.Generic.IEnumerable`1<TValue> System.Collections.Generic.Dictionary`2<System.Object,Oculus.Interaction.PoseDetection.JointRotationActiveState/JointRotationFeatureState>::System.Collections.Generic.IReadOnlyDictionary<TKey,TValue>.get_Values()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IReadOnlyDictionaryU3CTKeyU2CTValueU3E_get_Values_m2B4297C121F6CD28E3246847058F0FD41B33B261_gshared (Dictionary_2_tB21E9CF3B85CA9CAE5D23FD25B351F538B448F51* __this, const RuntimeMethod* method) 
{
	{
		ValueCollection_t2EA6D714E0CF6D3E51B8FFE1037F5F0A91CB10F6* L_0 = (ValueCollection_t2EA6D714E0CF6D3E51B8FFE1037F5F0A91CB10F6*)__this->____values_8;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_t2EA6D714E0CF6D3E51B8FFE1037F5F0A91CB10F6* L_1 = (ValueCollection_t2EA6D714E0CF6D3E51B8FFE1037F5F0A91CB10F6*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 18));
		NullCheck(L_1);
		((  void (*) (ValueCollection_t2EA6D714E0CF6D3E51B8FFE1037F5F0A91CB10F6*, Dictionary_2_tB21E9CF3B85CA9CAE5D23FD25B351F538B448F51*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 19)))(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		__this->____values_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values_8), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_t2EA6D714E0CF6D3E51B8FFE1037F5F0A91CB10F6* L_2 = (ValueCollection_t2EA6D714E0CF6D3E51B8FFE1037F5F0A91CB10F6*)__this->____values_8;
		return (RuntimeObject*)L_2;
	}
}
// TValue System.Collections.Generic.Dictionary`2<System.Object,Oculus.Interaction.PoseDetection.JointRotationActiveState/JointRotationFeatureState>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JointRotationFeatureState_t293BD5640481C36FBD0E01AB30998C1D1C1D5ADE Dictionary_2_get_Item_m9F19367AAD283462FFC131990956223FB2FC3F79_gshared (Dictionary_2_tB21E9CF3B85CA9CAE5D23FD25B351F538B448F51* __this, RuntimeObject* ___key0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	JointRotationFeatureState_t293BD5640481C36FBD0E01AB30998C1D1C1D5ADE V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		RuntimeObject* L_0 = ___key0;
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_tB21E9CF3B85CA9CAE5D23FD25B351F538B448F51*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 20)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_001e;
		}
	}
	{
		EntryU5BU5D_t7E16E41EC34A6E7E94750CC3CB11F6B8ECBE6BB5* L_3 = (EntryU5BU5D_t7E16E41EC34A6E7E94750CC3CB11F6B8ECBE6BB5*)__this->____entries_1;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		JointRotationFeatureState_t293BD5640481C36FBD0E01AB30998C1D1C1D5ADE L_5 = (JointRotationFeatureState_t293BD5640481C36FBD0E01AB30998C1D1C1D5ADE)((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)))->___value_3;
		return L_5;
	}

IL_001e:
	{
		RuntimeObject* L_6 = ___key0;
		ThrowHelper_ThrowKeyNotFoundException_m6A17735FA486AD43F2488DE39B755AC60BC99CE7(L_6, NULL);
		il2cpp_codegen_initobj((&V_1), sizeof(JointRotationFeatureState_t293BD5640481C36FBD0E01AB30998C1D1C1D5ADE));
		JointRotationFeatureState_t293BD5640481C36FBD0E01AB30998C1D1C1D5ADE L_7 = V_1;
		return L_7;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Oculus.Interaction.PoseDetection.JointRotationActiveState/JointRotationFeatureState>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m3875740ECA88C6EA059176AF824400EB276BA093_gshared (Dictionary_2_tB21E9CF3B85CA9CAE5D23FD25B351F538B448F51* __this, RuntimeObject* ___key0, JointRotationFeatureState_t293BD5640481C36FBD0E01AB30998C1D1C1D5ADE ___value1, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___key0;
		JointRotationFeatureState_t293BD5640481C36FBD0E01AB30998C1D1C1D5ADE L_1 = ___value1;
		bool L_2;
		L_2 = ((  bool (*) (Dictionary_2_tB21E9CF3B85CA9CAE5D23FD25B351F538B448F51*, RuntimeObject*, JointRotationFeatureState_t293BD5640481C36FBD0E01AB30998C1D1C1D5ADE, uint8_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 22)))(__this, L_0, L_1, (uint8_t)1, il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Oculus.Interaction.PoseDetection.JointRotationActiveState/JointRotationFeatureState>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_mF1EA7080EB886D38372D09A9A95D3F26FC27C114_gshared (Dictionary_2_tB21E9CF3B85CA9CAE5D23FD25B351F538B448F51* __this, RuntimeObject* ___key0, JointRotationFeatureState_t293BD5640481C36FBD0E01AB30998C1D1C1D5ADE ___value1, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___key0;
		JointRotationFeatureState_t293BD5640481C36FBD0E01AB30998C1D1C1D5ADE L_1 = ___value1;
		bool L_2;
		L_2 = ((  bool (*) (Dictionary_2_tB21E9CF3B85CA9CAE5D23FD25B351F538B448F51*, RuntimeObject*, JointRotationFeatureState_t293BD5640481C36FBD0E01AB30998C1D1C1D5ADE, uint8_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 22)))(__this, L_0, L_1, (uint8_t)2, il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Oculus.Interaction.PoseDetection.JointRotationActiveState/JointRotationFeatureState>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m11E24B1204BF5C0AF497F933F8DDC7DD807676EF_gshared (Dictionary_2_tB21E9CF3B85CA9CAE5D23FD25B351F538B448F51* __this, KeyValuePair_2_t665B386104A382EAC5AF8A124C067F531DE78120 ___keyValuePair0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0;
		L_0 = KeyValuePair_2_get_Key_mA53994A88775FF1BE799F3FC3B7FC2484A7B83E6_inline((&___keyValuePair0), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		JointRotationFeatureState_t293BD5640481C36FBD0E01AB30998C1D1C1D5ADE L_1;
		L_1 = KeyValuePair_2_get_Value_m7B6AD86F22659AD0AC092AF5EC11E4C137517524_inline((&___keyValuePair0), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		((  void (*) (Dictionary_2_tB21E9CF3B85CA9CAE5D23FD25B351F538B448F51*, RuntimeObject*, JointRotationFeatureState_t293BD5640481C36FBD0E01AB30998C1D1C1D5ADE, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,Oculus.Interaction.PoseDetection.JointRotationActiveState/JointRotationFeatureState>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m94C85C0B7FE5CFE451AEAD366735B20B5C77B891_gshared (Dictionary_2_tB21E9CF3B85CA9CAE5D23FD25B351F538B448F51* __this, KeyValuePair_2_t665B386104A382EAC5AF8A124C067F531DE78120 ___keyValuePair0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0;
		L_0 = KeyValuePair_2_get_Key_mA53994A88775FF1BE799F3FC3B7FC2484A7B83E6_inline((&___keyValuePair0), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_tB21E9CF3B85CA9CAE5D23FD25B351F538B448F51*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 20)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0038;
		}
	}
	{
		EqualityComparer_1_tC60B76639F0D4CF6D1A1BDF4500A72E4EC1C4477* L_3;
		L_3 = ((  EqualityComparer_1_tC60B76639F0D4CF6D1A1BDF4500A72E4EC1C4477* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 23)))(il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		EntryU5BU5D_t7E16E41EC34A6E7E94750CC3CB11F6B8ECBE6BB5* L_4 = (EntryU5BU5D_t7E16E41EC34A6E7E94750CC3CB11F6B8ECBE6BB5*)__this->____entries_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		JointRotationFeatureState_t293BD5640481C36FBD0E01AB30998C1D1C1D5ADE L_6 = (JointRotationFeatureState_t293BD5640481C36FBD0E01AB30998C1D1C1D5ADE)((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value_3;
		JointRotationFeatureState_t293BD5640481C36FBD0E01AB30998C1D1C1D5ADE L_7;
		L_7 = KeyValuePair_2_get_Value_m7B6AD86F22659AD0AC092AF5EC11E4C137517524_inline((&___keyValuePair0), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, JointRotationFeatureState_t293BD5640481C36FBD0E01AB30998C1D1C1D5ADE, JointRotationFeatureState_t293BD5640481C36FBD0E01AB30998C1D1C1D5ADE >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<Oculus.Interaction.PoseDetection.JointRotationActiveState/JointRotationFeatureState>::Equals(T,T) */, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0038;
		}
	}
	{
		return (bool)1;
	}

IL_0038:
	{
		return (bool)0;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,Oculus.Interaction.PoseDetection.JointRotationActiveState/JointRotationFeatureState>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m00FD44D2EF5CF3C025AE676BFB942D7DF3D4718B_gshared (Dictionary_2_tB21E9CF3B85CA9CAE5D23FD25B351F538B448F51* __this, KeyValuePair_2_t665B386104A382EAC5AF8A124C067F531DE78120 ___keyValuePair0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0;
		L_0 = KeyValuePair_2_get_Key_mA53994A88775FF1BE799F3FC3B7FC2484A7B83E6_inline((&___keyValuePair0), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_tB21E9CF3B85CA9CAE5D23FD25B351F538B448F51*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 20)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0046;
		}
	}
	{
		EqualityComparer_1_tC60B76639F0D4CF6D1A1BDF4500A72E4EC1C4477* L_3;
		L_3 = ((  EqualityComparer_1_tC60B76639F0D4CF6D1A1BDF4500A72E4EC1C4477* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 23)))(il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		EntryU5BU5D_t7E16E41EC34A6E7E94750CC3CB11F6B8ECBE6BB5* L_4 = (EntryU5BU5D_t7E16E41EC34A6E7E94750CC3CB11F6B8ECBE6BB5*)__this->____entries_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		JointRotationFeatureState_t293BD5640481C36FBD0E01AB30998C1D1C1D5ADE L_6 = (JointRotationFeatureState_t293BD5640481C36FBD0E01AB30998C1D1C1D5ADE)((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value_3;
		JointRotationFeatureState_t293BD5640481C36FBD0E01AB30998C1D1C1D5ADE L_7;
		L_7 = KeyValuePair_2_get_Value_m7B6AD86F22659AD0AC092AF5EC11E4C137517524_inline((&___keyValuePair0), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, JointRotationFeatureState_t293BD5640481C36FBD0E01AB30998C1D1C1D5ADE, JointRotationFeatureState_t293BD5640481C36FBD0E01AB30998C1D1C1D5ADE >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<Oculus.Interaction.PoseDetection.JointRotationActiveState/JointRotationFeatureState>::Equals(T,T) */, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0046;
		}
	}
	{
		RuntimeObject* L_9;
		L_9 = KeyValuePair_2_get_Key_mA53994A88775FF1BE799F3FC3B7FC2484A7B83E6_inline((&___keyValuePair0), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		bool L_10;
		L_10 = ((  bool (*) (Dictionary_2_tB21E9CF3B85CA9CAE5D23FD25B351F538B448F51*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 27)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 27));
		return (bool)1;
	}

IL_0046:
	{
		return (bool)0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Oculus.Interaction.PoseDetection.JointRotationActiveState/JointRotationFeatureState>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_m5F8B4AC767CC44B2A2282799BD3375006940FD1D_gshared (Dictionary_2_tB21E9CF3B85CA9CAE5D23FD25B351F538B448F51* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->____count_2;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0041;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_3);
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_2, 0, ((int32_t)(((RuntimeArray*)L_3)->max_length)), NULL);
		__this->____count_2 = 0;
		__this->____freeList_3 = (-1);
		__this->____freeCount_4 = 0;
		EntryU5BU5D_t7E16E41EC34A6E7E94750CC3CB11F6B8ECBE6BB5* L_4 = (EntryU5BU5D_t7E16E41EC34A6E7E94750CC3CB11F6B8ECBE6BB5*)__this->____entries_1;
		int32_t L_5 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_4, 0, L_5, NULL);
	}

IL_0041:
	{
		int32_t L_6 = (int32_t)__this->____version_5;
		__this->____version_5 = ((int32_t)il2cpp_codegen_add(L_6, 1));
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,Oculus.Interaction.PoseDetection.JointRotationActiveState/JointRotationFeatureState>::ContainsKey(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m5E8DB8B002D5F04808B16C0B96775D67816C878F_gshared (Dictionary_2_tB21E9CF3B85CA9CAE5D23FD25B351F538B448F51* __this, RuntimeObject* ___key0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___key0;
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_tB21E9CF3B85CA9CAE5D23FD25B351F538B448F51*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 20)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		return (bool)((((int32_t)((((int32_t)L_1) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,Oculus.Interaction.PoseDetection.JointRotationActiveState/JointRotationFeatureState>::ContainsValue(TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsValue_mAA64B049609C4CFF1DCF319A9B3F359DB6EF4F2E_gshared (Dictionary_2_tB21E9CF3B85CA9CAE5D23FD25B351F538B448F51* __this, JointRotationFeatureState_t293BD5640481C36FBD0E01AB30998C1D1C1D5ADE ___value0, const RuntimeMethod* method) 
{
	EntryU5BU5D_t7E16E41EC34A6E7E94750CC3CB11F6B8ECBE6BB5* V_0 = NULL;
	int32_t V_1 = 0;
	JointRotationFeatureState_t293BD5640481C36FBD0E01AB30998C1D1C1D5ADE V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	EqualityComparer_1_tC60B76639F0D4CF6D1A1BDF4500A72E4EC1C4477* V_4 = NULL;
	int32_t V_5 = 0;
	{
		EntryU5BU5D_t7E16E41EC34A6E7E94750CC3CB11F6B8ECBE6BB5* L_0 = (EntryU5BU5D_t7E16E41EC34A6E7E94750CC3CB11F6B8ECBE6BB5*)__this->____entries_1;
		V_0 = L_0;
		goto IL_0049;
	}
	{
		V_1 = 0;
		goto IL_003b;
	}

IL_0013:
	{
		EntryU5BU5D_t7E16E41EC34A6E7E94750CC3CB11F6B8ECBE6BB5* L_2 = V_0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = (int32_t)((L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3)))->___hashCode_0;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0037;
		}
	}
	{
		EntryU5BU5D_t7E16E41EC34A6E7E94750CC3CB11F6B8ECBE6BB5* L_5 = V_0;
		int32_t L_6 = V_1;
		NullCheck(L_5);
		JointRotationFeatureState_t293BD5640481C36FBD0E01AB30998C1D1C1D5ADE L_7 = (JointRotationFeatureState_t293BD5640481C36FBD0E01AB30998C1D1C1D5ADE)((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->___value_3;
		goto IL_0037;
	}
	{
		return (bool)1;
	}

IL_0037:
	{
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_003b:
	{
		int32_t L_9 = V_1;
		int32_t L_10 = (int32_t)__this->____count_2;
		if ((((int32_t)L_9) < ((int32_t)L_10)))
		{
			goto IL_0013;
		}
	}
	{
		goto IL_00db;
	}

IL_0049:
	{
		il2cpp_codegen_initobj((&V_2), sizeof(JointRotationFeatureState_t293BD5640481C36FBD0E01AB30998C1D1C1D5ADE));
	}
	{
		V_3 = 0;
		goto IL_008b;
	}

IL_005d:
	{
		EntryU5BU5D_t7E16E41EC34A6E7E94750CC3CB11F6B8ECBE6BB5* L_12 = V_0;
		int32_t L_13 = V_3;
		NullCheck(L_12);
		int32_t L_14 = (int32_t)((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)))->___hashCode_0;
		if ((((int32_t)L_14) < ((int32_t)0)))
		{
			goto IL_0087;
		}
	}
	{
		EqualityComparer_1_tC60B76639F0D4CF6D1A1BDF4500A72E4EC1C4477* L_15;
		L_15 = ((  EqualityComparer_1_tC60B76639F0D4CF6D1A1BDF4500A72E4EC1C4477* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 23)))(il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		EntryU5BU5D_t7E16E41EC34A6E7E94750CC3CB11F6B8ECBE6BB5* L_16 = V_0;
		int32_t L_17 = V_3;
		NullCheck(L_16);
		JointRotationFeatureState_t293BD5640481C36FBD0E01AB30998C1D1C1D5ADE L_18 = (JointRotationFeatureState_t293BD5640481C36FBD0E01AB30998C1D1C1D5ADE)((L_16)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_17)))->___value_3;
		JointRotationFeatureState_t293BD5640481C36FBD0E01AB30998C1D1C1D5ADE L_19 = ___value0;
		NullCheck(L_15);
		bool L_20;
		L_20 = VirtualFuncInvoker2< bool, JointRotationFeatureState_t293BD5640481C36FBD0E01AB30998C1D1C1D5ADE, JointRotationFeatureState_t293BD5640481C36FBD0E01AB30998C1D1C1D5ADE >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<Oculus.Interaction.PoseDetection.JointRotationActiveState/JointRotationFeatureState>::Equals(T,T) */, L_15, L_18, L_19);
		if (!L_20)
		{
			goto IL_0087;
		}
	}
	{
		return (bool)1;
	}

IL_0087:
	{
		int32_t L_21 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_008b:
	{
		int32_t L_22 = V_3;
		int32_t L_23 = (int32_t)__this->____count_2;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_005d;
		}
	}
	{
		goto IL_00db;
	}

IL_0096:
	{
		EqualityComparer_1_tC60B76639F0D4CF6D1A1BDF4500A72E4EC1C4477* L_24;
		L_24 = ((  EqualityComparer_1_tC60B76639F0D4CF6D1A1BDF4500A72E4EC1C4477* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 23)))(il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		V_4 = L_24;
		V_5 = 0;
		goto IL_00d1;
	}

IL_00a2:
	{
		EntryU5BU5D_t7E16E41EC34A6E7E94750CC3CB11F6B8ECBE6BB5* L_25 = V_0;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		int32_t L_27 = (int32_t)((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___hashCode_0;
		if ((((int32_t)L_27) < ((int32_t)0)))
		{
			goto IL_00cb;
		}
	}
	{
		EqualityComparer_1_tC60B76639F0D4CF6D1A1BDF4500A72E4EC1C4477* L_28 = V_4;
		EntryU5BU5D_t7E16E41EC34A6E7E94750CC3CB11F6B8ECBE6BB5* L_29 = V_0;
		int32_t L_30 = V_5;
		NullCheck(L_29);
		JointRotationFeatureState_t293BD5640481C36FBD0E01AB30998C1D1C1D5ADE L_31 = (JointRotationFeatureState_t293BD5640481C36FBD0E01AB30998C1D1C1D5ADE)((L_29)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_30)))->___value_3;
		JointRotationFeatureState_t293BD5640481C36FBD0E01AB30998C1D1C1D5ADE L_32 = ___value0;
		NullCheck(L_28);
		bool L_33;
		L_33 = VirtualFuncInvoker2< bool, JointRotationFeatureState_t293BD5640481C36FBD0E01AB30998C1D1C1D5ADE, JointRotationFeatureState_t293BD5640481C36FBD0E01AB30998C1D1C1D5ADE >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<Oculus.Interaction.PoseDetection.JointRotationActiveState/JointRotationFeatureState>::Equals(T,T) */, L_28, L_31, L_32);
		if (!L_33)
		{
			goto IL_00cb;
		}
	}
	{
		return (bool)1;
	}

IL_00cb:
	{
		int32_t L_34 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_00d1:
	{
		int32_t L_35 = V_5;
		int32_t L_36 = (int32_t)__this->____count_2;
		if ((((int32_t)L_35) < ((int32_t)L_36)))
		{
			goto IL_00a2;
		}
	}

IL_00db:
	{
		return (bool)0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Oculus.Interaction.PoseDetection.JointRotationActiveState/JointRotationFeatureState>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_m21CF89472B1EE64481D9438B846716FB76C0517D_gshared (Dictionary_2_tB21E9CF3B85CA9CAE5D23FD25B351F538B448F51* __this, KeyValuePair_2U5BU5D_tBD10F6DC24C89CDB584693DEC3A9B0A08954D611* ___array0, int32_t ___index1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	EntryU5BU5D_t7E16E41EC34A6E7E94750CC3CB11F6B8ECBE6BB5* V_1 = NULL;
	int32_t V_2 = 0;
	{
		KeyValuePair_2U5BU5D_tBD10F6DC24C89CDB584693DEC3A9B0A08954D611* L_0 = ___array0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)3, NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___index1;
		KeyValuePair_2U5BU5D_tBD10F6DC24C89CDB584693DEC3A9B0A08954D611* L_2 = ___array0;
		NullCheck(L_2);
		if ((!(((uint32_t)L_1) > ((uint32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))))
		{
			goto IL_0014;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0014:
	{
		KeyValuePair_2U5BU5D_tBD10F6DC24C89CDB584693DEC3A9B0A08954D611* L_3 = ___array0;
		NullCheck(L_3);
		int32_t L_4 = ___index1;
		int32_t L_5;
		L_5 = ((  int32_t (*) (Dictionary_2_tB21E9CF3B85CA9CAE5D23FD25B351F538B448F51*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 29)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_3)->max_length)), L_4))) >= ((int32_t)L_5)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)5, NULL);
	}

IL_0027:
	{
		int32_t L_6 = (int32_t)__this->____count_2;
		V_0 = L_6;
		EntryU5BU5D_t7E16E41EC34A6E7E94750CC3CB11F6B8ECBE6BB5* L_7 = (EntryU5BU5D_t7E16E41EC34A6E7E94750CC3CB11F6B8ECBE6BB5*)__this->____entries_1;
		V_1 = L_7;
		V_2 = 0;
		goto IL_0075;
	}

IL_0039:
	{
		EntryU5BU5D_t7E16E41EC34A6E7E94750CC3CB11F6B8ECBE6BB5* L_8 = V_1;
		int32_t L_9 = V_2;
		NullCheck(L_8);
		int32_t L_10 = (int32_t)((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9)))->___hashCode_0;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_0071;
		}
	}
	{
		KeyValuePair_2U5BU5D_tBD10F6DC24C89CDB584693DEC3A9B0A08954D611* L_11 = ___array0;
		int32_t L_12 = ___index1;
		int32_t L_13 = L_12;
		___index1 = ((int32_t)il2cpp_codegen_add(L_13, 1));
		EntryU5BU5D_t7E16E41EC34A6E7E94750CC3CB11F6B8ECBE6BB5* L_14 = V_1;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		RuntimeObject* L_16 = (RuntimeObject*)((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)))->___key_2;
		EntryU5BU5D_t7E16E41EC34A6E7E94750CC3CB11F6B8ECBE6BB5* L_17 = V_1;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		JointRotationFeatureState_t293BD5640481C36FBD0E01AB30998C1D1C1D5ADE L_19 = (JointRotationFeatureState_t293BD5640481C36FBD0E01AB30998C1D1C1D5ADE)((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___value_3;
		KeyValuePair_2_t665B386104A382EAC5AF8A124C067F531DE78120 L_20;
		memset((&L_20), 0, sizeof(L_20));
		KeyValuePair_2__ctor_m39238B49A4DAE8C920EC0FC67F04D633DB08A75A((&L_20), L_16, L_19, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (KeyValuePair_2_t665B386104A382EAC5AF8A124C067F531DE78120)L_20);
	}

IL_0071:
	{
		int32_t L_21 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0075:
	{
		int32_t L_22 = V_2;
		int32_t L_23 = V_0;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_0039;
		}
	}
	{
		return;
	}
}
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,Oculus.Interaction.PoseDetection.JointRotationActiveState/JointRotationFeatureState>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t84A88C194B63F67CEF824A6B4CE0DC3B5A993008 Dictionary_2_GetEnumerator_mBC2955F64B0B7FEAE07B2A85665DC4EFDE4B347E_gshared (Dictionary_2_tB21E9CF3B85CA9CAE5D23FD25B351F538B448F51* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t84A88C194B63F67CEF824A6B4CE0DC3B5A993008 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m8C10F6C561DF44AA44B8F0E255A4F561B850C378((&L_0), __this, 2, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,Oculus.Interaction.PoseDetection.JointRotationActiveState/JointRotationFeatureState>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_mB80A6A41E849C0525B0104D700DF98F70967DEAC_gshared (Dictionary_2_tB21E9CF3B85CA9CAE5D23FD25B351F538B448F51* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t84A88C194B63F67CEF824A6B4CE0DC3B5A993008 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m8C10F6C561DF44AA44B8F0E255A4F561B850C378((&L_0), __this, 2, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		Enumerator_t84A88C194B63F67CEF824A6B4CE0DC3B5A993008 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 32), &L_1);
		return (RuntimeObject*)L_2;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Oculus.Interaction.PoseDetection.JointRotationActiveState/JointRotationFeatureState>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_GetObjectData_m67360C053E994843545C09EB59FB2B20B5970EFB_gshared (Dictionary_2_tB21E9CF3B85CA9CAE5D23FD25B351F538B448F51* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___info0, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___context1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_tBD10F6DC24C89CDB584693DEC3A9B0A08954D611* V_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	String_t* G_B4_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B4_2 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B3_2 = NULL;
	String_t* G_B6_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B6_1 = NULL;
	String_t* G_B5_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B5_1 = NULL;
	int32_t G_B7_0 = 0;
	String_t* G_B7_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B7_2 = NULL;
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___info0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)4, NULL);
	}

IL_0009:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___info0;
		int32_t L_2 = (int32_t)__this->____version_5;
		NullCheck(L_1);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(L_1, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, L_2, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = ___info0;
		RuntimeObject* L_4 = (RuntimeObject*)__this->____comparer_6;
		RuntimeObject* L_5 = L_4;
		G_B3_0 = L_5;
		G_B3_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
		G_B3_2 = L_3;
		if (L_5)
		{
			G_B4_0 = L_5;
			G_B4_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
			G_B4_2 = L_3;
			goto IL_002f;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_6;
		L_6 = ((  EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		G_B4_0 = ((RuntimeObject*)(L_6));
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
	}

IL_002f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 34)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		NullCheck(G_B4_2);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(G_B4_2, G_B4_1, (RuntimeObject*)G_B4_0, L_8, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_9 = ___info0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		G_B5_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
		G_B5_1 = L_9;
		if (!L_10)
		{
			G_B6_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
			G_B6_1 = L_9;
			goto IL_0056;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_11);
		G_B7_0 = ((int32_t)(((RuntimeArray*)L_11)->max_length));
		G_B7_1 = G_B5_0;
		G_B7_2 = G_B5_1;
		goto IL_0057;
	}

IL_0056:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
		G_B7_2 = G_B6_1;
	}

IL_0057:
	{
		NullCheck(G_B7_2);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(G_B7_2, G_B7_1, G_B7_0, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		if (!L_12)
		{
			goto IL_008e;
		}
	}
	{
		int32_t L_13;
		L_13 = ((  int32_t (*) (Dictionary_2_tB21E9CF3B85CA9CAE5D23FD25B351F538B448F51*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 29)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		KeyValuePair_2U5BU5D_tBD10F6DC24C89CDB584693DEC3A9B0A08954D611* L_14 = (KeyValuePair_2U5BU5D_tBD10F6DC24C89CDB584693DEC3A9B0A08954D611*)(KeyValuePair_2U5BU5D_tBD10F6DC24C89CDB584693DEC3A9B0A08954D611*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 35), (uint32_t)L_13);
		V_0 = L_14;
		KeyValuePair_2U5BU5D_tBD10F6DC24C89CDB584693DEC3A9B0A08954D611* L_15 = V_0;
		((  void (*) (Dictionary_2_tB21E9CF3B85CA9CAE5D23FD25B351F538B448F51*, KeyValuePair_2U5BU5D_tBD10F6DC24C89CDB584693DEC3A9B0A08954D611*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 36)))(__this, L_15, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 36));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_16 = ___info0;
		KeyValuePair_2U5BU5D_tBD10F6DC24C89CDB584693DEC3A9B0A08954D611* L_17 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 37)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		NullCheck(L_16);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(L_16, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, (RuntimeObject*)L_17, L_19, NULL);
	}

IL_008e:
	{
		return;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,Oculus.Interaction.PoseDetection.JointRotationActiveState/JointRotationFeatureState>::FindEntry(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_m565F06D1CC25D14B5FCFD93D1748E28F36DA2624_gshared (Dictionary_2_tB21E9CF3B85CA9CAE5D23FD25B351F538B448F51* __this, RuntimeObject* ___key0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	EntryU5BU5D_t7E16E41EC34A6E7E94750CC3CB11F6B8ECBE6BB5* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	int32_t V_5 = 0;
	RuntimeObject* V_6 = NULL;
	EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* V_7 = NULL;
	int32_t V_8 = 0;
	{
		RuntimeObject* L_0 = ___key0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_000e:
	{
		V_0 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		V_1 = L_1;
		EntryU5BU5D_t7E16E41EC34A6E7E94750CC3CB11F6B8ECBE6BB5* L_2 = (EntryU5BU5D_t7E16E41EC34A6E7E94750CC3CB11F6B8ECBE6BB5*)__this->____entries_1;
		V_2 = L_2;
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = V_1;
		if (!L_3)
		{
			goto IL_0175;
		}
	}
	{
		RuntimeObject* L_4 = (RuntimeObject*)__this->____comparer_6;
		V_4 = L_4;
		RuntimeObject* L_5 = V_4;
		if (L_5)
		{
			goto IL_0110;
		}
	}
	{
		NullCheck((___key0));
		int32_t L_6;
		L_6 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, (___key0));
		V_5 = ((int32_t)(L_6&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = V_1;
		int32_t L_8 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = V_1;
		NullCheck(L_9);
		NullCheck(L_7);
		int32_t L_10 = ((int32_t)(L_8%((int32_t)(((RuntimeArray*)L_9)->max_length))));
		int32_t L_11 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_11, 1));
		il2cpp_codegen_initobj((&V_6), sizeof(RuntimeObject*));
		RuntimeObject* L_12 = V_6;
		if (!L_12)
		{
			goto IL_00b9;
		}
	}

IL_0066:
	{
		int32_t L_13 = V_0;
		EntryU5BU5D_t7E16E41EC34A6E7E94750CC3CB11F6B8ECBE6BB5* L_14 = V_2;
		NullCheck(L_14);
		if ((!(((uint32_t)L_13) < ((uint32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_t7E16E41EC34A6E7E94750CC3CB11F6B8ECBE6BB5* L_15 = V_2;
		int32_t L_16 = V_0;
		NullCheck(L_15);
		int32_t L_17 = (int32_t)((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___hashCode_0;
		int32_t L_18 = V_5;
		if ((!(((uint32_t)L_17) == ((uint32_t)L_18))))
		{
			goto IL_009b;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_19;
		L_19 = ((  EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		EntryU5BU5D_t7E16E41EC34A6E7E94750CC3CB11F6B8ECBE6BB5* L_20 = V_2;
		int32_t L_21 = V_0;
		NullCheck(L_20);
		RuntimeObject* L_22 = (RuntimeObject*)((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___key_2;
		RuntimeObject* L_23 = ___key0;
		NullCheck(L_19);
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Object>::Equals(T,T) */, L_19, L_22, L_23);
		if (L_24)
		{
			goto IL_0175;
		}
	}

IL_009b:
	{
		EntryU5BU5D_t7E16E41EC34A6E7E94750CC3CB11F6B8ECBE6BB5* L_25 = V_2;
		int32_t L_26 = V_0;
		NullCheck(L_25);
		int32_t L_27 = (int32_t)((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___next_1;
		V_0 = L_27;
		int32_t L_28 = V_3;
		EntryU5BU5D_t7E16E41EC34A6E7E94750CC3CB11F6B8ECBE6BB5* L_29 = V_2;
		NullCheck(L_29);
		if ((((int32_t)L_28) < ((int32_t)((int32_t)(((RuntimeArray*)L_29)->max_length)))))
		{
			goto IL_00b3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_00b3:
	{
		int32_t L_30 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_30, 1));
		goto IL_0066;
	}

IL_00b9:
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_31;
		L_31 = ((  EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		V_7 = L_31;
	}

IL_00c0:
	{
		int32_t L_32 = V_0;
		EntryU5BU5D_t7E16E41EC34A6E7E94750CC3CB11F6B8ECBE6BB5* L_33 = V_2;
		NullCheck(L_33);
		if ((!(((uint32_t)L_32) < ((uint32_t)((int32_t)(((RuntimeArray*)L_33)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_t7E16E41EC34A6E7E94750CC3CB11F6B8ECBE6BB5* L_34 = V_2;
		int32_t L_35 = V_0;
		NullCheck(L_34);
		int32_t L_36 = (int32_t)((L_34)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_35)))->___hashCode_0;
		int32_t L_37 = V_5;
		if ((!(((uint32_t)L_36) == ((uint32_t)L_37))))
		{
			goto IL_00f2;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_38 = V_7;
		EntryU5BU5D_t7E16E41EC34A6E7E94750CC3CB11F6B8ECBE6BB5* L_39 = V_2;
		int32_t L_40 = V_0;
		NullCheck(L_39);
		RuntimeObject* L_41 = (RuntimeObject*)((L_39)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_40)))->___key_2;
		RuntimeObject* L_42 = ___key0;
		NullCheck(L_38);
		bool L_43;
		L_43 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Object>::Equals(T,T) */, L_38, L_41, L_42);
		if (L_43)
		{
			goto IL_0175;
		}
	}

IL_00f2:
	{
		EntryU5BU5D_t7E16E41EC34A6E7E94750CC3CB11F6B8ECBE6BB5* L_44 = V_2;
		int32_t L_45 = V_0;
		NullCheck(L_44);
		int32_t L_46 = (int32_t)((L_44)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_45)))->___next_1;
		V_0 = L_46;
		int32_t L_47 = V_3;
		EntryU5BU5D_t7E16E41EC34A6E7E94750CC3CB11F6B8ECBE6BB5* L_48 = V_2;
		NullCheck(L_48);
		if ((((int32_t)L_47) < ((int32_t)((int32_t)(((RuntimeArray*)L_48)->max_length)))))
		{
			goto IL_010a;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_010a:
	{
		int32_t L_49 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_49, 1));
		goto IL_00c0;
	}

IL_0110:
	{
		RuntimeObject* L_50 = V_4;
		RuntimeObject* L_51 = ___key0;
		NullCheck(L_50);
		int32_t L_52;
		L_52 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Object>::GetHashCode(T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 41), L_50, L_51);
		V_8 = ((int32_t)(L_52&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_53 = V_1;
		int32_t L_54 = V_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_55 = V_1;
		NullCheck(L_55);
		NullCheck(L_53);
		int32_t L_56 = ((int32_t)(L_54%((int32_t)(((RuntimeArray*)L_55)->max_length))));
		int32_t L_57 = (L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_56));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_57, 1));
	}

IL_012b:
	{
		int32_t L_58 = V_0;
		EntryU5BU5D_t7E16E41EC34A6E7E94750CC3CB11F6B8ECBE6BB5* L_59 = V_2;
		NullCheck(L_59);
		if ((!(((uint32_t)L_58) < ((uint32_t)((int32_t)(((RuntimeArray*)L_59)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_t7E16E41EC34A6E7E94750CC3CB11F6B8ECBE6BB5* L_60 = V_2;
		int32_t L_61 = V_0;
		NullCheck(L_60);
		int32_t L_62 = (int32_t)((L_60)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_61)))->___hashCode_0;
		int32_t L_63 = V_8;
		if ((!(((uint32_t)L_62) == ((uint32_t)L_63))))
		{
			goto IL_0157;
		}
	}
	{
		RuntimeObject* L_64 = V_4;
		EntryU5BU5D_t7E16E41EC34A6E7E94750CC3CB11F6B8ECBE6BB5* L_65 = V_2;
		int32_t L_66 = V_0;
		NullCheck(L_65);
		RuntimeObject* L_67 = (RuntimeObject*)((L_65)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_66)))->___key_2;
		RuntimeObject* L_68 = ___key0;
		NullCheck(L_64);
		bool L_69;
		L_69 = InterfaceFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Object>::Equals(T,T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 41), L_64, L_67, L_68);
		if (L_69)
		{
			goto IL_0175;
		}
	}

IL_0157:
	{
		EntryU5BU5D_t7E16E41EC34A6E7E94750CC3CB11F6B8ECBE6BB5* L_70 = V_2;
		int32_t L_71 = V_0;
		NullCheck(L_70);
		int32_t L_72 = (int32_t)((L_70)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_71)))->___next_1;
		V_0 = L_72;
		int32_t L_73 = V_3;
		EntryU5BU5D_t7E16E41EC34A6E7E94750CC3CB11F6B8ECBE6BB5* L_74 = V_2;
		NullCheck(L_74);
		if ((((int32_t)L_73) < ((int32_t)((int32_t)(((RuntimeArray*)L_74)->max_length)))))
		{
			goto IL_016f;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_016f:
	{
		int32_t L_75 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_75, 1));
		goto IL_012b;
	}

IL_0175:
	{
		int32_t L_76 = V_0;
		return L_76;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,Oculus.Interaction.PoseDetection.JointRotationActiveState/JointRotationFeatureState>::Initialize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_m6C405D04FD201C43C1095EA8BD8C93053FC55115_gshared (Dictionary_2_tB21E9CF3B85CA9CAE5D23FD25B351F538B448F51* __this, int32_t ___capacity0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___capacity0;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_0, NULL);
		V_0 = L_1;
		__this->____freeList_3 = (-1);
		int32_t L_2 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_2);
		__this->____buckets_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets_0), (void*)L_3);
		int32_t L_4 = V_0;
		EntryU5BU5D_t7E16E41EC34A6E7E94750CC3CB11F6B8ECBE6BB5* L_5 = (EntryU5BU5D_t7E16E41EC34A6E7E94750CC3CB11F6B8ECBE6BB5*)(EntryU5BU5D_t7E16E41EC34A6E7E94750CC3CB11F6B8ECBE6BB5*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 44), (uint32_t)L_4);
		__this->____entries_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries_1), (void*)L_5);
		int32_t L_6 = V_0;
		return L_6;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,Oculus.Interaction.PoseDetection.JointRotationActiveState/JointRotationFeatureState>::TryInsert(TKey,TValue,System.Collections.Generic.InsertionBehavior)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_m98BB449DE3A2949514261A9DBDDEEE247C7A9EB3_gshared (Dictionary_2_tB21E9CF3B85CA9CAE5D23FD25B351F538B448F51* __this, RuntimeObject* ___key0, JointRotationFeatureState_t293BD5640481C36FBD0E01AB30998C1D1C1D5ADE ___value1, uint8_t ___behavior2, const RuntimeMethod* method) 
{
	EntryU5BU5D_t7E16E41EC34A6E7E94750CC3CB11F6B8ECBE6BB5* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	int32_t V_8 = 0;
	int32_t* V_9 = NULL;
	Entry_tFEAB9282B1FC12CB03875EF01DEC16F52E16A69A* V_10 = NULL;
	RuntimeObject* V_11 = NULL;
	EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t G_B7_0 = 0;
	int32_t* G_B51_0 = NULL;
	{
		RuntimeObject* L_0 = ___key0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_000e:
	{
		int32_t L_1 = (int32_t)__this->____version_5;
		__this->____version_5 = ((int32_t)il2cpp_codegen_add(L_1, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		if (L_2)
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_3;
		L_3 = ((  int32_t (*) (Dictionary_2_tB21E9CF3B85CA9CAE5D23FD25B351F538B448F51*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(__this, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
	}

IL_002c:
	{
		EntryU5BU5D_t7E16E41EC34A6E7E94750CC3CB11F6B8ECBE6BB5* L_4 = (EntryU5BU5D_t7E16E41EC34A6E7E94750CC3CB11F6B8ECBE6BB5*)__this->____entries_1;
		V_0 = L_4;
		RuntimeObject* L_5 = (RuntimeObject*)__this->____comparer_6;
		V_1 = L_5;
		RuntimeObject* L_6 = V_1;
		if (!L_6)
		{
			goto IL_0046;
		}
	}
	{
		RuntimeObject* L_7 = V_1;
		RuntimeObject* L_8 = ___key0;
		NullCheck(L_7);
		int32_t L_9;
		L_9 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Object>::GetHashCode(T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 41), L_7, L_8);
		G_B7_0 = L_9;
		goto IL_0053;
	}

IL_0046:
	{
		NullCheck((___key0));
		int32_t L_10;
		L_10 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, (___key0));
		G_B7_0 = L_10;
	}

IL_0053:
	{
		V_2 = ((int32_t)(G_B7_0&((int32_t)2147483647LL)));
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		int32_t L_12 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_13);
		NullCheck(L_11);
		V_4 = ((L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_12%((int32_t)(((RuntimeArray*)L_13)->max_length)))))));
		int32_t* L_14 = V_4;
		int32_t L_15 = *((int32_t*)L_14);
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_15, 1));
		RuntimeObject* L_16 = V_1;
		if (L_16)
		{
			goto IL_0187;
		}
	}
	{
		il2cpp_codegen_initobj((&V_11), sizeof(RuntimeObject*));
		RuntimeObject* L_17 = V_11;
		if (!L_17)
		{
			goto IL_010a;
		}
	}

IL_0091:
	{
		int32_t L_18 = V_5;
		EntryU5BU5D_t7E16E41EC34A6E7E94750CC3CB11F6B8ECBE6BB5* L_19 = V_0;
		NullCheck(L_19);
		if ((!(((uint32_t)L_18) < ((uint32_t)((int32_t)(((RuntimeArray*)L_19)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_t7E16E41EC34A6E7E94750CC3CB11F6B8ECBE6BB5* L_20 = V_0;
		int32_t L_21 = V_5;
		NullCheck(L_20);
		int32_t L_22 = (int32_t)((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___hashCode_0;
		int32_t L_23 = V_2;
		if ((!(((uint32_t)L_22) == ((uint32_t)L_23))))
		{
			goto IL_00ea;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_24;
		L_24 = ((  EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		EntryU5BU5D_t7E16E41EC34A6E7E94750CC3CB11F6B8ECBE6BB5* L_25 = V_0;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		RuntimeObject* L_27 = (RuntimeObject*)((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___key_2;
		RuntimeObject* L_28 = ___key0;
		NullCheck(L_24);
		bool L_29;
		L_29 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Object>::Equals(T,T) */, L_24, L_27, L_28);
		if (!L_29)
		{
			goto IL_00ea;
		}
	}
	{
		uint8_t L_30 = ___behavior2;
		if ((!(((uint32_t)L_30) == ((uint32_t)1))))
		{
			goto IL_00d9;
		}
	}
	{
		EntryU5BU5D_t7E16E41EC34A6E7E94750CC3CB11F6B8ECBE6BB5* L_31 = V_0;
		int32_t L_32 = V_5;
		NullCheck(L_31);
		JointRotationFeatureState_t293BD5640481C36FBD0E01AB30998C1D1C1D5ADE L_33 = ___value1;
		((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___value_3 = L_33;
		return (bool)1;
	}

IL_00d9:
	{
		uint8_t L_34 = ___behavior2;
		if ((!(((uint32_t)L_34) == ((uint32_t)2))))
		{
			goto IL_00e8;
		}
	}
	{
		RuntimeObject* L_35 = ___key0;
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_35, NULL);
	}

IL_00e8:
	{
		return (bool)0;
	}

IL_00ea:
	{
		EntryU5BU5D_t7E16E41EC34A6E7E94750CC3CB11F6B8ECBE6BB5* L_36 = V_0;
		int32_t L_37 = V_5;
		NullCheck(L_36);
		int32_t L_38 = (int32_t)((L_36)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_37)))->___next_1;
		V_5 = L_38;
		int32_t L_39 = V_3;
		EntryU5BU5D_t7E16E41EC34A6E7E94750CC3CB11F6B8ECBE6BB5* L_40 = V_0;
		NullCheck(L_40);
		if ((((int32_t)L_39) < ((int32_t)((int32_t)(((RuntimeArray*)L_40)->max_length)))))
		{
			goto IL_0104;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_0104:
	{
		int32_t L_41 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_41, 1));
		goto IL_0091;
	}

IL_010a:
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_42;
		L_42 = ((  EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		V_12 = L_42;
	}

IL_0111:
	{
		int32_t L_43 = V_5;
		EntryU5BU5D_t7E16E41EC34A6E7E94750CC3CB11F6B8ECBE6BB5* L_44 = V_0;
		NullCheck(L_44);
		if ((!(((uint32_t)L_43) < ((uint32_t)((int32_t)(((RuntimeArray*)L_44)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_t7E16E41EC34A6E7E94750CC3CB11F6B8ECBE6BB5* L_45 = V_0;
		int32_t L_46 = V_5;
		NullCheck(L_45);
		int32_t L_47 = (int32_t)((L_45)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_46)))->___hashCode_0;
		int32_t L_48 = V_2;
		if ((!(((uint32_t)L_47) == ((uint32_t)L_48))))
		{
			goto IL_0167;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_49 = V_12;
		EntryU5BU5D_t7E16E41EC34A6E7E94750CC3CB11F6B8ECBE6BB5* L_50 = V_0;
		int32_t L_51 = V_5;
		NullCheck(L_50);
		RuntimeObject* L_52 = (RuntimeObject*)((L_50)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_51)))->___key_2;
		RuntimeObject* L_53 = ___key0;
		NullCheck(L_49);
		bool L_54;
		L_54 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Object>::Equals(T,T) */, L_49, L_52, L_53);
		if (!L_54)
		{
			goto IL_0167;
		}
	}
	{
		uint8_t L_55 = ___behavior2;
		if ((!(((uint32_t)L_55) == ((uint32_t)1))))
		{
			goto IL_0156;
		}
	}
	{
		EntryU5BU5D_t7E16E41EC34A6E7E94750CC3CB11F6B8ECBE6BB5* L_56 = V_0;
		int32_t L_57 = V_5;
		NullCheck(L_56);
		JointRotationFeatureState_t293BD5640481C36FBD0E01AB30998C1D1C1D5ADE L_58 = ___value1;
		((L_56)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_57)))->___value_3 = L_58;
		return (bool)1;
	}

IL_0156:
	{
		uint8_t L_59 = ___behavior2;
		if ((!(((uint32_t)L_59) == ((uint32_t)2))))
		{
			goto IL_0165;
		}
	}
	{
		RuntimeObject* L_60 = ___key0;
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_60, NULL);
	}

IL_0165:
	{
		return (bool)0;
	}

IL_0167:
	{
		EntryU5BU5D_t7E16E41EC34A6E7E94750CC3CB11F6B8ECBE6BB5* L_61 = V_0;
		int32_t L_62 = V_5;
		NullCheck(L_61);
		int32_t L_63 = (int32_t)((L_61)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_62)))->___next_1;
		V_5 = L_63;
		int32_t L_64 = V_3;
		EntryU5BU5D_t7E16E41EC34A6E7E94750CC3CB11F6B8ECBE6BB5* L_65 = V_0;
		NullCheck(L_65);
		if ((((int32_t)L_64) < ((int32_t)((int32_t)(((RuntimeArray*)L_65)->max_length)))))
		{
			goto IL_0181;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_0181:
	{
		int32_t L_66 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_66, 1));
		goto IL_0111;
	}

IL_0187:
	{
		int32_t L_67 = V_5;
		EntryU5BU5D_t7E16E41EC34A6E7E94750CC3CB11F6B8ECBE6BB5* L_68 = V_0;
		NullCheck(L_68);
		if ((!(((uint32_t)L_67) < ((uint32_t)((int32_t)(((RuntimeArray*)L_68)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_t7E16E41EC34A6E7E94750CC3CB11F6B8ECBE6BB5* L_69 = V_0;
		int32_t L_70 = V_5;
		NullCheck(L_69);
		int32_t L_71 = (int32_t)((L_69)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_70)))->___hashCode_0;
		int32_t L_72 = V_2;
		if ((!(((uint32_t)L_71) == ((uint32_t)L_72))))
		{
			goto IL_01d9;
		}
	}
	{
		RuntimeObject* L_73 = V_1;
		EntryU5BU5D_t7E16E41EC34A6E7E94750CC3CB11F6B8ECBE6BB5* L_74 = V_0;
		int32_t L_75 = V_5;
		NullCheck(L_74);
		RuntimeObject* L_76 = (RuntimeObject*)((L_74)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_75)))->___key_2;
		RuntimeObject* L_77 = ___key0;
		NullCheck(L_73);
		bool L_78;
		L_78 = InterfaceFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Object>::Equals(T,T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 41), L_73, L_76, L_77);
		if (!L_78)
		{
			goto IL_01d9;
		}
	}
	{
		uint8_t L_79 = ___behavior2;
		if ((!(((uint32_t)L_79) == ((uint32_t)1))))
		{
			goto IL_01c8;
		}
	}
	{
		EntryU5BU5D_t7E16E41EC34A6E7E94750CC3CB11F6B8ECBE6BB5* L_80 = V_0;
		int32_t L_81 = V_5;
		NullCheck(L_80);
		JointRotationFeatureState_t293BD5640481C36FBD0E01AB30998C1D1C1D5ADE L_82 = ___value1;
		((L_80)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_81)))->___value_3 = L_82;
		return (bool)1;
	}

IL_01c8:
	{
		uint8_t L_83 = ___behavior2;
		if ((!(((uint32_t)L_83) == ((uint32_t)2))))
		{
			goto IL_01d7;
		}
	}
	{
		RuntimeObject* L_84 = ___key0;
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_84, NULL);
	}

IL_01d7:
	{
		return (bool)0;
	}

IL_01d9:
	{
		EntryU5BU5D_t7E16E41EC34A6E7E94750CC3CB11F6B8ECBE6BB5* L_85 = V_0;
		int32_t L_86 = V_5;
		NullCheck(L_85);
		int32_t L_87 = (int32_t)((L_85)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_86)))->___next_1;
		V_5 = L_87;
		int32_t L_88 = V_3;
		EntryU5BU5D_t7E16E41EC34A6E7E94750CC3CB11F6B8ECBE6BB5* L_89 = V_0;
		NullCheck(L_89);
		if ((((int32_t)L_88) < ((int32_t)((int32_t)(((RuntimeArray*)L_89)->max_length)))))
		{
			goto IL_01f3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_01f3:
	{
		int32_t L_90 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_90, 1));
		goto IL_0187;
	}

IL_01f9:
	{
		V_6 = (bool)0;
		V_7 = (bool)0;
		int32_t L_91 = (int32_t)__this->____freeCount_4;
		if ((((int32_t)L_91) <= ((int32_t)0)))
		{
			goto IL_0223;
		}
	}
	{
		int32_t L_92 = (int32_t)__this->____freeList_3;
		V_8 = L_92;
		V_7 = (bool)1;
		int32_t L_93 = (int32_t)__this->____freeCount_4;
		__this->____freeCount_4 = ((int32_t)il2cpp_codegen_subtract(L_93, 1));
		goto IL_0250;
	}

IL_0223:
	{
		int32_t L_94 = (int32_t)__this->____count_2;
		V_13 = L_94;
		int32_t L_95 = V_13;
		EntryU5BU5D_t7E16E41EC34A6E7E94750CC3CB11F6B8ECBE6BB5* L_96 = V_0;
		NullCheck(L_96);
		if ((!(((uint32_t)L_95) == ((uint32_t)((int32_t)(((RuntimeArray*)L_96)->max_length))))))
		{
			goto IL_023b;
		}
	}
	{
		((  void (*) (Dictionary_2_tB21E9CF3B85CA9CAE5D23FD25B351F538B448F51*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 45)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 45));
		V_6 = (bool)1;
	}

IL_023b:
	{
		int32_t L_97 = V_13;
		V_8 = L_97;
		int32_t L_98 = V_13;
		__this->____count_2 = ((int32_t)il2cpp_codegen_add(L_98, 1));
		EntryU5BU5D_t7E16E41EC34A6E7E94750CC3CB11F6B8ECBE6BB5* L_99 = (EntryU5BU5D_t7E16E41EC34A6E7E94750CC3CB11F6B8ECBE6BB5*)__this->____entries_1;
		V_0 = L_99;
	}

IL_0250:
	{
		bool L_100 = V_6;
		if (L_100)
		{
			goto IL_0258;
		}
	}
	{
		int32_t* L_101 = V_4;
		G_B51_0 = L_101;
		goto IL_026d;
	}

IL_0258:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_102 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		int32_t L_103 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_104 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_104);
		NullCheck(L_102);
		G_B51_0 = ((L_102)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_103%((int32_t)(((RuntimeArray*)L_104)->max_length)))))));
	}

IL_026d:
	{
		V_9 = G_B51_0;
		EntryU5BU5D_t7E16E41EC34A6E7E94750CC3CB11F6B8ECBE6BB5* L_105 = V_0;
		int32_t L_106 = V_8;
		NullCheck(L_105);
		V_10 = ((L_105)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_106)));
		bool L_107 = V_7;
		if (!L_107)
		{
			goto IL_028a;
		}
	}
	{
		Entry_tFEAB9282B1FC12CB03875EF01DEC16F52E16A69A* L_108 = V_10;
		int32_t L_109 = (int32_t)L_108->___next_1;
		__this->____freeList_3 = L_109;
	}

IL_028a:
	{
		Entry_tFEAB9282B1FC12CB03875EF01DEC16F52E16A69A* L_110 = V_10;
		int32_t L_111 = V_2;
		L_110->___hashCode_0 = L_111;
		Entry_tFEAB9282B1FC12CB03875EF01DEC16F52E16A69A* L_112 = V_10;
		int32_t* L_113 = V_9;
		int32_t L_114 = *((int32_t*)L_113);
		L_112->___next_1 = ((int32_t)il2cpp_codegen_subtract(L_114, 1));
		Entry_tFEAB9282B1FC12CB03875EF01DEC16F52E16A69A* L_115 = V_10;
		RuntimeObject* L_116 = ___key0;
		L_115->___key_2 = L_116;
		Il2CppCodeGenWriteBarrier((void**)(&L_115->___key_2), (void*)L_116);
		Entry_tFEAB9282B1FC12CB03875EF01DEC16F52E16A69A* L_117 = V_10;
		JointRotationFeatureState_t293BD5640481C36FBD0E01AB30998C1D1C1D5ADE L_118 = ___value1;
		L_117->___value_3 = L_118;
		int32_t* L_119 = V_9;
		int32_t L_120 = V_8;
		*((int32_t*)L_119) = (int32_t)((int32_t)il2cpp_codegen_add(L_120, 1));
		return (bool)1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Oculus.Interaction.PoseDetection.JointRotationActiveState/JointRotationFeatureState>::OnDeserialization(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_OnDeserialization_m80ECCDD798E709A3CCE2F5BA316DD21C7BF2AD43_gshared (Dictionary_2_tB21E9CF3B85CA9CAE5D23FD25B351F538B448F51* __this, RuntimeObject* ___sender0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	KeyValuePair_2U5BU5D_tBD10F6DC24C89CDB584693DEC3A9B0A08954D611* V_3 = NULL;
	int32_t V_4 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F(L_0, (RuntimeObject*)__this, (&V_0), ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_2 = V_0;
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_3, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, NULL);
		V_1 = L_4;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_5, _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69, NULL);
		V_2 = L_6;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_7 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 34)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		RuntimeObject* L_10;
		L_10 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_7, _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9, L_9, NULL);
		__this->____comparer_6 = ((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 41)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer_6), (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 41))));
		int32_t L_11 = V_2;
		if (!L_11)
		{
			goto IL_00c9;
		}
	}
	{
		int32_t L_12 = V_2;
		int32_t L_13;
		L_13 = ((  int32_t (*) (Dictionary_2_tB21E9CF3B85CA9CAE5D23FD25B351F538B448F51*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(__this, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_14 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 37)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		NullCheck(L_14);
		RuntimeObject* L_17;
		L_17 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_14, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, L_16, NULL);
		V_3 = ((KeyValuePair_2U5BU5D_tBD10F6DC24C89CDB584693DEC3A9B0A08954D611*)Castclass((RuntimeObject*)L_17, il2cpp_rgctx_data(method->klass->rgctx_data, 46)));
		KeyValuePair_2U5BU5D_tBD10F6DC24C89CDB584693DEC3A9B0A08954D611* L_18 = V_3;
		if (L_18)
		{
			goto IL_007a;
		}
	}
	{
		ThrowHelper_ThrowSerializationException_m03BE2B48CD3617C32FBCEE16030F7C5563E04E16((int32_t)((int32_t)16), NULL);
	}

IL_007a:
	{
		V_4 = 0;
		goto IL_00c0;
	}

IL_007f:
	{
		KeyValuePair_2U5BU5D_tBD10F6DC24C89CDB584693DEC3A9B0A08954D611* L_19 = V_3;
		int32_t L_20 = V_4;
		NullCheck(L_19);
		RuntimeObject* L_21;
		L_21 = KeyValuePair_2_get_Key_mA53994A88775FF1BE799F3FC3B7FC2484A7B83E6_inline(((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20))), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		if (L_21)
		{
			goto IL_009a;
		}
	}
	{
		ThrowHelper_ThrowSerializationException_m03BE2B48CD3617C32FBCEE16030F7C5563E04E16((int32_t)((int32_t)17), NULL);
	}

IL_009a:
	{
		KeyValuePair_2U5BU5D_tBD10F6DC24C89CDB584693DEC3A9B0A08954D611* L_22 = V_3;
		int32_t L_23 = V_4;
		NullCheck(L_22);
		RuntimeObject* L_24;
		L_24 = KeyValuePair_2_get_Key_mA53994A88775FF1BE799F3FC3B7FC2484A7B83E6_inline(((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23))), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		KeyValuePair_2U5BU5D_tBD10F6DC24C89CDB584693DEC3A9B0A08954D611* L_25 = V_3;
		int32_t L_26 = V_4;
		NullCheck(L_25);
		JointRotationFeatureState_t293BD5640481C36FBD0E01AB30998C1D1C1D5ADE L_27;
		L_27 = KeyValuePair_2_get_Value_m7B6AD86F22659AD0AC092AF5EC11E4C137517524_inline(((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26))), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		((  void (*) (Dictionary_2_tB21E9CF3B85CA9CAE5D23FD25B351F538B448F51*, RuntimeObject*, JointRotationFeatureState_t293BD5640481C36FBD0E01AB30998C1D1C1D5ADE, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(__this, L_24, L_27, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		int32_t L_28 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_00c0:
	{
		int32_t L_29 = V_4;
		KeyValuePair_2U5BU5D_tBD10F6DC24C89CDB584693DEC3A9B0A08954D611* L_30 = V_3;
		NullCheck(L_30);
		if ((((int32_t)L_29) < ((int32_t)((int32_t)(((RuntimeArray*)L_30)->max_length)))))
		{
			goto IL_007f;
		}
	}
	{
		goto IL_00d0;
	}

IL_00c9:
	{
		__this->____buckets_0 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets_0), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
	}

IL_00d0:
	{
		int32_t L_31 = V_1;
		__this->____version_5 = L_31;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_32;
		L_32 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		NullCheck(L_32);
		bool L_33;
		L_33 = ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E(L_32, (RuntimeObject*)__this, ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Oculus.Interaction.PoseDetection.JointRotationActiveState/JointRotationFeatureState>::Resize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_mB2D119495292D4BD543890FF272FA781DAE7E978_gshared (Dictionary_2_tB21E9CF3B85CA9CAE5D23FD25B351F538B448F51* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = (int32_t)__this->____count_2;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_ExpandPrime_m9A35EC171AA0EA16F7C9F71EE6FAD5A82565ADB9(L_0, NULL);
		((  void (*) (Dictionary_2_tB21E9CF3B85CA9CAE5D23FD25B351F538B448F51*, int32_t, bool, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 47)))(__this, L_1, (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 47));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Oculus.Interaction.PoseDetection.JointRotationActiveState/JointRotationFeatureState>::Resize(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_mFFE4473048DA3CAE01F0FE9507218B847EA2F5AB_gshared (Dictionary_2_tB21E9CF3B85CA9CAE5D23FD25B351F538B448F51* __this, int32_t ___newSize0, bool ___forceNewHashCodes1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	EntryU5BU5D_t7E16E41EC34A6E7E94750CC3CB11F6B8ECBE6BB5* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		int32_t L_0 = ___newSize0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = ___newSize0;
		EntryU5BU5D_t7E16E41EC34A6E7E94750CC3CB11F6B8ECBE6BB5* L_3 = (EntryU5BU5D_t7E16E41EC34A6E7E94750CC3CB11F6B8ECBE6BB5*)(EntryU5BU5D_t7E16E41EC34A6E7E94750CC3CB11F6B8ECBE6BB5*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 44), (uint32_t)L_2);
		V_1 = L_3;
		int32_t L_4 = (int32_t)__this->____count_2;
		V_2 = L_4;
		EntryU5BU5D_t7E16E41EC34A6E7E94750CC3CB11F6B8ECBE6BB5* L_5 = (EntryU5BU5D_t7E16E41EC34A6E7E94750CC3CB11F6B8ECBE6BB5*)__this->____entries_1;
		EntryU5BU5D_t7E16E41EC34A6E7E94750CC3CB11F6B8ECBE6BB5* L_6 = V_1;
		int32_t L_7 = V_2;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, 0, (RuntimeArray*)L_6, 0, L_7, NULL);
		il2cpp_codegen_initobj((&V_3), sizeof(RuntimeObject*));
		RuntimeObject* L_8 = V_3;
		bool L_9 = ___forceNewHashCodes1;
		if (!((int32_t)(((((RuntimeObject*)(RuntimeObject*)L_8) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0)&(int32_t)L_9)))
		{
			goto IL_0084;
		}
	}
	{
		V_4 = 0;
		goto IL_007f;
	}

IL_003e:
	{
		EntryU5BU5D_t7E16E41EC34A6E7E94750CC3CB11F6B8ECBE6BB5* L_10 = V_1;
		int32_t L_11 = V_4;
		NullCheck(L_10);
		int32_t L_12 = (int32_t)((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)))->___hashCode_0;
		if ((((int32_t)L_12) < ((int32_t)0)))
		{
			goto IL_0079;
		}
	}
	{
		EntryU5BU5D_t7E16E41EC34A6E7E94750CC3CB11F6B8ECBE6BB5* L_13 = V_1;
		int32_t L_14 = V_4;
		NullCheck(L_13);
		EntryU5BU5D_t7E16E41EC34A6E7E94750CC3CB11F6B8ECBE6BB5* L_15 = V_1;
		int32_t L_16 = V_4;
		NullCheck(L_15);
		RuntimeObject** L_17 = (RuntimeObject**)(&((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___key_2);
		NullCheck((*L_17));
		int32_t L_18;
		L_18 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, (*L_17));
		((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)))->___hashCode_0 = ((int32_t)(L_18&((int32_t)2147483647LL)));
	}

IL_0079:
	{
		int32_t L_19 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_007f:
	{
		int32_t L_20 = V_4;
		int32_t L_21 = V_2;
		if ((((int32_t)L_20) < ((int32_t)L_21)))
		{
			goto IL_003e;
		}
	}

IL_0084:
	{
		V_5 = 0;
		goto IL_00cb;
	}

IL_0089:
	{
		EntryU5BU5D_t7E16E41EC34A6E7E94750CC3CB11F6B8ECBE6BB5* L_22 = V_1;
		int32_t L_23 = V_5;
		NullCheck(L_22);
		int32_t L_24 = (int32_t)((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23)))->___hashCode_0;
		if ((((int32_t)L_24) < ((int32_t)0)))
		{
			goto IL_00c5;
		}
	}
	{
		EntryU5BU5D_t7E16E41EC34A6E7E94750CC3CB11F6B8ECBE6BB5* L_25 = V_1;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		int32_t L_27 = (int32_t)((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___hashCode_0;
		int32_t L_28 = ___newSize0;
		V_6 = ((int32_t)(L_27%L_28));
		EntryU5BU5D_t7E16E41EC34A6E7E94750CC3CB11F6B8ECBE6BB5* L_29 = V_1;
		int32_t L_30 = V_5;
		NullCheck(L_29);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = V_0;
		int32_t L_32 = V_6;
		NullCheck(L_31);
		int32_t L_33 = L_32;
		int32_t L_34 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		((L_29)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_30)))->___next_1 = ((int32_t)il2cpp_codegen_subtract(L_34, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_35 = V_0;
		int32_t L_36 = V_6;
		int32_t L_37 = V_5;
		NullCheck(L_35);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(L_36), (int32_t)((int32_t)il2cpp_codegen_add(L_37, 1)));
	}

IL_00c5:
	{
		int32_t L_38 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
	}

IL_00cb:
	{
		int32_t L_39 = V_5;
		int32_t L_40 = V_2;
		if ((((int32_t)L_39) < ((int32_t)L_40)))
		{
			goto IL_0089;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_41 = V_0;
		__this->____buckets_0 = L_41;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets_0), (void*)L_41);
		EntryU5BU5D_t7E16E41EC34A6E7E94750CC3CB11F6B8ECBE6BB5* L_42 = V_1;
		__this->____entries_1 = L_42;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries_1), (void*)L_42);
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,Oculus.Interaction.PoseDetection.JointRotationActiveState/JointRotationFeatureState>::Remove(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_mAAEB3E7B0D83B0C6D8D5111B2ADC01D41180AD24_gshared (Dictionary_2_tB21E9CF3B85CA9CAE5D23FD25B351F538B448F51* __this, RuntimeObject* ___key0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Entry_tFEAB9282B1FC12CB03875EF01DEC16F52E16A69A* V_4 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	RuntimeObject* G_B10_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	bool G_B11_0 = false;
	{
		RuntimeObject* L_0 = ___key0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_000e:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		if (!L_1)
		{
			goto IL_0149;
		}
	}
	{
		RuntimeObject* L_2 = (RuntimeObject*)__this->____comparer_6;
		RuntimeObject* L_3 = L_2;
		G_B4_0 = L_3;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_0032;
		}
	}
	{
		NullCheck((___key0));
		int32_t L_4;
		L_4 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, (___key0));
		G_B6_0 = L_4;
		goto IL_0038;
	}

IL_0032:
	{
		RuntimeObject* L_5 = ___key0;
		NullCheck(G_B5_0);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Object>::GetHashCode(T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 41), G_B5_0, L_5);
		G_B6_0 = L_6;
	}

IL_0038:
	{
		V_0 = ((int32_t)(G_B6_0&((int32_t)2147483647LL)));
		int32_t L_7 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_8);
		V_1 = ((int32_t)(L_7%((int32_t)(((RuntimeArray*)L_8)->max_length))));
		V_2 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		int32_t L_10 = V_1;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		int32_t L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
		goto IL_0142;
	}

IL_005c:
	{
		EntryU5BU5D_t7E16E41EC34A6E7E94750CC3CB11F6B8ECBE6BB5* L_13 = (EntryU5BU5D_t7E16E41EC34A6E7E94750CC3CB11F6B8ECBE6BB5*)__this->____entries_1;
		int32_t L_14 = V_3;
		NullCheck(L_13);
		V_4 = ((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)));
		Entry_tFEAB9282B1FC12CB03875EF01DEC16F52E16A69A* L_15 = V_4;
		int32_t L_16 = (int32_t)L_15->___hashCode_0;
		int32_t L_17 = V_0;
		if ((!(((uint32_t)L_16) == ((uint32_t)L_17))))
		{
			goto IL_0138;
		}
	}
	{
		RuntimeObject* L_18 = (RuntimeObject*)__this->____comparer_6;
		RuntimeObject* L_19 = L_18;
		G_B9_0 = L_19;
		if (L_19)
		{
			G_B10_0 = L_19;
			goto IL_0095;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_20;
		L_20 = ((  EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		Entry_tFEAB9282B1FC12CB03875EF01DEC16F52E16A69A* L_21 = V_4;
		RuntimeObject* L_22 = (RuntimeObject*)L_21->___key_2;
		RuntimeObject* L_23 = ___key0;
		NullCheck(L_20);
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Object>::Equals(T,T) */, L_20, L_22, L_23);
		G_B11_0 = L_24;
		goto IL_00a2;
	}

IL_0095:
	{
		Entry_tFEAB9282B1FC12CB03875EF01DEC16F52E16A69A* L_25 = V_4;
		RuntimeObject* L_26 = (RuntimeObject*)L_25->___key_2;
		RuntimeObject* L_27 = ___key0;
		NullCheck(G_B10_0);
		bool L_28;
		L_28 = InterfaceFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Object>::Equals(T,T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 41), G_B10_0, L_26, L_27);
		G_B11_0 = L_28;
	}

IL_00a2:
	{
		if (!G_B11_0)
		{
			goto IL_0138;
		}
	}
	{
		int32_t L_29 = V_2;
		if ((((int32_t)L_29) >= ((int32_t)0)))
		{
			goto IL_00be;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_30 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		int32_t L_31 = V_1;
		Entry_tFEAB9282B1FC12CB03875EF01DEC16F52E16A69A* L_32 = V_4;
		int32_t L_33 = (int32_t)L_32->___next_1;
		NullCheck(L_30);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_31), (int32_t)((int32_t)il2cpp_codegen_add(L_33, 1)));
		goto IL_00d6;
	}

IL_00be:
	{
		EntryU5BU5D_t7E16E41EC34A6E7E94750CC3CB11F6B8ECBE6BB5* L_34 = (EntryU5BU5D_t7E16E41EC34A6E7E94750CC3CB11F6B8ECBE6BB5*)__this->____entries_1;
		int32_t L_35 = V_2;
		NullCheck(L_34);
		Entry_tFEAB9282B1FC12CB03875EF01DEC16F52E16A69A* L_36 = V_4;
		int32_t L_37 = (int32_t)L_36->___next_1;
		((L_34)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_35)))->___next_1 = L_37;
	}

IL_00d6:
	{
		Entry_tFEAB9282B1FC12CB03875EF01DEC16F52E16A69A* L_38 = V_4;
		L_38->___hashCode_0 = (-1);
		Entry_tFEAB9282B1FC12CB03875EF01DEC16F52E16A69A* L_39 = V_4;
		int32_t L_40 = (int32_t)__this->____freeList_3;
		L_39->___next_1 = L_40;
		if (!true)
		{
			goto IL_00ff;
		}
	}
	{
		Entry_tFEAB9282B1FC12CB03875EF01DEC16F52E16A69A* L_41 = V_4;
		RuntimeObject** L_42 = (RuntimeObject**)(&L_41->___key_2);
		il2cpp_codegen_initobj(L_42, sizeof(RuntimeObject*));
	}

IL_00ff:
	{
		if (!false)
		{
			goto IL_0113;
		}
	}
	{
		Entry_tFEAB9282B1FC12CB03875EF01DEC16F52E16A69A* L_43 = V_4;
		JointRotationFeatureState_t293BD5640481C36FBD0E01AB30998C1D1C1D5ADE* L_44 = (JointRotationFeatureState_t293BD5640481C36FBD0E01AB30998C1D1C1D5ADE*)(&L_43->___value_3);
		il2cpp_codegen_initobj(L_44, sizeof(JointRotationFeatureState_t293BD5640481C36FBD0E01AB30998C1D1C1D5ADE));
	}

IL_0113:
	{
		int32_t L_45 = V_3;
		__this->____freeList_3 = L_45;
		int32_t L_46 = (int32_t)__this->____freeCount_4;
		__this->____freeCount_4 = ((int32_t)il2cpp_codegen_add(L_46, 1));
		int32_t L_47 = (int32_t)__this->____version_5;
		__this->____version_5 = ((int32_t)il2cpp_codegen_add(L_47, 1));
		return (bool)1;
	}

IL_0138:
	{
		int32_t L_48 = V_3;
		V_2 = L_48;
		Entry_tFEAB9282B1FC12CB03875EF01DEC16F52E16A69A* L_49 = V_4;
		int32_t L_50 = (int32_t)L_49->___next_1;
		V_3 = L_50;
	}

IL_0142:
	{
		int32_t L_51 = V_3;
		if ((((int32_t)L_51) >= ((int32_t)0)))
		{
			goto IL_005c;
		}
	}

IL_0149:
	{
		return (bool)0;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,Oculus.Interaction.PoseDetection.JointRotationActiveState/JointRotationFeatureState>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_mD3B4B45BBCDBC82DD8513CC102BCB8EF32675101_gshared (Dictionary_2_tB21E9CF3B85CA9CAE5D23FD25B351F538B448F51* __this, RuntimeObject* ___key0, JointRotationFeatureState_t293BD5640481C36FBD0E01AB30998C1D1C1D5ADE* ___value1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = ___key0;
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_tB21E9CF3B85CA9CAE5D23FD25B351F538B448F51*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 20)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0025;
		}
	}
	{
		JointRotationFeatureState_t293BD5640481C36FBD0E01AB30998C1D1C1D5ADE* L_3 = ___value1;
		EntryU5BU5D_t7E16E41EC34A6E7E94750CC3CB11F6B8ECBE6BB5* L_4 = (EntryU5BU5D_t7E16E41EC34A6E7E94750CC3CB11F6B8ECBE6BB5*)__this->____entries_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		JointRotationFeatureState_t293BD5640481C36FBD0E01AB30998C1D1C1D5ADE L_6 = (JointRotationFeatureState_t293BD5640481C36FBD0E01AB30998C1D1C1D5ADE)((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value_3;
		*(JointRotationFeatureState_t293BD5640481C36FBD0E01AB30998C1D1C1D5ADE*)L_3 = L_6;
		return (bool)1;
	}

IL_0025:
	{
		JointRotationFeatureState_t293BD5640481C36FBD0E01AB30998C1D1C1D5ADE* L_7 = ___value1;
		il2cpp_codegen_initobj(L_7, sizeof(JointRotationFeatureState_t293BD5640481C36FBD0E01AB30998C1D1C1D5ADE));
		return (bool)0;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,Oculus.Interaction.PoseDetection.JointRotationActiveState/JointRotationFeatureState>::TryAdd(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryAdd_m7817B0A2510DCD52ACB031588373987EB3C3E35A_gshared (Dictionary_2_tB21E9CF3B85CA9CAE5D23FD25B351F538B448F51* __this, RuntimeObject* ___key0, JointRotationFeatureState_t293BD5640481C36FBD0E01AB30998C1D1C1D5ADE ___value1, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___key0;
		JointRotationFeatureState_t293BD5640481C36FBD0E01AB30998C1D1C1D5ADE L_1 = ___value1;
		bool L_2;
		L_2 = ((  bool (*) (Dictionary_2_tB21E9CF3B85CA9CAE5D23FD25B351F538B448F51*, RuntimeObject*, JointRotationFeatureState_t293BD5640481C36FBD0E01AB30998C1D1C1D5ADE, uint8_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 22)))(__this, L_0, L_1, (uint8_t)0, il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		return L_2;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,Oculus.Interaction.PoseDetection.JointRotationActiveState/JointRotationFeatureState>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_mBBB5C0610A6D714A94E0972B38447ECD93C0AF37_gshared (Dictionary_2_tB21E9CF3B85CA9CAE5D23FD25B351F538B448F51* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Oculus.Interaction.PoseDetection.JointRotationActiveState/JointRotationFeatureState>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m02A77172E6614FF4E78ECC273102FD5E69CEACB2_gshared (Dictionary_2_tB21E9CF3B85CA9CAE5D23FD25B351F538B448F51* __this, KeyValuePair_2U5BU5D_tBD10F6DC24C89CDB584693DEC3A9B0A08954D611* ___array0, int32_t ___index1, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2U5BU5D_tBD10F6DC24C89CDB584693DEC3A9B0A08954D611* L_0 = ___array0;
		int32_t L_1 = ___index1;
		((  void (*) (Dictionary_2_tB21E9CF3B85CA9CAE5D23FD25B351F538B448F51*, KeyValuePair_2U5BU5D_tBD10F6DC24C89CDB584693DEC3A9B0A08954D611*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 36)))(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 36));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Oculus.Interaction.PoseDetection.JointRotationActiveState/JointRotationFeatureState>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_ICollection_CopyTo_m8B75F62D29A83B0BC60C1DE05EDBAA6C0C831833_gshared (Dictionary_2_tB21E9CF3B85CA9CAE5D23FD25B351F538B448F51* __this, RuntimeArray* ___array0, int32_t ___index1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_tBD10F6DC24C89CDB584693DEC3A9B0A08954D611* V_0 = NULL;
	DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* V_1 = NULL;
	EntryU5BU5D_t7E16E41EC34A6E7E94750CC3CB11F6B8ECBE6BB5* V_2 = NULL;
	int32_t V_3 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_4 = NULL;
	int32_t V_5 = 0;
	EntryU5BU5D_t7E16E41EC34A6E7E94750CC3CB11F6B8ECBE6BB5* V_6 = NULL;
	int32_t V_7 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___array0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___array0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(L_1, NULL);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___array0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___index1;
		RuntimeArray* L_6 = ___array0;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_6, NULL);
		if ((!(((uint32_t)L_5) > ((uint32_t)L_7))))
		{
			goto IL_0035;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0035:
	{
		RuntimeArray* L_8 = ___array0;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_8, NULL);
		int32_t L_10 = ___index1;
		int32_t L_11;
		L_11 = ((  int32_t (*) (Dictionary_2_tB21E9CF3B85CA9CAE5D23FD25B351F538B448F51*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 29)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_9, L_10))) >= ((int32_t)L_11)))
		{
			goto IL_004b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)5, NULL);
	}

IL_004b:
	{
		RuntimeArray* L_12 = ___array0;
		V_0 = ((KeyValuePair_2U5BU5D_tBD10F6DC24C89CDB584693DEC3A9B0A08954D611*)IsInst((RuntimeObject*)L_12, il2cpp_rgctx_data(method->klass->rgctx_data, 46)));
		KeyValuePair_2U5BU5D_tBD10F6DC24C89CDB584693DEC3A9B0A08954D611* L_13 = V_0;
		if (!L_13)
		{
			goto IL_005e;
		}
	}
	{
		KeyValuePair_2U5BU5D_tBD10F6DC24C89CDB584693DEC3A9B0A08954D611* L_14 = V_0;
		int32_t L_15 = ___index1;
		((  void (*) (Dictionary_2_tB21E9CF3B85CA9CAE5D23FD25B351F538B448F51*, KeyValuePair_2U5BU5D_tBD10F6DC24C89CDB584693DEC3A9B0A08954D611*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 36)))(__this, L_14, L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 36));
		return;
	}

IL_005e:
	{
		RuntimeArray* L_16 = ___array0;
		V_1 = ((DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533*)IsInst((RuntimeObject*)L_16, DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var));
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_17 = V_1;
		if (!L_17)
		{
			goto IL_00c3;
		}
	}
	{
		EntryU5BU5D_t7E16E41EC34A6E7E94750CC3CB11F6B8ECBE6BB5* L_18 = (EntryU5BU5D_t7E16E41EC34A6E7E94750CC3CB11F6B8ECBE6BB5*)__this->____entries_1;
		V_2 = L_18;
		V_3 = 0;
		goto IL_00b9;
	}

IL_0073:
	{
		EntryU5BU5D_t7E16E41EC34A6E7E94750CC3CB11F6B8ECBE6BB5* L_19 = V_2;
		int32_t L_20 = V_3;
		NullCheck(L_19);
		int32_t L_21 = (int32_t)((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20)))->___hashCode_0;
		if ((((int32_t)L_21) < ((int32_t)0)))
		{
			goto IL_00b5;
		}
	}
	{
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_22 = V_1;
		int32_t L_23 = ___index1;
		int32_t L_24 = L_23;
		___index1 = ((int32_t)il2cpp_codegen_add(L_24, 1));
		EntryU5BU5D_t7E16E41EC34A6E7E94750CC3CB11F6B8ECBE6BB5* L_25 = V_2;
		int32_t L_26 = V_3;
		NullCheck(L_25);
		RuntimeObject* L_27 = (RuntimeObject*)((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___key_2;
		EntryU5BU5D_t7E16E41EC34A6E7E94750CC3CB11F6B8ECBE6BB5* L_28 = V_2;
		int32_t L_29 = V_3;
		NullCheck(L_28);
		JointRotationFeatureState_t293BD5640481C36FBD0E01AB30998C1D1C1D5ADE L_30 = (JointRotationFeatureState_t293BD5640481C36FBD0E01AB30998C1D1C1D5ADE)((L_28)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_29)))->___value_3;
		JointRotationFeatureState_t293BD5640481C36FBD0E01AB30998C1D1C1D5ADE L_31 = L_30;
		RuntimeObject* L_32 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 28), &L_31);
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_33;
		memset((&L_33), 0, sizeof(L_33));
		DictionaryEntry__ctor_m2768353E53A75C4860E34B37DAF1342120C5D1EA((&L_33), L_27, L_32, /*hidden argument*/NULL);
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(L_24), (DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB)L_33);
	}

IL_00b5:
	{
		int32_t L_34 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_00b9:
	{
		int32_t L_35 = V_3;
		int32_t L_36 = (int32_t)__this->____count_2;
		if ((((int32_t)L_35) < ((int32_t)L_36)))
		{
			goto IL_0073;
		}
	}
	{
		return;
	}

IL_00c3:
	{
		RuntimeArray* L_37 = ___array0;
		V_4 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_37, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_38 = V_4;
		if (L_38)
		{
			goto IL_00d4;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_00d4:
	{
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_39 = (int32_t)__this->____count_2;
			V_5 = L_39;
			EntryU5BU5D_t7E16E41EC34A6E7E94750CC3CB11F6B8ECBE6BB5* L_40 = (EntryU5BU5D_t7E16E41EC34A6E7E94750CC3CB11F6B8ECBE6BB5*)__this->____entries_1;
			V_6 = L_40;
			V_7 = 0;
			goto IL_0130_1;
		}

IL_00ea_1:
		{
			EntryU5BU5D_t7E16E41EC34A6E7E94750CC3CB11F6B8ECBE6BB5* L_41 = V_6;
			int32_t L_42 = V_7;
			NullCheck(L_41);
			int32_t L_43 = (int32_t)((L_41)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_42)))->___hashCode_0;
			if ((((int32_t)L_43) < ((int32_t)0)))
			{
				goto IL_012a_1;
			}
		}
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_44 = V_4;
			int32_t L_45 = ___index1;
			int32_t L_46 = L_45;
			___index1 = ((int32_t)il2cpp_codegen_add(L_46, 1));
			EntryU5BU5D_t7E16E41EC34A6E7E94750CC3CB11F6B8ECBE6BB5* L_47 = V_6;
			int32_t L_48 = V_7;
			NullCheck(L_47);
			RuntimeObject* L_49 = (RuntimeObject*)((L_47)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_48)))->___key_2;
			EntryU5BU5D_t7E16E41EC34A6E7E94750CC3CB11F6B8ECBE6BB5* L_50 = V_6;
			int32_t L_51 = V_7;
			NullCheck(L_50);
			JointRotationFeatureState_t293BD5640481C36FBD0E01AB30998C1D1C1D5ADE L_52 = (JointRotationFeatureState_t293BD5640481C36FBD0E01AB30998C1D1C1D5ADE)((L_50)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_51)))->___value_3;
			KeyValuePair_2_t665B386104A382EAC5AF8A124C067F531DE78120 L_53;
			memset((&L_53), 0, sizeof(L_53));
			KeyValuePair_2__ctor_m39238B49A4DAE8C920EC0FC67F04D633DB08A75A((&L_53), L_49, L_52, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 31));
			KeyValuePair_2_t665B386104A382EAC5AF8A124C067F531DE78120 L_54 = L_53;
			RuntimeObject* L_55 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 30), &L_54);
			NullCheck(L_44);
			ArrayElementTypeCheck (L_44, L_55);
			(L_44)->SetAt(static_cast<il2cpp_array_size_t>(L_46), (RuntimeObject*)L_55);
		}

IL_012a_1:
		{
			int32_t L_56 = V_7;
			V_7 = ((int32_t)il2cpp_codegen_add(L_56, 1));
		}

IL_0130_1:
		{
			int32_t L_57 = V_7;
			int32_t L_58 = V_5;
			if ((((int32_t)L_57) < ((int32_t)L_58)))
			{
				goto IL_00ea_1;
			}
		}
		{
			goto IL_0140;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0138;
		}
		throw e;
	}

CATCH_0138:
	{// begin catch(System.ArrayTypeMismatchException)
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0140;
	}// end catch (depth: 1)

IL_0140:
	{
		return;
	}
}
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,Oculus.Interaction.PoseDetection.JointRotationActiveState/JointRotationFeatureState>::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m51DD9F37A740B3D07734B209A0BBBEC7E59D4B25_gshared (Dictionary_2_tB21E9CF3B85CA9CAE5D23FD25B351F538B448F51* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t84A88C194B63F67CEF824A6B4CE0DC3B5A993008 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m8C10F6C561DF44AA44B8F0E255A4F561B850C378((&L_0), __this, 2, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		Enumerator_t84A88C194B63F67CEF824A6B4CE0DC3B5A993008 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 32), &L_1);
		return (RuntimeObject*)L_2;
	}
}
// System.Object System.Collections.Generic.Dictionary`2<System.Object,Oculus.Interaction.PoseDetection.JointRotationActiveState/JointRotationFeatureState>::System.Collections.ICollection.get_SyncRoot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_ICollection_get_SyncRoot_m2B11DF0C09953BE855E38E8CA57390019963768C_gshared (Dictionary_2_tB21E9CF3B85CA9CAE5D23FD25B351F538B448F51* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____syncRoot_9;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot_9);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = (RuntimeObject*)__this->____syncRoot_9;
		return L_4;
	}
}
// System.Object System.Collections.Generic.Dictionary`2<System.Object,Oculus.Interaction.PoseDetection.JointRotationActiveState/JointRotationFeatureState>::System.Collections.IDictionary.get_Item(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_get_Item_m8185A621487337B80E3B7339D75FBF16BBF42A2A_gshared (Dictionary_2_tB21E9CF3B85CA9CAE5D23FD25B351F538B448F51* __this, RuntimeObject* ___key0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = ___key0;
		bool L_1;
		L_1 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 48)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 48));
		if (!L_1)
		{
			goto IL_0030;
		}
	}
	{
		RuntimeObject* L_2 = ___key0;
		int32_t L_3;
		L_3 = ((  int32_t (*) (Dictionary_2_tB21E9CF3B85CA9CAE5D23FD25B351F538B448F51*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 20)))(__this, ((RuntimeObject*)Castclass((RuntimeObject*)L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 21))), il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		V_0 = L_3;
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		EntryU5BU5D_t7E16E41EC34A6E7E94750CC3CB11F6B8ECBE6BB5* L_5 = (EntryU5BU5D_t7E16E41EC34A6E7E94750CC3CB11F6B8ECBE6BB5*)__this->____entries_1;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		JointRotationFeatureState_t293BD5640481C36FBD0E01AB30998C1D1C1D5ADE L_7 = (JointRotationFeatureState_t293BD5640481C36FBD0E01AB30998C1D1C1D5ADE)((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->___value_3;
		JointRotationFeatureState_t293BD5640481C36FBD0E01AB30998C1D1C1D5ADE L_8 = L_7;
		RuntimeObject* L_9 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 28), &L_8);
		return L_9;
	}

IL_0030:
	{
		return NULL;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Oculus.Interaction.PoseDetection.JointRotationActiveState/JointRotationFeatureState>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_IDictionary_set_Item_m553A22414A4EBEEADD292B9EA574BE17B101BE30_gshared (Dictionary_2_tB21E9CF3B85CA9CAE5D23FD25B351F538B448F51* __this, RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		RuntimeObject* L_0 = ___key0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___value1;
		((  void (*) (RuntimeObject*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 50)))(L_1, (int32_t)((int32_t)15), il2cpp_rgctx_method(method->klass->rgctx_data, 50));
	}
	try
	{// begin try (depth: 1)
		{
			RuntimeObject* L_2 = ___key0;
			V_0 = ((RuntimeObject*)Castclass((RuntimeObject*)L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 21)));
		}
		try
		{// begin try (depth: 2)
			RuntimeObject* L_3 = V_0;
			RuntimeObject* L_4 = ___value1;
			((  void (*) (Dictionary_2_tB21E9CF3B85CA9CAE5D23FD25B351F538B448F51*, RuntimeObject*, JointRotationFeatureState_t293BD5640481C36FBD0E01AB30998C1D1C1D5ADE, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 51)))(__this, L_3, ((*(JointRotationFeatureState_t293BD5640481C36FBD0E01AB30998C1D1C1D5ADE*)((JointRotationFeatureState_t293BD5640481C36FBD0E01AB30998C1D1C1D5ADE*)(JointRotationFeatureState_t293BD5640481C36FBD0E01AB30998C1D1C1D5ADE*)UnBox(L_4, il2cpp_rgctx_data(method->klass->rgctx_data, 28))))), il2cpp_rgctx_method(method->klass->rgctx_data, 51));
			goto IL_003a_1;
		}// end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0027_1;
			}
			throw e;
		}

CATCH_0027_1:
		{// begin catch(System.InvalidCastException)
			RuntimeObject* L_5 = ___value1;
			RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 52)) };
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
			Type_t* L_7;
			L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
			ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_5, L_7, NULL);
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_003a_1;
		}// end catch (depth: 2)

IL_003a_1:
		{
			goto IL_004f;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003c;
		}
		throw e;
	}

CATCH_003c:
	{// begin catch(System.InvalidCastException)
		RuntimeObject* L_8 = ___key0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 53)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		ThrowHelper_ThrowWrongKeyTypeArgumentException_m90E5BCE2CB10EEC16F254C237121C6816C4D6982(L_8, L_10, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_004f;
	}// end catch (depth: 1)

IL_004f:
	{
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,Oculus.Interaction.PoseDetection.JointRotationActiveState/JointRotationFeatureState>::IsCompatibleKey(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_IsCompatibleKey_mDEEF0569E12CDC9436DE6D9922127155EE9142F0_gshared (RuntimeObject* ___key0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___key0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___key0;
		return (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_1, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 21)))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,Oculus.Interaction.PoseDetection.JointRotationActiveState/JointRotationFeatureState>::System.Collections.IDictionary.Contains(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_IDictionary_Contains_m0C5DBD4DCDE0916A417CA0A8DB3DF68E16301F85_gshared (Dictionary_2_tB21E9CF3B85CA9CAE5D23FD25B351F538B448F51* __this, RuntimeObject* ___key0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___key0;
		bool L_1;
		L_1 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 48)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 48));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___key0;
		bool L_3;
		L_3 = ((  bool (*) (Dictionary_2_tB21E9CF3B85CA9CAE5D23FD25B351F538B448F51*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 54)))(__this, ((RuntimeObject*)Castclass((RuntimeObject*)L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 21))), il2cpp_rgctx_method(method->klass->rgctx_data, 54));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,Oculus.Interaction.PoseDetection.JointRotationActiveState/JointRotationFeatureState>::System.Collections.IDictionary.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_GetEnumerator_m5AFE2F0B74B2154E5148099C1BCECEC761B4BD40_gshared (Dictionary_2_tB21E9CF3B85CA9CAE5D23FD25B351F538B448F51* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t84A88C194B63F67CEF824A6B4CE0DC3B5A993008 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m8C10F6C561DF44AA44B8F0E255A4F561B850C378((&L_0), __this, 1, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		Enumerator_t84A88C194B63F67CEF824A6B4CE0DC3B5A993008 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 32), &L_1);
		return (RuntimeObject*)L_2;
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
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Oculus.Interaction.PoseDetection.JointVelocityActiveState/JointVelocityFeatureState>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m940DD75E687EE21697D93697F5EF6D909CAC969D_gshared (Dictionary_2_t572F5C2854D3453A19F550C26C592FBCEEF1BEF8* __this, const RuntimeMethod* method) 
{
	{
		((  void (*) (Dictionary_2_t572F5C2854D3453A19F550C26C592FBCEEF1BEF8*, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, 0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Oculus.Interaction.PoseDetection.JointVelocityActiveState/JointVelocityFeatureState>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mC1B9ADB6ABC07C898FAE5BFFE3AC29A9F872B1C3_gshared (Dictionary_2_t572F5C2854D3453A19F550C26C592FBCEEF1BEF8* __this, int32_t ___capacity0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___capacity0;
		((  void (*) (Dictionary_2_t572F5C2854D3453A19F550C26C592FBCEEF1BEF8*, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Oculus.Interaction.PoseDetection.JointVelocityActiveState/JointVelocityFeatureState>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m4A2CF542538F44A254D6510701AF5A3AA81A3D47_gshared (Dictionary_2_t572F5C2854D3453A19F550C26C592FBCEEF1BEF8* __this, RuntimeObject* ___comparer0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___comparer0;
		((  void (*) (Dictionary_2_t572F5C2854D3453A19F550C26C592FBCEEF1BEF8*, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, 0, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Oculus.Interaction.PoseDetection.JointVelocityActiveState/JointVelocityFeatureState>::.ctor(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m719F7733603EBBB20133C5D81ED80154D64D8C27_gshared (Dictionary_2_t572F5C2854D3453A19F550C26C592FBCEEF1BEF8* __this, int32_t ___capacity0, RuntimeObject* ___comparer1, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___capacity0;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0011;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97((int32_t)((int32_t)12), NULL);
	}

IL_0011:
	{
		int32_t L_1 = ___capacity0;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_2 = ___capacity0;
		int32_t L_3;
		L_3 = ((  int32_t (*) (Dictionary_2_t572F5C2854D3453A19F550C26C592FBCEEF1BEF8*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(__this, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
	}

IL_001d:
	{
		RuntimeObject* L_4 = ___comparer1;
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_5;
		L_5 = ((  EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if ((((RuntimeObject*)(RuntimeObject*)L_4) == ((RuntimeObject*)(EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2*)L_5)))
		{
			goto IL_002c;
		}
	}
	{
		RuntimeObject* L_6 = ___comparer1;
		__this->____comparer_6 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer_6), (void*)L_6);
	}

IL_002c:
	{
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Oculus.Interaction.PoseDetection.JointVelocityActiveState/JointVelocityFeatureState>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mE4F61AA303197E232CEFB91ADBFBBFD17F0BACA1_gshared (Dictionary_2_t572F5C2854D3453A19F550C26C592FBCEEF1BEF8* __this, RuntimeObject* ___dictionary0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___dictionary0;
		((  void (*) (Dictionary_2_t572F5C2854D3453A19F550C26C592FBCEEF1BEF8*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)))(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Oculus.Interaction.PoseDetection.JointVelocityActiveState/JointVelocityFeatureState>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m0AFDE81042E243A8D8B65AB979517D5DE122BF7B_gshared (Dictionary_2_t572F5C2854D3453A19F550C26C592FBCEEF1BEF8* __this, RuntimeObject* ___dictionary0, RuntimeObject* ___comparer1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	EntryU5BU5D_t699B149129E0838165C5A43C9C5F0E988EE1EF9A* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	KeyValuePair_2_t14287996C615F8158516F8E8DB0AC54D578E8246 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Dictionary_2_t572F5C2854D3453A19F550C26C592FBCEEF1BEF8* G_B2_0 = NULL;
	Dictionary_2_t572F5C2854D3453A19F550C26C592FBCEEF1BEF8* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	Dictionary_2_t572F5C2854D3453A19F550C26C592FBCEEF1BEF8* G_B3_1 = NULL;
	{
		RuntimeObject* L_0 = ___dictionary0;
		G_B1_0 = __this;
		if (L_0)
		{
			G_B2_0 = __this;
			goto IL_0007;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_000d;
	}

IL_0007:
	{
		RuntimeObject* L_1 = ___dictionary0;
		NullCheck((RuntimeObject*)L_1);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,Oculus.Interaction.PoseDetection.JointVelocityActiveState/JointVelocityFeatureState>>::get_Count() */, il2cpp_rgctx_data(method->klass->rgctx_data, 5), (RuntimeObject*)L_1);
		G_B3_0 = L_2;
		G_B3_1 = G_B2_0;
	}

IL_000d:
	{
		RuntimeObject* L_3 = ___comparer1;
		((  void (*) (Dictionary_2_t572F5C2854D3453A19F550C26C592FBCEEF1BEF8*, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(G_B3_1, G_B3_0, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		RuntimeObject* L_4 = ___dictionary0;
		if (L_4)
		{
			goto IL_001c;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)1, NULL);
	}

IL_001c:
	{
		RuntimeObject* L_5 = ___dictionary0;
		NullCheck((RuntimeObject*)L_5);
		Type_t* L_6;
		L_6 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)L_5, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 7)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		bool L_9;
		L_9 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_6, L_8, NULL);
		if (!L_9)
		{
			goto IL_0080;
		}
	}
	{
		RuntimeObject* L_10 = ___dictionary0;
		Dictionary_2_t572F5C2854D3453A19F550C26C592FBCEEF1BEF8* L_11 = ((Dictionary_2_t572F5C2854D3453A19F550C26C592FBCEEF1BEF8*)CastclassClass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 8)));
		NullCheck(L_11);
		int32_t L_12 = (int32_t)L_11->____count_2;
		V_0 = L_12;
		NullCheck(L_11);
		EntryU5BU5D_t699B149129E0838165C5A43C9C5F0E988EE1EF9A* L_13 = (EntryU5BU5D_t699B149129E0838165C5A43C9C5F0E988EE1EF9A*)L_11->____entries_1;
		V_1 = L_13;
		V_2 = 0;
		goto IL_007b;
	}

IL_004a:
	{
		EntryU5BU5D_t699B149129E0838165C5A43C9C5F0E988EE1EF9A* L_14 = V_1;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		int32_t L_16 = (int32_t)((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)))->___hashCode_0;
		if ((((int32_t)L_16) < ((int32_t)0)))
		{
			goto IL_0077;
		}
	}
	{
		EntryU5BU5D_t699B149129E0838165C5A43C9C5F0E988EE1EF9A* L_17 = V_1;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		RuntimeObject* L_19 = (RuntimeObject*)((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___key_2;
		EntryU5BU5D_t699B149129E0838165C5A43C9C5F0E988EE1EF9A* L_20 = V_1;
		int32_t L_21 = V_2;
		NullCheck(L_20);
		JointVelocityFeatureState_tA17C290CDFB76352D9CEFC3E7B790E0CAEF22105 L_22 = (JointVelocityFeatureState_tA17C290CDFB76352D9CEFC3E7B790E0CAEF22105)((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___value_3;
		((  void (*) (Dictionary_2_t572F5C2854D3453A19F550C26C592FBCEEF1BEF8*, RuntimeObject*, JointVelocityFeatureState_tA17C290CDFB76352D9CEFC3E7B790E0CAEF22105, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(__this, L_19, L_22, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
	}

IL_0077:
	{
		int32_t L_23 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_007b:
	{
		int32_t L_24 = V_2;
		int32_t L_25 = V_0;
		if ((((int32_t)L_24) < ((int32_t)L_25)))
		{
			goto IL_004a;
		}
	}
	{
		return;
	}

IL_0080:
	{
		RuntimeObject* L_26 = ___dictionary0;
		NullCheck((RuntimeObject*)L_26);
		RuntimeObject* L_27;
		L_27 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,Oculus.Interaction.PoseDetection.JointVelocityActiveState/JointVelocityFeatureState>>::GetEnumerator() */, il2cpp_rgctx_data(method->klass->rgctx_data, 10), (RuntimeObject*)L_26);
		V_3 = L_27;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00af:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_28 = V_3;
					if (!L_28)
					{
						goto IL_00b8;
					}
				}
				{
					RuntimeObject* L_29 = V_3;
					NullCheck((RuntimeObject*)L_29);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_29);
				}

IL_00b8:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_00a5_1;
			}

IL_0089_1:
			{
				RuntimeObject* L_30 = V_3;
				NullCheck(L_30);
				KeyValuePair_2_t14287996C615F8158516F8E8DB0AC54D578E8246 L_31;
				L_31 = InterfaceFuncInvoker0< KeyValuePair_2_t14287996C615F8158516F8E8DB0AC54D578E8246 >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,Oculus.Interaction.PoseDetection.JointVelocityActiveState/JointVelocityFeatureState>>::get_Current() */, il2cpp_rgctx_data(method->klass->rgctx_data, 12), L_30);
				V_4 = L_31;
				RuntimeObject* L_32;
				L_32 = KeyValuePair_2_get_Key_m171B988FCFBB4CE7A964046A114247C8F4C611D6_inline((&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
				JointVelocityFeatureState_tA17C290CDFB76352D9CEFC3E7B790E0CAEF22105 L_33;
				L_33 = KeyValuePair_2_get_Value_m29EF30BFC916771A4C2E50A55E1E6746E64A13B1_inline((&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
				((  void (*) (Dictionary_2_t572F5C2854D3453A19F550C26C592FBCEEF1BEF8*, RuntimeObject*, JointVelocityFeatureState_tA17C290CDFB76352D9CEFC3E7B790E0CAEF22105, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(__this, L_32, L_33, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
			}

IL_00a5_1:
			{
				RuntimeObject* L_34 = V_3;
				NullCheck((RuntimeObject*)L_34);
				bool L_35;
				L_35 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_34);
				if (L_35)
				{
					goto IL_0089_1;
				}
			}
			{
				goto IL_00b9;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00b9:
	{
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Oculus.Interaction.PoseDetection.JointVelocityActiveState/JointVelocityFeatureState>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m9B106301BD1EDAF17BED4DD23C28C83165CAA2C7_gshared (Dictionary_2_t572F5C2854D3453A19F550C26C592FBCEEF1BEF8* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___info0, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___context1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___info0;
		NullCheck(L_0);
		ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7(L_0, (RuntimeObject*)__this, L_1, ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		return;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,Oculus.Interaction.PoseDetection.JointVelocityActiveState/JointVelocityFeatureState>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_m7310C151FF296DB565B1DFD65FC4E68980C8A2FD_gshared (Dictionary_2_t572F5C2854D3453A19F550C26C592FBCEEF1BEF8* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____count_2;
		int32_t L_1 = (int32_t)__this->____freeCount_4;
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,Oculus.Interaction.PoseDetection.JointVelocityActiveState/JointVelocityFeatureState>::get_Keys()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_t153627747EE0EA44EE46B91E8A6590B1467217AF* Dictionary_2_get_Keys_m84165DCCE138C179BC6BC683C29C3E2D72C13208_gshared (Dictionary_2_t572F5C2854D3453A19F550C26C592FBCEEF1BEF8* __this, const RuntimeMethod* method) 
{
	{
		KeyCollection_t153627747EE0EA44EE46B91E8A6590B1467217AF* L_0 = (KeyCollection_t153627747EE0EA44EE46B91E8A6590B1467217AF*)__this->____keys_7;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		KeyCollection_t153627747EE0EA44EE46B91E8A6590B1467217AF* L_1 = (KeyCollection_t153627747EE0EA44EE46B91E8A6590B1467217AF*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 16));
		NullCheck(L_1);
		((  void (*) (KeyCollection_t153627747EE0EA44EE46B91E8A6590B1467217AF*, Dictionary_2_t572F5C2854D3453A19F550C26C592FBCEEF1BEF8*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 17)))(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
		__this->____keys_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keys_7), (void*)L_1);
	}

IL_0014:
	{
		KeyCollection_t153627747EE0EA44EE46B91E8A6590B1467217AF* L_2 = (KeyCollection_t153627747EE0EA44EE46B91E8A6590B1467217AF*)__this->____keys_7;
		return L_2;
	}
}
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,Oculus.Interaction.PoseDetection.JointVelocityActiveState/JointVelocityFeatureState>::get_Values()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_tB0679A5B8704616B8B82BA28682959BC3295A37F* Dictionary_2_get_Values_mF310A03D1AACC0D40A50980C70D7B66F30EDC7AA_gshared (Dictionary_2_t572F5C2854D3453A19F550C26C592FBCEEF1BEF8* __this, const RuntimeMethod* method) 
{
	{
		ValueCollection_tB0679A5B8704616B8B82BA28682959BC3295A37F* L_0 = (ValueCollection_tB0679A5B8704616B8B82BA28682959BC3295A37F*)__this->____values_8;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_tB0679A5B8704616B8B82BA28682959BC3295A37F* L_1 = (ValueCollection_tB0679A5B8704616B8B82BA28682959BC3295A37F*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 18));
		NullCheck(L_1);
		((  void (*) (ValueCollection_tB0679A5B8704616B8B82BA28682959BC3295A37F*, Dictionary_2_t572F5C2854D3453A19F550C26C592FBCEEF1BEF8*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 19)))(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		__this->____values_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values_8), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_tB0679A5B8704616B8B82BA28682959BC3295A37F* L_2 = (ValueCollection_tB0679A5B8704616B8B82BA28682959BC3295A37F*)__this->____values_8;
		return L_2;
	}
}
// System.Collections.Generic.IEnumerable`1<TValue> System.Collections.Generic.Dictionary`2<System.Object,Oculus.Interaction.PoseDetection.JointVelocityActiveState/JointVelocityFeatureState>::System.Collections.Generic.IReadOnlyDictionary<TKey,TValue>.get_Values()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IReadOnlyDictionaryU3CTKeyU2CTValueU3E_get_Values_mABCBABB2ACEA9B7BDA8EE26D4BAED8BECF47416A_gshared (Dictionary_2_t572F5C2854D3453A19F550C26C592FBCEEF1BEF8* __this, const RuntimeMethod* method) 
{
	{
		ValueCollection_tB0679A5B8704616B8B82BA28682959BC3295A37F* L_0 = (ValueCollection_tB0679A5B8704616B8B82BA28682959BC3295A37F*)__this->____values_8;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_tB0679A5B8704616B8B82BA28682959BC3295A37F* L_1 = (ValueCollection_tB0679A5B8704616B8B82BA28682959BC3295A37F*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 18));
		NullCheck(L_1);
		((  void (*) (ValueCollection_tB0679A5B8704616B8B82BA28682959BC3295A37F*, Dictionary_2_t572F5C2854D3453A19F550C26C592FBCEEF1BEF8*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 19)))(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		__this->____values_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values_8), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_tB0679A5B8704616B8B82BA28682959BC3295A37F* L_2 = (ValueCollection_tB0679A5B8704616B8B82BA28682959BC3295A37F*)__this->____values_8;
		return (RuntimeObject*)L_2;
	}
}
// TValue System.Collections.Generic.Dictionary`2<System.Object,Oculus.Interaction.PoseDetection.JointVelocityActiveState/JointVelocityFeatureState>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JointVelocityFeatureState_tA17C290CDFB76352D9CEFC3E7B790E0CAEF22105 Dictionary_2_get_Item_m12460D658AD562263FCFA0FEA020AA5B4764197F_gshared (Dictionary_2_t572F5C2854D3453A19F550C26C592FBCEEF1BEF8* __this, RuntimeObject* ___key0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	JointVelocityFeatureState_tA17C290CDFB76352D9CEFC3E7B790E0CAEF22105 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		RuntimeObject* L_0 = ___key0;
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_t572F5C2854D3453A19F550C26C592FBCEEF1BEF8*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 20)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_001e;
		}
	}
	{
		EntryU5BU5D_t699B149129E0838165C5A43C9C5F0E988EE1EF9A* L_3 = (EntryU5BU5D_t699B149129E0838165C5A43C9C5F0E988EE1EF9A*)__this->____entries_1;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		JointVelocityFeatureState_tA17C290CDFB76352D9CEFC3E7B790E0CAEF22105 L_5 = (JointVelocityFeatureState_tA17C290CDFB76352D9CEFC3E7B790E0CAEF22105)((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)))->___value_3;
		return L_5;
	}

IL_001e:
	{
		RuntimeObject* L_6 = ___key0;
		ThrowHelper_ThrowKeyNotFoundException_m6A17735FA486AD43F2488DE39B755AC60BC99CE7(L_6, NULL);
		il2cpp_codegen_initobj((&V_1), sizeof(JointVelocityFeatureState_tA17C290CDFB76352D9CEFC3E7B790E0CAEF22105));
		JointVelocityFeatureState_tA17C290CDFB76352D9CEFC3E7B790E0CAEF22105 L_7 = V_1;
		return L_7;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Oculus.Interaction.PoseDetection.JointVelocityActiveState/JointVelocityFeatureState>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_mE9DC5868715C6BDB0CD80EE52E5EB19B68990FD9_gshared (Dictionary_2_t572F5C2854D3453A19F550C26C592FBCEEF1BEF8* __this, RuntimeObject* ___key0, JointVelocityFeatureState_tA17C290CDFB76352D9CEFC3E7B790E0CAEF22105 ___value1, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___key0;
		JointVelocityFeatureState_tA17C290CDFB76352D9CEFC3E7B790E0CAEF22105 L_1 = ___value1;
		bool L_2;
		L_2 = ((  bool (*) (Dictionary_2_t572F5C2854D3453A19F550C26C592FBCEEF1BEF8*, RuntimeObject*, JointVelocityFeatureState_tA17C290CDFB76352D9CEFC3E7B790E0CAEF22105, uint8_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 22)))(__this, L_0, L_1, (uint8_t)1, il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Oculus.Interaction.PoseDetection.JointVelocityActiveState/JointVelocityFeatureState>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_mD9E0A4E7BB5CF39953AA3BDBBF654B855ED057F2_gshared (Dictionary_2_t572F5C2854D3453A19F550C26C592FBCEEF1BEF8* __this, RuntimeObject* ___key0, JointVelocityFeatureState_tA17C290CDFB76352D9CEFC3E7B790E0CAEF22105 ___value1, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___key0;
		JointVelocityFeatureState_tA17C290CDFB76352D9CEFC3E7B790E0CAEF22105 L_1 = ___value1;
		bool L_2;
		L_2 = ((  bool (*) (Dictionary_2_t572F5C2854D3453A19F550C26C592FBCEEF1BEF8*, RuntimeObject*, JointVelocityFeatureState_tA17C290CDFB76352D9CEFC3E7B790E0CAEF22105, uint8_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 22)))(__this, L_0, L_1, (uint8_t)2, il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Oculus.Interaction.PoseDetection.JointVelocityActiveState/JointVelocityFeatureState>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_mA4CFC62CA44069555626A71B5D021D9CA871185F_gshared (Dictionary_2_t572F5C2854D3453A19F550C26C592FBCEEF1BEF8* __this, KeyValuePair_2_t14287996C615F8158516F8E8DB0AC54D578E8246 ___keyValuePair0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0;
		L_0 = KeyValuePair_2_get_Key_m171B988FCFBB4CE7A964046A114247C8F4C611D6_inline((&___keyValuePair0), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		JointVelocityFeatureState_tA17C290CDFB76352D9CEFC3E7B790E0CAEF22105 L_1;
		L_1 = KeyValuePair_2_get_Value_m29EF30BFC916771A4C2E50A55E1E6746E64A13B1_inline((&___keyValuePair0), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		((  void (*) (Dictionary_2_t572F5C2854D3453A19F550C26C592FBCEEF1BEF8*, RuntimeObject*, JointVelocityFeatureState_tA17C290CDFB76352D9CEFC3E7B790E0CAEF22105, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,Oculus.Interaction.PoseDetection.JointVelocityActiveState/JointVelocityFeatureState>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m43A405775FA64765710459F5D19B235D7D671022_gshared (Dictionary_2_t572F5C2854D3453A19F550C26C592FBCEEF1BEF8* __this, KeyValuePair_2_t14287996C615F8158516F8E8DB0AC54D578E8246 ___keyValuePair0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0;
		L_0 = KeyValuePair_2_get_Key_m171B988FCFBB4CE7A964046A114247C8F4C611D6_inline((&___keyValuePair0), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_t572F5C2854D3453A19F550C26C592FBCEEF1BEF8*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 20)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0038;
		}
	}
	{
		EqualityComparer_1_t5460983A71721F37C24FEF605A8607F1862FC1E1* L_3;
		L_3 = ((  EqualityComparer_1_t5460983A71721F37C24FEF605A8607F1862FC1E1* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 23)))(il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		EntryU5BU5D_t699B149129E0838165C5A43C9C5F0E988EE1EF9A* L_4 = (EntryU5BU5D_t699B149129E0838165C5A43C9C5F0E988EE1EF9A*)__this->____entries_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		JointVelocityFeatureState_tA17C290CDFB76352D9CEFC3E7B790E0CAEF22105 L_6 = (JointVelocityFeatureState_tA17C290CDFB76352D9CEFC3E7B790E0CAEF22105)((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value_3;
		JointVelocityFeatureState_tA17C290CDFB76352D9CEFC3E7B790E0CAEF22105 L_7;
		L_7 = KeyValuePair_2_get_Value_m29EF30BFC916771A4C2E50A55E1E6746E64A13B1_inline((&___keyValuePair0), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, JointVelocityFeatureState_tA17C290CDFB76352D9CEFC3E7B790E0CAEF22105, JointVelocityFeatureState_tA17C290CDFB76352D9CEFC3E7B790E0CAEF22105 >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<Oculus.Interaction.PoseDetection.JointVelocityActiveState/JointVelocityFeatureState>::Equals(T,T) */, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0038;
		}
	}
	{
		return (bool)1;
	}

IL_0038:
	{
		return (bool)0;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,Oculus.Interaction.PoseDetection.JointVelocityActiveState/JointVelocityFeatureState>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m49B21A2413E730F93CA62B4DB1CFEEECD23FB8AA_gshared (Dictionary_2_t572F5C2854D3453A19F550C26C592FBCEEF1BEF8* __this, KeyValuePair_2_t14287996C615F8158516F8E8DB0AC54D578E8246 ___keyValuePair0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0;
		L_0 = KeyValuePair_2_get_Key_m171B988FCFBB4CE7A964046A114247C8F4C611D6_inline((&___keyValuePair0), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_t572F5C2854D3453A19F550C26C592FBCEEF1BEF8*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 20)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0046;
		}
	}
	{
		EqualityComparer_1_t5460983A71721F37C24FEF605A8607F1862FC1E1* L_3;
		L_3 = ((  EqualityComparer_1_t5460983A71721F37C24FEF605A8607F1862FC1E1* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 23)))(il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		EntryU5BU5D_t699B149129E0838165C5A43C9C5F0E988EE1EF9A* L_4 = (EntryU5BU5D_t699B149129E0838165C5A43C9C5F0E988EE1EF9A*)__this->____entries_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		JointVelocityFeatureState_tA17C290CDFB76352D9CEFC3E7B790E0CAEF22105 L_6 = (JointVelocityFeatureState_tA17C290CDFB76352D9CEFC3E7B790E0CAEF22105)((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value_3;
		JointVelocityFeatureState_tA17C290CDFB76352D9CEFC3E7B790E0CAEF22105 L_7;
		L_7 = KeyValuePair_2_get_Value_m29EF30BFC916771A4C2E50A55E1E6746E64A13B1_inline((&___keyValuePair0), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, JointVelocityFeatureState_tA17C290CDFB76352D9CEFC3E7B790E0CAEF22105, JointVelocityFeatureState_tA17C290CDFB76352D9CEFC3E7B790E0CAEF22105 >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<Oculus.Interaction.PoseDetection.JointVelocityActiveState/JointVelocityFeatureState>::Equals(T,T) */, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0046;
		}
	}
	{
		RuntimeObject* L_9;
		L_9 = KeyValuePair_2_get_Key_m171B988FCFBB4CE7A964046A114247C8F4C611D6_inline((&___keyValuePair0), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		bool L_10;
		L_10 = ((  bool (*) (Dictionary_2_t572F5C2854D3453A19F550C26C592FBCEEF1BEF8*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 27)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 27));
		return (bool)1;
	}

IL_0046:
	{
		return (bool)0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Oculus.Interaction.PoseDetection.JointVelocityActiveState/JointVelocityFeatureState>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_m5B59E0E78C49161AAF3580F3BCBEE536330DA309_gshared (Dictionary_2_t572F5C2854D3453A19F550C26C592FBCEEF1BEF8* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->____count_2;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0041;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_3);
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_2, 0, ((int32_t)(((RuntimeArray*)L_3)->max_length)), NULL);
		__this->____count_2 = 0;
		__this->____freeList_3 = (-1);
		__this->____freeCount_4 = 0;
		EntryU5BU5D_t699B149129E0838165C5A43C9C5F0E988EE1EF9A* L_4 = (EntryU5BU5D_t699B149129E0838165C5A43C9C5F0E988EE1EF9A*)__this->____entries_1;
		int32_t L_5 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_4, 0, L_5, NULL);
	}

IL_0041:
	{
		int32_t L_6 = (int32_t)__this->____version_5;
		__this->____version_5 = ((int32_t)il2cpp_codegen_add(L_6, 1));
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,Oculus.Interaction.PoseDetection.JointVelocityActiveState/JointVelocityFeatureState>::ContainsKey(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_mF9A55478048BC2B10BF5839D85D205DC0AEB1D83_gshared (Dictionary_2_t572F5C2854D3453A19F550C26C592FBCEEF1BEF8* __this, RuntimeObject* ___key0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___key0;
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_t572F5C2854D3453A19F550C26C592FBCEEF1BEF8*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 20)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		return (bool)((((int32_t)((((int32_t)L_1) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,Oculus.Interaction.PoseDetection.JointVelocityActiveState/JointVelocityFeatureState>::ContainsValue(TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsValue_mADCBA210BCBF2EB742AA04B8E03CB00552579E79_gshared (Dictionary_2_t572F5C2854D3453A19F550C26C592FBCEEF1BEF8* __this, JointVelocityFeatureState_tA17C290CDFB76352D9CEFC3E7B790E0CAEF22105 ___value0, const RuntimeMethod* method) 
{
	EntryU5BU5D_t699B149129E0838165C5A43C9C5F0E988EE1EF9A* V_0 = NULL;
	int32_t V_1 = 0;
	JointVelocityFeatureState_tA17C290CDFB76352D9CEFC3E7B790E0CAEF22105 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	EqualityComparer_1_t5460983A71721F37C24FEF605A8607F1862FC1E1* V_4 = NULL;
	int32_t V_5 = 0;
	{
		EntryU5BU5D_t699B149129E0838165C5A43C9C5F0E988EE1EF9A* L_0 = (EntryU5BU5D_t699B149129E0838165C5A43C9C5F0E988EE1EF9A*)__this->____entries_1;
		V_0 = L_0;
		goto IL_0049;
	}
	{
		V_1 = 0;
		goto IL_003b;
	}

IL_0013:
	{
		EntryU5BU5D_t699B149129E0838165C5A43C9C5F0E988EE1EF9A* L_2 = V_0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = (int32_t)((L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3)))->___hashCode_0;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0037;
		}
	}
	{
		EntryU5BU5D_t699B149129E0838165C5A43C9C5F0E988EE1EF9A* L_5 = V_0;
		int32_t L_6 = V_1;
		NullCheck(L_5);
		JointVelocityFeatureState_tA17C290CDFB76352D9CEFC3E7B790E0CAEF22105 L_7 = (JointVelocityFeatureState_tA17C290CDFB76352D9CEFC3E7B790E0CAEF22105)((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->___value_3;
		goto IL_0037;
	}
	{
		return (bool)1;
	}

IL_0037:
	{
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_003b:
	{
		int32_t L_9 = V_1;
		int32_t L_10 = (int32_t)__this->____count_2;
		if ((((int32_t)L_9) < ((int32_t)L_10)))
		{
			goto IL_0013;
		}
	}
	{
		goto IL_00db;
	}

IL_0049:
	{
		il2cpp_codegen_initobj((&V_2), sizeof(JointVelocityFeatureState_tA17C290CDFB76352D9CEFC3E7B790E0CAEF22105));
	}
	{
		V_3 = 0;
		goto IL_008b;
	}

IL_005d:
	{
		EntryU5BU5D_t699B149129E0838165C5A43C9C5F0E988EE1EF9A* L_12 = V_0;
		int32_t L_13 = V_3;
		NullCheck(L_12);
		int32_t L_14 = (int32_t)((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)))->___hashCode_0;
		if ((((int32_t)L_14) < ((int32_t)0)))
		{
			goto IL_0087;
		}
	}
	{
		EqualityComparer_1_t5460983A71721F37C24FEF605A8607F1862FC1E1* L_15;
		L_15 = ((  EqualityComparer_1_t5460983A71721F37C24FEF605A8607F1862FC1E1* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 23)))(il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		EntryU5BU5D_t699B149129E0838165C5A43C9C5F0E988EE1EF9A* L_16 = V_0;
		int32_t L_17 = V_3;
		NullCheck(L_16);
		JointVelocityFeatureState_tA17C290CDFB76352D9CEFC3E7B790E0CAEF22105 L_18 = (JointVelocityFeatureState_tA17C290CDFB76352D9CEFC3E7B790E0CAEF22105)((L_16)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_17)))->___value_3;
		JointVelocityFeatureState_tA17C290CDFB76352D9CEFC3E7B790E0CAEF22105 L_19 = ___value0;
		NullCheck(L_15);
		bool L_20;
		L_20 = VirtualFuncInvoker2< bool, JointVelocityFeatureState_tA17C290CDFB76352D9CEFC3E7B790E0CAEF22105, JointVelocityFeatureState_tA17C290CDFB76352D9CEFC3E7B790E0CAEF22105 >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<Oculus.Interaction.PoseDetection.JointVelocityActiveState/JointVelocityFeatureState>::Equals(T,T) */, L_15, L_18, L_19);
		if (!L_20)
		{
			goto IL_0087;
		}
	}
	{
		return (bool)1;
	}

IL_0087:
	{
		int32_t L_21 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_008b:
	{
		int32_t L_22 = V_3;
		int32_t L_23 = (int32_t)__this->____count_2;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_005d;
		}
	}
	{
		goto IL_00db;
	}

IL_0096:
	{
		EqualityComparer_1_t5460983A71721F37C24FEF605A8607F1862FC1E1* L_24;
		L_24 = ((  EqualityComparer_1_t5460983A71721F37C24FEF605A8607F1862FC1E1* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 23)))(il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		V_4 = L_24;
		V_5 = 0;
		goto IL_00d1;
	}

IL_00a2:
	{
		EntryU5BU5D_t699B149129E0838165C5A43C9C5F0E988EE1EF9A* L_25 = V_0;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		int32_t L_27 = (int32_t)((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___hashCode_0;
		if ((((int32_t)L_27) < ((int32_t)0)))
		{
			goto IL_00cb;
		}
	}
	{
		EqualityComparer_1_t5460983A71721F37C24FEF605A8607F1862FC1E1* L_28 = V_4;
		EntryU5BU5D_t699B149129E0838165C5A43C9C5F0E988EE1EF9A* L_29 = V_0;
		int32_t L_30 = V_5;
		NullCheck(L_29);
		JointVelocityFeatureState_tA17C290CDFB76352D9CEFC3E7B790E0CAEF22105 L_31 = (JointVelocityFeatureState_tA17C290CDFB76352D9CEFC3E7B790E0CAEF22105)((L_29)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_30)))->___value_3;
		JointVelocityFeatureState_tA17C290CDFB76352D9CEFC3E7B790E0CAEF22105 L_32 = ___value0;
		NullCheck(L_28);
		bool L_33;
		L_33 = VirtualFuncInvoker2< bool, JointVelocityFeatureState_tA17C290CDFB76352D9CEFC3E7B790E0CAEF22105, JointVelocityFeatureState_tA17C290CDFB76352D9CEFC3E7B790E0CAEF22105 >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<Oculus.Interaction.PoseDetection.JointVelocityActiveState/JointVelocityFeatureState>::Equals(T,T) */, L_28, L_31, L_32);
		if (!L_33)
		{
			goto IL_00cb;
		}
	}
	{
		return (bool)1;
	}

IL_00cb:
	{
		int32_t L_34 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_00d1:
	{
		int32_t L_35 = V_5;
		int32_t L_36 = (int32_t)__this->____count_2;
		if ((((int32_t)L_35) < ((int32_t)L_36)))
		{
			goto IL_00a2;
		}
	}

IL_00db:
	{
		return (bool)0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Oculus.Interaction.PoseDetection.JointVelocityActiveState/JointVelocityFeatureState>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_m75AA73A9CBE31BC99C3999A5D58E9A2F93E361E8_gshared (Dictionary_2_t572F5C2854D3453A19F550C26C592FBCEEF1BEF8* __this, KeyValuePair_2U5BU5D_tDEA2BA7360626A115F7CF1B2A42C3102635C4D75* ___array0, int32_t ___index1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	EntryU5BU5D_t699B149129E0838165C5A43C9C5F0E988EE1EF9A* V_1 = NULL;
	int32_t V_2 = 0;
	{
		KeyValuePair_2U5BU5D_tDEA2BA7360626A115F7CF1B2A42C3102635C4D75* L_0 = ___array0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)3, NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___index1;
		KeyValuePair_2U5BU5D_tDEA2BA7360626A115F7CF1B2A42C3102635C4D75* L_2 = ___array0;
		NullCheck(L_2);
		if ((!(((uint32_t)L_1) > ((uint32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))))
		{
			goto IL_0014;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0014:
	{
		KeyValuePair_2U5BU5D_tDEA2BA7360626A115F7CF1B2A42C3102635C4D75* L_3 = ___array0;
		NullCheck(L_3);
		int32_t L_4 = ___index1;
		int32_t L_5;
		L_5 = ((  int32_t (*) (Dictionary_2_t572F5C2854D3453A19F550C26C592FBCEEF1BEF8*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 29)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_3)->max_length)), L_4))) >= ((int32_t)L_5)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)5, NULL);
	}

IL_0027:
	{
		int32_t L_6 = (int32_t)__this->____count_2;
		V_0 = L_6;
		EntryU5BU5D_t699B149129E0838165C5A43C9C5F0E988EE1EF9A* L_7 = (EntryU5BU5D_t699B149129E0838165C5A43C9C5F0E988EE1EF9A*)__this->____entries_1;
		V_1 = L_7;
		V_2 = 0;
		goto IL_0075;
	}

IL_0039:
	{
		EntryU5BU5D_t699B149129E0838165C5A43C9C5F0E988EE1EF9A* L_8 = V_1;
		int32_t L_9 = V_2;
		NullCheck(L_8);
		int32_t L_10 = (int32_t)((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9)))->___hashCode_0;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_0071;
		}
	}
	{
		KeyValuePair_2U5BU5D_tDEA2BA7360626A115F7CF1B2A42C3102635C4D75* L_11 = ___array0;
		int32_t L_12 = ___index1;
		int32_t L_13 = L_12;
		___index1 = ((int32_t)il2cpp_codegen_add(L_13, 1));
		EntryU5BU5D_t699B149129E0838165C5A43C9C5F0E988EE1EF9A* L_14 = V_1;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		RuntimeObject* L_16 = (RuntimeObject*)((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)))->___key_2;
		EntryU5BU5D_t699B149129E0838165C5A43C9C5F0E988EE1EF9A* L_17 = V_1;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		JointVelocityFeatureState_tA17C290CDFB76352D9CEFC3E7B790E0CAEF22105 L_19 = (JointVelocityFeatureState_tA17C290CDFB76352D9CEFC3E7B790E0CAEF22105)((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___value_3;
		KeyValuePair_2_t14287996C615F8158516F8E8DB0AC54D578E8246 L_20;
		memset((&L_20), 0, sizeof(L_20));
		KeyValuePair_2__ctor_mED95E75130763D3A24266DD0EF677FCA01C720D9((&L_20), L_16, L_19, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (KeyValuePair_2_t14287996C615F8158516F8E8DB0AC54D578E8246)L_20);
	}

IL_0071:
	{
		int32_t L_21 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0075:
	{
		int32_t L_22 = V_2;
		int32_t L_23 = V_0;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_0039;
		}
	}
	{
		return;
	}
}
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,Oculus.Interaction.PoseDetection.JointVelocityActiveState/JointVelocityFeatureState>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t8FD3C43B2F6FD8121F33A320EE34ADDF6FD7DF0F Dictionary_2_GetEnumerator_m7F02280490641B9089DE8D11F965DF8AFEDD01F4_gshared (Dictionary_2_t572F5C2854D3453A19F550C26C592FBCEEF1BEF8* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t8FD3C43B2F6FD8121F33A320EE34ADDF6FD7DF0F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m38A45AF0B3DB2396892BDB7D284F330AC7CC6854((&L_0), __this, 2, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,Oculus.Interaction.PoseDetection.JointVelocityActiveState/JointVelocityFeatureState>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m81EFCB1FBE6BFB04B185F3F05540BDE025AA7425_gshared (Dictionary_2_t572F5C2854D3453A19F550C26C592FBCEEF1BEF8* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t8FD3C43B2F6FD8121F33A320EE34ADDF6FD7DF0F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m38A45AF0B3DB2396892BDB7D284F330AC7CC6854((&L_0), __this, 2, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		Enumerator_t8FD3C43B2F6FD8121F33A320EE34ADDF6FD7DF0F L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 32), &L_1);
		return (RuntimeObject*)L_2;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Oculus.Interaction.PoseDetection.JointVelocityActiveState/JointVelocityFeatureState>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_GetObjectData_mAE59C0D29A089E607B4AFFBACEADD7DC656C14AF_gshared (Dictionary_2_t572F5C2854D3453A19F550C26C592FBCEEF1BEF8* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___info0, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___context1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_tDEA2BA7360626A115F7CF1B2A42C3102635C4D75* V_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	String_t* G_B4_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B4_2 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B3_2 = NULL;
	String_t* G_B6_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B6_1 = NULL;
	String_t* G_B5_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B5_1 = NULL;
	int32_t G_B7_0 = 0;
	String_t* G_B7_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B7_2 = NULL;
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___info0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)4, NULL);
	}

IL_0009:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___info0;
		int32_t L_2 = (int32_t)__this->____version_5;
		NullCheck(L_1);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(L_1, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, L_2, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = ___info0;
		RuntimeObject* L_4 = (RuntimeObject*)__this->____comparer_6;
		RuntimeObject* L_5 = L_4;
		G_B3_0 = L_5;
		G_B3_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
		G_B3_2 = L_3;
		if (L_5)
		{
			G_B4_0 = L_5;
			G_B4_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
			G_B4_2 = L_3;
			goto IL_002f;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_6;
		L_6 = ((  EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		G_B4_0 = ((RuntimeObject*)(L_6));
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
	}

IL_002f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 34)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		NullCheck(G_B4_2);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(G_B4_2, G_B4_1, (RuntimeObject*)G_B4_0, L_8, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_9 = ___info0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		G_B5_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
		G_B5_1 = L_9;
		if (!L_10)
		{
			G_B6_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
			G_B6_1 = L_9;
			goto IL_0056;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_11);
		G_B7_0 = ((int32_t)(((RuntimeArray*)L_11)->max_length));
		G_B7_1 = G_B5_0;
		G_B7_2 = G_B5_1;
		goto IL_0057;
	}

IL_0056:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
		G_B7_2 = G_B6_1;
	}

IL_0057:
	{
		NullCheck(G_B7_2);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(G_B7_2, G_B7_1, G_B7_0, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		if (!L_12)
		{
			goto IL_008e;
		}
	}
	{
		int32_t L_13;
		L_13 = ((  int32_t (*) (Dictionary_2_t572F5C2854D3453A19F550C26C592FBCEEF1BEF8*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 29)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		KeyValuePair_2U5BU5D_tDEA2BA7360626A115F7CF1B2A42C3102635C4D75* L_14 = (KeyValuePair_2U5BU5D_tDEA2BA7360626A115F7CF1B2A42C3102635C4D75*)(KeyValuePair_2U5BU5D_tDEA2BA7360626A115F7CF1B2A42C3102635C4D75*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 35), (uint32_t)L_13);
		V_0 = L_14;
		KeyValuePair_2U5BU5D_tDEA2BA7360626A115F7CF1B2A42C3102635C4D75* L_15 = V_0;
		((  void (*) (Dictionary_2_t572F5C2854D3453A19F550C26C592FBCEEF1BEF8*, KeyValuePair_2U5BU5D_tDEA2BA7360626A115F7CF1B2A42C3102635C4D75*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 36)))(__this, L_15, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 36));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_16 = ___info0;
		KeyValuePair_2U5BU5D_tDEA2BA7360626A115F7CF1B2A42C3102635C4D75* L_17 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 37)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		NullCheck(L_16);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(L_16, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, (RuntimeObject*)L_17, L_19, NULL);
	}

IL_008e:
	{
		return;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,Oculus.Interaction.PoseDetection.JointVelocityActiveState/JointVelocityFeatureState>::FindEntry(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_m384DEF783A809E4D37DF9C1B413E8FCB72C80A67_gshared (Dictionary_2_t572F5C2854D3453A19F550C26C592FBCEEF1BEF8* __this, RuntimeObject* ___key0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	EntryU5BU5D_t699B149129E0838165C5A43C9C5F0E988EE1EF9A* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	int32_t V_5 = 0;
	RuntimeObject* V_6 = NULL;
	EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* V_7 = NULL;
	int32_t V_8 = 0;
	{
		RuntimeObject* L_0 = ___key0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_000e:
	{
		V_0 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		V_1 = L_1;
		EntryU5BU5D_t699B149129E0838165C5A43C9C5F0E988EE1EF9A* L_2 = (EntryU5BU5D_t699B149129E0838165C5A43C9C5F0E988EE1EF9A*)__this->____entries_1;
		V_2 = L_2;
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = V_1;
		if (!L_3)
		{
			goto IL_0175;
		}
	}
	{
		RuntimeObject* L_4 = (RuntimeObject*)__this->____comparer_6;
		V_4 = L_4;
		RuntimeObject* L_5 = V_4;
		if (L_5)
		{
			goto IL_0110;
		}
	}
	{
		NullCheck((___key0));
		int32_t L_6;
		L_6 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, (___key0));
		V_5 = ((int32_t)(L_6&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = V_1;
		int32_t L_8 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = V_1;
		NullCheck(L_9);
		NullCheck(L_7);
		int32_t L_10 = ((int32_t)(L_8%((int32_t)(((RuntimeArray*)L_9)->max_length))));
		int32_t L_11 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_11, 1));
		il2cpp_codegen_initobj((&V_6), sizeof(RuntimeObject*));
		RuntimeObject* L_12 = V_6;
		if (!L_12)
		{
			goto IL_00b9;
		}
	}

IL_0066:
	{
		int32_t L_13 = V_0;
		EntryU5BU5D_t699B149129E0838165C5A43C9C5F0E988EE1EF9A* L_14 = V_2;
		NullCheck(L_14);
		if ((!(((uint32_t)L_13) < ((uint32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_t699B149129E0838165C5A43C9C5F0E988EE1EF9A* L_15 = V_2;
		int32_t L_16 = V_0;
		NullCheck(L_15);
		int32_t L_17 = (int32_t)((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___hashCode_0;
		int32_t L_18 = V_5;
		if ((!(((uint32_t)L_17) == ((uint32_t)L_18))))
		{
			goto IL_009b;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_19;
		L_19 = ((  EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		EntryU5BU5D_t699B149129E0838165C5A43C9C5F0E988EE1EF9A* L_20 = V_2;
		int32_t L_21 = V_0;
		NullCheck(L_20);
		RuntimeObject* L_22 = (RuntimeObject*)((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___key_2;
		RuntimeObject* L_23 = ___key0;
		NullCheck(L_19);
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Object>::Equals(T,T) */, L_19, L_22, L_23);
		if (L_24)
		{
			goto IL_0175;
		}
	}

IL_009b:
	{
		EntryU5BU5D_t699B149129E0838165C5A43C9C5F0E988EE1EF9A* L_25 = V_2;
		int32_t L_26 = V_0;
		NullCheck(L_25);
		int32_t L_27 = (int32_t)((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___next_1;
		V_0 = L_27;
		int32_t L_28 = V_3;
		EntryU5BU5D_t699B149129E0838165C5A43C9C5F0E988EE1EF9A* L_29 = V_2;
		NullCheck(L_29);
		if ((((int32_t)L_28) < ((int32_t)((int32_t)(((RuntimeArray*)L_29)->max_length)))))
		{
			goto IL_00b3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_00b3:
	{
		int32_t L_30 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_30, 1));
		goto IL_0066;
	}

IL_00b9:
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_31;
		L_31 = ((  EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		V_7 = L_31;
	}

IL_00c0:
	{
		int32_t L_32 = V_0;
		EntryU5BU5D_t699B149129E0838165C5A43C9C5F0E988EE1EF9A* L_33 = V_2;
		NullCheck(L_33);
		if ((!(((uint32_t)L_32) < ((uint32_t)((int32_t)(((RuntimeArray*)L_33)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_t699B149129E0838165C5A43C9C5F0E988EE1EF9A* L_34 = V_2;
		int32_t L_35 = V_0;
		NullCheck(L_34);
		int32_t L_36 = (int32_t)((L_34)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_35)))->___hashCode_0;
		int32_t L_37 = V_5;
		if ((!(((uint32_t)L_36) == ((uint32_t)L_37))))
		{
			goto IL_00f2;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_38 = V_7;
		EntryU5BU5D_t699B149129E0838165C5A43C9C5F0E988EE1EF9A* L_39 = V_2;
		int32_t L_40 = V_0;
		NullCheck(L_39);
		RuntimeObject* L_41 = (RuntimeObject*)((L_39)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_40)))->___key_2;
		RuntimeObject* L_42 = ___key0;
		NullCheck(L_38);
		bool L_43;
		L_43 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Object>::Equals(T,T) */, L_38, L_41, L_42);
		if (L_43)
		{
			goto IL_0175;
		}
	}

IL_00f2:
	{
		EntryU5BU5D_t699B149129E0838165C5A43C9C5F0E988EE1EF9A* L_44 = V_2;
		int32_t L_45 = V_0;
		NullCheck(L_44);
		int32_t L_46 = (int32_t)((L_44)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_45)))->___next_1;
		V_0 = L_46;
		int32_t L_47 = V_3;
		EntryU5BU5D_t699B149129E0838165C5A43C9C5F0E988EE1EF9A* L_48 = V_2;
		NullCheck(L_48);
		if ((((int32_t)L_47) < ((int32_t)((int32_t)(((RuntimeArray*)L_48)->max_length)))))
		{
			goto IL_010a;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_010a:
	{
		int32_t L_49 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_49, 1));
		goto IL_00c0;
	}

IL_0110:
	{
		RuntimeObject* L_50 = V_4;
		RuntimeObject* L_51 = ___key0;
		NullCheck(L_50);
		int32_t L_52;
		L_52 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Object>::GetHashCode(T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 41), L_50, L_51);
		V_8 = ((int32_t)(L_52&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_53 = V_1;
		int32_t L_54 = V_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_55 = V_1;
		NullCheck(L_55);
		NullCheck(L_53);
		int32_t L_56 = ((int32_t)(L_54%((int32_t)(((RuntimeArray*)L_55)->max_length))));
		int32_t L_57 = (L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_56));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_57, 1));
	}

IL_012b:
	{
		int32_t L_58 = V_0;
		EntryU5BU5D_t699B149129E0838165C5A43C9C5F0E988EE1EF9A* L_59 = V_2;
		NullCheck(L_59);
		if ((!(((uint32_t)L_58) < ((uint32_t)((int32_t)(((RuntimeArray*)L_59)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_t699B149129E0838165C5A43C9C5F0E988EE1EF9A* L_60 = V_2;
		int32_t L_61 = V_0;
		NullCheck(L_60);
		int32_t L_62 = (int32_t)((L_60)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_61)))->___hashCode_0;
		int32_t L_63 = V_8;
		if ((!(((uint32_t)L_62) == ((uint32_t)L_63))))
		{
			goto IL_0157;
		}
	}
	{
		RuntimeObject* L_64 = V_4;
		EntryU5BU5D_t699B149129E0838165C5A43C9C5F0E988EE1EF9A* L_65 = V_2;
		int32_t L_66 = V_0;
		NullCheck(L_65);
		RuntimeObject* L_67 = (RuntimeObject*)((L_65)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_66)))->___key_2;
		RuntimeObject* L_68 = ___key0;
		NullCheck(L_64);
		bool L_69;
		L_69 = InterfaceFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Object>::Equals(T,T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 41), L_64, L_67, L_68);
		if (L_69)
		{
			goto IL_0175;
		}
	}

IL_0157:
	{
		EntryU5BU5D_t699B149129E0838165C5A43C9C5F0E988EE1EF9A* L_70 = V_2;
		int32_t L_71 = V_0;
		NullCheck(L_70);
		int32_t L_72 = (int32_t)((L_70)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_71)))->___next_1;
		V_0 = L_72;
		int32_t L_73 = V_3;
		EntryU5BU5D_t699B149129E0838165C5A43C9C5F0E988EE1EF9A* L_74 = V_2;
		NullCheck(L_74);
		if ((((int32_t)L_73) < ((int32_t)((int32_t)(((RuntimeArray*)L_74)->max_length)))))
		{
			goto IL_016f;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_016f:
	{
		int32_t L_75 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_75, 1));
		goto IL_012b;
	}

IL_0175:
	{
		int32_t L_76 = V_0;
		return L_76;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,Oculus.Interaction.PoseDetection.JointVelocityActiveState/JointVelocityFeatureState>::Initialize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_m666F8BD85702FFB5F7076CDDDD2819FEF471B525_gshared (Dictionary_2_t572F5C2854D3453A19F550C26C592FBCEEF1BEF8* __this, int32_t ___capacity0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___capacity0;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_0, NULL);
		V_0 = L_1;
		__this->____freeList_3 = (-1);
		int32_t L_2 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_2);
		__this->____buckets_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets_0), (void*)L_3);
		int32_t L_4 = V_0;
		EntryU5BU5D_t699B149129E0838165C5A43C9C5F0E988EE1EF9A* L_5 = (EntryU5BU5D_t699B149129E0838165C5A43C9C5F0E988EE1EF9A*)(EntryU5BU5D_t699B149129E0838165C5A43C9C5F0E988EE1EF9A*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 44), (uint32_t)L_4);
		__this->____entries_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries_1), (void*)L_5);
		int32_t L_6 = V_0;
		return L_6;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,Oculus.Interaction.PoseDetection.JointVelocityActiveState/JointVelocityFeatureState>::TryInsert(TKey,TValue,System.Collections.Generic.InsertionBehavior)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_mA32746FEF1F34647E57F8E858C8B934955D8235A_gshared (Dictionary_2_t572F5C2854D3453A19F550C26C592FBCEEF1BEF8* __this, RuntimeObject* ___key0, JointVelocityFeatureState_tA17C290CDFB76352D9CEFC3E7B790E0CAEF22105 ___value1, uint8_t ___behavior2, const RuntimeMethod* method) 
{
	EntryU5BU5D_t699B149129E0838165C5A43C9C5F0E988EE1EF9A* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	int32_t V_8 = 0;
	int32_t* V_9 = NULL;
	Entry_t293FC4E544C4ED33E35ABE29347846DD2D5516C5* V_10 = NULL;
	RuntimeObject* V_11 = NULL;
	EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t G_B7_0 = 0;
	int32_t* G_B51_0 = NULL;
	{
		RuntimeObject* L_0 = ___key0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_000e:
	{
		int32_t L_1 = (int32_t)__this->____version_5;
		__this->____version_5 = ((int32_t)il2cpp_codegen_add(L_1, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		if (L_2)
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_3;
		L_3 = ((  int32_t (*) (Dictionary_2_t572F5C2854D3453A19F550C26C592FBCEEF1BEF8*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(__this, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
	}

IL_002c:
	{
		EntryU5BU5D_t699B149129E0838165C5A43C9C5F0E988EE1EF9A* L_4 = (EntryU5BU5D_t699B149129E0838165C5A43C9C5F0E988EE1EF9A*)__this->____entries_1;
		V_0 = L_4;
		RuntimeObject* L_5 = (RuntimeObject*)__this->____comparer_6;
		V_1 = L_5;
		RuntimeObject* L_6 = V_1;
		if (!L_6)
		{
			goto IL_0046;
		}
	}
	{
		RuntimeObject* L_7 = V_1;
		RuntimeObject* L_8 = ___key0;
		NullCheck(L_7);
		int32_t L_9;
		L_9 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Object>::GetHashCode(T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 41), L_7, L_8);
		G_B7_0 = L_9;
		goto IL_0053;
	}

IL_0046:
	{
		NullCheck((___key0));
		int32_t L_10;
		L_10 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, (___key0));
		G_B7_0 = L_10;
	}

IL_0053:
	{
		V_2 = ((int32_t)(G_B7_0&((int32_t)2147483647LL)));
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		int32_t L_12 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_13);
		NullCheck(L_11);
		V_4 = ((L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_12%((int32_t)(((RuntimeArray*)L_13)->max_length)))))));
		int32_t* L_14 = V_4;
		int32_t L_15 = *((int32_t*)L_14);
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_15, 1));
		RuntimeObject* L_16 = V_1;
		if (L_16)
		{
			goto IL_0187;
		}
	}
	{
		il2cpp_codegen_initobj((&V_11), sizeof(RuntimeObject*));
		RuntimeObject* L_17 = V_11;
		if (!L_17)
		{
			goto IL_010a;
		}
	}

IL_0091:
	{
		int32_t L_18 = V_5;
		EntryU5BU5D_t699B149129E0838165C5A43C9C5F0E988EE1EF9A* L_19 = V_0;
		NullCheck(L_19);
		if ((!(((uint32_t)L_18) < ((uint32_t)((int32_t)(((RuntimeArray*)L_19)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_t699B149129E0838165C5A43C9C5F0E988EE1EF9A* L_20 = V_0;
		int32_t L_21 = V_5;
		NullCheck(L_20);
		int32_t L_22 = (int32_t)((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___hashCode_0;
		int32_t L_23 = V_2;
		if ((!(((uint32_t)L_22) == ((uint32_t)L_23))))
		{
			goto IL_00ea;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_24;
		L_24 = ((  EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		EntryU5BU5D_t699B149129E0838165C5A43C9C5F0E988EE1EF9A* L_25 = V_0;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		RuntimeObject* L_27 = (RuntimeObject*)((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___key_2;
		RuntimeObject* L_28 = ___key0;
		NullCheck(L_24);
		bool L_29;
		L_29 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Object>::Equals(T,T) */, L_24, L_27, L_28);
		if (!L_29)
		{
			goto IL_00ea;
		}
	}
	{
		uint8_t L_30 = ___behavior2;
		if ((!(((uint32_t)L_30) == ((uint32_t)1))))
		{
			goto IL_00d9;
		}
	}
	{
		EntryU5BU5D_t699B149129E0838165C5A43C9C5F0E988EE1EF9A* L_31 = V_0;
		int32_t L_32 = V_5;
		NullCheck(L_31);
		JointVelocityFeatureState_tA17C290CDFB76352D9CEFC3E7B790E0CAEF22105 L_33 = ___value1;
		((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___value_3 = L_33;
		return (bool)1;
	}

IL_00d9:
	{
		uint8_t L_34 = ___behavior2;
		if ((!(((uint32_t)L_34) == ((uint32_t)2))))
		{
			goto IL_00e8;
		}
	}
	{
		RuntimeObject* L_35 = ___key0;
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_35, NULL);
	}

IL_00e8:
	{
		return (bool)0;
	}

IL_00ea:
	{
		EntryU5BU5D_t699B149129E0838165C5A43C9C5F0E988EE1EF9A* L_36 = V_0;
		int32_t L_37 = V_5;
		NullCheck(L_36);
		int32_t L_38 = (int32_t)((L_36)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_37)))->___next_1;
		V_5 = L_38;
		int32_t L_39 = V_3;
		EntryU5BU5D_t699B149129E0838165C5A43C9C5F0E988EE1EF9A* L_40 = V_0;
		NullCheck(L_40);
		if ((((int32_t)L_39) < ((int32_t)((int32_t)(((RuntimeArray*)L_40)->max_length)))))
		{
			goto IL_0104;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_0104:
	{
		int32_t L_41 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_41, 1));
		goto IL_0091;
	}

IL_010a:
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_42;
		L_42 = ((  EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		V_12 = L_42;
	}

IL_0111:
	{
		int32_t L_43 = V_5;
		EntryU5BU5D_t699B149129E0838165C5A43C9C5F0E988EE1EF9A* L_44 = V_0;
		NullCheck(L_44);
		if ((!(((uint32_t)L_43) < ((uint32_t)((int32_t)(((RuntimeArray*)L_44)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_t699B149129E0838165C5A43C9C5F0E988EE1EF9A* L_45 = V_0;
		int32_t L_46 = V_5;
		NullCheck(L_45);
		int32_t L_47 = (int32_t)((L_45)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_46)))->___hashCode_0;
		int32_t L_48 = V_2;
		if ((!(((uint32_t)L_47) == ((uint32_t)L_48))))
		{
			goto IL_0167;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_49 = V_12;
		EntryU5BU5D_t699B149129E0838165C5A43C9C5F0E988EE1EF9A* L_50 = V_0;
		int32_t L_51 = V_5;
		NullCheck(L_50);
		RuntimeObject* L_52 = (RuntimeObject*)((L_50)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_51)))->___key_2;
		RuntimeObject* L_53 = ___key0;
		NullCheck(L_49);
		bool L_54;
		L_54 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Object>::Equals(T,T) */, L_49, L_52, L_53);
		if (!L_54)
		{
			goto IL_0167;
		}
	}
	{
		uint8_t L_55 = ___behavior2;
		if ((!(((uint32_t)L_55) == ((uint32_t)1))))
		{
			goto IL_0156;
		}
	}
	{
		EntryU5BU5D_t699B149129E0838165C5A43C9C5F0E988EE1EF9A* L_56 = V_0;
		int32_t L_57 = V_5;
		NullCheck(L_56);
		JointVelocityFeatureState_tA17C290CDFB76352D9CEFC3E7B790E0CAEF22105 L_58 = ___value1;
		((L_56)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_57)))->___value_3 = L_58;
		return (bool)1;
	}

IL_0156:
	{
		uint8_t L_59 = ___behavior2;
		if ((!(((uint32_t)L_59) == ((uint32_t)2))))
		{
			goto IL_0165;
		}
	}
	{
		RuntimeObject* L_60 = ___key0;
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_60, NULL);
	}

IL_0165:
	{
		return (bool)0;
	}

IL_0167:
	{
		EntryU5BU5D_t699B149129E0838165C5A43C9C5F0E988EE1EF9A* L_61 = V_0;
		int32_t L_62 = V_5;
		NullCheck(L_61);
		int32_t L_63 = (int32_t)((L_61)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_62)))->___next_1;
		V_5 = L_63;
		int32_t L_64 = V_3;
		EntryU5BU5D_t699B149129E0838165C5A43C9C5F0E988EE1EF9A* L_65 = V_0;
		NullCheck(L_65);
		if ((((int32_t)L_64) < ((int32_t)((int32_t)(((RuntimeArray*)L_65)->max_length)))))
		{
			goto IL_0181;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_0181:
	{
		int32_t L_66 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_66, 1));
		goto IL_0111;
	}

IL_0187:
	{
		int32_t L_67 = V_5;
		EntryU5BU5D_t699B149129E0838165C5A43C9C5F0E988EE1EF9A* L_68 = V_0;
		NullCheck(L_68);
		if ((!(((uint32_t)L_67) < ((uint32_t)((int32_t)(((RuntimeArray*)L_68)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_t699B149129E0838165C5A43C9C5F0E988EE1EF9A* L_69 = V_0;
		int32_t L_70 = V_5;
		NullCheck(L_69);
		int32_t L_71 = (int32_t)((L_69)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_70)))->___hashCode_0;
		int32_t L_72 = V_2;
		if ((!(((uint32_t)L_71) == ((uint32_t)L_72))))
		{
			goto IL_01d9;
		}
	}
	{
		RuntimeObject* L_73 = V_1;
		EntryU5BU5D_t699B149129E0838165C5A43C9C5F0E988EE1EF9A* L_74 = V_0;
		int32_t L_75 = V_5;
		NullCheck(L_74);
		RuntimeObject* L_76 = (RuntimeObject*)((L_74)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_75)))->___key_2;
		RuntimeObject* L_77 = ___key0;
		NullCheck(L_73);
		bool L_78;
		L_78 = InterfaceFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Object>::Equals(T,T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 41), L_73, L_76, L_77);
		if (!L_78)
		{
			goto IL_01d9;
		}
	}
	{
		uint8_t L_79 = ___behavior2;
		if ((!(((uint32_t)L_79) == ((uint32_t)1))))
		{
			goto IL_01c8;
		}
	}
	{
		EntryU5BU5D_t699B149129E0838165C5A43C9C5F0E988EE1EF9A* L_80 = V_0;
		int32_t L_81 = V_5;
		NullCheck(L_80);
		JointVelocityFeatureState_tA17C290CDFB76352D9CEFC3E7B790E0CAEF22105 L_82 = ___value1;
		((L_80)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_81)))->___value_3 = L_82;
		return (bool)1;
	}

IL_01c8:
	{
		uint8_t L_83 = ___behavior2;
		if ((!(((uint32_t)L_83) == ((uint32_t)2))))
		{
			goto IL_01d7;
		}
	}
	{
		RuntimeObject* L_84 = ___key0;
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_84, NULL);
	}

IL_01d7:
	{
		return (bool)0;
	}

IL_01d9:
	{
		EntryU5BU5D_t699B149129E0838165C5A43C9C5F0E988EE1EF9A* L_85 = V_0;
		int32_t L_86 = V_5;
		NullCheck(L_85);
		int32_t L_87 = (int32_t)((L_85)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_86)))->___next_1;
		V_5 = L_87;
		int32_t L_88 = V_3;
		EntryU5BU5D_t699B149129E0838165C5A43C9C5F0E988EE1EF9A* L_89 = V_0;
		NullCheck(L_89);
		if ((((int32_t)L_88) < ((int32_t)((int32_t)(((RuntimeArray*)L_89)->max_length)))))
		{
			goto IL_01f3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_01f3:
	{
		int32_t L_90 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_90, 1));
		goto IL_0187;
	}

IL_01f9:
	{
		V_6 = (bool)0;
		V_7 = (bool)0;
		int32_t L_91 = (int32_t)__this->____freeCount_4;
		if ((((int32_t)L_91) <= ((int32_t)0)))
		{
			goto IL_0223;
		}
	}
	{
		int32_t L_92 = (int32_t)__this->____freeList_3;
		V_8 = L_92;
		V_7 = (bool)1;
		int32_t L_93 = (int32_t)__this->____freeCount_4;
		__this->____freeCount_4 = ((int32_t)il2cpp_codegen_subtract(L_93, 1));
		goto IL_0250;
	}

IL_0223:
	{
		int32_t L_94 = (int32_t)__this->____count_2;
		V_13 = L_94;
		int32_t L_95 = V_13;
		EntryU5BU5D_t699B149129E0838165C5A43C9C5F0E988EE1EF9A* L_96 = V_0;
		NullCheck(L_96);
		if ((!(((uint32_t)L_95) == ((uint32_t)((int32_t)(((RuntimeArray*)L_96)->max_length))))))
		{
			goto IL_023b;
		}
	}
	{
		((  void (*) (Dictionary_2_t572F5C2854D3453A19F550C26C592FBCEEF1BEF8*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 45)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 45));
		V_6 = (bool)1;
	}

IL_023b:
	{
		int32_t L_97 = V_13;
		V_8 = L_97;
		int32_t L_98 = V_13;
		__this->____count_2 = ((int32_t)il2cpp_codegen_add(L_98, 1));
		EntryU5BU5D_t699B149129E0838165C5A43C9C5F0E988EE1EF9A* L_99 = (EntryU5BU5D_t699B149129E0838165C5A43C9C5F0E988EE1EF9A*)__this->____entries_1;
		V_0 = L_99;
	}

IL_0250:
	{
		bool L_100 = V_6;
		if (L_100)
		{
			goto IL_0258;
		}
	}
	{
		int32_t* L_101 = V_4;
		G_B51_0 = L_101;
		goto IL_026d;
	}

IL_0258:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_102 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		int32_t L_103 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_104 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_104);
		NullCheck(L_102);
		G_B51_0 = ((L_102)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_103%((int32_t)(((RuntimeArray*)L_104)->max_length)))))));
	}

IL_026d:
	{
		V_9 = G_B51_0;
		EntryU5BU5D_t699B149129E0838165C5A43C9C5F0E988EE1EF9A* L_105 = V_0;
		int32_t L_106 = V_8;
		NullCheck(L_105);
		V_10 = ((L_105)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_106)));
		bool L_107 = V_7;
		if (!L_107)
		{
			goto IL_028a;
		}
	}
	{
		Entry_t293FC4E544C4ED33E35ABE29347846DD2D5516C5* L_108 = V_10;
		int32_t L_109 = (int32_t)L_108->___next_1;
		__this->____freeList_3 = L_109;
	}

IL_028a:
	{
		Entry_t293FC4E544C4ED33E35ABE29347846DD2D5516C5* L_110 = V_10;
		int32_t L_111 = V_2;
		L_110->___hashCode_0 = L_111;
		Entry_t293FC4E544C4ED33E35ABE29347846DD2D5516C5* L_112 = V_10;
		int32_t* L_113 = V_9;
		int32_t L_114 = *((int32_t*)L_113);
		L_112->___next_1 = ((int32_t)il2cpp_codegen_subtract(L_114, 1));
		Entry_t293FC4E544C4ED33E35ABE29347846DD2D5516C5* L_115 = V_10;
		RuntimeObject* L_116 = ___key0;
		L_115->___key_2 = L_116;
		Il2CppCodeGenWriteBarrier((void**)(&L_115->___key_2), (void*)L_116);
		Entry_t293FC4E544C4ED33E35ABE29347846DD2D5516C5* L_117 = V_10;
		JointVelocityFeatureState_tA17C290CDFB76352D9CEFC3E7B790E0CAEF22105 L_118 = ___value1;
		L_117->___value_3 = L_118;
		int32_t* L_119 = V_9;
		int32_t L_120 = V_8;
		*((int32_t*)L_119) = (int32_t)((int32_t)il2cpp_codegen_add(L_120, 1));
		return (bool)1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Oculus.Interaction.PoseDetection.JointVelocityActiveState/JointVelocityFeatureState>::OnDeserialization(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_OnDeserialization_m125629EFECF91BA6C279A792AA9B3DF55B207910_gshared (Dictionary_2_t572F5C2854D3453A19F550C26C592FBCEEF1BEF8* __this, RuntimeObject* ___sender0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	KeyValuePair_2U5BU5D_tDEA2BA7360626A115F7CF1B2A42C3102635C4D75* V_3 = NULL;
	int32_t V_4 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F(L_0, (RuntimeObject*)__this, (&V_0), ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_2 = V_0;
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_3, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, NULL);
		V_1 = L_4;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_5, _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69, NULL);
		V_2 = L_6;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_7 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 34)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		RuntimeObject* L_10;
		L_10 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_7, _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9, L_9, NULL);
		__this->____comparer_6 = ((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 41)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer_6), (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 41))));
		int32_t L_11 = V_2;
		if (!L_11)
		{
			goto IL_00c9;
		}
	}
	{
		int32_t L_12 = V_2;
		int32_t L_13;
		L_13 = ((  int32_t (*) (Dictionary_2_t572F5C2854D3453A19F550C26C592FBCEEF1BEF8*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(__this, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_14 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 37)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		NullCheck(L_14);
		RuntimeObject* L_17;
		L_17 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_14, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, L_16, NULL);
		V_3 = ((KeyValuePair_2U5BU5D_tDEA2BA7360626A115F7CF1B2A42C3102635C4D75*)Castclass((RuntimeObject*)L_17, il2cpp_rgctx_data(method->klass->rgctx_data, 46)));
		KeyValuePair_2U5BU5D_tDEA2BA7360626A115F7CF1B2A42C3102635C4D75* L_18 = V_3;
		if (L_18)
		{
			goto IL_007a;
		}
	}
	{
		ThrowHelper_ThrowSerializationException_m03BE2B48CD3617C32FBCEE16030F7C5563E04E16((int32_t)((int32_t)16), NULL);
	}

IL_007a:
	{
		V_4 = 0;
		goto IL_00c0;
	}

IL_007f:
	{
		KeyValuePair_2U5BU5D_tDEA2BA7360626A115F7CF1B2A42C3102635C4D75* L_19 = V_3;
		int32_t L_20 = V_4;
		NullCheck(L_19);
		RuntimeObject* L_21;
		L_21 = KeyValuePair_2_get_Key_m171B988FCFBB4CE7A964046A114247C8F4C611D6_inline(((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20))), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		if (L_21)
		{
			goto IL_009a;
		}
	}
	{
		ThrowHelper_ThrowSerializationException_m03BE2B48CD3617C32FBCEE16030F7C5563E04E16((int32_t)((int32_t)17), NULL);
	}

IL_009a:
	{
		KeyValuePair_2U5BU5D_tDEA2BA7360626A115F7CF1B2A42C3102635C4D75* L_22 = V_3;
		int32_t L_23 = V_4;
		NullCheck(L_22);
		RuntimeObject* L_24;
		L_24 = KeyValuePair_2_get_Key_m171B988FCFBB4CE7A964046A114247C8F4C611D6_inline(((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23))), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		KeyValuePair_2U5BU5D_tDEA2BA7360626A115F7CF1B2A42C3102635C4D75* L_25 = V_3;
		int32_t L_26 = V_4;
		NullCheck(L_25);
		JointVelocityFeatureState_tA17C290CDFB76352D9CEFC3E7B790E0CAEF22105 L_27;
		L_27 = KeyValuePair_2_get_Value_m29EF30BFC916771A4C2E50A55E1E6746E64A13B1_inline(((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26))), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		((  void (*) (Dictionary_2_t572F5C2854D3453A19F550C26C592FBCEEF1BEF8*, RuntimeObject*, JointVelocityFeatureState_tA17C290CDFB76352D9CEFC3E7B790E0CAEF22105, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(__this, L_24, L_27, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		int32_t L_28 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_00c0:
	{
		int32_t L_29 = V_4;
		KeyValuePair_2U5BU5D_tDEA2BA7360626A115F7CF1B2A42C3102635C4D75* L_30 = V_3;
		NullCheck(L_30);
		if ((((int32_t)L_29) < ((int32_t)((int32_t)(((RuntimeArray*)L_30)->max_length)))))
		{
			goto IL_007f;
		}
	}
	{
		goto IL_00d0;
	}

IL_00c9:
	{
		__this->____buckets_0 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets_0), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
	}

IL_00d0:
	{
		int32_t L_31 = V_1;
		__this->____version_5 = L_31;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_32;
		L_32 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		NullCheck(L_32);
		bool L_33;
		L_33 = ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E(L_32, (RuntimeObject*)__this, ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Oculus.Interaction.PoseDetection.JointVelocityActiveState/JointVelocityFeatureState>::Resize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m40036840D076586A4956E7D069FFB0FB44BD8243_gshared (Dictionary_2_t572F5C2854D3453A19F550C26C592FBCEEF1BEF8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = (int32_t)__this->____count_2;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_ExpandPrime_m9A35EC171AA0EA16F7C9F71EE6FAD5A82565ADB9(L_0, NULL);
		((  void (*) (Dictionary_2_t572F5C2854D3453A19F550C26C592FBCEEF1BEF8*, int32_t, bool, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 47)))(__this, L_1, (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 47));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Oculus.Interaction.PoseDetection.JointVelocityActiveState/JointVelocityFeatureState>::Resize(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m196E11ABD9EE4C864BA50E73C05DC20EF2383FC2_gshared (Dictionary_2_t572F5C2854D3453A19F550C26C592FBCEEF1BEF8* __this, int32_t ___newSize0, bool ___forceNewHashCodes1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	EntryU5BU5D_t699B149129E0838165C5A43C9C5F0E988EE1EF9A* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		int32_t L_0 = ___newSize0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = ___newSize0;
		EntryU5BU5D_t699B149129E0838165C5A43C9C5F0E988EE1EF9A* L_3 = (EntryU5BU5D_t699B149129E0838165C5A43C9C5F0E988EE1EF9A*)(EntryU5BU5D_t699B149129E0838165C5A43C9C5F0E988EE1EF9A*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 44), (uint32_t)L_2);
		V_1 = L_3;
		int32_t L_4 = (int32_t)__this->____count_2;
		V_2 = L_4;
		EntryU5BU5D_t699B149129E0838165C5A43C9C5F0E988EE1EF9A* L_5 = (EntryU5BU5D_t699B149129E0838165C5A43C9C5F0E988EE1EF9A*)__this->____entries_1;
		EntryU5BU5D_t699B149129E0838165C5A43C9C5F0E988EE1EF9A* L_6 = V_1;
		int32_t L_7 = V_2;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, 0, (RuntimeArray*)L_6, 0, L_7, NULL);
		il2cpp_codegen_initobj((&V_3), sizeof(RuntimeObject*));
		RuntimeObject* L_8 = V_3;
		bool L_9 = ___forceNewHashCodes1;
		if (!((int32_t)(((((RuntimeObject*)(RuntimeObject*)L_8) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0)&(int32_t)L_9)))
		{
			goto IL_0084;
		}
	}
	{
		V_4 = 0;
		goto IL_007f;
	}

IL_003e:
	{
		EntryU5BU5D_t699B149129E0838165C5A43C9C5F0E988EE1EF9A* L_10 = V_1;
		int32_t L_11 = V_4;
		NullCheck(L_10);
		int32_t L_12 = (int32_t)((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)))->___hashCode_0;
		if ((((int32_t)L_12) < ((int32_t)0)))
		{
			goto IL_0079;
		}
	}
	{
		EntryU5BU5D_t699B149129E0838165C5A43C9C5F0E988EE1EF9A* L_13 = V_1;
		int32_t L_14 = V_4;
		NullCheck(L_13);
		EntryU5BU5D_t699B149129E0838165C5A43C9C5F0E988EE1EF9A* L_15 = V_1;
		int32_t L_16 = V_4;
		NullCheck(L_15);
		RuntimeObject** L_17 = (RuntimeObject**)(&((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___key_2);
		NullCheck((*L_17));
		int32_t L_18;
		L_18 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, (*L_17));
		((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)))->___hashCode_0 = ((int32_t)(L_18&((int32_t)2147483647LL)));
	}

IL_0079:
	{
		int32_t L_19 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_007f:
	{
		int32_t L_20 = V_4;
		int32_t L_21 = V_2;
		if ((((int32_t)L_20) < ((int32_t)L_21)))
		{
			goto IL_003e;
		}
	}

IL_0084:
	{
		V_5 = 0;
		goto IL_00cb;
	}

IL_0089:
	{
		EntryU5BU5D_t699B149129E0838165C5A43C9C5F0E988EE1EF9A* L_22 = V_1;
		int32_t L_23 = V_5;
		NullCheck(L_22);
		int32_t L_24 = (int32_t)((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23)))->___hashCode_0;
		if ((((int32_t)L_24) < ((int32_t)0)))
		{
			goto IL_00c5;
		}
	}
	{
		EntryU5BU5D_t699B149129E0838165C5A43C9C5F0E988EE1EF9A* L_25 = V_1;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		int32_t L_27 = (int32_t)((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___hashCode_0;
		int32_t L_28 = ___newSize0;
		V_6 = ((int32_t)(L_27%L_28));
		EntryU5BU5D_t699B149129E0838165C5A43C9C5F0E988EE1EF9A* L_29 = V_1;
		int32_t L_30 = V_5;
		NullCheck(L_29);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = V_0;
		int32_t L_32 = V_6;
		NullCheck(L_31);
		int32_t L_33 = L_32;
		int32_t L_34 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		((L_29)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_30)))->___next_1 = ((int32_t)il2cpp_codegen_subtract(L_34, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_35 = V_0;
		int32_t L_36 = V_6;
		int32_t L_37 = V_5;
		NullCheck(L_35);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(L_36), (int32_t)((int32_t)il2cpp_codegen_add(L_37, 1)));
	}

IL_00c5:
	{
		int32_t L_38 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
	}

IL_00cb:
	{
		int32_t L_39 = V_5;
		int32_t L_40 = V_2;
		if ((((int32_t)L_39) < ((int32_t)L_40)))
		{
			goto IL_0089;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_41 = V_0;
		__this->____buckets_0 = L_41;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets_0), (void*)L_41);
		EntryU5BU5D_t699B149129E0838165C5A43C9C5F0E988EE1EF9A* L_42 = V_1;
		__this->____entries_1 = L_42;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries_1), (void*)L_42);
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,Oculus.Interaction.PoseDetection.JointVelocityActiveState/JointVelocityFeatureState>::Remove(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_mA5AD17CE713DE0696EDD2DF9E0E77FB7452B9F02_gshared (Dictionary_2_t572F5C2854D3453A19F550C26C592FBCEEF1BEF8* __this, RuntimeObject* ___key0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Entry_t293FC4E544C4ED33E35ABE29347846DD2D5516C5* V_4 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	RuntimeObject* G_B10_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	bool G_B11_0 = false;
	{
		RuntimeObject* L_0 = ___key0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_000e:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		if (!L_1)
		{
			goto IL_0149;
		}
	}
	{
		RuntimeObject* L_2 = (RuntimeObject*)__this->____comparer_6;
		RuntimeObject* L_3 = L_2;
		G_B4_0 = L_3;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_0032;
		}
	}
	{
		NullCheck((___key0));
		int32_t L_4;
		L_4 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, (___key0));
		G_B6_0 = L_4;
		goto IL_0038;
	}

IL_0032:
	{
		RuntimeObject* L_5 = ___key0;
		NullCheck(G_B5_0);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Object>::GetHashCode(T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 41), G_B5_0, L_5);
		G_B6_0 = L_6;
	}

IL_0038:
	{
		V_0 = ((int32_t)(G_B6_0&((int32_t)2147483647LL)));
		int32_t L_7 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_8);
		V_1 = ((int32_t)(L_7%((int32_t)(((RuntimeArray*)L_8)->max_length))));
		V_2 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		int32_t L_10 = V_1;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		int32_t L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
		goto IL_0142;
	}

IL_005c:
	{
		EntryU5BU5D_t699B149129E0838165C5A43C9C5F0E988EE1EF9A* L_13 = (EntryU5BU5D_t699B149129E0838165C5A43C9C5F0E988EE1EF9A*)__this->____entries_1;
		int32_t L_14 = V_3;
		NullCheck(L_13);
		V_4 = ((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)));
		Entry_t293FC4E544C4ED33E35ABE29347846DD2D5516C5* L_15 = V_4;
		int32_t L_16 = (int32_t)L_15->___hashCode_0;
		int32_t L_17 = V_0;
		if ((!(((uint32_t)L_16) == ((uint32_t)L_17))))
		{
			goto IL_0138;
		}
	}
	{
		RuntimeObject* L_18 = (RuntimeObject*)__this->____comparer_6;
		RuntimeObject* L_19 = L_18;
		G_B9_0 = L_19;
		if (L_19)
		{
			G_B10_0 = L_19;
			goto IL_0095;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_20;
		L_20 = ((  EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		Entry_t293FC4E544C4ED33E35ABE29347846DD2D5516C5* L_21 = V_4;
		RuntimeObject* L_22 = (RuntimeObject*)L_21->___key_2;
		RuntimeObject* L_23 = ___key0;
		NullCheck(L_20);
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Object>::Equals(T,T) */, L_20, L_22, L_23);
		G_B11_0 = L_24;
		goto IL_00a2;
	}

IL_0095:
	{
		Entry_t293FC4E544C4ED33E35ABE29347846DD2D5516C5* L_25 = V_4;
		RuntimeObject* L_26 = (RuntimeObject*)L_25->___key_2;
		RuntimeObject* L_27 = ___key0;
		NullCheck(G_B10_0);
		bool L_28;
		L_28 = InterfaceFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Object>::Equals(T,T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 41), G_B10_0, L_26, L_27);
		G_B11_0 = L_28;
	}

IL_00a2:
	{
		if (!G_B11_0)
		{
			goto IL_0138;
		}
	}
	{
		int32_t L_29 = V_2;
		if ((((int32_t)L_29) >= ((int32_t)0)))
		{
			goto IL_00be;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_30 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		int32_t L_31 = V_1;
		Entry_t293FC4E544C4ED33E35ABE29347846DD2D5516C5* L_32 = V_4;
		int32_t L_33 = (int32_t)L_32->___next_1;
		NullCheck(L_30);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_31), (int32_t)((int32_t)il2cpp_codegen_add(L_33, 1)));
		goto IL_00d6;
	}

IL_00be:
	{
		EntryU5BU5D_t699B149129E0838165C5A43C9C5F0E988EE1EF9A* L_34 = (EntryU5BU5D_t699B149129E0838165C5A43C9C5F0E988EE1EF9A*)__this->____entries_1;
		int32_t L_35 = V_2;
		NullCheck(L_34);
		Entry_t293FC4E544C4ED33E35ABE29347846DD2D5516C5* L_36 = V_4;
		int32_t L_37 = (int32_t)L_36->___next_1;
		((L_34)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_35)))->___next_1 = L_37;
	}

IL_00d6:
	{
		Entry_t293FC4E544C4ED33E35ABE29347846DD2D5516C5* L_38 = V_4;
		L_38->___hashCode_0 = (-1);
		Entry_t293FC4E544C4ED33E35ABE29347846DD2D5516C5* L_39 = V_4;
		int32_t L_40 = (int32_t)__this->____freeList_3;
		L_39->___next_1 = L_40;
		if (!true)
		{
			goto IL_00ff;
		}
	}
	{
		Entry_t293FC4E544C4ED33E35ABE29347846DD2D5516C5* L_41 = V_4;
		RuntimeObject** L_42 = (RuntimeObject**)(&L_41->___key_2);
		il2cpp_codegen_initobj(L_42, sizeof(RuntimeObject*));
	}

IL_00ff:
	{
		if (!false)
		{
			goto IL_0113;
		}
	}
	{
		Entry_t293FC4E544C4ED33E35ABE29347846DD2D5516C5* L_43 = V_4;
		JointVelocityFeatureState_tA17C290CDFB76352D9CEFC3E7B790E0CAEF22105* L_44 = (JointVelocityFeatureState_tA17C290CDFB76352D9CEFC3E7B790E0CAEF22105*)(&L_43->___value_3);
		il2cpp_codegen_initobj(L_44, sizeof(JointVelocityFeatureState_tA17C290CDFB76352D9CEFC3E7B790E0CAEF22105));
	}

IL_0113:
	{
		int32_t L_45 = V_3;
		__this->____freeList_3 = L_45;
		int32_t L_46 = (int32_t)__this->____freeCount_4;
		__this->____freeCount_4 = ((int32_t)il2cpp_codegen_add(L_46, 1));
		int32_t L_47 = (int32_t)__this->____version_5;
		__this->____version_5 = ((int32_t)il2cpp_codegen_add(L_47, 1));
		return (bool)1;
	}

IL_0138:
	{
		int32_t L_48 = V_3;
		V_2 = L_48;
		Entry_t293FC4E544C4ED33E35ABE29347846DD2D5516C5* L_49 = V_4;
		int32_t L_50 = (int32_t)L_49->___next_1;
		V_3 = L_50;
	}

IL_0142:
	{
		int32_t L_51 = V_3;
		if ((((int32_t)L_51) >= ((int32_t)0)))
		{
			goto IL_005c;
		}
	}

IL_0149:
	{
		return (bool)0;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,Oculus.Interaction.PoseDetection.JointVelocityActiveState/JointVelocityFeatureState>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_mA33C4C31D6C6D133A970A3A897B61C3D116734A4_gshared (Dictionary_2_t572F5C2854D3453A19F550C26C592FBCEEF1BEF8* __this, RuntimeObject* ___key0, JointVelocityFeatureState_tA17C290CDFB76352D9CEFC3E7B790E0CAEF22105* ___value1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = ___key0;
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_t572F5C2854D3453A19F550C26C592FBCEEF1BEF8*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 20)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0025;
		}
	}
	{
		JointVelocityFeatureState_tA17C290CDFB76352D9CEFC3E7B790E0CAEF22105* L_3 = ___value1;
		EntryU5BU5D_t699B149129E0838165C5A43C9C5F0E988EE1EF9A* L_4 = (EntryU5BU5D_t699B149129E0838165C5A43C9C5F0E988EE1EF9A*)__this->____entries_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		JointVelocityFeatureState_tA17C290CDFB76352D9CEFC3E7B790E0CAEF22105 L_6 = (JointVelocityFeatureState_tA17C290CDFB76352D9CEFC3E7B790E0CAEF22105)((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value_3;
		*(JointVelocityFeatureState_tA17C290CDFB76352D9CEFC3E7B790E0CAEF22105*)L_3 = L_6;
		return (bool)1;
	}

IL_0025:
	{
		JointVelocityFeatureState_tA17C290CDFB76352D9CEFC3E7B790E0CAEF22105* L_7 = ___value1;
		il2cpp_codegen_initobj(L_7, sizeof(JointVelocityFeatureState_tA17C290CDFB76352D9CEFC3E7B790E0CAEF22105));
		return (bool)0;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,Oculus.Interaction.PoseDetection.JointVelocityActiveState/JointVelocityFeatureState>::TryAdd(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryAdd_m3EEF38171E602C0DF49B2887A52F248E60F53777_gshared (Dictionary_2_t572F5C2854D3453A19F550C26C592FBCEEF1BEF8* __this, RuntimeObject* ___key0, JointVelocityFeatureState_tA17C290CDFB76352D9CEFC3E7B790E0CAEF22105 ___value1, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___key0;
		JointVelocityFeatureState_tA17C290CDFB76352D9CEFC3E7B790E0CAEF22105 L_1 = ___value1;
		bool L_2;
		L_2 = ((  bool (*) (Dictionary_2_t572F5C2854D3453A19F550C26C592FBCEEF1BEF8*, RuntimeObject*, JointVelocityFeatureState_tA17C290CDFB76352D9CEFC3E7B790E0CAEF22105, uint8_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 22)))(__this, L_0, L_1, (uint8_t)0, il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		return L_2;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,Oculus.Interaction.PoseDetection.JointVelocityActiveState/JointVelocityFeatureState>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m1B250B5067685BAE190E43C65781E39198907D65_gshared (Dictionary_2_t572F5C2854D3453A19F550C26C592FBCEEF1BEF8* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Oculus.Interaction.PoseDetection.JointVelocityActiveState/JointVelocityFeatureState>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m44033EE6405231765B5D6ECEEBF897325CCFC924_gshared (Dictionary_2_t572F5C2854D3453A19F550C26C592FBCEEF1BEF8* __this, KeyValuePair_2U5BU5D_tDEA2BA7360626A115F7CF1B2A42C3102635C4D75* ___array0, int32_t ___index1, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2U5BU5D_tDEA2BA7360626A115F7CF1B2A42C3102635C4D75* L_0 = ___array0;
		int32_t L_1 = ___index1;
		((  void (*) (Dictionary_2_t572F5C2854D3453A19F550C26C592FBCEEF1BEF8*, KeyValuePair_2U5BU5D_tDEA2BA7360626A115F7CF1B2A42C3102635C4D75*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 36)))(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 36));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Oculus.Interaction.PoseDetection.JointVelocityActiveState/JointVelocityFeatureState>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_ICollection_CopyTo_mF9EF3DBB7078DD3F79714E90644A402E04521438_gshared (Dictionary_2_t572F5C2854D3453A19F550C26C592FBCEEF1BEF8* __this, RuntimeArray* ___array0, int32_t ___index1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_tDEA2BA7360626A115F7CF1B2A42C3102635C4D75* V_0 = NULL;
	DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* V_1 = NULL;
	EntryU5BU5D_t699B149129E0838165C5A43C9C5F0E988EE1EF9A* V_2 = NULL;
	int32_t V_3 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_4 = NULL;
	int32_t V_5 = 0;
	EntryU5BU5D_t699B149129E0838165C5A43C9C5F0E988EE1EF9A* V_6 = NULL;
	int32_t V_7 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___array0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___array0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(L_1, NULL);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___array0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___index1;
		RuntimeArray* L_6 = ___array0;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_6, NULL);
		if ((!(((uint32_t)L_5) > ((uint32_t)L_7))))
		{
			goto IL_0035;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0035:
	{
		RuntimeArray* L_8 = ___array0;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_8, NULL);
		int32_t L_10 = ___index1;
		int32_t L_11;
		L_11 = ((  int32_t (*) (Dictionary_2_t572F5C2854D3453A19F550C26C592FBCEEF1BEF8*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 29)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_9, L_10))) >= ((int32_t)L_11)))
		{
			goto IL_004b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)5, NULL);
	}

IL_004b:
	{
		RuntimeArray* L_12 = ___array0;
		V_0 = ((KeyValuePair_2U5BU5D_tDEA2BA7360626A115F7CF1B2A42C3102635C4D75*)IsInst((RuntimeObject*)L_12, il2cpp_rgctx_data(method->klass->rgctx_data, 46)));
		KeyValuePair_2U5BU5D_tDEA2BA7360626A115F7CF1B2A42C3102635C4D75* L_13 = V_0;
		if (!L_13)
		{
			goto IL_005e;
		}
	}
	{
		KeyValuePair_2U5BU5D_tDEA2BA7360626A115F7CF1B2A42C3102635C4D75* L_14 = V_0;
		int32_t L_15 = ___index1;
		((  void (*) (Dictionary_2_t572F5C2854D3453A19F550C26C592FBCEEF1BEF8*, KeyValuePair_2U5BU5D_tDEA2BA7360626A115F7CF1B2A42C3102635C4D75*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 36)))(__this, L_14, L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 36));
		return;
	}

IL_005e:
	{
		RuntimeArray* L_16 = ___array0;
		V_1 = ((DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533*)IsInst((RuntimeObject*)L_16, DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var));
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_17 = V_1;
		if (!L_17)
		{
			goto IL_00c3;
		}
	}
	{
		EntryU5BU5D_t699B149129E0838165C5A43C9C5F0E988EE1EF9A* L_18 = (EntryU5BU5D_t699B149129E0838165C5A43C9C5F0E988EE1EF9A*)__this->____entries_1;
		V_2 = L_18;
		V_3 = 0;
		goto IL_00b9;
	}

IL_0073:
	{
		EntryU5BU5D_t699B149129E0838165C5A43C9C5F0E988EE1EF9A* L_19 = V_2;
		int32_t L_20 = V_3;
		NullCheck(L_19);
		int32_t L_21 = (int32_t)((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20)))->___hashCode_0;
		if ((((int32_t)L_21) < ((int32_t)0)))
		{
			goto IL_00b5;
		}
	}
	{
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_22 = V_1;
		int32_t L_23 = ___index1;
		int32_t L_24 = L_23;
		___index1 = ((int32_t)il2cpp_codegen_add(L_24, 1));
		EntryU5BU5D_t699B149129E0838165C5A43C9C5F0E988EE1EF9A* L_25 = V_2;
		int32_t L_26 = V_3;
		NullCheck(L_25);
		RuntimeObject* L_27 = (RuntimeObject*)((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___key_2;
		EntryU5BU5D_t699B149129E0838165C5A43C9C5F0E988EE1EF9A* L_28 = V_2;
		int32_t L_29 = V_3;
		NullCheck(L_28);
		JointVelocityFeatureState_tA17C290CDFB76352D9CEFC3E7B790E0CAEF22105 L_30 = (JointVelocityFeatureState_tA17C290CDFB76352D9CEFC3E7B790E0CAEF22105)((L_28)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_29)))->___value_3;
		JointVelocityFeatureState_tA17C290CDFB76352D9CEFC3E7B790E0CAEF22105 L_31 = L_30;
		RuntimeObject* L_32 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 28), &L_31);
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_33;
		memset((&L_33), 0, sizeof(L_33));
		DictionaryEntry__ctor_m2768353E53A75C4860E34B37DAF1342120C5D1EA((&L_33), L_27, L_32, /*hidden argument*/NULL);
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(L_24), (DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB)L_33);
	}

IL_00b5:
	{
		int32_t L_34 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_00b9:
	{
		int32_t L_35 = V_3;
		int32_t L_36 = (int32_t)__this->____count_2;
		if ((((int32_t)L_35) < ((int32_t)L_36)))
		{
			goto IL_0073;
		}
	}
	{
		return;
	}

IL_00c3:
	{
		RuntimeArray* L_37 = ___array0;
		V_4 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_37, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_38 = V_4;
		if (L_38)
		{
			goto IL_00d4;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_00d4:
	{
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_39 = (int32_t)__this->____count_2;
			V_5 = L_39;
			EntryU5BU5D_t699B149129E0838165C5A43C9C5F0E988EE1EF9A* L_40 = (EntryU5BU5D_t699B149129E0838165C5A43C9C5F0E988EE1EF9A*)__this->____entries_1;
			V_6 = L_40;
			V_7 = 0;
			goto IL_0130_1;
		}

IL_00ea_1:
		{
			EntryU5BU5D_t699B149129E0838165C5A43C9C5F0E988EE1EF9A* L_41 = V_6;
			int32_t L_42 = V_7;
			NullCheck(L_41);
			int32_t L_43 = (int32_t)((L_41)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_42)))->___hashCode_0;
			if ((((int32_t)L_43) < ((int32_t)0)))
			{
				goto IL_012a_1;
			}
		}
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_44 = V_4;
			int32_t L_45 = ___index1;
			int32_t L_46 = L_45;
			___index1 = ((int32_t)il2cpp_codegen_add(L_46, 1));
			EntryU5BU5D_t699B149129E0838165C5A43C9C5F0E988EE1EF9A* L_47 = V_6;
			int32_t L_48 = V_7;
			NullCheck(L_47);
			RuntimeObject* L_49 = (RuntimeObject*)((L_47)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_48)))->___key_2;
			EntryU5BU5D_t699B149129E0838165C5A43C9C5F0E988EE1EF9A* L_50 = V_6;
			int32_t L_51 = V_7;
			NullCheck(L_50);
			JointVelocityFeatureState_tA17C290CDFB76352D9CEFC3E7B790E0CAEF22105 L_52 = (JointVelocityFeatureState_tA17C290CDFB76352D9CEFC3E7B790E0CAEF22105)((L_50)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_51)))->___value_3;
			KeyValuePair_2_t14287996C615F8158516F8E8DB0AC54D578E8246 L_53;
			memset((&L_53), 0, sizeof(L_53));
			KeyValuePair_2__ctor_mED95E75130763D3A24266DD0EF677FCA01C720D9((&L_53), L_49, L_52, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 31));
			KeyValuePair_2_t14287996C615F8158516F8E8DB0AC54D578E8246 L_54 = L_53;
			RuntimeObject* L_55 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 30), &L_54);
			NullCheck(L_44);
			ArrayElementTypeCheck (L_44, L_55);
			(L_44)->SetAt(static_cast<il2cpp_array_size_t>(L_46), (RuntimeObject*)L_55);
		}

IL_012a_1:
		{
			int32_t L_56 = V_7;
			V_7 = ((int32_t)il2cpp_codegen_add(L_56, 1));
		}

IL_0130_1:
		{
			int32_t L_57 = V_7;
			int32_t L_58 = V_5;
			if ((((int32_t)L_57) < ((int32_t)L_58)))
			{
				goto IL_00ea_1;
			}
		}
		{
			goto IL_0140;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0138;
		}
		throw e;
	}

CATCH_0138:
	{// begin catch(System.ArrayTypeMismatchException)
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0140;
	}// end catch (depth: 1)

IL_0140:
	{
		return;
	}
}
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,Oculus.Interaction.PoseDetection.JointVelocityActiveState/JointVelocityFeatureState>::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IEnumerable_GetEnumerator_mE85D09FE6540F7DC130E5700B7F7232BFF106F0B_gshared (Dictionary_2_t572F5C2854D3453A19F550C26C592FBCEEF1BEF8* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t8FD3C43B2F6FD8121F33A320EE34ADDF6FD7DF0F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m38A45AF0B3DB2396892BDB7D284F330AC7CC6854((&L_0), __this, 2, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		Enumerator_t8FD3C43B2F6FD8121F33A320EE34ADDF6FD7DF0F L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 32), &L_1);
		return (RuntimeObject*)L_2;
	}
}
// System.Object System.Collections.Generic.Dictionary`2<System.Object,Oculus.Interaction.PoseDetection.JointVelocityActiveState/JointVelocityFeatureState>::System.Collections.ICollection.get_SyncRoot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_ICollection_get_SyncRoot_mDDCCA03CA8FE5D88950FEDEE171DCFBB4AF86209_gshared (Dictionary_2_t572F5C2854D3453A19F550C26C592FBCEEF1BEF8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____syncRoot_9;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot_9);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = (RuntimeObject*)__this->____syncRoot_9;
		return L_4;
	}
}
// System.Object System.Collections.Generic.Dictionary`2<System.Object,Oculus.Interaction.PoseDetection.JointVelocityActiveState/JointVelocityFeatureState>::System.Collections.IDictionary.get_Item(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_get_Item_m21FDE5FE373FACE24D52B4E3C64AD1C4A3659BEE_gshared (Dictionary_2_t572F5C2854D3453A19F550C26C592FBCEEF1BEF8* __this, RuntimeObject* ___key0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = ___key0;
		bool L_1;
		L_1 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 48)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 48));
		if (!L_1)
		{
			goto IL_0030;
		}
	}
	{
		RuntimeObject* L_2 = ___key0;
		int32_t L_3;
		L_3 = ((  int32_t (*) (Dictionary_2_t572F5C2854D3453A19F550C26C592FBCEEF1BEF8*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 20)))(__this, ((RuntimeObject*)Castclass((RuntimeObject*)L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 21))), il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		V_0 = L_3;
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		EntryU5BU5D_t699B149129E0838165C5A43C9C5F0E988EE1EF9A* L_5 = (EntryU5BU5D_t699B149129E0838165C5A43C9C5F0E988EE1EF9A*)__this->____entries_1;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		JointVelocityFeatureState_tA17C290CDFB76352D9CEFC3E7B790E0CAEF22105 L_7 = (JointVelocityFeatureState_tA17C290CDFB76352D9CEFC3E7B790E0CAEF22105)((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->___value_3;
		JointVelocityFeatureState_tA17C290CDFB76352D9CEFC3E7B790E0CAEF22105 L_8 = L_7;
		RuntimeObject* L_9 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 28), &L_8);
		return L_9;
	}

IL_0030:
	{
		return NULL;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Oculus.Interaction.PoseDetection.JointVelocityActiveState/JointVelocityFeatureState>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_IDictionary_set_Item_m4478EEC7C8B10C52025E78A100C13C57E9256E16_gshared (Dictionary_2_t572F5C2854D3453A19F550C26C592FBCEEF1BEF8* __this, RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		RuntimeObject* L_0 = ___key0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___value1;
		((  void (*) (RuntimeObject*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 50)))(L_1, (int32_t)((int32_t)15), il2cpp_rgctx_method(method->klass->rgctx_data, 50));
	}
	try
	{// begin try (depth: 1)
		{
			RuntimeObject* L_2 = ___key0;
			V_0 = ((RuntimeObject*)Castclass((RuntimeObject*)L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 21)));
		}
		try
		{// begin try (depth: 2)
			RuntimeObject* L_3 = V_0;
			RuntimeObject* L_4 = ___value1;
			((  void (*) (Dictionary_2_t572F5C2854D3453A19F550C26C592FBCEEF1BEF8*, RuntimeObject*, JointVelocityFeatureState_tA17C290CDFB76352D9CEFC3E7B790E0CAEF22105, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 51)))(__this, L_3, ((*(JointVelocityFeatureState_tA17C290CDFB76352D9CEFC3E7B790E0CAEF22105*)((JointVelocityFeatureState_tA17C290CDFB76352D9CEFC3E7B790E0CAEF22105*)(JointVelocityFeatureState_tA17C290CDFB76352D9CEFC3E7B790E0CAEF22105*)UnBox(L_4, il2cpp_rgctx_data(method->klass->rgctx_data, 28))))), il2cpp_rgctx_method(method->klass->rgctx_data, 51));
			goto IL_003a_1;
		}// end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0027_1;
			}
			throw e;
		}

CATCH_0027_1:
		{// begin catch(System.InvalidCastException)
			RuntimeObject* L_5 = ___value1;
			RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 52)) };
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
			Type_t* L_7;
			L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
			ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_5, L_7, NULL);
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_003a_1;
		}// end catch (depth: 2)

IL_003a_1:
		{
			goto IL_004f;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003c;
		}
		throw e;
	}

CATCH_003c:
	{// begin catch(System.InvalidCastException)
		RuntimeObject* L_8 = ___key0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 53)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		ThrowHelper_ThrowWrongKeyTypeArgumentException_m90E5BCE2CB10EEC16F254C237121C6816C4D6982(L_8, L_10, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_004f;
	}// end catch (depth: 1)

IL_004f:
	{
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,Oculus.Interaction.PoseDetection.JointVelocityActiveState/JointVelocityFeatureState>::IsCompatibleKey(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_IsCompatibleKey_m336B68D950A544782479C896B53B5D769B2DA9A0_gshared (RuntimeObject* ___key0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___key0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___key0;
		return (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_1, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 21)))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,Oculus.Interaction.PoseDetection.JointVelocityActiveState/JointVelocityFeatureState>::System.Collections.IDictionary.Contains(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_IDictionary_Contains_m80F79FFA48D27CC9386A893FAE5D660F66E1FE7A_gshared (Dictionary_2_t572F5C2854D3453A19F550C26C592FBCEEF1BEF8* __this, RuntimeObject* ___key0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___key0;
		bool L_1;
		L_1 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 48)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 48));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___key0;
		bool L_3;
		L_3 = ((  bool (*) (Dictionary_2_t572F5C2854D3453A19F550C26C592FBCEEF1BEF8*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 54)))(__this, ((RuntimeObject*)Castclass((RuntimeObject*)L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 21))), il2cpp_rgctx_method(method->klass->rgctx_data, 54));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,Oculus.Interaction.PoseDetection.JointVelocityActiveState/JointVelocityFeatureState>::System.Collections.IDictionary.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_GetEnumerator_mD269C9DB36A10C9D88B13AA6CF6FBFDB8DF87E88_gshared (Dictionary_2_t572F5C2854D3453A19F550C26C592FBCEEF1BEF8* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t8FD3C43B2F6FD8121F33A320EE34ADDF6FD7DF0F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m38A45AF0B3DB2396892BDB7D284F330AC7CC6854((&L_0), __this, 1, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		Enumerator_t8FD3C43B2F6FD8121F33A320EE34ADDF6FD7DF0F L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 32), &L_1);
		return (RuntimeObject*)L_2;
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
// System.Void System.Collections.Generic.Dictionary`2<System.Object,OVRPassthroughLayer/PassthroughMeshInstance>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mF7450564200CFB317ECFF11432C472F3144DD7CC_gshared (Dictionary_2_tEF99863F098CBEDBDF416E45D42452A1BD2A32BC* __this, const RuntimeMethod* method) 
{
	{
		((  void (*) (Dictionary_2_tEF99863F098CBEDBDF416E45D42452A1BD2A32BC*, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, 0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,OVRPassthroughLayer/PassthroughMeshInstance>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m3739CF8098BFFD76C0C141D07DA2A2DD724FC05F_gshared (Dictionary_2_tEF99863F098CBEDBDF416E45D42452A1BD2A32BC* __this, int32_t ___capacity0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___capacity0;
		((  void (*) (Dictionary_2_tEF99863F098CBEDBDF416E45D42452A1BD2A32BC*, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,OVRPassthroughLayer/PassthroughMeshInstance>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mC7733F9BACCED5C025A82E699682E695819483FE_gshared (Dictionary_2_tEF99863F098CBEDBDF416E45D42452A1BD2A32BC* __this, RuntimeObject* ___comparer0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___comparer0;
		((  void (*) (Dictionary_2_tEF99863F098CBEDBDF416E45D42452A1BD2A32BC*, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, 0, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,OVRPassthroughLayer/PassthroughMeshInstance>::.ctor(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5E09A358461EA293637C5079BC82237CB5F0828C_gshared (Dictionary_2_tEF99863F098CBEDBDF416E45D42452A1BD2A32BC* __this, int32_t ___capacity0, RuntimeObject* ___comparer1, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___capacity0;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0011;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97((int32_t)((int32_t)12), NULL);
	}

IL_0011:
	{
		int32_t L_1 = ___capacity0;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_2 = ___capacity0;
		int32_t L_3;
		L_3 = ((  int32_t (*) (Dictionary_2_tEF99863F098CBEDBDF416E45D42452A1BD2A32BC*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(__this, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
	}

IL_001d:
	{
		RuntimeObject* L_4 = ___comparer1;
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_5;
		L_5 = ((  EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if ((((RuntimeObject*)(RuntimeObject*)L_4) == ((RuntimeObject*)(EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2*)L_5)))
		{
			goto IL_002c;
		}
	}
	{
		RuntimeObject* L_6 = ___comparer1;
		__this->____comparer_6 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer_6), (void*)L_6);
	}

IL_002c:
	{
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,OVRPassthroughLayer/PassthroughMeshInstance>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mB4AEA426A4F417B8C1AF7C473422F8E20FF547FF_gshared (Dictionary_2_tEF99863F098CBEDBDF416E45D42452A1BD2A32BC* __this, RuntimeObject* ___dictionary0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___dictionary0;
		((  void (*) (Dictionary_2_tEF99863F098CBEDBDF416E45D42452A1BD2A32BC*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)))(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,OVRPassthroughLayer/PassthroughMeshInstance>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mCA5BFE59105107FD166970F27224CFB33D8467E4_gshared (Dictionary_2_tEF99863F098CBEDBDF416E45D42452A1BD2A32BC* __this, RuntimeObject* ___dictionary0, RuntimeObject* ___comparer1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	EntryU5BU5D_t96093E698ECF890AFC3EBA8FD35D922C55DEA886* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	KeyValuePair_2_tC7EE4E7E2715DB2FD352264EB3FAF4B38BBF15DF V_4;
	memset((&V_4), 0, sizeof(V_4));
	Dictionary_2_tEF99863F098CBEDBDF416E45D42452A1BD2A32BC* G_B2_0 = NULL;
	Dictionary_2_tEF99863F098CBEDBDF416E45D42452A1BD2A32BC* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	Dictionary_2_tEF99863F098CBEDBDF416E45D42452A1BD2A32BC* G_B3_1 = NULL;
	{
		RuntimeObject* L_0 = ___dictionary0;
		G_B1_0 = __this;
		if (L_0)
		{
			G_B2_0 = __this;
			goto IL_0007;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_000d;
	}

IL_0007:
	{
		RuntimeObject* L_1 = ___dictionary0;
		NullCheck((RuntimeObject*)L_1);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,OVRPassthroughLayer/PassthroughMeshInstance>>::get_Count() */, il2cpp_rgctx_data(method->klass->rgctx_data, 5), (RuntimeObject*)L_1);
		G_B3_0 = L_2;
		G_B3_1 = G_B2_0;
	}

IL_000d:
	{
		RuntimeObject* L_3 = ___comparer1;
		((  void (*) (Dictionary_2_tEF99863F098CBEDBDF416E45D42452A1BD2A32BC*, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(G_B3_1, G_B3_0, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		RuntimeObject* L_4 = ___dictionary0;
		if (L_4)
		{
			goto IL_001c;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)1, NULL);
	}

IL_001c:
	{
		RuntimeObject* L_5 = ___dictionary0;
		NullCheck((RuntimeObject*)L_5);
		Type_t* L_6;
		L_6 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)L_5, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 7)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		bool L_9;
		L_9 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_6, L_8, NULL);
		if (!L_9)
		{
			goto IL_0080;
		}
	}
	{
		RuntimeObject* L_10 = ___dictionary0;
		Dictionary_2_tEF99863F098CBEDBDF416E45D42452A1BD2A32BC* L_11 = ((Dictionary_2_tEF99863F098CBEDBDF416E45D42452A1BD2A32BC*)CastclassClass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 8)));
		NullCheck(L_11);
		int32_t L_12 = (int32_t)L_11->____count_2;
		V_0 = L_12;
		NullCheck(L_11);
		EntryU5BU5D_t96093E698ECF890AFC3EBA8FD35D922C55DEA886* L_13 = (EntryU5BU5D_t96093E698ECF890AFC3EBA8FD35D922C55DEA886*)L_11->____entries_1;
		V_1 = L_13;
		V_2 = 0;
		goto IL_007b;
	}

IL_004a:
	{
		EntryU5BU5D_t96093E698ECF890AFC3EBA8FD35D922C55DEA886* L_14 = V_1;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		int32_t L_16 = (int32_t)((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)))->___hashCode_0;
		if ((((int32_t)L_16) < ((int32_t)0)))
		{
			goto IL_0077;
		}
	}
	{
		EntryU5BU5D_t96093E698ECF890AFC3EBA8FD35D922C55DEA886* L_17 = V_1;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		RuntimeObject* L_19 = (RuntimeObject*)((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___key_2;
		EntryU5BU5D_t96093E698ECF890AFC3EBA8FD35D922C55DEA886* L_20 = V_1;
		int32_t L_21 = V_2;
		NullCheck(L_20);
		PassthroughMeshInstance_tC15BBC616D213426B55C4E59C74175581D2EFFDE L_22 = (PassthroughMeshInstance_tC15BBC616D213426B55C4E59C74175581D2EFFDE)((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___value_3;
		((  void (*) (Dictionary_2_tEF99863F098CBEDBDF416E45D42452A1BD2A32BC*, RuntimeObject*, PassthroughMeshInstance_tC15BBC616D213426B55C4E59C74175581D2EFFDE, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(__this, L_19, L_22, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
	}

IL_0077:
	{
		int32_t L_23 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_007b:
	{
		int32_t L_24 = V_2;
		int32_t L_25 = V_0;
		if ((((int32_t)L_24) < ((int32_t)L_25)))
		{
			goto IL_004a;
		}
	}
	{
		return;
	}

IL_0080:
	{
		RuntimeObject* L_26 = ___dictionary0;
		NullCheck((RuntimeObject*)L_26);
		RuntimeObject* L_27;
		L_27 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,OVRPassthroughLayer/PassthroughMeshInstance>>::GetEnumerator() */, il2cpp_rgctx_data(method->klass->rgctx_data, 10), (RuntimeObject*)L_26);
		V_3 = L_27;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00af:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_28 = V_3;
					if (!L_28)
					{
						goto IL_00b8;
					}
				}
				{
					RuntimeObject* L_29 = V_3;
					NullCheck((RuntimeObject*)L_29);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_29);
				}

IL_00b8:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_00a5_1;
			}

IL_0089_1:
			{
				RuntimeObject* L_30 = V_3;
				NullCheck(L_30);
				KeyValuePair_2_tC7EE4E7E2715DB2FD352264EB3FAF4B38BBF15DF L_31;
				L_31 = InterfaceFuncInvoker0< KeyValuePair_2_tC7EE4E7E2715DB2FD352264EB3FAF4B38BBF15DF >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,OVRPassthroughLayer/PassthroughMeshInstance>>::get_Current() */, il2cpp_rgctx_data(method->klass->rgctx_data, 12), L_30);
				V_4 = L_31;
				RuntimeObject* L_32;
				L_32 = KeyValuePair_2_get_Key_mF8D0149496A6E9F97AA843ED176E84E689B58C92_inline((&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
				PassthroughMeshInstance_tC15BBC616D213426B55C4E59C74175581D2EFFDE L_33;
				L_33 = KeyValuePair_2_get_Value_mEDECE70FEBCB73C3191AAB4215C0FC3505C3D06A_inline((&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
				((  void (*) (Dictionary_2_tEF99863F098CBEDBDF416E45D42452A1BD2A32BC*, RuntimeObject*, PassthroughMeshInstance_tC15BBC616D213426B55C4E59C74175581D2EFFDE, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(__this, L_32, L_33, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
			}

IL_00a5_1:
			{
				RuntimeObject* L_34 = V_3;
				NullCheck((RuntimeObject*)L_34);
				bool L_35;
				L_35 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_34);
				if (L_35)
				{
					goto IL_0089_1;
				}
			}
			{
				goto IL_00b9;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00b9:
	{
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,OVRPassthroughLayer/PassthroughMeshInstance>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m6C2C7C3C64C49C196A10593E4ABAED06722FB588_gshared (Dictionary_2_tEF99863F098CBEDBDF416E45D42452A1BD2A32BC* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___info0, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___context1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___info0;
		NullCheck(L_0);
		ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7(L_0, (RuntimeObject*)__this, L_1, ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		return;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,OVRPassthroughLayer/PassthroughMeshInstance>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_m13DB2EC14E433ECFFBFC1D9D598D2EE9DEAEF9E2_gshared (Dictionary_2_tEF99863F098CBEDBDF416E45D42452A1BD2A32BC* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____count_2;
		int32_t L_1 = (int32_t)__this->____freeCount_4;
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,OVRPassthroughLayer/PassthroughMeshInstance>::get_Keys()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_tB971EBFC30B3C62DC261473AF1BA8A20E0D6DCF9* Dictionary_2_get_Keys_mDF3EF5547703EE20307B033CF147CD21E3C18B7D_gshared (Dictionary_2_tEF99863F098CBEDBDF416E45D42452A1BD2A32BC* __this, const RuntimeMethod* method) 
{
	{
		KeyCollection_tB971EBFC30B3C62DC261473AF1BA8A20E0D6DCF9* L_0 = (KeyCollection_tB971EBFC30B3C62DC261473AF1BA8A20E0D6DCF9*)__this->____keys_7;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		KeyCollection_tB971EBFC30B3C62DC261473AF1BA8A20E0D6DCF9* L_1 = (KeyCollection_tB971EBFC30B3C62DC261473AF1BA8A20E0D6DCF9*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 16));
		NullCheck(L_1);
		((  void (*) (KeyCollection_tB971EBFC30B3C62DC261473AF1BA8A20E0D6DCF9*, Dictionary_2_tEF99863F098CBEDBDF416E45D42452A1BD2A32BC*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 17)))(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
		__this->____keys_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keys_7), (void*)L_1);
	}

IL_0014:
	{
		KeyCollection_tB971EBFC30B3C62DC261473AF1BA8A20E0D6DCF9* L_2 = (KeyCollection_tB971EBFC30B3C62DC261473AF1BA8A20E0D6DCF9*)__this->____keys_7;
		return L_2;
	}
}
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,OVRPassthroughLayer/PassthroughMeshInstance>::get_Values()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_t2217D10193E11B6B505B07C802B6CE706A42464E* Dictionary_2_get_Values_mBF4A8635238C89D5EB6DC118E8D135DE3037D11F_gshared (Dictionary_2_tEF99863F098CBEDBDF416E45D42452A1BD2A32BC* __this, const RuntimeMethod* method) 
{
	{
		ValueCollection_t2217D10193E11B6B505B07C802B6CE706A42464E* L_0 = (ValueCollection_t2217D10193E11B6B505B07C802B6CE706A42464E*)__this->____values_8;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_t2217D10193E11B6B505B07C802B6CE706A42464E* L_1 = (ValueCollection_t2217D10193E11B6B505B07C802B6CE706A42464E*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 18));
		NullCheck(L_1);
		((  void (*) (ValueCollection_t2217D10193E11B6B505B07C802B6CE706A42464E*, Dictionary_2_tEF99863F098CBEDBDF416E45D42452A1BD2A32BC*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 19)))(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		__this->____values_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values_8), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_t2217D10193E11B6B505B07C802B6CE706A42464E* L_2 = (ValueCollection_t2217D10193E11B6B505B07C802B6CE706A42464E*)__this->____values_8;
		return L_2;
	}
}
// System.Collections.Generic.IEnumerable`1<TValue> System.Collections.Generic.Dictionary`2<System.Object,OVRPassthroughLayer/PassthroughMeshInstance>::System.Collections.Generic.IReadOnlyDictionary<TKey,TValue>.get_Values()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IReadOnlyDictionaryU3CTKeyU2CTValueU3E_get_Values_m967C9FBD06D873E75330D00A06A9081E3209FE59_gshared (Dictionary_2_tEF99863F098CBEDBDF416E45D42452A1BD2A32BC* __this, const RuntimeMethod* method) 
{
	{
		ValueCollection_t2217D10193E11B6B505B07C802B6CE706A42464E* L_0 = (ValueCollection_t2217D10193E11B6B505B07C802B6CE706A42464E*)__this->____values_8;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_t2217D10193E11B6B505B07C802B6CE706A42464E* L_1 = (ValueCollection_t2217D10193E11B6B505B07C802B6CE706A42464E*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 18));
		NullCheck(L_1);
		((  void (*) (ValueCollection_t2217D10193E11B6B505B07C802B6CE706A42464E*, Dictionary_2_tEF99863F098CBEDBDF416E45D42452A1BD2A32BC*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 19)))(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		__this->____values_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values_8), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_t2217D10193E11B6B505B07C802B6CE706A42464E* L_2 = (ValueCollection_t2217D10193E11B6B505B07C802B6CE706A42464E*)__this->____values_8;
		return (RuntimeObject*)L_2;
	}
}
// TValue System.Collections.Generic.Dictionary`2<System.Object,OVRPassthroughLayer/PassthroughMeshInstance>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PassthroughMeshInstance_tC15BBC616D213426B55C4E59C74175581D2EFFDE Dictionary_2_get_Item_m03648C8EDF8AD3A1C2306D744FCD10A2AD678167_gshared (Dictionary_2_tEF99863F098CBEDBDF416E45D42452A1BD2A32BC* __this, RuntimeObject* ___key0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	PassthroughMeshInstance_tC15BBC616D213426B55C4E59C74175581D2EFFDE V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		RuntimeObject* L_0 = ___key0;
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_tEF99863F098CBEDBDF416E45D42452A1BD2A32BC*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 20)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_001e;
		}
	}
	{
		EntryU5BU5D_t96093E698ECF890AFC3EBA8FD35D922C55DEA886* L_3 = (EntryU5BU5D_t96093E698ECF890AFC3EBA8FD35D922C55DEA886*)__this->____entries_1;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		PassthroughMeshInstance_tC15BBC616D213426B55C4E59C74175581D2EFFDE L_5 = (PassthroughMeshInstance_tC15BBC616D213426B55C4E59C74175581D2EFFDE)((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)))->___value_3;
		return L_5;
	}

IL_001e:
	{
		RuntimeObject* L_6 = ___key0;
		ThrowHelper_ThrowKeyNotFoundException_m6A17735FA486AD43F2488DE39B755AC60BC99CE7(L_6, NULL);
		il2cpp_codegen_initobj((&V_1), sizeof(PassthroughMeshInstance_tC15BBC616D213426B55C4E59C74175581D2EFFDE));
		PassthroughMeshInstance_tC15BBC616D213426B55C4E59C74175581D2EFFDE L_7 = V_1;
		return L_7;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,OVRPassthroughLayer/PassthroughMeshInstance>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m373708BE3200FCFD08479025690F05C926B0416B_gshared (Dictionary_2_tEF99863F098CBEDBDF416E45D42452A1BD2A32BC* __this, RuntimeObject* ___key0, PassthroughMeshInstance_tC15BBC616D213426B55C4E59C74175581D2EFFDE ___value1, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___key0;
		PassthroughMeshInstance_tC15BBC616D213426B55C4E59C74175581D2EFFDE L_1 = ___value1;
		bool L_2;
		L_2 = ((  bool (*) (Dictionary_2_tEF99863F098CBEDBDF416E45D42452A1BD2A32BC*, RuntimeObject*, PassthroughMeshInstance_tC15BBC616D213426B55C4E59C74175581D2EFFDE, uint8_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 22)))(__this, L_0, L_1, (uint8_t)1, il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,OVRPassthroughLayer/PassthroughMeshInstance>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_mFA4ED1B3ADFEFF2273DA13141DD614AEA2D6E6D2_gshared (Dictionary_2_tEF99863F098CBEDBDF416E45D42452A1BD2A32BC* __this, RuntimeObject* ___key0, PassthroughMeshInstance_tC15BBC616D213426B55C4E59C74175581D2EFFDE ___value1, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___key0;
		PassthroughMeshInstance_tC15BBC616D213426B55C4E59C74175581D2EFFDE L_1 = ___value1;
		bool L_2;
		L_2 = ((  bool (*) (Dictionary_2_tEF99863F098CBEDBDF416E45D42452A1BD2A32BC*, RuntimeObject*, PassthroughMeshInstance_tC15BBC616D213426B55C4E59C74175581D2EFFDE, uint8_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 22)))(__this, L_0, L_1, (uint8_t)2, il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,OVRPassthroughLayer/PassthroughMeshInstance>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m636FEBB94213ED78CE48C3B66FD025AEAF8250A7_gshared (Dictionary_2_tEF99863F098CBEDBDF416E45D42452A1BD2A32BC* __this, KeyValuePair_2_tC7EE4E7E2715DB2FD352264EB3FAF4B38BBF15DF ___keyValuePair0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0;
		L_0 = KeyValuePair_2_get_Key_mF8D0149496A6E9F97AA843ED176E84E689B58C92_inline((&___keyValuePair0), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		PassthroughMeshInstance_tC15BBC616D213426B55C4E59C74175581D2EFFDE L_1;
		L_1 = KeyValuePair_2_get_Value_mEDECE70FEBCB73C3191AAB4215C0FC3505C3D06A_inline((&___keyValuePair0), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		((  void (*) (Dictionary_2_tEF99863F098CBEDBDF416E45D42452A1BD2A32BC*, RuntimeObject*, PassthroughMeshInstance_tC15BBC616D213426B55C4E59C74175581D2EFFDE, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,OVRPassthroughLayer/PassthroughMeshInstance>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m1E40F3279EF0802309018E3A5809E29E31A49229_gshared (Dictionary_2_tEF99863F098CBEDBDF416E45D42452A1BD2A32BC* __this, KeyValuePair_2_tC7EE4E7E2715DB2FD352264EB3FAF4B38BBF15DF ___keyValuePair0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0;
		L_0 = KeyValuePair_2_get_Key_mF8D0149496A6E9F97AA843ED176E84E689B58C92_inline((&___keyValuePair0), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_tEF99863F098CBEDBDF416E45D42452A1BD2A32BC*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 20)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0038;
		}
	}
	{
		EqualityComparer_1_t8305842F1638FD4EB0C6B9C2D7A5BDAACE522FE9* L_3;
		L_3 = ((  EqualityComparer_1_t8305842F1638FD4EB0C6B9C2D7A5BDAACE522FE9* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 23)))(il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		EntryU5BU5D_t96093E698ECF890AFC3EBA8FD35D922C55DEA886* L_4 = (EntryU5BU5D_t96093E698ECF890AFC3EBA8FD35D922C55DEA886*)__this->____entries_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		PassthroughMeshInstance_tC15BBC616D213426B55C4E59C74175581D2EFFDE L_6 = (PassthroughMeshInstance_tC15BBC616D213426B55C4E59C74175581D2EFFDE)((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value_3;
		PassthroughMeshInstance_tC15BBC616D213426B55C4E59C74175581D2EFFDE L_7;
		L_7 = KeyValuePair_2_get_Value_mEDECE70FEBCB73C3191AAB4215C0FC3505C3D06A_inline((&___keyValuePair0), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, PassthroughMeshInstance_tC15BBC616D213426B55C4E59C74175581D2EFFDE, PassthroughMeshInstance_tC15BBC616D213426B55C4E59C74175581D2EFFDE >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<OVRPassthroughLayer/PassthroughMeshInstance>::Equals(T,T) */, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0038;
		}
	}
	{
		return (bool)1;
	}

IL_0038:
	{
		return (bool)0;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,OVRPassthroughLayer/PassthroughMeshInstance>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_mE846ACD93221D010EF0BB0E6B17707B0AC48699A_gshared (Dictionary_2_tEF99863F098CBEDBDF416E45D42452A1BD2A32BC* __this, KeyValuePair_2_tC7EE4E7E2715DB2FD352264EB3FAF4B38BBF15DF ___keyValuePair0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0;
		L_0 = KeyValuePair_2_get_Key_mF8D0149496A6E9F97AA843ED176E84E689B58C92_inline((&___keyValuePair0), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_tEF99863F098CBEDBDF416E45D42452A1BD2A32BC*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 20)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0046;
		}
	}
	{
		EqualityComparer_1_t8305842F1638FD4EB0C6B9C2D7A5BDAACE522FE9* L_3;
		L_3 = ((  EqualityComparer_1_t8305842F1638FD4EB0C6B9C2D7A5BDAACE522FE9* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 23)))(il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		EntryU5BU5D_t96093E698ECF890AFC3EBA8FD35D922C55DEA886* L_4 = (EntryU5BU5D_t96093E698ECF890AFC3EBA8FD35D922C55DEA886*)__this->____entries_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		PassthroughMeshInstance_tC15BBC616D213426B55C4E59C74175581D2EFFDE L_6 = (PassthroughMeshInstance_tC15BBC616D213426B55C4E59C74175581D2EFFDE)((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value_3;
		PassthroughMeshInstance_tC15BBC616D213426B55C4E59C74175581D2EFFDE L_7;
		L_7 = KeyValuePair_2_get_Value_mEDECE70FEBCB73C3191AAB4215C0FC3505C3D06A_inline((&___keyValuePair0), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, PassthroughMeshInstance_tC15BBC616D213426B55C4E59C74175581D2EFFDE, PassthroughMeshInstance_tC15BBC616D213426B55C4E59C74175581D2EFFDE >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<OVRPassthroughLayer/PassthroughMeshInstance>::Equals(T,T) */, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0046;
		}
	}
	{
		RuntimeObject* L_9;
		L_9 = KeyValuePair_2_get_Key_mF8D0149496A6E9F97AA843ED176E84E689B58C92_inline((&___keyValuePair0), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		bool L_10;
		L_10 = ((  bool (*) (Dictionary_2_tEF99863F098CBEDBDF416E45D42452A1BD2A32BC*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 27)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 27));
		return (bool)1;
	}

IL_0046:
	{
		return (bool)0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,OVRPassthroughLayer/PassthroughMeshInstance>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_m369952615C5090DDE797EB628425DE265EF33AA4_gshared (Dictionary_2_tEF99863F098CBEDBDF416E45D42452A1BD2A32BC* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->____count_2;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0041;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_3);
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_2, 0, ((int32_t)(((RuntimeArray*)L_3)->max_length)), NULL);
		__this->____count_2 = 0;
		__this->____freeList_3 = (-1);
		__this->____freeCount_4 = 0;
		EntryU5BU5D_t96093E698ECF890AFC3EBA8FD35D922C55DEA886* L_4 = (EntryU5BU5D_t96093E698ECF890AFC3EBA8FD35D922C55DEA886*)__this->____entries_1;
		int32_t L_5 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_4, 0, L_5, NULL);
	}

IL_0041:
	{
		int32_t L_6 = (int32_t)__this->____version_5;
		__this->____version_5 = ((int32_t)il2cpp_codegen_add(L_6, 1));
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,OVRPassthroughLayer/PassthroughMeshInstance>::ContainsKey(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m7FF7DFE7A719B42A06B0DC7941F9F2EDF45AD95C_gshared (Dictionary_2_tEF99863F098CBEDBDF416E45D42452A1BD2A32BC* __this, RuntimeObject* ___key0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___key0;
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_tEF99863F098CBEDBDF416E45D42452A1BD2A32BC*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 20)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		return (bool)((((int32_t)((((int32_t)L_1) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,OVRPassthroughLayer/PassthroughMeshInstance>::ContainsValue(TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsValue_m7BE34709CA2B303E99184404F5C5C3414FD841DB_gshared (Dictionary_2_tEF99863F098CBEDBDF416E45D42452A1BD2A32BC* __this, PassthroughMeshInstance_tC15BBC616D213426B55C4E59C74175581D2EFFDE ___value0, const RuntimeMethod* method) 
{
	EntryU5BU5D_t96093E698ECF890AFC3EBA8FD35D922C55DEA886* V_0 = NULL;
	int32_t V_1 = 0;
	PassthroughMeshInstance_tC15BBC616D213426B55C4E59C74175581D2EFFDE V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	EqualityComparer_1_t8305842F1638FD4EB0C6B9C2D7A5BDAACE522FE9* V_4 = NULL;
	int32_t V_5 = 0;
	{
		EntryU5BU5D_t96093E698ECF890AFC3EBA8FD35D922C55DEA886* L_0 = (EntryU5BU5D_t96093E698ECF890AFC3EBA8FD35D922C55DEA886*)__this->____entries_1;
		V_0 = L_0;
		goto IL_0049;
	}
	{
		V_1 = 0;
		goto IL_003b;
	}

IL_0013:
	{
		EntryU5BU5D_t96093E698ECF890AFC3EBA8FD35D922C55DEA886* L_2 = V_0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = (int32_t)((L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3)))->___hashCode_0;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0037;
		}
	}
	{
		EntryU5BU5D_t96093E698ECF890AFC3EBA8FD35D922C55DEA886* L_5 = V_0;
		int32_t L_6 = V_1;
		NullCheck(L_5);
		PassthroughMeshInstance_tC15BBC616D213426B55C4E59C74175581D2EFFDE L_7 = (PassthroughMeshInstance_tC15BBC616D213426B55C4E59C74175581D2EFFDE)((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->___value_3;
		goto IL_0037;
	}
	{
		return (bool)1;
	}

IL_0037:
	{
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_003b:
	{
		int32_t L_9 = V_1;
		int32_t L_10 = (int32_t)__this->____count_2;
		if ((((int32_t)L_9) < ((int32_t)L_10)))
		{
			goto IL_0013;
		}
	}
	{
		goto IL_00db;
	}

IL_0049:
	{
		il2cpp_codegen_initobj((&V_2), sizeof(PassthroughMeshInstance_tC15BBC616D213426B55C4E59C74175581D2EFFDE));
	}
	{
		V_3 = 0;
		goto IL_008b;
	}

IL_005d:
	{
		EntryU5BU5D_t96093E698ECF890AFC3EBA8FD35D922C55DEA886* L_12 = V_0;
		int32_t L_13 = V_3;
		NullCheck(L_12);
		int32_t L_14 = (int32_t)((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)))->___hashCode_0;
		if ((((int32_t)L_14) < ((int32_t)0)))
		{
			goto IL_0087;
		}
	}
	{
		EqualityComparer_1_t8305842F1638FD4EB0C6B9C2D7A5BDAACE522FE9* L_15;
		L_15 = ((  EqualityComparer_1_t8305842F1638FD4EB0C6B9C2D7A5BDAACE522FE9* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 23)))(il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		EntryU5BU5D_t96093E698ECF890AFC3EBA8FD35D922C55DEA886* L_16 = V_0;
		int32_t L_17 = V_3;
		NullCheck(L_16);
		PassthroughMeshInstance_tC15BBC616D213426B55C4E59C74175581D2EFFDE L_18 = (PassthroughMeshInstance_tC15BBC616D213426B55C4E59C74175581D2EFFDE)((L_16)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_17)))->___value_3;
		PassthroughMeshInstance_tC15BBC616D213426B55C4E59C74175581D2EFFDE L_19 = ___value0;
		NullCheck(L_15);
		bool L_20;
		L_20 = VirtualFuncInvoker2< bool, PassthroughMeshInstance_tC15BBC616D213426B55C4E59C74175581D2EFFDE, PassthroughMeshInstance_tC15BBC616D213426B55C4E59C74175581D2EFFDE >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<OVRPassthroughLayer/PassthroughMeshInstance>::Equals(T,T) */, L_15, L_18, L_19);
		if (!L_20)
		{
			goto IL_0087;
		}
	}
	{
		return (bool)1;
	}

IL_0087:
	{
		int32_t L_21 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_008b:
	{
		int32_t L_22 = V_3;
		int32_t L_23 = (int32_t)__this->____count_2;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_005d;
		}
	}
	{
		goto IL_00db;
	}

IL_0096:
	{
		EqualityComparer_1_t8305842F1638FD4EB0C6B9C2D7A5BDAACE522FE9* L_24;
		L_24 = ((  EqualityComparer_1_t8305842F1638FD4EB0C6B9C2D7A5BDAACE522FE9* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 23)))(il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		V_4 = L_24;
		V_5 = 0;
		goto IL_00d1;
	}

IL_00a2:
	{
		EntryU5BU5D_t96093E698ECF890AFC3EBA8FD35D922C55DEA886* L_25 = V_0;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		int32_t L_27 = (int32_t)((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___hashCode_0;
		if ((((int32_t)L_27) < ((int32_t)0)))
		{
			goto IL_00cb;
		}
	}
	{
		EqualityComparer_1_t8305842F1638FD4EB0C6B9C2D7A5BDAACE522FE9* L_28 = V_4;
		EntryU5BU5D_t96093E698ECF890AFC3EBA8FD35D922C55DEA886* L_29 = V_0;
		int32_t L_30 = V_5;
		NullCheck(L_29);
		PassthroughMeshInstance_tC15BBC616D213426B55C4E59C74175581D2EFFDE L_31 = (PassthroughMeshInstance_tC15BBC616D213426B55C4E59C74175581D2EFFDE)((L_29)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_30)))->___value_3;
		PassthroughMeshInstance_tC15BBC616D213426B55C4E59C74175581D2EFFDE L_32 = ___value0;
		NullCheck(L_28);
		bool L_33;
		L_33 = VirtualFuncInvoker2< bool, PassthroughMeshInstance_tC15BBC616D213426B55C4E59C74175581D2EFFDE, PassthroughMeshInstance_tC15BBC616D213426B55C4E59C74175581D2EFFDE >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<OVRPassthroughLayer/PassthroughMeshInstance>::Equals(T,T) */, L_28, L_31, L_32);
		if (!L_33)
		{
			goto IL_00cb;
		}
	}
	{
		return (bool)1;
	}

IL_00cb:
	{
		int32_t L_34 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_00d1:
	{
		int32_t L_35 = V_5;
		int32_t L_36 = (int32_t)__this->____count_2;
		if ((((int32_t)L_35) < ((int32_t)L_36)))
		{
			goto IL_00a2;
		}
	}

IL_00db:
	{
		return (bool)0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,OVRPassthroughLayer/PassthroughMeshInstance>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_m508719039CBCC1F617F3C249CB31EA9A21F6D124_gshared (Dictionary_2_tEF99863F098CBEDBDF416E45D42452A1BD2A32BC* __this, KeyValuePair_2U5BU5D_t27B5F90D6614A8F5D75BD15E0BA488F4FF7A6786* ___array0, int32_t ___index1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	EntryU5BU5D_t96093E698ECF890AFC3EBA8FD35D922C55DEA886* V_1 = NULL;
	int32_t V_2 = 0;
	{
		KeyValuePair_2U5BU5D_t27B5F90D6614A8F5D75BD15E0BA488F4FF7A6786* L_0 = ___array0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)3, NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___index1;
		KeyValuePair_2U5BU5D_t27B5F90D6614A8F5D75BD15E0BA488F4FF7A6786* L_2 = ___array0;
		NullCheck(L_2);
		if ((!(((uint32_t)L_1) > ((uint32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))))
		{
			goto IL_0014;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0014:
	{
		KeyValuePair_2U5BU5D_t27B5F90D6614A8F5D75BD15E0BA488F4FF7A6786* L_3 = ___array0;
		NullCheck(L_3);
		int32_t L_4 = ___index1;
		int32_t L_5;
		L_5 = ((  int32_t (*) (Dictionary_2_tEF99863F098CBEDBDF416E45D42452A1BD2A32BC*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 29)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_3)->max_length)), L_4))) >= ((int32_t)L_5)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)5, NULL);
	}

IL_0027:
	{
		int32_t L_6 = (int32_t)__this->____count_2;
		V_0 = L_6;
		EntryU5BU5D_t96093E698ECF890AFC3EBA8FD35D922C55DEA886* L_7 = (EntryU5BU5D_t96093E698ECF890AFC3EBA8FD35D922C55DEA886*)__this->____entries_1;
		V_1 = L_7;
		V_2 = 0;
		goto IL_0075;
	}

IL_0039:
	{
		EntryU5BU5D_t96093E698ECF890AFC3EBA8FD35D922C55DEA886* L_8 = V_1;
		int32_t L_9 = V_2;
		NullCheck(L_8);
		int32_t L_10 = (int32_t)((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9)))->___hashCode_0;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_0071;
		}
	}
	{
		KeyValuePair_2U5BU5D_t27B5F90D6614A8F5D75BD15E0BA488F4FF7A6786* L_11 = ___array0;
		int32_t L_12 = ___index1;
		int32_t L_13 = L_12;
		___index1 = ((int32_t)il2cpp_codegen_add(L_13, 1));
		EntryU5BU5D_t96093E698ECF890AFC3EBA8FD35D922C55DEA886* L_14 = V_1;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		RuntimeObject* L_16 = (RuntimeObject*)((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)))->___key_2;
		EntryU5BU5D_t96093E698ECF890AFC3EBA8FD35D922C55DEA886* L_17 = V_1;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		PassthroughMeshInstance_tC15BBC616D213426B55C4E59C74175581D2EFFDE L_19 = (PassthroughMeshInstance_tC15BBC616D213426B55C4E59C74175581D2EFFDE)((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___value_3;
		KeyValuePair_2_tC7EE4E7E2715DB2FD352264EB3FAF4B38BBF15DF L_20;
		memset((&L_20), 0, sizeof(L_20));
		KeyValuePair_2__ctor_mFB34CAD11D62DC93018E1826B3531AA2F4267402((&L_20), L_16, L_19, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (KeyValuePair_2_tC7EE4E7E2715DB2FD352264EB3FAF4B38BBF15DF)L_20);
	}

IL_0071:
	{
		int32_t L_21 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0075:
	{
		int32_t L_22 = V_2;
		int32_t L_23 = V_0;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_0039;
		}
	}
	{
		return;
	}
}
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,OVRPassthroughLayer/PassthroughMeshInstance>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t295153DF2610B637A0463DEDA52FE7BF360F0113 Dictionary_2_GetEnumerator_m45BBE6EF7D58CB0A5490E9FC1339F43A0714E8A0_gshared (Dictionary_2_tEF99863F098CBEDBDF416E45D42452A1BD2A32BC* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t295153DF2610B637A0463DEDA52FE7BF360F0113 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m6CCFF0E2A0A9B3066DA75F3E35632527FBD59394((&L_0), __this, 2, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,OVRPassthroughLayer/PassthroughMeshInstance>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m9B86EA41004026D580B83FEC0B43022F7CECAC5F_gshared (Dictionary_2_tEF99863F098CBEDBDF416E45D42452A1BD2A32BC* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t295153DF2610B637A0463DEDA52FE7BF360F0113 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m6CCFF0E2A0A9B3066DA75F3E35632527FBD59394((&L_0), __this, 2, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		Enumerator_t295153DF2610B637A0463DEDA52FE7BF360F0113 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 32), &L_1);
		return (RuntimeObject*)L_2;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,OVRPassthroughLayer/PassthroughMeshInstance>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_GetObjectData_m5ACDBC23A44EEDDA84E93576B50F046F3B62CD07_gshared (Dictionary_2_tEF99863F098CBEDBDF416E45D42452A1BD2A32BC* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___info0, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___context1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_t27B5F90D6614A8F5D75BD15E0BA488F4FF7A6786* V_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	String_t* G_B4_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B4_2 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B3_2 = NULL;
	String_t* G_B6_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B6_1 = NULL;
	String_t* G_B5_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B5_1 = NULL;
	int32_t G_B7_0 = 0;
	String_t* G_B7_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B7_2 = NULL;
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___info0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)4, NULL);
	}

IL_0009:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___info0;
		int32_t L_2 = (int32_t)__this->____version_5;
		NullCheck(L_1);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(L_1, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, L_2, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = ___info0;
		RuntimeObject* L_4 = (RuntimeObject*)__this->____comparer_6;
		RuntimeObject* L_5 = L_4;
		G_B3_0 = L_5;
		G_B3_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
		G_B3_2 = L_3;
		if (L_5)
		{
			G_B4_0 = L_5;
			G_B4_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
			G_B4_2 = L_3;
			goto IL_002f;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_6;
		L_6 = ((  EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		G_B4_0 = ((RuntimeObject*)(L_6));
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
	}

IL_002f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 34)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		NullCheck(G_B4_2);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(G_B4_2, G_B4_1, (RuntimeObject*)G_B4_0, L_8, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_9 = ___info0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		G_B5_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
		G_B5_1 = L_9;
		if (!L_10)
		{
			G_B6_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
			G_B6_1 = L_9;
			goto IL_0056;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_11);
		G_B7_0 = ((int32_t)(((RuntimeArray*)L_11)->max_length));
		G_B7_1 = G_B5_0;
		G_B7_2 = G_B5_1;
		goto IL_0057;
	}

IL_0056:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
		G_B7_2 = G_B6_1;
	}

IL_0057:
	{
		NullCheck(G_B7_2);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(G_B7_2, G_B7_1, G_B7_0, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		if (!L_12)
		{
			goto IL_008e;
		}
	}
	{
		int32_t L_13;
		L_13 = ((  int32_t (*) (Dictionary_2_tEF99863F098CBEDBDF416E45D42452A1BD2A32BC*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 29)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		KeyValuePair_2U5BU5D_t27B5F90D6614A8F5D75BD15E0BA488F4FF7A6786* L_14 = (KeyValuePair_2U5BU5D_t27B5F90D6614A8F5D75BD15E0BA488F4FF7A6786*)(KeyValuePair_2U5BU5D_t27B5F90D6614A8F5D75BD15E0BA488F4FF7A6786*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 35), (uint32_t)L_13);
		V_0 = L_14;
		KeyValuePair_2U5BU5D_t27B5F90D6614A8F5D75BD15E0BA488F4FF7A6786* L_15 = V_0;
		((  void (*) (Dictionary_2_tEF99863F098CBEDBDF416E45D42452A1BD2A32BC*, KeyValuePair_2U5BU5D_t27B5F90D6614A8F5D75BD15E0BA488F4FF7A6786*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 36)))(__this, L_15, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 36));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_16 = ___info0;
		KeyValuePair_2U5BU5D_t27B5F90D6614A8F5D75BD15E0BA488F4FF7A6786* L_17 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 37)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		NullCheck(L_16);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(L_16, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, (RuntimeObject*)L_17, L_19, NULL);
	}

IL_008e:
	{
		return;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,OVRPassthroughLayer/PassthroughMeshInstance>::FindEntry(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_m55FB78679BF0BF70FDCA8E795471B3521E0FD453_gshared (Dictionary_2_tEF99863F098CBEDBDF416E45D42452A1BD2A32BC* __this, RuntimeObject* ___key0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	EntryU5BU5D_t96093E698ECF890AFC3EBA8FD35D922C55DEA886* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	int32_t V_5 = 0;
	RuntimeObject* V_6 = NULL;
	EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* V_7 = NULL;
	int32_t V_8 = 0;
	{
		RuntimeObject* L_0 = ___key0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_000e:
	{
		V_0 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		V_1 = L_1;
		EntryU5BU5D_t96093E698ECF890AFC3EBA8FD35D922C55DEA886* L_2 = (EntryU5BU5D_t96093E698ECF890AFC3EBA8FD35D922C55DEA886*)__this->____entries_1;
		V_2 = L_2;
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = V_1;
		if (!L_3)
		{
			goto IL_0175;
		}
	}
	{
		RuntimeObject* L_4 = (RuntimeObject*)__this->____comparer_6;
		V_4 = L_4;
		RuntimeObject* L_5 = V_4;
		if (L_5)
		{
			goto IL_0110;
		}
	}
	{
		NullCheck((___key0));
		int32_t L_6;
		L_6 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, (___key0));
		V_5 = ((int32_t)(L_6&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = V_1;
		int32_t L_8 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = V_1;
		NullCheck(L_9);
		NullCheck(L_7);
		int32_t L_10 = ((int32_t)(L_8%((int32_t)(((RuntimeArray*)L_9)->max_length))));
		int32_t L_11 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_11, 1));
		il2cpp_codegen_initobj((&V_6), sizeof(RuntimeObject*));
		RuntimeObject* L_12 = V_6;
		if (!L_12)
		{
			goto IL_00b9;
		}
	}

IL_0066:
	{
		int32_t L_13 = V_0;
		EntryU5BU5D_t96093E698ECF890AFC3EBA8FD35D922C55DEA886* L_14 = V_2;
		NullCheck(L_14);
		if ((!(((uint32_t)L_13) < ((uint32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_t96093E698ECF890AFC3EBA8FD35D922C55DEA886* L_15 = V_2;
		int32_t L_16 = V_0;
		NullCheck(L_15);
		int32_t L_17 = (int32_t)((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___hashCode_0;
		int32_t L_18 = V_5;
		if ((!(((uint32_t)L_17) == ((uint32_t)L_18))))
		{
			goto IL_009b;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_19;
		L_19 = ((  EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		EntryU5BU5D_t96093E698ECF890AFC3EBA8FD35D922C55DEA886* L_20 = V_2;
		int32_t L_21 = V_0;
		NullCheck(L_20);
		RuntimeObject* L_22 = (RuntimeObject*)((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___key_2;
		RuntimeObject* L_23 = ___key0;
		NullCheck(L_19);
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Object>::Equals(T,T) */, L_19, L_22, L_23);
		if (L_24)
		{
			goto IL_0175;
		}
	}

IL_009b:
	{
		EntryU5BU5D_t96093E698ECF890AFC3EBA8FD35D922C55DEA886* L_25 = V_2;
		int32_t L_26 = V_0;
		NullCheck(L_25);
		int32_t L_27 = (int32_t)((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___next_1;
		V_0 = L_27;
		int32_t L_28 = V_3;
		EntryU5BU5D_t96093E698ECF890AFC3EBA8FD35D922C55DEA886* L_29 = V_2;
		NullCheck(L_29);
		if ((((int32_t)L_28) < ((int32_t)((int32_t)(((RuntimeArray*)L_29)->max_length)))))
		{
			goto IL_00b3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_00b3:
	{
		int32_t L_30 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_30, 1));
		goto IL_0066;
	}

IL_00b9:
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_31;
		L_31 = ((  EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		V_7 = L_31;
	}

IL_00c0:
	{
		int32_t L_32 = V_0;
		EntryU5BU5D_t96093E698ECF890AFC3EBA8FD35D922C55DEA886* L_33 = V_2;
		NullCheck(L_33);
		if ((!(((uint32_t)L_32) < ((uint32_t)((int32_t)(((RuntimeArray*)L_33)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_t96093E698ECF890AFC3EBA8FD35D922C55DEA886* L_34 = V_2;
		int32_t L_35 = V_0;
		NullCheck(L_34);
		int32_t L_36 = (int32_t)((L_34)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_35)))->___hashCode_0;
		int32_t L_37 = V_5;
		if ((!(((uint32_t)L_36) == ((uint32_t)L_37))))
		{
			goto IL_00f2;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_38 = V_7;
		EntryU5BU5D_t96093E698ECF890AFC3EBA8FD35D922C55DEA886* L_39 = V_2;
		int32_t L_40 = V_0;
		NullCheck(L_39);
		RuntimeObject* L_41 = (RuntimeObject*)((L_39)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_40)))->___key_2;
		RuntimeObject* L_42 = ___key0;
		NullCheck(L_38);
		bool L_43;
		L_43 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Object>::Equals(T,T) */, L_38, L_41, L_42);
		if (L_43)
		{
			goto IL_0175;
		}
	}

IL_00f2:
	{
		EntryU5BU5D_t96093E698ECF890AFC3EBA8FD35D922C55DEA886* L_44 = V_2;
		int32_t L_45 = V_0;
		NullCheck(L_44);
		int32_t L_46 = (int32_t)((L_44)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_45)))->___next_1;
		V_0 = L_46;
		int32_t L_47 = V_3;
		EntryU5BU5D_t96093E698ECF890AFC3EBA8FD35D922C55DEA886* L_48 = V_2;
		NullCheck(L_48);
		if ((((int32_t)L_47) < ((int32_t)((int32_t)(((RuntimeArray*)L_48)->max_length)))))
		{
			goto IL_010a;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_010a:
	{
		int32_t L_49 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_49, 1));
		goto IL_00c0;
	}

IL_0110:
	{
		RuntimeObject* L_50 = V_4;
		RuntimeObject* L_51 = ___key0;
		NullCheck(L_50);
		int32_t L_52;
		L_52 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Object>::GetHashCode(T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 41), L_50, L_51);
		V_8 = ((int32_t)(L_52&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_53 = V_1;
		int32_t L_54 = V_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_55 = V_1;
		NullCheck(L_55);
		NullCheck(L_53);
		int32_t L_56 = ((int32_t)(L_54%((int32_t)(((RuntimeArray*)L_55)->max_length))));
		int32_t L_57 = (L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_56));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_57, 1));
	}

IL_012b:
	{
		int32_t L_58 = V_0;
		EntryU5BU5D_t96093E698ECF890AFC3EBA8FD35D922C55DEA886* L_59 = V_2;
		NullCheck(L_59);
		if ((!(((uint32_t)L_58) < ((uint32_t)((int32_t)(((RuntimeArray*)L_59)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_t96093E698ECF890AFC3EBA8FD35D922C55DEA886* L_60 = V_2;
		int32_t L_61 = V_0;
		NullCheck(L_60);
		int32_t L_62 = (int32_t)((L_60)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_61)))->___hashCode_0;
		int32_t L_63 = V_8;
		if ((!(((uint32_t)L_62) == ((uint32_t)L_63))))
		{
			goto IL_0157;
		}
	}
	{
		RuntimeObject* L_64 = V_4;
		EntryU5BU5D_t96093E698ECF890AFC3EBA8FD35D922C55DEA886* L_65 = V_2;
		int32_t L_66 = V_0;
		NullCheck(L_65);
		RuntimeObject* L_67 = (RuntimeObject*)((L_65)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_66)))->___key_2;
		RuntimeObject* L_68 = ___key0;
		NullCheck(L_64);
		bool L_69;
		L_69 = InterfaceFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Object>::Equals(T,T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 41), L_64, L_67, L_68);
		if (L_69)
		{
			goto IL_0175;
		}
	}

IL_0157:
	{
		EntryU5BU5D_t96093E698ECF890AFC3EBA8FD35D922C55DEA886* L_70 = V_2;
		int32_t L_71 = V_0;
		NullCheck(L_70);
		int32_t L_72 = (int32_t)((L_70)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_71)))->___next_1;
		V_0 = L_72;
		int32_t L_73 = V_3;
		EntryU5BU5D_t96093E698ECF890AFC3EBA8FD35D922C55DEA886* L_74 = V_2;
		NullCheck(L_74);
		if ((((int32_t)L_73) < ((int32_t)((int32_t)(((RuntimeArray*)L_74)->max_length)))))
		{
			goto IL_016f;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_016f:
	{
		int32_t L_75 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_75, 1));
		goto IL_012b;
	}

IL_0175:
	{
		int32_t L_76 = V_0;
		return L_76;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,OVRPassthroughLayer/PassthroughMeshInstance>::Initialize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_m0705F70F82610341BA6C5C5DABC8C5D30BDB0199_gshared (Dictionary_2_tEF99863F098CBEDBDF416E45D42452A1BD2A32BC* __this, int32_t ___capacity0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___capacity0;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_0, NULL);
		V_0 = L_1;
		__this->____freeList_3 = (-1);
		int32_t L_2 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_2);
		__this->____buckets_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets_0), (void*)L_3);
		int32_t L_4 = V_0;
		EntryU5BU5D_t96093E698ECF890AFC3EBA8FD35D922C55DEA886* L_5 = (EntryU5BU5D_t96093E698ECF890AFC3EBA8FD35D922C55DEA886*)(EntryU5BU5D_t96093E698ECF890AFC3EBA8FD35D922C55DEA886*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 44), (uint32_t)L_4);
		__this->____entries_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries_1), (void*)L_5);
		int32_t L_6 = V_0;
		return L_6;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,OVRPassthroughLayer/PassthroughMeshInstance>::TryInsert(TKey,TValue,System.Collections.Generic.InsertionBehavior)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_m3232D2FF3F2CCF0DFDE1DD20C869DA25CDD03420_gshared (Dictionary_2_tEF99863F098CBEDBDF416E45D42452A1BD2A32BC* __this, RuntimeObject* ___key0, PassthroughMeshInstance_tC15BBC616D213426B55C4E59C74175581D2EFFDE ___value1, uint8_t ___behavior2, const RuntimeMethod* method) 
{
	EntryU5BU5D_t96093E698ECF890AFC3EBA8FD35D922C55DEA886* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	int32_t V_8 = 0;
	int32_t* V_9 = NULL;
	Entry_t6CF4D930A0F94DDB4827D8C218B6316FF9327A8F* V_10 = NULL;
	RuntimeObject* V_11 = NULL;
	EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t G_B7_0 = 0;
	int32_t* G_B51_0 = NULL;
	{
		RuntimeObject* L_0 = ___key0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_000e:
	{
		int32_t L_1 = (int32_t)__this->____version_5;
		__this->____version_5 = ((int32_t)il2cpp_codegen_add(L_1, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		if (L_2)
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_3;
		L_3 = ((  int32_t (*) (Dictionary_2_tEF99863F098CBEDBDF416E45D42452A1BD2A32BC*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(__this, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
	}

IL_002c:
	{
		EntryU5BU5D_t96093E698ECF890AFC3EBA8FD35D922C55DEA886* L_4 = (EntryU5BU5D_t96093E698ECF890AFC3EBA8FD35D922C55DEA886*)__this->____entries_1;
		V_0 = L_4;
		RuntimeObject* L_5 = (RuntimeObject*)__this->____comparer_6;
		V_1 = L_5;
		RuntimeObject* L_6 = V_1;
		if (!L_6)
		{
			goto IL_0046;
		}
	}
	{
		RuntimeObject* L_7 = V_1;
		RuntimeObject* L_8 = ___key0;
		NullCheck(L_7);
		int32_t L_9;
		L_9 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Object>::GetHashCode(T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 41), L_7, L_8);
		G_B7_0 = L_9;
		goto IL_0053;
	}

IL_0046:
	{
		NullCheck((___key0));
		int32_t L_10;
		L_10 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, (___key0));
		G_B7_0 = L_10;
	}

IL_0053:
	{
		V_2 = ((int32_t)(G_B7_0&((int32_t)2147483647LL)));
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		int32_t L_12 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_13);
		NullCheck(L_11);
		V_4 = ((L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_12%((int32_t)(((RuntimeArray*)L_13)->max_length)))))));
		int32_t* L_14 = V_4;
		int32_t L_15 = *((int32_t*)L_14);
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_15, 1));
		RuntimeObject* L_16 = V_1;
		if (L_16)
		{
			goto IL_0187;
		}
	}
	{
		il2cpp_codegen_initobj((&V_11), sizeof(RuntimeObject*));
		RuntimeObject* L_17 = V_11;
		if (!L_17)
		{
			goto IL_010a;
		}
	}

IL_0091:
	{
		int32_t L_18 = V_5;
		EntryU5BU5D_t96093E698ECF890AFC3EBA8FD35D922C55DEA886* L_19 = V_0;
		NullCheck(L_19);
		if ((!(((uint32_t)L_18) < ((uint32_t)((int32_t)(((RuntimeArray*)L_19)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_t96093E698ECF890AFC3EBA8FD35D922C55DEA886* L_20 = V_0;
		int32_t L_21 = V_5;
		NullCheck(L_20);
		int32_t L_22 = (int32_t)((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___hashCode_0;
		int32_t L_23 = V_2;
		if ((!(((uint32_t)L_22) == ((uint32_t)L_23))))
		{
			goto IL_00ea;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_24;
		L_24 = ((  EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		EntryU5BU5D_t96093E698ECF890AFC3EBA8FD35D922C55DEA886* L_25 = V_0;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		RuntimeObject* L_27 = (RuntimeObject*)((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___key_2;
		RuntimeObject* L_28 = ___key0;
		NullCheck(L_24);
		bool L_29;
		L_29 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Object>::Equals(T,T) */, L_24, L_27, L_28);
		if (!L_29)
		{
			goto IL_00ea;
		}
	}
	{
		uint8_t L_30 = ___behavior2;
		if ((!(((uint32_t)L_30) == ((uint32_t)1))))
		{
			goto IL_00d9;
		}
	}
	{
		EntryU5BU5D_t96093E698ECF890AFC3EBA8FD35D922C55DEA886* L_31 = V_0;
		int32_t L_32 = V_5;
		NullCheck(L_31);
		PassthroughMeshInstance_tC15BBC616D213426B55C4E59C74175581D2EFFDE L_33 = ___value1;
		((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___value_3 = L_33;
		return (bool)1;
	}

IL_00d9:
	{
		uint8_t L_34 = ___behavior2;
		if ((!(((uint32_t)L_34) == ((uint32_t)2))))
		{
			goto IL_00e8;
		}
	}
	{
		RuntimeObject* L_35 = ___key0;
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_35, NULL);
	}

IL_00e8:
	{
		return (bool)0;
	}

IL_00ea:
	{
		EntryU5BU5D_t96093E698ECF890AFC3EBA8FD35D922C55DEA886* L_36 = V_0;
		int32_t L_37 = V_5;
		NullCheck(L_36);
		int32_t L_38 = (int32_t)((L_36)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_37)))->___next_1;
		V_5 = L_38;
		int32_t L_39 = V_3;
		EntryU5BU5D_t96093E698ECF890AFC3EBA8FD35D922C55DEA886* L_40 = V_0;
		NullCheck(L_40);
		if ((((int32_t)L_39) < ((int32_t)((int32_t)(((RuntimeArray*)L_40)->max_length)))))
		{
			goto IL_0104;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_0104:
	{
		int32_t L_41 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_41, 1));
		goto IL_0091;
	}

IL_010a:
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_42;
		L_42 = ((  EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		V_12 = L_42;
	}

IL_0111:
	{
		int32_t L_43 = V_5;
		EntryU5BU5D_t96093E698ECF890AFC3EBA8FD35D922C55DEA886* L_44 = V_0;
		NullCheck(L_44);
		if ((!(((uint32_t)L_43) < ((uint32_t)((int32_t)(((RuntimeArray*)L_44)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_t96093E698ECF890AFC3EBA8FD35D922C55DEA886* L_45 = V_0;
		int32_t L_46 = V_5;
		NullCheck(L_45);
		int32_t L_47 = (int32_t)((L_45)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_46)))->___hashCode_0;
		int32_t L_48 = V_2;
		if ((!(((uint32_t)L_47) == ((uint32_t)L_48))))
		{
			goto IL_0167;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_49 = V_12;
		EntryU5BU5D_t96093E698ECF890AFC3EBA8FD35D922C55DEA886* L_50 = V_0;
		int32_t L_51 = V_5;
		NullCheck(L_50);
		RuntimeObject* L_52 = (RuntimeObject*)((L_50)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_51)))->___key_2;
		RuntimeObject* L_53 = ___key0;
		NullCheck(L_49);
		bool L_54;
		L_54 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Object>::Equals(T,T) */, L_49, L_52, L_53);
		if (!L_54)
		{
			goto IL_0167;
		}
	}
	{
		uint8_t L_55 = ___behavior2;
		if ((!(((uint32_t)L_55) == ((uint32_t)1))))
		{
			goto IL_0156;
		}
	}
	{
		EntryU5BU5D_t96093E698ECF890AFC3EBA8FD35D922C55DEA886* L_56 = V_0;
		int32_t L_57 = V_5;
		NullCheck(L_56);
		PassthroughMeshInstance_tC15BBC616D213426B55C4E59C74175581D2EFFDE L_58 = ___value1;
		((L_56)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_57)))->___value_3 = L_58;
		return (bool)1;
	}

IL_0156:
	{
		uint8_t L_59 = ___behavior2;
		if ((!(((uint32_t)L_59) == ((uint32_t)2))))
		{
			goto IL_0165;
		}
	}
	{
		RuntimeObject* L_60 = ___key0;
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_60, NULL);
	}

IL_0165:
	{
		return (bool)0;
	}

IL_0167:
	{
		EntryU5BU5D_t96093E698ECF890AFC3EBA8FD35D922C55DEA886* L_61 = V_0;
		int32_t L_62 = V_5;
		NullCheck(L_61);
		int32_t L_63 = (int32_t)((L_61)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_62)))->___next_1;
		V_5 = L_63;
		int32_t L_64 = V_3;
		EntryU5BU5D_t96093E698ECF890AFC3EBA8FD35D922C55DEA886* L_65 = V_0;
		NullCheck(L_65);
		if ((((int32_t)L_64) < ((int32_t)((int32_t)(((RuntimeArray*)L_65)->max_length)))))
		{
			goto IL_0181;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_0181:
	{
		int32_t L_66 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_66, 1));
		goto IL_0111;
	}

IL_0187:
	{
		int32_t L_67 = V_5;
		EntryU5BU5D_t96093E698ECF890AFC3EBA8FD35D922C55DEA886* L_68 = V_0;
		NullCheck(L_68);
		if ((!(((uint32_t)L_67) < ((uint32_t)((int32_t)(((RuntimeArray*)L_68)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_t96093E698ECF890AFC3EBA8FD35D922C55DEA886* L_69 = V_0;
		int32_t L_70 = V_5;
		NullCheck(L_69);
		int32_t L_71 = (int32_t)((L_69)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_70)))->___hashCode_0;
		int32_t L_72 = V_2;
		if ((!(((uint32_t)L_71) == ((uint32_t)L_72))))
		{
			goto IL_01d9;
		}
	}
	{
		RuntimeObject* L_73 = V_1;
		EntryU5BU5D_t96093E698ECF890AFC3EBA8FD35D922C55DEA886* L_74 = V_0;
		int32_t L_75 = V_5;
		NullCheck(L_74);
		RuntimeObject* L_76 = (RuntimeObject*)((L_74)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_75)))->___key_2;
		RuntimeObject* L_77 = ___key0;
		NullCheck(L_73);
		bool L_78;
		L_78 = InterfaceFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Object>::Equals(T,T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 41), L_73, L_76, L_77);
		if (!L_78)
		{
			goto IL_01d9;
		}
	}
	{
		uint8_t L_79 = ___behavior2;
		if ((!(((uint32_t)L_79) == ((uint32_t)1))))
		{
			goto IL_01c8;
		}
	}
	{
		EntryU5BU5D_t96093E698ECF890AFC3EBA8FD35D922C55DEA886* L_80 = V_0;
		int32_t L_81 = V_5;
		NullCheck(L_80);
		PassthroughMeshInstance_tC15BBC616D213426B55C4E59C74175581D2EFFDE L_82 = ___value1;
		((L_80)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_81)))->___value_3 = L_82;
		return (bool)1;
	}

IL_01c8:
	{
		uint8_t L_83 = ___behavior2;
		if ((!(((uint32_t)L_83) == ((uint32_t)2))))
		{
			goto IL_01d7;
		}
	}
	{
		RuntimeObject* L_84 = ___key0;
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_84, NULL);
	}

IL_01d7:
	{
		return (bool)0;
	}

IL_01d9:
	{
		EntryU5BU5D_t96093E698ECF890AFC3EBA8FD35D922C55DEA886* L_85 = V_0;
		int32_t L_86 = V_5;
		NullCheck(L_85);
		int32_t L_87 = (int32_t)((L_85)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_86)))->___next_1;
		V_5 = L_87;
		int32_t L_88 = V_3;
		EntryU5BU5D_t96093E698ECF890AFC3EBA8FD35D922C55DEA886* L_89 = V_0;
		NullCheck(L_89);
		if ((((int32_t)L_88) < ((int32_t)((int32_t)(((RuntimeArray*)L_89)->max_length)))))
		{
			goto IL_01f3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_01f3:
	{
		int32_t L_90 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_90, 1));
		goto IL_0187;
	}

IL_01f9:
	{
		V_6 = (bool)0;
		V_7 = (bool)0;
		int32_t L_91 = (int32_t)__this->____freeCount_4;
		if ((((int32_t)L_91) <= ((int32_t)0)))
		{
			goto IL_0223;
		}
	}
	{
		int32_t L_92 = (int32_t)__this->____freeList_3;
		V_8 = L_92;
		V_7 = (bool)1;
		int32_t L_93 = (int32_t)__this->____freeCount_4;
		__this->____freeCount_4 = ((int32_t)il2cpp_codegen_subtract(L_93, 1));
		goto IL_0250;
	}

IL_0223:
	{
		int32_t L_94 = (int32_t)__this->____count_2;
		V_13 = L_94;
		int32_t L_95 = V_13;
		EntryU5BU5D_t96093E698ECF890AFC3EBA8FD35D922C55DEA886* L_96 = V_0;
		NullCheck(L_96);
		if ((!(((uint32_t)L_95) == ((uint32_t)((int32_t)(((RuntimeArray*)L_96)->max_length))))))
		{
			goto IL_023b;
		}
	}
	{
		((  void (*) (Dictionary_2_tEF99863F098CBEDBDF416E45D42452A1BD2A32BC*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 45)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 45));
		V_6 = (bool)1;
	}

IL_023b:
	{
		int32_t L_97 = V_13;
		V_8 = L_97;
		int32_t L_98 = V_13;
		__this->____count_2 = ((int32_t)il2cpp_codegen_add(L_98, 1));
		EntryU5BU5D_t96093E698ECF890AFC3EBA8FD35D922C55DEA886* L_99 = (EntryU5BU5D_t96093E698ECF890AFC3EBA8FD35D922C55DEA886*)__this->____entries_1;
		V_0 = L_99;
	}

IL_0250:
	{
		bool L_100 = V_6;
		if (L_100)
		{
			goto IL_0258;
		}
	}
	{
		int32_t* L_101 = V_4;
		G_B51_0 = L_101;
		goto IL_026d;
	}

IL_0258:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_102 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		int32_t L_103 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_104 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_104);
		NullCheck(L_102);
		G_B51_0 = ((L_102)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_103%((int32_t)(((RuntimeArray*)L_104)->max_length)))))));
	}

IL_026d:
	{
		V_9 = G_B51_0;
		EntryU5BU5D_t96093E698ECF890AFC3EBA8FD35D922C55DEA886* L_105 = V_0;
		int32_t L_106 = V_8;
		NullCheck(L_105);
		V_10 = ((L_105)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_106)));
		bool L_107 = V_7;
		if (!L_107)
		{
			goto IL_028a;
		}
	}
	{
		Entry_t6CF4D930A0F94DDB4827D8C218B6316FF9327A8F* L_108 = V_10;
		int32_t L_109 = (int32_t)L_108->___next_1;
		__this->____freeList_3 = L_109;
	}

IL_028a:
	{
		Entry_t6CF4D930A0F94DDB4827D8C218B6316FF9327A8F* L_110 = V_10;
		int32_t L_111 = V_2;
		L_110->___hashCode_0 = L_111;
		Entry_t6CF4D930A0F94DDB4827D8C218B6316FF9327A8F* L_112 = V_10;
		int32_t* L_113 = V_9;
		int32_t L_114 = *((int32_t*)L_113);
		L_112->___next_1 = ((int32_t)il2cpp_codegen_subtract(L_114, 1));
		Entry_t6CF4D930A0F94DDB4827D8C218B6316FF9327A8F* L_115 = V_10;
		RuntimeObject* L_116 = ___key0;
		L_115->___key_2 = L_116;
		Il2CppCodeGenWriteBarrier((void**)(&L_115->___key_2), (void*)L_116);
		Entry_t6CF4D930A0F94DDB4827D8C218B6316FF9327A8F* L_117 = V_10;
		PassthroughMeshInstance_tC15BBC616D213426B55C4E59C74175581D2EFFDE L_118 = ___value1;
		L_117->___value_3 = L_118;
		int32_t* L_119 = V_9;
		int32_t L_120 = V_8;
		*((int32_t*)L_119) = (int32_t)((int32_t)il2cpp_codegen_add(L_120, 1));
		return (bool)1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,OVRPassthroughLayer/PassthroughMeshInstance>::OnDeserialization(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_OnDeserialization_mDFC9CD03F185709E04494EA7C34B36A9473F0427_gshared (Dictionary_2_tEF99863F098CBEDBDF416E45D42452A1BD2A32BC* __this, RuntimeObject* ___sender0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	KeyValuePair_2U5BU5D_t27B5F90D6614A8F5D75BD15E0BA488F4FF7A6786* V_3 = NULL;
	int32_t V_4 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F(L_0, (RuntimeObject*)__this, (&V_0), ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_2 = V_0;
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_3, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, NULL);
		V_1 = L_4;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_5, _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69, NULL);
		V_2 = L_6;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_7 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 34)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		RuntimeObject* L_10;
		L_10 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_7, _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9, L_9, NULL);
		__this->____comparer_6 = ((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 41)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer_6), (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 41))));
		int32_t L_11 = V_2;
		if (!L_11)
		{
			goto IL_00c9;
		}
	}
	{
		int32_t L_12 = V_2;
		int32_t L_13;
		L_13 = ((  int32_t (*) (Dictionary_2_tEF99863F098CBEDBDF416E45D42452A1BD2A32BC*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(__this, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_14 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 37)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		NullCheck(L_14);
		RuntimeObject* L_17;
		L_17 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_14, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, L_16, NULL);
		V_3 = ((KeyValuePair_2U5BU5D_t27B5F90D6614A8F5D75BD15E0BA488F4FF7A6786*)Castclass((RuntimeObject*)L_17, il2cpp_rgctx_data(method->klass->rgctx_data, 46)));
		KeyValuePair_2U5BU5D_t27B5F90D6614A8F5D75BD15E0BA488F4FF7A6786* L_18 = V_3;
		if (L_18)
		{
			goto IL_007a;
		}
	}
	{
		ThrowHelper_ThrowSerializationException_m03BE2B48CD3617C32FBCEE16030F7C5563E04E16((int32_t)((int32_t)16), NULL);
	}

IL_007a:
	{
		V_4 = 0;
		goto IL_00c0;
	}

IL_007f:
	{
		KeyValuePair_2U5BU5D_t27B5F90D6614A8F5D75BD15E0BA488F4FF7A6786* L_19 = V_3;
		int32_t L_20 = V_4;
		NullCheck(L_19);
		RuntimeObject* L_21;
		L_21 = KeyValuePair_2_get_Key_mF8D0149496A6E9F97AA843ED176E84E689B58C92_inline(((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20))), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		if (L_21)
		{
			goto IL_009a;
		}
	}
	{
		ThrowHelper_ThrowSerializationException_m03BE2B48CD3617C32FBCEE16030F7C5563E04E16((int32_t)((int32_t)17), NULL);
	}

IL_009a:
	{
		KeyValuePair_2U5BU5D_t27B5F90D6614A8F5D75BD15E0BA488F4FF7A6786* L_22 = V_3;
		int32_t L_23 = V_4;
		NullCheck(L_22);
		RuntimeObject* L_24;
		L_24 = KeyValuePair_2_get_Key_mF8D0149496A6E9F97AA843ED176E84E689B58C92_inline(((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23))), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		KeyValuePair_2U5BU5D_t27B5F90D6614A8F5D75BD15E0BA488F4FF7A6786* L_25 = V_3;
		int32_t L_26 = V_4;
		NullCheck(L_25);
		PassthroughMeshInstance_tC15BBC616D213426B55C4E59C74175581D2EFFDE L_27;
		L_27 = KeyValuePair_2_get_Value_mEDECE70FEBCB73C3191AAB4215C0FC3505C3D06A_inline(((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26))), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		((  void (*) (Dictionary_2_tEF99863F098CBEDBDF416E45D42452A1BD2A32BC*, RuntimeObject*, PassthroughMeshInstance_tC15BBC616D213426B55C4E59C74175581D2EFFDE, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(__this, L_24, L_27, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		int32_t L_28 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_00c0:
	{
		int32_t L_29 = V_4;
		KeyValuePair_2U5BU5D_t27B5F90D6614A8F5D75BD15E0BA488F4FF7A6786* L_30 = V_3;
		NullCheck(L_30);
		if ((((int32_t)L_29) < ((int32_t)((int32_t)(((RuntimeArray*)L_30)->max_length)))))
		{
			goto IL_007f;
		}
	}
	{
		goto IL_00d0;
	}

IL_00c9:
	{
		__this->____buckets_0 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets_0), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
	}

IL_00d0:
	{
		int32_t L_31 = V_1;
		__this->____version_5 = L_31;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_32;
		L_32 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		NullCheck(L_32);
		bool L_33;
		L_33 = ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E(L_32, (RuntimeObject*)__this, ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,OVRPassthroughLayer/PassthroughMeshInstance>::Resize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m7CE532379A846F5F62CAF01CB268E839C65E0896_gshared (Dictionary_2_tEF99863F098CBEDBDF416E45D42452A1BD2A32BC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = (int32_t)__this->____count_2;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_ExpandPrime_m9A35EC171AA0EA16F7C9F71EE6FAD5A82565ADB9(L_0, NULL);
		((  void (*) (Dictionary_2_tEF99863F098CBEDBDF416E45D42452A1BD2A32BC*, int32_t, bool, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 47)))(__this, L_1, (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 47));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,OVRPassthroughLayer/PassthroughMeshInstance>::Resize(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m6EFCDFB2AE4D91091DD6521985CD5783034AD509_gshared (Dictionary_2_tEF99863F098CBEDBDF416E45D42452A1BD2A32BC* __this, int32_t ___newSize0, bool ___forceNewHashCodes1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	EntryU5BU5D_t96093E698ECF890AFC3EBA8FD35D922C55DEA886* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		int32_t L_0 = ___newSize0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = ___newSize0;
		EntryU5BU5D_t96093E698ECF890AFC3EBA8FD35D922C55DEA886* L_3 = (EntryU5BU5D_t96093E698ECF890AFC3EBA8FD35D922C55DEA886*)(EntryU5BU5D_t96093E698ECF890AFC3EBA8FD35D922C55DEA886*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 44), (uint32_t)L_2);
		V_1 = L_3;
		int32_t L_4 = (int32_t)__this->____count_2;
		V_2 = L_4;
		EntryU5BU5D_t96093E698ECF890AFC3EBA8FD35D922C55DEA886* L_5 = (EntryU5BU5D_t96093E698ECF890AFC3EBA8FD35D922C55DEA886*)__this->____entries_1;
		EntryU5BU5D_t96093E698ECF890AFC3EBA8FD35D922C55DEA886* L_6 = V_1;
		int32_t L_7 = V_2;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, 0, (RuntimeArray*)L_6, 0, L_7, NULL);
		il2cpp_codegen_initobj((&V_3), sizeof(RuntimeObject*));
		RuntimeObject* L_8 = V_3;
		bool L_9 = ___forceNewHashCodes1;
		if (!((int32_t)(((((RuntimeObject*)(RuntimeObject*)L_8) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0)&(int32_t)L_9)))
		{
			goto IL_0084;
		}
	}
	{
		V_4 = 0;
		goto IL_007f;
	}

IL_003e:
	{
		EntryU5BU5D_t96093E698ECF890AFC3EBA8FD35D922C55DEA886* L_10 = V_1;
		int32_t L_11 = V_4;
		NullCheck(L_10);
		int32_t L_12 = (int32_t)((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)))->___hashCode_0;
		if ((((int32_t)L_12) < ((int32_t)0)))
		{
			goto IL_0079;
		}
	}
	{
		EntryU5BU5D_t96093E698ECF890AFC3EBA8FD35D922C55DEA886* L_13 = V_1;
		int32_t L_14 = V_4;
		NullCheck(L_13);
		EntryU5BU5D_t96093E698ECF890AFC3EBA8FD35D922C55DEA886* L_15 = V_1;
		int32_t L_16 = V_4;
		NullCheck(L_15);
		RuntimeObject** L_17 = (RuntimeObject**)(&((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___key_2);
		NullCheck((*L_17));
		int32_t L_18;
		L_18 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, (*L_17));
		((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)))->___hashCode_0 = ((int32_t)(L_18&((int32_t)2147483647LL)));
	}

IL_0079:
	{
		int32_t L_19 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_007f:
	{
		int32_t L_20 = V_4;
		int32_t L_21 = V_2;
		if ((((int32_t)L_20) < ((int32_t)L_21)))
		{
			goto IL_003e;
		}
	}

IL_0084:
	{
		V_5 = 0;
		goto IL_00cb;
	}

IL_0089:
	{
		EntryU5BU5D_t96093E698ECF890AFC3EBA8FD35D922C55DEA886* L_22 = V_1;
		int32_t L_23 = V_5;
		NullCheck(L_22);
		int32_t L_24 = (int32_t)((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23)))->___hashCode_0;
		if ((((int32_t)L_24) < ((int32_t)0)))
		{
			goto IL_00c5;
		}
	}
	{
		EntryU5BU5D_t96093E698ECF890AFC3EBA8FD35D922C55DEA886* L_25 = V_1;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		int32_t L_27 = (int32_t)((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___hashCode_0;
		int32_t L_28 = ___newSize0;
		V_6 = ((int32_t)(L_27%L_28));
		EntryU5BU5D_t96093E698ECF890AFC3EBA8FD35D922C55DEA886* L_29 = V_1;
		int32_t L_30 = V_5;
		NullCheck(L_29);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = V_0;
		int32_t L_32 = V_6;
		NullCheck(L_31);
		int32_t L_33 = L_32;
		int32_t L_34 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		((L_29)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_30)))->___next_1 = ((int32_t)il2cpp_codegen_subtract(L_34, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_35 = V_0;
		int32_t L_36 = V_6;
		int32_t L_37 = V_5;
		NullCheck(L_35);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(L_36), (int32_t)((int32_t)il2cpp_codegen_add(L_37, 1)));
	}

IL_00c5:
	{
		int32_t L_38 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
	}

IL_00cb:
	{
		int32_t L_39 = V_5;
		int32_t L_40 = V_2;
		if ((((int32_t)L_39) < ((int32_t)L_40)))
		{
			goto IL_0089;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_41 = V_0;
		__this->____buckets_0 = L_41;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets_0), (void*)L_41);
		EntryU5BU5D_t96093E698ECF890AFC3EBA8FD35D922C55DEA886* L_42 = V_1;
		__this->____entries_1 = L_42;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries_1), (void*)L_42);
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,OVRPassthroughLayer/PassthroughMeshInstance>::Remove(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m8AA750C53258656A035590D3EB686F41F36B0030_gshared (Dictionary_2_tEF99863F098CBEDBDF416E45D42452A1BD2A32BC* __this, RuntimeObject* ___key0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Entry_t6CF4D930A0F94DDB4827D8C218B6316FF9327A8F* V_4 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	RuntimeObject* G_B10_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	bool G_B11_0 = false;
	{
		RuntimeObject* L_0 = ___key0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_000e:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		if (!L_1)
		{
			goto IL_0149;
		}
	}
	{
		RuntimeObject* L_2 = (RuntimeObject*)__this->____comparer_6;
		RuntimeObject* L_3 = L_2;
		G_B4_0 = L_3;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_0032;
		}
	}
	{
		NullCheck((___key0));
		int32_t L_4;
		L_4 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, (___key0));
		G_B6_0 = L_4;
		goto IL_0038;
	}

IL_0032:
	{
		RuntimeObject* L_5 = ___key0;
		NullCheck(G_B5_0);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Object>::GetHashCode(T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 41), G_B5_0, L_5);
		G_B6_0 = L_6;
	}

IL_0038:
	{
		V_0 = ((int32_t)(G_B6_0&((int32_t)2147483647LL)));
		int32_t L_7 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_8);
		V_1 = ((int32_t)(L_7%((int32_t)(((RuntimeArray*)L_8)->max_length))));
		V_2 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		int32_t L_10 = V_1;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		int32_t L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
		goto IL_0142;
	}

IL_005c:
	{
		EntryU5BU5D_t96093E698ECF890AFC3EBA8FD35D922C55DEA886* L_13 = (EntryU5BU5D_t96093E698ECF890AFC3EBA8FD35D922C55DEA886*)__this->____entries_1;
		int32_t L_14 = V_3;
		NullCheck(L_13);
		V_4 = ((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)));
		Entry_t6CF4D930A0F94DDB4827D8C218B6316FF9327A8F* L_15 = V_4;
		int32_t L_16 = (int32_t)L_15->___hashCode_0;
		int32_t L_17 = V_0;
		if ((!(((uint32_t)L_16) == ((uint32_t)L_17))))
		{
			goto IL_0138;
		}
	}
	{
		RuntimeObject* L_18 = (RuntimeObject*)__this->____comparer_6;
		RuntimeObject* L_19 = L_18;
		G_B9_0 = L_19;
		if (L_19)
		{
			G_B10_0 = L_19;
			goto IL_0095;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_20;
		L_20 = ((  EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		Entry_t6CF4D930A0F94DDB4827D8C218B6316FF9327A8F* L_21 = V_4;
		RuntimeObject* L_22 = (RuntimeObject*)L_21->___key_2;
		RuntimeObject* L_23 = ___key0;
		NullCheck(L_20);
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Object>::Equals(T,T) */, L_20, L_22, L_23);
		G_B11_0 = L_24;
		goto IL_00a2;
	}

IL_0095:
	{
		Entry_t6CF4D930A0F94DDB4827D8C218B6316FF9327A8F* L_25 = V_4;
		RuntimeObject* L_26 = (RuntimeObject*)L_25->___key_2;
		RuntimeObject* L_27 = ___key0;
		NullCheck(G_B10_0);
		bool L_28;
		L_28 = InterfaceFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Object>::Equals(T,T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 41), G_B10_0, L_26, L_27);
		G_B11_0 = L_28;
	}

IL_00a2:
	{
		if (!G_B11_0)
		{
			goto IL_0138;
		}
	}
	{
		int32_t L_29 = V_2;
		if ((((int32_t)L_29) >= ((int32_t)0)))
		{
			goto IL_00be;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_30 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		int32_t L_31 = V_1;
		Entry_t6CF4D930A0F94DDB4827D8C218B6316FF9327A8F* L_32 = V_4;
		int32_t L_33 = (int32_t)L_32->___next_1;
		NullCheck(L_30);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_31), (int32_t)((int32_t)il2cpp_codegen_add(L_33, 1)));
		goto IL_00d6;
	}

IL_00be:
	{
		EntryU5BU5D_t96093E698ECF890AFC3EBA8FD35D922C55DEA886* L_34 = (EntryU5BU5D_t96093E698ECF890AFC3EBA8FD35D922C55DEA886*)__this->____entries_1;
		int32_t L_35 = V_2;
		NullCheck(L_34);
		Entry_t6CF4D930A0F94DDB4827D8C218B6316FF9327A8F* L_36 = V_4;
		int32_t L_37 = (int32_t)L_36->___next_1;
		((L_34)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_35)))->___next_1 = L_37;
	}

IL_00d6:
	{
		Entry_t6CF4D930A0F94DDB4827D8C218B6316FF9327A8F* L_38 = V_4;
		L_38->___hashCode_0 = (-1);
		Entry_t6CF4D930A0F94DDB4827D8C218B6316FF9327A8F* L_39 = V_4;
		int32_t L_40 = (int32_t)__this->____freeList_3;
		L_39->___next_1 = L_40;
		if (!true)
		{
			goto IL_00ff;
		}
	}
	{
		Entry_t6CF4D930A0F94DDB4827D8C218B6316FF9327A8F* L_41 = V_4;
		RuntimeObject** L_42 = (RuntimeObject**)(&L_41->___key_2);
		il2cpp_codegen_initobj(L_42, sizeof(RuntimeObject*));
	}

IL_00ff:
	{
		if (!false)
		{
			goto IL_0113;
		}
	}
	{
		Entry_t6CF4D930A0F94DDB4827D8C218B6316FF9327A8F* L_43 = V_4;
		PassthroughMeshInstance_tC15BBC616D213426B55C4E59C74175581D2EFFDE* L_44 = (PassthroughMeshInstance_tC15BBC616D213426B55C4E59C74175581D2EFFDE*)(&L_43->___value_3);
		il2cpp_codegen_initobj(L_44, sizeof(PassthroughMeshInstance_tC15BBC616D213426B55C4E59C74175581D2EFFDE));
	}

IL_0113:
	{
		int32_t L_45 = V_3;
		__this->____freeList_3 = L_45;
		int32_t L_46 = (int32_t)__this->____freeCount_4;
		__this->____freeCount_4 = ((int32_t)il2cpp_codegen_add(L_46, 1));
		int32_t L_47 = (int32_t)__this->____version_5;
		__this->____version_5 = ((int32_t)il2cpp_codegen_add(L_47, 1));
		return (bool)1;
	}

IL_0138:
	{
		int32_t L_48 = V_3;
		V_2 = L_48;
		Entry_t6CF4D930A0F94DDB4827D8C218B6316FF9327A8F* L_49 = V_4;
		int32_t L_50 = (int32_t)L_49->___next_1;
		V_3 = L_50;
	}

IL_0142:
	{
		int32_t L_51 = V_3;
		if ((((int32_t)L_51) >= ((int32_t)0)))
		{
			goto IL_005c;
		}
	}

IL_0149:
	{
		return (bool)0;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,OVRPassthroughLayer/PassthroughMeshInstance>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m1816A43D9DCD11C91FBA7813259C1E3EB866370D_gshared (Dictionary_2_tEF99863F098CBEDBDF416E45D42452A1BD2A32BC* __this, RuntimeObject* ___key0, PassthroughMeshInstance_tC15BBC616D213426B55C4E59C74175581D2EFFDE* ___value1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = ___key0;
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_tEF99863F098CBEDBDF416E45D42452A1BD2A32BC*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 20)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0025;
		}
	}
	{
		PassthroughMeshInstance_tC15BBC616D213426B55C4E59C74175581D2EFFDE* L_3 = ___value1;
		EntryU5BU5D_t96093E698ECF890AFC3EBA8FD35D922C55DEA886* L_4 = (EntryU5BU5D_t96093E698ECF890AFC3EBA8FD35D922C55DEA886*)__this->____entries_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		PassthroughMeshInstance_tC15BBC616D213426B55C4E59C74175581D2EFFDE L_6 = (PassthroughMeshInstance_tC15BBC616D213426B55C4E59C74175581D2EFFDE)((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value_3;
		*(PassthroughMeshInstance_tC15BBC616D213426B55C4E59C74175581D2EFFDE*)L_3 = L_6;
		return (bool)1;
	}

IL_0025:
	{
		PassthroughMeshInstance_tC15BBC616D213426B55C4E59C74175581D2EFFDE* L_7 = ___value1;
		il2cpp_codegen_initobj(L_7, sizeof(PassthroughMeshInstance_tC15BBC616D213426B55C4E59C74175581D2EFFDE));
		return (bool)0;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,OVRPassthroughLayer/PassthroughMeshInstance>::TryAdd(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryAdd_mA41ACFEEC61B0F0FE1F97AE06EED83983DB1CF2C_gshared (Dictionary_2_tEF99863F098CBEDBDF416E45D42452A1BD2A32BC* __this, RuntimeObject* ___key0, PassthroughMeshInstance_tC15BBC616D213426B55C4E59C74175581D2EFFDE ___value1, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___key0;
		PassthroughMeshInstance_tC15BBC616D213426B55C4E59C74175581D2EFFDE L_1 = ___value1;
		bool L_2;
		L_2 = ((  bool (*) (Dictionary_2_tEF99863F098CBEDBDF416E45D42452A1BD2A32BC*, RuntimeObject*, PassthroughMeshInstance_tC15BBC616D213426B55C4E59C74175581D2EFFDE, uint8_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 22)))(__this, L_0, L_1, (uint8_t)0, il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		return L_2;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,OVRPassthroughLayer/PassthroughMeshInstance>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_mDBEC945F800DFDAD3B891FD1DBDBCA764879B756_gshared (Dictionary_2_tEF99863F098CBEDBDF416E45D42452A1BD2A32BC* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,OVRPassthroughLayer/PassthroughMeshInstance>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m4D091A709ED0E0A06299117E344095110CDE0ED4_gshared (Dictionary_2_tEF99863F098CBEDBDF416E45D42452A1BD2A32BC* __this, KeyValuePair_2U5BU5D_t27B5F90D6614A8F5D75BD15E0BA488F4FF7A6786* ___array0, int32_t ___index1, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2U5BU5D_t27B5F90D6614A8F5D75BD15E0BA488F4FF7A6786* L_0 = ___array0;
		int32_t L_1 = ___index1;
		((  void (*) (Dictionary_2_tEF99863F098CBEDBDF416E45D42452A1BD2A32BC*, KeyValuePair_2U5BU5D_t27B5F90D6614A8F5D75BD15E0BA488F4FF7A6786*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 36)))(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 36));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,OVRPassthroughLayer/PassthroughMeshInstance>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_ICollection_CopyTo_m3111128503A7911D49C3EA98B955AB5DAB5CC0A8_gshared (Dictionary_2_tEF99863F098CBEDBDF416E45D42452A1BD2A32BC* __this, RuntimeArray* ___array0, int32_t ___index1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_t27B5F90D6614A8F5D75BD15E0BA488F4FF7A6786* V_0 = NULL;
	DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* V_1 = NULL;
	EntryU5BU5D_t96093E698ECF890AFC3EBA8FD35D922C55DEA886* V_2 = NULL;
	int32_t V_3 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_4 = NULL;
	int32_t V_5 = 0;
	EntryU5BU5D_t96093E698ECF890AFC3EBA8FD35D922C55DEA886* V_6 = NULL;
	int32_t V_7 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___array0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___array0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(L_1, NULL);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___array0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___index1;
		RuntimeArray* L_6 = ___array0;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_6, NULL);
		if ((!(((uint32_t)L_5) > ((uint32_t)L_7))))
		{
			goto IL_0035;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0035:
	{
		RuntimeArray* L_8 = ___array0;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_8, NULL);
		int32_t L_10 = ___index1;
		int32_t L_11;
		L_11 = ((  int32_t (*) (Dictionary_2_tEF99863F098CBEDBDF416E45D42452A1BD2A32BC*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 29)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_9, L_10))) >= ((int32_t)L_11)))
		{
			goto IL_004b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)5, NULL);
	}

IL_004b:
	{
		RuntimeArray* L_12 = ___array0;
		V_0 = ((KeyValuePair_2U5BU5D_t27B5F90D6614A8F5D75BD15E0BA488F4FF7A6786*)IsInst((RuntimeObject*)L_12, il2cpp_rgctx_data(method->klass->rgctx_data, 46)));
		KeyValuePair_2U5BU5D_t27B5F90D6614A8F5D75BD15E0BA488F4FF7A6786* L_13 = V_0;
		if (!L_13)
		{
			goto IL_005e;
		}
	}
	{
		KeyValuePair_2U5BU5D_t27B5F90D6614A8F5D75BD15E0BA488F4FF7A6786* L_14 = V_0;
		int32_t L_15 = ___index1;
		((  void (*) (Dictionary_2_tEF99863F098CBEDBDF416E45D42452A1BD2A32BC*, KeyValuePair_2U5BU5D_t27B5F90D6614A8F5D75BD15E0BA488F4FF7A6786*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 36)))(__this, L_14, L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 36));
		return;
	}

IL_005e:
	{
		RuntimeArray* L_16 = ___array0;
		V_1 = ((DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533*)IsInst((RuntimeObject*)L_16, DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var));
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_17 = V_1;
		if (!L_17)
		{
			goto IL_00c3;
		}
	}
	{
		EntryU5BU5D_t96093E698ECF890AFC3EBA8FD35D922C55DEA886* L_18 = (EntryU5BU5D_t96093E698ECF890AFC3EBA8FD35D922C55DEA886*)__this->____entries_1;
		V_2 = L_18;
		V_3 = 0;
		goto IL_00b9;
	}

IL_0073:
	{
		EntryU5BU5D_t96093E698ECF890AFC3EBA8FD35D922C55DEA886* L_19 = V_2;
		int32_t L_20 = V_3;
		NullCheck(L_19);
		int32_t L_21 = (int32_t)((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20)))->___hashCode_0;
		if ((((int32_t)L_21) < ((int32_t)0)))
		{
			goto IL_00b5;
		}
	}
	{
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_22 = V_1;
		int32_t L_23 = ___index1;
		int32_t L_24 = L_23;
		___index1 = ((int32_t)il2cpp_codegen_add(L_24, 1));
		EntryU5BU5D_t96093E698ECF890AFC3EBA8FD35D922C55DEA886* L_25 = V_2;
		int32_t L_26 = V_3;
		NullCheck(L_25);
		RuntimeObject* L_27 = (RuntimeObject*)((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___key_2;
		EntryU5BU5D_t96093E698ECF890AFC3EBA8FD35D922C55DEA886* L_28 = V_2;
		int32_t L_29 = V_3;
		NullCheck(L_28);
		PassthroughMeshInstance_tC15BBC616D213426B55C4E59C74175581D2EFFDE L_30 = (PassthroughMeshInstance_tC15BBC616D213426B55C4E59C74175581D2EFFDE)((L_28)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_29)))->___value_3;
		PassthroughMeshInstance_tC15BBC616D213426B55C4E59C74175581D2EFFDE L_31 = L_30;
		RuntimeObject* L_32 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 28), &L_31);
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_33;
		memset((&L_33), 0, sizeof(L_33));
		DictionaryEntry__ctor_m2768353E53A75C4860E34B37DAF1342120C5D1EA((&L_33), L_27, L_32, /*hidden argument*/NULL);
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(L_24), (DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB)L_33);
	}

IL_00b5:
	{
		int32_t L_34 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_00b9:
	{
		int32_t L_35 = V_3;
		int32_t L_36 = (int32_t)__this->____count_2;
		if ((((int32_t)L_35) < ((int32_t)L_36)))
		{
			goto IL_0073;
		}
	}
	{
		return;
	}

IL_00c3:
	{
		RuntimeArray* L_37 = ___array0;
		V_4 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_37, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_38 = V_4;
		if (L_38)
		{
			goto IL_00d4;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_00d4:
	{
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_39 = (int32_t)__this->____count_2;
			V_5 = L_39;
			EntryU5BU5D_t96093E698ECF890AFC3EBA8FD35D922C55DEA886* L_40 = (EntryU5BU5D_t96093E698ECF890AFC3EBA8FD35D922C55DEA886*)__this->____entries_1;
			V_6 = L_40;
			V_7 = 0;
			goto IL_0130_1;
		}

IL_00ea_1:
		{
			EntryU5BU5D_t96093E698ECF890AFC3EBA8FD35D922C55DEA886* L_41 = V_6;
			int32_t L_42 = V_7;
			NullCheck(L_41);
			int32_t L_43 = (int32_t)((L_41)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_42)))->___hashCode_0;
			if ((((int32_t)L_43) < ((int32_t)0)))
			{
				goto IL_012a_1;
			}
		}
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_44 = V_4;
			int32_t L_45 = ___index1;
			int32_t L_46 = L_45;
			___index1 = ((int32_t)il2cpp_codegen_add(L_46, 1));
			EntryU5BU5D_t96093E698ECF890AFC3EBA8FD35D922C55DEA886* L_47 = V_6;
			int32_t L_48 = V_7;
			NullCheck(L_47);
			RuntimeObject* L_49 = (RuntimeObject*)((L_47)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_48)))->___key_2;
			EntryU5BU5D_t96093E698ECF890AFC3EBA8FD35D922C55DEA886* L_50 = V_6;
			int32_t L_51 = V_7;
			NullCheck(L_50);
			PassthroughMeshInstance_tC15BBC616D213426B55C4E59C74175581D2EFFDE L_52 = (PassthroughMeshInstance_tC15BBC616D213426B55C4E59C74175581D2EFFDE)((L_50)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_51)))->___value_3;
			KeyValuePair_2_tC7EE4E7E2715DB2FD352264EB3FAF4B38BBF15DF L_53;
			memset((&L_53), 0, sizeof(L_53));
			KeyValuePair_2__ctor_mFB34CAD11D62DC93018E1826B3531AA2F4267402((&L_53), L_49, L_52, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 31));
			KeyValuePair_2_tC7EE4E7E2715DB2FD352264EB3FAF4B38BBF15DF L_54 = L_53;
			RuntimeObject* L_55 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 30), &L_54);
			NullCheck(L_44);
			ArrayElementTypeCheck (L_44, L_55);
			(L_44)->SetAt(static_cast<il2cpp_array_size_t>(L_46), (RuntimeObject*)L_55);
		}

IL_012a_1:
		{
			int32_t L_56 = V_7;
			V_7 = ((int32_t)il2cpp_codegen_add(L_56, 1));
		}

IL_0130_1:
		{
			int32_t L_57 = V_7;
			int32_t L_58 = V_5;
			if ((((int32_t)L_57) < ((int32_t)L_58)))
			{
				goto IL_00ea_1;
			}
		}
		{
			goto IL_0140;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0138;
		}
		throw e;
	}

CATCH_0138:
	{// begin catch(System.ArrayTypeMismatchException)
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0140;
	}// end catch (depth: 1)

IL_0140:
	{
		return;
	}
}
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,OVRPassthroughLayer/PassthroughMeshInstance>::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IEnumerable_GetEnumerator_mCB0AB03A7F7F94362B2F49C6D6FABB4750D20423_gshared (Dictionary_2_tEF99863F098CBEDBDF416E45D42452A1BD2A32BC* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t295153DF2610B637A0463DEDA52FE7BF360F0113 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m6CCFF0E2A0A9B3066DA75F3E35632527FBD59394((&L_0), __this, 2, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		Enumerator_t295153DF2610B637A0463DEDA52FE7BF360F0113 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 32), &L_1);
		return (RuntimeObject*)L_2;
	}
}
// System.Object System.Collections.Generic.Dictionary`2<System.Object,OVRPassthroughLayer/PassthroughMeshInstance>::System.Collections.ICollection.get_SyncRoot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_ICollection_get_SyncRoot_mACE4E12EC2237FB5EDCB0B7BF554CD05B57ACAB5_gshared (Dictionary_2_tEF99863F098CBEDBDF416E45D42452A1BD2A32BC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____syncRoot_9;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot_9);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = (RuntimeObject*)__this->____syncRoot_9;
		return L_4;
	}
}
// System.Object System.Collections.Generic.Dictionary`2<System.Object,OVRPassthroughLayer/PassthroughMeshInstance>::System.Collections.IDictionary.get_Item(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_get_Item_m7B451BC3B14150B80A82D1E20F9B0567B660F0DA_gshared (Dictionary_2_tEF99863F098CBEDBDF416E45D42452A1BD2A32BC* __this, RuntimeObject* ___key0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = ___key0;
		bool L_1;
		L_1 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 48)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 48));
		if (!L_1)
		{
			goto IL_0030;
		}
	}
	{
		RuntimeObject* L_2 = ___key0;
		int32_t L_3;
		L_3 = ((  int32_t (*) (Dictionary_2_tEF99863F098CBEDBDF416E45D42452A1BD2A32BC*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 20)))(__this, ((RuntimeObject*)Castclass((RuntimeObject*)L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 21))), il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		V_0 = L_3;
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		EntryU5BU5D_t96093E698ECF890AFC3EBA8FD35D922C55DEA886* L_5 = (EntryU5BU5D_t96093E698ECF890AFC3EBA8FD35D922C55DEA886*)__this->____entries_1;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		PassthroughMeshInstance_tC15BBC616D213426B55C4E59C74175581D2EFFDE L_7 = (PassthroughMeshInstance_tC15BBC616D213426B55C4E59C74175581D2EFFDE)((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->___value_3;
		PassthroughMeshInstance_tC15BBC616D213426B55C4E59C74175581D2EFFDE L_8 = L_7;
		RuntimeObject* L_9 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 28), &L_8);
		return L_9;
	}

IL_0030:
	{
		return NULL;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,OVRPassthroughLayer/PassthroughMeshInstance>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_IDictionary_set_Item_m5C6CA82CD54CB5CDE6E8477A234E151DAFF88138_gshared (Dictionary_2_tEF99863F098CBEDBDF416E45D42452A1BD2A32BC* __this, RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		RuntimeObject* L_0 = ___key0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___value1;
		((  void (*) (RuntimeObject*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 50)))(L_1, (int32_t)((int32_t)15), il2cpp_rgctx_method(method->klass->rgctx_data, 50));
	}
	try
	{// begin try (depth: 1)
		{
			RuntimeObject* L_2 = ___key0;
			V_0 = ((RuntimeObject*)Castclass((RuntimeObject*)L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 21)));
		}
		try
		{// begin try (depth: 2)
			RuntimeObject* L_3 = V_0;
			RuntimeObject* L_4 = ___value1;
			((  void (*) (Dictionary_2_tEF99863F098CBEDBDF416E45D42452A1BD2A32BC*, RuntimeObject*, PassthroughMeshInstance_tC15BBC616D213426B55C4E59C74175581D2EFFDE, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 51)))(__this, L_3, ((*(PassthroughMeshInstance_tC15BBC616D213426B55C4E59C74175581D2EFFDE*)((PassthroughMeshInstance_tC15BBC616D213426B55C4E59C74175581D2EFFDE*)(PassthroughMeshInstance_tC15BBC616D213426B55C4E59C74175581D2EFFDE*)UnBox(L_4, il2cpp_rgctx_data(method->klass->rgctx_data, 28))))), il2cpp_rgctx_method(method->klass->rgctx_data, 51));
			goto IL_003a_1;
		}// end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0027_1;
			}
			throw e;
		}

CATCH_0027_1:
		{// begin catch(System.InvalidCastException)
			RuntimeObject* L_5 = ___value1;
			RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 52)) };
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
			Type_t* L_7;
			L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
			ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_5, L_7, NULL);
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_003a_1;
		}// end catch (depth: 2)

IL_003a_1:
		{
			goto IL_004f;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003c;
		}
		throw e;
	}

CATCH_003c:
	{// begin catch(System.InvalidCastException)
		RuntimeObject* L_8 = ___key0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 53)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		ThrowHelper_ThrowWrongKeyTypeArgumentException_m90E5BCE2CB10EEC16F254C237121C6816C4D6982(L_8, L_10, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_004f;
	}// end catch (depth: 1)

IL_004f:
	{
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,OVRPassthroughLayer/PassthroughMeshInstance>::IsCompatibleKey(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_IsCompatibleKey_mB6C988CC21D59900306EDFEBA8DABCDD46E9DD9C_gshared (RuntimeObject* ___key0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___key0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___key0;
		return (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_1, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 21)))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,OVRPassthroughLayer/PassthroughMeshInstance>::System.Collections.IDictionary.Contains(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_IDictionary_Contains_mC4B20ED8887E14259680639A33A8BAC2AB689402_gshared (Dictionary_2_tEF99863F098CBEDBDF416E45D42452A1BD2A32BC* __this, RuntimeObject* ___key0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___key0;
		bool L_1;
		L_1 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 48)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 48));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___key0;
		bool L_3;
		L_3 = ((  bool (*) (Dictionary_2_tEF99863F098CBEDBDF416E45D42452A1BD2A32BC*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 54)))(__this, ((RuntimeObject*)Castclass((RuntimeObject*)L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 21))), il2cpp_rgctx_method(method->klass->rgctx_data, 54));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,OVRPassthroughLayer/PassthroughMeshInstance>::System.Collections.IDictionary.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_GetEnumerator_m31AF241DB5850D1FAD1E7380CC41DECC67CA906D_gshared (Dictionary_2_tEF99863F098CBEDBDF416E45D42452A1BD2A32BC* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t295153DF2610B637A0463DEDA52FE7BF360F0113 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m6CCFF0E2A0A9B3066DA75F3E35632527FBD59394((&L_0), __this, 1, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		Enumerator_t295153DF2610B637A0463DEDA52FE7BF360F0113 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 32), &L_1);
		return (RuntimeObject*)L_2;
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
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.UIElements.StyleComplexSelector/PseudoStateData>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m3C5862A628EEC02A20BF1DD0DAC66C872AA86B71_gshared (Dictionary_2_t377C2B6CAA20982B0AC7A180E3800172E88C8BDE* __this, const RuntimeMethod* method) 
{
	{
		((  void (*) (Dictionary_2_t377C2B6CAA20982B0AC7A180E3800172E88C8BDE*, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, 0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.UIElements.StyleComplexSelector/PseudoStateData>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mB956F808517D4D990AF94FE7947A443C315A5E78_gshared (Dictionary_2_t377C2B6CAA20982B0AC7A180E3800172E88C8BDE* __this, int32_t ___capacity0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___capacity0;
		((  void (*) (Dictionary_2_t377C2B6CAA20982B0AC7A180E3800172E88C8BDE*, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.UIElements.StyleComplexSelector/PseudoStateData>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m4120773F597B820BDC821E2E0F3A09C2D9B70CDC_gshared (Dictionary_2_t377C2B6CAA20982B0AC7A180E3800172E88C8BDE* __this, RuntimeObject* ___comparer0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___comparer0;
		((  void (*) (Dictionary_2_t377C2B6CAA20982B0AC7A180E3800172E88C8BDE*, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, 0, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.UIElements.StyleComplexSelector/PseudoStateData>::.ctor(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mD9B273A8BBD11644ED545F73A8C144FC7C77C228_gshared (Dictionary_2_t377C2B6CAA20982B0AC7A180E3800172E88C8BDE* __this, int32_t ___capacity0, RuntimeObject* ___comparer1, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___capacity0;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0011;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97((int32_t)((int32_t)12), NULL);
	}

IL_0011:
	{
		int32_t L_1 = ___capacity0;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_2 = ___capacity0;
		int32_t L_3;
		L_3 = ((  int32_t (*) (Dictionary_2_t377C2B6CAA20982B0AC7A180E3800172E88C8BDE*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(__this, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
	}

IL_001d:
	{
		RuntimeObject* L_4 = ___comparer1;
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_5;
		L_5 = ((  EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if ((((RuntimeObject*)(RuntimeObject*)L_4) == ((RuntimeObject*)(EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2*)L_5)))
		{
			goto IL_002c;
		}
	}
	{
		RuntimeObject* L_6 = ___comparer1;
		__this->____comparer_6 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer_6), (void*)L_6);
	}

IL_002c:
	{
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.UIElements.StyleComplexSelector/PseudoStateData>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m65424E47B6BDA332DD1AC61D8DA0C89E6C955E4E_gshared (Dictionary_2_t377C2B6CAA20982B0AC7A180E3800172E88C8BDE* __this, RuntimeObject* ___dictionary0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___dictionary0;
		((  void (*) (Dictionary_2_t377C2B6CAA20982B0AC7A180E3800172E88C8BDE*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)))(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.UIElements.StyleComplexSelector/PseudoStateData>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5B8E96942A8B8D9B44A3A8E85A955EC75A091DFF_gshared (Dictionary_2_t377C2B6CAA20982B0AC7A180E3800172E88C8BDE* __this, RuntimeObject* ___dictionary0, RuntimeObject* ___comparer1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	EntryU5BU5D_t68CA0D1367AB2807A569CCED387E01680CB52ED7* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	KeyValuePair_2_t852F23A435B740B3D14D3CE08B14FFD4690334E7 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Dictionary_2_t377C2B6CAA20982B0AC7A180E3800172E88C8BDE* G_B2_0 = NULL;
	Dictionary_2_t377C2B6CAA20982B0AC7A180E3800172E88C8BDE* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	Dictionary_2_t377C2B6CAA20982B0AC7A180E3800172E88C8BDE* G_B3_1 = NULL;
	{
		RuntimeObject* L_0 = ___dictionary0;
		G_B1_0 = __this;
		if (L_0)
		{
			G_B2_0 = __this;
			goto IL_0007;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_000d;
	}

IL_0007:
	{
		RuntimeObject* L_1 = ___dictionary0;
		NullCheck((RuntimeObject*)L_1);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.UIElements.StyleComplexSelector/PseudoStateData>>::get_Count() */, il2cpp_rgctx_data(method->klass->rgctx_data, 5), (RuntimeObject*)L_1);
		G_B3_0 = L_2;
		G_B3_1 = G_B2_0;
	}

IL_000d:
	{
		RuntimeObject* L_3 = ___comparer1;
		((  void (*) (Dictionary_2_t377C2B6CAA20982B0AC7A180E3800172E88C8BDE*, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(G_B3_1, G_B3_0, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		RuntimeObject* L_4 = ___dictionary0;
		if (L_4)
		{
			goto IL_001c;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)1, NULL);
	}

IL_001c:
	{
		RuntimeObject* L_5 = ___dictionary0;
		NullCheck((RuntimeObject*)L_5);
		Type_t* L_6;
		L_6 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)L_5, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 7)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		bool L_9;
		L_9 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_6, L_8, NULL);
		if (!L_9)
		{
			goto IL_0080;
		}
	}
	{
		RuntimeObject* L_10 = ___dictionary0;
		Dictionary_2_t377C2B6CAA20982B0AC7A180E3800172E88C8BDE* L_11 = ((Dictionary_2_t377C2B6CAA20982B0AC7A180E3800172E88C8BDE*)CastclassClass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 8)));
		NullCheck(L_11);
		int32_t L_12 = (int32_t)L_11->____count_2;
		V_0 = L_12;
		NullCheck(L_11);
		EntryU5BU5D_t68CA0D1367AB2807A569CCED387E01680CB52ED7* L_13 = (EntryU5BU5D_t68CA0D1367AB2807A569CCED387E01680CB52ED7*)L_11->____entries_1;
		V_1 = L_13;
		V_2 = 0;
		goto IL_007b;
	}

IL_004a:
	{
		EntryU5BU5D_t68CA0D1367AB2807A569CCED387E01680CB52ED7* L_14 = V_1;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		int32_t L_16 = (int32_t)((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)))->___hashCode_0;
		if ((((int32_t)L_16) < ((int32_t)0)))
		{
			goto IL_0077;
		}
	}
	{
		EntryU5BU5D_t68CA0D1367AB2807A569CCED387E01680CB52ED7* L_17 = V_1;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		RuntimeObject* L_19 = (RuntimeObject*)((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___key_2;
		EntryU5BU5D_t68CA0D1367AB2807A569CCED387E01680CB52ED7* L_20 = V_1;
		int32_t L_21 = V_2;
		NullCheck(L_20);
		PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8 L_22 = (PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8)((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___value_3;
		((  void (*) (Dictionary_2_t377C2B6CAA20982B0AC7A180E3800172E88C8BDE*, RuntimeObject*, PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(__this, L_19, L_22, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
	}

IL_0077:
	{
		int32_t L_23 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_007b:
	{
		int32_t L_24 = V_2;
		int32_t L_25 = V_0;
		if ((((int32_t)L_24) < ((int32_t)L_25)))
		{
			goto IL_004a;
		}
	}
	{
		return;
	}

IL_0080:
	{
		RuntimeObject* L_26 = ___dictionary0;
		NullCheck((RuntimeObject*)L_26);
		RuntimeObject* L_27;
		L_27 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.UIElements.StyleComplexSelector/PseudoStateData>>::GetEnumerator() */, il2cpp_rgctx_data(method->klass->rgctx_data, 10), (RuntimeObject*)L_26);
		V_3 = L_27;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00af:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_28 = V_3;
					if (!L_28)
					{
						goto IL_00b8;
					}
				}
				{
					RuntimeObject* L_29 = V_3;
					NullCheck((RuntimeObject*)L_29);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_29);
				}

IL_00b8:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_00a5_1;
			}

IL_0089_1:
			{
				RuntimeObject* L_30 = V_3;
				NullCheck(L_30);
				KeyValuePair_2_t852F23A435B740B3D14D3CE08B14FFD4690334E7 L_31;
				L_31 = InterfaceFuncInvoker0< KeyValuePair_2_t852F23A435B740B3D14D3CE08B14FFD4690334E7 >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.UIElements.StyleComplexSelector/PseudoStateData>>::get_Current() */, il2cpp_rgctx_data(method->klass->rgctx_data, 12), L_30);
				V_4 = L_31;
				RuntimeObject* L_32;
				L_32 = KeyValuePair_2_get_Key_mBE72C27BFF193B87C192E8F269820D2296B6E172_inline((&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
				PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8 L_33;
				L_33 = KeyValuePair_2_get_Value_m4436FB8460A00616072675A6DC8EF35E3C57021E_inline((&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
				((  void (*) (Dictionary_2_t377C2B6CAA20982B0AC7A180E3800172E88C8BDE*, RuntimeObject*, PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(__this, L_32, L_33, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
			}

IL_00a5_1:
			{
				RuntimeObject* L_34 = V_3;
				NullCheck((RuntimeObject*)L_34);
				bool L_35;
				L_35 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_34);
				if (L_35)
				{
					goto IL_0089_1;
				}
			}
			{
				goto IL_00b9;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00b9:
	{
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.UIElements.StyleComplexSelector/PseudoStateData>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m3CA802B63CC889F9066D07645D7D3F7B2AF98497_gshared (Dictionary_2_t377C2B6CAA20982B0AC7A180E3800172E88C8BDE* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___info0, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___context1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___info0;
		NullCheck(L_0);
		ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7(L_0, (RuntimeObject*)__this, L_1, ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		return;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.UIElements.StyleComplexSelector/PseudoStateData>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_m1A7236AF93EEBBCED35431D22E96CC5287FB5003_gshared (Dictionary_2_t377C2B6CAA20982B0AC7A180E3800172E88C8BDE* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____count_2;
		int32_t L_1 = (int32_t)__this->____freeCount_4;
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.UIElements.StyleComplexSelector/PseudoStateData>::get_Keys()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_t5138B138B96BD1F88FBA9549B659FE6FCB3F5A0A* Dictionary_2_get_Keys_m58286ED794BDDC2A27ADD35911380C18D9832A88_gshared (Dictionary_2_t377C2B6CAA20982B0AC7A180E3800172E88C8BDE* __this, const RuntimeMethod* method) 
{
	{
		KeyCollection_t5138B138B96BD1F88FBA9549B659FE6FCB3F5A0A* L_0 = (KeyCollection_t5138B138B96BD1F88FBA9549B659FE6FCB3F5A0A*)__this->____keys_7;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		KeyCollection_t5138B138B96BD1F88FBA9549B659FE6FCB3F5A0A* L_1 = (KeyCollection_t5138B138B96BD1F88FBA9549B659FE6FCB3F5A0A*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 16));
		NullCheck(L_1);
		((  void (*) (KeyCollection_t5138B138B96BD1F88FBA9549B659FE6FCB3F5A0A*, Dictionary_2_t377C2B6CAA20982B0AC7A180E3800172E88C8BDE*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 17)))(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
		__this->____keys_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keys_7), (void*)L_1);
	}

IL_0014:
	{
		KeyCollection_t5138B138B96BD1F88FBA9549B659FE6FCB3F5A0A* L_2 = (KeyCollection_t5138B138B96BD1F88FBA9549B659FE6FCB3F5A0A*)__this->____keys_7;
		return L_2;
	}
}
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.UIElements.StyleComplexSelector/PseudoStateData>::get_Values()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_t6F9658BF91E1BD2BEAED9D1C88FD4A3C255097C5* Dictionary_2_get_Values_m93F11BDEC56CEEA5DF9C1C57A1EB9244D3DCE9B8_gshared (Dictionary_2_t377C2B6CAA20982B0AC7A180E3800172E88C8BDE* __this, const RuntimeMethod* method) 
{
	{
		ValueCollection_t6F9658BF91E1BD2BEAED9D1C88FD4A3C255097C5* L_0 = (ValueCollection_t6F9658BF91E1BD2BEAED9D1C88FD4A3C255097C5*)__this->____values_8;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_t6F9658BF91E1BD2BEAED9D1C88FD4A3C255097C5* L_1 = (ValueCollection_t6F9658BF91E1BD2BEAED9D1C88FD4A3C255097C5*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 18));
		NullCheck(L_1);
		((  void (*) (ValueCollection_t6F9658BF91E1BD2BEAED9D1C88FD4A3C255097C5*, Dictionary_2_t377C2B6CAA20982B0AC7A180E3800172E88C8BDE*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 19)))(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		__this->____values_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values_8), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_t6F9658BF91E1BD2BEAED9D1C88FD4A3C255097C5* L_2 = (ValueCollection_t6F9658BF91E1BD2BEAED9D1C88FD4A3C255097C5*)__this->____values_8;
		return L_2;
	}
}
// System.Collections.Generic.IEnumerable`1<TValue> System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.UIElements.StyleComplexSelector/PseudoStateData>::System.Collections.Generic.IReadOnlyDictionary<TKey,TValue>.get_Values()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IReadOnlyDictionaryU3CTKeyU2CTValueU3E_get_Values_m75F037277DC7BBC39E09BD5BB730158D06386B47_gshared (Dictionary_2_t377C2B6CAA20982B0AC7A180E3800172E88C8BDE* __this, const RuntimeMethod* method) 
{
	{
		ValueCollection_t6F9658BF91E1BD2BEAED9D1C88FD4A3C255097C5* L_0 = (ValueCollection_t6F9658BF91E1BD2BEAED9D1C88FD4A3C255097C5*)__this->____values_8;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_t6F9658BF91E1BD2BEAED9D1C88FD4A3C255097C5* L_1 = (ValueCollection_t6F9658BF91E1BD2BEAED9D1C88FD4A3C255097C5*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 18));
		NullCheck(L_1);
		((  void (*) (ValueCollection_t6F9658BF91E1BD2BEAED9D1C88FD4A3C255097C5*, Dictionary_2_t377C2B6CAA20982B0AC7A180E3800172E88C8BDE*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 19)))(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		__this->____values_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values_8), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_t6F9658BF91E1BD2BEAED9D1C88FD4A3C255097C5* L_2 = (ValueCollection_t6F9658BF91E1BD2BEAED9D1C88FD4A3C255097C5*)__this->____values_8;
		return (RuntimeObject*)L_2;
	}
}
// TValue System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.UIElements.StyleComplexSelector/PseudoStateData>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8 Dictionary_2_get_Item_m1D70B96BF193F0D2A63E3E4316FE92F5187AA3D0_gshared (Dictionary_2_t377C2B6CAA20982B0AC7A180E3800172E88C8BDE* __this, RuntimeObject* ___key0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		RuntimeObject* L_0 = ___key0;
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_t377C2B6CAA20982B0AC7A180E3800172E88C8BDE*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 20)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_001e;
		}
	}
	{
		EntryU5BU5D_t68CA0D1367AB2807A569CCED387E01680CB52ED7* L_3 = (EntryU5BU5D_t68CA0D1367AB2807A569CCED387E01680CB52ED7*)__this->____entries_1;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8 L_5 = (PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8)((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)))->___value_3;
		return L_5;
	}

IL_001e:
	{
		RuntimeObject* L_6 = ___key0;
		ThrowHelper_ThrowKeyNotFoundException_m6A17735FA486AD43F2488DE39B755AC60BC99CE7(L_6, NULL);
		il2cpp_codegen_initobj((&V_1), sizeof(PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8));
		PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8 L_7 = V_1;
		return L_7;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.UIElements.StyleComplexSelector/PseudoStateData>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m65F7AB2D49B09E3F4C0FD364FC3DBDB4CC501C9C_gshared (Dictionary_2_t377C2B6CAA20982B0AC7A180E3800172E88C8BDE* __this, RuntimeObject* ___key0, PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8 ___value1, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___key0;
		PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8 L_1 = ___value1;
		bool L_2;
		L_2 = ((  bool (*) (Dictionary_2_t377C2B6CAA20982B0AC7A180E3800172E88C8BDE*, RuntimeObject*, PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8, uint8_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 22)))(__this, L_0, L_1, (uint8_t)1, il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.UIElements.StyleComplexSelector/PseudoStateData>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m5E1E162125C2367B02C5A72DBD6FEF7711119E17_gshared (Dictionary_2_t377C2B6CAA20982B0AC7A180E3800172E88C8BDE* __this, RuntimeObject* ___key0, PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8 ___value1, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___key0;
		PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8 L_1 = ___value1;
		bool L_2;
		L_2 = ((  bool (*) (Dictionary_2_t377C2B6CAA20982B0AC7A180E3800172E88C8BDE*, RuntimeObject*, PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8, uint8_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 22)))(__this, L_0, L_1, (uint8_t)2, il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.UIElements.StyleComplexSelector/PseudoStateData>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_mEECF215370685C687CF6E3BA37C3F5612C69FA60_gshared (Dictionary_2_t377C2B6CAA20982B0AC7A180E3800172E88C8BDE* __this, KeyValuePair_2_t852F23A435B740B3D14D3CE08B14FFD4690334E7 ___keyValuePair0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0;
		L_0 = KeyValuePair_2_get_Key_mBE72C27BFF193B87C192E8F269820D2296B6E172_inline((&___keyValuePair0), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8 L_1;
		L_1 = KeyValuePair_2_get_Value_m4436FB8460A00616072675A6DC8EF35E3C57021E_inline((&___keyValuePair0), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		((  void (*) (Dictionary_2_t377C2B6CAA20982B0AC7A180E3800172E88C8BDE*, RuntimeObject*, PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.UIElements.StyleComplexSelector/PseudoStateData>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m7E61155E4D0B6D769B9ACC351B51BC9C66625193_gshared (Dictionary_2_t377C2B6CAA20982B0AC7A180E3800172E88C8BDE* __this, KeyValuePair_2_t852F23A435B740B3D14D3CE08B14FFD4690334E7 ___keyValuePair0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0;
		L_0 = KeyValuePair_2_get_Key_mBE72C27BFF193B87C192E8F269820D2296B6E172_inline((&___keyValuePair0), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_t377C2B6CAA20982B0AC7A180E3800172E88C8BDE*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 20)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0038;
		}
	}
	{
		EqualityComparer_1_t90245FEDC9E02D61898D3D788C4F1C3A159A1438* L_3;
		L_3 = ((  EqualityComparer_1_t90245FEDC9E02D61898D3D788C4F1C3A159A1438* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 23)))(il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		EntryU5BU5D_t68CA0D1367AB2807A569CCED387E01680CB52ED7* L_4 = (EntryU5BU5D_t68CA0D1367AB2807A569CCED387E01680CB52ED7*)__this->____entries_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8 L_6 = (PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8)((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value_3;
		PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8 L_7;
		L_7 = KeyValuePair_2_get_Value_m4436FB8460A00616072675A6DC8EF35E3C57021E_inline((&___keyValuePair0), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8, PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8 >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.UIElements.StyleComplexSelector/PseudoStateData>::Equals(T,T) */, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0038;
		}
	}
	{
		return (bool)1;
	}

IL_0038:
	{
		return (bool)0;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.UIElements.StyleComplexSelector/PseudoStateData>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_mD2BA774759494EB0B8E0ED7D56B918CB97F58ABC_gshared (Dictionary_2_t377C2B6CAA20982B0AC7A180E3800172E88C8BDE* __this, KeyValuePair_2_t852F23A435B740B3D14D3CE08B14FFD4690334E7 ___keyValuePair0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0;
		L_0 = KeyValuePair_2_get_Key_mBE72C27BFF193B87C192E8F269820D2296B6E172_inline((&___keyValuePair0), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_t377C2B6CAA20982B0AC7A180E3800172E88C8BDE*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 20)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0046;
		}
	}
	{
		EqualityComparer_1_t90245FEDC9E02D61898D3D788C4F1C3A159A1438* L_3;
		L_3 = ((  EqualityComparer_1_t90245FEDC9E02D61898D3D788C4F1C3A159A1438* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 23)))(il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		EntryU5BU5D_t68CA0D1367AB2807A569CCED387E01680CB52ED7* L_4 = (EntryU5BU5D_t68CA0D1367AB2807A569CCED387E01680CB52ED7*)__this->____entries_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8 L_6 = (PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8)((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value_3;
		PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8 L_7;
		L_7 = KeyValuePair_2_get_Value_m4436FB8460A00616072675A6DC8EF35E3C57021E_inline((&___keyValuePair0), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8, PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8 >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.UIElements.StyleComplexSelector/PseudoStateData>::Equals(T,T) */, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0046;
		}
	}
	{
		RuntimeObject* L_9;
		L_9 = KeyValuePair_2_get_Key_mBE72C27BFF193B87C192E8F269820D2296B6E172_inline((&___keyValuePair0), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		bool L_10;
		L_10 = ((  bool (*) (Dictionary_2_t377C2B6CAA20982B0AC7A180E3800172E88C8BDE*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 27)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 27));
		return (bool)1;
	}

IL_0046:
	{
		return (bool)0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.UIElements.StyleComplexSelector/PseudoStateData>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_mCDBE1CC9223F2F2CBB036E209EA762D290F3CDCB_gshared (Dictionary_2_t377C2B6CAA20982B0AC7A180E3800172E88C8BDE* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->____count_2;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0041;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_3);
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_2, 0, ((int32_t)(((RuntimeArray*)L_3)->max_length)), NULL);
		__this->____count_2 = 0;
		__this->____freeList_3 = (-1);
		__this->____freeCount_4 = 0;
		EntryU5BU5D_t68CA0D1367AB2807A569CCED387E01680CB52ED7* L_4 = (EntryU5BU5D_t68CA0D1367AB2807A569CCED387E01680CB52ED7*)__this->____entries_1;
		int32_t L_5 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_4, 0, L_5, NULL);
	}

IL_0041:
	{
		int32_t L_6 = (int32_t)__this->____version_5;
		__this->____version_5 = ((int32_t)il2cpp_codegen_add(L_6, 1));
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.UIElements.StyleComplexSelector/PseudoStateData>::ContainsKey(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m088160B91A0137011EDCBB102E8A75E13F2B674B_gshared (Dictionary_2_t377C2B6CAA20982B0AC7A180E3800172E88C8BDE* __this, RuntimeObject* ___key0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___key0;
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_t377C2B6CAA20982B0AC7A180E3800172E88C8BDE*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 20)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		return (bool)((((int32_t)((((int32_t)L_1) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.UIElements.StyleComplexSelector/PseudoStateData>::ContainsValue(TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsValue_mB0861CC37D353319FBCB0F809D214228EE323373_gshared (Dictionary_2_t377C2B6CAA20982B0AC7A180E3800172E88C8BDE* __this, PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8 ___value0, const RuntimeMethod* method) 
{
	EntryU5BU5D_t68CA0D1367AB2807A569CCED387E01680CB52ED7* V_0 = NULL;
	int32_t V_1 = 0;
	PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	EqualityComparer_1_t90245FEDC9E02D61898D3D788C4F1C3A159A1438* V_4 = NULL;
	int32_t V_5 = 0;
	{
		EntryU5BU5D_t68CA0D1367AB2807A569CCED387E01680CB52ED7* L_0 = (EntryU5BU5D_t68CA0D1367AB2807A569CCED387E01680CB52ED7*)__this->____entries_1;
		V_0 = L_0;
		goto IL_0049;
	}
	{
		V_1 = 0;
		goto IL_003b;
	}

IL_0013:
	{
		EntryU5BU5D_t68CA0D1367AB2807A569CCED387E01680CB52ED7* L_2 = V_0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = (int32_t)((L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3)))->___hashCode_0;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0037;
		}
	}
	{
		EntryU5BU5D_t68CA0D1367AB2807A569CCED387E01680CB52ED7* L_5 = V_0;
		int32_t L_6 = V_1;
		NullCheck(L_5);
		PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8 L_7 = (PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8)((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->___value_3;
		goto IL_0037;
	}
	{
		return (bool)1;
	}

IL_0037:
	{
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_003b:
	{
		int32_t L_9 = V_1;
		int32_t L_10 = (int32_t)__this->____count_2;
		if ((((int32_t)L_9) < ((int32_t)L_10)))
		{
			goto IL_0013;
		}
	}
	{
		goto IL_00db;
	}

IL_0049:
	{
		il2cpp_codegen_initobj((&V_2), sizeof(PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8));
	}
	{
		V_3 = 0;
		goto IL_008b;
	}

IL_005d:
	{
		EntryU5BU5D_t68CA0D1367AB2807A569CCED387E01680CB52ED7* L_12 = V_0;
		int32_t L_13 = V_3;
		NullCheck(L_12);
		int32_t L_14 = (int32_t)((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)))->___hashCode_0;
		if ((((int32_t)L_14) < ((int32_t)0)))
		{
			goto IL_0087;
		}
	}
	{
		EqualityComparer_1_t90245FEDC9E02D61898D3D788C4F1C3A159A1438* L_15;
		L_15 = ((  EqualityComparer_1_t90245FEDC9E02D61898D3D788C4F1C3A159A1438* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 23)))(il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		EntryU5BU5D_t68CA0D1367AB2807A569CCED387E01680CB52ED7* L_16 = V_0;
		int32_t L_17 = V_3;
		NullCheck(L_16);
		PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8 L_18 = (PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8)((L_16)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_17)))->___value_3;
		PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8 L_19 = ___value0;
		NullCheck(L_15);
		bool L_20;
		L_20 = VirtualFuncInvoker2< bool, PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8, PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8 >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.UIElements.StyleComplexSelector/PseudoStateData>::Equals(T,T) */, L_15, L_18, L_19);
		if (!L_20)
		{
			goto IL_0087;
		}
	}
	{
		return (bool)1;
	}

IL_0087:
	{
		int32_t L_21 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_008b:
	{
		int32_t L_22 = V_3;
		int32_t L_23 = (int32_t)__this->____count_2;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_005d;
		}
	}
	{
		goto IL_00db;
	}

IL_0096:
	{
		EqualityComparer_1_t90245FEDC9E02D61898D3D788C4F1C3A159A1438* L_24;
		L_24 = ((  EqualityComparer_1_t90245FEDC9E02D61898D3D788C4F1C3A159A1438* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 23)))(il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		V_4 = L_24;
		V_5 = 0;
		goto IL_00d1;
	}

IL_00a2:
	{
		EntryU5BU5D_t68CA0D1367AB2807A569CCED387E01680CB52ED7* L_25 = V_0;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		int32_t L_27 = (int32_t)((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___hashCode_0;
		if ((((int32_t)L_27) < ((int32_t)0)))
		{
			goto IL_00cb;
		}
	}
	{
		EqualityComparer_1_t90245FEDC9E02D61898D3D788C4F1C3A159A1438* L_28 = V_4;
		EntryU5BU5D_t68CA0D1367AB2807A569CCED387E01680CB52ED7* L_29 = V_0;
		int32_t L_30 = V_5;
		NullCheck(L_29);
		PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8 L_31 = (PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8)((L_29)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_30)))->___value_3;
		PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8 L_32 = ___value0;
		NullCheck(L_28);
		bool L_33;
		L_33 = VirtualFuncInvoker2< bool, PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8, PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8 >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.UIElements.StyleComplexSelector/PseudoStateData>::Equals(T,T) */, L_28, L_31, L_32);
		if (!L_33)
		{
			goto IL_00cb;
		}
	}
	{
		return (bool)1;
	}

IL_00cb:
	{
		int32_t L_34 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_00d1:
	{
		int32_t L_35 = V_5;
		int32_t L_36 = (int32_t)__this->____count_2;
		if ((((int32_t)L_35) < ((int32_t)L_36)))
		{
			goto IL_00a2;
		}
	}

IL_00db:
	{
		return (bool)0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.UIElements.StyleComplexSelector/PseudoStateData>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_m942DD222667C6829FA1229BAD7BCACFE555D0A0B_gshared (Dictionary_2_t377C2B6CAA20982B0AC7A180E3800172E88C8BDE* __this, KeyValuePair_2U5BU5D_t889086771E46EA552EA0DA1AE810C66A494D9F78* ___array0, int32_t ___index1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	EntryU5BU5D_t68CA0D1367AB2807A569CCED387E01680CB52ED7* V_1 = NULL;
	int32_t V_2 = 0;
	{
		KeyValuePair_2U5BU5D_t889086771E46EA552EA0DA1AE810C66A494D9F78* L_0 = ___array0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)3, NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___index1;
		KeyValuePair_2U5BU5D_t889086771E46EA552EA0DA1AE810C66A494D9F78* L_2 = ___array0;
		NullCheck(L_2);
		if ((!(((uint32_t)L_1) > ((uint32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))))
		{
			goto IL_0014;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0014:
	{
		KeyValuePair_2U5BU5D_t889086771E46EA552EA0DA1AE810C66A494D9F78* L_3 = ___array0;
		NullCheck(L_3);
		int32_t L_4 = ___index1;
		int32_t L_5;
		L_5 = ((  int32_t (*) (Dictionary_2_t377C2B6CAA20982B0AC7A180E3800172E88C8BDE*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 29)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_3)->max_length)), L_4))) >= ((int32_t)L_5)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)5, NULL);
	}

IL_0027:
	{
		int32_t L_6 = (int32_t)__this->____count_2;
		V_0 = L_6;
		EntryU5BU5D_t68CA0D1367AB2807A569CCED387E01680CB52ED7* L_7 = (EntryU5BU5D_t68CA0D1367AB2807A569CCED387E01680CB52ED7*)__this->____entries_1;
		V_1 = L_7;
		V_2 = 0;
		goto IL_0075;
	}

IL_0039:
	{
		EntryU5BU5D_t68CA0D1367AB2807A569CCED387E01680CB52ED7* L_8 = V_1;
		int32_t L_9 = V_2;
		NullCheck(L_8);
		int32_t L_10 = (int32_t)((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9)))->___hashCode_0;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_0071;
		}
	}
	{
		KeyValuePair_2U5BU5D_t889086771E46EA552EA0DA1AE810C66A494D9F78* L_11 = ___array0;
		int32_t L_12 = ___index1;
		int32_t L_13 = L_12;
		___index1 = ((int32_t)il2cpp_codegen_add(L_13, 1));
		EntryU5BU5D_t68CA0D1367AB2807A569CCED387E01680CB52ED7* L_14 = V_1;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		RuntimeObject* L_16 = (RuntimeObject*)((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)))->___key_2;
		EntryU5BU5D_t68CA0D1367AB2807A569CCED387E01680CB52ED7* L_17 = V_1;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8 L_19 = (PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8)((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___value_3;
		KeyValuePair_2_t852F23A435B740B3D14D3CE08B14FFD4690334E7 L_20;
		memset((&L_20), 0, sizeof(L_20));
		KeyValuePair_2__ctor_m899F53F40BCAA19E77F5E9A552CAA43D134B9CC9((&L_20), L_16, L_19, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (KeyValuePair_2_t852F23A435B740B3D14D3CE08B14FFD4690334E7)L_20);
	}

IL_0071:
	{
		int32_t L_21 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0075:
	{
		int32_t L_22 = V_2;
		int32_t L_23 = V_0;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_0039;
		}
	}
	{
		return;
	}
}
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.UIElements.StyleComplexSelector/PseudoStateData>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tE506445EC02F2FBF2A0176A4BD4BBFFBCF214672 Dictionary_2_GetEnumerator_m0864B4FC572B326374206CAA10B911CCDC8D588B_gshared (Dictionary_2_t377C2B6CAA20982B0AC7A180E3800172E88C8BDE* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tE506445EC02F2FBF2A0176A4BD4BBFFBCF214672 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mEB026458339B7ECD4D5E558C57D012096E15822B((&L_0), __this, 2, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.UIElements.StyleComplexSelector/PseudoStateData>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m3B3A4B6778D15645FCD6D9CDCABFAB3D4CAEA21B_gshared (Dictionary_2_t377C2B6CAA20982B0AC7A180E3800172E88C8BDE* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tE506445EC02F2FBF2A0176A4BD4BBFFBCF214672 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mEB026458339B7ECD4D5E558C57D012096E15822B((&L_0), __this, 2, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		Enumerator_tE506445EC02F2FBF2A0176A4BD4BBFFBCF214672 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 32), &L_1);
		return (RuntimeObject*)L_2;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.UIElements.StyleComplexSelector/PseudoStateData>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_GetObjectData_mD739010E8916AE85B1227F2FED184228D9B2A821_gshared (Dictionary_2_t377C2B6CAA20982B0AC7A180E3800172E88C8BDE* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___info0, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___context1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_t889086771E46EA552EA0DA1AE810C66A494D9F78* V_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	String_t* G_B4_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B4_2 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B3_2 = NULL;
	String_t* G_B6_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B6_1 = NULL;
	String_t* G_B5_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B5_1 = NULL;
	int32_t G_B7_0 = 0;
	String_t* G_B7_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B7_2 = NULL;
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___info0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)4, NULL);
	}

IL_0009:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___info0;
		int32_t L_2 = (int32_t)__this->____version_5;
		NullCheck(L_1);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(L_1, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, L_2, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = ___info0;
		RuntimeObject* L_4 = (RuntimeObject*)__this->____comparer_6;
		RuntimeObject* L_5 = L_4;
		G_B3_0 = L_5;
		G_B3_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
		G_B3_2 = L_3;
		if (L_5)
		{
			G_B4_0 = L_5;
			G_B4_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
			G_B4_2 = L_3;
			goto IL_002f;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_6;
		L_6 = ((  EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		G_B4_0 = ((RuntimeObject*)(L_6));
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
	}

IL_002f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 34)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		NullCheck(G_B4_2);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(G_B4_2, G_B4_1, (RuntimeObject*)G_B4_0, L_8, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_9 = ___info0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		G_B5_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
		G_B5_1 = L_9;
		if (!L_10)
		{
			G_B6_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
			G_B6_1 = L_9;
			goto IL_0056;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_11);
		G_B7_0 = ((int32_t)(((RuntimeArray*)L_11)->max_length));
		G_B7_1 = G_B5_0;
		G_B7_2 = G_B5_1;
		goto IL_0057;
	}

IL_0056:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
		G_B7_2 = G_B6_1;
	}

IL_0057:
	{
		NullCheck(G_B7_2);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(G_B7_2, G_B7_1, G_B7_0, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		if (!L_12)
		{
			goto IL_008e;
		}
	}
	{
		int32_t L_13;
		L_13 = ((  int32_t (*) (Dictionary_2_t377C2B6CAA20982B0AC7A180E3800172E88C8BDE*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 29)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		KeyValuePair_2U5BU5D_t889086771E46EA552EA0DA1AE810C66A494D9F78* L_14 = (KeyValuePair_2U5BU5D_t889086771E46EA552EA0DA1AE810C66A494D9F78*)(KeyValuePair_2U5BU5D_t889086771E46EA552EA0DA1AE810C66A494D9F78*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 35), (uint32_t)L_13);
		V_0 = L_14;
		KeyValuePair_2U5BU5D_t889086771E46EA552EA0DA1AE810C66A494D9F78* L_15 = V_0;
		((  void (*) (Dictionary_2_t377C2B6CAA20982B0AC7A180E3800172E88C8BDE*, KeyValuePair_2U5BU5D_t889086771E46EA552EA0DA1AE810C66A494D9F78*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 36)))(__this, L_15, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 36));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_16 = ___info0;
		KeyValuePair_2U5BU5D_t889086771E46EA552EA0DA1AE810C66A494D9F78* L_17 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 37)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		NullCheck(L_16);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(L_16, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, (RuntimeObject*)L_17, L_19, NULL);
	}

IL_008e:
	{
		return;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.UIElements.StyleComplexSelector/PseudoStateData>::FindEntry(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_mC68644A930FC4017AFD853A30EDED31264D2CB5A_gshared (Dictionary_2_t377C2B6CAA20982B0AC7A180E3800172E88C8BDE* __this, RuntimeObject* ___key0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	EntryU5BU5D_t68CA0D1367AB2807A569CCED387E01680CB52ED7* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	int32_t V_5 = 0;
	RuntimeObject* V_6 = NULL;
	EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* V_7 = NULL;
	int32_t V_8 = 0;
	{
		RuntimeObject* L_0 = ___key0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_000e:
	{
		V_0 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		V_1 = L_1;
		EntryU5BU5D_t68CA0D1367AB2807A569CCED387E01680CB52ED7* L_2 = (EntryU5BU5D_t68CA0D1367AB2807A569CCED387E01680CB52ED7*)__this->____entries_1;
		V_2 = L_2;
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = V_1;
		if (!L_3)
		{
			goto IL_0175;
		}
	}
	{
		RuntimeObject* L_4 = (RuntimeObject*)__this->____comparer_6;
		V_4 = L_4;
		RuntimeObject* L_5 = V_4;
		if (L_5)
		{
			goto IL_0110;
		}
	}
	{
		NullCheck((___key0));
		int32_t L_6;
		L_6 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, (___key0));
		V_5 = ((int32_t)(L_6&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = V_1;
		int32_t L_8 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = V_1;
		NullCheck(L_9);
		NullCheck(L_7);
		int32_t L_10 = ((int32_t)(L_8%((int32_t)(((RuntimeArray*)L_9)->max_length))));
		int32_t L_11 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_11, 1));
		il2cpp_codegen_initobj((&V_6), sizeof(RuntimeObject*));
		RuntimeObject* L_12 = V_6;
		if (!L_12)
		{
			goto IL_00b9;
		}
	}

IL_0066:
	{
		int32_t L_13 = V_0;
		EntryU5BU5D_t68CA0D1367AB2807A569CCED387E01680CB52ED7* L_14 = V_2;
		NullCheck(L_14);
		if ((!(((uint32_t)L_13) < ((uint32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_t68CA0D1367AB2807A569CCED387E01680CB52ED7* L_15 = V_2;
		int32_t L_16 = V_0;
		NullCheck(L_15);
		int32_t L_17 = (int32_t)((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___hashCode_0;
		int32_t L_18 = V_5;
		if ((!(((uint32_t)L_17) == ((uint32_t)L_18))))
		{
			goto IL_009b;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_19;
		L_19 = ((  EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		EntryU5BU5D_t68CA0D1367AB2807A569CCED387E01680CB52ED7* L_20 = V_2;
		int32_t L_21 = V_0;
		NullCheck(L_20);
		RuntimeObject* L_22 = (RuntimeObject*)((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___key_2;
		RuntimeObject* L_23 = ___key0;
		NullCheck(L_19);
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Object>::Equals(T,T) */, L_19, L_22, L_23);
		if (L_24)
		{
			goto IL_0175;
		}
	}

IL_009b:
	{
		EntryU5BU5D_t68CA0D1367AB2807A569CCED387E01680CB52ED7* L_25 = V_2;
		int32_t L_26 = V_0;
		NullCheck(L_25);
		int32_t L_27 = (int32_t)((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___next_1;
		V_0 = L_27;
		int32_t L_28 = V_3;
		EntryU5BU5D_t68CA0D1367AB2807A569CCED387E01680CB52ED7* L_29 = V_2;
		NullCheck(L_29);
		if ((((int32_t)L_28) < ((int32_t)((int32_t)(((RuntimeArray*)L_29)->max_length)))))
		{
			goto IL_00b3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_00b3:
	{
		int32_t L_30 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_30, 1));
		goto IL_0066;
	}

IL_00b9:
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_31;
		L_31 = ((  EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		V_7 = L_31;
	}

IL_00c0:
	{
		int32_t L_32 = V_0;
		EntryU5BU5D_t68CA0D1367AB2807A569CCED387E01680CB52ED7* L_33 = V_2;
		NullCheck(L_33);
		if ((!(((uint32_t)L_32) < ((uint32_t)((int32_t)(((RuntimeArray*)L_33)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_t68CA0D1367AB2807A569CCED387E01680CB52ED7* L_34 = V_2;
		int32_t L_35 = V_0;
		NullCheck(L_34);
		int32_t L_36 = (int32_t)((L_34)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_35)))->___hashCode_0;
		int32_t L_37 = V_5;
		if ((!(((uint32_t)L_36) == ((uint32_t)L_37))))
		{
			goto IL_00f2;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_38 = V_7;
		EntryU5BU5D_t68CA0D1367AB2807A569CCED387E01680CB52ED7* L_39 = V_2;
		int32_t L_40 = V_0;
		NullCheck(L_39);
		RuntimeObject* L_41 = (RuntimeObject*)((L_39)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_40)))->___key_2;
		RuntimeObject* L_42 = ___key0;
		NullCheck(L_38);
		bool L_43;
		L_43 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Object>::Equals(T,T) */, L_38, L_41, L_42);
		if (L_43)
		{
			goto IL_0175;
		}
	}

IL_00f2:
	{
		EntryU5BU5D_t68CA0D1367AB2807A569CCED387E01680CB52ED7* L_44 = V_2;
		int32_t L_45 = V_0;
		NullCheck(L_44);
		int32_t L_46 = (int32_t)((L_44)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_45)))->___next_1;
		V_0 = L_46;
		int32_t L_47 = V_3;
		EntryU5BU5D_t68CA0D1367AB2807A569CCED387E01680CB52ED7* L_48 = V_2;
		NullCheck(L_48);
		if ((((int32_t)L_47) < ((int32_t)((int32_t)(((RuntimeArray*)L_48)->max_length)))))
		{
			goto IL_010a;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_010a:
	{
		int32_t L_49 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_49, 1));
		goto IL_00c0;
	}

IL_0110:
	{
		RuntimeObject* L_50 = V_4;
		RuntimeObject* L_51 = ___key0;
		NullCheck(L_50);
		int32_t L_52;
		L_52 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Object>::GetHashCode(T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 41), L_50, L_51);
		V_8 = ((int32_t)(L_52&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_53 = V_1;
		int32_t L_54 = V_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_55 = V_1;
		NullCheck(L_55);
		NullCheck(L_53);
		int32_t L_56 = ((int32_t)(L_54%((int32_t)(((RuntimeArray*)L_55)->max_length))));
		int32_t L_57 = (L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_56));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_57, 1));
	}

IL_012b:
	{
		int32_t L_58 = V_0;
		EntryU5BU5D_t68CA0D1367AB2807A569CCED387E01680CB52ED7* L_59 = V_2;
		NullCheck(L_59);
		if ((!(((uint32_t)L_58) < ((uint32_t)((int32_t)(((RuntimeArray*)L_59)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_t68CA0D1367AB2807A569CCED387E01680CB52ED7* L_60 = V_2;
		int32_t L_61 = V_0;
		NullCheck(L_60);
		int32_t L_62 = (int32_t)((L_60)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_61)))->___hashCode_0;
		int32_t L_63 = V_8;
		if ((!(((uint32_t)L_62) == ((uint32_t)L_63))))
		{
			goto IL_0157;
		}
	}
	{
		RuntimeObject* L_64 = V_4;
		EntryU5BU5D_t68CA0D1367AB2807A569CCED387E01680CB52ED7* L_65 = V_2;
		int32_t L_66 = V_0;
		NullCheck(L_65);
		RuntimeObject* L_67 = (RuntimeObject*)((L_65)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_66)))->___key_2;
		RuntimeObject* L_68 = ___key0;
		NullCheck(L_64);
		bool L_69;
		L_69 = InterfaceFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Object>::Equals(T,T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 41), L_64, L_67, L_68);
		if (L_69)
		{
			goto IL_0175;
		}
	}

IL_0157:
	{
		EntryU5BU5D_t68CA0D1367AB2807A569CCED387E01680CB52ED7* L_70 = V_2;
		int32_t L_71 = V_0;
		NullCheck(L_70);
		int32_t L_72 = (int32_t)((L_70)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_71)))->___next_1;
		V_0 = L_72;
		int32_t L_73 = V_3;
		EntryU5BU5D_t68CA0D1367AB2807A569CCED387E01680CB52ED7* L_74 = V_2;
		NullCheck(L_74);
		if ((((int32_t)L_73) < ((int32_t)((int32_t)(((RuntimeArray*)L_74)->max_length)))))
		{
			goto IL_016f;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_016f:
	{
		int32_t L_75 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_75, 1));
		goto IL_012b;
	}

IL_0175:
	{
		int32_t L_76 = V_0;
		return L_76;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.UIElements.StyleComplexSelector/PseudoStateData>::Initialize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_m50C500FDB35C01936359C959DF854D377293A52D_gshared (Dictionary_2_t377C2B6CAA20982B0AC7A180E3800172E88C8BDE* __this, int32_t ___capacity0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___capacity0;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_0, NULL);
		V_0 = L_1;
		__this->____freeList_3 = (-1);
		int32_t L_2 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_2);
		__this->____buckets_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets_0), (void*)L_3);
		int32_t L_4 = V_0;
		EntryU5BU5D_t68CA0D1367AB2807A569CCED387E01680CB52ED7* L_5 = (EntryU5BU5D_t68CA0D1367AB2807A569CCED387E01680CB52ED7*)(EntryU5BU5D_t68CA0D1367AB2807A569CCED387E01680CB52ED7*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 44), (uint32_t)L_4);
		__this->____entries_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries_1), (void*)L_5);
		int32_t L_6 = V_0;
		return L_6;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.UIElements.StyleComplexSelector/PseudoStateData>::TryInsert(TKey,TValue,System.Collections.Generic.InsertionBehavior)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_m3395BF439A761E0F35BB676572A3F06E234692A8_gshared (Dictionary_2_t377C2B6CAA20982B0AC7A180E3800172E88C8BDE* __this, RuntimeObject* ___key0, PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8 ___value1, uint8_t ___behavior2, const RuntimeMethod* method) 
{
	EntryU5BU5D_t68CA0D1367AB2807A569CCED387E01680CB52ED7* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	int32_t V_8 = 0;
	int32_t* V_9 = NULL;
	Entry_t7570C0657D5A1E8127DA80AE9CF398FAE7F58164* V_10 = NULL;
	RuntimeObject* V_11 = NULL;
	EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t G_B7_0 = 0;
	int32_t* G_B51_0 = NULL;
	{
		RuntimeObject* L_0 = ___key0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_000e:
	{
		int32_t L_1 = (int32_t)__this->____version_5;
		__this->____version_5 = ((int32_t)il2cpp_codegen_add(L_1, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		if (L_2)
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_3;
		L_3 = ((  int32_t (*) (Dictionary_2_t377C2B6CAA20982B0AC7A180E3800172E88C8BDE*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(__this, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
	}

IL_002c:
	{
		EntryU5BU5D_t68CA0D1367AB2807A569CCED387E01680CB52ED7* L_4 = (EntryU5BU5D_t68CA0D1367AB2807A569CCED387E01680CB52ED7*)__this->____entries_1;
		V_0 = L_4;
		RuntimeObject* L_5 = (RuntimeObject*)__this->____comparer_6;
		V_1 = L_5;
		RuntimeObject* L_6 = V_1;
		if (!L_6)
		{
			goto IL_0046;
		}
	}
	{
		RuntimeObject* L_7 = V_1;
		RuntimeObject* L_8 = ___key0;
		NullCheck(L_7);
		int32_t L_9;
		L_9 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Object>::GetHashCode(T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 41), L_7, L_8);
		G_B7_0 = L_9;
		goto IL_0053;
	}

IL_0046:
	{
		NullCheck((___key0));
		int32_t L_10;
		L_10 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, (___key0));
		G_B7_0 = L_10;
	}

IL_0053:
	{
		V_2 = ((int32_t)(G_B7_0&((int32_t)2147483647LL)));
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		int32_t L_12 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_13);
		NullCheck(L_11);
		V_4 = ((L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_12%((int32_t)(((RuntimeArray*)L_13)->max_length)))))));
		int32_t* L_14 = V_4;
		int32_t L_15 = *((int32_t*)L_14);
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_15, 1));
		RuntimeObject* L_16 = V_1;
		if (L_16)
		{
			goto IL_0187;
		}
	}
	{
		il2cpp_codegen_initobj((&V_11), sizeof(RuntimeObject*));
		RuntimeObject* L_17 = V_11;
		if (!L_17)
		{
			goto IL_010a;
		}
	}

IL_0091:
	{
		int32_t L_18 = V_5;
		EntryU5BU5D_t68CA0D1367AB2807A569CCED387E01680CB52ED7* L_19 = V_0;
		NullCheck(L_19);
		if ((!(((uint32_t)L_18) < ((uint32_t)((int32_t)(((RuntimeArray*)L_19)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_t68CA0D1367AB2807A569CCED387E01680CB52ED7* L_20 = V_0;
		int32_t L_21 = V_5;
		NullCheck(L_20);
		int32_t L_22 = (int32_t)((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___hashCode_0;
		int32_t L_23 = V_2;
		if ((!(((uint32_t)L_22) == ((uint32_t)L_23))))
		{
			goto IL_00ea;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_24;
		L_24 = ((  EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		EntryU5BU5D_t68CA0D1367AB2807A569CCED387E01680CB52ED7* L_25 = V_0;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		RuntimeObject* L_27 = (RuntimeObject*)((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___key_2;
		RuntimeObject* L_28 = ___key0;
		NullCheck(L_24);
		bool L_29;
		L_29 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Object>::Equals(T,T) */, L_24, L_27, L_28);
		if (!L_29)
		{
			goto IL_00ea;
		}
	}
	{
		uint8_t L_30 = ___behavior2;
		if ((!(((uint32_t)L_30) == ((uint32_t)1))))
		{
			goto IL_00d9;
		}
	}
	{
		EntryU5BU5D_t68CA0D1367AB2807A569CCED387E01680CB52ED7* L_31 = V_0;
		int32_t L_32 = V_5;
		NullCheck(L_31);
		PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8 L_33 = ___value1;
		((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___value_3 = L_33;
		return (bool)1;
	}

IL_00d9:
	{
		uint8_t L_34 = ___behavior2;
		if ((!(((uint32_t)L_34) == ((uint32_t)2))))
		{
			goto IL_00e8;
		}
	}
	{
		RuntimeObject* L_35 = ___key0;
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_35, NULL);
	}

IL_00e8:
	{
		return (bool)0;
	}

IL_00ea:
	{
		EntryU5BU5D_t68CA0D1367AB2807A569CCED387E01680CB52ED7* L_36 = V_0;
		int32_t L_37 = V_5;
		NullCheck(L_36);
		int32_t L_38 = (int32_t)((L_36)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_37)))->___next_1;
		V_5 = L_38;
		int32_t L_39 = V_3;
		EntryU5BU5D_t68CA0D1367AB2807A569CCED387E01680CB52ED7* L_40 = V_0;
		NullCheck(L_40);
		if ((((int32_t)L_39) < ((int32_t)((int32_t)(((RuntimeArray*)L_40)->max_length)))))
		{
			goto IL_0104;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_0104:
	{
		int32_t L_41 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_41, 1));
		goto IL_0091;
	}

IL_010a:
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_42;
		L_42 = ((  EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		V_12 = L_42;
	}

IL_0111:
	{
		int32_t L_43 = V_5;
		EntryU5BU5D_t68CA0D1367AB2807A569CCED387E01680CB52ED7* L_44 = V_0;
		NullCheck(L_44);
		if ((!(((uint32_t)L_43) < ((uint32_t)((int32_t)(((RuntimeArray*)L_44)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_t68CA0D1367AB2807A569CCED387E01680CB52ED7* L_45 = V_0;
		int32_t L_46 = V_5;
		NullCheck(L_45);
		int32_t L_47 = (int32_t)((L_45)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_46)))->___hashCode_0;
		int32_t L_48 = V_2;
		if ((!(((uint32_t)L_47) == ((uint32_t)L_48))))
		{
			goto IL_0167;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_49 = V_12;
		EntryU5BU5D_t68CA0D1367AB2807A569CCED387E01680CB52ED7* L_50 = V_0;
		int32_t L_51 = V_5;
		NullCheck(L_50);
		RuntimeObject* L_52 = (RuntimeObject*)((L_50)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_51)))->___key_2;
		RuntimeObject* L_53 = ___key0;
		NullCheck(L_49);
		bool L_54;
		L_54 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Object>::Equals(T,T) */, L_49, L_52, L_53);
		if (!L_54)
		{
			goto IL_0167;
		}
	}
	{
		uint8_t L_55 = ___behavior2;
		if ((!(((uint32_t)L_55) == ((uint32_t)1))))
		{
			goto IL_0156;
		}
	}
	{
		EntryU5BU5D_t68CA0D1367AB2807A569CCED387E01680CB52ED7* L_56 = V_0;
		int32_t L_57 = V_5;
		NullCheck(L_56);
		PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8 L_58 = ___value1;
		((L_56)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_57)))->___value_3 = L_58;
		return (bool)1;
	}

IL_0156:
	{
		uint8_t L_59 = ___behavior2;
		if ((!(((uint32_t)L_59) == ((uint32_t)2))))
		{
			goto IL_0165;
		}
	}
	{
		RuntimeObject* L_60 = ___key0;
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_60, NULL);
	}

IL_0165:
	{
		return (bool)0;
	}

IL_0167:
	{
		EntryU5BU5D_t68CA0D1367AB2807A569CCED387E01680CB52ED7* L_61 = V_0;
		int32_t L_62 = V_5;
		NullCheck(L_61);
		int32_t L_63 = (int32_t)((L_61)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_62)))->___next_1;
		V_5 = L_63;
		int32_t L_64 = V_3;
		EntryU5BU5D_t68CA0D1367AB2807A569CCED387E01680CB52ED7* L_65 = V_0;
		NullCheck(L_65);
		if ((((int32_t)L_64) < ((int32_t)((int32_t)(((RuntimeArray*)L_65)->max_length)))))
		{
			goto IL_0181;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_0181:
	{
		int32_t L_66 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_66, 1));
		goto IL_0111;
	}

IL_0187:
	{
		int32_t L_67 = V_5;
		EntryU5BU5D_t68CA0D1367AB2807A569CCED387E01680CB52ED7* L_68 = V_0;
		NullCheck(L_68);
		if ((!(((uint32_t)L_67) < ((uint32_t)((int32_t)(((RuntimeArray*)L_68)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_t68CA0D1367AB2807A569CCED387E01680CB52ED7* L_69 = V_0;
		int32_t L_70 = V_5;
		NullCheck(L_69);
		int32_t L_71 = (int32_t)((L_69)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_70)))->___hashCode_0;
		int32_t L_72 = V_2;
		if ((!(((uint32_t)L_71) == ((uint32_t)L_72))))
		{
			goto IL_01d9;
		}
	}
	{
		RuntimeObject* L_73 = V_1;
		EntryU5BU5D_t68CA0D1367AB2807A569CCED387E01680CB52ED7* L_74 = V_0;
		int32_t L_75 = V_5;
		NullCheck(L_74);
		RuntimeObject* L_76 = (RuntimeObject*)((L_74)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_75)))->___key_2;
		RuntimeObject* L_77 = ___key0;
		NullCheck(L_73);
		bool L_78;
		L_78 = InterfaceFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Object>::Equals(T,T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 41), L_73, L_76, L_77);
		if (!L_78)
		{
			goto IL_01d9;
		}
	}
	{
		uint8_t L_79 = ___behavior2;
		if ((!(((uint32_t)L_79) == ((uint32_t)1))))
		{
			goto IL_01c8;
		}
	}
	{
		EntryU5BU5D_t68CA0D1367AB2807A569CCED387E01680CB52ED7* L_80 = V_0;
		int32_t L_81 = V_5;
		NullCheck(L_80);
		PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8 L_82 = ___value1;
		((L_80)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_81)))->___value_3 = L_82;
		return (bool)1;
	}

IL_01c8:
	{
		uint8_t L_83 = ___behavior2;
		if ((!(((uint32_t)L_83) == ((uint32_t)2))))
		{
			goto IL_01d7;
		}
	}
	{
		RuntimeObject* L_84 = ___key0;
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_84, NULL);
	}

IL_01d7:
	{
		return (bool)0;
	}

IL_01d9:
	{
		EntryU5BU5D_t68CA0D1367AB2807A569CCED387E01680CB52ED7* L_85 = V_0;
		int32_t L_86 = V_5;
		NullCheck(L_85);
		int32_t L_87 = (int32_t)((L_85)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_86)))->___next_1;
		V_5 = L_87;
		int32_t L_88 = V_3;
		EntryU5BU5D_t68CA0D1367AB2807A569CCED387E01680CB52ED7* L_89 = V_0;
		NullCheck(L_89);
		if ((((int32_t)L_88) < ((int32_t)((int32_t)(((RuntimeArray*)L_89)->max_length)))))
		{
			goto IL_01f3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_01f3:
	{
		int32_t L_90 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_90, 1));
		goto IL_0187;
	}

IL_01f9:
	{
		V_6 = (bool)0;
		V_7 = (bool)0;
		int32_t L_91 = (int32_t)__this->____freeCount_4;
		if ((((int32_t)L_91) <= ((int32_t)0)))
		{
			goto IL_0223;
		}
	}
	{
		int32_t L_92 = (int32_t)__this->____freeList_3;
		V_8 = L_92;
		V_7 = (bool)1;
		int32_t L_93 = (int32_t)__this->____freeCount_4;
		__this->____freeCount_4 = ((int32_t)il2cpp_codegen_subtract(L_93, 1));
		goto IL_0250;
	}

IL_0223:
	{
		int32_t L_94 = (int32_t)__this->____count_2;
		V_13 = L_94;
		int32_t L_95 = V_13;
		EntryU5BU5D_t68CA0D1367AB2807A569CCED387E01680CB52ED7* L_96 = V_0;
		NullCheck(L_96);
		if ((!(((uint32_t)L_95) == ((uint32_t)((int32_t)(((RuntimeArray*)L_96)->max_length))))))
		{
			goto IL_023b;
		}
	}
	{
		((  void (*) (Dictionary_2_t377C2B6CAA20982B0AC7A180E3800172E88C8BDE*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 45)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 45));
		V_6 = (bool)1;
	}

IL_023b:
	{
		int32_t L_97 = V_13;
		V_8 = L_97;
		int32_t L_98 = V_13;
		__this->____count_2 = ((int32_t)il2cpp_codegen_add(L_98, 1));
		EntryU5BU5D_t68CA0D1367AB2807A569CCED387E01680CB52ED7* L_99 = (EntryU5BU5D_t68CA0D1367AB2807A569CCED387E01680CB52ED7*)__this->____entries_1;
		V_0 = L_99;
	}

IL_0250:
	{
		bool L_100 = V_6;
		if (L_100)
		{
			goto IL_0258;
		}
	}
	{
		int32_t* L_101 = V_4;
		G_B51_0 = L_101;
		goto IL_026d;
	}

IL_0258:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_102 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		int32_t L_103 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_104 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_104);
		NullCheck(L_102);
		G_B51_0 = ((L_102)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_103%((int32_t)(((RuntimeArray*)L_104)->max_length)))))));
	}

IL_026d:
	{
		V_9 = G_B51_0;
		EntryU5BU5D_t68CA0D1367AB2807A569CCED387E01680CB52ED7* L_105 = V_0;
		int32_t L_106 = V_8;
		NullCheck(L_105);
		V_10 = ((L_105)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_106)));
		bool L_107 = V_7;
		if (!L_107)
		{
			goto IL_028a;
		}
	}
	{
		Entry_t7570C0657D5A1E8127DA80AE9CF398FAE7F58164* L_108 = V_10;
		int32_t L_109 = (int32_t)L_108->___next_1;
		__this->____freeList_3 = L_109;
	}

IL_028a:
	{
		Entry_t7570C0657D5A1E8127DA80AE9CF398FAE7F58164* L_110 = V_10;
		int32_t L_111 = V_2;
		L_110->___hashCode_0 = L_111;
		Entry_t7570C0657D5A1E8127DA80AE9CF398FAE7F58164* L_112 = V_10;
		int32_t* L_113 = V_9;
		int32_t L_114 = *((int32_t*)L_113);
		L_112->___next_1 = ((int32_t)il2cpp_codegen_subtract(L_114, 1));
		Entry_t7570C0657D5A1E8127DA80AE9CF398FAE7F58164* L_115 = V_10;
		RuntimeObject* L_116 = ___key0;
		L_115->___key_2 = L_116;
		Il2CppCodeGenWriteBarrier((void**)(&L_115->___key_2), (void*)L_116);
		Entry_t7570C0657D5A1E8127DA80AE9CF398FAE7F58164* L_117 = V_10;
		PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8 L_118 = ___value1;
		L_117->___value_3 = L_118;
		int32_t* L_119 = V_9;
		int32_t L_120 = V_8;
		*((int32_t*)L_119) = (int32_t)((int32_t)il2cpp_codegen_add(L_120, 1));
		return (bool)1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.UIElements.StyleComplexSelector/PseudoStateData>::OnDeserialization(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_OnDeserialization_m3ACC2516D9DF00702EBC2E1E54528B748DBEF115_gshared (Dictionary_2_t377C2B6CAA20982B0AC7A180E3800172E88C8BDE* __this, RuntimeObject* ___sender0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	KeyValuePair_2U5BU5D_t889086771E46EA552EA0DA1AE810C66A494D9F78* V_3 = NULL;
	int32_t V_4 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F(L_0, (RuntimeObject*)__this, (&V_0), ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_2 = V_0;
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_3, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, NULL);
		V_1 = L_4;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_5, _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69, NULL);
		V_2 = L_6;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_7 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 34)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		RuntimeObject* L_10;
		L_10 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_7, _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9, L_9, NULL);
		__this->____comparer_6 = ((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 41)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer_6), (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 41))));
		int32_t L_11 = V_2;
		if (!L_11)
		{
			goto IL_00c9;
		}
	}
	{
		int32_t L_12 = V_2;
		int32_t L_13;
		L_13 = ((  int32_t (*) (Dictionary_2_t377C2B6CAA20982B0AC7A180E3800172E88C8BDE*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(__this, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_14 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 37)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		NullCheck(L_14);
		RuntimeObject* L_17;
		L_17 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_14, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, L_16, NULL);
		V_3 = ((KeyValuePair_2U5BU5D_t889086771E46EA552EA0DA1AE810C66A494D9F78*)Castclass((RuntimeObject*)L_17, il2cpp_rgctx_data(method->klass->rgctx_data, 46)));
		KeyValuePair_2U5BU5D_t889086771E46EA552EA0DA1AE810C66A494D9F78* L_18 = V_3;
		if (L_18)
		{
			goto IL_007a;
		}
	}
	{
		ThrowHelper_ThrowSerializationException_m03BE2B48CD3617C32FBCEE16030F7C5563E04E16((int32_t)((int32_t)16), NULL);
	}

IL_007a:
	{
		V_4 = 0;
		goto IL_00c0;
	}

IL_007f:
	{
		KeyValuePair_2U5BU5D_t889086771E46EA552EA0DA1AE810C66A494D9F78* L_19 = V_3;
		int32_t L_20 = V_4;
		NullCheck(L_19);
		RuntimeObject* L_21;
		L_21 = KeyValuePair_2_get_Key_mBE72C27BFF193B87C192E8F269820D2296B6E172_inline(((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20))), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		if (L_21)
		{
			goto IL_009a;
		}
	}
	{
		ThrowHelper_ThrowSerializationException_m03BE2B48CD3617C32FBCEE16030F7C5563E04E16((int32_t)((int32_t)17), NULL);
	}

IL_009a:
	{
		KeyValuePair_2U5BU5D_t889086771E46EA552EA0DA1AE810C66A494D9F78* L_22 = V_3;
		int32_t L_23 = V_4;
		NullCheck(L_22);
		RuntimeObject* L_24;
		L_24 = KeyValuePair_2_get_Key_mBE72C27BFF193B87C192E8F269820D2296B6E172_inline(((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23))), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		KeyValuePair_2U5BU5D_t889086771E46EA552EA0DA1AE810C66A494D9F78* L_25 = V_3;
		int32_t L_26 = V_4;
		NullCheck(L_25);
		PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8 L_27;
		L_27 = KeyValuePair_2_get_Value_m4436FB8460A00616072675A6DC8EF35E3C57021E_inline(((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26))), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		((  void (*) (Dictionary_2_t377C2B6CAA20982B0AC7A180E3800172E88C8BDE*, RuntimeObject*, PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(__this, L_24, L_27, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		int32_t L_28 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_00c0:
	{
		int32_t L_29 = V_4;
		KeyValuePair_2U5BU5D_t889086771E46EA552EA0DA1AE810C66A494D9F78* L_30 = V_3;
		NullCheck(L_30);
		if ((((int32_t)L_29) < ((int32_t)((int32_t)(((RuntimeArray*)L_30)->max_length)))))
		{
			goto IL_007f;
		}
	}
	{
		goto IL_00d0;
	}

IL_00c9:
	{
		__this->____buckets_0 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets_0), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
	}

IL_00d0:
	{
		int32_t L_31 = V_1;
		__this->____version_5 = L_31;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_32;
		L_32 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		NullCheck(L_32);
		bool L_33;
		L_33 = ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E(L_32, (RuntimeObject*)__this, ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.UIElements.StyleComplexSelector/PseudoStateData>::Resize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m5893C81800791089FF6F93DCF1EF0B9C0A1C2F88_gshared (Dictionary_2_t377C2B6CAA20982B0AC7A180E3800172E88C8BDE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = (int32_t)__this->____count_2;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_ExpandPrime_m9A35EC171AA0EA16F7C9F71EE6FAD5A82565ADB9(L_0, NULL);
		((  void (*) (Dictionary_2_t377C2B6CAA20982B0AC7A180E3800172E88C8BDE*, int32_t, bool, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 47)))(__this, L_1, (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 47));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.UIElements.StyleComplexSelector/PseudoStateData>::Resize(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_mA6121439C446D083702A4D9DB946E261CB5B5449_gshared (Dictionary_2_t377C2B6CAA20982B0AC7A180E3800172E88C8BDE* __this, int32_t ___newSize0, bool ___forceNewHashCodes1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	EntryU5BU5D_t68CA0D1367AB2807A569CCED387E01680CB52ED7* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		int32_t L_0 = ___newSize0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = ___newSize0;
		EntryU5BU5D_t68CA0D1367AB2807A569CCED387E01680CB52ED7* L_3 = (EntryU5BU5D_t68CA0D1367AB2807A569CCED387E01680CB52ED7*)(EntryU5BU5D_t68CA0D1367AB2807A569CCED387E01680CB52ED7*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 44), (uint32_t)L_2);
		V_1 = L_3;
		int32_t L_4 = (int32_t)__this->____count_2;
		V_2 = L_4;
		EntryU5BU5D_t68CA0D1367AB2807A569CCED387E01680CB52ED7* L_5 = (EntryU5BU5D_t68CA0D1367AB2807A569CCED387E01680CB52ED7*)__this->____entries_1;
		EntryU5BU5D_t68CA0D1367AB2807A569CCED387E01680CB52ED7* L_6 = V_1;
		int32_t L_7 = V_2;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, 0, (RuntimeArray*)L_6, 0, L_7, NULL);
		il2cpp_codegen_initobj((&V_3), sizeof(RuntimeObject*));
		RuntimeObject* L_8 = V_3;
		bool L_9 = ___forceNewHashCodes1;
		if (!((int32_t)(((((RuntimeObject*)(RuntimeObject*)L_8) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0)&(int32_t)L_9)))
		{
			goto IL_0084;
		}
	}
	{
		V_4 = 0;
		goto IL_007f;
	}

IL_003e:
	{
		EntryU5BU5D_t68CA0D1367AB2807A569CCED387E01680CB52ED7* L_10 = V_1;
		int32_t L_11 = V_4;
		NullCheck(L_10);
		int32_t L_12 = (int32_t)((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)))->___hashCode_0;
		if ((((int32_t)L_12) < ((int32_t)0)))
		{
			goto IL_0079;
		}
	}
	{
		EntryU5BU5D_t68CA0D1367AB2807A569CCED387E01680CB52ED7* L_13 = V_1;
		int32_t L_14 = V_4;
		NullCheck(L_13);
		EntryU5BU5D_t68CA0D1367AB2807A569CCED387E01680CB52ED7* L_15 = V_1;
		int32_t L_16 = V_4;
		NullCheck(L_15);
		RuntimeObject** L_17 = (RuntimeObject**)(&((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___key_2);
		NullCheck((*L_17));
		int32_t L_18;
		L_18 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, (*L_17));
		((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)))->___hashCode_0 = ((int32_t)(L_18&((int32_t)2147483647LL)));
	}

IL_0079:
	{
		int32_t L_19 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_007f:
	{
		int32_t L_20 = V_4;
		int32_t L_21 = V_2;
		if ((((int32_t)L_20) < ((int32_t)L_21)))
		{
			goto IL_003e;
		}
	}

IL_0084:
	{
		V_5 = 0;
		goto IL_00cb;
	}

IL_0089:
	{
		EntryU5BU5D_t68CA0D1367AB2807A569CCED387E01680CB52ED7* L_22 = V_1;
		int32_t L_23 = V_5;
		NullCheck(L_22);
		int32_t L_24 = (int32_t)((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23)))->___hashCode_0;
		if ((((int32_t)L_24) < ((int32_t)0)))
		{
			goto IL_00c5;
		}
	}
	{
		EntryU5BU5D_t68CA0D1367AB2807A569CCED387E01680CB52ED7* L_25 = V_1;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		int32_t L_27 = (int32_t)((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___hashCode_0;
		int32_t L_28 = ___newSize0;
		V_6 = ((int32_t)(L_27%L_28));
		EntryU5BU5D_t68CA0D1367AB2807A569CCED387E01680CB52ED7* L_29 = V_1;
		int32_t L_30 = V_5;
		NullCheck(L_29);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = V_0;
		int32_t L_32 = V_6;
		NullCheck(L_31);
		int32_t L_33 = L_32;
		int32_t L_34 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		((L_29)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_30)))->___next_1 = ((int32_t)il2cpp_codegen_subtract(L_34, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_35 = V_0;
		int32_t L_36 = V_6;
		int32_t L_37 = V_5;
		NullCheck(L_35);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(L_36), (int32_t)((int32_t)il2cpp_codegen_add(L_37, 1)));
	}

IL_00c5:
	{
		int32_t L_38 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
	}

IL_00cb:
	{
		int32_t L_39 = V_5;
		int32_t L_40 = V_2;
		if ((((int32_t)L_39) < ((int32_t)L_40)))
		{
			goto IL_0089;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_41 = V_0;
		__this->____buckets_0 = L_41;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets_0), (void*)L_41);
		EntryU5BU5D_t68CA0D1367AB2807A569CCED387E01680CB52ED7* L_42 = V_1;
		__this->____entries_1 = L_42;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries_1), (void*)L_42);
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.UIElements.StyleComplexSelector/PseudoStateData>::Remove(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_mA538370CE25C6017A7D557830F2D6D29ED7B121D_gshared (Dictionary_2_t377C2B6CAA20982B0AC7A180E3800172E88C8BDE* __this, RuntimeObject* ___key0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Entry_t7570C0657D5A1E8127DA80AE9CF398FAE7F58164* V_4 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	RuntimeObject* G_B10_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	bool G_B11_0 = false;
	{
		RuntimeObject* L_0 = ___key0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_000e:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		if (!L_1)
		{
			goto IL_0149;
		}
	}
	{
		RuntimeObject* L_2 = (RuntimeObject*)__this->____comparer_6;
		RuntimeObject* L_3 = L_2;
		G_B4_0 = L_3;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_0032;
		}
	}
	{
		NullCheck((___key0));
		int32_t L_4;
		L_4 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, (___key0));
		G_B6_0 = L_4;
		goto IL_0038;
	}

IL_0032:
	{
		RuntimeObject* L_5 = ___key0;
		NullCheck(G_B5_0);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Object>::GetHashCode(T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 41), G_B5_0, L_5);
		G_B6_0 = L_6;
	}

IL_0038:
	{
		V_0 = ((int32_t)(G_B6_0&((int32_t)2147483647LL)));
		int32_t L_7 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_8);
		V_1 = ((int32_t)(L_7%((int32_t)(((RuntimeArray*)L_8)->max_length))));
		V_2 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		int32_t L_10 = V_1;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		int32_t L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
		goto IL_0142;
	}

IL_005c:
	{
		EntryU5BU5D_t68CA0D1367AB2807A569CCED387E01680CB52ED7* L_13 = (EntryU5BU5D_t68CA0D1367AB2807A569CCED387E01680CB52ED7*)__this->____entries_1;
		int32_t L_14 = V_3;
		NullCheck(L_13);
		V_4 = ((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)));
		Entry_t7570C0657D5A1E8127DA80AE9CF398FAE7F58164* L_15 = V_4;
		int32_t L_16 = (int32_t)L_15->___hashCode_0;
		int32_t L_17 = V_0;
		if ((!(((uint32_t)L_16) == ((uint32_t)L_17))))
		{
			goto IL_0138;
		}
	}
	{
		RuntimeObject* L_18 = (RuntimeObject*)__this->____comparer_6;
		RuntimeObject* L_19 = L_18;
		G_B9_0 = L_19;
		if (L_19)
		{
			G_B10_0 = L_19;
			goto IL_0095;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_20;
		L_20 = ((  EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		Entry_t7570C0657D5A1E8127DA80AE9CF398FAE7F58164* L_21 = V_4;
		RuntimeObject* L_22 = (RuntimeObject*)L_21->___key_2;
		RuntimeObject* L_23 = ___key0;
		NullCheck(L_20);
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Object>::Equals(T,T) */, L_20, L_22, L_23);
		G_B11_0 = L_24;
		goto IL_00a2;
	}

IL_0095:
	{
		Entry_t7570C0657D5A1E8127DA80AE9CF398FAE7F58164* L_25 = V_4;
		RuntimeObject* L_26 = (RuntimeObject*)L_25->___key_2;
		RuntimeObject* L_27 = ___key0;
		NullCheck(G_B10_0);
		bool L_28;
		L_28 = InterfaceFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Object>::Equals(T,T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 41), G_B10_0, L_26, L_27);
		G_B11_0 = L_28;
	}

IL_00a2:
	{
		if (!G_B11_0)
		{
			goto IL_0138;
		}
	}
	{
		int32_t L_29 = V_2;
		if ((((int32_t)L_29) >= ((int32_t)0)))
		{
			goto IL_00be;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_30 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		int32_t L_31 = V_1;
		Entry_t7570C0657D5A1E8127DA80AE9CF398FAE7F58164* L_32 = V_4;
		int32_t L_33 = (int32_t)L_32->___next_1;
		NullCheck(L_30);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_31), (int32_t)((int32_t)il2cpp_codegen_add(L_33, 1)));
		goto IL_00d6;
	}

IL_00be:
	{
		EntryU5BU5D_t68CA0D1367AB2807A569CCED387E01680CB52ED7* L_34 = (EntryU5BU5D_t68CA0D1367AB2807A569CCED387E01680CB52ED7*)__this->____entries_1;
		int32_t L_35 = V_2;
		NullCheck(L_34);
		Entry_t7570C0657D5A1E8127DA80AE9CF398FAE7F58164* L_36 = V_4;
		int32_t L_37 = (int32_t)L_36->___next_1;
		((L_34)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_35)))->___next_1 = L_37;
	}

IL_00d6:
	{
		Entry_t7570C0657D5A1E8127DA80AE9CF398FAE7F58164* L_38 = V_4;
		L_38->___hashCode_0 = (-1);
		Entry_t7570C0657D5A1E8127DA80AE9CF398FAE7F58164* L_39 = V_4;
		int32_t L_40 = (int32_t)__this->____freeList_3;
		L_39->___next_1 = L_40;
		if (!true)
		{
			goto IL_00ff;
		}
	}
	{
		Entry_t7570C0657D5A1E8127DA80AE9CF398FAE7F58164* L_41 = V_4;
		RuntimeObject** L_42 = (RuntimeObject**)(&L_41->___key_2);
		il2cpp_codegen_initobj(L_42, sizeof(RuntimeObject*));
	}

IL_00ff:
	{
		if (!false)
		{
			goto IL_0113;
		}
	}
	{
		Entry_t7570C0657D5A1E8127DA80AE9CF398FAE7F58164* L_43 = V_4;
		PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8* L_44 = (PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8*)(&L_43->___value_3);
		il2cpp_codegen_initobj(L_44, sizeof(PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8));
	}

IL_0113:
	{
		int32_t L_45 = V_3;
		__this->____freeList_3 = L_45;
		int32_t L_46 = (int32_t)__this->____freeCount_4;
		__this->____freeCount_4 = ((int32_t)il2cpp_codegen_add(L_46, 1));
		int32_t L_47 = (int32_t)__this->____version_5;
		__this->____version_5 = ((int32_t)il2cpp_codegen_add(L_47, 1));
		return (bool)1;
	}

IL_0138:
	{
		int32_t L_48 = V_3;
		V_2 = L_48;
		Entry_t7570C0657D5A1E8127DA80AE9CF398FAE7F58164* L_49 = V_4;
		int32_t L_50 = (int32_t)L_49->___next_1;
		V_3 = L_50;
	}

IL_0142:
	{
		int32_t L_51 = V_3;
		if ((((int32_t)L_51) >= ((int32_t)0)))
		{
			goto IL_005c;
		}
	}

IL_0149:
	{
		return (bool)0;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.UIElements.StyleComplexSelector/PseudoStateData>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m210FC0055E9EF77E13C23B66ED80E6E7CD6DB4FF_gshared (Dictionary_2_t377C2B6CAA20982B0AC7A180E3800172E88C8BDE* __this, RuntimeObject* ___key0, PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8* ___value1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = ___key0;
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_t377C2B6CAA20982B0AC7A180E3800172E88C8BDE*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 20)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0025;
		}
	}
	{
		PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8* L_3 = ___value1;
		EntryU5BU5D_t68CA0D1367AB2807A569CCED387E01680CB52ED7* L_4 = (EntryU5BU5D_t68CA0D1367AB2807A569CCED387E01680CB52ED7*)__this->____entries_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8 L_6 = (PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8)((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value_3;
		*(PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8*)L_3 = L_6;
		return (bool)1;
	}

IL_0025:
	{
		PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8* L_7 = ___value1;
		il2cpp_codegen_initobj(L_7, sizeof(PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8));
		return (bool)0;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.UIElements.StyleComplexSelector/PseudoStateData>::TryAdd(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryAdd_m1D45D6A2496C72EE87C222C75FA13BD335D18BF4_gshared (Dictionary_2_t377C2B6CAA20982B0AC7A180E3800172E88C8BDE* __this, RuntimeObject* ___key0, PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8 ___value1, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___key0;
		PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8 L_1 = ___value1;
		bool L_2;
		L_2 = ((  bool (*) (Dictionary_2_t377C2B6CAA20982B0AC7A180E3800172E88C8BDE*, RuntimeObject*, PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8, uint8_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 22)))(__this, L_0, L_1, (uint8_t)0, il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		return L_2;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.UIElements.StyleComplexSelector/PseudoStateData>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m60F8C1B26EBCA0DDA53AF9F4307B80AB00B3CA83_gshared (Dictionary_2_t377C2B6CAA20982B0AC7A180E3800172E88C8BDE* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.UIElements.StyleComplexSelector/PseudoStateData>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m00F4475231D4538EE14EFED154339B5280E64B9E_gshared (Dictionary_2_t377C2B6CAA20982B0AC7A180E3800172E88C8BDE* __this, KeyValuePair_2U5BU5D_t889086771E46EA552EA0DA1AE810C66A494D9F78* ___array0, int32_t ___index1, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2U5BU5D_t889086771E46EA552EA0DA1AE810C66A494D9F78* L_0 = ___array0;
		int32_t L_1 = ___index1;
		((  void (*) (Dictionary_2_t377C2B6CAA20982B0AC7A180E3800172E88C8BDE*, KeyValuePair_2U5BU5D_t889086771E46EA552EA0DA1AE810C66A494D9F78*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 36)))(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 36));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.UIElements.StyleComplexSelector/PseudoStateData>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_ICollection_CopyTo_m9D63294EA7F48BEA37EDFF58C53D52697523A1AE_gshared (Dictionary_2_t377C2B6CAA20982B0AC7A180E3800172E88C8BDE* __this, RuntimeArray* ___array0, int32_t ___index1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_t889086771E46EA552EA0DA1AE810C66A494D9F78* V_0 = NULL;
	DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* V_1 = NULL;
	EntryU5BU5D_t68CA0D1367AB2807A569CCED387E01680CB52ED7* V_2 = NULL;
	int32_t V_3 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_4 = NULL;
	int32_t V_5 = 0;
	EntryU5BU5D_t68CA0D1367AB2807A569CCED387E01680CB52ED7* V_6 = NULL;
	int32_t V_7 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___array0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___array0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(L_1, NULL);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___array0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___index1;
		RuntimeArray* L_6 = ___array0;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_6, NULL);
		if ((!(((uint32_t)L_5) > ((uint32_t)L_7))))
		{
			goto IL_0035;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0035:
	{
		RuntimeArray* L_8 = ___array0;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_8, NULL);
		int32_t L_10 = ___index1;
		int32_t L_11;
		L_11 = ((  int32_t (*) (Dictionary_2_t377C2B6CAA20982B0AC7A180E3800172E88C8BDE*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 29)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_9, L_10))) >= ((int32_t)L_11)))
		{
			goto IL_004b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)5, NULL);
	}

IL_004b:
	{
		RuntimeArray* L_12 = ___array0;
		V_0 = ((KeyValuePair_2U5BU5D_t889086771E46EA552EA0DA1AE810C66A494D9F78*)IsInst((RuntimeObject*)L_12, il2cpp_rgctx_data(method->klass->rgctx_data, 46)));
		KeyValuePair_2U5BU5D_t889086771E46EA552EA0DA1AE810C66A494D9F78* L_13 = V_0;
		if (!L_13)
		{
			goto IL_005e;
		}
	}
	{
		KeyValuePair_2U5BU5D_t889086771E46EA552EA0DA1AE810C66A494D9F78* L_14 = V_0;
		int32_t L_15 = ___index1;
		((  void (*) (Dictionary_2_t377C2B6CAA20982B0AC7A180E3800172E88C8BDE*, KeyValuePair_2U5BU5D_t889086771E46EA552EA0DA1AE810C66A494D9F78*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 36)))(__this, L_14, L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 36));
		return;
	}

IL_005e:
	{
		RuntimeArray* L_16 = ___array0;
		V_1 = ((DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533*)IsInst((RuntimeObject*)L_16, DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var));
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_17 = V_1;
		if (!L_17)
		{
			goto IL_00c3;
		}
	}
	{
		EntryU5BU5D_t68CA0D1367AB2807A569CCED387E01680CB52ED7* L_18 = (EntryU5BU5D_t68CA0D1367AB2807A569CCED387E01680CB52ED7*)__this->____entries_1;
		V_2 = L_18;
		V_3 = 0;
		goto IL_00b9;
	}

IL_0073:
	{
		EntryU5BU5D_t68CA0D1367AB2807A569CCED387E01680CB52ED7* L_19 = V_2;
		int32_t L_20 = V_3;
		NullCheck(L_19);
		int32_t L_21 = (int32_t)((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20)))->___hashCode_0;
		if ((((int32_t)L_21) < ((int32_t)0)))
		{
			goto IL_00b5;
		}
	}
	{
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_22 = V_1;
		int32_t L_23 = ___index1;
		int32_t L_24 = L_23;
		___index1 = ((int32_t)il2cpp_codegen_add(L_24, 1));
		EntryU5BU5D_t68CA0D1367AB2807A569CCED387E01680CB52ED7* L_25 = V_2;
		int32_t L_26 = V_3;
		NullCheck(L_25);
		RuntimeObject* L_27 = (RuntimeObject*)((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___key_2;
		EntryU5BU5D_t68CA0D1367AB2807A569CCED387E01680CB52ED7* L_28 = V_2;
		int32_t L_29 = V_3;
		NullCheck(L_28);
		PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8 L_30 = (PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8)((L_28)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_29)))->___value_3;
		PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8 L_31 = L_30;
		RuntimeObject* L_32 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 28), &L_31);
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_33;
		memset((&L_33), 0, sizeof(L_33));
		DictionaryEntry__ctor_m2768353E53A75C4860E34B37DAF1342120C5D1EA((&L_33), L_27, L_32, /*hidden argument*/NULL);
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(L_24), (DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB)L_33);
	}

IL_00b5:
	{
		int32_t L_34 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_00b9:
	{
		int32_t L_35 = V_3;
		int32_t L_36 = (int32_t)__this->____count_2;
		if ((((int32_t)L_35) < ((int32_t)L_36)))
		{
			goto IL_0073;
		}
	}
	{
		return;
	}

IL_00c3:
	{
		RuntimeArray* L_37 = ___array0;
		V_4 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_37, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_38 = V_4;
		if (L_38)
		{
			goto IL_00d4;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_00d4:
	{
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_39 = (int32_t)__this->____count_2;
			V_5 = L_39;
			EntryU5BU5D_t68CA0D1367AB2807A569CCED387E01680CB52ED7* L_40 = (EntryU5BU5D_t68CA0D1367AB2807A569CCED387E01680CB52ED7*)__this->____entries_1;
			V_6 = L_40;
			V_7 = 0;
			goto IL_0130_1;
		}

IL_00ea_1:
		{
			EntryU5BU5D_t68CA0D1367AB2807A569CCED387E01680CB52ED7* L_41 = V_6;
			int32_t L_42 = V_7;
			NullCheck(L_41);
			int32_t L_43 = (int32_t)((L_41)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_42)))->___hashCode_0;
			if ((((int32_t)L_43) < ((int32_t)0)))
			{
				goto IL_012a_1;
			}
		}
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_44 = V_4;
			int32_t L_45 = ___index1;
			int32_t L_46 = L_45;
			___index1 = ((int32_t)il2cpp_codegen_add(L_46, 1));
			EntryU5BU5D_t68CA0D1367AB2807A569CCED387E01680CB52ED7* L_47 = V_6;
			int32_t L_48 = V_7;
			NullCheck(L_47);
			RuntimeObject* L_49 = (RuntimeObject*)((L_47)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_48)))->___key_2;
			EntryU5BU5D_t68CA0D1367AB2807A569CCED387E01680CB52ED7* L_50 = V_6;
			int32_t L_51 = V_7;
			NullCheck(L_50);
			PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8 L_52 = (PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8)((L_50)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_51)))->___value_3;
			KeyValuePair_2_t852F23A435B740B3D14D3CE08B14FFD4690334E7 L_53;
			memset((&L_53), 0, sizeof(L_53));
			KeyValuePair_2__ctor_m899F53F40BCAA19E77F5E9A552CAA43D134B9CC9((&L_53), L_49, L_52, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 31));
			KeyValuePair_2_t852F23A435B740B3D14D3CE08B14FFD4690334E7 L_54 = L_53;
			RuntimeObject* L_55 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 30), &L_54);
			NullCheck(L_44);
			ArrayElementTypeCheck (L_44, L_55);
			(L_44)->SetAt(static_cast<il2cpp_array_size_t>(L_46), (RuntimeObject*)L_55);
		}

IL_012a_1:
		{
			int32_t L_56 = V_7;
			V_7 = ((int32_t)il2cpp_codegen_add(L_56, 1));
		}

IL_0130_1:
		{
			int32_t L_57 = V_7;
			int32_t L_58 = V_5;
			if ((((int32_t)L_57) < ((int32_t)L_58)))
			{
				goto IL_00ea_1;
			}
		}
		{
			goto IL_0140;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0138;
		}
		throw e;
	}

CATCH_0138:
	{// begin catch(System.ArrayTypeMismatchException)
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0140;
	}// end catch (depth: 1)

IL_0140:
	{
		return;
	}
}
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.UIElements.StyleComplexSelector/PseudoStateData>::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m6FD7C9CAB420DE141FBCA27BCCE647EB31006345_gshared (Dictionary_2_t377C2B6CAA20982B0AC7A180E3800172E88C8BDE* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tE506445EC02F2FBF2A0176A4BD4BBFFBCF214672 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mEB026458339B7ECD4D5E558C57D012096E15822B((&L_0), __this, 2, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		Enumerator_tE506445EC02F2FBF2A0176A4BD4BBFFBCF214672 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 32), &L_1);
		return (RuntimeObject*)L_2;
	}
}
// System.Object System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.UIElements.StyleComplexSelector/PseudoStateData>::System.Collections.ICollection.get_SyncRoot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_ICollection_get_SyncRoot_mFA424CE760E1F36E4BB374D5112A2BBE41024C1D_gshared (Dictionary_2_t377C2B6CAA20982B0AC7A180E3800172E88C8BDE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____syncRoot_9;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot_9);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = (RuntimeObject*)__this->____syncRoot_9;
		return L_4;
	}
}
// System.Object System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.UIElements.StyleComplexSelector/PseudoStateData>::System.Collections.IDictionary.get_Item(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_get_Item_m327ED1F85EDFAC8AE0C687A7F83B448DBFA6DA82_gshared (Dictionary_2_t377C2B6CAA20982B0AC7A180E3800172E88C8BDE* __this, RuntimeObject* ___key0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = ___key0;
		bool L_1;
		L_1 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 48)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 48));
		if (!L_1)
		{
			goto IL_0030;
		}
	}
	{
		RuntimeObject* L_2 = ___key0;
		int32_t L_3;
		L_3 = ((  int32_t (*) (Dictionary_2_t377C2B6CAA20982B0AC7A180E3800172E88C8BDE*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 20)))(__this, ((RuntimeObject*)Castclass((RuntimeObject*)L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 21))), il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		V_0 = L_3;
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		EntryU5BU5D_t68CA0D1367AB2807A569CCED387E01680CB52ED7* L_5 = (EntryU5BU5D_t68CA0D1367AB2807A569CCED387E01680CB52ED7*)__this->____entries_1;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8 L_7 = (PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8)((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->___value_3;
		PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8 L_8 = L_7;
		RuntimeObject* L_9 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 28), &L_8);
		return L_9;
	}

IL_0030:
	{
		return NULL;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.UIElements.StyleComplexSelector/PseudoStateData>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_IDictionary_set_Item_m2D4AC49FC9648CFD61A70D99FE461080A1E12776_gshared (Dictionary_2_t377C2B6CAA20982B0AC7A180E3800172E88C8BDE* __this, RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		RuntimeObject* L_0 = ___key0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___value1;
		((  void (*) (RuntimeObject*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 50)))(L_1, (int32_t)((int32_t)15), il2cpp_rgctx_method(method->klass->rgctx_data, 50));
	}
	try
	{// begin try (depth: 1)
		{
			RuntimeObject* L_2 = ___key0;
			V_0 = ((RuntimeObject*)Castclass((RuntimeObject*)L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 21)));
		}
		try
		{// begin try (depth: 2)
			RuntimeObject* L_3 = V_0;
			RuntimeObject* L_4 = ___value1;
			((  void (*) (Dictionary_2_t377C2B6CAA20982B0AC7A180E3800172E88C8BDE*, RuntimeObject*, PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 51)))(__this, L_3, ((*(PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8*)((PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8*)(PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8*)UnBox(L_4, il2cpp_rgctx_data(method->klass->rgctx_data, 28))))), il2cpp_rgctx_method(method->klass->rgctx_data, 51));
			goto IL_003a_1;
		}// end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0027_1;
			}
			throw e;
		}

CATCH_0027_1:
		{// begin catch(System.InvalidCastException)
			RuntimeObject* L_5 = ___value1;
			RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 52)) };
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
			Type_t* L_7;
			L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
			ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_5, L_7, NULL);
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_003a_1;
		}// end catch (depth: 2)

IL_003a_1:
		{
			goto IL_004f;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003c;
		}
		throw e;
	}

CATCH_003c:
	{// begin catch(System.InvalidCastException)
		RuntimeObject* L_8 = ___key0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 53)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		ThrowHelper_ThrowWrongKeyTypeArgumentException_m90E5BCE2CB10EEC16F254C237121C6816C4D6982(L_8, L_10, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_004f;
	}// end catch (depth: 1)

IL_004f:
	{
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.UIElements.StyleComplexSelector/PseudoStateData>::IsCompatibleKey(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_IsCompatibleKey_mF2E4A6AA157FBC97EFE8489DCCCA90DC8EEDE3CE_gshared (RuntimeObject* ___key0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___key0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___key0;
		return (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_1, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 21)))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.UIElements.StyleComplexSelector/PseudoStateData>::System.Collections.IDictionary.Contains(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_IDictionary_Contains_m2BB9962A4814E979C71F117CE98B16E2E09436BB_gshared (Dictionary_2_t377C2B6CAA20982B0AC7A180E3800172E88C8BDE* __this, RuntimeObject* ___key0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___key0;
		bool L_1;
		L_1 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 48)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 48));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___key0;
		bool L_3;
		L_3 = ((  bool (*) (Dictionary_2_t377C2B6CAA20982B0AC7A180E3800172E88C8BDE*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 54)))(__this, ((RuntimeObject*)Castclass((RuntimeObject*)L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 21))), il2cpp_rgctx_method(method->klass->rgctx_data, 54));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.UIElements.StyleComplexSelector/PseudoStateData>::System.Collections.IDictionary.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_GetEnumerator_m37331B48B842C95A9D2575CBAE3EA6226C3FBF6B_gshared (Dictionary_2_t377C2B6CAA20982B0AC7A180E3800172E88C8BDE* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tE506445EC02F2FBF2A0176A4BD4BBFFBCF214672 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mEB026458339B7ECD4D5E558C57D012096E15822B((&L_0), __this, 1, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		Enumerator_tE506445EC02F2FBF2A0176A4BD4BBFFBCF214672 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 32), &L_1);
		return (RuntimeObject*)L_2;
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
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.TerrainUtils.TerrainTileCoord,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mBEB6B3A304C6A01DA2A2E016B112DD4E73D6A0B8_gshared (Dictionary_2_t22B5EE7684537D7D143E6F6FCDC4C58B5D53F68F* __this, const RuntimeMethod* method) 
{
	{
		((  void (*) (Dictionary_2_t22B5EE7684537D7D143E6F6FCDC4C58B5D53F68F*, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, 0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.TerrainUtils.TerrainTileCoord,System.Object>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m66FE9F21DE775E0B1C450192A91472D5E15DA05D_gshared (Dictionary_2_t22B5EE7684537D7D143E6F6FCDC4C58B5D53F68F* __this, int32_t ___capacity0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___capacity0;
		((  void (*) (Dictionary_2_t22B5EE7684537D7D143E6F6FCDC4C58B5D53F68F*, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.TerrainUtils.TerrainTileCoord,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mD5BA3799F0C74756F9161B00768283066F83C95F_gshared (Dictionary_2_t22B5EE7684537D7D143E6F6FCDC4C58B5D53F68F* __this, RuntimeObject* ___comparer0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___comparer0;
		((  void (*) (Dictionary_2_t22B5EE7684537D7D143E6F6FCDC4C58B5D53F68F*, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, 0, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.TerrainUtils.TerrainTileCoord,System.Object>::.ctor(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m6D5D2179CC98212300E832794054477640088F19_gshared (Dictionary_2_t22B5EE7684537D7D143E6F6FCDC4C58B5D53F68F* __this, int32_t ___capacity0, RuntimeObject* ___comparer1, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___capacity0;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0011;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97((int32_t)((int32_t)12), NULL);
	}

IL_0011:
	{
		int32_t L_1 = ___capacity0;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_2 = ___capacity0;
		int32_t L_3;
		L_3 = ((  int32_t (*) (Dictionary_2_t22B5EE7684537D7D143E6F6FCDC4C58B5D53F68F*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(__this, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
	}

IL_001d:
	{
		RuntimeObject* L_4 = ___comparer1;
		EqualityComparer_1_t825BE29F8175FFB17D7A1752D208ACAB0066AEC2* L_5;
		L_5 = ((  EqualityComparer_1_t825BE29F8175FFB17D7A1752D208ACAB0066AEC2* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if ((((RuntimeObject*)(RuntimeObject*)L_4) == ((RuntimeObject*)(EqualityComparer_1_t825BE29F8175FFB17D7A1752D208ACAB0066AEC2*)L_5)))
		{
			goto IL_002c;
		}
	}
	{
		RuntimeObject* L_6 = ___comparer1;
		__this->____comparer_6 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer_6), (void*)L_6);
	}

IL_002c:
	{
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.TerrainUtils.TerrainTileCoord,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m84ED2E1A1F4E8892B9C2BB9AEA1F6F8AA852DA0C_gshared (Dictionary_2_t22B5EE7684537D7D143E6F6FCDC4C58B5D53F68F* __this, RuntimeObject* ___dictionary0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___dictionary0;
		((  void (*) (Dictionary_2_t22B5EE7684537D7D143E6F6FCDC4C58B5D53F68F*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)))(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.TerrainUtils.TerrainTileCoord,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mDF929275CEEEDFB58978A1322C425A541E1AF000_gshared (Dictionary_2_t22B5EE7684537D7D143E6F6FCDC4C58B5D53F68F* __this, RuntimeObject* ___dictionary0, RuntimeObject* ___comparer1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	EntryU5BU5D_t5CFAFF65A005CA040F5C92D1AFEF51CB84CECE56* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	KeyValuePair_2_t8760984FFCA6E11154C918347EA4C7CFB2D0B8CE V_4;
	memset((&V_4), 0, sizeof(V_4));
	Dictionary_2_t22B5EE7684537D7D143E6F6FCDC4C58B5D53F68F* G_B2_0 = NULL;
	Dictionary_2_t22B5EE7684537D7D143E6F6FCDC4C58B5D53F68F* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	Dictionary_2_t22B5EE7684537D7D143E6F6FCDC4C58B5D53F68F* G_B3_1 = NULL;
	{
		RuntimeObject* L_0 = ___dictionary0;
		G_B1_0 = __this;
		if (L_0)
		{
			G_B2_0 = __this;
			goto IL_0007;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_000d;
	}

IL_0007:
	{
		RuntimeObject* L_1 = ___dictionary0;
		NullCheck((RuntimeObject*)L_1);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.TerrainUtils.TerrainTileCoord,System.Object>>::get_Count() */, il2cpp_rgctx_data(method->klass->rgctx_data, 5), (RuntimeObject*)L_1);
		G_B3_0 = L_2;
		G_B3_1 = G_B2_0;
	}

IL_000d:
	{
		RuntimeObject* L_3 = ___comparer1;
		((  void (*) (Dictionary_2_t22B5EE7684537D7D143E6F6FCDC4C58B5D53F68F*, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(G_B3_1, G_B3_0, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		RuntimeObject* L_4 = ___dictionary0;
		if (L_4)
		{
			goto IL_001c;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)1, NULL);
	}

IL_001c:
	{
		RuntimeObject* L_5 = ___dictionary0;
		NullCheck((RuntimeObject*)L_5);
		Type_t* L_6;
		L_6 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)L_5, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 7)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		bool L_9;
		L_9 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_6, L_8, NULL);
		if (!L_9)
		{
			goto IL_0080;
		}
	}
	{
		RuntimeObject* L_10 = ___dictionary0;
		Dictionary_2_t22B5EE7684537D7D143E6F6FCDC4C58B5D53F68F* L_11 = ((Dictionary_2_t22B5EE7684537D7D143E6F6FCDC4C58B5D53F68F*)CastclassClass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 8)));
		NullCheck(L_11);
		int32_t L_12 = (int32_t)L_11->____count_2;
		V_0 = L_12;
		NullCheck(L_11);
		EntryU5BU5D_t5CFAFF65A005CA040F5C92D1AFEF51CB84CECE56* L_13 = (EntryU5BU5D_t5CFAFF65A005CA040F5C92D1AFEF51CB84CECE56*)L_11->____entries_1;
		V_1 = L_13;
		V_2 = 0;
		goto IL_007b;
	}

IL_004a:
	{
		EntryU5BU5D_t5CFAFF65A005CA040F5C92D1AFEF51CB84CECE56* L_14 = V_1;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		int32_t L_16 = (int32_t)((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)))->___hashCode_0;
		if ((((int32_t)L_16) < ((int32_t)0)))
		{
			goto IL_0077;
		}
	}
	{
		EntryU5BU5D_t5CFAFF65A005CA040F5C92D1AFEF51CB84CECE56* L_17 = V_1;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		TerrainTileCoord_t2181DDF40A8A428A84817957CB7FB19A314F4F09 L_19 = (TerrainTileCoord_t2181DDF40A8A428A84817957CB7FB19A314F4F09)((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___key_2;
		EntryU5BU5D_t5CFAFF65A005CA040F5C92D1AFEF51CB84CECE56* L_20 = V_1;
		int32_t L_21 = V_2;
		NullCheck(L_20);
		RuntimeObject* L_22 = (RuntimeObject*)((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___value_3;
		((  void (*) (Dictionary_2_t22B5EE7684537D7D143E6F6FCDC4C58B5D53F68F*, TerrainTileCoord_t2181DDF40A8A428A84817957CB7FB19A314F4F09, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(__this, L_19, L_22, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
	}

IL_0077:
	{
		int32_t L_23 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_007b:
	{
		int32_t L_24 = V_2;
		int32_t L_25 = V_0;
		if ((((int32_t)L_24) < ((int32_t)L_25)))
		{
			goto IL_004a;
		}
	}
	{
		return;
	}

IL_0080:
	{
		RuntimeObject* L_26 = ___dictionary0;
		NullCheck((RuntimeObject*)L_26);
		RuntimeObject* L_27;
		L_27 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.TerrainUtils.TerrainTileCoord,System.Object>>::GetEnumerator() */, il2cpp_rgctx_data(method->klass->rgctx_data, 10), (RuntimeObject*)L_26);
		V_3 = L_27;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00af:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_28 = V_3;
					if (!L_28)
					{
						goto IL_00b8;
					}
				}
				{
					RuntimeObject* L_29 = V_3;
					NullCheck((RuntimeObject*)L_29);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_29);
				}

IL_00b8:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_00a5_1;
			}

IL_0089_1:
			{
				RuntimeObject* L_30 = V_3;
				NullCheck(L_30);
				KeyValuePair_2_t8760984FFCA6E11154C918347EA4C7CFB2D0B8CE L_31;
				L_31 = InterfaceFuncInvoker0< KeyValuePair_2_t8760984FFCA6E11154C918347EA4C7CFB2D0B8CE >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.TerrainUtils.TerrainTileCoord,System.Object>>::get_Current() */, il2cpp_rgctx_data(method->klass->rgctx_data, 12), L_30);
				V_4 = L_31;
				TerrainTileCoord_t2181DDF40A8A428A84817957CB7FB19A314F4F09 L_32;
				L_32 = KeyValuePair_2_get_Key_mE27FF2218D103DBF58A36186AA62595EC4079388_inline((&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
				RuntimeObject* L_33;
				L_33 = KeyValuePair_2_get_Value_m64463C12912AD06A73305FF2EEF67678D7281515_inline((&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
				((  void (*) (Dictionary_2_t22B5EE7684537D7D143E6F6FCDC4C58B5D53F68F*, TerrainTileCoord_t2181DDF40A8A428A84817957CB7FB19A314F4F09, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(__this, L_32, L_33, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
			}

IL_00a5_1:
			{
				RuntimeObject* L_34 = V_3;
				NullCheck((RuntimeObject*)L_34);
				bool L_35;
				L_35 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_34);
				if (L_35)
				{
					goto IL_0089_1;
				}
			}
			{
				goto IL_00b9;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00b9:
	{
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.TerrainUtils.TerrainTileCoord,System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mC172220A3CA9B157A7D957869C6B69BA09C994AD_gshared (Dictionary_2_t22B5EE7684537D7D143E6F6FCDC4C58B5D53F68F* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___info0, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___context1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___info0;
		NullCheck(L_0);
		ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7(L_0, (RuntimeObject*)__this, L_1, ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		return;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2<UnityEngine.TerrainUtils.TerrainTileCoord,System.Object>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_m7D1C8AC9355A50AF1C84A0A4B186C1D52083FBB7_gshared (Dictionary_2_t22B5EE7684537D7D143E6F6FCDC4C58B5D53F68F* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____count_2;
		int32_t L_1 = (int32_t)__this->____freeCount_4;
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<UnityEngine.TerrainUtils.TerrainTileCoord,System.Object>::get_Keys()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_t8A862CFF968D9AAD432E0AFA29DECB342BF06F59* Dictionary_2_get_Keys_m1A371FDB5221EB779B15B24DE039B1191CB9394D_gshared (Dictionary_2_t22B5EE7684537D7D143E6F6FCDC4C58B5D53F68F* __this, const RuntimeMethod* method) 
{
	{
		KeyCollection_t8A862CFF968D9AAD432E0AFA29DECB342BF06F59* L_0 = (KeyCollection_t8A862CFF968D9AAD432E0AFA29DECB342BF06F59*)__this->____keys_7;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		KeyCollection_t8A862CFF968D9AAD432E0AFA29DECB342BF06F59* L_1 = (KeyCollection_t8A862CFF968D9AAD432E0AFA29DECB342BF06F59*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 16));
		NullCheck(L_1);
		((  void (*) (KeyCollection_t8A862CFF968D9AAD432E0AFA29DECB342BF06F59*, Dictionary_2_t22B5EE7684537D7D143E6F6FCDC4C58B5D53F68F*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 17)))(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
		__this->____keys_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keys_7), (void*)L_1);
	}

IL_0014:
	{
		KeyCollection_t8A862CFF968D9AAD432E0AFA29DECB342BF06F59* L_2 = (KeyCollection_t8A862CFF968D9AAD432E0AFA29DECB342BF06F59*)__this->____keys_7;
		return L_2;
	}
}
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<UnityEngine.TerrainUtils.TerrainTileCoord,System.Object>::get_Values()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_t0CA15D727691297C05CD9DFAFFEF94D100E53EEA* Dictionary_2_get_Values_mCBE363E63317E90041E60DCCA0413FCCC9D3E735_gshared (Dictionary_2_t22B5EE7684537D7D143E6F6FCDC4C58B5D53F68F* __this, const RuntimeMethod* method) 
{
	{
		ValueCollection_t0CA15D727691297C05CD9DFAFFEF94D100E53EEA* L_0 = (ValueCollection_t0CA15D727691297C05CD9DFAFFEF94D100E53EEA*)__this->____values_8;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_t0CA15D727691297C05CD9DFAFFEF94D100E53EEA* L_1 = (ValueCollection_t0CA15D727691297C05CD9DFAFFEF94D100E53EEA*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 18));
		NullCheck(L_1);
		((  void (*) (ValueCollection_t0CA15D727691297C05CD9DFAFFEF94D100E53EEA*, Dictionary_2_t22B5EE7684537D7D143E6F6FCDC4C58B5D53F68F*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 19)))(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		__this->____values_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values_8), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_t0CA15D727691297C05CD9DFAFFEF94D100E53EEA* L_2 = (ValueCollection_t0CA15D727691297C05CD9DFAFFEF94D100E53EEA*)__this->____values_8;
		return L_2;
	}
}
// System.Collections.Generic.IEnumerable`1<TValue> System.Collections.Generic.Dictionary`2<UnityEngine.TerrainUtils.TerrainTileCoord,System.Object>::System.Collections.Generic.IReadOnlyDictionary<TKey,TValue>.get_Values()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IReadOnlyDictionaryU3CTKeyU2CTValueU3E_get_Values_mDEDD0711E8B3B0169EE36A8627B2268A500D9056_gshared (Dictionary_2_t22B5EE7684537D7D143E6F6FCDC4C58B5D53F68F* __this, const RuntimeMethod* method) 
{
	{
		ValueCollection_t0CA15D727691297C05CD9DFAFFEF94D100E53EEA* L_0 = (ValueCollection_t0CA15D727691297C05CD9DFAFFEF94D100E53EEA*)__this->____values_8;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_t0CA15D727691297C05CD9DFAFFEF94D100E53EEA* L_1 = (ValueCollection_t0CA15D727691297C05CD9DFAFFEF94D100E53EEA*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 18));
		NullCheck(L_1);
		((  void (*) (ValueCollection_t0CA15D727691297C05CD9DFAFFEF94D100E53EEA*, Dictionary_2_t22B5EE7684537D7D143E6F6FCDC4C58B5D53F68F*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 19)))(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		__this->____values_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values_8), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_t0CA15D727691297C05CD9DFAFFEF94D100E53EEA* L_2 = (ValueCollection_t0CA15D727691297C05CD9DFAFFEF94D100E53EEA*)__this->____values_8;
		return (RuntimeObject*)L_2;
	}
}
// TValue System.Collections.Generic.Dictionary`2<UnityEngine.TerrainUtils.TerrainTileCoord,System.Object>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_get_Item_m41B419A0CFD8F7D5500DD3A3EB5BC0D779D4C740_gshared (Dictionary_2_t22B5EE7684537D7D143E6F6FCDC4C58B5D53F68F* __this, TerrainTileCoord_t2181DDF40A8A428A84817957CB7FB19A314F4F09 ___key0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	RuntimeObject* V_1 = NULL;
	{
		TerrainTileCoord_t2181DDF40A8A428A84817957CB7FB19A314F4F09 L_0 = ___key0;
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_t22B5EE7684537D7D143E6F6FCDC4C58B5D53F68F*, TerrainTileCoord_t2181DDF40A8A428A84817957CB7FB19A314F4F09, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 20)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_001e;
		}
	}
	{
		EntryU5BU5D_t5CFAFF65A005CA040F5C92D1AFEF51CB84CECE56* L_3 = (EntryU5BU5D_t5CFAFF65A005CA040F5C92D1AFEF51CB84CECE56*)__this->____entries_1;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		RuntimeObject* L_5 = (RuntimeObject*)((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)))->___value_3;
		return L_5;
	}

IL_001e:
	{
		TerrainTileCoord_t2181DDF40A8A428A84817957CB7FB19A314F4F09 L_6 = ___key0;
		TerrainTileCoord_t2181DDF40A8A428A84817957CB7FB19A314F4F09 L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 21), &L_7);
		ThrowHelper_ThrowKeyNotFoundException_m6A17735FA486AD43F2488DE39B755AC60BC99CE7(L_8, NULL);
		il2cpp_codegen_initobj((&V_1), sizeof(RuntimeObject*));
		RuntimeObject* L_9 = V_1;
		return L_9;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.TerrainUtils.TerrainTileCoord,System.Object>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m054D12C345A2AC2B03A9C54B669FA295F0382FCF_gshared (Dictionary_2_t22B5EE7684537D7D143E6F6FCDC4C58B5D53F68F* __this, TerrainTileCoord_t2181DDF40A8A428A84817957CB7FB19A314F4F09 ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) 
{
	{
		TerrainTileCoord_t2181DDF40A8A428A84817957CB7FB19A314F4F09 L_0 = ___key0;
		RuntimeObject* L_1 = ___value1;
		bool L_2;
		L_2 = ((  bool (*) (Dictionary_2_t22B5EE7684537D7D143E6F6FCDC4C58B5D53F68F*, TerrainTileCoord_t2181DDF40A8A428A84817957CB7FB19A314F4F09, RuntimeObject*, uint8_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 22)))(__this, L_0, L_1, (uint8_t)1, il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.TerrainUtils.TerrainTileCoord,System.Object>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_mCDB94B777C71A4AEC648AEE14D9C777B05667901_gshared (Dictionary_2_t22B5EE7684537D7D143E6F6FCDC4C58B5D53F68F* __this, TerrainTileCoord_t2181DDF40A8A428A84817957CB7FB19A314F4F09 ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) 
{
	{
		TerrainTileCoord_t2181DDF40A8A428A84817957CB7FB19A314F4F09 L_0 = ___key0;
		RuntimeObject* L_1 = ___value1;
		bool L_2;
		L_2 = ((  bool (*) (Dictionary_2_t22B5EE7684537D7D143E6F6FCDC4C58B5D53F68F*, TerrainTileCoord_t2181DDF40A8A428A84817957CB7FB19A314F4F09, RuntimeObject*, uint8_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 22)))(__this, L_0, L_1, (uint8_t)2, il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.TerrainUtils.TerrainTileCoord,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m20D6553EADC8B4A8893AEE46BB45BA643322C2CC_gshared (Dictionary_2_t22B5EE7684537D7D143E6F6FCDC4C58B5D53F68F* __this, KeyValuePair_2_t8760984FFCA6E11154C918347EA4C7CFB2D0B8CE ___keyValuePair0, const RuntimeMethod* method) 
{
	{
		TerrainTileCoord_t2181DDF40A8A428A84817957CB7FB19A314F4F09 L_0;
		L_0 = KeyValuePair_2_get_Key_mE27FF2218D103DBF58A36186AA62595EC4079388_inline((&___keyValuePair0), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		RuntimeObject* L_1;
		L_1 = KeyValuePair_2_get_Value_m64463C12912AD06A73305FF2EEF67678D7281515_inline((&___keyValuePair0), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		((  void (*) (Dictionary_2_t22B5EE7684537D7D143E6F6FCDC4C58B5D53F68F*, TerrainTileCoord_t2181DDF40A8A428A84817957CB7FB19A314F4F09, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.TerrainUtils.TerrainTileCoord,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_mCD9F3645433239B6E60C04E8362903AFC2BEB8E4_gshared (Dictionary_2_t22B5EE7684537D7D143E6F6FCDC4C58B5D53F68F* __this, KeyValuePair_2_t8760984FFCA6E11154C918347EA4C7CFB2D0B8CE ___keyValuePair0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		TerrainTileCoord_t2181DDF40A8A428A84817957CB7FB19A314F4F09 L_0;
		L_0 = KeyValuePair_2_get_Key_mE27FF2218D103DBF58A36186AA62595EC4079388_inline((&___keyValuePair0), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_t22B5EE7684537D7D143E6F6FCDC4C58B5D53F68F*, TerrainTileCoord_t2181DDF40A8A428A84817957CB7FB19A314F4F09, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 20)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0038;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_3;
		L_3 = ((  EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 23)))(il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		EntryU5BU5D_t5CFAFF65A005CA040F5C92D1AFEF51CB84CECE56* L_4 = (EntryU5BU5D_t5CFAFF65A005CA040F5C92D1AFEF51CB84CECE56*)__this->____entries_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		RuntimeObject* L_6 = (RuntimeObject*)((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value_3;
		RuntimeObject* L_7;
		L_7 = KeyValuePair_2_get_Value_m64463C12912AD06A73305FF2EEF67678D7281515_inline((&___keyValuePair0), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Object>::Equals(T,T) */, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0038;
		}
	}
	{
		return (bool)1;
	}

IL_0038:
	{
		return (bool)0;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.TerrainUtils.TerrainTileCoord,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m26A4A6AB8A84491D0849B3F25A02F869EE69E144_gshared (Dictionary_2_t22B5EE7684537D7D143E6F6FCDC4C58B5D53F68F* __this, KeyValuePair_2_t8760984FFCA6E11154C918347EA4C7CFB2D0B8CE ___keyValuePair0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		TerrainTileCoord_t2181DDF40A8A428A84817957CB7FB19A314F4F09 L_0;
		L_0 = KeyValuePair_2_get_Key_mE27FF2218D103DBF58A36186AA62595EC4079388_inline((&___keyValuePair0), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_t22B5EE7684537D7D143E6F6FCDC4C58B5D53F68F*, TerrainTileCoord_t2181DDF40A8A428A84817957CB7FB19A314F4F09, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 20)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0046;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_3;
		L_3 = ((  EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 23)))(il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		EntryU5BU5D_t5CFAFF65A005CA040F5C92D1AFEF51CB84CECE56* L_4 = (EntryU5BU5D_t5CFAFF65A005CA040F5C92D1AFEF51CB84CECE56*)__this->____entries_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		RuntimeObject* L_6 = (RuntimeObject*)((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value_3;
		RuntimeObject* L_7;
		L_7 = KeyValuePair_2_get_Value_m64463C12912AD06A73305FF2EEF67678D7281515_inline((&___keyValuePair0), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Object>::Equals(T,T) */, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0046;
		}
	}
	{
		TerrainTileCoord_t2181DDF40A8A428A84817957CB7FB19A314F4F09 L_9;
		L_9 = KeyValuePair_2_get_Key_mE27FF2218D103DBF58A36186AA62595EC4079388_inline((&___keyValuePair0), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		bool L_10;
		L_10 = ((  bool (*) (Dictionary_2_t22B5EE7684537D7D143E6F6FCDC4C58B5D53F68F*, TerrainTileCoord_t2181DDF40A8A428A84817957CB7FB19A314F4F09, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 27)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 27));
		return (bool)1;
	}

IL_0046:
	{
		return (bool)0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.TerrainUtils.TerrainTileCoord,System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_mFA8B7D70B22901B80E6D3C9DFFF7D7304FF73BB9_gshared (Dictionary_2_t22B5EE7684537D7D143E6F6FCDC4C58B5D53F68F* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->____count_2;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0041;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_3);
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_2, 0, ((int32_t)(((RuntimeArray*)L_3)->max_length)), NULL);
		__this->____count_2 = 0;
		__this->____freeList_3 = (-1);
		__this->____freeCount_4 = 0;
		EntryU5BU5D_t5CFAFF65A005CA040F5C92D1AFEF51CB84CECE56* L_4 = (EntryU5BU5D_t5CFAFF65A005CA040F5C92D1AFEF51CB84CECE56*)__this->____entries_1;
		int32_t L_5 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_4, 0, L_5, NULL);
	}

IL_0041:
	{
		int32_t L_6 = (int32_t)__this->____version_5;
		__this->____version_5 = ((int32_t)il2cpp_codegen_add(L_6, 1));
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.TerrainUtils.TerrainTileCoord,System.Object>::ContainsKey(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_mB97276979AB40594CDC1145BA7F6166E19FE388F_gshared (Dictionary_2_t22B5EE7684537D7D143E6F6FCDC4C58B5D53F68F* __this, TerrainTileCoord_t2181DDF40A8A428A84817957CB7FB19A314F4F09 ___key0, const RuntimeMethod* method) 
{
	{
		TerrainTileCoord_t2181DDF40A8A428A84817957CB7FB19A314F4F09 L_0 = ___key0;
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_t22B5EE7684537D7D143E6F6FCDC4C58B5D53F68F*, TerrainTileCoord_t2181DDF40A8A428A84817957CB7FB19A314F4F09, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 20)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		return (bool)((((int32_t)((((int32_t)L_1) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.TerrainUtils.TerrainTileCoord,System.Object>::ContainsValue(TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsValue_m83F1E9974852A5F59E5E776E14CE98D5C8C7DA77_gshared (Dictionary_2_t22B5EE7684537D7D143E6F6FCDC4C58B5D53F68F* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	EntryU5BU5D_t5CFAFF65A005CA040F5C92D1AFEF51CB84CECE56* V_0 = NULL;
	int32_t V_1 = 0;
	RuntimeObject* V_2 = NULL;
	int32_t V_3 = 0;
	EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* V_4 = NULL;
	int32_t V_5 = 0;
	{
		EntryU5BU5D_t5CFAFF65A005CA040F5C92D1AFEF51CB84CECE56* L_0 = (EntryU5BU5D_t5CFAFF65A005CA040F5C92D1AFEF51CB84CECE56*)__this->____entries_1;
		V_0 = L_0;
		RuntimeObject* L_1 = ___value0;
		if (L_1)
		{
			goto IL_0049;
		}
	}
	{
		V_1 = 0;
		goto IL_003b;
	}

IL_0013:
	{
		EntryU5BU5D_t5CFAFF65A005CA040F5C92D1AFEF51CB84CECE56* L_2 = V_0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = (int32_t)((L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3)))->___hashCode_0;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0037;
		}
	}
	{
		EntryU5BU5D_t5CFAFF65A005CA040F5C92D1AFEF51CB84CECE56* L_5 = V_0;
		int32_t L_6 = V_1;
		NullCheck(L_5);
		RuntimeObject* L_7 = (RuntimeObject*)((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->___value_3;
		if (L_7)
		{
			goto IL_0037;
		}
	}
	{
		return (bool)1;
	}

IL_0037:
	{
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_003b:
	{
		int32_t L_9 = V_1;
		int32_t L_10 = (int32_t)__this->____count_2;
		if ((((int32_t)L_9) < ((int32_t)L_10)))
		{
			goto IL_0013;
		}
	}
	{
		goto IL_00db;
	}

IL_0049:
	{
		il2cpp_codegen_initobj((&V_2), sizeof(RuntimeObject*));
		RuntimeObject* L_11 = V_2;
		if (!L_11)
		{
			goto IL_0096;
		}
	}
	{
		V_3 = 0;
		goto IL_008b;
	}

IL_005d:
	{
		EntryU5BU5D_t5CFAFF65A005CA040F5C92D1AFEF51CB84CECE56* L_12 = V_0;
		int32_t L_13 = V_3;
		NullCheck(L_12);
		int32_t L_14 = (int32_t)((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)))->___hashCode_0;
		if ((((int32_t)L_14) < ((int32_t)0)))
		{
			goto IL_0087;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_15;
		L_15 = ((  EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 23)))(il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		EntryU5BU5D_t5CFAFF65A005CA040F5C92D1AFEF51CB84CECE56* L_16 = V_0;
		int32_t L_17 = V_3;
		NullCheck(L_16);
		RuntimeObject* L_18 = (RuntimeObject*)((L_16)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_17)))->___value_3;
		RuntimeObject* L_19 = ___value0;
		NullCheck(L_15);
		bool L_20;
		L_20 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Object>::Equals(T,T) */, L_15, L_18, L_19);
		if (!L_20)
		{
			goto IL_0087;
		}
	}
	{
		return (bool)1;
	}

IL_0087:
	{
		int32_t L_21 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_008b:
	{
		int32_t L_22 = V_3;
		int32_t L_23 = (int32_t)__this->____count_2;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_005d;
		}
	}
	{
		goto IL_00db;
	}

IL_0096:
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_24;
		L_24 = ((  EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 23)))(il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		V_4 = L_24;
		V_5 = 0;
		goto IL_00d1;
	}

IL_00a2:
	{
		EntryU5BU5D_t5CFAFF65A005CA040F5C92D1AFEF51CB84CECE56* L_25 = V_0;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		int32_t L_27 = (int32_t)((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___hashCode_0;
		if ((((int32_t)L_27) < ((int32_t)0)))
		{
			goto IL_00cb;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_28 = V_4;
		EntryU5BU5D_t5CFAFF65A005CA040F5C92D1AFEF51CB84CECE56* L_29 = V_0;
		int32_t L_30 = V_5;
		NullCheck(L_29);
		RuntimeObject* L_31 = (RuntimeObject*)((L_29)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_30)))->___value_3;
		RuntimeObject* L_32 = ___value0;
		NullCheck(L_28);
		bool L_33;
		L_33 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Object>::Equals(T,T) */, L_28, L_31, L_32);
		if (!L_33)
		{
			goto IL_00cb;
		}
	}
	{
		return (bool)1;
	}

IL_00cb:
	{
		int32_t L_34 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_00d1:
	{
		int32_t L_35 = V_5;
		int32_t L_36 = (int32_t)__this->____count_2;
		if ((((int32_t)L_35) < ((int32_t)L_36)))
		{
			goto IL_00a2;
		}
	}

IL_00db:
	{
		return (bool)0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.TerrainUtils.TerrainTileCoord,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_m8D2906E44FA429435B16A44833A88EE90EF64673_gshared (Dictionary_2_t22B5EE7684537D7D143E6F6FCDC4C58B5D53F68F* __this, KeyValuePair_2U5BU5D_t697102CA825793B9F049EE7FB6E4FA6CA679E0B3* ___array0, int32_t ___index1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	EntryU5BU5D_t5CFAFF65A005CA040F5C92D1AFEF51CB84CECE56* V_1 = NULL;
	int32_t V_2 = 0;
	{
		KeyValuePair_2U5BU5D_t697102CA825793B9F049EE7FB6E4FA6CA679E0B3* L_0 = ___array0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)3, NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___index1;
		KeyValuePair_2U5BU5D_t697102CA825793B9F049EE7FB6E4FA6CA679E0B3* L_2 = ___array0;
		NullCheck(L_2);
		if ((!(((uint32_t)L_1) > ((uint32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))))
		{
			goto IL_0014;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0014:
	{
		KeyValuePair_2U5BU5D_t697102CA825793B9F049EE7FB6E4FA6CA679E0B3* L_3 = ___array0;
		NullCheck(L_3);
		int32_t L_4 = ___index1;
		int32_t L_5;
		L_5 = ((  int32_t (*) (Dictionary_2_t22B5EE7684537D7D143E6F6FCDC4C58B5D53F68F*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 29)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_3)->max_length)), L_4))) >= ((int32_t)L_5)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)5, NULL);
	}

IL_0027:
	{
		int32_t L_6 = (int32_t)__this->____count_2;
		V_0 = L_6;
		EntryU5BU5D_t5CFAFF65A005CA040F5C92D1AFEF51CB84CECE56* L_7 = (EntryU5BU5D_t5CFAFF65A005CA040F5C92D1AFEF51CB84CECE56*)__this->____entries_1;
		V_1 = L_7;
		V_2 = 0;
		goto IL_0075;
	}

IL_0039:
	{
		EntryU5BU5D_t5CFAFF65A005CA040F5C92D1AFEF51CB84CECE56* L_8 = V_1;
		int32_t L_9 = V_2;
		NullCheck(L_8);
		int32_t L_10 = (int32_t)((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9)))->___hashCode_0;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_0071;
		}
	}
	{
		KeyValuePair_2U5BU5D_t697102CA825793B9F049EE7FB6E4FA6CA679E0B3* L_11 = ___array0;
		int32_t L_12 = ___index1;
		int32_t L_13 = L_12;
		___index1 = ((int32_t)il2cpp_codegen_add(L_13, 1));
		EntryU5BU5D_t5CFAFF65A005CA040F5C92D1AFEF51CB84CECE56* L_14 = V_1;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		TerrainTileCoord_t2181DDF40A8A428A84817957CB7FB19A314F4F09 L_16 = (TerrainTileCoord_t2181DDF40A8A428A84817957CB7FB19A314F4F09)((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)))->___key_2;
		EntryU5BU5D_t5CFAFF65A005CA040F5C92D1AFEF51CB84CECE56* L_17 = V_1;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		RuntimeObject* L_19 = (RuntimeObject*)((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___value_3;
		KeyValuePair_2_t8760984FFCA6E11154C918347EA4C7CFB2D0B8CE L_20;
		memset((&L_20), 0, sizeof(L_20));
		KeyValuePair_2__ctor_m384510E0549D9C5343A67620C046FC8791C82BAB((&L_20), L_16, L_19, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (KeyValuePair_2_t8760984FFCA6E11154C918347EA4C7CFB2D0B8CE)L_20);
	}

IL_0071:
	{
		int32_t L_21 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0075:
	{
		int32_t L_22 = V_2;
		int32_t L_23 = V_0;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_0039;
		}
	}
	{
		return;
	}
}
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<UnityEngine.TerrainUtils.TerrainTileCoord,System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tB06F293668D09F345A54C8C836ABF567B9087FB7 Dictionary_2_GetEnumerator_mE58E6AC88AD044F9EB9989FF2F6AA6F05ECA402F_gshared (Dictionary_2_t22B5EE7684537D7D143E6F6FCDC4C58B5D53F68F* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tB06F293668D09F345A54C8C836ABF567B9087FB7 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mA03972C198139BFCEADE1562F82725B6A9BE6963((&L_0), __this, 2, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<UnityEngine.TerrainUtils.TerrainTileCoord,System.Object>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m1A2E32C6261162B355EE537D57EF93913B40719A_gshared (Dictionary_2_t22B5EE7684537D7D143E6F6FCDC4C58B5D53F68F* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tB06F293668D09F345A54C8C836ABF567B9087FB7 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mA03972C198139BFCEADE1562F82725B6A9BE6963((&L_0), __this, 2, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		Enumerator_tB06F293668D09F345A54C8C836ABF567B9087FB7 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 32), &L_1);
		return (RuntimeObject*)L_2;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.TerrainUtils.TerrainTileCoord,System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_GetObjectData_mF9AAAEB328EF342B3C5D3EB74B6E8D1E798DB8F3_gshared (Dictionary_2_t22B5EE7684537D7D143E6F6FCDC4C58B5D53F68F* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___info0, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___context1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_t697102CA825793B9F049EE7FB6E4FA6CA679E0B3* V_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	String_t* G_B4_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B4_2 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B3_2 = NULL;
	String_t* G_B6_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B6_1 = NULL;
	String_t* G_B5_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B5_1 = NULL;
	int32_t G_B7_0 = 0;
	String_t* G_B7_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B7_2 = NULL;
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___info0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)4, NULL);
	}

IL_0009:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___info0;
		int32_t L_2 = (int32_t)__this->____version_5;
		NullCheck(L_1);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(L_1, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, L_2, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = ___info0;
		RuntimeObject* L_4 = (RuntimeObject*)__this->____comparer_6;
		RuntimeObject* L_5 = L_4;
		G_B3_0 = L_5;
		G_B3_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
		G_B3_2 = L_3;
		if (L_5)
		{
			G_B4_0 = L_5;
			G_B4_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
			G_B4_2 = L_3;
			goto IL_002f;
		}
	}
	{
		EqualityComparer_1_t825BE29F8175FFB17D7A1752D208ACAB0066AEC2* L_6;
		L_6 = ((  EqualityComparer_1_t825BE29F8175FFB17D7A1752D208ACAB0066AEC2* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		G_B4_0 = ((RuntimeObject*)(L_6));
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
	}

IL_002f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 34)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		NullCheck(G_B4_2);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(G_B4_2, G_B4_1, (RuntimeObject*)G_B4_0, L_8, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_9 = ___info0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		G_B5_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
		G_B5_1 = L_9;
		if (!L_10)
		{
			G_B6_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
			G_B6_1 = L_9;
			goto IL_0056;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_11);
		G_B7_0 = ((int32_t)(((RuntimeArray*)L_11)->max_length));
		G_B7_1 = G_B5_0;
		G_B7_2 = G_B5_1;
		goto IL_0057;
	}

IL_0056:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
		G_B7_2 = G_B6_1;
	}

IL_0057:
	{
		NullCheck(G_B7_2);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(G_B7_2, G_B7_1, G_B7_0, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		if (!L_12)
		{
			goto IL_008e;
		}
	}
	{
		int32_t L_13;
		L_13 = ((  int32_t (*) (Dictionary_2_t22B5EE7684537D7D143E6F6FCDC4C58B5D53F68F*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 29)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		KeyValuePair_2U5BU5D_t697102CA825793B9F049EE7FB6E4FA6CA679E0B3* L_14 = (KeyValuePair_2U5BU5D_t697102CA825793B9F049EE7FB6E4FA6CA679E0B3*)(KeyValuePair_2U5BU5D_t697102CA825793B9F049EE7FB6E4FA6CA679E0B3*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 35), (uint32_t)L_13);
		V_0 = L_14;
		KeyValuePair_2U5BU5D_t697102CA825793B9F049EE7FB6E4FA6CA679E0B3* L_15 = V_0;
		((  void (*) (Dictionary_2_t22B5EE7684537D7D143E6F6FCDC4C58B5D53F68F*, KeyValuePair_2U5BU5D_t697102CA825793B9F049EE7FB6E4FA6CA679E0B3*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 36)))(__this, L_15, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 36));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_16 = ___info0;
		KeyValuePair_2U5BU5D_t697102CA825793B9F049EE7FB6E4FA6CA679E0B3* L_17 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 37)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		NullCheck(L_16);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(L_16, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, (RuntimeObject*)L_17, L_19, NULL);
	}

IL_008e:
	{
		return;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2<UnityEngine.TerrainUtils.TerrainTileCoord,System.Object>::FindEntry(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_mEA5A5B37D6C27A7D9D63B12BBED91E5B65898590_gshared (Dictionary_2_t22B5EE7684537D7D143E6F6FCDC4C58B5D53F68F* __this, TerrainTileCoord_t2181DDF40A8A428A84817957CB7FB19A314F4F09 ___key0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	EntryU5BU5D_t5CFAFF65A005CA040F5C92D1AFEF51CB84CECE56* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	int32_t V_5 = 0;
	TerrainTileCoord_t2181DDF40A8A428A84817957CB7FB19A314F4F09 V_6;
	memset((&V_6), 0, sizeof(V_6));
	EqualityComparer_1_t825BE29F8175FFB17D7A1752D208ACAB0066AEC2* V_7 = NULL;
	int32_t V_8 = 0;
	{
		goto IL_000e;
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_000e:
	{
		V_0 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		V_1 = L_1;
		EntryU5BU5D_t5CFAFF65A005CA040F5C92D1AFEF51CB84CECE56* L_2 = (EntryU5BU5D_t5CFAFF65A005CA040F5C92D1AFEF51CB84CECE56*)__this->____entries_1;
		V_2 = L_2;
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = V_1;
		if (!L_3)
		{
			goto IL_0175;
		}
	}
	{
		RuntimeObject* L_4 = (RuntimeObject*)__this->____comparer_6;
		V_4 = L_4;
		RuntimeObject* L_5 = V_4;
		if (L_5)
		{
			goto IL_0110;
		}
	}
	{
		Il2CppFakeBox<TerrainTileCoord_t2181DDF40A8A428A84817957CB7FB19A314F4F09> L_6(il2cpp_rgctx_data(method->klass->rgctx_data, 21), (&___key0));
		int32_t L_7;
		L_7 = ValueType_GetHashCode_m3B47C72EA1FA846D9B0DFF3C444AB2BFA22CF3CE((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_6), NULL);
		V_5 = ((int32_t)(L_7&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = V_1;
		int32_t L_9 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = V_1;
		NullCheck(L_10);
		NullCheck(L_8);
		int32_t L_11 = ((int32_t)(L_9%((int32_t)(((RuntimeArray*)L_10)->max_length))));
		int32_t L_12 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
		il2cpp_codegen_initobj((&V_6), sizeof(TerrainTileCoord_t2181DDF40A8A428A84817957CB7FB19A314F4F09));
	}

IL_0066:
	{
		int32_t L_14 = V_0;
		EntryU5BU5D_t5CFAFF65A005CA040F5C92D1AFEF51CB84CECE56* L_15 = V_2;
		NullCheck(L_15);
		if ((!(((uint32_t)L_14) < ((uint32_t)((int32_t)(((RuntimeArray*)L_15)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_t5CFAFF65A005CA040F5C92D1AFEF51CB84CECE56* L_16 = V_2;
		int32_t L_17 = V_0;
		NullCheck(L_16);
		int32_t L_18 = (int32_t)((L_16)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_17)))->___hashCode_0;
		int32_t L_19 = V_5;
		if ((!(((uint32_t)L_18) == ((uint32_t)L_19))))
		{
			goto IL_009b;
		}
	}
	{
		EqualityComparer_1_t825BE29F8175FFB17D7A1752D208ACAB0066AEC2* L_20;
		L_20 = ((  EqualityComparer_1_t825BE29F8175FFB17D7A1752D208ACAB0066AEC2* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		EntryU5BU5D_t5CFAFF65A005CA040F5C92D1AFEF51CB84CECE56* L_21 = V_2;
		int32_t L_22 = V_0;
		NullCheck(L_21);
		TerrainTileCoord_t2181DDF40A8A428A84817957CB7FB19A314F4F09 L_23 = (TerrainTileCoord_t2181DDF40A8A428A84817957CB7FB19A314F4F09)((L_21)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_22)))->___key_2;
		TerrainTileCoord_t2181DDF40A8A428A84817957CB7FB19A314F4F09 L_24 = ___key0;
		NullCheck(L_20);
		bool L_25;
		L_25 = VirtualFuncInvoker2< bool, TerrainTileCoord_t2181DDF40A8A428A84817957CB7FB19A314F4F09, TerrainTileCoord_t2181DDF40A8A428A84817957CB7FB19A314F4F09 >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.TerrainUtils.TerrainTileCoord>::Equals(T,T) */, L_20, L_23, L_24);
		if (L_25)
		{
			goto IL_0175;
		}
	}

IL_009b:
	{
		EntryU5BU5D_t5CFAFF65A005CA040F5C92D1AFEF51CB84CECE56* L_26 = V_2;
		int32_t L_27 = V_0;
		NullCheck(L_26);
		int32_t L_28 = (int32_t)((L_26)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_27)))->___next_1;
		V_0 = L_28;
		int32_t L_29 = V_3;
		EntryU5BU5D_t5CFAFF65A005CA040F5C92D1AFEF51CB84CECE56* L_30 = V_2;
		NullCheck(L_30);
		if ((((int32_t)L_29) < ((int32_t)((int32_t)(((RuntimeArray*)L_30)->max_length)))))
		{
			goto IL_00b3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_00b3:
	{
		int32_t L_31 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_31, 1));
		goto IL_0066;
	}

IL_00b9:
	{
		EqualityComparer_1_t825BE29F8175FFB17D7A1752D208ACAB0066AEC2* L_32;
		L_32 = ((  EqualityComparer_1_t825BE29F8175FFB17D7A1752D208ACAB0066AEC2* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		V_7 = L_32;
	}

IL_00c0:
	{
		int32_t L_33 = V_0;
		EntryU5BU5D_t5CFAFF65A005CA040F5C92D1AFEF51CB84CECE56* L_34 = V_2;
		NullCheck(L_34);
		if ((!(((uint32_t)L_33) < ((uint32_t)((int32_t)(((RuntimeArray*)L_34)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_t5CFAFF65A005CA040F5C92D1AFEF51CB84CECE56* L_35 = V_2;
		int32_t L_36 = V_0;
		NullCheck(L_35);
		int32_t L_37 = (int32_t)((L_35)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_36)))->___hashCode_0;
		int32_t L_38 = V_5;
		if ((!(((uint32_t)L_37) == ((uint32_t)L_38))))
		{
			goto IL_00f2;
		}
	}
	{
		EqualityComparer_1_t825BE29F8175FFB17D7A1752D208ACAB0066AEC2* L_39 = V_7;
		EntryU5BU5D_t5CFAFF65A005CA040F5C92D1AFEF51CB84CECE56* L_40 = V_2;
		int32_t L_41 = V_0;
		NullCheck(L_40);
		TerrainTileCoord_t2181DDF40A8A428A84817957CB7FB19A314F4F09 L_42 = (TerrainTileCoord_t2181DDF40A8A428A84817957CB7FB19A314F4F09)((L_40)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_41)))->___key_2;
		TerrainTileCoord_t2181DDF40A8A428A84817957CB7FB19A314F4F09 L_43 = ___key0;
		NullCheck(L_39);
		bool L_44;
		L_44 = VirtualFuncInvoker2< bool, TerrainTileCoord_t2181DDF40A8A428A84817957CB7FB19A314F4F09, TerrainTileCoord_t2181DDF40A8A428A84817957CB7FB19A314F4F09 >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.TerrainUtils.TerrainTileCoord>::Equals(T,T) */, L_39, L_42, L_43);
		if (L_44)
		{
			goto IL_0175;
		}
	}

IL_00f2:
	{
		EntryU5BU5D_t5CFAFF65A005CA040F5C92D1AFEF51CB84CECE56* L_45 = V_2;
		int32_t L_46 = V_0;
		NullCheck(L_45);
		int32_t L_47 = (int32_t)((L_45)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_46)))->___next_1;
		V_0 = L_47;
		int32_t L_48 = V_3;
		EntryU5BU5D_t5CFAFF65A005CA040F5C92D1AFEF51CB84CECE56* L_49 = V_2;
		NullCheck(L_49);
		if ((((int32_t)L_48) < ((int32_t)((int32_t)(((RuntimeArray*)L_49)->max_length)))))
		{
			goto IL_010a;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_010a:
	{
		int32_t L_50 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_50, 1));
		goto IL_00c0;
	}

IL_0110:
	{
		RuntimeObject* L_51 = V_4;
		TerrainTileCoord_t2181DDF40A8A428A84817957CB7FB19A314F4F09 L_52 = ___key0;
		NullCheck(L_51);
		int32_t L_53;
		L_53 = InterfaceFuncInvoker1< int32_t, TerrainTileCoord_t2181DDF40A8A428A84817957CB7FB19A314F4F09 >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<UnityEngine.TerrainUtils.TerrainTileCoord>::GetHashCode(T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 41), L_51, L_52);
		V_8 = ((int32_t)(L_53&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_54 = V_1;
		int32_t L_55 = V_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_56 = V_1;
		NullCheck(L_56);
		NullCheck(L_54);
		int32_t L_57 = ((int32_t)(L_55%((int32_t)(((RuntimeArray*)L_56)->max_length))));
		int32_t L_58 = (L_54)->GetAt(static_cast<il2cpp_array_size_t>(L_57));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_58, 1));
	}

IL_012b:
	{
		int32_t L_59 = V_0;
		EntryU5BU5D_t5CFAFF65A005CA040F5C92D1AFEF51CB84CECE56* L_60 = V_2;
		NullCheck(L_60);
		if ((!(((uint32_t)L_59) < ((uint32_t)((int32_t)(((RuntimeArray*)L_60)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_t5CFAFF65A005CA040F5C92D1AFEF51CB84CECE56* L_61 = V_2;
		int32_t L_62 = V_0;
		NullCheck(L_61);
		int32_t L_63 = (int32_t)((L_61)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_62)))->___hashCode_0;
		int32_t L_64 = V_8;
		if ((!(((uint32_t)L_63) == ((uint32_t)L_64))))
		{
			goto IL_0157;
		}
	}
	{
		RuntimeObject* L_65 = V_4;
		EntryU5BU5D_t5CFAFF65A005CA040F5C92D1AFEF51CB84CECE56* L_66 = V_2;
		int32_t L_67 = V_0;
		NullCheck(L_66);
		TerrainTileCoord_t2181DDF40A8A428A84817957CB7FB19A314F4F09 L_68 = (TerrainTileCoord_t2181DDF40A8A428A84817957CB7FB19A314F4F09)((L_66)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_67)))->___key_2;
		TerrainTileCoord_t2181DDF40A8A428A84817957CB7FB19A314F4F09 L_69 = ___key0;
		NullCheck(L_65);
		bool L_70;
		L_70 = InterfaceFuncInvoker2< bool, TerrainTileCoord_t2181DDF40A8A428A84817957CB7FB19A314F4F09, TerrainTileCoord_t2181DDF40A8A428A84817957CB7FB19A314F4F09 >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<UnityEngine.TerrainUtils.TerrainTileCoord>::Equals(T,T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 41), L_65, L_68, L_69);
		if (L_70)
		{
			goto IL_0175;
		}
	}

IL_0157:
	{
		EntryU5BU5D_t5CFAFF65A005CA040F5C92D1AFEF51CB84CECE56* L_71 = V_2;
		int32_t L_72 = V_0;
		NullCheck(L_71);
		int32_t L_73 = (int32_t)((L_71)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_72)))->___next_1;
		V_0 = L_73;
		int32_t L_74 = V_3;
		EntryU5BU5D_t5CFAFF65A005CA040F5C92D1AFEF51CB84CECE56* L_75 = V_2;
		NullCheck(L_75);
		if ((((int32_t)L_74) < ((int32_t)((int32_t)(((RuntimeArray*)L_75)->max_length)))))
		{
			goto IL_016f;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_016f:
	{
		int32_t L_76 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_76, 1));
		goto IL_012b;
	}

IL_0175:
	{
		int32_t L_77 = V_0;
		return L_77;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2<UnityEngine.TerrainUtils.TerrainTileCoord,System.Object>::Initialize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_m6A0BA4FD8E0C657396BBD7FB4C302C14A681CEC0_gshared (Dictionary_2_t22B5EE7684537D7D143E6F6FCDC4C58B5D53F68F* __this, int32_t ___capacity0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___capacity0;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_0, NULL);
		V_0 = L_1;
		__this->____freeList_3 = (-1);
		int32_t L_2 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_2);
		__this->____buckets_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets_0), (void*)L_3);
		int32_t L_4 = V_0;
		EntryU5BU5D_t5CFAFF65A005CA040F5C92D1AFEF51CB84CECE56* L_5 = (EntryU5BU5D_t5CFAFF65A005CA040F5C92D1AFEF51CB84CECE56*)(EntryU5BU5D_t5CFAFF65A005CA040F5C92D1AFEF51CB84CECE56*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 44), (uint32_t)L_4);
		__this->____entries_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries_1), (void*)L_5);
		int32_t L_6 = V_0;
		return L_6;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.TerrainUtils.TerrainTileCoord,System.Object>::TryInsert(TKey,TValue,System.Collections.Generic.InsertionBehavior)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_m3DD7997D64C697EBA251379EB03D4F7841D1C7DA_gshared (Dictionary_2_t22B5EE7684537D7D143E6F6FCDC4C58B5D53F68F* __this, TerrainTileCoord_t2181DDF40A8A428A84817957CB7FB19A314F4F09 ___key0, RuntimeObject* ___value1, uint8_t ___behavior2, const RuntimeMethod* method) 
{
	EntryU5BU5D_t5CFAFF65A005CA040F5C92D1AFEF51CB84CECE56* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	int32_t V_8 = 0;
	int32_t* V_9 = NULL;
	Entry_tC6604B503225E2D191CE25713A68DA2A5228CA1C* V_10 = NULL;
	TerrainTileCoord_t2181DDF40A8A428A84817957CB7FB19A314F4F09 V_11;
	memset((&V_11), 0, sizeof(V_11));
	EqualityComparer_1_t825BE29F8175FFB17D7A1752D208ACAB0066AEC2* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t G_B7_0 = 0;
	int32_t* G_B51_0 = NULL;
	{
		goto IL_000e;
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_000e:
	{
		int32_t L_1 = (int32_t)__this->____version_5;
		__this->____version_5 = ((int32_t)il2cpp_codegen_add(L_1, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		if (L_2)
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_3;
		L_3 = ((  int32_t (*) (Dictionary_2_t22B5EE7684537D7D143E6F6FCDC4C58B5D53F68F*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(__this, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
	}

IL_002c:
	{
		EntryU5BU5D_t5CFAFF65A005CA040F5C92D1AFEF51CB84CECE56* L_4 = (EntryU5BU5D_t5CFAFF65A005CA040F5C92D1AFEF51CB84CECE56*)__this->____entries_1;
		V_0 = L_4;
		RuntimeObject* L_5 = (RuntimeObject*)__this->____comparer_6;
		V_1 = L_5;
		RuntimeObject* L_6 = V_1;
		if (!L_6)
		{
			goto IL_0046;
		}
	}
	{
		RuntimeObject* L_7 = V_1;
		TerrainTileCoord_t2181DDF40A8A428A84817957CB7FB19A314F4F09 L_8 = ___key0;
		NullCheck(L_7);
		int32_t L_9;
		L_9 = InterfaceFuncInvoker1< int32_t, TerrainTileCoord_t2181DDF40A8A428A84817957CB7FB19A314F4F09 >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<UnityEngine.TerrainUtils.TerrainTileCoord>::GetHashCode(T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 41), L_7, L_8);
		G_B7_0 = L_9;
		goto IL_0053;
	}

IL_0046:
	{
		Il2CppFakeBox<TerrainTileCoord_t2181DDF40A8A428A84817957CB7FB19A314F4F09> L_10(il2cpp_rgctx_data(method->klass->rgctx_data, 21), (&___key0));
		int32_t L_11;
		L_11 = ValueType_GetHashCode_m3B47C72EA1FA846D9B0DFF3C444AB2BFA22CF3CE((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_10), NULL);
		G_B7_0 = L_11;
	}

IL_0053:
	{
		V_2 = ((int32_t)(G_B7_0&((int32_t)2147483647LL)));
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		int32_t L_13 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_14 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_14);
		NullCheck(L_12);
		V_4 = ((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_13%((int32_t)(((RuntimeArray*)L_14)->max_length)))))));
		int32_t* L_15 = V_4;
		int32_t L_16 = *((int32_t*)L_15);
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_16, 1));
		RuntimeObject* L_17 = V_1;
		if (L_17)
		{
			goto IL_0187;
		}
	}
	{
		il2cpp_codegen_initobj((&V_11), sizeof(TerrainTileCoord_t2181DDF40A8A428A84817957CB7FB19A314F4F09));
	}

IL_0091:
	{
		int32_t L_19 = V_5;
		EntryU5BU5D_t5CFAFF65A005CA040F5C92D1AFEF51CB84CECE56* L_20 = V_0;
		NullCheck(L_20);
		if ((!(((uint32_t)L_19) < ((uint32_t)((int32_t)(((RuntimeArray*)L_20)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_t5CFAFF65A005CA040F5C92D1AFEF51CB84CECE56* L_21 = V_0;
		int32_t L_22 = V_5;
		NullCheck(L_21);
		int32_t L_23 = (int32_t)((L_21)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_22)))->___hashCode_0;
		int32_t L_24 = V_2;
		if ((!(((uint32_t)L_23) == ((uint32_t)L_24))))
		{
			goto IL_00ea;
		}
	}
	{
		EqualityComparer_1_t825BE29F8175FFB17D7A1752D208ACAB0066AEC2* L_25;
		L_25 = ((  EqualityComparer_1_t825BE29F8175FFB17D7A1752D208ACAB0066AEC2* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		EntryU5BU5D_t5CFAFF65A005CA040F5C92D1AFEF51CB84CECE56* L_26 = V_0;
		int32_t L_27 = V_5;
		NullCheck(L_26);
		TerrainTileCoord_t2181DDF40A8A428A84817957CB7FB19A314F4F09 L_28 = (TerrainTileCoord_t2181DDF40A8A428A84817957CB7FB19A314F4F09)((L_26)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_27)))->___key_2;
		TerrainTileCoord_t2181DDF40A8A428A84817957CB7FB19A314F4F09 L_29 = ___key0;
		NullCheck(L_25);
		bool L_30;
		L_30 = VirtualFuncInvoker2< bool, TerrainTileCoord_t2181DDF40A8A428A84817957CB7FB19A314F4F09, TerrainTileCoord_t2181DDF40A8A428A84817957CB7FB19A314F4F09 >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.TerrainUtils.TerrainTileCoord>::Equals(T,T) */, L_25, L_28, L_29);
		if (!L_30)
		{
			goto IL_00ea;
		}
	}
	{
		uint8_t L_31 = ___behavior2;
		if ((!(((uint32_t)L_31) == ((uint32_t)1))))
		{
			goto IL_00d9;
		}
	}
	{
		EntryU5BU5D_t5CFAFF65A005CA040F5C92D1AFEF51CB84CECE56* L_32 = V_0;
		int32_t L_33 = V_5;
		NullCheck(L_32);
		RuntimeObject* L_34 = ___value1;
		((L_32)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_33)))->___value_3 = L_34;
		Il2CppCodeGenWriteBarrier((void**)(&((L_32)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_33)))->___value_3), (void*)L_34);
		return (bool)1;
	}

IL_00d9:
	{
		uint8_t L_35 = ___behavior2;
		if ((!(((uint32_t)L_35) == ((uint32_t)2))))
		{
			goto IL_00e8;
		}
	}
	{
		TerrainTileCoord_t2181DDF40A8A428A84817957CB7FB19A314F4F09 L_36 = ___key0;
		TerrainTileCoord_t2181DDF40A8A428A84817957CB7FB19A314F4F09 L_37 = L_36;
		RuntimeObject* L_38 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 21), &L_37);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_38, NULL);
	}

IL_00e8:
	{
		return (bool)0;
	}

IL_00ea:
	{
		EntryU5BU5D_t5CFAFF65A005CA040F5C92D1AFEF51CB84CECE56* L_39 = V_0;
		int32_t L_40 = V_5;
		NullCheck(L_39);
		int32_t L_41 = (int32_t)((L_39)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_40)))->___next_1;
		V_5 = L_41;
		int32_t L_42 = V_3;
		EntryU5BU5D_t5CFAFF65A005CA040F5C92D1AFEF51CB84CECE56* L_43 = V_0;
		NullCheck(L_43);
		if ((((int32_t)L_42) < ((int32_t)((int32_t)(((RuntimeArray*)L_43)->max_length)))))
		{
			goto IL_0104;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_0104:
	{
		int32_t L_44 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_44, 1));
		goto IL_0091;
	}

IL_010a:
	{
		EqualityComparer_1_t825BE29F8175FFB17D7A1752D208ACAB0066AEC2* L_45;
		L_45 = ((  EqualityComparer_1_t825BE29F8175FFB17D7A1752D208ACAB0066AEC2* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		V_12 = L_45;
	}

IL_0111:
	{
		int32_t L_46 = V_5;
		EntryU5BU5D_t5CFAFF65A005CA040F5C92D1AFEF51CB84CECE56* L_47 = V_0;
		NullCheck(L_47);
		if ((!(((uint32_t)L_46) < ((uint32_t)((int32_t)(((RuntimeArray*)L_47)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_t5CFAFF65A005CA040F5C92D1AFEF51CB84CECE56* L_48 = V_0;
		int32_t L_49 = V_5;
		NullCheck(L_48);
		int32_t L_50 = (int32_t)((L_48)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_49)))->___hashCode_0;
		int32_t L_51 = V_2;
		if ((!(((uint32_t)L_50) == ((uint32_t)L_51))))
		{
			goto IL_0167;
		}
	}
	{
		EqualityComparer_1_t825BE29F8175FFB17D7A1752D208ACAB0066AEC2* L_52 = V_12;
		EntryU5BU5D_t5CFAFF65A005CA040F5C92D1AFEF51CB84CECE56* L_53 = V_0;
		int32_t L_54 = V_5;
		NullCheck(L_53);
		TerrainTileCoord_t2181DDF40A8A428A84817957CB7FB19A314F4F09 L_55 = (TerrainTileCoord_t2181DDF40A8A428A84817957CB7FB19A314F4F09)((L_53)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_54)))->___key_2;
		TerrainTileCoord_t2181DDF40A8A428A84817957CB7FB19A314F4F09 L_56 = ___key0;
		NullCheck(L_52);
		bool L_57;
		L_57 = VirtualFuncInvoker2< bool, TerrainTileCoord_t2181DDF40A8A428A84817957CB7FB19A314F4F09, TerrainTileCoord_t2181DDF40A8A428A84817957CB7FB19A314F4F09 >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.TerrainUtils.TerrainTileCoord>::Equals(T,T) */, L_52, L_55, L_56);
		if (!L_57)
		{
			goto IL_0167;
		}
	}
	{
		uint8_t L_58 = ___behavior2;
		if ((!(((uint32_t)L_58) == ((uint32_t)1))))
		{
			goto IL_0156;
		}
	}
	{
		EntryU5BU5D_t5CFAFF65A005CA040F5C92D1AFEF51CB84CECE56* L_59 = V_0;
		int32_t L_60 = V_5;
		NullCheck(L_59);
		RuntimeObject* L_61 = ___value1;
		((L_59)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_60)))->___value_3 = L_61;
		Il2CppCodeGenWriteBarrier((void**)(&((L_59)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_60)))->___value_3), (void*)L_61);
		return (bool)1;
	}

IL_0156:
	{
		uint8_t L_62 = ___behavior2;
		if ((!(((uint32_t)L_62) == ((uint32_t)2))))
		{
			goto IL_0165;
		}
	}
	{
		TerrainTileCoord_t2181DDF40A8A428A84817957CB7FB19A314F4F09 L_63 = ___key0;
		TerrainTileCoord_t2181DDF40A8A428A84817957CB7FB19A314F4F09 L_64 = L_63;
		RuntimeObject* L_65 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 21), &L_64);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_65, NULL);
	}

IL_0165:
	{
		return (bool)0;
	}

IL_0167:
	{
		EntryU5BU5D_t5CFAFF65A005CA040F5C92D1AFEF51CB84CECE56* L_66 = V_0;
		int32_t L_67 = V_5;
		NullCheck(L_66);
		int32_t L_68 = (int32_t)((L_66)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_67)))->___next_1;
		V_5 = L_68;
		int32_t L_69 = V_3;
		EntryU5BU5D_t5CFAFF65A005CA040F5C92D1AFEF51CB84CECE56* L_70 = V_0;
		NullCheck(L_70);
		if ((((int32_t)L_69) < ((int32_t)((int32_t)(((RuntimeArray*)L_70)->max_length)))))
		{
			goto IL_0181;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_0181:
	{
		int32_t L_71 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_71, 1));
		goto IL_0111;
	}

IL_0187:
	{
		int32_t L_72 = V_5;
		EntryU5BU5D_t5CFAFF65A005CA040F5C92D1AFEF51CB84CECE56* L_73 = V_0;
		NullCheck(L_73);
		if ((!(((uint32_t)L_72) < ((uint32_t)((int32_t)(((RuntimeArray*)L_73)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_t5CFAFF65A005CA040F5C92D1AFEF51CB84CECE56* L_74 = V_0;
		int32_t L_75 = V_5;
		NullCheck(L_74);
		int32_t L_76 = (int32_t)((L_74)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_75)))->___hashCode_0;
		int32_t L_77 = V_2;
		if ((!(((uint32_t)L_76) == ((uint32_t)L_77))))
		{
			goto IL_01d9;
		}
	}
	{
		RuntimeObject* L_78 = V_1;
		EntryU5BU5D_t5CFAFF65A005CA040F5C92D1AFEF51CB84CECE56* L_79 = V_0;
		int32_t L_80 = V_5;
		NullCheck(L_79);
		TerrainTileCoord_t2181DDF40A8A428A84817957CB7FB19A314F4F09 L_81 = (TerrainTileCoord_t2181DDF40A8A428A84817957CB7FB19A314F4F09)((L_79)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_80)))->___key_2;
		TerrainTileCoord_t2181DDF40A8A428A84817957CB7FB19A314F4F09 L_82 = ___key0;
		NullCheck(L_78);
		bool L_83;
		L_83 = InterfaceFuncInvoker2< bool, TerrainTileCoord_t2181DDF40A8A428A84817957CB7FB19A314F4F09, TerrainTileCoord_t2181DDF40A8A428A84817957CB7FB19A314F4F09 >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<UnityEngine.TerrainUtils.TerrainTileCoord>::Equals(T,T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 41), L_78, L_81, L_82);
		if (!L_83)
		{
			goto IL_01d9;
		}
	}
	{
		uint8_t L_84 = ___behavior2;
		if ((!(((uint32_t)L_84) == ((uint32_t)1))))
		{
			goto IL_01c8;
		}
	}
	{
		EntryU5BU5D_t5CFAFF65A005CA040F5C92D1AFEF51CB84CECE56* L_85 = V_0;
		int32_t L_86 = V_5;
		NullCheck(L_85);
		RuntimeObject* L_87 = ___value1;
		((L_85)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_86)))->___value_3 = L_87;
		Il2CppCodeGenWriteBarrier((void**)(&((L_85)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_86)))->___value_3), (void*)L_87);
		return (bool)1;
	}

IL_01c8:
	{
		uint8_t L_88 = ___behavior2;
		if ((!(((uint32_t)L_88) == ((uint32_t)2))))
		{
			goto IL_01d7;
		}
	}
	{
		TerrainTileCoord_t2181DDF40A8A428A84817957CB7FB19A314F4F09 L_89 = ___key0;
		TerrainTileCoord_t2181DDF40A8A428A84817957CB7FB19A314F4F09 L_90 = L_89;
		RuntimeObject* L_91 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 21), &L_90);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_91, NULL);
	}

IL_01d7:
	{
		return (bool)0;
	}

IL_01d9:
	{
		EntryU5BU5D_t5CFAFF65A005CA040F5C92D1AFEF51CB84CECE56* L_92 = V_0;
		int32_t L_93 = V_5;
		NullCheck(L_92);
		int32_t L_94 = (int32_t)((L_92)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_93)))->___next_1;
		V_5 = L_94;
		int32_t L_95 = V_3;
		EntryU5BU5D_t5CFAFF65A005CA040F5C92D1AFEF51CB84CECE56* L_96 = V_0;
		NullCheck(L_96);
		if ((((int32_t)L_95) < ((int32_t)((int32_t)(((RuntimeArray*)L_96)->max_length)))))
		{
			goto IL_01f3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_01f3:
	{
		int32_t L_97 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_97, 1));
		goto IL_0187;
	}

IL_01f9:
	{
		V_6 = (bool)0;
		V_7 = (bool)0;
		int32_t L_98 = (int32_t)__this->____freeCount_4;
		if ((((int32_t)L_98) <= ((int32_t)0)))
		{
			goto IL_0223;
		}
	}
	{
		int32_t L_99 = (int32_t)__this->____freeList_3;
		V_8 = L_99;
		V_7 = (bool)1;
		int32_t L_100 = (int32_t)__this->____freeCount_4;
		__this->____freeCount_4 = ((int32_t)il2cpp_codegen_subtract(L_100, 1));
		goto IL_0250;
	}

IL_0223:
	{
		int32_t L_101 = (int32_t)__this->____count_2;
		V_13 = L_101;
		int32_t L_102 = V_13;
		EntryU5BU5D_t5CFAFF65A005CA040F5C92D1AFEF51CB84CECE56* L_103 = V_0;
		NullCheck(L_103);
		if ((!(((uint32_t)L_102) == ((uint32_t)((int32_t)(((RuntimeArray*)L_103)->max_length))))))
		{
			goto IL_023b;
		}
	}
	{
		((  void (*) (Dictionary_2_t22B5EE7684537D7D143E6F6FCDC4C58B5D53F68F*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 45)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 45));
		V_6 = (bool)1;
	}

IL_023b:
	{
		int32_t L_104 = V_13;
		V_8 = L_104;
		int32_t L_105 = V_13;
		__this->____count_2 = ((int32_t)il2cpp_codegen_add(L_105, 1));
		EntryU5BU5D_t5CFAFF65A005CA040F5C92D1AFEF51CB84CECE56* L_106 = (EntryU5BU5D_t5CFAFF65A005CA040F5C92D1AFEF51CB84CECE56*)__this->____entries_1;
		V_0 = L_106;
	}

IL_0250:
	{
		bool L_107 = V_6;
		if (L_107)
		{
			goto IL_0258;
		}
	}
	{
		int32_t* L_108 = V_4;
		G_B51_0 = L_108;
		goto IL_026d;
	}

IL_0258:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_109 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		int32_t L_110 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_111 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_111);
		NullCheck(L_109);
		G_B51_0 = ((L_109)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_110%((int32_t)(((RuntimeArray*)L_111)->max_length)))))));
	}

IL_026d:
	{
		V_9 = G_B51_0;
		EntryU5BU5D_t5CFAFF65A005CA040F5C92D1AFEF51CB84CECE56* L_112 = V_0;
		int32_t L_113 = V_8;
		NullCheck(L_112);
		V_10 = ((L_112)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_113)));
		bool L_114 = V_7;
		if (!L_114)
		{
			goto IL_028a;
		}
	}
	{
		Entry_tC6604B503225E2D191CE25713A68DA2A5228CA1C* L_115 = V_10;
		int32_t L_116 = (int32_t)L_115->___next_1;
		__this->____freeList_3 = L_116;
	}

IL_028a:
	{
		Entry_tC6604B503225E2D191CE25713A68DA2A5228CA1C* L_117 = V_10;
		int32_t L_118 = V_2;
		L_117->___hashCode_0 = L_118;
		Entry_tC6604B503225E2D191CE25713A68DA2A5228CA1C* L_119 = V_10;
		int32_t* L_120 = V_9;
		int32_t L_121 = *((int32_t*)L_120);
		L_119->___next_1 = ((int32_t)il2cpp_codegen_subtract(L_121, 1));
		Entry_tC6604B503225E2D191CE25713A68DA2A5228CA1C* L_122 = V_10;
		TerrainTileCoord_t2181DDF40A8A428A84817957CB7FB19A314F4F09 L_123 = ___key0;
		L_122->___key_2 = L_123;
		Entry_tC6604B503225E2D191CE25713A68DA2A5228CA1C* L_124 = V_10;
		RuntimeObject* L_125 = ___value1;
		L_124->___value_3 = L_125;
		Il2CppCodeGenWriteBarrier((void**)(&L_124->___value_3), (void*)L_125);
		int32_t* L_126 = V_9;
		int32_t L_127 = V_8;
		*((int32_t*)L_126) = (int32_t)((int32_t)il2cpp_codegen_add(L_127, 1));
		return (bool)1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.TerrainUtils.TerrainTileCoord,System.Object>::OnDeserialization(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_OnDeserialization_m8CEA33F12647794DBF03DC3B201A678A32131DF4_gshared (Dictionary_2_t22B5EE7684537D7D143E6F6FCDC4C58B5D53F68F* __this, RuntimeObject* ___sender0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	KeyValuePair_2U5BU5D_t697102CA825793B9F049EE7FB6E4FA6CA679E0B3* V_3 = NULL;
	int32_t V_4 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F(L_0, (RuntimeObject*)__this, (&V_0), ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_2 = V_0;
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_3, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, NULL);
		V_1 = L_4;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_5, _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69, NULL);
		V_2 = L_6;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_7 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 34)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		RuntimeObject* L_10;
		L_10 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_7, _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9, L_9, NULL);
		__this->____comparer_6 = ((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 41)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer_6), (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 41))));
		int32_t L_11 = V_2;
		if (!L_11)
		{
			goto IL_00c9;
		}
	}
	{
		int32_t L_12 = V_2;
		int32_t L_13;
		L_13 = ((  int32_t (*) (Dictionary_2_t22B5EE7684537D7D143E6F6FCDC4C58B5D53F68F*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(__this, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_14 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 37)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		NullCheck(L_14);
		RuntimeObject* L_17;
		L_17 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_14, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, L_16, NULL);
		V_3 = ((KeyValuePair_2U5BU5D_t697102CA825793B9F049EE7FB6E4FA6CA679E0B3*)Castclass((RuntimeObject*)L_17, il2cpp_rgctx_data(method->klass->rgctx_data, 46)));
		KeyValuePair_2U5BU5D_t697102CA825793B9F049EE7FB6E4FA6CA679E0B3* L_18 = V_3;
		if (L_18)
		{
			goto IL_007a;
		}
	}
	{
		ThrowHelper_ThrowSerializationException_m03BE2B48CD3617C32FBCEE16030F7C5563E04E16((int32_t)((int32_t)16), NULL);
	}

IL_007a:
	{
		V_4 = 0;
		goto IL_00c0;
	}

IL_007f:
	{
		KeyValuePair_2U5BU5D_t697102CA825793B9F049EE7FB6E4FA6CA679E0B3* L_19 = V_3;
		int32_t L_20 = V_4;
		NullCheck(L_19);
		TerrainTileCoord_t2181DDF40A8A428A84817957CB7FB19A314F4F09 L_21;
		L_21 = KeyValuePair_2_get_Key_mE27FF2218D103DBF58A36186AA62595EC4079388_inline(((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20))), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		goto IL_009a;
	}
	{
		ThrowHelper_ThrowSerializationException_m03BE2B48CD3617C32FBCEE16030F7C5563E04E16((int32_t)((int32_t)17), NULL);
	}

IL_009a:
	{
		KeyValuePair_2U5BU5D_t697102CA825793B9F049EE7FB6E4FA6CA679E0B3* L_22 = V_3;
		int32_t L_23 = V_4;
		NullCheck(L_22);
		TerrainTileCoord_t2181DDF40A8A428A84817957CB7FB19A314F4F09 L_24;
		L_24 = KeyValuePair_2_get_Key_mE27FF2218D103DBF58A36186AA62595EC4079388_inline(((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23))), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		KeyValuePair_2U5BU5D_t697102CA825793B9F049EE7FB6E4FA6CA679E0B3* L_25 = V_3;
		int32_t L_26 = V_4;
		NullCheck(L_25);
		RuntimeObject* L_27;
		L_27 = KeyValuePair_2_get_Value_m64463C12912AD06A73305FF2EEF67678D7281515_inline(((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26))), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		((  void (*) (Dictionary_2_t22B5EE7684537D7D143E6F6FCDC4C58B5D53F68F*, TerrainTileCoord_t2181DDF40A8A428A84817957CB7FB19A314F4F09, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(__this, L_24, L_27, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		int32_t L_28 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_00c0:
	{
		int32_t L_29 = V_4;
		KeyValuePair_2U5BU5D_t697102CA825793B9F049EE7FB6E4FA6CA679E0B3* L_30 = V_3;
		NullCheck(L_30);
		if ((((int32_t)L_29) < ((int32_t)((int32_t)(((RuntimeArray*)L_30)->max_length)))))
		{
			goto IL_007f;
		}
	}
	{
		goto IL_00d0;
	}

IL_00c9:
	{
		__this->____buckets_0 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets_0), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
	}

IL_00d0:
	{
		int32_t L_31 = V_1;
		__this->____version_5 = L_31;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_32;
		L_32 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		NullCheck(L_32);
		bool L_33;
		L_33 = ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E(L_32, (RuntimeObject*)__this, ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.TerrainUtils.TerrainTileCoord,System.Object>::Resize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_mE649A7076E0B03B0D543BD5CEAEA8BB0B53AC3D3_gshared (Dictionary_2_t22B5EE7684537D7D143E6F6FCDC4C58B5D53F68F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = (int32_t)__this->____count_2;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_ExpandPrime_m9A35EC171AA0EA16F7C9F71EE6FAD5A82565ADB9(L_0, NULL);
		((  void (*) (Dictionary_2_t22B5EE7684537D7D143E6F6FCDC4C58B5D53F68F*, int32_t, bool, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 47)))(__this, L_1, (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 47));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.TerrainUtils.TerrainTileCoord,System.Object>::Resize(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_mF910D1B36E7DD8749F3903B6255E39610984435C_gshared (Dictionary_2_t22B5EE7684537D7D143E6F6FCDC4C58B5D53F68F* __this, int32_t ___newSize0, bool ___forceNewHashCodes1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	EntryU5BU5D_t5CFAFF65A005CA040F5C92D1AFEF51CB84CECE56* V_1 = NULL;
	int32_t V_2 = 0;
	TerrainTileCoord_t2181DDF40A8A428A84817957CB7FB19A314F4F09 V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		int32_t L_0 = ___newSize0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = ___newSize0;
		EntryU5BU5D_t5CFAFF65A005CA040F5C92D1AFEF51CB84CECE56* L_3 = (EntryU5BU5D_t5CFAFF65A005CA040F5C92D1AFEF51CB84CECE56*)(EntryU5BU5D_t5CFAFF65A005CA040F5C92D1AFEF51CB84CECE56*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 44), (uint32_t)L_2);
		V_1 = L_3;
		int32_t L_4 = (int32_t)__this->____count_2;
		V_2 = L_4;
		EntryU5BU5D_t5CFAFF65A005CA040F5C92D1AFEF51CB84CECE56* L_5 = (EntryU5BU5D_t5CFAFF65A005CA040F5C92D1AFEF51CB84CECE56*)__this->____entries_1;
		EntryU5BU5D_t5CFAFF65A005CA040F5C92D1AFEF51CB84CECE56* L_6 = V_1;
		int32_t L_7 = V_2;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, 0, (RuntimeArray*)L_6, 0, L_7, NULL);
		il2cpp_codegen_initobj((&V_3), sizeof(TerrainTileCoord_t2181DDF40A8A428A84817957CB7FB19A314F4F09));
		TerrainTileCoord_t2181DDF40A8A428A84817957CB7FB19A314F4F09 L_8 = V_3;
		TerrainTileCoord_t2181DDF40A8A428A84817957CB7FB19A314F4F09 L_9 = L_8;
		RuntimeObject* L_10 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 21), &L_9);
		bool L_11 = ___forceNewHashCodes1;
		if (!((int32_t)(((((RuntimeObject*)(RuntimeObject*)L_10) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0)&(int32_t)L_11)))
		{
			goto IL_0084;
		}
	}
	{
		V_4 = 0;
		goto IL_007f;
	}

IL_003e:
	{
		EntryU5BU5D_t5CFAFF65A005CA040F5C92D1AFEF51CB84CECE56* L_12 = V_1;
		int32_t L_13 = V_4;
		NullCheck(L_12);
		int32_t L_14 = (int32_t)((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)))->___hashCode_0;
		if ((((int32_t)L_14) < ((int32_t)0)))
		{
			goto IL_0079;
		}
	}
	{
		EntryU5BU5D_t5CFAFF65A005CA040F5C92D1AFEF51CB84CECE56* L_15 = V_1;
		int32_t L_16 = V_4;
		NullCheck(L_15);
		EntryU5BU5D_t5CFAFF65A005CA040F5C92D1AFEF51CB84CECE56* L_17 = V_1;
		int32_t L_18 = V_4;
		NullCheck(L_17);
		TerrainTileCoord_t2181DDF40A8A428A84817957CB7FB19A314F4F09* L_19 = (TerrainTileCoord_t2181DDF40A8A428A84817957CB7FB19A314F4F09*)(&((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___key_2);
		Il2CppFakeBox<TerrainTileCoord_t2181DDF40A8A428A84817957CB7FB19A314F4F09> L_20(il2cpp_rgctx_data(method->klass->rgctx_data, 21), L_19);
		int32_t L_21;
		L_21 = ValueType_GetHashCode_m3B47C72EA1FA846D9B0DFF3C444AB2BFA22CF3CE((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_20), NULL);
		((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___hashCode_0 = ((int32_t)(L_21&((int32_t)2147483647LL)));
	}

IL_0079:
	{
		int32_t L_22 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_22, 1));
	}

IL_007f:
	{
		int32_t L_23 = V_4;
		int32_t L_24 = V_2;
		if ((((int32_t)L_23) < ((int32_t)L_24)))
		{
			goto IL_003e;
		}
	}

IL_0084:
	{
		V_5 = 0;
		goto IL_00cb;
	}

IL_0089:
	{
		EntryU5BU5D_t5CFAFF65A005CA040F5C92D1AFEF51CB84CECE56* L_25 = V_1;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		int32_t L_27 = (int32_t)((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___hashCode_0;
		if ((((int32_t)L_27) < ((int32_t)0)))
		{
			goto IL_00c5;
		}
	}
	{
		EntryU5BU5D_t5CFAFF65A005CA040F5C92D1AFEF51CB84CECE56* L_28 = V_1;
		int32_t L_29 = V_5;
		NullCheck(L_28);
		int32_t L_30 = (int32_t)((L_28)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_29)))->___hashCode_0;
		int32_t L_31 = ___newSize0;
		V_6 = ((int32_t)(L_30%L_31));
		EntryU5BU5D_t5CFAFF65A005CA040F5C92D1AFEF51CB84CECE56* L_32 = V_1;
		int32_t L_33 = V_5;
		NullCheck(L_32);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_34 = V_0;
		int32_t L_35 = V_6;
		NullCheck(L_34);
		int32_t L_36 = L_35;
		int32_t L_37 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_36));
		((L_32)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_33)))->___next_1 = ((int32_t)il2cpp_codegen_subtract(L_37, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_38 = V_0;
		int32_t L_39 = V_6;
		int32_t L_40 = V_5;
		NullCheck(L_38);
		(L_38)->SetAt(static_cast<il2cpp_array_size_t>(L_39), (int32_t)((int32_t)il2cpp_codegen_add(L_40, 1)));
	}

IL_00c5:
	{
		int32_t L_41 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_41, 1));
	}

IL_00cb:
	{
		int32_t L_42 = V_5;
		int32_t L_43 = V_2;
		if ((((int32_t)L_42) < ((int32_t)L_43)))
		{
			goto IL_0089;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_44 = V_0;
		__this->____buckets_0 = L_44;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets_0), (void*)L_44);
		EntryU5BU5D_t5CFAFF65A005CA040F5C92D1AFEF51CB84CECE56* L_45 = V_1;
		__this->____entries_1 = L_45;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries_1), (void*)L_45);
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.TerrainUtils.TerrainTileCoord,System.Object>::Remove(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_mA310F8246B06F9E40BAB76366CD2F0FBA6784224_gshared (Dictionary_2_t22B5EE7684537D7D143E6F6FCDC4C58B5D53F68F* __this, TerrainTileCoord_t2181DDF40A8A428A84817957CB7FB19A314F4F09 ___key0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Entry_tC6604B503225E2D191CE25713A68DA2A5228CA1C* V_4 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	RuntimeObject* G_B10_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	bool G_B11_0 = false;
	{
		goto IL_000e;
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_000e:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		if (!L_1)
		{
			goto IL_0149;
		}
	}
	{
		RuntimeObject* L_2 = (RuntimeObject*)__this->____comparer_6;
		RuntimeObject* L_3 = L_2;
		G_B4_0 = L_3;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_0032;
		}
	}
	{
		Il2CppFakeBox<TerrainTileCoord_t2181DDF40A8A428A84817957CB7FB19A314F4F09> L_4(il2cpp_rgctx_data(method->klass->rgctx_data, 21), (&___key0));
		int32_t L_5;
		L_5 = ValueType_GetHashCode_m3B47C72EA1FA846D9B0DFF3C444AB2BFA22CF3CE((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_4), NULL);
		G_B6_0 = L_5;
		goto IL_0038;
	}

IL_0032:
	{
		TerrainTileCoord_t2181DDF40A8A428A84817957CB7FB19A314F4F09 L_6 = ___key0;
		NullCheck(G_B5_0);
		int32_t L_7;
		L_7 = InterfaceFuncInvoker1< int32_t, TerrainTileCoord_t2181DDF40A8A428A84817957CB7FB19A314F4F09 >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<UnityEngine.TerrainUtils.TerrainTileCoord>::GetHashCode(T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 41), G_B5_0, L_6);
		G_B6_0 = L_7;
	}

IL_0038:
	{
		V_0 = ((int32_t)(G_B6_0&((int32_t)2147483647LL)));
		int32_t L_8 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_9);
		V_1 = ((int32_t)(L_8%((int32_t)(((RuntimeArray*)L_9)->max_length))));
		V_2 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		int32_t L_11 = V_1;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		int32_t L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_13, 1));
		goto IL_0142;
	}

IL_005c:
	{
		EntryU5BU5D_t5CFAFF65A005CA040F5C92D1AFEF51CB84CECE56* L_14 = (EntryU5BU5D_t5CFAFF65A005CA040F5C92D1AFEF51CB84CECE56*)__this->____entries_1;
		int32_t L_15 = V_3;
		NullCheck(L_14);
		V_4 = ((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)));
		Entry_tC6604B503225E2D191CE25713A68DA2A5228CA1C* L_16 = V_4;
		int32_t L_17 = (int32_t)L_16->___hashCode_0;
		int32_t L_18 = V_0;
		if ((!(((uint32_t)L_17) == ((uint32_t)L_18))))
		{
			goto IL_0138;
		}
	}
	{
		RuntimeObject* L_19 = (RuntimeObject*)__this->____comparer_6;
		RuntimeObject* L_20 = L_19;
		G_B9_0 = L_20;
		if (L_20)
		{
			G_B10_0 = L_20;
			goto IL_0095;
		}
	}
	{
		EqualityComparer_1_t825BE29F8175FFB17D7A1752D208ACAB0066AEC2* L_21;
		L_21 = ((  EqualityComparer_1_t825BE29F8175FFB17D7A1752D208ACAB0066AEC2* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		Entry_tC6604B503225E2D191CE25713A68DA2A5228CA1C* L_22 = V_4;
		TerrainTileCoord_t2181DDF40A8A428A84817957CB7FB19A314F4F09 L_23 = (TerrainTileCoord_t2181DDF40A8A428A84817957CB7FB19A314F4F09)L_22->___key_2;
		TerrainTileCoord_t2181DDF40A8A428A84817957CB7FB19A314F4F09 L_24 = ___key0;
		NullCheck(L_21);
		bool L_25;
		L_25 = VirtualFuncInvoker2< bool, TerrainTileCoord_t2181DDF40A8A428A84817957CB7FB19A314F4F09, TerrainTileCoord_t2181DDF40A8A428A84817957CB7FB19A314F4F09 >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.TerrainUtils.TerrainTileCoord>::Equals(T,T) */, L_21, L_23, L_24);
		G_B11_0 = L_25;
		goto IL_00a2;
	}

IL_0095:
	{
		Entry_tC6604B503225E2D191CE25713A68DA2A5228CA1C* L_26 = V_4;
		TerrainTileCoord_t2181DDF40A8A428A84817957CB7FB19A314F4F09 L_27 = (TerrainTileCoord_t2181DDF40A8A428A84817957CB7FB19A314F4F09)L_26->___key_2;
		TerrainTileCoord_t2181DDF40A8A428A84817957CB7FB19A314F4F09 L_28 = ___key0;
		NullCheck(G_B10_0);
		bool L_29;
		L_29 = InterfaceFuncInvoker2< bool, TerrainTileCoord_t2181DDF40A8A428A84817957CB7FB19A314F4F09, TerrainTileCoord_t2181DDF40A8A428A84817957CB7FB19A314F4F09 >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<UnityEngine.TerrainUtils.TerrainTileCoord>::Equals(T,T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 41), G_B10_0, L_27, L_28);
		G_B11_0 = L_29;
	}

IL_00a2:
	{
		if (!G_B11_0)
		{
			goto IL_0138;
		}
	}
	{
		int32_t L_30 = V_2;
		if ((((int32_t)L_30) >= ((int32_t)0)))
		{
			goto IL_00be;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		int32_t L_32 = V_1;
		Entry_tC6604B503225E2D191CE25713A68DA2A5228CA1C* L_33 = V_4;
		int32_t L_34 = (int32_t)L_33->___next_1;
		NullCheck(L_31);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(L_32), (int32_t)((int32_t)il2cpp_codegen_add(L_34, 1)));
		goto IL_00d6;
	}

IL_00be:
	{
		EntryU5BU5D_t5CFAFF65A005CA040F5C92D1AFEF51CB84CECE56* L_35 = (EntryU5BU5D_t5CFAFF65A005CA040F5C92D1AFEF51CB84CECE56*)__this->____entries_1;
		int32_t L_36 = V_2;
		NullCheck(L_35);
		Entry_tC6604B503225E2D191CE25713A68DA2A5228CA1C* L_37 = V_4;
		int32_t L_38 = (int32_t)L_37->___next_1;
		((L_35)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_36)))->___next_1 = L_38;
	}

IL_00d6:
	{
		Entry_tC6604B503225E2D191CE25713A68DA2A5228CA1C* L_39 = V_4;
		L_39->___hashCode_0 = (-1);
		Entry_tC6604B503225E2D191CE25713A68DA2A5228CA1C* L_40 = V_4;
		int32_t L_41 = (int32_t)__this->____freeList_3;
		L_40->___next_1 = L_41;
		if (!false)
		{
			goto IL_00ff;
		}
	}
	{
		Entry_tC6604B503225E2D191CE25713A68DA2A5228CA1C* L_42 = V_4;
		TerrainTileCoord_t2181DDF40A8A428A84817957CB7FB19A314F4F09* L_43 = (TerrainTileCoord_t2181DDF40A8A428A84817957CB7FB19A314F4F09*)(&L_42->___key_2);
		il2cpp_codegen_initobj(L_43, sizeof(TerrainTileCoord_t2181DDF40A8A428A84817957CB7FB19A314F4F09));
	}

IL_00ff:
	{
		if (!true)
		{
			goto IL_0113;
		}
	}
	{
		Entry_tC6604B503225E2D191CE25713A68DA2A5228CA1C* L_44 = V_4;
		RuntimeObject** L_45 = (RuntimeObject**)(&L_44->___value_3);
		il2cpp_codegen_initobj(L_45, sizeof(RuntimeObject*));
	}

IL_0113:
	{
		int32_t L_46 = V_3;
		__this->____freeList_3 = L_46;
		int32_t L_47 = (int32_t)__this->____freeCount_4;
		__this->____freeCount_4 = ((int32_t)il2cpp_codegen_add(L_47, 1));
		int32_t L_48 = (int32_t)__this->____version_5;
		__this->____version_5 = ((int32_t)il2cpp_codegen_add(L_48, 1));
		return (bool)1;
	}

IL_0138:
	{
		int32_t L_49 = V_3;
		V_2 = L_49;
		Entry_tC6604B503225E2D191CE25713A68DA2A5228CA1C* L_50 = V_4;
		int32_t L_51 = (int32_t)L_50->___next_1;
		V_3 = L_51;
	}

IL_0142:
	{
		int32_t L_52 = V_3;
		if ((((int32_t)L_52) >= ((int32_t)0)))
		{
			goto IL_005c;
		}
	}

IL_0149:
	{
		return (bool)0;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.TerrainUtils.TerrainTileCoord,System.Object>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_mF6F2C5F869485AA206FDE526CAA58BBC691A8AD5_gshared (Dictionary_2_t22B5EE7684537D7D143E6F6FCDC4C58B5D53F68F* __this, TerrainTileCoord_t2181DDF40A8A428A84817957CB7FB19A314F4F09 ___key0, RuntimeObject** ___value1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		TerrainTileCoord_t2181DDF40A8A428A84817957CB7FB19A314F4F09 L_0 = ___key0;
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_t22B5EE7684537D7D143E6F6FCDC4C58B5D53F68F*, TerrainTileCoord_t2181DDF40A8A428A84817957CB7FB19A314F4F09, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 20)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0025;
		}
	}
	{
		RuntimeObject** L_3 = ___value1;
		EntryU5BU5D_t5CFAFF65A005CA040F5C92D1AFEF51CB84CECE56* L_4 = (EntryU5BU5D_t5CFAFF65A005CA040F5C92D1AFEF51CB84CECE56*)__this->____entries_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		RuntimeObject* L_6 = (RuntimeObject*)((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value_3;
		*(RuntimeObject**)L_3 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_3, (void*)L_6);
		return (bool)1;
	}

IL_0025:
	{
		RuntimeObject** L_7 = ___value1;
		il2cpp_codegen_initobj(L_7, sizeof(RuntimeObject*));
		return (bool)0;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.TerrainUtils.TerrainTileCoord,System.Object>::TryAdd(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryAdd_m56FBC524A78C4A70D647964C2E5886CFCCE6CA53_gshared (Dictionary_2_t22B5EE7684537D7D143E6F6FCDC4C58B5D53F68F* __this, TerrainTileCoord_t2181DDF40A8A428A84817957CB7FB19A314F4F09 ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) 
{
	{
		TerrainTileCoord_t2181DDF40A8A428A84817957CB7FB19A314F4F09 L_0 = ___key0;
		RuntimeObject* L_1 = ___value1;
		bool L_2;
		L_2 = ((  bool (*) (Dictionary_2_t22B5EE7684537D7D143E6F6FCDC4C58B5D53F68F*, TerrainTileCoord_t2181DDF40A8A428A84817957CB7FB19A314F4F09, RuntimeObject*, uint8_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 22)))(__this, L_0, L_1, (uint8_t)0, il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		return L_2;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.TerrainUtils.TerrainTileCoord,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m22EC47481923449E21631B652C53C39C3AA3301A_gshared (Dictionary_2_t22B5EE7684537D7D143E6F6FCDC4C58B5D53F68F* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.TerrainUtils.TerrainTileCoord,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_mF28E82E2A1DD91DA400BB6ABCF838964C3483189_gshared (Dictionary_2_t22B5EE7684537D7D143E6F6FCDC4C58B5D53F68F* __this, KeyValuePair_2U5BU5D_t697102CA825793B9F049EE7FB6E4FA6CA679E0B3* ___array0, int32_t ___index1, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2U5BU5D_t697102CA825793B9F049EE7FB6E4FA6CA679E0B3* L_0 = ___array0;
		int32_t L_1 = ___index1;
		((  void (*) (Dictionary_2_t22B5EE7684537D7D143E6F6FCDC4C58B5D53F68F*, KeyValuePair_2U5BU5D_t697102CA825793B9F049EE7FB6E4FA6CA679E0B3*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 36)))(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 36));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.TerrainUtils.TerrainTileCoord,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_ICollection_CopyTo_m58B6561DA74A2C60D0E5CEAB543218B9C0894FAE_gshared (Dictionary_2_t22B5EE7684537D7D143E6F6FCDC4C58B5D53F68F* __this, RuntimeArray* ___array0, int32_t ___index1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_t697102CA825793B9F049EE7FB6E4FA6CA679E0B3* V_0 = NULL;
	DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* V_1 = NULL;
	EntryU5BU5D_t5CFAFF65A005CA040F5C92D1AFEF51CB84CECE56* V_2 = NULL;
	int32_t V_3 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_4 = NULL;
	int32_t V_5 = 0;
	EntryU5BU5D_t5CFAFF65A005CA040F5C92D1AFEF51CB84CECE56* V_6 = NULL;
	int32_t V_7 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___array0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___array0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(L_1, NULL);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___array0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___index1;
		RuntimeArray* L_6 = ___array0;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_6, NULL);
		if ((!(((uint32_t)L_5) > ((uint32_t)L_7))))
		{
			goto IL_0035;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0035:
	{
		RuntimeArray* L_8 = ___array0;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_8, NULL);
		int32_t L_10 = ___index1;
		int32_t L_11;
		L_11 = ((  int32_t (*) (Dictionary_2_t22B5EE7684537D7D143E6F6FCDC4C58B5D53F68F*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 29)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_9, L_10))) >= ((int32_t)L_11)))
		{
			goto IL_004b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)5, NULL);
	}

IL_004b:
	{
		RuntimeArray* L_12 = ___array0;
		V_0 = ((KeyValuePair_2U5BU5D_t697102CA825793B9F049EE7FB6E4FA6CA679E0B3*)IsInst((RuntimeObject*)L_12, il2cpp_rgctx_data(method->klass->rgctx_data, 46)));
		KeyValuePair_2U5BU5D_t697102CA825793B9F049EE7FB6E4FA6CA679E0B3* L_13 = V_0;
		if (!L_13)
		{
			goto IL_005e;
		}
	}
	{
		KeyValuePair_2U5BU5D_t697102CA825793B9F049EE7FB6E4FA6CA679E0B3* L_14 = V_0;
		int32_t L_15 = ___index1;
		((  void (*) (Dictionary_2_t22B5EE7684537D7D143E6F6FCDC4C58B5D53F68F*, KeyValuePair_2U5BU5D_t697102CA825793B9F049EE7FB6E4FA6CA679E0B3*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 36)))(__this, L_14, L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 36));
		return;
	}

IL_005e:
	{
		RuntimeArray* L_16 = ___array0;
		V_1 = ((DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533*)IsInst((RuntimeObject*)L_16, DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var));
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_17 = V_1;
		if (!L_17)
		{
			goto IL_00c3;
		}
	}
	{
		EntryU5BU5D_t5CFAFF65A005CA040F5C92D1AFEF51CB84CECE56* L_18 = (EntryU5BU5D_t5CFAFF65A005CA040F5C92D1AFEF51CB84CECE56*)__this->____entries_1;
		V_2 = L_18;
		V_3 = 0;
		goto IL_00b9;
	}

IL_0073:
	{
		EntryU5BU5D_t5CFAFF65A005CA040F5C92D1AFEF51CB84CECE56* L_19 = V_2;
		int32_t L_20 = V_3;
		NullCheck(L_19);
		int32_t L_21 = (int32_t)((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20)))->___hashCode_0;
		if ((((int32_t)L_21) < ((int32_t)0)))
		{
			goto IL_00b5;
		}
	}
	{
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_22 = V_1;
		int32_t L_23 = ___index1;
		int32_t L_24 = L_23;
		___index1 = ((int32_t)il2cpp_codegen_add(L_24, 1));
		EntryU5BU5D_t5CFAFF65A005CA040F5C92D1AFEF51CB84CECE56* L_25 = V_2;
		int32_t L_26 = V_3;
		NullCheck(L_25);
		TerrainTileCoord_t2181DDF40A8A428A84817957CB7FB19A314F4F09 L_27 = (TerrainTileCoord_t2181DDF40A8A428A84817957CB7FB19A314F4F09)((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___key_2;
		TerrainTileCoord_t2181DDF40A8A428A84817957CB7FB19A314F4F09 L_28 = L_27;
		RuntimeObject* L_29 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 21), &L_28);
		EntryU5BU5D_t5CFAFF65A005CA040F5C92D1AFEF51CB84CECE56* L_30 = V_2;
		int32_t L_31 = V_3;
		NullCheck(L_30);
		RuntimeObject* L_32 = (RuntimeObject*)((L_30)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_31)))->___value_3;
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_33;
		memset((&L_33), 0, sizeof(L_33));
		DictionaryEntry__ctor_m2768353E53A75C4860E34B37DAF1342120C5D1EA((&L_33), L_29, L_32, /*hidden argument*/NULL);
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(L_24), (DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB)L_33);
	}

IL_00b5:
	{
		int32_t L_34 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_00b9:
	{
		int32_t L_35 = V_3;
		int32_t L_36 = (int32_t)__this->____count_2;
		if ((((int32_t)L_35) < ((int32_t)L_36)))
		{
			goto IL_0073;
		}
	}
	{
		return;
	}

IL_00c3:
	{
		RuntimeArray* L_37 = ___array0;
		V_4 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_37, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_38 = V_4;
		if (L_38)
		{
			goto IL_00d4;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_00d4:
	{
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_39 = (int32_t)__this->____count_2;
			V_5 = L_39;
			EntryU5BU5D_t5CFAFF65A005CA040F5C92D1AFEF51CB84CECE56* L_40 = (EntryU5BU5D_t5CFAFF65A005CA040F5C92D1AFEF51CB84CECE56*)__this->____entries_1;
			V_6 = L_40;
			V_7 = 0;
			goto IL_0130_1;
		}

IL_00ea_1:
		{
			EntryU5BU5D_t5CFAFF65A005CA040F5C92D1AFEF51CB84CECE56* L_41 = V_6;
			int32_t L_42 = V_7;
			NullCheck(L_41);
			int32_t L_43 = (int32_t)((L_41)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_42)))->___hashCode_0;
			if ((((int32_t)L_43) < ((int32_t)0)))
			{
				goto IL_012a_1;
			}
		}
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_44 = V_4;
			int32_t L_45 = ___index1;
			int32_t L_46 = L_45;
			___index1 = ((int32_t)il2cpp_codegen_add(L_46, 1));
			EntryU5BU5D_t5CFAFF65A005CA040F5C92D1AFEF51CB84CECE56* L_47 = V_6;
			int32_t L_48 = V_7;
			NullCheck(L_47);
			TerrainTileCoord_t2181DDF40A8A428A84817957CB7FB19A314F4F09 L_49 = (TerrainTileCoord_t2181DDF40A8A428A84817957CB7FB19A314F4F09)((L_47)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_48)))->___key_2;
			EntryU5BU5D_t5CFAFF65A005CA040F5C92D1AFEF51CB84CECE56* L_50 = V_6;
			int32_t L_51 = V_7;
			NullCheck(L_50);
			RuntimeObject* L_52 = (RuntimeObject*)((L_50)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_51)))->___value_3;
			KeyValuePair_2_t8760984FFCA6E11154C918347EA4C7CFB2D0B8CE L_53;
			memset((&L_53), 0, sizeof(L_53));
			KeyValuePair_2__ctor_m384510E0549D9C5343A67620C046FC8791C82BAB((&L_53), L_49, L_52, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 31));
			KeyValuePair_2_t8760984FFCA6E11154C918347EA4C7CFB2D0B8CE L_54 = L_53;
			RuntimeObject* L_55 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 30), &L_54);
			NullCheck(L_44);
			ArrayElementTypeCheck (L_44, L_55);
			(L_44)->SetAt(static_cast<il2cpp_array_size_t>(L_46), (RuntimeObject*)L_55);
		}

IL_012a_1:
		{
			int32_t L_56 = V_7;
			V_7 = ((int32_t)il2cpp_codegen_add(L_56, 1));
		}

IL_0130_1:
		{
			int32_t L_57 = V_7;
			int32_t L_58 = V_5;
			if ((((int32_t)L_57) < ((int32_t)L_58)))
			{
				goto IL_00ea_1;
			}
		}
		{
			goto IL_0140;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0138;
		}
		throw e;
	}

CATCH_0138:
	{// begin catch(System.ArrayTypeMismatchException)
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0140;
	}// end catch (depth: 1)

IL_0140:
	{
		return;
	}
}
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<UnityEngine.TerrainUtils.TerrainTileCoord,System.Object>::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m2C056073020629A58D1C30238FDFC15DB49C4051_gshared (Dictionary_2_t22B5EE7684537D7D143E6F6FCDC4C58B5D53F68F* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tB06F293668D09F345A54C8C836ABF567B9087FB7 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mA03972C198139BFCEADE1562F82725B6A9BE6963((&L_0), __this, 2, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		Enumerator_tB06F293668D09F345A54C8C836ABF567B9087FB7 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 32), &L_1);
		return (RuntimeObject*)L_2;
	}
}
// System.Object System.Collections.Generic.Dictionary`2<UnityEngine.TerrainUtils.TerrainTileCoord,System.Object>::System.Collections.ICollection.get_SyncRoot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_ICollection_get_SyncRoot_m36C84AA90AB201A07DEA92CFE6A7FB84E99D6132_gshared (Dictionary_2_t22B5EE7684537D7D143E6F6FCDC4C58B5D53F68F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____syncRoot_9;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot_9);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = (RuntimeObject*)__this->____syncRoot_9;
		return L_4;
	}
}
// System.Object System.Collections.Generic.Dictionary`2<UnityEngine.TerrainUtils.TerrainTileCoord,System.Object>::System.Collections.IDictionary.get_Item(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_get_Item_mC46C79E2EDA06B1FFFCAFE180FEF7AD809970C8F_gshared (Dictionary_2_t22B5EE7684537D7D143E6F6FCDC4C58B5D53F68F* __this, RuntimeObject* ___key0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = ___key0;
		bool L_1;
		L_1 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 48)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 48));
		if (!L_1)
		{
			goto IL_0030;
		}
	}
	{
		RuntimeObject* L_2 = ___key0;
		int32_t L_3;
		L_3 = ((  int32_t (*) (Dictionary_2_t22B5EE7684537D7D143E6F6FCDC4C58B5D53F68F*, TerrainTileCoord_t2181DDF40A8A428A84817957CB7FB19A314F4F09, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 20)))(__this, ((*(TerrainTileCoord_t2181DDF40A8A428A84817957CB7FB19A314F4F09*)((TerrainTileCoord_t2181DDF40A8A428A84817957CB7FB19A314F4F09*)(TerrainTileCoord_t2181DDF40A8A428A84817957CB7FB19A314F4F09*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 21))))), il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		V_0 = L_3;
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		EntryU5BU5D_t5CFAFF65A005CA040F5C92D1AFEF51CB84CECE56* L_5 = (EntryU5BU5D_t5CFAFF65A005CA040F5C92D1AFEF51CB84CECE56*)__this->____entries_1;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		RuntimeObject* L_7 = (RuntimeObject*)((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->___value_3;
		return L_7;
	}

IL_0030:
	{
		return NULL;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.TerrainUtils.TerrainTileCoord,System.Object>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_IDictionary_set_Item_mAECBE508ABD832BF487347E732C6333F45A130E5_gshared (Dictionary_2_t22B5EE7684537D7D143E6F6FCDC4C58B5D53F68F* __this, RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) 
{
	TerrainTileCoord_t2181DDF40A8A428A84817957CB7FB19A314F4F09 V_0;
	memset((&V_0), 0, sizeof(V_0));
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		RuntimeObject* L_0 = ___key0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___value1;
		((  void (*) (RuntimeObject*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 50)))(L_1, (int32_t)((int32_t)15), il2cpp_rgctx_method(method->klass->rgctx_data, 50));
	}
	try
	{// begin try (depth: 1)
		{
			RuntimeObject* L_2 = ___key0;
			V_0 = ((*(TerrainTileCoord_t2181DDF40A8A428A84817957CB7FB19A314F4F09*)((TerrainTileCoord_t2181DDF40A8A428A84817957CB7FB19A314F4F09*)(TerrainTileCoord_t2181DDF40A8A428A84817957CB7FB19A314F4F09*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 21)))));
		}
		try
		{// begin try (depth: 2)
			TerrainTileCoord_t2181DDF40A8A428A84817957CB7FB19A314F4F09 L_3 = V_0;
			RuntimeObject* L_4 = ___value1;
			((  void (*) (Dictionary_2_t22B5EE7684537D7D143E6F6FCDC4C58B5D53F68F*, TerrainTileCoord_t2181DDF40A8A428A84817957CB7FB19A314F4F09, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 51)))(__this, L_3, ((RuntimeObject*)Castclass((RuntimeObject*)L_4, il2cpp_rgctx_data(method->klass->rgctx_data, 28))), il2cpp_rgctx_method(method->klass->rgctx_data, 51));
			goto IL_003a_1;
		}// end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0027_1;
			}
			throw e;
		}

CATCH_0027_1:
		{// begin catch(System.InvalidCastException)
			RuntimeObject* L_5 = ___value1;
			RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 52)) };
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
			Type_t* L_7;
			L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
			ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_5, L_7, NULL);
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_003a_1;
		}// end catch (depth: 2)

IL_003a_1:
		{
			goto IL_004f;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003c;
		}
		throw e;
	}

CATCH_003c:
	{// begin catch(System.InvalidCastException)
		RuntimeObject* L_8 = ___key0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 53)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		ThrowHelper_ThrowWrongKeyTypeArgumentException_m90E5BCE2CB10EEC16F254C237121C6816C4D6982(L_8, L_10, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_004f;
	}// end catch (depth: 1)

IL_004f:
	{
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.TerrainUtils.TerrainTileCoord,System.Object>::IsCompatibleKey(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_IsCompatibleKey_m7C0ED9249ADD42E039DD2DEF9CF95DF979D313E2_gshared (RuntimeObject* ___key0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___key0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___key0;
		return (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_1, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 21)))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.TerrainUtils.TerrainTileCoord,System.Object>::System.Collections.IDictionary.Contains(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_IDictionary_Contains_m6DBF31C9C0F713DC9879E8DFCE4DA7638C30D07A_gshared (Dictionary_2_t22B5EE7684537D7D143E6F6FCDC4C58B5D53F68F* __this, RuntimeObject* ___key0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___key0;
		bool L_1;
		L_1 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 48)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 48));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___key0;
		bool L_3;
		L_3 = ((  bool (*) (Dictionary_2_t22B5EE7684537D7D143E6F6FCDC4C58B5D53F68F*, TerrainTileCoord_t2181DDF40A8A428A84817957CB7FB19A314F4F09, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 54)))(__this, ((*(TerrainTileCoord_t2181DDF40A8A428A84817957CB7FB19A314F4F09*)((TerrainTileCoord_t2181DDF40A8A428A84817957CB7FB19A314F4F09*)(TerrainTileCoord_t2181DDF40A8A428A84817957CB7FB19A314F4F09*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 21))))), il2cpp_rgctx_method(method->klass->rgctx_data, 54));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<UnityEngine.TerrainUtils.TerrainTileCoord,System.Object>::System.Collections.IDictionary.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_GetEnumerator_m93727E36EFE609D0E3098FCE9FCB94E23834B019_gshared (Dictionary_2_t22B5EE7684537D7D143E6F6FCDC4C58B5D53F68F* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tB06F293668D09F345A54C8C836ABF567B9087FB7 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mA03972C198139BFCEADE1562F82725B6A9BE6963((&L_0), __this, 1, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		Enumerator_tB06F293668D09F345A54C8C836ABF567B9087FB7 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 32), &L_1);
		return (RuntimeObject*)L_2;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Key_m580D4010966F948701F9955EB40BBD5AA9964565_gshared_inline (KeyValuePair_2_t960579556437B99440AF144C7232735A5D4DA864* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___key_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t KeyValuePair_2_get_Value_mAFD58B7195CA80B3A58A19185A2B2A4A70B2A726_gshared_inline (KeyValuePair_2_t960579556437B99440AF144C7232735A5D4DA864* __this, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = (uint32_t)__this->___value_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Key_mC2F74F2C7913473C536D80C56A49C907525AA762_gshared_inline (KeyValuePair_2_t5FCDCECBAC4615B1D6C16612A028BBBF368C51D4* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___key_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 KeyValuePair_2_get_Value_m8C9B6CC4F0B407E1AE61FC1F558FE1920BE127B0_gshared_inline (KeyValuePair_2_t5FCDCECBAC4615B1D6C16612A028BBBF368C51D4* __this, const RuntimeMethod* method) 
{
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)__this->___value_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Key_mA53994A88775FF1BE799F3FC3B7FC2484A7B83E6_gshared_inline (KeyValuePair_2_t665B386104A382EAC5AF8A124C067F531DE78120* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___key_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR JointRotationFeatureState_t293BD5640481C36FBD0E01AB30998C1D1C1D5ADE KeyValuePair_2_get_Value_m7B6AD86F22659AD0AC092AF5EC11E4C137517524_gshared_inline (KeyValuePair_2_t665B386104A382EAC5AF8A124C067F531DE78120* __this, const RuntimeMethod* method) 
{
	{
		JointRotationFeatureState_t293BD5640481C36FBD0E01AB30998C1D1C1D5ADE L_0 = (JointRotationFeatureState_t293BD5640481C36FBD0E01AB30998C1D1C1D5ADE)__this->___value_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Key_m171B988FCFBB4CE7A964046A114247C8F4C611D6_gshared_inline (KeyValuePair_2_t14287996C615F8158516F8E8DB0AC54D578E8246* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___key_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR JointVelocityFeatureState_tA17C290CDFB76352D9CEFC3E7B790E0CAEF22105 KeyValuePair_2_get_Value_m29EF30BFC916771A4C2E50A55E1E6746E64A13B1_gshared_inline (KeyValuePair_2_t14287996C615F8158516F8E8DB0AC54D578E8246* __this, const RuntimeMethod* method) 
{
	{
		JointVelocityFeatureState_tA17C290CDFB76352D9CEFC3E7B790E0CAEF22105 L_0 = (JointVelocityFeatureState_tA17C290CDFB76352D9CEFC3E7B790E0CAEF22105)__this->___value_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Key_mF8D0149496A6E9F97AA843ED176E84E689B58C92_gshared_inline (KeyValuePair_2_tC7EE4E7E2715DB2FD352264EB3FAF4B38BBF15DF* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___key_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR PassthroughMeshInstance_tC15BBC616D213426B55C4E59C74175581D2EFFDE KeyValuePair_2_get_Value_mEDECE70FEBCB73C3191AAB4215C0FC3505C3D06A_gshared_inline (KeyValuePair_2_tC7EE4E7E2715DB2FD352264EB3FAF4B38BBF15DF* __this, const RuntimeMethod* method) 
{
	{
		PassthroughMeshInstance_tC15BBC616D213426B55C4E59C74175581D2EFFDE L_0 = (PassthroughMeshInstance_tC15BBC616D213426B55C4E59C74175581D2EFFDE)__this->___value_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Key_mBE72C27BFF193B87C192E8F269820D2296B6E172_gshared_inline (KeyValuePair_2_t852F23A435B740B3D14D3CE08B14FFD4690334E7* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___key_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8 KeyValuePair_2_get_Value_m4436FB8460A00616072675A6DC8EF35E3C57021E_gshared_inline (KeyValuePair_2_t852F23A435B740B3D14D3CE08B14FFD4690334E7* __this, const RuntimeMethod* method) 
{
	{
		PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8 L_0 = (PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8)__this->___value_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TerrainTileCoord_t2181DDF40A8A428A84817957CB7FB19A314F4F09 KeyValuePair_2_get_Key_mE27FF2218D103DBF58A36186AA62595EC4079388_gshared_inline (KeyValuePair_2_t8760984FFCA6E11154C918347EA4C7CFB2D0B8CE* __this, const RuntimeMethod* method) 
{
	{
		TerrainTileCoord_t2181DDF40A8A428A84817957CB7FB19A314F4F09 L_0 = (TerrainTileCoord_t2181DDF40A8A428A84817957CB7FB19A314F4F09)__this->___key_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_m64463C12912AD06A73305FF2EEF67678D7281515_gshared_inline (KeyValuePair_2_t8760984FFCA6E11154C918347EA4C7CFB2D0B8CE* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___value_1;
		return L_0;
	}
}
