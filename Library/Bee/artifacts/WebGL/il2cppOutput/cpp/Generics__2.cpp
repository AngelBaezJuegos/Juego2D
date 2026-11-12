#include "pch-cpp.hpp"





template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*,const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj,invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*,T1,const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj,p1,invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2
{
	typedef R (*Func)(void*,T1,T2,const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj,p1,p2,invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2Invoker;
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2Invoker<R, T1*, T2*>
{
	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1* p1, T2* p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		R ret;
		void* params[2] = { p1, p2 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, &ret);
		return ret;
	}
};
template <typename R>
struct GenericVirtualFuncInvoker0
{
	typedef R (*Func)(void*,const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj,invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*,const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj,invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1Invoker;
template <typename T1>
struct InterfaceActionInvoker1Invoker<T1*>
{
	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1* p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		void* params[1] = { p1 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, params[0]);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*,const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj,invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*,T1,const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj,p1,invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1Invoker;
template <typename R, typename T1>
struct InterfaceFuncInvoker1Invoker<R, T1*>
{
	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1* p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		R ret;
		void* params[1] = { p1 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2
{
	typedef R (*Func)(void*,T1,T2,const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj,p1,p2,invokeData.method);
	}
};
template <typename R>
struct GenericInterfaceFuncInvoker0
{
	typedef R (*Func)(void*,const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj,invokeData.method);
	}
};
template <typename T1>
struct InvokerActionInvoker1;
template <typename T1>
struct InvokerActionInvoker1<T1*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, params[0]);
	}
};
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2;
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2<R, T1, T2*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2* p2)
	{
		R ret;
		void* params[2] = { &p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};

struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
struct ConcurrentDictionary_2_t44EF43F797787D2D41D8F1516BA77C1C20CE28B6;
struct ConcurrentDictionary_2_t6DF554984593E2F9932FAFBF9E1AFD30D1ED0812;
struct ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858;
struct ConditionalWeakTable_2_tDA4DD9BAFAF3114A73F0B4D6AA3049208A3B288B;
struct Converter_2_t492BE36BDB9ACE2595DC3BFC0172171D1510E4CB;
struct CreateValueCallback_t8463FCCADB8B16880DB710DACCEF3B1531B1649B;
struct DefaultComparer_1_t9C7341E5478D67148593B9F5D9828B0B26E8771C;
struct DefaultComparer_1_tF12896E32765999A5CD556EEF744B5B1AEB870E5;
struct DelegateWithContext_1_tB8D0AD031518ADF1F51C1EC7F3118EDC45A5A126;
struct DelegateWithContext_1_tF58DA06EFEAFE5BF7A86055C6EE414BBC6295874;
struct DictionaryEnumerator_tD2AAFB3F341BE39C70A71939CA10F9C44CDDB65B;
struct DictionaryEnumerator_t50968DBECB732082714E6294722DC51777C8A22A;
struct Dictionary_2_t232323BDF7857D243A4CCA18ADCF59272D0E4C23;
struct Dictionary_2_t6EE05E1DBF257B416E0A3B6FE8BF1C1F55C8C13B;
struct Dictionary_2_tAC56BFFAB0D6C547AD119E1707252267F9C0C49A;
struct Dictionary_2_tE5B96FEA65A0394692A66749C0DDE9956CF9EC15;
struct Dictionary_2_tE7C86B2C5A23A1F27C98C2B36D5E45FA457F6090;
struct Dictionary_2_tACC278C341353EB0D3F5219D25804742C5DDC8A9;
struct Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55;
struct Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588;
struct Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E;
struct Enumerator_t7F5D6C6AE7869482698189D9AB03383A976081DF;
struct EqualityComparer_1_t2AAFF66C447B855AEB2EF13BDDE1F6301924188F;
struct EqualityComparer_1_t6AF08CEAD675C05C1B701806606C7CB7CF53951F;
struct EqualityComparer_1_t4515F567FF8CA58A31FECE4C986C6950AAF8A2CB;
struct EqualityComparer_1_t63A37CBBA150A456A5494B585BAAD61AEC84FCC3;
struct EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399;
struct EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862;
struct EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081;
struct EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC;
struct EqualityComparer_1_tC81AF0456B0ECB7415E30894699AAB099256D323;
struct Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1;
struct IDictionary_2_t03702ED9DD9A4FE5DD769F6F609DE10239EE6BC0;
struct IDictionary_2_t2FA61AE137EED621840AB6E61A1C75D249C05100;
struct IDictionary_2_tE849F992474EEBB668D9A9A590CF675D9449C7BE;
struct IDictionary_2_tA0B80C4164D9C76CFB7782AA410D71B7F5F79DB0;
struct IDictionary_2_tC13F374146F520F59DBE0A7EBC861521C9537CC3;
struct IDictionary_2_t81C94C2596A809C22FBCE957D38A8B8E80247769;
struct IEnumerator_1_t0CA9BD601B658BAEB75A6BDA95E39ABE0C06D8F2;
struct IEnumerator_1_t1FC23C4652B02A4E4AE212074D88FC38BE085681;
struct IEnumerator_1_tC0408FCD0D690D95C68E5294CA36C400FFB79781;
struct IEnumerator_1_t43FD4E0807D3733E8357033FA5EF5E2287B7DC8B;
struct IEnumerator_1_t4EDAE446FF484497803034597D4D6688DFAB4B32;
struct IEnumerator_1_tD37712EF66C2DACD5DBFA05DB7CE341EF2FBA1EE;
struct IEnumerator_1_tDFDA733A40523681099DF822E97AA4397205F8E5;
struct IEnumerator_1_tFABD3B897F1296469E9A2DB9BCF6C89439049208;
struct IEqualityComparer_1_tC1B0D6B8E6213478414769B9C94D350B921D57D9;
struct IEqualityComparer_1_t6EEEF539D2CA2C93760158FE927CE8A0B1E6AD2D;
struct IEqualityComparer_1_t49EBDA1133E48B1F11BA86D393C4766FB32F2501;
struct IEqualityComparer_1_t0FD77626ECC867C51E80375D213A11E13F49043A;
struct IEqualityComparer_1_t0706C8CEAD5235F761D9A8DB3AC57BA61E96F1C9;
struct IEqualityComparer_1_t95351C62AE7A3DC1F5A634C37AF7444A078B5B99;
struct IEqualityComparer_1_t47CC0B235E693652D181B679FF6D61A469ECC122;
struct IEquatable_1_t4759C29625D27994F9F829C3543690B9329901F6;
struct IEquatable_1_tD61C76E85AFA1BC35DC351FA8820566763E24618;
struct KeyCollection_tB3FBC73DC16C3B6B2A8597B904BE6599EB6C5227;
struct KeyCollection_tF3843FC39D5C3B0CEA3C2A09563C6BE9D7327575;
struct KeyCollection_tFB65BE5C0E6B6C8D1CB0CCA25F056AA72F66D37C;
struct KeyCollection_t57775F7FF92A58C6D31372BA8764C2261A0E892A;
struct KeyCollection_t91FB72DA59E2DD50460D6B13860A5A6ADF6C19FC;
struct KeyCollection_tABC0767E4C9CAC395DC791123D07816845B5F3FE;
struct KeyCollection_tB792ACBAE0B99278B0B7B0F7440B4788E98F0D55;
struct Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12;
struct Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED;
struct Tables_t6982B3E1F2B762A9F103EA1F3131B47E3CE14CDC;
struct Tables_tD895B223685217918C345ED5D52074F7E29E5F95;
struct Task_1_t824317F4B958F7512E8F7300511752937A6C6043;
struct Task_1_t4C228DE57804012969575431CFF12D57C875552D;
struct Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17;
struct Task_1_tB348EA1B62802484AB33A91D4404C52DCF7BDB18;
struct Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9;
struct ValueCollection_t6C92C52854F574A9EE80E18C51297F5BB4B1C4C3;
struct ValueCollection_tE676A0B8EBB18ACFBE7F3E153BEC60CA0E3BE2D1;
struct ValueCollection_t850579E5C2FF909D1C3606EC46C87F0FADFEDB96;
struct ValueCollection_tBFC0E43BC45FCEFBDF4400423106E4A62E2EAE97;
struct ValueCollection_t5390AA0A336DFE6BC4AED8BB2868F9D6869D211B;
struct ValueCollection_t6E5730979611F4C4C82E15329EA4E3C265DFED32;
struct ValueCollection_tC492596681BD51AB34FC76FA76C15C9B3FFB7B40;
struct EntryU5BU5D_tDBAAD2500E17E1BA8285BEE36BF88226E24F199C;
struct EntryU5BU5D_t2CF41CF5E2621F7EFD1220745F530C0B5DC797C3;
struct EntryU5BU5D_tD168B9758081967AE421A2B6D72D8EBDC95FC1E0;
struct EntryU5BU5D_t3A03E6878DE4EA58BAC9598CD15F49AD1988B351;
struct EntryU5BU5D_t8D700A36ADEAE6E64D092B1F2FF95391E5A03F6C;
struct EntryU5BU5D_tAAF64BD0D9C29E733318312670F238A6137022E3;
struct KeyValuePair_2U5BU5D_tE76A126FCE108E33BC3A97C53D003B3D399BFD33;
struct KeyValuePair_2U5BU5D_t4208D2E1B4635D7EA4C927172F54BAD9776A760F;
struct KeyValuePair_2U5BU5D_t9F59B28C21BBB1C41719D5BDFC79702EFA03FC3A;
struct KeyValuePair_2U5BU5D_t452E832017CA977A0436EAE3C0B660FEFAA9E48C;
struct KeyValuePair_2U5BU5D_t22BD4C2009997AFE758B947C2D08853C305EA502;
struct KeyValuePair_2U5BU5D_t9DF131722D7F3B6C04EF603B3CF8C56E1AF7D856;
struct KeyValuePair_2U5BU5D_t78D9368B607748564E2110C38FC6FCC5150E8DDA;
struct KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533;
struct EphemeronU5BU5D_t4F80428A1142C3102C946127F8190063001742E8;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
struct ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007;
struct Delegate_t;
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
struct FontAsset_t61A6446D934E582651044E33D250EA8D306AB958;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct IDictionaryEnumerator_tE129D608FCDB7207E0F0ECE33473CC950A83AD16;
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
struct IFormatterConverter_t726606DAC82C384B08C82471313C340968DDB609;
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
struct MethodInfo_t;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37;
struct StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352;
struct String_t;
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572;
struct TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0;
struct TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E;
struct Type_t;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
struct ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EphemeronU5BU5D_t4F80428A1142C3102C946127F8190063001742E8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HashCode_t9CF0E862CF73DB9FE67D8DBBD1F4C46330F88AE3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
IL2CPP_EXTERN_C String_t* _stringLiteral2AA2E732DB2949176A84E755559B51D778BADC01;
IL2CPP_EXTERN_C String_t* _stringLiteral5B752FEA6C79E292F7975C9C7E92D2B4616F6B66;
IL2CPP_EXTERN_C String_t* _stringLiteralBE1D2E11D58177AC5AC7C4A993B5BE6408F97DAA;
IL2CPP_EXTERN_C String_t* _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
IL2CPP_EXTERN_C String_t* _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A;
IL2CPP_EXTERN_C String_t* _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1;
IL2CPP_EXTERN_C String_t* _stringLiteralE7D028CCE3B6E7B61AE2C752D7AE970DA04AB7C6;
IL2CPP_EXTERN_C String_t* _stringLiteralEE87639B3A491E0E26BF98722E7EF266338FFC27;
IL2CPP_EXTERN_C const RuntimeMethod* ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct EntryU5BU5D_tDBAAD2500E17E1BA8285BEE36BF88226E24F199C;
struct EntryU5BU5D_t2CF41CF5E2621F7EFD1220745F530C0B5DC797C3;
struct EntryU5BU5D_tD168B9758081967AE421A2B6D72D8EBDC95FC1E0;
struct EntryU5BU5D_t3A03E6878DE4EA58BAC9598CD15F49AD1988B351;
struct EntryU5BU5D_t8D700A36ADEAE6E64D092B1F2FF95391E5A03F6C;
struct EntryU5BU5D_tAAF64BD0D9C29E733318312670F238A6137022E3;
struct KeyValuePair_2U5BU5D_tE76A126FCE108E33BC3A97C53D003B3D399BFD33;
struct KeyValuePair_2U5BU5D_t4208D2E1B4635D7EA4C927172F54BAD9776A760F;
struct KeyValuePair_2U5BU5D_t9F59B28C21BBB1C41719D5BDFC79702EFA03FC3A;
struct KeyValuePair_2U5BU5D_t452E832017CA977A0436EAE3C0B660FEFAA9E48C;
struct KeyValuePair_2U5BU5D_t22BD4C2009997AFE758B947C2D08853C305EA502;
struct KeyValuePair_2U5BU5D_t9DF131722D7F3B6C04EF603B3CF8C56E1AF7D856;
struct KeyValuePair_2U5BU5D_t78D9368B607748564E2110C38FC6FCC5150E8DDA;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533;
struct EphemeronU5BU5D_t4F80428A1142C3102C946127F8190063001742E8;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct ConcurrentDictionary_2_t44EF43F797787D2D41D8F1516BA77C1C20CE28B6  : public RuntimeObject
{
	Tables_t6982B3E1F2B762A9F103EA1F3131B47E3CE14CDC* ____tables;
	RuntimeObject* ____comparer;
	bool ____growLockArray;
	int32_t ____budget;
	KeyValuePair_2U5BU5D_t78D9368B607748564E2110C38FC6FCC5150E8DDA* ____serializationArray;
	int32_t ____serializationConcurrencyLevel;
	int32_t ____serializationCapacity;
};
struct ConcurrentDictionary_2_t6DF554984593E2F9932FAFBF9E1AFD30D1ED0812  : public RuntimeObject
{
	Tables_tD895B223685217918C345ED5D52074F7E29E5F95* ____tables;
	RuntimeObject* ____comparer;
	bool ____growLockArray;
	int32_t ____budget;
	KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* ____serializationArray;
	int32_t ____serializationConcurrencyLevel;
	int32_t ____serializationCapacity;
};
struct ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858  : public RuntimeObject
{
	EphemeronU5BU5D_t4F80428A1142C3102C946127F8190063001742E8* ___data;
	RuntimeObject* ____lock;
	int32_t ___size;
};
struct ConditionalWeakTable_2_tDA4DD9BAFAF3114A73F0B4D6AA3049208A3B288B  : public RuntimeObject
{
	EphemeronU5BU5D_t4F80428A1142C3102C946127F8190063001742E8* ___data;
	RuntimeObject* ____lock;
	int32_t ___size;
};
struct DefaultComparer_1_t9C7341E5478D67148593B9F5D9828B0B26E8771C  : public RuntimeObject
{
};
struct DefaultComparer_1_tF12896E32765999A5CD556EEF744B5B1AEB870E5  : public RuntimeObject
{
};
struct DictionaryEnumerator_tD2AAFB3F341BE39C70A71939CA10F9C44CDDB65B  : public RuntimeObject
{
	RuntimeObject* ____enumerator;
};
struct DictionaryEnumerator_t50968DBECB732082714E6294722DC51777C8A22A  : public RuntimeObject
{
	RuntimeObject* ____enumerator;
};
struct DictionaryKeyCollectionDebugView_2_tA967A5CC2E1F95032AE886F39B1005E56173D9D2  : public RuntimeObject
{
};
struct DictionaryValueCollectionDebugView_2_tE2C8C453C326A08B63223B59D5D010EFFE30BEF3  : public RuntimeObject
{
};
struct Dictionary_2_t232323BDF7857D243A4CCA18ADCF59272D0E4C23  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_tDBAAD2500E17E1BA8285BEE36BF88226E24F199C* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_tB3FBC73DC16C3B6B2A8597B904BE6599EB6C5227* ____keys;
	ValueCollection_t6C92C52854F574A9EE80E18C51297F5BB4B1C4C3* ____values;
	RuntimeObject* ____syncRoot;
};
struct Dictionary_2_t6EE05E1DBF257B416E0A3B6FE8BF1C1F55C8C13B  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_t2CF41CF5E2621F7EFD1220745F530C0B5DC797C3* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_tF3843FC39D5C3B0CEA3C2A09563C6BE9D7327575* ____keys;
	ValueCollection_tE676A0B8EBB18ACFBE7F3E153BEC60CA0E3BE2D1* ____values;
	RuntimeObject* ____syncRoot;
};
struct Dictionary_2_tAC56BFFAB0D6C547AD119E1707252267F9C0C49A  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_tD168B9758081967AE421A2B6D72D8EBDC95FC1E0* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_tFB65BE5C0E6B6C8D1CB0CCA25F056AA72F66D37C* ____keys;
	ValueCollection_t850579E5C2FF909D1C3606EC46C87F0FADFEDB96* ____values;
	RuntimeObject* ____syncRoot;
};
struct Dictionary_2_tE5B96FEA65A0394692A66749C0DDE9956CF9EC15  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_t3A03E6878DE4EA58BAC9598CD15F49AD1988B351* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_t57775F7FF92A58C6D31372BA8764C2261A0E892A* ____keys;
	ValueCollection_tBFC0E43BC45FCEFBDF4400423106E4A62E2EAE97* ____values;
	RuntimeObject* ____syncRoot;
};
struct Dictionary_2_tE7C86B2C5A23A1F27C98C2B36D5E45FA457F6090  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_t8D700A36ADEAE6E64D092B1F2FF95391E5A03F6C* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_t91FB72DA59E2DD50460D6B13860A5A6ADF6C19FC* ____keys;
	ValueCollection_t5390AA0A336DFE6BC4AED8BB2868F9D6869D211B* ____values;
	RuntimeObject* ____syncRoot;
};
struct Dictionary_2_tACC278C341353EB0D3F5219D25804742C5DDC8A9  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_tAAF64BD0D9C29E733318312670F238A6137022E3* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_tABC0767E4C9CAC395DC791123D07816845B5F3FE* ____keys;
	ValueCollection_t6E5730979611F4C4C82E15329EA4E3C265DFED32* ____values;
	RuntimeObject* ____syncRoot;
};
struct EmptyArray_1_t2F24CF6B13CDDAA8B0F0764FD24AFE6483C69336  : public RuntimeObject
{
};
struct EqualityComparer_1_t2AAFF66C447B855AEB2EF13BDDE1F6301924188F  : public RuntimeObject
{
};
struct EqualityComparer_1_t6AF08CEAD675C05C1B701806606C7CB7CF53951F  : public RuntimeObject
{
};
struct EqualityComparer_1_t4515F567FF8CA58A31FECE4C986C6950AAF8A2CB  : public RuntimeObject
{
};
struct EqualityComparer_1_t63A37CBBA150A456A5494B585BAAD61AEC84FCC3  : public RuntimeObject
{
};
struct EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399  : public RuntimeObject
{
};
struct EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862  : public RuntimeObject
{
};
struct EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081  : public RuntimeObject
{
};
struct EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC  : public RuntimeObject
{
};
struct EqualityComparer_1_tC81AF0456B0ECB7415E30894699AAB099256D323  : public RuntimeObject
{
};
struct KeyCollection_tB3FBC73DC16C3B6B2A8597B904BE6599EB6C5227  : public RuntimeObject
{
	Dictionary_2_t232323BDF7857D243A4CCA18ADCF59272D0E4C23* ____dictionary;
};
struct KeyCollection_tF3843FC39D5C3B0CEA3C2A09563C6BE9D7327575  : public RuntimeObject
{
	Dictionary_2_t6EE05E1DBF257B416E0A3B6FE8BF1C1F55C8C13B* ____dictionary;
};
struct KeyCollection_tFB65BE5C0E6B6C8D1CB0CCA25F056AA72F66D37C  : public RuntimeObject
{
	Dictionary_2_tAC56BFFAB0D6C547AD119E1707252267F9C0C49A* ____dictionary;
};
struct KeyCollection_t57775F7FF92A58C6D31372BA8764C2261A0E892A  : public RuntimeObject
{
	Dictionary_2_tE5B96FEA65A0394692A66749C0DDE9956CF9EC15* ____dictionary;
};
struct KeyCollection_t91FB72DA59E2DD50460D6B13860A5A6ADF6C19FC  : public RuntimeObject
{
	Dictionary_2_tE7C86B2C5A23A1F27C98C2B36D5E45FA457F6090* ____dictionary;
};
struct KeyCollection_tABC0767E4C9CAC395DC791123D07816845B5F3FE  : public RuntimeObject
{
	Dictionary_2_tACC278C341353EB0D3F5219D25804742C5DDC8A9* ____dictionary;
};
struct ValueCollection_t6C92C52854F574A9EE80E18C51297F5BB4B1C4C3  : public RuntimeObject
{
	Dictionary_2_t232323BDF7857D243A4CCA18ADCF59272D0E4C23* ____dictionary;
};
struct ValueCollection_tE676A0B8EBB18ACFBE7F3E153BEC60CA0E3BE2D1  : public RuntimeObject
{
	Dictionary_2_t6EE05E1DBF257B416E0A3B6FE8BF1C1F55C8C13B* ____dictionary;
};
struct ValueCollection_t850579E5C2FF909D1C3606EC46C87F0FADFEDB96  : public RuntimeObject
{
	Dictionary_2_tAC56BFFAB0D6C547AD119E1707252267F9C0C49A* ____dictionary;
};
struct ValueCollection_tBFC0E43BC45FCEFBDF4400423106E4A62E2EAE97  : public RuntimeObject
{
	Dictionary_2_tE5B96FEA65A0394692A66749C0DDE9956CF9EC15* ____dictionary;
};
struct ValueCollection_t5390AA0A336DFE6BC4AED8BB2868F9D6869D211B  : public RuntimeObject
{
	Dictionary_2_tE7C86B2C5A23A1F27C98C2B36D5E45FA457F6090* ____dictionary;
};
struct ValueCollection_t6E5730979611F4C4C82E15329EA4E3C265DFED32  : public RuntimeObject
{
	Dictionary_2_tACC278C341353EB0D3F5219D25804742C5DDC8A9* ____dictionary;
};
struct GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58  : public RuntimeObject
{
};
struct MemberInfo_t  : public RuntimeObject
{
};
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37  : public RuntimeObject
{
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___m_members;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_data;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___m_types;
	Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* ___m_nameToIndex;
	int32_t ___m_currMember;
	RuntimeObject* ___m_converter;
	String_t* ___m_fullTypeName;
	String_t* ___m_assemName;
	Type_t* ___objectType;
	bool ___isFullTypeNameSetExplicit;
	bool ___isAssemblyNameSetExplicit;
	bool ___requireSameTokenInPartialTrust;
};
struct String_t  : public RuntimeObject
{
	int32_t ____stringLength;
	Il2CppChar ____firstChar;
};
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572  : public RuntimeObject
{
	int32_t ___m_taskId;
	Delegate_t* ___m_action;
	RuntimeObject* ___m_stateObject;
	TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* ___m_taskScheduler;
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_parent;
	int32_t ___m_stateFlags;
	RuntimeObject* ___m_continuationObject;
	ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540* ___m_contingentProperties;
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};
struct ConfiguredTaskAwaiter_tADFEF9AE6CB4E22E17B1DFA386EE3D86DB8955E4 
{
	Task_1_t824317F4B958F7512E8F7300511752937A6C6043* ___m_task;
	bool ___m_continueOnCapturedContext;
};
struct ConfiguredTaskAwaiter_t8FC486401D1951F2426478F2050EE290197B6E80 
{
	Task_1_t4C228DE57804012969575431CFF12D57C875552D* ___m_task;
	bool ___m_continueOnCapturedContext;
};
struct ConfiguredTaskAwaiter_t10F0057B7F31913C37CBB3E2900A547A6C29CD6A 
{
	Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17* ___m_task;
	bool ___m_continueOnCapturedContext;
};
struct ConfiguredTaskAwaiter_tB493FE87234355650C78E0470CA13DDB7723BC9E 
{
	Task_1_tB348EA1B62802484AB33A91D4404C52DCF7BDB18* ___m_task;
	bool ___m_continueOnCapturedContext;
};
struct ConfiguredTaskAwaiter_tB2708B017EE82067B2492CD61623784137A1AE0A 
{
	Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* ___m_task;
	bool ___m_continueOnCapturedContext;
};
struct KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 
{
	Il2CppSharedGenericObject* ___key;
	Il2CppSharedGenericObject* ___value;
};
typedef Il2CppFullySharedGenericStruct KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669;
struct Task_1_t824317F4B958F7512E8F7300511752937A6C6043  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	bool ___m_result;
};
struct Task_1_t4C228DE57804012969575431CFF12D57C875552D  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	int32_t ___m_result;
};
struct Task_1_tB348EA1B62802484AB33A91D4404C52DCF7BDB18  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	Il2CppSharedGenericObject* ___m_result;
};
struct Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9 : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572 {};
struct ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8 
{
	uint32_t ___Item1;
	uint32_t ___Item2;
};
struct ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A 
{
	Il2CppSharedGenericObject* ___Item1;
	Il2CppSharedGenericObject* ___Item2;
};
struct ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A 
{
	Il2CppSharedGenericObject* ___Item1;
	int32_t ___Item2;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB 
{
	RuntimeObject* ____key;
	RuntimeObject* ____value;
};
struct DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_marshaled_pinvoke
{
	Il2CppIUnknown* ____key;
	Il2CppIUnknown* ____value;
};
struct DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_marshaled_com
{
	Il2CppIUnknown* ____key;
	Il2CppIUnknown* ____value;
};
struct EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 
{
	union
	{
		struct
		{
			uint64_t ___m_rawData;
		};
		uint8_t EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8__padding[8];
	};
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};
struct Ephemeron_t74F279F5E7CF4A0CFC21C822431DD840572C6DA2 
{
	RuntimeObject* ___key;
	RuntimeObject* ___value;
};
struct Ephemeron_t74F279F5E7CF4A0CFC21C822431DD840572C6DA2_marshaled_pinvoke
{
	Il2CppIUnknown* ___key;
	Il2CppIUnknown* ___value;
};
struct Ephemeron_t74F279F5E7CF4A0CFC21C822431DD840572C6DA2_marshaled_com
{
	Il2CppIUnknown* ___key;
	Il2CppIUnknown* ___value;
};
struct Guid_t 
{
	int32_t ____a;
	int16_t ____b;
	int16_t ____c;
	uint8_t ____d;
	uint8_t ____e;
	uint8_t ____f;
	uint8_t ____g;
	uint8_t ____h;
	uint8_t ____i;
	uint8_t ____j;
	uint8_t ____k;
};
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	int32_t ___m_value;
};
struct IntPtr_t 
{
	void* ___m_value;
};
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	uint32_t ___m_value;
};
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
struct VoidTaskResult_t73B628B764C6668DAAAE2D37BD6FC07BCA27A5AC 
{
	union
	{
		struct
		{
		};
		uint8_t VoidTaskResult_t73B628B764C6668DAAAE2D37BD6FC07BCA27A5AC__padding[1];
	};
};
struct FontAssetRef_t7B8E634754BC5683F1E6601D7CD0061285A28FF3 
{
	int32_t ___nameHashCode;
	int32_t ___familyNameHashCode;
	int32_t ___styleNameHashCode;
	int64_t ___familyNameAndStyleHashCode;
	FontAsset_t61A6446D934E582651044E33D250EA8D306AB958* ___fontAsset;
};
struct FontAssetRef_t7B8E634754BC5683F1E6601D7CD0061285A28FF3_marshaled_pinvoke
{
	int32_t ___nameHashCode;
	int32_t ___familyNameHashCode;
	int32_t ___styleNameHashCode;
	int64_t ___familyNameAndStyleHashCode;
	FontAsset_t61A6446D934E582651044E33D250EA8D306AB958* ___fontAsset;
};
struct FontAssetRef_t7B8E634754BC5683F1E6601D7CD0061285A28FF3_marshaled_com
{
	int32_t ___nameHashCode;
	int32_t ___familyNameHashCode;
	int32_t ___styleNameHashCode;
	int64_t ___familyNameAndStyleHashCode;
	FontAsset_t61A6446D934E582651044E33D250EA8D306AB958* ___fontAsset;
};
struct ConfiguredTaskAwaitable_1_t8CD88E253ADEFD17912937E545828FCB7A2F079C 
{
	ConfiguredTaskAwaiter_tADFEF9AE6CB4E22E17B1DFA386EE3D86DB8955E4 ___m_configuredTaskAwaiter;
};
struct ConfiguredTaskAwaitable_1_t5186C81524388C1718E9AC37792D8771A443417A 
{
	ConfiguredTaskAwaiter_t8FC486401D1951F2426478F2050EE290197B6E80 ___m_configuredTaskAwaiter;
};
struct ConfiguredTaskAwaitable_1_tE56E5FFFF24684ECCB77BA1DC390B2A255841BBF 
{
	ConfiguredTaskAwaiter_t10F0057B7F31913C37CBB3E2900A547A6C29CD6A ___m_configuredTaskAwaiter;
};
struct ConfiguredTaskAwaitable_1_t8049DBD77B6FE4C36E900554327F7CBFBFB4E7A2 
{
	ConfiguredTaskAwaiter_tB493FE87234355650C78E0470CA13DDB7723BC9E ___m_configuredTaskAwaiter;
};
struct ConfiguredTaskAwaitable_1_t7FFB03EADF9A67E9EE2A5DECE3FB4353344FE922 
{
	ConfiguredTaskAwaiter_tB2708B017EE82067B2492CD61623784137A1AE0A ___m_configuredTaskAwaiter;
};
struct Entry_tF030DFA43CB99B28608F2EE73FCD28E7DE2F193D 
{
	int32_t ___hashCode;
	int32_t ___next;
	ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8 ___key;
	uint32_t ___value;
};
struct Entry_tE1E58729B91F813087891EA78F6ED04BC6F84B14 
{
	int32_t ___hashCode;
	int32_t ___next;
	ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A ___key;
	Il2CppSharedGenericObject* ___value;
};
struct Entry_t833BE0585D8B6A240162BBCD9DE7A05889C81254 
{
	int32_t ___hashCode;
	int32_t ___next;
	ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A ___key;
	Il2CppSharedGenericObject* ___value;
};
struct Entry_tEC145FCBBA153DCB0712DA30A9C199492E165471 
{
	int32_t ___hashCode;
	int32_t ___next;
	EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___key;
	Il2CppSharedGenericObject* ___value;
};
struct Entry_t75CD478BC9A5CC3855BC163C86C3ABA9C5B86E60 
{
	int32_t ___hashCode;
	int32_t ___next;
	EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___key;
	FontAssetRef_t7B8E634754BC5683F1E6601D7CD0061285A28FF3 ___value;
};
struct Entry_t385D55B7BB5A3AD762B8087CBDA8389D3818AF28 
{
	int32_t ___hashCode;
	int32_t ___next;
	Guid_t ___key;
	Il2CppSharedGenericObject* ___value;
};
struct Enumerator_t7F5D6C6AE7869482698189D9AB03383A976081DF  : public RuntimeObject
{
	ConditionalWeakTable_2_tDA4DD9BAFAF3114A73F0B4D6AA3049208A3B288B* ____table;
	int32_t ____currentIndex;
	KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 ____current;
};
struct KeyValuePair_2_t367B869B5B9E3AC484B7F3A6A22B30D27181B421 
{
	ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8 ___key;
	uint32_t ___value;
};
struct KeyValuePair_2_tA18DA0C0E7B0709B9741404F85570AF6334E7295 
{
	ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A ___key;
	Il2CppSharedGenericObject* ___value;
};
struct KeyValuePair_2_t64E764570967C9CF8DB9472130C0647F11D963A2 
{
	ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A ___key;
	Il2CppSharedGenericObject* ___value;
};
struct KeyValuePair_2_tCD64FBFD0349B053A7915EB43CFE2E4C123110E3 
{
	EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___key;
	Il2CppSharedGenericObject* ___value;
};
struct KeyValuePair_2_t0BE50338B196BFD79E02288350CE100D1C15D165 
{
	EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___key;
	FontAssetRef_t7B8E634754BC5683F1E6601D7CD0061285A28FF3 ___value;
};
struct KeyValuePair_2_t33B859F0514253F5DB6552A6B2C5730871612D1B 
{
	Guid_t ___key;
	Il2CppSharedGenericObject* ___value;
};
struct Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	VoidTaskResult_t73B628B764C6668DAAAE2D37BD6FC07BCA27A5AC ___m_result;
};
struct Delegate_t  : public RuntimeObject
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	RuntimeObject* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	bool ___method_is_virtual;
};
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	Il2CppIUnknown* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	int32_t ___method_is_virtual;
};
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	Il2CppIUnknown* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	int32_t ___method_is_virtual;
};
struct Exception_t  : public RuntimeObject
{
	String_t* ____className;
	String_t* ____message;
	RuntimeObject* ____data;
	Exception_t* ____innerException;
	String_t* ____helpURL;
	RuntimeObject* ____stackTrace;
	String_t* ____stackTraceString;
	String_t* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	RuntimeObject* ____dynamicMethods;
	int32_t ____HResult;
	String_t* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_pinvoke
{
	char* ____className;
	char* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_pinvoke* ____innerException;
	char* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	char* ____stackTraceString;
	char* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	char* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className;
	Il2CppChar* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_com* ____innerException;
	Il2CppChar* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	Il2CppChar* ____stackTraceString;
	Il2CppChar* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	Il2CppChar* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct ExceptionArgument_t60E7F8D9DE5362CBE9365893983C30302D83B778 
{
	int32_t ___value__;
};
struct ExceptionResource_t609A85E253A4E615583553D91D839E2E79FDFBD9 
{
	int32_t ___value__;
};
struct InsertionBehavior_tAD0393881947C559238D7041A36917BEE6E2C7B1 
{
	uint8_t ___value__;
};
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	intptr_t ___value;
};
struct StreamingContextStates_t5EE358E619B251608A9327618C7BFE8638FC33C1 
{
	int32_t ___value__;
};
struct ProfilerMarker_t8B7F9848320B93F87A7944B157255D5F9B576F2D 
{
	intptr_t ___ptr;
};
struct DelegateWithContext_1_tB8D0AD031518ADF1F51C1EC7F3118EDC45A5A126  : public RuntimeObject
{
	intptr_t ___U3CNativeInvocationContextU3Ek__BackingField;
	Il2CppSharedGenericObject* ___U3CNativeDelegateU3Ek__BackingField;
	ProfilerMarker_t8B7F9848320B93F87A7944B157255D5F9B576F2D ___U3CProfilerMarkerU3Ek__BackingField;
};
struct DelegateWithContext_1_tF58DA06EFEAFE5BF7A86055C6EE414BBC6295874 : public RuntimeObject {};
struct Enumerator_tA1D674047414071FA450BD89252F77B3361FE9BF 
{
	Dictionary_2_t232323BDF7857D243A4CCA18ADCF59272D0E4C23* ____dictionary;
	int32_t ____version;
	int32_t ____index;
	KeyValuePair_2_t367B869B5B9E3AC484B7F3A6A22B30D27181B421 ____current;
	int32_t ____getEnumeratorRetType;
};
struct Enumerator_t2192A20535292BE4B74B395AB95FBE0E90FF51DF 
{
	Dictionary_2_t6EE05E1DBF257B416E0A3B6FE8BF1C1F55C8C13B* ____dictionary;
	int32_t ____version;
	int32_t ____index;
	KeyValuePair_2_tA18DA0C0E7B0709B9741404F85570AF6334E7295 ____current;
	int32_t ____getEnumeratorRetType;
};
struct Enumerator_t3C7F7AA223D7FD8BC46DAE355A8719EAB17A9EDF 
{
	Dictionary_2_tAC56BFFAB0D6C547AD119E1707252267F9C0C49A* ____dictionary;
	int32_t ____version;
	int32_t ____index;
	KeyValuePair_2_t64E764570967C9CF8DB9472130C0647F11D963A2 ____current;
	int32_t ____getEnumeratorRetType;
};
struct Enumerator_t4D854DB287531AA401450973A1FE347EA5E3D673 
{
	Dictionary_2_tE5B96FEA65A0394692A66749C0DDE9956CF9EC15* ____dictionary;
	int32_t ____version;
	int32_t ____index;
	KeyValuePair_2_tCD64FBFD0349B053A7915EB43CFE2E4C123110E3 ____current;
	int32_t ____getEnumeratorRetType;
};
struct Enumerator_t8527DBFE64E77B68270A483C17805985F00CE92F 
{
	Dictionary_2_tE7C86B2C5A23A1F27C98C2B36D5E45FA457F6090* ____dictionary;
	int32_t ____version;
	int32_t ____index;
	KeyValuePair_2_t0BE50338B196BFD79E02288350CE100D1C15D165 ____current;
	int32_t ____getEnumeratorRetType;
};
struct Enumerator_t664339BF0446B4E80F1055BB5C01417CFF320E2A 
{
	Dictionary_2_tACC278C341353EB0D3F5219D25804742C5DDC8A9* ____dictionary;
	int32_t ____version;
	int32_t ____index;
	KeyValuePair_2_t33B859F0514253F5DB6552A6B2C5730871612D1B ____current;
	int32_t ____getEnumeratorRetType;
};
struct MulticastDelegate_t  : public Delegate_t
{
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates;
};
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates;
};
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates;
};
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 
{
	RuntimeObject* ___m_additionalContext;
	int32_t ___m_state;
};
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677_marshaled_pinvoke
{
	Il2CppIUnknown* ___m_additionalContext;
	int32_t ___m_state;
};
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677_marshaled_com
{
	Il2CppIUnknown* ___m_additionalContext;
	int32_t ___m_state;
};
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};
struct Type_t  : public MemberInfo_t
{
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl;
};
struct Converter_2_t492BE36BDB9ACE2595DC3BFC0172171D1510E4CB  : public MulticastDelegate_t
{
};
struct CreateValueCallback_t8463FCCADB8B16880DB710DACCEF3B1531B1649B  : public MulticastDelegate_t
{
};
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07  : public MulticastDelegate_t
{
};
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	String_t* ____paramName;
};
struct ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
};
struct ConcurrentDictionary_2_t44EF43F797787D2D41D8F1516BA77C1C20CE28B6_StaticFields
{
	bool ___s_isValueWriteAtomic;
};
struct ConcurrentDictionary_2_t6DF554984593E2F9932FAFBF9E1AFD30D1ED0812_StaticFields
{
	bool ___s_isValueWriteAtomic;
};
struct EmptyArray_1_t2F24CF6B13CDDAA8B0F0764FD24AFE6483C69336_StaticFields
{
	KeyValuePair_2U5BU5D_t78D9368B607748564E2110C38FC6FCC5150E8DDA* ___Value;
};
struct EqualityComparer_1_t2AAFF66C447B855AEB2EF13BDDE1F6301924188F_StaticFields
{
	EqualityComparer_1_t2AAFF66C447B855AEB2EF13BDDE1F6301924188F* ___defaultComparer;
};
struct EqualityComparer_1_t6AF08CEAD675C05C1B701806606C7CB7CF53951F_StaticFields
{
	EqualityComparer_1_t6AF08CEAD675C05C1B701806606C7CB7CF53951F* ___defaultComparer;
};
struct EqualityComparer_1_t4515F567FF8CA58A31FECE4C986C6950AAF8A2CB_StaticFields
{
	EqualityComparer_1_t4515F567FF8CA58A31FECE4C986C6950AAF8A2CB* ___defaultComparer;
};
struct EqualityComparer_1_t63A37CBBA150A456A5494B585BAAD61AEC84FCC3_StaticFields
{
	EqualityComparer_1_t63A37CBBA150A456A5494B585BAAD61AEC84FCC3* ___defaultComparer;
};
struct EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399_StaticFields
{
	EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* ___defaultComparer;
};
struct EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862_StaticFields
{
	EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* ___defaultComparer;
};
struct EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081_StaticFields
{
	EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* ___defaultComparer;
};
struct EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC_StaticFields
{
	EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* ___defaultComparer;
};
struct EqualityComparer_1_tC81AF0456B0ECB7415E30894699AAB099256D323_StaticFields
{
	EqualityComparer_1_tC81AF0456B0ECB7415E30894699AAB099256D323* ___defaultComparer;
};
struct GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_StaticFields
{
	RuntimeObject* ___EPHEMERON_TOMBSTONE;
};
struct String_t_StaticFields
{
	String_t* ___Empty;
};
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticFields
{
	int32_t ___s_taskIdCounter;
	RuntimeObject* ___s_taskCompletionSentinel;
	bool ___s_asyncDebuggingEnabled;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___s_taskCancelCallback;
	Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1* ___s_createContingentProperties;
	TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* ___U3CFactoryU3Ek__BackingField;
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___U3CCompletedTaskU3Ek__BackingField;
	Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED* ___s_IsExceptionObservedByParentPredicate;
	ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007* ___s_ecCallback;
	Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* ___s_IsTaskContinuationNullPredicate;
	Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55* ___s_currentActiveTasks;
	RuntimeObject* ___s_activeTasksLock;
};
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_ThreadStaticFields
{
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___t_currentTask;
	StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352* ___t_stackGuard;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString;
	String_t* ___FalseString;
};
struct Guid_t_StaticFields
{
	Guid_t ___Empty;
};
struct IntPtr_t_StaticFields
{
	intptr_t ___Zero;
};
struct Type_t_StaticFields
{
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder;
	Il2CppChar ___Delimiter;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes;
	RuntimeObject* ___Missing;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
struct EphemeronU5BU5D_t4F80428A1142C3102C946127F8190063001742E8  : public RuntimeArray
{
	ALIGN_FIELD (8) Ephemeron_t74F279F5E7CF4A0CFC21C822431DD840572C6DA2 m_Items[1];

	inline Ephemeron_t74F279F5E7CF4A0CFC21C822431DD840572C6DA2 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Ephemeron_t74F279F5E7CF4A0CFC21C822431DD840572C6DA2* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Ephemeron_t74F279F5E7CF4A0CFC21C822431DD840572C6DA2 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value), (void*)NULL);
		#endif
	}
	inline Ephemeron_t74F279F5E7CF4A0CFC21C822431DD840572C6DA2 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Ephemeron_t74F279F5E7CF4A0CFC21C822431DD840572C6DA2* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Ephemeron_t74F279F5E7CF4A0CFC21C822431DD840572C6DA2 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value), (void*)NULL);
		#endif
	}
};
struct KeyValuePair_2U5BU5D_t78D9368B607748564E2110C38FC6FCC5150E8DDA  : public RuntimeArray
{
	ALIGN_FIELD (8) KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 m_Items[1];

	inline KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value), (void*)NULL);
		#endif
	}
	inline KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value), (void*)NULL);
		#endif
	}
};
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
struct EntryU5BU5D_tDBAAD2500E17E1BA8285BEE36BF88226E24F199C  : public RuntimeArray
{
	ALIGN_FIELD (8) Entry_tF030DFA43CB99B28608F2EE73FCD28E7DE2F193D m_Items[1];

	inline Entry_tF030DFA43CB99B28608F2EE73FCD28E7DE2F193D GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Entry_tF030DFA43CB99B28608F2EE73FCD28E7DE2F193D* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Entry_tF030DFA43CB99B28608F2EE73FCD28E7DE2F193D value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Entry_tF030DFA43CB99B28608F2EE73FCD28E7DE2F193D GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Entry_tF030DFA43CB99B28608F2EE73FCD28E7DE2F193D* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Entry_tF030DFA43CB99B28608F2EE73FCD28E7DE2F193D value)
	{
		m_Items[index] = value;
	}
};
struct KeyValuePair_2U5BU5D_tE76A126FCE108E33BC3A97C53D003B3D399BFD33  : public RuntimeArray
{
	ALIGN_FIELD (8) KeyValuePair_2_t367B869B5B9E3AC484B7F3A6A22B30D27181B421 m_Items[1];

	inline KeyValuePair_2_t367B869B5B9E3AC484B7F3A6A22B30D27181B421 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_t367B869B5B9E3AC484B7F3A6A22B30D27181B421* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_t367B869B5B9E3AC484B7F3A6A22B30D27181B421 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline KeyValuePair_2_t367B869B5B9E3AC484B7F3A6A22B30D27181B421 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_t367B869B5B9E3AC484B7F3A6A22B30D27181B421* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_t367B869B5B9E3AC484B7F3A6A22B30D27181B421 value)
	{
		m_Items[index] = value;
	}
};
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
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->____key), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->____value), (void*)NULL);
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
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->____key), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->____value), (void*)NULL);
		#endif
	}
};
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
struct EntryU5BU5D_t2CF41CF5E2621F7EFD1220745F530C0B5DC797C3  : public RuntimeArray
{
	ALIGN_FIELD (8) Entry_tE1E58729B91F813087891EA78F6ED04BC6F84B14 m_Items[1];

	inline Entry_tE1E58729B91F813087891EA78F6ED04BC6F84B14 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Entry_tE1E58729B91F813087891EA78F6ED04BC6F84B14* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Entry_tE1E58729B91F813087891EA78F6ED04BC6F84B14 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___key))->___Item1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___key))->___Item2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value), (void*)NULL);
		#endif
	}
	inline Entry_tE1E58729B91F813087891EA78F6ED04BC6F84B14 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Entry_tE1E58729B91F813087891EA78F6ED04BC6F84B14* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Entry_tE1E58729B91F813087891EA78F6ED04BC6F84B14 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___key))->___Item1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___key))->___Item2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value), (void*)NULL);
		#endif
	}
};
struct KeyValuePair_2U5BU5D_t4208D2E1B4635D7EA4C927172F54BAD9776A760F  : public RuntimeArray
{
	ALIGN_FIELD (8) KeyValuePair_2_tA18DA0C0E7B0709B9741404F85570AF6334E7295 m_Items[1];

	inline KeyValuePair_2_tA18DA0C0E7B0709B9741404F85570AF6334E7295 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_tA18DA0C0E7B0709B9741404F85570AF6334E7295* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_tA18DA0C0E7B0709B9741404F85570AF6334E7295 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___key))->___Item1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___key))->___Item2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value), (void*)NULL);
		#endif
	}
	inline KeyValuePair_2_tA18DA0C0E7B0709B9741404F85570AF6334E7295 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_tA18DA0C0E7B0709B9741404F85570AF6334E7295* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_tA18DA0C0E7B0709B9741404F85570AF6334E7295 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___key))->___Item1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___key))->___Item2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value), (void*)NULL);
		#endif
	}
};
struct EntryU5BU5D_tD168B9758081967AE421A2B6D72D8EBDC95FC1E0  : public RuntimeArray
{
	ALIGN_FIELD (8) Entry_t833BE0585D8B6A240162BBCD9DE7A05889C81254 m_Items[1];

	inline Entry_t833BE0585D8B6A240162BBCD9DE7A05889C81254 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Entry_t833BE0585D8B6A240162BBCD9DE7A05889C81254* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Entry_t833BE0585D8B6A240162BBCD9DE7A05889C81254 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___key))->___Item1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value), (void*)NULL);
		#endif
	}
	inline Entry_t833BE0585D8B6A240162BBCD9DE7A05889C81254 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Entry_t833BE0585D8B6A240162BBCD9DE7A05889C81254* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Entry_t833BE0585D8B6A240162BBCD9DE7A05889C81254 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___key))->___Item1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value), (void*)NULL);
		#endif
	}
};
struct KeyValuePair_2U5BU5D_t9F59B28C21BBB1C41719D5BDFC79702EFA03FC3A  : public RuntimeArray
{
	ALIGN_FIELD (8) KeyValuePair_2_t64E764570967C9CF8DB9472130C0647F11D963A2 m_Items[1];

	inline KeyValuePair_2_t64E764570967C9CF8DB9472130C0647F11D963A2 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_t64E764570967C9CF8DB9472130C0647F11D963A2* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_t64E764570967C9CF8DB9472130C0647F11D963A2 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___key))->___Item1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value), (void*)NULL);
		#endif
	}
	inline KeyValuePair_2_t64E764570967C9CF8DB9472130C0647F11D963A2 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_t64E764570967C9CF8DB9472130C0647F11D963A2* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_t64E764570967C9CF8DB9472130C0647F11D963A2 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___key))->___Item1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value), (void*)NULL);
		#endif
	}
};
struct EntryU5BU5D_t3A03E6878DE4EA58BAC9598CD15F49AD1988B351  : public RuntimeArray
{
	ALIGN_FIELD (8) Entry_tEC145FCBBA153DCB0712DA30A9C199492E165471 m_Items[1];

	inline Entry_tEC145FCBBA153DCB0712DA30A9C199492E165471 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Entry_tEC145FCBBA153DCB0712DA30A9C199492E165471* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Entry_tEC145FCBBA153DCB0712DA30A9C199492E165471 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value), (void*)NULL);
	}
	inline Entry_tEC145FCBBA153DCB0712DA30A9C199492E165471 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Entry_tEC145FCBBA153DCB0712DA30A9C199492E165471* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Entry_tEC145FCBBA153DCB0712DA30A9C199492E165471 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value), (void*)NULL);
	}
};
struct KeyValuePair_2U5BU5D_t452E832017CA977A0436EAE3C0B660FEFAA9E48C  : public RuntimeArray
{
	ALIGN_FIELD (8) KeyValuePair_2_tCD64FBFD0349B053A7915EB43CFE2E4C123110E3 m_Items[1];

	inline KeyValuePair_2_tCD64FBFD0349B053A7915EB43CFE2E4C123110E3 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_tCD64FBFD0349B053A7915EB43CFE2E4C123110E3* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_tCD64FBFD0349B053A7915EB43CFE2E4C123110E3 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value), (void*)NULL);
	}
	inline KeyValuePair_2_tCD64FBFD0349B053A7915EB43CFE2E4C123110E3 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_tCD64FBFD0349B053A7915EB43CFE2E4C123110E3* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_tCD64FBFD0349B053A7915EB43CFE2E4C123110E3 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value), (void*)NULL);
	}
};
struct EntryU5BU5D_t8D700A36ADEAE6E64D092B1F2FF95391E5A03F6C  : public RuntimeArray
{
	ALIGN_FIELD (8) Entry_t75CD478BC9A5CC3855BC163C86C3ABA9C5B86E60 m_Items[1];

	inline Entry_t75CD478BC9A5CC3855BC163C86C3ABA9C5B86E60 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Entry_t75CD478BC9A5CC3855BC163C86C3ABA9C5B86E60* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Entry_t75CD478BC9A5CC3855BC163C86C3ABA9C5B86E60 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value))->___fontAsset), (void*)NULL);
	}
	inline Entry_t75CD478BC9A5CC3855BC163C86C3ABA9C5B86E60 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Entry_t75CD478BC9A5CC3855BC163C86C3ABA9C5B86E60* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Entry_t75CD478BC9A5CC3855BC163C86C3ABA9C5B86E60 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value))->___fontAsset), (void*)NULL);
	}
};
struct KeyValuePair_2U5BU5D_t22BD4C2009997AFE758B947C2D08853C305EA502  : public RuntimeArray
{
	ALIGN_FIELD (8) KeyValuePair_2_t0BE50338B196BFD79E02288350CE100D1C15D165 m_Items[1];

	inline KeyValuePair_2_t0BE50338B196BFD79E02288350CE100D1C15D165 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_t0BE50338B196BFD79E02288350CE100D1C15D165* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_t0BE50338B196BFD79E02288350CE100D1C15D165 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value))->___fontAsset), (void*)NULL);
	}
	inline KeyValuePair_2_t0BE50338B196BFD79E02288350CE100D1C15D165 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_t0BE50338B196BFD79E02288350CE100D1C15D165* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_t0BE50338B196BFD79E02288350CE100D1C15D165 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value))->___fontAsset), (void*)NULL);
	}
};
struct EntryU5BU5D_tAAF64BD0D9C29E733318312670F238A6137022E3  : public RuntimeArray
{
	ALIGN_FIELD (8) Entry_t385D55B7BB5A3AD762B8087CBDA8389D3818AF28 m_Items[1];

	inline Entry_t385D55B7BB5A3AD762B8087CBDA8389D3818AF28 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Entry_t385D55B7BB5A3AD762B8087CBDA8389D3818AF28* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Entry_t385D55B7BB5A3AD762B8087CBDA8389D3818AF28 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value), (void*)NULL);
	}
	inline Entry_t385D55B7BB5A3AD762B8087CBDA8389D3818AF28 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Entry_t385D55B7BB5A3AD762B8087CBDA8389D3818AF28* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Entry_t385D55B7BB5A3AD762B8087CBDA8389D3818AF28 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value), (void*)NULL);
	}
};
struct KeyValuePair_2U5BU5D_t9DF131722D7F3B6C04EF603B3CF8C56E1AF7D856  : public RuntimeArray
{
	ALIGN_FIELD (8) KeyValuePair_2_t33B859F0514253F5DB6552A6B2C5730871612D1B m_Items[1];

	inline KeyValuePair_2_t33B859F0514253F5DB6552A6B2C5730871612D1B GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_t33B859F0514253F5DB6552A6B2C5730871612D1B* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_t33B859F0514253F5DB6552A6B2C5730871612D1B value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value), (void*)NULL);
	}
	inline KeyValuePair_2_t33B859F0514253F5DB6552A6B2C5730871612D1B GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_t33B859F0514253F5DB6552A6B2C5730871612D1B* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_t33B859F0514253F5DB6552A6B2C5730871612D1B value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value), (void*)NULL);
	}
};


IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConditionalWeakTable_2_RecomputeSize_mECDE2A17589E6F9500A83C0BD216672E9E829463_gshared (ConditionalWeakTable_2_tDA4DD9BAFAF3114A73F0B4D6AA3049208A3B288B* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConditionalWeakTable_2_RehashWithoutResize_m016B51E55C242F8FBCAF10DA8825E4B07B46FACC_gshared (ConditionalWeakTable_2_tDA4DD9BAFAF3114A73F0B4D6AA3049208A3B288B* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConditionalWeakTable_2_Rehash_mE974FC607D3B12E845F0E83D2BB55A7F1F3639F6_gshared (ConditionalWeakTable_2_tDA4DD9BAFAF3114A73F0B4D6AA3049208A3B288B* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConditionalWeakTable_2_TryGetValue_m90CA5ADAC109E3D265A2A6AD8B5165727D9605D2_gshared (ConditionalWeakTable_2_tDA4DD9BAFAF3114A73F0B4D6AA3049208A3B288B* __this, Il2CppSharedGenericObject* ___0_key, Il2CppSharedGenericObject** ___1_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* CreateValueCallback_Invoke_mCBFB50800547234672DBBA87011CD2B5BC503308_gshared_inline (CreateValueCallback_t8463FCCADB8B16880DB710DACCEF3B1531B1649B* __this, Il2CppSharedGenericObject* ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConditionalWeakTable_2_Add_m0E15783C5C4D648412273FE8259A7A644F5A2CD0_gshared (ConditionalWeakTable_2_tDA4DD9BAFAF3114A73F0B4D6AA3049208A3B288B* __this, Il2CppSharedGenericObject* ___0_key, Il2CppSharedGenericObject* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m030A122C25684BFEAB8B9214E9E281FF990638F2_gshared (Enumerator_t7F5D6C6AE7869482698189D9AB03383A976081DF* __this, ConditionalWeakTable_2_tDA4DD9BAFAF3114A73F0B4D6AA3049208A3B288B* ___0_table, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2U5BU5D_t78D9368B607748564E2110C38FC6FCC5150E8DDA* Array_Empty_TisKeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826_m5E4F0239414B89A37EAA5475EF0CAA31256A19AB_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConfiguredTaskAwaiter__ctor_m5B53A410AE8900B3D565ED7C7FE9DAB92B2ECEC9_fshared (ConfiguredTaskAwaiter_tB2708B017EE82067B2492CD61623784137A1AE0A* __this, Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* ___0_task, bool ___1_continueOnCapturedContext, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Task_1_get_ResultOnSuccess_m15F655DF9F8EE6F8388A9432454900F07EFC57BB_inline (Task_1_t824317F4B958F7512E8F7300511752937A6C6043* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Task_1_get_ResultOnSuccess_mF098AC108FFA2E0D992306C6D956BA37874FAC77_inline (Task_1_t4C228DE57804012969575431CFF12D57C875552D* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR VoidTaskResult_t73B628B764C6668DAAAE2D37BD6FC07BCA27A5AC Task_1_get_ResultOnSuccess_mF2B4314A2FC0448358439C96FC6217501A2ACFE0_inline (Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* Task_1_get_ResultOnSuccess_mBB7F2275D4EF61A83D08373AA0D41ACC31AF73BD_gshared_inline (Task_1_tB348EA1B62802484AB33A91D4404C52DCF7BDB18* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConfiguredTaskAwaiter_UnsafeOnCompleted_m2EFFC8EFEDD85479876580D8FDEF045B2DCA2D66_fshared (ConfiguredTaskAwaiter_tB2708B017EE82067B2492CD61623784137A1AE0A* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_continuation, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DelegateWithContext_1_Equals_mADB622927C9751B007215E254AF4B8F45A121989_gshared (DelegateWithContext_1_tB8D0AD031518ADF1F51C1EC7F3118EDC45A5A126* __this, DelegateWithContext_1_tB8D0AD031518ADF1F51C1EC7F3118EDC45A5A126* ___0_other, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t DelegateWithContext_1_get_NativeInvocationContext_mBAE60D72C4155A0AD8CDC5216950F127D2862BAC_gshared_inline (DelegateWithContext_1_tB8D0AD031518ADF1F51C1EC7F3118EDC45A5A126* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* EqualityComparer_1_get_Default_mB451453B7B5B4B570A9347E090AB0FAC75C0C628_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* DelegateWithContext_1_get_NativeDelegate_m1B8E1D02D8C9AB37531DE25E54560229D57A9F0C_gshared_inline (DelegateWithContext_1_tB8D0AD031518ADF1F51C1EC7F3118EDC45A5A126* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashCode_Combine_TisIntPtr_t_TisIl2CppSharedGenericObject_m0FE3DF8C5942D8532F80288C02A8FD80B7C6F1A1_gshared (intptr_t ___0_value1, Il2CppSharedGenericObject* ___1_value2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ConcurrentDictionary_2_GetEnumerator_m5E2C0EBDF59D498AB4D40133331641C23FB4B366_gshared (ConcurrentDictionary_2_t44EF43F797787D2D41D8F1516BA77C1C20CE28B6* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* KeyValuePair_2_get_Key_m652AB26F17E6ECED100EADCA06D2352D6612B42B_gshared_inline (KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* KeyValuePair_2_get_Value_mC4437F96887FBE0C954234394562430C0CE7747C_gshared_inline (KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB DictionaryEnumerator_get_Entry_mDB3A971D9A28F20B00A5510D9B2DECEB3B76DEE5_gshared (DictionaryEnumerator_tD2AAFB3F341BE39C70A71939CA10F9C44CDDB65B* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m773B36DFA7951E426E5AA449331ED5B9A7E054F1 (Dictionary_2_t232323BDF7857D243A4CCA18ADCF59272D0E4C23* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_mE32E52E3C488094E26407ED7E6B96C08DE449609 (Dictionary_2_t232323BDF7857D243A4CCA18ADCF59272D0E4C23* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t2AAFF66C447B855AEB2EF13BDDE1F6301924188F* EqualityComparer_1_get_Default_m0AD70A24662B87624F0C4A66B70581A7F28BE2CC_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mBB52B7106A5105311717525BCC8399C9FD1567A3 (Dictionary_2_t232323BDF7857D243A4CCA18ADCF59272D0E4C23* __this, RuntimeObject* ___0_dictionary, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m350F906A4FED4B04ABA55E83B4FD2EBE4CE3F244 (Dictionary_2_t232323BDF7857D243A4CCA18ADCF59272D0E4C23* __this, ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8 ___0_key, uint32_t ___1_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8 KeyValuePair_2_get_Key_m8C1C8921B31C68F85331E5AF3432D221789E3BF8_inline (KeyValuePair_2_t367B869B5B9E3AC484B7F3A6A22B30D27181B421* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t KeyValuePair_2_get_Value_mA6758BC25166F8DDB057093FDC0F13EFD4BAC6DB_inline (KeyValuePair_2_t367B869B5B9E3AC484B7F3A6A22B30D27181B421* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyCollection__ctor_m7AF8E4ED6C5228B083FFB423B7DC792CA7C5DD1F_fshared (KeyCollection_tB792ACBAE0B99278B0B7B0F7440B4788E98F0D55* __this, Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* ___0_dictionary, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueCollection__ctor_m382CBA779E83FEFFA62EDF7BF82EB0101BD7858E_fshared (ValueCollection_tC492596681BD51AB34FC76FA76C15C9B3FFB7B40* __this, Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* ___0_dictionary, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_m1BB6F05AA034CDC37E38968F65C1F9A031818101 (Dictionary_2_t232323BDF7857D243A4CCA18ADCF59272D0E4C23* __this, ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8 ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_m220ED7A977536DE48E02E89CC9802CE456A5E3C9 (Dictionary_2_t232323BDF7857D243A4CCA18ADCF59272D0E4C23* __this, ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8 ___0_key, uint32_t ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* EqualityComparer_1_get_Default_mF554877B669658FD6449F84AE369214855D0BC40_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m8B9C947B241C6DFD0F33A436E4BAD3E2BE02D7DF (Dictionary_2_t232323BDF7857D243A4CCA18ADCF59272D0E4C23* __this, ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8 ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_mBB454C6743410D3E06D44D494D4D6FF4CBBBDB1E_fshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_mB3FC4BB26A5A8582D4E0E91BE60ED3FFE95AEE2A (KeyValuePair_2_t367B869B5B9E3AC484B7F3A6A22B30D27181B421* __this, ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8 ___0_key, uint32_t ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_mC61F6FB7DB0671A83D237E3774728E980C4A34CF (Enumerator_tA1D674047414071FA450BD89252F77B3361FE9BF* __this, Dictionary_2_t232323BDF7857D243A4CCA18ADCF59272D0E4C23* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_m8379F15C7422541338906B2A9998722F4A34FE9B (Dictionary_2_t232323BDF7857D243A4CCA18ADCF59272D0E4C23* __this, KeyValuePair_2U5BU5D_tE76A126FCE108E33BC3A97C53D003B3D399BFD33* ___0_array, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_2_GetHashCode_mF3B537BA555CF519DF00D747C94A3706513C669C (ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_mD30BDC9FECDBF9E4E54027B0068D148B95032BCF (Dictionary_2_t232323BDF7857D243A4CCA18ADCF59272D0E4C23* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConditionalWeakTable_2_Remove_m035485E631710955A475F95DE3800BBD2EBD20B5_gshared (ConditionalWeakTable_2_tDA4DD9BAFAF3114A73F0B4D6AA3049208A3B288B* __this, Il2CppSharedGenericObject* ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_mE8C026A6ED87F950811CD09574A4643C2927C3AC (Dictionary_2_t232323BDF7857D243A4CCA18ADCF59272D0E4C23* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mD81B5632275C9C89651C1B357F26058E8E76A526 (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m2D58AB9D0EE1189C2642E8866CE5DBD92AADCAEF (Dictionary_2_t232323BDF7857D243A4CCA18ADCF59272D0E4C23* __this, ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8 ___0_key, uint32_t ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m86B8B16DB9C92FF405CB902F82146B9D136E9984_gshared (Dictionary_2_t6EE05E1DBF257B416E0A3B6FE8BF1C1F55C8C13B* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_m9694FF4B4E2C144DCEF2FCE1F3082855262A7256_gshared (Dictionary_2_t6EE05E1DBF257B416E0A3B6FE8BF1C1F55C8C13B* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t6AF08CEAD675C05C1B701806606C7CB7CF53951F* EqualityComparer_1_get_Default_m56D88D65184F0E2CB43D9A2853637D9E87D10FC5_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mE4B120CEAC8B3FB8164A6B8421DB9482654758F3_gshared (Dictionary_2_t6EE05E1DBF257B416E0A3B6FE8BF1C1F55C8C13B* __this, RuntimeObject* ___0_dictionary, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m76898227E21B42ADA9F5DB5A6366CE107CE1E940_gshared (Dictionary_2_t6EE05E1DBF257B416E0A3B6FE8BF1C1F55C8C13B* __this, ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A ___0_key, Il2CppSharedGenericObject* ___1_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A KeyValuePair_2_get_Key_mEFCCF9BC1F4022E15A29A44A49E8DE3FA5180978_gshared_inline (KeyValuePair_2_tA18DA0C0E7B0709B9741404F85570AF6334E7295* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* KeyValuePair_2_get_Value_m8A4C32B0E709D6A7629FA7869F673CC94F500282_gshared_inline (KeyValuePair_2_tA18DA0C0E7B0709B9741404F85570AF6334E7295* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_m5EE6BB86A74B61BA4F43F7FCD7A19396DDA1DEB6_gshared (Dictionary_2_t6EE05E1DBF257B416E0A3B6FE8BF1C1F55C8C13B* __this, ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_m80FCA7D16C6C7009BA59F2ABAA24CF6394A0F865_gshared (Dictionary_2_t6EE05E1DBF257B416E0A3B6FE8BF1C1F55C8C13B* __this, ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A ___0_key, Il2CppSharedGenericObject* ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m38590317DE74DBE8D92F2CBEF07EB2166FD77F8A_gshared (Dictionary_2_t6EE05E1DBF257B416E0A3B6FE8BF1C1F55C8C13B* __this, ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_m0D4121FAC5AC308F9F11677446270359EE7F187F_gshared (KeyValuePair_2_tA18DA0C0E7B0709B9741404F85570AF6334E7295* __this, ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A ___0_key, Il2CppSharedGenericObject* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m61E3631AF88B2F19F5C1DD6448CB0F8E7DD2118E_gshared (Enumerator_t2192A20535292BE4B74B395AB95FBE0E90FF51DF* __this, Dictionary_2_t6EE05E1DBF257B416E0A3B6FE8BF1C1F55C8C13B* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_mF0207C12B681D9CD010A20E3C7FEBDCE5EEC46EA_gshared (Dictionary_2_t6EE05E1DBF257B416E0A3B6FE8BF1C1F55C8C13B* __this, KeyValuePair_2U5BU5D_t4208D2E1B4635D7EA4C927172F54BAD9776A760F* ___0_array, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_2_GetHashCode_m99568F302DE6AD3E15E0EA2EC480BD67D049F1D7_gshared (ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_mECA349A5C568918987B1E5F01CF437B826B24473_gshared (Dictionary_2_t6EE05E1DBF257B416E0A3B6FE8BF1C1F55C8C13B* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m89E3D5532F34F27BEB5DF28BB40F3558ECDF3728_gshared (Dictionary_2_t6EE05E1DBF257B416E0A3B6FE8BF1C1F55C8C13B* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisIl2CppSharedGenericObject_mE7A1EEC53480BA1ED6C827938ADAF45B127DD054_gshared (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_mB372B26FF800DAB8A056AC36CEF56999C6B8C0B2_gshared (Dictionary_2_t6EE05E1DBF257B416E0A3B6FE8BF1C1F55C8C13B* __this, ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A ___0_key, Il2CppSharedGenericObject* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m18A30ACAED5ED63080749BA1C8B6DDAC6B36C3EE_gshared (Dictionary_2_tAC56BFFAB0D6C547AD119E1707252267F9C0C49A* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_mD6E490F5E2D02CB8B433925CF5DAE535CBA6F8CF_gshared (Dictionary_2_tAC56BFFAB0D6C547AD119E1707252267F9C0C49A* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t4515F567FF8CA58A31FECE4C986C6950AAF8A2CB* EqualityComparer_1_get_Default_mF252A6DD8B0E68A7EC7F6356C3007FBCDC35877D_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mAD75EF58F66B595F8D3901C3452232FC94062088_gshared (Dictionary_2_tAC56BFFAB0D6C547AD119E1707252267F9C0C49A* __this, RuntimeObject* ___0_dictionary, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_mB472F849E1EC334185C8660C50A557237F0BE164_gshared (Dictionary_2_tAC56BFFAB0D6C547AD119E1707252267F9C0C49A* __this, ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A ___0_key, Il2CppSharedGenericObject* ___1_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A KeyValuePair_2_get_Key_mD0027E57B606342804BAAEE3B37C9C7FC77D90E3_gshared_inline (KeyValuePair_2_t64E764570967C9CF8DB9472130C0647F11D963A2* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* KeyValuePair_2_get_Value_m1B98DA271855EDA63BE7803194E15F9A7CEA3D25_gshared_inline (KeyValuePair_2_t64E764570967C9CF8DB9472130C0647F11D963A2* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_mF40EED5EF900EB145AFD21B959058FC4F3CFD3C7_gshared (Dictionary_2_tAC56BFFAB0D6C547AD119E1707252267F9C0C49A* __this, ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_m215840BF1C032E1A9D5056DB815A0F7E761F38FC_gshared (Dictionary_2_tAC56BFFAB0D6C547AD119E1707252267F9C0C49A* __this, ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A ___0_key, Il2CppSharedGenericObject* ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m86A5B73912916A5825210A61600309B0CEBE7022_gshared (Dictionary_2_tAC56BFFAB0D6C547AD119E1707252267F9C0C49A* __this, ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_mD0CA78640E4E9AEDF3F7B13285742812AD9D3F93_gshared (KeyValuePair_2_t64E764570967C9CF8DB9472130C0647F11D963A2* __this, ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A ___0_key, Il2CppSharedGenericObject* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m0EF0E488E739D3719F9EB825293E138DA7DF2CA8_gshared (Enumerator_t3C7F7AA223D7FD8BC46DAE355A8719EAB17A9EDF* __this, Dictionary_2_tAC56BFFAB0D6C547AD119E1707252267F9C0C49A* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_mD9B70A6E4EDB4E0CAB6CD3A7C94AB74BEF08CF66_gshared (Dictionary_2_tAC56BFFAB0D6C547AD119E1707252267F9C0C49A* __this, KeyValuePair_2U5BU5D_t9F59B28C21BBB1C41719D5BDFC79702EFA03FC3A* ___0_array, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_2_GetHashCode_mF359FEBDF1FA01E57B2160C5F106BFC25DAC0404_gshared (ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m2B49E5B27DE63B7B42984CEC07EAE9D3119B80F7_gshared (Dictionary_2_tAC56BFFAB0D6C547AD119E1707252267F9C0C49A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m7D9EC0F043E0B9FAB07F7AE3EA84667BFA73B967_gshared (Dictionary_2_tAC56BFFAB0D6C547AD119E1707252267F9C0C49A* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m50080FF99F5F609F7C6D4A916D1A4264AB88BCC5_gshared (Dictionary_2_tAC56BFFAB0D6C547AD119E1707252267F9C0C49A* __this, ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A ___0_key, Il2CppSharedGenericObject* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mBDF56DD80C06454F5D7A4D76C4BE23376680FA51_gshared (Dictionary_2_tE5B96FEA65A0394692A66749C0DDE9956CF9EC15* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_mBBF032FDCE3C6D3156FD7E9C03D0FD46F673E1A5_gshared (Dictionary_2_tE5B96FEA65A0394692A66749C0DDE9956CF9EC15* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t63A37CBBA150A456A5494B585BAAD61AEC84FCC3* EqualityComparer_1_get_Default_m16781A8E4EDB2114168E318B51C5081028E57F3D_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m615E385F0112B9DEB74B1E828D662E1DE93519AD_gshared (Dictionary_2_tE5B96FEA65A0394692A66749C0DDE9956CF9EC15* __this, RuntimeObject* ___0_dictionary, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m659C15ADA813F04A8F4547C6AAF3CCD9E1252110_gshared (Dictionary_2_tE5B96FEA65A0394692A66749C0DDE9956CF9EC15* __this, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___0_key, Il2CppSharedGenericObject* ___1_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 KeyValuePair_2_get_Key_m90712219738452E82D01F79E5C5E2AFC458B7F42_gshared_inline (KeyValuePair_2_tCD64FBFD0349B053A7915EB43CFE2E4C123110E3* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* KeyValuePair_2_get_Value_m386D7A4C4EC42B076395DF4004EC546AFB963848_gshared_inline (KeyValuePair_2_tCD64FBFD0349B053A7915EB43CFE2E4C123110E3* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_m1657D17584CCFCD88AD7E5E31C519E86C659D03F_gshared (Dictionary_2_tE5B96FEA65A0394692A66749C0DDE9956CF9EC15* __this, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_m7801AB4073E7E59144E031D9980334873CE04671_gshared (Dictionary_2_tE5B96FEA65A0394692A66749C0DDE9956CF9EC15* __this, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___0_key, Il2CppSharedGenericObject* ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m648D00C8DA11B66465DDFB68AE55F0E8ABF5BF78_gshared (Dictionary_2_tE5B96FEA65A0394692A66749C0DDE9956CF9EC15* __this, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_mB6121DC610D466BC9BBA557711FBAB073406BF77_gshared (KeyValuePair_2_tCD64FBFD0349B053A7915EB43CFE2E4C123110E3* __this, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___0_key, Il2CppSharedGenericObject* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m6ED4CD5A4B2D5BC48CE5614042545BB304449C0A_gshared (Enumerator_t4D854DB287531AA401450973A1FE347EA5E3D673* __this, Dictionary_2_tE5B96FEA65A0394692A66749C0DDE9956CF9EC15* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_m95EC5C89E30BCBBA8B195DB471FA154BBCBCC4F6_gshared (Dictionary_2_tE5B96FEA65A0394692A66749C0DDE9956CF9EC15* __this, KeyValuePair_2U5BU5D_t452E832017CA977A0436EAE3C0B660FEFAA9E48C* ___0_array, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m538AB0187304CDDEDB4C0B2ECDCF6406622270AC_gshared (Dictionary_2_tE5B96FEA65A0394692A66749C0DDE9956CF9EC15* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m34F15117A77F5DC4A71367D3091ADB5A51649961_gshared (Dictionary_2_tE5B96FEA65A0394692A66749C0DDE9956CF9EC15* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m95FF2E2086B21F5DBD685F0D4DB10818308B2B4E_gshared (Dictionary_2_tE5B96FEA65A0394692A66749C0DDE9956CF9EC15* __this, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___0_key, Il2CppSharedGenericObject* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5BDC7511DA1B448A0EA8D564E296681CF318219E (Dictionary_2_tE7C86B2C5A23A1F27C98C2B36D5E45FA457F6090* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_m38FB2D8763ADDB1128BA8DB0BB9A2D576F7220E8 (Dictionary_2_tE7C86B2C5A23A1F27C98C2B36D5E45FA457F6090* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m4D1E39F61237886CB1FA5462B8CD4627FC822DC7 (Dictionary_2_tE7C86B2C5A23A1F27C98C2B36D5E45FA457F6090* __this, RuntimeObject* ___0_dictionary, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_mC8F79C526E4358DD840D85CB26C87DF16E570D42 (Dictionary_2_tE7C86B2C5A23A1F27C98C2B36D5E45FA457F6090* __this, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___0_key, FontAssetRef_t7B8E634754BC5683F1E6601D7CD0061285A28FF3 ___1_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 KeyValuePair_2_get_Key_m4D827FF66807261BDE920B3D6816EC37082073B3_inline (KeyValuePair_2_t0BE50338B196BFD79E02288350CE100D1C15D165* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FontAssetRef_t7B8E634754BC5683F1E6601D7CD0061285A28FF3 KeyValuePair_2_get_Value_mC82FE8FDC9CEC01214097444FE6D11C920B45461_inline (KeyValuePair_2_t0BE50338B196BFD79E02288350CE100D1C15D165* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_m95EFDF2600D3495DB59266D86D3B0B65020CBBE3 (Dictionary_2_tE7C86B2C5A23A1F27C98C2B36D5E45FA457F6090* __this, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_m7265AD1FB7FEE07B51E4A3D1783ABFBF9BDED62F (Dictionary_2_tE7C86B2C5A23A1F27C98C2B36D5E45FA457F6090* __this, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___0_key, FontAssetRef_t7B8E634754BC5683F1E6601D7CD0061285A28FF3 ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_tC81AF0456B0ECB7415E30894699AAB099256D323* EqualityComparer_1_get_Default_m4626BA1582304AE05985ABD8E116508974651F1E_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m54197D4C6A7E708E2AC7BC107AC24F565AD687DA (Dictionary_2_tE7C86B2C5A23A1F27C98C2B36D5E45FA457F6090* __this, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_m46844DA2290BECEBDC1CBAC6D64267E0E522303A (KeyValuePair_2_t0BE50338B196BFD79E02288350CE100D1C15D165* __this, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___0_key, FontAssetRef_t7B8E634754BC5683F1E6601D7CD0061285A28FF3 ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_mCFF2B87BFC039D1040F6DEFD6DEA90A9F51A68ED (Enumerator_t8527DBFE64E77B68270A483C17805985F00CE92F* __this, Dictionary_2_tE7C86B2C5A23A1F27C98C2B36D5E45FA457F6090* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_m7F65CF8F69C819C98EF07594FCF7A7C0DA75DD88 (Dictionary_2_tE7C86B2C5A23A1F27C98C2B36D5E45FA457F6090* __this, KeyValuePair_2U5BU5D_t22BD4C2009997AFE758B947C2D08853C305EA502* ___0_array, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m6AA6E88B86D690834CA19A571C9B165455AB42BE (Dictionary_2_tE7C86B2C5A23A1F27C98C2B36D5E45FA457F6090* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m394708D42EFC53386FC1C03666B137E135E5CFE7 (Dictionary_2_tE7C86B2C5A23A1F27C98C2B36D5E45FA457F6090* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisFontAssetRef_t7B8E634754BC5683F1E6601D7CD0061285A28FF3_m4AC822CD5CEAF4DA1B4035660F409BF9DD47B8BE (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m7ACB67C25D0FD50ABEC2277BFDBDED5D4E5DF8DC (Dictionary_2_tE7C86B2C5A23A1F27C98C2B36D5E45FA457F6090* __this, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___0_key, FontAssetRef_t7B8E634754BC5683F1E6601D7CD0061285A28FF3 ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mBE9E061358F2E6A91E9915CEFD2879A13D028050_gshared (Dictionary_2_tACC278C341353EB0D3F5219D25804742C5DDC8A9* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_m4B270DD202530A4EA0CB4EA2C5463BDFAC3289C5_gshared (Dictionary_2_tACC278C341353EB0D3F5219D25804742C5DDC8A9* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* EqualityComparer_1_get_Default_m5DCC393F5D59545D96AF9FF747F17C72EABB5D3B_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mFE8D024D7FA568AAB39FCF6DAF344F43EE1F4A43_gshared (Dictionary_2_tACC278C341353EB0D3F5219D25804742C5DDC8A9* __this, RuntimeObject* ___0_dictionary, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m12D2FABDF928772CD0B0C28D389D86E688E4F4CB_gshared (Dictionary_2_tACC278C341353EB0D3F5219D25804742C5DDC8A9* __this, Guid_t ___0_key, Il2CppSharedGenericObject* ___1_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Guid_t KeyValuePair_2_get_Key_m9203ED457651489192177BEC5EBDC178E0F26BC7_gshared_inline (KeyValuePair_2_t33B859F0514253F5DB6552A6B2C5730871612D1B* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* KeyValuePair_2_get_Value_m7FE87D795A3F1AD1B2E7FD1F96E5EF2A82785D93_gshared_inline (KeyValuePair_2_t33B859F0514253F5DB6552A6B2C5730871612D1B* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_m9F77A9A1350FCE78B97CC693F9F5444E8F3E645D_gshared (Dictionary_2_tACC278C341353EB0D3F5219D25804742C5DDC8A9* __this, Guid_t ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_m7AC671B331F6CD67E04ADA8CD9174C90AB75E18D_gshared (Dictionary_2_tACC278C341353EB0D3F5219D25804742C5DDC8A9* __this, Guid_t ___0_key, Il2CppSharedGenericObject* ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m2BD0E6825D66721033A14ABB6F727A8D1C8E0628_gshared (Dictionary_2_tACC278C341353EB0D3F5219D25804742C5DDC8A9* __this, Guid_t ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_mAADB86C56A6064707D6B414C20886941E280A8C8_gshared (KeyValuePair_2_t33B859F0514253F5DB6552A6B2C5730871612D1B* __this, Guid_t ___0_key, Il2CppSharedGenericObject* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m4414214982827D5E3EE390F4EC2D5458C617935D_gshared (Enumerator_t664339BF0446B4E80F1055BB5C01417CFF320E2A* __this, Dictionary_2_tACC278C341353EB0D3F5219D25804742C5DDC8A9* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_m99C002B6D6FCB05E047BE5D0AE65AC2F6E3ACD60_gshared (Dictionary_2_tACC278C341353EB0D3F5219D25804742C5DDC8A9* __this, KeyValuePair_2U5BU5D_t9DF131722D7F3B6C04EF603B3CF8C56E1AF7D856* ___0_array, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m4B80FC5F8BA8BAE74E0EAB023D785DFDA03A7F6A_gshared (Dictionary_2_tACC278C341353EB0D3F5219D25804742C5DDC8A9* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_mADA0004999558ADFD7386840DF35CAA07E676568_gshared (Dictionary_2_tACC278C341353EB0D3F5219D25804742C5DDC8A9* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m93D471C69BDF1EE119D28B69BFACB3B4C6E1B9C5_gshared (Dictionary_2_tACC278C341353EB0D3F5219D25804742C5DDC8A9* __this, Guid_t ___0_key, Il2CppSharedGenericObject* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* EqualityComparer_1_CreateComparer_m9D6667E20D4FCBB62E2725016FE2FC32442FE530_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t2AAFF66C447B855AEB2EF13BDDE1F6301924188F* EqualityComparer_1_CreateComparer_m3C58D527F5C7E5B0BA994273A014FA76550155ED (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* EqualityComparer_1_CreateComparer_m64D3D774E7DAF5FC0206DC26D9BA53BF70F1F93B (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t6AF08CEAD675C05C1B701806606C7CB7CF53951F* EqualityComparer_1_CreateComparer_mDDE2C10C48FE5C71172724020C00DA2C431DBF21_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t4515F567FF8CA58A31FECE4C986C6950AAF8A2CB* EqualityComparer_1_CreateComparer_mB0408C395999134DEDD71AB568D127159ACF5141_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t63A37CBBA150A456A5494B585BAAD61AEC84FCC3* EqualityComparer_1_CreateComparer_m5C45453CBD8B5F1DD5C8F3C77D3B5F80BB1B4B70 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_tC81AF0456B0ECB7415E30894699AAB099256D323* EqualityComparer_1_CreateComparer_mAFEFF1E34FDEF405591ED3C481B6713C43E0B44F (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* EqualityComparer_1_CreateComparer_mD3D60BAB4A1E7DF8FDC8779F5A1A3104CAD5202A (const RuntimeMethod* method) ;

IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GC_register_ephemeron_array_m7798D3C75D2E2DC50CAA2422C2B36656D7793D18 (EphemeronU5BU5D_t4F80428A1142C3102C946127F8190063001742E8* ___0_array, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2 (RuntimeObject* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RuntimeHelpers_GetHashCode_m7B5D57E1EE2A59EDFA1BD237E9B37C6C836D774B (RuntimeObject* ___0_o, const RuntimeMethod* method) ;
inline void ConditionalWeakTable_2_RecomputeSize_mECDE2A17589E6F9500A83C0BD216672E9E829463 (ConditionalWeakTable_2_tDA4DD9BAFAF3114A73F0B4D6AA3049208A3B288B* __this, const RuntimeMethod* method)
{
	((  void (*) (ConditionalWeakTable_2_tDA4DD9BAFAF3114A73F0B4D6AA3049208A3B288B*, const RuntimeMethod*))ConditionalWeakTable_2_RecomputeSize_mECDE2A17589E6F9500A83C0BD216672E9E829463_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472 (int32_t ___0_min, const RuntimeMethod* method) ;
inline void ConditionalWeakTable_2_RehashWithoutResize_m016B51E55C242F8FBCAF10DA8825E4B07B46FACC (ConditionalWeakTable_2_tDA4DD9BAFAF3114A73F0B4D6AA3049208A3B288B* __this, const RuntimeMethod* method)
{
	((  void (*) (ConditionalWeakTable_2_tDA4DD9BAFAF3114A73F0B4D6AA3049208A3B288B*, const RuntimeMethod*))ConditionalWeakTable_2_RehashWithoutResize_m016B51E55C242F8FBCAF10DA8825E4B07B46FACC_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m6D9C7B47EA708382838B264BA02EBB7576DFA155 (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___0_paramName, String_t* ___1_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA (RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149 (RuntimeObject* ___0_obj, bool* ___1_lockTaken, const RuntimeMethod* method) ;
inline void ConditionalWeakTable_2_Rehash_mE974FC607D3B12E845F0E83D2BB55A7F1F3639F6 (ConditionalWeakTable_2_tDA4DD9BAFAF3114A73F0B4D6AA3049208A3B288B* __this, const RuntimeMethod* method)
{
	((  void (*) (ConditionalWeakTable_2_tDA4DD9BAFAF3114A73F0B4D6AA3049208A3B288B*, const RuntimeMethod*))ConditionalWeakTable_2_Rehash_mE974FC607D3B12E845F0E83D2BB55A7F1F3639F6_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___0_message, String_t* ___1_paramName, const RuntimeMethod* method) ;
inline bool ConditionalWeakTable_2_TryGetValue_m90CA5ADAC109E3D265A2A6AD8B5165727D9605D2 (ConditionalWeakTable_2_tDA4DD9BAFAF3114A73F0B4D6AA3049208A3B288B* __this, Il2CppSharedGenericObject* ___0_key, Il2CppSharedGenericObject** ___1_value, const RuntimeMethod* method)
{
	return ((  bool (*) (ConditionalWeakTable_2_tDA4DD9BAFAF3114A73F0B4D6AA3049208A3B288B*, Il2CppSharedGenericObject*, Il2CppSharedGenericObject**, const RuntimeMethod*))ConditionalWeakTable_2_TryGetValue_m90CA5ADAC109E3D265A2A6AD8B5165727D9605D2_gshared)(__this, ___0_key, ___1_value, method);
}
inline Il2CppSharedGenericObject* CreateValueCallback_Invoke_mCBFB50800547234672DBBA87011CD2B5BC503308_inline (CreateValueCallback_t8463FCCADB8B16880DB710DACCEF3B1531B1649B* __this, Il2CppSharedGenericObject* ___0_key, const RuntimeMethod* method)
{
	return ((  Il2CppSharedGenericObject* (*) (CreateValueCallback_t8463FCCADB8B16880DB710DACCEF3B1531B1649B*, Il2CppSharedGenericObject*, const RuntimeMethod*))CreateValueCallback_Invoke_mCBFB50800547234672DBBA87011CD2B5BC503308_gshared_inline)(__this, ___0_key, method);
}
inline void ConditionalWeakTable_2_Add_m0E15783C5C4D648412273FE8259A7A644F5A2CD0 (ConditionalWeakTable_2_tDA4DD9BAFAF3114A73F0B4D6AA3049208A3B288B* __this, Il2CppSharedGenericObject* ___0_key, Il2CppSharedGenericObject* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (ConditionalWeakTable_2_tDA4DD9BAFAF3114A73F0B4D6AA3049208A3B288B*, Il2CppSharedGenericObject*, Il2CppSharedGenericObject*, const RuntimeMethod*))ConditionalWeakTable_2_Add_m0E15783C5C4D648412273FE8259A7A644F5A2CD0_gshared)(__this, ___0_key, ___1_value, method);
}
inline void Enumerator__ctor_m030A122C25684BFEAB8B9214E9E281FF990638F2 (Enumerator_t7F5D6C6AE7869482698189D9AB03383A976081DF* __this, ConditionalWeakTable_2_tDA4DD9BAFAF3114A73F0B4D6AA3049208A3B288B* ___0_table, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t7F5D6C6AE7869482698189D9AB03383A976081DF*, ConditionalWeakTable_2_tDA4DD9BAFAF3114A73F0B4D6AA3049208A3B288B*, const RuntimeMethod*))Enumerator__ctor_m030A122C25684BFEAB8B9214E9E281FF990638F2_gshared)(__this, ___0_table, method);
}
inline KeyValuePair_2U5BU5D_t78D9368B607748564E2110C38FC6FCC5150E8DDA* Array_Empty_TisKeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826_m5E4F0239414B89A37EAA5475EF0CAA31256A19AB_inline (const RuntimeMethod* method)
{
	return ((  KeyValuePair_2U5BU5D_t78D9368B607748564E2110C38FC6FCC5150E8DDA* (*) (const RuntimeMethod*))Array_Empty_TisKeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826_m5E4F0239414B89A37EAA5475EF0CAA31256A19AB_gshared_inline)(method);
}
inline void ConfiguredTaskAwaiter__ctor_m5B53A410AE8900B3D565ED7C7FE9DAB92B2ECEC9 (ConfiguredTaskAwaiter_tB2708B017EE82067B2492CD61623784137A1AE0A* __this, Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* ___0_task, bool ___1_continueOnCapturedContext, const RuntimeMethod* method)
{
	((  void (*) (ConfiguredTaskAwaiter_tB2708B017EE82067B2492CD61623784137A1AE0A*, Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9*, bool, const RuntimeMethod*))ConfiguredTaskAwaiter__ctor_m5B53A410AE8900B3D565ED7C7FE9DAB92B2ECEC9_fshared)(__this, ___0_task, ___1_continueOnCapturedContext, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskAwaiter_ValidateEnd_m6BB967A466C17A106BC547009EDE196266651751 (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___0_task, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Task_1_get_ResultOnSuccess_m15F655DF9F8EE6F8388A9432454900F07EFC57BB_inline (Task_1_t824317F4B958F7512E8F7300511752937A6C6043* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Task_1_get_ResultOnSuccess_mF098AC108FFA2E0D992306C6D956BA37874FAC77_inline (Task_1_t4C228DE57804012969575431CFF12D57C875552D* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR VoidTaskResult_t73B628B764C6668DAAAE2D37BD6FC07BCA27A5AC Task_1_get_ResultOnSuccess_mF2B4314A2FC0448358439C96FC6217501A2ACFE0_inline (Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17* __this, const RuntimeMethod* method) ;
inline Il2CppSharedGenericObject* Task_1_get_ResultOnSuccess_mBB7F2275D4EF61A83D08373AA0D41ACC31AF73BD_inline (Task_1_tB348EA1B62802484AB33A91D4404C52DCF7BDB18* __this, const RuntimeMethod* method)
{
	return ((  Il2CppSharedGenericObject* (*) (Task_1_tB348EA1B62802484AB33A91D4404C52DCF7BDB18*, const RuntimeMethod*))Task_1_get_ResultOnSuccess_mBB7F2275D4EF61A83D08373AA0D41ACC31AF73BD_gshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Task_get_IsCompleted_m942D6D536545EF059089398B19435591561BB831 (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskAwaiter_OnCompletedInternal_m8017DEDF7A41F58AFB178F31D417F47D3F83D5D4 (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___0_task, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___1_continuation, bool ___2_continueOnCapturedContext, bool ___3_flowExecutionContext, const RuntimeMethod* method) ;
inline void ConfiguredTaskAwaiter_UnsafeOnCompleted_m2EFFC8EFEDD85479876580D8FDEF045B2DCA2D66 (ConfiguredTaskAwaiter_tB2708B017EE82067B2492CD61623784137A1AE0A* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_continuation, const RuntimeMethod* method)
{
	((  void (*) (ConfiguredTaskAwaiter_tB2708B017EE82067B2492CD61623784137A1AE0A*, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*, const RuntimeMethod*))ConfiguredTaskAwaiter_UnsafeOnCompleted_m2EFFC8EFEDD85479876580D8FDEF045B2DCA2D66_fshared)(__this, ___0_continuation, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Int32_Equals_m089564150E8AF7C63B419427E2E57E3420659B1B (int32_t* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295 (int32_t* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProfilerMarker__ctor_mA98362A704FE2F8F5C21AD1309E7EA80EAA5F81D (ProfilerMarker_t8B7F9848320B93F87A7944B157255D5F9B576F2D* __this, String_t* ___0_name, const RuntimeMethod* method) ;
inline bool DelegateWithContext_1_Equals_mADB622927C9751B007215E254AF4B8F45A121989 (DelegateWithContext_1_tB8D0AD031518ADF1F51C1EC7F3118EDC45A5A126* __this, DelegateWithContext_1_tB8D0AD031518ADF1F51C1EC7F3118EDC45A5A126* ___0_other, const RuntimeMethod* method)
{
	return ((  bool (*) (DelegateWithContext_1_tB8D0AD031518ADF1F51C1EC7F3118EDC45A5A126*, DelegateWithContext_1_tB8D0AD031518ADF1F51C1EC7F3118EDC45A5A126*, const RuntimeMethod*))DelegateWithContext_1_Equals_mADB622927C9751B007215E254AF4B8F45A121989_gshared)(__this, ___0_other, method);
}
inline intptr_t DelegateWithContext_1_get_NativeInvocationContext_mBAE60D72C4155A0AD8CDC5216950F127D2862BAC_inline (DelegateWithContext_1_tB8D0AD031518ADF1F51C1EC7F3118EDC45A5A126* __this, const RuntimeMethod* method)
{
	return ((  intptr_t (*) (DelegateWithContext_1_tB8D0AD031518ADF1F51C1EC7F3118EDC45A5A126*, const RuntimeMethod*))DelegateWithContext_1_get_NativeInvocationContext_mBAE60D72C4155A0AD8CDC5216950F127D2862BAC_gshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_Equals_m0F39AB64A7BBD67190E745FF8334A5FC766CB26E (intptr_t* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
inline EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* EqualityComparer_1_get_Default_mB451453B7B5B4B570A9347E090AB0FAC75C0C628_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_mB451453B7B5B4B570A9347E090AB0FAC75C0C628_gshared_inline)(method);
}
inline Il2CppSharedGenericObject* DelegateWithContext_1_get_NativeDelegate_m1B8E1D02D8C9AB37531DE25E54560229D57A9F0C_inline (DelegateWithContext_1_tB8D0AD031518ADF1F51C1EC7F3118EDC45A5A126* __this, const RuntimeMethod* method)
{
	return ((  Il2CppSharedGenericObject* (*) (DelegateWithContext_1_tB8D0AD031518ADF1F51C1EC7F3118EDC45A5A126*, const RuntimeMethod*))DelegateWithContext_1_get_NativeDelegate_m1B8E1D02D8C9AB37531DE25E54560229D57A9F0C_gshared_inline)(__this, method);
}
inline int32_t HashCode_Combine_TisIntPtr_t_TisIl2CppSharedGenericObject_m0FE3DF8C5942D8532F80288C02A8FD80B7C6F1A1 (intptr_t ___0_value1, Il2CppSharedGenericObject* ___1_value2, const RuntimeMethod* method)
{
	return ((  int32_t (*) (intptr_t, Il2CppSharedGenericObject*, const RuntimeMethod*))HashCode_Combine_TisIntPtr_t_TisIl2CppSharedGenericObject_m0FE3DF8C5942D8532F80288C02A8FD80B7C6F1A1_gshared)(___0_value1, ___1_value2, method);
}
inline RuntimeObject* ConcurrentDictionary_2_GetEnumerator_m5E2C0EBDF59D498AB4D40133331641C23FB4B366 (ConcurrentDictionary_2_t44EF43F797787D2D41D8F1516BA77C1C20CE28B6* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (ConcurrentDictionary_2_t44EF43F797787D2D41D8F1516BA77C1C20CE28B6*, const RuntimeMethod*))ConcurrentDictionary_2_GetEnumerator_m5E2C0EBDF59D498AB4D40133331641C23FB4B366_gshared)(__this, method);
}
inline Il2CppSharedGenericObject* KeyValuePair_2_get_Key_m652AB26F17E6ECED100EADCA06D2352D6612B42B_inline (KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826* __this, const RuntimeMethod* method)
{
	return ((  Il2CppSharedGenericObject* (*) (KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826*, const RuntimeMethod*))KeyValuePair_2_get_Key_m652AB26F17E6ECED100EADCA06D2352D6612B42B_gshared_inline)(__this, method);
}
inline Il2CppSharedGenericObject* KeyValuePair_2_get_Value_mC4437F96887FBE0C954234394562430C0CE7747C_inline (KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826* __this, const RuntimeMethod* method)
{
	return ((  Il2CppSharedGenericObject* (*) (KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826*, const RuntimeMethod*))KeyValuePair_2_get_Value_mC4437F96887FBE0C954234394562430C0CE7747C_gshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictionaryEntry__ctor_m2768353E53A75C4860E34B37DAF1342120C5D1EA (DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
inline DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB DictionaryEnumerator_get_Entry_mDB3A971D9A28F20B00A5510D9B2DECEB3B76DEE5 (DictionaryEnumerator_tD2AAFB3F341BE39C70A71939CA10F9C44CDDB65B* __this, const RuntimeMethod* method)
{
	return ((  DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB (*) (DictionaryEnumerator_tD2AAFB3F341BE39C70A71939CA10F9C44CDDB65B*, const RuntimeMethod*))DictionaryEnumerator_get_Entry_mDB3A971D9A28F20B00A5510D9B2DECEB3B76DEE5_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m773B36DFA7951E426E5AA449331ED5B9A7E054F1 (Dictionary_2_t232323BDF7857D243A4CCA18ADCF59272D0E4C23* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97 (int32_t ___0_argument, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_mE32E52E3C488094E26407ED7E6B96C08DE449609 (Dictionary_2_t232323BDF7857D243A4CCA18ADCF59272D0E4C23* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t2AAFF66C447B855AEB2EF13BDDE1F6301924188F* EqualityComparer_1_get_Default_m0AD70A24662B87624F0C4A66B70581A7F28BE2CC_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mBB52B7106A5105311717525BCC8399C9FD1567A3 (Dictionary_2_t232323BDF7857D243A4CCA18ADCF59272D0E4C23* __this, RuntimeObject* ___0_dictionary, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC (int32_t ___0_argument, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m350F906A4FED4B04ABA55E83B4FD2EBE4CE3F244 (Dictionary_2_t232323BDF7857D243A4CCA18ADCF59272D0E4C23* __this, ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8 ___0_key, uint32_t ___1_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8 KeyValuePair_2_get_Key_m8C1C8921B31C68F85331E5AF3432D221789E3BF8_inline (KeyValuePair_2_t367B869B5B9E3AC484B7F3A6A22B30D27181B421* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t KeyValuePair_2_get_Value_mA6758BC25166F8DDB057093FDC0F13EFD4BAC6DB_inline (KeyValuePair_2_t367B869B5B9E3AC484B7F3A6A22B30D27181B421* __this, const RuntimeMethod* method) ;
inline void KeyCollection__ctor_mB3DBE00FC09EA6CD3635140E5B39EADF53207325 (KeyCollection_tB3FBC73DC16C3B6B2A8597B904BE6599EB6C5227* __this, Dictionary_2_t232323BDF7857D243A4CCA18ADCF59272D0E4C23* ___0_dictionary, const RuntimeMethod* method)
{
	((  void (*) (KeyCollection_tB3FBC73DC16C3B6B2A8597B904BE6599EB6C5227*, Dictionary_2_t232323BDF7857D243A4CCA18ADCF59272D0E4C23*, const RuntimeMethod*))KeyCollection__ctor_m7AF8E4ED6C5228B083FFB423B7DC792CA7C5DD1F_fshared)(__this, ___0_dictionary, method);
}
inline void ValueCollection__ctor_m56C9177F580E830FC880BE239BECF9F8C45C9CCE (ValueCollection_t6C92C52854F574A9EE80E18C51297F5BB4B1C4C3* __this, Dictionary_2_t232323BDF7857D243A4CCA18ADCF59272D0E4C23* ___0_dictionary, const RuntimeMethod* method)
{
	((  void (*) (ValueCollection_t6C92C52854F574A9EE80E18C51297F5BB4B1C4C3*, Dictionary_2_t232323BDF7857D243A4CCA18ADCF59272D0E4C23*, const RuntimeMethod*))ValueCollection__ctor_m382CBA779E83FEFFA62EDF7BF82EB0101BD7858E_fshared)(__this, ___0_dictionary, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_m1BB6F05AA034CDC37E38968F65C1F9A031818101 (Dictionary_2_t232323BDF7857D243A4CCA18ADCF59272D0E4C23* __this, ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8 ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowKeyNotFoundException_m6A17735FA486AD43F2488DE39B755AC60BC99CE7 (RuntimeObject* ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_m220ED7A977536DE48E02E89CC9802CE456A5E3C9 (Dictionary_2_t232323BDF7857D243A4CCA18ADCF59272D0E4C23* __this, ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8 ___0_key, uint32_t ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* EqualityComparer_1_get_Default_mF554877B669658FD6449F84AE369214855D0BC40_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m8B9C947B241C6DFD0F33A436E4BAD3E2BE02D7DF (Dictionary_2_t232323BDF7857D243A4CCA18ADCF59272D0E4C23* __this, ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8 ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F (const RuntimeMethod* method) ;
inline int32_t Dictionary_2_get_Count_m502FBCE64E7FDAE32F763BF830BD2BD555529666 (Dictionary_2_t232323BDF7857D243A4CCA18ADCF59272D0E4C23* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t232323BDF7857D243A4CCA18ADCF59272D0E4C23*, const RuntimeMethod*))Dictionary_2_get_Count_mBB454C6743410D3E06D44D494D4D6FF4CBBBDB1E_fshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA (int32_t ___0_resource, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_mB3FC4BB26A5A8582D4E0E91BE60ED3FFE95AEE2A (KeyValuePair_2_t367B869B5B9E3AC484B7F3A6A22B30D27181B421* __this, ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8 ___0_key, uint32_t ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_mC61F6FB7DB0671A83D237E3774728E980C4A34CF (Enumerator_tA1D674047414071FA450BD89252F77B3361FE9BF* __this, Dictionary_2_t232323BDF7857D243A4CCA18ADCF59272D0E4C23* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4 (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* __this, String_t* ___0_name, int32_t ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199 (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* __this, String_t* ___0_name, RuntimeObject* ___1_value, Type_t* ___2_type, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_m8379F15C7422541338906B2A9998722F4A34FE9B (Dictionary_2_t232323BDF7857D243A4CCA18ADCF59272D0E4C23* __this, KeyValuePair_2U5BU5D_tE76A126FCE108E33BC3A97C53D003B3D399BFD33* ___0_array, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_2_GetHashCode_mF3B537BA555CF519DF00D747C94A3706513C669C (ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5 (RuntimeObject* ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_mD30BDC9FECDBF9E4E54027B0068D148B95032BCF (Dictionary_2_t232323BDF7857D243A4CCA18ADCF59272D0E4C23* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F (const RuntimeMethod* method) ;
inline bool ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F (ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* __this, RuntimeObject* ___0_key, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37** ___1_value, const RuntimeMethod* method)
{
	return ((  bool (*) (ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858*, RuntimeObject*, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37**, const RuntimeMethod*))ConditionalWeakTable_2_TryGetValue_m90CA5ADAC109E3D265A2A6AD8B5165727D9605D2_gshared)(__this, ___0_key, ___1_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5 (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* __this, String_t* ___0_name, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034 (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* __this, String_t* ___0_name, Type_t* ___1_type, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowSerializationException_m03BE2B48CD3617C32FBCEE16030F7C5563E04E16 (int32_t ___0_resource, const RuntimeMethod* method) ;
inline bool ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E (ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* __this, RuntimeObject* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858*, RuntimeObject*, const RuntimeMethod*))ConditionalWeakTable_2_Remove_m035485E631710955A475F95DE3800BBD2EBD20B5_gshared)(__this, ___0_key, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashHelpers_ExpandPrime_m9A35EC171AA0EA16F7C9F71EE6FAD5A82565ADB9 (int32_t ___0_oldSize, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_mE8C026A6ED87F950811CD09574A4643C2927C3AC (Dictionary_2_t232323BDF7857D243A4CCA18ADCF59272D0E4C23* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41 (RuntimeArray* ___0_sourceArray, int32_t ___1_sourceIndex, RuntimeArray* ___2_destinationArray, int32_t ___3_destinationIndex, int32_t ___4_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC (RuntimeArray* __this, int32_t ___0_dimension, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mD81B5632275C9C89651C1B357F26058E8E76A526 (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m2D58AB9D0EE1189C2642E8866CE5DBD92AADCAEF (Dictionary_2_t232323BDF7857D243A4CCA18ADCF59272D0E4C23* __this, ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8 ___0_key, uint32_t ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910 (RuntimeObject* ___0_value, Type_t* ___1_targetType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowWrongKeyTypeArgumentException_m90E5BCE2CB10EEC16F254C237121C6816C4D6982 (RuntimeObject* ___0_key, Type_t* ___1_targetType, const RuntimeMethod* method) ;
inline void Dictionary_2__ctor_m86B8B16DB9C92FF405CB902F82146B9D136E9984 (Dictionary_2_t6EE05E1DBF257B416E0A3B6FE8BF1C1F55C8C13B* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t6EE05E1DBF257B416E0A3B6FE8BF1C1F55C8C13B*, int32_t, RuntimeObject*, const RuntimeMethod*))Dictionary_2__ctor_m86B8B16DB9C92FF405CB902F82146B9D136E9984_gshared)(__this, ___0_capacity, ___1_comparer, method);
}
inline int32_t Dictionary_2_Initialize_m9694FF4B4E2C144DCEF2FCE1F3082855262A7256 (Dictionary_2_t6EE05E1DBF257B416E0A3B6FE8BF1C1F55C8C13B* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t6EE05E1DBF257B416E0A3B6FE8BF1C1F55C8C13B*, int32_t, const RuntimeMethod*))Dictionary_2_Initialize_m9694FF4B4E2C144DCEF2FCE1F3082855262A7256_gshared)(__this, ___0_capacity, method);
}
inline EqualityComparer_1_t6AF08CEAD675C05C1B701806606C7CB7CF53951F* EqualityComparer_1_get_Default_m56D88D65184F0E2CB43D9A2853637D9E87D10FC5_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t6AF08CEAD675C05C1B701806606C7CB7CF53951F* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_m56D88D65184F0E2CB43D9A2853637D9E87D10FC5_gshared_inline)(method);
}
inline void Dictionary_2__ctor_mE4B120CEAC8B3FB8164A6B8421DB9482654758F3 (Dictionary_2_t6EE05E1DBF257B416E0A3B6FE8BF1C1F55C8C13B* __this, RuntimeObject* ___0_dictionary, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t6EE05E1DBF257B416E0A3B6FE8BF1C1F55C8C13B*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))Dictionary_2__ctor_mE4B120CEAC8B3FB8164A6B8421DB9482654758F3_gshared)(__this, ___0_dictionary, ___1_comparer, method);
}
inline void Dictionary_2_Add_m76898227E21B42ADA9F5DB5A6366CE107CE1E940 (Dictionary_2_t6EE05E1DBF257B416E0A3B6FE8BF1C1F55C8C13B* __this, ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A ___0_key, Il2CppSharedGenericObject* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t6EE05E1DBF257B416E0A3B6FE8BF1C1F55C8C13B*, ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A, Il2CppSharedGenericObject*, const RuntimeMethod*))Dictionary_2_Add_m76898227E21B42ADA9F5DB5A6366CE107CE1E940_gshared)(__this, ___0_key, ___1_value, method);
}
inline ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A KeyValuePair_2_get_Key_mEFCCF9BC1F4022E15A29A44A49E8DE3FA5180978_inline (KeyValuePair_2_tA18DA0C0E7B0709B9741404F85570AF6334E7295* __this, const RuntimeMethod* method)
{
	return ((  ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A (*) (KeyValuePair_2_tA18DA0C0E7B0709B9741404F85570AF6334E7295*, const RuntimeMethod*))KeyValuePair_2_get_Key_mEFCCF9BC1F4022E15A29A44A49E8DE3FA5180978_gshared_inline)(__this, method);
}
inline Il2CppSharedGenericObject* KeyValuePair_2_get_Value_m8A4C32B0E709D6A7629FA7869F673CC94F500282_inline (KeyValuePair_2_tA18DA0C0E7B0709B9741404F85570AF6334E7295* __this, const RuntimeMethod* method)
{
	return ((  Il2CppSharedGenericObject* (*) (KeyValuePair_2_tA18DA0C0E7B0709B9741404F85570AF6334E7295*, const RuntimeMethod*))KeyValuePair_2_get_Value_m8A4C32B0E709D6A7629FA7869F673CC94F500282_gshared_inline)(__this, method);
}
inline void KeyCollection__ctor_m28B3CAD60EA6848BE8C46114BD6E0C8FF936E72A (KeyCollection_tF3843FC39D5C3B0CEA3C2A09563C6BE9D7327575* __this, Dictionary_2_t6EE05E1DBF257B416E0A3B6FE8BF1C1F55C8C13B* ___0_dictionary, const RuntimeMethod* method)
{
	((  void (*) (KeyCollection_tF3843FC39D5C3B0CEA3C2A09563C6BE9D7327575*, Dictionary_2_t6EE05E1DBF257B416E0A3B6FE8BF1C1F55C8C13B*, const RuntimeMethod*))KeyCollection__ctor_m7AF8E4ED6C5228B083FFB423B7DC792CA7C5DD1F_fshared)(__this, ___0_dictionary, method);
}
inline void ValueCollection__ctor_mD531F2816B35D4869E5EB9CCD56794AD15649388 (ValueCollection_tE676A0B8EBB18ACFBE7F3E153BEC60CA0E3BE2D1* __this, Dictionary_2_t6EE05E1DBF257B416E0A3B6FE8BF1C1F55C8C13B* ___0_dictionary, const RuntimeMethod* method)
{
	((  void (*) (ValueCollection_tE676A0B8EBB18ACFBE7F3E153BEC60CA0E3BE2D1*, Dictionary_2_t6EE05E1DBF257B416E0A3B6FE8BF1C1F55C8C13B*, const RuntimeMethod*))ValueCollection__ctor_m382CBA779E83FEFFA62EDF7BF82EB0101BD7858E_fshared)(__this, ___0_dictionary, method);
}
inline int32_t Dictionary_2_FindEntry_m5EE6BB86A74B61BA4F43F7FCD7A19396DDA1DEB6 (Dictionary_2_t6EE05E1DBF257B416E0A3B6FE8BF1C1F55C8C13B* __this, ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A ___0_key, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t6EE05E1DBF257B416E0A3B6FE8BF1C1F55C8C13B*, ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A, const RuntimeMethod*))Dictionary_2_FindEntry_m5EE6BB86A74B61BA4F43F7FCD7A19396DDA1DEB6_gshared)(__this, ___0_key, method);
}
inline bool Dictionary_2_TryInsert_m80FCA7D16C6C7009BA59F2ABAA24CF6394A0F865 (Dictionary_2_t6EE05E1DBF257B416E0A3B6FE8BF1C1F55C8C13B* __this, ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A ___0_key, Il2CppSharedGenericObject* ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t6EE05E1DBF257B416E0A3B6FE8BF1C1F55C8C13B*, ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A, Il2CppSharedGenericObject*, uint8_t, const RuntimeMethod*))Dictionary_2_TryInsert_m80FCA7D16C6C7009BA59F2ABAA24CF6394A0F865_gshared)(__this, ___0_key, ___1_value, ___2_behavior, method);
}
inline bool Dictionary_2_Remove_m38590317DE74DBE8D92F2CBEF07EB2166FD77F8A (Dictionary_2_t6EE05E1DBF257B416E0A3B6FE8BF1C1F55C8C13B* __this, ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t6EE05E1DBF257B416E0A3B6FE8BF1C1F55C8C13B*, ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A, const RuntimeMethod*))Dictionary_2_Remove_m38590317DE74DBE8D92F2CBEF07EB2166FD77F8A_gshared)(__this, ___0_key, method);
}
inline int32_t Dictionary_2_get_Count_mE694E1EB3DC6921BA682AB491035440877A5024C (Dictionary_2_t6EE05E1DBF257B416E0A3B6FE8BF1C1F55C8C13B* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t6EE05E1DBF257B416E0A3B6FE8BF1C1F55C8C13B*, const RuntimeMethod*))Dictionary_2_get_Count_mBB454C6743410D3E06D44D494D4D6FF4CBBBDB1E_fshared)(__this, method);
}
inline void KeyValuePair_2__ctor_m0D4121FAC5AC308F9F11677446270359EE7F187F (KeyValuePair_2_tA18DA0C0E7B0709B9741404F85570AF6334E7295* __this, ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A ___0_key, Il2CppSharedGenericObject* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2_tA18DA0C0E7B0709B9741404F85570AF6334E7295*, ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A, Il2CppSharedGenericObject*, const RuntimeMethod*))KeyValuePair_2__ctor_m0D4121FAC5AC308F9F11677446270359EE7F187F_gshared)(__this, ___0_key, ___1_value, method);
}
inline void Enumerator__ctor_m61E3631AF88B2F19F5C1DD6448CB0F8E7DD2118E (Enumerator_t2192A20535292BE4B74B395AB95FBE0E90FF51DF* __this, Dictionary_2_t6EE05E1DBF257B416E0A3B6FE8BF1C1F55C8C13B* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t2192A20535292BE4B74B395AB95FBE0E90FF51DF*, Dictionary_2_t6EE05E1DBF257B416E0A3B6FE8BF1C1F55C8C13B*, int32_t, const RuntimeMethod*))Enumerator__ctor_m61E3631AF88B2F19F5C1DD6448CB0F8E7DD2118E_gshared)(__this, ___0_dictionary, ___1_getEnumeratorRetType, method);
}
inline void Dictionary_2_CopyTo_mF0207C12B681D9CD010A20E3C7FEBDCE5EEC46EA (Dictionary_2_t6EE05E1DBF257B416E0A3B6FE8BF1C1F55C8C13B* __this, KeyValuePair_2U5BU5D_t4208D2E1B4635D7EA4C927172F54BAD9776A760F* ___0_array, int32_t ___1_index, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t6EE05E1DBF257B416E0A3B6FE8BF1C1F55C8C13B*, KeyValuePair_2U5BU5D_t4208D2E1B4635D7EA4C927172F54BAD9776A760F*, int32_t, const RuntimeMethod*))Dictionary_2_CopyTo_mF0207C12B681D9CD010A20E3C7FEBDCE5EEC46EA_gshared)(__this, ___0_array, ___1_index, method);
}
inline int32_t ValueTuple_2_GetHashCode_m99568F302DE6AD3E15E0EA2EC480BD67D049F1D7 (ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A*, const RuntimeMethod*))ValueTuple_2_GetHashCode_m99568F302DE6AD3E15E0EA2EC480BD67D049F1D7_gshared)(__this, method);
}
inline void Dictionary_2_Resize_mECA349A5C568918987B1E5F01CF437B826B24473 (Dictionary_2_t6EE05E1DBF257B416E0A3B6FE8BF1C1F55C8C13B* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t6EE05E1DBF257B416E0A3B6FE8BF1C1F55C8C13B*, const RuntimeMethod*))Dictionary_2_Resize_mECA349A5C568918987B1E5F01CF437B826B24473_gshared)(__this, method);
}
inline void Dictionary_2_Resize_m89E3D5532F34F27BEB5DF28BB40F3558ECDF3728 (Dictionary_2_t6EE05E1DBF257B416E0A3B6FE8BF1C1F55C8C13B* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t6EE05E1DBF257B416E0A3B6FE8BF1C1F55C8C13B*, int32_t, bool, const RuntimeMethod*))Dictionary_2_Resize_m89E3D5532F34F27BEB5DF28BB40F3558ECDF3728_gshared)(__this, ___0_newSize, ___1_forceNewHashCodes, method);
}
inline void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisIl2CppSharedGenericObject_mE7A1EEC53480BA1ED6C827938ADAF45B127DD054 (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method)
{
	((  void (*) (RuntimeObject*, int32_t, const RuntimeMethod*))ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisIl2CppSharedGenericObject_mE7A1EEC53480BA1ED6C827938ADAF45B127DD054_gshared)(___0_value, ___1_argName, method);
}
inline void Dictionary_2_set_Item_mB372B26FF800DAB8A056AC36CEF56999C6B8C0B2 (Dictionary_2_t6EE05E1DBF257B416E0A3B6FE8BF1C1F55C8C13B* __this, ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A ___0_key, Il2CppSharedGenericObject* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t6EE05E1DBF257B416E0A3B6FE8BF1C1F55C8C13B*, ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A, Il2CppSharedGenericObject*, const RuntimeMethod*))Dictionary_2_set_Item_mB372B26FF800DAB8A056AC36CEF56999C6B8C0B2_gshared)(__this, ___0_key, ___1_value, method);
}
inline void Dictionary_2__ctor_m18A30ACAED5ED63080749BA1C8B6DDAC6B36C3EE (Dictionary_2_tAC56BFFAB0D6C547AD119E1707252267F9C0C49A* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tAC56BFFAB0D6C547AD119E1707252267F9C0C49A*, int32_t, RuntimeObject*, const RuntimeMethod*))Dictionary_2__ctor_m18A30ACAED5ED63080749BA1C8B6DDAC6B36C3EE_gshared)(__this, ___0_capacity, ___1_comparer, method);
}
inline int32_t Dictionary_2_Initialize_mD6E490F5E2D02CB8B433925CF5DAE535CBA6F8CF (Dictionary_2_tAC56BFFAB0D6C547AD119E1707252267F9C0C49A* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_tAC56BFFAB0D6C547AD119E1707252267F9C0C49A*, int32_t, const RuntimeMethod*))Dictionary_2_Initialize_mD6E490F5E2D02CB8B433925CF5DAE535CBA6F8CF_gshared)(__this, ___0_capacity, method);
}
inline EqualityComparer_1_t4515F567FF8CA58A31FECE4C986C6950AAF8A2CB* EqualityComparer_1_get_Default_mF252A6DD8B0E68A7EC7F6356C3007FBCDC35877D_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t4515F567FF8CA58A31FECE4C986C6950AAF8A2CB* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_mF252A6DD8B0E68A7EC7F6356C3007FBCDC35877D_gshared_inline)(method);
}
inline void Dictionary_2__ctor_mAD75EF58F66B595F8D3901C3452232FC94062088 (Dictionary_2_tAC56BFFAB0D6C547AD119E1707252267F9C0C49A* __this, RuntimeObject* ___0_dictionary, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tAC56BFFAB0D6C547AD119E1707252267F9C0C49A*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))Dictionary_2__ctor_mAD75EF58F66B595F8D3901C3452232FC94062088_gshared)(__this, ___0_dictionary, ___1_comparer, method);
}
inline void Dictionary_2_Add_mB472F849E1EC334185C8660C50A557237F0BE164 (Dictionary_2_tAC56BFFAB0D6C547AD119E1707252267F9C0C49A* __this, ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A ___0_key, Il2CppSharedGenericObject* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tAC56BFFAB0D6C547AD119E1707252267F9C0C49A*, ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A, Il2CppSharedGenericObject*, const RuntimeMethod*))Dictionary_2_Add_mB472F849E1EC334185C8660C50A557237F0BE164_gshared)(__this, ___0_key, ___1_value, method);
}
inline ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A KeyValuePair_2_get_Key_mD0027E57B606342804BAAEE3B37C9C7FC77D90E3_inline (KeyValuePair_2_t64E764570967C9CF8DB9472130C0647F11D963A2* __this, const RuntimeMethod* method)
{
	return ((  ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A (*) (KeyValuePair_2_t64E764570967C9CF8DB9472130C0647F11D963A2*, const RuntimeMethod*))KeyValuePair_2_get_Key_mD0027E57B606342804BAAEE3B37C9C7FC77D90E3_gshared_inline)(__this, method);
}
inline Il2CppSharedGenericObject* KeyValuePair_2_get_Value_m1B98DA271855EDA63BE7803194E15F9A7CEA3D25_inline (KeyValuePair_2_t64E764570967C9CF8DB9472130C0647F11D963A2* __this, const RuntimeMethod* method)
{
	return ((  Il2CppSharedGenericObject* (*) (KeyValuePair_2_t64E764570967C9CF8DB9472130C0647F11D963A2*, const RuntimeMethod*))KeyValuePair_2_get_Value_m1B98DA271855EDA63BE7803194E15F9A7CEA3D25_gshared_inline)(__this, method);
}
inline void KeyCollection__ctor_mD5E79842FA5F42C6B3E458407CA711BDAAB1FE69 (KeyCollection_tFB65BE5C0E6B6C8D1CB0CCA25F056AA72F66D37C* __this, Dictionary_2_tAC56BFFAB0D6C547AD119E1707252267F9C0C49A* ___0_dictionary, const RuntimeMethod* method)
{
	((  void (*) (KeyCollection_tFB65BE5C0E6B6C8D1CB0CCA25F056AA72F66D37C*, Dictionary_2_tAC56BFFAB0D6C547AD119E1707252267F9C0C49A*, const RuntimeMethod*))KeyCollection__ctor_m7AF8E4ED6C5228B083FFB423B7DC792CA7C5DD1F_fshared)(__this, ___0_dictionary, method);
}
inline void ValueCollection__ctor_m7782EC432C8B7591F78A35C56024E8E21C78A345 (ValueCollection_t850579E5C2FF909D1C3606EC46C87F0FADFEDB96* __this, Dictionary_2_tAC56BFFAB0D6C547AD119E1707252267F9C0C49A* ___0_dictionary, const RuntimeMethod* method)
{
	((  void (*) (ValueCollection_t850579E5C2FF909D1C3606EC46C87F0FADFEDB96*, Dictionary_2_tAC56BFFAB0D6C547AD119E1707252267F9C0C49A*, const RuntimeMethod*))ValueCollection__ctor_m382CBA779E83FEFFA62EDF7BF82EB0101BD7858E_fshared)(__this, ___0_dictionary, method);
}
inline int32_t Dictionary_2_FindEntry_mF40EED5EF900EB145AFD21B959058FC4F3CFD3C7 (Dictionary_2_tAC56BFFAB0D6C547AD119E1707252267F9C0C49A* __this, ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A ___0_key, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_tAC56BFFAB0D6C547AD119E1707252267F9C0C49A*, ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A, const RuntimeMethod*))Dictionary_2_FindEntry_mF40EED5EF900EB145AFD21B959058FC4F3CFD3C7_gshared)(__this, ___0_key, method);
}
inline bool Dictionary_2_TryInsert_m215840BF1C032E1A9D5056DB815A0F7E761F38FC (Dictionary_2_tAC56BFFAB0D6C547AD119E1707252267F9C0C49A* __this, ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A ___0_key, Il2CppSharedGenericObject* ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tAC56BFFAB0D6C547AD119E1707252267F9C0C49A*, ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A, Il2CppSharedGenericObject*, uint8_t, const RuntimeMethod*))Dictionary_2_TryInsert_m215840BF1C032E1A9D5056DB815A0F7E761F38FC_gshared)(__this, ___0_key, ___1_value, ___2_behavior, method);
}
inline bool Dictionary_2_Remove_m86A5B73912916A5825210A61600309B0CEBE7022 (Dictionary_2_tAC56BFFAB0D6C547AD119E1707252267F9C0C49A* __this, ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tAC56BFFAB0D6C547AD119E1707252267F9C0C49A*, ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A, const RuntimeMethod*))Dictionary_2_Remove_m86A5B73912916A5825210A61600309B0CEBE7022_gshared)(__this, ___0_key, method);
}
inline int32_t Dictionary_2_get_Count_m889AEFA656A4A6AB38DC123246E8BEC33647F2BB (Dictionary_2_tAC56BFFAB0D6C547AD119E1707252267F9C0C49A* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_tAC56BFFAB0D6C547AD119E1707252267F9C0C49A*, const RuntimeMethod*))Dictionary_2_get_Count_mBB454C6743410D3E06D44D494D4D6FF4CBBBDB1E_fshared)(__this, method);
}
inline void KeyValuePair_2__ctor_mD0CA78640E4E9AEDF3F7B13285742812AD9D3F93 (KeyValuePair_2_t64E764570967C9CF8DB9472130C0647F11D963A2* __this, ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A ___0_key, Il2CppSharedGenericObject* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2_t64E764570967C9CF8DB9472130C0647F11D963A2*, ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A, Il2CppSharedGenericObject*, const RuntimeMethod*))KeyValuePair_2__ctor_mD0CA78640E4E9AEDF3F7B13285742812AD9D3F93_gshared)(__this, ___0_key, ___1_value, method);
}
inline void Enumerator__ctor_m0EF0E488E739D3719F9EB825293E138DA7DF2CA8 (Enumerator_t3C7F7AA223D7FD8BC46DAE355A8719EAB17A9EDF* __this, Dictionary_2_tAC56BFFAB0D6C547AD119E1707252267F9C0C49A* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t3C7F7AA223D7FD8BC46DAE355A8719EAB17A9EDF*, Dictionary_2_tAC56BFFAB0D6C547AD119E1707252267F9C0C49A*, int32_t, const RuntimeMethod*))Enumerator__ctor_m0EF0E488E739D3719F9EB825293E138DA7DF2CA8_gshared)(__this, ___0_dictionary, ___1_getEnumeratorRetType, method);
}
inline void Dictionary_2_CopyTo_mD9B70A6E4EDB4E0CAB6CD3A7C94AB74BEF08CF66 (Dictionary_2_tAC56BFFAB0D6C547AD119E1707252267F9C0C49A* __this, KeyValuePair_2U5BU5D_t9F59B28C21BBB1C41719D5BDFC79702EFA03FC3A* ___0_array, int32_t ___1_index, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tAC56BFFAB0D6C547AD119E1707252267F9C0C49A*, KeyValuePair_2U5BU5D_t9F59B28C21BBB1C41719D5BDFC79702EFA03FC3A*, int32_t, const RuntimeMethod*))Dictionary_2_CopyTo_mD9B70A6E4EDB4E0CAB6CD3A7C94AB74BEF08CF66_gshared)(__this, ___0_array, ___1_index, method);
}
inline int32_t ValueTuple_2_GetHashCode_mF359FEBDF1FA01E57B2160C5F106BFC25DAC0404 (ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A*, const RuntimeMethod*))ValueTuple_2_GetHashCode_mF359FEBDF1FA01E57B2160C5F106BFC25DAC0404_gshared)(__this, method);
}
inline void Dictionary_2_Resize_m2B49E5B27DE63B7B42984CEC07EAE9D3119B80F7 (Dictionary_2_tAC56BFFAB0D6C547AD119E1707252267F9C0C49A* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tAC56BFFAB0D6C547AD119E1707252267F9C0C49A*, const RuntimeMethod*))Dictionary_2_Resize_m2B49E5B27DE63B7B42984CEC07EAE9D3119B80F7_gshared)(__this, method);
}
inline void Dictionary_2_Resize_m7D9EC0F043E0B9FAB07F7AE3EA84667BFA73B967 (Dictionary_2_tAC56BFFAB0D6C547AD119E1707252267F9C0C49A* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tAC56BFFAB0D6C547AD119E1707252267F9C0C49A*, int32_t, bool, const RuntimeMethod*))Dictionary_2_Resize_m7D9EC0F043E0B9FAB07F7AE3EA84667BFA73B967_gshared)(__this, ___0_newSize, ___1_forceNewHashCodes, method);
}
inline void Dictionary_2_set_Item_m50080FF99F5F609F7C6D4A916D1A4264AB88BCC5 (Dictionary_2_tAC56BFFAB0D6C547AD119E1707252267F9C0C49A* __this, ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A ___0_key, Il2CppSharedGenericObject* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tAC56BFFAB0D6C547AD119E1707252267F9C0C49A*, ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A, Il2CppSharedGenericObject*, const RuntimeMethod*))Dictionary_2_set_Item_m50080FF99F5F609F7C6D4A916D1A4264AB88BCC5_gshared)(__this, ___0_key, ___1_value, method);
}
inline void Dictionary_2__ctor_mBDF56DD80C06454F5D7A4D76C4BE23376680FA51 (Dictionary_2_tE5B96FEA65A0394692A66749C0DDE9956CF9EC15* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tE5B96FEA65A0394692A66749C0DDE9956CF9EC15*, int32_t, RuntimeObject*, const RuntimeMethod*))Dictionary_2__ctor_mBDF56DD80C06454F5D7A4D76C4BE23376680FA51_gshared)(__this, ___0_capacity, ___1_comparer, method);
}
inline int32_t Dictionary_2_Initialize_mBBF032FDCE3C6D3156FD7E9C03D0FD46F673E1A5 (Dictionary_2_tE5B96FEA65A0394692A66749C0DDE9956CF9EC15* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_tE5B96FEA65A0394692A66749C0DDE9956CF9EC15*, int32_t, const RuntimeMethod*))Dictionary_2_Initialize_mBBF032FDCE3C6D3156FD7E9C03D0FD46F673E1A5_gshared)(__this, ___0_capacity, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t63A37CBBA150A456A5494B585BAAD61AEC84FCC3* EqualityComparer_1_get_Default_m16781A8E4EDB2114168E318B51C5081028E57F3D_inline (const RuntimeMethod* method) ;
inline void Dictionary_2__ctor_m615E385F0112B9DEB74B1E828D662E1DE93519AD (Dictionary_2_tE5B96FEA65A0394692A66749C0DDE9956CF9EC15* __this, RuntimeObject* ___0_dictionary, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tE5B96FEA65A0394692A66749C0DDE9956CF9EC15*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))Dictionary_2__ctor_m615E385F0112B9DEB74B1E828D662E1DE93519AD_gshared)(__this, ___0_dictionary, ___1_comparer, method);
}
inline void Dictionary_2_Add_m659C15ADA813F04A8F4547C6AAF3CCD9E1252110 (Dictionary_2_tE5B96FEA65A0394692A66749C0DDE9956CF9EC15* __this, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___0_key, Il2CppSharedGenericObject* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tE5B96FEA65A0394692A66749C0DDE9956CF9EC15*, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8, Il2CppSharedGenericObject*, const RuntimeMethod*))Dictionary_2_Add_m659C15ADA813F04A8F4547C6AAF3CCD9E1252110_gshared)(__this, ___0_key, ___1_value, method);
}
inline EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 KeyValuePair_2_get_Key_m90712219738452E82D01F79E5C5E2AFC458B7F42_inline (KeyValuePair_2_tCD64FBFD0349B053A7915EB43CFE2E4C123110E3* __this, const RuntimeMethod* method)
{
	return ((  EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 (*) (KeyValuePair_2_tCD64FBFD0349B053A7915EB43CFE2E4C123110E3*, const RuntimeMethod*))KeyValuePair_2_get_Key_m90712219738452E82D01F79E5C5E2AFC458B7F42_gshared_inline)(__this, method);
}
inline Il2CppSharedGenericObject* KeyValuePair_2_get_Value_m386D7A4C4EC42B076395DF4004EC546AFB963848_inline (KeyValuePair_2_tCD64FBFD0349B053A7915EB43CFE2E4C123110E3* __this, const RuntimeMethod* method)
{
	return ((  Il2CppSharedGenericObject* (*) (KeyValuePair_2_tCD64FBFD0349B053A7915EB43CFE2E4C123110E3*, const RuntimeMethod*))KeyValuePair_2_get_Value_m386D7A4C4EC42B076395DF4004EC546AFB963848_gshared_inline)(__this, method);
}
inline void KeyCollection__ctor_m71463D8FBFEFE9B0436A5D48538E49875957017A (KeyCollection_t57775F7FF92A58C6D31372BA8764C2261A0E892A* __this, Dictionary_2_tE5B96FEA65A0394692A66749C0DDE9956CF9EC15* ___0_dictionary, const RuntimeMethod* method)
{
	((  void (*) (KeyCollection_t57775F7FF92A58C6D31372BA8764C2261A0E892A*, Dictionary_2_tE5B96FEA65A0394692A66749C0DDE9956CF9EC15*, const RuntimeMethod*))KeyCollection__ctor_m7AF8E4ED6C5228B083FFB423B7DC792CA7C5DD1F_fshared)(__this, ___0_dictionary, method);
}
inline void ValueCollection__ctor_m7A4445D68708C5A9E9C8839D7BF60F6164424DAD (ValueCollection_tBFC0E43BC45FCEFBDF4400423106E4A62E2EAE97* __this, Dictionary_2_tE5B96FEA65A0394692A66749C0DDE9956CF9EC15* ___0_dictionary, const RuntimeMethod* method)
{
	((  void (*) (ValueCollection_tBFC0E43BC45FCEFBDF4400423106E4A62E2EAE97*, Dictionary_2_tE5B96FEA65A0394692A66749C0DDE9956CF9EC15*, const RuntimeMethod*))ValueCollection__ctor_m382CBA779E83FEFFA62EDF7BF82EB0101BD7858E_fshared)(__this, ___0_dictionary, method);
}
inline int32_t Dictionary_2_FindEntry_m1657D17584CCFCD88AD7E5E31C519E86C659D03F (Dictionary_2_tE5B96FEA65A0394692A66749C0DDE9956CF9EC15* __this, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___0_key, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_tE5B96FEA65A0394692A66749C0DDE9956CF9EC15*, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8, const RuntimeMethod*))Dictionary_2_FindEntry_m1657D17584CCFCD88AD7E5E31C519E86C659D03F_gshared)(__this, ___0_key, method);
}
inline bool Dictionary_2_TryInsert_m7801AB4073E7E59144E031D9980334873CE04671 (Dictionary_2_tE5B96FEA65A0394692A66749C0DDE9956CF9EC15* __this, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___0_key, Il2CppSharedGenericObject* ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tE5B96FEA65A0394692A66749C0DDE9956CF9EC15*, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8, Il2CppSharedGenericObject*, uint8_t, const RuntimeMethod*))Dictionary_2_TryInsert_m7801AB4073E7E59144E031D9980334873CE04671_gshared)(__this, ___0_key, ___1_value, ___2_behavior, method);
}
inline bool Dictionary_2_Remove_m648D00C8DA11B66465DDFB68AE55F0E8ABF5BF78 (Dictionary_2_tE5B96FEA65A0394692A66749C0DDE9956CF9EC15* __this, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tE5B96FEA65A0394692A66749C0DDE9956CF9EC15*, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8, const RuntimeMethod*))Dictionary_2_Remove_m648D00C8DA11B66465DDFB68AE55F0E8ABF5BF78_gshared)(__this, ___0_key, method);
}
inline int32_t Dictionary_2_get_Count_m7421ED45DE262C02CACC42EA0FE958D84C57B4FB (Dictionary_2_tE5B96FEA65A0394692A66749C0DDE9956CF9EC15* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_tE5B96FEA65A0394692A66749C0DDE9956CF9EC15*, const RuntimeMethod*))Dictionary_2_get_Count_mBB454C6743410D3E06D44D494D4D6FF4CBBBDB1E_fshared)(__this, method);
}
inline void KeyValuePair_2__ctor_mB6121DC610D466BC9BBA557711FBAB073406BF77 (KeyValuePair_2_tCD64FBFD0349B053A7915EB43CFE2E4C123110E3* __this, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___0_key, Il2CppSharedGenericObject* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2_tCD64FBFD0349B053A7915EB43CFE2E4C123110E3*, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8, Il2CppSharedGenericObject*, const RuntimeMethod*))KeyValuePair_2__ctor_mB6121DC610D466BC9BBA557711FBAB073406BF77_gshared)(__this, ___0_key, ___1_value, method);
}
inline void Enumerator__ctor_m6ED4CD5A4B2D5BC48CE5614042545BB304449C0A (Enumerator_t4D854DB287531AA401450973A1FE347EA5E3D673* __this, Dictionary_2_tE5B96FEA65A0394692A66749C0DDE9956CF9EC15* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t4D854DB287531AA401450973A1FE347EA5E3D673*, Dictionary_2_tE5B96FEA65A0394692A66749C0DDE9956CF9EC15*, int32_t, const RuntimeMethod*))Enumerator__ctor_m6ED4CD5A4B2D5BC48CE5614042545BB304449C0A_gshared)(__this, ___0_dictionary, ___1_getEnumeratorRetType, method);
}
inline void Dictionary_2_CopyTo_m95EC5C89E30BCBBA8B195DB471FA154BBCBCC4F6 (Dictionary_2_tE5B96FEA65A0394692A66749C0DDE9956CF9EC15* __this, KeyValuePair_2U5BU5D_t452E832017CA977A0436EAE3C0B660FEFAA9E48C* ___0_array, int32_t ___1_index, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tE5B96FEA65A0394692A66749C0DDE9956CF9EC15*, KeyValuePair_2U5BU5D_t452E832017CA977A0436EAE3C0B660FEFAA9E48C*, int32_t, const RuntimeMethod*))Dictionary_2_CopyTo_m95EC5C89E30BCBBA8B195DB471FA154BBCBCC4F6_gshared)(__this, ___0_array, ___1_index, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EntityId_GetHashCode_m7B7BE3CC221C5EEAB3D2E64BD632F057E7931410 (EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8* __this, const RuntimeMethod* method) ;
inline void Dictionary_2_Resize_m538AB0187304CDDEDB4C0B2ECDCF6406622270AC (Dictionary_2_tE5B96FEA65A0394692A66749C0DDE9956CF9EC15* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tE5B96FEA65A0394692A66749C0DDE9956CF9EC15*, const RuntimeMethod*))Dictionary_2_Resize_m538AB0187304CDDEDB4C0B2ECDCF6406622270AC_gshared)(__this, method);
}
inline void Dictionary_2_Resize_m34F15117A77F5DC4A71367D3091ADB5A51649961 (Dictionary_2_tE5B96FEA65A0394692A66749C0DDE9956CF9EC15* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tE5B96FEA65A0394692A66749C0DDE9956CF9EC15*, int32_t, bool, const RuntimeMethod*))Dictionary_2_Resize_m34F15117A77F5DC4A71367D3091ADB5A51649961_gshared)(__this, ___0_newSize, ___1_forceNewHashCodes, method);
}
inline void Dictionary_2_set_Item_m95FF2E2086B21F5DBD685F0D4DB10818308B2B4E (Dictionary_2_tE5B96FEA65A0394692A66749C0DDE9956CF9EC15* __this, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___0_key, Il2CppSharedGenericObject* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tE5B96FEA65A0394692A66749C0DDE9956CF9EC15*, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8, Il2CppSharedGenericObject*, const RuntimeMethod*))Dictionary_2_set_Item_m95FF2E2086B21F5DBD685F0D4DB10818308B2B4E_gshared)(__this, ___0_key, ___1_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5BDC7511DA1B448A0EA8D564E296681CF318219E (Dictionary_2_tE7C86B2C5A23A1F27C98C2B36D5E45FA457F6090* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_m38FB2D8763ADDB1128BA8DB0BB9A2D576F7220E8 (Dictionary_2_tE7C86B2C5A23A1F27C98C2B36D5E45FA457F6090* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m4D1E39F61237886CB1FA5462B8CD4627FC822DC7 (Dictionary_2_tE7C86B2C5A23A1F27C98C2B36D5E45FA457F6090* __this, RuntimeObject* ___0_dictionary, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_mC8F79C526E4358DD840D85CB26C87DF16E570D42 (Dictionary_2_tE7C86B2C5A23A1F27C98C2B36D5E45FA457F6090* __this, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___0_key, FontAssetRef_t7B8E634754BC5683F1E6601D7CD0061285A28FF3 ___1_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 KeyValuePair_2_get_Key_m4D827FF66807261BDE920B3D6816EC37082073B3_inline (KeyValuePair_2_t0BE50338B196BFD79E02288350CE100D1C15D165* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FontAssetRef_t7B8E634754BC5683F1E6601D7CD0061285A28FF3 KeyValuePair_2_get_Value_mC82FE8FDC9CEC01214097444FE6D11C920B45461_inline (KeyValuePair_2_t0BE50338B196BFD79E02288350CE100D1C15D165* __this, const RuntimeMethod* method) ;
inline void KeyCollection__ctor_m82022D2EE0EBD78A26A990AAC16E4A045126AE11 (KeyCollection_t91FB72DA59E2DD50460D6B13860A5A6ADF6C19FC* __this, Dictionary_2_tE7C86B2C5A23A1F27C98C2B36D5E45FA457F6090* ___0_dictionary, const RuntimeMethod* method)
{
	((  void (*) (KeyCollection_t91FB72DA59E2DD50460D6B13860A5A6ADF6C19FC*, Dictionary_2_tE7C86B2C5A23A1F27C98C2B36D5E45FA457F6090*, const RuntimeMethod*))KeyCollection__ctor_m7AF8E4ED6C5228B083FFB423B7DC792CA7C5DD1F_fshared)(__this, ___0_dictionary, method);
}
inline void ValueCollection__ctor_m14AF8DA6FCBD7ACD62EB55BF61D21FAE60352201 (ValueCollection_t5390AA0A336DFE6BC4AED8BB2868F9D6869D211B* __this, Dictionary_2_tE7C86B2C5A23A1F27C98C2B36D5E45FA457F6090* ___0_dictionary, const RuntimeMethod* method)
{
	((  void (*) (ValueCollection_t5390AA0A336DFE6BC4AED8BB2868F9D6869D211B*, Dictionary_2_tE7C86B2C5A23A1F27C98C2B36D5E45FA457F6090*, const RuntimeMethod*))ValueCollection__ctor_m382CBA779E83FEFFA62EDF7BF82EB0101BD7858E_fshared)(__this, ___0_dictionary, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_m95EFDF2600D3495DB59266D86D3B0B65020CBBE3 (Dictionary_2_tE7C86B2C5A23A1F27C98C2B36D5E45FA457F6090* __this, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_m7265AD1FB7FEE07B51E4A3D1783ABFBF9BDED62F (Dictionary_2_tE7C86B2C5A23A1F27C98C2B36D5E45FA457F6090* __this, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___0_key, FontAssetRef_t7B8E634754BC5683F1E6601D7CD0061285A28FF3 ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_tC81AF0456B0ECB7415E30894699AAB099256D323* EqualityComparer_1_get_Default_m4626BA1582304AE05985ABD8E116508974651F1E_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m54197D4C6A7E708E2AC7BC107AC24F565AD687DA (Dictionary_2_tE7C86B2C5A23A1F27C98C2B36D5E45FA457F6090* __this, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___0_key, const RuntimeMethod* method) ;
inline int32_t Dictionary_2_get_Count_m2C6E37F54AC67C3A604B7502CC45BC15C37ECBA8 (Dictionary_2_tE7C86B2C5A23A1F27C98C2B36D5E45FA457F6090* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_tE7C86B2C5A23A1F27C98C2B36D5E45FA457F6090*, const RuntimeMethod*))Dictionary_2_get_Count_mBB454C6743410D3E06D44D494D4D6FF4CBBBDB1E_fshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_m46844DA2290BECEBDC1CBAC6D64267E0E522303A (KeyValuePair_2_t0BE50338B196BFD79E02288350CE100D1C15D165* __this, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___0_key, FontAssetRef_t7B8E634754BC5683F1E6601D7CD0061285A28FF3 ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_mCFF2B87BFC039D1040F6DEFD6DEA90A9F51A68ED (Enumerator_t8527DBFE64E77B68270A483C17805985F00CE92F* __this, Dictionary_2_tE7C86B2C5A23A1F27C98C2B36D5E45FA457F6090* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_m7F65CF8F69C819C98EF07594FCF7A7C0DA75DD88 (Dictionary_2_tE7C86B2C5A23A1F27C98C2B36D5E45FA457F6090* __this, KeyValuePair_2U5BU5D_t22BD4C2009997AFE758B947C2D08853C305EA502* ___0_array, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m6AA6E88B86D690834CA19A571C9B165455AB42BE (Dictionary_2_tE7C86B2C5A23A1F27C98C2B36D5E45FA457F6090* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m394708D42EFC53386FC1C03666B137E135E5CFE7 (Dictionary_2_tE7C86B2C5A23A1F27C98C2B36D5E45FA457F6090* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisFontAssetRef_t7B8E634754BC5683F1E6601D7CD0061285A28FF3_m4AC822CD5CEAF4DA1B4035660F409BF9DD47B8BE (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m7ACB67C25D0FD50ABEC2277BFDBDED5D4E5DF8DC (Dictionary_2_tE7C86B2C5A23A1F27C98C2B36D5E45FA457F6090* __this, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___0_key, FontAssetRef_t7B8E634754BC5683F1E6601D7CD0061285A28FF3 ___1_value, const RuntimeMethod* method) ;
inline void Dictionary_2__ctor_mBE9E061358F2E6A91E9915CEFD2879A13D028050 (Dictionary_2_tACC278C341353EB0D3F5219D25804742C5DDC8A9* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tACC278C341353EB0D3F5219D25804742C5DDC8A9*, int32_t, RuntimeObject*, const RuntimeMethod*))Dictionary_2__ctor_mBE9E061358F2E6A91E9915CEFD2879A13D028050_gshared)(__this, ___0_capacity, ___1_comparer, method);
}
inline int32_t Dictionary_2_Initialize_m4B270DD202530A4EA0CB4EA2C5463BDFAC3289C5 (Dictionary_2_tACC278C341353EB0D3F5219D25804742C5DDC8A9* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_tACC278C341353EB0D3F5219D25804742C5DDC8A9*, int32_t, const RuntimeMethod*))Dictionary_2_Initialize_m4B270DD202530A4EA0CB4EA2C5463BDFAC3289C5_gshared)(__this, ___0_capacity, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* EqualityComparer_1_get_Default_m5DCC393F5D59545D96AF9FF747F17C72EABB5D3B_inline (const RuntimeMethod* method) ;
inline void Dictionary_2__ctor_mFE8D024D7FA568AAB39FCF6DAF344F43EE1F4A43 (Dictionary_2_tACC278C341353EB0D3F5219D25804742C5DDC8A9* __this, RuntimeObject* ___0_dictionary, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tACC278C341353EB0D3F5219D25804742C5DDC8A9*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))Dictionary_2__ctor_mFE8D024D7FA568AAB39FCF6DAF344F43EE1F4A43_gshared)(__this, ___0_dictionary, ___1_comparer, method);
}
inline void Dictionary_2_Add_m12D2FABDF928772CD0B0C28D389D86E688E4F4CB (Dictionary_2_tACC278C341353EB0D3F5219D25804742C5DDC8A9* __this, Guid_t ___0_key, Il2CppSharedGenericObject* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tACC278C341353EB0D3F5219D25804742C5DDC8A9*, Guid_t, Il2CppSharedGenericObject*, const RuntimeMethod*))Dictionary_2_Add_m12D2FABDF928772CD0B0C28D389D86E688E4F4CB_gshared)(__this, ___0_key, ___1_value, method);
}
inline Guid_t KeyValuePair_2_get_Key_m9203ED457651489192177BEC5EBDC178E0F26BC7_inline (KeyValuePair_2_t33B859F0514253F5DB6552A6B2C5730871612D1B* __this, const RuntimeMethod* method)
{
	return ((  Guid_t (*) (KeyValuePair_2_t33B859F0514253F5DB6552A6B2C5730871612D1B*, const RuntimeMethod*))KeyValuePair_2_get_Key_m9203ED457651489192177BEC5EBDC178E0F26BC7_gshared_inline)(__this, method);
}
inline Il2CppSharedGenericObject* KeyValuePair_2_get_Value_m7FE87D795A3F1AD1B2E7FD1F96E5EF2A82785D93_inline (KeyValuePair_2_t33B859F0514253F5DB6552A6B2C5730871612D1B* __this, const RuntimeMethod* method)
{
	return ((  Il2CppSharedGenericObject* (*) (KeyValuePair_2_t33B859F0514253F5DB6552A6B2C5730871612D1B*, const RuntimeMethod*))KeyValuePair_2_get_Value_m7FE87D795A3F1AD1B2E7FD1F96E5EF2A82785D93_gshared_inline)(__this, method);
}
inline void KeyCollection__ctor_m1DD9728163AEE8DECB0FD6CC40DDEB6E3B419E04 (KeyCollection_tABC0767E4C9CAC395DC791123D07816845B5F3FE* __this, Dictionary_2_tACC278C341353EB0D3F5219D25804742C5DDC8A9* ___0_dictionary, const RuntimeMethod* method)
{
	((  void (*) (KeyCollection_tABC0767E4C9CAC395DC791123D07816845B5F3FE*, Dictionary_2_tACC278C341353EB0D3F5219D25804742C5DDC8A9*, const RuntimeMethod*))KeyCollection__ctor_m7AF8E4ED6C5228B083FFB423B7DC792CA7C5DD1F_fshared)(__this, ___0_dictionary, method);
}
inline void ValueCollection__ctor_m16305A7173A73FFD4F82FAC103C980A99266B7E2 (ValueCollection_t6E5730979611F4C4C82E15329EA4E3C265DFED32* __this, Dictionary_2_tACC278C341353EB0D3F5219D25804742C5DDC8A9* ___0_dictionary, const RuntimeMethod* method)
{
	((  void (*) (ValueCollection_t6E5730979611F4C4C82E15329EA4E3C265DFED32*, Dictionary_2_tACC278C341353EB0D3F5219D25804742C5DDC8A9*, const RuntimeMethod*))ValueCollection__ctor_m382CBA779E83FEFFA62EDF7BF82EB0101BD7858E_fshared)(__this, ___0_dictionary, method);
}
inline int32_t Dictionary_2_FindEntry_m9F77A9A1350FCE78B97CC693F9F5444E8F3E645D (Dictionary_2_tACC278C341353EB0D3F5219D25804742C5DDC8A9* __this, Guid_t ___0_key, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_tACC278C341353EB0D3F5219D25804742C5DDC8A9*, Guid_t, const RuntimeMethod*))Dictionary_2_FindEntry_m9F77A9A1350FCE78B97CC693F9F5444E8F3E645D_gshared)(__this, ___0_key, method);
}
inline bool Dictionary_2_TryInsert_m7AC671B331F6CD67E04ADA8CD9174C90AB75E18D (Dictionary_2_tACC278C341353EB0D3F5219D25804742C5DDC8A9* __this, Guid_t ___0_key, Il2CppSharedGenericObject* ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tACC278C341353EB0D3F5219D25804742C5DDC8A9*, Guid_t, Il2CppSharedGenericObject*, uint8_t, const RuntimeMethod*))Dictionary_2_TryInsert_m7AC671B331F6CD67E04ADA8CD9174C90AB75E18D_gshared)(__this, ___0_key, ___1_value, ___2_behavior, method);
}
inline bool Dictionary_2_Remove_m2BD0E6825D66721033A14ABB6F727A8D1C8E0628 (Dictionary_2_tACC278C341353EB0D3F5219D25804742C5DDC8A9* __this, Guid_t ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tACC278C341353EB0D3F5219D25804742C5DDC8A9*, Guid_t, const RuntimeMethod*))Dictionary_2_Remove_m2BD0E6825D66721033A14ABB6F727A8D1C8E0628_gshared)(__this, ___0_key, method);
}
inline int32_t Dictionary_2_get_Count_m62CB7B656456CFDD5DC73F6ECAA5BAF24EFBA62C (Dictionary_2_tACC278C341353EB0D3F5219D25804742C5DDC8A9* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_tACC278C341353EB0D3F5219D25804742C5DDC8A9*, const RuntimeMethod*))Dictionary_2_get_Count_mBB454C6743410D3E06D44D494D4D6FF4CBBBDB1E_fshared)(__this, method);
}
inline void KeyValuePair_2__ctor_mAADB86C56A6064707D6B414C20886941E280A8C8 (KeyValuePair_2_t33B859F0514253F5DB6552A6B2C5730871612D1B* __this, Guid_t ___0_key, Il2CppSharedGenericObject* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2_t33B859F0514253F5DB6552A6B2C5730871612D1B*, Guid_t, Il2CppSharedGenericObject*, const RuntimeMethod*))KeyValuePair_2__ctor_mAADB86C56A6064707D6B414C20886941E280A8C8_gshared)(__this, ___0_key, ___1_value, method);
}
inline void Enumerator__ctor_m4414214982827D5E3EE390F4EC2D5458C617935D (Enumerator_t664339BF0446B4E80F1055BB5C01417CFF320E2A* __this, Dictionary_2_tACC278C341353EB0D3F5219D25804742C5DDC8A9* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t664339BF0446B4E80F1055BB5C01417CFF320E2A*, Dictionary_2_tACC278C341353EB0D3F5219D25804742C5DDC8A9*, int32_t, const RuntimeMethod*))Enumerator__ctor_m4414214982827D5E3EE390F4EC2D5458C617935D_gshared)(__this, ___0_dictionary, ___1_getEnumeratorRetType, method);
}
inline void Dictionary_2_CopyTo_m99C002B6D6FCB05E047BE5D0AE65AC2F6E3ACD60 (Dictionary_2_tACC278C341353EB0D3F5219D25804742C5DDC8A9* __this, KeyValuePair_2U5BU5D_t9DF131722D7F3B6C04EF603B3CF8C56E1AF7D856* ___0_array, int32_t ___1_index, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tACC278C341353EB0D3F5219D25804742C5DDC8A9*, KeyValuePair_2U5BU5D_t9DF131722D7F3B6C04EF603B3CF8C56E1AF7D856*, int32_t, const RuntimeMethod*))Dictionary_2_CopyTo_m99C002B6D6FCB05E047BE5D0AE65AC2F6E3ACD60_gshared)(__this, ___0_array, ___1_index, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Guid_GetHashCode_m239B7679BB9ED5A207B3D2F858B5F30FFC455408 (Guid_t* __this, const RuntimeMethod* method) ;
inline void Dictionary_2_Resize_m4B80FC5F8BA8BAE74E0EAB023D785DFDA03A7F6A (Dictionary_2_tACC278C341353EB0D3F5219D25804742C5DDC8A9* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tACC278C341353EB0D3F5219D25804742C5DDC8A9*, const RuntimeMethod*))Dictionary_2_Resize_m4B80FC5F8BA8BAE74E0EAB023D785DFDA03A7F6A_gshared)(__this, method);
}
inline void Dictionary_2_Resize_mADA0004999558ADFD7386840DF35CAA07E676568 (Dictionary_2_tACC278C341353EB0D3F5219D25804742C5DDC8A9* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tACC278C341353EB0D3F5219D25804742C5DDC8A9*, int32_t, bool, const RuntimeMethod*))Dictionary_2_Resize_mADA0004999558ADFD7386840DF35CAA07E676568_gshared)(__this, ___0_newSize, ___1_forceNewHashCodes, method);
}
inline void Dictionary_2_set_Item_m93D471C69BDF1EE119D28B69BFACB3B4C6E1B9C5 (Dictionary_2_tACC278C341353EB0D3F5219D25804742C5DDC8A9* __this, Guid_t ___0_key, Il2CppSharedGenericObject* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tACC278C341353EB0D3F5219D25804742C5DDC8A9*, Guid_t, Il2CppSharedGenericObject*, const RuntimeMethod*))Dictionary_2_set_Item_m93D471C69BDF1EE119D28B69BFACB3B4C6E1B9C5_gshared)(__this, ___0_key, ___1_value, method);
}
inline EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* EqualityComparer_1_CreateComparer_m9D6667E20D4FCBB62E2725016FE2FC32442FE530 (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_m9D6667E20D4FCBB62E2725016FE2FC32442FE530_gshared)(method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t2AAFF66C447B855AEB2EF13BDDE1F6301924188F* EqualityComparer_1_CreateComparer_m3C58D527F5C7E5B0BA994273A014FA76550155ED (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* EqualityComparer_1_CreateComparer_m64D3D774E7DAF5FC0206DC26D9BA53BF70F1F93B (const RuntimeMethod* method) ;
inline EqualityComparer_1_t6AF08CEAD675C05C1B701806606C7CB7CF53951F* EqualityComparer_1_CreateComparer_mDDE2C10C48FE5C71172724020C00DA2C431DBF21 (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t6AF08CEAD675C05C1B701806606C7CB7CF53951F* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_mDDE2C10C48FE5C71172724020C00DA2C431DBF21_gshared)(method);
}
inline EqualityComparer_1_t4515F567FF8CA58A31FECE4C986C6950AAF8A2CB* EqualityComparer_1_CreateComparer_mB0408C395999134DEDD71AB568D127159ACF5141 (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t4515F567FF8CA58A31FECE4C986C6950AAF8A2CB* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_mB0408C395999134DEDD71AB568D127159ACF5141_gshared)(method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t63A37CBBA150A456A5494B585BAAD61AEC84FCC3* EqualityComparer_1_CreateComparer_m5C45453CBD8B5F1DD5C8F3C77D3B5F80BB1B4B70 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_tC81AF0456B0ECB7415E30894699AAB099256D323* EqualityComparer_1_CreateComparer_mAFEFF1E34FDEF405591ED3C481B6713C43E0B44F (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* EqualityComparer_1_CreateComparer_mD3D60BAB4A1E7DF8FDC8779F5A1A3104CAD5202A (const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConditionalWeakTable_2__ctor_m6B5A16742229012703DE4792966758F53BD8D768_gshared (ConditionalWeakTable_2_tDA4DD9BAFAF3114A73F0B4D6AA3049208A3B288B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EphemeronU5BU5D_t4F80428A1142C3102C946127F8190063001742E8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_StaticInit);
	{
		RuntimeObject* L_0 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_0, NULL);
		__this->____lock = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____lock), (void*)L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		EphemeronU5BU5D_t4F80428A1142C3102C946127F8190063001742E8* L_1 = (EphemeronU5BU5D_t4F80428A1142C3102C946127F8190063001742E8*)(EphemeronU5BU5D_t4F80428A1142C3102C946127F8190063001742E8*)SZArrayNew(EphemeronU5BU5D_t4F80428A1142C3102C946127F8190063001742E8_il2cpp_TypeInfo_var, (uint32_t)((int32_t)13));
		__this->___data = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___data), (void*)L_1);
		EphemeronU5BU5D_t4F80428A1142C3102C946127F8190063001742E8* L_2 = __this->___data;
		CHECKED_LOCAL_INIT(GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_StaticInit,(GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		GC_register_ephemeron_array_m7798D3C75D2E2DC50CAA2422C2B36656D7793D18(L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConditionalWeakTable_2_Finalize_mEDFB93F6FABE2D6B6DCC9B0E9CBAB241AC693211_gshared (ConditionalWeakTable_2_tDA4DD9BAFAF3114A73F0B4D6AA3049208A3B288B* __this, const RuntimeMethod* method) 
{
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0002:
			{
				Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2((RuntimeObject*)__this, NULL);
				return;
			}
		});
		try
		{
			goto IL_0009;
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0009:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConditionalWeakTable_2_RehashWithoutResize_m016B51E55C242F8FBCAF10DA8825E4B07B46FACC_gshared (ConditionalWeakTable_2_tDA4DD9BAFAF3114A73F0B4D6AA3049208A3B288B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_StaticInit);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	int32_t V_4 = 0;
	{
		EphemeronU5BU5D_t4F80428A1142C3102C946127F8190063001742E8* L_0 = __this->___data;
		int32_t L_1 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_0)->max_length),NULL));
		V_0 = L_1;
		V_1 = 0;
		goto IL_003b;
	}

IL_000d:
	{
		EphemeronU5BU5D_t4F80428A1142C3102C946127F8190063001742E8* L_2 = __this->___data;
		int32_t L_3 = V_1;
		RuntimeObject* L_4 = ((L_2)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_3)))->___key;
		CHECKED_LOCAL_INIT(GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_StaticInit,(GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		RuntimeObject* L_5 = ((GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_StaticFields*)il2cpp_codegen_static_fields_for(GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var))->___EPHEMERON_TOMBSTONE;
		if ((!(((RuntimeObject*)(RuntimeObject*)L_4) == ((RuntimeObject*)(RuntimeObject*)L_5))))
		{
			goto IL_0037;
		}
	}
	{
		EphemeronU5BU5D_t4F80428A1142C3102C946127F8190063001742E8* L_6 = __this->___data;
		int32_t L_7 = V_1;
		((L_6)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_7)))->___key = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((L_6)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_7)))->___key), (void*)NULL);
	}

IL_0037:
	{
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_003b:
	{
		int32_t L_9 = V_1;
		int32_t L_10 = V_0;
		if ((((int32_t)L_9) < ((int32_t)L_10)))
		{
			goto IL_000d;
		}
	}
	{
		V_2 = 0;
		goto IL_010c;
	}

IL_0046:
	{
		EphemeronU5BU5D_t4F80428A1142C3102C946127F8190063001742E8* L_11 = __this->___data;
		int32_t L_12 = V_2;
		RuntimeObject* L_13 = ((L_11)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_12)))->___key;
		V_3 = L_13;
		RuntimeObject* L_14 = V_3;
		if (!L_14)
		{
			goto IL_0108;
		}
	}
	{
		RuntimeObject* L_15 = V_3;
		int32_t L_16;
		L_16 = RuntimeHelpers_GetHashCode_m7B5D57E1EE2A59EDFA1BD237E9B37C6C836D774B(L_15, NULL);
		int32_t L_17 = V_0;
		V_4 = ((int32_t)(((int32_t)(L_16&((int32_t)2147483647LL)))%L_17));
	}

IL_006e:
	{
		EphemeronU5BU5D_t4F80428A1142C3102C946127F8190063001742E8* L_18 = __this->___data;
		int32_t L_19 = V_4;
		RuntimeObject* L_20 = ((L_18)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_19)))->___key;
		if (L_20)
		{
			goto IL_00de;
		}
	}
	{
		EphemeronU5BU5D_t4F80428A1142C3102C946127F8190063001742E8* L_21 = __this->___data;
		int32_t L_22 = V_4;
		RuntimeObject* L_23 = V_3;
		((L_21)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_22)))->___key = L_23;
		Il2CppCodeGenWriteBarrier((void**)(&((L_21)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_22)))->___key), (void*)L_23);
		EphemeronU5BU5D_t4F80428A1142C3102C946127F8190063001742E8* L_24 = __this->___data;
		int32_t L_25 = V_4;
		EphemeronU5BU5D_t4F80428A1142C3102C946127F8190063001742E8* L_26 = __this->___data;
		int32_t L_27 = V_2;
		RuntimeObject* L_28 = ((L_26)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_27)))->___value;
		((L_24)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_25)))->___value = L_28;
		Il2CppCodeGenWriteBarrier((void**)(&((L_24)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_25)))->___value), (void*)L_28);
		EphemeronU5BU5D_t4F80428A1142C3102C946127F8190063001742E8* L_29 = __this->___data;
		int32_t L_30 = V_2;
		((L_29)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_30)))->___key = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((L_29)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_30)))->___key), (void*)NULL);
		EphemeronU5BU5D_t4F80428A1142C3102C946127F8190063001742E8* L_31 = __this->___data;
		int32_t L_32 = V_2;
		((L_31)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_32)))->___value = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((L_31)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_32)))->___value), (void*)NULL);
		goto IL_0108;
	}

IL_00de:
	{
		EphemeronU5BU5D_t4F80428A1142C3102C946127F8190063001742E8* L_33 = __this->___data;
		int32_t L_34 = V_4;
		RuntimeObject* L_35 = ((L_33)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_34)))->___key;
		RuntimeObject* L_36 = V_3;
		if ((((RuntimeObject*)(RuntimeObject*)L_35) == ((RuntimeObject*)(RuntimeObject*)L_36)))
		{
			goto IL_0108;
		}
	}
	{
		int32_t L_37 = V_4;
		int32_t L_38 = ((int32_t)il2cpp_codegen_add(L_37, 1));
		V_4 = L_38;
		int32_t L_39 = V_0;
		if ((!(((uint32_t)L_38) == ((uint32_t)L_39))))
		{
			goto IL_006e;
		}
	}
	{
		V_4 = 0;
		goto IL_006e;
	}

IL_0108:
	{
		int32_t L_40 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_40, 1));
	}

IL_010c:
	{
		int32_t L_41 = V_2;
		int32_t L_42 = V_0;
		if ((((int32_t)L_41) < ((int32_t)L_42)))
		{
			goto IL_0046;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConditionalWeakTable_2_RecomputeSize_mECDE2A17589E6F9500A83C0BD216672E9E829463_gshared (ConditionalWeakTable_2_tDA4DD9BAFAF3114A73F0B4D6AA3049208A3B288B* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		__this->___size = 0;
		V_0 = 0;
		goto IL_0030;
	}

IL_000b:
	{
		EphemeronU5BU5D_t4F80428A1142C3102C946127F8190063001742E8* L_0 = __this->___data;
		int32_t L_1 = V_0;
		RuntimeObject* L_2 = ((L_0)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_1)))->___key;
		if (!L_2)
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_3 = __this->___size;
		__this->___size = ((int32_t)il2cpp_codegen_add(L_3, 1));
	}

IL_002c:
	{
		int32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_4, 1));
	}

IL_0030:
	{
		int32_t L_5 = V_0;
		EphemeronU5BU5D_t4F80428A1142C3102C946127F8190063001742E8* L_6 = __this->___data;
		int32_t L_7 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_6)->max_length),NULL));
		if ((((int32_t)L_5) < ((int32_t)L_7)))
		{
			goto IL_000b;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConditionalWeakTable_2_Rehash_mE974FC607D3B12E845F0E83D2BB55A7F1F3639F6_gshared (ConditionalWeakTable_2_tDA4DD9BAFAF3114A73F0B4D6AA3049208A3B288B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EphemeronU5BU5D_t4F80428A1142C3102C946127F8190063001742E8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit);
	CHECKED_LOCAL(GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_StaticInit);
	uint32_t V_0 = 0;
	EphemeronU5BU5D_t4F80428A1142C3102C946127F8190063001742E8* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	RuntimeObject* V_9 = NULL;
	{
		ConditionalWeakTable_2_RecomputeSize_mECDE2A17589E6F9500A83C0BD216672E9E829463(__this, NULL);
		int32_t L_0 = __this->___size;
		float L_1 = (il2cpp_codegen_conv<float,int32_t,int32_t,false,false>(L_0,NULL));
		int32_t L_2 = (il2cpp_codegen_conv<int32_t,float,float,false,false>(((float)(L_1/(0.699999988f))),NULL));
		CHECKED_LOCAL_INIT(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit,(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_3;
		L_3 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(((int32_t)(((int32_t)(L_2<<1))|1)), NULL);
		V_0 = L_3;
		uint32_t L_4 = V_0;
		double L_5 = (il2cpp_codegen_conv<double,uint32_t,int32_t,false,true>(L_4,NULL));
		float L_6 = (il2cpp_codegen_conv<float,double,double,false,false>(L_5,NULL));
		EphemeronU5BU5D_t4F80428A1142C3102C946127F8190063001742E8* L_7 = __this->___data;
		int32_t L_8 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_7)->max_length),NULL));
		float L_9 = (il2cpp_codegen_conv<float,int32_t,int32_t,false,false>(L_8,NULL));
		if ((!(((float)L_6) > ((float)((float)il2cpp_codegen_multiply(L_9, (0.5f)))))))
		{
			goto IL_004d;
		}
	}
	{
		uint32_t L_10 = V_0;
		double L_11 = (il2cpp_codegen_conv<double,uint32_t,int32_t,false,true>(L_10,NULL));
		float L_12 = (il2cpp_codegen_conv<float,double,double,false,false>(L_11,NULL));
		EphemeronU5BU5D_t4F80428A1142C3102C946127F8190063001742E8* L_13 = __this->___data;
		int32_t L_14 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_13)->max_length),NULL));
		float L_15 = (il2cpp_codegen_conv<float,int32_t,int32_t,false,false>(L_14,NULL));
		if ((!(((float)L_12) < ((float)((float)il2cpp_codegen_multiply(L_15, (1.10000002f)))))))
		{
			goto IL_004d;
		}
	}
	{
		ConditionalWeakTable_2_RehashWithoutResize_m016B51E55C242F8FBCAF10DA8825E4B07B46FACC(__this, NULL);
		return;
	}

IL_004d:
	{
		uint32_t L_16 = V_0;
		EphemeronU5BU5D_t4F80428A1142C3102C946127F8190063001742E8* L_17 = (EphemeronU5BU5D_t4F80428A1142C3102C946127F8190063001742E8*)(EphemeronU5BU5D_t4F80428A1142C3102C946127F8190063001742E8*)SZArrayNew(EphemeronU5BU5D_t4F80428A1142C3102C946127F8190063001742E8_il2cpp_TypeInfo_var, (uint32_t)L_16);
		V_1 = L_17;
		EphemeronU5BU5D_t4F80428A1142C3102C946127F8190063001742E8* L_18 = V_1;
		CHECKED_LOCAL_INIT(GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_StaticInit,(GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		GC_register_ephemeron_array_m7798D3C75D2E2DC50CAA2422C2B36656D7793D18(L_18, NULL);
		__this->___size = 0;
		V_2 = 0;
		goto IL_011c;
	}

IL_0068:
	{
		EphemeronU5BU5D_t4F80428A1142C3102C946127F8190063001742E8* L_19 = __this->___data;
		int32_t L_20 = V_2;
		RuntimeObject* L_21 = ((L_19)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_20)))->___key;
		V_3 = L_21;
		EphemeronU5BU5D_t4F80428A1142C3102C946127F8190063001742E8* L_22 = __this->___data;
		int32_t L_23 = V_2;
		RuntimeObject* L_24 = ((L_22)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_23)))->___value;
		V_4 = L_24;
		RuntimeObject* L_25 = V_3;
		if (!L_25)
		{
			goto IL_0118;
		}
	}
	{
		RuntimeObject* L_26 = V_3;
		CHECKED_LOCAL_INIT(GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_StaticInit,(GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		RuntimeObject* L_27 = ((GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_StaticFields*)il2cpp_codegen_static_fields_for(GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var))->___EPHEMERON_TOMBSTONE;
		if ((((RuntimeObject*)(RuntimeObject*)L_26) == ((RuntimeObject*)(RuntimeObject*)L_27)))
		{
			goto IL_0118;
		}
	}
	{
		EphemeronU5BU5D_t4F80428A1142C3102C946127F8190063001742E8* L_28 = V_1;
		int32_t L_29 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_28)->max_length),NULL));
		V_5 = L_29;
		V_8 = (-1);
		RuntimeObject* L_30 = V_3;
		int32_t L_31;
		L_31 = RuntimeHelpers_GetHashCode_m7B5D57E1EE2A59EDFA1BD237E9B37C6C836D774B(L_30, NULL);
		int32_t L_32 = V_5;
		int32_t L_33 = ((int32_t)(((int32_t)(L_31&((int32_t)2147483647LL)))%L_32));
		V_7 = L_33;
		V_6 = L_33;
	}

IL_00b7:
	{
		EphemeronU5BU5D_t4F80428A1142C3102C946127F8190063001742E8* L_34 = V_1;
		int32_t L_35 = V_6;
		RuntimeObject* L_36 = ((L_34)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_35)))->___key;
		V_9 = L_36;
		RuntimeObject* L_37 = V_9;
		if (!L_37)
		{
			goto IL_00d3;
		}
	}
	{
		RuntimeObject* L_38 = V_9;
		CHECKED_LOCAL_INIT(GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_StaticInit,(GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		RuntimeObject* L_39 = ((GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_StaticFields*)il2cpp_codegen_static_fields_for(GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var))->___EPHEMERON_TOMBSTONE;
		if ((!(((RuntimeObject*)(RuntimeObject*)L_38) == ((RuntimeObject*)(RuntimeObject*)L_39))))
		{
			goto IL_00d9;
		}
	}

IL_00d3:
	{
		int32_t L_40 = V_6;
		V_8 = L_40;
		goto IL_00ed;
	}

IL_00d9:
	{
		int32_t L_41 = V_6;
		int32_t L_42 = ((int32_t)il2cpp_codegen_add(L_41, 1));
		V_6 = L_42;
		int32_t L_43 = V_5;
		if ((!(((uint32_t)L_42) == ((uint32_t)L_43))))
		{
			goto IL_00e7;
		}
	}
	{
		V_6 = 0;
	}

IL_00e7:
	{
		int32_t L_44 = V_6;
		int32_t L_45 = V_7;
		if ((!(((uint32_t)L_44) == ((uint32_t)L_45))))
		{
			goto IL_00b7;
		}
	}

IL_00ed:
	{
		EphemeronU5BU5D_t4F80428A1142C3102C946127F8190063001742E8* L_46 = V_1;
		int32_t L_47 = V_8;
		RuntimeObject* L_48 = V_3;
		((L_46)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_47)))->___key = L_48;
		Il2CppCodeGenWriteBarrier((void**)(&((L_46)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_47)))->___key), (void*)L_48);
		EphemeronU5BU5D_t4F80428A1142C3102C946127F8190063001742E8* L_49 = V_1;
		int32_t L_50 = V_8;
		RuntimeObject* L_51 = V_4;
		((L_49)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_50)))->___value = L_51;
		Il2CppCodeGenWriteBarrier((void**)(&((L_49)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_50)))->___value), (void*)L_51);
		int32_t L_52 = __this->___size;
		__this->___size = ((int32_t)il2cpp_codegen_add(L_52, 1));
	}

IL_0118:
	{
		int32_t L_53 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_53, 1));
	}

IL_011c:
	{
		int32_t L_54 = V_2;
		EphemeronU5BU5D_t4F80428A1142C3102C946127F8190063001742E8* L_55 = __this->___data;
		int32_t L_56 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_55)->max_length),NULL));
		if ((((int32_t)L_54) < ((int32_t)L_56)))
		{
			goto IL_0068;
		}
	}
	{
		EphemeronU5BU5D_t4F80428A1142C3102C946127F8190063001742E8* L_57 = V_1;
		__this->___data = L_57;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___data), (void*)L_57);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConditionalWeakTable_2_Add_m0E15783C5C4D648412273FE8259A7A644F5A2CD0_gshared (ConditionalWeakTable_2_tDA4DD9BAFAF3114A73F0B4D6AA3049208A3B288B* __this, Il2CppSharedGenericObject* ___0_key, Il2CppSharedGenericObject* ___1_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_StaticInit);
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	RuntimeObject* V_6 = NULL;
	{
		Il2CppSharedGenericObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0018;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m6D9C7B47EA708382838B264BA02EBB7576DFA155(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBE1D2E11D58177AC5AC7C4A993B5BE6408F97DAA)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE7D028CCE3B6E7B61AE2C752D7AE970DA04AB7C6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0018:
	{
		RuntimeObject* L_2 = __this->____lock;
		V_0 = L_2;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0107:
			{
				{
					bool L_3 = V_1;
					if (!L_3)
					{
						goto IL_0110;
					}
				}
				{
					RuntimeObject* L_4 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_4, NULL);
				}

IL_0110:
				{
					return;
				}
			}
		});
		try
		{
			{
				RuntimeObject* L_5 = V_0;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_5, (&V_1), NULL);
				int32_t L_6 = __this->___size;
				float L_7 = (il2cpp_codegen_conv<float,int32_t,int32_t,false,false>(L_6,NULL));
				EphemeronU5BU5D_t4F80428A1142C3102C946127F8190063001742E8* L_8 = __this->___data;
				int32_t L_9 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_8)->max_length),NULL));
				float L_10 = (il2cpp_codegen_conv<float,int32_t,int32_t,false,false>(L_9,NULL));
				if ((!(((float)L_7) >= ((float)((float)il2cpp_codegen_multiply(L_10, (0.699999988f)))))))
				{
					goto IL_0047_1;
				}
			}
			{
				ConditionalWeakTable_2_Rehash_mE974FC607D3B12E845F0E83D2BB55A7F1F3639F6(__this, NULL);
			}

IL_0047_1:
			{
				EphemeronU5BU5D_t4F80428A1142C3102C946127F8190063001742E8* L_11 = __this->___data;
				int32_t L_12 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_11)->max_length),NULL));
				V_2 = L_12;
				V_5 = (-1);
				Il2CppSharedGenericObject* L_13 = ___0_key;
				int32_t L_14;
				L_14 = RuntimeHelpers_GetHashCode_m7B5D57E1EE2A59EDFA1BD237E9B37C6C836D774B((RuntimeObject*)L_13, NULL);
				int32_t L_15 = V_2;
				int32_t L_16 = ((int32_t)(((int32_t)(L_14&((int32_t)2147483647LL)))%L_15));
				V_4 = L_16;
				V_3 = L_16;
			}

IL_006a_1:
			{
				EphemeronU5BU5D_t4F80428A1142C3102C946127F8190063001742E8* L_17 = __this->___data;
				int32_t L_18 = V_3;
				RuntimeObject* L_19 = ((L_17)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_18)))->___key;
				V_6 = L_19;
				RuntimeObject* L_20 = V_6;
				if (L_20)
				{
					goto IL_008b_1;
				}
			}
			{
				int32_t L_21 = V_5;
				if ((!(((uint32_t)L_21) == ((uint32_t)(-1)))))
				{
					goto IL_00c7_1;
				}
			}
			{
				int32_t L_22 = V_3;
				V_5 = L_22;
				goto IL_00c7_1;
			}

IL_008b_1:
			{
				RuntimeObject* L_23 = V_6;
				CHECKED_LOCAL_INIT(GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_StaticInit,(GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
				RuntimeObject* L_24 = ((GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_StaticFields*)il2cpp_codegen_static_fields_for(GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var))->___EPHEMERON_TOMBSTONE;
				if ((!(((RuntimeObject*)(RuntimeObject*)L_23) == ((RuntimeObject*)(RuntimeObject*)L_24))))
				{
					goto IL_009e_1;
				}
			}
			{
				int32_t L_25 = V_5;
				if ((!(((uint32_t)L_25) == ((uint32_t)(-1)))))
				{
					goto IL_009e_1;
				}
			}
			{
				int32_t L_26 = V_3;
				V_5 = L_26;
				goto IL_00b8_1;
			}

IL_009e_1:
			{
				RuntimeObject* L_27 = V_6;
				Il2CppSharedGenericObject* L_28 = ___0_key;
				if ((!(((RuntimeObject*)(RuntimeObject*)L_27) == ((RuntimeObject*)(Il2CppSharedGenericObject*)L_28))))
				{
					goto IL_00b8_1;
				}
			}
			{
				ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_29 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
				ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_29, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2AA2E732DB2949176A84E755559B51D778BADC01)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE7D028CCE3B6E7B61AE2C752D7AE970DA04AB7C6)), NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_29, method);
			}

IL_00b8_1:
			{
				int32_t L_30 = V_3;
				int32_t L_31 = ((int32_t)il2cpp_codegen_add(L_30, 1));
				V_3 = L_31;
				int32_t L_32 = V_2;
				if ((!(((uint32_t)L_31) == ((uint32_t)L_32))))
				{
					goto IL_00c2_1;
				}
			}
			{
				V_3 = 0;
			}

IL_00c2_1:
			{
				int32_t L_33 = V_3;
				int32_t L_34 = V_4;
				if ((!(((uint32_t)L_33) == ((uint32_t)L_34))))
				{
					goto IL_006a_1;
				}
			}

IL_00c7_1:
			{
				EphemeronU5BU5D_t4F80428A1142C3102C946127F8190063001742E8* L_35 = __this->___data;
				int32_t L_36 = V_5;
				Il2CppSharedGenericObject* L_37 = ___0_key;
				((L_35)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_36)))->___key = (RuntimeObject*)L_37;
				Il2CppCodeGenWriteBarrier((void**)(&((L_35)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_36)))->___key), (void*)(RuntimeObject*)L_37);
				EphemeronU5BU5D_t4F80428A1142C3102C946127F8190063001742E8* L_38 = __this->___data;
				int32_t L_39 = V_5;
				Il2CppSharedGenericObject* L_40 = ___1_value;
				((L_38)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_39)))->___value = (RuntimeObject*)L_40;
				Il2CppCodeGenWriteBarrier((void**)(&((L_38)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_39)))->___value), (void*)(RuntimeObject*)L_40);
				int32_t L_41 = __this->___size;
				__this->___size = ((int32_t)il2cpp_codegen_add(L_41, 1));
				goto IL_0111;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0111:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConditionalWeakTable_2_Remove_m035485E631710955A475F95DE3800BBD2EBD20B5_gshared (ConditionalWeakTable_2_tDA4DD9BAFAF3114A73F0B4D6AA3049208A3B288B* __this, Il2CppSharedGenericObject* ___0_key, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_StaticInit);
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	RuntimeObject* V_5 = NULL;
	bool V_6 = false;
	{
		Il2CppSharedGenericObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0018;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m6D9C7B47EA708382838B264BA02EBB7576DFA155(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBE1D2E11D58177AC5AC7C4A993B5BE6408F97DAA)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE7D028CCE3B6E7B61AE2C752D7AE970DA04AB7C6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0018:
	{
		RuntimeObject* L_2 = __this->____lock;
		V_0 = L_2;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00aa:
			{
				{
					bool L_3 = V_1;
					if (!L_3)
					{
						goto IL_00b3;
					}
				}
				{
					RuntimeObject* L_4 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_4, NULL);
				}

IL_00b3:
				{
					return;
				}
			}
		});
		try
		{
			{
				RuntimeObject* L_5 = V_0;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_5, (&V_1), NULL);
				EphemeronU5BU5D_t4F80428A1142C3102C946127F8190063001742E8* L_6 = __this->___data;
				int32_t L_7 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_6)->max_length),NULL));
				V_2 = L_7;
				Il2CppSharedGenericObject* L_8 = ___0_key;
				int32_t L_9;
				L_9 = RuntimeHelpers_GetHashCode_m7B5D57E1EE2A59EDFA1BD237E9B37C6C836D774B((RuntimeObject*)L_8, NULL);
				int32_t L_10 = V_2;
				int32_t L_11 = ((int32_t)(((int32_t)(L_9&((int32_t)2147483647LL)))%L_10));
				V_4 = L_11;
				V_3 = L_11;
			}

IL_0049_1:
			{
				EphemeronU5BU5D_t4F80428A1142C3102C946127F8190063001742E8* L_12 = __this->___data;
				int32_t L_13 = V_3;
				RuntimeObject* L_14 = ((L_12)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_13)))->___key;
				V_5 = L_14;
				RuntimeObject* L_15 = V_5;
				Il2CppSharedGenericObject* L_16 = ___0_key;
				if ((!(((RuntimeObject*)(RuntimeObject*)L_15) == ((RuntimeObject*)(Il2CppSharedGenericObject*)L_16))))
				{
					goto IL_0093_1;
				}
			}
			{
				EphemeronU5BU5D_t4F80428A1142C3102C946127F8190063001742E8* L_17 = __this->___data;
				int32_t L_18 = V_3;
				CHECKED_LOCAL_INIT(GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_StaticInit,(GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
				RuntimeObject* L_19 = ((GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_StaticFields*)il2cpp_codegen_static_fields_for(GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var))->___EPHEMERON_TOMBSTONE;
				((L_17)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_18)))->___key = L_19;
				Il2CppCodeGenWriteBarrier((void**)(&((L_17)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_18)))->___key), (void*)L_19);
				EphemeronU5BU5D_t4F80428A1142C3102C946127F8190063001742E8* L_20 = __this->___data;
				int32_t L_21 = V_3;
				((L_20)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_21)))->___value = NULL;
				Il2CppCodeGenWriteBarrier((void**)(&((L_20)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_21)))->___value), (void*)NULL);
				V_6 = (bool)1;
				goto IL_00b6;
			}

IL_0093_1:
			{
				RuntimeObject* L_22 = V_5;
				if (L_22)
				{
					goto IL_0099_1;
				}
			}
			{
				goto IL_00b4;
			}

IL_0099_1:
			{
				int32_t L_23 = V_3;
				int32_t L_24 = ((int32_t)il2cpp_codegen_add(L_23, 1));
				V_3 = L_24;
				int32_t L_25 = V_2;
				if ((!(((uint32_t)L_24) == ((uint32_t)L_25))))
				{
					goto IL_00a3_1;
				}
			}
			{
				V_3 = 0;
			}

IL_00a3_1:
			{
				int32_t L_26 = V_3;
				int32_t L_27 = V_4;
				if ((!(((uint32_t)L_26) == ((uint32_t)L_27))))
				{
					goto IL_0049_1;
				}
			}
			{
				goto IL_00b4;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00b4:
	{
		return (bool)0;
	}

IL_00b6:
	{
		bool L_28 = V_6;
		return L_28;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConditionalWeakTable_2_TryGetValue_m90CA5ADAC109E3D265A2A6AD8B5165727D9605D2_gshared (ConditionalWeakTable_2_tDA4DD9BAFAF3114A73F0B4D6AA3049208A3B288B* __this, Il2CppSharedGenericObject* ___0_key, Il2CppSharedGenericObject** ___1_value, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	RuntimeObject* V_5 = NULL;
	bool V_6 = false;
	{
		Il2CppSharedGenericObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0018;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m6D9C7B47EA708382838B264BA02EBB7576DFA155(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBE1D2E11D58177AC5AC7C4A993B5BE6408F97DAA)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE7D028CCE3B6E7B61AE2C752D7AE970DA04AB7C6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0018:
	{
		Il2CppSharedGenericObject** L_2 = ___1_value;
		il2cpp_codegen_initobj(L_2, sizeof(Il2CppSharedGenericObject*));
		RuntimeObject* L_3 = __this->____lock;
		V_0 = L_3;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00a5:
			{
				{
					bool L_4 = V_1;
					if (!L_4)
					{
						goto IL_00ae;
					}
				}
				{
					RuntimeObject* L_5 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_5, NULL);
				}

IL_00ae:
				{
					return;
				}
			}
		});
		try
		{
			{
				RuntimeObject* L_6 = V_0;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_6, (&V_1), NULL);
				EphemeronU5BU5D_t4F80428A1142C3102C946127F8190063001742E8* L_7 = __this->___data;
				int32_t L_8 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_7)->max_length),NULL));
				V_2 = L_8;
				Il2CppSharedGenericObject* L_9 = ___0_key;
				int32_t L_10;
				L_10 = RuntimeHelpers_GetHashCode_m7B5D57E1EE2A59EDFA1BD237E9B37C6C836D774B((RuntimeObject*)L_9, NULL);
				int32_t L_11 = V_2;
				int32_t L_12 = ((int32_t)(((int32_t)(L_10&((int32_t)2147483647LL)))%L_11));
				V_4 = L_12;
				V_3 = L_12;
			}

IL_0050_1:
			{
				EphemeronU5BU5D_t4F80428A1142C3102C946127F8190063001742E8* L_13 = __this->___data;
				int32_t L_14 = V_3;
				RuntimeObject* L_15 = ((L_13)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_14)))->___key;
				V_5 = L_15;
				RuntimeObject* L_16 = V_5;
				Il2CppSharedGenericObject* L_17 = ___0_key;
				if ((!(((RuntimeObject*)(RuntimeObject*)L_16) == ((RuntimeObject*)(Il2CppSharedGenericObject*)L_17))))
				{
					goto IL_008e_1;
				}
			}
			{
				Il2CppSharedGenericObject** L_18 = ___1_value;
				EphemeronU5BU5D_t4F80428A1142C3102C946127F8190063001742E8* L_19 = __this->___data;
				int32_t L_20 = V_3;
				RuntimeObject* L_21 = ((L_19)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_20)))->___value;
				*(Il2CppSharedGenericObject**)L_18 = ((Il2CppSharedGenericObject*)Castclass((RuntimeObject*)L_21, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 3)));
				Il2CppCodeGenWriteBarrier((void**)(Il2CppSharedGenericObject**)L_18, (void*)((Il2CppSharedGenericObject*)Castclass((RuntimeObject*)L_21, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 3))));
				V_6 = (bool)1;
				goto IL_00b1;
			}

IL_008e_1:
			{
				RuntimeObject* L_22 = V_5;
				if (L_22)
				{
					goto IL_0094_1;
				}
			}
			{
				goto IL_00af;
			}

IL_0094_1:
			{
				int32_t L_23 = V_3;
				int32_t L_24 = ((int32_t)il2cpp_codegen_add(L_23, 1));
				V_3 = L_24;
				int32_t L_25 = V_2;
				if ((!(((uint32_t)L_24) == ((uint32_t)L_25))))
				{
					goto IL_009e_1;
				}
			}
			{
				V_3 = 0;
			}

IL_009e_1:
			{
				int32_t L_26 = V_3;
				int32_t L_27 = V_4;
				if ((!(((uint32_t)L_26) == ((uint32_t)L_27))))
				{
					goto IL_0050_1;
				}
			}
			{
				goto IL_00af;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00af:
	{
		return (bool)0;
	}

IL_00b1:
	{
		bool L_28 = V_6;
		return L_28;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* ConditionalWeakTable_2_GetValue_m28C73BB07A49B531FDA4C156567FDF5768F63DA8_gshared (ConditionalWeakTable_2_tDA4DD9BAFAF3114A73F0B4D6AA3049208A3B288B* __this, Il2CppSharedGenericObject* ___0_key, CreateValueCallback_t8463FCCADB8B16880DB710DACCEF3B1531B1649B* ___1_createValueCallback, const RuntimeMethod* method) 
{
	Il2CppSharedGenericObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	bool V_2 = false;
	Il2CppSharedGenericObject* V_3 = NULL;
	{
		CreateValueCallback_t8463FCCADB8B16880DB710DACCEF3B1531B1649B* L_0 = ___1_createValueCallback;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m6D9C7B47EA708382838B264BA02EBB7576DFA155(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralEE87639B3A491E0E26BF98722E7EF266338FFC27)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5B752FEA6C79E292F7975C9C7E92D2B4616F6B66)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0013:
	{
		RuntimeObject* L_2 = __this->____lock;
		V_1 = L_2;
		V_2 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0045:
			{
				{
					bool L_3 = V_2;
					if (!L_3)
					{
						goto IL_004e;
					}
				}
				{
					RuntimeObject* L_4 = V_1;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_4, NULL);
				}

IL_004e:
				{
					return;
				}
			}
		});
		try
		{
			{
				RuntimeObject* L_5 = V_1;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_5, (&V_2), NULL);
				Il2CppSharedGenericObject* L_6 = ___0_key;
				bool L_7;
				L_7 = ConditionalWeakTable_2_TryGetValue_m90CA5ADAC109E3D265A2A6AD8B5165727D9605D2(__this, L_6, (&V_0), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 4));
				if (!L_7)
				{
					goto IL_0033_1;
				}
			}
			{
				Il2CppSharedGenericObject* L_8 = V_0;
				V_3 = L_8;
				goto IL_0051;
			}

IL_0033_1:
			{
				CreateValueCallback_t8463FCCADB8B16880DB710DACCEF3B1531B1649B* L_9 = ___1_createValueCallback;
				Il2CppSharedGenericObject* L_10 = ___0_key;
				Il2CppSharedGenericObject* L_11;
				L_11 = CreateValueCallback_Invoke_mCBFB50800547234672DBBA87011CD2B5BC503308_inline(L_9, L_10, NULL);
				V_0 = L_11;
				Il2CppSharedGenericObject* L_12 = ___0_key;
				Il2CppSharedGenericObject* L_13 = V_0;
				ConditionalWeakTable_2_Add_m0E15783C5C4D648412273FE8259A7A644F5A2CD0(__this, L_12, L_13, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 6));
				goto IL_004f;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_004f:
	{
		Il2CppSharedGenericObject* L_14 = V_0;
		return L_14;
	}

IL_0051:
	{
		Il2CppSharedGenericObject* L_15 = V_3;
		return L_15;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ConditionalWeakTable_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_mE505D82253CA05FE57ADDD3ABD01769448BFEF33_gshared (ConditionalWeakTable_2_tDA4DD9BAFAF3114A73F0B4D6AA3049208A3B288B* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	RuntimeObject* V_2 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	{
		RuntimeObject* L_0 = __this->____lock;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0030:
			{
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_0039;
					}
				}
				{
					RuntimeObject* L_2 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_2, NULL);
				}

IL_0039:
				{
					return;
				}
			}
		});
		try
		{
			{
				RuntimeObject* L_3 = V_0;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_3, (&V_1), NULL);
				int32_t L_4 = __this->___size;
				if (!L_4)
				{
					goto IL_0023_1;
				}
			}
			{
				Enumerator_t7F5D6C6AE7869482698189D9AB03383A976081DF* L_5 = (Enumerator_t7F5D6C6AE7869482698189D9AB03383A976081DF*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7));
				Enumerator__ctor_m030A122C25684BFEAB8B9214E9E281FF990638F2(L_5, __this, NULL);
				V_2 = (RuntimeObject*)L_5;
				RuntimeObject* L_6 = V_2;
				G_B4_0 = L_6;
				goto IL_002d_1;
			}

IL_0023_1:
			{
				KeyValuePair_2U5BU5D_t78D9368B607748564E2110C38FC6FCC5150E8DDA* L_7;
				L_7 = Array_Empty_TisKeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826_m5E4F0239414B89A37EAA5475EF0CAA31256A19AB_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 9));
				RuntimeObject* L_8;
				L_8 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 10), (RuntimeObject*)L_7);
				G_B4_0 = L_8;
			}

IL_002d_1:
			{
				V_2 = G_B4_0;
				goto IL_003a;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003a:
	{
		RuntimeObject* L_9 = V_2;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ConditionalWeakTable_2_System_Collections_IEnumerable_GetEnumerator_mE8424BD72A0EBAFEC99805EB1B9ABB83D66E0B0D_gshared (ConditionalWeakTable_2_tDA4DD9BAFAF3114A73F0B4D6AA3049208A3B288B* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0;
		L_0 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 10), (RuntimeObject*)__this);
		return (RuntimeObject*)L_0;
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConfiguredTaskAwaitable_1__ctor_mCF681CB4825E085E3ED42B9E990609C36F282536_fshared (ConfiguredTaskAwaitable_1_t7FFB03EADF9A67E9EE2A5DECE3FB4353344FE922* __this, Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* ___0_task, bool ___1_continueOnCapturedContext, const RuntimeMethod* method) 
{
	{
		Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* L_0 = ___0_task;
		bool L_1 = ___1_continueOnCapturedContext;
		ConfiguredTaskAwaiter_tB2708B017EE82067B2492CD61623784137A1AE0A L_2;
		memset((&L_2), 0, sizeof(L_2));
		ConfiguredTaskAwaiter__ctor_m5B53A410AE8900B3D565ED7C7FE9DAB92B2ECEC9((&L_2), L_0, L_1, NULL);
		__this->___m_configuredTaskAwaiter = L_2;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___m_configuredTaskAwaiter))->___m_task), (void*)NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfiguredTaskAwaiter_tB2708B017EE82067B2492CD61623784137A1AE0A ConfiguredTaskAwaitable_1_GetAwaiter_mA5D8A0E225B9D580F1FC5216C47A0B828B033390_fshared (ConfiguredTaskAwaitable_1_t7FFB03EADF9A67E9EE2A5DECE3FB4353344FE922* __this, const RuntimeMethod* method) 
{
	{
		ConfiguredTaskAwaiter_tB2708B017EE82067B2492CD61623784137A1AE0A L_0 = __this->___m_configuredTaskAwaiter;
		return L_0;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConfiguredTaskAwaiter_GetResult_mA0D0419EF40E9DF864B87B495FFE05C08475C00B (ConfiguredTaskAwaiter_tADFEF9AE6CB4E22E17B1DFA386EE3D86DB8955E4* __this, const RuntimeMethod* method) 
{
	{
		Task_1_t824317F4B958F7512E8F7300511752937A6C6043* L_0 = __this->___m_task;
		TaskAwaiter_ValidateEnd_m6BB967A466C17A106BC547009EDE196266651751(L_0, NULL);
		Task_1_t824317F4B958F7512E8F7300511752937A6C6043* L_1 = __this->___m_task;
		bool L_2;
		L_2 = Task_1_get_ResultOnSuccess_m15F655DF9F8EE6F8388A9432454900F07EFC57BB_inline(L_1, NULL);
		return L_2;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ConfiguredTaskAwaiter_GetResult_mF1FF6CBD66A3F581D413793BA8C2AF58B707D9CC (ConfiguredTaskAwaiter_t8FC486401D1951F2426478F2050EE290197B6E80* __this, const RuntimeMethod* method) 
{
	{
		Task_1_t4C228DE57804012969575431CFF12D57C875552D* L_0 = __this->___m_task;
		TaskAwaiter_ValidateEnd_m6BB967A466C17A106BC547009EDE196266651751(L_0, NULL);
		Task_1_t4C228DE57804012969575431CFF12D57C875552D* L_1 = __this->___m_task;
		int32_t L_2;
		L_2 = Task_1_get_ResultOnSuccess_mF098AC108FFA2E0D992306C6D956BA37874FAC77_inline(L_1, NULL);
		return L_2;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VoidTaskResult_t73B628B764C6668DAAAE2D37BD6FC07BCA27A5AC ConfiguredTaskAwaiter_GetResult_m916ADADCB83D00E93327439DF6E90E45D1919574 (ConfiguredTaskAwaiter_t10F0057B7F31913C37CBB3E2900A547A6C29CD6A* __this, const RuntimeMethod* method) 
{
	{
		Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17* L_0 = __this->___m_task;
		TaskAwaiter_ValidateEnd_m6BB967A466C17A106BC547009EDE196266651751(L_0, NULL);
		Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17* L_1 = __this->___m_task;
		VoidTaskResult_t73B628B764C6668DAAAE2D37BD6FC07BCA27A5AC L_2;
		L_2 = Task_1_get_ResultOnSuccess_mF2B4314A2FC0448358439C96FC6217501A2ACFE0_inline(L_1, NULL);
		return L_2;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* ConfiguredTaskAwaiter_GetResult_m42785B19DDBEFB37E19238577030C0AFBFE36DE5_gshared (ConfiguredTaskAwaiter_tB493FE87234355650C78E0470CA13DDB7723BC9E* __this, const RuntimeMethod* method) 
{
	{
		Task_1_tB348EA1B62802484AB33A91D4404C52DCF7BDB18* L_0 = __this->___m_task;
		TaskAwaiter_ValidateEnd_m6BB967A466C17A106BC547009EDE196266651751((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_0, NULL);
		Task_1_tB348EA1B62802484AB33A91D4404C52DCF7BDB18* L_1 = __this->___m_task;
		Il2CppSharedGenericObject* L_2;
		L_2 = Task_1_get_ResultOnSuccess_mBB7F2275D4EF61A83D08373AA0D41ACC31AF73BD_inline(L_1, NULL);
		return L_2;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConfiguredTaskAwaiter__ctor_m5B53A410AE8900B3D565ED7C7FE9DAB92B2ECEC9_fshared (ConfiguredTaskAwaiter_tB2708B017EE82067B2492CD61623784137A1AE0A* __this, Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* ___0_task, bool ___1_continueOnCapturedContext, const RuntimeMethod* method) 
{
	{
		Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* L_0 = ___0_task;
		__this->___m_task = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_task), (void*)L_0);
		bool L_1 = ___1_continueOnCapturedContext;
		__this->___m_continueOnCapturedContext = L_1;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConfiguredTaskAwaiter_get_IsCompleted_mAEF99891A1B576254827D55C54C6E0E1787AA7EF_fshared (ConfiguredTaskAwaiter_tB2708B017EE82067B2492CD61623784137A1AE0A* __this, const RuntimeMethod* method) 
{
	{
		Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* L_0 = __this->___m_task;
		bool L_1;
		L_1 = Task_get_IsCompleted_m942D6D536545EF059089398B19435591561BB831((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConfiguredTaskAwaiter_UnsafeOnCompleted_m2EFFC8EFEDD85479876580D8FDEF045B2DCA2D66_fshared (ConfiguredTaskAwaiter_tB2708B017EE82067B2492CD61623784137A1AE0A* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_continuation, const RuntimeMethod* method) 
{
	{
		Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* L_0 = __this->___m_task;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = ___0_continuation;
		bool L_2 = __this->___m_continueOnCapturedContext;
		TaskAwaiter_OnCompletedInternal_m8017DEDF7A41F58AFB178F31D417F47D3F83D5D4((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_0, L_1, L_2, (bool)0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void ConfiguredTaskAwaiter_UnsafeOnCompleted_m2EFFC8EFEDD85479876580D8FDEF045B2DCA2D66_AdjustorThunk (RuntimeObject* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_continuation, const RuntimeMethod* method)
{
	ConfiguredTaskAwaiter_tB2708B017EE82067B2492CD61623784137A1AE0A* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ConfiguredTaskAwaiter_tB2708B017EE82067B2492CD61623784137A1AE0A>(__this);
	ConfiguredTaskAwaiter_UnsafeOnCompleted_m2EFFC8EFEDD85479876580D8FDEF045B2DCA2D66(_thisAdjusted, ___0_continuation, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConfiguredTaskAwaiter_GetResult_m14D32632322F465B16F5EB858BFE5886B7217701_fshared (ConfiguredTaskAwaiter_tB2708B017EE82067B2492CD61623784137A1AE0A* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_TResult_t1D607D10F13D62BB25C2A0394C5E034AC2ADAD2E = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_TResult_t1D607D10F13D62BB25C2A0394C5E034AC2ADAD2E);
	{
		Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* L_0 = __this->___m_task;
		TaskAwaiter_ValidateEnd_m6BB967A466C17A106BC547009EDE196266651751((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_0, NULL);
		Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* L_1 = __this->___m_task;
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0), L_1, (Il2CppFullySharedGenericAny*)L_2);
		il2cpp_codegen_memcpy(il2cppRetVal, L_2, SizeOf_TResult_t1D607D10F13D62BB25C2A0394C5E034AC2ADAD2E);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Converter_2__ctor_m6AC601790CBA05AA79669611421A69A763F35DAD_fshared (Converter_2_t492BE36BDB9ACE2595DC3BFC0172171D1510E4CB* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_direct_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
		{
			__this->___invoke_impl = (intptr_t)((RuntimeMethod*)(__this->___method))->invoker_method;
		}
		else
		{
			__this->___method_code = (intptr_t)__this->___m_target;
			__this->___invoke_impl = (intptr_t)il2cpp_codegen_delegate_invoke_closed_static;
		}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			if (__this->___method_is_virtual)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___1_method))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl = (intptr_t)il2cpp_codegen_delegate_invoke_open_generic_interface;
					else
						__this->___invoke_impl = (intptr_t)il2cpp_codegen_delegate_invoke_open_generic_virtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl = (intptr_t)il2cpp_codegen_delegate_invoke_open_interface;
					else
						__this->___invoke_impl = (intptr_t)il2cpp_codegen_delegate_invoke_open_virtual;
			}
			else
			{
				__this->___invoke_impl = (intptr_t)il2cpp_codegen_delegate_invoke_open_inst;
			}
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			if (il2cpp_codegen_class_is_value_type(il2cpp_codegen_object_get_class(__this->___m_target)))
				__this->___method_code = (intptr_t)il2cpp_codegen_get_raw_data<void*>(__this->___m_target);
			else
				__this->___method_code = (intptr_t)__this->___m_target;
			__this->___invoke_impl = (intptr_t)((RuntimeMethod*)(__this->___method))->invoker_method;
		}
	}
	__this->___extra_arg = (intptr_t)il2cpp_codegen_delegate_invoke_multicast;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Converter_2_Invoke_mB806BDE674732D4F827EB3E5DF29F76064E6B948_fshared (Converter_2_t492BE36BDB9ACE2595DC3BFC0172171D1510E4CB* __this, Il2CppFullySharedGenericAny ___0_input, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	void* args[2];
	args[1] = ___0_input;
	((InvokerMethod)(__this->___invoke_impl))((Il2CppMethodPointer)__this->___method_ptr, (const MethodInfo*)__this->___method, (RuntimeObject*)__this->___method_code, args+1, il2cppRetVal);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
Il2CppSharedGenericObject* CreateValueCallback_Invoke_mCBFB50800547234672DBBA87011CD2B5BC503308_Multicast(CreateValueCallback_t8463FCCADB8B16880DB710DACCEF3B1531B1649B* __this, Il2CppSharedGenericObject* ___0_key, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	Il2CppSharedGenericObject* retVal = NULL;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		CreateValueCallback_t8463FCCADB8B16880DB710DACCEF3B1531B1649B* currentDelegate = reinterpret_cast<CreateValueCallback_t8463FCCADB8B16880DB710DACCEF3B1531B1649B*>(delegatesToInvoke[i]);
		typedef Il2CppSharedGenericObject* (*FunctionPointerType) (RuntimeObject*, Il2CppSharedGenericObject*, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_key, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
	return retVal;
}
Il2CppSharedGenericObject* CreateValueCallback_Invoke_mCBFB50800547234672DBBA87011CD2B5BC503308_OpenInstance(CreateValueCallback_t8463FCCADB8B16880DB710DACCEF3B1531B1649B* __this, Il2CppSharedGenericObject* ___0_key, const RuntimeMethod* method)
{
	typedef Il2CppSharedGenericObject* (*FunctionPointerType) (Il2CppSharedGenericObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr)(___0_key, method);
}
Il2CppSharedGenericObject* CreateValueCallback_Invoke_mCBFB50800547234672DBBA87011CD2B5BC503308_OpenStatic(CreateValueCallback_t8463FCCADB8B16880DB710DACCEF3B1531B1649B* __this, Il2CppSharedGenericObject* ___0_key, const RuntimeMethod* method)
{
	typedef Il2CppSharedGenericObject* (*FunctionPointerType) (Il2CppSharedGenericObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr)(___0_key, method);
}
Il2CppSharedGenericObject* CreateValueCallback_Invoke_mCBFB50800547234672DBBA87011CD2B5BC503308_OpenVirtual(CreateValueCallback_t8463FCCADB8B16880DB710DACCEF3B1531B1649B* __this, Il2CppSharedGenericObject* ___0_key, const RuntimeMethod* method)
{
	return VirtualFuncInvoker0< Il2CppSharedGenericObject* >::Invoke(il2cpp_codegen_method_get_slot(method), ___0_key);
}
Il2CppSharedGenericObject* CreateValueCallback_Invoke_mCBFB50800547234672DBBA87011CD2B5BC503308_OpenInterface(CreateValueCallback_t8463FCCADB8B16880DB710DACCEF3B1531B1649B* __this, Il2CppSharedGenericObject* ___0_key, const RuntimeMethod* method)
{
	return InterfaceFuncInvoker0< Il2CppSharedGenericObject* >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___0_key);
}
Il2CppSharedGenericObject* CreateValueCallback_Invoke_mCBFB50800547234672DBBA87011CD2B5BC503308_OpenGenericVirtual(CreateValueCallback_t8463FCCADB8B16880DB710DACCEF3B1531B1649B* __this, Il2CppSharedGenericObject* ___0_key, const RuntimeMethod* method)
{
	return GenericVirtualFuncInvoker0< Il2CppSharedGenericObject* >::Invoke(method, ___0_key);
}
Il2CppSharedGenericObject* CreateValueCallback_Invoke_mCBFB50800547234672DBBA87011CD2B5BC503308_OpenGenericInterface(CreateValueCallback_t8463FCCADB8B16880DB710DACCEF3B1531B1649B* __this, Il2CppSharedGenericObject* ___0_key, const RuntimeMethod* method)
{
	return GenericInterfaceFuncInvoker0< Il2CppSharedGenericObject* >::Invoke(method, ___0_key);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CreateValueCallback__ctor_m31A67241B18CF8DCDC707129B017A5458946B835_gshared (CreateValueCallback_t8463FCCADB8B16880DB710DACCEF3B1531B1649B* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_direct_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
		{
			__this->___invoke_impl = (intptr_t)CreateValueCallback_Invoke_mCBFB50800547234672DBBA87011CD2B5BC503308_OpenStatic;
		}
		else
		{
			__this->___method_code = (intptr_t)__this->___m_target;
			__this->___invoke_impl = (intptr_t)__this->___method_ptr;
		}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			if (__this->___method_is_virtual)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___1_method))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl = (intptr_t)CreateValueCallback_Invoke_mCBFB50800547234672DBBA87011CD2B5BC503308_OpenGenericInterface;
					else
						__this->___invoke_impl = (intptr_t)CreateValueCallback_Invoke_mCBFB50800547234672DBBA87011CD2B5BC503308_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl = (intptr_t)CreateValueCallback_Invoke_mCBFB50800547234672DBBA87011CD2B5BC503308_OpenInterface;
					else
						__this->___invoke_impl = (intptr_t)CreateValueCallback_Invoke_mCBFB50800547234672DBBA87011CD2B5BC503308_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl = (intptr_t)CreateValueCallback_Invoke_mCBFB50800547234672DBBA87011CD2B5BC503308_OpenInstance;
			}
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			if (il2cpp_codegen_class_is_value_type(il2cpp_codegen_object_get_class(__this->___m_target)))
				__this->___method_code = (intptr_t)il2cpp_codegen_get_raw_data<void*>(__this->___m_target);
			else
				__this->___method_code = (intptr_t)__this->___m_target;
			__this->___invoke_impl = (intptr_t)__this->___method_ptr;
		}
	}
	__this->___extra_arg = (intptr_t)CreateValueCallback_Invoke_mCBFB50800547234672DBBA87011CD2B5BC503308_Multicast;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* CreateValueCallback_Invoke_mCBFB50800547234672DBBA87011CD2B5BC503308_gshared (CreateValueCallback_t8463FCCADB8B16880DB710DACCEF3B1531B1649B* __this, Il2CppSharedGenericObject* ___0_key, const RuntimeMethod* method) 
{
	typedef Il2CppSharedGenericObject* (*FunctionPointerType) (RuntimeObject*, Il2CppSharedGenericObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_key, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DefaultComparer_1_Equals_m932C7E5983A88ECDE11621D497AE4D6A8EC8947D_gshared (DefaultComparer_1_t9C7341E5478D67148593B9F5D9828B0B26E8771C* __this, int32_t ___0_x, int32_t ___1_y, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	{
		goto IL_0012;
	}

IL_0012:
	{
		int32_t L_1 = ___0_x;
		int32_t L_2 = L_1;
		RuntimeObject* L_3 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0), &L_2);
		V_0 = (RuntimeObject*)L_3;
		RuntimeObject* L_4 = V_0;
		if (!L_4)
		{
			goto IL_0029;
		}
	}
	{
		RuntimeObject* L_5 = V_0;
		int32_t L_6 = ___1_y;
		bool L_7;
		L_7 = InterfaceFuncInvoker1< bool, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 1), L_5, L_6);
		return L_7;
	}

IL_0029:
	{
		int32_t L_8 = ___0_x;
		int32_t L_9 = L_8;
		RuntimeObject* L_10 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0), &L_9);
		int32_t L_11 = ___1_y;
		int32_t L_12 = L_11;
		RuntimeObject* L_13 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0), &L_12);
		bool L_14;
		L_14 = Int32_Equals_m089564150E8AF7C63B419427E2E57E3420659B1B((int32_t*)UnBox(L_10), L_13, NULL);
		return L_14;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DefaultComparer_1_GetHashCode_m39D56BEB0A3AF033927A44C576DB7B527DA49089_gshared (DefaultComparer_1_t9C7341E5478D67148593B9F5D9828B0B26E8771C* __this, int32_t ___0_obj, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_obj;
		int32_t L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0), &L_1);
		int32_t L_3;
		L_3 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((int32_t*)UnBox(L_2), NULL);
		return L_3;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DefaultComparer_1_Equals_m38EFDD8C102634417E24C322106E302D76D92AF2_fshared (DefaultComparer_1_tF12896E32765999A5CD556EEF744B5B1AEB870E5* __this, Il2CppFullySharedGenericAny ___0_x, Il2CppFullySharedGenericAny ___1_y, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t25D6ED7DCA825D17E8E43E3B0CA2E0AD9FECE196 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_T_t25D6ED7DCA825D17E8E43E3B0CA2E0AD9FECE196);
	const Il2CppFullySharedGenericAny L_2 = L_0;
	const Il2CppFullySharedGenericAny L_5 = L_0;
	const Il2CppFullySharedGenericAny L_9 = L_0;
	const Il2CppFullySharedGenericAny L_11 = L_0;
	const Il2CppFullySharedGenericAny L_13 = alloca(SizeOf_T_t25D6ED7DCA825D17E8E43E3B0CA2E0AD9FECE196);
	RuntimeObject* V_0 = NULL;
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)) ? ___0_x : &___0_x), SizeOf_T_t25D6ED7DCA825D17E8E43E3B0CA2E0AD9FECE196);
		bool L_1 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0), L_0);
		if (L_1)
		{
			goto IL_0012;
		}
	}
	{
		il2cpp_codegen_memcpy(L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)) ? ___1_y : &___1_y), SizeOf_T_t25D6ED7DCA825D17E8E43E3B0CA2E0AD9FECE196);
		bool L_3 = !il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0), L_2);
		bool L_4 = L_3;
		return L_4;
	}

IL_0012:
	{
		il2cpp_codegen_memcpy(L_5, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)) ? ___0_x : &___0_x), SizeOf_T_t25D6ED7DCA825D17E8E43E3B0CA2E0AD9FECE196);
		RuntimeObject* L_6 = il2cpp_codegen_isinst_runtime(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0), il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1), L_5);;
		V_0 = (RuntimeObject*)L_6;
		RuntimeObject* L_7 = V_0;
		if (!L_7)
		{
			goto IL_0029;
		}
	}
	{
		RuntimeObject* L_8 = V_0;
		il2cpp_codegen_memcpy(L_9, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)) ? ___1_y : &___1_y), SizeOf_T_t25D6ED7DCA825D17E8E43E3B0CA2E0AD9FECE196);
		bool L_10;
		L_10 = InterfaceFuncInvoker1Invoker< bool, Il2CppFullySharedGenericAny >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 1), L_8, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)) ? L_9: *(void**)L_9));
		return L_10;
	}

IL_0029:
	{
		il2cpp_codegen_memcpy(L_11, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)) ? ___0_x : &___0_x), SizeOf_T_t25D6ED7DCA825D17E8E43E3B0CA2E0AD9FECE196);
		RuntimeObject* L_12 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0), L_11);
		il2cpp_codegen_memcpy(L_13, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)) ? ___1_y : &___1_y), SizeOf_T_t25D6ED7DCA825D17E8E43E3B0CA2E0AD9FECE196);
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0), L_13);
		bool L_15;
		L_15 = VirtualFuncInvoker1< bool, RuntimeObject* >::Invoke(0, L_12, L_14);
		return L_15;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DefaultComparer_1_GetHashCode_m763329D490F675E16A666B61F387D5F323EEC697_fshared (DefaultComparer_1_tF12896E32765999A5CD556EEF744B5B1AEB870E5* __this, Il2CppFullySharedGenericAny ___0_obj, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t25D6ED7DCA825D17E8E43E3B0CA2E0AD9FECE196 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_T_t25D6ED7DCA825D17E8E43E3B0CA2E0AD9FECE196);
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)) ? ___0_obj : &___0_obj), SizeOf_T_t25D6ED7DCA825D17E8E43E3B0CA2E0AD9FECE196);
		RuntimeObject* L_1 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0), L_0);
		int32_t L_2;
		L_2 = VirtualFuncInvoker0< int32_t >::Invoke(2, L_1);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultComparer_1__ctor_m3125A41749298C596BE7DAE59E0801F21BDE1482_fshared (DefaultComparer_1_tF12896E32765999A5CD556EEF744B5B1AEB870E5* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t DelegateWithContext_1_get_NativeInvocationContext_mBAE60D72C4155A0AD8CDC5216950F127D2862BAC_gshared (DelegateWithContext_1_tB8D0AD031518ADF1F51C1EC7F3118EDC45A5A126* __this, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = __this->___U3CNativeInvocationContextU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* DelegateWithContext_1_get_NativeDelegate_m1B8E1D02D8C9AB37531DE25E54560229D57A9F0C_gshared (DelegateWithContext_1_tB8D0AD031518ADF1F51C1EC7F3118EDC45A5A126* __this, const RuntimeMethod* method) 
{
	{
		Il2CppSharedGenericObject* L_0 = __this->___U3CNativeDelegateU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ProfilerMarker_t8B7F9848320B93F87A7944B157255D5F9B576F2D DelegateWithContext_1_get_ProfilerMarker_mBF3099F0BFCF4E9A3C86FB470181C0010F3B277F_gshared (DelegateWithContext_1_tB8D0AD031518ADF1F51C1EC7F3118EDC45A5A126* __this, const RuntimeMethod* method) 
{
	{
		ProfilerMarker_t8B7F9848320B93F87A7944B157255D5F9B576F2D L_0 = __this->___U3CProfilerMarkerU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelegateWithContext_1__ctor_m8E934A2E85F3CEA8D27A1C152A9954E991BCF743_gshared (DelegateWithContext_1_tB8D0AD031518ADF1F51C1EC7F3118EDC45A5A126* __this, intptr_t ___0_nativeInvocationContext, Il2CppSharedGenericObject* ___1_nativeDelegate, String_t* ___2_subsystemIdentifier, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		intptr_t L_0 = ___0_nativeInvocationContext;
		__this->___U3CNativeInvocationContextU3Ek__BackingField = L_0;
		Il2CppSharedGenericObject* L_1 = ___1_nativeDelegate;
		__this->___U3CNativeDelegateU3Ek__BackingField = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CNativeDelegateU3Ek__BackingField), (void*)L_1);
		String_t* L_2 = ___2_subsystemIdentifier;
		ProfilerMarker_t8B7F9848320B93F87A7944B157255D5F9B576F2D L_3;
		memset((&L_3), 0, sizeof(L_3));
		ProfilerMarker__ctor_mA98362A704FE2F8F5C21AD1309E7EA80EAA5F81D((&L_3), L_2, NULL);
		__this->___U3CProfilerMarkerU3Ek__BackingField = L_3;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DelegateWithContext_1_Equals_m55BF967C5A03909EF792F10763786DF4D5D573CC_gshared (DelegateWithContext_1_tB8D0AD031518ADF1F51C1EC7F3118EDC45A5A126* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	DelegateWithContext_1_tB8D0AD031518ADF1F51C1EC7F3118EDC45A5A126* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___0_obj;
		V_0 = ((DelegateWithContext_1_tB8D0AD031518ADF1F51C1EC7F3118EDC45A5A126*)IsInstSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)));
		DelegateWithContext_1_tB8D0AD031518ADF1F51C1EC7F3118EDC45A5A126* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		DelegateWithContext_1_tB8D0AD031518ADF1F51C1EC7F3118EDC45A5A126* L_2 = V_0;
		bool L_3;
		L_3 = DelegateWithContext_1_Equals_mADB622927C9751B007215E254AF4B8F45A121989(__this, L_2, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 5));
		return L_3;
	}

IL_0012:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DelegateWithContext_1_Equals_mADB622927C9751B007215E254AF4B8F45A121989_gshared (DelegateWithContext_1_tB8D0AD031518ADF1F51C1EC7F3118EDC45A5A126* __this, DelegateWithContext_1_tB8D0AD031518ADF1F51C1EC7F3118EDC45A5A126* ___0_other, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0;
		L_0 = DelegateWithContext_1_get_NativeInvocationContext_mBAE60D72C4155A0AD8CDC5216950F127D2862BAC_inline(__this, NULL);
		V_0 = L_0;
		DelegateWithContext_1_tB8D0AD031518ADF1F51C1EC7F3118EDC45A5A126* L_1 = ___0_other;
		intptr_t L_2;
		L_2 = DelegateWithContext_1_get_NativeInvocationContext_mBAE60D72C4155A0AD8CDC5216950F127D2862BAC_inline(L_1, NULL);
		intptr_t L_3 = L_2;
		RuntimeObject* L_4 = Box(IntPtr_t_il2cpp_TypeInfo_var, &L_3);
		bool L_5;
		L_5 = IntPtr_Equals_m0F39AB64A7BBD67190E745FF8334A5FC766CB26E((&V_0), L_4, NULL);
		if (!L_5)
		{
			goto IL_0032;
		}
	}
	{
		EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* L_6;
		L_6 = EqualityComparer_1_get_Default_mB451453B7B5B4B570A9347E090AB0FAC75C0C628_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 7));
		Il2CppSharedGenericObject* L_7;
		L_7 = DelegateWithContext_1_get_NativeDelegate_m1B8E1D02D8C9AB37531DE25E54560229D57A9F0C_inline(__this, NULL);
		DelegateWithContext_1_tB8D0AD031518ADF1F51C1EC7F3118EDC45A5A126* L_8 = ___0_other;
		Il2CppSharedGenericObject* L_9;
		L_9 = DelegateWithContext_1_get_NativeDelegate_m1B8E1D02D8C9AB37531DE25E54560229D57A9F0C_inline(L_8, NULL);
		bool L_10;
		L_10 = VirtualFuncInvoker2< bool, Il2CppSharedGenericObject*, Il2CppSharedGenericObject* >::Invoke(8, L_6, L_7, L_9);
		return L_10;
	}

IL_0032:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DelegateWithContext_1_GetHashCode_mBC09D2258CF5E732B86DAC43FC843F8FB4B2D614_gshared (DelegateWithContext_1_tB8D0AD031518ADF1F51C1EC7F3118EDC45A5A126* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashCode_t9CF0E862CF73DB9FE67D8DBBD1F4C46330F88AE3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(HashCode_t9CF0E862CF73DB9FE67D8DBBD1F4C46330F88AE3_StaticInit);
	{
		intptr_t L_0;
		L_0 = DelegateWithContext_1_get_NativeInvocationContext_mBAE60D72C4155A0AD8CDC5216950F127D2862BAC_inline(__this, NULL);
		Il2CppSharedGenericObject* L_1;
		L_1 = DelegateWithContext_1_get_NativeDelegate_m1B8E1D02D8C9AB37531DE25E54560229D57A9F0C_inline(__this, NULL);
		CHECKED_LOCAL_INIT(HashCode_t9CF0E862CF73DB9FE67D8DBBD1F4C46330F88AE3_StaticInit,(HashCode_t9CF0E862CF73DB9FE67D8DBBD1F4C46330F88AE3_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_2;
		L_2 = HashCode_Combine_TisIntPtr_t_TisIl2CppSharedGenericObject_m0FE3DF8C5942D8532F80288C02A8FD80B7C6F1A1(L_0, L_1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 9));
		return L_2;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t DelegateWithContext_1_get_NativeInvocationContext_mFF044FD9105CAF884AFA10DE411B92EB6D81EBB4_fshared (DelegateWithContext_1_tF58DA06EFEAFE5BF7A86055C6EE414BBC6295874* __this, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = *(intptr_t*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 1));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelegateWithContext_1_get_NativeDelegate_mF260DF8419B4674B384E63110B74A9F689BD4DA7_fshared (DelegateWithContext_1_tF58DA06EFEAFE5BF7A86055C6EE414BBC6295874* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t3AD8EC0AC4C8362447B313F765CB7D246E7737E8 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_T_t3AD8EC0AC4C8362447B313F765CB7D246E7737E8);
	{
		il2cpp_codegen_memcpy(L_0, il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 3)), SizeOf_T_t3AD8EC0AC4C8362447B313F765CB7D246E7737E8);
		il2cpp_codegen_memcpy(il2cppRetVal, L_0, SizeOf_T_t3AD8EC0AC4C8362447B313F765CB7D246E7737E8);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ProfilerMarker_t8B7F9848320B93F87A7944B157255D5F9B576F2D DelegateWithContext_1_get_ProfilerMarker_m1A407605AFB1FD29C04C36C7D48420F4304AC333_fshared (DelegateWithContext_1_tF58DA06EFEAFE5BF7A86055C6EE414BBC6295874* __this, const RuntimeMethod* method) 
{
	{
		ProfilerMarker_t8B7F9848320B93F87A7944B157255D5F9B576F2D L_0 = *(ProfilerMarker_t8B7F9848320B93F87A7944B157255D5F9B576F2D*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 4));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelegateWithContext_1__ctor_mC48F940386BB25AB3B52B885CA76B9BC5F21EC6D_fshared (DelegateWithContext_1_tF58DA06EFEAFE5BF7A86055C6EE414BBC6295874* __this, intptr_t ___0_nativeInvocationContext, Il2CppFullySharedGenericAny ___1_nativeDelegate, String_t* ___2_subsystemIdentifier, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t3AD8EC0AC4C8362447B313F765CB7D246E7737E8 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T_t3AD8EC0AC4C8362447B313F765CB7D246E7737E8);
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		intptr_t L_0 = ___0_nativeInvocationContext;
		il2cpp_codegen_write_field_data<intptr_t, false>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0),0), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 1), L_0);
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2)) ? ___1_nativeDelegate : &___1_nativeDelegate), SizeOf_T_t3AD8EC0AC4C8362447B313F765CB7D246E7737E8);
		il2cpp_codegen_write_field_data<true>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0),1), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 3), L_1, SizeOf_T_t3AD8EC0AC4C8362447B313F765CB7D246E7737E8);
		String_t* L_2 = ___2_subsystemIdentifier;
		ProfilerMarker_t8B7F9848320B93F87A7944B157255D5F9B576F2D L_3;
		memset((&L_3), 0, sizeof(L_3));
		ProfilerMarker__ctor_mA98362A704FE2F8F5C21AD1309E7EA80EAA5F81D((&L_3), L_2, NULL);
		il2cpp_codegen_write_field_data<ProfilerMarker_t8B7F9848320B93F87A7944B157255D5F9B576F2D, false>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0),2), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 4), L_3);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DelegateWithContext_1_Equals_mB7E2A8961D41C63B4EAA05DCE4F04B3A01BAF9B9_fshared (DelegateWithContext_1_tF58DA06EFEAFE5BF7A86055C6EE414BBC6295874* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	DelegateWithContext_1_tF58DA06EFEAFE5BF7A86055C6EE414BBC6295874* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___0_obj;
		V_0 = ((DelegateWithContext_1_tF58DA06EFEAFE5BF7A86055C6EE414BBC6295874*)IsInstSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)));
		DelegateWithContext_1_tF58DA06EFEAFE5BF7A86055C6EE414BBC6295874* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		DelegateWithContext_1_tF58DA06EFEAFE5BF7A86055C6EE414BBC6295874* L_2 = V_0;
		bool L_3;
		L_3 = ((  bool (*) (DelegateWithContext_1_tF58DA06EFEAFE5BF7A86055C6EE414BBC6295874*, DelegateWithContext_1_tF58DA06EFEAFE5BF7A86055C6EE414BBC6295874*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 5)))(__this, L_2, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 5));
		return L_3;
	}

IL_0012:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DelegateWithContext_1_Equals_m94E31921ECCBD39A38427607374E081461FA6D7E_fshared (DelegateWithContext_1_tF58DA06EFEAFE5BF7A86055C6EE414BBC6295874* __this, DelegateWithContext_1_tF58DA06EFEAFE5BF7A86055C6EE414BBC6295874* ___0_other, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t3AD8EC0AC4C8362447B313F765CB7D246E7737E8 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2));
	const Il2CppFullySharedGenericAny L_7 = alloca(SizeOf_T_t3AD8EC0AC4C8362447B313F765CB7D246E7737E8);
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_T_t3AD8EC0AC4C8362447B313F765CB7D246E7737E8);
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0;
		L_0 = ((  intptr_t (*) (DelegateWithContext_1_tF58DA06EFEAFE5BF7A86055C6EE414BBC6295874*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 6)))(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 6));
		V_0 = L_0;
		DelegateWithContext_1_tF58DA06EFEAFE5BF7A86055C6EE414BBC6295874* L_1 = ___0_other;
		intptr_t L_2;
		L_2 = ((  intptr_t (*) (DelegateWithContext_1_tF58DA06EFEAFE5BF7A86055C6EE414BBC6295874*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 6)))(L_1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 6));
		intptr_t L_3 = L_2;
		RuntimeObject* L_4 = Box(IntPtr_t_il2cpp_TypeInfo_var, &L_3);
		bool L_5;
		L_5 = IntPtr_Equals_m0F39AB64A7BBD67190E745FF8334A5FC766CB26E((&V_0), L_4, NULL);
		if (!L_5)
		{
			goto IL_0032;
		}
	}
	{
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_6;
		L_6 = ((  EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 7)))(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 7));
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 8)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 8), __this, (Il2CppFullySharedGenericAny*)L_7);
		DelegateWithContext_1_tF58DA06EFEAFE5BF7A86055C6EE414BBC6295874* L_8 = ___0_other;
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 8)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 8), L_8, (Il2CppFullySharedGenericAny*)L_9);
		bool L_10;
		L_10 = VirtualFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(8, L_6, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2)) ? L_7: *(void**)L_7), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2)) ? L_9: *(void**)L_9));
		return L_10;
	}

IL_0032:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DelegateWithContext_1_GetHashCode_m76A574C0D5DFEAA63C55FE0A671E1B0A77BD0562_fshared (DelegateWithContext_1_tF58DA06EFEAFE5BF7A86055C6EE414BBC6295874* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashCode_t9CF0E862CF73DB9FE67D8DBBD1F4C46330F88AE3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(HashCode_t9CF0E862CF73DB9FE67D8DBBD1F4C46330F88AE3_StaticInit);
	const uint32_t SizeOf_T_t3AD8EC0AC4C8362447B313F765CB7D246E7737E8 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T_t3AD8EC0AC4C8362447B313F765CB7D246E7737E8);
	{
		intptr_t L_0;
		L_0 = ((  intptr_t (*) (DelegateWithContext_1_tF58DA06EFEAFE5BF7A86055C6EE414BBC6295874*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 6)))(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 6));
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 8)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 8), __this, (Il2CppFullySharedGenericAny*)L_1);
		CHECKED_LOCAL_INIT(HashCode_t9CF0E862CF73DB9FE67D8DBBD1F4C46330F88AE3_StaticInit,(HashCode_t9CF0E862CF73DB9FE67D8DBBD1F4C46330F88AE3_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_2;
		L_2 = InvokerFuncInvoker2< int32_t, intptr_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 9)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 9), NULL, L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2)) ? L_1: *(void**)L_1));
		return L_2;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictionaryEnumerator__ctor_mAD88826314DD95640977D3B87E43E0FA23090A6D_gshared (DictionaryEnumerator_tD2AAFB3F341BE39C70A71939CA10F9C44CDDB65B* __this, ConcurrentDictionary_2_t44EF43F797787D2D41D8F1516BA77C1C20CE28B6* ___0_dictionary, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		ConcurrentDictionary_2_t44EF43F797787D2D41D8F1516BA77C1C20CE28B6* L_0 = ___0_dictionary;
		RuntimeObject* L_1;
		L_1 = ConcurrentDictionary_2_GetEnumerator_m5E2C0EBDF59D498AB4D40133331641C23FB4B366(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0));
		__this->____enumerator = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____enumerator), (void*)L_1);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB DictionaryEnumerator_get_Entry_mDB3A971D9A28F20B00A5510D9B2DECEB3B76DEE5_gshared (DictionaryEnumerator_tD2AAFB3F341BE39C70A71939CA10F9C44CDDB65B* __this, const RuntimeMethod* method) 
{
	KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = __this->____enumerator;
		KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 L_1;
		L_1 = InterfaceFuncInvoker0< KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 1), L_0);
		V_0 = L_1;
		Il2CppSharedGenericObject* L_2;
		L_2 = KeyValuePair_2_get_Key_m652AB26F17E6ECED100EADCA06D2352D6612B42B_inline((&V_0), NULL);
		RuntimeObject* L_3 = __this->____enumerator;
		KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 L_4;
		L_4 = InterfaceFuncInvoker0< KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 1), L_3);
		V_0 = L_4;
		Il2CppSharedGenericObject* L_5;
		L_5 = KeyValuePair_2_get_Value_mC4437F96887FBE0C954234394562430C0CE7747C_inline((&V_0), NULL);
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_6;
		memset((&L_6), 0, sizeof(L_6));
		DictionaryEntry__ctor_m2768353E53A75C4860E34B37DAF1342120C5D1EA((&L_6), (RuntimeObject*)L_2, (RuntimeObject*)L_5, NULL);
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DictionaryEnumerator_get_Key_m3A564BB301B6B57E73953208E0B50012C1FE281D_gshared (DictionaryEnumerator_tD2AAFB3F341BE39C70A71939CA10F9C44CDDB65B* __this, const RuntimeMethod* method) 
{
	KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = __this->____enumerator;
		KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 L_1;
		L_1 = InterfaceFuncInvoker0< KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 1), L_0);
		V_0 = L_1;
		Il2CppSharedGenericObject* L_2;
		L_2 = KeyValuePair_2_get_Key_m652AB26F17E6ECED100EADCA06D2352D6612B42B_inline((&V_0), NULL);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DictionaryEnumerator_get_Value_m2D83E41A19C3A06C28AEE6B645BCC8CB47856016_gshared (DictionaryEnumerator_tD2AAFB3F341BE39C70A71939CA10F9C44CDDB65B* __this, const RuntimeMethod* method) 
{
	KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = __this->____enumerator;
		KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 L_1;
		L_1 = InterfaceFuncInvoker0< KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 1), L_0);
		V_0 = L_1;
		Il2CppSharedGenericObject* L_2;
		L_2 = KeyValuePair_2_get_Value_mC4437F96887FBE0C954234394562430C0CE7747C_inline((&V_0), NULL);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DictionaryEnumerator_get_Current_mD70DDFA0FDABCEBD65CB53488F7A94CB21742855_gshared (DictionaryEnumerator_tD2AAFB3F341BE39C70A71939CA10F9C44CDDB65B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_0;
		L_0 = DictionaryEnumerator_get_Entry_mDB3A971D9A28F20B00A5510D9B2DECEB3B76DEE5(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 8));
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_1 = L_0;
		RuntimeObject* L_2 = Box(DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_il2cpp_TypeInfo_var, &L_1);
		return L_2;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictionaryEnumerator__ctor_mE63FC46E53E46535C7DD59172E65E42BD570D5F3_fshared (DictionaryEnumerator_t50968DBECB732082714E6294722DC51777C8A22A* __this, ConcurrentDictionary_2_t6DF554984593E2F9932FAFBF9E1AFD30D1ED0812* ___0_dictionary, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		ConcurrentDictionary_2_t6DF554984593E2F9932FAFBF9E1AFD30D1ED0812* L_0 = ___0_dictionary;
		RuntimeObject* L_1;
		L_1 = ((  RuntimeObject* (*) (ConcurrentDictionary_2_t6DF554984593E2F9932FAFBF9E1AFD30D1ED0812*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0)))(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0));
		__this->____enumerator = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____enumerator), (void*)L_1);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB DictionaryEnumerator_get_Entry_m6EB9062A7B59C89B18B6B61214B707BE4AA44086_fshared (DictionaryEnumerator_t50968DBECB732082714E6294722DC51777C8A22A* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_KeyValuePair_2_t7B799B8ED9C86E8E9BC5354DE4FDABD0184FF6B7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 3));
	const uint32_t SizeOf_TKey_t41C513A174F5F1C2B7E599C2ECFAF69540C6C9C7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_TKey_t41C513A174F5F1C2B7E599C2ECFAF69540C6C9C7);
	const uint32_t SizeOf_TValue_t9F4D688327705ABBE7AC2FE14F9F923B56192632 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7));
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_TValue_t9F4D688327705ABBE7AC2FE14F9F923B56192632);
	const KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 L_1 = alloca(SizeOf_KeyValuePair_2_t7B799B8ED9C86E8E9BC5354DE4FDABD0184FF6B7);
	const KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 L_5 = alloca(SizeOf_KeyValuePair_2_t7B799B8ED9C86E8E9BC5354DE4FDABD0184FF6B7);
	KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 V_0 = alloca(SizeOf_KeyValuePair_2_t7B799B8ED9C86E8E9BC5354DE4FDABD0184FF6B7);
	memset(V_0, 0, SizeOf_KeyValuePair_2_t7B799B8ED9C86E8E9BC5354DE4FDABD0184FF6B7);
	{
		RuntimeObject* L_0 = __this->____enumerator;
		InterfaceActionInvoker1Invoker< KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 1), L_0, (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)L_1);
		il2cpp_codegen_memcpy(V_0, L_1, SizeOf_KeyValuePair_2_t7B799B8ED9C86E8E9BC5354DE4FDABD0184FF6B7);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 4)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 4), (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)V_0, (Il2CppFullySharedGenericAny*)L_2);
		RuntimeObject* L_3 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5), L_2);
		RuntimeObject* L_4 = __this->____enumerator;
		InterfaceActionInvoker1Invoker< KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 1), L_4, (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)L_5);
		il2cpp_codegen_memcpy(V_0, L_5, SizeOf_KeyValuePair_2_t7B799B8ED9C86E8E9BC5354DE4FDABD0184FF6B7);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 6)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 6), (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)V_0, (Il2CppFullySharedGenericAny*)L_6);
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7), L_6);
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_8;
		memset((&L_8), 0, sizeof(L_8));
		DictionaryEntry__ctor_m2768353E53A75C4860E34B37DAF1342120C5D1EA((&L_8), L_3, L_7, NULL);
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DictionaryEnumerator_get_Key_m0990C99F94EA95C5392CA5485B4BFD344BAED6FE_fshared (DictionaryEnumerator_t50968DBECB732082714E6294722DC51777C8A22A* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_KeyValuePair_2_t7B799B8ED9C86E8E9BC5354DE4FDABD0184FF6B7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 3));
	const uint32_t SizeOf_TKey_t41C513A174F5F1C2B7E599C2ECFAF69540C6C9C7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_TKey_t41C513A174F5F1C2B7E599C2ECFAF69540C6C9C7);
	const KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 L_1 = alloca(SizeOf_KeyValuePair_2_t7B799B8ED9C86E8E9BC5354DE4FDABD0184FF6B7);
	KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 V_0 = alloca(SizeOf_KeyValuePair_2_t7B799B8ED9C86E8E9BC5354DE4FDABD0184FF6B7);
	memset(V_0, 0, SizeOf_KeyValuePair_2_t7B799B8ED9C86E8E9BC5354DE4FDABD0184FF6B7);
	{
		RuntimeObject* L_0 = __this->____enumerator;
		InterfaceActionInvoker1Invoker< KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 1), L_0, (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)L_1);
		il2cpp_codegen_memcpy(V_0, L_1, SizeOf_KeyValuePair_2_t7B799B8ED9C86E8E9BC5354DE4FDABD0184FF6B7);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 4)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 4), (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)V_0, (Il2CppFullySharedGenericAny*)L_2);
		RuntimeObject* L_3 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5), L_2);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DictionaryEnumerator_get_Value_mD790494FF5E50257030CC045B516A70513EE98A8_fshared (DictionaryEnumerator_t50968DBECB732082714E6294722DC51777C8A22A* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_KeyValuePair_2_t7B799B8ED9C86E8E9BC5354DE4FDABD0184FF6B7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 3));
	const uint32_t SizeOf_TValue_t9F4D688327705ABBE7AC2FE14F9F923B56192632 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_TValue_t9F4D688327705ABBE7AC2FE14F9F923B56192632);
	const KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 L_1 = alloca(SizeOf_KeyValuePair_2_t7B799B8ED9C86E8E9BC5354DE4FDABD0184FF6B7);
	KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 V_0 = alloca(SizeOf_KeyValuePair_2_t7B799B8ED9C86E8E9BC5354DE4FDABD0184FF6B7);
	memset(V_0, 0, SizeOf_KeyValuePair_2_t7B799B8ED9C86E8E9BC5354DE4FDABD0184FF6B7);
	{
		RuntimeObject* L_0 = __this->____enumerator;
		InterfaceActionInvoker1Invoker< KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 1), L_0, (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)L_1);
		il2cpp_codegen_memcpy(V_0, L_1, SizeOf_KeyValuePair_2_t7B799B8ED9C86E8E9BC5354DE4FDABD0184FF6B7);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 6)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 6), (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)V_0, (Il2CppFullySharedGenericAny*)L_2);
		RuntimeObject* L_3 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7), L_2);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DictionaryEnumerator_get_Current_m84A050320869FF83584304FF56D3BA05368095F2_fshared (DictionaryEnumerator_t50968DBECB732082714E6294722DC51777C8A22A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_0;
		L_0 = ((  DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB (*) (DictionaryEnumerator_t50968DBECB732082714E6294722DC51777C8A22A*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 8)))(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 8));
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_1 = L_0;
		RuntimeObject* L_2 = Box(DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_il2cpp_TypeInfo_var, &L_1);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DictionaryEnumerator_MoveNext_mCD670B5AE8886409051790844BF74853977F5846_fshared (DictionaryEnumerator_t50968DBECB732082714E6294722DC51777C8A22A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____enumerator;
		bool L_1;
		L_1 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_0);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictionaryEnumerator_Reset_mBAC7702D03B6B7A6496AA713EC06CE6162127B2C_fshared (DictionaryEnumerator_t50968DBECB732082714E6294722DC51777C8A22A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____enumerator;
		InterfaceActionInvoker0::Invoke(2, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_0);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m9AB7A5AB75F44BED696A5014507B3353CD9A3656 (Dictionary_2_t232323BDF7857D243A4CCA18ADCF59272D0E4C23* __this, const RuntimeMethod* method) 
{
	{
		Dictionary_2__ctor_m773B36DFA7951E426E5AA449331ED5B9A7E054F1(__this, 0, (RuntimeObject*)NULL, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mC08EC5E30FFF5F565D55C1BB6533C45E18FE9C14 (Dictionary_2_t232323BDF7857D243A4CCA18ADCF59272D0E4C23* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_capacity;
		Dictionary_2__ctor_m773B36DFA7951E426E5AA449331ED5B9A7E054F1(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m73F921036A3DF64F9BD8A257DAB42F7C0314CED7 (Dictionary_2_t232323BDF7857D243A4CCA18ADCF59272D0E4C23* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_comparer;
		Dictionary_2__ctor_m773B36DFA7951E426E5AA449331ED5B9A7E054F1(__this, 0, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m773B36DFA7951E426E5AA449331ED5B9A7E054F1 (Dictionary_2_t232323BDF7857D243A4CCA18ADCF59272D0E4C23* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0011;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97(((int32_t)12), NULL);
	}

IL_0011:
	{
		int32_t L_1 = ___0_capacity;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_2 = ___0_capacity;
		int32_t L_3;
		L_3 = Dictionary_2_Initialize_mE32E52E3C488094E26407ED7E6B96C08DE449609(__this, L_2, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 1));
	}

IL_001d:
	{
		RuntimeObject* L_4 = ___1_comparer;
		EqualityComparer_1_t2AAFF66C447B855AEB2EF13BDDE1F6301924188F* L_5;
		L_5 = EqualityComparer_1_get_Default_m0AD70A24662B87624F0C4A66B70581A7F28BE2CC_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2));
		if ((((RuntimeObject*)(RuntimeObject*)L_4) == ((RuntimeObject*)(EqualityComparer_1_t2AAFF66C447B855AEB2EF13BDDE1F6301924188F*)L_5)))
		{
			goto IL_002c;
		}
	}
	{
		RuntimeObject* L_6 = ___1_comparer;
		__this->____comparer = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)L_6);
	}

IL_002c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mB5BE528DD15F256890CECBFA6F6E91ADEA55FAB0 (Dictionary_2_t232323BDF7857D243A4CCA18ADCF59272D0E4C23* __this, RuntimeObject* ___0_dictionary, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_dictionary;
		Dictionary_2__ctor_mBB52B7106A5105311717525BCC8399C9FD1567A3(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 3));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mBB52B7106A5105311717525BCC8399C9FD1567A3 (Dictionary_2_t232323BDF7857D243A4CCA18ADCF59272D0E4C23* __this, RuntimeObject* ___0_dictionary, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	EntryU5BU5D_tDBAAD2500E17E1BA8285BEE36BF88226E24F199C* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	KeyValuePair_2_t367B869B5B9E3AC484B7F3A6A22B30D27181B421 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Dictionary_2_t232323BDF7857D243A4CCA18ADCF59272D0E4C23* G_B2_0 = NULL;
	Dictionary_2_t232323BDF7857D243A4CCA18ADCF59272D0E4C23* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	Dictionary_2_t232323BDF7857D243A4CCA18ADCF59272D0E4C23* G_B3_1 = NULL;
	{
		RuntimeObject* L_0 = ___0_dictionary;
		if (L_0)
		{
			G_B2_0 = __this;
			goto IL_0007;
		}
		G_B1_0 = __this;
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_000d;
	}

IL_0007:
	{
		RuntimeObject* L_1 = ___0_dictionary;
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 4), L_1);
		G_B3_0 = L_2;
		G_B3_1 = G_B2_0;
	}

IL_000d:
	{
		RuntimeObject* L_3 = ___1_comparer;
		Dictionary_2__ctor_m773B36DFA7951E426E5AA449331ED5B9A7E054F1(G_B3_1, G_B3_0, L_3, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0));
		RuntimeObject* L_4 = ___0_dictionary;
		if (L_4)
		{
			goto IL_001c;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(1, NULL);
	}

IL_001c:
	{
		RuntimeObject* L_5 = ___0_dictionary;
		void* L_6 = il2cpp_codegen_object_get_class(L_5);
		bool L_7 = (il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7)) == (L_6);
		if (!L_7)
		{
			goto IL_0080;
		}
	}
	{
		RuntimeObject* L_8 = ___0_dictionary;
		Dictionary_2_t232323BDF7857D243A4CCA18ADCF59272D0E4C23* L_9 = ((Dictionary_2_t232323BDF7857D243A4CCA18ADCF59272D0E4C23*)CastclassClass((RuntimeObject*)L_8, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7)));
		int32_t L_10 = L_9->____count;
		V_0 = L_10;
		EntryU5BU5D_tDBAAD2500E17E1BA8285BEE36BF88226E24F199C* L_11 = L_9->____entries;
		V_1 = L_11;
		V_2 = 0;
		goto IL_007b;
	}

IL_004a:
	{
		EntryU5BU5D_tDBAAD2500E17E1BA8285BEE36BF88226E24F199C* L_12 = V_1;
		int32_t L_13 = V_2;
		int32_t L_14 = ((L_12)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_13)))->___hashCode;
		if ((((int32_t)L_14) < ((int32_t)0)))
		{
			goto IL_0077;
		}
	}
	{
		EntryU5BU5D_tDBAAD2500E17E1BA8285BEE36BF88226E24F199C* L_15 = V_1;
		int32_t L_16 = V_2;
		ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8 L_17 = ((L_15)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_16)))->___key;
		EntryU5BU5D_tDBAAD2500E17E1BA8285BEE36BF88226E24F199C* L_18 = V_1;
		int32_t L_19 = V_2;
		uint32_t L_20 = ((L_18)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_19)))->___value;
		Dictionary_2_Add_m350F906A4FED4B04ABA55E83B4FD2EBE4CE3F244(__this, L_17, L_20, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14));
	}

IL_0077:
	{
		int32_t L_21 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_007b:
	{
		int32_t L_22 = V_2;
		int32_t L_23 = V_0;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_004a;
		}
	}
	{
		return;
	}

IL_0080:
	{
		RuntimeObject* L_24 = ___0_dictionary;
		RuntimeObject* L_25;
		L_25 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 15), L_24);
		V_3 = L_25;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00af:
			{
				{
					RuntimeObject* L_26 = V_3;
					if (!L_26)
					{
						goto IL_00b8;
					}
				}
				{
					RuntimeObject* L_27 = V_3;
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_27);
				}

IL_00b8:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_00a5_1;
			}

IL_0089_1:
			{
				RuntimeObject* L_28 = V_3;
				KeyValuePair_2_t367B869B5B9E3AC484B7F3A6A22B30D27181B421 L_29;
				L_29 = InterfaceFuncInvoker0< KeyValuePair_2_t367B869B5B9E3AC484B7F3A6A22B30D27181B421 >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 17), L_28);
				V_4 = L_29;
				ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8 L_30;
				L_30 = KeyValuePair_2_get_Key_m8C1C8921B31C68F85331E5AF3432D221789E3BF8_inline((&V_4), NULL);
				uint32_t L_31;
				L_31 = KeyValuePair_2_get_Value_mA6758BC25166F8DDB057093FDC0F13EFD4BAC6DB_inline((&V_4), NULL);
				Dictionary_2_Add_m350F906A4FED4B04ABA55E83B4FD2EBE4CE3F244(__this, L_30, L_31, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14));
			}

IL_00a5_1:
			{
				RuntimeObject* L_32 = V_3;
				bool L_33;
				L_33 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_32);
				if (L_33)
				{
					goto IL_0089_1;
				}
			}
			{
				goto IL_00b9;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_tB3FBC73DC16C3B6B2A8597B904BE6599EB6C5227* Dictionary_2_get_Keys_mA64899EF1E0D3CF0CCF0B4879CD2E6F095291949 (Dictionary_2_t232323BDF7857D243A4CCA18ADCF59272D0E4C23* __this, const RuntimeMethod* method) 
{
	{
		KeyCollection_tB3FBC73DC16C3B6B2A8597B904BE6599EB6C5227* L_0 = __this->____keys;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		KeyCollection_tB3FBC73DC16C3B6B2A8597B904BE6599EB6C5227* L_1 = (KeyCollection_tB3FBC73DC16C3B6B2A8597B904BE6599EB6C5227*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 22));
		KeyCollection__ctor_mB3DBE00FC09EA6CD3635140E5B39EADF53207325(L_1, __this, NULL);
		__this->____keys = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keys), (void*)L_1);
	}

IL_0014:
	{
		KeyCollection_tB3FBC73DC16C3B6B2A8597B904BE6599EB6C5227* L_2 = __this->____keys;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_t6C92C52854F574A9EE80E18C51297F5BB4B1C4C3* Dictionary_2_get_Values_mCDBD67B128B1E27ED880C522DDB496C535DF7CD3 (Dictionary_2_t232323BDF7857D243A4CCA18ADCF59272D0E4C23* __this, const RuntimeMethod* method) 
{
	{
		ValueCollection_t6C92C52854F574A9EE80E18C51297F5BB4B1C4C3* L_0 = __this->____values;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_t6C92C52854F574A9EE80E18C51297F5BB4B1C4C3* L_1 = (ValueCollection_t6C92C52854F574A9EE80E18C51297F5BB4B1C4C3*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 24));
		ValueCollection__ctor_m56C9177F580E830FC880BE239BECF9F8C45C9CCE(L_1, __this, NULL);
		__this->____values = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_t6C92C52854F574A9EE80E18C51297F5BB4B1C4C3* L_2 = __this->____values;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Dictionary_2_get_Item_m9666D2519BD3F39CF9EA6BF2FBE6DA6FAD1E6CEE (Dictionary_2_t232323BDF7857D243A4CCA18ADCF59272D0E4C23* __this, ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8 ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	uint32_t V_1 = 0;
	{
		ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8 L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m1BB6F05AA034CDC37E38968F65C1F9A031818101(__this, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 26));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_001e;
		}
	}
	{
		EntryU5BU5D_tDBAAD2500E17E1BA8285BEE36BF88226E24F199C* L_3 = __this->____entries;
		int32_t L_4 = V_0;
		uint32_t L_5 = ((L_3)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_4)))->___value;
		return L_5;
	}

IL_001e:
	{
		ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8 L_6 = ___0_key;
		ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8 L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 10), &L_7);
		ThrowHelper_ThrowKeyNotFoundException_m6A17735FA486AD43F2488DE39B755AC60BC99CE7(L_8, NULL);
		il2cpp_codegen_initobj((&V_1), sizeof(uint32_t));
		uint32_t L_9 = V_1;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m2D58AB9D0EE1189C2642E8866CE5DBD92AADCAEF (Dictionary_2_t232323BDF7857D243A4CCA18ADCF59272D0E4C23* __this, ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8 ___0_key, uint32_t ___1_value, const RuntimeMethod* method) 
{
	{
		ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8 L_0 = ___0_key;
		uint32_t L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_m220ED7A977536DE48E02E89CC9802CE456A5E3C9(__this, L_0, L_1, 1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 27));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m350F906A4FED4B04ABA55E83B4FD2EBE4CE3F244 (Dictionary_2_t232323BDF7857D243A4CCA18ADCF59272D0E4C23* __this, ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8 ___0_key, uint32_t ___1_value, const RuntimeMethod* method) 
{
	{
		ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8 L_0 = ___0_key;
		uint32_t L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_m220ED7A977536DE48E02E89CC9802CE456A5E3C9(__this, L_0, L_1, 2, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 27));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_mCC4031138496CF2AD91A8A92A71FFB1D1A3FC02A (Dictionary_2_t232323BDF7857D243A4CCA18ADCF59272D0E4C23* __this, KeyValuePair_2_t367B869B5B9E3AC484B7F3A6A22B30D27181B421 ___0_keyValuePair, const RuntimeMethod* method) 
{
	{
		ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8 L_0;
		L_0 = KeyValuePair_2_get_Key_m8C1C8921B31C68F85331E5AF3432D221789E3BF8_inline((&___0_keyValuePair), NULL);
		uint32_t L_1;
		L_1 = KeyValuePair_2_get_Value_mA6758BC25166F8DDB057093FDC0F13EFD4BAC6DB_inline((&___0_keyValuePair), NULL);
		Dictionary_2_Add_m350F906A4FED4B04ABA55E83B4FD2EBE4CE3F244(__this, L_0, L_1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_mB07F28BEE723DD5D48BB1FACDF57B6E613012C39 (Dictionary_2_t232323BDF7857D243A4CCA18ADCF59272D0E4C23* __this, KeyValuePair_2_t367B869B5B9E3AC484B7F3A6A22B30D27181B421 ___0_keyValuePair, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8 L_0;
		L_0 = KeyValuePair_2_get_Key_m8C1C8921B31C68F85331E5AF3432D221789E3BF8_inline((&___0_keyValuePair), NULL);
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m1BB6F05AA034CDC37E38968F65C1F9A031818101(__this, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 26));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0038;
		}
	}
	{
		EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* L_3;
		L_3 = EqualityComparer_1_get_Default_mF554877B669658FD6449F84AE369214855D0BC40_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 28));
		EntryU5BU5D_tDBAAD2500E17E1BA8285BEE36BF88226E24F199C* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		uint32_t L_6 = ((L_4)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		uint32_t L_7;
		L_7 = KeyValuePair_2_get_Value_mA6758BC25166F8DDB057093FDC0F13EFD4BAC6DB_inline((&___0_keyValuePair), NULL);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, uint32_t, uint32_t >::Invoke(8, L_3, L_6, L_7);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m0F7705D81F4BCB6400C7CFDC4F57BBBDC05B0140 (Dictionary_2_t232323BDF7857D243A4CCA18ADCF59272D0E4C23* __this, KeyValuePair_2_t367B869B5B9E3AC484B7F3A6A22B30D27181B421 ___0_keyValuePair, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8 L_0;
		L_0 = KeyValuePair_2_get_Key_m8C1C8921B31C68F85331E5AF3432D221789E3BF8_inline((&___0_keyValuePair), NULL);
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m1BB6F05AA034CDC37E38968F65C1F9A031818101(__this, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 26));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0046;
		}
	}
	{
		EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* L_3;
		L_3 = EqualityComparer_1_get_Default_mF554877B669658FD6449F84AE369214855D0BC40_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 28));
		EntryU5BU5D_tDBAAD2500E17E1BA8285BEE36BF88226E24F199C* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		uint32_t L_6 = ((L_4)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		uint32_t L_7;
		L_7 = KeyValuePair_2_get_Value_mA6758BC25166F8DDB057093FDC0F13EFD4BAC6DB_inline((&___0_keyValuePair), NULL);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, uint32_t, uint32_t >::Invoke(8, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0046;
		}
	}
	{
		ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8 L_9;
		L_9 = KeyValuePair_2_get_Key_m8C1C8921B31C68F85331E5AF3432D221789E3BF8_inline((&___0_keyValuePair), NULL);
		bool L_10;
		L_10 = Dictionary_2_Remove_m8B9C947B241C6DFD0F33A436E4BAD3E2BE02D7DF(__this, L_9, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 29));
		return (bool)1;
	}

IL_0046:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_mFF33FCD8E9425C9017B18C57DEC4794D68971EFD (Dictionary_2_t232323BDF7857D243A4CCA18ADCF59272D0E4C23* __this, ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8 ___0_key, const RuntimeMethod* method) 
{
	{
		ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8 L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m1BB6F05AA034CDC37E38968F65C1F9A031818101(__this, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 26));
		return (bool)((((int32_t)((((int32_t)L_1) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsValue_m2EFA52B0B46CCDFA3B6381408B6380CB8744457C (Dictionary_2_t232323BDF7857D243A4CCA18ADCF59272D0E4C23* __this, uint32_t ___0_value, const RuntimeMethod* method) 
{
	EntryU5BU5D_tDBAAD2500E17E1BA8285BEE36BF88226E24F199C* V_0 = NULL;
	int32_t V_1 = 0;
	uint32_t V_2 = 0;
	int32_t V_3 = 0;
	EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* V_4 = NULL;
	int32_t V_5 = 0;
	{
		EntryU5BU5D_tDBAAD2500E17E1BA8285BEE36BF88226E24F199C* L_0 = __this->____entries;
		V_0 = L_0;
		goto IL_0049;
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
		EntryU5BU5D_tDBAAD2500E17E1BA8285BEE36BF88226E24F199C* L_3 = V_0;
		int32_t L_4 = V_3;
		int32_t L_5 = ((L_3)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_4)))->___hashCode;
		if ((((int32_t)L_5) < ((int32_t)0)))
		{
			goto IL_0087;
		}
	}
	{
		EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* L_6;
		L_6 = EqualityComparer_1_get_Default_mF554877B669658FD6449F84AE369214855D0BC40_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 28));
		EntryU5BU5D_tDBAAD2500E17E1BA8285BEE36BF88226E24F199C* L_7 = V_0;
		int32_t L_8 = V_3;
		uint32_t L_9 = ((L_7)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_8)))->___value;
		uint32_t L_10 = ___0_value;
		bool L_11;
		L_11 = VirtualFuncInvoker2< bool, uint32_t, uint32_t >::Invoke(8, L_6, L_9, L_10);
		if (!L_11)
		{
			goto IL_0087;
		}
	}
	{
		return (bool)1;
	}

IL_0087:
	{
		int32_t L_12 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_008b:
	{
		int32_t L_13 = V_3;
		int32_t L_14 = __this->____count;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_005d;
		}
	}
	{
		goto IL_00db;
	}

IL_00db:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_m8379F15C7422541338906B2A9998722F4A34FE9B (Dictionary_2_t232323BDF7857D243A4CCA18ADCF59272D0E4C23* __this, KeyValuePair_2U5BU5D_tE76A126FCE108E33BC3A97C53D003B3D399BFD33* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	EntryU5BU5D_tDBAAD2500E17E1BA8285BEE36BF88226E24F199C* V_1 = NULL;
	int32_t V_2 = 0;
	{
		KeyValuePair_2U5BU5D_tE76A126FCE108E33BC3A97C53D003B3D399BFD33* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(3, NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_index;
		KeyValuePair_2U5BU5D_tE76A126FCE108E33BC3A97C53D003B3D399BFD33* L_2 = ___0_array;
		int32_t L_3 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_2)->max_length),NULL));
		if ((!(((uint32_t)L_1) > ((uint32_t)L_3))))
		{
			goto IL_0014;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0014:
	{
		KeyValuePair_2U5BU5D_tE76A126FCE108E33BC3A97C53D003B3D399BFD33* L_4 = ___0_array;
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		int32_t L_6 = ___1_index;
		int32_t L_7;
		L_7 = Dictionary_2_get_Count_m502FBCE64E7FDAE32F763BF830BD2BD555529666(__this, NULL);
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_5, L_6))) >= ((int32_t)L_7)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(5, NULL);
	}

IL_0027:
	{
		int32_t L_8 = __this->____count;
		V_0 = L_8;
		EntryU5BU5D_tDBAAD2500E17E1BA8285BEE36BF88226E24F199C* L_9 = __this->____entries;
		V_1 = L_9;
		V_2 = 0;
		goto IL_0075;
	}

IL_0039:
	{
		EntryU5BU5D_tDBAAD2500E17E1BA8285BEE36BF88226E24F199C* L_10 = V_1;
		int32_t L_11 = V_2;
		int32_t L_12 = ((L_10)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_11)))->___hashCode;
		if ((((int32_t)L_12) < ((int32_t)0)))
		{
			goto IL_0071;
		}
	}
	{
		KeyValuePair_2U5BU5D_tE76A126FCE108E33BC3A97C53D003B3D399BFD33* L_13 = ___0_array;
		int32_t L_14 = ___1_index;
		int32_t L_15 = L_14;
		___1_index = ((int32_t)il2cpp_codegen_add(L_15, 1));
		EntryU5BU5D_tDBAAD2500E17E1BA8285BEE36BF88226E24F199C* L_16 = V_1;
		int32_t L_17 = V_2;
		ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8 L_18 = ((L_16)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_17)))->___key;
		EntryU5BU5D_tDBAAD2500E17E1BA8285BEE36BF88226E24F199C* L_19 = V_1;
		int32_t L_20 = V_2;
		uint32_t L_21 = ((L_19)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_20)))->___value;
		KeyValuePair_2_t367B869B5B9E3AC484B7F3A6A22B30D27181B421 L_22;
		memset((&L_22), 0, sizeof(L_22));
		KeyValuePair_2__ctor_mB3FC4BB26A5A8582D4E0E91BE60ED3FFE95AEE2A((&L_22), L_18, L_21, NULL);
		(L_13)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_15), (KeyValuePair_2_t367B869B5B9E3AC484B7F3A6A22B30D27181B421)L_22);
	}

IL_0071:
	{
		int32_t L_23 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_0075:
	{
		int32_t L_24 = V_2;
		int32_t L_25 = V_0;
		if ((((int32_t)L_24) < ((int32_t)L_25)))
		{
			goto IL_0039;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tA1D674047414071FA450BD89252F77B3361FE9BF Dictionary_2_GetEnumerator_m4794B6986DD9EE0231B93557DE95BA18C5B8281A (Dictionary_2_t232323BDF7857D243A4CCA18ADCF59272D0E4C23* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tA1D674047414071FA450BD89252F77B3361FE9BF L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mC61F6FB7DB0671A83D237E3774728E980C4A34CF((&L_0), __this, 2, NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m241C0722597D7856AABC8C0F9004154B123C7DD4 (Dictionary_2_t232323BDF7857D243A4CCA18ADCF59272D0E4C23* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tA1D674047414071FA450BD89252F77B3361FE9BF L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mC61F6FB7DB0671A83D237E3774728E980C4A34CF((&L_0), __this, 2, NULL);
		Enumerator_tA1D674047414071FA450BD89252F77B3361FE9BF L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 32), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_GetObjectData_m100E7289E3E068C4263B4C1A52A4EC0C3B6DF3DC (Dictionary_2_t232323BDF7857D243A4CCA18ADCF59272D0E4C23* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	KeyValuePair_2U5BU5D_tE76A126FCE108E33BC3A97C53D003B3D399BFD33* V_0 = NULL;
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
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___0_info;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(4, NULL);
	}

IL_0009:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___0_info;
		int32_t L_2 = __this->____version;
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(L_1, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, L_2, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = ___0_info;
		RuntimeObject* L_4 = __this->____comparer;
		RuntimeObject* L_5 = L_4;
		if (L_5)
		{
			G_B4_0 = L_5;
			G_B4_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
			G_B4_2 = L_3;
			goto IL_002f;
		}
		G_B3_0 = L_5;
		G_B3_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
		G_B3_2 = L_3;
	}
	{
		EqualityComparer_1_t2AAFF66C447B855AEB2EF13BDDE1F6301924188F* L_6;
		L_6 = EqualityComparer_1_get_Default_m0AD70A24662B87624F0C4A66B70581A7F28BE2CC_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2));
		G_B4_0 = ((RuntimeObject*)(L_6));
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
	}

IL_002f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 34)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(G_B4_2, G_B4_1, G_B4_0, L_8, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_9 = ___0_info;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = __this->____buckets;
		if (!L_10)
		{
			G_B6_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
			G_B6_1 = L_9;
			goto IL_0056;
		}
		G_B5_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
		G_B5_1 = L_9;
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____buckets;
		int32_t L_12 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_11)->max_length),NULL));
		G_B7_0 = L_12;
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
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(G_B7_2, G_B7_1, G_B7_0, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = __this->____buckets;
		if (!L_13)
		{
			goto IL_008e;
		}
	}
	{
		int32_t L_14;
		L_14 = Dictionary_2_get_Count_m502FBCE64E7FDAE32F763BF830BD2BD555529666(__this, NULL);
		KeyValuePair_2U5BU5D_tE76A126FCE108E33BC3A97C53D003B3D399BFD33* L_15 = (KeyValuePair_2U5BU5D_tE76A126FCE108E33BC3A97C53D003B3D399BFD33*)(KeyValuePair_2U5BU5D_tE76A126FCE108E33BC3A97C53D003B3D399BFD33*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 36), (uint32_t)L_14);
		V_0 = L_15;
		KeyValuePair_2U5BU5D_tE76A126FCE108E33BC3A97C53D003B3D399BFD33* L_16 = V_0;
		Dictionary_2_CopyTo_m8379F15C7422541338906B2A9998722F4A34FE9B(__this, L_16, 0, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_17 = ___0_info;
		KeyValuePair_2U5BU5D_tE76A126FCE108E33BC3A97C53D003B3D399BFD33* L_18 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 38)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(L_17, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, (RuntimeObject*)L_18, L_20, NULL);
	}

IL_008e:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_m1BB6F05AA034CDC37E38968F65C1F9A031818101 (Dictionary_2_t232323BDF7857D243A4CCA18ADCF59272D0E4C23* __this, ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8 ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	EntryU5BU5D_tDBAAD2500E17E1BA8285BEE36BF88226E24F199C* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	int32_t V_5 = 0;
	ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8 V_6;
	memset((&V_6), 0, sizeof(V_6));
	EqualityComparer_1_t2AAFF66C447B855AEB2EF13BDDE1F6301924188F* V_7 = NULL;
	int32_t V_8 = 0;
	{
		goto IL_000e;
	}

IL_000e:
	{
		V_0 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		V_1 = L_1;
		EntryU5BU5D_tDBAAD2500E17E1BA8285BEE36BF88226E24F199C* L_2 = __this->____entries;
		V_2 = L_2;
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = V_1;
		if (!L_3)
		{
			goto IL_0175;
		}
	}
	{
		RuntimeObject* L_4 = __this->____comparer;
		V_4 = L_4;
		RuntimeObject* L_5 = V_4;
		if (L_5)
		{
			goto IL_0110;
		}
	}
	{
		int32_t L_6;
		L_6 = ValueTuple_2_GetHashCode_mF3B537BA555CF519DF00D747C94A3706513C669C((&___0_key), NULL);
		V_5 = ((int32_t)(L_6&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = V_1;
		int32_t L_8 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = V_1;
		int32_t L_10 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_9)->max_length),NULL));
		int32_t L_11 = ((int32_t)(L_8%L_10));
		int32_t L_12 = (L_7)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_11));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
		il2cpp_codegen_initobj((&V_6), sizeof(ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8));
	}

IL_0066:
	{
		int32_t L_14 = V_0;
		EntryU5BU5D_tDBAAD2500E17E1BA8285BEE36BF88226E24F199C* L_15 = V_2;
		int32_t L_16 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_15)->max_length),NULL));
		if ((!(((uint32_t)L_14) < ((uint32_t)L_16))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_tDBAAD2500E17E1BA8285BEE36BF88226E24F199C* L_17 = V_2;
		int32_t L_18 = V_0;
		int32_t L_19 = ((L_17)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_18)))->___hashCode;
		int32_t L_20 = V_5;
		if ((!(((uint32_t)L_19) == ((uint32_t)L_20))))
		{
			goto IL_009b;
		}
	}
	{
		EqualityComparer_1_t2AAFF66C447B855AEB2EF13BDDE1F6301924188F* L_21;
		L_21 = EqualityComparer_1_get_Default_m0AD70A24662B87624F0C4A66B70581A7F28BE2CC_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2));
		EntryU5BU5D_tDBAAD2500E17E1BA8285BEE36BF88226E24F199C* L_22 = V_2;
		int32_t L_23 = V_0;
		ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8 L_24 = ((L_22)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_23)))->___key;
		ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8 L_25 = ___0_key;
		bool L_26;
		L_26 = VirtualFuncInvoker2< bool, ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8, ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8 >::Invoke(8, L_21, L_24, L_25);
		if (L_26)
		{
			goto IL_0175;
		}
	}

IL_009b:
	{
		EntryU5BU5D_tDBAAD2500E17E1BA8285BEE36BF88226E24F199C* L_27 = V_2;
		int32_t L_28 = V_0;
		int32_t L_29 = ((L_27)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_28)))->___next;
		V_0 = L_29;
		int32_t L_30 = V_3;
		EntryU5BU5D_tDBAAD2500E17E1BA8285BEE36BF88226E24F199C* L_31 = V_2;
		int32_t L_32 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_31)->max_length),NULL));
		if ((((int32_t)L_30) < ((int32_t)L_32)))
		{
			goto IL_00b3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_00b3:
	{
		int32_t L_33 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_33, 1));
		goto IL_0066;
	}

IL_0110:
	{
		RuntimeObject* L_34 = V_4;
		ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8 L_35 = ___0_key;
		int32_t L_36;
		L_36 = InterfaceFuncInvoker1< int32_t, ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8 >::Invoke(1, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 35), L_34, L_35);
		V_8 = ((int32_t)(L_36&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_37 = V_1;
		int32_t L_38 = V_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_39 = V_1;
		int32_t L_40 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_39)->max_length),NULL));
		int32_t L_41 = ((int32_t)(L_38%L_40));
		int32_t L_42 = (L_37)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_41));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_42, 1));
	}

IL_012b:
	{
		int32_t L_43 = V_0;
		EntryU5BU5D_tDBAAD2500E17E1BA8285BEE36BF88226E24F199C* L_44 = V_2;
		int32_t L_45 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_44)->max_length),NULL));
		if ((!(((uint32_t)L_43) < ((uint32_t)L_45))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_tDBAAD2500E17E1BA8285BEE36BF88226E24F199C* L_46 = V_2;
		int32_t L_47 = V_0;
		int32_t L_48 = ((L_46)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_47)))->___hashCode;
		int32_t L_49 = V_8;
		if ((!(((uint32_t)L_48) == ((uint32_t)L_49))))
		{
			goto IL_0157;
		}
	}
	{
		RuntimeObject* L_50 = V_4;
		EntryU5BU5D_tDBAAD2500E17E1BA8285BEE36BF88226E24F199C* L_51 = V_2;
		int32_t L_52 = V_0;
		ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8 L_53 = ((L_51)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_52)))->___key;
		ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8 L_54 = ___0_key;
		bool L_55;
		L_55 = InterfaceFuncInvoker2< bool, ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8, ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8 >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 35), L_50, L_53, L_54);
		if (L_55)
		{
			goto IL_0175;
		}
	}

IL_0157:
	{
		EntryU5BU5D_tDBAAD2500E17E1BA8285BEE36BF88226E24F199C* L_56 = V_2;
		int32_t L_57 = V_0;
		int32_t L_58 = ((L_56)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_57)))->___next;
		V_0 = L_58;
		int32_t L_59 = V_3;
		EntryU5BU5D_tDBAAD2500E17E1BA8285BEE36BF88226E24F199C* L_60 = V_2;
		int32_t L_61 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_60)->max_length),NULL));
		if ((((int32_t)L_59) < ((int32_t)L_61)))
		{
			goto IL_016f;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_016f:
	{
		int32_t L_62 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_62, 1));
		goto IL_012b;
	}

IL_0175:
	{
		int32_t L_63 = V_0;
		return L_63;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_mE32E52E3C488094E26407ED7E6B96C08DE449609 (Dictionary_2_t232323BDF7857D243A4CCA18ADCF59272D0E4C23* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit);
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_capacity;
		CHECKED_LOCAL_INIT(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit,(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_1;
		L_1 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_0, NULL);
		V_0 = L_1;
		__this->____freeList = (-1);
		int32_t L_2 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_2);
		__this->____buckets = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_3);
		int32_t L_4 = V_0;
		EntryU5BU5D_tDBAAD2500E17E1BA8285BEE36BF88226E24F199C* L_5 = (EntryU5BU5D_tDBAAD2500E17E1BA8285BEE36BF88226E24F199C*)(EntryU5BU5D_tDBAAD2500E17E1BA8285BEE36BF88226E24F199C*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 43), (uint32_t)L_4);
		__this->____entries = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries), (void*)L_5);
		int32_t L_6 = V_0;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_m220ED7A977536DE48E02E89CC9802CE456A5E3C9 (Dictionary_2_t232323BDF7857D243A4CCA18ADCF59272D0E4C23* __this, ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8 ___0_key, uint32_t ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method) 
{
	EntryU5BU5D_tDBAAD2500E17E1BA8285BEE36BF88226E24F199C* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	int32_t V_8 = 0;
	int32_t* V_9 = NULL;
	Entry_tF030DFA43CB99B28608F2EE73FCD28E7DE2F193D* V_10 = NULL;
	ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8 V_11;
	memset((&V_11), 0, sizeof(V_11));
	EqualityComparer_1_t2AAFF66C447B855AEB2EF13BDDE1F6301924188F* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t G_B7_0 = 0;
	int32_t* G_B51_0 = NULL;
	{
		goto IL_000e;
	}

IL_000e:
	{
		int32_t L_1 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_1, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->____buckets;
		if (L_2)
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_3;
		L_3 = Dictionary_2_Initialize_mE32E52E3C488094E26407ED7E6B96C08DE449609(__this, 0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 1));
	}

IL_002c:
	{
		EntryU5BU5D_tDBAAD2500E17E1BA8285BEE36BF88226E24F199C* L_4 = __this->____entries;
		V_0 = L_4;
		RuntimeObject* L_5 = __this->____comparer;
		V_1 = L_5;
		RuntimeObject* L_6 = V_1;
		if (!L_6)
		{
			goto IL_0046;
		}
	}
	{
		RuntimeObject* L_7 = V_1;
		ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8 L_8 = ___0_key;
		int32_t L_9;
		L_9 = InterfaceFuncInvoker1< int32_t, ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8 >::Invoke(1, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 35), L_7, L_8);
		G_B7_0 = L_9;
		goto IL_0053;
	}

IL_0046:
	{
		int32_t L_10;
		L_10 = ValueTuple_2_GetHashCode_mF3B537BA555CF519DF00D747C94A3706513C669C((&___0_key), NULL);
		G_B7_0 = L_10;
	}

IL_0053:
	{
		V_2 = ((int32_t)(G_B7_0&((int32_t)2147483647LL)));
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____buckets;
		int32_t L_12 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = __this->____buckets;
		int32_t L_14 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_13)->max_length),NULL));
		V_4 = ((L_11)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)(L_12%L_14)))));
		int32_t* L_15 = V_4;
		int32_t L_16 = *(L_15);
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_16, 1));
		RuntimeObject* L_17 = V_1;
		if (L_17)
		{
			goto IL_0187;
		}
	}
	{
		il2cpp_codegen_initobj((&V_11), sizeof(ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8));
	}

IL_0091:
	{
		int32_t L_19 = V_5;
		EntryU5BU5D_tDBAAD2500E17E1BA8285BEE36BF88226E24F199C* L_20 = V_0;
		int32_t L_21 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_20)->max_length),NULL));
		if ((!(((uint32_t)L_19) < ((uint32_t)L_21))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_tDBAAD2500E17E1BA8285BEE36BF88226E24F199C* L_22 = V_0;
		int32_t L_23 = V_5;
		int32_t L_24 = ((L_22)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_23)))->___hashCode;
		int32_t L_25 = V_2;
		if ((!(((uint32_t)L_24) == ((uint32_t)L_25))))
		{
			goto IL_00ea;
		}
	}
	{
		EqualityComparer_1_t2AAFF66C447B855AEB2EF13BDDE1F6301924188F* L_26;
		L_26 = EqualityComparer_1_get_Default_m0AD70A24662B87624F0C4A66B70581A7F28BE2CC_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2));
		EntryU5BU5D_tDBAAD2500E17E1BA8285BEE36BF88226E24F199C* L_27 = V_0;
		int32_t L_28 = V_5;
		ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8 L_29 = ((L_27)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_28)))->___key;
		ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8 L_30 = ___0_key;
		bool L_31;
		L_31 = VirtualFuncInvoker2< bool, ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8, ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8 >::Invoke(8, L_26, L_29, L_30);
		if (!L_31)
		{
			goto IL_00ea;
		}
	}
	{
		uint8_t L_32 = ___2_behavior;
		if ((!(((uint32_t)L_32) == ((uint32_t)1))))
		{
			goto IL_00d9;
		}
	}
	{
		EntryU5BU5D_tDBAAD2500E17E1BA8285BEE36BF88226E24F199C* L_33 = V_0;
		int32_t L_34 = V_5;
		uint32_t L_35 = ___1_value;
		((L_33)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_34)))->___value = L_35;
		return (bool)1;
	}

IL_00d9:
	{
		uint8_t L_36 = ___2_behavior;
		if ((!(((uint32_t)L_36) == ((uint32_t)2))))
		{
			goto IL_00e8;
		}
	}
	{
		ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8 L_37 = ___0_key;
		ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8 L_38 = L_37;
		RuntimeObject* L_39 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 10), &L_38);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_39, NULL);
	}

IL_00e8:
	{
		return (bool)0;
	}

IL_00ea:
	{
		EntryU5BU5D_tDBAAD2500E17E1BA8285BEE36BF88226E24F199C* L_40 = V_0;
		int32_t L_41 = V_5;
		int32_t L_42 = ((L_40)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_41)))->___next;
		V_5 = L_42;
		int32_t L_43 = V_3;
		EntryU5BU5D_tDBAAD2500E17E1BA8285BEE36BF88226E24F199C* L_44 = V_0;
		int32_t L_45 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_44)->max_length),NULL));
		if ((((int32_t)L_43) < ((int32_t)L_45)))
		{
			goto IL_0104;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_0104:
	{
		int32_t L_46 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_46, 1));
		goto IL_0091;
	}

IL_0187:
	{
		int32_t L_47 = V_5;
		EntryU5BU5D_tDBAAD2500E17E1BA8285BEE36BF88226E24F199C* L_48 = V_0;
		int32_t L_49 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_48)->max_length),NULL));
		if ((!(((uint32_t)L_47) < ((uint32_t)L_49))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_tDBAAD2500E17E1BA8285BEE36BF88226E24F199C* L_50 = V_0;
		int32_t L_51 = V_5;
		int32_t L_52 = ((L_50)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_51)))->___hashCode;
		int32_t L_53 = V_2;
		if ((!(((uint32_t)L_52) == ((uint32_t)L_53))))
		{
			goto IL_01d9;
		}
	}
	{
		RuntimeObject* L_54 = V_1;
		EntryU5BU5D_tDBAAD2500E17E1BA8285BEE36BF88226E24F199C* L_55 = V_0;
		int32_t L_56 = V_5;
		ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8 L_57 = ((L_55)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_56)))->___key;
		ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8 L_58 = ___0_key;
		bool L_59;
		L_59 = InterfaceFuncInvoker2< bool, ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8, ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8 >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 35), L_54, L_57, L_58);
		if (!L_59)
		{
			goto IL_01d9;
		}
	}
	{
		uint8_t L_60 = ___2_behavior;
		if ((!(((uint32_t)L_60) == ((uint32_t)1))))
		{
			goto IL_01c8;
		}
	}
	{
		EntryU5BU5D_tDBAAD2500E17E1BA8285BEE36BF88226E24F199C* L_61 = V_0;
		int32_t L_62 = V_5;
		uint32_t L_63 = ___1_value;
		((L_61)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_62)))->___value = L_63;
		return (bool)1;
	}

IL_01c8:
	{
		uint8_t L_64 = ___2_behavior;
		if ((!(((uint32_t)L_64) == ((uint32_t)2))))
		{
			goto IL_01d7;
		}
	}
	{
		ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8 L_65 = ___0_key;
		ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8 L_66 = L_65;
		RuntimeObject* L_67 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 10), &L_66);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_67, NULL);
	}

IL_01d7:
	{
		return (bool)0;
	}

IL_01d9:
	{
		EntryU5BU5D_tDBAAD2500E17E1BA8285BEE36BF88226E24F199C* L_68 = V_0;
		int32_t L_69 = V_5;
		int32_t L_70 = ((L_68)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_69)))->___next;
		V_5 = L_70;
		int32_t L_71 = V_3;
		EntryU5BU5D_tDBAAD2500E17E1BA8285BEE36BF88226E24F199C* L_72 = V_0;
		int32_t L_73 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_72)->max_length),NULL));
		if ((((int32_t)L_71) < ((int32_t)L_73)))
		{
			goto IL_01f3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_01f3:
	{
		int32_t L_74 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_74, 1));
		goto IL_0187;
	}

IL_01f9:
	{
		V_6 = (bool)0;
		V_7 = (bool)0;
		int32_t L_75 = __this->____freeCount;
		if ((((int32_t)L_75) <= ((int32_t)0)))
		{
			goto IL_0223;
		}
	}
	{
		int32_t L_76 = __this->____freeList;
		V_8 = L_76;
		V_7 = (bool)1;
		int32_t L_77 = __this->____freeCount;
		__this->____freeCount = ((int32_t)il2cpp_codegen_subtract(L_77, 1));
		goto IL_0250;
	}

IL_0223:
	{
		int32_t L_78 = __this->____count;
		V_13 = L_78;
		int32_t L_79 = V_13;
		EntryU5BU5D_tDBAAD2500E17E1BA8285BEE36BF88226E24F199C* L_80 = V_0;
		int32_t L_81 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_80)->max_length),NULL));
		if ((!(((uint32_t)L_79) == ((uint32_t)L_81))))
		{
			goto IL_023b;
		}
	}
	{
		Dictionary_2_Resize_mD30BDC9FECDBF9E4E54027B0068D148B95032BCF(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 44));
		V_6 = (bool)1;
	}

IL_023b:
	{
		int32_t L_82 = V_13;
		V_8 = L_82;
		int32_t L_83 = V_13;
		__this->____count = ((int32_t)il2cpp_codegen_add(L_83, 1));
		EntryU5BU5D_tDBAAD2500E17E1BA8285BEE36BF88226E24F199C* L_84 = __this->____entries;
		V_0 = L_84;
	}

IL_0250:
	{
		bool L_85 = V_6;
		if (L_85)
		{
			goto IL_0258;
		}
	}
	{
		int32_t* L_86 = V_4;
		G_B51_0 = L_86;
		goto IL_026d;
	}

IL_0258:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_87 = __this->____buckets;
		int32_t L_88 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_89 = __this->____buckets;
		int32_t L_90 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_89)->max_length),NULL));
		G_B51_0 = ((L_87)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)(L_88%L_90)))));
	}

IL_026d:
	{
		V_9 = G_B51_0;
		EntryU5BU5D_tDBAAD2500E17E1BA8285BEE36BF88226E24F199C* L_91 = V_0;
		int32_t L_92 = V_8;
		V_10 = ((L_91)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_92)));
		bool L_93 = V_7;
		if (!L_93)
		{
			goto IL_028a;
		}
	}
	{
		Entry_tF030DFA43CB99B28608F2EE73FCD28E7DE2F193D* L_94 = V_10;
		int32_t L_95 = L_94->___next;
		__this->____freeList = L_95;
	}

IL_028a:
	{
		Entry_tF030DFA43CB99B28608F2EE73FCD28E7DE2F193D* L_96 = V_10;
		int32_t L_97 = V_2;
		L_96->___hashCode = L_97;
		Entry_tF030DFA43CB99B28608F2EE73FCD28E7DE2F193D* L_98 = V_10;
		int32_t* L_99 = V_9;
		int32_t L_100 = *(L_99);
		L_98->___next = ((int32_t)il2cpp_codegen_subtract(L_100, 1));
		Entry_tF030DFA43CB99B28608F2EE73FCD28E7DE2F193D* L_101 = V_10;
		ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8 L_102 = ___0_key;
		L_101->___key = L_102;
		Entry_tF030DFA43CB99B28608F2EE73FCD28E7DE2F193D* L_103 = V_10;
		uint32_t L_104 = ___1_value;
		L_103->___value = L_104;
		int32_t* L_105 = V_9;
		int32_t L_106 = V_8;
		*(L_105) = ((int32_t)il2cpp_codegen_add(L_106, 1));
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_OnDeserialization_m0E05CDD040FE789F3746CA26184430A6FC4FD952 (Dictionary_2_t232323BDF7857D243A4CCA18ADCF59272D0E4C23* __this, RuntimeObject* ___0_sender, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	KeyValuePair_2U5BU5D_tE76A126FCE108E33BC3A97C53D003B3D399BFD33* V_3 = NULL;
	int32_t V_4 = 0;
	{
		CHECKED_LOCAL_INIT(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit,(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		bool L_1;
		L_1 = ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F(L_0, __this, (&V_0), ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
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
		int32_t L_4;
		L_4 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_3, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, NULL);
		V_1 = L_4;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_5 = V_0;
		int32_t L_6;
		L_6 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_5, _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69, NULL);
		V_2 = L_6;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_7 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 34)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		RuntimeObject* L_10;
		L_10 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_7, _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9, L_9, NULL);
		__this->____comparer = ((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 35)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 35))));
		int32_t L_11 = V_2;
		if (!L_11)
		{
			goto IL_00c9;
		}
	}
	{
		int32_t L_12 = V_2;
		int32_t L_13;
		L_13 = Dictionary_2_Initialize_mE32E52E3C488094E26407ED7E6B96C08DE449609(__this, L_12, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 1));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_14 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 38)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		RuntimeObject* L_17;
		L_17 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_14, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, L_16, NULL);
		V_3 = ((KeyValuePair_2U5BU5D_tE76A126FCE108E33BC3A97C53D003B3D399BFD33*)CastclassSealed((RuntimeObject*)L_17, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 36)));
		KeyValuePair_2U5BU5D_tE76A126FCE108E33BC3A97C53D003B3D399BFD33* L_18 = V_3;
		if (L_18)
		{
			goto IL_007a;
		}
	}
	{
		ThrowHelper_ThrowSerializationException_m03BE2B48CD3617C32FBCEE16030F7C5563E04E16(((int32_t)16), NULL);
	}

IL_007a:
	{
		V_4 = 0;
		goto IL_00c0;
	}

IL_007f:
	{
		KeyValuePair_2U5BU5D_tE76A126FCE108E33BC3A97C53D003B3D399BFD33* L_19 = V_3;
		int32_t L_20 = V_4;
		ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8 L_21;
		L_21 = KeyValuePair_2_get_Key_m8C1C8921B31C68F85331E5AF3432D221789E3BF8_inline(((L_19)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_20))), NULL);
		goto IL_009a;
	}

IL_009a:
	{
		KeyValuePair_2U5BU5D_tE76A126FCE108E33BC3A97C53D003B3D399BFD33* L_22 = V_3;
		int32_t L_23 = V_4;
		ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8 L_24;
		L_24 = KeyValuePair_2_get_Key_m8C1C8921B31C68F85331E5AF3432D221789E3BF8_inline(((L_22)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_23))), NULL);
		KeyValuePair_2U5BU5D_tE76A126FCE108E33BC3A97C53D003B3D399BFD33* L_25 = V_3;
		int32_t L_26 = V_4;
		uint32_t L_27;
		L_27 = KeyValuePair_2_get_Value_mA6758BC25166F8DDB057093FDC0F13EFD4BAC6DB_inline(((L_25)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_26))), NULL);
		Dictionary_2_Add_m350F906A4FED4B04ABA55E83B4FD2EBE4CE3F244(__this, L_24, L_27, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14));
		int32_t L_28 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_00c0:
	{
		int32_t L_29 = V_4;
		KeyValuePair_2U5BU5D_tE76A126FCE108E33BC3A97C53D003B3D399BFD33* L_30 = V_3;
		int32_t L_31 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_30)->max_length),NULL));
		if ((((int32_t)L_29) < ((int32_t)L_31)))
		{
			goto IL_007f;
		}
	}
	{
		goto IL_00d0;
	}

IL_00c9:
	{
		__this->____buckets = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
	}

IL_00d0:
	{
		int32_t L_32 = V_1;
		__this->____version = L_32;
		CHECKED_LOCAL_INIT(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit,(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_33;
		L_33 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		bool L_34;
		L_34 = ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E(L_33, __this, ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_mD30BDC9FECDBF9E4E54027B0068D148B95032BCF (Dictionary_2_t232323BDF7857D243A4CCA18ADCF59272D0E4C23* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit);
	{
		int32_t L_0 = __this->____count;
		CHECKED_LOCAL_INIT(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit,(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_1;
		L_1 = HashHelpers_ExpandPrime_m9A35EC171AA0EA16F7C9F71EE6FAD5A82565ADB9(L_0, NULL);
		Dictionary_2_Resize_mE8C026A6ED87F950811CD09574A4643C2927C3AC(__this, L_1, (bool)0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 45));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_mE8C026A6ED87F950811CD09574A4643C2927C3AC (Dictionary_2_t232323BDF7857D243A4CCA18ADCF59272D0E4C23* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	EntryU5BU5D_tDBAAD2500E17E1BA8285BEE36BF88226E24F199C* V_1 = NULL;
	int32_t V_2 = 0;
	ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8 V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		int32_t L_0 = ___0_newSize;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = ___0_newSize;
		EntryU5BU5D_tDBAAD2500E17E1BA8285BEE36BF88226E24F199C* L_3 = (EntryU5BU5D_tDBAAD2500E17E1BA8285BEE36BF88226E24F199C*)(EntryU5BU5D_tDBAAD2500E17E1BA8285BEE36BF88226E24F199C*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 43), (uint32_t)L_2);
		V_1 = L_3;
		int32_t L_4 = __this->____count;
		V_2 = L_4;
		EntryU5BU5D_tDBAAD2500E17E1BA8285BEE36BF88226E24F199C* L_5 = __this->____entries;
		EntryU5BU5D_tDBAAD2500E17E1BA8285BEE36BF88226E24F199C* L_6 = V_1;
		int32_t L_7 = V_2;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, 0, (RuntimeArray*)L_6, 0, L_7, NULL);
		il2cpp_codegen_initobj((&V_3), sizeof(ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8));
		ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8 L_8 = V_3;
		bool L_9 = ___1_forceNewHashCodes;
		if (!((int32_t)((int32_t)false&(int32_t)L_9)))
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
		EntryU5BU5D_tDBAAD2500E17E1BA8285BEE36BF88226E24F199C* L_10 = V_1;
		int32_t L_11 = V_4;
		int32_t L_12 = ((L_10)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_11)))->___hashCode;
		if ((((int32_t)L_12) < ((int32_t)0)))
		{
			goto IL_0079;
		}
	}
	{
		EntryU5BU5D_tDBAAD2500E17E1BA8285BEE36BF88226E24F199C* L_13 = V_1;
		int32_t L_14 = V_4;
		EntryU5BU5D_tDBAAD2500E17E1BA8285BEE36BF88226E24F199C* L_15 = V_1;
		int32_t L_16 = V_4;
		ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8* L_17 = (ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8*)(&((L_15)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_16)))->___key);
		int32_t L_18;
		L_18 = ValueTuple_2_GetHashCode_mF3B537BA555CF519DF00D747C94A3706513C669C(L_17, NULL);
		((L_13)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_14)))->___hashCode = ((int32_t)(L_18&((int32_t)2147483647LL)));
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
		EntryU5BU5D_tDBAAD2500E17E1BA8285BEE36BF88226E24F199C* L_22 = V_1;
		int32_t L_23 = V_5;
		int32_t L_24 = ((L_22)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_23)))->___hashCode;
		if ((((int32_t)L_24) < ((int32_t)0)))
		{
			goto IL_00c5;
		}
	}
	{
		EntryU5BU5D_tDBAAD2500E17E1BA8285BEE36BF88226E24F199C* L_25 = V_1;
		int32_t L_26 = V_5;
		int32_t L_27 = ((L_25)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_26)))->___hashCode;
		int32_t L_28 = ___0_newSize;
		V_6 = ((int32_t)(L_27%L_28));
		EntryU5BU5D_tDBAAD2500E17E1BA8285BEE36BF88226E24F199C* L_29 = V_1;
		int32_t L_30 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = V_0;
		int32_t L_32 = V_6;
		int32_t L_33 = L_32;
		int32_t L_34 = (L_31)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_33));
		((L_29)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_30)))->___next = ((int32_t)il2cpp_codegen_subtract(L_34, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_35 = V_0;
		int32_t L_36 = V_6;
		int32_t L_37 = V_5;
		(L_35)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_36), (int32_t)((int32_t)il2cpp_codegen_add(L_37, 1)));
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
		__this->____buckets = L_41;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_41);
		EntryU5BU5D_tDBAAD2500E17E1BA8285BEE36BF88226E24F199C* L_42 = V_1;
		__this->____entries = L_42;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries), (void*)L_42);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m8B9C947B241C6DFD0F33A436E4BAD3E2BE02D7DF (Dictionary_2_t232323BDF7857D243A4CCA18ADCF59272D0E4C23* __this, ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8 ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Entry_tF030DFA43CB99B28608F2EE73FCD28E7DE2F193D* V_4 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	RuntimeObject* G_B10_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	bool G_B11_0 = false;
	{
		goto IL_000e;
	}

IL_000e:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		if (!L_1)
		{
			goto IL_0149;
		}
	}
	{
		RuntimeObject* L_2 = __this->____comparer;
		RuntimeObject* L_3 = L_2;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_0032;
		}
		G_B4_0 = L_3;
	}
	{
		int32_t L_4;
		L_4 = ValueTuple_2_GetHashCode_mF3B537BA555CF519DF00D747C94A3706513C669C((&___0_key), NULL);
		G_B6_0 = L_4;
		goto IL_0038;
	}

IL_0032:
	{
		ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8 L_5 = ___0_key;
		int32_t L_6;
		L_6 = InterfaceFuncInvoker1< int32_t, ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8 >::Invoke(1, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 35), G_B5_0, L_5);
		G_B6_0 = L_6;
	}

IL_0038:
	{
		V_0 = ((int32_t)(G_B6_0&((int32_t)2147483647LL)));
		int32_t L_7 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = __this->____buckets;
		int32_t L_9 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_8)->max_length),NULL));
		V_1 = ((int32_t)(L_7%L_9));
		V_2 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = __this->____buckets;
		int32_t L_11 = V_1;
		int32_t L_12 = L_11;
		int32_t L_13 = (L_10)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_12));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_13, 1));
		goto IL_0142;
	}

IL_005c:
	{
		EntryU5BU5D_tDBAAD2500E17E1BA8285BEE36BF88226E24F199C* L_14 = __this->____entries;
		int32_t L_15 = V_3;
		V_4 = ((L_14)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_15)));
		Entry_tF030DFA43CB99B28608F2EE73FCD28E7DE2F193D* L_16 = V_4;
		int32_t L_17 = L_16->___hashCode;
		int32_t L_18 = V_0;
		if ((!(((uint32_t)L_17) == ((uint32_t)L_18))))
		{
			goto IL_0138;
		}
	}
	{
		RuntimeObject* L_19 = __this->____comparer;
		RuntimeObject* L_20 = L_19;
		if (L_20)
		{
			G_B10_0 = L_20;
			goto IL_0095;
		}
		G_B9_0 = L_20;
	}
	{
		EqualityComparer_1_t2AAFF66C447B855AEB2EF13BDDE1F6301924188F* L_21;
		L_21 = EqualityComparer_1_get_Default_m0AD70A24662B87624F0C4A66B70581A7F28BE2CC_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2));
		Entry_tF030DFA43CB99B28608F2EE73FCD28E7DE2F193D* L_22 = V_4;
		ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8 L_23 = L_22->___key;
		ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8 L_24 = ___0_key;
		bool L_25;
		L_25 = VirtualFuncInvoker2< bool, ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8, ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8 >::Invoke(8, L_21, L_23, L_24);
		G_B11_0 = L_25;
		goto IL_00a2;
	}

IL_0095:
	{
		Entry_tF030DFA43CB99B28608F2EE73FCD28E7DE2F193D* L_26 = V_4;
		ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8 L_27 = L_26->___key;
		ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8 L_28 = ___0_key;
		bool L_29;
		L_29 = InterfaceFuncInvoker2< bool, ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8, ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8 >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 35), G_B10_0, L_27, L_28);
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
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = __this->____buckets;
		int32_t L_32 = V_1;
		Entry_tF030DFA43CB99B28608F2EE73FCD28E7DE2F193D* L_33 = V_4;
		int32_t L_34 = L_33->___next;
		(L_31)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_32), (int32_t)((int32_t)il2cpp_codegen_add(L_34, 1)));
		goto IL_00d6;
	}

IL_00be:
	{
		EntryU5BU5D_tDBAAD2500E17E1BA8285BEE36BF88226E24F199C* L_35 = __this->____entries;
		int32_t L_36 = V_2;
		Entry_tF030DFA43CB99B28608F2EE73FCD28E7DE2F193D* L_37 = V_4;
		int32_t L_38 = L_37->___next;
		((L_35)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_36)))->___next = L_38;
	}

IL_00d6:
	{
		Entry_tF030DFA43CB99B28608F2EE73FCD28E7DE2F193D* L_39 = V_4;
		L_39->___hashCode = (-1);
		Entry_tF030DFA43CB99B28608F2EE73FCD28E7DE2F193D* L_40 = V_4;
		int32_t L_41 = __this->____freeList;
		L_40->___next = L_41;
		goto IL_00ff;
	}

IL_00ff:
	{
		goto IL_0113;
	}

IL_0113:
	{
		int32_t L_42 = V_3;
		__this->____freeList = L_42;
		int32_t L_43 = __this->____freeCount;
		__this->____freeCount = ((int32_t)il2cpp_codegen_add(L_43, 1));
		int32_t L_44 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_44, 1));
		return (bool)1;
	}

IL_0138:
	{
		int32_t L_45 = V_3;
		V_2 = L_45;
		Entry_tF030DFA43CB99B28608F2EE73FCD28E7DE2F193D* L_46 = V_4;
		int32_t L_47 = L_46->___next;
		V_3 = L_47;
	}

IL_0142:
	{
		int32_t L_48 = V_3;
		if ((((int32_t)L_48) >= ((int32_t)0)))
		{
			goto IL_005c;
		}
	}

IL_0149:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m67D9AD29B37CEB5F99BC601ADB7A200E5D940BF0 (Dictionary_2_t232323BDF7857D243A4CCA18ADCF59272D0E4C23* __this, ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8 ___0_key, uint32_t* ___1_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Entry_tF030DFA43CB99B28608F2EE73FCD28E7DE2F193D* V_4 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	RuntimeObject* G_B10_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	bool G_B11_0 = false;
	{
		goto IL_000e;
	}

IL_000e:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		if (!L_1)
		{
			goto IL_0156;
		}
	}
	{
		RuntimeObject* L_2 = __this->____comparer;
		RuntimeObject* L_3 = L_2;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_0032;
		}
		G_B4_0 = L_3;
	}
	{
		int32_t L_4;
		L_4 = ValueTuple_2_GetHashCode_mF3B537BA555CF519DF00D747C94A3706513C669C((&___0_key), NULL);
		G_B6_0 = L_4;
		goto IL_0038;
	}

IL_0032:
	{
		ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8 L_5 = ___0_key;
		int32_t L_6;
		L_6 = InterfaceFuncInvoker1< int32_t, ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8 >::Invoke(1, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 35), G_B5_0, L_5);
		G_B6_0 = L_6;
	}

IL_0038:
	{
		V_0 = ((int32_t)(G_B6_0&((int32_t)2147483647LL)));
		int32_t L_7 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = __this->____buckets;
		int32_t L_9 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_8)->max_length),NULL));
		V_1 = ((int32_t)(L_7%L_9));
		V_2 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = __this->____buckets;
		int32_t L_11 = V_1;
		int32_t L_12 = L_11;
		int32_t L_13 = (L_10)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_12));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_13, 1));
		goto IL_014f;
	}

IL_005c:
	{
		EntryU5BU5D_tDBAAD2500E17E1BA8285BEE36BF88226E24F199C* L_14 = __this->____entries;
		int32_t L_15 = V_3;
		V_4 = ((L_14)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_15)));
		Entry_tF030DFA43CB99B28608F2EE73FCD28E7DE2F193D* L_16 = V_4;
		int32_t L_17 = L_16->___hashCode;
		int32_t L_18 = V_0;
		if ((!(((uint32_t)L_17) == ((uint32_t)L_18))))
		{
			goto IL_0145;
		}
	}
	{
		RuntimeObject* L_19 = __this->____comparer;
		RuntimeObject* L_20 = L_19;
		if (L_20)
		{
			G_B10_0 = L_20;
			goto IL_0095;
		}
		G_B9_0 = L_20;
	}
	{
		EqualityComparer_1_t2AAFF66C447B855AEB2EF13BDDE1F6301924188F* L_21;
		L_21 = EqualityComparer_1_get_Default_m0AD70A24662B87624F0C4A66B70581A7F28BE2CC_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2));
		Entry_tF030DFA43CB99B28608F2EE73FCD28E7DE2F193D* L_22 = V_4;
		ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8 L_23 = L_22->___key;
		ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8 L_24 = ___0_key;
		bool L_25;
		L_25 = VirtualFuncInvoker2< bool, ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8, ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8 >::Invoke(8, L_21, L_23, L_24);
		G_B11_0 = L_25;
		goto IL_00a2;
	}

IL_0095:
	{
		Entry_tF030DFA43CB99B28608F2EE73FCD28E7DE2F193D* L_26 = V_4;
		ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8 L_27 = L_26->___key;
		ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8 L_28 = ___0_key;
		bool L_29;
		L_29 = InterfaceFuncInvoker2< bool, ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8, ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8 >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 35), G_B10_0, L_27, L_28);
		G_B11_0 = L_29;
	}

IL_00a2:
	{
		if (!G_B11_0)
		{
			goto IL_0145;
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
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = __this->____buckets;
		int32_t L_32 = V_1;
		Entry_tF030DFA43CB99B28608F2EE73FCD28E7DE2F193D* L_33 = V_4;
		int32_t L_34 = L_33->___next;
		(L_31)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_32), (int32_t)((int32_t)il2cpp_codegen_add(L_34, 1)));
		goto IL_00d6;
	}

IL_00be:
	{
		EntryU5BU5D_tDBAAD2500E17E1BA8285BEE36BF88226E24F199C* L_35 = __this->____entries;
		int32_t L_36 = V_2;
		Entry_tF030DFA43CB99B28608F2EE73FCD28E7DE2F193D* L_37 = V_4;
		int32_t L_38 = L_37->___next;
		((L_35)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_36)))->___next = L_38;
	}

IL_00d6:
	{
		uint32_t* L_39 = ___1_value;
		Entry_tF030DFA43CB99B28608F2EE73FCD28E7DE2F193D* L_40 = V_4;
		uint32_t L_41 = L_40->___value;
		*(uint32_t*)L_39 = L_41;
		Entry_tF030DFA43CB99B28608F2EE73FCD28E7DE2F193D* L_42 = V_4;
		L_42->___hashCode = (-1);
		Entry_tF030DFA43CB99B28608F2EE73FCD28E7DE2F193D* L_43 = V_4;
		int32_t L_44 = __this->____freeList;
		L_43->___next = L_44;
		goto IL_010c;
	}

IL_010c:
	{
		goto IL_0120;
	}

IL_0120:
	{
		int32_t L_45 = V_3;
		__this->____freeList = L_45;
		int32_t L_46 = __this->____freeCount;
		__this->____freeCount = ((int32_t)il2cpp_codegen_add(L_46, 1));
		int32_t L_47 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_47, 1));
		return (bool)1;
	}

IL_0145:
	{
		int32_t L_48 = V_3;
		V_2 = L_48;
		Entry_tF030DFA43CB99B28608F2EE73FCD28E7DE2F193D* L_49 = V_4;
		int32_t L_50 = L_49->___next;
		V_3 = L_50;
	}

IL_014f:
	{
		int32_t L_51 = V_3;
		if ((((int32_t)L_51) >= ((int32_t)0)))
		{
			goto IL_005c;
		}
	}

IL_0156:
	{
		uint32_t* L_52 = ___1_value;
		il2cpp_codegen_initobj(L_52, sizeof(uint32_t));
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m0CFCB75B1A7F2DC2B2E46B6D030A7C3AC148024E (Dictionary_2_t232323BDF7857D243A4CCA18ADCF59272D0E4C23* __this, ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8 ___0_key, uint32_t* ___1_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8 L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m1BB6F05AA034CDC37E38968F65C1F9A031818101(__this, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 26));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0025;
		}
	}
	{
		uint32_t* L_3 = ___1_value;
		EntryU5BU5D_tDBAAD2500E17E1BA8285BEE36BF88226E24F199C* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		uint32_t L_6 = ((L_4)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		*(uint32_t*)L_3 = L_6;
		return (bool)1;
	}

IL_0025:
	{
		uint32_t* L_7 = ___1_value;
		il2cpp_codegen_initobj(L_7, sizeof(uint32_t));
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryAdd_mEE44A88B4F268938825F1E9AFF9AC2EFECE1C5F3 (Dictionary_2_t232323BDF7857D243A4CCA18ADCF59272D0E4C23* __this, ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8 ___0_key, uint32_t ___1_value, const RuntimeMethod* method) 
{
	{
		ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8 L_0 = ___0_key;
		uint32_t L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_m220ED7A977536DE48E02E89CC9802CE456A5E3C9(__this, L_0, L_1, 0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 27));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_mBAB39C608332DD6CCA4E37BC38AD011167DCD7D1 (Dictionary_2_t232323BDF7857D243A4CCA18ADCF59272D0E4C23* __this, KeyValuePair_2U5BU5D_tE76A126FCE108E33BC3A97C53D003B3D399BFD33* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2U5BU5D_tE76A126FCE108E33BC3A97C53D003B3D399BFD33* L_0 = ___0_array;
		int32_t L_1 = ___1_index;
		Dictionary_2_CopyTo_m8379F15C7422541338906B2A9998722F4A34FE9B(__this, L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_ICollection_CopyTo_m55DB3C97A19E8D5D271AA2022E88FFC5CEA28648 (Dictionary_2_t232323BDF7857D243A4CCA18ADCF59272D0E4C23* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_tE76A126FCE108E33BC3A97C53D003B3D399BFD33* V_0 = NULL;
	DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* V_1 = NULL;
	EntryU5BU5D_tDBAAD2500E17E1BA8285BEE36BF88226E24F199C* V_2 = NULL;
	int32_t V_3 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_4 = NULL;
	int32_t V_5 = 0;
	EntryU5BU5D_tDBAAD2500E17E1BA8285BEE36BF88226E24F199C* V_6 = NULL;
	int32_t V_7 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		int32_t L_2;
		L_2 = il2cpp_codegen_array_get_rank(L_1);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		RuntimeArray* L_6 = ___0_array;
		int32_t L_7;
		L_7 = il2cpp_codegen_array_get_length(L_6);
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
		RuntimeArray* L_8 = ___0_array;
		int32_t L_9;
		L_9 = il2cpp_codegen_array_get_length(L_8);
		int32_t L_10 = ___1_index;
		int32_t L_11;
		L_11 = Dictionary_2_get_Count_m502FBCE64E7FDAE32F763BF830BD2BD555529666(__this, NULL);
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_9, L_10))) >= ((int32_t)L_11)))
		{
			goto IL_004b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(5, NULL);
	}

IL_004b:
	{
		RuntimeArray* L_12 = ___0_array;
		V_0 = ((KeyValuePair_2U5BU5D_tE76A126FCE108E33BC3A97C53D003B3D399BFD33*)IsInstSealed((RuntimeObject*)L_12, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 36)));
		KeyValuePair_2U5BU5D_tE76A126FCE108E33BC3A97C53D003B3D399BFD33* L_13 = V_0;
		if (!L_13)
		{
			goto IL_005e;
		}
	}
	{
		KeyValuePair_2U5BU5D_tE76A126FCE108E33BC3A97C53D003B3D399BFD33* L_14 = V_0;
		int32_t L_15 = ___1_index;
		Dictionary_2_CopyTo_m8379F15C7422541338906B2A9998722F4A34FE9B(__this, L_14, L_15, NULL);
		return;
	}

IL_005e:
	{
		RuntimeArray* L_16 = ___0_array;
		V_1 = ((DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533*)IsInstSealed((RuntimeObject*)L_16, DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var));
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_17 = V_1;
		if (!L_17)
		{
			goto IL_00c3;
		}
	}
	{
		EntryU5BU5D_tDBAAD2500E17E1BA8285BEE36BF88226E24F199C* L_18 = __this->____entries;
		V_2 = L_18;
		V_3 = 0;
		goto IL_00b9;
	}

IL_0073:
	{
		EntryU5BU5D_tDBAAD2500E17E1BA8285BEE36BF88226E24F199C* L_19 = V_2;
		int32_t L_20 = V_3;
		int32_t L_21 = ((L_19)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_20)))->___hashCode;
		if ((((int32_t)L_21) < ((int32_t)0)))
		{
			goto IL_00b5;
		}
	}
	{
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_22 = V_1;
		int32_t L_23 = ___1_index;
		int32_t L_24 = L_23;
		___1_index = ((int32_t)il2cpp_codegen_add(L_24, 1));
		EntryU5BU5D_tDBAAD2500E17E1BA8285BEE36BF88226E24F199C* L_25 = V_2;
		int32_t L_26 = V_3;
		ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8 L_27 = ((L_25)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_26)))->___key;
		ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8 L_28 = L_27;
		RuntimeObject* L_29 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 10), &L_28);
		EntryU5BU5D_tDBAAD2500E17E1BA8285BEE36BF88226E24F199C* L_30 = V_2;
		int32_t L_31 = V_3;
		uint32_t L_32 = ((L_30)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_31)))->___value;
		uint32_t L_33 = L_32;
		RuntimeObject* L_34 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12), &L_33);
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_35;
		memset((&L_35), 0, sizeof(L_35));
		DictionaryEntry__ctor_m2768353E53A75C4860E34B37DAF1342120C5D1EA((&L_35), L_29, L_34, NULL);
		(L_22)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_24), (DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB)L_35);
	}

IL_00b5:
	{
		int32_t L_36 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_36, 1));
	}

IL_00b9:
	{
		int32_t L_37 = V_3;
		int32_t L_38 = __this->____count;
		if ((((int32_t)L_37) < ((int32_t)L_38)))
		{
			goto IL_0073;
		}
	}
	{
		return;
	}

IL_00c3:
	{
		RuntimeArray* L_39 = ___0_array;
		V_4 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_39, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_40 = V_4;
		if (L_40)
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
	{
		{
			int32_t L_41 = __this->____count;
			V_5 = L_41;
			EntryU5BU5D_tDBAAD2500E17E1BA8285BEE36BF88226E24F199C* L_42 = __this->____entries;
			V_6 = L_42;
			V_7 = 0;
			goto IL_0130_1;
		}

IL_00ea_1:
		{
			EntryU5BU5D_tDBAAD2500E17E1BA8285BEE36BF88226E24F199C* L_43 = V_6;
			int32_t L_44 = V_7;
			int32_t L_45 = ((L_43)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_44)))->___hashCode;
			if ((((int32_t)L_45) < ((int32_t)0)))
			{
				goto IL_012a_1;
			}
		}
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_46 = V_4;
			int32_t L_47 = ___1_index;
			int32_t L_48 = L_47;
			___1_index = ((int32_t)il2cpp_codegen_add(L_48, 1));
			EntryU5BU5D_tDBAAD2500E17E1BA8285BEE36BF88226E24F199C* L_49 = V_6;
			int32_t L_50 = V_7;
			ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8 L_51 = ((L_49)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_50)))->___key;
			EntryU5BU5D_tDBAAD2500E17E1BA8285BEE36BF88226E24F199C* L_52 = V_6;
			int32_t L_53 = V_7;
			uint32_t L_54 = ((L_52)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_53)))->___value;
			KeyValuePair_2_t367B869B5B9E3AC484B7F3A6A22B30D27181B421 L_55;
			memset((&L_55), 0, sizeof(L_55));
			KeyValuePair_2__ctor_mB3FC4BB26A5A8582D4E0E91BE60ED3FFE95AEE2A((&L_55), L_51, L_54, NULL);
			KeyValuePair_2_t367B869B5B9E3AC484B7F3A6A22B30D27181B421 L_56 = L_55;
			RuntimeObject* L_57 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 19), &L_56);
			ArrayElementTypeCheck (L_46, L_57);
			(L_46)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_48), (RuntimeObject*)L_57);
		}

IL_012a_1:
		{
			int32_t L_58 = V_7;
			V_7 = ((int32_t)il2cpp_codegen_add(L_58, 1));
		}

IL_0130_1:
		{
			int32_t L_59 = V_7;
			int32_t L_60 = V_5;
			if ((((int32_t)L_59) < ((int32_t)L_60)))
			{
				goto IL_00ea_1;
			}
		}
		{
			goto IL_0140;
		}
	}
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
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_61 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0140;
	}

IL_0140:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IEnumerable_GetEnumerator_mBD71ECA19B507C327D8540ADA75AEC4448CE7CB7 (Dictionary_2_t232323BDF7857D243A4CCA18ADCF59272D0E4C23* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tA1D674047414071FA450BD89252F77B3361FE9BF L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mC61F6FB7DB0671A83D237E3774728E980C4A34CF((&L_0), __this, 2, NULL);
		Enumerator_tA1D674047414071FA450BD89252F77B3361FE9BF L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 32), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_EnsureCapacity_m8B7013485B3149444BA63860215089D72342FC81 (Dictionary_2_t232323BDF7857D243A4CCA18ADCF59272D0E4C23* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_000b;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97(((int32_t)12), NULL);
	}

IL_000b:
	{
		EntryU5BU5D_tDBAAD2500E17E1BA8285BEE36BF88226E24F199C* L_1 = __this->____entries;
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		EntryU5BU5D_tDBAAD2500E17E1BA8285BEE36BF88226E24F199C* L_2 = __this->____entries;
		int32_t L_3 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_2)->max_length),NULL));
		G_B5_0 = L_3;
		goto IL_001e;
	}

IL_001d:
	{
		G_B5_0 = 0;
	}

IL_001e:
	{
		V_0 = G_B5_0;
		int32_t L_4 = V_0;
		int32_t L_5 = ___0_capacity;
		if ((((int32_t)L_4) < ((int32_t)L_5)))
		{
			goto IL_0025;
		}
	}
	{
		int32_t L_6 = V_0;
		return L_6;
	}

IL_0025:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = __this->____buckets;
		if (L_7)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_8 = ___0_capacity;
		int32_t L_9;
		L_9 = Dictionary_2_Initialize_mE32E52E3C488094E26407ED7E6B96C08DE449609(__this, L_8, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 1));
		return L_9;
	}

IL_0035:
	{
		int32_t L_10 = ___0_capacity;
		CHECKED_LOCAL_INIT(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit,(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_11;
		L_11 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_10, NULL);
		V_1 = L_11;
		int32_t L_12 = V_1;
		Dictionary_2_Resize_mE8C026A6ED87F950811CD09574A4643C2927C3AC(__this, L_12, (bool)0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 45));
		int32_t L_13 = V_1;
		return L_13;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_IDictionary_set_Item_m777CE5A12D3627B0F950531051BBFD114894420D (Dictionary_2_t232323BDF7857D243A4CCA18ADCF59272D0E4C23* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(Type_t_StaticInit);
	ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8 V_0;
	memset((&V_0), 0, sizeof(V_0));
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___1_value;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mD81B5632275C9C89651C1B357F26058E8E76A526(L_1, ((int32_t)15), NULL);
	}
	try
	{
		{
			RuntimeObject* L_2 = ___0_key;
			V_0 = ((*(ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 10))));
		}
		try
		{
			ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8 L_3 = V_0;
			RuntimeObject* L_4 = ___1_value;
			Dictionary_2_set_Item_m2D58AB9D0EE1189C2642E8866CE5DBD92AADCAEF(__this, L_3, ((*(uint32_t*)UnBox(L_4, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 49));
			goto IL_003a_1;
		}
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
		{
			InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_5 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
			RuntimeObject* L_6 = ___1_value;
			RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 50)) };
			CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
			Type_t* L_8;
			L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
			ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_6, L_8, NULL);
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_003a_1;
		}

IL_003a_1:
		{
			goto IL_004f;
		}
	}
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
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_9 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_10 = ___0_key;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 51)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		ThrowHelper_ThrowWrongKeyTypeArgumentException_m90E5BCE2CB10EEC16F254C237121C6816C4D6982(L_10, L_12, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_004f;
	}

IL_004f:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_GetEnumerator_m17D460F3016405411A624636A1CA12BD32F841FF (Dictionary_2_t232323BDF7857D243A4CCA18ADCF59272D0E4C23* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tA1D674047414071FA450BD89252F77B3361FE9BF L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mC61F6FB7DB0671A83D237E3774728E980C4A34CF((&L_0), __this, 1, NULL);
		Enumerator_tA1D674047414071FA450BD89252F77B3361FE9BF L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 32), &L_1);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mDAE28766991DA90CA0182FEB3630C356F0D3A58A_gshared (Dictionary_2_t6EE05E1DBF257B416E0A3B6FE8BF1C1F55C8C13B* __this, const RuntimeMethod* method) 
{
	{
		Dictionary_2__ctor_m86B8B16DB9C92FF405CB902F82146B9D136E9984(__this, 0, (RuntimeObject*)NULL, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m7D07BFF09CD0A13D048507C8478F869D9B7DA954_gshared (Dictionary_2_t6EE05E1DBF257B416E0A3B6FE8BF1C1F55C8C13B* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_capacity;
		Dictionary_2__ctor_m86B8B16DB9C92FF405CB902F82146B9D136E9984(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mE29A61FA622B0B4CC65A83F2ABAF19B40D6D9539_gshared (Dictionary_2_t6EE05E1DBF257B416E0A3B6FE8BF1C1F55C8C13B* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_comparer;
		Dictionary_2__ctor_m86B8B16DB9C92FF405CB902F82146B9D136E9984(__this, 0, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m86B8B16DB9C92FF405CB902F82146B9D136E9984_gshared (Dictionary_2_t6EE05E1DBF257B416E0A3B6FE8BF1C1F55C8C13B* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0011;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97(((int32_t)12), NULL);
	}

IL_0011:
	{
		int32_t L_1 = ___0_capacity;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_2 = ___0_capacity;
		int32_t L_3;
		L_3 = Dictionary_2_Initialize_m9694FF4B4E2C144DCEF2FCE1F3082855262A7256(__this, L_2, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 1));
	}

IL_001d:
	{
		RuntimeObject* L_4 = ___1_comparer;
		EqualityComparer_1_t6AF08CEAD675C05C1B701806606C7CB7CF53951F* L_5;
		L_5 = EqualityComparer_1_get_Default_m56D88D65184F0E2CB43D9A2853637D9E87D10FC5_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2));
		if ((((RuntimeObject*)(RuntimeObject*)L_4) == ((RuntimeObject*)(EqualityComparer_1_t6AF08CEAD675C05C1B701806606C7CB7CF53951F*)L_5)))
		{
			goto IL_002c;
		}
	}
	{
		RuntimeObject* L_6 = ___1_comparer;
		__this->____comparer = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)L_6);
	}

IL_002c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m55E1072B6FFDBB2DA0795FB824559888AADB831D_gshared (Dictionary_2_t6EE05E1DBF257B416E0A3B6FE8BF1C1F55C8C13B* __this, RuntimeObject* ___0_dictionary, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_dictionary;
		Dictionary_2__ctor_mE4B120CEAC8B3FB8164A6B8421DB9482654758F3(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 3));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mE4B120CEAC8B3FB8164A6B8421DB9482654758F3_gshared (Dictionary_2_t6EE05E1DBF257B416E0A3B6FE8BF1C1F55C8C13B* __this, RuntimeObject* ___0_dictionary, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	EntryU5BU5D_t2CF41CF5E2621F7EFD1220745F530C0B5DC797C3* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	KeyValuePair_2_tA18DA0C0E7B0709B9741404F85570AF6334E7295 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Dictionary_2_t6EE05E1DBF257B416E0A3B6FE8BF1C1F55C8C13B* G_B2_0 = NULL;
	Dictionary_2_t6EE05E1DBF257B416E0A3B6FE8BF1C1F55C8C13B* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	Dictionary_2_t6EE05E1DBF257B416E0A3B6FE8BF1C1F55C8C13B* G_B3_1 = NULL;
	{
		RuntimeObject* L_0 = ___0_dictionary;
		if (L_0)
		{
			G_B2_0 = __this;
			goto IL_0007;
		}
		G_B1_0 = __this;
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_000d;
	}

IL_0007:
	{
		RuntimeObject* L_1 = ___0_dictionary;
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 4), (RuntimeObject*)L_1);
		G_B3_0 = L_2;
		G_B3_1 = G_B2_0;
	}

IL_000d:
	{
		RuntimeObject* L_3 = ___1_comparer;
		Dictionary_2__ctor_m86B8B16DB9C92FF405CB902F82146B9D136E9984(G_B3_1, G_B3_0, L_3, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0));
		RuntimeObject* L_4 = ___0_dictionary;
		if (L_4)
		{
			goto IL_001c;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(1, NULL);
	}

IL_001c:
	{
		RuntimeObject* L_5 = ___0_dictionary;
		void* L_6 = il2cpp_codegen_object_get_class(L_5);
		bool L_7 = (il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7)) == (L_6);
		if (!L_7)
		{
			goto IL_0080;
		}
	}
	{
		RuntimeObject* L_8 = ___0_dictionary;
		Dictionary_2_t6EE05E1DBF257B416E0A3B6FE8BF1C1F55C8C13B* L_9 = ((Dictionary_2_t6EE05E1DBF257B416E0A3B6FE8BF1C1F55C8C13B*)CastclassClass((RuntimeObject*)L_8, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7)));
		int32_t L_10 = L_9->____count;
		V_0 = L_10;
		EntryU5BU5D_t2CF41CF5E2621F7EFD1220745F530C0B5DC797C3* L_11 = L_9->____entries;
		V_1 = L_11;
		V_2 = 0;
		goto IL_007b;
	}

IL_004a:
	{
		EntryU5BU5D_t2CF41CF5E2621F7EFD1220745F530C0B5DC797C3* L_12 = V_1;
		int32_t L_13 = V_2;
		int32_t L_14 = ((L_12)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_13)))->___hashCode;
		if ((((int32_t)L_14) < ((int32_t)0)))
		{
			goto IL_0077;
		}
	}
	{
		EntryU5BU5D_t2CF41CF5E2621F7EFD1220745F530C0B5DC797C3* L_15 = V_1;
		int32_t L_16 = V_2;
		ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A L_17 = ((L_15)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_16)))->___key;
		EntryU5BU5D_t2CF41CF5E2621F7EFD1220745F530C0B5DC797C3* L_18 = V_1;
		int32_t L_19 = V_2;
		Il2CppSharedGenericObject* L_20 = ((L_18)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_19)))->___value;
		Dictionary_2_Add_m76898227E21B42ADA9F5DB5A6366CE107CE1E940(__this, L_17, L_20, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14));
	}

IL_0077:
	{
		int32_t L_21 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_007b:
	{
		int32_t L_22 = V_2;
		int32_t L_23 = V_0;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_004a;
		}
	}
	{
		return;
	}

IL_0080:
	{
		RuntimeObject* L_24 = ___0_dictionary;
		RuntimeObject* L_25;
		L_25 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 15), (RuntimeObject*)L_24);
		V_3 = L_25;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00af:
			{
				{
					RuntimeObject* L_26 = V_3;
					if (!L_26)
					{
						goto IL_00b8;
					}
				}
				{
					RuntimeObject* L_27 = V_3;
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_27);
				}

IL_00b8:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_00a5_1;
			}

IL_0089_1:
			{
				RuntimeObject* L_28 = V_3;
				KeyValuePair_2_tA18DA0C0E7B0709B9741404F85570AF6334E7295 L_29;
				L_29 = InterfaceFuncInvoker0< KeyValuePair_2_tA18DA0C0E7B0709B9741404F85570AF6334E7295 >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 17), L_28);
				V_4 = L_29;
				ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A L_30;
				L_30 = KeyValuePair_2_get_Key_mEFCCF9BC1F4022E15A29A44A49E8DE3FA5180978_inline((&V_4), NULL);
				Il2CppSharedGenericObject* L_31;
				L_31 = KeyValuePair_2_get_Value_m8A4C32B0E709D6A7629FA7869F673CC94F500282_inline((&V_4), NULL);
				Dictionary_2_Add_m76898227E21B42ADA9F5DB5A6366CE107CE1E940(__this, L_30, L_31, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14));
			}

IL_00a5_1:
			{
				RuntimeObject* L_32 = V_3;
				bool L_33;
				L_33 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_32);
				if (L_33)
				{
					goto IL_0089_1;
				}
			}
			{
				goto IL_00b9;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_tF3843FC39D5C3B0CEA3C2A09563C6BE9D7327575* Dictionary_2_get_Keys_m59EDFF48264F283729CF504D7ED40484240331EC_gshared (Dictionary_2_t6EE05E1DBF257B416E0A3B6FE8BF1C1F55C8C13B* __this, const RuntimeMethod* method) 
{
	{
		KeyCollection_tF3843FC39D5C3B0CEA3C2A09563C6BE9D7327575* L_0 = __this->____keys;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		KeyCollection_tF3843FC39D5C3B0CEA3C2A09563C6BE9D7327575* L_1 = (KeyCollection_tF3843FC39D5C3B0CEA3C2A09563C6BE9D7327575*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 22));
		KeyCollection__ctor_m28B3CAD60EA6848BE8C46114BD6E0C8FF936E72A(L_1, __this, NULL);
		__this->____keys = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keys), (void*)L_1);
	}

IL_0014:
	{
		KeyCollection_tF3843FC39D5C3B0CEA3C2A09563C6BE9D7327575* L_2 = __this->____keys;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_tE676A0B8EBB18ACFBE7F3E153BEC60CA0E3BE2D1* Dictionary_2_get_Values_mDEA6A43564B7A3B2B74ADB07370392714267B447_gshared (Dictionary_2_t6EE05E1DBF257B416E0A3B6FE8BF1C1F55C8C13B* __this, const RuntimeMethod* method) 
{
	{
		ValueCollection_tE676A0B8EBB18ACFBE7F3E153BEC60CA0E3BE2D1* L_0 = __this->____values;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_tE676A0B8EBB18ACFBE7F3E153BEC60CA0E3BE2D1* L_1 = (ValueCollection_tE676A0B8EBB18ACFBE7F3E153BEC60CA0E3BE2D1*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 24));
		ValueCollection__ctor_mD531F2816B35D4869E5EB9CCD56794AD15649388(L_1, __this, NULL);
		__this->____values = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_tE676A0B8EBB18ACFBE7F3E153BEC60CA0E3BE2D1* L_2 = __this->____values;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* Dictionary_2_get_Item_m23A5A07AE8C61F7DBA9F66FD4082B5647D271F61_gshared (Dictionary_2_t6EE05E1DBF257B416E0A3B6FE8BF1C1F55C8C13B* __this, ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Il2CppSharedGenericObject* V_1 = NULL;
	{
		ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m5EE6BB86A74B61BA4F43F7FCD7A19396DDA1DEB6(__this, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 26));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_001e;
		}
	}
	{
		EntryU5BU5D_t2CF41CF5E2621F7EFD1220745F530C0B5DC797C3* L_3 = __this->____entries;
		int32_t L_4 = V_0;
		Il2CppSharedGenericObject* L_5 = ((L_3)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_4)))->___value;
		return L_5;
	}

IL_001e:
	{
		ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A L_6 = ___0_key;
		ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 10), &L_7);
		ThrowHelper_ThrowKeyNotFoundException_m6A17735FA486AD43F2488DE39B755AC60BC99CE7(L_8, NULL);
		il2cpp_codegen_initobj((&V_1), sizeof(Il2CppSharedGenericObject*));
		Il2CppSharedGenericObject* L_9 = V_1;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_mB372B26FF800DAB8A056AC36CEF56999C6B8C0B2_gshared (Dictionary_2_t6EE05E1DBF257B416E0A3B6FE8BF1C1F55C8C13B* __this, ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A ___0_key, Il2CppSharedGenericObject* ___1_value, const RuntimeMethod* method) 
{
	{
		ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A L_0 = ___0_key;
		Il2CppSharedGenericObject* L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_m80FCA7D16C6C7009BA59F2ABAA24CF6394A0F865(__this, L_0, L_1, 1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 27));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m76898227E21B42ADA9F5DB5A6366CE107CE1E940_gshared (Dictionary_2_t6EE05E1DBF257B416E0A3B6FE8BF1C1F55C8C13B* __this, ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A ___0_key, Il2CppSharedGenericObject* ___1_value, const RuntimeMethod* method) 
{
	{
		ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A L_0 = ___0_key;
		Il2CppSharedGenericObject* L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_m80FCA7D16C6C7009BA59F2ABAA24CF6394A0F865(__this, L_0, L_1, 2, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 27));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m36A1726D1A64DBFB0EB4E109963BC1C38DA7C2DA_gshared (Dictionary_2_t6EE05E1DBF257B416E0A3B6FE8BF1C1F55C8C13B* __this, KeyValuePair_2_tA18DA0C0E7B0709B9741404F85570AF6334E7295 ___0_keyValuePair, const RuntimeMethod* method) 
{
	{
		ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A L_0;
		L_0 = KeyValuePair_2_get_Key_mEFCCF9BC1F4022E15A29A44A49E8DE3FA5180978_inline((&___0_keyValuePair), NULL);
		Il2CppSharedGenericObject* L_1;
		L_1 = KeyValuePair_2_get_Value_m8A4C32B0E709D6A7629FA7869F673CC94F500282_inline((&___0_keyValuePair), NULL);
		Dictionary_2_Add_m76898227E21B42ADA9F5DB5A6366CE107CE1E940(__this, L_0, L_1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_mCDA4ABDA01342BBEBFBF15C806D85D07A0FEE307_gshared (Dictionary_2_t6EE05E1DBF257B416E0A3B6FE8BF1C1F55C8C13B* __this, KeyValuePair_2_tA18DA0C0E7B0709B9741404F85570AF6334E7295 ___0_keyValuePair, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A L_0;
		L_0 = KeyValuePair_2_get_Key_mEFCCF9BC1F4022E15A29A44A49E8DE3FA5180978_inline((&___0_keyValuePair), NULL);
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m5EE6BB86A74B61BA4F43F7FCD7A19396DDA1DEB6(__this, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 26));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0038;
		}
	}
	{
		EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* L_3;
		L_3 = EqualityComparer_1_get_Default_mB451453B7B5B4B570A9347E090AB0FAC75C0C628_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 28));
		EntryU5BU5D_t2CF41CF5E2621F7EFD1220745F530C0B5DC797C3* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		Il2CppSharedGenericObject* L_6 = ((L_4)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		Il2CppSharedGenericObject* L_7;
		L_7 = KeyValuePair_2_get_Value_m8A4C32B0E709D6A7629FA7869F673CC94F500282_inline((&___0_keyValuePair), NULL);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, Il2CppSharedGenericObject*, Il2CppSharedGenericObject* >::Invoke(8, L_3, L_6, L_7);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_mEB4DBA68128DB3538B6D92415D213E3836A0DB00_gshared (Dictionary_2_t6EE05E1DBF257B416E0A3B6FE8BF1C1F55C8C13B* __this, KeyValuePair_2_tA18DA0C0E7B0709B9741404F85570AF6334E7295 ___0_keyValuePair, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A L_0;
		L_0 = KeyValuePair_2_get_Key_mEFCCF9BC1F4022E15A29A44A49E8DE3FA5180978_inline((&___0_keyValuePair), NULL);
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m5EE6BB86A74B61BA4F43F7FCD7A19396DDA1DEB6(__this, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 26));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0046;
		}
	}
	{
		EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* L_3;
		L_3 = EqualityComparer_1_get_Default_mB451453B7B5B4B570A9347E090AB0FAC75C0C628_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 28));
		EntryU5BU5D_t2CF41CF5E2621F7EFD1220745F530C0B5DC797C3* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		Il2CppSharedGenericObject* L_6 = ((L_4)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		Il2CppSharedGenericObject* L_7;
		L_7 = KeyValuePair_2_get_Value_m8A4C32B0E709D6A7629FA7869F673CC94F500282_inline((&___0_keyValuePair), NULL);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, Il2CppSharedGenericObject*, Il2CppSharedGenericObject* >::Invoke(8, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0046;
		}
	}
	{
		ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A L_9;
		L_9 = KeyValuePair_2_get_Key_mEFCCF9BC1F4022E15A29A44A49E8DE3FA5180978_inline((&___0_keyValuePair), NULL);
		bool L_10;
		L_10 = Dictionary_2_Remove_m38590317DE74DBE8D92F2CBEF07EB2166FD77F8A(__this, L_9, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 29));
		return (bool)1;
	}

IL_0046:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m3D9BEEAC0D4BEFD3F54006312EC7895EA1BD7A63_gshared (Dictionary_2_t6EE05E1DBF257B416E0A3B6FE8BF1C1F55C8C13B* __this, ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A ___0_key, const RuntimeMethod* method) 
{
	{
		ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m5EE6BB86A74B61BA4F43F7FCD7A19396DDA1DEB6(__this, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 26));
		return (bool)((((int32_t)((((int32_t)L_1) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsValue_m08A93A4677DE0106AF8187A341C674A783136F9E_gshared (Dictionary_2_t6EE05E1DBF257B416E0A3B6FE8BF1C1F55C8C13B* __this, Il2CppSharedGenericObject* ___0_value, const RuntimeMethod* method) 
{
	EntryU5BU5D_t2CF41CF5E2621F7EFD1220745F530C0B5DC797C3* V_0 = NULL;
	int32_t V_1 = 0;
	Il2CppSharedGenericObject* V_2 = NULL;
	int32_t V_3 = 0;
	EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* V_4 = NULL;
	int32_t V_5 = 0;
	{
		EntryU5BU5D_t2CF41CF5E2621F7EFD1220745F530C0B5DC797C3* L_0 = __this->____entries;
		V_0 = L_0;
		Il2CppSharedGenericObject* L_1 = ___0_value;
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
		EntryU5BU5D_t2CF41CF5E2621F7EFD1220745F530C0B5DC797C3* L_2 = V_0;
		int32_t L_3 = V_1;
		int32_t L_4 = ((L_2)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_3)))->___hashCode;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0037;
		}
	}
	{
		EntryU5BU5D_t2CF41CF5E2621F7EFD1220745F530C0B5DC797C3* L_5 = V_0;
		int32_t L_6 = V_1;
		Il2CppSharedGenericObject* L_7 = ((L_5)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_6)))->___value;
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
		int32_t L_10 = __this->____count;
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
		il2cpp_codegen_initobj((&V_2), sizeof(Il2CppSharedGenericObject*));
		Il2CppSharedGenericObject* L_11 = V_2;
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
		EntryU5BU5D_t2CF41CF5E2621F7EFD1220745F530C0B5DC797C3* L_12 = V_0;
		int32_t L_13 = V_3;
		int32_t L_14 = ((L_12)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_13)))->___hashCode;
		if ((((int32_t)L_14) < ((int32_t)0)))
		{
			goto IL_0087;
		}
	}
	{
		EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* L_15;
		L_15 = EqualityComparer_1_get_Default_mB451453B7B5B4B570A9347E090AB0FAC75C0C628_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 28));
		EntryU5BU5D_t2CF41CF5E2621F7EFD1220745F530C0B5DC797C3* L_16 = V_0;
		int32_t L_17 = V_3;
		Il2CppSharedGenericObject* L_18 = ((L_16)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_17)))->___value;
		Il2CppSharedGenericObject* L_19 = ___0_value;
		bool L_20;
		L_20 = VirtualFuncInvoker2< bool, Il2CppSharedGenericObject*, Il2CppSharedGenericObject* >::Invoke(8, L_15, L_18, L_19);
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
		int32_t L_23 = __this->____count;
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
		EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* L_24;
		L_24 = EqualityComparer_1_get_Default_mB451453B7B5B4B570A9347E090AB0FAC75C0C628_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 28));
		V_4 = L_24;
		V_5 = 0;
		goto IL_00d1;
	}

IL_00a2:
	{
		EntryU5BU5D_t2CF41CF5E2621F7EFD1220745F530C0B5DC797C3* L_25 = V_0;
		int32_t L_26 = V_5;
		int32_t L_27 = ((L_25)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_26)))->___hashCode;
		if ((((int32_t)L_27) < ((int32_t)0)))
		{
			goto IL_00cb;
		}
	}
	{
		EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* L_28 = V_4;
		EntryU5BU5D_t2CF41CF5E2621F7EFD1220745F530C0B5DC797C3* L_29 = V_0;
		int32_t L_30 = V_5;
		Il2CppSharedGenericObject* L_31 = ((L_29)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_30)))->___value;
		Il2CppSharedGenericObject* L_32 = ___0_value;
		bool L_33;
		L_33 = VirtualFuncInvoker2< bool, Il2CppSharedGenericObject*, Il2CppSharedGenericObject* >::Invoke(8, L_28, L_31, L_32);
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
		int32_t L_36 = __this->____count;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_mF0207C12B681D9CD010A20E3C7FEBDCE5EEC46EA_gshared (Dictionary_2_t6EE05E1DBF257B416E0A3B6FE8BF1C1F55C8C13B* __this, KeyValuePair_2U5BU5D_t4208D2E1B4635D7EA4C927172F54BAD9776A760F* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	EntryU5BU5D_t2CF41CF5E2621F7EFD1220745F530C0B5DC797C3* V_1 = NULL;
	int32_t V_2 = 0;
	{
		KeyValuePair_2U5BU5D_t4208D2E1B4635D7EA4C927172F54BAD9776A760F* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(3, NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_index;
		KeyValuePair_2U5BU5D_t4208D2E1B4635D7EA4C927172F54BAD9776A760F* L_2 = ___0_array;
		int32_t L_3 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_2)->max_length),NULL));
		if ((!(((uint32_t)L_1) > ((uint32_t)L_3))))
		{
			goto IL_0014;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0014:
	{
		KeyValuePair_2U5BU5D_t4208D2E1B4635D7EA4C927172F54BAD9776A760F* L_4 = ___0_array;
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		int32_t L_6 = ___1_index;
		int32_t L_7;
		L_7 = Dictionary_2_get_Count_mE694E1EB3DC6921BA682AB491035440877A5024C(__this, NULL);
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_5, L_6))) >= ((int32_t)L_7)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(5, NULL);
	}

IL_0027:
	{
		int32_t L_8 = __this->____count;
		V_0 = L_8;
		EntryU5BU5D_t2CF41CF5E2621F7EFD1220745F530C0B5DC797C3* L_9 = __this->____entries;
		V_1 = L_9;
		V_2 = 0;
		goto IL_0075;
	}

IL_0039:
	{
		EntryU5BU5D_t2CF41CF5E2621F7EFD1220745F530C0B5DC797C3* L_10 = V_1;
		int32_t L_11 = V_2;
		int32_t L_12 = ((L_10)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_11)))->___hashCode;
		if ((((int32_t)L_12) < ((int32_t)0)))
		{
			goto IL_0071;
		}
	}
	{
		KeyValuePair_2U5BU5D_t4208D2E1B4635D7EA4C927172F54BAD9776A760F* L_13 = ___0_array;
		int32_t L_14 = ___1_index;
		int32_t L_15 = L_14;
		___1_index = ((int32_t)il2cpp_codegen_add(L_15, 1));
		EntryU5BU5D_t2CF41CF5E2621F7EFD1220745F530C0B5DC797C3* L_16 = V_1;
		int32_t L_17 = V_2;
		ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A L_18 = ((L_16)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_17)))->___key;
		EntryU5BU5D_t2CF41CF5E2621F7EFD1220745F530C0B5DC797C3* L_19 = V_1;
		int32_t L_20 = V_2;
		Il2CppSharedGenericObject* L_21 = ((L_19)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_20)))->___value;
		KeyValuePair_2_tA18DA0C0E7B0709B9741404F85570AF6334E7295 L_22;
		memset((&L_22), 0, sizeof(L_22));
		KeyValuePair_2__ctor_m0D4121FAC5AC308F9F11677446270359EE7F187F((&L_22), L_18, L_21, NULL);
		(L_13)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_15), (KeyValuePair_2_tA18DA0C0E7B0709B9741404F85570AF6334E7295)L_22);
	}

IL_0071:
	{
		int32_t L_23 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_0075:
	{
		int32_t L_24 = V_2;
		int32_t L_25 = V_0;
		if ((((int32_t)L_24) < ((int32_t)L_25)))
		{
			goto IL_0039;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t2192A20535292BE4B74B395AB95FBE0E90FF51DF Dictionary_2_GetEnumerator_mE94C147615A97349C2423579A3A5D9B9CC3BD37A_gshared (Dictionary_2_t6EE05E1DBF257B416E0A3B6FE8BF1C1F55C8C13B* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t2192A20535292BE4B74B395AB95FBE0E90FF51DF L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m61E3631AF88B2F19F5C1DD6448CB0F8E7DD2118E((&L_0), __this, 2, NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_mCCB91D0539BEA0FD63F7A0E7B337FAEBFB9825E1_gshared (Dictionary_2_t6EE05E1DBF257B416E0A3B6FE8BF1C1F55C8C13B* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t2192A20535292BE4B74B395AB95FBE0E90FF51DF L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m61E3631AF88B2F19F5C1DD6448CB0F8E7DD2118E((&L_0), __this, 2, NULL);
		Enumerator_t2192A20535292BE4B74B395AB95FBE0E90FF51DF L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 32), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_GetObjectData_m6A625FAB57C6DB605126EBCAF4F286C86EEA05CE_gshared (Dictionary_2_t6EE05E1DBF257B416E0A3B6FE8BF1C1F55C8C13B* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	KeyValuePair_2U5BU5D_t4208D2E1B4635D7EA4C927172F54BAD9776A760F* V_0 = NULL;
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
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___0_info;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(4, NULL);
	}

IL_0009:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___0_info;
		int32_t L_2 = __this->____version;
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(L_1, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, L_2, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = ___0_info;
		RuntimeObject* L_4 = __this->____comparer;
		RuntimeObject* L_5 = L_4;
		if (L_5)
		{
			G_B4_0 = L_5;
			G_B4_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
			G_B4_2 = L_3;
			goto IL_002f;
		}
		G_B3_0 = L_5;
		G_B3_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
		G_B3_2 = L_3;
	}
	{
		EqualityComparer_1_t6AF08CEAD675C05C1B701806606C7CB7CF53951F* L_6;
		L_6 = EqualityComparer_1_get_Default_m56D88D65184F0E2CB43D9A2853637D9E87D10FC5_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2));
		G_B4_0 = ((RuntimeObject*)(L_6));
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
	}

IL_002f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 34)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(G_B4_2, G_B4_1, (RuntimeObject*)G_B4_0, L_8, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_9 = ___0_info;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = __this->____buckets;
		if (!L_10)
		{
			G_B6_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
			G_B6_1 = L_9;
			goto IL_0056;
		}
		G_B5_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
		G_B5_1 = L_9;
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____buckets;
		int32_t L_12 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_11)->max_length),NULL));
		G_B7_0 = L_12;
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
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(G_B7_2, G_B7_1, G_B7_0, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = __this->____buckets;
		if (!L_13)
		{
			goto IL_008e;
		}
	}
	{
		int32_t L_14;
		L_14 = Dictionary_2_get_Count_mE694E1EB3DC6921BA682AB491035440877A5024C(__this, NULL);
		KeyValuePair_2U5BU5D_t4208D2E1B4635D7EA4C927172F54BAD9776A760F* L_15 = (KeyValuePair_2U5BU5D_t4208D2E1B4635D7EA4C927172F54BAD9776A760F*)(KeyValuePair_2U5BU5D_t4208D2E1B4635D7EA4C927172F54BAD9776A760F*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 36), (uint32_t)L_14);
		V_0 = L_15;
		KeyValuePair_2U5BU5D_t4208D2E1B4635D7EA4C927172F54BAD9776A760F* L_16 = V_0;
		Dictionary_2_CopyTo_mF0207C12B681D9CD010A20E3C7FEBDCE5EEC46EA(__this, L_16, 0, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_17 = ___0_info;
		KeyValuePair_2U5BU5D_t4208D2E1B4635D7EA4C927172F54BAD9776A760F* L_18 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 38)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(L_17, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, (RuntimeObject*)L_18, L_20, NULL);
	}

IL_008e:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_m5EE6BB86A74B61BA4F43F7FCD7A19396DDA1DEB6_gshared (Dictionary_2_t6EE05E1DBF257B416E0A3B6FE8BF1C1F55C8C13B* __this, ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	EntryU5BU5D_t2CF41CF5E2621F7EFD1220745F530C0B5DC797C3* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	int32_t V_5 = 0;
	ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A V_6;
	memset((&V_6), 0, sizeof(V_6));
	EqualityComparer_1_t6AF08CEAD675C05C1B701806606C7CB7CF53951F* V_7 = NULL;
	int32_t V_8 = 0;
	{
		goto IL_000e;
	}

IL_000e:
	{
		V_0 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		V_1 = L_1;
		EntryU5BU5D_t2CF41CF5E2621F7EFD1220745F530C0B5DC797C3* L_2 = __this->____entries;
		V_2 = L_2;
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = V_1;
		if (!L_3)
		{
			goto IL_0175;
		}
	}
	{
		RuntimeObject* L_4 = __this->____comparer;
		V_4 = L_4;
		RuntimeObject* L_5 = V_4;
		if (L_5)
		{
			goto IL_0110;
		}
	}
	{
		int32_t L_6;
		L_6 = ValueTuple_2_GetHashCode_m99568F302DE6AD3E15E0EA2EC480BD67D049F1D7((&___0_key), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 39));
		V_5 = ((int32_t)(L_6&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = V_1;
		int32_t L_8 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = V_1;
		int32_t L_10 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_9)->max_length),NULL));
		int32_t L_11 = ((int32_t)(L_8%L_10));
		int32_t L_12 = (L_7)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_11));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
		il2cpp_codegen_initobj((&V_6), sizeof(ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A));
	}

IL_0066:
	{
		int32_t L_14 = V_0;
		EntryU5BU5D_t2CF41CF5E2621F7EFD1220745F530C0B5DC797C3* L_15 = V_2;
		int32_t L_16 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_15)->max_length),NULL));
		if ((!(((uint32_t)L_14) < ((uint32_t)L_16))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_t2CF41CF5E2621F7EFD1220745F530C0B5DC797C3* L_17 = V_2;
		int32_t L_18 = V_0;
		int32_t L_19 = ((L_17)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_18)))->___hashCode;
		int32_t L_20 = V_5;
		if ((!(((uint32_t)L_19) == ((uint32_t)L_20))))
		{
			goto IL_009b;
		}
	}
	{
		EqualityComparer_1_t6AF08CEAD675C05C1B701806606C7CB7CF53951F* L_21;
		L_21 = EqualityComparer_1_get_Default_m56D88D65184F0E2CB43D9A2853637D9E87D10FC5_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2));
		EntryU5BU5D_t2CF41CF5E2621F7EFD1220745F530C0B5DC797C3* L_22 = V_2;
		int32_t L_23 = V_0;
		ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A L_24 = ((L_22)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_23)))->___key;
		ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A L_25 = ___0_key;
		bool L_26;
		L_26 = VirtualFuncInvoker2< bool, ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A, ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A >::Invoke(8, L_21, L_24, L_25);
		if (L_26)
		{
			goto IL_0175;
		}
	}

IL_009b:
	{
		EntryU5BU5D_t2CF41CF5E2621F7EFD1220745F530C0B5DC797C3* L_27 = V_2;
		int32_t L_28 = V_0;
		int32_t L_29 = ((L_27)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_28)))->___next;
		V_0 = L_29;
		int32_t L_30 = V_3;
		EntryU5BU5D_t2CF41CF5E2621F7EFD1220745F530C0B5DC797C3* L_31 = V_2;
		int32_t L_32 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_31)->max_length),NULL));
		if ((((int32_t)L_30) < ((int32_t)L_32)))
		{
			goto IL_00b3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_00b3:
	{
		int32_t L_33 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_33, 1));
		goto IL_0066;
	}

IL_0110:
	{
		RuntimeObject* L_34 = V_4;
		ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A L_35 = ___0_key;
		int32_t L_36;
		L_36 = InterfaceFuncInvoker1< int32_t, ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A >::Invoke(1, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 35), L_34, L_35);
		V_8 = ((int32_t)(L_36&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_37 = V_1;
		int32_t L_38 = V_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_39 = V_1;
		int32_t L_40 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_39)->max_length),NULL));
		int32_t L_41 = ((int32_t)(L_38%L_40));
		int32_t L_42 = (L_37)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_41));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_42, 1));
	}

IL_012b:
	{
		int32_t L_43 = V_0;
		EntryU5BU5D_t2CF41CF5E2621F7EFD1220745F530C0B5DC797C3* L_44 = V_2;
		int32_t L_45 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_44)->max_length),NULL));
		if ((!(((uint32_t)L_43) < ((uint32_t)L_45))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_t2CF41CF5E2621F7EFD1220745F530C0B5DC797C3* L_46 = V_2;
		int32_t L_47 = V_0;
		int32_t L_48 = ((L_46)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_47)))->___hashCode;
		int32_t L_49 = V_8;
		if ((!(((uint32_t)L_48) == ((uint32_t)L_49))))
		{
			goto IL_0157;
		}
	}
	{
		RuntimeObject* L_50 = V_4;
		EntryU5BU5D_t2CF41CF5E2621F7EFD1220745F530C0B5DC797C3* L_51 = V_2;
		int32_t L_52 = V_0;
		ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A L_53 = ((L_51)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_52)))->___key;
		ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A L_54 = ___0_key;
		bool L_55;
		L_55 = InterfaceFuncInvoker2< bool, ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A, ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 35), L_50, L_53, L_54);
		if (L_55)
		{
			goto IL_0175;
		}
	}

IL_0157:
	{
		EntryU5BU5D_t2CF41CF5E2621F7EFD1220745F530C0B5DC797C3* L_56 = V_2;
		int32_t L_57 = V_0;
		int32_t L_58 = ((L_56)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_57)))->___next;
		V_0 = L_58;
		int32_t L_59 = V_3;
		EntryU5BU5D_t2CF41CF5E2621F7EFD1220745F530C0B5DC797C3* L_60 = V_2;
		int32_t L_61 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_60)->max_length),NULL));
		if ((((int32_t)L_59) < ((int32_t)L_61)))
		{
			goto IL_016f;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_016f:
	{
		int32_t L_62 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_62, 1));
		goto IL_012b;
	}

IL_0175:
	{
		int32_t L_63 = V_0;
		return L_63;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_m9694FF4B4E2C144DCEF2FCE1F3082855262A7256_gshared (Dictionary_2_t6EE05E1DBF257B416E0A3B6FE8BF1C1F55C8C13B* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit);
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_capacity;
		CHECKED_LOCAL_INIT(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit,(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_1;
		L_1 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_0, NULL);
		V_0 = L_1;
		__this->____freeList = (-1);
		int32_t L_2 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_2);
		__this->____buckets = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_3);
		int32_t L_4 = V_0;
		EntryU5BU5D_t2CF41CF5E2621F7EFD1220745F530C0B5DC797C3* L_5 = (EntryU5BU5D_t2CF41CF5E2621F7EFD1220745F530C0B5DC797C3*)(EntryU5BU5D_t2CF41CF5E2621F7EFD1220745F530C0B5DC797C3*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 43), (uint32_t)L_4);
		__this->____entries = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries), (void*)L_5);
		int32_t L_6 = V_0;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_m80FCA7D16C6C7009BA59F2ABAA24CF6394A0F865_gshared (Dictionary_2_t6EE05E1DBF257B416E0A3B6FE8BF1C1F55C8C13B* __this, ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A ___0_key, Il2CppSharedGenericObject* ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method) 
{
	EntryU5BU5D_t2CF41CF5E2621F7EFD1220745F530C0B5DC797C3* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	int32_t V_8 = 0;
	int32_t* V_9 = NULL;
	Entry_tE1E58729B91F813087891EA78F6ED04BC6F84B14* V_10 = NULL;
	ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A V_11;
	memset((&V_11), 0, sizeof(V_11));
	EqualityComparer_1_t6AF08CEAD675C05C1B701806606C7CB7CF53951F* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t G_B7_0 = 0;
	int32_t* G_B51_0 = NULL;
	{
		goto IL_000e;
	}

IL_000e:
	{
		int32_t L_1 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_1, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->____buckets;
		if (L_2)
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_3;
		L_3 = Dictionary_2_Initialize_m9694FF4B4E2C144DCEF2FCE1F3082855262A7256(__this, 0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 1));
	}

IL_002c:
	{
		EntryU5BU5D_t2CF41CF5E2621F7EFD1220745F530C0B5DC797C3* L_4 = __this->____entries;
		V_0 = L_4;
		RuntimeObject* L_5 = __this->____comparer;
		V_1 = L_5;
		RuntimeObject* L_6 = V_1;
		if (!L_6)
		{
			goto IL_0046;
		}
	}
	{
		RuntimeObject* L_7 = V_1;
		ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A L_8 = ___0_key;
		int32_t L_9;
		L_9 = InterfaceFuncInvoker1< int32_t, ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A >::Invoke(1, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 35), L_7, L_8);
		G_B7_0 = L_9;
		goto IL_0053;
	}

IL_0046:
	{
		int32_t L_10;
		L_10 = ValueTuple_2_GetHashCode_m99568F302DE6AD3E15E0EA2EC480BD67D049F1D7((&___0_key), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 39));
		G_B7_0 = L_10;
	}

IL_0053:
	{
		V_2 = ((int32_t)(G_B7_0&((int32_t)2147483647LL)));
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____buckets;
		int32_t L_12 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = __this->____buckets;
		int32_t L_14 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_13)->max_length),NULL));
		V_4 = ((L_11)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)(L_12%L_14)))));
		int32_t* L_15 = V_4;
		int32_t L_16 = *(L_15);
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_16, 1));
		RuntimeObject* L_17 = V_1;
		if (L_17)
		{
			goto IL_0187;
		}
	}
	{
		il2cpp_codegen_initobj((&V_11), sizeof(ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A));
	}

IL_0091:
	{
		int32_t L_19 = V_5;
		EntryU5BU5D_t2CF41CF5E2621F7EFD1220745F530C0B5DC797C3* L_20 = V_0;
		int32_t L_21 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_20)->max_length),NULL));
		if ((!(((uint32_t)L_19) < ((uint32_t)L_21))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_t2CF41CF5E2621F7EFD1220745F530C0B5DC797C3* L_22 = V_0;
		int32_t L_23 = V_5;
		int32_t L_24 = ((L_22)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_23)))->___hashCode;
		int32_t L_25 = V_2;
		if ((!(((uint32_t)L_24) == ((uint32_t)L_25))))
		{
			goto IL_00ea;
		}
	}
	{
		EqualityComparer_1_t6AF08CEAD675C05C1B701806606C7CB7CF53951F* L_26;
		L_26 = EqualityComparer_1_get_Default_m56D88D65184F0E2CB43D9A2853637D9E87D10FC5_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2));
		EntryU5BU5D_t2CF41CF5E2621F7EFD1220745F530C0B5DC797C3* L_27 = V_0;
		int32_t L_28 = V_5;
		ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A L_29 = ((L_27)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_28)))->___key;
		ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A L_30 = ___0_key;
		bool L_31;
		L_31 = VirtualFuncInvoker2< bool, ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A, ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A >::Invoke(8, L_26, L_29, L_30);
		if (!L_31)
		{
			goto IL_00ea;
		}
	}
	{
		uint8_t L_32 = ___2_behavior;
		if ((!(((uint32_t)L_32) == ((uint32_t)1))))
		{
			goto IL_00d9;
		}
	}
	{
		EntryU5BU5D_t2CF41CF5E2621F7EFD1220745F530C0B5DC797C3* L_33 = V_0;
		int32_t L_34 = V_5;
		Il2CppSharedGenericObject* L_35 = ___1_value;
		((L_33)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_34)))->___value = L_35;
		Il2CppCodeGenWriteBarrier((void**)(&((L_33)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_34)))->___value), (void*)L_35);
		return (bool)1;
	}

IL_00d9:
	{
		uint8_t L_36 = ___2_behavior;
		if ((!(((uint32_t)L_36) == ((uint32_t)2))))
		{
			goto IL_00e8;
		}
	}
	{
		ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A L_37 = ___0_key;
		ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A L_38 = L_37;
		RuntimeObject* L_39 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 10), &L_38);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_39, NULL);
	}

IL_00e8:
	{
		return (bool)0;
	}

IL_00ea:
	{
		EntryU5BU5D_t2CF41CF5E2621F7EFD1220745F530C0B5DC797C3* L_40 = V_0;
		int32_t L_41 = V_5;
		int32_t L_42 = ((L_40)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_41)))->___next;
		V_5 = L_42;
		int32_t L_43 = V_3;
		EntryU5BU5D_t2CF41CF5E2621F7EFD1220745F530C0B5DC797C3* L_44 = V_0;
		int32_t L_45 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_44)->max_length),NULL));
		if ((((int32_t)L_43) < ((int32_t)L_45)))
		{
			goto IL_0104;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_0104:
	{
		int32_t L_46 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_46, 1));
		goto IL_0091;
	}

IL_0187:
	{
		int32_t L_47 = V_5;
		EntryU5BU5D_t2CF41CF5E2621F7EFD1220745F530C0B5DC797C3* L_48 = V_0;
		int32_t L_49 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_48)->max_length),NULL));
		if ((!(((uint32_t)L_47) < ((uint32_t)L_49))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_t2CF41CF5E2621F7EFD1220745F530C0B5DC797C3* L_50 = V_0;
		int32_t L_51 = V_5;
		int32_t L_52 = ((L_50)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_51)))->___hashCode;
		int32_t L_53 = V_2;
		if ((!(((uint32_t)L_52) == ((uint32_t)L_53))))
		{
			goto IL_01d9;
		}
	}
	{
		RuntimeObject* L_54 = V_1;
		EntryU5BU5D_t2CF41CF5E2621F7EFD1220745F530C0B5DC797C3* L_55 = V_0;
		int32_t L_56 = V_5;
		ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A L_57 = ((L_55)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_56)))->___key;
		ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A L_58 = ___0_key;
		bool L_59;
		L_59 = InterfaceFuncInvoker2< bool, ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A, ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 35), L_54, L_57, L_58);
		if (!L_59)
		{
			goto IL_01d9;
		}
	}
	{
		uint8_t L_60 = ___2_behavior;
		if ((!(((uint32_t)L_60) == ((uint32_t)1))))
		{
			goto IL_01c8;
		}
	}
	{
		EntryU5BU5D_t2CF41CF5E2621F7EFD1220745F530C0B5DC797C3* L_61 = V_0;
		int32_t L_62 = V_5;
		Il2CppSharedGenericObject* L_63 = ___1_value;
		((L_61)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_62)))->___value = L_63;
		Il2CppCodeGenWriteBarrier((void**)(&((L_61)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_62)))->___value), (void*)L_63);
		return (bool)1;
	}

IL_01c8:
	{
		uint8_t L_64 = ___2_behavior;
		if ((!(((uint32_t)L_64) == ((uint32_t)2))))
		{
			goto IL_01d7;
		}
	}
	{
		ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A L_65 = ___0_key;
		ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A L_66 = L_65;
		RuntimeObject* L_67 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 10), &L_66);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_67, NULL);
	}

IL_01d7:
	{
		return (bool)0;
	}

IL_01d9:
	{
		EntryU5BU5D_t2CF41CF5E2621F7EFD1220745F530C0B5DC797C3* L_68 = V_0;
		int32_t L_69 = V_5;
		int32_t L_70 = ((L_68)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_69)))->___next;
		V_5 = L_70;
		int32_t L_71 = V_3;
		EntryU5BU5D_t2CF41CF5E2621F7EFD1220745F530C0B5DC797C3* L_72 = V_0;
		int32_t L_73 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_72)->max_length),NULL));
		if ((((int32_t)L_71) < ((int32_t)L_73)))
		{
			goto IL_01f3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_01f3:
	{
		int32_t L_74 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_74, 1));
		goto IL_0187;
	}

IL_01f9:
	{
		V_6 = (bool)0;
		V_7 = (bool)0;
		int32_t L_75 = __this->____freeCount;
		if ((((int32_t)L_75) <= ((int32_t)0)))
		{
			goto IL_0223;
		}
	}
	{
		int32_t L_76 = __this->____freeList;
		V_8 = L_76;
		V_7 = (bool)1;
		int32_t L_77 = __this->____freeCount;
		__this->____freeCount = ((int32_t)il2cpp_codegen_subtract(L_77, 1));
		goto IL_0250;
	}

IL_0223:
	{
		int32_t L_78 = __this->____count;
		V_13 = L_78;
		int32_t L_79 = V_13;
		EntryU5BU5D_t2CF41CF5E2621F7EFD1220745F530C0B5DC797C3* L_80 = V_0;
		int32_t L_81 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_80)->max_length),NULL));
		if ((!(((uint32_t)L_79) == ((uint32_t)L_81))))
		{
			goto IL_023b;
		}
	}
	{
		Dictionary_2_Resize_mECA349A5C568918987B1E5F01CF437B826B24473(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 44));
		V_6 = (bool)1;
	}

IL_023b:
	{
		int32_t L_82 = V_13;
		V_8 = L_82;
		int32_t L_83 = V_13;
		__this->____count = ((int32_t)il2cpp_codegen_add(L_83, 1));
		EntryU5BU5D_t2CF41CF5E2621F7EFD1220745F530C0B5DC797C3* L_84 = __this->____entries;
		V_0 = L_84;
	}

IL_0250:
	{
		bool L_85 = V_6;
		if (L_85)
		{
			goto IL_0258;
		}
	}
	{
		int32_t* L_86 = V_4;
		G_B51_0 = L_86;
		goto IL_026d;
	}

IL_0258:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_87 = __this->____buckets;
		int32_t L_88 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_89 = __this->____buckets;
		int32_t L_90 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_89)->max_length),NULL));
		G_B51_0 = ((L_87)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)(L_88%L_90)))));
	}

IL_026d:
	{
		V_9 = G_B51_0;
		EntryU5BU5D_t2CF41CF5E2621F7EFD1220745F530C0B5DC797C3* L_91 = V_0;
		int32_t L_92 = V_8;
		V_10 = ((L_91)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_92)));
		bool L_93 = V_7;
		if (!L_93)
		{
			goto IL_028a;
		}
	}
	{
		Entry_tE1E58729B91F813087891EA78F6ED04BC6F84B14* L_94 = V_10;
		int32_t L_95 = L_94->___next;
		__this->____freeList = L_95;
	}

IL_028a:
	{
		Entry_tE1E58729B91F813087891EA78F6ED04BC6F84B14* L_96 = V_10;
		int32_t L_97 = V_2;
		L_96->___hashCode = L_97;
		Entry_tE1E58729B91F813087891EA78F6ED04BC6F84B14* L_98 = V_10;
		int32_t* L_99 = V_9;
		int32_t L_100 = *(L_99);
		L_98->___next = ((int32_t)il2cpp_codegen_subtract(L_100, 1));
		Entry_tE1E58729B91F813087891EA78F6ED04BC6F84B14* L_101 = V_10;
		ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A L_102 = ___0_key;
		L_101->___key = L_102;
		Il2CppCodeGenWriteBarrier((void**)&(((&L_101->___key))->___Item1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&L_101->___key))->___Item2), (void*)NULL);
		#endif
		Entry_tE1E58729B91F813087891EA78F6ED04BC6F84B14* L_103 = V_10;
		Il2CppSharedGenericObject* L_104 = ___1_value;
		L_103->___value = L_104;
		Il2CppCodeGenWriteBarrier((void**)(&L_103->___value), (void*)L_104);
		int32_t* L_105 = V_9;
		int32_t L_106 = V_8;
		*(L_105) = ((int32_t)il2cpp_codegen_add(L_106, 1));
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_OnDeserialization_mCBBB6C49A72A1E855D48008CB4ECB7FBC97D70D6_gshared (Dictionary_2_t6EE05E1DBF257B416E0A3B6FE8BF1C1F55C8C13B* __this, RuntimeObject* ___0_sender, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	KeyValuePair_2U5BU5D_t4208D2E1B4635D7EA4C927172F54BAD9776A760F* V_3 = NULL;
	int32_t V_4 = 0;
	{
		CHECKED_LOCAL_INIT(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit,(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
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
		int32_t L_4;
		L_4 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_3, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, NULL);
		V_1 = L_4;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_5 = V_0;
		int32_t L_6;
		L_6 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_5, _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69, NULL);
		V_2 = L_6;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_7 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 34)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		RuntimeObject* L_10;
		L_10 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_7, _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9, L_9, NULL);
		__this->____comparer = ((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 35)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 35))));
		int32_t L_11 = V_2;
		if (!L_11)
		{
			goto IL_00c9;
		}
	}
	{
		int32_t L_12 = V_2;
		int32_t L_13;
		L_13 = Dictionary_2_Initialize_m9694FF4B4E2C144DCEF2FCE1F3082855262A7256(__this, L_12, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 1));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_14 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 38)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		RuntimeObject* L_17;
		L_17 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_14, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, L_16, NULL);
		V_3 = ((KeyValuePair_2U5BU5D_t4208D2E1B4635D7EA4C927172F54BAD9776A760F*)CastclassSealed((RuntimeObject*)L_17, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 36)));
		KeyValuePair_2U5BU5D_t4208D2E1B4635D7EA4C927172F54BAD9776A760F* L_18 = V_3;
		if (L_18)
		{
			goto IL_007a;
		}
	}
	{
		ThrowHelper_ThrowSerializationException_m03BE2B48CD3617C32FBCEE16030F7C5563E04E16(((int32_t)16), NULL);
	}

IL_007a:
	{
		V_4 = 0;
		goto IL_00c0;
	}

IL_007f:
	{
		KeyValuePair_2U5BU5D_t4208D2E1B4635D7EA4C927172F54BAD9776A760F* L_19 = V_3;
		int32_t L_20 = V_4;
		ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A L_21;
		L_21 = KeyValuePair_2_get_Key_mEFCCF9BC1F4022E15A29A44A49E8DE3FA5180978_inline(((L_19)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_20))), NULL);
		goto IL_009a;
	}

IL_009a:
	{
		KeyValuePair_2U5BU5D_t4208D2E1B4635D7EA4C927172F54BAD9776A760F* L_22 = V_3;
		int32_t L_23 = V_4;
		ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A L_24;
		L_24 = KeyValuePair_2_get_Key_mEFCCF9BC1F4022E15A29A44A49E8DE3FA5180978_inline(((L_22)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_23))), NULL);
		KeyValuePair_2U5BU5D_t4208D2E1B4635D7EA4C927172F54BAD9776A760F* L_25 = V_3;
		int32_t L_26 = V_4;
		Il2CppSharedGenericObject* L_27;
		L_27 = KeyValuePair_2_get_Value_m8A4C32B0E709D6A7629FA7869F673CC94F500282_inline(((L_25)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_26))), NULL);
		Dictionary_2_Add_m76898227E21B42ADA9F5DB5A6366CE107CE1E940(__this, L_24, L_27, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14));
		int32_t L_28 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_00c0:
	{
		int32_t L_29 = V_4;
		KeyValuePair_2U5BU5D_t4208D2E1B4635D7EA4C927172F54BAD9776A760F* L_30 = V_3;
		int32_t L_31 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_30)->max_length),NULL));
		if ((((int32_t)L_29) < ((int32_t)L_31)))
		{
			goto IL_007f;
		}
	}
	{
		goto IL_00d0;
	}

IL_00c9:
	{
		__this->____buckets = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
	}

IL_00d0:
	{
		int32_t L_32 = V_1;
		__this->____version = L_32;
		CHECKED_LOCAL_INIT(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit,(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_33;
		L_33 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		bool L_34;
		L_34 = ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E(L_33, (RuntimeObject*)__this, ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_mECA349A5C568918987B1E5F01CF437B826B24473_gshared (Dictionary_2_t6EE05E1DBF257B416E0A3B6FE8BF1C1F55C8C13B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit);
	{
		int32_t L_0 = __this->____count;
		CHECKED_LOCAL_INIT(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit,(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_1;
		L_1 = HashHelpers_ExpandPrime_m9A35EC171AA0EA16F7C9F71EE6FAD5A82565ADB9(L_0, NULL);
		Dictionary_2_Resize_m89E3D5532F34F27BEB5DF28BB40F3558ECDF3728(__this, L_1, (bool)0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 45));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m89E3D5532F34F27BEB5DF28BB40F3558ECDF3728_gshared (Dictionary_2_t6EE05E1DBF257B416E0A3B6FE8BF1C1F55C8C13B* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	EntryU5BU5D_t2CF41CF5E2621F7EFD1220745F530C0B5DC797C3* V_1 = NULL;
	int32_t V_2 = 0;
	ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		int32_t L_0 = ___0_newSize;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = ___0_newSize;
		EntryU5BU5D_t2CF41CF5E2621F7EFD1220745F530C0B5DC797C3* L_3 = (EntryU5BU5D_t2CF41CF5E2621F7EFD1220745F530C0B5DC797C3*)(EntryU5BU5D_t2CF41CF5E2621F7EFD1220745F530C0B5DC797C3*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 43), (uint32_t)L_2);
		V_1 = L_3;
		int32_t L_4 = __this->____count;
		V_2 = L_4;
		EntryU5BU5D_t2CF41CF5E2621F7EFD1220745F530C0B5DC797C3* L_5 = __this->____entries;
		EntryU5BU5D_t2CF41CF5E2621F7EFD1220745F530C0B5DC797C3* L_6 = V_1;
		int32_t L_7 = V_2;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, 0, (RuntimeArray*)L_6, 0, L_7, NULL);
		il2cpp_codegen_initobj((&V_3), sizeof(ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A));
		ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A L_8 = V_3;
		bool L_9 = ___1_forceNewHashCodes;
		if (!((int32_t)((int32_t)false&(int32_t)L_9)))
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
		EntryU5BU5D_t2CF41CF5E2621F7EFD1220745F530C0B5DC797C3* L_10 = V_1;
		int32_t L_11 = V_4;
		int32_t L_12 = ((L_10)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_11)))->___hashCode;
		if ((((int32_t)L_12) < ((int32_t)0)))
		{
			goto IL_0079;
		}
	}
	{
		EntryU5BU5D_t2CF41CF5E2621F7EFD1220745F530C0B5DC797C3* L_13 = V_1;
		int32_t L_14 = V_4;
		EntryU5BU5D_t2CF41CF5E2621F7EFD1220745F530C0B5DC797C3* L_15 = V_1;
		int32_t L_16 = V_4;
		ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A* L_17 = (ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A*)(&((L_15)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_16)))->___key);
		int32_t L_18;
		L_18 = ValueTuple_2_GetHashCode_m99568F302DE6AD3E15E0EA2EC480BD67D049F1D7(L_17, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 39));
		((L_13)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_14)))->___hashCode = ((int32_t)(L_18&((int32_t)2147483647LL)));
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
		EntryU5BU5D_t2CF41CF5E2621F7EFD1220745F530C0B5DC797C3* L_22 = V_1;
		int32_t L_23 = V_5;
		int32_t L_24 = ((L_22)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_23)))->___hashCode;
		if ((((int32_t)L_24) < ((int32_t)0)))
		{
			goto IL_00c5;
		}
	}
	{
		EntryU5BU5D_t2CF41CF5E2621F7EFD1220745F530C0B5DC797C3* L_25 = V_1;
		int32_t L_26 = V_5;
		int32_t L_27 = ((L_25)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_26)))->___hashCode;
		int32_t L_28 = ___0_newSize;
		V_6 = ((int32_t)(L_27%L_28));
		EntryU5BU5D_t2CF41CF5E2621F7EFD1220745F530C0B5DC797C3* L_29 = V_1;
		int32_t L_30 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = V_0;
		int32_t L_32 = V_6;
		int32_t L_33 = L_32;
		int32_t L_34 = (L_31)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_33));
		((L_29)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_30)))->___next = ((int32_t)il2cpp_codegen_subtract(L_34, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_35 = V_0;
		int32_t L_36 = V_6;
		int32_t L_37 = V_5;
		(L_35)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_36), (int32_t)((int32_t)il2cpp_codegen_add(L_37, 1)));
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
		__this->____buckets = L_41;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_41);
		EntryU5BU5D_t2CF41CF5E2621F7EFD1220745F530C0B5DC797C3* L_42 = V_1;
		__this->____entries = L_42;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries), (void*)L_42);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m38590317DE74DBE8D92F2CBEF07EB2166FD77F8A_gshared (Dictionary_2_t6EE05E1DBF257B416E0A3B6FE8BF1C1F55C8C13B* __this, ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Entry_tE1E58729B91F813087891EA78F6ED04BC6F84B14* V_4 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	RuntimeObject* G_B10_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	bool G_B11_0 = false;
	{
		goto IL_000e;
	}

IL_000e:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		if (!L_1)
		{
			goto IL_0149;
		}
	}
	{
		RuntimeObject* L_2 = __this->____comparer;
		RuntimeObject* L_3 = L_2;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_0032;
		}
		G_B4_0 = L_3;
	}
	{
		int32_t L_4;
		L_4 = ValueTuple_2_GetHashCode_m99568F302DE6AD3E15E0EA2EC480BD67D049F1D7((&___0_key), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 39));
		G_B6_0 = L_4;
		goto IL_0038;
	}

IL_0032:
	{
		ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A L_5 = ___0_key;
		int32_t L_6;
		L_6 = InterfaceFuncInvoker1< int32_t, ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A >::Invoke(1, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 35), G_B5_0, L_5);
		G_B6_0 = L_6;
	}

IL_0038:
	{
		V_0 = ((int32_t)(G_B6_0&((int32_t)2147483647LL)));
		int32_t L_7 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = __this->____buckets;
		int32_t L_9 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_8)->max_length),NULL));
		V_1 = ((int32_t)(L_7%L_9));
		V_2 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = __this->____buckets;
		int32_t L_11 = V_1;
		int32_t L_12 = L_11;
		int32_t L_13 = (L_10)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_12));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_13, 1));
		goto IL_0142;
	}

IL_005c:
	{
		EntryU5BU5D_t2CF41CF5E2621F7EFD1220745F530C0B5DC797C3* L_14 = __this->____entries;
		int32_t L_15 = V_3;
		V_4 = ((L_14)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_15)));
		Entry_tE1E58729B91F813087891EA78F6ED04BC6F84B14* L_16 = V_4;
		int32_t L_17 = L_16->___hashCode;
		int32_t L_18 = V_0;
		if ((!(((uint32_t)L_17) == ((uint32_t)L_18))))
		{
			goto IL_0138;
		}
	}
	{
		RuntimeObject* L_19 = __this->____comparer;
		RuntimeObject* L_20 = L_19;
		if (L_20)
		{
			G_B10_0 = L_20;
			goto IL_0095;
		}
		G_B9_0 = L_20;
	}
	{
		EqualityComparer_1_t6AF08CEAD675C05C1B701806606C7CB7CF53951F* L_21;
		L_21 = EqualityComparer_1_get_Default_m56D88D65184F0E2CB43D9A2853637D9E87D10FC5_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2));
		Entry_tE1E58729B91F813087891EA78F6ED04BC6F84B14* L_22 = V_4;
		ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A L_23 = L_22->___key;
		ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A L_24 = ___0_key;
		bool L_25;
		L_25 = VirtualFuncInvoker2< bool, ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A, ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A >::Invoke(8, L_21, L_23, L_24);
		G_B11_0 = L_25;
		goto IL_00a2;
	}

IL_0095:
	{
		Entry_tE1E58729B91F813087891EA78F6ED04BC6F84B14* L_26 = V_4;
		ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A L_27 = L_26->___key;
		ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A L_28 = ___0_key;
		bool L_29;
		L_29 = InterfaceFuncInvoker2< bool, ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A, ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 35), G_B10_0, L_27, L_28);
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
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = __this->____buckets;
		int32_t L_32 = V_1;
		Entry_tE1E58729B91F813087891EA78F6ED04BC6F84B14* L_33 = V_4;
		int32_t L_34 = L_33->___next;
		(L_31)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_32), (int32_t)((int32_t)il2cpp_codegen_add(L_34, 1)));
		goto IL_00d6;
	}

IL_00be:
	{
		EntryU5BU5D_t2CF41CF5E2621F7EFD1220745F530C0B5DC797C3* L_35 = __this->____entries;
		int32_t L_36 = V_2;
		Entry_tE1E58729B91F813087891EA78F6ED04BC6F84B14* L_37 = V_4;
		int32_t L_38 = L_37->___next;
		((L_35)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_36)))->___next = L_38;
	}

IL_00d6:
	{
		Entry_tE1E58729B91F813087891EA78F6ED04BC6F84B14* L_39 = V_4;
		L_39->___hashCode = (-1);
		Entry_tE1E58729B91F813087891EA78F6ED04BC6F84B14* L_40 = V_4;
		int32_t L_41 = __this->____freeList;
		L_40->___next = L_41;
	}
	{
		Entry_tE1E58729B91F813087891EA78F6ED04BC6F84B14* L_42 = V_4;
		ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A* L_43 = (ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A*)(&L_42->___key);
		il2cpp_codegen_initobj(L_43, sizeof(ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A));
	}

IL_00ff:
	{
	}
	{
		Entry_tE1E58729B91F813087891EA78F6ED04BC6F84B14* L_44 = V_4;
		Il2CppSharedGenericObject** L_45 = (Il2CppSharedGenericObject**)(&L_44->___value);
		il2cpp_codegen_initobj(L_45, sizeof(Il2CppSharedGenericObject*));
	}

IL_0113:
	{
		int32_t L_46 = V_3;
		__this->____freeList = L_46;
		int32_t L_47 = __this->____freeCount;
		__this->____freeCount = ((int32_t)il2cpp_codegen_add(L_47, 1));
		int32_t L_48 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_48, 1));
		return (bool)1;
	}

IL_0138:
	{
		int32_t L_49 = V_3;
		V_2 = L_49;
		Entry_tE1E58729B91F813087891EA78F6ED04BC6F84B14* L_50 = V_4;
		int32_t L_51 = L_50->___next;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m2F8BE2685E916E74DF6889F2CFC623C4091315BD_gshared (Dictionary_2_t6EE05E1DBF257B416E0A3B6FE8BF1C1F55C8C13B* __this, ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A ___0_key, Il2CppSharedGenericObject** ___1_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Entry_tE1E58729B91F813087891EA78F6ED04BC6F84B14* V_4 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	RuntimeObject* G_B10_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	bool G_B11_0 = false;
	{
		goto IL_000e;
	}

IL_000e:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		if (!L_1)
		{
			goto IL_0156;
		}
	}
	{
		RuntimeObject* L_2 = __this->____comparer;
		RuntimeObject* L_3 = L_2;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_0032;
		}
		G_B4_0 = L_3;
	}
	{
		int32_t L_4;
		L_4 = ValueTuple_2_GetHashCode_m99568F302DE6AD3E15E0EA2EC480BD67D049F1D7((&___0_key), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 39));
		G_B6_0 = L_4;
		goto IL_0038;
	}

IL_0032:
	{
		ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A L_5 = ___0_key;
		int32_t L_6;
		L_6 = InterfaceFuncInvoker1< int32_t, ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A >::Invoke(1, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 35), G_B5_0, L_5);
		G_B6_0 = L_6;
	}

IL_0038:
	{
		V_0 = ((int32_t)(G_B6_0&((int32_t)2147483647LL)));
		int32_t L_7 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = __this->____buckets;
		int32_t L_9 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_8)->max_length),NULL));
		V_1 = ((int32_t)(L_7%L_9));
		V_2 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = __this->____buckets;
		int32_t L_11 = V_1;
		int32_t L_12 = L_11;
		int32_t L_13 = (L_10)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_12));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_13, 1));
		goto IL_014f;
	}

IL_005c:
	{
		EntryU5BU5D_t2CF41CF5E2621F7EFD1220745F530C0B5DC797C3* L_14 = __this->____entries;
		int32_t L_15 = V_3;
		V_4 = ((L_14)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_15)));
		Entry_tE1E58729B91F813087891EA78F6ED04BC6F84B14* L_16 = V_4;
		int32_t L_17 = L_16->___hashCode;
		int32_t L_18 = V_0;
		if ((!(((uint32_t)L_17) == ((uint32_t)L_18))))
		{
			goto IL_0145;
		}
	}
	{
		RuntimeObject* L_19 = __this->____comparer;
		RuntimeObject* L_20 = L_19;
		if (L_20)
		{
			G_B10_0 = L_20;
			goto IL_0095;
		}
		G_B9_0 = L_20;
	}
	{
		EqualityComparer_1_t6AF08CEAD675C05C1B701806606C7CB7CF53951F* L_21;
		L_21 = EqualityComparer_1_get_Default_m56D88D65184F0E2CB43D9A2853637D9E87D10FC5_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2));
		Entry_tE1E58729B91F813087891EA78F6ED04BC6F84B14* L_22 = V_4;
		ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A L_23 = L_22->___key;
		ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A L_24 = ___0_key;
		bool L_25;
		L_25 = VirtualFuncInvoker2< bool, ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A, ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A >::Invoke(8, L_21, L_23, L_24);
		G_B11_0 = L_25;
		goto IL_00a2;
	}

IL_0095:
	{
		Entry_tE1E58729B91F813087891EA78F6ED04BC6F84B14* L_26 = V_4;
		ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A L_27 = L_26->___key;
		ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A L_28 = ___0_key;
		bool L_29;
		L_29 = InterfaceFuncInvoker2< bool, ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A, ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 35), G_B10_0, L_27, L_28);
		G_B11_0 = L_29;
	}

IL_00a2:
	{
		if (!G_B11_0)
		{
			goto IL_0145;
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
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = __this->____buckets;
		int32_t L_32 = V_1;
		Entry_tE1E58729B91F813087891EA78F6ED04BC6F84B14* L_33 = V_4;
		int32_t L_34 = L_33->___next;
		(L_31)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_32), (int32_t)((int32_t)il2cpp_codegen_add(L_34, 1)));
		goto IL_00d6;
	}

IL_00be:
	{
		EntryU5BU5D_t2CF41CF5E2621F7EFD1220745F530C0B5DC797C3* L_35 = __this->____entries;
		int32_t L_36 = V_2;
		Entry_tE1E58729B91F813087891EA78F6ED04BC6F84B14* L_37 = V_4;
		int32_t L_38 = L_37->___next;
		((L_35)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_36)))->___next = L_38;
	}

IL_00d6:
	{
		Il2CppSharedGenericObject** L_39 = ___1_value;
		Entry_tE1E58729B91F813087891EA78F6ED04BC6F84B14* L_40 = V_4;
		Il2CppSharedGenericObject* L_41 = L_40->___value;
		*(Il2CppSharedGenericObject**)L_39 = L_41;
		Il2CppCodeGenWriteBarrier((void**)(Il2CppSharedGenericObject**)L_39, (void*)L_41);
		Entry_tE1E58729B91F813087891EA78F6ED04BC6F84B14* L_42 = V_4;
		L_42->___hashCode = (-1);
		Entry_tE1E58729B91F813087891EA78F6ED04BC6F84B14* L_43 = V_4;
		int32_t L_44 = __this->____freeList;
		L_43->___next = L_44;
	}
	{
		Entry_tE1E58729B91F813087891EA78F6ED04BC6F84B14* L_45 = V_4;
		ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A* L_46 = (ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A*)(&L_45->___key);
		il2cpp_codegen_initobj(L_46, sizeof(ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A));
	}

IL_010c:
	{
	}
	{
		Entry_tE1E58729B91F813087891EA78F6ED04BC6F84B14* L_47 = V_4;
		Il2CppSharedGenericObject** L_48 = (Il2CppSharedGenericObject**)(&L_47->___value);
		il2cpp_codegen_initobj(L_48, sizeof(Il2CppSharedGenericObject*));
	}

IL_0120:
	{
		int32_t L_49 = V_3;
		__this->____freeList = L_49;
		int32_t L_50 = __this->____freeCount;
		__this->____freeCount = ((int32_t)il2cpp_codegen_add(L_50, 1));
		int32_t L_51 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_51, 1));
		return (bool)1;
	}

IL_0145:
	{
		int32_t L_52 = V_3;
		V_2 = L_52;
		Entry_tE1E58729B91F813087891EA78F6ED04BC6F84B14* L_53 = V_4;
		int32_t L_54 = L_53->___next;
		V_3 = L_54;
	}

IL_014f:
	{
		int32_t L_55 = V_3;
		if ((((int32_t)L_55) >= ((int32_t)0)))
		{
			goto IL_005c;
		}
	}

IL_0156:
	{
		Il2CppSharedGenericObject** L_56 = ___1_value;
		il2cpp_codegen_initobj(L_56, sizeof(Il2CppSharedGenericObject*));
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m544B10FFDD54BB3DB13B9CEEFEF9C9A89B85A4DB_gshared (Dictionary_2_t6EE05E1DBF257B416E0A3B6FE8BF1C1F55C8C13B* __this, ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A ___0_key, Il2CppSharedGenericObject** ___1_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m5EE6BB86A74B61BA4F43F7FCD7A19396DDA1DEB6(__this, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 26));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0025;
		}
	}
	{
		Il2CppSharedGenericObject** L_3 = ___1_value;
		EntryU5BU5D_t2CF41CF5E2621F7EFD1220745F530C0B5DC797C3* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		Il2CppSharedGenericObject* L_6 = ((L_4)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		*(Il2CppSharedGenericObject**)L_3 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(Il2CppSharedGenericObject**)L_3, (void*)L_6);
		return (bool)1;
	}

IL_0025:
	{
		Il2CppSharedGenericObject** L_7 = ___1_value;
		il2cpp_codegen_initobj(L_7, sizeof(Il2CppSharedGenericObject*));
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryAdd_m31A536EBEE4B544593F612F05A5CE8D8A9F8BBBF_gshared (Dictionary_2_t6EE05E1DBF257B416E0A3B6FE8BF1C1F55C8C13B* __this, ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A ___0_key, Il2CppSharedGenericObject* ___1_value, const RuntimeMethod* method) 
{
	{
		ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A L_0 = ___0_key;
		Il2CppSharedGenericObject* L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_m80FCA7D16C6C7009BA59F2ABAA24CF6394A0F865(__this, L_0, L_1, 0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 27));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_mC110421C30B569259BF43D5F07B7BA084EB04D18_gshared (Dictionary_2_t6EE05E1DBF257B416E0A3B6FE8BF1C1F55C8C13B* __this, KeyValuePair_2U5BU5D_t4208D2E1B4635D7EA4C927172F54BAD9776A760F* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2U5BU5D_t4208D2E1B4635D7EA4C927172F54BAD9776A760F* L_0 = ___0_array;
		int32_t L_1 = ___1_index;
		Dictionary_2_CopyTo_mF0207C12B681D9CD010A20E3C7FEBDCE5EEC46EA(__this, L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_ICollection_CopyTo_m3331B0EDDA7E98A34425B81A329F50D136FFC044_gshared (Dictionary_2_t6EE05E1DBF257B416E0A3B6FE8BF1C1F55C8C13B* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_t4208D2E1B4635D7EA4C927172F54BAD9776A760F* V_0 = NULL;
	DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* V_1 = NULL;
	EntryU5BU5D_t2CF41CF5E2621F7EFD1220745F530C0B5DC797C3* V_2 = NULL;
	int32_t V_3 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_4 = NULL;
	int32_t V_5 = 0;
	EntryU5BU5D_t2CF41CF5E2621F7EFD1220745F530C0B5DC797C3* V_6 = NULL;
	int32_t V_7 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		int32_t L_2;
		L_2 = il2cpp_codegen_array_get_rank(L_1);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		RuntimeArray* L_6 = ___0_array;
		int32_t L_7;
		L_7 = il2cpp_codegen_array_get_length(L_6);
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
		RuntimeArray* L_8 = ___0_array;
		int32_t L_9;
		L_9 = il2cpp_codegen_array_get_length(L_8);
		int32_t L_10 = ___1_index;
		int32_t L_11;
		L_11 = Dictionary_2_get_Count_mE694E1EB3DC6921BA682AB491035440877A5024C(__this, NULL);
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_9, L_10))) >= ((int32_t)L_11)))
		{
			goto IL_004b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(5, NULL);
	}

IL_004b:
	{
		RuntimeArray* L_12 = ___0_array;
		V_0 = ((KeyValuePair_2U5BU5D_t4208D2E1B4635D7EA4C927172F54BAD9776A760F*)IsInstSealed((RuntimeObject*)L_12, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 36)));
		KeyValuePair_2U5BU5D_t4208D2E1B4635D7EA4C927172F54BAD9776A760F* L_13 = V_0;
		if (!L_13)
		{
			goto IL_005e;
		}
	}
	{
		KeyValuePair_2U5BU5D_t4208D2E1B4635D7EA4C927172F54BAD9776A760F* L_14 = V_0;
		int32_t L_15 = ___1_index;
		Dictionary_2_CopyTo_mF0207C12B681D9CD010A20E3C7FEBDCE5EEC46EA(__this, L_14, L_15, NULL);
		return;
	}

IL_005e:
	{
		RuntimeArray* L_16 = ___0_array;
		V_1 = ((DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533*)IsInstSealed((RuntimeObject*)L_16, DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var));
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_17 = V_1;
		if (!L_17)
		{
			goto IL_00c3;
		}
	}
	{
		EntryU5BU5D_t2CF41CF5E2621F7EFD1220745F530C0B5DC797C3* L_18 = __this->____entries;
		V_2 = L_18;
		V_3 = 0;
		goto IL_00b9;
	}

IL_0073:
	{
		EntryU5BU5D_t2CF41CF5E2621F7EFD1220745F530C0B5DC797C3* L_19 = V_2;
		int32_t L_20 = V_3;
		int32_t L_21 = ((L_19)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_20)))->___hashCode;
		if ((((int32_t)L_21) < ((int32_t)0)))
		{
			goto IL_00b5;
		}
	}
	{
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_22 = V_1;
		int32_t L_23 = ___1_index;
		int32_t L_24 = L_23;
		___1_index = ((int32_t)il2cpp_codegen_add(L_24, 1));
		EntryU5BU5D_t2CF41CF5E2621F7EFD1220745F530C0B5DC797C3* L_25 = V_2;
		int32_t L_26 = V_3;
		ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A L_27 = ((L_25)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_26)))->___key;
		ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A L_28 = L_27;
		RuntimeObject* L_29 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 10), &L_28);
		EntryU5BU5D_t2CF41CF5E2621F7EFD1220745F530C0B5DC797C3* L_30 = V_2;
		int32_t L_31 = V_3;
		Il2CppSharedGenericObject* L_32 = ((L_30)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_31)))->___value;
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_33;
		memset((&L_33), 0, sizeof(L_33));
		DictionaryEntry__ctor_m2768353E53A75C4860E34B37DAF1342120C5D1EA((&L_33), L_29, (RuntimeObject*)L_32, NULL);
		(L_22)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_24), (DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB)L_33);
	}

IL_00b5:
	{
		int32_t L_34 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_00b9:
	{
		int32_t L_35 = V_3;
		int32_t L_36 = __this->____count;
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
		RuntimeArray* L_37 = ___0_array;
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
	{
		{
			int32_t L_39 = __this->____count;
			V_5 = L_39;
			EntryU5BU5D_t2CF41CF5E2621F7EFD1220745F530C0B5DC797C3* L_40 = __this->____entries;
			V_6 = L_40;
			V_7 = 0;
			goto IL_0130_1;
		}

IL_00ea_1:
		{
			EntryU5BU5D_t2CF41CF5E2621F7EFD1220745F530C0B5DC797C3* L_41 = V_6;
			int32_t L_42 = V_7;
			int32_t L_43 = ((L_41)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_42)))->___hashCode;
			if ((((int32_t)L_43) < ((int32_t)0)))
			{
				goto IL_012a_1;
			}
		}
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_44 = V_4;
			int32_t L_45 = ___1_index;
			int32_t L_46 = L_45;
			___1_index = ((int32_t)il2cpp_codegen_add(L_46, 1));
			EntryU5BU5D_t2CF41CF5E2621F7EFD1220745F530C0B5DC797C3* L_47 = V_6;
			int32_t L_48 = V_7;
			ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A L_49 = ((L_47)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_48)))->___key;
			EntryU5BU5D_t2CF41CF5E2621F7EFD1220745F530C0B5DC797C3* L_50 = V_6;
			int32_t L_51 = V_7;
			Il2CppSharedGenericObject* L_52 = ((L_50)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_51)))->___value;
			KeyValuePair_2_tA18DA0C0E7B0709B9741404F85570AF6334E7295 L_53;
			memset((&L_53), 0, sizeof(L_53));
			KeyValuePair_2__ctor_m0D4121FAC5AC308F9F11677446270359EE7F187F((&L_53), L_49, L_52, NULL);
			KeyValuePair_2_tA18DA0C0E7B0709B9741404F85570AF6334E7295 L_54 = L_53;
			RuntimeObject* L_55 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 19), &L_54);
			ArrayElementTypeCheck (L_44, L_55);
			(L_44)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_46), (RuntimeObject*)L_55);
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
	}
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
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_59 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0140;
	}

IL_0140:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m0E09940D27D94EDDCFF470810EC0D0A114E226D1_gshared (Dictionary_2_t6EE05E1DBF257B416E0A3B6FE8BF1C1F55C8C13B* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t2192A20535292BE4B74B395AB95FBE0E90FF51DF L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m61E3631AF88B2F19F5C1DD6448CB0F8E7DD2118E((&L_0), __this, 2, NULL);
		Enumerator_t2192A20535292BE4B74B395AB95FBE0E90FF51DF L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 32), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_EnsureCapacity_m6CC01D6F08A4B3391BCE3715088D08CB44B7FC0F_gshared (Dictionary_2_t6EE05E1DBF257B416E0A3B6FE8BF1C1F55C8C13B* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_000b;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97(((int32_t)12), NULL);
	}

IL_000b:
	{
		EntryU5BU5D_t2CF41CF5E2621F7EFD1220745F530C0B5DC797C3* L_1 = __this->____entries;
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		EntryU5BU5D_t2CF41CF5E2621F7EFD1220745F530C0B5DC797C3* L_2 = __this->____entries;
		int32_t L_3 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_2)->max_length),NULL));
		G_B5_0 = L_3;
		goto IL_001e;
	}

IL_001d:
	{
		G_B5_0 = 0;
	}

IL_001e:
	{
		V_0 = G_B5_0;
		int32_t L_4 = V_0;
		int32_t L_5 = ___0_capacity;
		if ((((int32_t)L_4) < ((int32_t)L_5)))
		{
			goto IL_0025;
		}
	}
	{
		int32_t L_6 = V_0;
		return L_6;
	}

IL_0025:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = __this->____buckets;
		if (L_7)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_8 = ___0_capacity;
		int32_t L_9;
		L_9 = Dictionary_2_Initialize_m9694FF4B4E2C144DCEF2FCE1F3082855262A7256(__this, L_8, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 1));
		return L_9;
	}

IL_0035:
	{
		int32_t L_10 = ___0_capacity;
		CHECKED_LOCAL_INIT(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit,(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_11;
		L_11 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_10, NULL);
		V_1 = L_11;
		int32_t L_12 = V_1;
		Dictionary_2_Resize_m89E3D5532F34F27BEB5DF28BB40F3558ECDF3728(__this, L_12, (bool)0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 45));
		int32_t L_13 = V_1;
		return L_13;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_IDictionary_set_Item_m610E6007B2B296B398434104EAEB9F9F153AF5DB_gshared (Dictionary_2_t6EE05E1DBF257B416E0A3B6FE8BF1C1F55C8C13B* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(Type_t_StaticInit);
	ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A V_0;
	memset((&V_0), 0, sizeof(V_0));
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___1_value;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisIl2CppSharedGenericObject_mE7A1EEC53480BA1ED6C827938ADAF45B127DD054(L_1, ((int32_t)15), NULL);
	}
	try
	{
		{
			RuntimeObject* L_2 = ___0_key;
			V_0 = ((*(ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 10))));
		}
		try
		{
			ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A L_3 = V_0;
			RuntimeObject* L_4 = ___1_value;
			Dictionary_2_set_Item_mB372B26FF800DAB8A056AC36CEF56999C6B8C0B2(__this, L_3, ((Il2CppSharedGenericObject*)Castclass((RuntimeObject*)L_4, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 49));
			goto IL_003a_1;
		}
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
		{
			InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_5 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
			RuntimeObject* L_6 = ___1_value;
			RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 50)) };
			CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
			Type_t* L_8;
			L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
			ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_6, L_8, NULL);
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_003a_1;
		}

IL_003a_1:
		{
			goto IL_004f;
		}
	}
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
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_9 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_10 = ___0_key;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 51)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		ThrowHelper_ThrowWrongKeyTypeArgumentException_m90E5BCE2CB10EEC16F254C237121C6816C4D6982(L_10, L_12, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_004f;
	}

IL_004f:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_GetEnumerator_mC6F17349CADE66B7F72E1242F3A1ADA2CFBA6021_gshared (Dictionary_2_t6EE05E1DBF257B416E0A3B6FE8BF1C1F55C8C13B* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t2192A20535292BE4B74B395AB95FBE0E90FF51DF L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m61E3631AF88B2F19F5C1DD6448CB0F8E7DD2118E((&L_0), __this, 1, NULL);
		Enumerator_t2192A20535292BE4B74B395AB95FBE0E90FF51DF L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 32), &L_1);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5C96FD77BE99497A7E54C6230E41959030E607A4_gshared (Dictionary_2_tAC56BFFAB0D6C547AD119E1707252267F9C0C49A* __this, const RuntimeMethod* method) 
{
	{
		Dictionary_2__ctor_m18A30ACAED5ED63080749BA1C8B6DDAC6B36C3EE(__this, 0, (RuntimeObject*)NULL, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m1AF2FE90D9DD9D693B99B74CDC4935CA972ECD7C_gshared (Dictionary_2_tAC56BFFAB0D6C547AD119E1707252267F9C0C49A* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_capacity;
		Dictionary_2__ctor_m18A30ACAED5ED63080749BA1C8B6DDAC6B36C3EE(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mAE587446CB22990BE3D88C5276B4D8C4AB38E6C3_gshared (Dictionary_2_tAC56BFFAB0D6C547AD119E1707252267F9C0C49A* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_comparer;
		Dictionary_2__ctor_m18A30ACAED5ED63080749BA1C8B6DDAC6B36C3EE(__this, 0, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m18A30ACAED5ED63080749BA1C8B6DDAC6B36C3EE_gshared (Dictionary_2_tAC56BFFAB0D6C547AD119E1707252267F9C0C49A* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0011;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97(((int32_t)12), NULL);
	}

IL_0011:
	{
		int32_t L_1 = ___0_capacity;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_2 = ___0_capacity;
		int32_t L_3;
		L_3 = Dictionary_2_Initialize_mD6E490F5E2D02CB8B433925CF5DAE535CBA6F8CF(__this, L_2, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 1));
	}

IL_001d:
	{
		RuntimeObject* L_4 = ___1_comparer;
		EqualityComparer_1_t4515F567FF8CA58A31FECE4C986C6950AAF8A2CB* L_5;
		L_5 = EqualityComparer_1_get_Default_mF252A6DD8B0E68A7EC7F6356C3007FBCDC35877D_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2));
		if ((((RuntimeObject*)(RuntimeObject*)L_4) == ((RuntimeObject*)(EqualityComparer_1_t4515F567FF8CA58A31FECE4C986C6950AAF8A2CB*)L_5)))
		{
			goto IL_002c;
		}
	}
	{
		RuntimeObject* L_6 = ___1_comparer;
		__this->____comparer = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)L_6);
	}

IL_002c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m0BBACC79A6257D56E9A512758BDAB39209B1352B_gshared (Dictionary_2_tAC56BFFAB0D6C547AD119E1707252267F9C0C49A* __this, RuntimeObject* ___0_dictionary, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_dictionary;
		Dictionary_2__ctor_mAD75EF58F66B595F8D3901C3452232FC94062088(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 3));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mAD75EF58F66B595F8D3901C3452232FC94062088_gshared (Dictionary_2_tAC56BFFAB0D6C547AD119E1707252267F9C0C49A* __this, RuntimeObject* ___0_dictionary, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	EntryU5BU5D_tD168B9758081967AE421A2B6D72D8EBDC95FC1E0* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	KeyValuePair_2_t64E764570967C9CF8DB9472130C0647F11D963A2 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Dictionary_2_tAC56BFFAB0D6C547AD119E1707252267F9C0C49A* G_B2_0 = NULL;
	Dictionary_2_tAC56BFFAB0D6C547AD119E1707252267F9C0C49A* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	Dictionary_2_tAC56BFFAB0D6C547AD119E1707252267F9C0C49A* G_B3_1 = NULL;
	{
		RuntimeObject* L_0 = ___0_dictionary;
		if (L_0)
		{
			G_B2_0 = __this;
			goto IL_0007;
		}
		G_B1_0 = __this;
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_000d;
	}

IL_0007:
	{
		RuntimeObject* L_1 = ___0_dictionary;
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 4), (RuntimeObject*)L_1);
		G_B3_0 = L_2;
		G_B3_1 = G_B2_0;
	}

IL_000d:
	{
		RuntimeObject* L_3 = ___1_comparer;
		Dictionary_2__ctor_m18A30ACAED5ED63080749BA1C8B6DDAC6B36C3EE(G_B3_1, G_B3_0, L_3, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0));
		RuntimeObject* L_4 = ___0_dictionary;
		if (L_4)
		{
			goto IL_001c;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(1, NULL);
	}

IL_001c:
	{
		RuntimeObject* L_5 = ___0_dictionary;
		void* L_6 = il2cpp_codegen_object_get_class(L_5);
		bool L_7 = (il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7)) == (L_6);
		if (!L_7)
		{
			goto IL_0080;
		}
	}
	{
		RuntimeObject* L_8 = ___0_dictionary;
		Dictionary_2_tAC56BFFAB0D6C547AD119E1707252267F9C0C49A* L_9 = ((Dictionary_2_tAC56BFFAB0D6C547AD119E1707252267F9C0C49A*)CastclassClass((RuntimeObject*)L_8, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7)));
		int32_t L_10 = L_9->____count;
		V_0 = L_10;
		EntryU5BU5D_tD168B9758081967AE421A2B6D72D8EBDC95FC1E0* L_11 = L_9->____entries;
		V_1 = L_11;
		V_2 = 0;
		goto IL_007b;
	}

IL_004a:
	{
		EntryU5BU5D_tD168B9758081967AE421A2B6D72D8EBDC95FC1E0* L_12 = V_1;
		int32_t L_13 = V_2;
		int32_t L_14 = ((L_12)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_13)))->___hashCode;
		if ((((int32_t)L_14) < ((int32_t)0)))
		{
			goto IL_0077;
		}
	}
	{
		EntryU5BU5D_tD168B9758081967AE421A2B6D72D8EBDC95FC1E0* L_15 = V_1;
		int32_t L_16 = V_2;
		ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A L_17 = ((L_15)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_16)))->___key;
		EntryU5BU5D_tD168B9758081967AE421A2B6D72D8EBDC95FC1E0* L_18 = V_1;
		int32_t L_19 = V_2;
		Il2CppSharedGenericObject* L_20 = ((L_18)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_19)))->___value;
		Dictionary_2_Add_mB472F849E1EC334185C8660C50A557237F0BE164(__this, L_17, L_20, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14));
	}

IL_0077:
	{
		int32_t L_21 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_007b:
	{
		int32_t L_22 = V_2;
		int32_t L_23 = V_0;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_004a;
		}
	}
	{
		return;
	}

IL_0080:
	{
		RuntimeObject* L_24 = ___0_dictionary;
		RuntimeObject* L_25;
		L_25 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 15), (RuntimeObject*)L_24);
		V_3 = L_25;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00af:
			{
				{
					RuntimeObject* L_26 = V_3;
					if (!L_26)
					{
						goto IL_00b8;
					}
				}
				{
					RuntimeObject* L_27 = V_3;
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_27);
				}

IL_00b8:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_00a5_1;
			}

IL_0089_1:
			{
				RuntimeObject* L_28 = V_3;
				KeyValuePair_2_t64E764570967C9CF8DB9472130C0647F11D963A2 L_29;
				L_29 = InterfaceFuncInvoker0< KeyValuePair_2_t64E764570967C9CF8DB9472130C0647F11D963A2 >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 17), L_28);
				V_4 = L_29;
				ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A L_30;
				L_30 = KeyValuePair_2_get_Key_mD0027E57B606342804BAAEE3B37C9C7FC77D90E3_inline((&V_4), NULL);
				Il2CppSharedGenericObject* L_31;
				L_31 = KeyValuePair_2_get_Value_m1B98DA271855EDA63BE7803194E15F9A7CEA3D25_inline((&V_4), NULL);
				Dictionary_2_Add_mB472F849E1EC334185C8660C50A557237F0BE164(__this, L_30, L_31, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14));
			}

IL_00a5_1:
			{
				RuntimeObject* L_32 = V_3;
				bool L_33;
				L_33 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_32);
				if (L_33)
				{
					goto IL_0089_1;
				}
			}
			{
				goto IL_00b9;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_tFB65BE5C0E6B6C8D1CB0CCA25F056AA72F66D37C* Dictionary_2_get_Keys_mB891254A1B6A6791387BC11637DE57B8C898FE7C_gshared (Dictionary_2_tAC56BFFAB0D6C547AD119E1707252267F9C0C49A* __this, const RuntimeMethod* method) 
{
	{
		KeyCollection_tFB65BE5C0E6B6C8D1CB0CCA25F056AA72F66D37C* L_0 = __this->____keys;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		KeyCollection_tFB65BE5C0E6B6C8D1CB0CCA25F056AA72F66D37C* L_1 = (KeyCollection_tFB65BE5C0E6B6C8D1CB0CCA25F056AA72F66D37C*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 22));
		KeyCollection__ctor_mD5E79842FA5F42C6B3E458407CA711BDAAB1FE69(L_1, __this, NULL);
		__this->____keys = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keys), (void*)L_1);
	}

IL_0014:
	{
		KeyCollection_tFB65BE5C0E6B6C8D1CB0CCA25F056AA72F66D37C* L_2 = __this->____keys;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_t850579E5C2FF909D1C3606EC46C87F0FADFEDB96* Dictionary_2_get_Values_m357BBB623B919A08A8CADA535288272258A9BEC4_gshared (Dictionary_2_tAC56BFFAB0D6C547AD119E1707252267F9C0C49A* __this, const RuntimeMethod* method) 
{
	{
		ValueCollection_t850579E5C2FF909D1C3606EC46C87F0FADFEDB96* L_0 = __this->____values;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_t850579E5C2FF909D1C3606EC46C87F0FADFEDB96* L_1 = (ValueCollection_t850579E5C2FF909D1C3606EC46C87F0FADFEDB96*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 24));
		ValueCollection__ctor_m7782EC432C8B7591F78A35C56024E8E21C78A345(L_1, __this, NULL);
		__this->____values = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_t850579E5C2FF909D1C3606EC46C87F0FADFEDB96* L_2 = __this->____values;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* Dictionary_2_get_Item_m65968339FBA4115BF0BB1C10D8B6117085315C45_gshared (Dictionary_2_tAC56BFFAB0D6C547AD119E1707252267F9C0C49A* __this, ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Il2CppSharedGenericObject* V_1 = NULL;
	{
		ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_mF40EED5EF900EB145AFD21B959058FC4F3CFD3C7(__this, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 26));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_001e;
		}
	}
	{
		EntryU5BU5D_tD168B9758081967AE421A2B6D72D8EBDC95FC1E0* L_3 = __this->____entries;
		int32_t L_4 = V_0;
		Il2CppSharedGenericObject* L_5 = ((L_3)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_4)))->___value;
		return L_5;
	}

IL_001e:
	{
		ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A L_6 = ___0_key;
		ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 10), &L_7);
		ThrowHelper_ThrowKeyNotFoundException_m6A17735FA486AD43F2488DE39B755AC60BC99CE7(L_8, NULL);
		il2cpp_codegen_initobj((&V_1), sizeof(Il2CppSharedGenericObject*));
		Il2CppSharedGenericObject* L_9 = V_1;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m50080FF99F5F609F7C6D4A916D1A4264AB88BCC5_gshared (Dictionary_2_tAC56BFFAB0D6C547AD119E1707252267F9C0C49A* __this, ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A ___0_key, Il2CppSharedGenericObject* ___1_value, const RuntimeMethod* method) 
{
	{
		ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A L_0 = ___0_key;
		Il2CppSharedGenericObject* L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_m215840BF1C032E1A9D5056DB815A0F7E761F38FC(__this, L_0, L_1, 1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 27));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_mB472F849E1EC334185C8660C50A557237F0BE164_gshared (Dictionary_2_tAC56BFFAB0D6C547AD119E1707252267F9C0C49A* __this, ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A ___0_key, Il2CppSharedGenericObject* ___1_value, const RuntimeMethod* method) 
{
	{
		ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A L_0 = ___0_key;
		Il2CppSharedGenericObject* L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_m215840BF1C032E1A9D5056DB815A0F7E761F38FC(__this, L_0, L_1, 2, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 27));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m30681F352B63FA36D2AE605D5DC58BFF543421BE_gshared (Dictionary_2_tAC56BFFAB0D6C547AD119E1707252267F9C0C49A* __this, KeyValuePair_2_t64E764570967C9CF8DB9472130C0647F11D963A2 ___0_keyValuePair, const RuntimeMethod* method) 
{
	{
		ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A L_0;
		L_0 = KeyValuePair_2_get_Key_mD0027E57B606342804BAAEE3B37C9C7FC77D90E3_inline((&___0_keyValuePair), NULL);
		Il2CppSharedGenericObject* L_1;
		L_1 = KeyValuePair_2_get_Value_m1B98DA271855EDA63BE7803194E15F9A7CEA3D25_inline((&___0_keyValuePair), NULL);
		Dictionary_2_Add_mB472F849E1EC334185C8660C50A557237F0BE164(__this, L_0, L_1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m78DB65587BADCAB9417C6D8BDC27071931CBED83_gshared (Dictionary_2_tAC56BFFAB0D6C547AD119E1707252267F9C0C49A* __this, KeyValuePair_2_t64E764570967C9CF8DB9472130C0647F11D963A2 ___0_keyValuePair, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A L_0;
		L_0 = KeyValuePair_2_get_Key_mD0027E57B606342804BAAEE3B37C9C7FC77D90E3_inline((&___0_keyValuePair), NULL);
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_mF40EED5EF900EB145AFD21B959058FC4F3CFD3C7(__this, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 26));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0038;
		}
	}
	{
		EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* L_3;
		L_3 = EqualityComparer_1_get_Default_mB451453B7B5B4B570A9347E090AB0FAC75C0C628_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 28));
		EntryU5BU5D_tD168B9758081967AE421A2B6D72D8EBDC95FC1E0* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		Il2CppSharedGenericObject* L_6 = ((L_4)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		Il2CppSharedGenericObject* L_7;
		L_7 = KeyValuePair_2_get_Value_m1B98DA271855EDA63BE7803194E15F9A7CEA3D25_inline((&___0_keyValuePair), NULL);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, Il2CppSharedGenericObject*, Il2CppSharedGenericObject* >::Invoke(8, L_3, L_6, L_7);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m61AEF7D244D9C0A1F70618EE0F47ADF21CD291B4_gshared (Dictionary_2_tAC56BFFAB0D6C547AD119E1707252267F9C0C49A* __this, KeyValuePair_2_t64E764570967C9CF8DB9472130C0647F11D963A2 ___0_keyValuePair, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A L_0;
		L_0 = KeyValuePair_2_get_Key_mD0027E57B606342804BAAEE3B37C9C7FC77D90E3_inline((&___0_keyValuePair), NULL);
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_mF40EED5EF900EB145AFD21B959058FC4F3CFD3C7(__this, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 26));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0046;
		}
	}
	{
		EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* L_3;
		L_3 = EqualityComparer_1_get_Default_mB451453B7B5B4B570A9347E090AB0FAC75C0C628_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 28));
		EntryU5BU5D_tD168B9758081967AE421A2B6D72D8EBDC95FC1E0* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		Il2CppSharedGenericObject* L_6 = ((L_4)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		Il2CppSharedGenericObject* L_7;
		L_7 = KeyValuePair_2_get_Value_m1B98DA271855EDA63BE7803194E15F9A7CEA3D25_inline((&___0_keyValuePair), NULL);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, Il2CppSharedGenericObject*, Il2CppSharedGenericObject* >::Invoke(8, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0046;
		}
	}
	{
		ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A L_9;
		L_9 = KeyValuePair_2_get_Key_mD0027E57B606342804BAAEE3B37C9C7FC77D90E3_inline((&___0_keyValuePair), NULL);
		bool L_10;
		L_10 = Dictionary_2_Remove_m86A5B73912916A5825210A61600309B0CEBE7022(__this, L_9, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 29));
		return (bool)1;
	}

IL_0046:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_mF1F5EAAC106826831EF6763729D6C06F730FCC77_gshared (Dictionary_2_tAC56BFFAB0D6C547AD119E1707252267F9C0C49A* __this, ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A ___0_key, const RuntimeMethod* method) 
{
	{
		ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_mF40EED5EF900EB145AFD21B959058FC4F3CFD3C7(__this, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 26));
		return (bool)((((int32_t)((((int32_t)L_1) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsValue_m2AF961FE749C46EFD7FB3E2C8E75525BA2F4D434_gshared (Dictionary_2_tAC56BFFAB0D6C547AD119E1707252267F9C0C49A* __this, Il2CppSharedGenericObject* ___0_value, const RuntimeMethod* method) 
{
	EntryU5BU5D_tD168B9758081967AE421A2B6D72D8EBDC95FC1E0* V_0 = NULL;
	int32_t V_1 = 0;
	Il2CppSharedGenericObject* V_2 = NULL;
	int32_t V_3 = 0;
	EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* V_4 = NULL;
	int32_t V_5 = 0;
	{
		EntryU5BU5D_tD168B9758081967AE421A2B6D72D8EBDC95FC1E0* L_0 = __this->____entries;
		V_0 = L_0;
		Il2CppSharedGenericObject* L_1 = ___0_value;
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
		EntryU5BU5D_tD168B9758081967AE421A2B6D72D8EBDC95FC1E0* L_2 = V_0;
		int32_t L_3 = V_1;
		int32_t L_4 = ((L_2)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_3)))->___hashCode;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0037;
		}
	}
	{
		EntryU5BU5D_tD168B9758081967AE421A2B6D72D8EBDC95FC1E0* L_5 = V_0;
		int32_t L_6 = V_1;
		Il2CppSharedGenericObject* L_7 = ((L_5)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_6)))->___value;
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
		int32_t L_10 = __this->____count;
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
		il2cpp_codegen_initobj((&V_2), sizeof(Il2CppSharedGenericObject*));
		Il2CppSharedGenericObject* L_11 = V_2;
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
		EntryU5BU5D_tD168B9758081967AE421A2B6D72D8EBDC95FC1E0* L_12 = V_0;
		int32_t L_13 = V_3;
		int32_t L_14 = ((L_12)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_13)))->___hashCode;
		if ((((int32_t)L_14) < ((int32_t)0)))
		{
			goto IL_0087;
		}
	}
	{
		EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* L_15;
		L_15 = EqualityComparer_1_get_Default_mB451453B7B5B4B570A9347E090AB0FAC75C0C628_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 28));
		EntryU5BU5D_tD168B9758081967AE421A2B6D72D8EBDC95FC1E0* L_16 = V_0;
		int32_t L_17 = V_3;
		Il2CppSharedGenericObject* L_18 = ((L_16)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_17)))->___value;
		Il2CppSharedGenericObject* L_19 = ___0_value;
		bool L_20;
		L_20 = VirtualFuncInvoker2< bool, Il2CppSharedGenericObject*, Il2CppSharedGenericObject* >::Invoke(8, L_15, L_18, L_19);
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
		int32_t L_23 = __this->____count;
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
		EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* L_24;
		L_24 = EqualityComparer_1_get_Default_mB451453B7B5B4B570A9347E090AB0FAC75C0C628_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 28));
		V_4 = L_24;
		V_5 = 0;
		goto IL_00d1;
	}

IL_00a2:
	{
		EntryU5BU5D_tD168B9758081967AE421A2B6D72D8EBDC95FC1E0* L_25 = V_0;
		int32_t L_26 = V_5;
		int32_t L_27 = ((L_25)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_26)))->___hashCode;
		if ((((int32_t)L_27) < ((int32_t)0)))
		{
			goto IL_00cb;
		}
	}
	{
		EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* L_28 = V_4;
		EntryU5BU5D_tD168B9758081967AE421A2B6D72D8EBDC95FC1E0* L_29 = V_0;
		int32_t L_30 = V_5;
		Il2CppSharedGenericObject* L_31 = ((L_29)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_30)))->___value;
		Il2CppSharedGenericObject* L_32 = ___0_value;
		bool L_33;
		L_33 = VirtualFuncInvoker2< bool, Il2CppSharedGenericObject*, Il2CppSharedGenericObject* >::Invoke(8, L_28, L_31, L_32);
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
		int32_t L_36 = __this->____count;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_mD9B70A6E4EDB4E0CAB6CD3A7C94AB74BEF08CF66_gshared (Dictionary_2_tAC56BFFAB0D6C547AD119E1707252267F9C0C49A* __this, KeyValuePair_2U5BU5D_t9F59B28C21BBB1C41719D5BDFC79702EFA03FC3A* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	EntryU5BU5D_tD168B9758081967AE421A2B6D72D8EBDC95FC1E0* V_1 = NULL;
	int32_t V_2 = 0;
	{
		KeyValuePair_2U5BU5D_t9F59B28C21BBB1C41719D5BDFC79702EFA03FC3A* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(3, NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_index;
		KeyValuePair_2U5BU5D_t9F59B28C21BBB1C41719D5BDFC79702EFA03FC3A* L_2 = ___0_array;
		int32_t L_3 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_2)->max_length),NULL));
		if ((!(((uint32_t)L_1) > ((uint32_t)L_3))))
		{
			goto IL_0014;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0014:
	{
		KeyValuePair_2U5BU5D_t9F59B28C21BBB1C41719D5BDFC79702EFA03FC3A* L_4 = ___0_array;
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		int32_t L_6 = ___1_index;
		int32_t L_7;
		L_7 = Dictionary_2_get_Count_m889AEFA656A4A6AB38DC123246E8BEC33647F2BB(__this, NULL);
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_5, L_6))) >= ((int32_t)L_7)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(5, NULL);
	}

IL_0027:
	{
		int32_t L_8 = __this->____count;
		V_0 = L_8;
		EntryU5BU5D_tD168B9758081967AE421A2B6D72D8EBDC95FC1E0* L_9 = __this->____entries;
		V_1 = L_9;
		V_2 = 0;
		goto IL_0075;
	}

IL_0039:
	{
		EntryU5BU5D_tD168B9758081967AE421A2B6D72D8EBDC95FC1E0* L_10 = V_1;
		int32_t L_11 = V_2;
		int32_t L_12 = ((L_10)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_11)))->___hashCode;
		if ((((int32_t)L_12) < ((int32_t)0)))
		{
			goto IL_0071;
		}
	}
	{
		KeyValuePair_2U5BU5D_t9F59B28C21BBB1C41719D5BDFC79702EFA03FC3A* L_13 = ___0_array;
		int32_t L_14 = ___1_index;
		int32_t L_15 = L_14;
		___1_index = ((int32_t)il2cpp_codegen_add(L_15, 1));
		EntryU5BU5D_tD168B9758081967AE421A2B6D72D8EBDC95FC1E0* L_16 = V_1;
		int32_t L_17 = V_2;
		ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A L_18 = ((L_16)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_17)))->___key;
		EntryU5BU5D_tD168B9758081967AE421A2B6D72D8EBDC95FC1E0* L_19 = V_1;
		int32_t L_20 = V_2;
		Il2CppSharedGenericObject* L_21 = ((L_19)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_20)))->___value;
		KeyValuePair_2_t64E764570967C9CF8DB9472130C0647F11D963A2 L_22;
		memset((&L_22), 0, sizeof(L_22));
		KeyValuePair_2__ctor_mD0CA78640E4E9AEDF3F7B13285742812AD9D3F93((&L_22), L_18, L_21, NULL);
		(L_13)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_15), (KeyValuePair_2_t64E764570967C9CF8DB9472130C0647F11D963A2)L_22);
	}

IL_0071:
	{
		int32_t L_23 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_0075:
	{
		int32_t L_24 = V_2;
		int32_t L_25 = V_0;
		if ((((int32_t)L_24) < ((int32_t)L_25)))
		{
			goto IL_0039;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t3C7F7AA223D7FD8BC46DAE355A8719EAB17A9EDF Dictionary_2_GetEnumerator_m54D4A1E66302F1BEBCFB8C0B2FC06A5C8813D490_gshared (Dictionary_2_tAC56BFFAB0D6C547AD119E1707252267F9C0C49A* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t3C7F7AA223D7FD8BC46DAE355A8719EAB17A9EDF L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m0EF0E488E739D3719F9EB825293E138DA7DF2CA8((&L_0), __this, 2, NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m438F264A33351AD7D356691BB7136AE09C98CD6F_gshared (Dictionary_2_tAC56BFFAB0D6C547AD119E1707252267F9C0C49A* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t3C7F7AA223D7FD8BC46DAE355A8719EAB17A9EDF L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m0EF0E488E739D3719F9EB825293E138DA7DF2CA8((&L_0), __this, 2, NULL);
		Enumerator_t3C7F7AA223D7FD8BC46DAE355A8719EAB17A9EDF L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 32), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_GetObjectData_m8781D518EA932B0B78BD8C9C45C7632FA09FF54F_gshared (Dictionary_2_tAC56BFFAB0D6C547AD119E1707252267F9C0C49A* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	KeyValuePair_2U5BU5D_t9F59B28C21BBB1C41719D5BDFC79702EFA03FC3A* V_0 = NULL;
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
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___0_info;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(4, NULL);
	}

IL_0009:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___0_info;
		int32_t L_2 = __this->____version;
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(L_1, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, L_2, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = ___0_info;
		RuntimeObject* L_4 = __this->____comparer;
		RuntimeObject* L_5 = L_4;
		if (L_5)
		{
			G_B4_0 = L_5;
			G_B4_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
			G_B4_2 = L_3;
			goto IL_002f;
		}
		G_B3_0 = L_5;
		G_B3_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
		G_B3_2 = L_3;
	}
	{
		EqualityComparer_1_t4515F567FF8CA58A31FECE4C986C6950AAF8A2CB* L_6;
		L_6 = EqualityComparer_1_get_Default_mF252A6DD8B0E68A7EC7F6356C3007FBCDC35877D_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2));
		G_B4_0 = ((RuntimeObject*)(L_6));
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
	}

IL_002f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 34)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(G_B4_2, G_B4_1, (RuntimeObject*)G_B4_0, L_8, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_9 = ___0_info;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = __this->____buckets;
		if (!L_10)
		{
			G_B6_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
			G_B6_1 = L_9;
			goto IL_0056;
		}
		G_B5_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
		G_B5_1 = L_9;
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____buckets;
		int32_t L_12 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_11)->max_length),NULL));
		G_B7_0 = L_12;
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
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(G_B7_2, G_B7_1, G_B7_0, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = __this->____buckets;
		if (!L_13)
		{
			goto IL_008e;
		}
	}
	{
		int32_t L_14;
		L_14 = Dictionary_2_get_Count_m889AEFA656A4A6AB38DC123246E8BEC33647F2BB(__this, NULL);
		KeyValuePair_2U5BU5D_t9F59B28C21BBB1C41719D5BDFC79702EFA03FC3A* L_15 = (KeyValuePair_2U5BU5D_t9F59B28C21BBB1C41719D5BDFC79702EFA03FC3A*)(KeyValuePair_2U5BU5D_t9F59B28C21BBB1C41719D5BDFC79702EFA03FC3A*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 36), (uint32_t)L_14);
		V_0 = L_15;
		KeyValuePair_2U5BU5D_t9F59B28C21BBB1C41719D5BDFC79702EFA03FC3A* L_16 = V_0;
		Dictionary_2_CopyTo_mD9B70A6E4EDB4E0CAB6CD3A7C94AB74BEF08CF66(__this, L_16, 0, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_17 = ___0_info;
		KeyValuePair_2U5BU5D_t9F59B28C21BBB1C41719D5BDFC79702EFA03FC3A* L_18 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 38)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(L_17, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, (RuntimeObject*)L_18, L_20, NULL);
	}

IL_008e:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_mF40EED5EF900EB145AFD21B959058FC4F3CFD3C7_gshared (Dictionary_2_tAC56BFFAB0D6C547AD119E1707252267F9C0C49A* __this, ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	EntryU5BU5D_tD168B9758081967AE421A2B6D72D8EBDC95FC1E0* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	int32_t V_5 = 0;
	ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A V_6;
	memset((&V_6), 0, sizeof(V_6));
	EqualityComparer_1_t4515F567FF8CA58A31FECE4C986C6950AAF8A2CB* V_7 = NULL;
	int32_t V_8 = 0;
	{
		goto IL_000e;
	}

IL_000e:
	{
		V_0 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		V_1 = L_1;
		EntryU5BU5D_tD168B9758081967AE421A2B6D72D8EBDC95FC1E0* L_2 = __this->____entries;
		V_2 = L_2;
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = V_1;
		if (!L_3)
		{
			goto IL_0175;
		}
	}
	{
		RuntimeObject* L_4 = __this->____comparer;
		V_4 = L_4;
		RuntimeObject* L_5 = V_4;
		if (L_5)
		{
			goto IL_0110;
		}
	}
	{
		int32_t L_6;
		L_6 = ValueTuple_2_GetHashCode_mF359FEBDF1FA01E57B2160C5F106BFC25DAC0404((&___0_key), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 39));
		V_5 = ((int32_t)(L_6&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = V_1;
		int32_t L_8 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = V_1;
		int32_t L_10 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_9)->max_length),NULL));
		int32_t L_11 = ((int32_t)(L_8%L_10));
		int32_t L_12 = (L_7)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_11));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
		il2cpp_codegen_initobj((&V_6), sizeof(ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A));
	}

IL_0066:
	{
		int32_t L_14 = V_0;
		EntryU5BU5D_tD168B9758081967AE421A2B6D72D8EBDC95FC1E0* L_15 = V_2;
		int32_t L_16 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_15)->max_length),NULL));
		if ((!(((uint32_t)L_14) < ((uint32_t)L_16))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_tD168B9758081967AE421A2B6D72D8EBDC95FC1E0* L_17 = V_2;
		int32_t L_18 = V_0;
		int32_t L_19 = ((L_17)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_18)))->___hashCode;
		int32_t L_20 = V_5;
		if ((!(((uint32_t)L_19) == ((uint32_t)L_20))))
		{
			goto IL_009b;
		}
	}
	{
		EqualityComparer_1_t4515F567FF8CA58A31FECE4C986C6950AAF8A2CB* L_21;
		L_21 = EqualityComparer_1_get_Default_mF252A6DD8B0E68A7EC7F6356C3007FBCDC35877D_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2));
		EntryU5BU5D_tD168B9758081967AE421A2B6D72D8EBDC95FC1E0* L_22 = V_2;
		int32_t L_23 = V_0;
		ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A L_24 = ((L_22)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_23)))->___key;
		ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A L_25 = ___0_key;
		bool L_26;
		L_26 = VirtualFuncInvoker2< bool, ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A, ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A >::Invoke(8, L_21, L_24, L_25);
		if (L_26)
		{
			goto IL_0175;
		}
	}

IL_009b:
	{
		EntryU5BU5D_tD168B9758081967AE421A2B6D72D8EBDC95FC1E0* L_27 = V_2;
		int32_t L_28 = V_0;
		int32_t L_29 = ((L_27)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_28)))->___next;
		V_0 = L_29;
		int32_t L_30 = V_3;
		EntryU5BU5D_tD168B9758081967AE421A2B6D72D8EBDC95FC1E0* L_31 = V_2;
		int32_t L_32 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_31)->max_length),NULL));
		if ((((int32_t)L_30) < ((int32_t)L_32)))
		{
			goto IL_00b3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_00b3:
	{
		int32_t L_33 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_33, 1));
		goto IL_0066;
	}

IL_0110:
	{
		RuntimeObject* L_34 = V_4;
		ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A L_35 = ___0_key;
		int32_t L_36;
		L_36 = InterfaceFuncInvoker1< int32_t, ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A >::Invoke(1, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 35), L_34, L_35);
		V_8 = ((int32_t)(L_36&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_37 = V_1;
		int32_t L_38 = V_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_39 = V_1;
		int32_t L_40 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_39)->max_length),NULL));
		int32_t L_41 = ((int32_t)(L_38%L_40));
		int32_t L_42 = (L_37)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_41));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_42, 1));
	}

IL_012b:
	{
		int32_t L_43 = V_0;
		EntryU5BU5D_tD168B9758081967AE421A2B6D72D8EBDC95FC1E0* L_44 = V_2;
		int32_t L_45 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_44)->max_length),NULL));
		if ((!(((uint32_t)L_43) < ((uint32_t)L_45))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_tD168B9758081967AE421A2B6D72D8EBDC95FC1E0* L_46 = V_2;
		int32_t L_47 = V_0;
		int32_t L_48 = ((L_46)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_47)))->___hashCode;
		int32_t L_49 = V_8;
		if ((!(((uint32_t)L_48) == ((uint32_t)L_49))))
		{
			goto IL_0157;
		}
	}
	{
		RuntimeObject* L_50 = V_4;
		EntryU5BU5D_tD168B9758081967AE421A2B6D72D8EBDC95FC1E0* L_51 = V_2;
		int32_t L_52 = V_0;
		ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A L_53 = ((L_51)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_52)))->___key;
		ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A L_54 = ___0_key;
		bool L_55;
		L_55 = InterfaceFuncInvoker2< bool, ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A, ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 35), L_50, L_53, L_54);
		if (L_55)
		{
			goto IL_0175;
		}
	}

IL_0157:
	{
		EntryU5BU5D_tD168B9758081967AE421A2B6D72D8EBDC95FC1E0* L_56 = V_2;
		int32_t L_57 = V_0;
		int32_t L_58 = ((L_56)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_57)))->___next;
		V_0 = L_58;
		int32_t L_59 = V_3;
		EntryU5BU5D_tD168B9758081967AE421A2B6D72D8EBDC95FC1E0* L_60 = V_2;
		int32_t L_61 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_60)->max_length),NULL));
		if ((((int32_t)L_59) < ((int32_t)L_61)))
		{
			goto IL_016f;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_016f:
	{
		int32_t L_62 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_62, 1));
		goto IL_012b;
	}

IL_0175:
	{
		int32_t L_63 = V_0;
		return L_63;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_mD6E490F5E2D02CB8B433925CF5DAE535CBA6F8CF_gshared (Dictionary_2_tAC56BFFAB0D6C547AD119E1707252267F9C0C49A* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit);
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_capacity;
		CHECKED_LOCAL_INIT(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit,(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_1;
		L_1 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_0, NULL);
		V_0 = L_1;
		__this->____freeList = (-1);
		int32_t L_2 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_2);
		__this->____buckets = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_3);
		int32_t L_4 = V_0;
		EntryU5BU5D_tD168B9758081967AE421A2B6D72D8EBDC95FC1E0* L_5 = (EntryU5BU5D_tD168B9758081967AE421A2B6D72D8EBDC95FC1E0*)(EntryU5BU5D_tD168B9758081967AE421A2B6D72D8EBDC95FC1E0*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 43), (uint32_t)L_4);
		__this->____entries = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries), (void*)L_5);
		int32_t L_6 = V_0;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_m215840BF1C032E1A9D5056DB815A0F7E761F38FC_gshared (Dictionary_2_tAC56BFFAB0D6C547AD119E1707252267F9C0C49A* __this, ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A ___0_key, Il2CppSharedGenericObject* ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method) 
{
	EntryU5BU5D_tD168B9758081967AE421A2B6D72D8EBDC95FC1E0* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	int32_t V_8 = 0;
	int32_t* V_9 = NULL;
	Entry_t833BE0585D8B6A240162BBCD9DE7A05889C81254* V_10 = NULL;
	ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A V_11;
	memset((&V_11), 0, sizeof(V_11));
	EqualityComparer_1_t4515F567FF8CA58A31FECE4C986C6950AAF8A2CB* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t G_B7_0 = 0;
	int32_t* G_B51_0 = NULL;
	{
		goto IL_000e;
	}

IL_000e:
	{
		int32_t L_1 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_1, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->____buckets;
		if (L_2)
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_3;
		L_3 = Dictionary_2_Initialize_mD6E490F5E2D02CB8B433925CF5DAE535CBA6F8CF(__this, 0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 1));
	}

IL_002c:
	{
		EntryU5BU5D_tD168B9758081967AE421A2B6D72D8EBDC95FC1E0* L_4 = __this->____entries;
		V_0 = L_4;
		RuntimeObject* L_5 = __this->____comparer;
		V_1 = L_5;
		RuntimeObject* L_6 = V_1;
		if (!L_6)
		{
			goto IL_0046;
		}
	}
	{
		RuntimeObject* L_7 = V_1;
		ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A L_8 = ___0_key;
		int32_t L_9;
		L_9 = InterfaceFuncInvoker1< int32_t, ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A >::Invoke(1, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 35), L_7, L_8);
		G_B7_0 = L_9;
		goto IL_0053;
	}

IL_0046:
	{
		int32_t L_10;
		L_10 = ValueTuple_2_GetHashCode_mF359FEBDF1FA01E57B2160C5F106BFC25DAC0404((&___0_key), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 39));
		G_B7_0 = L_10;
	}

IL_0053:
	{
		V_2 = ((int32_t)(G_B7_0&((int32_t)2147483647LL)));
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____buckets;
		int32_t L_12 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = __this->____buckets;
		int32_t L_14 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_13)->max_length),NULL));
		V_4 = ((L_11)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)(L_12%L_14)))));
		int32_t* L_15 = V_4;
		int32_t L_16 = *(L_15);
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_16, 1));
		RuntimeObject* L_17 = V_1;
		if (L_17)
		{
			goto IL_0187;
		}
	}
	{
		il2cpp_codegen_initobj((&V_11), sizeof(ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A));
	}

IL_0091:
	{
		int32_t L_19 = V_5;
		EntryU5BU5D_tD168B9758081967AE421A2B6D72D8EBDC95FC1E0* L_20 = V_0;
		int32_t L_21 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_20)->max_length),NULL));
		if ((!(((uint32_t)L_19) < ((uint32_t)L_21))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_tD168B9758081967AE421A2B6D72D8EBDC95FC1E0* L_22 = V_0;
		int32_t L_23 = V_5;
		int32_t L_24 = ((L_22)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_23)))->___hashCode;
		int32_t L_25 = V_2;
		if ((!(((uint32_t)L_24) == ((uint32_t)L_25))))
		{
			goto IL_00ea;
		}
	}
	{
		EqualityComparer_1_t4515F567FF8CA58A31FECE4C986C6950AAF8A2CB* L_26;
		L_26 = EqualityComparer_1_get_Default_mF252A6DD8B0E68A7EC7F6356C3007FBCDC35877D_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2));
		EntryU5BU5D_tD168B9758081967AE421A2B6D72D8EBDC95FC1E0* L_27 = V_0;
		int32_t L_28 = V_5;
		ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A L_29 = ((L_27)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_28)))->___key;
		ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A L_30 = ___0_key;
		bool L_31;
		L_31 = VirtualFuncInvoker2< bool, ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A, ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A >::Invoke(8, L_26, L_29, L_30);
		if (!L_31)
		{
			goto IL_00ea;
		}
	}
	{
		uint8_t L_32 = ___2_behavior;
		if ((!(((uint32_t)L_32) == ((uint32_t)1))))
		{
			goto IL_00d9;
		}
	}
	{
		EntryU5BU5D_tD168B9758081967AE421A2B6D72D8EBDC95FC1E0* L_33 = V_0;
		int32_t L_34 = V_5;
		Il2CppSharedGenericObject* L_35 = ___1_value;
		((L_33)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_34)))->___value = L_35;
		Il2CppCodeGenWriteBarrier((void**)(&((L_33)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_34)))->___value), (void*)L_35);
		return (bool)1;
	}

IL_00d9:
	{
		uint8_t L_36 = ___2_behavior;
		if ((!(((uint32_t)L_36) == ((uint32_t)2))))
		{
			goto IL_00e8;
		}
	}
	{
		ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A L_37 = ___0_key;
		ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A L_38 = L_37;
		RuntimeObject* L_39 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 10), &L_38);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_39, NULL);
	}

IL_00e8:
	{
		return (bool)0;
	}

IL_00ea:
	{
		EntryU5BU5D_tD168B9758081967AE421A2B6D72D8EBDC95FC1E0* L_40 = V_0;
		int32_t L_41 = V_5;
		int32_t L_42 = ((L_40)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_41)))->___next;
		V_5 = L_42;
		int32_t L_43 = V_3;
		EntryU5BU5D_tD168B9758081967AE421A2B6D72D8EBDC95FC1E0* L_44 = V_0;
		int32_t L_45 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_44)->max_length),NULL));
		if ((((int32_t)L_43) < ((int32_t)L_45)))
		{
			goto IL_0104;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_0104:
	{
		int32_t L_46 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_46, 1));
		goto IL_0091;
	}

IL_0187:
	{
		int32_t L_47 = V_5;
		EntryU5BU5D_tD168B9758081967AE421A2B6D72D8EBDC95FC1E0* L_48 = V_0;
		int32_t L_49 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_48)->max_length),NULL));
		if ((!(((uint32_t)L_47) < ((uint32_t)L_49))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_tD168B9758081967AE421A2B6D72D8EBDC95FC1E0* L_50 = V_0;
		int32_t L_51 = V_5;
		int32_t L_52 = ((L_50)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_51)))->___hashCode;
		int32_t L_53 = V_2;
		if ((!(((uint32_t)L_52) == ((uint32_t)L_53))))
		{
			goto IL_01d9;
		}
	}
	{
		RuntimeObject* L_54 = V_1;
		EntryU5BU5D_tD168B9758081967AE421A2B6D72D8EBDC95FC1E0* L_55 = V_0;
		int32_t L_56 = V_5;
		ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A L_57 = ((L_55)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_56)))->___key;
		ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A L_58 = ___0_key;
		bool L_59;
		L_59 = InterfaceFuncInvoker2< bool, ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A, ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 35), L_54, L_57, L_58);
		if (!L_59)
		{
			goto IL_01d9;
		}
	}
	{
		uint8_t L_60 = ___2_behavior;
		if ((!(((uint32_t)L_60) == ((uint32_t)1))))
		{
			goto IL_01c8;
		}
	}
	{
		EntryU5BU5D_tD168B9758081967AE421A2B6D72D8EBDC95FC1E0* L_61 = V_0;
		int32_t L_62 = V_5;
		Il2CppSharedGenericObject* L_63 = ___1_value;
		((L_61)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_62)))->___value = L_63;
		Il2CppCodeGenWriteBarrier((void**)(&((L_61)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_62)))->___value), (void*)L_63);
		return (bool)1;
	}

IL_01c8:
	{
		uint8_t L_64 = ___2_behavior;
		if ((!(((uint32_t)L_64) == ((uint32_t)2))))
		{
			goto IL_01d7;
		}
	}
	{
		ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A L_65 = ___0_key;
		ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A L_66 = L_65;
		RuntimeObject* L_67 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 10), &L_66);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_67, NULL);
	}

IL_01d7:
	{
		return (bool)0;
	}

IL_01d9:
	{
		EntryU5BU5D_tD168B9758081967AE421A2B6D72D8EBDC95FC1E0* L_68 = V_0;
		int32_t L_69 = V_5;
		int32_t L_70 = ((L_68)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_69)))->___next;
		V_5 = L_70;
		int32_t L_71 = V_3;
		EntryU5BU5D_tD168B9758081967AE421A2B6D72D8EBDC95FC1E0* L_72 = V_0;
		int32_t L_73 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_72)->max_length),NULL));
		if ((((int32_t)L_71) < ((int32_t)L_73)))
		{
			goto IL_01f3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_01f3:
	{
		int32_t L_74 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_74, 1));
		goto IL_0187;
	}

IL_01f9:
	{
		V_6 = (bool)0;
		V_7 = (bool)0;
		int32_t L_75 = __this->____freeCount;
		if ((((int32_t)L_75) <= ((int32_t)0)))
		{
			goto IL_0223;
		}
	}
	{
		int32_t L_76 = __this->____freeList;
		V_8 = L_76;
		V_7 = (bool)1;
		int32_t L_77 = __this->____freeCount;
		__this->____freeCount = ((int32_t)il2cpp_codegen_subtract(L_77, 1));
		goto IL_0250;
	}

IL_0223:
	{
		int32_t L_78 = __this->____count;
		V_13 = L_78;
		int32_t L_79 = V_13;
		EntryU5BU5D_tD168B9758081967AE421A2B6D72D8EBDC95FC1E0* L_80 = V_0;
		int32_t L_81 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_80)->max_length),NULL));
		if ((!(((uint32_t)L_79) == ((uint32_t)L_81))))
		{
			goto IL_023b;
		}
	}
	{
		Dictionary_2_Resize_m2B49E5B27DE63B7B42984CEC07EAE9D3119B80F7(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 44));
		V_6 = (bool)1;
	}

IL_023b:
	{
		int32_t L_82 = V_13;
		V_8 = L_82;
		int32_t L_83 = V_13;
		__this->____count = ((int32_t)il2cpp_codegen_add(L_83, 1));
		EntryU5BU5D_tD168B9758081967AE421A2B6D72D8EBDC95FC1E0* L_84 = __this->____entries;
		V_0 = L_84;
	}

IL_0250:
	{
		bool L_85 = V_6;
		if (L_85)
		{
			goto IL_0258;
		}
	}
	{
		int32_t* L_86 = V_4;
		G_B51_0 = L_86;
		goto IL_026d;
	}

IL_0258:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_87 = __this->____buckets;
		int32_t L_88 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_89 = __this->____buckets;
		int32_t L_90 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_89)->max_length),NULL));
		G_B51_0 = ((L_87)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)(L_88%L_90)))));
	}

IL_026d:
	{
		V_9 = G_B51_0;
		EntryU5BU5D_tD168B9758081967AE421A2B6D72D8EBDC95FC1E0* L_91 = V_0;
		int32_t L_92 = V_8;
		V_10 = ((L_91)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_92)));
		bool L_93 = V_7;
		if (!L_93)
		{
			goto IL_028a;
		}
	}
	{
		Entry_t833BE0585D8B6A240162BBCD9DE7A05889C81254* L_94 = V_10;
		int32_t L_95 = L_94->___next;
		__this->____freeList = L_95;
	}

IL_028a:
	{
		Entry_t833BE0585D8B6A240162BBCD9DE7A05889C81254* L_96 = V_10;
		int32_t L_97 = V_2;
		L_96->___hashCode = L_97;
		Entry_t833BE0585D8B6A240162BBCD9DE7A05889C81254* L_98 = V_10;
		int32_t* L_99 = V_9;
		int32_t L_100 = *(L_99);
		L_98->___next = ((int32_t)il2cpp_codegen_subtract(L_100, 1));
		Entry_t833BE0585D8B6A240162BBCD9DE7A05889C81254* L_101 = V_10;
		ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A L_102 = ___0_key;
		L_101->___key = L_102;
		Il2CppCodeGenWriteBarrier((void**)&(((&L_101->___key))->___Item1), (void*)NULL);
		Entry_t833BE0585D8B6A240162BBCD9DE7A05889C81254* L_103 = V_10;
		Il2CppSharedGenericObject* L_104 = ___1_value;
		L_103->___value = L_104;
		Il2CppCodeGenWriteBarrier((void**)(&L_103->___value), (void*)L_104);
		int32_t* L_105 = V_9;
		int32_t L_106 = V_8;
		*(L_105) = ((int32_t)il2cpp_codegen_add(L_106, 1));
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_OnDeserialization_mA752F2F2B61278E1E74F701743FB807C3966CAB3_gshared (Dictionary_2_tAC56BFFAB0D6C547AD119E1707252267F9C0C49A* __this, RuntimeObject* ___0_sender, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	KeyValuePair_2U5BU5D_t9F59B28C21BBB1C41719D5BDFC79702EFA03FC3A* V_3 = NULL;
	int32_t V_4 = 0;
	{
		CHECKED_LOCAL_INIT(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit,(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
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
		int32_t L_4;
		L_4 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_3, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, NULL);
		V_1 = L_4;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_5 = V_0;
		int32_t L_6;
		L_6 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_5, _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69, NULL);
		V_2 = L_6;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_7 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 34)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		RuntimeObject* L_10;
		L_10 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_7, _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9, L_9, NULL);
		__this->____comparer = ((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 35)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 35))));
		int32_t L_11 = V_2;
		if (!L_11)
		{
			goto IL_00c9;
		}
	}
	{
		int32_t L_12 = V_2;
		int32_t L_13;
		L_13 = Dictionary_2_Initialize_mD6E490F5E2D02CB8B433925CF5DAE535CBA6F8CF(__this, L_12, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 1));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_14 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 38)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		RuntimeObject* L_17;
		L_17 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_14, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, L_16, NULL);
		V_3 = ((KeyValuePair_2U5BU5D_t9F59B28C21BBB1C41719D5BDFC79702EFA03FC3A*)CastclassSealed((RuntimeObject*)L_17, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 36)));
		KeyValuePair_2U5BU5D_t9F59B28C21BBB1C41719D5BDFC79702EFA03FC3A* L_18 = V_3;
		if (L_18)
		{
			goto IL_007a;
		}
	}
	{
		ThrowHelper_ThrowSerializationException_m03BE2B48CD3617C32FBCEE16030F7C5563E04E16(((int32_t)16), NULL);
	}

IL_007a:
	{
		V_4 = 0;
		goto IL_00c0;
	}

IL_007f:
	{
		KeyValuePair_2U5BU5D_t9F59B28C21BBB1C41719D5BDFC79702EFA03FC3A* L_19 = V_3;
		int32_t L_20 = V_4;
		ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A L_21;
		L_21 = KeyValuePair_2_get_Key_mD0027E57B606342804BAAEE3B37C9C7FC77D90E3_inline(((L_19)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_20))), NULL);
		goto IL_009a;
	}

IL_009a:
	{
		KeyValuePair_2U5BU5D_t9F59B28C21BBB1C41719D5BDFC79702EFA03FC3A* L_22 = V_3;
		int32_t L_23 = V_4;
		ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A L_24;
		L_24 = KeyValuePair_2_get_Key_mD0027E57B606342804BAAEE3B37C9C7FC77D90E3_inline(((L_22)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_23))), NULL);
		KeyValuePair_2U5BU5D_t9F59B28C21BBB1C41719D5BDFC79702EFA03FC3A* L_25 = V_3;
		int32_t L_26 = V_4;
		Il2CppSharedGenericObject* L_27;
		L_27 = KeyValuePair_2_get_Value_m1B98DA271855EDA63BE7803194E15F9A7CEA3D25_inline(((L_25)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_26))), NULL);
		Dictionary_2_Add_mB472F849E1EC334185C8660C50A557237F0BE164(__this, L_24, L_27, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14));
		int32_t L_28 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_00c0:
	{
		int32_t L_29 = V_4;
		KeyValuePair_2U5BU5D_t9F59B28C21BBB1C41719D5BDFC79702EFA03FC3A* L_30 = V_3;
		int32_t L_31 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_30)->max_length),NULL));
		if ((((int32_t)L_29) < ((int32_t)L_31)))
		{
			goto IL_007f;
		}
	}
	{
		goto IL_00d0;
	}

IL_00c9:
	{
		__this->____buckets = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
	}

IL_00d0:
	{
		int32_t L_32 = V_1;
		__this->____version = L_32;
		CHECKED_LOCAL_INIT(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit,(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_33;
		L_33 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		bool L_34;
		L_34 = ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E(L_33, (RuntimeObject*)__this, ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m2B49E5B27DE63B7B42984CEC07EAE9D3119B80F7_gshared (Dictionary_2_tAC56BFFAB0D6C547AD119E1707252267F9C0C49A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit);
	{
		int32_t L_0 = __this->____count;
		CHECKED_LOCAL_INIT(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit,(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_1;
		L_1 = HashHelpers_ExpandPrime_m9A35EC171AA0EA16F7C9F71EE6FAD5A82565ADB9(L_0, NULL);
		Dictionary_2_Resize_m7D9EC0F043E0B9FAB07F7AE3EA84667BFA73B967(__this, L_1, (bool)0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 45));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m7D9EC0F043E0B9FAB07F7AE3EA84667BFA73B967_gshared (Dictionary_2_tAC56BFFAB0D6C547AD119E1707252267F9C0C49A* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	EntryU5BU5D_tD168B9758081967AE421A2B6D72D8EBDC95FC1E0* V_1 = NULL;
	int32_t V_2 = 0;
	ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		int32_t L_0 = ___0_newSize;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = ___0_newSize;
		EntryU5BU5D_tD168B9758081967AE421A2B6D72D8EBDC95FC1E0* L_3 = (EntryU5BU5D_tD168B9758081967AE421A2B6D72D8EBDC95FC1E0*)(EntryU5BU5D_tD168B9758081967AE421A2B6D72D8EBDC95FC1E0*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 43), (uint32_t)L_2);
		V_1 = L_3;
		int32_t L_4 = __this->____count;
		V_2 = L_4;
		EntryU5BU5D_tD168B9758081967AE421A2B6D72D8EBDC95FC1E0* L_5 = __this->____entries;
		EntryU5BU5D_tD168B9758081967AE421A2B6D72D8EBDC95FC1E0* L_6 = V_1;
		int32_t L_7 = V_2;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, 0, (RuntimeArray*)L_6, 0, L_7, NULL);
		il2cpp_codegen_initobj((&V_3), sizeof(ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A));
		ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A L_8 = V_3;
		bool L_9 = ___1_forceNewHashCodes;
		if (!((int32_t)((int32_t)false&(int32_t)L_9)))
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
		EntryU5BU5D_tD168B9758081967AE421A2B6D72D8EBDC95FC1E0* L_10 = V_1;
		int32_t L_11 = V_4;
		int32_t L_12 = ((L_10)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_11)))->___hashCode;
		if ((((int32_t)L_12) < ((int32_t)0)))
		{
			goto IL_0079;
		}
	}
	{
		EntryU5BU5D_tD168B9758081967AE421A2B6D72D8EBDC95FC1E0* L_13 = V_1;
		int32_t L_14 = V_4;
		EntryU5BU5D_tD168B9758081967AE421A2B6D72D8EBDC95FC1E0* L_15 = V_1;
		int32_t L_16 = V_4;
		ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A* L_17 = (ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A*)(&((L_15)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_16)))->___key);
		int32_t L_18;
		L_18 = ValueTuple_2_GetHashCode_mF359FEBDF1FA01E57B2160C5F106BFC25DAC0404(L_17, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 39));
		((L_13)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_14)))->___hashCode = ((int32_t)(L_18&((int32_t)2147483647LL)));
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
		EntryU5BU5D_tD168B9758081967AE421A2B6D72D8EBDC95FC1E0* L_22 = V_1;
		int32_t L_23 = V_5;
		int32_t L_24 = ((L_22)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_23)))->___hashCode;
		if ((((int32_t)L_24) < ((int32_t)0)))
		{
			goto IL_00c5;
		}
	}
	{
		EntryU5BU5D_tD168B9758081967AE421A2B6D72D8EBDC95FC1E0* L_25 = V_1;
		int32_t L_26 = V_5;
		int32_t L_27 = ((L_25)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_26)))->___hashCode;
		int32_t L_28 = ___0_newSize;
		V_6 = ((int32_t)(L_27%L_28));
		EntryU5BU5D_tD168B9758081967AE421A2B6D72D8EBDC95FC1E0* L_29 = V_1;
		int32_t L_30 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = V_0;
		int32_t L_32 = V_6;
		int32_t L_33 = L_32;
		int32_t L_34 = (L_31)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_33));
		((L_29)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_30)))->___next = ((int32_t)il2cpp_codegen_subtract(L_34, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_35 = V_0;
		int32_t L_36 = V_6;
		int32_t L_37 = V_5;
		(L_35)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_36), (int32_t)((int32_t)il2cpp_codegen_add(L_37, 1)));
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
		__this->____buckets = L_41;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_41);
		EntryU5BU5D_tD168B9758081967AE421A2B6D72D8EBDC95FC1E0* L_42 = V_1;
		__this->____entries = L_42;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries), (void*)L_42);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m86A5B73912916A5825210A61600309B0CEBE7022_gshared (Dictionary_2_tAC56BFFAB0D6C547AD119E1707252267F9C0C49A* __this, ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Entry_t833BE0585D8B6A240162BBCD9DE7A05889C81254* V_4 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	RuntimeObject* G_B10_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	bool G_B11_0 = false;
	{
		goto IL_000e;
	}

IL_000e:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		if (!L_1)
		{
			goto IL_0149;
		}
	}
	{
		RuntimeObject* L_2 = __this->____comparer;
		RuntimeObject* L_3 = L_2;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_0032;
		}
		G_B4_0 = L_3;
	}
	{
		int32_t L_4;
		L_4 = ValueTuple_2_GetHashCode_mF359FEBDF1FA01E57B2160C5F106BFC25DAC0404((&___0_key), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 39));
		G_B6_0 = L_4;
		goto IL_0038;
	}

IL_0032:
	{
		ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A L_5 = ___0_key;
		int32_t L_6;
		L_6 = InterfaceFuncInvoker1< int32_t, ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A >::Invoke(1, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 35), G_B5_0, L_5);
		G_B6_0 = L_6;
	}

IL_0038:
	{
		V_0 = ((int32_t)(G_B6_0&((int32_t)2147483647LL)));
		int32_t L_7 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = __this->____buckets;
		int32_t L_9 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_8)->max_length),NULL));
		V_1 = ((int32_t)(L_7%L_9));
		V_2 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = __this->____buckets;
		int32_t L_11 = V_1;
		int32_t L_12 = L_11;
		int32_t L_13 = (L_10)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_12));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_13, 1));
		goto IL_0142;
	}

IL_005c:
	{
		EntryU5BU5D_tD168B9758081967AE421A2B6D72D8EBDC95FC1E0* L_14 = __this->____entries;
		int32_t L_15 = V_3;
		V_4 = ((L_14)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_15)));
		Entry_t833BE0585D8B6A240162BBCD9DE7A05889C81254* L_16 = V_4;
		int32_t L_17 = L_16->___hashCode;
		int32_t L_18 = V_0;
		if ((!(((uint32_t)L_17) == ((uint32_t)L_18))))
		{
			goto IL_0138;
		}
	}
	{
		RuntimeObject* L_19 = __this->____comparer;
		RuntimeObject* L_20 = L_19;
		if (L_20)
		{
			G_B10_0 = L_20;
			goto IL_0095;
		}
		G_B9_0 = L_20;
	}
	{
		EqualityComparer_1_t4515F567FF8CA58A31FECE4C986C6950AAF8A2CB* L_21;
		L_21 = EqualityComparer_1_get_Default_mF252A6DD8B0E68A7EC7F6356C3007FBCDC35877D_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2));
		Entry_t833BE0585D8B6A240162BBCD9DE7A05889C81254* L_22 = V_4;
		ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A L_23 = L_22->___key;
		ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A L_24 = ___0_key;
		bool L_25;
		L_25 = VirtualFuncInvoker2< bool, ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A, ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A >::Invoke(8, L_21, L_23, L_24);
		G_B11_0 = L_25;
		goto IL_00a2;
	}

IL_0095:
	{
		Entry_t833BE0585D8B6A240162BBCD9DE7A05889C81254* L_26 = V_4;
		ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A L_27 = L_26->___key;
		ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A L_28 = ___0_key;
		bool L_29;
		L_29 = InterfaceFuncInvoker2< bool, ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A, ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 35), G_B10_0, L_27, L_28);
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
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = __this->____buckets;
		int32_t L_32 = V_1;
		Entry_t833BE0585D8B6A240162BBCD9DE7A05889C81254* L_33 = V_4;
		int32_t L_34 = L_33->___next;
		(L_31)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_32), (int32_t)((int32_t)il2cpp_codegen_add(L_34, 1)));
		goto IL_00d6;
	}

IL_00be:
	{
		EntryU5BU5D_tD168B9758081967AE421A2B6D72D8EBDC95FC1E0* L_35 = __this->____entries;
		int32_t L_36 = V_2;
		Entry_t833BE0585D8B6A240162BBCD9DE7A05889C81254* L_37 = V_4;
		int32_t L_38 = L_37->___next;
		((L_35)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_36)))->___next = L_38;
	}

IL_00d6:
	{
		Entry_t833BE0585D8B6A240162BBCD9DE7A05889C81254* L_39 = V_4;
		L_39->___hashCode = (-1);
		Entry_t833BE0585D8B6A240162BBCD9DE7A05889C81254* L_40 = V_4;
		int32_t L_41 = __this->____freeList;
		L_40->___next = L_41;
	}
	{
		Entry_t833BE0585D8B6A240162BBCD9DE7A05889C81254* L_42 = V_4;
		ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A* L_43 = (ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A*)(&L_42->___key);
		il2cpp_codegen_initobj(L_43, sizeof(ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A));
	}

IL_00ff:
	{
	}
	{
		Entry_t833BE0585D8B6A240162BBCD9DE7A05889C81254* L_44 = V_4;
		Il2CppSharedGenericObject** L_45 = (Il2CppSharedGenericObject**)(&L_44->___value);
		il2cpp_codegen_initobj(L_45, sizeof(Il2CppSharedGenericObject*));
	}

IL_0113:
	{
		int32_t L_46 = V_3;
		__this->____freeList = L_46;
		int32_t L_47 = __this->____freeCount;
		__this->____freeCount = ((int32_t)il2cpp_codegen_add(L_47, 1));
		int32_t L_48 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_48, 1));
		return (bool)1;
	}

IL_0138:
	{
		int32_t L_49 = V_3;
		V_2 = L_49;
		Entry_t833BE0585D8B6A240162BBCD9DE7A05889C81254* L_50 = V_4;
		int32_t L_51 = L_50->___next;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m2719CA011E1E8F2CBB92D0BE553FCE6970E9E63B_gshared (Dictionary_2_tAC56BFFAB0D6C547AD119E1707252267F9C0C49A* __this, ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A ___0_key, Il2CppSharedGenericObject** ___1_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Entry_t833BE0585D8B6A240162BBCD9DE7A05889C81254* V_4 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	RuntimeObject* G_B10_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	bool G_B11_0 = false;
	{
		goto IL_000e;
	}

IL_000e:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		if (!L_1)
		{
			goto IL_0156;
		}
	}
	{
		RuntimeObject* L_2 = __this->____comparer;
		RuntimeObject* L_3 = L_2;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_0032;
		}
		G_B4_0 = L_3;
	}
	{
		int32_t L_4;
		L_4 = ValueTuple_2_GetHashCode_mF359FEBDF1FA01E57B2160C5F106BFC25DAC0404((&___0_key), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 39));
		G_B6_0 = L_4;
		goto IL_0038;
	}

IL_0032:
	{
		ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A L_5 = ___0_key;
		int32_t L_6;
		L_6 = InterfaceFuncInvoker1< int32_t, ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A >::Invoke(1, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 35), G_B5_0, L_5);
		G_B6_0 = L_6;
	}

IL_0038:
	{
		V_0 = ((int32_t)(G_B6_0&((int32_t)2147483647LL)));
		int32_t L_7 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = __this->____buckets;
		int32_t L_9 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_8)->max_length),NULL));
		V_1 = ((int32_t)(L_7%L_9));
		V_2 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = __this->____buckets;
		int32_t L_11 = V_1;
		int32_t L_12 = L_11;
		int32_t L_13 = (L_10)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_12));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_13, 1));
		goto IL_014f;
	}

IL_005c:
	{
		EntryU5BU5D_tD168B9758081967AE421A2B6D72D8EBDC95FC1E0* L_14 = __this->____entries;
		int32_t L_15 = V_3;
		V_4 = ((L_14)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_15)));
		Entry_t833BE0585D8B6A240162BBCD9DE7A05889C81254* L_16 = V_4;
		int32_t L_17 = L_16->___hashCode;
		int32_t L_18 = V_0;
		if ((!(((uint32_t)L_17) == ((uint32_t)L_18))))
		{
			goto IL_0145;
		}
	}
	{
		RuntimeObject* L_19 = __this->____comparer;
		RuntimeObject* L_20 = L_19;
		if (L_20)
		{
			G_B10_0 = L_20;
			goto IL_0095;
		}
		G_B9_0 = L_20;
	}
	{
		EqualityComparer_1_t4515F567FF8CA58A31FECE4C986C6950AAF8A2CB* L_21;
		L_21 = EqualityComparer_1_get_Default_mF252A6DD8B0E68A7EC7F6356C3007FBCDC35877D_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2));
		Entry_t833BE0585D8B6A240162BBCD9DE7A05889C81254* L_22 = V_4;
		ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A L_23 = L_22->___key;
		ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A L_24 = ___0_key;
		bool L_25;
		L_25 = VirtualFuncInvoker2< bool, ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A, ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A >::Invoke(8, L_21, L_23, L_24);
		G_B11_0 = L_25;
		goto IL_00a2;
	}

IL_0095:
	{
		Entry_t833BE0585D8B6A240162BBCD9DE7A05889C81254* L_26 = V_4;
		ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A L_27 = L_26->___key;
		ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A L_28 = ___0_key;
		bool L_29;
		L_29 = InterfaceFuncInvoker2< bool, ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A, ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 35), G_B10_0, L_27, L_28);
		G_B11_0 = L_29;
	}

IL_00a2:
	{
		if (!G_B11_0)
		{
			goto IL_0145;
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
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = __this->____buckets;
		int32_t L_32 = V_1;
		Entry_t833BE0585D8B6A240162BBCD9DE7A05889C81254* L_33 = V_4;
		int32_t L_34 = L_33->___next;
		(L_31)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_32), (int32_t)((int32_t)il2cpp_codegen_add(L_34, 1)));
		goto IL_00d6;
	}

IL_00be:
	{
		EntryU5BU5D_tD168B9758081967AE421A2B6D72D8EBDC95FC1E0* L_35 = __this->____entries;
		int32_t L_36 = V_2;
		Entry_t833BE0585D8B6A240162BBCD9DE7A05889C81254* L_37 = V_4;
		int32_t L_38 = L_37->___next;
		((L_35)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_36)))->___next = L_38;
	}

IL_00d6:
	{
		Il2CppSharedGenericObject** L_39 = ___1_value;
		Entry_t833BE0585D8B6A240162BBCD9DE7A05889C81254* L_40 = V_4;
		Il2CppSharedGenericObject* L_41 = L_40->___value;
		*(Il2CppSharedGenericObject**)L_39 = L_41;
		Il2CppCodeGenWriteBarrier((void**)(Il2CppSharedGenericObject**)L_39, (void*)L_41);
		Entry_t833BE0585D8B6A240162BBCD9DE7A05889C81254* L_42 = V_4;
		L_42->___hashCode = (-1);
		Entry_t833BE0585D8B6A240162BBCD9DE7A05889C81254* L_43 = V_4;
		int32_t L_44 = __this->____freeList;
		L_43->___next = L_44;
	}
	{
		Entry_t833BE0585D8B6A240162BBCD9DE7A05889C81254* L_45 = V_4;
		ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A* L_46 = (ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A*)(&L_45->___key);
		il2cpp_codegen_initobj(L_46, sizeof(ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A));
	}

IL_010c:
	{
	}
	{
		Entry_t833BE0585D8B6A240162BBCD9DE7A05889C81254* L_47 = V_4;
		Il2CppSharedGenericObject** L_48 = (Il2CppSharedGenericObject**)(&L_47->___value);
		il2cpp_codegen_initobj(L_48, sizeof(Il2CppSharedGenericObject*));
	}

IL_0120:
	{
		int32_t L_49 = V_3;
		__this->____freeList = L_49;
		int32_t L_50 = __this->____freeCount;
		__this->____freeCount = ((int32_t)il2cpp_codegen_add(L_50, 1));
		int32_t L_51 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_51, 1));
		return (bool)1;
	}

IL_0145:
	{
		int32_t L_52 = V_3;
		V_2 = L_52;
		Entry_t833BE0585D8B6A240162BBCD9DE7A05889C81254* L_53 = V_4;
		int32_t L_54 = L_53->___next;
		V_3 = L_54;
	}

IL_014f:
	{
		int32_t L_55 = V_3;
		if ((((int32_t)L_55) >= ((int32_t)0)))
		{
			goto IL_005c;
		}
	}

IL_0156:
	{
		Il2CppSharedGenericObject** L_56 = ___1_value;
		il2cpp_codegen_initobj(L_56, sizeof(Il2CppSharedGenericObject*));
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_mDBE5311D34FDF95AF0D6ED8F04E8D7CFE23B6D23_gshared (Dictionary_2_tAC56BFFAB0D6C547AD119E1707252267F9C0C49A* __this, ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A ___0_key, Il2CppSharedGenericObject** ___1_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_mF40EED5EF900EB145AFD21B959058FC4F3CFD3C7(__this, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 26));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0025;
		}
	}
	{
		Il2CppSharedGenericObject** L_3 = ___1_value;
		EntryU5BU5D_tD168B9758081967AE421A2B6D72D8EBDC95FC1E0* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		Il2CppSharedGenericObject* L_6 = ((L_4)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		*(Il2CppSharedGenericObject**)L_3 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(Il2CppSharedGenericObject**)L_3, (void*)L_6);
		return (bool)1;
	}

IL_0025:
	{
		Il2CppSharedGenericObject** L_7 = ___1_value;
		il2cpp_codegen_initobj(L_7, sizeof(Il2CppSharedGenericObject*));
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryAdd_m401A4F54A243ABD0325F58FAC4555131C960419C_gshared (Dictionary_2_tAC56BFFAB0D6C547AD119E1707252267F9C0C49A* __this, ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A ___0_key, Il2CppSharedGenericObject* ___1_value, const RuntimeMethod* method) 
{
	{
		ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A L_0 = ___0_key;
		Il2CppSharedGenericObject* L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_m215840BF1C032E1A9D5056DB815A0F7E761F38FC(__this, L_0, L_1, 0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 27));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m079F564A61DDEE2C2D4E633C8B7F2D9D51E20606_gshared (Dictionary_2_tAC56BFFAB0D6C547AD119E1707252267F9C0C49A* __this, KeyValuePair_2U5BU5D_t9F59B28C21BBB1C41719D5BDFC79702EFA03FC3A* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2U5BU5D_t9F59B28C21BBB1C41719D5BDFC79702EFA03FC3A* L_0 = ___0_array;
		int32_t L_1 = ___1_index;
		Dictionary_2_CopyTo_mD9B70A6E4EDB4E0CAB6CD3A7C94AB74BEF08CF66(__this, L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_ICollection_CopyTo_mB8CADFD47399FA30DB86B69EF77618BB9E7206F5_gshared (Dictionary_2_tAC56BFFAB0D6C547AD119E1707252267F9C0C49A* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_t9F59B28C21BBB1C41719D5BDFC79702EFA03FC3A* V_0 = NULL;
	DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* V_1 = NULL;
	EntryU5BU5D_tD168B9758081967AE421A2B6D72D8EBDC95FC1E0* V_2 = NULL;
	int32_t V_3 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_4 = NULL;
	int32_t V_5 = 0;
	EntryU5BU5D_tD168B9758081967AE421A2B6D72D8EBDC95FC1E0* V_6 = NULL;
	int32_t V_7 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		int32_t L_2;
		L_2 = il2cpp_codegen_array_get_rank(L_1);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		RuntimeArray* L_6 = ___0_array;
		int32_t L_7;
		L_7 = il2cpp_codegen_array_get_length(L_6);
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
		RuntimeArray* L_8 = ___0_array;
		int32_t L_9;
		L_9 = il2cpp_codegen_array_get_length(L_8);
		int32_t L_10 = ___1_index;
		int32_t L_11;
		L_11 = Dictionary_2_get_Count_m889AEFA656A4A6AB38DC123246E8BEC33647F2BB(__this, NULL);
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_9, L_10))) >= ((int32_t)L_11)))
		{
			goto IL_004b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(5, NULL);
	}

IL_004b:
	{
		RuntimeArray* L_12 = ___0_array;
		V_0 = ((KeyValuePair_2U5BU5D_t9F59B28C21BBB1C41719D5BDFC79702EFA03FC3A*)IsInstSealed((RuntimeObject*)L_12, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 36)));
		KeyValuePair_2U5BU5D_t9F59B28C21BBB1C41719D5BDFC79702EFA03FC3A* L_13 = V_0;
		if (!L_13)
		{
			goto IL_005e;
		}
	}
	{
		KeyValuePair_2U5BU5D_t9F59B28C21BBB1C41719D5BDFC79702EFA03FC3A* L_14 = V_0;
		int32_t L_15 = ___1_index;
		Dictionary_2_CopyTo_mD9B70A6E4EDB4E0CAB6CD3A7C94AB74BEF08CF66(__this, L_14, L_15, NULL);
		return;
	}

IL_005e:
	{
		RuntimeArray* L_16 = ___0_array;
		V_1 = ((DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533*)IsInstSealed((RuntimeObject*)L_16, DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var));
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_17 = V_1;
		if (!L_17)
		{
			goto IL_00c3;
		}
	}
	{
		EntryU5BU5D_tD168B9758081967AE421A2B6D72D8EBDC95FC1E0* L_18 = __this->____entries;
		V_2 = L_18;
		V_3 = 0;
		goto IL_00b9;
	}

IL_0073:
	{
		EntryU5BU5D_tD168B9758081967AE421A2B6D72D8EBDC95FC1E0* L_19 = V_2;
		int32_t L_20 = V_3;
		int32_t L_21 = ((L_19)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_20)))->___hashCode;
		if ((((int32_t)L_21) < ((int32_t)0)))
		{
			goto IL_00b5;
		}
	}
	{
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_22 = V_1;
		int32_t L_23 = ___1_index;
		int32_t L_24 = L_23;
		___1_index = ((int32_t)il2cpp_codegen_add(L_24, 1));
		EntryU5BU5D_tD168B9758081967AE421A2B6D72D8EBDC95FC1E0* L_25 = V_2;
		int32_t L_26 = V_3;
		ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A L_27 = ((L_25)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_26)))->___key;
		ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A L_28 = L_27;
		RuntimeObject* L_29 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 10), &L_28);
		EntryU5BU5D_tD168B9758081967AE421A2B6D72D8EBDC95FC1E0* L_30 = V_2;
		int32_t L_31 = V_3;
		Il2CppSharedGenericObject* L_32 = ((L_30)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_31)))->___value;
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_33;
		memset((&L_33), 0, sizeof(L_33));
		DictionaryEntry__ctor_m2768353E53A75C4860E34B37DAF1342120C5D1EA((&L_33), L_29, (RuntimeObject*)L_32, NULL);
		(L_22)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_24), (DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB)L_33);
	}

IL_00b5:
	{
		int32_t L_34 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_00b9:
	{
		int32_t L_35 = V_3;
		int32_t L_36 = __this->____count;
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
		RuntimeArray* L_37 = ___0_array;
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
	{
		{
			int32_t L_39 = __this->____count;
			V_5 = L_39;
			EntryU5BU5D_tD168B9758081967AE421A2B6D72D8EBDC95FC1E0* L_40 = __this->____entries;
			V_6 = L_40;
			V_7 = 0;
			goto IL_0130_1;
		}

IL_00ea_1:
		{
			EntryU5BU5D_tD168B9758081967AE421A2B6D72D8EBDC95FC1E0* L_41 = V_6;
			int32_t L_42 = V_7;
			int32_t L_43 = ((L_41)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_42)))->___hashCode;
			if ((((int32_t)L_43) < ((int32_t)0)))
			{
				goto IL_012a_1;
			}
		}
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_44 = V_4;
			int32_t L_45 = ___1_index;
			int32_t L_46 = L_45;
			___1_index = ((int32_t)il2cpp_codegen_add(L_46, 1));
			EntryU5BU5D_tD168B9758081967AE421A2B6D72D8EBDC95FC1E0* L_47 = V_6;
			int32_t L_48 = V_7;
			ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A L_49 = ((L_47)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_48)))->___key;
			EntryU5BU5D_tD168B9758081967AE421A2B6D72D8EBDC95FC1E0* L_50 = V_6;
			int32_t L_51 = V_7;
			Il2CppSharedGenericObject* L_52 = ((L_50)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_51)))->___value;
			KeyValuePair_2_t64E764570967C9CF8DB9472130C0647F11D963A2 L_53;
			memset((&L_53), 0, sizeof(L_53));
			KeyValuePair_2__ctor_mD0CA78640E4E9AEDF3F7B13285742812AD9D3F93((&L_53), L_49, L_52, NULL);
			KeyValuePair_2_t64E764570967C9CF8DB9472130C0647F11D963A2 L_54 = L_53;
			RuntimeObject* L_55 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 19), &L_54);
			ArrayElementTypeCheck (L_44, L_55);
			(L_44)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_46), (RuntimeObject*)L_55);
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
	}
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
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_59 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0140;
	}

IL_0140:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m661C31792617A73375B49EF25DFAA3CD1997A3CB_gshared (Dictionary_2_tAC56BFFAB0D6C547AD119E1707252267F9C0C49A* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t3C7F7AA223D7FD8BC46DAE355A8719EAB17A9EDF L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m0EF0E488E739D3719F9EB825293E138DA7DF2CA8((&L_0), __this, 2, NULL);
		Enumerator_t3C7F7AA223D7FD8BC46DAE355A8719EAB17A9EDF L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 32), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_EnsureCapacity_m25588CDDB6FCE4088A12E4FA7A48812B8FA21589_gshared (Dictionary_2_tAC56BFFAB0D6C547AD119E1707252267F9C0C49A* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_000b;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97(((int32_t)12), NULL);
	}

IL_000b:
	{
		EntryU5BU5D_tD168B9758081967AE421A2B6D72D8EBDC95FC1E0* L_1 = __this->____entries;
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		EntryU5BU5D_tD168B9758081967AE421A2B6D72D8EBDC95FC1E0* L_2 = __this->____entries;
		int32_t L_3 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_2)->max_length),NULL));
		G_B5_0 = L_3;
		goto IL_001e;
	}

IL_001d:
	{
		G_B5_0 = 0;
	}

IL_001e:
	{
		V_0 = G_B5_0;
		int32_t L_4 = V_0;
		int32_t L_5 = ___0_capacity;
		if ((((int32_t)L_4) < ((int32_t)L_5)))
		{
			goto IL_0025;
		}
	}
	{
		int32_t L_6 = V_0;
		return L_6;
	}

IL_0025:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = __this->____buckets;
		if (L_7)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_8 = ___0_capacity;
		int32_t L_9;
		L_9 = Dictionary_2_Initialize_mD6E490F5E2D02CB8B433925CF5DAE535CBA6F8CF(__this, L_8, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 1));
		return L_9;
	}

IL_0035:
	{
		int32_t L_10 = ___0_capacity;
		CHECKED_LOCAL_INIT(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit,(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_11;
		L_11 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_10, NULL);
		V_1 = L_11;
		int32_t L_12 = V_1;
		Dictionary_2_Resize_m7D9EC0F043E0B9FAB07F7AE3EA84667BFA73B967(__this, L_12, (bool)0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 45));
		int32_t L_13 = V_1;
		return L_13;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_IDictionary_set_Item_m078EF951722EFA64543A568CAEA122EBE0DEE3D7_gshared (Dictionary_2_tAC56BFFAB0D6C547AD119E1707252267F9C0C49A* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(Type_t_StaticInit);
	ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A V_0;
	memset((&V_0), 0, sizeof(V_0));
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___1_value;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisIl2CppSharedGenericObject_mE7A1EEC53480BA1ED6C827938ADAF45B127DD054(L_1, ((int32_t)15), NULL);
	}
	try
	{
		{
			RuntimeObject* L_2 = ___0_key;
			V_0 = ((*(ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 10))));
		}
		try
		{
			ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A L_3 = V_0;
			RuntimeObject* L_4 = ___1_value;
			Dictionary_2_set_Item_m50080FF99F5F609F7C6D4A916D1A4264AB88BCC5(__this, L_3, ((Il2CppSharedGenericObject*)Castclass((RuntimeObject*)L_4, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 49));
			goto IL_003a_1;
		}
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
		{
			InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_5 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
			RuntimeObject* L_6 = ___1_value;
			RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 50)) };
			CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
			Type_t* L_8;
			L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
			ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_6, L_8, NULL);
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_003a_1;
		}

IL_003a_1:
		{
			goto IL_004f;
		}
	}
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
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_9 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_10 = ___0_key;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 51)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		ThrowHelper_ThrowWrongKeyTypeArgumentException_m90E5BCE2CB10EEC16F254C237121C6816C4D6982(L_10, L_12, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_004f;
	}

IL_004f:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_GetEnumerator_m90DAB44691EDFBA25E3E472018B053435DA7FCD0_gshared (Dictionary_2_tAC56BFFAB0D6C547AD119E1707252267F9C0C49A* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t3C7F7AA223D7FD8BC46DAE355A8719EAB17A9EDF L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m0EF0E488E739D3719F9EB825293E138DA7DF2CA8((&L_0), __this, 1, NULL);
		Enumerator_t3C7F7AA223D7FD8BC46DAE355A8719EAB17A9EDF L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 32), &L_1);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mB8D8BC6874246C77DD2E718C14F8DA541996A6DA_gshared (Dictionary_2_tE5B96FEA65A0394692A66749C0DDE9956CF9EC15* __this, const RuntimeMethod* method) 
{
	{
		Dictionary_2__ctor_mBDF56DD80C06454F5D7A4D76C4BE23376680FA51(__this, 0, (RuntimeObject*)NULL, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mC4963AE584684D59C9A7E271D76F685926AD45AA_gshared (Dictionary_2_tE5B96FEA65A0394692A66749C0DDE9956CF9EC15* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_capacity;
		Dictionary_2__ctor_mBDF56DD80C06454F5D7A4D76C4BE23376680FA51(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m933D1F40669EE14631A21676408A8F53D1598898_gshared (Dictionary_2_tE5B96FEA65A0394692A66749C0DDE9956CF9EC15* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_comparer;
		Dictionary_2__ctor_mBDF56DD80C06454F5D7A4D76C4BE23376680FA51(__this, 0, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mBDF56DD80C06454F5D7A4D76C4BE23376680FA51_gshared (Dictionary_2_tE5B96FEA65A0394692A66749C0DDE9956CF9EC15* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0011;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97(((int32_t)12), NULL);
	}

IL_0011:
	{
		int32_t L_1 = ___0_capacity;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_2 = ___0_capacity;
		int32_t L_3;
		L_3 = Dictionary_2_Initialize_mBBF032FDCE3C6D3156FD7E9C03D0FD46F673E1A5(__this, L_2, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 1));
	}

IL_001d:
	{
		RuntimeObject* L_4 = ___1_comparer;
		EqualityComparer_1_t63A37CBBA150A456A5494B585BAAD61AEC84FCC3* L_5;
		L_5 = EqualityComparer_1_get_Default_m16781A8E4EDB2114168E318B51C5081028E57F3D_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2));
		if ((((RuntimeObject*)(RuntimeObject*)L_4) == ((RuntimeObject*)(EqualityComparer_1_t63A37CBBA150A456A5494B585BAAD61AEC84FCC3*)L_5)))
		{
			goto IL_002c;
		}
	}
	{
		RuntimeObject* L_6 = ___1_comparer;
		__this->____comparer = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)L_6);
	}

IL_002c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m02B9B603B4F35ED60B77B8243F50E77DD6843576_gshared (Dictionary_2_tE5B96FEA65A0394692A66749C0DDE9956CF9EC15* __this, RuntimeObject* ___0_dictionary, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_dictionary;
		Dictionary_2__ctor_m615E385F0112B9DEB74B1E828D662E1DE93519AD(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 3));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m615E385F0112B9DEB74B1E828D662E1DE93519AD_gshared (Dictionary_2_tE5B96FEA65A0394692A66749C0DDE9956CF9EC15* __this, RuntimeObject* ___0_dictionary, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	EntryU5BU5D_t3A03E6878DE4EA58BAC9598CD15F49AD1988B351* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	KeyValuePair_2_tCD64FBFD0349B053A7915EB43CFE2E4C123110E3 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Dictionary_2_tE5B96FEA65A0394692A66749C0DDE9956CF9EC15* G_B2_0 = NULL;
	Dictionary_2_tE5B96FEA65A0394692A66749C0DDE9956CF9EC15* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	Dictionary_2_tE5B96FEA65A0394692A66749C0DDE9956CF9EC15* G_B3_1 = NULL;
	{
		RuntimeObject* L_0 = ___0_dictionary;
		if (L_0)
		{
			G_B2_0 = __this;
			goto IL_0007;
		}
		G_B1_0 = __this;
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_000d;
	}

IL_0007:
	{
		RuntimeObject* L_1 = ___0_dictionary;
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 4), (RuntimeObject*)L_1);
		G_B3_0 = L_2;
		G_B3_1 = G_B2_0;
	}

IL_000d:
	{
		RuntimeObject* L_3 = ___1_comparer;
		Dictionary_2__ctor_mBDF56DD80C06454F5D7A4D76C4BE23376680FA51(G_B3_1, G_B3_0, L_3, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0));
		RuntimeObject* L_4 = ___0_dictionary;
		if (L_4)
		{
			goto IL_001c;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(1, NULL);
	}

IL_001c:
	{
		RuntimeObject* L_5 = ___0_dictionary;
		void* L_6 = il2cpp_codegen_object_get_class(L_5);
		bool L_7 = (il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7)) == (L_6);
		if (!L_7)
		{
			goto IL_0080;
		}
	}
	{
		RuntimeObject* L_8 = ___0_dictionary;
		Dictionary_2_tE5B96FEA65A0394692A66749C0DDE9956CF9EC15* L_9 = ((Dictionary_2_tE5B96FEA65A0394692A66749C0DDE9956CF9EC15*)CastclassClass((RuntimeObject*)L_8, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7)));
		int32_t L_10 = L_9->____count;
		V_0 = L_10;
		EntryU5BU5D_t3A03E6878DE4EA58BAC9598CD15F49AD1988B351* L_11 = L_9->____entries;
		V_1 = L_11;
		V_2 = 0;
		goto IL_007b;
	}

IL_004a:
	{
		EntryU5BU5D_t3A03E6878DE4EA58BAC9598CD15F49AD1988B351* L_12 = V_1;
		int32_t L_13 = V_2;
		int32_t L_14 = ((L_12)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_13)))->___hashCode;
		if ((((int32_t)L_14) < ((int32_t)0)))
		{
			goto IL_0077;
		}
	}
	{
		EntryU5BU5D_t3A03E6878DE4EA58BAC9598CD15F49AD1988B351* L_15 = V_1;
		int32_t L_16 = V_2;
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 L_17 = ((L_15)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_16)))->___key;
		EntryU5BU5D_t3A03E6878DE4EA58BAC9598CD15F49AD1988B351* L_18 = V_1;
		int32_t L_19 = V_2;
		Il2CppSharedGenericObject* L_20 = ((L_18)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_19)))->___value;
		Dictionary_2_Add_m659C15ADA813F04A8F4547C6AAF3CCD9E1252110(__this, L_17, L_20, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14));
	}

IL_0077:
	{
		int32_t L_21 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_007b:
	{
		int32_t L_22 = V_2;
		int32_t L_23 = V_0;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_004a;
		}
	}
	{
		return;
	}

IL_0080:
	{
		RuntimeObject* L_24 = ___0_dictionary;
		RuntimeObject* L_25;
		L_25 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 15), (RuntimeObject*)L_24);
		V_3 = L_25;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00af:
			{
				{
					RuntimeObject* L_26 = V_3;
					if (!L_26)
					{
						goto IL_00b8;
					}
				}
				{
					RuntimeObject* L_27 = V_3;
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_27);
				}

IL_00b8:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_00a5_1;
			}

IL_0089_1:
			{
				RuntimeObject* L_28 = V_3;
				KeyValuePair_2_tCD64FBFD0349B053A7915EB43CFE2E4C123110E3 L_29;
				L_29 = InterfaceFuncInvoker0< KeyValuePair_2_tCD64FBFD0349B053A7915EB43CFE2E4C123110E3 >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 17), L_28);
				V_4 = L_29;
				EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 L_30;
				L_30 = KeyValuePair_2_get_Key_m90712219738452E82D01F79E5C5E2AFC458B7F42_inline((&V_4), NULL);
				Il2CppSharedGenericObject* L_31;
				L_31 = KeyValuePair_2_get_Value_m386D7A4C4EC42B076395DF4004EC546AFB963848_inline((&V_4), NULL);
				Dictionary_2_Add_m659C15ADA813F04A8F4547C6AAF3CCD9E1252110(__this, L_30, L_31, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14));
			}

IL_00a5_1:
			{
				RuntimeObject* L_32 = V_3;
				bool L_33;
				L_33 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_32);
				if (L_33)
				{
					goto IL_0089_1;
				}
			}
			{
				goto IL_00b9;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_t57775F7FF92A58C6D31372BA8764C2261A0E892A* Dictionary_2_get_Keys_m3F43BEB79877F6C37E3AEF172EDF40422C8FE7DC_gshared (Dictionary_2_tE5B96FEA65A0394692A66749C0DDE9956CF9EC15* __this, const RuntimeMethod* method) 
{
	{
		KeyCollection_t57775F7FF92A58C6D31372BA8764C2261A0E892A* L_0 = __this->____keys;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		KeyCollection_t57775F7FF92A58C6D31372BA8764C2261A0E892A* L_1 = (KeyCollection_t57775F7FF92A58C6D31372BA8764C2261A0E892A*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 22));
		KeyCollection__ctor_m71463D8FBFEFE9B0436A5D48538E49875957017A(L_1, __this, NULL);
		__this->____keys = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keys), (void*)L_1);
	}

IL_0014:
	{
		KeyCollection_t57775F7FF92A58C6D31372BA8764C2261A0E892A* L_2 = __this->____keys;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_tBFC0E43BC45FCEFBDF4400423106E4A62E2EAE97* Dictionary_2_get_Values_m8C7D1B01E96FF32D5C2669980D05EACDA922A680_gshared (Dictionary_2_tE5B96FEA65A0394692A66749C0DDE9956CF9EC15* __this, const RuntimeMethod* method) 
{
	{
		ValueCollection_tBFC0E43BC45FCEFBDF4400423106E4A62E2EAE97* L_0 = __this->____values;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_tBFC0E43BC45FCEFBDF4400423106E4A62E2EAE97* L_1 = (ValueCollection_tBFC0E43BC45FCEFBDF4400423106E4A62E2EAE97*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 24));
		ValueCollection__ctor_m7A4445D68708C5A9E9C8839D7BF60F6164424DAD(L_1, __this, NULL);
		__this->____values = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_tBFC0E43BC45FCEFBDF4400423106E4A62E2EAE97* L_2 = __this->____values;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* Dictionary_2_get_Item_m7E18F573DC45C9EAF211BDE4D29772552F29E895_gshared (Dictionary_2_tE5B96FEA65A0394692A66749C0DDE9956CF9EC15* __this, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Il2CppSharedGenericObject* V_1 = NULL;
	{
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m1657D17584CCFCD88AD7E5E31C519E86C659D03F(__this, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 26));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_001e;
		}
	}
	{
		EntryU5BU5D_t3A03E6878DE4EA58BAC9598CD15F49AD1988B351* L_3 = __this->____entries;
		int32_t L_4 = V_0;
		Il2CppSharedGenericObject* L_5 = ((L_3)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_4)))->___value;
		return L_5;
	}

IL_001e:
	{
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 L_6 = ___0_key;
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 10), &L_7);
		ThrowHelper_ThrowKeyNotFoundException_m6A17735FA486AD43F2488DE39B755AC60BC99CE7(L_8, NULL);
		il2cpp_codegen_initobj((&V_1), sizeof(Il2CppSharedGenericObject*));
		Il2CppSharedGenericObject* L_9 = V_1;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m95FF2E2086B21F5DBD685F0D4DB10818308B2B4E_gshared (Dictionary_2_tE5B96FEA65A0394692A66749C0DDE9956CF9EC15* __this, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___0_key, Il2CppSharedGenericObject* ___1_value, const RuntimeMethod* method) 
{
	{
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 L_0 = ___0_key;
		Il2CppSharedGenericObject* L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_m7801AB4073E7E59144E031D9980334873CE04671(__this, L_0, L_1, 1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 27));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m659C15ADA813F04A8F4547C6AAF3CCD9E1252110_gshared (Dictionary_2_tE5B96FEA65A0394692A66749C0DDE9956CF9EC15* __this, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___0_key, Il2CppSharedGenericObject* ___1_value, const RuntimeMethod* method) 
{
	{
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 L_0 = ___0_key;
		Il2CppSharedGenericObject* L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_m7801AB4073E7E59144E031D9980334873CE04671(__this, L_0, L_1, 2, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 27));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m5A5700C222153543EE07C48D2C2A8F09DB8D2DBA_gshared (Dictionary_2_tE5B96FEA65A0394692A66749C0DDE9956CF9EC15* __this, KeyValuePair_2_tCD64FBFD0349B053A7915EB43CFE2E4C123110E3 ___0_keyValuePair, const RuntimeMethod* method) 
{
	{
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 L_0;
		L_0 = KeyValuePair_2_get_Key_m90712219738452E82D01F79E5C5E2AFC458B7F42_inline((&___0_keyValuePair), NULL);
		Il2CppSharedGenericObject* L_1;
		L_1 = KeyValuePair_2_get_Value_m386D7A4C4EC42B076395DF4004EC546AFB963848_inline((&___0_keyValuePair), NULL);
		Dictionary_2_Add_m659C15ADA813F04A8F4547C6AAF3CCD9E1252110(__this, L_0, L_1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_mA8EFD9CDB1C10FB4D8E8E07C506C61D31A878E08_gshared (Dictionary_2_tE5B96FEA65A0394692A66749C0DDE9956CF9EC15* __this, KeyValuePair_2_tCD64FBFD0349B053A7915EB43CFE2E4C123110E3 ___0_keyValuePair, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 L_0;
		L_0 = KeyValuePair_2_get_Key_m90712219738452E82D01F79E5C5E2AFC458B7F42_inline((&___0_keyValuePair), NULL);
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m1657D17584CCFCD88AD7E5E31C519E86C659D03F(__this, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 26));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0038;
		}
	}
	{
		EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* L_3;
		L_3 = EqualityComparer_1_get_Default_mB451453B7B5B4B570A9347E090AB0FAC75C0C628_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 28));
		EntryU5BU5D_t3A03E6878DE4EA58BAC9598CD15F49AD1988B351* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		Il2CppSharedGenericObject* L_6 = ((L_4)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		Il2CppSharedGenericObject* L_7;
		L_7 = KeyValuePair_2_get_Value_m386D7A4C4EC42B076395DF4004EC546AFB963848_inline((&___0_keyValuePair), NULL);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, Il2CppSharedGenericObject*, Il2CppSharedGenericObject* >::Invoke(8, L_3, L_6, L_7);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_mFDB59A69B42CDC2052A03371C37E34D1ABEED06A_gshared (Dictionary_2_tE5B96FEA65A0394692A66749C0DDE9956CF9EC15* __this, KeyValuePair_2_tCD64FBFD0349B053A7915EB43CFE2E4C123110E3 ___0_keyValuePair, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 L_0;
		L_0 = KeyValuePair_2_get_Key_m90712219738452E82D01F79E5C5E2AFC458B7F42_inline((&___0_keyValuePair), NULL);
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m1657D17584CCFCD88AD7E5E31C519E86C659D03F(__this, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 26));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0046;
		}
	}
	{
		EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* L_3;
		L_3 = EqualityComparer_1_get_Default_mB451453B7B5B4B570A9347E090AB0FAC75C0C628_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 28));
		EntryU5BU5D_t3A03E6878DE4EA58BAC9598CD15F49AD1988B351* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		Il2CppSharedGenericObject* L_6 = ((L_4)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		Il2CppSharedGenericObject* L_7;
		L_7 = KeyValuePair_2_get_Value_m386D7A4C4EC42B076395DF4004EC546AFB963848_inline((&___0_keyValuePair), NULL);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, Il2CppSharedGenericObject*, Il2CppSharedGenericObject* >::Invoke(8, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0046;
		}
	}
	{
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 L_9;
		L_9 = KeyValuePair_2_get_Key_m90712219738452E82D01F79E5C5E2AFC458B7F42_inline((&___0_keyValuePair), NULL);
		bool L_10;
		L_10 = Dictionary_2_Remove_m648D00C8DA11B66465DDFB68AE55F0E8ABF5BF78(__this, L_9, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 29));
		return (bool)1;
	}

IL_0046:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_mD9630B676E9C067991751D98EB2CF823CEA20AD9_gshared (Dictionary_2_tE5B96FEA65A0394692A66749C0DDE9956CF9EC15* __this, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___0_key, const RuntimeMethod* method) 
{
	{
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m1657D17584CCFCD88AD7E5E31C519E86C659D03F(__this, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 26));
		return (bool)((((int32_t)((((int32_t)L_1) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsValue_m4596703A5EA8E9C0CCB6E046BDBF7228C4C94D73_gshared (Dictionary_2_tE5B96FEA65A0394692A66749C0DDE9956CF9EC15* __this, Il2CppSharedGenericObject* ___0_value, const RuntimeMethod* method) 
{
	EntryU5BU5D_t3A03E6878DE4EA58BAC9598CD15F49AD1988B351* V_0 = NULL;
	int32_t V_1 = 0;
	Il2CppSharedGenericObject* V_2 = NULL;
	int32_t V_3 = 0;
	EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* V_4 = NULL;
	int32_t V_5 = 0;
	{
		EntryU5BU5D_t3A03E6878DE4EA58BAC9598CD15F49AD1988B351* L_0 = __this->____entries;
		V_0 = L_0;
		Il2CppSharedGenericObject* L_1 = ___0_value;
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
		EntryU5BU5D_t3A03E6878DE4EA58BAC9598CD15F49AD1988B351* L_2 = V_0;
		int32_t L_3 = V_1;
		int32_t L_4 = ((L_2)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_3)))->___hashCode;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0037;
		}
	}
	{
		EntryU5BU5D_t3A03E6878DE4EA58BAC9598CD15F49AD1988B351* L_5 = V_0;
		int32_t L_6 = V_1;
		Il2CppSharedGenericObject* L_7 = ((L_5)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_6)))->___value;
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
		int32_t L_10 = __this->____count;
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
		il2cpp_codegen_initobj((&V_2), sizeof(Il2CppSharedGenericObject*));
		Il2CppSharedGenericObject* L_11 = V_2;
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
		EntryU5BU5D_t3A03E6878DE4EA58BAC9598CD15F49AD1988B351* L_12 = V_0;
		int32_t L_13 = V_3;
		int32_t L_14 = ((L_12)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_13)))->___hashCode;
		if ((((int32_t)L_14) < ((int32_t)0)))
		{
			goto IL_0087;
		}
	}
	{
		EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* L_15;
		L_15 = EqualityComparer_1_get_Default_mB451453B7B5B4B570A9347E090AB0FAC75C0C628_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 28));
		EntryU5BU5D_t3A03E6878DE4EA58BAC9598CD15F49AD1988B351* L_16 = V_0;
		int32_t L_17 = V_3;
		Il2CppSharedGenericObject* L_18 = ((L_16)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_17)))->___value;
		Il2CppSharedGenericObject* L_19 = ___0_value;
		bool L_20;
		L_20 = VirtualFuncInvoker2< bool, Il2CppSharedGenericObject*, Il2CppSharedGenericObject* >::Invoke(8, L_15, L_18, L_19);
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
		int32_t L_23 = __this->____count;
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
		EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* L_24;
		L_24 = EqualityComparer_1_get_Default_mB451453B7B5B4B570A9347E090AB0FAC75C0C628_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 28));
		V_4 = L_24;
		V_5 = 0;
		goto IL_00d1;
	}

IL_00a2:
	{
		EntryU5BU5D_t3A03E6878DE4EA58BAC9598CD15F49AD1988B351* L_25 = V_0;
		int32_t L_26 = V_5;
		int32_t L_27 = ((L_25)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_26)))->___hashCode;
		if ((((int32_t)L_27) < ((int32_t)0)))
		{
			goto IL_00cb;
		}
	}
	{
		EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* L_28 = V_4;
		EntryU5BU5D_t3A03E6878DE4EA58BAC9598CD15F49AD1988B351* L_29 = V_0;
		int32_t L_30 = V_5;
		Il2CppSharedGenericObject* L_31 = ((L_29)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_30)))->___value;
		Il2CppSharedGenericObject* L_32 = ___0_value;
		bool L_33;
		L_33 = VirtualFuncInvoker2< bool, Il2CppSharedGenericObject*, Il2CppSharedGenericObject* >::Invoke(8, L_28, L_31, L_32);
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
		int32_t L_36 = __this->____count;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_m95EC5C89E30BCBBA8B195DB471FA154BBCBCC4F6_gshared (Dictionary_2_tE5B96FEA65A0394692A66749C0DDE9956CF9EC15* __this, KeyValuePair_2U5BU5D_t452E832017CA977A0436EAE3C0B660FEFAA9E48C* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	EntryU5BU5D_t3A03E6878DE4EA58BAC9598CD15F49AD1988B351* V_1 = NULL;
	int32_t V_2 = 0;
	{
		KeyValuePair_2U5BU5D_t452E832017CA977A0436EAE3C0B660FEFAA9E48C* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(3, NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_index;
		KeyValuePair_2U5BU5D_t452E832017CA977A0436EAE3C0B660FEFAA9E48C* L_2 = ___0_array;
		int32_t L_3 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_2)->max_length),NULL));
		if ((!(((uint32_t)L_1) > ((uint32_t)L_3))))
		{
			goto IL_0014;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0014:
	{
		KeyValuePair_2U5BU5D_t452E832017CA977A0436EAE3C0B660FEFAA9E48C* L_4 = ___0_array;
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		int32_t L_6 = ___1_index;
		int32_t L_7;
		L_7 = Dictionary_2_get_Count_m7421ED45DE262C02CACC42EA0FE958D84C57B4FB(__this, NULL);
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_5, L_6))) >= ((int32_t)L_7)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(5, NULL);
	}

IL_0027:
	{
		int32_t L_8 = __this->____count;
		V_0 = L_8;
		EntryU5BU5D_t3A03E6878DE4EA58BAC9598CD15F49AD1988B351* L_9 = __this->____entries;
		V_1 = L_9;
		V_2 = 0;
		goto IL_0075;
	}

IL_0039:
	{
		EntryU5BU5D_t3A03E6878DE4EA58BAC9598CD15F49AD1988B351* L_10 = V_1;
		int32_t L_11 = V_2;
		int32_t L_12 = ((L_10)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_11)))->___hashCode;
		if ((((int32_t)L_12) < ((int32_t)0)))
		{
			goto IL_0071;
		}
	}
	{
		KeyValuePair_2U5BU5D_t452E832017CA977A0436EAE3C0B660FEFAA9E48C* L_13 = ___0_array;
		int32_t L_14 = ___1_index;
		int32_t L_15 = L_14;
		___1_index = ((int32_t)il2cpp_codegen_add(L_15, 1));
		EntryU5BU5D_t3A03E6878DE4EA58BAC9598CD15F49AD1988B351* L_16 = V_1;
		int32_t L_17 = V_2;
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 L_18 = ((L_16)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_17)))->___key;
		EntryU5BU5D_t3A03E6878DE4EA58BAC9598CD15F49AD1988B351* L_19 = V_1;
		int32_t L_20 = V_2;
		Il2CppSharedGenericObject* L_21 = ((L_19)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_20)))->___value;
		KeyValuePair_2_tCD64FBFD0349B053A7915EB43CFE2E4C123110E3 L_22;
		memset((&L_22), 0, sizeof(L_22));
		KeyValuePair_2__ctor_mB6121DC610D466BC9BBA557711FBAB073406BF77((&L_22), L_18, L_21, NULL);
		(L_13)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_15), (KeyValuePair_2_tCD64FBFD0349B053A7915EB43CFE2E4C123110E3)L_22);
	}

IL_0071:
	{
		int32_t L_23 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_0075:
	{
		int32_t L_24 = V_2;
		int32_t L_25 = V_0;
		if ((((int32_t)L_24) < ((int32_t)L_25)))
		{
			goto IL_0039;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t4D854DB287531AA401450973A1FE347EA5E3D673 Dictionary_2_GetEnumerator_mD75302DA4A2F6C387C9E8B71247C38911CD233B5_gshared (Dictionary_2_tE5B96FEA65A0394692A66749C0DDE9956CF9EC15* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t4D854DB287531AA401450973A1FE347EA5E3D673 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m6ED4CD5A4B2D5BC48CE5614042545BB304449C0A((&L_0), __this, 2, NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m61771DB8D94F831F108418EDB726D3F0E9A3CBA7_gshared (Dictionary_2_tE5B96FEA65A0394692A66749C0DDE9956CF9EC15* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t4D854DB287531AA401450973A1FE347EA5E3D673 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m6ED4CD5A4B2D5BC48CE5614042545BB304449C0A((&L_0), __this, 2, NULL);
		Enumerator_t4D854DB287531AA401450973A1FE347EA5E3D673 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 32), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_GetObjectData_m5CC046D58153D55129BA389551A8007C8FA1979D_gshared (Dictionary_2_tE5B96FEA65A0394692A66749C0DDE9956CF9EC15* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	KeyValuePair_2U5BU5D_t452E832017CA977A0436EAE3C0B660FEFAA9E48C* V_0 = NULL;
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
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___0_info;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(4, NULL);
	}

IL_0009:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___0_info;
		int32_t L_2 = __this->____version;
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(L_1, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, L_2, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = ___0_info;
		RuntimeObject* L_4 = __this->____comparer;
		RuntimeObject* L_5 = L_4;
		if (L_5)
		{
			G_B4_0 = L_5;
			G_B4_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
			G_B4_2 = L_3;
			goto IL_002f;
		}
		G_B3_0 = L_5;
		G_B3_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
		G_B3_2 = L_3;
	}
	{
		EqualityComparer_1_t63A37CBBA150A456A5494B585BAAD61AEC84FCC3* L_6;
		L_6 = EqualityComparer_1_get_Default_m16781A8E4EDB2114168E318B51C5081028E57F3D_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2));
		G_B4_0 = ((RuntimeObject*)(L_6));
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
	}

IL_002f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 34)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(G_B4_2, G_B4_1, G_B4_0, L_8, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_9 = ___0_info;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = __this->____buckets;
		if (!L_10)
		{
			G_B6_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
			G_B6_1 = L_9;
			goto IL_0056;
		}
		G_B5_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
		G_B5_1 = L_9;
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____buckets;
		int32_t L_12 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_11)->max_length),NULL));
		G_B7_0 = L_12;
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
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(G_B7_2, G_B7_1, G_B7_0, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = __this->____buckets;
		if (!L_13)
		{
			goto IL_008e;
		}
	}
	{
		int32_t L_14;
		L_14 = Dictionary_2_get_Count_m7421ED45DE262C02CACC42EA0FE958D84C57B4FB(__this, NULL);
		KeyValuePair_2U5BU5D_t452E832017CA977A0436EAE3C0B660FEFAA9E48C* L_15 = (KeyValuePair_2U5BU5D_t452E832017CA977A0436EAE3C0B660FEFAA9E48C*)(KeyValuePair_2U5BU5D_t452E832017CA977A0436EAE3C0B660FEFAA9E48C*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 36), (uint32_t)L_14);
		V_0 = L_15;
		KeyValuePair_2U5BU5D_t452E832017CA977A0436EAE3C0B660FEFAA9E48C* L_16 = V_0;
		Dictionary_2_CopyTo_m95EC5C89E30BCBBA8B195DB471FA154BBCBCC4F6(__this, L_16, 0, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_17 = ___0_info;
		KeyValuePair_2U5BU5D_t452E832017CA977A0436EAE3C0B660FEFAA9E48C* L_18 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 38)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(L_17, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, (RuntimeObject*)L_18, L_20, NULL);
	}

IL_008e:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_m1657D17584CCFCD88AD7E5E31C519E86C659D03F_gshared (Dictionary_2_tE5B96FEA65A0394692A66749C0DDE9956CF9EC15* __this, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	EntryU5BU5D_t3A03E6878DE4EA58BAC9598CD15F49AD1988B351* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	int32_t V_5 = 0;
	EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 V_6;
	memset((&V_6), 0, sizeof(V_6));
	EqualityComparer_1_t63A37CBBA150A456A5494B585BAAD61AEC84FCC3* V_7 = NULL;
	int32_t V_8 = 0;
	{
		goto IL_000e;
	}

IL_000e:
	{
		V_0 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		V_1 = L_1;
		EntryU5BU5D_t3A03E6878DE4EA58BAC9598CD15F49AD1988B351* L_2 = __this->____entries;
		V_2 = L_2;
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = V_1;
		if (!L_3)
		{
			goto IL_0175;
		}
	}
	{
		RuntimeObject* L_4 = __this->____comparer;
		V_4 = L_4;
		RuntimeObject* L_5 = V_4;
		if (L_5)
		{
			goto IL_0110;
		}
	}
	{
		int32_t L_6;
		L_6 = EntityId_GetHashCode_m7B7BE3CC221C5EEAB3D2E64BD632F057E7931410((&___0_key), NULL);
		V_5 = ((int32_t)(L_6&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = V_1;
		int32_t L_8 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = V_1;
		int32_t L_10 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_9)->max_length),NULL));
		int32_t L_11 = ((int32_t)(L_8%L_10));
		int32_t L_12 = (L_7)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_11));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
		il2cpp_codegen_initobj((&V_6), sizeof(EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8));
	}

IL_0066:
	{
		int32_t L_14 = V_0;
		EntryU5BU5D_t3A03E6878DE4EA58BAC9598CD15F49AD1988B351* L_15 = V_2;
		int32_t L_16 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_15)->max_length),NULL));
		if ((!(((uint32_t)L_14) < ((uint32_t)L_16))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_t3A03E6878DE4EA58BAC9598CD15F49AD1988B351* L_17 = V_2;
		int32_t L_18 = V_0;
		int32_t L_19 = ((L_17)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_18)))->___hashCode;
		int32_t L_20 = V_5;
		if ((!(((uint32_t)L_19) == ((uint32_t)L_20))))
		{
			goto IL_009b;
		}
	}
	{
		EqualityComparer_1_t63A37CBBA150A456A5494B585BAAD61AEC84FCC3* L_21;
		L_21 = EqualityComparer_1_get_Default_m16781A8E4EDB2114168E318B51C5081028E57F3D_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2));
		EntryU5BU5D_t3A03E6878DE4EA58BAC9598CD15F49AD1988B351* L_22 = V_2;
		int32_t L_23 = V_0;
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 L_24 = ((L_22)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_23)))->___key;
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 L_25 = ___0_key;
		bool L_26;
		L_26 = VirtualFuncInvoker2< bool, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 >::Invoke(8, L_21, L_24, L_25);
		if (L_26)
		{
			goto IL_0175;
		}
	}

IL_009b:
	{
		EntryU5BU5D_t3A03E6878DE4EA58BAC9598CD15F49AD1988B351* L_27 = V_2;
		int32_t L_28 = V_0;
		int32_t L_29 = ((L_27)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_28)))->___next;
		V_0 = L_29;
		int32_t L_30 = V_3;
		EntryU5BU5D_t3A03E6878DE4EA58BAC9598CD15F49AD1988B351* L_31 = V_2;
		int32_t L_32 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_31)->max_length),NULL));
		if ((((int32_t)L_30) < ((int32_t)L_32)))
		{
			goto IL_00b3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_00b3:
	{
		int32_t L_33 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_33, 1));
		goto IL_0066;
	}

IL_0110:
	{
		RuntimeObject* L_34 = V_4;
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 L_35 = ___0_key;
		int32_t L_36;
		L_36 = InterfaceFuncInvoker1< int32_t, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 >::Invoke(1, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 35), L_34, L_35);
		V_8 = ((int32_t)(L_36&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_37 = V_1;
		int32_t L_38 = V_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_39 = V_1;
		int32_t L_40 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_39)->max_length),NULL));
		int32_t L_41 = ((int32_t)(L_38%L_40));
		int32_t L_42 = (L_37)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_41));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_42, 1));
	}

IL_012b:
	{
		int32_t L_43 = V_0;
		EntryU5BU5D_t3A03E6878DE4EA58BAC9598CD15F49AD1988B351* L_44 = V_2;
		int32_t L_45 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_44)->max_length),NULL));
		if ((!(((uint32_t)L_43) < ((uint32_t)L_45))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_t3A03E6878DE4EA58BAC9598CD15F49AD1988B351* L_46 = V_2;
		int32_t L_47 = V_0;
		int32_t L_48 = ((L_46)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_47)))->___hashCode;
		int32_t L_49 = V_8;
		if ((!(((uint32_t)L_48) == ((uint32_t)L_49))))
		{
			goto IL_0157;
		}
	}
	{
		RuntimeObject* L_50 = V_4;
		EntryU5BU5D_t3A03E6878DE4EA58BAC9598CD15F49AD1988B351* L_51 = V_2;
		int32_t L_52 = V_0;
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 L_53 = ((L_51)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_52)))->___key;
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 L_54 = ___0_key;
		bool L_55;
		L_55 = InterfaceFuncInvoker2< bool, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 35), L_50, L_53, L_54);
		if (L_55)
		{
			goto IL_0175;
		}
	}

IL_0157:
	{
		EntryU5BU5D_t3A03E6878DE4EA58BAC9598CD15F49AD1988B351* L_56 = V_2;
		int32_t L_57 = V_0;
		int32_t L_58 = ((L_56)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_57)))->___next;
		V_0 = L_58;
		int32_t L_59 = V_3;
		EntryU5BU5D_t3A03E6878DE4EA58BAC9598CD15F49AD1988B351* L_60 = V_2;
		int32_t L_61 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_60)->max_length),NULL));
		if ((((int32_t)L_59) < ((int32_t)L_61)))
		{
			goto IL_016f;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_016f:
	{
		int32_t L_62 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_62, 1));
		goto IL_012b;
	}

IL_0175:
	{
		int32_t L_63 = V_0;
		return L_63;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_mBBF032FDCE3C6D3156FD7E9C03D0FD46F673E1A5_gshared (Dictionary_2_tE5B96FEA65A0394692A66749C0DDE9956CF9EC15* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit);
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_capacity;
		CHECKED_LOCAL_INIT(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit,(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_1;
		L_1 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_0, NULL);
		V_0 = L_1;
		__this->____freeList = (-1);
		int32_t L_2 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_2);
		__this->____buckets = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_3);
		int32_t L_4 = V_0;
		EntryU5BU5D_t3A03E6878DE4EA58BAC9598CD15F49AD1988B351* L_5 = (EntryU5BU5D_t3A03E6878DE4EA58BAC9598CD15F49AD1988B351*)(EntryU5BU5D_t3A03E6878DE4EA58BAC9598CD15F49AD1988B351*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 43), (uint32_t)L_4);
		__this->____entries = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries), (void*)L_5);
		int32_t L_6 = V_0;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_m7801AB4073E7E59144E031D9980334873CE04671_gshared (Dictionary_2_tE5B96FEA65A0394692A66749C0DDE9956CF9EC15* __this, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___0_key, Il2CppSharedGenericObject* ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method) 
{
	EntryU5BU5D_t3A03E6878DE4EA58BAC9598CD15F49AD1988B351* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	int32_t V_8 = 0;
	int32_t* V_9 = NULL;
	Entry_tEC145FCBBA153DCB0712DA30A9C199492E165471* V_10 = NULL;
	EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 V_11;
	memset((&V_11), 0, sizeof(V_11));
	EqualityComparer_1_t63A37CBBA150A456A5494B585BAAD61AEC84FCC3* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t G_B7_0 = 0;
	int32_t* G_B51_0 = NULL;
	{
		goto IL_000e;
	}

IL_000e:
	{
		int32_t L_1 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_1, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->____buckets;
		if (L_2)
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_3;
		L_3 = Dictionary_2_Initialize_mBBF032FDCE3C6D3156FD7E9C03D0FD46F673E1A5(__this, 0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 1));
	}

IL_002c:
	{
		EntryU5BU5D_t3A03E6878DE4EA58BAC9598CD15F49AD1988B351* L_4 = __this->____entries;
		V_0 = L_4;
		RuntimeObject* L_5 = __this->____comparer;
		V_1 = L_5;
		RuntimeObject* L_6 = V_1;
		if (!L_6)
		{
			goto IL_0046;
		}
	}
	{
		RuntimeObject* L_7 = V_1;
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 L_8 = ___0_key;
		int32_t L_9;
		L_9 = InterfaceFuncInvoker1< int32_t, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 >::Invoke(1, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 35), L_7, L_8);
		G_B7_0 = L_9;
		goto IL_0053;
	}

IL_0046:
	{
		int32_t L_10;
		L_10 = EntityId_GetHashCode_m7B7BE3CC221C5EEAB3D2E64BD632F057E7931410((&___0_key), NULL);
		G_B7_0 = L_10;
	}

IL_0053:
	{
		V_2 = ((int32_t)(G_B7_0&((int32_t)2147483647LL)));
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____buckets;
		int32_t L_12 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = __this->____buckets;
		int32_t L_14 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_13)->max_length),NULL));
		V_4 = ((L_11)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)(L_12%L_14)))));
		int32_t* L_15 = V_4;
		int32_t L_16 = *(L_15);
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_16, 1));
		RuntimeObject* L_17 = V_1;
		if (L_17)
		{
			goto IL_0187;
		}
	}
	{
		il2cpp_codegen_initobj((&V_11), sizeof(EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8));
	}

IL_0091:
	{
		int32_t L_19 = V_5;
		EntryU5BU5D_t3A03E6878DE4EA58BAC9598CD15F49AD1988B351* L_20 = V_0;
		int32_t L_21 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_20)->max_length),NULL));
		if ((!(((uint32_t)L_19) < ((uint32_t)L_21))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_t3A03E6878DE4EA58BAC9598CD15F49AD1988B351* L_22 = V_0;
		int32_t L_23 = V_5;
		int32_t L_24 = ((L_22)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_23)))->___hashCode;
		int32_t L_25 = V_2;
		if ((!(((uint32_t)L_24) == ((uint32_t)L_25))))
		{
			goto IL_00ea;
		}
	}
	{
		EqualityComparer_1_t63A37CBBA150A456A5494B585BAAD61AEC84FCC3* L_26;
		L_26 = EqualityComparer_1_get_Default_m16781A8E4EDB2114168E318B51C5081028E57F3D_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2));
		EntryU5BU5D_t3A03E6878DE4EA58BAC9598CD15F49AD1988B351* L_27 = V_0;
		int32_t L_28 = V_5;
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 L_29 = ((L_27)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_28)))->___key;
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 L_30 = ___0_key;
		bool L_31;
		L_31 = VirtualFuncInvoker2< bool, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 >::Invoke(8, L_26, L_29, L_30);
		if (!L_31)
		{
			goto IL_00ea;
		}
	}
	{
		uint8_t L_32 = ___2_behavior;
		if ((!(((uint32_t)L_32) == ((uint32_t)1))))
		{
			goto IL_00d9;
		}
	}
	{
		EntryU5BU5D_t3A03E6878DE4EA58BAC9598CD15F49AD1988B351* L_33 = V_0;
		int32_t L_34 = V_5;
		Il2CppSharedGenericObject* L_35 = ___1_value;
		((L_33)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_34)))->___value = L_35;
		Il2CppCodeGenWriteBarrier((void**)(&((L_33)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_34)))->___value), (void*)L_35);
		return (bool)1;
	}

IL_00d9:
	{
		uint8_t L_36 = ___2_behavior;
		if ((!(((uint32_t)L_36) == ((uint32_t)2))))
		{
			goto IL_00e8;
		}
	}
	{
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 L_37 = ___0_key;
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 L_38 = L_37;
		RuntimeObject* L_39 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 10), &L_38);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_39, NULL);
	}

IL_00e8:
	{
		return (bool)0;
	}

IL_00ea:
	{
		EntryU5BU5D_t3A03E6878DE4EA58BAC9598CD15F49AD1988B351* L_40 = V_0;
		int32_t L_41 = V_5;
		int32_t L_42 = ((L_40)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_41)))->___next;
		V_5 = L_42;
		int32_t L_43 = V_3;
		EntryU5BU5D_t3A03E6878DE4EA58BAC9598CD15F49AD1988B351* L_44 = V_0;
		int32_t L_45 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_44)->max_length),NULL));
		if ((((int32_t)L_43) < ((int32_t)L_45)))
		{
			goto IL_0104;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_0104:
	{
		int32_t L_46 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_46, 1));
		goto IL_0091;
	}

IL_0187:
	{
		int32_t L_47 = V_5;
		EntryU5BU5D_t3A03E6878DE4EA58BAC9598CD15F49AD1988B351* L_48 = V_0;
		int32_t L_49 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_48)->max_length),NULL));
		if ((!(((uint32_t)L_47) < ((uint32_t)L_49))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_t3A03E6878DE4EA58BAC9598CD15F49AD1988B351* L_50 = V_0;
		int32_t L_51 = V_5;
		int32_t L_52 = ((L_50)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_51)))->___hashCode;
		int32_t L_53 = V_2;
		if ((!(((uint32_t)L_52) == ((uint32_t)L_53))))
		{
			goto IL_01d9;
		}
	}
	{
		RuntimeObject* L_54 = V_1;
		EntryU5BU5D_t3A03E6878DE4EA58BAC9598CD15F49AD1988B351* L_55 = V_0;
		int32_t L_56 = V_5;
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 L_57 = ((L_55)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_56)))->___key;
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 L_58 = ___0_key;
		bool L_59;
		L_59 = InterfaceFuncInvoker2< bool, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 35), L_54, L_57, L_58);
		if (!L_59)
		{
			goto IL_01d9;
		}
	}
	{
		uint8_t L_60 = ___2_behavior;
		if ((!(((uint32_t)L_60) == ((uint32_t)1))))
		{
			goto IL_01c8;
		}
	}
	{
		EntryU5BU5D_t3A03E6878DE4EA58BAC9598CD15F49AD1988B351* L_61 = V_0;
		int32_t L_62 = V_5;
		Il2CppSharedGenericObject* L_63 = ___1_value;
		((L_61)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_62)))->___value = L_63;
		Il2CppCodeGenWriteBarrier((void**)(&((L_61)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_62)))->___value), (void*)L_63);
		return (bool)1;
	}

IL_01c8:
	{
		uint8_t L_64 = ___2_behavior;
		if ((!(((uint32_t)L_64) == ((uint32_t)2))))
		{
			goto IL_01d7;
		}
	}
	{
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 L_65 = ___0_key;
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 L_66 = L_65;
		RuntimeObject* L_67 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 10), &L_66);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_67, NULL);
	}

IL_01d7:
	{
		return (bool)0;
	}

IL_01d9:
	{
		EntryU5BU5D_t3A03E6878DE4EA58BAC9598CD15F49AD1988B351* L_68 = V_0;
		int32_t L_69 = V_5;
		int32_t L_70 = ((L_68)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_69)))->___next;
		V_5 = L_70;
		int32_t L_71 = V_3;
		EntryU5BU5D_t3A03E6878DE4EA58BAC9598CD15F49AD1988B351* L_72 = V_0;
		int32_t L_73 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_72)->max_length),NULL));
		if ((((int32_t)L_71) < ((int32_t)L_73)))
		{
			goto IL_01f3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_01f3:
	{
		int32_t L_74 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_74, 1));
		goto IL_0187;
	}

IL_01f9:
	{
		V_6 = (bool)0;
		V_7 = (bool)0;
		int32_t L_75 = __this->____freeCount;
		if ((((int32_t)L_75) <= ((int32_t)0)))
		{
			goto IL_0223;
		}
	}
	{
		int32_t L_76 = __this->____freeList;
		V_8 = L_76;
		V_7 = (bool)1;
		int32_t L_77 = __this->____freeCount;
		__this->____freeCount = ((int32_t)il2cpp_codegen_subtract(L_77, 1));
		goto IL_0250;
	}

IL_0223:
	{
		int32_t L_78 = __this->____count;
		V_13 = L_78;
		int32_t L_79 = V_13;
		EntryU5BU5D_t3A03E6878DE4EA58BAC9598CD15F49AD1988B351* L_80 = V_0;
		int32_t L_81 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_80)->max_length),NULL));
		if ((!(((uint32_t)L_79) == ((uint32_t)L_81))))
		{
			goto IL_023b;
		}
	}
	{
		Dictionary_2_Resize_m538AB0187304CDDEDB4C0B2ECDCF6406622270AC(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 44));
		V_6 = (bool)1;
	}

IL_023b:
	{
		int32_t L_82 = V_13;
		V_8 = L_82;
		int32_t L_83 = V_13;
		__this->____count = ((int32_t)il2cpp_codegen_add(L_83, 1));
		EntryU5BU5D_t3A03E6878DE4EA58BAC9598CD15F49AD1988B351* L_84 = __this->____entries;
		V_0 = L_84;
	}

IL_0250:
	{
		bool L_85 = V_6;
		if (L_85)
		{
			goto IL_0258;
		}
	}
	{
		int32_t* L_86 = V_4;
		G_B51_0 = L_86;
		goto IL_026d;
	}

IL_0258:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_87 = __this->____buckets;
		int32_t L_88 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_89 = __this->____buckets;
		int32_t L_90 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_89)->max_length),NULL));
		G_B51_0 = ((L_87)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)(L_88%L_90)))));
	}

IL_026d:
	{
		V_9 = G_B51_0;
		EntryU5BU5D_t3A03E6878DE4EA58BAC9598CD15F49AD1988B351* L_91 = V_0;
		int32_t L_92 = V_8;
		V_10 = ((L_91)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_92)));
		bool L_93 = V_7;
		if (!L_93)
		{
			goto IL_028a;
		}
	}
	{
		Entry_tEC145FCBBA153DCB0712DA30A9C199492E165471* L_94 = V_10;
		int32_t L_95 = L_94->___next;
		__this->____freeList = L_95;
	}

IL_028a:
	{
		Entry_tEC145FCBBA153DCB0712DA30A9C199492E165471* L_96 = V_10;
		int32_t L_97 = V_2;
		L_96->___hashCode = L_97;
		Entry_tEC145FCBBA153DCB0712DA30A9C199492E165471* L_98 = V_10;
		int32_t* L_99 = V_9;
		int32_t L_100 = *(L_99);
		L_98->___next = ((int32_t)il2cpp_codegen_subtract(L_100, 1));
		Entry_tEC145FCBBA153DCB0712DA30A9C199492E165471* L_101 = V_10;
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 L_102 = ___0_key;
		L_101->___key = L_102;
		Entry_tEC145FCBBA153DCB0712DA30A9C199492E165471* L_103 = V_10;
		Il2CppSharedGenericObject* L_104 = ___1_value;
		L_103->___value = L_104;
		Il2CppCodeGenWriteBarrier((void**)(&L_103->___value), (void*)L_104);
		int32_t* L_105 = V_9;
		int32_t L_106 = V_8;
		*(L_105) = ((int32_t)il2cpp_codegen_add(L_106, 1));
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_OnDeserialization_mD38C37B98C123784888CEC5D3ABC5B32B8DC2924_gshared (Dictionary_2_tE5B96FEA65A0394692A66749C0DDE9956CF9EC15* __this, RuntimeObject* ___0_sender, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	KeyValuePair_2U5BU5D_t452E832017CA977A0436EAE3C0B660FEFAA9E48C* V_3 = NULL;
	int32_t V_4 = 0;
	{
		CHECKED_LOCAL_INIT(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit,(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
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
		int32_t L_4;
		L_4 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_3, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, NULL);
		V_1 = L_4;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_5 = V_0;
		int32_t L_6;
		L_6 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_5, _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69, NULL);
		V_2 = L_6;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_7 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 34)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		RuntimeObject* L_10;
		L_10 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_7, _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9, L_9, NULL);
		__this->____comparer = ((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 35)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 35))));
		int32_t L_11 = V_2;
		if (!L_11)
		{
			goto IL_00c9;
		}
	}
	{
		int32_t L_12 = V_2;
		int32_t L_13;
		L_13 = Dictionary_2_Initialize_mBBF032FDCE3C6D3156FD7E9C03D0FD46F673E1A5(__this, L_12, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 1));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_14 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 38)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		RuntimeObject* L_17;
		L_17 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_14, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, L_16, NULL);
		V_3 = ((KeyValuePair_2U5BU5D_t452E832017CA977A0436EAE3C0B660FEFAA9E48C*)CastclassSealed((RuntimeObject*)L_17, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 36)));
		KeyValuePair_2U5BU5D_t452E832017CA977A0436EAE3C0B660FEFAA9E48C* L_18 = V_3;
		if (L_18)
		{
			goto IL_007a;
		}
	}
	{
		ThrowHelper_ThrowSerializationException_m03BE2B48CD3617C32FBCEE16030F7C5563E04E16(((int32_t)16), NULL);
	}

IL_007a:
	{
		V_4 = 0;
		goto IL_00c0;
	}

IL_007f:
	{
		KeyValuePair_2U5BU5D_t452E832017CA977A0436EAE3C0B660FEFAA9E48C* L_19 = V_3;
		int32_t L_20 = V_4;
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 L_21;
		L_21 = KeyValuePair_2_get_Key_m90712219738452E82D01F79E5C5E2AFC458B7F42_inline(((L_19)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_20))), NULL);
		goto IL_009a;
	}

IL_009a:
	{
		KeyValuePair_2U5BU5D_t452E832017CA977A0436EAE3C0B660FEFAA9E48C* L_22 = V_3;
		int32_t L_23 = V_4;
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 L_24;
		L_24 = KeyValuePair_2_get_Key_m90712219738452E82D01F79E5C5E2AFC458B7F42_inline(((L_22)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_23))), NULL);
		KeyValuePair_2U5BU5D_t452E832017CA977A0436EAE3C0B660FEFAA9E48C* L_25 = V_3;
		int32_t L_26 = V_4;
		Il2CppSharedGenericObject* L_27;
		L_27 = KeyValuePair_2_get_Value_m386D7A4C4EC42B076395DF4004EC546AFB963848_inline(((L_25)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_26))), NULL);
		Dictionary_2_Add_m659C15ADA813F04A8F4547C6AAF3CCD9E1252110(__this, L_24, L_27, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14));
		int32_t L_28 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_00c0:
	{
		int32_t L_29 = V_4;
		KeyValuePair_2U5BU5D_t452E832017CA977A0436EAE3C0B660FEFAA9E48C* L_30 = V_3;
		int32_t L_31 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_30)->max_length),NULL));
		if ((((int32_t)L_29) < ((int32_t)L_31)))
		{
			goto IL_007f;
		}
	}
	{
		goto IL_00d0;
	}

IL_00c9:
	{
		__this->____buckets = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
	}

IL_00d0:
	{
		int32_t L_32 = V_1;
		__this->____version = L_32;
		CHECKED_LOCAL_INIT(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit,(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_33;
		L_33 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		bool L_34;
		L_34 = ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E(L_33, (RuntimeObject*)__this, ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m538AB0187304CDDEDB4C0B2ECDCF6406622270AC_gshared (Dictionary_2_tE5B96FEA65A0394692A66749C0DDE9956CF9EC15* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit);
	{
		int32_t L_0 = __this->____count;
		CHECKED_LOCAL_INIT(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit,(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_1;
		L_1 = HashHelpers_ExpandPrime_m9A35EC171AA0EA16F7C9F71EE6FAD5A82565ADB9(L_0, NULL);
		Dictionary_2_Resize_m34F15117A77F5DC4A71367D3091ADB5A51649961(__this, L_1, (bool)0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 45));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m34F15117A77F5DC4A71367D3091ADB5A51649961_gshared (Dictionary_2_tE5B96FEA65A0394692A66749C0DDE9956CF9EC15* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	EntryU5BU5D_t3A03E6878DE4EA58BAC9598CD15F49AD1988B351* V_1 = NULL;
	int32_t V_2 = 0;
	EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		int32_t L_0 = ___0_newSize;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = ___0_newSize;
		EntryU5BU5D_t3A03E6878DE4EA58BAC9598CD15F49AD1988B351* L_3 = (EntryU5BU5D_t3A03E6878DE4EA58BAC9598CD15F49AD1988B351*)(EntryU5BU5D_t3A03E6878DE4EA58BAC9598CD15F49AD1988B351*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 43), (uint32_t)L_2);
		V_1 = L_3;
		int32_t L_4 = __this->____count;
		V_2 = L_4;
		EntryU5BU5D_t3A03E6878DE4EA58BAC9598CD15F49AD1988B351* L_5 = __this->____entries;
		EntryU5BU5D_t3A03E6878DE4EA58BAC9598CD15F49AD1988B351* L_6 = V_1;
		int32_t L_7 = V_2;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, 0, (RuntimeArray*)L_6, 0, L_7, NULL);
		il2cpp_codegen_initobj((&V_3), sizeof(EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8));
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 L_8 = V_3;
		bool L_9 = ___1_forceNewHashCodes;
		if (!((int32_t)((int32_t)false&(int32_t)L_9)))
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
		EntryU5BU5D_t3A03E6878DE4EA58BAC9598CD15F49AD1988B351* L_10 = V_1;
		int32_t L_11 = V_4;
		int32_t L_12 = ((L_10)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_11)))->___hashCode;
		if ((((int32_t)L_12) < ((int32_t)0)))
		{
			goto IL_0079;
		}
	}
	{
		EntryU5BU5D_t3A03E6878DE4EA58BAC9598CD15F49AD1988B351* L_13 = V_1;
		int32_t L_14 = V_4;
		EntryU5BU5D_t3A03E6878DE4EA58BAC9598CD15F49AD1988B351* L_15 = V_1;
		int32_t L_16 = V_4;
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8* L_17 = (EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8*)(&((L_15)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_16)))->___key);
		int32_t L_18;
		L_18 = EntityId_GetHashCode_m7B7BE3CC221C5EEAB3D2E64BD632F057E7931410(L_17, NULL);
		((L_13)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_14)))->___hashCode = ((int32_t)(L_18&((int32_t)2147483647LL)));
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
		EntryU5BU5D_t3A03E6878DE4EA58BAC9598CD15F49AD1988B351* L_22 = V_1;
		int32_t L_23 = V_5;
		int32_t L_24 = ((L_22)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_23)))->___hashCode;
		if ((((int32_t)L_24) < ((int32_t)0)))
		{
			goto IL_00c5;
		}
	}
	{
		EntryU5BU5D_t3A03E6878DE4EA58BAC9598CD15F49AD1988B351* L_25 = V_1;
		int32_t L_26 = V_5;
		int32_t L_27 = ((L_25)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_26)))->___hashCode;
		int32_t L_28 = ___0_newSize;
		V_6 = ((int32_t)(L_27%L_28));
		EntryU5BU5D_t3A03E6878DE4EA58BAC9598CD15F49AD1988B351* L_29 = V_1;
		int32_t L_30 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = V_0;
		int32_t L_32 = V_6;
		int32_t L_33 = L_32;
		int32_t L_34 = (L_31)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_33));
		((L_29)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_30)))->___next = ((int32_t)il2cpp_codegen_subtract(L_34, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_35 = V_0;
		int32_t L_36 = V_6;
		int32_t L_37 = V_5;
		(L_35)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_36), (int32_t)((int32_t)il2cpp_codegen_add(L_37, 1)));
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
		__this->____buckets = L_41;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_41);
		EntryU5BU5D_t3A03E6878DE4EA58BAC9598CD15F49AD1988B351* L_42 = V_1;
		__this->____entries = L_42;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries), (void*)L_42);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m648D00C8DA11B66465DDFB68AE55F0E8ABF5BF78_gshared (Dictionary_2_tE5B96FEA65A0394692A66749C0DDE9956CF9EC15* __this, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Entry_tEC145FCBBA153DCB0712DA30A9C199492E165471* V_4 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	RuntimeObject* G_B10_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	bool G_B11_0 = false;
	{
		goto IL_000e;
	}

IL_000e:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		if (!L_1)
		{
			goto IL_0149;
		}
	}
	{
		RuntimeObject* L_2 = __this->____comparer;
		RuntimeObject* L_3 = L_2;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_0032;
		}
		G_B4_0 = L_3;
	}
	{
		int32_t L_4;
		L_4 = EntityId_GetHashCode_m7B7BE3CC221C5EEAB3D2E64BD632F057E7931410((&___0_key), NULL);
		G_B6_0 = L_4;
		goto IL_0038;
	}

IL_0032:
	{
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 L_5 = ___0_key;
		int32_t L_6;
		L_6 = InterfaceFuncInvoker1< int32_t, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 >::Invoke(1, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 35), G_B5_0, L_5);
		G_B6_0 = L_6;
	}

IL_0038:
	{
		V_0 = ((int32_t)(G_B6_0&((int32_t)2147483647LL)));
		int32_t L_7 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = __this->____buckets;
		int32_t L_9 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_8)->max_length),NULL));
		V_1 = ((int32_t)(L_7%L_9));
		V_2 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = __this->____buckets;
		int32_t L_11 = V_1;
		int32_t L_12 = L_11;
		int32_t L_13 = (L_10)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_12));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_13, 1));
		goto IL_0142;
	}

IL_005c:
	{
		EntryU5BU5D_t3A03E6878DE4EA58BAC9598CD15F49AD1988B351* L_14 = __this->____entries;
		int32_t L_15 = V_3;
		V_4 = ((L_14)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_15)));
		Entry_tEC145FCBBA153DCB0712DA30A9C199492E165471* L_16 = V_4;
		int32_t L_17 = L_16->___hashCode;
		int32_t L_18 = V_0;
		if ((!(((uint32_t)L_17) == ((uint32_t)L_18))))
		{
			goto IL_0138;
		}
	}
	{
		RuntimeObject* L_19 = __this->____comparer;
		RuntimeObject* L_20 = L_19;
		if (L_20)
		{
			G_B10_0 = L_20;
			goto IL_0095;
		}
		G_B9_0 = L_20;
	}
	{
		EqualityComparer_1_t63A37CBBA150A456A5494B585BAAD61AEC84FCC3* L_21;
		L_21 = EqualityComparer_1_get_Default_m16781A8E4EDB2114168E318B51C5081028E57F3D_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2));
		Entry_tEC145FCBBA153DCB0712DA30A9C199492E165471* L_22 = V_4;
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 L_23 = L_22->___key;
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 L_24 = ___0_key;
		bool L_25;
		L_25 = VirtualFuncInvoker2< bool, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 >::Invoke(8, L_21, L_23, L_24);
		G_B11_0 = L_25;
		goto IL_00a2;
	}

IL_0095:
	{
		Entry_tEC145FCBBA153DCB0712DA30A9C199492E165471* L_26 = V_4;
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 L_27 = L_26->___key;
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 L_28 = ___0_key;
		bool L_29;
		L_29 = InterfaceFuncInvoker2< bool, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 35), G_B10_0, L_27, L_28);
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
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = __this->____buckets;
		int32_t L_32 = V_1;
		Entry_tEC145FCBBA153DCB0712DA30A9C199492E165471* L_33 = V_4;
		int32_t L_34 = L_33->___next;
		(L_31)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_32), (int32_t)((int32_t)il2cpp_codegen_add(L_34, 1)));
		goto IL_00d6;
	}

IL_00be:
	{
		EntryU5BU5D_t3A03E6878DE4EA58BAC9598CD15F49AD1988B351* L_35 = __this->____entries;
		int32_t L_36 = V_2;
		Entry_tEC145FCBBA153DCB0712DA30A9C199492E165471* L_37 = V_4;
		int32_t L_38 = L_37->___next;
		((L_35)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_36)))->___next = L_38;
	}

IL_00d6:
	{
		Entry_tEC145FCBBA153DCB0712DA30A9C199492E165471* L_39 = V_4;
		L_39->___hashCode = (-1);
		Entry_tEC145FCBBA153DCB0712DA30A9C199492E165471* L_40 = V_4;
		int32_t L_41 = __this->____freeList;
		L_40->___next = L_41;
		goto IL_00ff;
	}

IL_00ff:
	{
	}
	{
		Entry_tEC145FCBBA153DCB0712DA30A9C199492E165471* L_42 = V_4;
		Il2CppSharedGenericObject** L_43 = (Il2CppSharedGenericObject**)(&L_42->___value);
		il2cpp_codegen_initobj(L_43, sizeof(Il2CppSharedGenericObject*));
	}

IL_0113:
	{
		int32_t L_44 = V_3;
		__this->____freeList = L_44;
		int32_t L_45 = __this->____freeCount;
		__this->____freeCount = ((int32_t)il2cpp_codegen_add(L_45, 1));
		int32_t L_46 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_46, 1));
		return (bool)1;
	}

IL_0138:
	{
		int32_t L_47 = V_3;
		V_2 = L_47;
		Entry_tEC145FCBBA153DCB0712DA30A9C199492E165471* L_48 = V_4;
		int32_t L_49 = L_48->___next;
		V_3 = L_49;
	}

IL_0142:
	{
		int32_t L_50 = V_3;
		if ((((int32_t)L_50) >= ((int32_t)0)))
		{
			goto IL_005c;
		}
	}

IL_0149:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m482BE543C2D7AE599308C372B1EC031B8EC7DAEE_gshared (Dictionary_2_tE5B96FEA65A0394692A66749C0DDE9956CF9EC15* __this, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___0_key, Il2CppSharedGenericObject** ___1_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Entry_tEC145FCBBA153DCB0712DA30A9C199492E165471* V_4 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	RuntimeObject* G_B10_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	bool G_B11_0 = false;
	{
		goto IL_000e;
	}

IL_000e:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		if (!L_1)
		{
			goto IL_0156;
		}
	}
	{
		RuntimeObject* L_2 = __this->____comparer;
		RuntimeObject* L_3 = L_2;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_0032;
		}
		G_B4_0 = L_3;
	}
	{
		int32_t L_4;
		L_4 = EntityId_GetHashCode_m7B7BE3CC221C5EEAB3D2E64BD632F057E7931410((&___0_key), NULL);
		G_B6_0 = L_4;
		goto IL_0038;
	}

IL_0032:
	{
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 L_5 = ___0_key;
		int32_t L_6;
		L_6 = InterfaceFuncInvoker1< int32_t, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 >::Invoke(1, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 35), G_B5_0, L_5);
		G_B6_0 = L_6;
	}

IL_0038:
	{
		V_0 = ((int32_t)(G_B6_0&((int32_t)2147483647LL)));
		int32_t L_7 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = __this->____buckets;
		int32_t L_9 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_8)->max_length),NULL));
		V_1 = ((int32_t)(L_7%L_9));
		V_2 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = __this->____buckets;
		int32_t L_11 = V_1;
		int32_t L_12 = L_11;
		int32_t L_13 = (L_10)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_12));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_13, 1));
		goto IL_014f;
	}

IL_005c:
	{
		EntryU5BU5D_t3A03E6878DE4EA58BAC9598CD15F49AD1988B351* L_14 = __this->____entries;
		int32_t L_15 = V_3;
		V_4 = ((L_14)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_15)));
		Entry_tEC145FCBBA153DCB0712DA30A9C199492E165471* L_16 = V_4;
		int32_t L_17 = L_16->___hashCode;
		int32_t L_18 = V_0;
		if ((!(((uint32_t)L_17) == ((uint32_t)L_18))))
		{
			goto IL_0145;
		}
	}
	{
		RuntimeObject* L_19 = __this->____comparer;
		RuntimeObject* L_20 = L_19;
		if (L_20)
		{
			G_B10_0 = L_20;
			goto IL_0095;
		}
		G_B9_0 = L_20;
	}
	{
		EqualityComparer_1_t63A37CBBA150A456A5494B585BAAD61AEC84FCC3* L_21;
		L_21 = EqualityComparer_1_get_Default_m16781A8E4EDB2114168E318B51C5081028E57F3D_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2));
		Entry_tEC145FCBBA153DCB0712DA30A9C199492E165471* L_22 = V_4;
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 L_23 = L_22->___key;
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 L_24 = ___0_key;
		bool L_25;
		L_25 = VirtualFuncInvoker2< bool, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 >::Invoke(8, L_21, L_23, L_24);
		G_B11_0 = L_25;
		goto IL_00a2;
	}

IL_0095:
	{
		Entry_tEC145FCBBA153DCB0712DA30A9C199492E165471* L_26 = V_4;
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 L_27 = L_26->___key;
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 L_28 = ___0_key;
		bool L_29;
		L_29 = InterfaceFuncInvoker2< bool, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 35), G_B10_0, L_27, L_28);
		G_B11_0 = L_29;
	}

IL_00a2:
	{
		if (!G_B11_0)
		{
			goto IL_0145;
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
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = __this->____buckets;
		int32_t L_32 = V_1;
		Entry_tEC145FCBBA153DCB0712DA30A9C199492E165471* L_33 = V_4;
		int32_t L_34 = L_33->___next;
		(L_31)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_32), (int32_t)((int32_t)il2cpp_codegen_add(L_34, 1)));
		goto IL_00d6;
	}

IL_00be:
	{
		EntryU5BU5D_t3A03E6878DE4EA58BAC9598CD15F49AD1988B351* L_35 = __this->____entries;
		int32_t L_36 = V_2;
		Entry_tEC145FCBBA153DCB0712DA30A9C199492E165471* L_37 = V_4;
		int32_t L_38 = L_37->___next;
		((L_35)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_36)))->___next = L_38;
	}

IL_00d6:
	{
		Il2CppSharedGenericObject** L_39 = ___1_value;
		Entry_tEC145FCBBA153DCB0712DA30A9C199492E165471* L_40 = V_4;
		Il2CppSharedGenericObject* L_41 = L_40->___value;
		*(Il2CppSharedGenericObject**)L_39 = L_41;
		Il2CppCodeGenWriteBarrier((void**)(Il2CppSharedGenericObject**)L_39, (void*)L_41);
		Entry_tEC145FCBBA153DCB0712DA30A9C199492E165471* L_42 = V_4;
		L_42->___hashCode = (-1);
		Entry_tEC145FCBBA153DCB0712DA30A9C199492E165471* L_43 = V_4;
		int32_t L_44 = __this->____freeList;
		L_43->___next = L_44;
		goto IL_010c;
	}

IL_010c:
	{
	}
	{
		Entry_tEC145FCBBA153DCB0712DA30A9C199492E165471* L_45 = V_4;
		Il2CppSharedGenericObject** L_46 = (Il2CppSharedGenericObject**)(&L_45->___value);
		il2cpp_codegen_initobj(L_46, sizeof(Il2CppSharedGenericObject*));
	}

IL_0120:
	{
		int32_t L_47 = V_3;
		__this->____freeList = L_47;
		int32_t L_48 = __this->____freeCount;
		__this->____freeCount = ((int32_t)il2cpp_codegen_add(L_48, 1));
		int32_t L_49 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_49, 1));
		return (bool)1;
	}

IL_0145:
	{
		int32_t L_50 = V_3;
		V_2 = L_50;
		Entry_tEC145FCBBA153DCB0712DA30A9C199492E165471* L_51 = V_4;
		int32_t L_52 = L_51->___next;
		V_3 = L_52;
	}

IL_014f:
	{
		int32_t L_53 = V_3;
		if ((((int32_t)L_53) >= ((int32_t)0)))
		{
			goto IL_005c;
		}
	}

IL_0156:
	{
		Il2CppSharedGenericObject** L_54 = ___1_value;
		il2cpp_codegen_initobj(L_54, sizeof(Il2CppSharedGenericObject*));
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_mB70C843364AD3E707EC45DA59E704DDF2772BE57_gshared (Dictionary_2_tE5B96FEA65A0394692A66749C0DDE9956CF9EC15* __this, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___0_key, Il2CppSharedGenericObject** ___1_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m1657D17584CCFCD88AD7E5E31C519E86C659D03F(__this, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 26));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0025;
		}
	}
	{
		Il2CppSharedGenericObject** L_3 = ___1_value;
		EntryU5BU5D_t3A03E6878DE4EA58BAC9598CD15F49AD1988B351* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		Il2CppSharedGenericObject* L_6 = ((L_4)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		*(Il2CppSharedGenericObject**)L_3 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(Il2CppSharedGenericObject**)L_3, (void*)L_6);
		return (bool)1;
	}

IL_0025:
	{
		Il2CppSharedGenericObject** L_7 = ___1_value;
		il2cpp_codegen_initobj(L_7, sizeof(Il2CppSharedGenericObject*));
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryAdd_m32709D10C87971991C63DA155F7CA82BF0A50EE3_gshared (Dictionary_2_tE5B96FEA65A0394692A66749C0DDE9956CF9EC15* __this, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___0_key, Il2CppSharedGenericObject* ___1_value, const RuntimeMethod* method) 
{
	{
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 L_0 = ___0_key;
		Il2CppSharedGenericObject* L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_m7801AB4073E7E59144E031D9980334873CE04671(__this, L_0, L_1, 0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 27));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m815A78421B721BD0A5914960333B958222D1D055_gshared (Dictionary_2_tE5B96FEA65A0394692A66749C0DDE9956CF9EC15* __this, KeyValuePair_2U5BU5D_t452E832017CA977A0436EAE3C0B660FEFAA9E48C* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2U5BU5D_t452E832017CA977A0436EAE3C0B660FEFAA9E48C* L_0 = ___0_array;
		int32_t L_1 = ___1_index;
		Dictionary_2_CopyTo_m95EC5C89E30BCBBA8B195DB471FA154BBCBCC4F6(__this, L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_ICollection_CopyTo_mBE30C52DA3B16F882C7EDE7BC2C276D58D8FA3B8_gshared (Dictionary_2_tE5B96FEA65A0394692A66749C0DDE9956CF9EC15* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_t452E832017CA977A0436EAE3C0B660FEFAA9E48C* V_0 = NULL;
	DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* V_1 = NULL;
	EntryU5BU5D_t3A03E6878DE4EA58BAC9598CD15F49AD1988B351* V_2 = NULL;
	int32_t V_3 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_4 = NULL;
	int32_t V_5 = 0;
	EntryU5BU5D_t3A03E6878DE4EA58BAC9598CD15F49AD1988B351* V_6 = NULL;
	int32_t V_7 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		int32_t L_2;
		L_2 = il2cpp_codegen_array_get_rank(L_1);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		RuntimeArray* L_6 = ___0_array;
		int32_t L_7;
		L_7 = il2cpp_codegen_array_get_length(L_6);
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
		RuntimeArray* L_8 = ___0_array;
		int32_t L_9;
		L_9 = il2cpp_codegen_array_get_length(L_8);
		int32_t L_10 = ___1_index;
		int32_t L_11;
		L_11 = Dictionary_2_get_Count_m7421ED45DE262C02CACC42EA0FE958D84C57B4FB(__this, NULL);
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_9, L_10))) >= ((int32_t)L_11)))
		{
			goto IL_004b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(5, NULL);
	}

IL_004b:
	{
		RuntimeArray* L_12 = ___0_array;
		V_0 = ((KeyValuePair_2U5BU5D_t452E832017CA977A0436EAE3C0B660FEFAA9E48C*)IsInstSealed((RuntimeObject*)L_12, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 36)));
		KeyValuePair_2U5BU5D_t452E832017CA977A0436EAE3C0B660FEFAA9E48C* L_13 = V_0;
		if (!L_13)
		{
			goto IL_005e;
		}
	}
	{
		KeyValuePair_2U5BU5D_t452E832017CA977A0436EAE3C0B660FEFAA9E48C* L_14 = V_0;
		int32_t L_15 = ___1_index;
		Dictionary_2_CopyTo_m95EC5C89E30BCBBA8B195DB471FA154BBCBCC4F6(__this, L_14, L_15, NULL);
		return;
	}

IL_005e:
	{
		RuntimeArray* L_16 = ___0_array;
		V_1 = ((DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533*)IsInstSealed((RuntimeObject*)L_16, DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var));
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_17 = V_1;
		if (!L_17)
		{
			goto IL_00c3;
		}
	}
	{
		EntryU5BU5D_t3A03E6878DE4EA58BAC9598CD15F49AD1988B351* L_18 = __this->____entries;
		V_2 = L_18;
		V_3 = 0;
		goto IL_00b9;
	}

IL_0073:
	{
		EntryU5BU5D_t3A03E6878DE4EA58BAC9598CD15F49AD1988B351* L_19 = V_2;
		int32_t L_20 = V_3;
		int32_t L_21 = ((L_19)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_20)))->___hashCode;
		if ((((int32_t)L_21) < ((int32_t)0)))
		{
			goto IL_00b5;
		}
	}
	{
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_22 = V_1;
		int32_t L_23 = ___1_index;
		int32_t L_24 = L_23;
		___1_index = ((int32_t)il2cpp_codegen_add(L_24, 1));
		EntryU5BU5D_t3A03E6878DE4EA58BAC9598CD15F49AD1988B351* L_25 = V_2;
		int32_t L_26 = V_3;
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 L_27 = ((L_25)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_26)))->___key;
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 L_28 = L_27;
		RuntimeObject* L_29 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 10), &L_28);
		EntryU5BU5D_t3A03E6878DE4EA58BAC9598CD15F49AD1988B351* L_30 = V_2;
		int32_t L_31 = V_3;
		Il2CppSharedGenericObject* L_32 = ((L_30)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_31)))->___value;
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_33;
		memset((&L_33), 0, sizeof(L_33));
		DictionaryEntry__ctor_m2768353E53A75C4860E34B37DAF1342120C5D1EA((&L_33), L_29, (RuntimeObject*)L_32, NULL);
		(L_22)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_24), (DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB)L_33);
	}

IL_00b5:
	{
		int32_t L_34 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_00b9:
	{
		int32_t L_35 = V_3;
		int32_t L_36 = __this->____count;
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
		RuntimeArray* L_37 = ___0_array;
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
	{
		{
			int32_t L_39 = __this->____count;
			V_5 = L_39;
			EntryU5BU5D_t3A03E6878DE4EA58BAC9598CD15F49AD1988B351* L_40 = __this->____entries;
			V_6 = L_40;
			V_7 = 0;
			goto IL_0130_1;
		}

IL_00ea_1:
		{
			EntryU5BU5D_t3A03E6878DE4EA58BAC9598CD15F49AD1988B351* L_41 = V_6;
			int32_t L_42 = V_7;
			int32_t L_43 = ((L_41)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_42)))->___hashCode;
			if ((((int32_t)L_43) < ((int32_t)0)))
			{
				goto IL_012a_1;
			}
		}
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_44 = V_4;
			int32_t L_45 = ___1_index;
			int32_t L_46 = L_45;
			___1_index = ((int32_t)il2cpp_codegen_add(L_46, 1));
			EntryU5BU5D_t3A03E6878DE4EA58BAC9598CD15F49AD1988B351* L_47 = V_6;
			int32_t L_48 = V_7;
			EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 L_49 = ((L_47)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_48)))->___key;
			EntryU5BU5D_t3A03E6878DE4EA58BAC9598CD15F49AD1988B351* L_50 = V_6;
			int32_t L_51 = V_7;
			Il2CppSharedGenericObject* L_52 = ((L_50)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_51)))->___value;
			KeyValuePair_2_tCD64FBFD0349B053A7915EB43CFE2E4C123110E3 L_53;
			memset((&L_53), 0, sizeof(L_53));
			KeyValuePair_2__ctor_mB6121DC610D466BC9BBA557711FBAB073406BF77((&L_53), L_49, L_52, NULL);
			KeyValuePair_2_tCD64FBFD0349B053A7915EB43CFE2E4C123110E3 L_54 = L_53;
			RuntimeObject* L_55 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 19), &L_54);
			ArrayElementTypeCheck (L_44, L_55);
			(L_44)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_46), (RuntimeObject*)L_55);
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
	}
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
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_59 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0140;
	}

IL_0140:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m552480C23F0D96F6868C670FE537E1057821CCDF_gshared (Dictionary_2_tE5B96FEA65A0394692A66749C0DDE9956CF9EC15* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t4D854DB287531AA401450973A1FE347EA5E3D673 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m6ED4CD5A4B2D5BC48CE5614042545BB304449C0A((&L_0), __this, 2, NULL);
		Enumerator_t4D854DB287531AA401450973A1FE347EA5E3D673 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 32), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_EnsureCapacity_m30039E930862AA1B8A9F3A1548980D8FE271CE2A_gshared (Dictionary_2_tE5B96FEA65A0394692A66749C0DDE9956CF9EC15* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_000b;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97(((int32_t)12), NULL);
	}

IL_000b:
	{
		EntryU5BU5D_t3A03E6878DE4EA58BAC9598CD15F49AD1988B351* L_1 = __this->____entries;
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		EntryU5BU5D_t3A03E6878DE4EA58BAC9598CD15F49AD1988B351* L_2 = __this->____entries;
		int32_t L_3 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_2)->max_length),NULL));
		G_B5_0 = L_3;
		goto IL_001e;
	}

IL_001d:
	{
		G_B5_0 = 0;
	}

IL_001e:
	{
		V_0 = G_B5_0;
		int32_t L_4 = V_0;
		int32_t L_5 = ___0_capacity;
		if ((((int32_t)L_4) < ((int32_t)L_5)))
		{
			goto IL_0025;
		}
	}
	{
		int32_t L_6 = V_0;
		return L_6;
	}

IL_0025:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = __this->____buckets;
		if (L_7)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_8 = ___0_capacity;
		int32_t L_9;
		L_9 = Dictionary_2_Initialize_mBBF032FDCE3C6D3156FD7E9C03D0FD46F673E1A5(__this, L_8, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 1));
		return L_9;
	}

IL_0035:
	{
		int32_t L_10 = ___0_capacity;
		CHECKED_LOCAL_INIT(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit,(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_11;
		L_11 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_10, NULL);
		V_1 = L_11;
		int32_t L_12 = V_1;
		Dictionary_2_Resize_m34F15117A77F5DC4A71367D3091ADB5A51649961(__this, L_12, (bool)0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 45));
		int32_t L_13 = V_1;
		return L_13;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_IDictionary_set_Item_mE033928A8DC87B486BA647CE80C111B324010EEA_gshared (Dictionary_2_tE5B96FEA65A0394692A66749C0DDE9956CF9EC15* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(Type_t_StaticInit);
	EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 V_0;
	memset((&V_0), 0, sizeof(V_0));
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___1_value;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisIl2CppSharedGenericObject_mE7A1EEC53480BA1ED6C827938ADAF45B127DD054(L_1, ((int32_t)15), NULL);
	}
	try
	{
		{
			RuntimeObject* L_2 = ___0_key;
			V_0 = ((*(EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 10))));
		}
		try
		{
			EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 L_3 = V_0;
			RuntimeObject* L_4 = ___1_value;
			Dictionary_2_set_Item_m95FF2E2086B21F5DBD685F0D4DB10818308B2B4E(__this, L_3, ((Il2CppSharedGenericObject*)Castclass((RuntimeObject*)L_4, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 49));
			goto IL_003a_1;
		}
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
		{
			InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_5 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
			RuntimeObject* L_6 = ___1_value;
			RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 50)) };
			CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
			Type_t* L_8;
			L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
			ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_6, L_8, NULL);
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_003a_1;
		}

IL_003a_1:
		{
			goto IL_004f;
		}
	}
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
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_9 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_10 = ___0_key;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 51)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		ThrowHelper_ThrowWrongKeyTypeArgumentException_m90E5BCE2CB10EEC16F254C237121C6816C4D6982(L_10, L_12, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_004f;
	}

IL_004f:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_GetEnumerator_mA00FFDF602951A96046617B3761DD1A247266A2F_gshared (Dictionary_2_tE5B96FEA65A0394692A66749C0DDE9956CF9EC15* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t4D854DB287531AA401450973A1FE347EA5E3D673 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m6ED4CD5A4B2D5BC48CE5614042545BB304449C0A((&L_0), __this, 1, NULL);
		Enumerator_t4D854DB287531AA401450973A1FE347EA5E3D673 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 32), &L_1);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m2D97101BFF799B14DB447ABF1A7A0438AF077815 (Dictionary_2_tE7C86B2C5A23A1F27C98C2B36D5E45FA457F6090* __this, const RuntimeMethod* method) 
{
	{
		Dictionary_2__ctor_m5BDC7511DA1B448A0EA8D564E296681CF318219E(__this, 0, (RuntimeObject*)NULL, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m77E80F6158101A326F0F807CBA37ECC400B1A59A (Dictionary_2_tE7C86B2C5A23A1F27C98C2B36D5E45FA457F6090* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_capacity;
		Dictionary_2__ctor_m5BDC7511DA1B448A0EA8D564E296681CF318219E(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m536492EBAF33913B921BE4D7F1D8AA896810EFC3 (Dictionary_2_tE7C86B2C5A23A1F27C98C2B36D5E45FA457F6090* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_comparer;
		Dictionary_2__ctor_m5BDC7511DA1B448A0EA8D564E296681CF318219E(__this, 0, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5BDC7511DA1B448A0EA8D564E296681CF318219E (Dictionary_2_tE7C86B2C5A23A1F27C98C2B36D5E45FA457F6090* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0011;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97(((int32_t)12), NULL);
	}

IL_0011:
	{
		int32_t L_1 = ___0_capacity;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_2 = ___0_capacity;
		int32_t L_3;
		L_3 = Dictionary_2_Initialize_m38FB2D8763ADDB1128BA8DB0BB9A2D576F7220E8(__this, L_2, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 1));
	}

IL_001d:
	{
		RuntimeObject* L_4 = ___1_comparer;
		EqualityComparer_1_t63A37CBBA150A456A5494B585BAAD61AEC84FCC3* L_5;
		L_5 = EqualityComparer_1_get_Default_m16781A8E4EDB2114168E318B51C5081028E57F3D_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2));
		if ((((RuntimeObject*)(RuntimeObject*)L_4) == ((RuntimeObject*)(EqualityComparer_1_t63A37CBBA150A456A5494B585BAAD61AEC84FCC3*)L_5)))
		{
			goto IL_002c;
		}
	}
	{
		RuntimeObject* L_6 = ___1_comparer;
		__this->____comparer = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)L_6);
	}

IL_002c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m6833EF21CE438C576288FB77DC8ABF09583A44C2 (Dictionary_2_tE7C86B2C5A23A1F27C98C2B36D5E45FA457F6090* __this, RuntimeObject* ___0_dictionary, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_dictionary;
		Dictionary_2__ctor_m4D1E39F61237886CB1FA5462B8CD4627FC822DC7(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 3));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m4D1E39F61237886CB1FA5462B8CD4627FC822DC7 (Dictionary_2_tE7C86B2C5A23A1F27C98C2B36D5E45FA457F6090* __this, RuntimeObject* ___0_dictionary, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	EntryU5BU5D_t8D700A36ADEAE6E64D092B1F2FF95391E5A03F6C* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	KeyValuePair_2_t0BE50338B196BFD79E02288350CE100D1C15D165 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Dictionary_2_tE7C86B2C5A23A1F27C98C2B36D5E45FA457F6090* G_B2_0 = NULL;
	Dictionary_2_tE7C86B2C5A23A1F27C98C2B36D5E45FA457F6090* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	Dictionary_2_tE7C86B2C5A23A1F27C98C2B36D5E45FA457F6090* G_B3_1 = NULL;
	{
		RuntimeObject* L_0 = ___0_dictionary;
		if (L_0)
		{
			G_B2_0 = __this;
			goto IL_0007;
		}
		G_B1_0 = __this;
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_000d;
	}

IL_0007:
	{
		RuntimeObject* L_1 = ___0_dictionary;
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 4), L_1);
		G_B3_0 = L_2;
		G_B3_1 = G_B2_0;
	}

IL_000d:
	{
		RuntimeObject* L_3 = ___1_comparer;
		Dictionary_2__ctor_m5BDC7511DA1B448A0EA8D564E296681CF318219E(G_B3_1, G_B3_0, L_3, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0));
		RuntimeObject* L_4 = ___0_dictionary;
		if (L_4)
		{
			goto IL_001c;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(1, NULL);
	}

IL_001c:
	{
		RuntimeObject* L_5 = ___0_dictionary;
		void* L_6 = il2cpp_codegen_object_get_class(L_5);
		bool L_7 = (il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7)) == (L_6);
		if (!L_7)
		{
			goto IL_0080;
		}
	}
	{
		RuntimeObject* L_8 = ___0_dictionary;
		Dictionary_2_tE7C86B2C5A23A1F27C98C2B36D5E45FA457F6090* L_9 = ((Dictionary_2_tE7C86B2C5A23A1F27C98C2B36D5E45FA457F6090*)CastclassClass((RuntimeObject*)L_8, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7)));
		int32_t L_10 = L_9->____count;
		V_0 = L_10;
		EntryU5BU5D_t8D700A36ADEAE6E64D092B1F2FF95391E5A03F6C* L_11 = L_9->____entries;
		V_1 = L_11;
		V_2 = 0;
		goto IL_007b;
	}

IL_004a:
	{
		EntryU5BU5D_t8D700A36ADEAE6E64D092B1F2FF95391E5A03F6C* L_12 = V_1;
		int32_t L_13 = V_2;
		int32_t L_14 = ((L_12)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_13)))->___hashCode;
		if ((((int32_t)L_14) < ((int32_t)0)))
		{
			goto IL_0077;
		}
	}
	{
		EntryU5BU5D_t8D700A36ADEAE6E64D092B1F2FF95391E5A03F6C* L_15 = V_1;
		int32_t L_16 = V_2;
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 L_17 = ((L_15)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_16)))->___key;
		EntryU5BU5D_t8D700A36ADEAE6E64D092B1F2FF95391E5A03F6C* L_18 = V_1;
		int32_t L_19 = V_2;
		FontAssetRef_t7B8E634754BC5683F1E6601D7CD0061285A28FF3 L_20 = ((L_18)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_19)))->___value;
		Dictionary_2_Add_mC8F79C526E4358DD840D85CB26C87DF16E570D42(__this, L_17, L_20, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14));
	}

IL_0077:
	{
		int32_t L_21 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_007b:
	{
		int32_t L_22 = V_2;
		int32_t L_23 = V_0;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_004a;
		}
	}
	{
		return;
	}

IL_0080:
	{
		RuntimeObject* L_24 = ___0_dictionary;
		RuntimeObject* L_25;
		L_25 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 15), L_24);
		V_3 = L_25;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00af:
			{
				{
					RuntimeObject* L_26 = V_3;
					if (!L_26)
					{
						goto IL_00b8;
					}
				}
				{
					RuntimeObject* L_27 = V_3;
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_27);
				}

IL_00b8:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_00a5_1;
			}

IL_0089_1:
			{
				RuntimeObject* L_28 = V_3;
				KeyValuePair_2_t0BE50338B196BFD79E02288350CE100D1C15D165 L_29;
				L_29 = InterfaceFuncInvoker0< KeyValuePair_2_t0BE50338B196BFD79E02288350CE100D1C15D165 >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 17), L_28);
				V_4 = L_29;
				EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 L_30;
				L_30 = KeyValuePair_2_get_Key_m4D827FF66807261BDE920B3D6816EC37082073B3_inline((&V_4), NULL);
				FontAssetRef_t7B8E634754BC5683F1E6601D7CD0061285A28FF3 L_31;
				L_31 = KeyValuePair_2_get_Value_mC82FE8FDC9CEC01214097444FE6D11C920B45461_inline((&V_4), NULL);
				Dictionary_2_Add_mC8F79C526E4358DD840D85CB26C87DF16E570D42(__this, L_30, L_31, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14));
			}

IL_00a5_1:
			{
				RuntimeObject* L_32 = V_3;
				bool L_33;
				L_33 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_32);
				if (L_33)
				{
					goto IL_0089_1;
				}
			}
			{
				goto IL_00b9;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_t91FB72DA59E2DD50460D6B13860A5A6ADF6C19FC* Dictionary_2_get_Keys_m78882C3463744AF524BEAF112655559CA1707994 (Dictionary_2_tE7C86B2C5A23A1F27C98C2B36D5E45FA457F6090* __this, const RuntimeMethod* method) 
{
	{
		KeyCollection_t91FB72DA59E2DD50460D6B13860A5A6ADF6C19FC* L_0 = __this->____keys;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		KeyCollection_t91FB72DA59E2DD50460D6B13860A5A6ADF6C19FC* L_1 = (KeyCollection_t91FB72DA59E2DD50460D6B13860A5A6ADF6C19FC*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 22));
		KeyCollection__ctor_m82022D2EE0EBD78A26A990AAC16E4A045126AE11(L_1, __this, NULL);
		__this->____keys = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keys), (void*)L_1);
	}

IL_0014:
	{
		KeyCollection_t91FB72DA59E2DD50460D6B13860A5A6ADF6C19FC* L_2 = __this->____keys;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_t5390AA0A336DFE6BC4AED8BB2868F9D6869D211B* Dictionary_2_get_Values_m3B4FEE543BFD317D89AB7807BDF01F8FA8F32DE9 (Dictionary_2_tE7C86B2C5A23A1F27C98C2B36D5E45FA457F6090* __this, const RuntimeMethod* method) 
{
	{
		ValueCollection_t5390AA0A336DFE6BC4AED8BB2868F9D6869D211B* L_0 = __this->____values;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_t5390AA0A336DFE6BC4AED8BB2868F9D6869D211B* L_1 = (ValueCollection_t5390AA0A336DFE6BC4AED8BB2868F9D6869D211B*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 24));
		ValueCollection__ctor_m14AF8DA6FCBD7ACD62EB55BF61D21FAE60352201(L_1, __this, NULL);
		__this->____values = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_t5390AA0A336DFE6BC4AED8BB2868F9D6869D211B* L_2 = __this->____values;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FontAssetRef_t7B8E634754BC5683F1E6601D7CD0061285A28FF3 Dictionary_2_get_Item_mA65742FDD6C8622F43DA9E5D05CE2EA1C4CB5C98 (Dictionary_2_tE7C86B2C5A23A1F27C98C2B36D5E45FA457F6090* __this, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	FontAssetRef_t7B8E634754BC5683F1E6601D7CD0061285A28FF3 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m95EFDF2600D3495DB59266D86D3B0B65020CBBE3(__this, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 26));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_001e;
		}
	}
	{
		EntryU5BU5D_t8D700A36ADEAE6E64D092B1F2FF95391E5A03F6C* L_3 = __this->____entries;
		int32_t L_4 = V_0;
		FontAssetRef_t7B8E634754BC5683F1E6601D7CD0061285A28FF3 L_5 = ((L_3)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_4)))->___value;
		return L_5;
	}

IL_001e:
	{
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 L_6 = ___0_key;
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 10), &L_7);
		ThrowHelper_ThrowKeyNotFoundException_m6A17735FA486AD43F2488DE39B755AC60BC99CE7(L_8, NULL);
		il2cpp_codegen_initobj((&V_1), sizeof(FontAssetRef_t7B8E634754BC5683F1E6601D7CD0061285A28FF3));
		FontAssetRef_t7B8E634754BC5683F1E6601D7CD0061285A28FF3 L_9 = V_1;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m7ACB67C25D0FD50ABEC2277BFDBDED5D4E5DF8DC (Dictionary_2_tE7C86B2C5A23A1F27C98C2B36D5E45FA457F6090* __this, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___0_key, FontAssetRef_t7B8E634754BC5683F1E6601D7CD0061285A28FF3 ___1_value, const RuntimeMethod* method) 
{
	{
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 L_0 = ___0_key;
		FontAssetRef_t7B8E634754BC5683F1E6601D7CD0061285A28FF3 L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_m7265AD1FB7FEE07B51E4A3D1783ABFBF9BDED62F(__this, L_0, L_1, 1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 27));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_mC8F79C526E4358DD840D85CB26C87DF16E570D42 (Dictionary_2_tE7C86B2C5A23A1F27C98C2B36D5E45FA457F6090* __this, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___0_key, FontAssetRef_t7B8E634754BC5683F1E6601D7CD0061285A28FF3 ___1_value, const RuntimeMethod* method) 
{
	{
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 L_0 = ___0_key;
		FontAssetRef_t7B8E634754BC5683F1E6601D7CD0061285A28FF3 L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_m7265AD1FB7FEE07B51E4A3D1783ABFBF9BDED62F(__this, L_0, L_1, 2, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 27));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m4A84124EA2C7EB0661F13B97B302CD93784FD55F (Dictionary_2_tE7C86B2C5A23A1F27C98C2B36D5E45FA457F6090* __this, KeyValuePair_2_t0BE50338B196BFD79E02288350CE100D1C15D165 ___0_keyValuePair, const RuntimeMethod* method) 
{
	{
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 L_0;
		L_0 = KeyValuePair_2_get_Key_m4D827FF66807261BDE920B3D6816EC37082073B3_inline((&___0_keyValuePair), NULL);
		FontAssetRef_t7B8E634754BC5683F1E6601D7CD0061285A28FF3 L_1;
		L_1 = KeyValuePair_2_get_Value_mC82FE8FDC9CEC01214097444FE6D11C920B45461_inline((&___0_keyValuePair), NULL);
		Dictionary_2_Add_mC8F79C526E4358DD840D85CB26C87DF16E570D42(__this, L_0, L_1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_mBA4A9A334669D941688C3864BE6AB38E9FABB51F (Dictionary_2_tE7C86B2C5A23A1F27C98C2B36D5E45FA457F6090* __this, KeyValuePair_2_t0BE50338B196BFD79E02288350CE100D1C15D165 ___0_keyValuePair, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 L_0;
		L_0 = KeyValuePair_2_get_Key_m4D827FF66807261BDE920B3D6816EC37082073B3_inline((&___0_keyValuePair), NULL);
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m95EFDF2600D3495DB59266D86D3B0B65020CBBE3(__this, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 26));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0038;
		}
	}
	{
		EqualityComparer_1_tC81AF0456B0ECB7415E30894699AAB099256D323* L_3;
		L_3 = EqualityComparer_1_get_Default_m4626BA1582304AE05985ABD8E116508974651F1E_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 28));
		EntryU5BU5D_t8D700A36ADEAE6E64D092B1F2FF95391E5A03F6C* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		FontAssetRef_t7B8E634754BC5683F1E6601D7CD0061285A28FF3 L_6 = ((L_4)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		FontAssetRef_t7B8E634754BC5683F1E6601D7CD0061285A28FF3 L_7;
		L_7 = KeyValuePair_2_get_Value_mC82FE8FDC9CEC01214097444FE6D11C920B45461_inline((&___0_keyValuePair), NULL);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, FontAssetRef_t7B8E634754BC5683F1E6601D7CD0061285A28FF3, FontAssetRef_t7B8E634754BC5683F1E6601D7CD0061285A28FF3 >::Invoke(8, L_3, L_6, L_7);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m8F5E175EE64439DFFB91474662BD389FACFA5D2C (Dictionary_2_tE7C86B2C5A23A1F27C98C2B36D5E45FA457F6090* __this, KeyValuePair_2_t0BE50338B196BFD79E02288350CE100D1C15D165 ___0_keyValuePair, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 L_0;
		L_0 = KeyValuePair_2_get_Key_m4D827FF66807261BDE920B3D6816EC37082073B3_inline((&___0_keyValuePair), NULL);
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m95EFDF2600D3495DB59266D86D3B0B65020CBBE3(__this, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 26));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0046;
		}
	}
	{
		EqualityComparer_1_tC81AF0456B0ECB7415E30894699AAB099256D323* L_3;
		L_3 = EqualityComparer_1_get_Default_m4626BA1582304AE05985ABD8E116508974651F1E_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 28));
		EntryU5BU5D_t8D700A36ADEAE6E64D092B1F2FF95391E5A03F6C* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		FontAssetRef_t7B8E634754BC5683F1E6601D7CD0061285A28FF3 L_6 = ((L_4)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		FontAssetRef_t7B8E634754BC5683F1E6601D7CD0061285A28FF3 L_7;
		L_7 = KeyValuePair_2_get_Value_mC82FE8FDC9CEC01214097444FE6D11C920B45461_inline((&___0_keyValuePair), NULL);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, FontAssetRef_t7B8E634754BC5683F1E6601D7CD0061285A28FF3, FontAssetRef_t7B8E634754BC5683F1E6601D7CD0061285A28FF3 >::Invoke(8, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0046;
		}
	}
	{
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 L_9;
		L_9 = KeyValuePair_2_get_Key_m4D827FF66807261BDE920B3D6816EC37082073B3_inline((&___0_keyValuePair), NULL);
		bool L_10;
		L_10 = Dictionary_2_Remove_m54197D4C6A7E708E2AC7BC107AC24F565AD687DA(__this, L_9, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 29));
		return (bool)1;
	}

IL_0046:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_mEB0C4168B447A3BDFCAB7885077E4202EEB3B0B2 (Dictionary_2_tE7C86B2C5A23A1F27C98C2B36D5E45FA457F6090* __this, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___0_key, const RuntimeMethod* method) 
{
	{
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m95EFDF2600D3495DB59266D86D3B0B65020CBBE3(__this, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 26));
		return (bool)((((int32_t)((((int32_t)L_1) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsValue_mC41A410EBCE9128F9F527DF0FCA5087FD1867FF5 (Dictionary_2_tE7C86B2C5A23A1F27C98C2B36D5E45FA457F6090* __this, FontAssetRef_t7B8E634754BC5683F1E6601D7CD0061285A28FF3 ___0_value, const RuntimeMethod* method) 
{
	EntryU5BU5D_t8D700A36ADEAE6E64D092B1F2FF95391E5A03F6C* V_0 = NULL;
	int32_t V_1 = 0;
	FontAssetRef_t7B8E634754BC5683F1E6601D7CD0061285A28FF3 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	EqualityComparer_1_tC81AF0456B0ECB7415E30894699AAB099256D323* V_4 = NULL;
	int32_t V_5 = 0;
	{
		EntryU5BU5D_t8D700A36ADEAE6E64D092B1F2FF95391E5A03F6C* L_0 = __this->____entries;
		V_0 = L_0;
		goto IL_0049;
	}

IL_0049:
	{
		il2cpp_codegen_initobj((&V_2), sizeof(FontAssetRef_t7B8E634754BC5683F1E6601D7CD0061285A28FF3));
	}
	{
		V_3 = 0;
		goto IL_008b;
	}

IL_005d:
	{
		EntryU5BU5D_t8D700A36ADEAE6E64D092B1F2FF95391E5A03F6C* L_3 = V_0;
		int32_t L_4 = V_3;
		int32_t L_5 = ((L_3)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_4)))->___hashCode;
		if ((((int32_t)L_5) < ((int32_t)0)))
		{
			goto IL_0087;
		}
	}
	{
		EqualityComparer_1_tC81AF0456B0ECB7415E30894699AAB099256D323* L_6;
		L_6 = EqualityComparer_1_get_Default_m4626BA1582304AE05985ABD8E116508974651F1E_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 28));
		EntryU5BU5D_t8D700A36ADEAE6E64D092B1F2FF95391E5A03F6C* L_7 = V_0;
		int32_t L_8 = V_3;
		FontAssetRef_t7B8E634754BC5683F1E6601D7CD0061285A28FF3 L_9 = ((L_7)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_8)))->___value;
		FontAssetRef_t7B8E634754BC5683F1E6601D7CD0061285A28FF3 L_10 = ___0_value;
		bool L_11;
		L_11 = VirtualFuncInvoker2< bool, FontAssetRef_t7B8E634754BC5683F1E6601D7CD0061285A28FF3, FontAssetRef_t7B8E634754BC5683F1E6601D7CD0061285A28FF3 >::Invoke(8, L_6, L_9, L_10);
		if (!L_11)
		{
			goto IL_0087;
		}
	}
	{
		return (bool)1;
	}

IL_0087:
	{
		int32_t L_12 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_008b:
	{
		int32_t L_13 = V_3;
		int32_t L_14 = __this->____count;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_005d;
		}
	}
	{
		goto IL_00db;
	}

IL_00db:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_m7F65CF8F69C819C98EF07594FCF7A7C0DA75DD88 (Dictionary_2_tE7C86B2C5A23A1F27C98C2B36D5E45FA457F6090* __this, KeyValuePair_2U5BU5D_t22BD4C2009997AFE758B947C2D08853C305EA502* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	EntryU5BU5D_t8D700A36ADEAE6E64D092B1F2FF95391E5A03F6C* V_1 = NULL;
	int32_t V_2 = 0;
	{
		KeyValuePair_2U5BU5D_t22BD4C2009997AFE758B947C2D08853C305EA502* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(3, NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_index;
		KeyValuePair_2U5BU5D_t22BD4C2009997AFE758B947C2D08853C305EA502* L_2 = ___0_array;
		int32_t L_3 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_2)->max_length),NULL));
		if ((!(((uint32_t)L_1) > ((uint32_t)L_3))))
		{
			goto IL_0014;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0014:
	{
		KeyValuePair_2U5BU5D_t22BD4C2009997AFE758B947C2D08853C305EA502* L_4 = ___0_array;
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		int32_t L_6 = ___1_index;
		int32_t L_7;
		L_7 = Dictionary_2_get_Count_m2C6E37F54AC67C3A604B7502CC45BC15C37ECBA8(__this, NULL);
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_5, L_6))) >= ((int32_t)L_7)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(5, NULL);
	}

IL_0027:
	{
		int32_t L_8 = __this->____count;
		V_0 = L_8;
		EntryU5BU5D_t8D700A36ADEAE6E64D092B1F2FF95391E5A03F6C* L_9 = __this->____entries;
		V_1 = L_9;
		V_2 = 0;
		goto IL_0075;
	}

IL_0039:
	{
		EntryU5BU5D_t8D700A36ADEAE6E64D092B1F2FF95391E5A03F6C* L_10 = V_1;
		int32_t L_11 = V_2;
		int32_t L_12 = ((L_10)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_11)))->___hashCode;
		if ((((int32_t)L_12) < ((int32_t)0)))
		{
			goto IL_0071;
		}
	}
	{
		KeyValuePair_2U5BU5D_t22BD4C2009997AFE758B947C2D08853C305EA502* L_13 = ___0_array;
		int32_t L_14 = ___1_index;
		int32_t L_15 = L_14;
		___1_index = ((int32_t)il2cpp_codegen_add(L_15, 1));
		EntryU5BU5D_t8D700A36ADEAE6E64D092B1F2FF95391E5A03F6C* L_16 = V_1;
		int32_t L_17 = V_2;
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 L_18 = ((L_16)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_17)))->___key;
		EntryU5BU5D_t8D700A36ADEAE6E64D092B1F2FF95391E5A03F6C* L_19 = V_1;
		int32_t L_20 = V_2;
		FontAssetRef_t7B8E634754BC5683F1E6601D7CD0061285A28FF3 L_21 = ((L_19)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_20)))->___value;
		KeyValuePair_2_t0BE50338B196BFD79E02288350CE100D1C15D165 L_22;
		memset((&L_22), 0, sizeof(L_22));
		KeyValuePair_2__ctor_m46844DA2290BECEBDC1CBAC6D64267E0E522303A((&L_22), L_18, L_21, NULL);
		(L_13)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_15), (KeyValuePair_2_t0BE50338B196BFD79E02288350CE100D1C15D165)L_22);
	}

IL_0071:
	{
		int32_t L_23 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_0075:
	{
		int32_t L_24 = V_2;
		int32_t L_25 = V_0;
		if ((((int32_t)L_24) < ((int32_t)L_25)))
		{
			goto IL_0039;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t8527DBFE64E77B68270A483C17805985F00CE92F Dictionary_2_GetEnumerator_mB4B43A37087FA9C933CCFD500C2E21750F2B5569 (Dictionary_2_tE7C86B2C5A23A1F27C98C2B36D5E45FA457F6090* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t8527DBFE64E77B68270A483C17805985F00CE92F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mCFF2B87BFC039D1040F6DEFD6DEA90A9F51A68ED((&L_0), __this, 2, NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m6189D22923664AF5FF5FF8A64FAE24B21D8D07F8 (Dictionary_2_tE7C86B2C5A23A1F27C98C2B36D5E45FA457F6090* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t8527DBFE64E77B68270A483C17805985F00CE92F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mCFF2B87BFC039D1040F6DEFD6DEA90A9F51A68ED((&L_0), __this, 2, NULL);
		Enumerator_t8527DBFE64E77B68270A483C17805985F00CE92F L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 32), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_GetObjectData_mAAF189C0669868CA8A1D333F0C7F7E4A5E6F5286 (Dictionary_2_tE7C86B2C5A23A1F27C98C2B36D5E45FA457F6090* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	KeyValuePair_2U5BU5D_t22BD4C2009997AFE758B947C2D08853C305EA502* V_0 = NULL;
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
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___0_info;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(4, NULL);
	}

IL_0009:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___0_info;
		int32_t L_2 = __this->____version;
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(L_1, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, L_2, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = ___0_info;
		RuntimeObject* L_4 = __this->____comparer;
		RuntimeObject* L_5 = L_4;
		if (L_5)
		{
			G_B4_0 = L_5;
			G_B4_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
			G_B4_2 = L_3;
			goto IL_002f;
		}
		G_B3_0 = L_5;
		G_B3_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
		G_B3_2 = L_3;
	}
	{
		EqualityComparer_1_t63A37CBBA150A456A5494B585BAAD61AEC84FCC3* L_6;
		L_6 = EqualityComparer_1_get_Default_m16781A8E4EDB2114168E318B51C5081028E57F3D_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2));
		G_B4_0 = ((RuntimeObject*)(L_6));
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
	}

IL_002f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 34)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(G_B4_2, G_B4_1, G_B4_0, L_8, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_9 = ___0_info;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = __this->____buckets;
		if (!L_10)
		{
			G_B6_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
			G_B6_1 = L_9;
			goto IL_0056;
		}
		G_B5_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
		G_B5_1 = L_9;
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____buckets;
		int32_t L_12 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_11)->max_length),NULL));
		G_B7_0 = L_12;
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
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(G_B7_2, G_B7_1, G_B7_0, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = __this->____buckets;
		if (!L_13)
		{
			goto IL_008e;
		}
	}
	{
		int32_t L_14;
		L_14 = Dictionary_2_get_Count_m2C6E37F54AC67C3A604B7502CC45BC15C37ECBA8(__this, NULL);
		KeyValuePair_2U5BU5D_t22BD4C2009997AFE758B947C2D08853C305EA502* L_15 = (KeyValuePair_2U5BU5D_t22BD4C2009997AFE758B947C2D08853C305EA502*)(KeyValuePair_2U5BU5D_t22BD4C2009997AFE758B947C2D08853C305EA502*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 36), (uint32_t)L_14);
		V_0 = L_15;
		KeyValuePair_2U5BU5D_t22BD4C2009997AFE758B947C2D08853C305EA502* L_16 = V_0;
		Dictionary_2_CopyTo_m7F65CF8F69C819C98EF07594FCF7A7C0DA75DD88(__this, L_16, 0, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_17 = ___0_info;
		KeyValuePair_2U5BU5D_t22BD4C2009997AFE758B947C2D08853C305EA502* L_18 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 38)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(L_17, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, (RuntimeObject*)L_18, L_20, NULL);
	}

IL_008e:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_m95EFDF2600D3495DB59266D86D3B0B65020CBBE3 (Dictionary_2_tE7C86B2C5A23A1F27C98C2B36D5E45FA457F6090* __this, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	EntryU5BU5D_t8D700A36ADEAE6E64D092B1F2FF95391E5A03F6C* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	int32_t V_5 = 0;
	EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 V_6;
	memset((&V_6), 0, sizeof(V_6));
	EqualityComparer_1_t63A37CBBA150A456A5494B585BAAD61AEC84FCC3* V_7 = NULL;
	int32_t V_8 = 0;
	{
		goto IL_000e;
	}

IL_000e:
	{
		V_0 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		V_1 = L_1;
		EntryU5BU5D_t8D700A36ADEAE6E64D092B1F2FF95391E5A03F6C* L_2 = __this->____entries;
		V_2 = L_2;
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = V_1;
		if (!L_3)
		{
			goto IL_0175;
		}
	}
	{
		RuntimeObject* L_4 = __this->____comparer;
		V_4 = L_4;
		RuntimeObject* L_5 = V_4;
		if (L_5)
		{
			goto IL_0110;
		}
	}
	{
		int32_t L_6;
		L_6 = EntityId_GetHashCode_m7B7BE3CC221C5EEAB3D2E64BD632F057E7931410((&___0_key), NULL);
		V_5 = ((int32_t)(L_6&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = V_1;
		int32_t L_8 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = V_1;
		int32_t L_10 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_9)->max_length),NULL));
		int32_t L_11 = ((int32_t)(L_8%L_10));
		int32_t L_12 = (L_7)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_11));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
		il2cpp_codegen_initobj((&V_6), sizeof(EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8));
	}

IL_0066:
	{
		int32_t L_14 = V_0;
		EntryU5BU5D_t8D700A36ADEAE6E64D092B1F2FF95391E5A03F6C* L_15 = V_2;
		int32_t L_16 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_15)->max_length),NULL));
		if ((!(((uint32_t)L_14) < ((uint32_t)L_16))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_t8D700A36ADEAE6E64D092B1F2FF95391E5A03F6C* L_17 = V_2;
		int32_t L_18 = V_0;
		int32_t L_19 = ((L_17)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_18)))->___hashCode;
		int32_t L_20 = V_5;
		if ((!(((uint32_t)L_19) == ((uint32_t)L_20))))
		{
			goto IL_009b;
		}
	}
	{
		EqualityComparer_1_t63A37CBBA150A456A5494B585BAAD61AEC84FCC3* L_21;
		L_21 = EqualityComparer_1_get_Default_m16781A8E4EDB2114168E318B51C5081028E57F3D_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2));
		EntryU5BU5D_t8D700A36ADEAE6E64D092B1F2FF95391E5A03F6C* L_22 = V_2;
		int32_t L_23 = V_0;
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 L_24 = ((L_22)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_23)))->___key;
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 L_25 = ___0_key;
		bool L_26;
		L_26 = VirtualFuncInvoker2< bool, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 >::Invoke(8, L_21, L_24, L_25);
		if (L_26)
		{
			goto IL_0175;
		}
	}

IL_009b:
	{
		EntryU5BU5D_t8D700A36ADEAE6E64D092B1F2FF95391E5A03F6C* L_27 = V_2;
		int32_t L_28 = V_0;
		int32_t L_29 = ((L_27)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_28)))->___next;
		V_0 = L_29;
		int32_t L_30 = V_3;
		EntryU5BU5D_t8D700A36ADEAE6E64D092B1F2FF95391E5A03F6C* L_31 = V_2;
		int32_t L_32 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_31)->max_length),NULL));
		if ((((int32_t)L_30) < ((int32_t)L_32)))
		{
			goto IL_00b3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_00b3:
	{
		int32_t L_33 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_33, 1));
		goto IL_0066;
	}

IL_0110:
	{
		RuntimeObject* L_34 = V_4;
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 L_35 = ___0_key;
		int32_t L_36;
		L_36 = InterfaceFuncInvoker1< int32_t, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 >::Invoke(1, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 35), L_34, L_35);
		V_8 = ((int32_t)(L_36&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_37 = V_1;
		int32_t L_38 = V_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_39 = V_1;
		int32_t L_40 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_39)->max_length),NULL));
		int32_t L_41 = ((int32_t)(L_38%L_40));
		int32_t L_42 = (L_37)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_41));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_42, 1));
	}

IL_012b:
	{
		int32_t L_43 = V_0;
		EntryU5BU5D_t8D700A36ADEAE6E64D092B1F2FF95391E5A03F6C* L_44 = V_2;
		int32_t L_45 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_44)->max_length),NULL));
		if ((!(((uint32_t)L_43) < ((uint32_t)L_45))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_t8D700A36ADEAE6E64D092B1F2FF95391E5A03F6C* L_46 = V_2;
		int32_t L_47 = V_0;
		int32_t L_48 = ((L_46)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_47)))->___hashCode;
		int32_t L_49 = V_8;
		if ((!(((uint32_t)L_48) == ((uint32_t)L_49))))
		{
			goto IL_0157;
		}
	}
	{
		RuntimeObject* L_50 = V_4;
		EntryU5BU5D_t8D700A36ADEAE6E64D092B1F2FF95391E5A03F6C* L_51 = V_2;
		int32_t L_52 = V_0;
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 L_53 = ((L_51)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_52)))->___key;
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 L_54 = ___0_key;
		bool L_55;
		L_55 = InterfaceFuncInvoker2< bool, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 35), L_50, L_53, L_54);
		if (L_55)
		{
			goto IL_0175;
		}
	}

IL_0157:
	{
		EntryU5BU5D_t8D700A36ADEAE6E64D092B1F2FF95391E5A03F6C* L_56 = V_2;
		int32_t L_57 = V_0;
		int32_t L_58 = ((L_56)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_57)))->___next;
		V_0 = L_58;
		int32_t L_59 = V_3;
		EntryU5BU5D_t8D700A36ADEAE6E64D092B1F2FF95391E5A03F6C* L_60 = V_2;
		int32_t L_61 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_60)->max_length),NULL));
		if ((((int32_t)L_59) < ((int32_t)L_61)))
		{
			goto IL_016f;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_016f:
	{
		int32_t L_62 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_62, 1));
		goto IL_012b;
	}

IL_0175:
	{
		int32_t L_63 = V_0;
		return L_63;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_m38FB2D8763ADDB1128BA8DB0BB9A2D576F7220E8 (Dictionary_2_tE7C86B2C5A23A1F27C98C2B36D5E45FA457F6090* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit);
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_capacity;
		CHECKED_LOCAL_INIT(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit,(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_1;
		L_1 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_0, NULL);
		V_0 = L_1;
		__this->____freeList = (-1);
		int32_t L_2 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_2);
		__this->____buckets = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_3);
		int32_t L_4 = V_0;
		EntryU5BU5D_t8D700A36ADEAE6E64D092B1F2FF95391E5A03F6C* L_5 = (EntryU5BU5D_t8D700A36ADEAE6E64D092B1F2FF95391E5A03F6C*)(EntryU5BU5D_t8D700A36ADEAE6E64D092B1F2FF95391E5A03F6C*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 43), (uint32_t)L_4);
		__this->____entries = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries), (void*)L_5);
		int32_t L_6 = V_0;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_m7265AD1FB7FEE07B51E4A3D1783ABFBF9BDED62F (Dictionary_2_tE7C86B2C5A23A1F27C98C2B36D5E45FA457F6090* __this, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___0_key, FontAssetRef_t7B8E634754BC5683F1E6601D7CD0061285A28FF3 ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method) 
{
	EntryU5BU5D_t8D700A36ADEAE6E64D092B1F2FF95391E5A03F6C* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	int32_t V_8 = 0;
	int32_t* V_9 = NULL;
	Entry_t75CD478BC9A5CC3855BC163C86C3ABA9C5B86E60* V_10 = NULL;
	EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 V_11;
	memset((&V_11), 0, sizeof(V_11));
	EqualityComparer_1_t63A37CBBA150A456A5494B585BAAD61AEC84FCC3* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t G_B7_0 = 0;
	int32_t* G_B51_0 = NULL;
	{
		goto IL_000e;
	}

IL_000e:
	{
		int32_t L_1 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_1, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->____buckets;
		if (L_2)
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_3;
		L_3 = Dictionary_2_Initialize_m38FB2D8763ADDB1128BA8DB0BB9A2D576F7220E8(__this, 0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 1));
	}

IL_002c:
	{
		EntryU5BU5D_t8D700A36ADEAE6E64D092B1F2FF95391E5A03F6C* L_4 = __this->____entries;
		V_0 = L_4;
		RuntimeObject* L_5 = __this->____comparer;
		V_1 = L_5;
		RuntimeObject* L_6 = V_1;
		if (!L_6)
		{
			goto IL_0046;
		}
	}
	{
		RuntimeObject* L_7 = V_1;
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 L_8 = ___0_key;
		int32_t L_9;
		L_9 = InterfaceFuncInvoker1< int32_t, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 >::Invoke(1, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 35), L_7, L_8);
		G_B7_0 = L_9;
		goto IL_0053;
	}

IL_0046:
	{
		int32_t L_10;
		L_10 = EntityId_GetHashCode_m7B7BE3CC221C5EEAB3D2E64BD632F057E7931410((&___0_key), NULL);
		G_B7_0 = L_10;
	}

IL_0053:
	{
		V_2 = ((int32_t)(G_B7_0&((int32_t)2147483647LL)));
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____buckets;
		int32_t L_12 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = __this->____buckets;
		int32_t L_14 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_13)->max_length),NULL));
		V_4 = ((L_11)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)(L_12%L_14)))));
		int32_t* L_15 = V_4;
		int32_t L_16 = *(L_15);
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_16, 1));
		RuntimeObject* L_17 = V_1;
		if (L_17)
		{
			goto IL_0187;
		}
	}
	{
		il2cpp_codegen_initobj((&V_11), sizeof(EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8));
	}

IL_0091:
	{
		int32_t L_19 = V_5;
		EntryU5BU5D_t8D700A36ADEAE6E64D092B1F2FF95391E5A03F6C* L_20 = V_0;
		int32_t L_21 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_20)->max_length),NULL));
		if ((!(((uint32_t)L_19) < ((uint32_t)L_21))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_t8D700A36ADEAE6E64D092B1F2FF95391E5A03F6C* L_22 = V_0;
		int32_t L_23 = V_5;
		int32_t L_24 = ((L_22)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_23)))->___hashCode;
		int32_t L_25 = V_2;
		if ((!(((uint32_t)L_24) == ((uint32_t)L_25))))
		{
			goto IL_00ea;
		}
	}
	{
		EqualityComparer_1_t63A37CBBA150A456A5494B585BAAD61AEC84FCC3* L_26;
		L_26 = EqualityComparer_1_get_Default_m16781A8E4EDB2114168E318B51C5081028E57F3D_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2));
		EntryU5BU5D_t8D700A36ADEAE6E64D092B1F2FF95391E5A03F6C* L_27 = V_0;
		int32_t L_28 = V_5;
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 L_29 = ((L_27)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_28)))->___key;
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 L_30 = ___0_key;
		bool L_31;
		L_31 = VirtualFuncInvoker2< bool, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 >::Invoke(8, L_26, L_29, L_30);
		if (!L_31)
		{
			goto IL_00ea;
		}
	}
	{
		uint8_t L_32 = ___2_behavior;
		if ((!(((uint32_t)L_32) == ((uint32_t)1))))
		{
			goto IL_00d9;
		}
	}
	{
		EntryU5BU5D_t8D700A36ADEAE6E64D092B1F2FF95391E5A03F6C* L_33 = V_0;
		int32_t L_34 = V_5;
		FontAssetRef_t7B8E634754BC5683F1E6601D7CD0061285A28FF3 L_35 = ___1_value;
		((L_33)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_34)))->___value = L_35;
		Il2CppCodeGenWriteBarrier((void**)&(((&((L_33)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_34)))->___value))->___fontAsset), (void*)NULL);
		return (bool)1;
	}

IL_00d9:
	{
		uint8_t L_36 = ___2_behavior;
		if ((!(((uint32_t)L_36) == ((uint32_t)2))))
		{
			goto IL_00e8;
		}
	}
	{
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 L_37 = ___0_key;
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 L_38 = L_37;
		RuntimeObject* L_39 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 10), &L_38);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_39, NULL);
	}

IL_00e8:
	{
		return (bool)0;
	}

IL_00ea:
	{
		EntryU5BU5D_t8D700A36ADEAE6E64D092B1F2FF95391E5A03F6C* L_40 = V_0;
		int32_t L_41 = V_5;
		int32_t L_42 = ((L_40)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_41)))->___next;
		V_5 = L_42;
		int32_t L_43 = V_3;
		EntryU5BU5D_t8D700A36ADEAE6E64D092B1F2FF95391E5A03F6C* L_44 = V_0;
		int32_t L_45 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_44)->max_length),NULL));
		if ((((int32_t)L_43) < ((int32_t)L_45)))
		{
			goto IL_0104;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_0104:
	{
		int32_t L_46 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_46, 1));
		goto IL_0091;
	}

IL_0187:
	{
		int32_t L_47 = V_5;
		EntryU5BU5D_t8D700A36ADEAE6E64D092B1F2FF95391E5A03F6C* L_48 = V_0;
		int32_t L_49 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_48)->max_length),NULL));
		if ((!(((uint32_t)L_47) < ((uint32_t)L_49))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_t8D700A36ADEAE6E64D092B1F2FF95391E5A03F6C* L_50 = V_0;
		int32_t L_51 = V_5;
		int32_t L_52 = ((L_50)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_51)))->___hashCode;
		int32_t L_53 = V_2;
		if ((!(((uint32_t)L_52) == ((uint32_t)L_53))))
		{
			goto IL_01d9;
		}
	}
	{
		RuntimeObject* L_54 = V_1;
		EntryU5BU5D_t8D700A36ADEAE6E64D092B1F2FF95391E5A03F6C* L_55 = V_0;
		int32_t L_56 = V_5;
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 L_57 = ((L_55)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_56)))->___key;
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 L_58 = ___0_key;
		bool L_59;
		L_59 = InterfaceFuncInvoker2< bool, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 35), L_54, L_57, L_58);
		if (!L_59)
		{
			goto IL_01d9;
		}
	}
	{
		uint8_t L_60 = ___2_behavior;
		if ((!(((uint32_t)L_60) == ((uint32_t)1))))
		{
			goto IL_01c8;
		}
	}
	{
		EntryU5BU5D_t8D700A36ADEAE6E64D092B1F2FF95391E5A03F6C* L_61 = V_0;
		int32_t L_62 = V_5;
		FontAssetRef_t7B8E634754BC5683F1E6601D7CD0061285A28FF3 L_63 = ___1_value;
		((L_61)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_62)))->___value = L_63;
		Il2CppCodeGenWriteBarrier((void**)&(((&((L_61)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_62)))->___value))->___fontAsset), (void*)NULL);
		return (bool)1;
	}

IL_01c8:
	{
		uint8_t L_64 = ___2_behavior;
		if ((!(((uint32_t)L_64) == ((uint32_t)2))))
		{
			goto IL_01d7;
		}
	}
	{
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 L_65 = ___0_key;
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 L_66 = L_65;
		RuntimeObject* L_67 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 10), &L_66);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_67, NULL);
	}

IL_01d7:
	{
		return (bool)0;
	}

IL_01d9:
	{
		EntryU5BU5D_t8D700A36ADEAE6E64D092B1F2FF95391E5A03F6C* L_68 = V_0;
		int32_t L_69 = V_5;
		int32_t L_70 = ((L_68)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_69)))->___next;
		V_5 = L_70;
		int32_t L_71 = V_3;
		EntryU5BU5D_t8D700A36ADEAE6E64D092B1F2FF95391E5A03F6C* L_72 = V_0;
		int32_t L_73 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_72)->max_length),NULL));
		if ((((int32_t)L_71) < ((int32_t)L_73)))
		{
			goto IL_01f3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_01f3:
	{
		int32_t L_74 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_74, 1));
		goto IL_0187;
	}

IL_01f9:
	{
		V_6 = (bool)0;
		V_7 = (bool)0;
		int32_t L_75 = __this->____freeCount;
		if ((((int32_t)L_75) <= ((int32_t)0)))
		{
			goto IL_0223;
		}
	}
	{
		int32_t L_76 = __this->____freeList;
		V_8 = L_76;
		V_7 = (bool)1;
		int32_t L_77 = __this->____freeCount;
		__this->____freeCount = ((int32_t)il2cpp_codegen_subtract(L_77, 1));
		goto IL_0250;
	}

IL_0223:
	{
		int32_t L_78 = __this->____count;
		V_13 = L_78;
		int32_t L_79 = V_13;
		EntryU5BU5D_t8D700A36ADEAE6E64D092B1F2FF95391E5A03F6C* L_80 = V_0;
		int32_t L_81 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_80)->max_length),NULL));
		if ((!(((uint32_t)L_79) == ((uint32_t)L_81))))
		{
			goto IL_023b;
		}
	}
	{
		Dictionary_2_Resize_m6AA6E88B86D690834CA19A571C9B165455AB42BE(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 44));
		V_6 = (bool)1;
	}

IL_023b:
	{
		int32_t L_82 = V_13;
		V_8 = L_82;
		int32_t L_83 = V_13;
		__this->____count = ((int32_t)il2cpp_codegen_add(L_83, 1));
		EntryU5BU5D_t8D700A36ADEAE6E64D092B1F2FF95391E5A03F6C* L_84 = __this->____entries;
		V_0 = L_84;
	}

IL_0250:
	{
		bool L_85 = V_6;
		if (L_85)
		{
			goto IL_0258;
		}
	}
	{
		int32_t* L_86 = V_4;
		G_B51_0 = L_86;
		goto IL_026d;
	}

IL_0258:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_87 = __this->____buckets;
		int32_t L_88 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_89 = __this->____buckets;
		int32_t L_90 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_89)->max_length),NULL));
		G_B51_0 = ((L_87)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)(L_88%L_90)))));
	}

IL_026d:
	{
		V_9 = G_B51_0;
		EntryU5BU5D_t8D700A36ADEAE6E64D092B1F2FF95391E5A03F6C* L_91 = V_0;
		int32_t L_92 = V_8;
		V_10 = ((L_91)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_92)));
		bool L_93 = V_7;
		if (!L_93)
		{
			goto IL_028a;
		}
	}
	{
		Entry_t75CD478BC9A5CC3855BC163C86C3ABA9C5B86E60* L_94 = V_10;
		int32_t L_95 = L_94->___next;
		__this->____freeList = L_95;
	}

IL_028a:
	{
		Entry_t75CD478BC9A5CC3855BC163C86C3ABA9C5B86E60* L_96 = V_10;
		int32_t L_97 = V_2;
		L_96->___hashCode = L_97;
		Entry_t75CD478BC9A5CC3855BC163C86C3ABA9C5B86E60* L_98 = V_10;
		int32_t* L_99 = V_9;
		int32_t L_100 = *(L_99);
		L_98->___next = ((int32_t)il2cpp_codegen_subtract(L_100, 1));
		Entry_t75CD478BC9A5CC3855BC163C86C3ABA9C5B86E60* L_101 = V_10;
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 L_102 = ___0_key;
		L_101->___key = L_102;
		Entry_t75CD478BC9A5CC3855BC163C86C3ABA9C5B86E60* L_103 = V_10;
		FontAssetRef_t7B8E634754BC5683F1E6601D7CD0061285A28FF3 L_104 = ___1_value;
		L_103->___value = L_104;
		Il2CppCodeGenWriteBarrier((void**)&(((&L_103->___value))->___fontAsset), (void*)NULL);
		int32_t* L_105 = V_9;
		int32_t L_106 = V_8;
		*(L_105) = ((int32_t)il2cpp_codegen_add(L_106, 1));
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_OnDeserialization_m4C3A038C4D270A0450FC21F1F7CAAA8D1ED0E935 (Dictionary_2_tE7C86B2C5A23A1F27C98C2B36D5E45FA457F6090* __this, RuntimeObject* ___0_sender, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	KeyValuePair_2U5BU5D_t22BD4C2009997AFE758B947C2D08853C305EA502* V_3 = NULL;
	int32_t V_4 = 0;
	{
		CHECKED_LOCAL_INIT(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit,(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		bool L_1;
		L_1 = ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F(L_0, __this, (&V_0), ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
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
		int32_t L_4;
		L_4 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_3, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, NULL);
		V_1 = L_4;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_5 = V_0;
		int32_t L_6;
		L_6 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_5, _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69, NULL);
		V_2 = L_6;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_7 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 34)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		RuntimeObject* L_10;
		L_10 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_7, _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9, L_9, NULL);
		__this->____comparer = ((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 35)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 35))));
		int32_t L_11 = V_2;
		if (!L_11)
		{
			goto IL_00c9;
		}
	}
	{
		int32_t L_12 = V_2;
		int32_t L_13;
		L_13 = Dictionary_2_Initialize_m38FB2D8763ADDB1128BA8DB0BB9A2D576F7220E8(__this, L_12, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 1));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_14 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 38)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		RuntimeObject* L_17;
		L_17 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_14, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, L_16, NULL);
		V_3 = ((KeyValuePair_2U5BU5D_t22BD4C2009997AFE758B947C2D08853C305EA502*)CastclassSealed((RuntimeObject*)L_17, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 36)));
		KeyValuePair_2U5BU5D_t22BD4C2009997AFE758B947C2D08853C305EA502* L_18 = V_3;
		if (L_18)
		{
			goto IL_007a;
		}
	}
	{
		ThrowHelper_ThrowSerializationException_m03BE2B48CD3617C32FBCEE16030F7C5563E04E16(((int32_t)16), NULL);
	}

IL_007a:
	{
		V_4 = 0;
		goto IL_00c0;
	}

IL_007f:
	{
		KeyValuePair_2U5BU5D_t22BD4C2009997AFE758B947C2D08853C305EA502* L_19 = V_3;
		int32_t L_20 = V_4;
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 L_21;
		L_21 = KeyValuePair_2_get_Key_m4D827FF66807261BDE920B3D6816EC37082073B3_inline(((L_19)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_20))), NULL);
		goto IL_009a;
	}

IL_009a:
	{
		KeyValuePair_2U5BU5D_t22BD4C2009997AFE758B947C2D08853C305EA502* L_22 = V_3;
		int32_t L_23 = V_4;
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 L_24;
		L_24 = KeyValuePair_2_get_Key_m4D827FF66807261BDE920B3D6816EC37082073B3_inline(((L_22)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_23))), NULL);
		KeyValuePair_2U5BU5D_t22BD4C2009997AFE758B947C2D08853C305EA502* L_25 = V_3;
		int32_t L_26 = V_4;
		FontAssetRef_t7B8E634754BC5683F1E6601D7CD0061285A28FF3 L_27;
		L_27 = KeyValuePair_2_get_Value_mC82FE8FDC9CEC01214097444FE6D11C920B45461_inline(((L_25)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_26))), NULL);
		Dictionary_2_Add_mC8F79C526E4358DD840D85CB26C87DF16E570D42(__this, L_24, L_27, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14));
		int32_t L_28 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_00c0:
	{
		int32_t L_29 = V_4;
		KeyValuePair_2U5BU5D_t22BD4C2009997AFE758B947C2D08853C305EA502* L_30 = V_3;
		int32_t L_31 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_30)->max_length),NULL));
		if ((((int32_t)L_29) < ((int32_t)L_31)))
		{
			goto IL_007f;
		}
	}
	{
		goto IL_00d0;
	}

IL_00c9:
	{
		__this->____buckets = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
	}

IL_00d0:
	{
		int32_t L_32 = V_1;
		__this->____version = L_32;
		CHECKED_LOCAL_INIT(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit,(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_33;
		L_33 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		bool L_34;
		L_34 = ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E(L_33, __this, ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m6AA6E88B86D690834CA19A571C9B165455AB42BE (Dictionary_2_tE7C86B2C5A23A1F27C98C2B36D5E45FA457F6090* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit);
	{
		int32_t L_0 = __this->____count;
		CHECKED_LOCAL_INIT(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit,(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_1;
		L_1 = HashHelpers_ExpandPrime_m9A35EC171AA0EA16F7C9F71EE6FAD5A82565ADB9(L_0, NULL);
		Dictionary_2_Resize_m394708D42EFC53386FC1C03666B137E135E5CFE7(__this, L_1, (bool)0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 45));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m394708D42EFC53386FC1C03666B137E135E5CFE7 (Dictionary_2_tE7C86B2C5A23A1F27C98C2B36D5E45FA457F6090* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	EntryU5BU5D_t8D700A36ADEAE6E64D092B1F2FF95391E5A03F6C* V_1 = NULL;
	int32_t V_2 = 0;
	EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		int32_t L_0 = ___0_newSize;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = ___0_newSize;
		EntryU5BU5D_t8D700A36ADEAE6E64D092B1F2FF95391E5A03F6C* L_3 = (EntryU5BU5D_t8D700A36ADEAE6E64D092B1F2FF95391E5A03F6C*)(EntryU5BU5D_t8D700A36ADEAE6E64D092B1F2FF95391E5A03F6C*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 43), (uint32_t)L_2);
		V_1 = L_3;
		int32_t L_4 = __this->____count;
		V_2 = L_4;
		EntryU5BU5D_t8D700A36ADEAE6E64D092B1F2FF95391E5A03F6C* L_5 = __this->____entries;
		EntryU5BU5D_t8D700A36ADEAE6E64D092B1F2FF95391E5A03F6C* L_6 = V_1;
		int32_t L_7 = V_2;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, 0, (RuntimeArray*)L_6, 0, L_7, NULL);
		il2cpp_codegen_initobj((&V_3), sizeof(EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8));
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 L_8 = V_3;
		bool L_9 = ___1_forceNewHashCodes;
		if (!((int32_t)((int32_t)false&(int32_t)L_9)))
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
		EntryU5BU5D_t8D700A36ADEAE6E64D092B1F2FF95391E5A03F6C* L_10 = V_1;
		int32_t L_11 = V_4;
		int32_t L_12 = ((L_10)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_11)))->___hashCode;
		if ((((int32_t)L_12) < ((int32_t)0)))
		{
			goto IL_0079;
		}
	}
	{
		EntryU5BU5D_t8D700A36ADEAE6E64D092B1F2FF95391E5A03F6C* L_13 = V_1;
		int32_t L_14 = V_4;
		EntryU5BU5D_t8D700A36ADEAE6E64D092B1F2FF95391E5A03F6C* L_15 = V_1;
		int32_t L_16 = V_4;
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8* L_17 = (EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8*)(&((L_15)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_16)))->___key);
		int32_t L_18;
		L_18 = EntityId_GetHashCode_m7B7BE3CC221C5EEAB3D2E64BD632F057E7931410(L_17, NULL);
		((L_13)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_14)))->___hashCode = ((int32_t)(L_18&((int32_t)2147483647LL)));
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
		EntryU5BU5D_t8D700A36ADEAE6E64D092B1F2FF95391E5A03F6C* L_22 = V_1;
		int32_t L_23 = V_5;
		int32_t L_24 = ((L_22)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_23)))->___hashCode;
		if ((((int32_t)L_24) < ((int32_t)0)))
		{
			goto IL_00c5;
		}
	}
	{
		EntryU5BU5D_t8D700A36ADEAE6E64D092B1F2FF95391E5A03F6C* L_25 = V_1;
		int32_t L_26 = V_5;
		int32_t L_27 = ((L_25)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_26)))->___hashCode;
		int32_t L_28 = ___0_newSize;
		V_6 = ((int32_t)(L_27%L_28));
		EntryU5BU5D_t8D700A36ADEAE6E64D092B1F2FF95391E5A03F6C* L_29 = V_1;
		int32_t L_30 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = V_0;
		int32_t L_32 = V_6;
		int32_t L_33 = L_32;
		int32_t L_34 = (L_31)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_33));
		((L_29)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_30)))->___next = ((int32_t)il2cpp_codegen_subtract(L_34, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_35 = V_0;
		int32_t L_36 = V_6;
		int32_t L_37 = V_5;
		(L_35)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_36), (int32_t)((int32_t)il2cpp_codegen_add(L_37, 1)));
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
		__this->____buckets = L_41;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_41);
		EntryU5BU5D_t8D700A36ADEAE6E64D092B1F2FF95391E5A03F6C* L_42 = V_1;
		__this->____entries = L_42;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries), (void*)L_42);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m54197D4C6A7E708E2AC7BC107AC24F565AD687DA (Dictionary_2_tE7C86B2C5A23A1F27C98C2B36D5E45FA457F6090* __this, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Entry_t75CD478BC9A5CC3855BC163C86C3ABA9C5B86E60* V_4 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	RuntimeObject* G_B10_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	bool G_B11_0 = false;
	{
		goto IL_000e;
	}

IL_000e:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		if (!L_1)
		{
			goto IL_0149;
		}
	}
	{
		RuntimeObject* L_2 = __this->____comparer;
		RuntimeObject* L_3 = L_2;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_0032;
		}
		G_B4_0 = L_3;
	}
	{
		int32_t L_4;
		L_4 = EntityId_GetHashCode_m7B7BE3CC221C5EEAB3D2E64BD632F057E7931410((&___0_key), NULL);
		G_B6_0 = L_4;
		goto IL_0038;
	}

IL_0032:
	{
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 L_5 = ___0_key;
		int32_t L_6;
		L_6 = InterfaceFuncInvoker1< int32_t, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 >::Invoke(1, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 35), G_B5_0, L_5);
		G_B6_0 = L_6;
	}

IL_0038:
	{
		V_0 = ((int32_t)(G_B6_0&((int32_t)2147483647LL)));
		int32_t L_7 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = __this->____buckets;
		int32_t L_9 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_8)->max_length),NULL));
		V_1 = ((int32_t)(L_7%L_9));
		V_2 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = __this->____buckets;
		int32_t L_11 = V_1;
		int32_t L_12 = L_11;
		int32_t L_13 = (L_10)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_12));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_13, 1));
		goto IL_0142;
	}

IL_005c:
	{
		EntryU5BU5D_t8D700A36ADEAE6E64D092B1F2FF95391E5A03F6C* L_14 = __this->____entries;
		int32_t L_15 = V_3;
		V_4 = ((L_14)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_15)));
		Entry_t75CD478BC9A5CC3855BC163C86C3ABA9C5B86E60* L_16 = V_4;
		int32_t L_17 = L_16->___hashCode;
		int32_t L_18 = V_0;
		if ((!(((uint32_t)L_17) == ((uint32_t)L_18))))
		{
			goto IL_0138;
		}
	}
	{
		RuntimeObject* L_19 = __this->____comparer;
		RuntimeObject* L_20 = L_19;
		if (L_20)
		{
			G_B10_0 = L_20;
			goto IL_0095;
		}
		G_B9_0 = L_20;
	}
	{
		EqualityComparer_1_t63A37CBBA150A456A5494B585BAAD61AEC84FCC3* L_21;
		L_21 = EqualityComparer_1_get_Default_m16781A8E4EDB2114168E318B51C5081028E57F3D_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2));
		Entry_t75CD478BC9A5CC3855BC163C86C3ABA9C5B86E60* L_22 = V_4;
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 L_23 = L_22->___key;
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 L_24 = ___0_key;
		bool L_25;
		L_25 = VirtualFuncInvoker2< bool, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 >::Invoke(8, L_21, L_23, L_24);
		G_B11_0 = L_25;
		goto IL_00a2;
	}

IL_0095:
	{
		Entry_t75CD478BC9A5CC3855BC163C86C3ABA9C5B86E60* L_26 = V_4;
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 L_27 = L_26->___key;
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 L_28 = ___0_key;
		bool L_29;
		L_29 = InterfaceFuncInvoker2< bool, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 35), G_B10_0, L_27, L_28);
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
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = __this->____buckets;
		int32_t L_32 = V_1;
		Entry_t75CD478BC9A5CC3855BC163C86C3ABA9C5B86E60* L_33 = V_4;
		int32_t L_34 = L_33->___next;
		(L_31)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_32), (int32_t)((int32_t)il2cpp_codegen_add(L_34, 1)));
		goto IL_00d6;
	}

IL_00be:
	{
		EntryU5BU5D_t8D700A36ADEAE6E64D092B1F2FF95391E5A03F6C* L_35 = __this->____entries;
		int32_t L_36 = V_2;
		Entry_t75CD478BC9A5CC3855BC163C86C3ABA9C5B86E60* L_37 = V_4;
		int32_t L_38 = L_37->___next;
		((L_35)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_36)))->___next = L_38;
	}

IL_00d6:
	{
		Entry_t75CD478BC9A5CC3855BC163C86C3ABA9C5B86E60* L_39 = V_4;
		L_39->___hashCode = (-1);
		Entry_t75CD478BC9A5CC3855BC163C86C3ABA9C5B86E60* L_40 = V_4;
		int32_t L_41 = __this->____freeList;
		L_40->___next = L_41;
		goto IL_00ff;
	}

IL_00ff:
	{
	}
	{
		Entry_t75CD478BC9A5CC3855BC163C86C3ABA9C5B86E60* L_42 = V_4;
		FontAssetRef_t7B8E634754BC5683F1E6601D7CD0061285A28FF3* L_43 = (FontAssetRef_t7B8E634754BC5683F1E6601D7CD0061285A28FF3*)(&L_42->___value);
		il2cpp_codegen_initobj(L_43, sizeof(FontAssetRef_t7B8E634754BC5683F1E6601D7CD0061285A28FF3));
	}

IL_0113:
	{
		int32_t L_44 = V_3;
		__this->____freeList = L_44;
		int32_t L_45 = __this->____freeCount;
		__this->____freeCount = ((int32_t)il2cpp_codegen_add(L_45, 1));
		int32_t L_46 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_46, 1));
		return (bool)1;
	}

IL_0138:
	{
		int32_t L_47 = V_3;
		V_2 = L_47;
		Entry_t75CD478BC9A5CC3855BC163C86C3ABA9C5B86E60* L_48 = V_4;
		int32_t L_49 = L_48->___next;
		V_3 = L_49;
	}

IL_0142:
	{
		int32_t L_50 = V_3;
		if ((((int32_t)L_50) >= ((int32_t)0)))
		{
			goto IL_005c;
		}
	}

IL_0149:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m40EF23E4057CFBDB458710BC2023CFA3DE0DE9DE (Dictionary_2_tE7C86B2C5A23A1F27C98C2B36D5E45FA457F6090* __this, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___0_key, FontAssetRef_t7B8E634754BC5683F1E6601D7CD0061285A28FF3* ___1_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Entry_t75CD478BC9A5CC3855BC163C86C3ABA9C5B86E60* V_4 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	RuntimeObject* G_B10_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	bool G_B11_0 = false;
	{
		goto IL_000e;
	}

IL_000e:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		if (!L_1)
		{
			goto IL_0156;
		}
	}
	{
		RuntimeObject* L_2 = __this->____comparer;
		RuntimeObject* L_3 = L_2;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_0032;
		}
		G_B4_0 = L_3;
	}
	{
		int32_t L_4;
		L_4 = EntityId_GetHashCode_m7B7BE3CC221C5EEAB3D2E64BD632F057E7931410((&___0_key), NULL);
		G_B6_0 = L_4;
		goto IL_0038;
	}

IL_0032:
	{
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 L_5 = ___0_key;
		int32_t L_6;
		L_6 = InterfaceFuncInvoker1< int32_t, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 >::Invoke(1, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 35), G_B5_0, L_5);
		G_B6_0 = L_6;
	}

IL_0038:
	{
		V_0 = ((int32_t)(G_B6_0&((int32_t)2147483647LL)));
		int32_t L_7 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = __this->____buckets;
		int32_t L_9 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_8)->max_length),NULL));
		V_1 = ((int32_t)(L_7%L_9));
		V_2 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = __this->____buckets;
		int32_t L_11 = V_1;
		int32_t L_12 = L_11;
		int32_t L_13 = (L_10)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_12));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_13, 1));
		goto IL_014f;
	}

IL_005c:
	{
		EntryU5BU5D_t8D700A36ADEAE6E64D092B1F2FF95391E5A03F6C* L_14 = __this->____entries;
		int32_t L_15 = V_3;
		V_4 = ((L_14)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_15)));
		Entry_t75CD478BC9A5CC3855BC163C86C3ABA9C5B86E60* L_16 = V_4;
		int32_t L_17 = L_16->___hashCode;
		int32_t L_18 = V_0;
		if ((!(((uint32_t)L_17) == ((uint32_t)L_18))))
		{
			goto IL_0145;
		}
	}
	{
		RuntimeObject* L_19 = __this->____comparer;
		RuntimeObject* L_20 = L_19;
		if (L_20)
		{
			G_B10_0 = L_20;
			goto IL_0095;
		}
		G_B9_0 = L_20;
	}
	{
		EqualityComparer_1_t63A37CBBA150A456A5494B585BAAD61AEC84FCC3* L_21;
		L_21 = EqualityComparer_1_get_Default_m16781A8E4EDB2114168E318B51C5081028E57F3D_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2));
		Entry_t75CD478BC9A5CC3855BC163C86C3ABA9C5B86E60* L_22 = V_4;
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 L_23 = L_22->___key;
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 L_24 = ___0_key;
		bool L_25;
		L_25 = VirtualFuncInvoker2< bool, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 >::Invoke(8, L_21, L_23, L_24);
		G_B11_0 = L_25;
		goto IL_00a2;
	}

IL_0095:
	{
		Entry_t75CD478BC9A5CC3855BC163C86C3ABA9C5B86E60* L_26 = V_4;
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 L_27 = L_26->___key;
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 L_28 = ___0_key;
		bool L_29;
		L_29 = InterfaceFuncInvoker2< bool, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 35), G_B10_0, L_27, L_28);
		G_B11_0 = L_29;
	}

IL_00a2:
	{
		if (!G_B11_0)
		{
			goto IL_0145;
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
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = __this->____buckets;
		int32_t L_32 = V_1;
		Entry_t75CD478BC9A5CC3855BC163C86C3ABA9C5B86E60* L_33 = V_4;
		int32_t L_34 = L_33->___next;
		(L_31)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_32), (int32_t)((int32_t)il2cpp_codegen_add(L_34, 1)));
		goto IL_00d6;
	}

IL_00be:
	{
		EntryU5BU5D_t8D700A36ADEAE6E64D092B1F2FF95391E5A03F6C* L_35 = __this->____entries;
		int32_t L_36 = V_2;
		Entry_t75CD478BC9A5CC3855BC163C86C3ABA9C5B86E60* L_37 = V_4;
		int32_t L_38 = L_37->___next;
		((L_35)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_36)))->___next = L_38;
	}

IL_00d6:
	{
		FontAssetRef_t7B8E634754BC5683F1E6601D7CD0061285A28FF3* L_39 = ___1_value;
		Entry_t75CD478BC9A5CC3855BC163C86C3ABA9C5B86E60* L_40 = V_4;
		FontAssetRef_t7B8E634754BC5683F1E6601D7CD0061285A28FF3 L_41 = L_40->___value;
		*(FontAssetRef_t7B8E634754BC5683F1E6601D7CD0061285A28FF3*)L_39 = L_41;
		Il2CppCodeGenWriteBarrier((void**)&(((FontAssetRef_t7B8E634754BC5683F1E6601D7CD0061285A28FF3*)L_39)->___fontAsset), (void*)NULL);
		Entry_t75CD478BC9A5CC3855BC163C86C3ABA9C5B86E60* L_42 = V_4;
		L_42->___hashCode = (-1);
		Entry_t75CD478BC9A5CC3855BC163C86C3ABA9C5B86E60* L_43 = V_4;
		int32_t L_44 = __this->____freeList;
		L_43->___next = L_44;
		goto IL_010c;
	}

IL_010c:
	{
	}
	{
		Entry_t75CD478BC9A5CC3855BC163C86C3ABA9C5B86E60* L_45 = V_4;
		FontAssetRef_t7B8E634754BC5683F1E6601D7CD0061285A28FF3* L_46 = (FontAssetRef_t7B8E634754BC5683F1E6601D7CD0061285A28FF3*)(&L_45->___value);
		il2cpp_codegen_initobj(L_46, sizeof(FontAssetRef_t7B8E634754BC5683F1E6601D7CD0061285A28FF3));
	}

IL_0120:
	{
		int32_t L_47 = V_3;
		__this->____freeList = L_47;
		int32_t L_48 = __this->____freeCount;
		__this->____freeCount = ((int32_t)il2cpp_codegen_add(L_48, 1));
		int32_t L_49 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_49, 1));
		return (bool)1;
	}

IL_0145:
	{
		int32_t L_50 = V_3;
		V_2 = L_50;
		Entry_t75CD478BC9A5CC3855BC163C86C3ABA9C5B86E60* L_51 = V_4;
		int32_t L_52 = L_51->___next;
		V_3 = L_52;
	}

IL_014f:
	{
		int32_t L_53 = V_3;
		if ((((int32_t)L_53) >= ((int32_t)0)))
		{
			goto IL_005c;
		}
	}

IL_0156:
	{
		FontAssetRef_t7B8E634754BC5683F1E6601D7CD0061285A28FF3* L_54 = ___1_value;
		il2cpp_codegen_initobj(L_54, sizeof(FontAssetRef_t7B8E634754BC5683F1E6601D7CD0061285A28FF3));
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m79D47CF25972681D449B255348EB50F896E0C2EB (Dictionary_2_tE7C86B2C5A23A1F27C98C2B36D5E45FA457F6090* __this, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___0_key, FontAssetRef_t7B8E634754BC5683F1E6601D7CD0061285A28FF3* ___1_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m95EFDF2600D3495DB59266D86D3B0B65020CBBE3(__this, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 26));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0025;
		}
	}
	{
		FontAssetRef_t7B8E634754BC5683F1E6601D7CD0061285A28FF3* L_3 = ___1_value;
		EntryU5BU5D_t8D700A36ADEAE6E64D092B1F2FF95391E5A03F6C* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		FontAssetRef_t7B8E634754BC5683F1E6601D7CD0061285A28FF3 L_6 = ((L_4)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		*(FontAssetRef_t7B8E634754BC5683F1E6601D7CD0061285A28FF3*)L_3 = L_6;
		Il2CppCodeGenWriteBarrier((void**)&(((FontAssetRef_t7B8E634754BC5683F1E6601D7CD0061285A28FF3*)L_3)->___fontAsset), (void*)NULL);
		return (bool)1;
	}

IL_0025:
	{
		FontAssetRef_t7B8E634754BC5683F1E6601D7CD0061285A28FF3* L_7 = ___1_value;
		il2cpp_codegen_initobj(L_7, sizeof(FontAssetRef_t7B8E634754BC5683F1E6601D7CD0061285A28FF3));
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryAdd_m34F90D4BA28A632EA32AAFA71C82EFC1B2829E9A (Dictionary_2_tE7C86B2C5A23A1F27C98C2B36D5E45FA457F6090* __this, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___0_key, FontAssetRef_t7B8E634754BC5683F1E6601D7CD0061285A28FF3 ___1_value, const RuntimeMethod* method) 
{
	{
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 L_0 = ___0_key;
		FontAssetRef_t7B8E634754BC5683F1E6601D7CD0061285A28FF3 L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_m7265AD1FB7FEE07B51E4A3D1783ABFBF9BDED62F(__this, L_0, L_1, 0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 27));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m7275ADC8AC160CA585742973531D59C3CE717521 (Dictionary_2_tE7C86B2C5A23A1F27C98C2B36D5E45FA457F6090* __this, KeyValuePair_2U5BU5D_t22BD4C2009997AFE758B947C2D08853C305EA502* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2U5BU5D_t22BD4C2009997AFE758B947C2D08853C305EA502* L_0 = ___0_array;
		int32_t L_1 = ___1_index;
		Dictionary_2_CopyTo_m7F65CF8F69C819C98EF07594FCF7A7C0DA75DD88(__this, L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_ICollection_CopyTo_mB542B46A6857820643225D69A3505BABA943ED77 (Dictionary_2_tE7C86B2C5A23A1F27C98C2B36D5E45FA457F6090* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_t22BD4C2009997AFE758B947C2D08853C305EA502* V_0 = NULL;
	DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* V_1 = NULL;
	EntryU5BU5D_t8D700A36ADEAE6E64D092B1F2FF95391E5A03F6C* V_2 = NULL;
	int32_t V_3 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_4 = NULL;
	int32_t V_5 = 0;
	EntryU5BU5D_t8D700A36ADEAE6E64D092B1F2FF95391E5A03F6C* V_6 = NULL;
	int32_t V_7 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		int32_t L_2;
		L_2 = il2cpp_codegen_array_get_rank(L_1);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		RuntimeArray* L_6 = ___0_array;
		int32_t L_7;
		L_7 = il2cpp_codegen_array_get_length(L_6);
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
		RuntimeArray* L_8 = ___0_array;
		int32_t L_9;
		L_9 = il2cpp_codegen_array_get_length(L_8);
		int32_t L_10 = ___1_index;
		int32_t L_11;
		L_11 = Dictionary_2_get_Count_m2C6E37F54AC67C3A604B7502CC45BC15C37ECBA8(__this, NULL);
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_9, L_10))) >= ((int32_t)L_11)))
		{
			goto IL_004b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(5, NULL);
	}

IL_004b:
	{
		RuntimeArray* L_12 = ___0_array;
		V_0 = ((KeyValuePair_2U5BU5D_t22BD4C2009997AFE758B947C2D08853C305EA502*)IsInstSealed((RuntimeObject*)L_12, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 36)));
		KeyValuePair_2U5BU5D_t22BD4C2009997AFE758B947C2D08853C305EA502* L_13 = V_0;
		if (!L_13)
		{
			goto IL_005e;
		}
	}
	{
		KeyValuePair_2U5BU5D_t22BD4C2009997AFE758B947C2D08853C305EA502* L_14 = V_0;
		int32_t L_15 = ___1_index;
		Dictionary_2_CopyTo_m7F65CF8F69C819C98EF07594FCF7A7C0DA75DD88(__this, L_14, L_15, NULL);
		return;
	}

IL_005e:
	{
		RuntimeArray* L_16 = ___0_array;
		V_1 = ((DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533*)IsInstSealed((RuntimeObject*)L_16, DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var));
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_17 = V_1;
		if (!L_17)
		{
			goto IL_00c3;
		}
	}
	{
		EntryU5BU5D_t8D700A36ADEAE6E64D092B1F2FF95391E5A03F6C* L_18 = __this->____entries;
		V_2 = L_18;
		V_3 = 0;
		goto IL_00b9;
	}

IL_0073:
	{
		EntryU5BU5D_t8D700A36ADEAE6E64D092B1F2FF95391E5A03F6C* L_19 = V_2;
		int32_t L_20 = V_3;
		int32_t L_21 = ((L_19)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_20)))->___hashCode;
		if ((((int32_t)L_21) < ((int32_t)0)))
		{
			goto IL_00b5;
		}
	}
	{
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_22 = V_1;
		int32_t L_23 = ___1_index;
		int32_t L_24 = L_23;
		___1_index = ((int32_t)il2cpp_codegen_add(L_24, 1));
		EntryU5BU5D_t8D700A36ADEAE6E64D092B1F2FF95391E5A03F6C* L_25 = V_2;
		int32_t L_26 = V_3;
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 L_27 = ((L_25)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_26)))->___key;
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 L_28 = L_27;
		RuntimeObject* L_29 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 10), &L_28);
		EntryU5BU5D_t8D700A36ADEAE6E64D092B1F2FF95391E5A03F6C* L_30 = V_2;
		int32_t L_31 = V_3;
		FontAssetRef_t7B8E634754BC5683F1E6601D7CD0061285A28FF3 L_32 = ((L_30)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_31)))->___value;
		FontAssetRef_t7B8E634754BC5683F1E6601D7CD0061285A28FF3 L_33 = L_32;
		RuntimeObject* L_34 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12), &L_33);
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_35;
		memset((&L_35), 0, sizeof(L_35));
		DictionaryEntry__ctor_m2768353E53A75C4860E34B37DAF1342120C5D1EA((&L_35), L_29, L_34, NULL);
		(L_22)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_24), (DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB)L_35);
	}

IL_00b5:
	{
		int32_t L_36 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_36, 1));
	}

IL_00b9:
	{
		int32_t L_37 = V_3;
		int32_t L_38 = __this->____count;
		if ((((int32_t)L_37) < ((int32_t)L_38)))
		{
			goto IL_0073;
		}
	}
	{
		return;
	}

IL_00c3:
	{
		RuntimeArray* L_39 = ___0_array;
		V_4 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_39, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_40 = V_4;
		if (L_40)
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
	{
		{
			int32_t L_41 = __this->____count;
			V_5 = L_41;
			EntryU5BU5D_t8D700A36ADEAE6E64D092B1F2FF95391E5A03F6C* L_42 = __this->____entries;
			V_6 = L_42;
			V_7 = 0;
			goto IL_0130_1;
		}

IL_00ea_1:
		{
			EntryU5BU5D_t8D700A36ADEAE6E64D092B1F2FF95391E5A03F6C* L_43 = V_6;
			int32_t L_44 = V_7;
			int32_t L_45 = ((L_43)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_44)))->___hashCode;
			if ((((int32_t)L_45) < ((int32_t)0)))
			{
				goto IL_012a_1;
			}
		}
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_46 = V_4;
			int32_t L_47 = ___1_index;
			int32_t L_48 = L_47;
			___1_index = ((int32_t)il2cpp_codegen_add(L_48, 1));
			EntryU5BU5D_t8D700A36ADEAE6E64D092B1F2FF95391E5A03F6C* L_49 = V_6;
			int32_t L_50 = V_7;
			EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 L_51 = ((L_49)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_50)))->___key;
			EntryU5BU5D_t8D700A36ADEAE6E64D092B1F2FF95391E5A03F6C* L_52 = V_6;
			int32_t L_53 = V_7;
			FontAssetRef_t7B8E634754BC5683F1E6601D7CD0061285A28FF3 L_54 = ((L_52)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_53)))->___value;
			KeyValuePair_2_t0BE50338B196BFD79E02288350CE100D1C15D165 L_55;
			memset((&L_55), 0, sizeof(L_55));
			KeyValuePair_2__ctor_m46844DA2290BECEBDC1CBAC6D64267E0E522303A((&L_55), L_51, L_54, NULL);
			KeyValuePair_2_t0BE50338B196BFD79E02288350CE100D1C15D165 L_56 = L_55;
			RuntimeObject* L_57 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 19), &L_56);
			ArrayElementTypeCheck (L_46, L_57);
			(L_46)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_48), (RuntimeObject*)L_57);
		}

IL_012a_1:
		{
			int32_t L_58 = V_7;
			V_7 = ((int32_t)il2cpp_codegen_add(L_58, 1));
		}

IL_0130_1:
		{
			int32_t L_59 = V_7;
			int32_t L_60 = V_5;
			if ((((int32_t)L_59) < ((int32_t)L_60)))
			{
				goto IL_00ea_1;
			}
		}
		{
			goto IL_0140;
		}
	}
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
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_61 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0140;
	}

IL_0140:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IEnumerable_GetEnumerator_mE361499D6858D606D386D7C5FFC856AA21923C76 (Dictionary_2_tE7C86B2C5A23A1F27C98C2B36D5E45FA457F6090* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t8527DBFE64E77B68270A483C17805985F00CE92F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mCFF2B87BFC039D1040F6DEFD6DEA90A9F51A68ED((&L_0), __this, 2, NULL);
		Enumerator_t8527DBFE64E77B68270A483C17805985F00CE92F L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 32), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_EnsureCapacity_m480A28C2B3268BBCAAED4499C0589E510E689288 (Dictionary_2_tE7C86B2C5A23A1F27C98C2B36D5E45FA457F6090* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_000b;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97(((int32_t)12), NULL);
	}

IL_000b:
	{
		EntryU5BU5D_t8D700A36ADEAE6E64D092B1F2FF95391E5A03F6C* L_1 = __this->____entries;
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		EntryU5BU5D_t8D700A36ADEAE6E64D092B1F2FF95391E5A03F6C* L_2 = __this->____entries;
		int32_t L_3 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_2)->max_length),NULL));
		G_B5_0 = L_3;
		goto IL_001e;
	}

IL_001d:
	{
		G_B5_0 = 0;
	}

IL_001e:
	{
		V_0 = G_B5_0;
		int32_t L_4 = V_0;
		int32_t L_5 = ___0_capacity;
		if ((((int32_t)L_4) < ((int32_t)L_5)))
		{
			goto IL_0025;
		}
	}
	{
		int32_t L_6 = V_0;
		return L_6;
	}

IL_0025:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = __this->____buckets;
		if (L_7)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_8 = ___0_capacity;
		int32_t L_9;
		L_9 = Dictionary_2_Initialize_m38FB2D8763ADDB1128BA8DB0BB9A2D576F7220E8(__this, L_8, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 1));
		return L_9;
	}

IL_0035:
	{
		int32_t L_10 = ___0_capacity;
		CHECKED_LOCAL_INIT(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit,(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_11;
		L_11 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_10, NULL);
		V_1 = L_11;
		int32_t L_12 = V_1;
		Dictionary_2_Resize_m394708D42EFC53386FC1C03666B137E135E5CFE7(__this, L_12, (bool)0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 45));
		int32_t L_13 = V_1;
		return L_13;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_IDictionary_set_Item_m2A5424E5906ED975028B7C9FEFFE66B7B0E03E30 (Dictionary_2_tE7C86B2C5A23A1F27C98C2B36D5E45FA457F6090* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(Type_t_StaticInit);
	EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 V_0;
	memset((&V_0), 0, sizeof(V_0));
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___1_value;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisFontAssetRef_t7B8E634754BC5683F1E6601D7CD0061285A28FF3_m4AC822CD5CEAF4DA1B4035660F409BF9DD47B8BE(L_1, ((int32_t)15), NULL);
	}
	try
	{
		{
			RuntimeObject* L_2 = ___0_key;
			V_0 = ((*(EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 10))));
		}
		try
		{
			EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 L_3 = V_0;
			RuntimeObject* L_4 = ___1_value;
			Dictionary_2_set_Item_m7ACB67C25D0FD50ABEC2277BFDBDED5D4E5DF8DC(__this, L_3, ((*(FontAssetRef_t7B8E634754BC5683F1E6601D7CD0061285A28FF3*)UnBox(L_4, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 49));
			goto IL_003a_1;
		}
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
		{
			InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_5 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
			RuntimeObject* L_6 = ___1_value;
			RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 50)) };
			CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
			Type_t* L_8;
			L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
			ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_6, L_8, NULL);
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_003a_1;
		}

IL_003a_1:
		{
			goto IL_004f;
		}
	}
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
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_9 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_10 = ___0_key;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 51)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		ThrowHelper_ThrowWrongKeyTypeArgumentException_m90E5BCE2CB10EEC16F254C237121C6816C4D6982(L_10, L_12, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_004f;
	}

IL_004f:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_GetEnumerator_m298A0C1CEDA94FA12020C0B5F4DC05BFBD3B6B74 (Dictionary_2_tE7C86B2C5A23A1F27C98C2B36D5E45FA457F6090* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t8527DBFE64E77B68270A483C17805985F00CE92F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mCFF2B87BFC039D1040F6DEFD6DEA90A9F51A68ED((&L_0), __this, 1, NULL);
		Enumerator_t8527DBFE64E77B68270A483C17805985F00CE92F L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 32), &L_1);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mAED8CDB89C85F3A8161EF7FEBFA27BBBBC1583C2_gshared (Dictionary_2_tACC278C341353EB0D3F5219D25804742C5DDC8A9* __this, const RuntimeMethod* method) 
{
	{
		Dictionary_2__ctor_mBE9E061358F2E6A91E9915CEFD2879A13D028050(__this, 0, (RuntimeObject*)NULL, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m973EC7603C3FDE98E046A2C6554CA5FAC97BB1FF_gshared (Dictionary_2_tACC278C341353EB0D3F5219D25804742C5DDC8A9* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_capacity;
		Dictionary_2__ctor_mBE9E061358F2E6A91E9915CEFD2879A13D028050(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m064A8264F943DBBAC13C529623AB1904DF2B6399_gshared (Dictionary_2_tACC278C341353EB0D3F5219D25804742C5DDC8A9* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_comparer;
		Dictionary_2__ctor_mBE9E061358F2E6A91E9915CEFD2879A13D028050(__this, 0, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mBE9E061358F2E6A91E9915CEFD2879A13D028050_gshared (Dictionary_2_tACC278C341353EB0D3F5219D25804742C5DDC8A9* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0011;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97(((int32_t)12), NULL);
	}

IL_0011:
	{
		int32_t L_1 = ___0_capacity;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_2 = ___0_capacity;
		int32_t L_3;
		L_3 = Dictionary_2_Initialize_m4B270DD202530A4EA0CB4EA2C5463BDFAC3289C5(__this, L_2, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 1));
	}

IL_001d:
	{
		RuntimeObject* L_4 = ___1_comparer;
		EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* L_5;
		L_5 = EqualityComparer_1_get_Default_m5DCC393F5D59545D96AF9FF747F17C72EABB5D3B_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2));
		if ((((RuntimeObject*)(RuntimeObject*)L_4) == ((RuntimeObject*)(EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399*)L_5)))
		{
			goto IL_002c;
		}
	}
	{
		RuntimeObject* L_6 = ___1_comparer;
		__this->____comparer = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)L_6);
	}

IL_002c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m4DEA1B8CB215692D40CABFBD55CFBBB1F138FBFE_gshared (Dictionary_2_tACC278C341353EB0D3F5219D25804742C5DDC8A9* __this, RuntimeObject* ___0_dictionary, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_dictionary;
		Dictionary_2__ctor_mFE8D024D7FA568AAB39FCF6DAF344F43EE1F4A43(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 3));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mFE8D024D7FA568AAB39FCF6DAF344F43EE1F4A43_gshared (Dictionary_2_tACC278C341353EB0D3F5219D25804742C5DDC8A9* __this, RuntimeObject* ___0_dictionary, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	EntryU5BU5D_tAAF64BD0D9C29E733318312670F238A6137022E3* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	KeyValuePair_2_t33B859F0514253F5DB6552A6B2C5730871612D1B V_4;
	memset((&V_4), 0, sizeof(V_4));
	Dictionary_2_tACC278C341353EB0D3F5219D25804742C5DDC8A9* G_B2_0 = NULL;
	Dictionary_2_tACC278C341353EB0D3F5219D25804742C5DDC8A9* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	Dictionary_2_tACC278C341353EB0D3F5219D25804742C5DDC8A9* G_B3_1 = NULL;
	{
		RuntimeObject* L_0 = ___0_dictionary;
		if (L_0)
		{
			G_B2_0 = __this;
			goto IL_0007;
		}
		G_B1_0 = __this;
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_000d;
	}

IL_0007:
	{
		RuntimeObject* L_1 = ___0_dictionary;
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 4), (RuntimeObject*)L_1);
		G_B3_0 = L_2;
		G_B3_1 = G_B2_0;
	}

IL_000d:
	{
		RuntimeObject* L_3 = ___1_comparer;
		Dictionary_2__ctor_mBE9E061358F2E6A91E9915CEFD2879A13D028050(G_B3_1, G_B3_0, L_3, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0));
		RuntimeObject* L_4 = ___0_dictionary;
		if (L_4)
		{
			goto IL_001c;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(1, NULL);
	}

IL_001c:
	{
		RuntimeObject* L_5 = ___0_dictionary;
		void* L_6 = il2cpp_codegen_object_get_class(L_5);
		bool L_7 = (il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7)) == (L_6);
		if (!L_7)
		{
			goto IL_0080;
		}
	}
	{
		RuntimeObject* L_8 = ___0_dictionary;
		Dictionary_2_tACC278C341353EB0D3F5219D25804742C5DDC8A9* L_9 = ((Dictionary_2_tACC278C341353EB0D3F5219D25804742C5DDC8A9*)CastclassClass((RuntimeObject*)L_8, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7)));
		int32_t L_10 = L_9->____count;
		V_0 = L_10;
		EntryU5BU5D_tAAF64BD0D9C29E733318312670F238A6137022E3* L_11 = L_9->____entries;
		V_1 = L_11;
		V_2 = 0;
		goto IL_007b;
	}

IL_004a:
	{
		EntryU5BU5D_tAAF64BD0D9C29E733318312670F238A6137022E3* L_12 = V_1;
		int32_t L_13 = V_2;
		int32_t L_14 = ((L_12)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_13)))->___hashCode;
		if ((((int32_t)L_14) < ((int32_t)0)))
		{
			goto IL_0077;
		}
	}
	{
		EntryU5BU5D_tAAF64BD0D9C29E733318312670F238A6137022E3* L_15 = V_1;
		int32_t L_16 = V_2;
		Guid_t L_17 = ((L_15)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_16)))->___key;
		EntryU5BU5D_tAAF64BD0D9C29E733318312670F238A6137022E3* L_18 = V_1;
		int32_t L_19 = V_2;
		Il2CppSharedGenericObject* L_20 = ((L_18)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_19)))->___value;
		Dictionary_2_Add_m12D2FABDF928772CD0B0C28D389D86E688E4F4CB(__this, L_17, L_20, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14));
	}

IL_0077:
	{
		int32_t L_21 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_007b:
	{
		int32_t L_22 = V_2;
		int32_t L_23 = V_0;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_004a;
		}
	}
	{
		return;
	}

IL_0080:
	{
		RuntimeObject* L_24 = ___0_dictionary;
		RuntimeObject* L_25;
		L_25 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 15), (RuntimeObject*)L_24);
		V_3 = L_25;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00af:
			{
				{
					RuntimeObject* L_26 = V_3;
					if (!L_26)
					{
						goto IL_00b8;
					}
				}
				{
					RuntimeObject* L_27 = V_3;
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_27);
				}

IL_00b8:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_00a5_1;
			}

IL_0089_1:
			{
				RuntimeObject* L_28 = V_3;
				KeyValuePair_2_t33B859F0514253F5DB6552A6B2C5730871612D1B L_29;
				L_29 = InterfaceFuncInvoker0< KeyValuePair_2_t33B859F0514253F5DB6552A6B2C5730871612D1B >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 17), L_28);
				V_4 = L_29;
				Guid_t L_30;
				L_30 = KeyValuePair_2_get_Key_m9203ED457651489192177BEC5EBDC178E0F26BC7_inline((&V_4), NULL);
				Il2CppSharedGenericObject* L_31;
				L_31 = KeyValuePair_2_get_Value_m7FE87D795A3F1AD1B2E7FD1F96E5EF2A82785D93_inline((&V_4), NULL);
				Dictionary_2_Add_m12D2FABDF928772CD0B0C28D389D86E688E4F4CB(__this, L_30, L_31, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14));
			}

IL_00a5_1:
			{
				RuntimeObject* L_32 = V_3;
				bool L_33;
				L_33 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_32);
				if (L_33)
				{
					goto IL_0089_1;
				}
			}
			{
				goto IL_00b9;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_tABC0767E4C9CAC395DC791123D07816845B5F3FE* Dictionary_2_get_Keys_mFC9AADC3C1C00FBE73A7B0AC6F8BC262E2469703_gshared (Dictionary_2_tACC278C341353EB0D3F5219D25804742C5DDC8A9* __this, const RuntimeMethod* method) 
{
	{
		KeyCollection_tABC0767E4C9CAC395DC791123D07816845B5F3FE* L_0 = __this->____keys;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		KeyCollection_tABC0767E4C9CAC395DC791123D07816845B5F3FE* L_1 = (KeyCollection_tABC0767E4C9CAC395DC791123D07816845B5F3FE*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 22));
		KeyCollection__ctor_m1DD9728163AEE8DECB0FD6CC40DDEB6E3B419E04(L_1, __this, NULL);
		__this->____keys = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keys), (void*)L_1);
	}

IL_0014:
	{
		KeyCollection_tABC0767E4C9CAC395DC791123D07816845B5F3FE* L_2 = __this->____keys;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_t6E5730979611F4C4C82E15329EA4E3C265DFED32* Dictionary_2_get_Values_m668F75FF60F59F3624BAB4938DA51B500B81D491_gshared (Dictionary_2_tACC278C341353EB0D3F5219D25804742C5DDC8A9* __this, const RuntimeMethod* method) 
{
	{
		ValueCollection_t6E5730979611F4C4C82E15329EA4E3C265DFED32* L_0 = __this->____values;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_t6E5730979611F4C4C82E15329EA4E3C265DFED32* L_1 = (ValueCollection_t6E5730979611F4C4C82E15329EA4E3C265DFED32*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 24));
		ValueCollection__ctor_m16305A7173A73FFD4F82FAC103C980A99266B7E2(L_1, __this, NULL);
		__this->____values = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_t6E5730979611F4C4C82E15329EA4E3C265DFED32* L_2 = __this->____values;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* Dictionary_2_get_Item_mEA3BFFB2296A12A45164153B3D86B6DB928B7A93_gshared (Dictionary_2_tACC278C341353EB0D3F5219D25804742C5DDC8A9* __this, Guid_t ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Il2CppSharedGenericObject* V_1 = NULL;
	{
		Guid_t L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m9F77A9A1350FCE78B97CC693F9F5444E8F3E645D(__this, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 26));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_001e;
		}
	}
	{
		EntryU5BU5D_tAAF64BD0D9C29E733318312670F238A6137022E3* L_3 = __this->____entries;
		int32_t L_4 = V_0;
		Il2CppSharedGenericObject* L_5 = ((L_3)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_4)))->___value;
		return L_5;
	}

IL_001e:
	{
		Guid_t L_6 = ___0_key;
		Guid_t L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 10), &L_7);
		ThrowHelper_ThrowKeyNotFoundException_m6A17735FA486AD43F2488DE39B755AC60BC99CE7(L_8, NULL);
		il2cpp_codegen_initobj((&V_1), sizeof(Il2CppSharedGenericObject*));
		Il2CppSharedGenericObject* L_9 = V_1;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m93D471C69BDF1EE119D28B69BFACB3B4C6E1B9C5_gshared (Dictionary_2_tACC278C341353EB0D3F5219D25804742C5DDC8A9* __this, Guid_t ___0_key, Il2CppSharedGenericObject* ___1_value, const RuntimeMethod* method) 
{
	{
		Guid_t L_0 = ___0_key;
		Il2CppSharedGenericObject* L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_m7AC671B331F6CD67E04ADA8CD9174C90AB75E18D(__this, L_0, L_1, 1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 27));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m12D2FABDF928772CD0B0C28D389D86E688E4F4CB_gshared (Dictionary_2_tACC278C341353EB0D3F5219D25804742C5DDC8A9* __this, Guid_t ___0_key, Il2CppSharedGenericObject* ___1_value, const RuntimeMethod* method) 
{
	{
		Guid_t L_0 = ___0_key;
		Il2CppSharedGenericObject* L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_m7AC671B331F6CD67E04ADA8CD9174C90AB75E18D(__this, L_0, L_1, 2, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 27));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m0CBC134BCF5E1C9FB01257E2F3834A91F5F3CAC4_gshared (Dictionary_2_tACC278C341353EB0D3F5219D25804742C5DDC8A9* __this, KeyValuePair_2_t33B859F0514253F5DB6552A6B2C5730871612D1B ___0_keyValuePair, const RuntimeMethod* method) 
{
	{
		Guid_t L_0;
		L_0 = KeyValuePair_2_get_Key_m9203ED457651489192177BEC5EBDC178E0F26BC7_inline((&___0_keyValuePair), NULL);
		Il2CppSharedGenericObject* L_1;
		L_1 = KeyValuePair_2_get_Value_m7FE87D795A3F1AD1B2E7FD1F96E5EF2A82785D93_inline((&___0_keyValuePair), NULL);
		Dictionary_2_Add_m12D2FABDF928772CD0B0C28D389D86E688E4F4CB(__this, L_0, L_1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m4309834032BDE6E1B7ED6C2FB9AE7F13647BD967_gshared (Dictionary_2_tACC278C341353EB0D3F5219D25804742C5DDC8A9* __this, KeyValuePair_2_t33B859F0514253F5DB6552A6B2C5730871612D1B ___0_keyValuePair, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		Guid_t L_0;
		L_0 = KeyValuePair_2_get_Key_m9203ED457651489192177BEC5EBDC178E0F26BC7_inline((&___0_keyValuePair), NULL);
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m9F77A9A1350FCE78B97CC693F9F5444E8F3E645D(__this, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 26));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0038;
		}
	}
	{
		EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* L_3;
		L_3 = EqualityComparer_1_get_Default_mB451453B7B5B4B570A9347E090AB0FAC75C0C628_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 28));
		EntryU5BU5D_tAAF64BD0D9C29E733318312670F238A6137022E3* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		Il2CppSharedGenericObject* L_6 = ((L_4)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		Il2CppSharedGenericObject* L_7;
		L_7 = KeyValuePair_2_get_Value_m7FE87D795A3F1AD1B2E7FD1F96E5EF2A82785D93_inline((&___0_keyValuePair), NULL);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, Il2CppSharedGenericObject*, Il2CppSharedGenericObject* >::Invoke(8, L_3, L_6, L_7);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m7C32F0809AD3AFB57C16582AEC83B382EA3750F0_gshared (Dictionary_2_tACC278C341353EB0D3F5219D25804742C5DDC8A9* __this, KeyValuePair_2_t33B859F0514253F5DB6552A6B2C5730871612D1B ___0_keyValuePair, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		Guid_t L_0;
		L_0 = KeyValuePair_2_get_Key_m9203ED457651489192177BEC5EBDC178E0F26BC7_inline((&___0_keyValuePair), NULL);
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m9F77A9A1350FCE78B97CC693F9F5444E8F3E645D(__this, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 26));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0046;
		}
	}
	{
		EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* L_3;
		L_3 = EqualityComparer_1_get_Default_mB451453B7B5B4B570A9347E090AB0FAC75C0C628_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 28));
		EntryU5BU5D_tAAF64BD0D9C29E733318312670F238A6137022E3* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		Il2CppSharedGenericObject* L_6 = ((L_4)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		Il2CppSharedGenericObject* L_7;
		L_7 = KeyValuePair_2_get_Value_m7FE87D795A3F1AD1B2E7FD1F96E5EF2A82785D93_inline((&___0_keyValuePair), NULL);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, Il2CppSharedGenericObject*, Il2CppSharedGenericObject* >::Invoke(8, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0046;
		}
	}
	{
		Guid_t L_9;
		L_9 = KeyValuePair_2_get_Key_m9203ED457651489192177BEC5EBDC178E0F26BC7_inline((&___0_keyValuePair), NULL);
		bool L_10;
		L_10 = Dictionary_2_Remove_m2BD0E6825D66721033A14ABB6F727A8D1C8E0628(__this, L_9, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 29));
		return (bool)1;
	}

IL_0046:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_mAF7D6813B74981E1659BF29AEDEFBEF99CC34A62_gshared (Dictionary_2_tACC278C341353EB0D3F5219D25804742C5DDC8A9* __this, Guid_t ___0_key, const RuntimeMethod* method) 
{
	{
		Guid_t L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m9F77A9A1350FCE78B97CC693F9F5444E8F3E645D(__this, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 26));
		return (bool)((((int32_t)((((int32_t)L_1) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsValue_m551DC69C4B2FFF7E3AE8DC22086AE971FC3FC4B3_gshared (Dictionary_2_tACC278C341353EB0D3F5219D25804742C5DDC8A9* __this, Il2CppSharedGenericObject* ___0_value, const RuntimeMethod* method) 
{
	EntryU5BU5D_tAAF64BD0D9C29E733318312670F238A6137022E3* V_0 = NULL;
	int32_t V_1 = 0;
	Il2CppSharedGenericObject* V_2 = NULL;
	int32_t V_3 = 0;
	EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* V_4 = NULL;
	int32_t V_5 = 0;
	{
		EntryU5BU5D_tAAF64BD0D9C29E733318312670F238A6137022E3* L_0 = __this->____entries;
		V_0 = L_0;
		Il2CppSharedGenericObject* L_1 = ___0_value;
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
		EntryU5BU5D_tAAF64BD0D9C29E733318312670F238A6137022E3* L_2 = V_0;
		int32_t L_3 = V_1;
		int32_t L_4 = ((L_2)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_3)))->___hashCode;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0037;
		}
	}
	{
		EntryU5BU5D_tAAF64BD0D9C29E733318312670F238A6137022E3* L_5 = V_0;
		int32_t L_6 = V_1;
		Il2CppSharedGenericObject* L_7 = ((L_5)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_6)))->___value;
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
		int32_t L_10 = __this->____count;
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
		il2cpp_codegen_initobj((&V_2), sizeof(Il2CppSharedGenericObject*));
		Il2CppSharedGenericObject* L_11 = V_2;
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
		EntryU5BU5D_tAAF64BD0D9C29E733318312670F238A6137022E3* L_12 = V_0;
		int32_t L_13 = V_3;
		int32_t L_14 = ((L_12)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_13)))->___hashCode;
		if ((((int32_t)L_14) < ((int32_t)0)))
		{
			goto IL_0087;
		}
	}
	{
		EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* L_15;
		L_15 = EqualityComparer_1_get_Default_mB451453B7B5B4B570A9347E090AB0FAC75C0C628_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 28));
		EntryU5BU5D_tAAF64BD0D9C29E733318312670F238A6137022E3* L_16 = V_0;
		int32_t L_17 = V_3;
		Il2CppSharedGenericObject* L_18 = ((L_16)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_17)))->___value;
		Il2CppSharedGenericObject* L_19 = ___0_value;
		bool L_20;
		L_20 = VirtualFuncInvoker2< bool, Il2CppSharedGenericObject*, Il2CppSharedGenericObject* >::Invoke(8, L_15, L_18, L_19);
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
		int32_t L_23 = __this->____count;
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
		EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* L_24;
		L_24 = EqualityComparer_1_get_Default_mB451453B7B5B4B570A9347E090AB0FAC75C0C628_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 28));
		V_4 = L_24;
		V_5 = 0;
		goto IL_00d1;
	}

IL_00a2:
	{
		EntryU5BU5D_tAAF64BD0D9C29E733318312670F238A6137022E3* L_25 = V_0;
		int32_t L_26 = V_5;
		int32_t L_27 = ((L_25)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_26)))->___hashCode;
		if ((((int32_t)L_27) < ((int32_t)0)))
		{
			goto IL_00cb;
		}
	}
	{
		EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* L_28 = V_4;
		EntryU5BU5D_tAAF64BD0D9C29E733318312670F238A6137022E3* L_29 = V_0;
		int32_t L_30 = V_5;
		Il2CppSharedGenericObject* L_31 = ((L_29)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_30)))->___value;
		Il2CppSharedGenericObject* L_32 = ___0_value;
		bool L_33;
		L_33 = VirtualFuncInvoker2< bool, Il2CppSharedGenericObject*, Il2CppSharedGenericObject* >::Invoke(8, L_28, L_31, L_32);
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
		int32_t L_36 = __this->____count;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_m99C002B6D6FCB05E047BE5D0AE65AC2F6E3ACD60_gshared (Dictionary_2_tACC278C341353EB0D3F5219D25804742C5DDC8A9* __this, KeyValuePair_2U5BU5D_t9DF131722D7F3B6C04EF603B3CF8C56E1AF7D856* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	EntryU5BU5D_tAAF64BD0D9C29E733318312670F238A6137022E3* V_1 = NULL;
	int32_t V_2 = 0;
	{
		KeyValuePair_2U5BU5D_t9DF131722D7F3B6C04EF603B3CF8C56E1AF7D856* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(3, NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_index;
		KeyValuePair_2U5BU5D_t9DF131722D7F3B6C04EF603B3CF8C56E1AF7D856* L_2 = ___0_array;
		int32_t L_3 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_2)->max_length),NULL));
		if ((!(((uint32_t)L_1) > ((uint32_t)L_3))))
		{
			goto IL_0014;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0014:
	{
		KeyValuePair_2U5BU5D_t9DF131722D7F3B6C04EF603B3CF8C56E1AF7D856* L_4 = ___0_array;
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		int32_t L_6 = ___1_index;
		int32_t L_7;
		L_7 = Dictionary_2_get_Count_m62CB7B656456CFDD5DC73F6ECAA5BAF24EFBA62C(__this, NULL);
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_5, L_6))) >= ((int32_t)L_7)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(5, NULL);
	}

IL_0027:
	{
		int32_t L_8 = __this->____count;
		V_0 = L_8;
		EntryU5BU5D_tAAF64BD0D9C29E733318312670F238A6137022E3* L_9 = __this->____entries;
		V_1 = L_9;
		V_2 = 0;
		goto IL_0075;
	}

IL_0039:
	{
		EntryU5BU5D_tAAF64BD0D9C29E733318312670F238A6137022E3* L_10 = V_1;
		int32_t L_11 = V_2;
		int32_t L_12 = ((L_10)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_11)))->___hashCode;
		if ((((int32_t)L_12) < ((int32_t)0)))
		{
			goto IL_0071;
		}
	}
	{
		KeyValuePair_2U5BU5D_t9DF131722D7F3B6C04EF603B3CF8C56E1AF7D856* L_13 = ___0_array;
		int32_t L_14 = ___1_index;
		int32_t L_15 = L_14;
		___1_index = ((int32_t)il2cpp_codegen_add(L_15, 1));
		EntryU5BU5D_tAAF64BD0D9C29E733318312670F238A6137022E3* L_16 = V_1;
		int32_t L_17 = V_2;
		Guid_t L_18 = ((L_16)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_17)))->___key;
		EntryU5BU5D_tAAF64BD0D9C29E733318312670F238A6137022E3* L_19 = V_1;
		int32_t L_20 = V_2;
		Il2CppSharedGenericObject* L_21 = ((L_19)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_20)))->___value;
		KeyValuePair_2_t33B859F0514253F5DB6552A6B2C5730871612D1B L_22;
		memset((&L_22), 0, sizeof(L_22));
		KeyValuePair_2__ctor_mAADB86C56A6064707D6B414C20886941E280A8C8((&L_22), L_18, L_21, NULL);
		(L_13)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_15), (KeyValuePair_2_t33B859F0514253F5DB6552A6B2C5730871612D1B)L_22);
	}

IL_0071:
	{
		int32_t L_23 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_0075:
	{
		int32_t L_24 = V_2;
		int32_t L_25 = V_0;
		if ((((int32_t)L_24) < ((int32_t)L_25)))
		{
			goto IL_0039;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t664339BF0446B4E80F1055BB5C01417CFF320E2A Dictionary_2_GetEnumerator_mC56D8EEA1FC332C55A4D6F293A4790AFE1E7ECAB_gshared (Dictionary_2_tACC278C341353EB0D3F5219D25804742C5DDC8A9* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t664339BF0446B4E80F1055BB5C01417CFF320E2A L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m4414214982827D5E3EE390F4EC2D5458C617935D((&L_0), __this, 2, NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m27799B667A88624121FEA2ACDA3E6DCD84385244_gshared (Dictionary_2_tACC278C341353EB0D3F5219D25804742C5DDC8A9* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t664339BF0446B4E80F1055BB5C01417CFF320E2A L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m4414214982827D5E3EE390F4EC2D5458C617935D((&L_0), __this, 2, NULL);
		Enumerator_t664339BF0446B4E80F1055BB5C01417CFF320E2A L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 32), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_GetObjectData_mEA944741AD9C0C4D3F8EE5DF611D9B261AC5D003_gshared (Dictionary_2_tACC278C341353EB0D3F5219D25804742C5DDC8A9* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	KeyValuePair_2U5BU5D_t9DF131722D7F3B6C04EF603B3CF8C56E1AF7D856* V_0 = NULL;
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
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___0_info;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(4, NULL);
	}

IL_0009:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___0_info;
		int32_t L_2 = __this->____version;
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(L_1, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, L_2, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = ___0_info;
		RuntimeObject* L_4 = __this->____comparer;
		RuntimeObject* L_5 = L_4;
		if (L_5)
		{
			G_B4_0 = L_5;
			G_B4_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
			G_B4_2 = L_3;
			goto IL_002f;
		}
		G_B3_0 = L_5;
		G_B3_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
		G_B3_2 = L_3;
	}
	{
		EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* L_6;
		L_6 = EqualityComparer_1_get_Default_m5DCC393F5D59545D96AF9FF747F17C72EABB5D3B_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2));
		G_B4_0 = ((RuntimeObject*)(L_6));
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
	}

IL_002f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 34)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(G_B4_2, G_B4_1, G_B4_0, L_8, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_9 = ___0_info;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = __this->____buckets;
		if (!L_10)
		{
			G_B6_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
			G_B6_1 = L_9;
			goto IL_0056;
		}
		G_B5_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
		G_B5_1 = L_9;
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____buckets;
		int32_t L_12 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_11)->max_length),NULL));
		G_B7_0 = L_12;
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
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(G_B7_2, G_B7_1, G_B7_0, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = __this->____buckets;
		if (!L_13)
		{
			goto IL_008e;
		}
	}
	{
		int32_t L_14;
		L_14 = Dictionary_2_get_Count_m62CB7B656456CFDD5DC73F6ECAA5BAF24EFBA62C(__this, NULL);
		KeyValuePair_2U5BU5D_t9DF131722D7F3B6C04EF603B3CF8C56E1AF7D856* L_15 = (KeyValuePair_2U5BU5D_t9DF131722D7F3B6C04EF603B3CF8C56E1AF7D856*)(KeyValuePair_2U5BU5D_t9DF131722D7F3B6C04EF603B3CF8C56E1AF7D856*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 36), (uint32_t)L_14);
		V_0 = L_15;
		KeyValuePair_2U5BU5D_t9DF131722D7F3B6C04EF603B3CF8C56E1AF7D856* L_16 = V_0;
		Dictionary_2_CopyTo_m99C002B6D6FCB05E047BE5D0AE65AC2F6E3ACD60(__this, L_16, 0, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_17 = ___0_info;
		KeyValuePair_2U5BU5D_t9DF131722D7F3B6C04EF603B3CF8C56E1AF7D856* L_18 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 38)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(L_17, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, (RuntimeObject*)L_18, L_20, NULL);
	}

IL_008e:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_m9F77A9A1350FCE78B97CC693F9F5444E8F3E645D_gshared (Dictionary_2_tACC278C341353EB0D3F5219D25804742C5DDC8A9* __this, Guid_t ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	EntryU5BU5D_tAAF64BD0D9C29E733318312670F238A6137022E3* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	int32_t V_5 = 0;
	Guid_t V_6;
	memset((&V_6), 0, sizeof(V_6));
	EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* V_7 = NULL;
	int32_t V_8 = 0;
	{
		goto IL_000e;
	}

IL_000e:
	{
		V_0 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		V_1 = L_1;
		EntryU5BU5D_tAAF64BD0D9C29E733318312670F238A6137022E3* L_2 = __this->____entries;
		V_2 = L_2;
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = V_1;
		if (!L_3)
		{
			goto IL_0175;
		}
	}
	{
		RuntimeObject* L_4 = __this->____comparer;
		V_4 = L_4;
		RuntimeObject* L_5 = V_4;
		if (L_5)
		{
			goto IL_0110;
		}
	}
	{
		int32_t L_6;
		L_6 = Guid_GetHashCode_m239B7679BB9ED5A207B3D2F858B5F30FFC455408((&___0_key), NULL);
		V_5 = ((int32_t)(L_6&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = V_1;
		int32_t L_8 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = V_1;
		int32_t L_10 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_9)->max_length),NULL));
		int32_t L_11 = ((int32_t)(L_8%L_10));
		int32_t L_12 = (L_7)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_11));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
		il2cpp_codegen_initobj((&V_6), sizeof(Guid_t));
	}

IL_0066:
	{
		int32_t L_14 = V_0;
		EntryU5BU5D_tAAF64BD0D9C29E733318312670F238A6137022E3* L_15 = V_2;
		int32_t L_16 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_15)->max_length),NULL));
		if ((!(((uint32_t)L_14) < ((uint32_t)L_16))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_tAAF64BD0D9C29E733318312670F238A6137022E3* L_17 = V_2;
		int32_t L_18 = V_0;
		int32_t L_19 = ((L_17)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_18)))->___hashCode;
		int32_t L_20 = V_5;
		if ((!(((uint32_t)L_19) == ((uint32_t)L_20))))
		{
			goto IL_009b;
		}
	}
	{
		EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* L_21;
		L_21 = EqualityComparer_1_get_Default_m5DCC393F5D59545D96AF9FF747F17C72EABB5D3B_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2));
		EntryU5BU5D_tAAF64BD0D9C29E733318312670F238A6137022E3* L_22 = V_2;
		int32_t L_23 = V_0;
		Guid_t L_24 = ((L_22)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_23)))->___key;
		Guid_t L_25 = ___0_key;
		bool L_26;
		L_26 = VirtualFuncInvoker2< bool, Guid_t, Guid_t >::Invoke(8, L_21, L_24, L_25);
		if (L_26)
		{
			goto IL_0175;
		}
	}

IL_009b:
	{
		EntryU5BU5D_tAAF64BD0D9C29E733318312670F238A6137022E3* L_27 = V_2;
		int32_t L_28 = V_0;
		int32_t L_29 = ((L_27)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_28)))->___next;
		V_0 = L_29;
		int32_t L_30 = V_3;
		EntryU5BU5D_tAAF64BD0D9C29E733318312670F238A6137022E3* L_31 = V_2;
		int32_t L_32 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_31)->max_length),NULL));
		if ((((int32_t)L_30) < ((int32_t)L_32)))
		{
			goto IL_00b3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_00b3:
	{
		int32_t L_33 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_33, 1));
		goto IL_0066;
	}

IL_0110:
	{
		RuntimeObject* L_34 = V_4;
		Guid_t L_35 = ___0_key;
		int32_t L_36;
		L_36 = InterfaceFuncInvoker1< int32_t, Guid_t >::Invoke(1, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 35), L_34, L_35);
		V_8 = ((int32_t)(L_36&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_37 = V_1;
		int32_t L_38 = V_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_39 = V_1;
		int32_t L_40 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_39)->max_length),NULL));
		int32_t L_41 = ((int32_t)(L_38%L_40));
		int32_t L_42 = (L_37)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_41));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_42, 1));
	}

IL_012b:
	{
		int32_t L_43 = V_0;
		EntryU5BU5D_tAAF64BD0D9C29E733318312670F238A6137022E3* L_44 = V_2;
		int32_t L_45 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_44)->max_length),NULL));
		if ((!(((uint32_t)L_43) < ((uint32_t)L_45))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_tAAF64BD0D9C29E733318312670F238A6137022E3* L_46 = V_2;
		int32_t L_47 = V_0;
		int32_t L_48 = ((L_46)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_47)))->___hashCode;
		int32_t L_49 = V_8;
		if ((!(((uint32_t)L_48) == ((uint32_t)L_49))))
		{
			goto IL_0157;
		}
	}
	{
		RuntimeObject* L_50 = V_4;
		EntryU5BU5D_tAAF64BD0D9C29E733318312670F238A6137022E3* L_51 = V_2;
		int32_t L_52 = V_0;
		Guid_t L_53 = ((L_51)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_52)))->___key;
		Guid_t L_54 = ___0_key;
		bool L_55;
		L_55 = InterfaceFuncInvoker2< bool, Guid_t, Guid_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 35), L_50, L_53, L_54);
		if (L_55)
		{
			goto IL_0175;
		}
	}

IL_0157:
	{
		EntryU5BU5D_tAAF64BD0D9C29E733318312670F238A6137022E3* L_56 = V_2;
		int32_t L_57 = V_0;
		int32_t L_58 = ((L_56)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_57)))->___next;
		V_0 = L_58;
		int32_t L_59 = V_3;
		EntryU5BU5D_tAAF64BD0D9C29E733318312670F238A6137022E3* L_60 = V_2;
		int32_t L_61 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_60)->max_length),NULL));
		if ((((int32_t)L_59) < ((int32_t)L_61)))
		{
			goto IL_016f;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_016f:
	{
		int32_t L_62 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_62, 1));
		goto IL_012b;
	}

IL_0175:
	{
		int32_t L_63 = V_0;
		return L_63;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_m4B270DD202530A4EA0CB4EA2C5463BDFAC3289C5_gshared (Dictionary_2_tACC278C341353EB0D3F5219D25804742C5DDC8A9* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit);
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_capacity;
		CHECKED_LOCAL_INIT(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit,(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_1;
		L_1 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_0, NULL);
		V_0 = L_1;
		__this->____freeList = (-1);
		int32_t L_2 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_2);
		__this->____buckets = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_3);
		int32_t L_4 = V_0;
		EntryU5BU5D_tAAF64BD0D9C29E733318312670F238A6137022E3* L_5 = (EntryU5BU5D_tAAF64BD0D9C29E733318312670F238A6137022E3*)(EntryU5BU5D_tAAF64BD0D9C29E733318312670F238A6137022E3*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 43), (uint32_t)L_4);
		__this->____entries = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries), (void*)L_5);
		int32_t L_6 = V_0;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_m7AC671B331F6CD67E04ADA8CD9174C90AB75E18D_gshared (Dictionary_2_tACC278C341353EB0D3F5219D25804742C5DDC8A9* __this, Guid_t ___0_key, Il2CppSharedGenericObject* ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method) 
{
	EntryU5BU5D_tAAF64BD0D9C29E733318312670F238A6137022E3* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	int32_t V_8 = 0;
	int32_t* V_9 = NULL;
	Entry_t385D55B7BB5A3AD762B8087CBDA8389D3818AF28* V_10 = NULL;
	Guid_t V_11;
	memset((&V_11), 0, sizeof(V_11));
	EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t G_B7_0 = 0;
	int32_t* G_B51_0 = NULL;
	{
		goto IL_000e;
	}

IL_000e:
	{
		int32_t L_1 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_1, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->____buckets;
		if (L_2)
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_3;
		L_3 = Dictionary_2_Initialize_m4B270DD202530A4EA0CB4EA2C5463BDFAC3289C5(__this, 0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 1));
	}

IL_002c:
	{
		EntryU5BU5D_tAAF64BD0D9C29E733318312670F238A6137022E3* L_4 = __this->____entries;
		V_0 = L_4;
		RuntimeObject* L_5 = __this->____comparer;
		V_1 = L_5;
		RuntimeObject* L_6 = V_1;
		if (!L_6)
		{
			goto IL_0046;
		}
	}
	{
		RuntimeObject* L_7 = V_1;
		Guid_t L_8 = ___0_key;
		int32_t L_9;
		L_9 = InterfaceFuncInvoker1< int32_t, Guid_t >::Invoke(1, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 35), L_7, L_8);
		G_B7_0 = L_9;
		goto IL_0053;
	}

IL_0046:
	{
		int32_t L_10;
		L_10 = Guid_GetHashCode_m239B7679BB9ED5A207B3D2F858B5F30FFC455408((&___0_key), NULL);
		G_B7_0 = L_10;
	}

IL_0053:
	{
		V_2 = ((int32_t)(G_B7_0&((int32_t)2147483647LL)));
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____buckets;
		int32_t L_12 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = __this->____buckets;
		int32_t L_14 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_13)->max_length),NULL));
		V_4 = ((L_11)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)(L_12%L_14)))));
		int32_t* L_15 = V_4;
		int32_t L_16 = *(L_15);
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_16, 1));
		RuntimeObject* L_17 = V_1;
		if (L_17)
		{
			goto IL_0187;
		}
	}
	{
		il2cpp_codegen_initobj((&V_11), sizeof(Guid_t));
	}

IL_0091:
	{
		int32_t L_19 = V_5;
		EntryU5BU5D_tAAF64BD0D9C29E733318312670F238A6137022E3* L_20 = V_0;
		int32_t L_21 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_20)->max_length),NULL));
		if ((!(((uint32_t)L_19) < ((uint32_t)L_21))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_tAAF64BD0D9C29E733318312670F238A6137022E3* L_22 = V_0;
		int32_t L_23 = V_5;
		int32_t L_24 = ((L_22)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_23)))->___hashCode;
		int32_t L_25 = V_2;
		if ((!(((uint32_t)L_24) == ((uint32_t)L_25))))
		{
			goto IL_00ea;
		}
	}
	{
		EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* L_26;
		L_26 = EqualityComparer_1_get_Default_m5DCC393F5D59545D96AF9FF747F17C72EABB5D3B_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2));
		EntryU5BU5D_tAAF64BD0D9C29E733318312670F238A6137022E3* L_27 = V_0;
		int32_t L_28 = V_5;
		Guid_t L_29 = ((L_27)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_28)))->___key;
		Guid_t L_30 = ___0_key;
		bool L_31;
		L_31 = VirtualFuncInvoker2< bool, Guid_t, Guid_t >::Invoke(8, L_26, L_29, L_30);
		if (!L_31)
		{
			goto IL_00ea;
		}
	}
	{
		uint8_t L_32 = ___2_behavior;
		if ((!(((uint32_t)L_32) == ((uint32_t)1))))
		{
			goto IL_00d9;
		}
	}
	{
		EntryU5BU5D_tAAF64BD0D9C29E733318312670F238A6137022E3* L_33 = V_0;
		int32_t L_34 = V_5;
		Il2CppSharedGenericObject* L_35 = ___1_value;
		((L_33)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_34)))->___value = L_35;
		Il2CppCodeGenWriteBarrier((void**)(&((L_33)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_34)))->___value), (void*)L_35);
		return (bool)1;
	}

IL_00d9:
	{
		uint8_t L_36 = ___2_behavior;
		if ((!(((uint32_t)L_36) == ((uint32_t)2))))
		{
			goto IL_00e8;
		}
	}
	{
		Guid_t L_37 = ___0_key;
		Guid_t L_38 = L_37;
		RuntimeObject* L_39 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 10), &L_38);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_39, NULL);
	}

IL_00e8:
	{
		return (bool)0;
	}

IL_00ea:
	{
		EntryU5BU5D_tAAF64BD0D9C29E733318312670F238A6137022E3* L_40 = V_0;
		int32_t L_41 = V_5;
		int32_t L_42 = ((L_40)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_41)))->___next;
		V_5 = L_42;
		int32_t L_43 = V_3;
		EntryU5BU5D_tAAF64BD0D9C29E733318312670F238A6137022E3* L_44 = V_0;
		int32_t L_45 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_44)->max_length),NULL));
		if ((((int32_t)L_43) < ((int32_t)L_45)))
		{
			goto IL_0104;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_0104:
	{
		int32_t L_46 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_46, 1));
		goto IL_0091;
	}

IL_0187:
	{
		int32_t L_47 = V_5;
		EntryU5BU5D_tAAF64BD0D9C29E733318312670F238A6137022E3* L_48 = V_0;
		int32_t L_49 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_48)->max_length),NULL));
		if ((!(((uint32_t)L_47) < ((uint32_t)L_49))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_tAAF64BD0D9C29E733318312670F238A6137022E3* L_50 = V_0;
		int32_t L_51 = V_5;
		int32_t L_52 = ((L_50)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_51)))->___hashCode;
		int32_t L_53 = V_2;
		if ((!(((uint32_t)L_52) == ((uint32_t)L_53))))
		{
			goto IL_01d9;
		}
	}
	{
		RuntimeObject* L_54 = V_1;
		EntryU5BU5D_tAAF64BD0D9C29E733318312670F238A6137022E3* L_55 = V_0;
		int32_t L_56 = V_5;
		Guid_t L_57 = ((L_55)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_56)))->___key;
		Guid_t L_58 = ___0_key;
		bool L_59;
		L_59 = InterfaceFuncInvoker2< bool, Guid_t, Guid_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 35), L_54, L_57, L_58);
		if (!L_59)
		{
			goto IL_01d9;
		}
	}
	{
		uint8_t L_60 = ___2_behavior;
		if ((!(((uint32_t)L_60) == ((uint32_t)1))))
		{
			goto IL_01c8;
		}
	}
	{
		EntryU5BU5D_tAAF64BD0D9C29E733318312670F238A6137022E3* L_61 = V_0;
		int32_t L_62 = V_5;
		Il2CppSharedGenericObject* L_63 = ___1_value;
		((L_61)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_62)))->___value = L_63;
		Il2CppCodeGenWriteBarrier((void**)(&((L_61)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_62)))->___value), (void*)L_63);
		return (bool)1;
	}

IL_01c8:
	{
		uint8_t L_64 = ___2_behavior;
		if ((!(((uint32_t)L_64) == ((uint32_t)2))))
		{
			goto IL_01d7;
		}
	}
	{
		Guid_t L_65 = ___0_key;
		Guid_t L_66 = L_65;
		RuntimeObject* L_67 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 10), &L_66);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_67, NULL);
	}

IL_01d7:
	{
		return (bool)0;
	}

IL_01d9:
	{
		EntryU5BU5D_tAAF64BD0D9C29E733318312670F238A6137022E3* L_68 = V_0;
		int32_t L_69 = V_5;
		int32_t L_70 = ((L_68)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_69)))->___next;
		V_5 = L_70;
		int32_t L_71 = V_3;
		EntryU5BU5D_tAAF64BD0D9C29E733318312670F238A6137022E3* L_72 = V_0;
		int32_t L_73 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_72)->max_length),NULL));
		if ((((int32_t)L_71) < ((int32_t)L_73)))
		{
			goto IL_01f3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_01f3:
	{
		int32_t L_74 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_74, 1));
		goto IL_0187;
	}

IL_01f9:
	{
		V_6 = (bool)0;
		V_7 = (bool)0;
		int32_t L_75 = __this->____freeCount;
		if ((((int32_t)L_75) <= ((int32_t)0)))
		{
			goto IL_0223;
		}
	}
	{
		int32_t L_76 = __this->____freeList;
		V_8 = L_76;
		V_7 = (bool)1;
		int32_t L_77 = __this->____freeCount;
		__this->____freeCount = ((int32_t)il2cpp_codegen_subtract(L_77, 1));
		goto IL_0250;
	}

IL_0223:
	{
		int32_t L_78 = __this->____count;
		V_13 = L_78;
		int32_t L_79 = V_13;
		EntryU5BU5D_tAAF64BD0D9C29E733318312670F238A6137022E3* L_80 = V_0;
		int32_t L_81 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_80)->max_length),NULL));
		if ((!(((uint32_t)L_79) == ((uint32_t)L_81))))
		{
			goto IL_023b;
		}
	}
	{
		Dictionary_2_Resize_m4B80FC5F8BA8BAE74E0EAB023D785DFDA03A7F6A(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 44));
		V_6 = (bool)1;
	}

IL_023b:
	{
		int32_t L_82 = V_13;
		V_8 = L_82;
		int32_t L_83 = V_13;
		__this->____count = ((int32_t)il2cpp_codegen_add(L_83, 1));
		EntryU5BU5D_tAAF64BD0D9C29E733318312670F238A6137022E3* L_84 = __this->____entries;
		V_0 = L_84;
	}

IL_0250:
	{
		bool L_85 = V_6;
		if (L_85)
		{
			goto IL_0258;
		}
	}
	{
		int32_t* L_86 = V_4;
		G_B51_0 = L_86;
		goto IL_026d;
	}

IL_0258:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_87 = __this->____buckets;
		int32_t L_88 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_89 = __this->____buckets;
		int32_t L_90 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_89)->max_length),NULL));
		G_B51_0 = ((L_87)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)(L_88%L_90)))));
	}

IL_026d:
	{
		V_9 = G_B51_0;
		EntryU5BU5D_tAAF64BD0D9C29E733318312670F238A6137022E3* L_91 = V_0;
		int32_t L_92 = V_8;
		V_10 = ((L_91)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_92)));
		bool L_93 = V_7;
		if (!L_93)
		{
			goto IL_028a;
		}
	}
	{
		Entry_t385D55B7BB5A3AD762B8087CBDA8389D3818AF28* L_94 = V_10;
		int32_t L_95 = L_94->___next;
		__this->____freeList = L_95;
	}

IL_028a:
	{
		Entry_t385D55B7BB5A3AD762B8087CBDA8389D3818AF28* L_96 = V_10;
		int32_t L_97 = V_2;
		L_96->___hashCode = L_97;
		Entry_t385D55B7BB5A3AD762B8087CBDA8389D3818AF28* L_98 = V_10;
		int32_t* L_99 = V_9;
		int32_t L_100 = *(L_99);
		L_98->___next = ((int32_t)il2cpp_codegen_subtract(L_100, 1));
		Entry_t385D55B7BB5A3AD762B8087CBDA8389D3818AF28* L_101 = V_10;
		Guid_t L_102 = ___0_key;
		L_101->___key = L_102;
		Entry_t385D55B7BB5A3AD762B8087CBDA8389D3818AF28* L_103 = V_10;
		Il2CppSharedGenericObject* L_104 = ___1_value;
		L_103->___value = L_104;
		Il2CppCodeGenWriteBarrier((void**)(&L_103->___value), (void*)L_104);
		int32_t* L_105 = V_9;
		int32_t L_106 = V_8;
		*(L_105) = ((int32_t)il2cpp_codegen_add(L_106, 1));
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_OnDeserialization_m6A54BE936068A38475485E8D84EDC69AC6A008B9_gshared (Dictionary_2_tACC278C341353EB0D3F5219D25804742C5DDC8A9* __this, RuntimeObject* ___0_sender, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	KeyValuePair_2U5BU5D_t9DF131722D7F3B6C04EF603B3CF8C56E1AF7D856* V_3 = NULL;
	int32_t V_4 = 0;
	{
		CHECKED_LOCAL_INIT(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit,(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
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
		int32_t L_4;
		L_4 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_3, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, NULL);
		V_1 = L_4;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_5 = V_0;
		int32_t L_6;
		L_6 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_5, _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69, NULL);
		V_2 = L_6;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_7 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 34)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		RuntimeObject* L_10;
		L_10 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_7, _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9, L_9, NULL);
		__this->____comparer = ((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 35)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 35))));
		int32_t L_11 = V_2;
		if (!L_11)
		{
			goto IL_00c9;
		}
	}
	{
		int32_t L_12 = V_2;
		int32_t L_13;
		L_13 = Dictionary_2_Initialize_m4B270DD202530A4EA0CB4EA2C5463BDFAC3289C5(__this, L_12, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 1));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_14 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 38)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		RuntimeObject* L_17;
		L_17 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_14, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, L_16, NULL);
		V_3 = ((KeyValuePair_2U5BU5D_t9DF131722D7F3B6C04EF603B3CF8C56E1AF7D856*)CastclassSealed((RuntimeObject*)L_17, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 36)));
		KeyValuePair_2U5BU5D_t9DF131722D7F3B6C04EF603B3CF8C56E1AF7D856* L_18 = V_3;
		if (L_18)
		{
			goto IL_007a;
		}
	}
	{
		ThrowHelper_ThrowSerializationException_m03BE2B48CD3617C32FBCEE16030F7C5563E04E16(((int32_t)16), NULL);
	}

IL_007a:
	{
		V_4 = 0;
		goto IL_00c0;
	}

IL_007f:
	{
		KeyValuePair_2U5BU5D_t9DF131722D7F3B6C04EF603B3CF8C56E1AF7D856* L_19 = V_3;
		int32_t L_20 = V_4;
		Guid_t L_21;
		L_21 = KeyValuePair_2_get_Key_m9203ED457651489192177BEC5EBDC178E0F26BC7_inline(((L_19)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_20))), NULL);
		goto IL_009a;
	}

IL_009a:
	{
		KeyValuePair_2U5BU5D_t9DF131722D7F3B6C04EF603B3CF8C56E1AF7D856* L_22 = V_3;
		int32_t L_23 = V_4;
		Guid_t L_24;
		L_24 = KeyValuePair_2_get_Key_m9203ED457651489192177BEC5EBDC178E0F26BC7_inline(((L_22)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_23))), NULL);
		KeyValuePair_2U5BU5D_t9DF131722D7F3B6C04EF603B3CF8C56E1AF7D856* L_25 = V_3;
		int32_t L_26 = V_4;
		Il2CppSharedGenericObject* L_27;
		L_27 = KeyValuePair_2_get_Value_m7FE87D795A3F1AD1B2E7FD1F96E5EF2A82785D93_inline(((L_25)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_26))), NULL);
		Dictionary_2_Add_m12D2FABDF928772CD0B0C28D389D86E688E4F4CB(__this, L_24, L_27, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14));
		int32_t L_28 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_00c0:
	{
		int32_t L_29 = V_4;
		KeyValuePair_2U5BU5D_t9DF131722D7F3B6C04EF603B3CF8C56E1AF7D856* L_30 = V_3;
		int32_t L_31 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_30)->max_length),NULL));
		if ((((int32_t)L_29) < ((int32_t)L_31)))
		{
			goto IL_007f;
		}
	}
	{
		goto IL_00d0;
	}

IL_00c9:
	{
		__this->____buckets = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
	}

IL_00d0:
	{
		int32_t L_32 = V_1;
		__this->____version = L_32;
		CHECKED_LOCAL_INIT(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit,(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_33;
		L_33 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		bool L_34;
		L_34 = ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E(L_33, (RuntimeObject*)__this, ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m4B80FC5F8BA8BAE74E0EAB023D785DFDA03A7F6A_gshared (Dictionary_2_tACC278C341353EB0D3F5219D25804742C5DDC8A9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit);
	{
		int32_t L_0 = __this->____count;
		CHECKED_LOCAL_INIT(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit,(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_1;
		L_1 = HashHelpers_ExpandPrime_m9A35EC171AA0EA16F7C9F71EE6FAD5A82565ADB9(L_0, NULL);
		Dictionary_2_Resize_mADA0004999558ADFD7386840DF35CAA07E676568(__this, L_1, (bool)0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 45));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_mADA0004999558ADFD7386840DF35CAA07E676568_gshared (Dictionary_2_tACC278C341353EB0D3F5219D25804742C5DDC8A9* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	EntryU5BU5D_tAAF64BD0D9C29E733318312670F238A6137022E3* V_1 = NULL;
	int32_t V_2 = 0;
	Guid_t V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		int32_t L_0 = ___0_newSize;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = ___0_newSize;
		EntryU5BU5D_tAAF64BD0D9C29E733318312670F238A6137022E3* L_3 = (EntryU5BU5D_tAAF64BD0D9C29E733318312670F238A6137022E3*)(EntryU5BU5D_tAAF64BD0D9C29E733318312670F238A6137022E3*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 43), (uint32_t)L_2);
		V_1 = L_3;
		int32_t L_4 = __this->____count;
		V_2 = L_4;
		EntryU5BU5D_tAAF64BD0D9C29E733318312670F238A6137022E3* L_5 = __this->____entries;
		EntryU5BU5D_tAAF64BD0D9C29E733318312670F238A6137022E3* L_6 = V_1;
		int32_t L_7 = V_2;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, 0, (RuntimeArray*)L_6, 0, L_7, NULL);
		il2cpp_codegen_initobj((&V_3), sizeof(Guid_t));
		Guid_t L_8 = V_3;
		bool L_9 = ___1_forceNewHashCodes;
		if (!((int32_t)((int32_t)false&(int32_t)L_9)))
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
		EntryU5BU5D_tAAF64BD0D9C29E733318312670F238A6137022E3* L_10 = V_1;
		int32_t L_11 = V_4;
		int32_t L_12 = ((L_10)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_11)))->___hashCode;
		if ((((int32_t)L_12) < ((int32_t)0)))
		{
			goto IL_0079;
		}
	}
	{
		EntryU5BU5D_tAAF64BD0D9C29E733318312670F238A6137022E3* L_13 = V_1;
		int32_t L_14 = V_4;
		EntryU5BU5D_tAAF64BD0D9C29E733318312670F238A6137022E3* L_15 = V_1;
		int32_t L_16 = V_4;
		Guid_t* L_17 = (Guid_t*)(&((L_15)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_16)))->___key);
		int32_t L_18;
		L_18 = Guid_GetHashCode_m239B7679BB9ED5A207B3D2F858B5F30FFC455408(L_17, NULL);
		((L_13)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_14)))->___hashCode = ((int32_t)(L_18&((int32_t)2147483647LL)));
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
		EntryU5BU5D_tAAF64BD0D9C29E733318312670F238A6137022E3* L_22 = V_1;
		int32_t L_23 = V_5;
		int32_t L_24 = ((L_22)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_23)))->___hashCode;
		if ((((int32_t)L_24) < ((int32_t)0)))
		{
			goto IL_00c5;
		}
	}
	{
		EntryU5BU5D_tAAF64BD0D9C29E733318312670F238A6137022E3* L_25 = V_1;
		int32_t L_26 = V_5;
		int32_t L_27 = ((L_25)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_26)))->___hashCode;
		int32_t L_28 = ___0_newSize;
		V_6 = ((int32_t)(L_27%L_28));
		EntryU5BU5D_tAAF64BD0D9C29E733318312670F238A6137022E3* L_29 = V_1;
		int32_t L_30 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = V_0;
		int32_t L_32 = V_6;
		int32_t L_33 = L_32;
		int32_t L_34 = (L_31)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_33));
		((L_29)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_30)))->___next = ((int32_t)il2cpp_codegen_subtract(L_34, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_35 = V_0;
		int32_t L_36 = V_6;
		int32_t L_37 = V_5;
		(L_35)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_36), (int32_t)((int32_t)il2cpp_codegen_add(L_37, 1)));
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
		__this->____buckets = L_41;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_41);
		EntryU5BU5D_tAAF64BD0D9C29E733318312670F238A6137022E3* L_42 = V_1;
		__this->____entries = L_42;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries), (void*)L_42);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m2BD0E6825D66721033A14ABB6F727A8D1C8E0628_gshared (Dictionary_2_tACC278C341353EB0D3F5219D25804742C5DDC8A9* __this, Guid_t ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Entry_t385D55B7BB5A3AD762B8087CBDA8389D3818AF28* V_4 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	RuntimeObject* G_B10_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	bool G_B11_0 = false;
	{
		goto IL_000e;
	}

IL_000e:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		if (!L_1)
		{
			goto IL_0149;
		}
	}
	{
		RuntimeObject* L_2 = __this->____comparer;
		RuntimeObject* L_3 = L_2;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_0032;
		}
		G_B4_0 = L_3;
	}
	{
		int32_t L_4;
		L_4 = Guid_GetHashCode_m239B7679BB9ED5A207B3D2F858B5F30FFC455408((&___0_key), NULL);
		G_B6_0 = L_4;
		goto IL_0038;
	}

IL_0032:
	{
		Guid_t L_5 = ___0_key;
		int32_t L_6;
		L_6 = InterfaceFuncInvoker1< int32_t, Guid_t >::Invoke(1, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 35), G_B5_0, L_5);
		G_B6_0 = L_6;
	}

IL_0038:
	{
		V_0 = ((int32_t)(G_B6_0&((int32_t)2147483647LL)));
		int32_t L_7 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = __this->____buckets;
		int32_t L_9 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_8)->max_length),NULL));
		V_1 = ((int32_t)(L_7%L_9));
		V_2 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = __this->____buckets;
		int32_t L_11 = V_1;
		int32_t L_12 = L_11;
		int32_t L_13 = (L_10)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_12));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_13, 1));
		goto IL_0142;
	}

IL_005c:
	{
		EntryU5BU5D_tAAF64BD0D9C29E733318312670F238A6137022E3* L_14 = __this->____entries;
		int32_t L_15 = V_3;
		V_4 = ((L_14)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_15)));
		Entry_t385D55B7BB5A3AD762B8087CBDA8389D3818AF28* L_16 = V_4;
		int32_t L_17 = L_16->___hashCode;
		int32_t L_18 = V_0;
		if ((!(((uint32_t)L_17) == ((uint32_t)L_18))))
		{
			goto IL_0138;
		}
	}
	{
		RuntimeObject* L_19 = __this->____comparer;
		RuntimeObject* L_20 = L_19;
		if (L_20)
		{
			G_B10_0 = L_20;
			goto IL_0095;
		}
		G_B9_0 = L_20;
	}
	{
		EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* L_21;
		L_21 = EqualityComparer_1_get_Default_m5DCC393F5D59545D96AF9FF747F17C72EABB5D3B_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2));
		Entry_t385D55B7BB5A3AD762B8087CBDA8389D3818AF28* L_22 = V_4;
		Guid_t L_23 = L_22->___key;
		Guid_t L_24 = ___0_key;
		bool L_25;
		L_25 = VirtualFuncInvoker2< bool, Guid_t, Guid_t >::Invoke(8, L_21, L_23, L_24);
		G_B11_0 = L_25;
		goto IL_00a2;
	}

IL_0095:
	{
		Entry_t385D55B7BB5A3AD762B8087CBDA8389D3818AF28* L_26 = V_4;
		Guid_t L_27 = L_26->___key;
		Guid_t L_28 = ___0_key;
		bool L_29;
		L_29 = InterfaceFuncInvoker2< bool, Guid_t, Guid_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 35), G_B10_0, L_27, L_28);
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
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = __this->____buckets;
		int32_t L_32 = V_1;
		Entry_t385D55B7BB5A3AD762B8087CBDA8389D3818AF28* L_33 = V_4;
		int32_t L_34 = L_33->___next;
		(L_31)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_32), (int32_t)((int32_t)il2cpp_codegen_add(L_34, 1)));
		goto IL_00d6;
	}

IL_00be:
	{
		EntryU5BU5D_tAAF64BD0D9C29E733318312670F238A6137022E3* L_35 = __this->____entries;
		int32_t L_36 = V_2;
		Entry_t385D55B7BB5A3AD762B8087CBDA8389D3818AF28* L_37 = V_4;
		int32_t L_38 = L_37->___next;
		((L_35)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_36)))->___next = L_38;
	}

IL_00d6:
	{
		Entry_t385D55B7BB5A3AD762B8087CBDA8389D3818AF28* L_39 = V_4;
		L_39->___hashCode = (-1);
		Entry_t385D55B7BB5A3AD762B8087CBDA8389D3818AF28* L_40 = V_4;
		int32_t L_41 = __this->____freeList;
		L_40->___next = L_41;
		goto IL_00ff;
	}

IL_00ff:
	{
	}
	{
		Entry_t385D55B7BB5A3AD762B8087CBDA8389D3818AF28* L_42 = V_4;
		Il2CppSharedGenericObject** L_43 = (Il2CppSharedGenericObject**)(&L_42->___value);
		il2cpp_codegen_initobj(L_43, sizeof(Il2CppSharedGenericObject*));
	}

IL_0113:
	{
		int32_t L_44 = V_3;
		__this->____freeList = L_44;
		int32_t L_45 = __this->____freeCount;
		__this->____freeCount = ((int32_t)il2cpp_codegen_add(L_45, 1));
		int32_t L_46 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_46, 1));
		return (bool)1;
	}

IL_0138:
	{
		int32_t L_47 = V_3;
		V_2 = L_47;
		Entry_t385D55B7BB5A3AD762B8087CBDA8389D3818AF28* L_48 = V_4;
		int32_t L_49 = L_48->___next;
		V_3 = L_49;
	}

IL_0142:
	{
		int32_t L_50 = V_3;
		if ((((int32_t)L_50) >= ((int32_t)0)))
		{
			goto IL_005c;
		}
	}

IL_0149:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m6CA8C95085FAB19088435E4FB24516A35AB75C3E_gshared (Dictionary_2_tACC278C341353EB0D3F5219D25804742C5DDC8A9* __this, Guid_t ___0_key, Il2CppSharedGenericObject** ___1_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Entry_t385D55B7BB5A3AD762B8087CBDA8389D3818AF28* V_4 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	RuntimeObject* G_B10_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	bool G_B11_0 = false;
	{
		goto IL_000e;
	}

IL_000e:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		if (!L_1)
		{
			goto IL_0156;
		}
	}
	{
		RuntimeObject* L_2 = __this->____comparer;
		RuntimeObject* L_3 = L_2;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_0032;
		}
		G_B4_0 = L_3;
	}
	{
		int32_t L_4;
		L_4 = Guid_GetHashCode_m239B7679BB9ED5A207B3D2F858B5F30FFC455408((&___0_key), NULL);
		G_B6_0 = L_4;
		goto IL_0038;
	}

IL_0032:
	{
		Guid_t L_5 = ___0_key;
		int32_t L_6;
		L_6 = InterfaceFuncInvoker1< int32_t, Guid_t >::Invoke(1, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 35), G_B5_0, L_5);
		G_B6_0 = L_6;
	}

IL_0038:
	{
		V_0 = ((int32_t)(G_B6_0&((int32_t)2147483647LL)));
		int32_t L_7 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = __this->____buckets;
		int32_t L_9 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_8)->max_length),NULL));
		V_1 = ((int32_t)(L_7%L_9));
		V_2 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = __this->____buckets;
		int32_t L_11 = V_1;
		int32_t L_12 = L_11;
		int32_t L_13 = (L_10)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_12));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_13, 1));
		goto IL_014f;
	}

IL_005c:
	{
		EntryU5BU5D_tAAF64BD0D9C29E733318312670F238A6137022E3* L_14 = __this->____entries;
		int32_t L_15 = V_3;
		V_4 = ((L_14)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_15)));
		Entry_t385D55B7BB5A3AD762B8087CBDA8389D3818AF28* L_16 = V_4;
		int32_t L_17 = L_16->___hashCode;
		int32_t L_18 = V_0;
		if ((!(((uint32_t)L_17) == ((uint32_t)L_18))))
		{
			goto IL_0145;
		}
	}
	{
		RuntimeObject* L_19 = __this->____comparer;
		RuntimeObject* L_20 = L_19;
		if (L_20)
		{
			G_B10_0 = L_20;
			goto IL_0095;
		}
		G_B9_0 = L_20;
	}
	{
		EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* L_21;
		L_21 = EqualityComparer_1_get_Default_m5DCC393F5D59545D96AF9FF747F17C72EABB5D3B_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2));
		Entry_t385D55B7BB5A3AD762B8087CBDA8389D3818AF28* L_22 = V_4;
		Guid_t L_23 = L_22->___key;
		Guid_t L_24 = ___0_key;
		bool L_25;
		L_25 = VirtualFuncInvoker2< bool, Guid_t, Guid_t >::Invoke(8, L_21, L_23, L_24);
		G_B11_0 = L_25;
		goto IL_00a2;
	}

IL_0095:
	{
		Entry_t385D55B7BB5A3AD762B8087CBDA8389D3818AF28* L_26 = V_4;
		Guid_t L_27 = L_26->___key;
		Guid_t L_28 = ___0_key;
		bool L_29;
		L_29 = InterfaceFuncInvoker2< bool, Guid_t, Guid_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 35), G_B10_0, L_27, L_28);
		G_B11_0 = L_29;
	}

IL_00a2:
	{
		if (!G_B11_0)
		{
			goto IL_0145;
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
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = __this->____buckets;
		int32_t L_32 = V_1;
		Entry_t385D55B7BB5A3AD762B8087CBDA8389D3818AF28* L_33 = V_4;
		int32_t L_34 = L_33->___next;
		(L_31)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_32), (int32_t)((int32_t)il2cpp_codegen_add(L_34, 1)));
		goto IL_00d6;
	}

IL_00be:
	{
		EntryU5BU5D_tAAF64BD0D9C29E733318312670F238A6137022E3* L_35 = __this->____entries;
		int32_t L_36 = V_2;
		Entry_t385D55B7BB5A3AD762B8087CBDA8389D3818AF28* L_37 = V_4;
		int32_t L_38 = L_37->___next;
		((L_35)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_36)))->___next = L_38;
	}

IL_00d6:
	{
		Il2CppSharedGenericObject** L_39 = ___1_value;
		Entry_t385D55B7BB5A3AD762B8087CBDA8389D3818AF28* L_40 = V_4;
		Il2CppSharedGenericObject* L_41 = L_40->___value;
		*(Il2CppSharedGenericObject**)L_39 = L_41;
		Il2CppCodeGenWriteBarrier((void**)(Il2CppSharedGenericObject**)L_39, (void*)L_41);
		Entry_t385D55B7BB5A3AD762B8087CBDA8389D3818AF28* L_42 = V_4;
		L_42->___hashCode = (-1);
		Entry_t385D55B7BB5A3AD762B8087CBDA8389D3818AF28* L_43 = V_4;
		int32_t L_44 = __this->____freeList;
		L_43->___next = L_44;
		goto IL_010c;
	}

IL_010c:
	{
	}
	{
		Entry_t385D55B7BB5A3AD762B8087CBDA8389D3818AF28* L_45 = V_4;
		Il2CppSharedGenericObject** L_46 = (Il2CppSharedGenericObject**)(&L_45->___value);
		il2cpp_codegen_initobj(L_46, sizeof(Il2CppSharedGenericObject*));
	}

IL_0120:
	{
		int32_t L_47 = V_3;
		__this->____freeList = L_47;
		int32_t L_48 = __this->____freeCount;
		__this->____freeCount = ((int32_t)il2cpp_codegen_add(L_48, 1));
		int32_t L_49 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_49, 1));
		return (bool)1;
	}

IL_0145:
	{
		int32_t L_50 = V_3;
		V_2 = L_50;
		Entry_t385D55B7BB5A3AD762B8087CBDA8389D3818AF28* L_51 = V_4;
		int32_t L_52 = L_51->___next;
		V_3 = L_52;
	}

IL_014f:
	{
		int32_t L_53 = V_3;
		if ((((int32_t)L_53) >= ((int32_t)0)))
		{
			goto IL_005c;
		}
	}

IL_0156:
	{
		Il2CppSharedGenericObject** L_54 = ___1_value;
		il2cpp_codegen_initobj(L_54, sizeof(Il2CppSharedGenericObject*));
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m198483A968CEBE45C4EE5A7E372ECF0085087FEA_gshared (Dictionary_2_tACC278C341353EB0D3F5219D25804742C5DDC8A9* __this, Guid_t ___0_key, Il2CppSharedGenericObject** ___1_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		Guid_t L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m9F77A9A1350FCE78B97CC693F9F5444E8F3E645D(__this, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 26));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0025;
		}
	}
	{
		Il2CppSharedGenericObject** L_3 = ___1_value;
		EntryU5BU5D_tAAF64BD0D9C29E733318312670F238A6137022E3* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		Il2CppSharedGenericObject* L_6 = ((L_4)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		*(Il2CppSharedGenericObject**)L_3 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(Il2CppSharedGenericObject**)L_3, (void*)L_6);
		return (bool)1;
	}

IL_0025:
	{
		Il2CppSharedGenericObject** L_7 = ___1_value;
		il2cpp_codegen_initobj(L_7, sizeof(Il2CppSharedGenericObject*));
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryAdd_mEAF6BFC11AD4EA79E3B5884F495CDD32FB9CF30F_gshared (Dictionary_2_tACC278C341353EB0D3F5219D25804742C5DDC8A9* __this, Guid_t ___0_key, Il2CppSharedGenericObject* ___1_value, const RuntimeMethod* method) 
{
	{
		Guid_t L_0 = ___0_key;
		Il2CppSharedGenericObject* L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_m7AC671B331F6CD67E04ADA8CD9174C90AB75E18D(__this, L_0, L_1, 0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 27));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m22E850641682AB81F24550AAFBBE396B1B7834F8_gshared (Dictionary_2_tACC278C341353EB0D3F5219D25804742C5DDC8A9* __this, KeyValuePair_2U5BU5D_t9DF131722D7F3B6C04EF603B3CF8C56E1AF7D856* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2U5BU5D_t9DF131722D7F3B6C04EF603B3CF8C56E1AF7D856* L_0 = ___0_array;
		int32_t L_1 = ___1_index;
		Dictionary_2_CopyTo_m99C002B6D6FCB05E047BE5D0AE65AC2F6E3ACD60(__this, L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_ICollection_CopyTo_mD44BA3E3AD85A0C5AC3BF8F778210F7D0D364EEE_gshared (Dictionary_2_tACC278C341353EB0D3F5219D25804742C5DDC8A9* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_t9DF131722D7F3B6C04EF603B3CF8C56E1AF7D856* V_0 = NULL;
	DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* V_1 = NULL;
	EntryU5BU5D_tAAF64BD0D9C29E733318312670F238A6137022E3* V_2 = NULL;
	int32_t V_3 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_4 = NULL;
	int32_t V_5 = 0;
	EntryU5BU5D_tAAF64BD0D9C29E733318312670F238A6137022E3* V_6 = NULL;
	int32_t V_7 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		int32_t L_2;
		L_2 = il2cpp_codegen_array_get_rank(L_1);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		RuntimeArray* L_6 = ___0_array;
		int32_t L_7;
		L_7 = il2cpp_codegen_array_get_length(L_6);
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
		RuntimeArray* L_8 = ___0_array;
		int32_t L_9;
		L_9 = il2cpp_codegen_array_get_length(L_8);
		int32_t L_10 = ___1_index;
		int32_t L_11;
		L_11 = Dictionary_2_get_Count_m62CB7B656456CFDD5DC73F6ECAA5BAF24EFBA62C(__this, NULL);
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_9, L_10))) >= ((int32_t)L_11)))
		{
			goto IL_004b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(5, NULL);
	}

IL_004b:
	{
		RuntimeArray* L_12 = ___0_array;
		V_0 = ((KeyValuePair_2U5BU5D_t9DF131722D7F3B6C04EF603B3CF8C56E1AF7D856*)IsInstSealed((RuntimeObject*)L_12, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 36)));
		KeyValuePair_2U5BU5D_t9DF131722D7F3B6C04EF603B3CF8C56E1AF7D856* L_13 = V_0;
		if (!L_13)
		{
			goto IL_005e;
		}
	}
	{
		KeyValuePair_2U5BU5D_t9DF131722D7F3B6C04EF603B3CF8C56E1AF7D856* L_14 = V_0;
		int32_t L_15 = ___1_index;
		Dictionary_2_CopyTo_m99C002B6D6FCB05E047BE5D0AE65AC2F6E3ACD60(__this, L_14, L_15, NULL);
		return;
	}

IL_005e:
	{
		RuntimeArray* L_16 = ___0_array;
		V_1 = ((DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533*)IsInstSealed((RuntimeObject*)L_16, DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var));
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_17 = V_1;
		if (!L_17)
		{
			goto IL_00c3;
		}
	}
	{
		EntryU5BU5D_tAAF64BD0D9C29E733318312670F238A6137022E3* L_18 = __this->____entries;
		V_2 = L_18;
		V_3 = 0;
		goto IL_00b9;
	}

IL_0073:
	{
		EntryU5BU5D_tAAF64BD0D9C29E733318312670F238A6137022E3* L_19 = V_2;
		int32_t L_20 = V_3;
		int32_t L_21 = ((L_19)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_20)))->___hashCode;
		if ((((int32_t)L_21) < ((int32_t)0)))
		{
			goto IL_00b5;
		}
	}
	{
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_22 = V_1;
		int32_t L_23 = ___1_index;
		int32_t L_24 = L_23;
		___1_index = ((int32_t)il2cpp_codegen_add(L_24, 1));
		EntryU5BU5D_tAAF64BD0D9C29E733318312670F238A6137022E3* L_25 = V_2;
		int32_t L_26 = V_3;
		Guid_t L_27 = ((L_25)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_26)))->___key;
		Guid_t L_28 = L_27;
		RuntimeObject* L_29 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 10), &L_28);
		EntryU5BU5D_tAAF64BD0D9C29E733318312670F238A6137022E3* L_30 = V_2;
		int32_t L_31 = V_3;
		Il2CppSharedGenericObject* L_32 = ((L_30)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_31)))->___value;
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_33;
		memset((&L_33), 0, sizeof(L_33));
		DictionaryEntry__ctor_m2768353E53A75C4860E34B37DAF1342120C5D1EA((&L_33), L_29, (RuntimeObject*)L_32, NULL);
		(L_22)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_24), (DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB)L_33);
	}

IL_00b5:
	{
		int32_t L_34 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_00b9:
	{
		int32_t L_35 = V_3;
		int32_t L_36 = __this->____count;
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
		RuntimeArray* L_37 = ___0_array;
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
	{
		{
			int32_t L_39 = __this->____count;
			V_5 = L_39;
			EntryU5BU5D_tAAF64BD0D9C29E733318312670F238A6137022E3* L_40 = __this->____entries;
			V_6 = L_40;
			V_7 = 0;
			goto IL_0130_1;
		}

IL_00ea_1:
		{
			EntryU5BU5D_tAAF64BD0D9C29E733318312670F238A6137022E3* L_41 = V_6;
			int32_t L_42 = V_7;
			int32_t L_43 = ((L_41)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_42)))->___hashCode;
			if ((((int32_t)L_43) < ((int32_t)0)))
			{
				goto IL_012a_1;
			}
		}
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_44 = V_4;
			int32_t L_45 = ___1_index;
			int32_t L_46 = L_45;
			___1_index = ((int32_t)il2cpp_codegen_add(L_46, 1));
			EntryU5BU5D_tAAF64BD0D9C29E733318312670F238A6137022E3* L_47 = V_6;
			int32_t L_48 = V_7;
			Guid_t L_49 = ((L_47)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_48)))->___key;
			EntryU5BU5D_tAAF64BD0D9C29E733318312670F238A6137022E3* L_50 = V_6;
			int32_t L_51 = V_7;
			Il2CppSharedGenericObject* L_52 = ((L_50)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_51)))->___value;
			KeyValuePair_2_t33B859F0514253F5DB6552A6B2C5730871612D1B L_53;
			memset((&L_53), 0, sizeof(L_53));
			KeyValuePair_2__ctor_mAADB86C56A6064707D6B414C20886941E280A8C8((&L_53), L_49, L_52, NULL);
			KeyValuePair_2_t33B859F0514253F5DB6552A6B2C5730871612D1B L_54 = L_53;
			RuntimeObject* L_55 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 19), &L_54);
			ArrayElementTypeCheck (L_44, L_55);
			(L_44)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_46), (RuntimeObject*)L_55);
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
	}
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
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_59 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0140;
	}

IL_0140:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m4A4EA3A132E8979F3B81CAAF5F5BD81AA90C288D_gshared (Dictionary_2_tACC278C341353EB0D3F5219D25804742C5DDC8A9* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t664339BF0446B4E80F1055BB5C01417CFF320E2A L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m4414214982827D5E3EE390F4EC2D5458C617935D((&L_0), __this, 2, NULL);
		Enumerator_t664339BF0446B4E80F1055BB5C01417CFF320E2A L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 32), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_EnsureCapacity_m1D1600A35C5D3B2C1DA9E71568B4A447824E8A80_gshared (Dictionary_2_tACC278C341353EB0D3F5219D25804742C5DDC8A9* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_000b;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97(((int32_t)12), NULL);
	}

IL_000b:
	{
		EntryU5BU5D_tAAF64BD0D9C29E733318312670F238A6137022E3* L_1 = __this->____entries;
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		EntryU5BU5D_tAAF64BD0D9C29E733318312670F238A6137022E3* L_2 = __this->____entries;
		int32_t L_3 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_2)->max_length),NULL));
		G_B5_0 = L_3;
		goto IL_001e;
	}

IL_001d:
	{
		G_B5_0 = 0;
	}

IL_001e:
	{
		V_0 = G_B5_0;
		int32_t L_4 = V_0;
		int32_t L_5 = ___0_capacity;
		if ((((int32_t)L_4) < ((int32_t)L_5)))
		{
			goto IL_0025;
		}
	}
	{
		int32_t L_6 = V_0;
		return L_6;
	}

IL_0025:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = __this->____buckets;
		if (L_7)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_8 = ___0_capacity;
		int32_t L_9;
		L_9 = Dictionary_2_Initialize_m4B270DD202530A4EA0CB4EA2C5463BDFAC3289C5(__this, L_8, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 1));
		return L_9;
	}

IL_0035:
	{
		int32_t L_10 = ___0_capacity;
		CHECKED_LOCAL_INIT(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit,(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_11;
		L_11 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_10, NULL);
		V_1 = L_11;
		int32_t L_12 = V_1;
		Dictionary_2_Resize_mADA0004999558ADFD7386840DF35CAA07E676568(__this, L_12, (bool)0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 45));
		int32_t L_13 = V_1;
		return L_13;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_IDictionary_set_Item_mFF7478B8510DCF1152CDCD7A043627DE22F70B89_gshared (Dictionary_2_tACC278C341353EB0D3F5219D25804742C5DDC8A9* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(Type_t_StaticInit);
	Guid_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___1_value;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisIl2CppSharedGenericObject_mE7A1EEC53480BA1ED6C827938ADAF45B127DD054(L_1, ((int32_t)15), NULL);
	}
	try
	{
		{
			RuntimeObject* L_2 = ___0_key;
			V_0 = ((*(Guid_t*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 10))));
		}
		try
		{
			Guid_t L_3 = V_0;
			RuntimeObject* L_4 = ___1_value;
			Dictionary_2_set_Item_m93D471C69BDF1EE119D28B69BFACB3B4C6E1B9C5(__this, L_3, ((Il2CppSharedGenericObject*)Castclass((RuntimeObject*)L_4, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 49));
			goto IL_003a_1;
		}
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
		{
			InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_5 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
			RuntimeObject* L_6 = ___1_value;
			RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 50)) };
			CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
			Type_t* L_8;
			L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
			ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_6, L_8, NULL);
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_003a_1;
		}

IL_003a_1:
		{
			goto IL_004f;
		}
	}
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
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_9 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_10 = ___0_key;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 51)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		ThrowHelper_ThrowWrongKeyTypeArgumentException_m90E5BCE2CB10EEC16F254C237121C6816C4D6982(L_10, L_12, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_004f;
	}

IL_004f:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_GetEnumerator_mB37B2F2185806AEA57718E87FB357234B01C1440_gshared (Dictionary_2_tACC278C341353EB0D3F5219D25804742C5DDC8A9* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t664339BF0446B4E80F1055BB5C01417CFF320E2A L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m4414214982827D5E3EE390F4EC2D5458C617935D((&L_0), __this, 1, NULL);
		Enumerator_t664339BF0446B4E80F1055BB5C01417CFF320E2A L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 32), &L_1);
		return (RuntimeObject*)L_2;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* CreateValueCallback_Invoke_mCBFB50800547234672DBBA87011CD2B5BC503308_gshared_inline (CreateValueCallback_t8463FCCADB8B16880DB710DACCEF3B1531B1649B* __this, Il2CppSharedGenericObject* ___0_key, const RuntimeMethod* method) 
{
	typedef Il2CppSharedGenericObject* (*FunctionPointerType) (RuntimeObject*, Il2CppSharedGenericObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_key, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2U5BU5D_t78D9368B607748564E2110C38FC6FCC5150E8DDA* Array_Empty_TisKeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826_m5E4F0239414B89A37EAA5475EF0CAA31256A19AB_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	CHECKED_LOCAL(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit);
	{
		CHECKED_LOCAL_INIT(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 0)),il2cpp_codegen_runtime_class_init_inline);
		KeyValuePair_2U5BU5D_t78D9368B607748564E2110C38FC6FCC5150E8DDA* L_0 = ((EmptyArray_1_t2F24CF6B13CDDAA8B0F0764FD24AFE6483C69336_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Task_1_get_ResultOnSuccess_m15F655DF9F8EE6F8388A9432454900F07EFC57BB_inline (Task_1_t824317F4B958F7512E8F7300511752937A6C6043* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___m_result;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Task_1_get_ResultOnSuccess_mF098AC108FFA2E0D992306C6D956BA37874FAC77_inline (Task_1_t4C228DE57804012969575431CFF12D57C875552D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___m_result;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR VoidTaskResult_t73B628B764C6668DAAAE2D37BD6FC07BCA27A5AC Task_1_get_ResultOnSuccess_mF2B4314A2FC0448358439C96FC6217501A2ACFE0_inline (Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17* __this, const RuntimeMethod* method) 
{
	{
		VoidTaskResult_t73B628B764C6668DAAAE2D37BD6FC07BCA27A5AC L_0 = __this->___m_result;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* Task_1_get_ResultOnSuccess_mBB7F2275D4EF61A83D08373AA0D41ACC31AF73BD_gshared_inline (Task_1_tB348EA1B62802484AB33A91D4404C52DCF7BDB18* __this, const RuntimeMethod* method) 
{
	{
		Il2CppSharedGenericObject* L_0 = __this->___m_result;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t DelegateWithContext_1_get_NativeInvocationContext_mBAE60D72C4155A0AD8CDC5216950F127D2862BAC_gshared_inline (DelegateWithContext_1_tB8D0AD031518ADF1F51C1EC7F3118EDC45A5A126* __this, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = __this->___U3CNativeInvocationContextU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* EqualityComparer_1_get_Default_mB451453B7B5B4B570A9347E090AB0FAC75C0C628_gshared_inline (const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* V_0 = NULL;
	{
		EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* L_0 = ((EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* L_2;
		L_2 = EqualityComparer_1_CreateComparer_m9D6667E20D4FCBB62E2725016FE2FC32442FE530(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
		V_0 = L_2;
		EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* DelegateWithContext_1_get_NativeDelegate_m1B8E1D02D8C9AB37531DE25E54560229D57A9F0C_gshared_inline (DelegateWithContext_1_tB8D0AD031518ADF1F51C1EC7F3118EDC45A5A126* __this, const RuntimeMethod* method) 
{
	{
		Il2CppSharedGenericObject* L_0 = __this->___U3CNativeDelegateU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* KeyValuePair_2_get_Key_m652AB26F17E6ECED100EADCA06D2352D6612B42B_gshared_inline (KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826* __this, const RuntimeMethod* method) 
{
	{
		Il2CppSharedGenericObject* L_0 = __this->___key;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* KeyValuePair_2_get_Value_mC4437F96887FBE0C954234394562430C0CE7747C_gshared_inline (KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826* __this, const RuntimeMethod* method) 
{
	{
		Il2CppSharedGenericObject* L_0 = __this->___value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t2AAFF66C447B855AEB2EF13BDDE1F6301924188F* EqualityComparer_1_get_Default_m0AD70A24662B87624F0C4A66B70581A7F28BE2CC_inline (const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	EqualityComparer_1_t2AAFF66C447B855AEB2EF13BDDE1F6301924188F* V_0 = NULL;
	{
		EqualityComparer_1_t2AAFF66C447B855AEB2EF13BDDE1F6301924188F* L_0 = ((EqualityComparer_1_t2AAFF66C447B855AEB2EF13BDDE1F6301924188F_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_t2AAFF66C447B855AEB2EF13BDDE1F6301924188F* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_t2AAFF66C447B855AEB2EF13BDDE1F6301924188F* L_2;
		L_2 = EqualityComparer_1_CreateComparer_m3C58D527F5C7E5B0BA994273A014FA76550155ED(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
		V_0 = L_2;
		EqualityComparer_1_t2AAFF66C447B855AEB2EF13BDDE1F6301924188F* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_t2AAFF66C447B855AEB2EF13BDDE1F6301924188F_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_t2AAFF66C447B855AEB2EF13BDDE1F6301924188F_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_t2AAFF66C447B855AEB2EF13BDDE1F6301924188F* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8 KeyValuePair_2_get_Key_m8C1C8921B31C68F85331E5AF3432D221789E3BF8_inline (KeyValuePair_2_t367B869B5B9E3AC484B7F3A6A22B30D27181B421* __this, const RuntimeMethod* method) 
{
	{
		ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8 L_0 = __this->___key;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t KeyValuePair_2_get_Value_mA6758BC25166F8DDB057093FDC0F13EFD4BAC6DB_inline (KeyValuePair_2_t367B869B5B9E3AC484B7F3A6A22B30D27181B421* __this, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = __this->___value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* EqualityComparer_1_get_Default_mF554877B669658FD6449F84AE369214855D0BC40_inline (const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* V_0 = NULL;
	{
		EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* L_0 = ((EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* L_2;
		L_2 = EqualityComparer_1_CreateComparer_m64D3D774E7DAF5FC0206DC26D9BA53BF70F1F93B(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
		V_0 = L_2;
		EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t6AF08CEAD675C05C1B701806606C7CB7CF53951F* EqualityComparer_1_get_Default_m56D88D65184F0E2CB43D9A2853637D9E87D10FC5_gshared_inline (const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	EqualityComparer_1_t6AF08CEAD675C05C1B701806606C7CB7CF53951F* V_0 = NULL;
	{
		EqualityComparer_1_t6AF08CEAD675C05C1B701806606C7CB7CF53951F* L_0 = ((EqualityComparer_1_t6AF08CEAD675C05C1B701806606C7CB7CF53951F_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_t6AF08CEAD675C05C1B701806606C7CB7CF53951F* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_t6AF08CEAD675C05C1B701806606C7CB7CF53951F* L_2;
		L_2 = EqualityComparer_1_CreateComparer_mDDE2C10C48FE5C71172724020C00DA2C431DBF21(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
		V_0 = L_2;
		EqualityComparer_1_t6AF08CEAD675C05C1B701806606C7CB7CF53951F* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_t6AF08CEAD675C05C1B701806606C7CB7CF53951F_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_t6AF08CEAD675C05C1B701806606C7CB7CF53951F_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_t6AF08CEAD675C05C1B701806606C7CB7CF53951F* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A KeyValuePair_2_get_Key_mEFCCF9BC1F4022E15A29A44A49E8DE3FA5180978_gshared_inline (KeyValuePair_2_tA18DA0C0E7B0709B9741404F85570AF6334E7295* __this, const RuntimeMethod* method) 
{
	{
		ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A L_0 = __this->___key;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* KeyValuePair_2_get_Value_m8A4C32B0E709D6A7629FA7869F673CC94F500282_gshared_inline (KeyValuePair_2_tA18DA0C0E7B0709B9741404F85570AF6334E7295* __this, const RuntimeMethod* method) 
{
	{
		Il2CppSharedGenericObject* L_0 = __this->___value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t4515F567FF8CA58A31FECE4C986C6950AAF8A2CB* EqualityComparer_1_get_Default_mF252A6DD8B0E68A7EC7F6356C3007FBCDC35877D_gshared_inline (const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	EqualityComparer_1_t4515F567FF8CA58A31FECE4C986C6950AAF8A2CB* V_0 = NULL;
	{
		EqualityComparer_1_t4515F567FF8CA58A31FECE4C986C6950AAF8A2CB* L_0 = ((EqualityComparer_1_t4515F567FF8CA58A31FECE4C986C6950AAF8A2CB_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_t4515F567FF8CA58A31FECE4C986C6950AAF8A2CB* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_t4515F567FF8CA58A31FECE4C986C6950AAF8A2CB* L_2;
		L_2 = EqualityComparer_1_CreateComparer_mB0408C395999134DEDD71AB568D127159ACF5141(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
		V_0 = L_2;
		EqualityComparer_1_t4515F567FF8CA58A31FECE4C986C6950AAF8A2CB* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_t4515F567FF8CA58A31FECE4C986C6950AAF8A2CB_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_t4515F567FF8CA58A31FECE4C986C6950AAF8A2CB_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_t4515F567FF8CA58A31FECE4C986C6950AAF8A2CB* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A KeyValuePair_2_get_Key_mD0027E57B606342804BAAEE3B37C9C7FC77D90E3_gshared_inline (KeyValuePair_2_t64E764570967C9CF8DB9472130C0647F11D963A2* __this, const RuntimeMethod* method) 
{
	{
		ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A L_0 = __this->___key;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* KeyValuePair_2_get_Value_m1B98DA271855EDA63BE7803194E15F9A7CEA3D25_gshared_inline (KeyValuePair_2_t64E764570967C9CF8DB9472130C0647F11D963A2* __this, const RuntimeMethod* method) 
{
	{
		Il2CppSharedGenericObject* L_0 = __this->___value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t63A37CBBA150A456A5494B585BAAD61AEC84FCC3* EqualityComparer_1_get_Default_m16781A8E4EDB2114168E318B51C5081028E57F3D_inline (const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	EqualityComparer_1_t63A37CBBA150A456A5494B585BAAD61AEC84FCC3* V_0 = NULL;
	{
		EqualityComparer_1_t63A37CBBA150A456A5494B585BAAD61AEC84FCC3* L_0 = ((EqualityComparer_1_t63A37CBBA150A456A5494B585BAAD61AEC84FCC3_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_t63A37CBBA150A456A5494B585BAAD61AEC84FCC3* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_t63A37CBBA150A456A5494B585BAAD61AEC84FCC3* L_2;
		L_2 = EqualityComparer_1_CreateComparer_m5C45453CBD8B5F1DD5C8F3C77D3B5F80BB1B4B70(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
		V_0 = L_2;
		EqualityComparer_1_t63A37CBBA150A456A5494B585BAAD61AEC84FCC3* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_t63A37CBBA150A456A5494B585BAAD61AEC84FCC3_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_t63A37CBBA150A456A5494B585BAAD61AEC84FCC3_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_t63A37CBBA150A456A5494B585BAAD61AEC84FCC3* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 KeyValuePair_2_get_Key_m90712219738452E82D01F79E5C5E2AFC458B7F42_gshared_inline (KeyValuePair_2_tCD64FBFD0349B053A7915EB43CFE2E4C123110E3* __this, const RuntimeMethod* method) 
{
	{
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 L_0 = __this->___key;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* KeyValuePair_2_get_Value_m386D7A4C4EC42B076395DF4004EC546AFB963848_gshared_inline (KeyValuePair_2_tCD64FBFD0349B053A7915EB43CFE2E4C123110E3* __this, const RuntimeMethod* method) 
{
	{
		Il2CppSharedGenericObject* L_0 = __this->___value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 KeyValuePair_2_get_Key_m4D827FF66807261BDE920B3D6816EC37082073B3_inline (KeyValuePair_2_t0BE50338B196BFD79E02288350CE100D1C15D165* __this, const RuntimeMethod* method) 
{
	{
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 L_0 = __this->___key;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FontAssetRef_t7B8E634754BC5683F1E6601D7CD0061285A28FF3 KeyValuePair_2_get_Value_mC82FE8FDC9CEC01214097444FE6D11C920B45461_inline (KeyValuePair_2_t0BE50338B196BFD79E02288350CE100D1C15D165* __this, const RuntimeMethod* method) 
{
	{
		FontAssetRef_t7B8E634754BC5683F1E6601D7CD0061285A28FF3 L_0 = __this->___value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_tC81AF0456B0ECB7415E30894699AAB099256D323* EqualityComparer_1_get_Default_m4626BA1582304AE05985ABD8E116508974651F1E_inline (const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	EqualityComparer_1_tC81AF0456B0ECB7415E30894699AAB099256D323* V_0 = NULL;
	{
		EqualityComparer_1_tC81AF0456B0ECB7415E30894699AAB099256D323* L_0 = ((EqualityComparer_1_tC81AF0456B0ECB7415E30894699AAB099256D323_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_tC81AF0456B0ECB7415E30894699AAB099256D323* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_tC81AF0456B0ECB7415E30894699AAB099256D323* L_2;
		L_2 = EqualityComparer_1_CreateComparer_mAFEFF1E34FDEF405591ED3C481B6713C43E0B44F(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
		V_0 = L_2;
		EqualityComparer_1_tC81AF0456B0ECB7415E30894699AAB099256D323* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_tC81AF0456B0ECB7415E30894699AAB099256D323_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_tC81AF0456B0ECB7415E30894699AAB099256D323_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_tC81AF0456B0ECB7415E30894699AAB099256D323* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* EqualityComparer_1_get_Default_m5DCC393F5D59545D96AF9FF747F17C72EABB5D3B_inline (const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* V_0 = NULL;
	{
		EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* L_0 = ((EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* L_2;
		L_2 = EqualityComparer_1_CreateComparer_mD3D60BAB4A1E7DF8FDC8779F5A1A3104CAD5202A(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
		V_0 = L_2;
		EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Guid_t KeyValuePair_2_get_Key_m9203ED457651489192177BEC5EBDC178E0F26BC7_gshared_inline (KeyValuePair_2_t33B859F0514253F5DB6552A6B2C5730871612D1B* __this, const RuntimeMethod* method) 
{
	{
		Guid_t L_0 = __this->___key;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* KeyValuePair_2_get_Value_m7FE87D795A3F1AD1B2E7FD1F96E5EF2A82785D93_gshared_inline (KeyValuePair_2_t33B859F0514253F5DB6552A6B2C5730871612D1B* __this, const RuntimeMethod* method) 
{
	{
		Il2CppSharedGenericObject* L_0 = __this->___value;
		return L_0;
	}
}
