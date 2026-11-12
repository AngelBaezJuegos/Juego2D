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
template <typename T1, typename T2, typename T3>
struct GenericVirtualActionInvoker3
{
	typedef void (*Action)(void*,T1,T2,T3,const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj,p1,p2,p3,invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct GenericVirtualActionInvoker3Invoker;
template <typename T1, typename T2, typename T3>
struct GenericVirtualActionInvoker3Invoker<T1, T2*, T3*>
{
	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2* p2, T3* p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		void* params[3] = { &p1, p2, p3 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, params[2]);
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
template <typename T1, typename T2>
struct InvokerActionInvoker2;
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2* p2)
	{
		void* params[2] = { &p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, params[1]);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, params[1]);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3;
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1*, T2, T3*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3* p3)
	{
		void* params[3] = { p1, &p2, p3 };
		method->invoker_method(methodPtr, method, obj, params, params[2]);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4;
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4<T1, T2*, T3, T4>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2* p2, T3 p3, T4 p4)
	{
		void* params[4] = { &p1, p2, &p3, &p4 };
		method->invoker_method(methodPtr, method, obj, params, params[3]);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4<T1*, T2, T3, T4*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3 p3, T4* p4)
	{
		void* params[4] = { p1, &p2, &p3, p4 };
		method->invoker_method(methodPtr, method, obj, params, params[3]);
	}
};
template <typename R, typename T1>
struct InvokerFuncInvoker1;
template <typename R, typename T1>
struct InvokerFuncInvoker1<R, T1*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		R ret;
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};

struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
struct ConcurrentDictionary_2_tD35AF7F258B58EA50992681475C37E063603C5AC;
struct Dictionary_2_t9FA6D82CAFC18769F7515BB51D1C56DAE09381C3;
struct Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55;
struct Dictionary_2_tC06AA1A44D7EE786C3ABB974909E606C49036C4D;
struct Dictionary_2_tE1603CE612C16451D1E56FF4D4859D4FE4087C28;
struct Dictionary_2_t384D2A0FF42BF1302A3F513FC32DB105F1CD5455;
struct Dictionary_2_t0E78110F7AC151EB839DC1E384451EB29D89A92A;
struct Func_1_t566D4A654882E282E54CDC3A001E05486F913903;
struct Func_1_tBB8824FA8746333BFFF3AB3CE4A41B58450AF431;
struct Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1;
struct Func_3_t0787D839A577CB564A3192D4164941D5F3DCFBB5;
struct Getter_2_t1C9E25FA1D95753B6B5480577F043E5EF85CC0D8;
struct HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A;
struct IReadOnlyList_1_t91F743E2C65811414FE13CEC276ABA6F012F9173;
struct LinkedListNode_1_t6F3AFCF84169CF541D1E79B660CD8BBF93886ECE;
struct List_1_t9197976D9CD257810C9C417B3050A6C49D652F8D;
struct List_1_t6437F96AEC44DC6E01C2F271F87516B8C7274D63;
struct List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E;
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A;
struct Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12;
struct Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED;
struct SpanAction_2_t7E9C729D70F4264C725B3A5B383D01398D40CB63;
struct SpanAction_2_t84FDFFEECCC96A9A407DCB490E60340E38185947;
struct SpanAction_2_tDD4C82B5E0425EE8AD03A2BB704E9D1FA491820A;
struct StaticGetter_1_t5C0B26D3ABAE6F5762F45AD85D572BDF5BDB1302;
struct Task_1_t824317F4B958F7512E8F7300511752937A6C6043;
struct Task_1_t4C228DE57804012969575431CFF12D57C875552D;
struct Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9;
struct method_tF3C1108E190EA8AF55E8276E5AAD68387FC87C24;
struct method_t6CAE80785C5D219600E887DBF6822087BFE1AE4B;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct IRenderPipelineGraphicsSettingsU5BU5D_t13C894F2F332E48CE3D526E4FF2024E8F1ABF78A;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct LineInfoU5BU5D_t37598F2175B291797270D1161DC29B6296FB169D;
struct LinkInfoU5BU5D_tB7EB23E47AF29CCBEC884F9D0DB95BC97F62AE51;
struct MeshInfoU5BU5D_t3DF8B75BF4A213334EED197AD25E432212894AC6;
struct ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A;
struct RichTextLinkInfoU5BU5D_t6D7ADBC2A21DC25C446095DD4787FA3F1B5C49DD;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct TextCoreVertexU5BU5D_tB1DD4645DEB2946FA2271F94CE23D57FB4B9FE17;
struct TextElementInfoU5BU5D_tEC28C9B72883EE21AA798913497C69E179A15C4E;
struct TextGenerationSettingsU5BU5D_t704B9CF75AE18D52BBB4D6C4F90E26D456DEF646;
struct TextGeneratorU5BU5D_t840858C0E634690569F2445016C52BA3D4A2BE46;
struct TextInfoU5BU5D_tE18061C3D6F2431FE14749A05930922C1EAB2320;
struct TextProcessingElementU5BU5D_t24A1E4C8745577D794FE856B4236875595E7FD22;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
struct WordInfoU5BU5D_tAD74C9720883D7BB229A20FFAE9EFD2CF9963F7B;
struct __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F;
struct Awaitable_t690337FEC1C411606E233EA36A41337B931C23CB;
struct BatchDrawCommand_t9DAB9B739DA9EBC6B1BB0D2DD51AF65B12F66BF0;
struct BatchDrawCommandIndirect_t06F3B5DC4AF7D4B115CEECDB0A1E4E92065BC705;
struct BatchDrawCommandProcedural_t5780BD7745B5772AA54BA6E6021292F6A6553B86;
struct BatchDrawCommandProceduralIndirect_t8417CDF3495237CD8C9204B3DADC6BA4A1488B50;
struct BatchDrawRange_t736D745E918A629658B80A0F7D2D17DAFBA6172F;
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3;
struct Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B;
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
struct CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B;
struct CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57;
struct ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0;
struct DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A;
struct Delegate_t;
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
struct Encoder_tAF9067231A76315584BDF4CD27990E2F485A78FA;
struct EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8;
struct Font_tC95270EA3198038970422D78B74A7F2E218A96B6;
struct FontAsset_t61A6446D934E582651044E33D250EA8D306AB958;
struct Glyph_t700CF8EBE04ED4AEAB520885AAA1B309E02A103F;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct IFormatProvider_tC202922D43BFF3525109ABF3FB79625F5646AB52;
struct IManagedVFSFileHandler_tB83893582A9A15F195D1895A33EE10FE7AA510BA;
struct INativeCallbackProvider_t9C3AAA36B250E1A3DD05DF6F0A4C236CA6DD6DFF;
struct IRenderPipelineGraphicsSettings_tFD0CD27795DA54240F76B377D953AA3DD9929947;
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C;
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
struct LifecycleMethodRegistry_t683994E033865F86C96A14E5F2674E6AD8B97EA8;
struct ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158;
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
struct MethodInfo_t;
struct MonoTypeInfo_t90D5999A69AC524474FDEAC50F55B6CE868AB501;
struct NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472;
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
struct ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB;
struct ReadOnlyAssemblyList_t1BC728228128055A6CB84846AEC1D2F3916FE36B;
struct RenderPipeline_t3AF1E2046D27ABCEBA2279770AADA9F531073E69;
struct RenderPipelineGlobalSettings_t3F883EA6174C636143F71211A146A0B1D9E76000;
struct RuntimeConstructorInfo_tB41E49C7CFA74A03CCC986E78ABB0C0BD331A5AE;
struct RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct ScopeTransitionHelper_t069C5DE337C0C8F615857F4D731C5CBE3B0F4347;
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A;
struct SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E;
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C;
struct SpriteAsset_t1D3CF1D9DC350A4690CB09DE228A8B59F2F02313;
struct StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352;
struct StackOrderedAssemblyList_t57E870538D7E4DC7B2168FFB75368CE0C906AF97;
struct String_t;
struct StringBuilder_t;
struct TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0;
struct TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E;
struct TextElement_tCEF567A8810788262275B39DC39CBA6EBE7472DA;
struct TextHandlePermanentCache_t80A472CA5379A09786EDB6593DBBFEE019CD6953;
struct TextHandleTemporaryCache_t12F4FD2714809BDD0AF7145D4B1C0F8F53E47597;
struct TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4;
struct TextLib_tEF7DFF87B9D7FF0F8B2C231A28CA4CE5A5B59F74;
struct Type_t;
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
struct GetterAdapter_t03939DF178051A4B282ADA9CC4395C34B86D9D2E;
struct ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540;

IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral4EBC86E0EACFCA522AEB82874860D0E248D782A5;
IL2CPP_EXTERN_C String_t* _stringLiteralBB994086C18AA022E5A2DA0F304A8D5119EDD397;
IL2CPP_EXTERN_C String_t* _stringLiteralC4ADC60D7B4D387FB421586A9B670B3D4B8A0775;
IL2CPP_EXTERN_C String_t* _stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB;
IL2CPP_EXTERN_C String_t* _stringLiteralF9010398F7F524C05AB19445BDCE02E617A3E267;
IL2CPP_EXTERN_C const RuntimeMethod* GCHandle_get_Target_m481F9508DA5E384D33CD1F4450060DC56BBD4CD5_RuntimeMethod_var;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_com;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_pinvoke;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct Glyph_t700CF8EBE04ED4AEAB520885AAA1B309E02A103F_marshaled_com;
struct TextCoreVertex_t012334F340F916622ED5237971E8BA32198060E4;

struct LinkInfoU5BU5D_tB7EB23E47AF29CCBEC884F9D0DB95BC97F62AE51;
struct MeshInfoU5BU5D_t3DF8B75BF4A213334EED197AD25E432212894AC6;
struct ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A;
struct TextElementInfoU5BU5D_tEC28C9B72883EE21AA798913497C69E179A15C4E;
struct TextProcessingElementU5BU5D_t24A1E4C8745577D794FE856B4236875595E7FD22;
struct WordInfoU5BU5D_tAD74C9720883D7BB229A20FFAE9EFD2CF9963F7B;
struct __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct List_1_t9197976D9CD257810C9C417B3050A6C49D652F8D  : public RuntimeObject
{
	IRenderPipelineGraphicsSettingsU5BU5D_t13C894F2F332E48CE3D526E4FF2024E8F1ABF78A* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E  : public RuntimeObject
{
	__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A  : public RuntimeObject
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0  : public RuntimeObject
{
	bool ___m_isReadOnly;
	int32_t ___cultureID;
	int32_t ___parent_lcid;
	int32_t ___datetime_index;
	int32_t ___number_index;
	int32_t ___default_calendar_type;
	bool ___m_useUserOverride;
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo;
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo;
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo;
	String_t* ___m_name;
	String_t* ___englishname;
	String_t* ___nativename;
	String_t* ___iso3lang;
	String_t* ___iso2lang;
	String_t* ___win3lang;
	String_t* ___territory;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___native_calendar_names;
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo;
	void* ___textinfo_data;
	int32_t ___m_dataItem;
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___parent_culture;
	bool ___constructed;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___cached_serialized_form;
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D* ___m_cultureData;
	bool ___m_isInherited;
};
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke
{
	int32_t ___m_isReadOnly;
	int32_t ___cultureID;
	int32_t ___parent_lcid;
	int32_t ___datetime_index;
	int32_t ___number_index;
	int32_t ___default_calendar_type;
	int32_t ___m_useUserOverride;
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo;
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo;
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo;
	char* ___m_name;
	char* ___englishname;
	char* ___nativename;
	char* ___iso3lang;
	char* ___iso2lang;
	char* ___win3lang;
	char* ___territory;
	char** ___native_calendar_names;
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo;
	void* ___textinfo_data;
	int32_t ___m_dataItem;
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke* ___parent_culture;
	int32_t ___constructed;
	Il2CppSafeArray* ___cached_serialized_form;
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_pinvoke* ___m_cultureData;
	int32_t ___m_isInherited;
};
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com
{
	int32_t ___m_isReadOnly;
	int32_t ___cultureID;
	int32_t ___parent_lcid;
	int32_t ___datetime_index;
	int32_t ___number_index;
	int32_t ___default_calendar_type;
	int32_t ___m_useUserOverride;
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo;
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo;
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo;
	Il2CppChar* ___m_name;
	Il2CppChar* ___englishname;
	Il2CppChar* ___nativename;
	Il2CppChar* ___iso3lang;
	Il2CppChar* ___iso2lang;
	Il2CppChar* ___win3lang;
	Il2CppChar* ___territory;
	Il2CppChar** ___native_calendar_names;
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo;
	void* ___textinfo_data;
	int32_t ___m_dataItem;
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com* ___parent_culture;
	int32_t ___constructed;
	Il2CppSafeArray* ___cached_serialized_form;
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_com* ___m_cultureData;
	int32_t ___m_isInherited;
};
struct MemberInfo_t  : public RuntimeObject
{
};
struct NativeArrayUnsafeUtility_tB4D8A974D44EE6F4B2C32D5D19861FB081F88FCE  : public RuntimeObject
{
};
struct OnceInScope_t6B4D8335D9FC5EF60351BBC7ECCC807663766FFD  : public RuntimeObject
{
};
struct ReadOnlyAssemblyList_t1BC728228128055A6CB84846AEC1D2F3916FE36B  : public RuntimeObject
{
	RuntimeObject* ____assemblies;
	Dictionary_2_tC06AA1A44D7EE786C3ABB974909E606C49036C4D* ____assemblyLookup;
};
struct RenderPipeline_t3AF1E2046D27ABCEBA2279770AADA9F531073E69  : public RuntimeObject
{
	bool ___U3CdisposedU3Ek__BackingField;
};
struct Resources_t4745F52065DB80D8880840AEDC45965DE35128E1  : public RuntimeObject
{
};
struct RuntimeHelpers_t9E6C71E90FD7CAB0987E101A77FBDA52EFDE284C  : public RuntimeObject
{
};
struct ScopeTransitionHelper_t069C5DE337C0C8F615857F4D731C5CBE3B0F4347  : public RuntimeObject
{
	StackOrderedAssemblyList_t57E870538D7E4DC7B2168FFB75368CE0C906AF97* ____assemblyList;
	LifecycleMethodRegistry_t683994E033865F86C96A14E5F2674E6AD8B97EA8* ____lifecycleMethodRegistry;
	Dictionary_2_t0E78110F7AC151EB839DC1E384451EB29D89A92A* ____processMarkers;
	RuntimeObject* ___U3CNativeCallbackProviderU3Ek__BackingField;
};
struct SerializationBackendManagedCommands_t34A2336C91ADF30EAE847D68400DE88AEB27BCEF  : public RuntimeObject
{
};
struct SpanHelpers_tCA85E2BE495D0EC31B7D20D20E9FC3309265176A  : public RuntimeObject
{
};
struct StackOrderedAssemblyList_t57E870538D7E4DC7B2168FFB75368CE0C906AF97  : public RuntimeObject
{
	int32_t ____count;
	List_1_t6437F96AEC44DC6E01C2F271F87516B8C7274D63* ____assemblyStacks;
};
struct String_t  : public RuntimeObject
{
	int32_t ____stringLength;
	Il2CppChar ____firstChar;
};
struct StringBuilder_t  : public RuntimeObject
{
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_ChunkChars;
	StringBuilder_t* ___m_ChunkPrevious;
	int32_t ___m_ChunkLength;
	int32_t ___m_ChunkOffset;
	int32_t ___m_MaxCapacity;
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
struct TextGeneratorUtilities_tAD0F329B1A5C7CC27CF63086C11FE092B43FED53  : public RuntimeObject
{
};
struct TextInfo_t27E58E62A7552C66D38C175AF9D22622365F5D09  : public RuntimeObject
{
	int32_t ___characterCount;
	int32_t ___spriteCount;
	int32_t ___spaceCount;
	int32_t ___wordCount;
	int32_t ___linkCount;
	int32_t ___lineCount;
	int32_t ___materialCount;
	TextElementInfoU5BU5D_tEC28C9B72883EE21AA798913497C69E179A15C4E* ___textElementInfo;
	WordInfoU5BU5D_tAD74C9720883D7BB229A20FFAE9EFD2CF9963F7B* ___wordInfo;
	LinkInfoU5BU5D_tB7EB23E47AF29CCBEC884F9D0DB95BC97F62AE51* ___linkInfo;
	LineInfoU5BU5D_t37598F2175B291797270D1161DC29B6296FB169D* ___lineInfo;
	MeshInfoU5BU5D_t3DF8B75BF4A213334EED197AD25E432212894AC6* ___meshInfo;
	bool ___hasMultipleColors;
};
struct ThrowHelper_tDAFF1075E5B21B120EF09F3F2EAD51037DAB6F73  : public RuntimeObject
{
};
struct Unsafe_t1B60DB2A3A2A631E537D045BDF121ECE5B06A3A0  : public RuntimeObject
{
};
struct Unsafe_t013486CBD5A88F5F394651AB34F2AC5AE97E71E4  : public RuntimeObject
{
};
struct UnsafeUtility_tC3E6B7D52A973A81739E8BD97D6E757BA8371D46  : public RuntimeObject
{
};
struct UnsafeUtilityInternal_t5FEF1714A0FC54C68B384571076C8DF48E831240  : public RuntimeObject
{
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
struct Vector_t246EF05F1CA5F494FB8B48AB2724DFCD2C2C5A9A  : public RuntimeObject
{
};
struct Volatile_tC26FEDFD254742AD25E4B908FA81293FBBF4ECB0  : public RuntimeObject
{
};
struct MarshalledUnityObject_tA225A4A0AE6E49830C3C0142B2984549E0786A28  : public RuntimeObject
{
};
struct AlignOfHelper_1_tAF795AF837E3C37401B92C7483D74A4E5145DB4D 
{
	uint8_t ___dummy;
	uint8_t ___data;
};
struct AlignOfHelper_1_tB21BA45542E8060FB85BA02002482499EBFA00A2 
{
	uint8_t ___dummy;
	Il2CppChar ___data;
};
struct AlignOfHelper_1_t2B1B6F8C95D259E66B253A1C059AE8D3365B528E 
{
	uint8_t ___dummy;
	int16_t ___data;
};
struct AlignOfHelper_1_t676424B8757032427D7761BC732079DC7512D8AE 
{
	uint8_t ___dummy;
	int32_t ___data;
};
struct AlignOfHelper_1_t25880EEE885729199077AC19774C8BE13323D4B4 
{
	uint8_t ___dummy;
	float ___data;
};
struct AlignOfHelper_1_t70E1FB13BE93757804A731D115FA219AE664F9B9 
{
	uint8_t ___dummy;
	uint16_t ___data;
};
struct AlignOfHelper_1_tF3C6E1F1F032602FD9777BBE4466632711C12DC3 
{
	uint8_t ___dummy;
	uint32_t ___data;
};
struct AlignOfHelper_1_tE21040F72E90527C319FF9B07B398E23DF95BE2E 
{
	uint8_t ___dummy;
	uint64_t ___data;
};
struct ArraySlice_1_t62CE85979628F3D63985E52623CBDB8E8CEDF91C 
{
	uint8_t* ___m_Buffer;
	int32_t ___m_Stride;
	int32_t ___m_Length;
};
struct Task_1_t824317F4B958F7512E8F7300511752937A6C6043  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	bool ___m_result;
};
struct Task_1_t4C228DE57804012969575431CFF12D57C875552D  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	int32_t ___m_result;
};
struct Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9 : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572 {};
struct ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A 
{
	Il2CppSharedGenericObject* ___Item1;
	int32_t ___Item2;
};
struct ValueTuple_3_t94AB360726755BBED1ED3E10C22F399AE18E226E 
{
	Il2CppSharedGenericObject* ___Item1;
	int32_t ___Item2;
	int32_t ___Item3;
};
struct BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D 
{
	BatchDrawCommand_t9DAB9B739DA9EBC6B1BB0D2DD51AF65B12F66BF0* ___drawCommands;
	BatchDrawCommandIndirect_t06F3B5DC4AF7D4B115CEECDB0A1E4E92065BC705* ___indirectDrawCommands;
	BatchDrawCommandProcedural_t5780BD7745B5772AA54BA6E6021292F6A6553B86* ___proceduralDrawCommands;
	BatchDrawCommandProceduralIndirect_t8417CDF3495237CD8C9204B3DADC6BA4A1488B50* ___proceduralIndirectDrawCommands;
	int32_t* ___visibleInstances;
	BatchDrawRange_t736D745E918A629658B80A0F7D2D17DAFBA6172F* ___drawRanges;
	float* ___instanceSortingPositions;
	EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8* ___drawCommandPickingEntityIds;
	int32_t ___drawCommandCount;
	int32_t ___indirectDrawCommandCount;
	int32_t ___proceduralDrawCommandCount;
	int32_t ___proceduralIndirectDrawCommandCount;
	int32_t ___visibleInstanceCount;
	int32_t ___drawRangeCount;
	int32_t ___instanceSortingPositionFloatCount;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	uint8_t ___m_value;
};
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED 
{
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source;
};
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_marshaled_pinvoke
{
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source;
};
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_marshaled_com
{
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source;
};
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	Il2CppChar ___m_value;
};
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	float ___r;
	float ___g;
	float ___b;
	float ___a;
};
struct Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___rgba;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___rgba_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			uint8_t ___r;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___r_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___g_OffsetPadding[1];
			uint8_t ___g;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___g_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___g_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___b_OffsetPadding[2];
			uint8_t ___b;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___b_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___b_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___a_OffsetPadding[3];
			uint8_t ___a;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___a_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___a_forAlignmentOnly;
		};
	};
};
struct DirectCopyCompactEntry_t5C4F1D3A79776D09068B3B01E06DADC03ED43988 
{
	uint8_t ___fieldOffset;
	uint8_t ___destOffset;
};
struct DirectCopyLargeEntry_tB54C2ED00EEBF89E69CA35BFA34F391370211E83 
{
	uint32_t ___fieldOffset;
	uint32_t ___destOffset;
};
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	double ___m_value;
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
struct EntityIdReadEntry_tFAB3989AAFD461BC9CFB5FDB4552B3E73AB095FA 
{
	uint32_t ___fieldOffset;
	uint32_t ___destOffset;
};
struct EntityIdWriteEntry_t8EB65E8B2F6E0CF2166D14AAA825020E1AC204FE 
{
	uint32_t ___fieldOffset;
	uint32_t ___destOffset;
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
struct GlyphAnchorPoint_t581FDCAD5A1D0F3B129968FAEF20C113AAB0BC08 
{
	float ___m_XCoordinate;
	float ___m_YCoordinate;
};
struct GlyphMetrics_t6C1C65A891A6279A0EE807C436436B1E44F7AF1A 
{
	float ___m_Width;
	float ___m_Height;
	float ___m_HorizontalBearingX;
	float ___m_HorizontalBearingY;
	float ___m_HorizontalAdvance;
};
struct GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D 
{
	int32_t ___m_X;
	int32_t ___m_Y;
	int32_t ___m_Width;
	int32_t ___m_Height;
};
struct GlyphValueRecord_t780927A39D46924E0D546A2AE5DDF1BB2B5A9C8E 
{
	float ___m_XPlacement;
	float ___m_YPlacement;
	float ___m_XAdvance;
	float ___m_YAdvance;
};
struct Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175 
{
	int16_t ___m_value;
};
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	int32_t ___m_value;
};
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	int64_t ___m_value;
};
struct IntPtr_t 
{
	void* ___m_value;
};
struct InternalLODGroupSettings_t9F08C56422FEBE035004C6D96DE664DB1961F38D 
{
	uint8_t ___m_Data;
};
struct InternalMeshLodRendererSettings_t2B499712F80597BFB45A4813CC139D1BEEDEBB73 
{
	int32_t ___forceLod;
	float ___lodSelectionBias;
};
struct InternalMeshRendererSettings_tFA0423524032AD2C34E24C53548BE032F67FC6AF 
{
	uint32_t ___m_RenderingLayerMask;
	uint16_t ___m_Data;
	uint8_t ___m_ObjectLayer;
};
struct LigatureSubstitutionRecord_t8660DC6B1D65C655D698216F72BFB3C85DDCAB94 
{
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___m_ComponentGlyphIDs;
	uint32_t ___m_LigatureGlyphID;
};
struct LigatureSubstitutionRecord_t8660DC6B1D65C655D698216F72BFB3C85DDCAB94_marshaled_pinvoke
{
	Il2CppSafeArray* ___m_ComponentGlyphIDs;
	uint32_t ___m_LigatureGlyphID;
};
struct LigatureSubstitutionRecord_t8660DC6B1D65C655D698216F72BFB3C85DDCAB94_marshaled_com
{
	Il2CppSafeArray* ___m_ComponentGlyphIDs;
	uint32_t ___m_LigatureGlyphID;
};
struct LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 
{
	float ___m_red;
	float ___m_green;
	float ___m_blue;
	float ___m_intensity;
};
struct LinkInfo_tE85DDAFDFBDA635E6405C88EE4FD5941A9243DD8 
{
	int32_t ___hashCode;
	int32_t ___linkIdFirstCharacterIndex;
	int32_t ___linkIdLength;
	int32_t ___linkTextfirstCharacterIndex;
	int32_t ___linkTextLength;
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___linkId;
	String_t* ___m_LinkIdString;
	String_t* ___m_LinkTextString;
};
struct LinkInfo_tE85DDAFDFBDA635E6405C88EE4FD5941A9243DD8_marshaled_pinvoke
{
	int32_t ___hashCode;
	int32_t ___linkIdFirstCharacterIndex;
	int32_t ___linkIdLength;
	int32_t ___linkTextfirstCharacterIndex;
	int32_t ___linkTextLength;
	uint8_t* ___linkId;
	char* ___m_LinkIdString;
	char* ___m_LinkTextString;
};
struct LinkInfo_tE85DDAFDFBDA635E6405C88EE4FD5941A9243DD8_marshaled_com
{
	int32_t ___hashCode;
	int32_t ___linkIdFirstCharacterIndex;
	int32_t ___linkIdLength;
	int32_t ___linkTextfirstCharacterIndex;
	int32_t ___linkTextLength;
	uint8_t* ___linkId;
	Il2CppChar* ___m_LinkIdString;
	Il2CppChar* ___m_LinkTextString;
};
struct MarkPositionAdjustment_t2523798D56F14A93A080D9D1298498325A51F436 
{
	float ___m_XPositionAdjustment;
	float ___m_YPositionAdjustment;
};
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 
{
	float ___m00;
	float ___m10;
	float ___m20;
	float ___m30;
	float ___m01;
	float ___m11;
	float ___m21;
	float ___m31;
	float ___m02;
	float ___m12;
	float ___m22;
	float ___m32;
	float ___m03;
	float ___m13;
	float ___m23;
	float ___m33;
};
struct MeshInfoBindings_t75C3901D8003725F85E8FD2F33C1712A92DB3EAF 
{
	TextCoreVertexU5BU5D_tB1DD4645DEB2946FA2271F94CE23D57FB4B9FE17* ___vertexData;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material;
	int32_t ___vertexCount;
};
struct MeshInfoBindings_t75C3901D8003725F85E8FD2F33C1712A92DB3EAF_marshaled_pinvoke
{
	TextCoreVertex_t012334F340F916622ED5237971E8BA32198060E4* ___vertexData;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material;
	int32_t ___vertexCount;
};
struct MeshInfoBindings_t75C3901D8003725F85E8FD2F33C1712A92DB3EAF_marshaled_com
{
	TextCoreVertex_t012334F340F916622ED5237971E8BA32198060E4* ___vertexData;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material;
	int32_t ___vertexCount;
};
struct MultipleSubstitutionRecord_t668A640AFADBD46E3D4EC3A8417D0A02764DF87B 
{
	uint32_t ___m_TargetGlyphID;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___m_SubstituteGlyphIDs;
};
struct MultipleSubstitutionRecord_t668A640AFADBD46E3D4EC3A8417D0A02764DF87B_marshaled_pinvoke
{
	uint32_t ___m_TargetGlyphID;
	Il2CppSafeArray* ___m_SubstituteGlyphIDs;
};
struct MultipleSubstitutionRecord_t668A640AFADBD46E3D4EC3A8417D0A02764DF87B_marshaled_com
{
	uint32_t ___m_TargetGlyphID;
	Il2CppSafeArray* ___m_SubstituteGlyphIDs;
};
struct Offset_tF4AF8F62C21FD6DCB5255F705A59CC10583E22C4 
{
	float ___m_Left;
	float ___m_Right;
	float ___m_Top;
	float ___m_Bottom;
};
struct PropertyInfo_t  : public MemberInfo_t
{
};
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	float ___x;
	float ___y;
	float ___z;
	float ___w;
};
struct RangeInt_tDFBE4FD13857C11F21F7C3DA6B60D05341B67268 
{
	int32_t ___start;
	int32_t ___length;
};
struct Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D 
{
	float ___m_XMin;
	float ___m_YMin;
	float ___m_Width;
	float ___m_Height;
};
struct Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			uint8_t ___byte_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___byte_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_1_OffsetPadding[1];
			uint8_t ___byte_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_1_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___byte_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_2_OffsetPadding[2];
			uint8_t ___byte_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_2_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___byte_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_3_OffsetPadding[3];
			uint8_t ___byte_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_3_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___byte_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_4_OffsetPadding[4];
			uint8_t ___byte_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_4_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___byte_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_5_OffsetPadding[5];
			uint8_t ___byte_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_5_OffsetPadding_forAlignmentOnly[5];
			uint8_t ___byte_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_6_OffsetPadding[6];
			uint8_t ___byte_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_6_OffsetPadding_forAlignmentOnly[6];
			uint8_t ___byte_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_7_OffsetPadding[7];
			uint8_t ___byte_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_7_OffsetPadding_forAlignmentOnly[7];
			uint8_t ___byte_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_8_OffsetPadding[8];
			uint8_t ___byte_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_8_OffsetPadding_forAlignmentOnly[8];
			uint8_t ___byte_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_9_OffsetPadding[9];
			uint8_t ___byte_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_9_OffsetPadding_forAlignmentOnly[9];
			uint8_t ___byte_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_10_OffsetPadding[10];
			uint8_t ___byte_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_10_OffsetPadding_forAlignmentOnly[10];
			uint8_t ___byte_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_11_OffsetPadding[11];
			uint8_t ___byte_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_11_OffsetPadding_forAlignmentOnly[11];
			uint8_t ___byte_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_12_OffsetPadding[12];
			uint8_t ___byte_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_12_OffsetPadding_forAlignmentOnly[12];
			uint8_t ___byte_12_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_13_OffsetPadding[13];
			uint8_t ___byte_13;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_13_OffsetPadding_forAlignmentOnly[13];
			uint8_t ___byte_13_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_14_OffsetPadding[14];
			uint8_t ___byte_14;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_14_OffsetPadding_forAlignmentOnly[14];
			uint8_t ___byte_14_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_15_OffsetPadding[15];
			uint8_t ___byte_15;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_15_OffsetPadding_forAlignmentOnly[15];
			uint8_t ___byte_15_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int8_t ___sbyte_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int8_t ___sbyte_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_1_OffsetPadding[1];
			int8_t ___sbyte_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_1_OffsetPadding_forAlignmentOnly[1];
			int8_t ___sbyte_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_2_OffsetPadding[2];
			int8_t ___sbyte_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_2_OffsetPadding_forAlignmentOnly[2];
			int8_t ___sbyte_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_3_OffsetPadding[3];
			int8_t ___sbyte_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_3_OffsetPadding_forAlignmentOnly[3];
			int8_t ___sbyte_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_4_OffsetPadding[4];
			int8_t ___sbyte_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_4_OffsetPadding_forAlignmentOnly[4];
			int8_t ___sbyte_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_5_OffsetPadding[5];
			int8_t ___sbyte_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_5_OffsetPadding_forAlignmentOnly[5];
			int8_t ___sbyte_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_6_OffsetPadding[6];
			int8_t ___sbyte_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_6_OffsetPadding_forAlignmentOnly[6];
			int8_t ___sbyte_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_7_OffsetPadding[7];
			int8_t ___sbyte_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_7_OffsetPadding_forAlignmentOnly[7];
			int8_t ___sbyte_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_8_OffsetPadding[8];
			int8_t ___sbyte_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_8_OffsetPadding_forAlignmentOnly[8];
			int8_t ___sbyte_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_9_OffsetPadding[9];
			int8_t ___sbyte_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_9_OffsetPadding_forAlignmentOnly[9];
			int8_t ___sbyte_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_10_OffsetPadding[10];
			int8_t ___sbyte_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_10_OffsetPadding_forAlignmentOnly[10];
			int8_t ___sbyte_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_11_OffsetPadding[11];
			int8_t ___sbyte_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_11_OffsetPadding_forAlignmentOnly[11];
			int8_t ___sbyte_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_12_OffsetPadding[12];
			int8_t ___sbyte_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_12_OffsetPadding_forAlignmentOnly[12];
			int8_t ___sbyte_12_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_13_OffsetPadding[13];
			int8_t ___sbyte_13;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_13_OffsetPadding_forAlignmentOnly[13];
			int8_t ___sbyte_13_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_14_OffsetPadding[14];
			int8_t ___sbyte_14;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_14_OffsetPadding_forAlignmentOnly[14];
			int8_t ___sbyte_14_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_15_OffsetPadding[15];
			int8_t ___sbyte_15;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_15_OffsetPadding_forAlignmentOnly[15];
			int8_t ___sbyte_15_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			uint16_t ___uint16_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint16_t ___uint16_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint16_1_OffsetPadding[2];
			uint16_t ___uint16_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint16_1_OffsetPadding_forAlignmentOnly[2];
			uint16_t ___uint16_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint16_2_OffsetPadding[4];
			uint16_t ___uint16_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint16_2_OffsetPadding_forAlignmentOnly[4];
			uint16_t ___uint16_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint16_3_OffsetPadding[6];
			uint16_t ___uint16_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint16_3_OffsetPadding_forAlignmentOnly[6];
			uint16_t ___uint16_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint16_4_OffsetPadding[8];
			uint16_t ___uint16_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint16_4_OffsetPadding_forAlignmentOnly[8];
			uint16_t ___uint16_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint16_5_OffsetPadding[10];
			uint16_t ___uint16_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint16_5_OffsetPadding_forAlignmentOnly[10];
			uint16_t ___uint16_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint16_6_OffsetPadding[12];
			uint16_t ___uint16_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint16_6_OffsetPadding_forAlignmentOnly[12];
			uint16_t ___uint16_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint16_7_OffsetPadding[14];
			uint16_t ___uint16_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint16_7_OffsetPadding_forAlignmentOnly[14];
			uint16_t ___uint16_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int16_t ___int16_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int16_t ___int16_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int16_1_OffsetPadding[2];
			int16_t ___int16_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int16_1_OffsetPadding_forAlignmentOnly[2];
			int16_t ___int16_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int16_2_OffsetPadding[4];
			int16_t ___int16_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int16_2_OffsetPadding_forAlignmentOnly[4];
			int16_t ___int16_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int16_3_OffsetPadding[6];
			int16_t ___int16_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int16_3_OffsetPadding_forAlignmentOnly[6];
			int16_t ___int16_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int16_4_OffsetPadding[8];
			int16_t ___int16_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int16_4_OffsetPadding_forAlignmentOnly[8];
			int16_t ___int16_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int16_5_OffsetPadding[10];
			int16_t ___int16_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int16_5_OffsetPadding_forAlignmentOnly[10];
			int16_t ___int16_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int16_6_OffsetPadding[12];
			int16_t ___int16_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int16_6_OffsetPadding_forAlignmentOnly[12];
			int16_t ___int16_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int16_7_OffsetPadding[14];
			int16_t ___int16_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int16_7_OffsetPadding_forAlignmentOnly[14];
			int16_t ___int16_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			uint32_t ___uint32_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint32_t ___uint32_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint32_1_OffsetPadding[4];
			uint32_t ___uint32_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint32_1_OffsetPadding_forAlignmentOnly[4];
			uint32_t ___uint32_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint32_2_OffsetPadding[8];
			uint32_t ___uint32_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint32_2_OffsetPadding_forAlignmentOnly[8];
			uint32_t ___uint32_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint32_3_OffsetPadding[12];
			uint32_t ___uint32_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint32_3_OffsetPadding_forAlignmentOnly[12];
			uint32_t ___uint32_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___int32_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___int32_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int32_1_OffsetPadding[4];
			int32_t ___int32_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int32_1_OffsetPadding_forAlignmentOnly[4];
			int32_t ___int32_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int32_2_OffsetPadding[8];
			int32_t ___int32_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int32_2_OffsetPadding_forAlignmentOnly[8];
			int32_t ___int32_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int32_3_OffsetPadding[12];
			int32_t ___int32_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int32_3_OffsetPadding_forAlignmentOnly[12];
			int32_t ___int32_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			uint64_t ___uint64_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint64_t ___uint64_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint64_1_OffsetPadding[8];
			uint64_t ___uint64_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint64_1_OffsetPadding_forAlignmentOnly[8];
			uint64_t ___uint64_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int64_t ___int64_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int64_t ___int64_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int64_1_OffsetPadding[8];
			int64_t ___int64_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int64_1_OffsetPadding_forAlignmentOnly[8];
			int64_t ___int64_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			float ___single_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			float ___single_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___single_1_OffsetPadding[4];
			float ___single_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___single_1_OffsetPadding_forAlignmentOnly[4];
			float ___single_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___single_2_OffsetPadding[8];
			float ___single_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___single_2_OffsetPadding_forAlignmentOnly[8];
			float ___single_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___single_3_OffsetPadding[12];
			float ___single_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___single_3_OffsetPadding_forAlignmentOnly[12];
			float ___single_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			double ___double_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			double ___double_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___double_1_OffsetPadding[8];
			double ___double_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___double_1_OffsetPadding_forAlignmentOnly[8];
			double ___double_1_forAlignmentOnly;
		};
	};
};
struct RenderInstancedDataLayout_t06AF33510AC89DBD09A3A161FF809EDFAB30EC7A 
{
	int32_t ___U3CsizeU3Ek__BackingField;
	int32_t ___U3CoffsetObjectToWorldU3Ek__BackingField;
	int32_t ___U3CoffsetPrevObjectToWorldU3Ek__BackingField;
	int32_t ___U3CoffsetRenderingLayerMaskU3Ek__BackingField;
};
struct RenderSpriteInstancedDataLayout_t4129388FA190352FA5AC84729B01A7AB44DFEAB9 
{
	int32_t ___U3CsizeU3Ek__BackingField;
	int32_t ___U3CoffsetObjectToWorldU3Ek__BackingField;
	int32_t ___U3CoffsetSpriteColorU3Ek__BackingField;
	int32_t ___U3CoffsetRenderingLayerMaskU3Ek__BackingField;
};
struct ResourceHandle_tAB7888F3AB5071C94127D0D46AAB3D702BC4B9F8 
{
	uint64_t ___value;
};
struct ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122 
{
	RuntimeObject* ____value;
	int32_t ____dataPos;
};
struct ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122_marshaled_pinvoke
{
	Il2CppIUnknown* ____value;
	int32_t ____dataPos;
};
struct ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122_marshaled_com
{
	Il2CppIUnknown* ____value;
	int32_t ____dataPos;
};
struct SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5 
{
	int8_t ___m_value;
};
struct ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0 
{
	int32_t ___m_Id;
};
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	float ___m_value;
};
struct UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455 
{
	uint16_t ___m_value;
};
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	uint32_t ___m_value;
};
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	uint64_t ___m_value;
};
struct UIntPtr_t 
{
	void* ____pointer;
};
struct UnityObjectWriteEntry_t9A8FEE8C25EDCB0900DAF97A6377834EE8EC8438 
{
	uint32_t ___fieldOffset;
	uint32_t ___destOffset;
};
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	float ___x;
	float ___y;
};
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	float ___x;
	float ___y;
	float ___z;
};
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	float ___x;
	float ___y;
	float ___z;
	float ___w;
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
struct WordInfo_tA466206097891A5A2590896EE164AFC406EB060D 
{
	int32_t ___firstCharacterIndex;
	int32_t ___lastCharacterIndex;
	int32_t ___characterCount;
	int32_t ___wordId;
};
struct double2_t2124FB15A5BDCC0BD48B80116D4B24DC9DCA9D83 
{
	double ___x;
	double ___y;
};
struct float2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5 
{
	float ___x;
	float ___y;
};
struct int2_tB123E869131C6102341F8F9AA01726E0E7C2768D 
{
	int32_t ___x;
	int32_t ___y;
};
struct int3_t18873F121F1EF24ECE875EAB01170B69E1B498C5 
{
	int32_t ___x;
	int32_t ___y;
	int32_t ___z;
};
struct int4_t6DC3FEACC0DD1EAE4D5B897188E8D669BC4DAB90 
{
	int32_t ___x;
	int32_t ___y;
	int32_t ___z;
	int32_t ___w;
};
struct AwaitableAndFrameIndex_t5B42EA520B0415D199F9487706ABCD53407C0161 
{
	Awaitable_t690337FEC1C411606E233EA36A41337B931C23CB* ___U3CAwaitableU3Ek__BackingField;
	int32_t ___U3CFrameIndexU3Ek__BackingField;
};
struct AwaitableAndFrameIndex_t5B42EA520B0415D199F9487706ABCD53407C0161_marshaled_pinvoke
{
	Awaitable_t690337FEC1C411606E233EA36A41337B931C23CB* ___U3CAwaitableU3Ek__BackingField;
	int32_t ___U3CFrameIndexU3Ek__BackingField;
};
struct AwaitableAndFrameIndex_t5B42EA520B0415D199F9487706ABCD53407C0161_marshaled_com
{
	Awaitable_t690337FEC1C411606E233EA36A41337B931C23CB* ___U3CAwaitableU3Ek__BackingField;
	int32_t ___U3CFrameIndexU3Ek__BackingField;
};
struct OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 
{
	int32_t ___order;
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___callback;
};
struct OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837_marshaled_pinvoke
{
	int32_t ___order;
	Il2CppMethodPointer ___callback;
};
struct OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837_marshaled_com
{
	int32_t ___order;
	Il2CppMethodPointer ___callback;
};
struct U3Cm_FadeTransitionWidthsU3Ee__FixedBuffer_tC44EA0D00BAF5D4021A10861FE9C59C8804B21E4 
{
	union
	{
		struct
		{
			uint16_t ___FixedElementField;
		};
		uint8_t U3Cm_FadeTransitionWidthsU3Ee__FixedBuffer_tC44EA0D00BAF5D4021A10861FE9C59C8804B21E4__padding[16];
	};
};
struct U3Cm_RendererCountsU3Ee__FixedBuffer_t877AF3B14647FADCA74D2F1A1BBB59648DC5AE67 
{
	union
	{
		struct
		{
			uint8_t ___FixedElementField;
		};
		uint8_t U3Cm_RendererCountsU3Ee__FixedBuffer_t877AF3B14647FADCA74D2F1A1BBB59648DC5AE67__padding[8];
	};
};
struct U3Cm_ScreenRelativeTransitionHeightsU3Ee__FixedBuffer_t2C41FA0F591BD145EEED3C0E09D6F04CD521B804 
{
	union
	{
		struct
		{
			uint16_t ___FixedElementField;
		};
		uint8_t U3Cm_ScreenRelativeTransitionHeightsU3Ee__FixedBuffer_t2C41FA0F591BD145EEED3C0E09D6F04CD521B804__padding[16];
	};
};
struct Binding_t4902D3C6D27680D096CC41D83FFD0872785E57F8 
{
	RuntimeObject* ___handler;
	int32_t ___handle;
};
struct Binding_t4902D3C6D27680D096CC41D83FFD0872785E57F8_marshaled_pinvoke
{
	RuntimeObject* ___handler;
	int32_t ___handle;
};
struct Binding_t4902D3C6D27680D096CC41D83FFD0872785E57F8_marshaled_com
{
	RuntimeObject* ___handler;
	int32_t ___handle;
};
struct LodSelectionCurve_t5E3F99BC782C22E828074538B8B43051FF859713 
{
	float ___m_LodSlope;
	float ___m_LodBias;
};
struct SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC 
{
	Il2CppChar ___First;
	Il2CppChar ___Last;
};
struct SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC_marshaled_pinvoke
{
	uint8_t ___First;
	uint8_t ___Last;
};
struct SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC_marshaled_com
{
	uint8_t ___First;
	uint8_t ___Last;
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
struct FontReferenceMap_t1C0CECF3F0F650BE4A881A50A25EFB26965E7831 
{
	Font_tC95270EA3198038970422D78B74A7F2E218A96B6* ___font;
	FontAsset_t61A6446D934E582651044E33D250EA8D306AB958* ___fontAsset;
};
struct FontReferenceMap_t1C0CECF3F0F650BE4A881A50A25EFB26965E7831_marshaled_pinvoke
{
	Font_tC95270EA3198038970422D78B74A7F2E218A96B6* ___font;
	FontAsset_t61A6446D934E582651044E33D250EA8D306AB958* ___fontAsset;
};
struct FontReferenceMap_t1C0CECF3F0F650BE4A881A50A25EFB26965E7831_marshaled_com
{
	Font_tC95270EA3198038970422D78B74A7F2E218A96B6* ___font;
	FontAsset_t61A6446D934E582651044E33D250EA8D306AB958* ___fontAsset;
};
struct WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 
{
	SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* ___m_DelagateCallback;
	RuntimeObject* ___m_DelagateState;
	ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158* ___m_WaitHandle;
};
struct WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44_marshaled_pinvoke
{
	Il2CppMethodPointer ___m_DelagateCallback;
	Il2CppIUnknown* ___m_DelagateState;
	ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158* ___m_WaitHandle;
};
struct WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44_marshaled_com
{
	Il2CppMethodPointer ___m_DelagateCallback;
	Il2CppIUnknown* ___m_DelagateState;
	ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158* ___m_WaitHandle;
};
struct VolatileObject_tEA3ACFAAFB9D2EFA5162F693BAAB342EA7737B99 
{
	RuntimeObject* ___Value;
};
struct VolatileObject_tEA3ACFAAFB9D2EFA5162F693BAAB342EA7737B99_marshaled_pinvoke
{
	RuntimeObject* ___Value;
};
struct VolatileObject_tEA3ACFAAFB9D2EFA5162F693BAAB342EA7737B99_marshaled_com
{
	RuntimeObject* ___Value;
};
struct AlignOfHelper_1_tBEA2F557D94117D6B5CA3D54DEA10F7A2F5AF996 
{
	uint8_t ___dummy;
	BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D ___data;
};
struct AlignOfHelper_1_tCD4B08DBB915013B12E50DA43CE11B02B0D135DD 
{
	uint8_t ___dummy;
	EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___data;
};
struct AlignOfHelper_1_t1C2506D8F2F53BF0A585917F05CD8BC880EBB752 
{
	uint8_t ___dummy;
	intptr_t ___data;
};
struct AlignOfHelper_1_tCFC8A208D36EA414B14215D004A770AEC0DB8BA2 
{
	uint8_t ___dummy;
	InternalLODGroupSettings_t9F08C56422FEBE035004C6D96DE664DB1961F38D ___data;
};
struct AlignOfHelper_1_t1A20691B0774E0EFBEAD966FB0B480A553DCF42E 
{
	uint8_t ___dummy;
	InternalMeshLodRendererSettings_t2B499712F80597BFB45A4813CC139D1BEEDEBB73 ___data;
};
struct AlignOfHelper_1_t6F2F300ADF773C90F661FF403B84D167EB793773 
{
	uint8_t ___dummy;
	InternalMeshRendererSettings_tFA0423524032AD2C34E24C53548BE032F67FC6AF ___data;
};
struct AlignOfHelper_1_t6C24EA77B111E6877D279F01810C1D4E13534301 
{
	uint8_t ___dummy;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___data;
};
struct AlignOfHelper_1_tE6A7C0BC2AB9B74FA79F8449B8FA1BC94A474BC4 
{
	uint8_t ___dummy;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___data;
};
struct AlignOfHelper_1_t151A1BD8ECCDCBCF3185238615804E396C3B07A5 
{
	uint8_t ___dummy;
	RangeInt_tDFBE4FD13857C11F21F7C3DA6B60D05341B67268 ___data;
};
struct AlignOfHelper_1_tA7BAD341B87833F98272549F84315FE63B02CC5A 
{
	uint8_t ___dummy;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___data;
};
struct AlignOfHelper_1_t26C526A4040EF3870B74BFD09D3768388C3BD773 
{
	uint8_t ___dummy;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___data;
};
struct AlignOfHelper_1_tF31F09BEF44353E98923E6193CEADA52B8ED43D4 
{
	uint8_t ___dummy;
	double2_t2124FB15A5BDCC0BD48B80116D4B24DC9DCA9D83 ___data;
};
struct AlignOfHelper_1_t0C97FDE41871CAD34CA643C258038DE7C30AA460 
{
	uint8_t ___dummy;
	float2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5 ___data;
};
struct AlignOfHelper_1_t6ADF810505F028EA6EBCA5B664B68A8372696F9C 
{
	uint8_t ___dummy;
	int2_tB123E869131C6102341F8F9AA01726E0E7C2768D ___data;
};
struct AlignOfHelper_1_t5DC854A29E0F5E52BA538EDE0BFDED0CC3F2B396 
{
	uint8_t ___dummy;
	int3_t18873F121F1EF24ECE875EAB01170B69E1B498C5 ___data;
};
struct AlignOfHelper_1_t3815CFB9721539E18DAC181E8DB449C4D3C731E3 
{
	uint8_t ___dummy;
	int4_t6DC3FEACC0DD1EAE4D5B897188E8D669BC4DAB90 ___data;
};
struct ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 
{
	intptr_t ____value;
};
struct ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 
{
	intptr_t ____value;
};
struct ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57 
{
	intptr_t ___Item1;
	int32_t ___Item2;
	intptr_t ___Item3;
	int32_t ___Item4;
	bool ___Item5;
};
struct Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 
{
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A ___register;
};
struct Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A 
{
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A ___register;
};
struct Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 
{
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A ___register;
};
struct Allocator_t996642592271AAD9EE688F142741D512C07B5824 
{
	int32_t ___value__;
};
struct Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Center;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Extents;
};
struct CollisionPairHeaderFlags_tBA40F470BC1564B84C3093CEA5761804FA0650C3 
{
	uint16_t ___value__;
};
struct CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___sphereCenter;
	float ___sphereRadius;
	int32_t ___cullingPlaneOffset;
	int32_t ___cullingPlaneCount;
	float ___cascadeBlendCullingFactor;
	float ___nearPlane;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___cullingMatrix;
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
struct EmbeddedLODBuffer_t6D75CECAC228D0710132158E77ACB46D0C43027B 
{
	U3Cm_ScreenRelativeTransitionHeightsU3Ee__FixedBuffer_t2C41FA0F591BD145EEED3C0E09D6F04CD521B804 ___m_ScreenRelativeTransitionHeights;
	U3Cm_FadeTransitionWidthsU3Ee__FixedBuffer_tC44EA0D00BAF5D4021A10861FE9C59C8804B21E4 ___m_FadeTransitionWidths;
	U3Cm_RendererCountsU3Ee__FixedBuffer_t877AF3B14647FADCA74D2F1A1BBB59648DC5AE67 ___m_RendererCounts;
	uint8_t ___m_Length;
};
struct EventModifiers_tB9DEEF73F8FC4C312B8E0C34336C7D9C3023B270 
{
	int32_t ___value__;
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
struct FalloffType_tE9BECCB411DA63109760103AF7476F422A01376D 
{
	uint8_t ___value__;
};
struct FontFeatureLookupFlags_t2000121BA341A3CAE5E0D4FAC6AA4378FE14AE1B 
{
	int32_t ___value__;
};
struct FontStyles_t284AF8C10031F4774DF8BC8DE6DF9EC11EE14668 
{
	int32_t ___value__;
};
struct GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC 
{
	intptr_t ___handle;
};
struct GPUDrivenMeshData_t0D53E18AECCB1ED48149AFD77C12CF1624340C32 
{
	int32_t ___subMeshCount;
	int32_t ___meshLodCount;
	LodSelectionCurve_t5E3F99BC782C22E828074538B8B43051FF859713 ___meshLodSelectionCurve;
};
struct GlyphAdjustmentRecord_tC7A1B2E0AC7C4ED9CDB8E95E48790A46B6F315F7 
{
	uint32_t ___m_GlyphIndex;
	GlyphValueRecord_t780927A39D46924E0D546A2AE5DDF1BB2B5A9C8E ___m_GlyphValueRecord;
};
struct GlyphClassDefinitionType_t9C21A3848A07B17C2690F285B5FA60A2E246FBA2 
{
	int32_t ___value__;
};
struct GlyphRenderMode_tE7FB60827750662A45E89D168932FE2D8AEB5281 
{
	int32_t ___value__;
};
struct HighlightState_tFF5FE9065990F04A37FEC545A0024047F0ABD740 
{
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color;
	Offset_tF4AF8F62C21FD6DCB5255F705A59CC10583E22C4 ___padding;
};
struct HorizontalAlignment_t671E4AFA8AB13903A7304392F6C320D8F0FB48EC 
{
	int32_t ___value__;
};
struct HoveredTag_t024569AE810DE34CB45A7C7D3981C8E85DD83303 
{
	int32_t ___value__;
};
struct KeyCode_t75B9ECCC26D858F55040DDFF9523681E996D17E9 
{
	int32_t ___value__;
};
struct LanguageDirection_tF200DFFA6ED7E53A36D2481CDF7E9E925661B733 
{
	int32_t ___value__;
};
struct LightMode_t058E4E7AAE5689BCFF46BB8E0259D90D227E7FF9 
{
	uint8_t ___value__;
};
struct LightType_t97C5050F2F742FBF050FEB8FC5131A9A8DB50D26 
{
	uint8_t ___value__;
};
struct MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607 
{
	uint32_t ___m_BaseGlyphID;
	GlyphAnchorPoint_t581FDCAD5A1D0F3B129968FAEF20C113AAB0BC08 ___m_BaseGlyphAnchorPoint;
	uint32_t ___m_MarkGlyphID;
	MarkPositionAdjustment_t2523798D56F14A93A080D9D1298498325A51F436 ___m_MarkPositionAdjustment;
};
struct MarkToMarkAdjustmentRecord_tD53618A3728435D5C904857DAC644EE27640807C 
{
	uint32_t ___m_BaseMarkGlyphID;
	GlyphAnchorPoint_t581FDCAD5A1D0F3B129968FAEF20C113AAB0BC08 ___m_BaseMarkGlyphAnchorPoint;
	uint32_t ___m_CombiningMarkGlyphID;
	MarkPositionAdjustment_t2523798D56F14A93A080D9D1298498325A51F436 ___m_CombiningMarkPositionAdjustment;
};
struct MeshTopology_t815FF5CF04D62195A23E2DF8A5C0A071F11FBCBF 
{
	int32_t ___value__;
};
struct ModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960 
{
	intptr_t ___actor;
	intptr_t ___otherActor;
	intptr_t ___shape;
	intptr_t ___otherShape;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___otherRotation;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___otherPosition;
	int32_t ___numContacts;
	intptr_t ___contacts;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	intptr_t ___m_CachedPtr;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr;
};
struct PInfo_t8E650D58C9259127E18C225459323E41106C2877 
{
	int32_t ___value__;
};
struct Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Normal;
	float ___m_Distance;
};
struct PreProcessFlags_t543255175547C550175BFDF0F6D61DC45AEB5AC7 
{
	int32_t ___value__;
};
struct PropertyAttributes_tE026D5D3C04F074C19F2200702FE4F265C309797 
{
	int32_t ___value__;
};
struct RttiDataType_t4F6A53A9DFFB1A4E62108530C5A707987989DF07 
{
	uint8_t ___value__;
};
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	intptr_t ___value;
};
struct ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36 
{
	intptr_t ___m_Ptr;
};
struct TaskCreationOptions_tB15CB42D61B8958640A7C702A79097B56D5C7ABA 
{
	int32_t ___value__;
};
struct TextElementType_tEBCF09EEF888E8B1F62D3DD66AF21890D12545EB 
{
	uint8_t ___value__;
};
struct TextFontWeight_t789E26840C291C6C1270D4434CE007ACDFA40350 
{
	int32_t ___value__;
};
struct TextOverflow_t83A490A0D7D1788215EF4FA8FDEC28BBBEB0CD3E 
{
	int32_t ___value__;
};
struct TextProcessingElementType_t0F469889070F147273CE0C33D25C8A80E11C1319 
{
	int32_t ___value__;
};
struct TextVertex_tF030A16DC67EAF3F6C9C9C0564D4B88758B173A9 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___uv;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___uv2;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color;
};
struct UCircle_t867F766ACBC8203697A5637D6046595BBCA3A156 
{
	float2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5 ___center;
	float ___radius;
};
struct UEncroachingSegment_t3AE1B0B8E50020697D3FA3FFF0C86E406ABFA3C1 
{
	float2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5 ___a;
	float2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5 ___b;
	int32_t ___index;
};
struct UEvent_t81CE84F34955D2A2DE962ADE28CDE659605FB2AC 
{
	float2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5 ___a;
	float2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5 ___b;
	int32_t ___idx;
	int32_t ___type;
};
struct UHull_tBA3DC6A41F928298B0D924EDFE00150F307BA851 
{
	float2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5 ___a;
	float2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5 ___b;
	int32_t ___idx;
	ArraySlice_1_t62CE85979628F3D63985E52623CBDB8E8CEDF91C ___ilarray;
	int32_t ___ilcount;
	ArraySlice_1_t62CE85979628F3D63985E52623CBDB8E8CEDF91C ___iuarray;
	int32_t ___iucount;
};
struct UStar_tF8CA0D7A7A3197E68176CA173B07251554C7465D 
{
	ArraySlice_1_t62CE85979628F3D63985E52623CBDB8E8CEDF91C ___points;
	int32_t ___pointCount;
};
#pragma pack(push, tp, 4)
struct UnityObjectReadEntry_t101069B50E35E732ECF92C6C54159A1F1AA87B1B 
{
	uint32_t ___fieldOffset;
	uint32_t ___destOffset;
	intptr_t ___klass;
};
#pragma pack(pop, tp)
struct VerticalAlignment_tED7B4EE5125B3287AAB4A2AD434A933CCD4633F8 
{
	int32_t ___value__;
};
struct ProfilerMarker_t8B7F9848320B93F87A7944B157255D5F9B576F2D 
{
	intptr_t ___ptr;
};
struct TextHandleFlags_t40039475AD469D10F4C68818B94A467285F965A6 
{
	int32_t ___value__;
};
struct AlignOfHelper_1_t34CCC6CF432525FDD94891D4DAFB9DB74F9AF3E9 
{
	uint8_t ___dummy;
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___data;
};
struct AlignOfHelper_1_tF6B6CAC1AFD67E6448C9B177EA1734D57E3BCDA2 
{
	uint8_t ___dummy;
	CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0 ___data;
};
struct AlignOfHelper_1_tFC537E4E3FE3F7962CBC5F219276522C16824ACF 
{
	uint8_t ___dummy;
	EmbeddedLODBuffer_t6D75CECAC228D0710132158E77ACB46D0C43027B ___data;
};
struct AlignOfHelper_1_t398568B8BA5FC2BA68E01C861AA1BEDC4750E61D 
{
	uint8_t ___dummy;
	GPUDrivenMeshData_t0D53E18AECCB1ED48149AFD77C12CF1624340C32 ___data;
};
struct AlignOfHelper_1_tF3D321A7435452B0B749AF58D2CF8AB1865BC52C 
{
	uint8_t ___dummy;
	ModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960 ___data;
};
struct AlignOfHelper_1_t4257D6924487B14B176AB4C639F1251F2E4ED1C6 
{
	uint8_t ___dummy;
	Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C ___data;
};
struct AlignOfHelper_1_t3FE2545879EC19D84F399DE73EA83AAEDEA14C9D 
{
	uint8_t ___dummy;
	UEncroachingSegment_t3AE1B0B8E50020697D3FA3FFF0C86E406ABFA3C1 ___data;
};
struct AlignOfHelper_1_t054F2568D7C1097239A28CF25D80D8353E29BB37 
{
	uint8_t ___dummy;
	UEvent_t81CE84F34955D2A2DE962ADE28CDE659605FB2AC ___data;
};
struct AlignOfHelper_1_t0280929E6B4134EE85E97F8BFC283CFB4C7BC056 
{
	uint8_t ___dummy;
	UHull_tBA3DC6A41F928298B0D924EDFE00150F307BA851 ___data;
};
struct AlignOfHelper_1_t9E9A73E6B25DCBB1356ABAF5D5F64CEB912639E5 
{
	uint8_t ___dummy;
	UStar_tF8CA0D7A7A3197E68176CA173B07251554C7465D ___data;
};
struct NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D 
{
	ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 ____pointer;
	int32_t ____length;
};
struct Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 
{
	ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 ____pointer;
	int32_t ____length;
};
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
struct ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B 
{
	EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___m_BodyID;
	EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___m_OtherBodyID;
	intptr_t ___m_StartPtr;
	uint32_t ___m_NbPairs;
	uint16_t ___m_Flags;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_ThisBodyLinearVelocity;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_ThisBodyAngularVelocity;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_OtherBodyLinearVelocity;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_OtherBodyAngularVelocity;
};
struct DirectCopyGroupHeader_tB3EF313079A34C19995461518F4481731E8068EC 
{
	uint8_t ___opCode;
	uint8_t ___count;
	uint16_t ____pad;
};
struct GPUDrivenSubMesh_t2D3B77E083A07816281294E54907E064B2A2A22B 
{
	int32_t ___topology;
	uint32_t ___baseVertex;
	uint32_t ___indexStart;
	uint32_t ___indexCount;
};
struct Glyph_t700CF8EBE04ED4AEAB520885AAA1B309E02A103F  : public RuntimeObject
{
	uint32_t ___m_Index;
	GlyphMetrics_t6C1C65A891A6279A0EE807C436436B1E44F7AF1A ___m_Metrics;
	GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D ___m_GlyphRect;
	float ___m_Scale;
	int32_t ___m_AtlasIndex;
	int32_t ___m_ClassDefinitionType;
};
struct Glyph_t700CF8EBE04ED4AEAB520885AAA1B309E02A103F_marshaled_pinvoke
{
	uint32_t ___m_Index;
	GlyphMetrics_t6C1C65A891A6279A0EE807C436436B1E44F7AF1A ___m_Metrics;
	GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D ___m_GlyphRect;
	float ___m_Scale;
	int32_t ___m_AtlasIndex;
	int32_t ___m_ClassDefinitionType;
};
struct Glyph_t700CF8EBE04ED4AEAB520885AAA1B309E02A103F_marshaled_com
{
	uint32_t ___m_Index;
	GlyphMetrics_t6C1C65A891A6279A0EE807C436436B1E44F7AF1A ___m_Metrics;
	GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D ___m_GlyphRect;
	float ___m_Scale;
	int32_t ___m_AtlasIndex;
	int32_t ___m_ClassDefinitionType;
};
struct GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E 
{
	GlyphAdjustmentRecord_tC7A1B2E0AC7C4ED9CDB8E95E48790A46B6F315F7 ___m_FirstAdjustmentRecord;
	GlyphAdjustmentRecord_tC7A1B2E0AC7C4ED9CDB8E95E48790A46B6F315F7 ___m_SecondAdjustmentRecord;
	int32_t ___m_FeatureLookupFlags;
};
struct LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21 
{
	EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___entityId;
	EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___cookieTextureEntityId;
	float ___cookieScale;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 ___color;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 ___indirectColor;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___orientation;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position;
	float ___range;
	float ___coneAngle;
	float ___innerConeAngle;
	float ___shape0;
	float ___shape1;
	uint8_t ___type;
	uint8_t ___mode;
	uint8_t ___shadow;
	uint8_t ___falloff;
	float ___indirectMultiplier;
	int32_t ____padding;
};
struct MeshInfo_tE55C4A8846CC2C399CCC3FE989476D987B86AB2F 
{
	int32_t ___vertexCount;
	TextCoreVertexU5BU5D_tB1DD4645DEB2946FA2271F94CE23D57FB4B9FE17* ___vertexData;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material;
	int32_t ___vertexBufferSize;
	bool ___applySDF;
	int32_t ___glyphRenderMode;
};
struct MeshInfo_tE55C4A8846CC2C399CCC3FE989476D987B86AB2F_marshaled_pinvoke
{
	int32_t ___vertexCount;
	TextCoreVertex_t012334F340F916622ED5237971E8BA32198060E4* ___vertexData;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material;
	int32_t ___vertexBufferSize;
	int32_t ___applySDF;
	int32_t ___glyphRenderMode;
};
struct MeshInfo_tE55C4A8846CC2C399CCC3FE989476D987B86AB2F_marshaled_com
{
	int32_t ___vertexCount;
	TextCoreVertex_t012334F340F916622ED5237971E8BA32198060E4* ___vertexData;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material;
	int32_t ___vertexBufferSize;
	int32_t ___applySDF;
	int32_t ___glyphRenderMode;
};
struct MonoPropertyInfo_t8022292639E946C5DEE573BC1C902DB8D7290A1C 
{
	Type_t* ___parent;
	Type_t* ___declaring_type;
	String_t* ___name;
	MethodInfo_t* ___get_method;
	MethodInfo_t* ___set_method;
	int32_t ___attrs;
};
struct MonoPropertyInfo_t8022292639E946C5DEE573BC1C902DB8D7290A1C_marshaled_pinvoke
{
	Type_t* ___parent;
	Type_t* ___declaring_type;
	char* ___name;
	MethodInfo_t* ___get_method;
	MethodInfo_t* ___set_method;
	int32_t ___attrs;
};
struct MonoPropertyInfo_t8022292639E946C5DEE573BC1C902DB8D7290A1C_marshaled_com
{
	Type_t* ___parent;
	Type_t* ___declaring_type;
	Il2CppChar* ___name;
	MethodInfo_t* ___get_method;
	MethodInfo_t* ___set_method;
	int32_t ___attrs;
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
struct NativeTextGenerationSettings_t2F77A4671666C1EB65AADCE42D64244F0168A62A 
{
	intptr_t ___fontAsset;
	intptr_t ___textSettings;
	intptr_t ___textBufferPtr;
	int32_t ___textBufferLength;
	int32_t ___screenWidth;
	int32_t ___screenHeight;
	bool ___wordWrapEnabled;
	int32_t ___overflow;
	int32_t ___languageDirection;
	int32_t ___vertexPadding;
	int32_t ___horizontalAlignment;
	int32_t ___verticalAlignment;
	int32_t ___preProcessFlags;
	int32_t ___fontSize;
	bool ___bestFit;
	int32_t ___maxFontSize;
	int32_t ___minFontSize;
	int32_t ___fontStyle;
	int32_t ___fontWeight;
	int32_t ___characterSpacing;
	int32_t ___wordSpacing;
	int32_t ___paragraphSpacing;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color;
	bool ___disableAdvancedFontFeatures;
	bool ___richTextEnabled;
	int32_t ___hoveredTag;
	int32_t ___pixelsPerPointFixed64;
};
struct NativeTextGenerationSettings_t2F77A4671666C1EB65AADCE42D64244F0168A62A_marshaled_pinvoke
{
	intptr_t ___fontAsset;
	intptr_t ___textSettings;
	intptr_t ___textBufferPtr;
	int32_t ___textBufferLength;
	int32_t ___screenWidth;
	int32_t ___screenHeight;
	int32_t ___wordWrapEnabled;
	int32_t ___overflow;
	int32_t ___languageDirection;
	int32_t ___vertexPadding;
	int32_t ___horizontalAlignment;
	int32_t ___verticalAlignment;
	int32_t ___preProcessFlags;
	int32_t ___fontSize;
	int32_t ___bestFit;
	int32_t ___maxFontSize;
	int32_t ___minFontSize;
	int32_t ___fontStyle;
	int32_t ___fontWeight;
	int32_t ___characterSpacing;
	int32_t ___wordSpacing;
	int32_t ___paragraphSpacing;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color;
	int32_t ___disableAdvancedFontFeatures;
	int32_t ___richTextEnabled;
	int32_t ___hoveredTag;
	int32_t ___pixelsPerPointFixed64;
};
struct NativeTextGenerationSettings_t2F77A4671666C1EB65AADCE42D64244F0168A62A_marshaled_com
{
	intptr_t ___fontAsset;
	intptr_t ___textSettings;
	intptr_t ___textBufferPtr;
	int32_t ___textBufferLength;
	int32_t ___screenWidth;
	int32_t ___screenHeight;
	int32_t ___wordWrapEnabled;
	int32_t ___overflow;
	int32_t ___languageDirection;
	int32_t ___vertexPadding;
	int32_t ___horizontalAlignment;
	int32_t ___verticalAlignment;
	int32_t ___preProcessFlags;
	int32_t ___fontSize;
	int32_t ___bestFit;
	int32_t ___maxFontSize;
	int32_t ___minFontSize;
	int32_t ___fontStyle;
	int32_t ___fontWeight;
	int32_t ___characterSpacing;
	int32_t ___wordSpacing;
	int32_t ___paragraphSpacing;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color;
	int32_t ___disableAdvancedFontFeatures;
	int32_t ___richTextEnabled;
	int32_t ___hoveredTag;
	int32_t ___pixelsPerPointFixed64;
};
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_pinvoke : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
};
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_com : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
};
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};
struct TextProcessingElement_tDCD1EAF9D54829E796F4F9726D63B205344C7698 
{
	int32_t ___elementType;
	uint32_t ___unicode;
	int32_t ___stringIndex;
	int32_t ___length;
};
struct Type_t  : public MemberInfo_t
{
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl;
};
struct UTriangle_t6D4513C8A4054BEEC30F937F14BBE005BC4A141F 
{
	float2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5 ___va;
	float2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5 ___vb;
	float2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5 ___vc;
	UCircle_t867F766ACBC8203697A5637D6046595BBCA3A156 ___c;
	float ___area;
	int3_t18873F121F1EF24ECE875EAB01170B69E1B498C5 ___indices;
};
struct KeyEvent_tCBB9830C9FA6B909A5A6BD122FF4B532126E7674 
{
	int32_t ___U3CkeyU3Ek__BackingField;
	int32_t ___U3CmodifiersU3Ek__BackingField;
};
struct AlignOfHelper_1_t08A14D9ACB4D26ACA71BCA57DAB866764B883825 
{
	uint8_t ___dummy;
	ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B ___data;
};
struct AlignOfHelper_1_t9B8325E941D53AE21ECA21E2996411A52D0F8663 
{
	uint8_t ___dummy;
	GPUDrivenSubMesh_t2D3B77E083A07816281294E54907E064B2A2A22B ___data;
};
struct AlignOfHelper_1_tF9C3457088E3B293794AA641A2261DD4B6D5B57A 
{
	uint8_t ___dummy;
	LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21 ___data;
};
struct AlignOfHelper_1_tE0DC7EEADD8DE994397C46E4B7F6E4EC9FE4F669 
{
	uint8_t ___dummy;
	UTriangle_t6D4513C8A4054BEEC30F937F14BBE005BC4A141F ___data;
};
struct Func_1_t566D4A654882E282E54CDC3A001E05486F913903  : public MulticastDelegate_t
{
};
struct Func_1_tBB8824FA8746333BFFF3AB3CE4A41B58450AF431  : public MulticastDelegate_t
{
};
struct Getter_2_t1C9E25FA1D95753B6B5480577F043E5EF85CC0D8  : public MulticastDelegate_t
{
};
struct SpanAction_2_t7E9C729D70F4264C725B3A5B383D01398D40CB63  : public MulticastDelegate_t
{
};
struct SpanAction_2_t84FDFFEECCC96A9A407DCB490E60340E38185947  : public MulticastDelegate_t
{
};
struct SpanAction_2_tDD4C82B5E0425EE8AD03A2BB704E9D1FA491820A  : public MulticastDelegate_t
{
};
struct StaticGetter_1_t5C0B26D3ABAE6F5762F45AD85D572BDF5BDB1302  : public MulticastDelegate_t
{
};
struct ValueTuple_2_t0A96E043A7E5674155FA717C6511EDFFDF318BFE 
{
	KeyEvent_tCBB9830C9FA6B909A5A6BD122FF4B532126E7674 ___Item1;
	int32_t ___Item2;
};
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07  : public MulticastDelegate_t
{
};
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	String_t* ____paramName;
};
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct RenderPipelineGlobalSettings_t3F883EA6174C636143F71211A146A0B1D9E76000  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	Dictionary_2_t384D2A0FF42BF1302A3F513FC32DB105F1CD5455* ___U3CsettingsMapU3Ek__BackingField;
};
struct RuntimePropertyInfo_t5F54C4304A36C216127C93BF1553920A8685537D  : public PropertyInfo_t
{
	intptr_t ___klass;
	intptr_t ___prop;
	MonoPropertyInfo_t8022292639E946C5DEE573BC1C902DB8D7290A1C ___info;
	int32_t ___cached;
	GetterAdapter_t03939DF178051A4B282ADA9CC4395C34B86D9D2E* ___cached_getter;
};
struct TextElementInfo_tDD7A12E319505510E0B350E342BD55F32AB5F976 
{
	uint32_t ___character;
	int32_t ___index;
	uint8_t ___elementType;
	int32_t ___stringLength;
	TextElement_tCEF567A8810788262275B39DC39CBA6EBE7472DA* ___textElement;
	Glyph_t700CF8EBE04ED4AEAB520885AAA1B309E02A103F* ___alternativeGlyph;
	FontAsset_t61A6446D934E582651044E33D250EA8D306AB958* ___fontAsset;
	SpriteAsset_t1D3CF1D9DC350A4690CB09DE228A8B59F2F02313* ___spriteAsset;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material;
	int32_t ___materialReferenceIndex;
	bool ___isUsingAlternateTypeface;
	float ___pointSize;
	int32_t ___lineNumber;
	int32_t ___vertexIndex;
	TextVertex_tF030A16DC67EAF3F6C9C9C0564D4B88758B173A9 ___vertexTopLeft;
	TextVertex_tF030A16DC67EAF3F6C9C9C0564D4B88758B173A9 ___vertexBottomLeft;
	TextVertex_tF030A16DC67EAF3F6C9C9C0564D4B88758B173A9 ___vertexTopRight;
	TextVertex_tF030A16DC67EAF3F6C9C9C0564D4B88758B173A9 ___vertexBottomRight;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___topLeft;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___bottomLeft;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___topRight;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___bottomRight;
	float ___origin;
	float ___ascender;
	float ___baseLine;
	float ___descender;
	float ___adjustedAscender;
	float ___adjustedDescender;
	float ___adjustedHorizontalAdvance;
	float ___xAdvance;
	float ___aspectRatio;
	float ___scale;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor;
	int32_t ___underlineVertexIndex;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor;
	int32_t ___strikethroughVertexIndex;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor;
	HighlightState_tFF5FE9065990F04A37FEC545A0024047F0ABD740 ___highlightState;
	int32_t ___style;
	bool ___isVisible;
};
struct TextElementInfo_tDD7A12E319505510E0B350E342BD55F32AB5F976_marshaled_pinvoke
{
	uint32_t ___character;
	int32_t ___index;
	uint8_t ___elementType;
	int32_t ___stringLength;
	TextElement_tCEF567A8810788262275B39DC39CBA6EBE7472DA* ___textElement;
	Glyph_t700CF8EBE04ED4AEAB520885AAA1B309E02A103F_marshaled_pinvoke ___alternativeGlyph;
	FontAsset_t61A6446D934E582651044E33D250EA8D306AB958* ___fontAsset;
	SpriteAsset_t1D3CF1D9DC350A4690CB09DE228A8B59F2F02313* ___spriteAsset;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material;
	int32_t ___materialReferenceIndex;
	int32_t ___isUsingAlternateTypeface;
	float ___pointSize;
	int32_t ___lineNumber;
	int32_t ___vertexIndex;
	TextVertex_tF030A16DC67EAF3F6C9C9C0564D4B88758B173A9 ___vertexTopLeft;
	TextVertex_tF030A16DC67EAF3F6C9C9C0564D4B88758B173A9 ___vertexBottomLeft;
	TextVertex_tF030A16DC67EAF3F6C9C9C0564D4B88758B173A9 ___vertexTopRight;
	TextVertex_tF030A16DC67EAF3F6C9C9C0564D4B88758B173A9 ___vertexBottomRight;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___topLeft;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___bottomLeft;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___topRight;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___bottomRight;
	float ___origin;
	float ___ascender;
	float ___baseLine;
	float ___descender;
	float ___adjustedAscender;
	float ___adjustedDescender;
	float ___adjustedHorizontalAdvance;
	float ___xAdvance;
	float ___aspectRatio;
	float ___scale;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor;
	int32_t ___underlineVertexIndex;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor;
	int32_t ___strikethroughVertexIndex;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor;
	HighlightState_tFF5FE9065990F04A37FEC545A0024047F0ABD740 ___highlightState;
	int32_t ___style;
	int32_t ___isVisible;
};
struct TextElementInfo_tDD7A12E319505510E0B350E342BD55F32AB5F976_marshaled_com
{
	uint32_t ___character;
	int32_t ___index;
	uint8_t ___elementType;
	int32_t ___stringLength;
	TextElement_tCEF567A8810788262275B39DC39CBA6EBE7472DA* ___textElement;
	Glyph_t700CF8EBE04ED4AEAB520885AAA1B309E02A103F_marshaled_com* ___alternativeGlyph;
	FontAsset_t61A6446D934E582651044E33D250EA8D306AB958* ___fontAsset;
	SpriteAsset_t1D3CF1D9DC350A4690CB09DE228A8B59F2F02313* ___spriteAsset;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material;
	int32_t ___materialReferenceIndex;
	int32_t ___isUsingAlternateTypeface;
	float ___pointSize;
	int32_t ___lineNumber;
	int32_t ___vertexIndex;
	TextVertex_tF030A16DC67EAF3F6C9C9C0564D4B88758B173A9 ___vertexTopLeft;
	TextVertex_tF030A16DC67EAF3F6C9C9C0564D4B88758B173A9 ___vertexBottomLeft;
	TextVertex_tF030A16DC67EAF3F6C9C9C0564D4B88758B173A9 ___vertexTopRight;
	TextVertex_tF030A16DC67EAF3F6C9C9C0564D4B88758B173A9 ___vertexBottomRight;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___topLeft;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___bottomLeft;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___topRight;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___bottomRight;
	float ___origin;
	float ___ascender;
	float ___baseLine;
	float ___descender;
	float ___adjustedAscender;
	float ___adjustedDescender;
	float ___adjustedHorizontalAdvance;
	float ___xAdvance;
	float ___aspectRatio;
	float ___scale;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor;
	int32_t ___underlineVertexIndex;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor;
	int32_t ___strikethroughVertexIndex;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor;
	HighlightState_tFF5FE9065990F04A37FEC545A0024047F0ABD740 ___highlightState;
	int32_t ___style;
	int32_t ___isVisible;
};
struct TextHandle_tA1D5C98B154F1F73CBD35E42EB4E9CCB02280EF8  : public RuntimeObject
{
	NativeTextGenerationSettings_t2F77A4671666C1EB65AADCE42D64244F0168A62A ___nativeSettings;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___pixelPreferedSize;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_ScreenRect;
	float ___m_LineHeightDefault;
	bool ___m_IsPlaceholder;
	bool ___m_IsElided;
	int32_t ___m_CreateGenerationIteration;
	intptr_t ___m_TextGenerationInfo;
	LinkedListNode_1_t6F3AFCF84169CF541D1E79B660CD8BBF93886ECE* ___U3CTextInfoNodeU3Ek__BackingField;
	bool ___U3CIsCachedTemporaryU3Ek__BackingField;
	int32_t ___m_TextHandleFlags;
	int32_t ___m_PreviousGenerationSettingsHash;
	bool ___isDirty;
	RichTextLinkInfoU5BU5D_t6D7ADBC2A21DC25C446095DD4787FA3F1B5C49DD* ___m_Links;
	int32_t ___m_HoveredTag;
};
struct TypeInfo_tC4F59663C70D17D50BC99D53DCE74BFB9701012D  : public Type_t
{
};
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
};
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
	RuntimeObject* ____actualValue;
};
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
	uint32_t ___m_NonSerializedVersion;
};
struct ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB  : public InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB
{
	String_t* ____objectName;
};
struct RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1  : public TypeInfo_tC4F59663C70D17D50BC99D53DCE74BFB9701012D
{
	MonoTypeInfo_t90D5999A69AC524474FDEAC50F55B6CE868AB501* ___type_info;
	RuntimeObject* ___GenericCache;
	RuntimeConstructorInfo_tB41E49C7CFA74A03CCC986E78ABB0C0BD331A5AE* ___m_serializationCtor;
};
struct List_1_t9197976D9CD257810C9C417B3050A6C49D652F8D_StaticFields
{
	IRenderPipelineGraphicsSettingsU5BU5D_t13C894F2F332E48CE3D526E4FF2024E8F1ABF78A* ___s_emptyArray;
};
struct List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E_StaticFields
{
	__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* ___s_emptyArray;
};
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A_StaticFields
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___s_emptyArray;
};
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_StaticFields
{
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___invariant_culture_info;
	RuntimeObject* ___shared_table_lock;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___default_current_culture;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_DefaultThreadCurrentUICulture;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_DefaultThreadCurrentCulture;
	Dictionary_2_t9FA6D82CAFC18769F7515BB51D1C56DAE09381C3* ___shared_by_number;
	Dictionary_2_tE1603CE612C16451D1E56FF4D4859D4FE4087C28* ___shared_by_name;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_UserPreferredCultureInfoInAppX;
	bool ___IsTaiwanSku;
};
struct ScopeTransitionHelper_t069C5DE337C0C8F615857F4D731C5CBE3B0F4347_StaticFields
{
	String_t* ___k_ProfilerMarkerPrefix;
	String_t* ___k_DetailedInvokeMarkerPrefix;
};
struct SerializationBackendManagedCommands_t34A2336C91ADF30EAE847D68400DE88AEB27BCEF_StaticFields
{
	void* ___s_writeEntityIdToBuffer;
	void* ___s_readEntityIdFromBuffer;
	ConcurrentDictionary_2_tD35AF7F258B58EA50992681475C37E063603C5AC* ___s_ListTypeCache;
};
struct SerializationBackendManagedCommands_t34A2336C91ADF30EAE847D68400DE88AEB27BCEF_ThreadStaticFields
{
	Encoder_tAF9067231A76315584BDF4CD27990E2F485A78FA* ___s_Utf8Encoder;
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
struct TextGeneratorUtilities_tAD0F329B1A5C7CC27CF63086C11FE092B43FED53_StaticFields
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___largePositiveVector2;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___largeNegativeVector2;
	HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* ___k_EmojiLookup;
	HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* ___k_EmojiPresentationFormLookup;
};
struct TextInfo_t27E58E62A7552C66D38C175AF9D22622365F5D09_StaticFields
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___s_InfinityVectorPositive;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___s_InfinityVectorNegative;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString;
	String_t* ___FalseString;
};
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_StaticFields
{
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___s_actionToActionObjShunt;
};
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1;
};
struct GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D_StaticFields
{
	GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D ___s_ZeroGlyphRect;
};
struct IntPtr_t_StaticFields
{
	intptr_t ___Zero;
};
struct InternalMeshLodRendererSettings_t2B499712F80597BFB45A4813CC139D1BEEDEBB73_StaticFields
{
	InternalMeshLodRendererSettings_t2B499712F80597BFB45A4813CC139D1BEEDEBB73 ___Default;
};
struct InternalMeshRendererSettings_tFA0423524032AD2C34E24C53548BE032F67FC6AF_StaticFields
{
	InternalMeshRendererSettings_tFA0423524032AD2C34E24C53548BE032F67FC6AF ___Default;
};
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_StaticFields
{
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___zeroMatrix;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___identityMatrix;
};
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion;
};
struct UIntPtr_t_StaticFields
{
	uintptr_t ___Zero;
};
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector;
};
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector;
};
struct double2_t2124FB15A5BDCC0BD48B80116D4B24DC9DCA9D83_StaticFields
{
	double2_t2124FB15A5BDCC0BD48B80116D4B24DC9DCA9D83 ___zero;
};
struct float2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5_StaticFields
{
	float2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5 ___zero;
};
struct int2_tB123E869131C6102341F8F9AA01726E0E7C2768D_StaticFields
{
	int2_tB123E869131C6102341F8F9AA01726E0E7C2768D ___zero;
};
struct Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489_StaticFields
{
	int32_t ___s_count;
	Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 ___s_zero;
	Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 ___s_one;
	Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 ___s_allOnes;
};
struct Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A_StaticFields
{
	int32_t ___s_count;
	Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A ___s_zero;
	Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A ___s_one;
	Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A ___s_allOnes;
};
struct Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2_StaticFields
{
	int32_t ___s_count;
	Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 ___s_zero;
	Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 ___s_one;
	Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 ___s_allOnes;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject;
};
struct ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36_StaticFields
{
	ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0 ___kRenderTypeTag;
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
struct TextHandle_tA1D5C98B154F1F73CBD35E42EB4E9CCB02280EF8_StaticFields
{
	TextHandleTemporaryCache_t12F4FD2714809BDD0AF7145D4B1C0F8F53E47597* ___s_TemporaryCache;
	TextHandlePermanentCache_t80A472CA5379A09786EDB6593DBBFEE019CD6953* ___s_PermanentCache;
	TextGenerationSettingsU5BU5D_t704B9CF75AE18D52BBB4D6C4F90E26D456DEF646* ___s_Settings;
	TextGeneratorU5BU5D_t840858C0E634690569F2445016C52BA3D4A2BE46* ___s_Generators;
	TextInfoU5BU5D_tE18061C3D6F2431FE14749A05930922C1EAB2320* ___s_TextInfosCommon;
	TextLib_tEF7DFF87B9D7FF0F8B2C231A28CA4CE5A5B59F74* ___s_TextLib;
};
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_StaticFields
{
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreCull;
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreRender;
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPostRender;
};
struct RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_StaticFields
{
	RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1* ___ValueType;
	RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1* ___EnumType;
	RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1* ___ObjectType;
	RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1* ___StringType;
	RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1* ___DelegateType;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___s_SICtorParamTypes;
	Func_3_t0787D839A577CB564A3192D4164941D5F3DCFBB5* ___MakeTypeBuilderInstantiation;
	RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1* ___s_typedRef;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
struct __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979  : public RuntimeArray
{
	ALIGN_FIELD (8) Il2CppSharedGenericObject* m_Items[1];

	inline Il2CppSharedGenericObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppSharedGenericObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppSharedGenericObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Il2CppSharedGenericObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppSharedGenericObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppSharedGenericObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
struct ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A  : public RuntimeArray
{
	ALIGN_FIELD (8) Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* m_Items[1];

	inline Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
struct TextProcessingElementU5BU5D_t24A1E4C8745577D794FE856B4236875595E7FD22  : public RuntimeArray
{
	ALIGN_FIELD (8) TextProcessingElement_tDCD1EAF9D54829E796F4F9726D63B205344C7698 m_Items[1];

	inline TextProcessingElement_tDCD1EAF9D54829E796F4F9726D63B205344C7698 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline TextProcessingElement_tDCD1EAF9D54829E796F4F9726D63B205344C7698* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, TextProcessingElement_tDCD1EAF9D54829E796F4F9726D63B205344C7698 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline TextProcessingElement_tDCD1EAF9D54829E796F4F9726D63B205344C7698 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline TextProcessingElement_tDCD1EAF9D54829E796F4F9726D63B205344C7698* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, TextProcessingElement_tDCD1EAF9D54829E796F4F9726D63B205344C7698 value)
	{
		m_Items[index] = value;
	}
};
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
};
struct LinkInfoU5BU5D_tB7EB23E47AF29CCBEC884F9D0DB95BC97F62AE51  : public RuntimeArray
{
	ALIGN_FIELD (8) LinkInfo_tE85DDAFDFBDA635E6405C88EE4FD5941A9243DD8 m_Items[1];

	inline LinkInfo_tE85DDAFDFBDA635E6405C88EE4FD5941A9243DD8 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline LinkInfo_tE85DDAFDFBDA635E6405C88EE4FD5941A9243DD8* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, LinkInfo_tE85DDAFDFBDA635E6405C88EE4FD5941A9243DD8 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___linkId), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_LinkIdString), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_LinkTextString), (void*)NULL);
		#endif
	}
	inline LinkInfo_tE85DDAFDFBDA635E6405C88EE4FD5941A9243DD8 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline LinkInfo_tE85DDAFDFBDA635E6405C88EE4FD5941A9243DD8* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, LinkInfo_tE85DDAFDFBDA635E6405C88EE4FD5941A9243DD8 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___linkId), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_LinkIdString), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_LinkTextString), (void*)NULL);
		#endif
	}
};
struct WordInfoU5BU5D_tAD74C9720883D7BB229A20FFAE9EFD2CF9963F7B  : public RuntimeArray
{
	ALIGN_FIELD (8) WordInfo_tA466206097891A5A2590896EE164AFC406EB060D m_Items[1];

	inline WordInfo_tA466206097891A5A2590896EE164AFC406EB060D GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline WordInfo_tA466206097891A5A2590896EE164AFC406EB060D* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, WordInfo_tA466206097891A5A2590896EE164AFC406EB060D value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline WordInfo_tA466206097891A5A2590896EE164AFC406EB060D GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline WordInfo_tA466206097891A5A2590896EE164AFC406EB060D* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, WordInfo_tA466206097891A5A2590896EE164AFC406EB060D value)
	{
		m_Items[index] = value;
	}
};
struct MeshInfoU5BU5D_t3DF8B75BF4A213334EED197AD25E432212894AC6  : public RuntimeArray
{
	ALIGN_FIELD (8) MeshInfo_tE55C4A8846CC2C399CCC3FE989476D987B86AB2F m_Items[1];

	inline MeshInfo_tE55C4A8846CC2C399CCC3FE989476D987B86AB2F GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline MeshInfo_tE55C4A8846CC2C399CCC3FE989476D987B86AB2F* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, MeshInfo_tE55C4A8846CC2C399CCC3FE989476D987B86AB2F value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___vertexData), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___material), (void*)NULL);
		#endif
	}
	inline MeshInfo_tE55C4A8846CC2C399CCC3FE989476D987B86AB2F GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline MeshInfo_tE55C4A8846CC2C399CCC3FE989476D987B86AB2F* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, MeshInfo_tE55C4A8846CC2C399CCC3FE989476D987B86AB2F value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___vertexData), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___material), (void*)NULL);
		#endif
	}
};
struct TextElementInfoU5BU5D_tEC28C9B72883EE21AA798913497C69E179A15C4E  : public RuntimeArray
{
	ALIGN_FIELD (8) TextElementInfo_tDD7A12E319505510E0B350E342BD55F32AB5F976 m_Items[1];

	inline TextElementInfo_tDD7A12E319505510E0B350E342BD55F32AB5F976 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline TextElementInfo_tDD7A12E319505510E0B350E342BD55F32AB5F976* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, TextElementInfo_tDD7A12E319505510E0B350E342BD55F32AB5F976 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___textElement), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___alternativeGlyph), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___fontAsset), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___spriteAsset), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___material), (void*)NULL);
		#endif
	}
	inline TextElementInfo_tDD7A12E319505510E0B350E342BD55F32AB5F976 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline TextElementInfo_tDD7A12E319505510E0B350E342BD55F32AB5F976* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, TextElementInfo_tDD7A12E319505510E0B350E342BD55F32AB5F976 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___textElement), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___alternativeGlyph), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___fontAsset), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___spriteAsset), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___material), (void*)NULL);
		#endif
	}
};


IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7378BA5FBCA1E88080985FB810820B3F47DAD54C_gshared (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* List_1_get_Item_m02336594E8F76D7313E2BCB7A3ED5ABD13B4D515_gshared (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m0CE6E39234ED33F5195AABC8029D06D4756C75C1_gshared_inline (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* __this, Il2CppSharedGenericObject* ___0_item, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mD2ED26ACAF3BAF386FFEA83893BA51DB9FD8BA30_fshared_inline (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* Resources_ConvertObjects_TisIl2CppSharedGenericObject_m9BE1F255F2CB43F5F4EC6B3E4A12E88D5388D6F2_gshared (ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A* ___0_rawObjects, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mBA868F06359701D9950DEB1B10F52F848E9FF6DA_fshared_inline (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* __this, Il2CppFullySharedGenericAny* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SpanAction_2_Invoke_m47CBAA653C2AF4E0B4D3CA9600C55A94FA090732_gshared_inline (SpanAction_2_t7E9C729D70F4264C725B3A5B383D01398D40CB63* __this, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ___0_span, ValueTuple_3_t94AB360726755BBED1ED3E10C22F399AE18E226E ___1_arg, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SpanAction_2_Invoke_m65D110A8BF9027F070FA8CF53AF75D47A98C6E2A_inline (SpanAction_2_t84FDFFEECCC96A9A407DCB490E60340E38185947* __this, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ___0_span, ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57 ___1_arg, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Task_1__ctor_m912F5F25BF780F1B743BCB5FC21FEB08BB05ED52 (Task_1_t824317F4B958F7512E8F7300511752937A6C6043* __this, bool ___0_canceled, bool ___1_result, int32_t ___2_creationOptions, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___3_ct, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Task_1__ctor_mB3888CE20043DB96B5E044DF7193D494B41E3DA2 (Task_1_t4C228DE57804012969575431CFF12D57C875552D* __this, int32_t ___0_result, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Resize_TisTextProcessingElement_tDCD1EAF9D54829E796F4F9726D63B205344C7698_mD70DF9176547529A9B644ECE46B999E7B347354E (TextProcessingElementU5BU5D_t24A1E4C8745577D794FE856B4236875595E7FD22** ___0_array, int32_t ___1_newSize, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* Func_1_Invoke_m201DDBB72CE38673C89C22034EC8779981D83E6D_gshared_inline (Func_1_t566D4A654882E282E54CDC3A001E05486F913903* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Resize_TisLinkInfo_tE85DDAFDFBDA635E6405C88EE4FD5941A9243DD8_m9F69F603EB19033FF225E25B457B288FF3EA3011 (LinkInfoU5BU5D_tB7EB23E47AF29CCBEC884F9D0DB95BC97F62AE51** ___0_array, int32_t ___1_newSize, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Resize_TisWordInfo_tA466206097891A5A2590896EE164AFC406EB060D_m6646EE6AF7569488926F3672FEF3AC3091453D89 (WordInfoU5BU5D_tAD74C9720883D7BB229A20FFAE9EFD2CF9963F7B** ___0_array, int32_t ___1_newSize, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Resize_TisMeshInfo_tE55C4A8846CC2C399CCC3FE989476D987B86AB2F_mB235457CD021CAEB78F1A46E61EE85B010D130AC (MeshInfoU5BU5D_t3DF8B75BF4A213334EED197AD25E432212894AC6** ___0_array, int32_t ___1_newSize, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Resize_TisTextElementInfo_tDD7A12E319505510E0B350E342BD55F32AB5F976_mF6D48102F97D6CEEFF8844D21732E754C411A71D (TextElementInfoU5BU5D_tEC28C9B72883EE21AA798913497C69E179A15C4E** ___0_array, int32_t ___1_newSize, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t* UnsafeUtilityInternal_Add_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m5A3E59E17B5D433E8D6EFA9D4C1C40182A89B306_inline (uint8_t* ___0_source, int32_t ___1_elementOffset, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_AlignOf_TisBatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D_mB855D0A6C39C238FD086F0A41F578C588DD1E57D_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_AlignOf_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_mBCD966C8D21A7FA7A531E312657F8536BB7D5591_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_AlignOf_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mC44B74F48735FA62BAE3FBA763123E932B9EF822_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_AlignOf_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m80DCA0AC9767EB192DAAE87F5F4F56708D278474_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_AlignOf_TisContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B_m47308D0D016580B804EBE2B83A11C2BEA28E74B4_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_AlignOf_TisCullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0_mECD98232E4577E26AB1077C802A175181CEF9E17_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_AlignOf_TisEmbeddedLODBuffer_t6D75CECAC228D0710132158E77ACB46D0C43027B_mF15FE3B1714441550D2BDA30F695E79AA17709D9_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_AlignOf_TisEntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8_mCAE1EDAA3D44B416A2AF29A2CD1437A60C94B184_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_AlignOf_TisGPUDrivenMeshData_t0D53E18AECCB1ED48149AFD77C12CF1624340C32_mE4B475BB745CDDD8575CFF31796C75EC5BE1677C_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_AlignOf_TisGPUDrivenSubMesh_t2D3B77E083A07816281294E54907E064B2A2A22B_m07E75B4F5F05AFDC7DD95993E4BE4E6832AC951F_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_AlignOf_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m0987C997B0BCBFDE388F4E1808BCF6706136856A_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_AlignOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mB5611745B3ED473868EF6B61479E2860BBB2223C_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_AlignOf_TisIntPtr_t_m7FF5CB3788B437CA624174389D25EE9BCB2B212E_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_AlignOf_TisInternalLODGroupSettings_t9F08C56422FEBE035004C6D96DE664DB1961F38D_m2D29EB1E0BB5C7D366275F1AEB950D0C3365A3EC_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_AlignOf_TisInternalMeshLodRendererSettings_t2B499712F80597BFB45A4813CC139D1BEEDEBB73_m4613462C0A843B2F0C9BE750FF1486558EC20A57_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_AlignOf_TisInternalMeshRendererSettings_tFA0423524032AD2C34E24C53548BE032F67FC6AF_m218A1DC76BE997229B2F8774AE0E528B6BAE4EAF_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_AlignOf_TisLightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21_m2D3813D1A1056BED9EEE9B6BF630EBDCF618551D_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_AlignOf_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_m6E66E9028E798C9896F3F56F7FA05908E32B1689_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_AlignOf_TisModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960_m9396C9240C13C7F344AC4E11A89D9B0A75EF52AB_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_AlignOf_TisPlane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C_m9E02365A60C7193DCE9B1B1CCAC6B940995AB87F_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_AlignOf_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_mCFA49B63212293A47A946132716CC8084F118BBF_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_AlignOf_TisRangeInt_tDFBE4FD13857C11F21F7C3DA6B60D05341B67268_m36853F8E5ABD4C14B492DED38BA104203DA9FADC_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_AlignOf_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m9B9607330865C0A5ABFB515754C1C1C96D19F344_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_AlignOf_TisUEncroachingSegment_t3AE1B0B8E50020697D3FA3FFF0C86E406ABFA3C1_mC80D3B528E9C492E0BAE5124788711053E5BA8AE_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_AlignOf_TisUEvent_t81CE84F34955D2A2DE962ADE28CDE659605FB2AC_m2EAF1749DEC30DF8BAE54F2E152E33EEBF06D2E7_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_AlignOf_TisUHull_tBA3DC6A41F928298B0D924EDFE00150F307BA851_m9DF201FCDB9B057604B20987096858076D21CFAB_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_AlignOf_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m5CC670602FE83644EBD988EBBA04AB4D7D731FD7_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_AlignOf_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mF228544B123C545DB4D43DDE0E23492B7A731A7F_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_AlignOf_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m29B7D9DA9527706BBA1F73ECEA934CCD0B2D99E3_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_AlignOf_TisUStar_tF8CA0D7A7A3197E68176CA173B07251554C7465D_m120C8454AB3B92B9FDB39562A6C50C333B6D7BD3_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_AlignOf_TisUTriangle_t6D4513C8A4054BEEC30F937F14BBE005BC4A141F_mC3E4D8B9B275315C3369194023ADC219C9BFA56B_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_AlignOf_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m5A04043858F190DDD4C4AB8C2C707306514BCA45_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_AlignOf_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mA208BE87A87C101AE5CCF93D07CE98EF4B72BB9D_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_AlignOf_Tisdouble2_t2124FB15A5BDCC0BD48B80116D4B24DC9DCA9D83_m8D474CAB34FA5FB18D61421063147CE9793F0B05_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_AlignOf_Tisfloat2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5_mF5574E385BD8BFE25E8CE39CF6C0587EEB03EA32_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_AlignOf_Tisint2_tB123E869131C6102341F8F9AA01726E0E7C2768D_m26EBC94AD0C3507224F27777BDABDC7B666D0880_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_AlignOf_Tisint3_t18873F121F1EF24ECE875EAB01170B69E1B498C5_mBF5C30CFD8345346842446C6C9505350076D4166_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_AlignOf_Tisint4_t6DC3FEACC0DD1EAE4D5B897188E8D669BC4DAB90_mE9667172DCCAA2CC0371D40CBC26AD69CA73BE00_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppFullySharedGenericAny* UnsafeUtilityInternal_As_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mE1CA751887466B801BE69083C2B0EA3EDE41FF9B_fshared_inline (Il2CppFullySharedGenericAny* ___0_from, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppFullySharedGenericStruct* UnsafeUtilityInternal_AsRef_TisIl2CppFullySharedGenericStruct_m4AE204964F54C3F7626BE47CADE4A52CF2797B6B_fshared_inline (void* ___0_ptr, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D UnsafeUtilityInternal_ReadArrayElement_TisBatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D_mDBEEA432305DC45F859549C5C3C2BC1AB641161C_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 UnsafeUtilityInternal_ReadArrayElement_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_mFF2A9A45B70E41FC9F6A40A69B2C8E3BAF76360A_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t UnsafeUtilityInternal_ReadArrayElement_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m215470D8CCA83493150D2E40676D8A40FCF722B0_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppChar UnsafeUtilityInternal_ReadArrayElement_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m2FEACC2DB55AEEA0CA84FFD3CFC0DA3A103577EB_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B UnsafeUtilityInternal_ReadArrayElement_TisContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B_mE64830E3E69DCC7AFC8FF6B0965DCA99D7390356_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0 UnsafeUtilityInternal_ReadArrayElement_TisCullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0_m3DD623F7581DFB21C61537373F0F32050E5D8CFE_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double UnsafeUtilityInternal_ReadArrayElement_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m3153A5430B46A926C90C99ECC737289006BAB570_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EmbeddedLODBuffer_t6D75CECAC228D0710132158E77ACB46D0C43027B UnsafeUtilityInternal_ReadArrayElement_TisEmbeddedLODBuffer_t6D75CECAC228D0710132158E77ACB46D0C43027B_mAAB0A3B6158D3A53128F92076405F23C82C562CA_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 UnsafeUtilityInternal_ReadArrayElement_TisEntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8_mDC8A7125EE74C940B9F940440D412BA4B3A42575_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GPUDrivenMeshData_t0D53E18AECCB1ED48149AFD77C12CF1624340C32 UnsafeUtilityInternal_ReadArrayElement_TisGPUDrivenMeshData_t0D53E18AECCB1ED48149AFD77C12CF1624340C32_m3AC186183B40DD72F475DEA5ABBA39D050266613_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GPUDrivenSubMesh_t2D3B77E083A07816281294E54907E064B2A2A22B UnsafeUtilityInternal_ReadArrayElement_TisGPUDrivenSubMesh_t2D3B77E083A07816281294E54907E064B2A2A22B_mBF012366896A35F47863D2A27520F935DBDFADE0_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int16_t UnsafeUtilityInternal_ReadArrayElement_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mE907DE0EDCAAEB74B259B5022D1AC07C3FA77763_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_ReadArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m0B7B877C8F00DCC1C95D7124B3B0D83C6D492345_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t UnsafeUtilityInternal_ReadArrayElement_TisIntPtr_t_mC53DA66CA829ADB467A34898F82725DDA86091D6_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InternalLODGroupSettings_t9F08C56422FEBE035004C6D96DE664DB1961F38D UnsafeUtilityInternal_ReadArrayElement_TisInternalLODGroupSettings_t9F08C56422FEBE035004C6D96DE664DB1961F38D_m9B17FB9991C066865590CE397EC91A2056D1089A_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InternalMeshLodRendererSettings_t2B499712F80597BFB45A4813CC139D1BEEDEBB73 UnsafeUtilityInternal_ReadArrayElement_TisInternalMeshLodRendererSettings_t2B499712F80597BFB45A4813CC139D1BEEDEBB73_mE43484F89D326B2CFC50C120174997AB2082FBE0_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InternalMeshRendererSettings_tFA0423524032AD2C34E24C53548BE032F67FC6AF UnsafeUtilityInternal_ReadArrayElement_TisInternalMeshRendererSettings_tFA0423524032AD2C34E24C53548BE032F67FC6AF_m0FD7B9D7ECD3AD5A4D20DA6E6A0CF95AB3D75C46_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21 UnsafeUtilityInternal_ReadArrayElement_TisLightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21_m2B823F0822F76CA45530AD04A3D3DB110EC8259B_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 UnsafeUtilityInternal_ReadArrayElement_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_mDC2BC421E66DB6186E7ADB438406EB88CF637011_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960 UnsafeUtilityInternal_ReadArrayElement_TisModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960_m1967F25DC74B6E081724F2C2A8158CE6999A3F63_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C UnsafeUtilityInternal_ReadArrayElement_TisPlane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C_mD0A53DDAFDC425AE7EEA283E95C48E3A414A87FD_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 UnsafeUtilityInternal_ReadArrayElement_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m02B55D9C2BC9B83FDE111ACC6AC6826964D5E3D4_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RangeInt_tDFBE4FD13857C11F21F7C3DA6B60D05341B67268 UnsafeUtilityInternal_ReadArrayElement_TisRangeInt_tDFBE4FD13857C11F21F7C3DA6B60D05341B67268_mA0E6724F3B2E9E09250FBC5091626A5CF5A6FF93_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float UnsafeUtilityInternal_ReadArrayElement_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mC8BDFAFE242DB675D668D2942EFD7CE36006251C_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UEncroachingSegment_t3AE1B0B8E50020697D3FA3FFF0C86E406ABFA3C1 UnsafeUtilityInternal_ReadArrayElement_TisUEncroachingSegment_t3AE1B0B8E50020697D3FA3FFF0C86E406ABFA3C1_m8F5A17DAD42997B6D75E949B0FF9379B2D066CE2_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UEvent_t81CE84F34955D2A2DE962ADE28CDE659605FB2AC UnsafeUtilityInternal_ReadArrayElement_TisUEvent_t81CE84F34955D2A2DE962ADE28CDE659605FB2AC_mEE88732C7CB1E07F024B69DB93E5131352E8A1E7_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UHull_tBA3DC6A41F928298B0D924EDFE00150F307BA851 UnsafeUtilityInternal_ReadArrayElement_TisUHull_tBA3DC6A41F928298B0D924EDFE00150F307BA851_m8EB87859A6B1CDD9DD1729BB8913CB8985295847_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint16_t UnsafeUtilityInternal_ReadArrayElement_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m67997A9A0642E52B1CB9AD52C90FD98038221C0F_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t UnsafeUtilityInternal_ReadArrayElement_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mAA4A4AC11C7C0784A0566FAE86EFBAD08CF4126D_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t UnsafeUtilityInternal_ReadArrayElement_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mA5895D44428BCE7F38A3E30CA324F5E0E599364F_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UStar_tF8CA0D7A7A3197E68176CA173B07251554C7465D UnsafeUtilityInternal_ReadArrayElement_TisUStar_tF8CA0D7A7A3197E68176CA173B07251554C7465D_m11B8FD36241682A117B1BD6EC4B1F4ED78B49B47_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UTriangle_t6D4513C8A4054BEEC30F937F14BBE005BC4A141F UnsafeUtilityInternal_ReadArrayElement_TisUTriangle_t6D4513C8A4054BEEC30F937F14BBE005BC4A141F_mD9BEE07F15A62EDC899159691530AC27B6ABDAE2_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 UnsafeUtilityInternal_ReadArrayElement_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m726E59AE606BDAEEA7E8DD67B5F69FD00875153F_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 UnsafeUtilityInternal_ReadArrayElement_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m4E48372E1097232C60446DED043FEC5C7A61C4B0_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double2_t2124FB15A5BDCC0BD48B80116D4B24DC9DCA9D83 UnsafeUtilityInternal_ReadArrayElement_Tisdouble2_t2124FB15A5BDCC0BD48B80116D4B24DC9DCA9D83_m40CEC3B3B74322BA7691BA450694C03DC4A1D452_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5 UnsafeUtilityInternal_ReadArrayElement_Tisfloat2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5_mAA646CC2B25329E898077679928AB15DE9BC865E_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int2_tB123E869131C6102341F8F9AA01726E0E7C2768D UnsafeUtilityInternal_ReadArrayElement_Tisint2_tB123E869131C6102341F8F9AA01726E0E7C2768D_m331A9772A1384E1911C59CDE98F9366F81EED2C7_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int3_t18873F121F1EF24ECE875EAB01170B69E1B498C5 UnsafeUtilityInternal_ReadArrayElement_Tisint3_t18873F121F1EF24ECE875EAB01170B69E1B498C5_mBD52AD6E8736CB48656CFA0961D93E411266B81E_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int4_t6DC3FEACC0DD1EAE4D5B897188E8D669BC4DAB90 UnsafeUtilityInternal_ReadArrayElement_Tisint4_t6DC3FEACC0DD1EAE4D5B897188E8D669BC4DAB90_m776429375A9EF46AD949435543FDD0C5676070AC_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_ReadArrayElementWithStride_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m142239EC03EF551AAC70809189D5B14C59260A72_inline (void* ___0_source, int32_t ___1_index, int32_t ___2_stride, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisBatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D_m439E4115054F2F7F3DFE86DEAEF565B37F9DA51F_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_m1B3257CEE82ED08641AFCA4D9B2ACBC96222B922_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m485E79FA6794AD30B29C6414A85A867DF156E5E1_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m2DB960E4C25CE2F72A3A1ABC302E23F0963089F5_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B_m409346A2C7D4615BB703F2802A6B9E12650CDB39_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisCullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0_m445C79CB5CEFFE71D2530C3CACDBC4B8D3A9D0A9_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisEmbeddedLODBuffer_t6D75CECAC228D0710132158E77ACB46D0C43027B_mA1468D24A7B620A10E023979868C9D1EE2D5DE69_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisEntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8_mD1B0EBD0B43B19830ED5B0A121221D27AA0B963E_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisGPUDrivenMeshData_t0D53E18AECCB1ED48149AFD77C12CF1624340C32_mAC88D9A89F4AD39D5BDA8F3FF5419977CDCCC3E3_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisGPUDrivenSubMesh_t2D3B77E083A07816281294E54907E064B2A2A22B_m90E80C680B80CD82EB5839F5DDE33F22BFBF18D1_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m8EC54AD1BB1FFE52E59D872A1F83666DD9D381AA_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mA24CDBA02971DC06DEDE40B17E72F8C262B6B131_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisIntPtr_t_mF9218FE174B91F132731D032A744AFC048AFB932_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisInternalLODGroupSettings_t9F08C56422FEBE035004C6D96DE664DB1961F38D_m7042BFD95CFAA71CA1DD3DB939DB030B0656C6D2_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisInternalMeshLodRendererSettings_t2B499712F80597BFB45A4813CC139D1BEEDEBB73_m00E1BE18CB920FCCCBFE7C2C4A1BF8BA0A7EFECF_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisInternalMeshRendererSettings_tFA0423524032AD2C34E24C53548BE032F67FC6AF_mFB035E1C19B4E54280B4B9D660EDA3A8A086CAF6_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisLightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21_mF4E7699562D0DD8909029C23414C07C41E83166C_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_m310E3F9A8E091DFAB070D735691100178B15463B_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960_m4FA6D33FFCEC8031D4883ABCA5ED229D28E44D80_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisPlane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C_m289C662F3DEC8A9CACB14474D55B65B1E5E1AE84_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_mA10F583A957D150C530045E8E0C54DD2A4D96489_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisRangeInt_tDFBE4FD13857C11F21F7C3DA6B60D05341B67268_m462940FF70DE74B43CFAFE2670B4A652829BDF3F_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m2379B61902CFDAAAE7E5BE25FDA4BBBBF7E54273_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisUEncroachingSegment_t3AE1B0B8E50020697D3FA3FFF0C86E406ABFA3C1_m78BC20EBEDF9DDD29C261AACF9F19965B5A49C92_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisUEvent_t81CE84F34955D2A2DE962ADE28CDE659605FB2AC_mD7804F40606876E9729617E9761E42F9D6056B26_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisUHull_tBA3DC6A41F928298B0D924EDFE00150F307BA851_mDB23A7351A2DB7A69197EC17A28401C3A9B4DA98_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mB21F3357E1DB01146285E803CB68EE945ADA7149_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m483305F08D432A8FC41A6E11289383D1E2C3E8AE_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mAA2B8333B77A7410376516B6E13FCC02AEE6A5AC_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisUStar_tF8CA0D7A7A3197E68176CA173B07251554C7465D_m87DD2D062338C42E1537725895679ED703A237D3_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisUTriangle_t6D4513C8A4054BEEC30F937F14BBE005BC4A141F_m0E3277DA666E697D096F659128CBE7238C655CA3_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m297C8507511B4B7C587AF49B53D880021418C5CC_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m567C299D0E9EA26E8A3ADC4158D175D9F101BC1E_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_Tisdouble2_t2124FB15A5BDCC0BD48B80116D4B24DC9DCA9D83_m96D588AB3F164F56BB1DE77BC435342E9F1BD745_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_Tisfloat2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5_mE64EA17FB7FE71E52F389B33C2AE7F4894B63B16_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_Tisint2_tB123E869131C6102341F8F9AA01726E0E7C2768D_mB216CE24697733053C38D23575F516F72C0E7F06_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_Tisint3_t18873F121F1EF24ECE875EAB01170B69E1B498C5_m8C0D64D09B9A2F8238A614656203048B06759A6B_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_Tisint4_t6DC3FEACC0DD1EAE4D5B897188E8D669BC4DAB90_mA8C62CC9E230AC8C9856724F0AD3DB92EBABE192_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtilityInternal_WriteArrayElement_TisBatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D_m8F2F55BA88BD7D9AE44C0AEDE2832F7B5D1F35B6_inline (void* ___0_destination, int32_t ___1_index, BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D ___2_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtilityInternal_WriteArrayElement_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_m2A0F09E085DD77128506415E87841F78B28A6C54_inline (void* ___0_destination, int32_t ___1_index, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___2_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtilityInternal_WriteArrayElement_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m5BCA8D074309F3B46CEC7FD68ED40110FC26ADB7_inline (void* ___0_destination, int32_t ___1_index, uint8_t ___2_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtilityInternal_WriteArrayElement_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mD1BA031E3E1E75F3DE14D24A768757C9E12F51CD_inline (void* ___0_destination, int32_t ___1_index, Il2CppChar ___2_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtilityInternal_WriteArrayElement_TisContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B_mE39132565475093BAD090E92CA932991E46BC595_inline (void* ___0_destination, int32_t ___1_index, ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B ___2_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtilityInternal_WriteArrayElement_TisCullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0_m384FBBC6F8F5110A48E4143C7F675776EA47445F_inline (void* ___0_destination, int32_t ___1_index, CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0 ___2_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtilityInternal_WriteArrayElement_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_mC2A7BB5CE0978BC539FB52E5326DA5A704553463_inline (void* ___0_destination, int32_t ___1_index, double ___2_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtilityInternal_WriteArrayElement_TisEmbeddedLODBuffer_t6D75CECAC228D0710132158E77ACB46D0C43027B_m51B6E5CA111B53732375EAEACEAAA619F6649872_inline (void* ___0_destination, int32_t ___1_index, EmbeddedLODBuffer_t6D75CECAC228D0710132158E77ACB46D0C43027B ___2_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtilityInternal_WriteArrayElement_TisEntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8_m9C0FADCA718C9341E229CEE17C8FE4855AC72880_inline (void* ___0_destination, int32_t ___1_index, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___2_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtilityInternal_WriteArrayElement_TisGPUDrivenMeshData_t0D53E18AECCB1ED48149AFD77C12CF1624340C32_m8D30843628A1D5617028C57F54F533476754764A_inline (void* ___0_destination, int32_t ___1_index, GPUDrivenMeshData_t0D53E18AECCB1ED48149AFD77C12CF1624340C32 ___2_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtilityInternal_WriteArrayElement_TisGPUDrivenSubMesh_t2D3B77E083A07816281294E54907E064B2A2A22B_mD11C11FD5E761DB5DFA854AE4BAD7EC7255AE737_inline (void* ___0_destination, int32_t ___1_index, GPUDrivenSubMesh_t2D3B77E083A07816281294E54907E064B2A2A22B ___2_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtilityInternal_WriteArrayElement_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m98F5668334FA5D7DC5943C2EF4820057B8FA3AC8_inline (void* ___0_destination, int32_t ___1_index, int16_t ___2_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtilityInternal_WriteArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m6CE8AF6F42FA98657985C680DB85747DAC856E2F_inline (void* ___0_destination, int32_t ___1_index, int32_t ___2_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtilityInternal_WriteArrayElement_TisIntPtr_t_mD032891DCCD5A38294F51BAEEA8BFAA62B8557FB_inline (void* ___0_destination, int32_t ___1_index, intptr_t ___2_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtilityInternal_WriteArrayElement_TisInternalLODGroupSettings_t9F08C56422FEBE035004C6D96DE664DB1961F38D_m8A735DF8D46F26149043C87F203926540BC1E6B8_inline (void* ___0_destination, int32_t ___1_index, InternalLODGroupSettings_t9F08C56422FEBE035004C6D96DE664DB1961F38D ___2_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtilityInternal_WriteArrayElement_TisInternalMeshLodRendererSettings_t2B499712F80597BFB45A4813CC139D1BEEDEBB73_mD92C129429E118347DCE3E80F61ABED812BB3713_inline (void* ___0_destination, int32_t ___1_index, InternalMeshLodRendererSettings_t2B499712F80597BFB45A4813CC139D1BEEDEBB73 ___2_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtilityInternal_WriteArrayElement_TisInternalMeshRendererSettings_tFA0423524032AD2C34E24C53548BE032F67FC6AF_m7A4D40E228244C59345E45676D4CC8348B83617A_inline (void* ___0_destination, int32_t ___1_index, InternalMeshRendererSettings_tFA0423524032AD2C34E24C53548BE032F67FC6AF ___2_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtilityInternal_WriteArrayElement_TisLightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21_m214EFE079E3D95383C08945E8BAFA5E3C3FAA190_inline (void* ___0_destination, int32_t ___1_index, LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21 ___2_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtilityInternal_WriteArrayElement_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_mA93DE94079CF55B4D3FB32AE0780DF796C3CCA47_inline (void* ___0_destination, int32_t ___1_index, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___2_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtilityInternal_WriteArrayElement_TisModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960_m6B028924EA3CC36810A213B16F58DE31DE31687E_inline (void* ___0_destination, int32_t ___1_index, ModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960 ___2_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtilityInternal_WriteArrayElement_TisPlane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C_mBE119E8ABAF3D83B9A393B7004C208DF31E4901C_inline (void* ___0_destination, int32_t ___1_index, Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C ___2_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtilityInternal_WriteArrayElement_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m9F92E74FB0AAD0FC40CC4DE76AF4BBA2C47C88D6_inline (void* ___0_destination, int32_t ___1_index, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___2_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtilityInternal_WriteArrayElement_TisRangeInt_tDFBE4FD13857C11F21F7C3DA6B60D05341B67268_m8A51075F082D2E4A1FB053EA92EB0FC37CAE35EA_inline (void* ___0_destination, int32_t ___1_index, RangeInt_tDFBE4FD13857C11F21F7C3DA6B60D05341B67268 ___2_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtilityInternal_WriteArrayElement_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7871DE4308B379F2F32315380DA04C05F11DA13F_inline (void* ___0_destination, int32_t ___1_index, float ___2_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtilityInternal_WriteArrayElement_TisUEncroachingSegment_t3AE1B0B8E50020697D3FA3FFF0C86E406ABFA3C1_mE2BF625B742B08C6B1C2B768BD2C6B56E8FCF9FA_inline (void* ___0_destination, int32_t ___1_index, UEncroachingSegment_t3AE1B0B8E50020697D3FA3FFF0C86E406ABFA3C1 ___2_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtilityInternal_WriteArrayElement_TisUEvent_t81CE84F34955D2A2DE962ADE28CDE659605FB2AC_m2FBE2FA3BBCE3FB77BD4AE0019762C8453B4C17B_inline (void* ___0_destination, int32_t ___1_index, UEvent_t81CE84F34955D2A2DE962ADE28CDE659605FB2AC ___2_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtilityInternal_WriteArrayElement_TisUHull_tBA3DC6A41F928298B0D924EDFE00150F307BA851_m80FE70456505C6177FDF18C114A5896234C5A46A_inline (void* ___0_destination, int32_t ___1_index, UHull_tBA3DC6A41F928298B0D924EDFE00150F307BA851 ___2_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtilityInternal_WriteArrayElement_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m8096FCC44AAECDAC8F7011A27B6D4B6745A539CE_inline (void* ___0_destination, int32_t ___1_index, uint16_t ___2_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtilityInternal_WriteArrayElement_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m2A3A6B90150B69BBDEE5319C3CE02AF8B872B64B_inline (void* ___0_destination, int32_t ___1_index, uint32_t ___2_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtilityInternal_WriteArrayElement_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mC71868C665A692778D508E69E8AF1A631E0CD348_inline (void* ___0_destination, int32_t ___1_index, uint64_t ___2_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtilityInternal_WriteArrayElement_TisUStar_tF8CA0D7A7A3197E68176CA173B07251554C7465D_m5EA80C1639D238E594564D9B622DF4CCE1141D4B_inline (void* ___0_destination, int32_t ___1_index, UStar_tF8CA0D7A7A3197E68176CA173B07251554C7465D ___2_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtilityInternal_WriteArrayElement_TisUTriangle_t6D4513C8A4054BEEC30F937F14BBE005BC4A141F_m6A69EFB7BEE099EB16798F6EA62AC3C8612E49D0_inline (void* ___0_destination, int32_t ___1_index, UTriangle_t6D4513C8A4054BEEC30F937F14BBE005BC4A141F ___2_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtilityInternal_WriteArrayElement_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m4DC28ACC65CD91D06E733BEA0BC919D23DF3D7E4_inline (void* ___0_destination, int32_t ___1_index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___2_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtilityInternal_WriteArrayElement_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mA724E762E40FA0C9F59E22D26CD7760418780D94_inline (void* ___0_destination, int32_t ___1_index, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___2_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtilityInternal_WriteArrayElement_Tisdouble2_t2124FB15A5BDCC0BD48B80116D4B24DC9DCA9D83_mF7835C7C0CCCC6506483D47D9F965AE133A2580A_inline (void* ___0_destination, int32_t ___1_index, double2_t2124FB15A5BDCC0BD48B80116D4B24DC9DCA9D83 ___2_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtilityInternal_WriteArrayElement_Tisfloat2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5_m394E812F3E02FCD362EB8DCBF0A7D112DBBE9DA3_inline (void* ___0_destination, int32_t ___1_index, float2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5 ___2_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtilityInternal_WriteArrayElement_Tisint2_tB123E869131C6102341F8F9AA01726E0E7C2768D_mE5E734E01AED08F1ED47485C1721B5B1331B0A58_inline (void* ___0_destination, int32_t ___1_index, int2_tB123E869131C6102341F8F9AA01726E0E7C2768D ___2_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtilityInternal_WriteArrayElement_Tisint3_t18873F121F1EF24ECE875EAB01170B69E1B498C5_m3A3B9DFD873633E9078206152E40D232B1B0F8D2_inline (void* ___0_destination, int32_t ___1_index, int3_t18873F121F1EF24ECE875EAB01170B69E1B498C5 ___2_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtilityInternal_WriteArrayElement_Tisint4_t6DC3FEACC0DD1EAE4D5B897188E8D669BC4DAB90_mBFAF687EB944C031EFE295967D340706BA7A8F57_inline (void* ___0_destination, int32_t ___1_index, int4_t6DC3FEACC0DD1EAE4D5B897188E8D669BC4DAB90 ___2_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtilityInternal_WriteArrayElementWithStride_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m46E20F2BBF8564E1BC4A202FE67CCEC245A13E11_inline (void* ___0_destination, int32_t ___1_index, int32_t ___2_stride, int32_t ___3_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisAlignOfHelper_1_tBEA2F557D94117D6B5CA3D54DEA10F7A2F5AF996_mC0091F1B9C9C5F6FE2EF40A40286F792951D680B_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisAlignOfHelper_1_t34CCC6CF432525FDD94891D4DAFB9DB74F9AF3E9_m8E01215ECE32A86C1F6BEBD206783D5863BE3102_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisAlignOfHelper_1_tAF795AF837E3C37401B92C7483D74A4E5145DB4D_m8CB43E8118CC0E65E6E8130381DEB11701F21848_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisAlignOfHelper_1_tB21BA45542E8060FB85BA02002482499EBFA00A2_mA1D5B3481244A0872D4C4419C5C507BC5C9CA1A4_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisAlignOfHelper_1_t08A14D9ACB4D26ACA71BCA57DAB866764B883825_m234350549A466D387273283CD034377BA980C785_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisAlignOfHelper_1_tF6B6CAC1AFD67E6448C9B177EA1734D57E3BCDA2_mF17960322FD73F94C5B1EA66A15A812107E8E26C_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisAlignOfHelper_1_tFC537E4E3FE3F7962CBC5F219276522C16824ACF_m6ED1AB2C11E9DEA8670BFFABDB8A999E66D4460D_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisAlignOfHelper_1_tCD4B08DBB915013B12E50DA43CE11B02B0D135DD_m5CB9D53CC2151EBA31EE911F86BF64236024C41B_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisAlignOfHelper_1_t398568B8BA5FC2BA68E01C861AA1BEDC4750E61D_m5F14358FA8512CD3007A89FBBF226B14ECA4C00B_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisAlignOfHelper_1_t9B8325E941D53AE21ECA21E2996411A52D0F8663_m70AC25EBFF484644D693343C24F146A8528614C8_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisAlignOfHelper_1_t2B1B6F8C95D259E66B253A1C059AE8D3365B528E_m9653BC5706AAE6334C692185FFA0519BD7824CB3_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisAlignOfHelper_1_t676424B8757032427D7761BC732079DC7512D8AE_mB243DC326B2D814D1A62FDABCC2F2AA541A8C895_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisAlignOfHelper_1_t1C2506D8F2F53BF0A585917F05CD8BC880EBB752_m6197C4317CE4E01732509D53E08172FEA65ED04E_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisAlignOfHelper_1_tCFC8A208D36EA414B14215D004A770AEC0DB8BA2_m88DBA349C0FF85634217C1CB08E8DB162E461E71_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisAlignOfHelper_1_t1A20691B0774E0EFBEAD966FB0B480A553DCF42E_m2B08131E6C67851405962CD6DF12CF465931B858_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisAlignOfHelper_1_t6F2F300ADF773C90F661FF403B84D167EB793773_m69F6C16E7F867D1C227B7289CE495CC095EC7AD0_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisAlignOfHelper_1_tF9C3457088E3B293794AA641A2261DD4B6D5B57A_m58FF4964D2CAEB4EFC416B1E0FDFD6E9705F3143_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisAlignOfHelper_1_t6C24EA77B111E6877D279F01810C1D4E13534301_m65D985DC623EBE012CF7CAE94EF2DFEF1B8A3243_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisAlignOfHelper_1_tF3D321A7435452B0B749AF58D2CF8AB1865BC52C_m1CAC82495552B9A4A605EEA04EA097B8AF87C8C2_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisAlignOfHelper_1_t4257D6924487B14B176AB4C639F1251F2E4ED1C6_mDDF1DABCBD0F4009518CE893AD84E6078D170199_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisAlignOfHelper_1_tE6A7C0BC2AB9B74FA79F8449B8FA1BC94A474BC4_m19212FA6DC039BBDFD64B28E598F6264D54DB691_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisAlignOfHelper_1_t151A1BD8ECCDCBCF3185238615804E396C3B07A5_mC4112DF120EBF605C8F77839E842177AF068D44E_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisAlignOfHelper_1_t25880EEE885729199077AC19774C8BE13323D4B4_m19CE06B2A77B620A1DE800E56AFEE3A5616E99E6_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisAlignOfHelper_1_t3FE2545879EC19D84F399DE73EA83AAEDEA14C9D_m22F628ADD6E12980B394B9237C61AB0C95E1EC1C_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisAlignOfHelper_1_t054F2568D7C1097239A28CF25D80D8353E29BB37_m120CCD2A94A7B51A2631C5630A9E505F1DDB1CD7_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisAlignOfHelper_1_t0280929E6B4134EE85E97F8BFC283CFB4C7BC056_m24D80B10C7527E88ECD7E5C10731C7F1663E2C27_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisAlignOfHelper_1_t70E1FB13BE93757804A731D115FA219AE664F9B9_mE690DD75A3C952CEDEB71F13B96E603904A60567_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisAlignOfHelper_1_tF3C6E1F1F032602FD9777BBE4466632711C12DC3_m936B8B899C03B9C80AA39CD231B892274340136D_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisAlignOfHelper_1_tE21040F72E90527C319FF9B07B398E23DF95BE2E_m2D3BC72BBF45866A72C7ADF31F40AEFC56BBD498_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisAlignOfHelper_1_t9E9A73E6B25DCBB1356ABAF5D5F64CEB912639E5_m6333413607F97523DA83C70DA244CCE8E0B50D8E_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisAlignOfHelper_1_tE0DC7EEADD8DE994397C46E4B7F6E4EC9FE4F669_m50F19243DCF7F556C625C9C7048E8BA7FDA09C6E_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisAlignOfHelper_1_tA7BAD341B87833F98272549F84315FE63B02CC5A_m034AE7678181AD29323E752CCA82EDCFE2E3CAA0_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisAlignOfHelper_1_t26C526A4040EF3870B74BFD09D3768388C3BD773_mAA11ED5EDA264AB3B48690198F615B38D00FE294_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisAlignOfHelper_1_tF31F09BEF44353E98923E6193CEADA52B8ED43D4_m29E0C0863AA5A2364C1F00FAEAD6CCEC94DA70FF_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisAlignOfHelper_1_t0C97FDE41871CAD34CA643C258038DE7C30AA460_mDA796E09ECCAD2EAEF6F0A2C1773617A9FBA6E6E_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisAlignOfHelper_1_t6ADF810505F028EA6EBCA5B664B68A8372696F9C_mAA91F87ABC1C69B33E87DD76C50A480D237F8B9A_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisAlignOfHelper_1_t5DC854A29E0F5E52BA538EDE0BFDED0CC3F2B396_mB59C152F5426670D374DC720745E2F06FAADE0CA_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisAlignOfHelper_1_t3815CFB9721539E18DAC181E8DB449C4D3C731E3_m35ABFDD366C53EC12FEB57C526087B620B8844C2_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A Vector_1_op_Explicit_mEFC640DAE334AF4ED540F354F6FCDF25F74E95A2_fshared (Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 Vector_1_Equals_m6F913845CB1E8A1A753B3C187A8EB840C36F5ADF_inline (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 ___0_left, Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 ___1_right, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t MarshalledUnityObject_MarshalNotNull_TisIl2CppSharedGenericObject_mCE897EC9A79983B4B1E6E2C8342452256309044A_gshared_inline (Il2CppSharedGenericObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* UnsafeUtility_As_TisIntPtr_t_TisGCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC_mD94F597CB91662C823496DA9FA9A7CF908734A78_inline (intptr_t* ___0_from, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_mCC24A812DFC30C3DE2230E3C8EE705871C1DFF81_gshared (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* __this, Il2CppSharedGenericObject* ___0_item, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector_1_get_Count_m6DF09E4443FC90521D33C892BE69D32B04D85A15_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t Vector_1_get_Item_m248FFF521980A3A43D237B8C5CA2ABD5C62D4D27 (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector_1_ScalarEquals_m4E13E30219B0D2AADB58AD6E5CB2B54B9FCBFAAE_inline (uint16_t ___0_left, uint16_t ___1_right, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector_1__ctor_m46ADEA122EFBA7AEF487716891A8ADD284FD12E3 (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489* __this, void* ___0_dataPointer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector_1__ctor_mF674294C34FEB07FB44E694358BDA181F564B674_fshared (Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2* __this, Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* ___0_existingRegister, const RuntimeMethod* method) ;

IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* OnceInScope_OnceIn_m4F8C9FC123BFDFEE9BEAFA9EDB8F4AB95E83C813 (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_todo, Type_t* ___1_scopeType, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool RenderPipeline_get_disposed_mF0D4B88DF44249E0FC2371697B913DD5A81B3850_inline (RenderPipeline_t3AF1E2046D27ABCEBA2279770AADA9F531073E69* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8 (String_t* ___0_format, RuntimeObject* ___1_arg0, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectDisposedException__ctor_mB2C8582279AF3F0C1CF9AA52DA7331BF848DFD48 (ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB* __this, String_t* ___0_objectName, const RuntimeMethod* method) ;
inline void List_1__ctor_m7378BA5FBCA1E88080985FB810820B3F47DAD54C (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E*, const RuntimeMethod*))List_1__ctor_m7378BA5FBCA1E88080985FB810820B3F47DAD54C_gshared)(__this, method);
}
inline RuntimeObject* List_1_get_Item_m10705371E501C883FCF3DF007784EEBF1F0066DD (List_1_t9197976D9CD257810C9C417B3050A6C49D652F8D* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (List_1_t9197976D9CD257810C9C417B3050A6C49D652F8D*, int32_t, const RuntimeMethod*))List_1_get_Item_m02336594E8F76D7313E2BCB7A3ED5ABD13B4D515_gshared)(__this, ___0_index, method);
}
inline void List_1_Add_m0CE6E39234ED33F5195AABC8029D06D4756C75C1_inline (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* __this, Il2CppSharedGenericObject* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E*, Il2CppSharedGenericObject*, const RuntimeMethod*))List_1_Add_m0CE6E39234ED33F5195AABC8029D06D4756C75C1_gshared_inline)(__this, ___0_item, method);
}
inline int32_t List_1_get_Count_m9ED68C1A087E3F8772FD76CC5C3B7337232A4F91_inline (List_1_t9197976D9CD257810C9C417B3050A6C49D652F8D* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t9197976D9CD257810C9C417B3050A6C49D652F8D*, const RuntimeMethod*))List_1_get_Count_mD2ED26ACAF3BAF386FFEA83893BA51DB9FD8BA30_fshared_inline)(__this, method);
}
inline int32_t List_1_get_Count_m9832942FE310479E64D9D0D23F29C65305BE1622_inline (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E*, const RuntimeMethod*))List_1_get_Count_mD2ED26ACAF3BAF386FFEA83893BA51DB9FD8BA30_fshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A* Resources_FindObjectsOfTypeAll_mECAB6322D6A605B60AF0598F6D81F169ACE74C00 (Type_t* ___0_type, const RuntimeMethod* method) ;
inline __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* Resources_ConvertObjects_TisIl2CppSharedGenericObject_m9BE1F255F2CB43F5F4EC6B3E4A12E88D5388D6F2 (ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A* ___0_rawObjects, const RuntimeMethod* method)
{
	return ((  __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* (*) (ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A*, const RuntimeMethod*))Resources_ConvertObjects_TisIl2CppSharedGenericObject_m9BE1F255F2CB43F5F4EC6B3E4A12E88D5388D6F2_gshared)(___0_rawObjects, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* Resources_Load_m6CD8FBBCCFFF22179FA0E7B1806B888103008D33 (String_t* ___0_path, Type_t* ___1_systemTypeInstance, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F (RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1* ___0_type, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* ScopeTransitionHelper_get_AllAssemblies_mBD1DC2D507C344159A521F20F3DBF2A440BF403D_inline (ScopeTransitionHelper_t069C5DE337C0C8F615857F4D731C5CBE3B0F4347* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScopeTransitionHelper_ExecuteMethodsInOrder_m5176334C7A18A675F55594FDBFACACF17480137A (ScopeTransitionHelper_t069C5DE337C0C8F615857F4D731C5CBE3B0F4347* __this, Type_t* ___0_attributeType, RuntimeObject* ___1_assemblies, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScopeTransitionHelper_ExecuteMethodsInReverseOrder_m0E0A6AF03EFB351B81C42391F279D31C8C2BD7A9 (ScopeTransitionHelper_t069C5DE337C0C8F615857F4D731C5CBE3B0F4347* __this, Type_t* ___0_attributeType, RuntimeObject* ___1_assemblies, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* ScriptableObject_CreateInstance_mE015043D7EC19654FDFB830A9393B3914FF5FC24 (Type_t* ___0_type, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t IntPtr_op_Explicit_m931A344F16D4C65EFB0B492EB07C7A82AF0B9FA1 (int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Byte_Equals_m25D9E26BA4A7457D39CC3E870C2B33070D731E85 (uint8_t* __this, uint8_t ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A (intptr_t ___0_pointer, int32_t ___1_offset, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF (intptr_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Char_Equals_mEA7BFB45790C973DF6352091FA924B3FB2EFCE4B (Il2CppChar* __this, Il2CppChar ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___0_paramName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* __this, String_t* ___0_paramName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_FastAllocateString_m071BD33B9EFB2375443E1550C028861164D0F104 (int32_t ___0_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar* String_GetRawStringData_m87BC50B7B314C055E27A28032D1003D42FDE411D (String_t* __this, const RuntimeMethod* method) ;
inline void Span_1__ctor_mC9BE2938B716B46BB6B9070B94DBE5CE814BC0E2_inline (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, Il2CppChar* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D*, Il2CppChar*, int32_t, const RuntimeMethod*))Span_1__ctor_mBA868F06359701D9950DEB1B10F52F848E9FF6DA_fshared_inline)(__this, ___0_ptr, ___1_length, method);
}
inline void SpanAction_2_Invoke_m47CBAA653C2AF4E0B4D3CA9600C55A94FA090732_inline (SpanAction_2_t7E9C729D70F4264C725B3A5B383D01398D40CB63* __this, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ___0_span, ValueTuple_3_t94AB360726755BBED1ED3E10C22F399AE18E226E ___1_arg, const RuntimeMethod* method)
{
	((  void (*) (SpanAction_2_t7E9C729D70F4264C725B3A5B383D01398D40CB63*, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D, ValueTuple_3_t94AB360726755BBED1ED3E10C22F399AE18E226E, const RuntimeMethod*))SpanAction_2_Invoke_m47CBAA653C2AF4E0B4D3CA9600C55A94FA090732_gshared_inline)(__this, ___0_span, ___1_arg, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SpanAction_2_Invoke_m65D110A8BF9027F070FA8CF53AF75D47A98C6E2A_inline (SpanAction_2_t84FDFFEECCC96A9A407DCB490E60340E38185947* __this, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ___0_span, ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57 ___1_arg, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* CultureInfo_get_CurrentCulture_m8A4580F49DDD7E9DB34C699965423DB8E3BBA9A5 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_mE871810BC163EE4EF88E7C7682A6AD39911173B8 (int32_t* __this, String_t* ___0_format, RuntimeObject* ___1_provider, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D (StringBuilder_t* __this, String_t* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UInt32_ToString_m464396B0FE2115F3CEA38AEECDDB0FACC3AADADE (uint32_t* __this, String_t* ___0_format, RuntimeObject* ___1_provider, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CancellationToken_get_IsCancellationRequested_m9744F7A1A82946FDD1DC68E905F1ED826471D350 (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Task_1__ctor_m912F5F25BF780F1B743BCB5FC21FEB08BB05ED52 (Task_1_t824317F4B958F7512E8F7300511752937A6C6043* __this, bool ___0_canceled, bool ___1_result, int32_t ___2_creationOptions, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___3_ct, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Task_1__ctor_mB3888CE20043DB96B5E044DF7193D494B41E3DA2 (Task_1_t4C228DE57804012969575431CFF12D57C875552D* __this, int32_t ___0_result, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_NextPowerOfTwo_mA1CE7F3EEF9B0B07AB2D586C030ED236D578F485_inline (int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Resize_TisTextProcessingElement_tDCD1EAF9D54829E796F4F9726D63B205344C7698_mD70DF9176547529A9B644ECE46B999E7B347354E (TextProcessingElementU5BU5D_t24A1E4C8745577D794FE856B4236875595E7FD22** ___0_array, int32_t ___1_newSize, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JobsUtility_get_ThreadIndexCount_m88A954344398143540618B35943F863B92465676 (const RuntimeMethod* method) ;
inline Il2CppSharedGenericObject* Func_1_Invoke_m201DDBB72CE38673C89C22034EC8779981D83E6D_inline (Func_1_t566D4A654882E282E54CDC3A001E05486F913903* __this, const RuntimeMethod* method)
{
	return ((  Il2CppSharedGenericObject* (*) (Func_1_t566D4A654882E282E54CDC3A001E05486F913903*, const RuntimeMethod*))Func_1_Invoke_m201DDBB72CE38673C89C22034EC8779981D83E6D_gshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Resize_TisLinkInfo_tE85DDAFDFBDA635E6405C88EE4FD5941A9243DD8_m9F69F603EB19033FF225E25B457B288FF3EA3011 (LinkInfoU5BU5D_tB7EB23E47AF29CCBEC884F9D0DB95BC97F62AE51** ___0_array, int32_t ___1_newSize, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Resize_TisWordInfo_tA466206097891A5A2590896EE164AFC406EB060D_m6646EE6AF7569488926F3672FEF3AC3091453D89 (WordInfoU5BU5D_tAD74C9720883D7BB229A20FFAE9EFD2CF9963F7B** ___0_array, int32_t ___1_newSize, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Resize_TisMeshInfo_tE55C4A8846CC2C399CCC3FE989476D987B86AB2F_mB235457CD021CAEB78F1A46E61EE85B010D130AC (MeshInfoU5BU5D_t3DF8B75BF4A213334EED197AD25E432212894AC6** ___0_array, int32_t ___1_newSize, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Resize_TisTextElementInfo_tDD7A12E319505510E0B350E342BD55F32AB5F976_mF6D48102F97D6CEEFF8844D21732E754C411A71D (TextElementInfoU5BU5D_tEC28C9B72883EE21AA798913497C69E179A15C4E** ___0_array, int32_t ___1_newSize, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC (int32_t ___0_argument, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D (void* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t* UnsafeUtilityInternal_Add_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m5A3E59E17B5D433E8D6EFA9D4C1C40182A89B306_inline (uint8_t* ___0_source, int32_t ___1_elementOffset, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_AlignOf_TisBatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D_mB855D0A6C39C238FD086F0A41F578C588DD1E57D_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_AlignOf_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_mBCD966C8D21A7FA7A531E312657F8536BB7D5591_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_AlignOf_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mC44B74F48735FA62BAE3FBA763123E932B9EF822_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_AlignOf_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m80DCA0AC9767EB192DAAE87F5F4F56708D278474_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_AlignOf_TisContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B_m47308D0D016580B804EBE2B83A11C2BEA28E74B4_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_AlignOf_TisCullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0_mECD98232E4577E26AB1077C802A175181CEF9E17_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_AlignOf_TisEmbeddedLODBuffer_t6D75CECAC228D0710132158E77ACB46D0C43027B_mF15FE3B1714441550D2BDA30F695E79AA17709D9_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_AlignOf_TisEntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8_mCAE1EDAA3D44B416A2AF29A2CD1437A60C94B184_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_AlignOf_TisGPUDrivenMeshData_t0D53E18AECCB1ED48149AFD77C12CF1624340C32_mE4B475BB745CDDD8575CFF31796C75EC5BE1677C_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_AlignOf_TisGPUDrivenSubMesh_t2D3B77E083A07816281294E54907E064B2A2A22B_m07E75B4F5F05AFDC7DD95993E4BE4E6832AC951F_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_AlignOf_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m0987C997B0BCBFDE388F4E1808BCF6706136856A_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_AlignOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mB5611745B3ED473868EF6B61479E2860BBB2223C_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_AlignOf_TisIntPtr_t_m7FF5CB3788B437CA624174389D25EE9BCB2B212E_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_AlignOf_TisInternalLODGroupSettings_t9F08C56422FEBE035004C6D96DE664DB1961F38D_m2D29EB1E0BB5C7D366275F1AEB950D0C3365A3EC_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_AlignOf_TisInternalMeshLodRendererSettings_t2B499712F80597BFB45A4813CC139D1BEEDEBB73_m4613462C0A843B2F0C9BE750FF1486558EC20A57_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_AlignOf_TisInternalMeshRendererSettings_tFA0423524032AD2C34E24C53548BE032F67FC6AF_m218A1DC76BE997229B2F8774AE0E528B6BAE4EAF_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_AlignOf_TisLightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21_m2D3813D1A1056BED9EEE9B6BF630EBDCF618551D_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_AlignOf_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_m6E66E9028E798C9896F3F56F7FA05908E32B1689_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_AlignOf_TisModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960_m9396C9240C13C7F344AC4E11A89D9B0A75EF52AB_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_AlignOf_TisPlane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C_m9E02365A60C7193DCE9B1B1CCAC6B940995AB87F_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_AlignOf_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_mCFA49B63212293A47A946132716CC8084F118BBF_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_AlignOf_TisRangeInt_tDFBE4FD13857C11F21F7C3DA6B60D05341B67268_m36853F8E5ABD4C14B492DED38BA104203DA9FADC_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_AlignOf_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m9B9607330865C0A5ABFB515754C1C1C96D19F344_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_AlignOf_TisUEncroachingSegment_t3AE1B0B8E50020697D3FA3FFF0C86E406ABFA3C1_mC80D3B528E9C492E0BAE5124788711053E5BA8AE_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_AlignOf_TisUEvent_t81CE84F34955D2A2DE962ADE28CDE659605FB2AC_m2EAF1749DEC30DF8BAE54F2E152E33EEBF06D2E7_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_AlignOf_TisUHull_tBA3DC6A41F928298B0D924EDFE00150F307BA851_m9DF201FCDB9B057604B20987096858076D21CFAB_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_AlignOf_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m5CC670602FE83644EBD988EBBA04AB4D7D731FD7_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_AlignOf_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mF228544B123C545DB4D43DDE0E23492B7A731A7F_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_AlignOf_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m29B7D9DA9527706BBA1F73ECEA934CCD0B2D99E3_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_AlignOf_TisUStar_tF8CA0D7A7A3197E68176CA173B07251554C7465D_m120C8454AB3B92B9FDB39562A6C50C333B6D7BD3_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_AlignOf_TisUTriangle_t6D4513C8A4054BEEC30F937F14BBE005BC4A141F_mC3E4D8B9B275315C3369194023ADC219C9BFA56B_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_AlignOf_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m5A04043858F190DDD4C4AB8C2C707306514BCA45_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_AlignOf_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mA208BE87A87C101AE5CCF93D07CE98EF4B72BB9D_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_AlignOf_Tisdouble2_t2124FB15A5BDCC0BD48B80116D4B24DC9DCA9D83_m8D474CAB34FA5FB18D61421063147CE9793F0B05_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_AlignOf_Tisfloat2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5_mF5574E385BD8BFE25E8CE39CF6C0587EEB03EA32_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_AlignOf_Tisint2_tB123E869131C6102341F8F9AA01726E0E7C2768D_m26EBC94AD0C3507224F27777BDABDC7B666D0880_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_AlignOf_Tisint3_t18873F121F1EF24ECE875EAB01170B69E1B498C5_mBF5C30CFD8345346842446C6C9505350076D4166_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_AlignOf_Tisint4_t6DC3FEACC0DD1EAE4D5B897188E8D669BC4DAB90_mE9667172DCCAA2CC0371D40CBC26AD69CA73BE00_inline (const RuntimeMethod* method) ;
inline Il2CppSharedGenericObject** UnsafeUtilityInternal_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisIl2CppSharedGenericObject_mCC5695768CDD2910B4B23769B9C6E1255C530F11_inline (uint8_t* ___0_from, const RuntimeMethod* method)
{
	return ((  Il2CppSharedGenericObject** (*) (uint8_t*, const RuntimeMethod*))UnsafeUtilityInternal_As_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mE1CA751887466B801BE69083C2B0EA3EDE41FF9B_fshared_inline)(___0_from, method);
}
inline GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* UnsafeUtilityInternal_As_TisIntPtr_t_TisGCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC_mD43127D5F7AA6EB4B52E5C30BA53F29843E9E9A2_inline (intptr_t* ___0_from, const RuntimeMethod* method)
{
	return ((  GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* (*) (intptr_t*, const RuntimeMethod*))UnsafeUtilityInternal_As_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mE1CA751887466B801BE69083C2B0EA3EDE41FF9B_fshared_inline)(___0_from, method);
}
inline Il2CppSharedGenericObject** UnsafeUtilityInternal_As_TisIl2CppSharedGenericObject_TisIl2CppSharedGenericObject_m1C63CD01558497B8FF90637D897964E5BF4FAC2A_inline (Il2CppSharedGenericObject** ___0_from, const RuntimeMethod* method)
{
	return ((  Il2CppSharedGenericObject** (*) (Il2CppSharedGenericObject**, const RuntimeMethod*))UnsafeUtilityInternal_As_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mE1CA751887466B801BE69083C2B0EA3EDE41FF9B_fshared_inline)(___0_from, method);
}
inline intptr_t* UnsafeUtilityInternal_AsRef_TisIntPtr_t_m339CF12381F6ABACE5B83137775FCA5DF3B2FA19_inline (void* ___0_ptr, const RuntimeMethod* method)
{
	return ((  intptr_t* (*) (void*, const RuntimeMethod*))UnsafeUtilityInternal_AsRef_TisIl2CppFullySharedGenericStruct_m4AE204964F54C3F7626BE47CADE4A52CF2797B6B_fshared_inline)(___0_ptr, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D UnsafeUtilityInternal_ReadArrayElement_TisBatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D_mDBEEA432305DC45F859549C5C3C2BC1AB641161C_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 UnsafeUtilityInternal_ReadArrayElement_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_mFF2A9A45B70E41FC9F6A40A69B2C8E3BAF76360A_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t UnsafeUtilityInternal_ReadArrayElement_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m215470D8CCA83493150D2E40676D8A40FCF722B0_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppChar UnsafeUtilityInternal_ReadArrayElement_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m2FEACC2DB55AEEA0CA84FFD3CFC0DA3A103577EB_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B UnsafeUtilityInternal_ReadArrayElement_TisContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B_mE64830E3E69DCC7AFC8FF6B0965DCA99D7390356_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0 UnsafeUtilityInternal_ReadArrayElement_TisCullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0_m3DD623F7581DFB21C61537373F0F32050E5D8CFE_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double UnsafeUtilityInternal_ReadArrayElement_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m3153A5430B46A926C90C99ECC737289006BAB570_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EmbeddedLODBuffer_t6D75CECAC228D0710132158E77ACB46D0C43027B UnsafeUtilityInternal_ReadArrayElement_TisEmbeddedLODBuffer_t6D75CECAC228D0710132158E77ACB46D0C43027B_mAAB0A3B6158D3A53128F92076405F23C82C562CA_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 UnsafeUtilityInternal_ReadArrayElement_TisEntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8_mDC8A7125EE74C940B9F940440D412BA4B3A42575_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GPUDrivenMeshData_t0D53E18AECCB1ED48149AFD77C12CF1624340C32 UnsafeUtilityInternal_ReadArrayElement_TisGPUDrivenMeshData_t0D53E18AECCB1ED48149AFD77C12CF1624340C32_m3AC186183B40DD72F475DEA5ABBA39D050266613_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GPUDrivenSubMesh_t2D3B77E083A07816281294E54907E064B2A2A22B UnsafeUtilityInternal_ReadArrayElement_TisGPUDrivenSubMesh_t2D3B77E083A07816281294E54907E064B2A2A22B_mBF012366896A35F47863D2A27520F935DBDFADE0_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int16_t UnsafeUtilityInternal_ReadArrayElement_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mE907DE0EDCAAEB74B259B5022D1AC07C3FA77763_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_ReadArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m0B7B877C8F00DCC1C95D7124B3B0D83C6D492345_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t UnsafeUtilityInternal_ReadArrayElement_TisIntPtr_t_mC53DA66CA829ADB467A34898F82725DDA86091D6_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InternalLODGroupSettings_t9F08C56422FEBE035004C6D96DE664DB1961F38D UnsafeUtilityInternal_ReadArrayElement_TisInternalLODGroupSettings_t9F08C56422FEBE035004C6D96DE664DB1961F38D_m9B17FB9991C066865590CE397EC91A2056D1089A_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InternalMeshLodRendererSettings_t2B499712F80597BFB45A4813CC139D1BEEDEBB73 UnsafeUtilityInternal_ReadArrayElement_TisInternalMeshLodRendererSettings_t2B499712F80597BFB45A4813CC139D1BEEDEBB73_mE43484F89D326B2CFC50C120174997AB2082FBE0_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InternalMeshRendererSettings_tFA0423524032AD2C34E24C53548BE032F67FC6AF UnsafeUtilityInternal_ReadArrayElement_TisInternalMeshRendererSettings_tFA0423524032AD2C34E24C53548BE032F67FC6AF_m0FD7B9D7ECD3AD5A4D20DA6E6A0CF95AB3D75C46_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21 UnsafeUtilityInternal_ReadArrayElement_TisLightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21_m2B823F0822F76CA45530AD04A3D3DB110EC8259B_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 UnsafeUtilityInternal_ReadArrayElement_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_mDC2BC421E66DB6186E7ADB438406EB88CF637011_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960 UnsafeUtilityInternal_ReadArrayElement_TisModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960_m1967F25DC74B6E081724F2C2A8158CE6999A3F63_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C UnsafeUtilityInternal_ReadArrayElement_TisPlane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C_mD0A53DDAFDC425AE7EEA283E95C48E3A414A87FD_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 UnsafeUtilityInternal_ReadArrayElement_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m02B55D9C2BC9B83FDE111ACC6AC6826964D5E3D4_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RangeInt_tDFBE4FD13857C11F21F7C3DA6B60D05341B67268 UnsafeUtilityInternal_ReadArrayElement_TisRangeInt_tDFBE4FD13857C11F21F7C3DA6B60D05341B67268_mA0E6724F3B2E9E09250FBC5091626A5CF5A6FF93_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float UnsafeUtilityInternal_ReadArrayElement_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mC8BDFAFE242DB675D668D2942EFD7CE36006251C_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UEncroachingSegment_t3AE1B0B8E50020697D3FA3FFF0C86E406ABFA3C1 UnsafeUtilityInternal_ReadArrayElement_TisUEncroachingSegment_t3AE1B0B8E50020697D3FA3FFF0C86E406ABFA3C1_m8F5A17DAD42997B6D75E949B0FF9379B2D066CE2_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UEvent_t81CE84F34955D2A2DE962ADE28CDE659605FB2AC UnsafeUtilityInternal_ReadArrayElement_TisUEvent_t81CE84F34955D2A2DE962ADE28CDE659605FB2AC_mEE88732C7CB1E07F024B69DB93E5131352E8A1E7_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UHull_tBA3DC6A41F928298B0D924EDFE00150F307BA851 UnsafeUtilityInternal_ReadArrayElement_TisUHull_tBA3DC6A41F928298B0D924EDFE00150F307BA851_m8EB87859A6B1CDD9DD1729BB8913CB8985295847_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint16_t UnsafeUtilityInternal_ReadArrayElement_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m67997A9A0642E52B1CB9AD52C90FD98038221C0F_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t UnsafeUtilityInternal_ReadArrayElement_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mAA4A4AC11C7C0784A0566FAE86EFBAD08CF4126D_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t UnsafeUtilityInternal_ReadArrayElement_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mA5895D44428BCE7F38A3E30CA324F5E0E599364F_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UStar_tF8CA0D7A7A3197E68176CA173B07251554C7465D UnsafeUtilityInternal_ReadArrayElement_TisUStar_tF8CA0D7A7A3197E68176CA173B07251554C7465D_m11B8FD36241682A117B1BD6EC4B1F4ED78B49B47_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UTriangle_t6D4513C8A4054BEEC30F937F14BBE005BC4A141F UnsafeUtilityInternal_ReadArrayElement_TisUTriangle_t6D4513C8A4054BEEC30F937F14BBE005BC4A141F_mD9BEE07F15A62EDC899159691530AC27B6ABDAE2_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 UnsafeUtilityInternal_ReadArrayElement_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m726E59AE606BDAEEA7E8DD67B5F69FD00875153F_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 UnsafeUtilityInternal_ReadArrayElement_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m4E48372E1097232C60446DED043FEC5C7A61C4B0_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double2_t2124FB15A5BDCC0BD48B80116D4B24DC9DCA9D83 UnsafeUtilityInternal_ReadArrayElement_Tisdouble2_t2124FB15A5BDCC0BD48B80116D4B24DC9DCA9D83_m40CEC3B3B74322BA7691BA450694C03DC4A1D452_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5 UnsafeUtilityInternal_ReadArrayElement_Tisfloat2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5_mAA646CC2B25329E898077679928AB15DE9BC865E_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int2_tB123E869131C6102341F8F9AA01726E0E7C2768D UnsafeUtilityInternal_ReadArrayElement_Tisint2_tB123E869131C6102341F8F9AA01726E0E7C2768D_m331A9772A1384E1911C59CDE98F9366F81EED2C7_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int3_t18873F121F1EF24ECE875EAB01170B69E1B498C5 UnsafeUtilityInternal_ReadArrayElement_Tisint3_t18873F121F1EF24ECE875EAB01170B69E1B498C5_mBD52AD6E8736CB48656CFA0961D93E411266B81E_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int4_t6DC3FEACC0DD1EAE4D5B897188E8D669BC4DAB90 UnsafeUtilityInternal_ReadArrayElement_Tisint4_t6DC3FEACC0DD1EAE4D5B897188E8D669BC4DAB90_m776429375A9EF46AD949435543FDD0C5676070AC_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_ReadArrayElementWithStride_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m142239EC03EF551AAC70809189D5B14C59260A72_inline (void* ___0_source, int32_t ___1_index, int32_t ___2_stride, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisBatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D_m439E4115054F2F7F3DFE86DEAEF565B37F9DA51F_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_m1B3257CEE82ED08641AFCA4D9B2ACBC96222B922_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m485E79FA6794AD30B29C6414A85A867DF156E5E1_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m2DB960E4C25CE2F72A3A1ABC302E23F0963089F5_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B_m409346A2C7D4615BB703F2802A6B9E12650CDB39_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisCullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0_m445C79CB5CEFFE71D2530C3CACDBC4B8D3A9D0A9_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisEmbeddedLODBuffer_t6D75CECAC228D0710132158E77ACB46D0C43027B_mA1468D24A7B620A10E023979868C9D1EE2D5DE69_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisEntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8_mD1B0EBD0B43B19830ED5B0A121221D27AA0B963E_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisGPUDrivenMeshData_t0D53E18AECCB1ED48149AFD77C12CF1624340C32_mAC88D9A89F4AD39D5BDA8F3FF5419977CDCCC3E3_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisGPUDrivenSubMesh_t2D3B77E083A07816281294E54907E064B2A2A22B_m90E80C680B80CD82EB5839F5DDE33F22BFBF18D1_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m8EC54AD1BB1FFE52E59D872A1F83666DD9D381AA_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mA24CDBA02971DC06DEDE40B17E72F8C262B6B131_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisIntPtr_t_mF9218FE174B91F132731D032A744AFC048AFB932_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisInternalLODGroupSettings_t9F08C56422FEBE035004C6D96DE664DB1961F38D_m7042BFD95CFAA71CA1DD3DB939DB030B0656C6D2_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisInternalMeshLodRendererSettings_t2B499712F80597BFB45A4813CC139D1BEEDEBB73_m00E1BE18CB920FCCCBFE7C2C4A1BF8BA0A7EFECF_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisInternalMeshRendererSettings_tFA0423524032AD2C34E24C53548BE032F67FC6AF_mFB035E1C19B4E54280B4B9D660EDA3A8A086CAF6_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisLightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21_mF4E7699562D0DD8909029C23414C07C41E83166C_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_m310E3F9A8E091DFAB070D735691100178B15463B_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960_m4FA6D33FFCEC8031D4883ABCA5ED229D28E44D80_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisPlane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C_m289C662F3DEC8A9CACB14474D55B65B1E5E1AE84_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_mA10F583A957D150C530045E8E0C54DD2A4D96489_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisRangeInt_tDFBE4FD13857C11F21F7C3DA6B60D05341B67268_m462940FF70DE74B43CFAFE2670B4A652829BDF3F_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m2379B61902CFDAAAE7E5BE25FDA4BBBBF7E54273_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisUEncroachingSegment_t3AE1B0B8E50020697D3FA3FFF0C86E406ABFA3C1_m78BC20EBEDF9DDD29C261AACF9F19965B5A49C92_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisUEvent_t81CE84F34955D2A2DE962ADE28CDE659605FB2AC_mD7804F40606876E9729617E9761E42F9D6056B26_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisUHull_tBA3DC6A41F928298B0D924EDFE00150F307BA851_mDB23A7351A2DB7A69197EC17A28401C3A9B4DA98_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mB21F3357E1DB01146285E803CB68EE945ADA7149_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m483305F08D432A8FC41A6E11289383D1E2C3E8AE_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mAA2B8333B77A7410376516B6E13FCC02AEE6A5AC_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisUStar_tF8CA0D7A7A3197E68176CA173B07251554C7465D_m87DD2D062338C42E1537725895679ED703A237D3_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisUTriangle_t6D4513C8A4054BEEC30F937F14BBE005BC4A141F_m0E3277DA666E697D096F659128CBE7238C655CA3_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m297C8507511B4B7C587AF49B53D880021418C5CC_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m567C299D0E9EA26E8A3ADC4158D175D9F101BC1E_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_Tisdouble2_t2124FB15A5BDCC0BD48B80116D4B24DC9DCA9D83_m96D588AB3F164F56BB1DE77BC435342E9F1BD745_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_Tisfloat2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5_mE64EA17FB7FE71E52F389B33C2AE7F4894B63B16_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_Tisint2_tB123E869131C6102341F8F9AA01726E0E7C2768D_mB216CE24697733053C38D23575F516F72C0E7F06_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_Tisint3_t18873F121F1EF24ECE875EAB01170B69E1B498C5_m8C0D64D09B9A2F8238A614656203048B06759A6B_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_Tisint4_t6DC3FEACC0DD1EAE4D5B897188E8D669BC4DAB90_mA8C62CC9E230AC8C9856724F0AD3DB92EBABE192_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtilityInternal_WriteArrayElement_TisBatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D_m8F2F55BA88BD7D9AE44C0AEDE2832F7B5D1F35B6_inline (void* ___0_destination, int32_t ___1_index, BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D ___2_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtilityInternal_WriteArrayElement_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_m2A0F09E085DD77128506415E87841F78B28A6C54_inline (void* ___0_destination, int32_t ___1_index, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___2_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtilityInternal_WriteArrayElement_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m5BCA8D074309F3B46CEC7FD68ED40110FC26ADB7_inline (void* ___0_destination, int32_t ___1_index, uint8_t ___2_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtilityInternal_WriteArrayElement_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mD1BA031E3E1E75F3DE14D24A768757C9E12F51CD_inline (void* ___0_destination, int32_t ___1_index, Il2CppChar ___2_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtilityInternal_WriteArrayElement_TisContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B_mE39132565475093BAD090E92CA932991E46BC595_inline (void* ___0_destination, int32_t ___1_index, ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B ___2_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtilityInternal_WriteArrayElement_TisCullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0_m384FBBC6F8F5110A48E4143C7F675776EA47445F_inline (void* ___0_destination, int32_t ___1_index, CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0 ___2_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtilityInternal_WriteArrayElement_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_mC2A7BB5CE0978BC539FB52E5326DA5A704553463_inline (void* ___0_destination, int32_t ___1_index, double ___2_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtilityInternal_WriteArrayElement_TisEmbeddedLODBuffer_t6D75CECAC228D0710132158E77ACB46D0C43027B_m51B6E5CA111B53732375EAEACEAAA619F6649872_inline (void* ___0_destination, int32_t ___1_index, EmbeddedLODBuffer_t6D75CECAC228D0710132158E77ACB46D0C43027B ___2_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtilityInternal_WriteArrayElement_TisEntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8_m9C0FADCA718C9341E229CEE17C8FE4855AC72880_inline (void* ___0_destination, int32_t ___1_index, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___2_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtilityInternal_WriteArrayElement_TisGPUDrivenMeshData_t0D53E18AECCB1ED48149AFD77C12CF1624340C32_m8D30843628A1D5617028C57F54F533476754764A_inline (void* ___0_destination, int32_t ___1_index, GPUDrivenMeshData_t0D53E18AECCB1ED48149AFD77C12CF1624340C32 ___2_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtilityInternal_WriteArrayElement_TisGPUDrivenSubMesh_t2D3B77E083A07816281294E54907E064B2A2A22B_mD11C11FD5E761DB5DFA854AE4BAD7EC7255AE737_inline (void* ___0_destination, int32_t ___1_index, GPUDrivenSubMesh_t2D3B77E083A07816281294E54907E064B2A2A22B ___2_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtilityInternal_WriteArrayElement_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m98F5668334FA5D7DC5943C2EF4820057B8FA3AC8_inline (void* ___0_destination, int32_t ___1_index, int16_t ___2_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtilityInternal_WriteArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m6CE8AF6F42FA98657985C680DB85747DAC856E2F_inline (void* ___0_destination, int32_t ___1_index, int32_t ___2_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtilityInternal_WriteArrayElement_TisIntPtr_t_mD032891DCCD5A38294F51BAEEA8BFAA62B8557FB_inline (void* ___0_destination, int32_t ___1_index, intptr_t ___2_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtilityInternal_WriteArrayElement_TisInternalLODGroupSettings_t9F08C56422FEBE035004C6D96DE664DB1961F38D_m8A735DF8D46F26149043C87F203926540BC1E6B8_inline (void* ___0_destination, int32_t ___1_index, InternalLODGroupSettings_t9F08C56422FEBE035004C6D96DE664DB1961F38D ___2_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtilityInternal_WriteArrayElement_TisInternalMeshLodRendererSettings_t2B499712F80597BFB45A4813CC139D1BEEDEBB73_mD92C129429E118347DCE3E80F61ABED812BB3713_inline (void* ___0_destination, int32_t ___1_index, InternalMeshLodRendererSettings_t2B499712F80597BFB45A4813CC139D1BEEDEBB73 ___2_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtilityInternal_WriteArrayElement_TisInternalMeshRendererSettings_tFA0423524032AD2C34E24C53548BE032F67FC6AF_m7A4D40E228244C59345E45676D4CC8348B83617A_inline (void* ___0_destination, int32_t ___1_index, InternalMeshRendererSettings_tFA0423524032AD2C34E24C53548BE032F67FC6AF ___2_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtilityInternal_WriteArrayElement_TisLightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21_m214EFE079E3D95383C08945E8BAFA5E3C3FAA190_inline (void* ___0_destination, int32_t ___1_index, LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21 ___2_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtilityInternal_WriteArrayElement_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_mA93DE94079CF55B4D3FB32AE0780DF796C3CCA47_inline (void* ___0_destination, int32_t ___1_index, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___2_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtilityInternal_WriteArrayElement_TisModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960_m6B028924EA3CC36810A213B16F58DE31DE31687E_inline (void* ___0_destination, int32_t ___1_index, ModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960 ___2_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtilityInternal_WriteArrayElement_TisPlane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C_mBE119E8ABAF3D83B9A393B7004C208DF31E4901C_inline (void* ___0_destination, int32_t ___1_index, Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C ___2_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtilityInternal_WriteArrayElement_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m9F92E74FB0AAD0FC40CC4DE76AF4BBA2C47C88D6_inline (void* ___0_destination, int32_t ___1_index, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___2_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtilityInternal_WriteArrayElement_TisRangeInt_tDFBE4FD13857C11F21F7C3DA6B60D05341B67268_m8A51075F082D2E4A1FB053EA92EB0FC37CAE35EA_inline (void* ___0_destination, int32_t ___1_index, RangeInt_tDFBE4FD13857C11F21F7C3DA6B60D05341B67268 ___2_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtilityInternal_WriteArrayElement_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7871DE4308B379F2F32315380DA04C05F11DA13F_inline (void* ___0_destination, int32_t ___1_index, float ___2_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtilityInternal_WriteArrayElement_TisUEncroachingSegment_t3AE1B0B8E50020697D3FA3FFF0C86E406ABFA3C1_mE2BF625B742B08C6B1C2B768BD2C6B56E8FCF9FA_inline (void* ___0_destination, int32_t ___1_index, UEncroachingSegment_t3AE1B0B8E50020697D3FA3FFF0C86E406ABFA3C1 ___2_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtilityInternal_WriteArrayElement_TisUEvent_t81CE84F34955D2A2DE962ADE28CDE659605FB2AC_m2FBE2FA3BBCE3FB77BD4AE0019762C8453B4C17B_inline (void* ___0_destination, int32_t ___1_index, UEvent_t81CE84F34955D2A2DE962ADE28CDE659605FB2AC ___2_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtilityInternal_WriteArrayElement_TisUHull_tBA3DC6A41F928298B0D924EDFE00150F307BA851_m80FE70456505C6177FDF18C114A5896234C5A46A_inline (void* ___0_destination, int32_t ___1_index, UHull_tBA3DC6A41F928298B0D924EDFE00150F307BA851 ___2_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtilityInternal_WriteArrayElement_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m8096FCC44AAECDAC8F7011A27B6D4B6745A539CE_inline (void* ___0_destination, int32_t ___1_index, uint16_t ___2_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtilityInternal_WriteArrayElement_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m2A3A6B90150B69BBDEE5319C3CE02AF8B872B64B_inline (void* ___0_destination, int32_t ___1_index, uint32_t ___2_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtilityInternal_WriteArrayElement_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mC71868C665A692778D508E69E8AF1A631E0CD348_inline (void* ___0_destination, int32_t ___1_index, uint64_t ___2_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtilityInternal_WriteArrayElement_TisUStar_tF8CA0D7A7A3197E68176CA173B07251554C7465D_m5EA80C1639D238E594564D9B622DF4CCE1141D4B_inline (void* ___0_destination, int32_t ___1_index, UStar_tF8CA0D7A7A3197E68176CA173B07251554C7465D ___2_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtilityInternal_WriteArrayElement_TisUTriangle_t6D4513C8A4054BEEC30F937F14BBE005BC4A141F_m6A69EFB7BEE099EB16798F6EA62AC3C8612E49D0_inline (void* ___0_destination, int32_t ___1_index, UTriangle_t6D4513C8A4054BEEC30F937F14BBE005BC4A141F ___2_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtilityInternal_WriteArrayElement_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m4DC28ACC65CD91D06E733BEA0BC919D23DF3D7E4_inline (void* ___0_destination, int32_t ___1_index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___2_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtilityInternal_WriteArrayElement_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mA724E762E40FA0C9F59E22D26CD7760418780D94_inline (void* ___0_destination, int32_t ___1_index, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___2_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtilityInternal_WriteArrayElement_Tisdouble2_t2124FB15A5BDCC0BD48B80116D4B24DC9DCA9D83_mF7835C7C0CCCC6506483D47D9F965AE133A2580A_inline (void* ___0_destination, int32_t ___1_index, double2_t2124FB15A5BDCC0BD48B80116D4B24DC9DCA9D83 ___2_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtilityInternal_WriteArrayElement_Tisfloat2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5_m394E812F3E02FCD362EB8DCBF0A7D112DBBE9DA3_inline (void* ___0_destination, int32_t ___1_index, float2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5 ___2_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtilityInternal_WriteArrayElement_Tisint2_tB123E869131C6102341F8F9AA01726E0E7C2768D_mE5E734E01AED08F1ED47485C1721B5B1331B0A58_inline (void* ___0_destination, int32_t ___1_index, int2_tB123E869131C6102341F8F9AA01726E0E7C2768D ___2_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtilityInternal_WriteArrayElement_Tisint3_t18873F121F1EF24ECE875EAB01170B69E1B498C5_m3A3B9DFD873633E9078206152E40D232B1B0F8D2_inline (void* ___0_destination, int32_t ___1_index, int3_t18873F121F1EF24ECE875EAB01170B69E1B498C5 ___2_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtilityInternal_WriteArrayElement_Tisint4_t6DC3FEACC0DD1EAE4D5B897188E8D669BC4DAB90_mBFAF687EB944C031EFE295967D340706BA7A8F57_inline (void* ___0_destination, int32_t ___1_index, int4_t6DC3FEACC0DD1EAE4D5B897188E8D669BC4DAB90 ___2_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtilityInternal_WriteArrayElementWithStride_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m46E20F2BBF8564E1BC4A202FE67CCEC245A13E11_inline (void* ___0_destination, int32_t ___1_index, int32_t ___2_stride, int32_t ___3_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisAlignOfHelper_1_tBEA2F557D94117D6B5CA3D54DEA10F7A2F5AF996_mC0091F1B9C9C5F6FE2EF40A40286F792951D680B_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisAlignOfHelper_1_t34CCC6CF432525FDD94891D4DAFB9DB74F9AF3E9_m8E01215ECE32A86C1F6BEBD206783D5863BE3102_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisAlignOfHelper_1_tAF795AF837E3C37401B92C7483D74A4E5145DB4D_m8CB43E8118CC0E65E6E8130381DEB11701F21848_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisAlignOfHelper_1_tB21BA45542E8060FB85BA02002482499EBFA00A2_mA1D5B3481244A0872D4C4419C5C507BC5C9CA1A4_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisAlignOfHelper_1_t08A14D9ACB4D26ACA71BCA57DAB866764B883825_m234350549A466D387273283CD034377BA980C785_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisAlignOfHelper_1_tF6B6CAC1AFD67E6448C9B177EA1734D57E3BCDA2_mF17960322FD73F94C5B1EA66A15A812107E8E26C_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisAlignOfHelper_1_tFC537E4E3FE3F7962CBC5F219276522C16824ACF_m6ED1AB2C11E9DEA8670BFFABDB8A999E66D4460D_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisAlignOfHelper_1_tCD4B08DBB915013B12E50DA43CE11B02B0D135DD_m5CB9D53CC2151EBA31EE911F86BF64236024C41B_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisAlignOfHelper_1_t398568B8BA5FC2BA68E01C861AA1BEDC4750E61D_m5F14358FA8512CD3007A89FBBF226B14ECA4C00B_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisAlignOfHelper_1_t9B8325E941D53AE21ECA21E2996411A52D0F8663_m70AC25EBFF484644D693343C24F146A8528614C8_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisAlignOfHelper_1_t2B1B6F8C95D259E66B253A1C059AE8D3365B528E_m9653BC5706AAE6334C692185FFA0519BD7824CB3_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisAlignOfHelper_1_t676424B8757032427D7761BC732079DC7512D8AE_mB243DC326B2D814D1A62FDABCC2F2AA541A8C895_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisAlignOfHelper_1_t1C2506D8F2F53BF0A585917F05CD8BC880EBB752_m6197C4317CE4E01732509D53E08172FEA65ED04E_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisAlignOfHelper_1_tCFC8A208D36EA414B14215D004A770AEC0DB8BA2_m88DBA349C0FF85634217C1CB08E8DB162E461E71_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisAlignOfHelper_1_t1A20691B0774E0EFBEAD966FB0B480A553DCF42E_m2B08131E6C67851405962CD6DF12CF465931B858_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisAlignOfHelper_1_t6F2F300ADF773C90F661FF403B84D167EB793773_m69F6C16E7F867D1C227B7289CE495CC095EC7AD0_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisAlignOfHelper_1_tF9C3457088E3B293794AA641A2261DD4B6D5B57A_m58FF4964D2CAEB4EFC416B1E0FDFD6E9705F3143_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisAlignOfHelper_1_t6C24EA77B111E6877D279F01810C1D4E13534301_m65D985DC623EBE012CF7CAE94EF2DFEF1B8A3243_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisAlignOfHelper_1_tF3D321A7435452B0B749AF58D2CF8AB1865BC52C_m1CAC82495552B9A4A605EEA04EA097B8AF87C8C2_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisAlignOfHelper_1_t4257D6924487B14B176AB4C639F1251F2E4ED1C6_mDDF1DABCBD0F4009518CE893AD84E6078D170199_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisAlignOfHelper_1_tE6A7C0BC2AB9B74FA79F8449B8FA1BC94A474BC4_m19212FA6DC039BBDFD64B28E598F6264D54DB691_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisAlignOfHelper_1_t151A1BD8ECCDCBCF3185238615804E396C3B07A5_mC4112DF120EBF605C8F77839E842177AF068D44E_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisAlignOfHelper_1_t25880EEE885729199077AC19774C8BE13323D4B4_m19CE06B2A77B620A1DE800E56AFEE3A5616E99E6_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisAlignOfHelper_1_t3FE2545879EC19D84F399DE73EA83AAEDEA14C9D_m22F628ADD6E12980B394B9237C61AB0C95E1EC1C_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisAlignOfHelper_1_t054F2568D7C1097239A28CF25D80D8353E29BB37_m120CCD2A94A7B51A2631C5630A9E505F1DDB1CD7_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisAlignOfHelper_1_t0280929E6B4134EE85E97F8BFC283CFB4C7BC056_m24D80B10C7527E88ECD7E5C10731C7F1663E2C27_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisAlignOfHelper_1_t70E1FB13BE93757804A731D115FA219AE664F9B9_mE690DD75A3C952CEDEB71F13B96E603904A60567_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisAlignOfHelper_1_tF3C6E1F1F032602FD9777BBE4466632711C12DC3_m936B8B899C03B9C80AA39CD231B892274340136D_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisAlignOfHelper_1_tE21040F72E90527C319FF9B07B398E23DF95BE2E_m2D3BC72BBF45866A72C7ADF31F40AEFC56BBD498_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisAlignOfHelper_1_t9E9A73E6B25DCBB1356ABAF5D5F64CEB912639E5_m6333413607F97523DA83C70DA244CCE8E0B50D8E_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisAlignOfHelper_1_tE0DC7EEADD8DE994397C46E4B7F6E4EC9FE4F669_m50F19243DCF7F556C625C9C7048E8BA7FDA09C6E_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisAlignOfHelper_1_tA7BAD341B87833F98272549F84315FE63B02CC5A_m034AE7678181AD29323E752CCA82EDCFE2E3CAA0_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisAlignOfHelper_1_t26C526A4040EF3870B74BFD09D3768388C3BD773_mAA11ED5EDA264AB3B48690198F615B38D00FE294_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisAlignOfHelper_1_tF31F09BEF44353E98923E6193CEADA52B8ED43D4_m29E0C0863AA5A2364C1F00FAEAD6CCEC94DA70FF_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisAlignOfHelper_1_t0C97FDE41871CAD34CA643C258038DE7C30AA460_mDA796E09ECCAD2EAEF6F0A2C1773617A9FBA6E6E_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisAlignOfHelper_1_t6ADF810505F028EA6EBCA5B664B68A8372696F9C_mAA91F87ABC1C69B33E87DD76C50A480D237F8B9A_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisAlignOfHelper_1_t5DC854A29E0F5E52BA538EDE0BFDED0CC3F2B396_mB59C152F5426670D374DC720745E2F06FAADE0CA_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisAlignOfHelper_1_t3815CFB9721539E18DAC181E8DB449C4D3C731E3_m35ABFDD366C53EC12FEB57C526087B620B8844C2_inline (const RuntimeMethod* method) ;
inline Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A Vector_1_op_Explicit_m5E44D3923BF92F437AEC34CDE0CBD6130883B0B7 (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 ___0_value, const RuntimeMethod* method)
{
	return ((  Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A (*) (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489, const RuntimeMethod*))Vector_1_op_Explicit_mEFC640DAE334AF4ED540F354F6FCDF25F74E95A2_fshared)(___0_value, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 Vector_1_Equals_m6F913845CB1E8A1A753B3C187A8EB840C36F5ADF_inline (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 ___0_left, Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 ___1_right, const RuntimeMethod* method) ;
inline intptr_t MarshalledUnityObject_MarshalNotNull_TisIl2CppSharedGenericObject_mCE897EC9A79983B4B1E6E2C8342452256309044A_inline (Il2CppSharedGenericObject* ___0_obj, const RuntimeMethod* method)
{
	return ((  intptr_t (*) (Il2CppSharedGenericObject*, const RuntimeMethod*))MarshalledUnityObject_MarshalNotNull_TisIl2CppSharedGenericObject_mCE897EC9A79983B4B1E6E2C8342452256309044A_gshared_inline)(___0_obj, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271_inline (intptr_t ___0_value1, intptr_t ___1_value2, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC MarshalledUnityObject_FromIntPtrUnsafe_m1C5AE0FB7CD1978A8387B0081DB909BAAC2324C3_inline (intptr_t ___0_gcHandle, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* GCHandle_get_Target_m481F9508DA5E384D33CD1F4450060DC56BBD4CD5_inline (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* UnsafeUtility_As_TisIntPtr_t_TisGCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC_mD94F597CB91662C823496DA9FA9A7CF908734A78_inline (intptr_t* ___0_from, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool GCHandle_get_IsAllocated_m241908103D8D867E11CCAB73C918729825E86843_inline (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___0_message, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool GCHandle_CanDereferenceHandle_mAAAC42D1268CEF3FDD040A3D1574773D08140579_inline (intptr_t ___0_handle, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* GCHandle_GetRef_mAC7E58E62417209DC41C99F66BA70F0C3AA18DA8_inline (intptr_t ___0_handle, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GCHandle_GetTarget_mE0AF851834410E2AEA6285B2497751570236C794 (intptr_t ___0_handle, const RuntimeMethod* method) ;
inline void List_1_AddWithResize_mCC24A812DFC30C3DE2230E3C8EE705871C1DFF81 (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* __this, Il2CppSharedGenericObject* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E*, Il2CppSharedGenericObject*, const RuntimeMethod*))List_1_AddWithResize_mCC24A812DFC30C3DE2230E3C8EE705871C1DFF81_gshared)(__this, ___0_item, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector_get_IsHardwareAccelerated_m783509258751EBED64CBD9F387EC1BB4A15088AA (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector_1_get_Count_m6DF09E4443FC90521D33C892BE69D32B04D85A15_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t Vector_1_get_Item_m248FFF521980A3A43D237B8C5CA2ABD5C62D4D27 (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector_1_ScalarEquals_m4E13E30219B0D2AADB58AD6E5CB2B54B9FCBFAAE_inline (uint16_t ___0_left, uint16_t ___1_right, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint16_t ConstantHelper_GetUInt16WithAllBitsSet_mD3E13D933A06059499F0E0CBE6798D72D175464A_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector_1__ctor_m46ADEA122EFBA7AEF487716891A8ADD284FD12E3 (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489* __this, void* ___0_dataPointer, const RuntimeMethod* method) ;
inline void Vector_1__ctor_m48CD7847B9597F3193C9C0BA97ED64E276F4340A (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489* __this, Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* ___0_existingRegister, const RuntimeMethod* method)
{
	((  void (*) (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489*, Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*, const RuntimeMethod*))Vector_1__ctor_mF674294C34FEB07FB44E694358BDA181F564B674_fshared)(__this, ___0_existingRegister, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B_inline (intptr_t ___0_value1, intptr_t ___1_value2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisIl2CppFullySharedGenericStruct_m6920C14D4E38FAB84BD2B5F148CE70DF7F224F52_fshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18));
		void* L_0 = ___0_dataPointer;
		(&V_0)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_0)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_0)->___m_AllocatorLabel = L_2;
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeArrayUnsafeUtility_GetUnsafeBufferPointerWithoutChecks_TisIl2CppFullySharedGenericStruct_m0BC1578CE50C348FF9B616BD602021A69F647803_fshared (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_nativeArray, const RuntimeMethod* method) 
{
	{
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_0 = ___0_nativeArray;
		void* L_1 = L_0.___m_Buffer;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeArrayUnsafeUtility_GetUnsafePtr_TisIl2CppFullySharedGenericStruct_m4AB802D5B1B296D0F976C1E7631699B0C4A4D00F_fshared (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_nativeArray, const RuntimeMethod* method) 
{
	{
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_0 = ___0_nativeArray;
		void* L_1 = L_0.___m_Buffer;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisIl2CppFullySharedGenericStruct_m13C618FD69BBAB7D8C77632BF8A9116FCD17D234_fshared (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_nativeArray, const RuntimeMethod* method) 
{
	{
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_0 = ___0_nativeArray;
		void* L_1 = L_0.___m_Buffer;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* OnceInScope_OnceIn_TisIl2CppFullySharedGenericAny_m13092BD953F8DD37AB75320678FF09A4834DA6AC_fshared (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_todo, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	CHECKED_LOCAL(Type_t_StaticInit);
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = ___0_todo;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3;
		L_3 = OnceInScope_OnceIn_m4F8C9FC123BFDFEE9BEAFA9EDB8F4AB95E83C813(L_0, L_2, NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderPipeline_InternalProcessRenderRequests_TisIl2CppSharedGenericObject_mF9BCD7D64842DB2984FC928350167166DFED0A05_gshared (RenderPipeline_t3AF1E2046D27ABCEBA2279770AADA9F531073E69* __this, ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36 ___0_context, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___1_camera, Il2CppSharedGenericObject* ___2_renderRequest, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		bool L_0;
		L_0 = RenderPipeline_get_disposed_mF0D4B88DF44249E0FC2371697B913DD5A81B3850_inline(__this, NULL);
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		String_t* L_1;
		L_1 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBB994086C18AA022E5A2DA0F304A8D5119EDD397)), __this, NULL);
		ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB* L_2 = (ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB_il2cpp_TypeInfo_var)));
		ObjectDisposedException__ctor_mB2C8582279AF3F0C1CF9AA52DA7331BF848DFD48(L_2, L_1, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0019:
	{
		ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36 L_3 = ___0_context;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_4 = ___1_camera;
		Il2CppSharedGenericObject* L_5 = ___2_renderRequest;
		GenericVirtualActionInvoker3< ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184*, Il2CppSharedGenericObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 1), __this, L_3, L_4, L_5);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderPipeline_InternalProcessRenderRequests_TisIl2CppFullySharedGenericAny_m1B5F349620E1AF2FD25B80C942788B44527A5ECB_fshared (RenderPipeline_t3AF1E2046D27ABCEBA2279770AADA9F531073E69* __this, ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36 ___0_context, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___1_camera, Il2CppFullySharedGenericAny ___2_renderRequest, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_RequestData_tFFF859BCA58727F08590F65886AC454D579DFF08 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	const Il2CppFullySharedGenericAny L_5 = alloca(SizeOf_RequestData_tFFF859BCA58727F08590F65886AC454D579DFF08);
	{
		bool L_0;
		L_0 = RenderPipeline_get_disposed_mF0D4B88DF44249E0FC2371697B913DD5A81B3850_inline(__this, NULL);
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		String_t* L_1;
		L_1 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBB994086C18AA022E5A2DA0F304A8D5119EDD397)), __this, NULL);
		ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB* L_2 = (ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB_il2cpp_TypeInfo_var)));
		ObjectDisposedException__ctor_mB2C8582279AF3F0C1CF9AA52DA7331BF848DFD48(L_2, L_1, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0019:
	{
		ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36 L_3 = ___0_context;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_4 = ___1_camera;
		il2cpp_codegen_memcpy(L_5, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___2_renderRequest : &___2_renderRequest), SizeOf_RequestData_tFFF859BCA58727F08590F65886AC454D579DFF08);
		GenericVirtualActionInvoker3Invoker< ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184*, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 1), __this, L_3, L_4, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? L_5: *(void**)L_5));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderPipeline_ProcessRenderRequests_TisIl2CppFullySharedGenericAny_mE7D37ECCF34E4A3D01A44EF6DDAD7919497594F3_fshared (RenderPipeline_t3AF1E2046D27ABCEBA2279770AADA9F531073E69* __this, ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36 ___0_context, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___1_camera, Il2CppFullySharedGenericAny ___2_renderRequest, const RuntimeMethod* method) 
{
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RenderPipelineGlobalSettings_GetSettingsImplementingInterface_TisIl2CppSharedGenericObject_m15AEF16039E22243F9434CF868C1406E517B107A_gshared (RenderPipelineGlobalSettings_t3F883EA6174C636143F71211A146A0B1D9E76000* __this, List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E** ___0_settings, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	Il2CppSharedGenericObject* V_1 = NULL;
	{
		List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E** L_0 = ___0_settings;
		List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* L_1 = (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 0));
		List_1__ctor_m7378BA5FBCA1E88080985FB810820B3F47DAD54C(L_1, il2cpp_rgctx_method(method->rgctx_data, 1));
		*(((RuntimeObject**)L_0)) = ((RuntimeObject*)L_1);
		Il2CppCodeGenWriteBarrier((void**)((RuntimeObject**)L_0), (void*)((RuntimeObject*)L_1));
		List_1_t9197976D9CD257810C9C417B3050A6C49D652F8D* L_2;
		L_2 = VirtualFuncInvoker0< List_1_t9197976D9CD257810C9C417B3050A6C49D652F8D* >::Invoke(6, __this);
		if (L_2)
		{
			goto IL_0011;
		}
	}
	{
		return (bool)0;
	}

IL_0011:
	{
		V_0 = 0;
		goto IL_0040;
	}

IL_0015:
	{
		List_1_t9197976D9CD257810C9C417B3050A6C49D652F8D* L_3;
		L_3 = VirtualFuncInvoker0< List_1_t9197976D9CD257810C9C417B3050A6C49D652F8D* >::Invoke(6, __this);
		int32_t L_4 = V_0;
		RuntimeObject* L_5;
		L_5 = List_1_get_Item_m10705371E501C883FCF3DF007784EEBF1F0066DD(L_3, L_4, NULL);
		V_1 = ((Il2CppSharedGenericObject*)IsInst((RuntimeObject*)L_5, il2cpp_rgctx_data(method->rgctx_data, 2)));
		Il2CppSharedGenericObject* L_6 = V_1;
		if (!L_6)
		{
			goto IL_003c;
		}
	}
	{
		List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E** L_7 = ___0_settings;
		List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* L_8 = *(L_7);
		Il2CppSharedGenericObject* L_9 = V_1;
		List_1_Add_m0CE6E39234ED33F5195AABC8029D06D4756C75C1_inline(L_8, L_9, il2cpp_rgctx_method(method->rgctx_data, 3));
	}

IL_003c:
	{
		int32_t L_10 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0040:
	{
		int32_t L_11 = V_0;
		List_1_t9197976D9CD257810C9C417B3050A6C49D652F8D* L_12;
		L_12 = VirtualFuncInvoker0< List_1_t9197976D9CD257810C9C417B3050A6C49D652F8D* >::Invoke(6, __this);
		int32_t L_13;
		L_13 = List_1_get_Count_m9ED68C1A087E3F8772FD76CC5C3B7337232A4F91_inline(L_12, NULL);
		if ((((int32_t)L_11) < ((int32_t)L_13)))
		{
			goto IL_0015;
		}
	}
	{
		List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E** L_14 = ___0_settings;
		List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* L_15 = *(L_14);
		int32_t L_16;
		L_16 = List_1_get_Count_m9832942FE310479E64D9D0D23F29C65305BE1622_inline(L_15, NULL);
		return (bool)((((int32_t)L_16) > ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RenderPipelineGlobalSettings_TryGetFirstSettingsImplementingInterface_TisIl2CppSharedGenericObject_m5DB4B2F1501562E08C66AAB54DF02939319F9DB7_gshared (RenderPipelineGlobalSettings_t3F883EA6174C636143F71211A146A0B1D9E76000* __this, Il2CppSharedGenericObject** ___0_settings, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	Il2CppSharedGenericObject* V_1 = NULL;
	{
		Il2CppSharedGenericObject** L_0 = ___0_settings;
		il2cpp_codegen_initobj(L_0, sizeof(Il2CppSharedGenericObject*));
		List_1_t9197976D9CD257810C9C417B3050A6C49D652F8D* L_1;
		L_1 = VirtualFuncInvoker0< List_1_t9197976D9CD257810C9C417B3050A6C49D652F8D* >::Invoke(6, __this);
		if (L_1)
		{
			goto IL_0011;
		}
	}
	{
		return (bool)0;
	}

IL_0011:
	{
		V_0 = 0;
		goto IL_0041;
	}

IL_0015:
	{
		List_1_t9197976D9CD257810C9C417B3050A6C49D652F8D* L_2;
		L_2 = VirtualFuncInvoker0< List_1_t9197976D9CD257810C9C417B3050A6C49D652F8D* >::Invoke(6, __this);
		int32_t L_3 = V_0;
		RuntimeObject* L_4;
		L_4 = List_1_get_Item_m10705371E501C883FCF3DF007784EEBF1F0066DD(L_2, L_3, NULL);
		V_1 = ((Il2CppSharedGenericObject*)IsInst((RuntimeObject*)L_4, il2cpp_rgctx_data(method->rgctx_data, 0)));
		Il2CppSharedGenericObject* L_5 = V_1;
		if (!L_5)
		{
			goto IL_003d;
		}
	}
	{
		Il2CppSharedGenericObject** L_6 = ___0_settings;
		Il2CppSharedGenericObject* L_7 = V_1;
		*(Il2CppSharedGenericObject**)L_6 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(Il2CppSharedGenericObject**)L_6, (void*)L_7);
		return (bool)1;
	}

IL_003d:
	{
		int32_t L_8 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_0041:
	{
		int32_t L_9 = V_0;
		List_1_t9197976D9CD257810C9C417B3050A6C49D652F8D* L_10;
		L_10 = VirtualFuncInvoker0< List_1_t9197976D9CD257810C9C417B3050A6C49D652F8D* >::Invoke(6, __this);
		int32_t L_11;
		L_11 = List_1_get_Count_m9ED68C1A087E3F8772FD76CC5C3B7337232A4F91_inline(L_10, NULL);
		if ((((int32_t)L_9) < ((int32_t)L_11)))
		{
			goto IL_0015;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* Resources_ConvertObjects_TisIl2CppSharedGenericObject_m9BE1F255F2CB43F5F4EC6B3E4A12E88D5388D6F2_gshared (ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A* ___0_rawObjects, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* V_0 = NULL;
	int32_t V_1 = 0;
	{
		ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A* L_0 = ___0_rawObjects;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979*)NULL;
	}

IL_0005:
	{
		ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A* L_1 = ___0_rawObjects;
		int32_t L_2 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_1)->max_length),NULL));
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_3 = (__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979*)(__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979*)SZArrayNew(il2cpp_rgctx_data(method->rgctx_data, 0), (uint32_t)L_2);
		V_0 = L_3;
		V_1 = 0;
		goto IL_0025;
	}

IL_0012:
	{
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_4 = V_0;
		int32_t L_5 = V_1;
		ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A* L_6 = ___0_rawObjects;
		int32_t L_7 = V_1;
		int32_t L_8 = L_7;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_9 = (L_6)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_8));
		(L_4)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5), (Il2CppSharedGenericObject*)((Il2CppSharedGenericObject*)Castclass((RuntimeObject*)L_9, il2cpp_rgctx_data(method->rgctx_data, 1))));
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0025:
	{
		int32_t L_11 = V_1;
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_12 = V_0;
		int32_t L_13 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_12)->max_length),NULL));
		if ((((int32_t)L_11) < ((int32_t)L_13)))
		{
			goto IL_0012;
		}
	}
	{
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_14 = V_0;
		return L_14;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* Resources_FindObjectsOfTypeAll_TisIl2CppSharedGenericObject_m7EC7BBE589A945E1EC23527D09B350EC60660D7F_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	CHECKED_LOCAL(Type_t_StaticInit);
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A* L_2;
		L_2 = Resources_FindObjectsOfTypeAll_mECAB6322D6A605B60AF0598F6D81F169ACE74C00(L_1, NULL);
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_3;
		L_3 = Resources_ConvertObjects_TisIl2CppSharedGenericObject_m9BE1F255F2CB43F5F4EC6B3E4A12E88D5388D6F2(L_2, il2cpp_rgctx_method(method->rgctx_data, 2));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* Resources_Load_TisIl2CppSharedGenericObject_m15A7702F800FD0DA993507C33D68862214337C37_gshared (String_t* ___0_path, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	CHECKED_LOCAL(Type_t_StaticInit);
	{
		String_t* L_0 = ___0_path;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_3;
		L_3 = Resources_Load_m6CD8FBBCCFFF22179FA0E7B1806B888103008D33(L_0, L_2, NULL);
		return ((Il2CppSharedGenericObject*)Castclass((RuntimeObject*)L_3, il2cpp_rgctx_data(method->rgctx_data, 1)));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisIl2CppFullySharedGenericAny_m36C68BC159395DAE262FAD5EEFC56958D5BCD40C_fshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	CHECKED_LOCAL(Type_t_StaticInit);
	{
		bool L_0 = il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1));
		if (!L_0)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		bool L_3;
		L_3 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_2, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_3;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RuntimePropertyInfo_GetterAdapterFrame_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mF0611EDC41DA8F4F03BD135DCF20E262EA42D3E3_fshared (Getter_2_t1C9E25FA1D95753B6B5480577F043E5EF85CC0D8* ___0_getter, RuntimeObject* ___1_obj, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_tB9C622C2276378AE187F973C01294BCFE46CCAD2 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_T_tB9C622C2276378AE187F973C01294BCFE46CCAD2);
	const uint32_t SizeOf_R_t57047839DA9E6A4467E590A6122C95EDC2E901A0 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_R_t57047839DA9E6A4467E590A6122C95EDC2E901A0);
	{
		Getter_2_t1C9E25FA1D95753B6B5480577F043E5EF85CC0D8* L_0 = ___0_getter;
		RuntimeObject* L_1 = ___1_obj;
		void* L_3 = UnBox_Any(L_1, il2cpp_rgctx_data(method->rgctx_data, 0), L_2);
		InvokerActionInvoker2< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_3)): *(void**)(((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_3))), (Il2CppFullySharedGenericAny*)L_4);
		RuntimeObject* L_5 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), L_4);
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RuntimePropertyInfo_StaticGetterAdapterFrame_TisIl2CppFullySharedGenericAny_mE4B36707DB7E08FCD6D3A3799C958AB637E8AE64_fshared (StaticGetter_1_t5C0B26D3ABAE6F5762F45AD85D572BDF5BDB1302* ___0_getter, RuntimeObject* ___1_obj, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_R_t054D6BF792B1CE1FACA58B447C844553D06992DF = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_R_t054D6BF792B1CE1FACA58B447C844553D06992DF);
	{
		StaticGetter_1_t5C0B26D3ABAE6F5762F45AD85D572BDF5BDB1302* L_0 = ___0_getter;
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), L_0, (Il2CppFullySharedGenericAny*)L_1);
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(method->rgctx_data, 1), L_1);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScopeTransitionHelper_ExecuteMethodsInOrder_TisIl2CppSharedGenericObject_m61D1AB68BC0ECD2A1F87A5DEAE711D9E6B2889B3_gshared (ScopeTransitionHelper_t069C5DE337C0C8F615857F4D731C5CBE3B0F4347* __this, ReadOnlyAssemblyList_t1BC728228128055A6CB84846AEC1D2F3916FE36B* ___0_assemblies, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	CHECKED_LOCAL(Type_t_StaticInit);
	RuntimeObject* V_0 = NULL;
	RuntimeObject* G_B2_0 = NULL;
	Type_t* G_B2_1 = NULL;
	ScopeTransitionHelper_t069C5DE337C0C8F615857F4D731C5CBE3B0F4347* G_B2_2 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	Type_t* G_B1_1 = NULL;
	ScopeTransitionHelper_t069C5DE337C0C8F615857F4D731C5CBE3B0F4347* G_B1_2 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		ReadOnlyAssemblyList_t1BC728228128055A6CB84846AEC1D2F3916FE36B* L_2 = ___0_assemblies;
		V_0 = L_2;
		RuntimeObject* L_3 = V_0;
		RuntimeObject* L_4 = L_3;
		if (L_4)
		{
			G_B2_0 = L_4;
			G_B2_1 = L_1;
			G_B2_2 = __this;
			goto IL_0018;
		}
		G_B1_0 = L_4;
		G_B1_1 = L_1;
		G_B1_2 = __this;
	}
	{
		RuntimeObject* L_5;
		L_5 = ScopeTransitionHelper_get_AllAssemblies_mBD1DC2D507C344159A521F20F3DBF2A440BF403D_inline(__this, NULL);
		G_B2_0 = L_5;
		G_B2_1 = G_B1_1;
		G_B2_2 = G_B1_2;
	}

IL_0018:
	{
		ScopeTransitionHelper_ExecuteMethodsInOrder_m5176334C7A18A675F55594FDBFACACF17480137A(G_B2_2, G_B2_1, G_B2_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScopeTransitionHelper_ExecuteMethodsInOrder_TisIl2CppFullySharedGenericAny_m11BC4825ADAE27692EAF62AD6AAFE475C1CBADDD_fshared (ScopeTransitionHelper_t069C5DE337C0C8F615857F4D731C5CBE3B0F4347* __this, ReadOnlyAssemblyList_t1BC728228128055A6CB84846AEC1D2F3916FE36B* ___0_assemblies, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	CHECKED_LOCAL(Type_t_StaticInit);
	RuntimeObject* V_0 = NULL;
	RuntimeObject* G_B2_0 = NULL;
	Type_t* G_B2_1 = NULL;
	ScopeTransitionHelper_t069C5DE337C0C8F615857F4D731C5CBE3B0F4347* G_B2_2 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	Type_t* G_B1_1 = NULL;
	ScopeTransitionHelper_t069C5DE337C0C8F615857F4D731C5CBE3B0F4347* G_B1_2 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		ReadOnlyAssemblyList_t1BC728228128055A6CB84846AEC1D2F3916FE36B* L_2 = ___0_assemblies;
		V_0 = L_2;
		RuntimeObject* L_3 = V_0;
		RuntimeObject* L_4 = L_3;
		if (L_4)
		{
			G_B2_0 = L_4;
			G_B2_1 = L_1;
			G_B2_2 = __this;
			goto IL_0018;
		}
		G_B1_0 = L_4;
		G_B1_1 = L_1;
		G_B1_2 = __this;
	}
	{
		RuntimeObject* L_5;
		L_5 = ScopeTransitionHelper_get_AllAssemblies_mBD1DC2D507C344159A521F20F3DBF2A440BF403D_inline(__this, NULL);
		G_B2_0 = L_5;
		G_B2_1 = G_B1_1;
		G_B2_2 = G_B1_2;
	}

IL_0018:
	{
		ScopeTransitionHelper_ExecuteMethodsInOrder_m5176334C7A18A675F55594FDBFACACF17480137A(G_B2_2, G_B2_1, G_B2_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScopeTransitionHelper_ExecuteMethodsInReverseOrder_TisIl2CppSharedGenericObject_m5283FE6DDE4FC69CA2464C012E82BCF92D8F9094_gshared (ScopeTransitionHelper_t069C5DE337C0C8F615857F4D731C5CBE3B0F4347* __this, ReadOnlyAssemblyList_t1BC728228128055A6CB84846AEC1D2F3916FE36B* ___0_assemblies, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	CHECKED_LOCAL(Type_t_StaticInit);
	RuntimeObject* V_0 = NULL;
	RuntimeObject* G_B2_0 = NULL;
	Type_t* G_B2_1 = NULL;
	ScopeTransitionHelper_t069C5DE337C0C8F615857F4D731C5CBE3B0F4347* G_B2_2 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	Type_t* G_B1_1 = NULL;
	ScopeTransitionHelper_t069C5DE337C0C8F615857F4D731C5CBE3B0F4347* G_B1_2 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		ReadOnlyAssemblyList_t1BC728228128055A6CB84846AEC1D2F3916FE36B* L_2 = ___0_assemblies;
		V_0 = L_2;
		RuntimeObject* L_3 = V_0;
		RuntimeObject* L_4 = L_3;
		if (L_4)
		{
			G_B2_0 = L_4;
			G_B2_1 = L_1;
			G_B2_2 = __this;
			goto IL_0018;
		}
		G_B1_0 = L_4;
		G_B1_1 = L_1;
		G_B1_2 = __this;
	}
	{
		RuntimeObject* L_5;
		L_5 = ScopeTransitionHelper_get_AllAssemblies_mBD1DC2D507C344159A521F20F3DBF2A440BF403D_inline(__this, NULL);
		G_B2_0 = L_5;
		G_B2_1 = G_B1_1;
		G_B2_2 = G_B1_2;
	}

IL_0018:
	{
		ScopeTransitionHelper_ExecuteMethodsInReverseOrder_m0E0A6AF03EFB351B81C42391F279D31C8C2BD7A9(G_B2_2, G_B2_1, G_B2_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScopeTransitionHelper_ExecuteMethodsInReverseOrder_TisIl2CppFullySharedGenericAny_mC14E0DB5CCC1BA0FCC9EE192CC96AA660832B1DD_fshared (ScopeTransitionHelper_t069C5DE337C0C8F615857F4D731C5CBE3B0F4347* __this, ReadOnlyAssemblyList_t1BC728228128055A6CB84846AEC1D2F3916FE36B* ___0_assemblies, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	CHECKED_LOCAL(Type_t_StaticInit);
	RuntimeObject* V_0 = NULL;
	RuntimeObject* G_B2_0 = NULL;
	Type_t* G_B2_1 = NULL;
	ScopeTransitionHelper_t069C5DE337C0C8F615857F4D731C5CBE3B0F4347* G_B2_2 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	Type_t* G_B1_1 = NULL;
	ScopeTransitionHelper_t069C5DE337C0C8F615857F4D731C5CBE3B0F4347* G_B1_2 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		ReadOnlyAssemblyList_t1BC728228128055A6CB84846AEC1D2F3916FE36B* L_2 = ___0_assemblies;
		V_0 = L_2;
		RuntimeObject* L_3 = V_0;
		RuntimeObject* L_4 = L_3;
		if (L_4)
		{
			G_B2_0 = L_4;
			G_B2_1 = L_1;
			G_B2_2 = __this;
			goto IL_0018;
		}
		G_B1_0 = L_4;
		G_B1_1 = L_1;
		G_B1_2 = __this;
	}
	{
		RuntimeObject* L_5;
		L_5 = ScopeTransitionHelper_get_AllAssemblies_mBD1DC2D507C344159A521F20F3DBF2A440BF403D_inline(__this, NULL);
		G_B2_0 = L_5;
		G_B2_1 = G_B1_1;
		G_B2_2 = G_B1_2;
	}

IL_0018:
	{
		ScopeTransitionHelper_ExecuteMethodsInReverseOrder_m0E0A6AF03EFB351B81C42391F279D31C8C2BD7A9(G_B2_2, G_B2_1, G_B2_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* ScriptableObject_CreateInstance_TisIl2CppSharedGenericObject_mCBB59C30398DB494162F775DCD530D192A8D0A27_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	CHECKED_LOCAL(Type_t_StaticInit);
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* L_2;
		L_2 = ScriptableObject_CreateInstance_mE015043D7EC19654FDFB830A9393B3914FF5FC24(L_1, NULL);
		return ((Il2CppSharedGenericObject*)Castclass((RuntimeObject*)L_2, il2cpp_rgctx_data(method->rgctx_data, 1)));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DirectCopyCompactEntry_t5C4F1D3A79776D09068B3B01E06DADC03ED43988* SerializationBackendManagedCommands_ConsumeDirectCopyGroup_TisDirectCopyCompactEntry_t5C4F1D3A79776D09068B3B01E06DADC03ED43988_mBC9D872214E650FDF6164ADF9A3B4FDD30141894 (uint8_t** ___0_pos, DirectCopyCompactEntry_t5C4F1D3A79776D09068B3B01E06DADC03ED43988** ___1_end, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	DirectCopyCompactEntry_t5C4F1D3A79776D09068B3B01E06DADC03ED43988* V_1 = NULL;
	{
		uint8_t** L_0 = ___0_pos;
		intptr_t L_1 = *(((intptr_t*)L_0));
		uint8_t L_2 = ((DirectCopyGroupHeader_tB3EF313079A34C19995461518F4481731E8068EC*)L_1)->___count;
		V_0 = (int32_t)L_2;
		uint8_t** L_3 = ___0_pos;
		intptr_t L_4 = *(((intptr_t*)L_3));
		uint32_t L_5 = sizeof(DirectCopyGroupHeader_tB3EF313079A34C19995461518F4481731E8068EC);
		V_1 = (DirectCopyCompactEntry_t5C4F1D3A79776D09068B3B01E06DADC03ED43988*)((intptr_t)il2cpp_codegen_add(L_4, (int32_t)L_5));
		uint8_t** L_6 = ___0_pos;
		DirectCopyCompactEntry_t5C4F1D3A79776D09068B3B01E06DADC03ED43988* L_7 = V_1;
		int32_t L_8 = V_0;
		intptr_t L_9 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_8,NULL));
		uint32_t L_10 = sizeof(DirectCopyCompactEntry_t5C4F1D3A79776D09068B3B01E06DADC03ED43988);
		*(((intptr_t*)L_6)) = ((intptr_t)((DirectCopyCompactEntry_t5C4F1D3A79776D09068B3B01E06DADC03ED43988*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(L_9, (int32_t)L_10)))));
		DirectCopyCompactEntry_t5C4F1D3A79776D09068B3B01E06DADC03ED43988** L_11 = ___1_end;
		DirectCopyCompactEntry_t5C4F1D3A79776D09068B3B01E06DADC03ED43988* L_12 = V_1;
		int32_t L_13 = V_0;
		intptr_t L_14 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_13,NULL));
		uint32_t L_15 = sizeof(DirectCopyCompactEntry_t5C4F1D3A79776D09068B3B01E06DADC03ED43988);
		*(((intptr_t*)L_11)) = ((intptr_t)((DirectCopyCompactEntry_t5C4F1D3A79776D09068B3B01E06DADC03ED43988*)il2cpp_codegen_add((intptr_t)L_12, ((intptr_t)il2cpp_codegen_multiply(L_14, (int32_t)L_15)))));
		DirectCopyCompactEntry_t5C4F1D3A79776D09068B3B01E06DADC03ED43988* L_16 = V_1;
		return L_16;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DirectCopyLargeEntry_tB54C2ED00EEBF89E69CA35BFA34F391370211E83* SerializationBackendManagedCommands_ConsumeDirectCopyGroup_TisDirectCopyLargeEntry_tB54C2ED00EEBF89E69CA35BFA34F391370211E83_m619815DAB0BCE13041CC7DA62E0CC0D558E574E2 (uint8_t** ___0_pos, DirectCopyLargeEntry_tB54C2ED00EEBF89E69CA35BFA34F391370211E83** ___1_end, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	DirectCopyLargeEntry_tB54C2ED00EEBF89E69CA35BFA34F391370211E83* V_1 = NULL;
	{
		uint8_t** L_0 = ___0_pos;
		intptr_t L_1 = *(((intptr_t*)L_0));
		uint8_t L_2 = ((DirectCopyGroupHeader_tB3EF313079A34C19995461518F4481731E8068EC*)L_1)->___count;
		V_0 = (int32_t)L_2;
		uint8_t** L_3 = ___0_pos;
		intptr_t L_4 = *(((intptr_t*)L_3));
		uint32_t L_5 = sizeof(DirectCopyGroupHeader_tB3EF313079A34C19995461518F4481731E8068EC);
		V_1 = (DirectCopyLargeEntry_tB54C2ED00EEBF89E69CA35BFA34F391370211E83*)((intptr_t)il2cpp_codegen_add(L_4, (int32_t)L_5));
		uint8_t** L_6 = ___0_pos;
		DirectCopyLargeEntry_tB54C2ED00EEBF89E69CA35BFA34F391370211E83* L_7 = V_1;
		int32_t L_8 = V_0;
		intptr_t L_9 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_8,NULL));
		uint32_t L_10 = sizeof(DirectCopyLargeEntry_tB54C2ED00EEBF89E69CA35BFA34F391370211E83);
		*(((intptr_t*)L_6)) = ((intptr_t)((DirectCopyLargeEntry_tB54C2ED00EEBF89E69CA35BFA34F391370211E83*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(L_9, (int32_t)L_10)))));
		DirectCopyLargeEntry_tB54C2ED00EEBF89E69CA35BFA34F391370211E83** L_11 = ___1_end;
		DirectCopyLargeEntry_tB54C2ED00EEBF89E69CA35BFA34F391370211E83* L_12 = V_1;
		int32_t L_13 = V_0;
		intptr_t L_14 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_13,NULL));
		uint32_t L_15 = sizeof(DirectCopyLargeEntry_tB54C2ED00EEBF89E69CA35BFA34F391370211E83);
		*(((intptr_t*)L_11)) = ((intptr_t)((DirectCopyLargeEntry_tB54C2ED00EEBF89E69CA35BFA34F391370211E83*)il2cpp_codegen_add((intptr_t)L_12, ((intptr_t)il2cpp_codegen_multiply(L_14, (int32_t)L_15)))));
		DirectCopyLargeEntry_tB54C2ED00EEBF89E69CA35BFA34F391370211E83* L_16 = V_1;
		return L_16;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityIdReadEntry_tFAB3989AAFD461BC9CFB5FDB4552B3E73AB095FA* SerializationBackendManagedCommands_ConsumeDirectCopyGroup_TisEntityIdReadEntry_tFAB3989AAFD461BC9CFB5FDB4552B3E73AB095FA_mE76B603019B46FD6B7B628DB15CCD7308C818543 (uint8_t** ___0_pos, EntityIdReadEntry_tFAB3989AAFD461BC9CFB5FDB4552B3E73AB095FA** ___1_end, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	EntityIdReadEntry_tFAB3989AAFD461BC9CFB5FDB4552B3E73AB095FA* V_1 = NULL;
	{
		uint8_t** L_0 = ___0_pos;
		intptr_t L_1 = *(((intptr_t*)L_0));
		uint8_t L_2 = ((DirectCopyGroupHeader_tB3EF313079A34C19995461518F4481731E8068EC*)L_1)->___count;
		V_0 = (int32_t)L_2;
		uint8_t** L_3 = ___0_pos;
		intptr_t L_4 = *(((intptr_t*)L_3));
		uint32_t L_5 = sizeof(DirectCopyGroupHeader_tB3EF313079A34C19995461518F4481731E8068EC);
		V_1 = (EntityIdReadEntry_tFAB3989AAFD461BC9CFB5FDB4552B3E73AB095FA*)((intptr_t)il2cpp_codegen_add(L_4, (int32_t)L_5));
		uint8_t** L_6 = ___0_pos;
		EntityIdReadEntry_tFAB3989AAFD461BC9CFB5FDB4552B3E73AB095FA* L_7 = V_1;
		int32_t L_8 = V_0;
		intptr_t L_9 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_8,NULL));
		uint32_t L_10 = sizeof(EntityIdReadEntry_tFAB3989AAFD461BC9CFB5FDB4552B3E73AB095FA);
		*(((intptr_t*)L_6)) = ((intptr_t)((EntityIdReadEntry_tFAB3989AAFD461BC9CFB5FDB4552B3E73AB095FA*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(L_9, (int32_t)L_10)))));
		EntityIdReadEntry_tFAB3989AAFD461BC9CFB5FDB4552B3E73AB095FA** L_11 = ___1_end;
		EntityIdReadEntry_tFAB3989AAFD461BC9CFB5FDB4552B3E73AB095FA* L_12 = V_1;
		int32_t L_13 = V_0;
		intptr_t L_14 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_13,NULL));
		uint32_t L_15 = sizeof(EntityIdReadEntry_tFAB3989AAFD461BC9CFB5FDB4552B3E73AB095FA);
		*(((intptr_t*)L_11)) = ((intptr_t)((EntityIdReadEntry_tFAB3989AAFD461BC9CFB5FDB4552B3E73AB095FA*)il2cpp_codegen_add((intptr_t)L_12, ((intptr_t)il2cpp_codegen_multiply(L_14, (int32_t)L_15)))));
		EntityIdReadEntry_tFAB3989AAFD461BC9CFB5FDB4552B3E73AB095FA* L_16 = V_1;
		return L_16;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityIdWriteEntry_t8EB65E8B2F6E0CF2166D14AAA825020E1AC204FE* SerializationBackendManagedCommands_ConsumeDirectCopyGroup_TisEntityIdWriteEntry_t8EB65E8B2F6E0CF2166D14AAA825020E1AC204FE_mEA62745CFC0CB7B609950650B42EF9AAC2BBD6CB (uint8_t** ___0_pos, EntityIdWriteEntry_t8EB65E8B2F6E0CF2166D14AAA825020E1AC204FE** ___1_end, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	EntityIdWriteEntry_t8EB65E8B2F6E0CF2166D14AAA825020E1AC204FE* V_1 = NULL;
	{
		uint8_t** L_0 = ___0_pos;
		intptr_t L_1 = *(((intptr_t*)L_0));
		uint8_t L_2 = ((DirectCopyGroupHeader_tB3EF313079A34C19995461518F4481731E8068EC*)L_1)->___count;
		V_0 = (int32_t)L_2;
		uint8_t** L_3 = ___0_pos;
		intptr_t L_4 = *(((intptr_t*)L_3));
		uint32_t L_5 = sizeof(DirectCopyGroupHeader_tB3EF313079A34C19995461518F4481731E8068EC);
		V_1 = (EntityIdWriteEntry_t8EB65E8B2F6E0CF2166D14AAA825020E1AC204FE*)((intptr_t)il2cpp_codegen_add(L_4, (int32_t)L_5));
		uint8_t** L_6 = ___0_pos;
		EntityIdWriteEntry_t8EB65E8B2F6E0CF2166D14AAA825020E1AC204FE* L_7 = V_1;
		int32_t L_8 = V_0;
		intptr_t L_9 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_8,NULL));
		uint32_t L_10 = sizeof(EntityIdWriteEntry_t8EB65E8B2F6E0CF2166D14AAA825020E1AC204FE);
		*(((intptr_t*)L_6)) = ((intptr_t)((EntityIdWriteEntry_t8EB65E8B2F6E0CF2166D14AAA825020E1AC204FE*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(L_9, (int32_t)L_10)))));
		EntityIdWriteEntry_t8EB65E8B2F6E0CF2166D14AAA825020E1AC204FE** L_11 = ___1_end;
		EntityIdWriteEntry_t8EB65E8B2F6E0CF2166D14AAA825020E1AC204FE* L_12 = V_1;
		int32_t L_13 = V_0;
		intptr_t L_14 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_13,NULL));
		uint32_t L_15 = sizeof(EntityIdWriteEntry_t8EB65E8B2F6E0CF2166D14AAA825020E1AC204FE);
		*(((intptr_t*)L_11)) = ((intptr_t)((EntityIdWriteEntry_t8EB65E8B2F6E0CF2166D14AAA825020E1AC204FE*)il2cpp_codegen_add((intptr_t)L_12, ((intptr_t)il2cpp_codegen_multiply(L_14, (int32_t)L_15)))));
		EntityIdWriteEntry_t8EB65E8B2F6E0CF2166D14AAA825020E1AC204FE* L_16 = V_1;
		return L_16;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityObjectReadEntry_t101069B50E35E732ECF92C6C54159A1F1AA87B1B* SerializationBackendManagedCommands_ConsumeDirectCopyGroup_TisUnityObjectReadEntry_t101069B50E35E732ECF92C6C54159A1F1AA87B1B_m89ACF96D2F0A2C49FEC3BEFFAA7F414E8464DFA6 (uint8_t** ___0_pos, UnityObjectReadEntry_t101069B50E35E732ECF92C6C54159A1F1AA87B1B** ___1_end, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	UnityObjectReadEntry_t101069B50E35E732ECF92C6C54159A1F1AA87B1B* V_1 = NULL;
	{
		uint8_t** L_0 = ___0_pos;
		intptr_t L_1 = *(((intptr_t*)L_0));
		uint8_t L_2 = ((DirectCopyGroupHeader_tB3EF313079A34C19995461518F4481731E8068EC*)L_1)->___count;
		V_0 = (int32_t)L_2;
		uint8_t** L_3 = ___0_pos;
		intptr_t L_4 = *(((intptr_t*)L_3));
		uint32_t L_5 = sizeof(DirectCopyGroupHeader_tB3EF313079A34C19995461518F4481731E8068EC);
		V_1 = (UnityObjectReadEntry_t101069B50E35E732ECF92C6C54159A1F1AA87B1B*)((intptr_t)il2cpp_codegen_add(L_4, (int32_t)L_5));
		uint8_t** L_6 = ___0_pos;
		UnityObjectReadEntry_t101069B50E35E732ECF92C6C54159A1F1AA87B1B* L_7 = V_1;
		int32_t L_8 = V_0;
		intptr_t L_9 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_8,NULL));
		uint32_t L_10 = sizeof(UnityObjectReadEntry_t101069B50E35E732ECF92C6C54159A1F1AA87B1B);
		*(((intptr_t*)L_6)) = ((intptr_t)((UnityObjectReadEntry_t101069B50E35E732ECF92C6C54159A1F1AA87B1B*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(L_9, (int32_t)L_10)))));
		UnityObjectReadEntry_t101069B50E35E732ECF92C6C54159A1F1AA87B1B** L_11 = ___1_end;
		UnityObjectReadEntry_t101069B50E35E732ECF92C6C54159A1F1AA87B1B* L_12 = V_1;
		int32_t L_13 = V_0;
		intptr_t L_14 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_13,NULL));
		uint32_t L_15 = sizeof(UnityObjectReadEntry_t101069B50E35E732ECF92C6C54159A1F1AA87B1B);
		*(((intptr_t*)L_11)) = ((intptr_t)((UnityObjectReadEntry_t101069B50E35E732ECF92C6C54159A1F1AA87B1B*)il2cpp_codegen_add((intptr_t)L_12, ((intptr_t)il2cpp_codegen_multiply(L_14, (int32_t)L_15)))));
		UnityObjectReadEntry_t101069B50E35E732ECF92C6C54159A1F1AA87B1B* L_16 = V_1;
		return L_16;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityObjectWriteEntry_t9A8FEE8C25EDCB0900DAF97A6377834EE8EC8438* SerializationBackendManagedCommands_ConsumeDirectCopyGroup_TisUnityObjectWriteEntry_t9A8FEE8C25EDCB0900DAF97A6377834EE8EC8438_m3369E38505A61E0DC6E2EBC0D5B0A034927261D3 (uint8_t** ___0_pos, UnityObjectWriteEntry_t9A8FEE8C25EDCB0900DAF97A6377834EE8EC8438** ___1_end, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	UnityObjectWriteEntry_t9A8FEE8C25EDCB0900DAF97A6377834EE8EC8438* V_1 = NULL;
	{
		uint8_t** L_0 = ___0_pos;
		intptr_t L_1 = *(((intptr_t*)L_0));
		uint8_t L_2 = ((DirectCopyGroupHeader_tB3EF313079A34C19995461518F4481731E8068EC*)L_1)->___count;
		V_0 = (int32_t)L_2;
		uint8_t** L_3 = ___0_pos;
		intptr_t L_4 = *(((intptr_t*)L_3));
		uint32_t L_5 = sizeof(DirectCopyGroupHeader_tB3EF313079A34C19995461518F4481731E8068EC);
		V_1 = (UnityObjectWriteEntry_t9A8FEE8C25EDCB0900DAF97A6377834EE8EC8438*)((intptr_t)il2cpp_codegen_add(L_4, (int32_t)L_5));
		uint8_t** L_6 = ___0_pos;
		UnityObjectWriteEntry_t9A8FEE8C25EDCB0900DAF97A6377834EE8EC8438* L_7 = V_1;
		int32_t L_8 = V_0;
		intptr_t L_9 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_8,NULL));
		uint32_t L_10 = sizeof(UnityObjectWriteEntry_t9A8FEE8C25EDCB0900DAF97A6377834EE8EC8438);
		*(((intptr_t*)L_6)) = ((intptr_t)((UnityObjectWriteEntry_t9A8FEE8C25EDCB0900DAF97A6377834EE8EC8438*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(L_9, (int32_t)L_10)))));
		UnityObjectWriteEntry_t9A8FEE8C25EDCB0900DAF97A6377834EE8EC8438** L_11 = ___1_end;
		UnityObjectWriteEntry_t9A8FEE8C25EDCB0900DAF97A6377834EE8EC8438* L_12 = V_1;
		int32_t L_13 = V_0;
		intptr_t L_14 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_13,NULL));
		uint32_t L_15 = sizeof(UnityObjectWriteEntry_t9A8FEE8C25EDCB0900DAF97A6377834EE8EC8438);
		*(((intptr_t*)L_11)) = ((intptr_t)((UnityObjectWriteEntry_t9A8FEE8C25EDCB0900DAF97A6377834EE8EC8438*)il2cpp_codegen_add((intptr_t)L_12, ((intptr_t)il2cpp_codegen_multiply(L_14, (int32_t)L_15)))));
		UnityObjectWriteEntry_t9A8FEE8C25EDCB0900DAF97A6377834EE8EC8438* L_16 = V_1;
		return L_16;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericStruct* SerializationBackendManagedCommands_ConsumeDirectCopyGroup_TisIl2CppFullySharedGenericStruct_m3C8C0D731061B3928821420396DD79CA034855E5_fshared (uint8_t** ___0_pos, Il2CppFullySharedGenericStruct** ___1_end, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t5F4DE907A05EAE3D6A0566E5F6ABF72B007DCF12 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	int32_t V_0 = 0;
	Il2CppFullySharedGenericStruct* V_1 = NULL;
	{
		uint8_t** L_0 = ___0_pos;
		intptr_t L_1 = *(((intptr_t*)L_0));
		uint8_t L_2 = ((DirectCopyGroupHeader_tB3EF313079A34C19995461518F4481731E8068EC*)L_1)->___count;
		V_0 = (int32_t)L_2;
		uint8_t** L_3 = ___0_pos;
		intptr_t L_4 = *(((intptr_t*)L_3));
		uint32_t L_5 = sizeof(DirectCopyGroupHeader_tB3EF313079A34C19995461518F4481731E8068EC);
		V_1 = (Il2CppFullySharedGenericStruct*)((intptr_t)il2cpp_codegen_add(L_4, (int32_t)L_5));
		uint8_t** L_6 = ___0_pos;
		Il2CppFullySharedGenericStruct* L_7 = V_1;
		int32_t L_8 = V_0;
		intptr_t L_9 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_8,NULL));
		uint32_t L_10 = SizeOf_T_t5F4DE907A05EAE3D6A0566E5F6ABF72B007DCF12;
		*(((intptr_t*)L_6)) = ((intptr_t)((Il2CppFullySharedGenericStruct*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(L_9, (int32_t)L_10)))));
		Il2CppFullySharedGenericStruct** L_11 = ___1_end;
		Il2CppFullySharedGenericStruct* L_12 = V_1;
		int32_t L_13 = V_0;
		intptr_t L_14 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_13,NULL));
		uint32_t L_15 = SizeOf_T_t5F4DE907A05EAE3D6A0566E5F6ABF72B007DCF12;
		*(((intptr_t*)L_11)) = ((intptr_t)((Il2CppFullySharedGenericStruct*)il2cpp_codegen_add((intptr_t)L_12, ((intptr_t)il2cpp_codegen_multiply(L_14, (int32_t)L_15)))));
		Il2CppFullySharedGenericStruct* L_16 = V_1;
		return L_16;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SpanHelpers_IndexOf_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m3E381D71F4CF4AB91BFFD85724D3F55A84E706E5 (uint8_t* ___0_searchSpace, uint8_t ___1_value, int32_t ___2_length, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0;
		L_0 = IntPtr_op_Explicit_m931A344F16D4C65EFB0B492EB07C7A82AF0B9FA1(0, NULL);
		V_0 = L_0;
		goto IL_0133;
	}

IL_000c:
	{
		int32_t L_1 = ___2_length;
		___2_length = ((int32_t)il2cpp_codegen_subtract(L_1, 8));
		uint8_t* L_2 = ___0_searchSpace;
		intptr_t L_3 = V_0;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_add<uint8_t,intptr_t>(L_2, L_3, sizeof(uint8_t));
		uint8_t L_5 = (*(uint8_t*)L_4);
		bool L_6;
		L_6 = Byte_Equals_m25D9E26BA4A7457D39CC3E870C2B33070D731E85((&___1_value), L_5, NULL);
		if (L_6)
		{
			goto IL_0202;
		}
	}
	{
		uint8_t* L_7 = ___0_searchSpace;
		intptr_t L_8 = V_0;
		intptr_t L_9;
		L_9 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_8, 1, NULL);
		uint8_t* L_10;
		L_10 = il2cpp_unsafe_add<uint8_t,intptr_t>(L_7, L_9, sizeof(uint8_t));
		uint8_t L_11 = (*(uint8_t*)L_10);
		bool L_12;
		L_12 = Byte_Equals_m25D9E26BA4A7457D39CC3E870C2B33070D731E85((&___1_value), L_11, NULL);
		if (L_12)
		{
			goto IL_020a;
		}
	}
	{
		uint8_t* L_13 = ___0_searchSpace;
		intptr_t L_14 = V_0;
		intptr_t L_15;
		L_15 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_14, 2, NULL);
		uint8_t* L_16;
		L_16 = il2cpp_unsafe_add<uint8_t,intptr_t>(L_13, L_15, sizeof(uint8_t));
		uint8_t L_17 = (*(uint8_t*)L_16);
		bool L_18;
		L_18 = Byte_Equals_m25D9E26BA4A7457D39CC3E870C2B33070D731E85((&___1_value), L_17, NULL);
		if (L_18)
		{
			goto IL_0218;
		}
	}
	{
		uint8_t* L_19 = ___0_searchSpace;
		intptr_t L_20 = V_0;
		intptr_t L_21;
		L_21 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_20, 3, NULL);
		uint8_t* L_22;
		L_22 = il2cpp_unsafe_add<uint8_t,intptr_t>(L_19, L_21, sizeof(uint8_t));
		uint8_t L_23 = (*(uint8_t*)L_22);
		bool L_24;
		L_24 = Byte_Equals_m25D9E26BA4A7457D39CC3E870C2B33070D731E85((&___1_value), L_23, NULL);
		if (L_24)
		{
			goto IL_0226;
		}
	}
	{
		uint8_t* L_25 = ___0_searchSpace;
		intptr_t L_26 = V_0;
		intptr_t L_27;
		L_27 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_26, 4, NULL);
		uint8_t* L_28;
		L_28 = il2cpp_unsafe_add<uint8_t,intptr_t>(L_25, L_27, sizeof(uint8_t));
		uint8_t L_29 = (*(uint8_t*)L_28);
		bool L_30;
		L_30 = Byte_Equals_m25D9E26BA4A7457D39CC3E870C2B33070D731E85((&___1_value), L_29, NULL);
		if (L_30)
		{
			goto IL_0234;
		}
	}
	{
		uint8_t* L_31 = ___0_searchSpace;
		intptr_t L_32 = V_0;
		intptr_t L_33;
		L_33 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_32, 5, NULL);
		uint8_t* L_34;
		L_34 = il2cpp_unsafe_add<uint8_t,intptr_t>(L_31, L_33, sizeof(uint8_t));
		uint8_t L_35 = (*(uint8_t*)L_34);
		bool L_36;
		L_36 = Byte_Equals_m25D9E26BA4A7457D39CC3E870C2B33070D731E85((&___1_value), L_35, NULL);
		if (L_36)
		{
			goto IL_0242;
		}
	}
	{
		uint8_t* L_37 = ___0_searchSpace;
		intptr_t L_38 = V_0;
		intptr_t L_39;
		L_39 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_38, 6, NULL);
		uint8_t* L_40;
		L_40 = il2cpp_unsafe_add<uint8_t,intptr_t>(L_37, L_39, sizeof(uint8_t));
		uint8_t L_41 = (*(uint8_t*)L_40);
		bool L_42;
		L_42 = Byte_Equals_m25D9E26BA4A7457D39CC3E870C2B33070D731E85((&___1_value), L_41, NULL);
		if (L_42)
		{
			goto IL_0250;
		}
	}
	{
		uint8_t* L_43 = ___0_searchSpace;
		intptr_t L_44 = V_0;
		intptr_t L_45;
		L_45 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_44, 7, NULL);
		uint8_t* L_46;
		L_46 = il2cpp_unsafe_add<uint8_t,intptr_t>(L_43, L_45, sizeof(uint8_t));
		uint8_t L_47 = (*(uint8_t*)L_46);
		bool L_48;
		L_48 = Byte_Equals_m25D9E26BA4A7457D39CC3E870C2B33070D731E85((&___1_value), L_47, NULL);
		if (L_48)
		{
			goto IL_025e;
		}
	}
	{
		intptr_t L_49 = V_0;
		intptr_t L_50;
		L_50 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_49, 8, NULL);
		V_0 = L_50;
	}

IL_0133:
	{
		int32_t L_51 = ___2_length;
		if ((((int32_t)L_51) >= ((int32_t)8)))
		{
			goto IL_000c;
		}
	}
	{
		int32_t L_52 = ___2_length;
		if ((((int32_t)L_52) < ((int32_t)4)))
		{
			goto IL_01fc;
		}
	}
	{
		int32_t L_53 = ___2_length;
		___2_length = ((int32_t)il2cpp_codegen_subtract(L_53, 4));
		uint8_t* L_54 = ___0_searchSpace;
		intptr_t L_55 = V_0;
		uint8_t* L_56;
		L_56 = il2cpp_unsafe_add<uint8_t,intptr_t>(L_54, L_55, sizeof(uint8_t));
		uint8_t L_57 = (*(uint8_t*)L_56);
		bool L_58;
		L_58 = Byte_Equals_m25D9E26BA4A7457D39CC3E870C2B33070D731E85((&___1_value), L_57, NULL);
		if (L_58)
		{
			goto IL_0202;
		}
	}
	{
		uint8_t* L_59 = ___0_searchSpace;
		intptr_t L_60 = V_0;
		intptr_t L_61;
		L_61 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_60, 1, NULL);
		uint8_t* L_62;
		L_62 = il2cpp_unsafe_add<uint8_t,intptr_t>(L_59, L_61, sizeof(uint8_t));
		uint8_t L_63 = (*(uint8_t*)L_62);
		bool L_64;
		L_64 = Byte_Equals_m25D9E26BA4A7457D39CC3E870C2B33070D731E85((&___1_value), L_63, NULL);
		if (L_64)
		{
			goto IL_020a;
		}
	}
	{
		uint8_t* L_65 = ___0_searchSpace;
		intptr_t L_66 = V_0;
		intptr_t L_67;
		L_67 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_66, 2, NULL);
		uint8_t* L_68;
		L_68 = il2cpp_unsafe_add<uint8_t,intptr_t>(L_65, L_67, sizeof(uint8_t));
		uint8_t L_69 = (*(uint8_t*)L_68);
		bool L_70;
		L_70 = Byte_Equals_m25D9E26BA4A7457D39CC3E870C2B33070D731E85((&___1_value), L_69, NULL);
		if (L_70)
		{
			goto IL_0218;
		}
	}
	{
		uint8_t* L_71 = ___0_searchSpace;
		intptr_t L_72 = V_0;
		intptr_t L_73;
		L_73 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_72, 3, NULL);
		uint8_t* L_74;
		L_74 = il2cpp_unsafe_add<uint8_t,intptr_t>(L_71, L_73, sizeof(uint8_t));
		uint8_t L_75 = (*(uint8_t*)L_74);
		bool L_76;
		L_76 = Byte_Equals_m25D9E26BA4A7457D39CC3E870C2B33070D731E85((&___1_value), L_75, NULL);
		if (L_76)
		{
			goto IL_0226;
		}
	}
	{
		intptr_t L_77 = V_0;
		intptr_t L_78;
		L_78 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_77, 4, NULL);
		V_0 = L_78;
		goto IL_01fc;
	}

IL_01d4:
	{
		uint8_t* L_79 = ___0_searchSpace;
		intptr_t L_80 = V_0;
		uint8_t* L_81;
		L_81 = il2cpp_unsafe_add<uint8_t,intptr_t>(L_79, L_80, sizeof(uint8_t));
		uint8_t L_82 = (*(uint8_t*)L_81);
		bool L_83;
		L_83 = Byte_Equals_m25D9E26BA4A7457D39CC3E870C2B33070D731E85((&___1_value), L_82, NULL);
		if (L_83)
		{
			goto IL_0202;
		}
	}
	{
		intptr_t L_84 = V_0;
		intptr_t L_85;
		L_85 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_84, 1, NULL);
		V_0 = L_85;
		int32_t L_86 = ___2_length;
		___2_length = ((int32_t)il2cpp_codegen_subtract(L_86, 1));
	}

IL_01fc:
	{
		int32_t L_87 = ___2_length;
		if ((((int32_t)L_87) > ((int32_t)0)))
		{
			goto IL_01d4;
		}
	}
	{
		return (-1);
	}

IL_0202:
	{
		intptr_t L_88 = V_0;
		void* L_89;
		L_89 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_88, NULL);
		int32_t L_90 = (il2cpp_codegen_conv<int32_t,void*,intptr_t,false,false>(L_89,NULL));
		return L_90;
	}

IL_020a:
	{
		intptr_t L_91 = V_0;
		intptr_t L_92;
		L_92 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_91, 1, NULL);
		void* L_93;
		L_93 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_92, NULL);
		int32_t L_94 = (il2cpp_codegen_conv<int32_t,void*,intptr_t,false,false>(L_93,NULL));
		return L_94;
	}

IL_0218:
	{
		intptr_t L_95 = V_0;
		intptr_t L_96;
		L_96 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_95, 2, NULL);
		void* L_97;
		L_97 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_96, NULL);
		int32_t L_98 = (il2cpp_codegen_conv<int32_t,void*,intptr_t,false,false>(L_97,NULL));
		return L_98;
	}

IL_0226:
	{
		intptr_t L_99 = V_0;
		intptr_t L_100;
		L_100 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_99, 3, NULL);
		void* L_101;
		L_101 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_100, NULL);
		int32_t L_102 = (il2cpp_codegen_conv<int32_t,void*,intptr_t,false,false>(L_101,NULL));
		return L_102;
	}

IL_0234:
	{
		intptr_t L_103 = V_0;
		intptr_t L_104;
		L_104 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_103, 4, NULL);
		void* L_105;
		L_105 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_104, NULL);
		int32_t L_106 = (il2cpp_codegen_conv<int32_t,void*,intptr_t,false,false>(L_105,NULL));
		return L_106;
	}

IL_0242:
	{
		intptr_t L_107 = V_0;
		intptr_t L_108;
		L_108 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_107, 5, NULL);
		void* L_109;
		L_109 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_108, NULL);
		int32_t L_110 = (il2cpp_codegen_conv<int32_t,void*,intptr_t,false,false>(L_109,NULL));
		return L_110;
	}

IL_0250:
	{
		intptr_t L_111 = V_0;
		intptr_t L_112;
		L_112 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_111, 6, NULL);
		void* L_113;
		L_113 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_112, NULL);
		int32_t L_114 = (il2cpp_codegen_conv<int32_t,void*,intptr_t,false,false>(L_113,NULL));
		return L_114;
	}

IL_025e:
	{
		intptr_t L_115 = V_0;
		intptr_t L_116;
		L_116 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_115, 7, NULL);
		void* L_117;
		L_117 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_116, NULL);
		int32_t L_118 = (il2cpp_codegen_conv<int32_t,void*,intptr_t,false,false>(L_117,NULL));
		return L_118;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SpanHelpers_IndexOf_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m2F71ADBBAA6FA83C123CBA62E879F1D780F27D48 (Il2CppChar* ___0_searchSpace, Il2CppChar ___1_value, int32_t ___2_length, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticInit);
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0;
		L_0 = IntPtr_op_Explicit_m931A344F16D4C65EFB0B492EB07C7A82AF0B9FA1(0, NULL);
		V_0 = L_0;
		goto IL_0133;
	}

IL_000c:
	{
		int32_t L_1 = ___2_length;
		___2_length = ((int32_t)il2cpp_codegen_subtract(L_1, 8));
		Il2CppChar* L_2 = ___0_searchSpace;
		intptr_t L_3 = V_0;
		Il2CppChar* L_4;
		L_4 = il2cpp_unsafe_add<Il2CppChar,intptr_t>(L_2, L_3, sizeof(Il2CppChar));
		Il2CppChar L_5 = (*(Il2CppChar*)L_4);
		CHECKED_LOCAL_INIT(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticInit,(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_6;
		L_6 = Char_Equals_mEA7BFB45790C973DF6352091FA924B3FB2EFCE4B((&___1_value), L_5, NULL);
		if (L_6)
		{
			goto IL_0202;
		}
	}
	{
		Il2CppChar* L_7 = ___0_searchSpace;
		intptr_t L_8 = V_0;
		intptr_t L_9;
		L_9 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_8, 1, NULL);
		Il2CppChar* L_10;
		L_10 = il2cpp_unsafe_add<Il2CppChar,intptr_t>(L_7, L_9, sizeof(Il2CppChar));
		Il2CppChar L_11 = (*(Il2CppChar*)L_10);
		CHECKED_LOCAL_INIT(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticInit,(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_12;
		L_12 = Char_Equals_mEA7BFB45790C973DF6352091FA924B3FB2EFCE4B((&___1_value), L_11, NULL);
		if (L_12)
		{
			goto IL_020a;
		}
	}
	{
		Il2CppChar* L_13 = ___0_searchSpace;
		intptr_t L_14 = V_0;
		intptr_t L_15;
		L_15 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_14, 2, NULL);
		Il2CppChar* L_16;
		L_16 = il2cpp_unsafe_add<Il2CppChar,intptr_t>(L_13, L_15, sizeof(Il2CppChar));
		Il2CppChar L_17 = (*(Il2CppChar*)L_16);
		CHECKED_LOCAL_INIT(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticInit,(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_18;
		L_18 = Char_Equals_mEA7BFB45790C973DF6352091FA924B3FB2EFCE4B((&___1_value), L_17, NULL);
		if (L_18)
		{
			goto IL_0218;
		}
	}
	{
		Il2CppChar* L_19 = ___0_searchSpace;
		intptr_t L_20 = V_0;
		intptr_t L_21;
		L_21 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_20, 3, NULL);
		Il2CppChar* L_22;
		L_22 = il2cpp_unsafe_add<Il2CppChar,intptr_t>(L_19, L_21, sizeof(Il2CppChar));
		Il2CppChar L_23 = (*(Il2CppChar*)L_22);
		CHECKED_LOCAL_INIT(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticInit,(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_24;
		L_24 = Char_Equals_mEA7BFB45790C973DF6352091FA924B3FB2EFCE4B((&___1_value), L_23, NULL);
		if (L_24)
		{
			goto IL_0226;
		}
	}
	{
		Il2CppChar* L_25 = ___0_searchSpace;
		intptr_t L_26 = V_0;
		intptr_t L_27;
		L_27 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_26, 4, NULL);
		Il2CppChar* L_28;
		L_28 = il2cpp_unsafe_add<Il2CppChar,intptr_t>(L_25, L_27, sizeof(Il2CppChar));
		Il2CppChar L_29 = (*(Il2CppChar*)L_28);
		CHECKED_LOCAL_INIT(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticInit,(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_30;
		L_30 = Char_Equals_mEA7BFB45790C973DF6352091FA924B3FB2EFCE4B((&___1_value), L_29, NULL);
		if (L_30)
		{
			goto IL_0234;
		}
	}
	{
		Il2CppChar* L_31 = ___0_searchSpace;
		intptr_t L_32 = V_0;
		intptr_t L_33;
		L_33 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_32, 5, NULL);
		Il2CppChar* L_34;
		L_34 = il2cpp_unsafe_add<Il2CppChar,intptr_t>(L_31, L_33, sizeof(Il2CppChar));
		Il2CppChar L_35 = (*(Il2CppChar*)L_34);
		CHECKED_LOCAL_INIT(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticInit,(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_36;
		L_36 = Char_Equals_mEA7BFB45790C973DF6352091FA924B3FB2EFCE4B((&___1_value), L_35, NULL);
		if (L_36)
		{
			goto IL_0242;
		}
	}
	{
		Il2CppChar* L_37 = ___0_searchSpace;
		intptr_t L_38 = V_0;
		intptr_t L_39;
		L_39 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_38, 6, NULL);
		Il2CppChar* L_40;
		L_40 = il2cpp_unsafe_add<Il2CppChar,intptr_t>(L_37, L_39, sizeof(Il2CppChar));
		Il2CppChar L_41 = (*(Il2CppChar*)L_40);
		CHECKED_LOCAL_INIT(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticInit,(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_42;
		L_42 = Char_Equals_mEA7BFB45790C973DF6352091FA924B3FB2EFCE4B((&___1_value), L_41, NULL);
		if (L_42)
		{
			goto IL_0250;
		}
	}
	{
		Il2CppChar* L_43 = ___0_searchSpace;
		intptr_t L_44 = V_0;
		intptr_t L_45;
		L_45 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_44, 7, NULL);
		Il2CppChar* L_46;
		L_46 = il2cpp_unsafe_add<Il2CppChar,intptr_t>(L_43, L_45, sizeof(Il2CppChar));
		Il2CppChar L_47 = (*(Il2CppChar*)L_46);
		CHECKED_LOCAL_INIT(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticInit,(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_48;
		L_48 = Char_Equals_mEA7BFB45790C973DF6352091FA924B3FB2EFCE4B((&___1_value), L_47, NULL);
		if (L_48)
		{
			goto IL_025e;
		}
	}
	{
		intptr_t L_49 = V_0;
		intptr_t L_50;
		L_50 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_49, 8, NULL);
		V_0 = L_50;
	}

IL_0133:
	{
		int32_t L_51 = ___2_length;
		if ((((int32_t)L_51) >= ((int32_t)8)))
		{
			goto IL_000c;
		}
	}
	{
		int32_t L_52 = ___2_length;
		if ((((int32_t)L_52) < ((int32_t)4)))
		{
			goto IL_01fc;
		}
	}
	{
		int32_t L_53 = ___2_length;
		___2_length = ((int32_t)il2cpp_codegen_subtract(L_53, 4));
		Il2CppChar* L_54 = ___0_searchSpace;
		intptr_t L_55 = V_0;
		Il2CppChar* L_56;
		L_56 = il2cpp_unsafe_add<Il2CppChar,intptr_t>(L_54, L_55, sizeof(Il2CppChar));
		Il2CppChar L_57 = (*(Il2CppChar*)L_56);
		CHECKED_LOCAL_INIT(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticInit,(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_58;
		L_58 = Char_Equals_mEA7BFB45790C973DF6352091FA924B3FB2EFCE4B((&___1_value), L_57, NULL);
		if (L_58)
		{
			goto IL_0202;
		}
	}
	{
		Il2CppChar* L_59 = ___0_searchSpace;
		intptr_t L_60 = V_0;
		intptr_t L_61;
		L_61 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_60, 1, NULL);
		Il2CppChar* L_62;
		L_62 = il2cpp_unsafe_add<Il2CppChar,intptr_t>(L_59, L_61, sizeof(Il2CppChar));
		Il2CppChar L_63 = (*(Il2CppChar*)L_62);
		CHECKED_LOCAL_INIT(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticInit,(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_64;
		L_64 = Char_Equals_mEA7BFB45790C973DF6352091FA924B3FB2EFCE4B((&___1_value), L_63, NULL);
		if (L_64)
		{
			goto IL_020a;
		}
	}
	{
		Il2CppChar* L_65 = ___0_searchSpace;
		intptr_t L_66 = V_0;
		intptr_t L_67;
		L_67 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_66, 2, NULL);
		Il2CppChar* L_68;
		L_68 = il2cpp_unsafe_add<Il2CppChar,intptr_t>(L_65, L_67, sizeof(Il2CppChar));
		Il2CppChar L_69 = (*(Il2CppChar*)L_68);
		CHECKED_LOCAL_INIT(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticInit,(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_70;
		L_70 = Char_Equals_mEA7BFB45790C973DF6352091FA924B3FB2EFCE4B((&___1_value), L_69, NULL);
		if (L_70)
		{
			goto IL_0218;
		}
	}
	{
		Il2CppChar* L_71 = ___0_searchSpace;
		intptr_t L_72 = V_0;
		intptr_t L_73;
		L_73 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_72, 3, NULL);
		Il2CppChar* L_74;
		L_74 = il2cpp_unsafe_add<Il2CppChar,intptr_t>(L_71, L_73, sizeof(Il2CppChar));
		Il2CppChar L_75 = (*(Il2CppChar*)L_74);
		CHECKED_LOCAL_INIT(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticInit,(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_76;
		L_76 = Char_Equals_mEA7BFB45790C973DF6352091FA924B3FB2EFCE4B((&___1_value), L_75, NULL);
		if (L_76)
		{
			goto IL_0226;
		}
	}
	{
		intptr_t L_77 = V_0;
		intptr_t L_78;
		L_78 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_77, 4, NULL);
		V_0 = L_78;
		goto IL_01fc;
	}

IL_01d4:
	{
		Il2CppChar* L_79 = ___0_searchSpace;
		intptr_t L_80 = V_0;
		Il2CppChar* L_81;
		L_81 = il2cpp_unsafe_add<Il2CppChar,intptr_t>(L_79, L_80, sizeof(Il2CppChar));
		Il2CppChar L_82 = (*(Il2CppChar*)L_81);
		CHECKED_LOCAL_INIT(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticInit,(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_83;
		L_83 = Char_Equals_mEA7BFB45790C973DF6352091FA924B3FB2EFCE4B((&___1_value), L_82, NULL);
		if (L_83)
		{
			goto IL_0202;
		}
	}
	{
		intptr_t L_84 = V_0;
		intptr_t L_85;
		L_85 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_84, 1, NULL);
		V_0 = L_85;
		int32_t L_86 = ___2_length;
		___2_length = ((int32_t)il2cpp_codegen_subtract(L_86, 1));
	}

IL_01fc:
	{
		int32_t L_87 = ___2_length;
		if ((((int32_t)L_87) > ((int32_t)0)))
		{
			goto IL_01d4;
		}
	}
	{
		return (-1);
	}

IL_0202:
	{
		intptr_t L_88 = V_0;
		void* L_89;
		L_89 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_88, NULL);
		int32_t L_90 = (il2cpp_codegen_conv<int32_t,void*,intptr_t,false,false>(L_89,NULL));
		return L_90;
	}

IL_020a:
	{
		intptr_t L_91 = V_0;
		intptr_t L_92;
		L_92 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_91, 1, NULL);
		void* L_93;
		L_93 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_92, NULL);
		int32_t L_94 = (il2cpp_codegen_conv<int32_t,void*,intptr_t,false,false>(L_93,NULL));
		return L_94;
	}

IL_0218:
	{
		intptr_t L_95 = V_0;
		intptr_t L_96;
		L_96 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_95, 2, NULL);
		void* L_97;
		L_97 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_96, NULL);
		int32_t L_98 = (il2cpp_codegen_conv<int32_t,void*,intptr_t,false,false>(L_97,NULL));
		return L_98;
	}

IL_0226:
	{
		intptr_t L_99 = V_0;
		intptr_t L_100;
		L_100 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_99, 3, NULL);
		void* L_101;
		L_101 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_100, NULL);
		int32_t L_102 = (il2cpp_codegen_conv<int32_t,void*,intptr_t,false,false>(L_101,NULL));
		return L_102;
	}

IL_0234:
	{
		intptr_t L_103 = V_0;
		intptr_t L_104;
		L_104 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_103, 4, NULL);
		void* L_105;
		L_105 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_104, NULL);
		int32_t L_106 = (il2cpp_codegen_conv<int32_t,void*,intptr_t,false,false>(L_105,NULL));
		return L_106;
	}

IL_0242:
	{
		intptr_t L_107 = V_0;
		intptr_t L_108;
		L_108 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_107, 5, NULL);
		void* L_109;
		L_109 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_108, NULL);
		int32_t L_110 = (il2cpp_codegen_conv<int32_t,void*,intptr_t,false,false>(L_109,NULL));
		return L_110;
	}

IL_0250:
	{
		intptr_t L_111 = V_0;
		intptr_t L_112;
		L_112 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_111, 6, NULL);
		void* L_113;
		L_113 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_112, NULL);
		int32_t L_114 = (il2cpp_codegen_conv<int32_t,void*,intptr_t,false,false>(L_113,NULL));
		return L_114;
	}

IL_025e:
	{
		intptr_t L_115 = V_0;
		intptr_t L_116;
		L_116 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_115, 7, NULL);
		void* L_117;
		L_117 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_116, NULL);
		int32_t L_118 = (il2cpp_codegen_conv<int32_t,void*,intptr_t,false,false>(L_117,NULL));
		return L_118;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SpanHelpers_IndexOf_TisIl2CppFullySharedGenericAny_m28DDF4475C9EA0E0C80C0C9A0E6D96CCC3609FB4_fshared (Il2CppFullySharedGenericAny* ___0_searchSpace, Il2CppFullySharedGenericAny ___1_value, int32_t ___2_length, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t0BD37F7B39E3DEF033E6735BB9A5DFFC1C4F3C53 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	void* L_6 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 0)));
	void* L_15 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 0)));
	void* L_24 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 0)));
	void* L_33 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 0)));
	void* L_42 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 0)));
	void* L_51 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 0)));
	void* L_60 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 0)));
	void* L_69 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 0)));
	void* L_82 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 0)));
	void* L_91 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 0)));
	void* L_100 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 0)));
	void* L_109 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 0)));
	void* L_119 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 0)));
	const Il2CppFullySharedGenericAny L_5 = alloca(SizeOf_T_t0BD37F7B39E3DEF033E6735BB9A5DFFC1C4F3C53);
	const Il2CppFullySharedGenericAny L_14 = L_5;
	const Il2CppFullySharedGenericAny L_23 = L_5;
	const Il2CppFullySharedGenericAny L_32 = L_5;
	const Il2CppFullySharedGenericAny L_41 = L_5;
	const Il2CppFullySharedGenericAny L_50 = L_5;
	const Il2CppFullySharedGenericAny L_59 = L_5;
	const Il2CppFullySharedGenericAny L_68 = L_5;
	const Il2CppFullySharedGenericAny L_81 = L_5;
	const Il2CppFullySharedGenericAny L_90 = L_5;
	const Il2CppFullySharedGenericAny L_99 = L_5;
	const Il2CppFullySharedGenericAny L_108 = L_5;
	const Il2CppFullySharedGenericAny L_118 = L_5;
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0;
		L_0 = IntPtr_op_Explicit_m931A344F16D4C65EFB0B492EB07C7A82AF0B9FA1(0, NULL);
		V_0 = L_0;
		goto IL_0133;
	}

IL_000c:
	{
		int32_t L_1 = ___2_length;
		___2_length = ((int32_t)il2cpp_codegen_subtract(L_1, 8));
		Il2CppFullySharedGenericAny* L_2 = ___0_searchSpace;
		intptr_t L_3 = V_0;
		Il2CppFullySharedGenericAny* L_4;
		L_4 = il2cpp_unsafe_add<Il2CppFullySharedGenericAny,intptr_t>(L_2, L_3, SizeOf_T_t0BD37F7B39E3DEF033E6735BB9A5DFFC1C4F3C53);
		il2cpp_codegen_memcpy(L_5, L_4, SizeOf_T_t0BD37F7B39E3DEF033E6735BB9A5DFFC1C4F3C53);
		Il2CppConstrainedCallData L_7;
		Il2CppMethodPointer L_8 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(method->rgctx_data, 0), il2cpp_rgctx_method(method->rgctx_data, 2), (void*)(Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___1_value : &___1_value), &L_7, L_6);
		bool L_9 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(L_8, L_7.method,L_7.thisPtr, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? L_5: *(void**)L_5));
		if (L_9)
		{
			goto IL_0202;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_10 = ___0_searchSpace;
		intptr_t L_11 = V_0;
		intptr_t L_12;
		L_12 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_11, 1, NULL);
		Il2CppFullySharedGenericAny* L_13;
		L_13 = il2cpp_unsafe_add<Il2CppFullySharedGenericAny,intptr_t>(L_10, L_12, SizeOf_T_t0BD37F7B39E3DEF033E6735BB9A5DFFC1C4F3C53);
		il2cpp_codegen_memcpy(L_14, L_13, SizeOf_T_t0BD37F7B39E3DEF033E6735BB9A5DFFC1C4F3C53);
		Il2CppConstrainedCallData L_16;
		Il2CppMethodPointer L_17 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(method->rgctx_data, 0), il2cpp_rgctx_method(method->rgctx_data, 2), (void*)(Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___1_value : &___1_value), &L_16, L_15);
		bool L_18 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(L_17, L_16.method,L_16.thisPtr, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? L_14: *(void**)L_14));
		if (L_18)
		{
			goto IL_020a;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_19 = ___0_searchSpace;
		intptr_t L_20 = V_0;
		intptr_t L_21;
		L_21 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_20, 2, NULL);
		Il2CppFullySharedGenericAny* L_22;
		L_22 = il2cpp_unsafe_add<Il2CppFullySharedGenericAny,intptr_t>(L_19, L_21, SizeOf_T_t0BD37F7B39E3DEF033E6735BB9A5DFFC1C4F3C53);
		il2cpp_codegen_memcpy(L_23, L_22, SizeOf_T_t0BD37F7B39E3DEF033E6735BB9A5DFFC1C4F3C53);
		Il2CppConstrainedCallData L_25;
		Il2CppMethodPointer L_26 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(method->rgctx_data, 0), il2cpp_rgctx_method(method->rgctx_data, 2), (void*)(Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___1_value : &___1_value), &L_25, L_24);
		bool L_27 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(L_26, L_25.method,L_25.thisPtr, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? L_23: *(void**)L_23));
		if (L_27)
		{
			goto IL_0218;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_28 = ___0_searchSpace;
		intptr_t L_29 = V_0;
		intptr_t L_30;
		L_30 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_29, 3, NULL);
		Il2CppFullySharedGenericAny* L_31;
		L_31 = il2cpp_unsafe_add<Il2CppFullySharedGenericAny,intptr_t>(L_28, L_30, SizeOf_T_t0BD37F7B39E3DEF033E6735BB9A5DFFC1C4F3C53);
		il2cpp_codegen_memcpy(L_32, L_31, SizeOf_T_t0BD37F7B39E3DEF033E6735BB9A5DFFC1C4F3C53);
		Il2CppConstrainedCallData L_34;
		Il2CppMethodPointer L_35 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(method->rgctx_data, 0), il2cpp_rgctx_method(method->rgctx_data, 2), (void*)(Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___1_value : &___1_value), &L_34, L_33);
		bool L_36 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(L_35, L_34.method,L_34.thisPtr, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? L_32: *(void**)L_32));
		if (L_36)
		{
			goto IL_0226;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_37 = ___0_searchSpace;
		intptr_t L_38 = V_0;
		intptr_t L_39;
		L_39 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_38, 4, NULL);
		Il2CppFullySharedGenericAny* L_40;
		L_40 = il2cpp_unsafe_add<Il2CppFullySharedGenericAny,intptr_t>(L_37, L_39, SizeOf_T_t0BD37F7B39E3DEF033E6735BB9A5DFFC1C4F3C53);
		il2cpp_codegen_memcpy(L_41, L_40, SizeOf_T_t0BD37F7B39E3DEF033E6735BB9A5DFFC1C4F3C53);
		Il2CppConstrainedCallData L_43;
		Il2CppMethodPointer L_44 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(method->rgctx_data, 0), il2cpp_rgctx_method(method->rgctx_data, 2), (void*)(Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___1_value : &___1_value), &L_43, L_42);
		bool L_45 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(L_44, L_43.method,L_43.thisPtr, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? L_41: *(void**)L_41));
		if (L_45)
		{
			goto IL_0234;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_46 = ___0_searchSpace;
		intptr_t L_47 = V_0;
		intptr_t L_48;
		L_48 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_47, 5, NULL);
		Il2CppFullySharedGenericAny* L_49;
		L_49 = il2cpp_unsafe_add<Il2CppFullySharedGenericAny,intptr_t>(L_46, L_48, SizeOf_T_t0BD37F7B39E3DEF033E6735BB9A5DFFC1C4F3C53);
		il2cpp_codegen_memcpy(L_50, L_49, SizeOf_T_t0BD37F7B39E3DEF033E6735BB9A5DFFC1C4F3C53);
		Il2CppConstrainedCallData L_52;
		Il2CppMethodPointer L_53 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(method->rgctx_data, 0), il2cpp_rgctx_method(method->rgctx_data, 2), (void*)(Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___1_value : &___1_value), &L_52, L_51);
		bool L_54 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(L_53, L_52.method,L_52.thisPtr, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? L_50: *(void**)L_50));
		if (L_54)
		{
			goto IL_0242;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_55 = ___0_searchSpace;
		intptr_t L_56 = V_0;
		intptr_t L_57;
		L_57 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_56, 6, NULL);
		Il2CppFullySharedGenericAny* L_58;
		L_58 = il2cpp_unsafe_add<Il2CppFullySharedGenericAny,intptr_t>(L_55, L_57, SizeOf_T_t0BD37F7B39E3DEF033E6735BB9A5DFFC1C4F3C53);
		il2cpp_codegen_memcpy(L_59, L_58, SizeOf_T_t0BD37F7B39E3DEF033E6735BB9A5DFFC1C4F3C53);
		Il2CppConstrainedCallData L_61;
		Il2CppMethodPointer L_62 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(method->rgctx_data, 0), il2cpp_rgctx_method(method->rgctx_data, 2), (void*)(Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___1_value : &___1_value), &L_61, L_60);
		bool L_63 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(L_62, L_61.method,L_61.thisPtr, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? L_59: *(void**)L_59));
		if (L_63)
		{
			goto IL_0250;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_64 = ___0_searchSpace;
		intptr_t L_65 = V_0;
		intptr_t L_66;
		L_66 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_65, 7, NULL);
		Il2CppFullySharedGenericAny* L_67;
		L_67 = il2cpp_unsafe_add<Il2CppFullySharedGenericAny,intptr_t>(L_64, L_66, SizeOf_T_t0BD37F7B39E3DEF033E6735BB9A5DFFC1C4F3C53);
		il2cpp_codegen_memcpy(L_68, L_67, SizeOf_T_t0BD37F7B39E3DEF033E6735BB9A5DFFC1C4F3C53);
		Il2CppConstrainedCallData L_70;
		Il2CppMethodPointer L_71 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(method->rgctx_data, 0), il2cpp_rgctx_method(method->rgctx_data, 2), (void*)(Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___1_value : &___1_value), &L_70, L_69);
		bool L_72 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(L_71, L_70.method,L_70.thisPtr, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? L_68: *(void**)L_68));
		if (L_72)
		{
			goto IL_025e;
		}
	}
	{
		intptr_t L_73 = V_0;
		intptr_t L_74;
		L_74 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_73, 8, NULL);
		V_0 = L_74;
	}

IL_0133:
	{
		int32_t L_75 = ___2_length;
		if ((((int32_t)L_75) >= ((int32_t)8)))
		{
			goto IL_000c;
		}
	}
	{
		int32_t L_76 = ___2_length;
		if ((((int32_t)L_76) < ((int32_t)4)))
		{
			goto IL_01fc;
		}
	}
	{
		int32_t L_77 = ___2_length;
		___2_length = ((int32_t)il2cpp_codegen_subtract(L_77, 4));
		Il2CppFullySharedGenericAny* L_78 = ___0_searchSpace;
		intptr_t L_79 = V_0;
		Il2CppFullySharedGenericAny* L_80;
		L_80 = il2cpp_unsafe_add<Il2CppFullySharedGenericAny,intptr_t>(L_78, L_79, SizeOf_T_t0BD37F7B39E3DEF033E6735BB9A5DFFC1C4F3C53);
		il2cpp_codegen_memcpy(L_81, L_80, SizeOf_T_t0BD37F7B39E3DEF033E6735BB9A5DFFC1C4F3C53);
		Il2CppConstrainedCallData L_83;
		Il2CppMethodPointer L_84 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(method->rgctx_data, 0), il2cpp_rgctx_method(method->rgctx_data, 2), (void*)(Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___1_value : &___1_value), &L_83, L_82);
		bool L_85 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(L_84, L_83.method,L_83.thisPtr, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? L_81: *(void**)L_81));
		if (L_85)
		{
			goto IL_0202;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_86 = ___0_searchSpace;
		intptr_t L_87 = V_0;
		intptr_t L_88;
		L_88 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_87, 1, NULL);
		Il2CppFullySharedGenericAny* L_89;
		L_89 = il2cpp_unsafe_add<Il2CppFullySharedGenericAny,intptr_t>(L_86, L_88, SizeOf_T_t0BD37F7B39E3DEF033E6735BB9A5DFFC1C4F3C53);
		il2cpp_codegen_memcpy(L_90, L_89, SizeOf_T_t0BD37F7B39E3DEF033E6735BB9A5DFFC1C4F3C53);
		Il2CppConstrainedCallData L_92;
		Il2CppMethodPointer L_93 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(method->rgctx_data, 0), il2cpp_rgctx_method(method->rgctx_data, 2), (void*)(Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___1_value : &___1_value), &L_92, L_91);
		bool L_94 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(L_93, L_92.method,L_92.thisPtr, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? L_90: *(void**)L_90));
		if (L_94)
		{
			goto IL_020a;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_95 = ___0_searchSpace;
		intptr_t L_96 = V_0;
		intptr_t L_97;
		L_97 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_96, 2, NULL);
		Il2CppFullySharedGenericAny* L_98;
		L_98 = il2cpp_unsafe_add<Il2CppFullySharedGenericAny,intptr_t>(L_95, L_97, SizeOf_T_t0BD37F7B39E3DEF033E6735BB9A5DFFC1C4F3C53);
		il2cpp_codegen_memcpy(L_99, L_98, SizeOf_T_t0BD37F7B39E3DEF033E6735BB9A5DFFC1C4F3C53);
		Il2CppConstrainedCallData L_101;
		Il2CppMethodPointer L_102 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(method->rgctx_data, 0), il2cpp_rgctx_method(method->rgctx_data, 2), (void*)(Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___1_value : &___1_value), &L_101, L_100);
		bool L_103 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(L_102, L_101.method,L_101.thisPtr, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? L_99: *(void**)L_99));
		if (L_103)
		{
			goto IL_0218;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_104 = ___0_searchSpace;
		intptr_t L_105 = V_0;
		intptr_t L_106;
		L_106 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_105, 3, NULL);
		Il2CppFullySharedGenericAny* L_107;
		L_107 = il2cpp_unsafe_add<Il2CppFullySharedGenericAny,intptr_t>(L_104, L_106, SizeOf_T_t0BD37F7B39E3DEF033E6735BB9A5DFFC1C4F3C53);
		il2cpp_codegen_memcpy(L_108, L_107, SizeOf_T_t0BD37F7B39E3DEF033E6735BB9A5DFFC1C4F3C53);
		Il2CppConstrainedCallData L_110;
		Il2CppMethodPointer L_111 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(method->rgctx_data, 0), il2cpp_rgctx_method(method->rgctx_data, 2), (void*)(Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___1_value : &___1_value), &L_110, L_109);
		bool L_112 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(L_111, L_110.method,L_110.thisPtr, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? L_108: *(void**)L_108));
		if (L_112)
		{
			goto IL_0226;
		}
	}
	{
		intptr_t L_113 = V_0;
		intptr_t L_114;
		L_114 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_113, 4, NULL);
		V_0 = L_114;
		goto IL_01fc;
	}

IL_01d4:
	{
		Il2CppFullySharedGenericAny* L_115 = ___0_searchSpace;
		intptr_t L_116 = V_0;
		Il2CppFullySharedGenericAny* L_117;
		L_117 = il2cpp_unsafe_add<Il2CppFullySharedGenericAny,intptr_t>(L_115, L_116, SizeOf_T_t0BD37F7B39E3DEF033E6735BB9A5DFFC1C4F3C53);
		il2cpp_codegen_memcpy(L_118, L_117, SizeOf_T_t0BD37F7B39E3DEF033E6735BB9A5DFFC1C4F3C53);
		Il2CppConstrainedCallData L_120;
		Il2CppMethodPointer L_121 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(method->rgctx_data, 0), il2cpp_rgctx_method(method->rgctx_data, 2), (void*)(Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___1_value : &___1_value), &L_120, L_119);
		bool L_122 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(L_121, L_120.method,L_120.thisPtr, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? L_118: *(void**)L_118));
		if (L_122)
		{
			goto IL_0202;
		}
	}
	{
		intptr_t L_123 = V_0;
		intptr_t L_124;
		L_124 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_123, 1, NULL);
		V_0 = L_124;
		int32_t L_125 = ___2_length;
		___2_length = ((int32_t)il2cpp_codegen_subtract(L_125, 1));
	}

IL_01fc:
	{
		int32_t L_126 = ___2_length;
		if ((((int32_t)L_126) > ((int32_t)0)))
		{
			goto IL_01d4;
		}
	}
	{
		return (-1);
	}

IL_0202:
	{
		intptr_t L_127 = V_0;
		void* L_128;
		L_128 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_127, NULL);
		int32_t L_129 = (il2cpp_codegen_conv<int32_t,void*,intptr_t,false,false>(L_128,NULL));
		return L_129;
	}

IL_020a:
	{
		intptr_t L_130 = V_0;
		intptr_t L_131;
		L_131 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_130, 1, NULL);
		void* L_132;
		L_132 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_131, NULL);
		int32_t L_133 = (il2cpp_codegen_conv<int32_t,void*,intptr_t,false,false>(L_132,NULL));
		return L_133;
	}

IL_0218:
	{
		intptr_t L_134 = V_0;
		intptr_t L_135;
		L_135 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_134, 2, NULL);
		void* L_136;
		L_136 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_135, NULL);
		int32_t L_137 = (il2cpp_codegen_conv<int32_t,void*,intptr_t,false,false>(L_136,NULL));
		return L_137;
	}

IL_0226:
	{
		intptr_t L_138 = V_0;
		intptr_t L_139;
		L_139 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_138, 3, NULL);
		void* L_140;
		L_140 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_139, NULL);
		int32_t L_141 = (il2cpp_codegen_conv<int32_t,void*,intptr_t,false,false>(L_140,NULL));
		return L_141;
	}

IL_0234:
	{
		intptr_t L_142 = V_0;
		intptr_t L_143;
		L_143 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_142, 4, NULL);
		void* L_144;
		L_144 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_143, NULL);
		int32_t L_145 = (il2cpp_codegen_conv<int32_t,void*,intptr_t,false,false>(L_144,NULL));
		return L_145;
	}

IL_0242:
	{
		intptr_t L_146 = V_0;
		intptr_t L_147;
		L_147 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_146, 5, NULL);
		void* L_148;
		L_148 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_147, NULL);
		int32_t L_149 = (il2cpp_codegen_conv<int32_t,void*,intptr_t,false,false>(L_148,NULL));
		return L_149;
	}

IL_0250:
	{
		intptr_t L_150 = V_0;
		intptr_t L_151;
		L_151 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_150, 6, NULL);
		void* L_152;
		L_152 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_151, NULL);
		int32_t L_153 = (il2cpp_codegen_conv<int32_t,void*,intptr_t,false,false>(L_152,NULL));
		return L_153;
	}

IL_025e:
	{
		intptr_t L_154 = V_0;
		intptr_t L_155;
		L_155 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_154, 7, NULL);
		void* L_156;
		L_156 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_155, NULL);
		int32_t L_157 = (il2cpp_codegen_conv<int32_t,void*,intptr_t,false,false>(L_156,NULL));
		return L_157;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SpanHelpers_SequenceEqual_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m15554853B4E39558ED8B1049CF44428A9F9F0774 (Il2CppChar* ___0_first, Il2CppChar* ___1_second, int32_t ___2_length, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticInit);
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Il2CppChar* L_0 = ___0_first;
		Il2CppChar* L_1 = ___1_second;
		bool L_2;
		L_2 = il2cpp_unsafe_are_same(L_0, L_1);
		if (L_2)
		{
			goto IL_0289;
		}
	}
	{
		intptr_t L_3;
		L_3 = IntPtr_op_Explicit_m931A344F16D4C65EFB0B492EB07C7A82AF0B9FA1(0, NULL);
		V_0 = L_3;
		goto IL_0191;
	}

IL_0018:
	{
		int32_t L_4 = ___2_length;
		___2_length = ((int32_t)il2cpp_codegen_subtract(L_4, 8));
		Il2CppChar* L_5 = ___0_first;
		intptr_t L_6 = V_0;
		Il2CppChar* L_7;
		L_7 = il2cpp_unsafe_add<Il2CppChar,intptr_t>(L_5, L_6, sizeof(Il2CppChar));
		Il2CppChar* L_8 = ___1_second;
		intptr_t L_9 = V_0;
		Il2CppChar* L_10;
		L_10 = il2cpp_unsafe_add<Il2CppChar,intptr_t>(L_8, L_9, sizeof(Il2CppChar));
		Il2CppChar L_11 = (*(Il2CppChar*)L_10);
		CHECKED_LOCAL_INIT(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticInit,(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_12;
		L_12 = Char_Equals_mEA7BFB45790C973DF6352091FA924B3FB2EFCE4B(L_7, L_11, NULL);
		if (!L_12)
		{
			goto IL_028b;
		}
	}
	{
		Il2CppChar* L_13 = ___0_first;
		intptr_t L_14 = V_0;
		intptr_t L_15;
		L_15 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_14, 1, NULL);
		Il2CppChar* L_16;
		L_16 = il2cpp_unsafe_add<Il2CppChar,intptr_t>(L_13, L_15, sizeof(Il2CppChar));
		Il2CppChar* L_17 = ___1_second;
		intptr_t L_18 = V_0;
		intptr_t L_19;
		L_19 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_18, 1, NULL);
		Il2CppChar* L_20;
		L_20 = il2cpp_unsafe_add<Il2CppChar,intptr_t>(L_17, L_19, sizeof(Il2CppChar));
		Il2CppChar L_21 = (*(Il2CppChar*)L_20);
		CHECKED_LOCAL_INIT(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticInit,(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_22;
		L_22 = Char_Equals_mEA7BFB45790C973DF6352091FA924B3FB2EFCE4B(L_16, L_21, NULL);
		if (!L_22)
		{
			goto IL_028b;
		}
	}
	{
		Il2CppChar* L_23 = ___0_first;
		intptr_t L_24 = V_0;
		intptr_t L_25;
		L_25 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_24, 2, NULL);
		Il2CppChar* L_26;
		L_26 = il2cpp_unsafe_add<Il2CppChar,intptr_t>(L_23, L_25, sizeof(Il2CppChar));
		Il2CppChar* L_27 = ___1_second;
		intptr_t L_28 = V_0;
		intptr_t L_29;
		L_29 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_28, 2, NULL);
		Il2CppChar* L_30;
		L_30 = il2cpp_unsafe_add<Il2CppChar,intptr_t>(L_27, L_29, sizeof(Il2CppChar));
		Il2CppChar L_31 = (*(Il2CppChar*)L_30);
		CHECKED_LOCAL_INIT(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticInit,(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_32;
		L_32 = Char_Equals_mEA7BFB45790C973DF6352091FA924B3FB2EFCE4B(L_26, L_31, NULL);
		if (!L_32)
		{
			goto IL_028b;
		}
	}
	{
		Il2CppChar* L_33 = ___0_first;
		intptr_t L_34 = V_0;
		intptr_t L_35;
		L_35 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_34, 3, NULL);
		Il2CppChar* L_36;
		L_36 = il2cpp_unsafe_add<Il2CppChar,intptr_t>(L_33, L_35, sizeof(Il2CppChar));
		Il2CppChar* L_37 = ___1_second;
		intptr_t L_38 = V_0;
		intptr_t L_39;
		L_39 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_38, 3, NULL);
		Il2CppChar* L_40;
		L_40 = il2cpp_unsafe_add<Il2CppChar,intptr_t>(L_37, L_39, sizeof(Il2CppChar));
		Il2CppChar L_41 = (*(Il2CppChar*)L_40);
		CHECKED_LOCAL_INIT(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticInit,(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_42;
		L_42 = Char_Equals_mEA7BFB45790C973DF6352091FA924B3FB2EFCE4B(L_36, L_41, NULL);
		if (!L_42)
		{
			goto IL_028b;
		}
	}
	{
		Il2CppChar* L_43 = ___0_first;
		intptr_t L_44 = V_0;
		intptr_t L_45;
		L_45 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_44, 4, NULL);
		Il2CppChar* L_46;
		L_46 = il2cpp_unsafe_add<Il2CppChar,intptr_t>(L_43, L_45, sizeof(Il2CppChar));
		Il2CppChar* L_47 = ___1_second;
		intptr_t L_48 = V_0;
		intptr_t L_49;
		L_49 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_48, 4, NULL);
		Il2CppChar* L_50;
		L_50 = il2cpp_unsafe_add<Il2CppChar,intptr_t>(L_47, L_49, sizeof(Il2CppChar));
		Il2CppChar L_51 = (*(Il2CppChar*)L_50);
		CHECKED_LOCAL_INIT(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticInit,(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_52;
		L_52 = Char_Equals_mEA7BFB45790C973DF6352091FA924B3FB2EFCE4B(L_46, L_51, NULL);
		if (!L_52)
		{
			goto IL_028b;
		}
	}
	{
		Il2CppChar* L_53 = ___0_first;
		intptr_t L_54 = V_0;
		intptr_t L_55;
		L_55 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_54, 5, NULL);
		Il2CppChar* L_56;
		L_56 = il2cpp_unsafe_add<Il2CppChar,intptr_t>(L_53, L_55, sizeof(Il2CppChar));
		Il2CppChar* L_57 = ___1_second;
		intptr_t L_58 = V_0;
		intptr_t L_59;
		L_59 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_58, 5, NULL);
		Il2CppChar* L_60;
		L_60 = il2cpp_unsafe_add<Il2CppChar,intptr_t>(L_57, L_59, sizeof(Il2CppChar));
		Il2CppChar L_61 = (*(Il2CppChar*)L_60);
		CHECKED_LOCAL_INIT(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticInit,(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_62;
		L_62 = Char_Equals_mEA7BFB45790C973DF6352091FA924B3FB2EFCE4B(L_56, L_61, NULL);
		if (!L_62)
		{
			goto IL_028b;
		}
	}
	{
		Il2CppChar* L_63 = ___0_first;
		intptr_t L_64 = V_0;
		intptr_t L_65;
		L_65 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_64, 6, NULL);
		Il2CppChar* L_66;
		L_66 = il2cpp_unsafe_add<Il2CppChar,intptr_t>(L_63, L_65, sizeof(Il2CppChar));
		Il2CppChar* L_67 = ___1_second;
		intptr_t L_68 = V_0;
		intptr_t L_69;
		L_69 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_68, 6, NULL);
		Il2CppChar* L_70;
		L_70 = il2cpp_unsafe_add<Il2CppChar,intptr_t>(L_67, L_69, sizeof(Il2CppChar));
		Il2CppChar L_71 = (*(Il2CppChar*)L_70);
		CHECKED_LOCAL_INIT(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticInit,(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_72;
		L_72 = Char_Equals_mEA7BFB45790C973DF6352091FA924B3FB2EFCE4B(L_66, L_71, NULL);
		if (!L_72)
		{
			goto IL_028b;
		}
	}
	{
		Il2CppChar* L_73 = ___0_first;
		intptr_t L_74 = V_0;
		intptr_t L_75;
		L_75 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_74, 7, NULL);
		Il2CppChar* L_76;
		L_76 = il2cpp_unsafe_add<Il2CppChar,intptr_t>(L_73, L_75, sizeof(Il2CppChar));
		Il2CppChar* L_77 = ___1_second;
		intptr_t L_78 = V_0;
		intptr_t L_79;
		L_79 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_78, 7, NULL);
		Il2CppChar* L_80;
		L_80 = il2cpp_unsafe_add<Il2CppChar,intptr_t>(L_77, L_79, sizeof(Il2CppChar));
		Il2CppChar L_81 = (*(Il2CppChar*)L_80);
		CHECKED_LOCAL_INIT(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticInit,(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_82;
		L_82 = Char_Equals_mEA7BFB45790C973DF6352091FA924B3FB2EFCE4B(L_76, L_81, NULL);
		if (!L_82)
		{
			goto IL_028b;
		}
	}
	{
		intptr_t L_83 = V_0;
		intptr_t L_84;
		L_84 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_83, 8, NULL);
		V_0 = L_84;
	}

IL_0191:
	{
		int32_t L_85 = ___2_length;
		if ((((int32_t)L_85) >= ((int32_t)8)))
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_86 = ___2_length;
		if ((((int32_t)L_86) < ((int32_t)4)))
		{
			goto IL_0285;
		}
	}
	{
		int32_t L_87 = ___2_length;
		___2_length = ((int32_t)il2cpp_codegen_subtract(L_87, 4));
		Il2CppChar* L_88 = ___0_first;
		intptr_t L_89 = V_0;
		Il2CppChar* L_90;
		L_90 = il2cpp_unsafe_add<Il2CppChar,intptr_t>(L_88, L_89, sizeof(Il2CppChar));
		Il2CppChar* L_91 = ___1_second;
		intptr_t L_92 = V_0;
		Il2CppChar* L_93;
		L_93 = il2cpp_unsafe_add<Il2CppChar,intptr_t>(L_91, L_92, sizeof(Il2CppChar));
		Il2CppChar L_94 = (*(Il2CppChar*)L_93);
		CHECKED_LOCAL_INIT(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticInit,(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_95;
		L_95 = Char_Equals_mEA7BFB45790C973DF6352091FA924B3FB2EFCE4B(L_90, L_94, NULL);
		if (!L_95)
		{
			goto IL_028b;
		}
	}
	{
		Il2CppChar* L_96 = ___0_first;
		intptr_t L_97 = V_0;
		intptr_t L_98;
		L_98 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_97, 1, NULL);
		Il2CppChar* L_99;
		L_99 = il2cpp_unsafe_add<Il2CppChar,intptr_t>(L_96, L_98, sizeof(Il2CppChar));
		Il2CppChar* L_100 = ___1_second;
		intptr_t L_101 = V_0;
		intptr_t L_102;
		L_102 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_101, 1, NULL);
		Il2CppChar* L_103;
		L_103 = il2cpp_unsafe_add<Il2CppChar,intptr_t>(L_100, L_102, sizeof(Il2CppChar));
		Il2CppChar L_104 = (*(Il2CppChar*)L_103);
		CHECKED_LOCAL_INIT(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticInit,(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_105;
		L_105 = Char_Equals_mEA7BFB45790C973DF6352091FA924B3FB2EFCE4B(L_99, L_104, NULL);
		if (!L_105)
		{
			goto IL_028b;
		}
	}
	{
		Il2CppChar* L_106 = ___0_first;
		intptr_t L_107 = V_0;
		intptr_t L_108;
		L_108 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_107, 2, NULL);
		Il2CppChar* L_109;
		L_109 = il2cpp_unsafe_add<Il2CppChar,intptr_t>(L_106, L_108, sizeof(Il2CppChar));
		Il2CppChar* L_110 = ___1_second;
		intptr_t L_111 = V_0;
		intptr_t L_112;
		L_112 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_111, 2, NULL);
		Il2CppChar* L_113;
		L_113 = il2cpp_unsafe_add<Il2CppChar,intptr_t>(L_110, L_112, sizeof(Il2CppChar));
		Il2CppChar L_114 = (*(Il2CppChar*)L_113);
		CHECKED_LOCAL_INIT(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticInit,(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_115;
		L_115 = Char_Equals_mEA7BFB45790C973DF6352091FA924B3FB2EFCE4B(L_109, L_114, NULL);
		if (!L_115)
		{
			goto IL_028b;
		}
	}
	{
		Il2CppChar* L_116 = ___0_first;
		intptr_t L_117 = V_0;
		intptr_t L_118;
		L_118 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_117, 3, NULL);
		Il2CppChar* L_119;
		L_119 = il2cpp_unsafe_add<Il2CppChar,intptr_t>(L_116, L_118, sizeof(Il2CppChar));
		Il2CppChar* L_120 = ___1_second;
		intptr_t L_121 = V_0;
		intptr_t L_122;
		L_122 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_121, 3, NULL);
		Il2CppChar* L_123;
		L_123 = il2cpp_unsafe_add<Il2CppChar,intptr_t>(L_120, L_122, sizeof(Il2CppChar));
		Il2CppChar L_124 = (*(Il2CppChar*)L_123);
		CHECKED_LOCAL_INIT(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticInit,(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_125;
		L_125 = Char_Equals_mEA7BFB45790C973DF6352091FA924B3FB2EFCE4B(L_119, L_124, NULL);
		if (!L_125)
		{
			goto IL_028b;
		}
	}
	{
		intptr_t L_126 = V_0;
		intptr_t L_127;
		L_127 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_126, 4, NULL);
		V_0 = L_127;
		goto IL_0285;
	}

IL_0258:
	{
		Il2CppChar* L_128 = ___0_first;
		intptr_t L_129 = V_0;
		Il2CppChar* L_130;
		L_130 = il2cpp_unsafe_add<Il2CppChar,intptr_t>(L_128, L_129, sizeof(Il2CppChar));
		Il2CppChar* L_131 = ___1_second;
		intptr_t L_132 = V_0;
		Il2CppChar* L_133;
		L_133 = il2cpp_unsafe_add<Il2CppChar,intptr_t>(L_131, L_132, sizeof(Il2CppChar));
		Il2CppChar L_134 = (*(Il2CppChar*)L_133);
		CHECKED_LOCAL_INIT(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticInit,(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_135;
		L_135 = Char_Equals_mEA7BFB45790C973DF6352091FA924B3FB2EFCE4B(L_130, L_134, NULL);
		if (!L_135)
		{
			goto IL_028b;
		}
	}
	{
		intptr_t L_136 = V_0;
		intptr_t L_137;
		L_137 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_136, 1, NULL);
		V_0 = L_137;
		int32_t L_138 = ___2_length;
		___2_length = ((int32_t)il2cpp_codegen_subtract(L_138, 1));
	}

IL_0285:
	{
		int32_t L_139 = ___2_length;
		if ((((int32_t)L_139) > ((int32_t)0)))
		{
			goto IL_0258;
		}
	}

IL_0289:
	{
		return (bool)1;
	}

IL_028b:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SpanHelpers_SequenceEqual_TisIl2CppFullySharedGenericAny_mEB89EB892E7BFDB9AB968DFE0A5FEF3AAAE1E424_fshared (Il2CppFullySharedGenericAny* ___0_first, Il2CppFullySharedGenericAny* ___1_second, int32_t ___2_length, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_tA91C6D107131EAE93E450381F49C19A8205A47B5 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	void* L_12 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 1)));
	void* L_25 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 1)));
	void* L_38 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 1)));
	void* L_51 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 1)));
	void* L_64 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 1)));
	void* L_77 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 1)));
	void* L_90 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 1)));
	void* L_103 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 1)));
	void* L_119 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 1)));
	void* L_132 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 1)));
	void* L_145 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 1)));
	void* L_158 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 1)));
	void* L_171 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 1)));
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_T_tA91C6D107131EAE93E450381F49C19A8205A47B5);
	const Il2CppFullySharedGenericAny L_24 = L_11;
	const Il2CppFullySharedGenericAny L_37 = L_11;
	const Il2CppFullySharedGenericAny L_50 = L_11;
	const Il2CppFullySharedGenericAny L_63 = L_11;
	const Il2CppFullySharedGenericAny L_76 = L_11;
	const Il2CppFullySharedGenericAny L_89 = L_11;
	const Il2CppFullySharedGenericAny L_102 = L_11;
	const Il2CppFullySharedGenericAny L_118 = L_11;
	const Il2CppFullySharedGenericAny L_131 = L_11;
	const Il2CppFullySharedGenericAny L_144 = L_11;
	const Il2CppFullySharedGenericAny L_157 = L_11;
	const Il2CppFullySharedGenericAny L_170 = L_11;
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Il2CppFullySharedGenericAny* L_0 = ___0_first;
		Il2CppFullySharedGenericAny* L_1 = ___1_second;
		bool L_2;
		L_2 = il2cpp_unsafe_are_same(L_0, L_1);
		if (L_2)
		{
			goto IL_0289;
		}
	}
	{
		intptr_t L_3;
		L_3 = IntPtr_op_Explicit_m931A344F16D4C65EFB0B492EB07C7A82AF0B9FA1(0, NULL);
		V_0 = L_3;
		goto IL_0191;
	}

IL_0018:
	{
		int32_t L_4 = ___2_length;
		___2_length = ((int32_t)il2cpp_codegen_subtract(L_4, 8));
		Il2CppFullySharedGenericAny* L_5 = ___0_first;
		intptr_t L_6 = V_0;
		Il2CppFullySharedGenericAny* L_7;
		L_7 = il2cpp_unsafe_add<Il2CppFullySharedGenericAny,intptr_t>(L_5, L_6, SizeOf_T_tA91C6D107131EAE93E450381F49C19A8205A47B5);
		Il2CppFullySharedGenericAny* L_8 = ___1_second;
		intptr_t L_9 = V_0;
		Il2CppFullySharedGenericAny* L_10;
		L_10 = il2cpp_unsafe_add<Il2CppFullySharedGenericAny,intptr_t>(L_8, L_9, SizeOf_T_tA91C6D107131EAE93E450381F49C19A8205A47B5);
		il2cpp_codegen_memcpy(L_11, L_10, SizeOf_T_tA91C6D107131EAE93E450381F49C19A8205A47B5);
		Il2CppConstrainedCallData L_13;
		Il2CppMethodPointer L_14 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(method->rgctx_data, 1), il2cpp_rgctx_method(method->rgctx_data, 2), (void*)L_7, &L_13, L_12);
		bool L_15 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(L_14, L_13.method,L_13.thisPtr, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? L_11: *(void**)L_11));
		if (!L_15)
		{
			goto IL_028b;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_16 = ___0_first;
		intptr_t L_17 = V_0;
		intptr_t L_18;
		L_18 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_17, 1, NULL);
		Il2CppFullySharedGenericAny* L_19;
		L_19 = il2cpp_unsafe_add<Il2CppFullySharedGenericAny,intptr_t>(L_16, L_18, SizeOf_T_tA91C6D107131EAE93E450381F49C19A8205A47B5);
		Il2CppFullySharedGenericAny* L_20 = ___1_second;
		intptr_t L_21 = V_0;
		intptr_t L_22;
		L_22 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_21, 1, NULL);
		Il2CppFullySharedGenericAny* L_23;
		L_23 = il2cpp_unsafe_add<Il2CppFullySharedGenericAny,intptr_t>(L_20, L_22, SizeOf_T_tA91C6D107131EAE93E450381F49C19A8205A47B5);
		il2cpp_codegen_memcpy(L_24, L_23, SizeOf_T_tA91C6D107131EAE93E450381F49C19A8205A47B5);
		Il2CppConstrainedCallData L_26;
		Il2CppMethodPointer L_27 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(method->rgctx_data, 1), il2cpp_rgctx_method(method->rgctx_data, 2), (void*)L_19, &L_26, L_25);
		bool L_28 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(L_27, L_26.method,L_26.thisPtr, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? L_24: *(void**)L_24));
		if (!L_28)
		{
			goto IL_028b;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_29 = ___0_first;
		intptr_t L_30 = V_0;
		intptr_t L_31;
		L_31 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_30, 2, NULL);
		Il2CppFullySharedGenericAny* L_32;
		L_32 = il2cpp_unsafe_add<Il2CppFullySharedGenericAny,intptr_t>(L_29, L_31, SizeOf_T_tA91C6D107131EAE93E450381F49C19A8205A47B5);
		Il2CppFullySharedGenericAny* L_33 = ___1_second;
		intptr_t L_34 = V_0;
		intptr_t L_35;
		L_35 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_34, 2, NULL);
		Il2CppFullySharedGenericAny* L_36;
		L_36 = il2cpp_unsafe_add<Il2CppFullySharedGenericAny,intptr_t>(L_33, L_35, SizeOf_T_tA91C6D107131EAE93E450381F49C19A8205A47B5);
		il2cpp_codegen_memcpy(L_37, L_36, SizeOf_T_tA91C6D107131EAE93E450381F49C19A8205A47B5);
		Il2CppConstrainedCallData L_39;
		Il2CppMethodPointer L_40 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(method->rgctx_data, 1), il2cpp_rgctx_method(method->rgctx_data, 2), (void*)L_32, &L_39, L_38);
		bool L_41 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(L_40, L_39.method,L_39.thisPtr, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? L_37: *(void**)L_37));
		if (!L_41)
		{
			goto IL_028b;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_42 = ___0_first;
		intptr_t L_43 = V_0;
		intptr_t L_44;
		L_44 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_43, 3, NULL);
		Il2CppFullySharedGenericAny* L_45;
		L_45 = il2cpp_unsafe_add<Il2CppFullySharedGenericAny,intptr_t>(L_42, L_44, SizeOf_T_tA91C6D107131EAE93E450381F49C19A8205A47B5);
		Il2CppFullySharedGenericAny* L_46 = ___1_second;
		intptr_t L_47 = V_0;
		intptr_t L_48;
		L_48 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_47, 3, NULL);
		Il2CppFullySharedGenericAny* L_49;
		L_49 = il2cpp_unsafe_add<Il2CppFullySharedGenericAny,intptr_t>(L_46, L_48, SizeOf_T_tA91C6D107131EAE93E450381F49C19A8205A47B5);
		il2cpp_codegen_memcpy(L_50, L_49, SizeOf_T_tA91C6D107131EAE93E450381F49C19A8205A47B5);
		Il2CppConstrainedCallData L_52;
		Il2CppMethodPointer L_53 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(method->rgctx_data, 1), il2cpp_rgctx_method(method->rgctx_data, 2), (void*)L_45, &L_52, L_51);
		bool L_54 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(L_53, L_52.method,L_52.thisPtr, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? L_50: *(void**)L_50));
		if (!L_54)
		{
			goto IL_028b;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_55 = ___0_first;
		intptr_t L_56 = V_0;
		intptr_t L_57;
		L_57 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_56, 4, NULL);
		Il2CppFullySharedGenericAny* L_58;
		L_58 = il2cpp_unsafe_add<Il2CppFullySharedGenericAny,intptr_t>(L_55, L_57, SizeOf_T_tA91C6D107131EAE93E450381F49C19A8205A47B5);
		Il2CppFullySharedGenericAny* L_59 = ___1_second;
		intptr_t L_60 = V_0;
		intptr_t L_61;
		L_61 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_60, 4, NULL);
		Il2CppFullySharedGenericAny* L_62;
		L_62 = il2cpp_unsafe_add<Il2CppFullySharedGenericAny,intptr_t>(L_59, L_61, SizeOf_T_tA91C6D107131EAE93E450381F49C19A8205A47B5);
		il2cpp_codegen_memcpy(L_63, L_62, SizeOf_T_tA91C6D107131EAE93E450381F49C19A8205A47B5);
		Il2CppConstrainedCallData L_65;
		Il2CppMethodPointer L_66 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(method->rgctx_data, 1), il2cpp_rgctx_method(method->rgctx_data, 2), (void*)L_58, &L_65, L_64);
		bool L_67 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(L_66, L_65.method,L_65.thisPtr, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? L_63: *(void**)L_63));
		if (!L_67)
		{
			goto IL_028b;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_68 = ___0_first;
		intptr_t L_69 = V_0;
		intptr_t L_70;
		L_70 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_69, 5, NULL);
		Il2CppFullySharedGenericAny* L_71;
		L_71 = il2cpp_unsafe_add<Il2CppFullySharedGenericAny,intptr_t>(L_68, L_70, SizeOf_T_tA91C6D107131EAE93E450381F49C19A8205A47B5);
		Il2CppFullySharedGenericAny* L_72 = ___1_second;
		intptr_t L_73 = V_0;
		intptr_t L_74;
		L_74 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_73, 5, NULL);
		Il2CppFullySharedGenericAny* L_75;
		L_75 = il2cpp_unsafe_add<Il2CppFullySharedGenericAny,intptr_t>(L_72, L_74, SizeOf_T_tA91C6D107131EAE93E450381F49C19A8205A47B5);
		il2cpp_codegen_memcpy(L_76, L_75, SizeOf_T_tA91C6D107131EAE93E450381F49C19A8205A47B5);
		Il2CppConstrainedCallData L_78;
		Il2CppMethodPointer L_79 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(method->rgctx_data, 1), il2cpp_rgctx_method(method->rgctx_data, 2), (void*)L_71, &L_78, L_77);
		bool L_80 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(L_79, L_78.method,L_78.thisPtr, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? L_76: *(void**)L_76));
		if (!L_80)
		{
			goto IL_028b;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_81 = ___0_first;
		intptr_t L_82 = V_0;
		intptr_t L_83;
		L_83 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_82, 6, NULL);
		Il2CppFullySharedGenericAny* L_84;
		L_84 = il2cpp_unsafe_add<Il2CppFullySharedGenericAny,intptr_t>(L_81, L_83, SizeOf_T_tA91C6D107131EAE93E450381F49C19A8205A47B5);
		Il2CppFullySharedGenericAny* L_85 = ___1_second;
		intptr_t L_86 = V_0;
		intptr_t L_87;
		L_87 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_86, 6, NULL);
		Il2CppFullySharedGenericAny* L_88;
		L_88 = il2cpp_unsafe_add<Il2CppFullySharedGenericAny,intptr_t>(L_85, L_87, SizeOf_T_tA91C6D107131EAE93E450381F49C19A8205A47B5);
		il2cpp_codegen_memcpy(L_89, L_88, SizeOf_T_tA91C6D107131EAE93E450381F49C19A8205A47B5);
		Il2CppConstrainedCallData L_91;
		Il2CppMethodPointer L_92 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(method->rgctx_data, 1), il2cpp_rgctx_method(method->rgctx_data, 2), (void*)L_84, &L_91, L_90);
		bool L_93 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(L_92, L_91.method,L_91.thisPtr, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? L_89: *(void**)L_89));
		if (!L_93)
		{
			goto IL_028b;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_94 = ___0_first;
		intptr_t L_95 = V_0;
		intptr_t L_96;
		L_96 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_95, 7, NULL);
		Il2CppFullySharedGenericAny* L_97;
		L_97 = il2cpp_unsafe_add<Il2CppFullySharedGenericAny,intptr_t>(L_94, L_96, SizeOf_T_tA91C6D107131EAE93E450381F49C19A8205A47B5);
		Il2CppFullySharedGenericAny* L_98 = ___1_second;
		intptr_t L_99 = V_0;
		intptr_t L_100;
		L_100 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_99, 7, NULL);
		Il2CppFullySharedGenericAny* L_101;
		L_101 = il2cpp_unsafe_add<Il2CppFullySharedGenericAny,intptr_t>(L_98, L_100, SizeOf_T_tA91C6D107131EAE93E450381F49C19A8205A47B5);
		il2cpp_codegen_memcpy(L_102, L_101, SizeOf_T_tA91C6D107131EAE93E450381F49C19A8205A47B5);
		Il2CppConstrainedCallData L_104;
		Il2CppMethodPointer L_105 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(method->rgctx_data, 1), il2cpp_rgctx_method(method->rgctx_data, 2), (void*)L_97, &L_104, L_103);
		bool L_106 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(L_105, L_104.method,L_104.thisPtr, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? L_102: *(void**)L_102));
		if (!L_106)
		{
			goto IL_028b;
		}
	}
	{
		intptr_t L_107 = V_0;
		intptr_t L_108;
		L_108 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_107, 8, NULL);
		V_0 = L_108;
	}

IL_0191:
	{
		int32_t L_109 = ___2_length;
		if ((((int32_t)L_109) >= ((int32_t)8)))
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_110 = ___2_length;
		if ((((int32_t)L_110) < ((int32_t)4)))
		{
			goto IL_0285;
		}
	}
	{
		int32_t L_111 = ___2_length;
		___2_length = ((int32_t)il2cpp_codegen_subtract(L_111, 4));
		Il2CppFullySharedGenericAny* L_112 = ___0_first;
		intptr_t L_113 = V_0;
		Il2CppFullySharedGenericAny* L_114;
		L_114 = il2cpp_unsafe_add<Il2CppFullySharedGenericAny,intptr_t>(L_112, L_113, SizeOf_T_tA91C6D107131EAE93E450381F49C19A8205A47B5);
		Il2CppFullySharedGenericAny* L_115 = ___1_second;
		intptr_t L_116 = V_0;
		Il2CppFullySharedGenericAny* L_117;
		L_117 = il2cpp_unsafe_add<Il2CppFullySharedGenericAny,intptr_t>(L_115, L_116, SizeOf_T_tA91C6D107131EAE93E450381F49C19A8205A47B5);
		il2cpp_codegen_memcpy(L_118, L_117, SizeOf_T_tA91C6D107131EAE93E450381F49C19A8205A47B5);
		Il2CppConstrainedCallData L_120;
		Il2CppMethodPointer L_121 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(method->rgctx_data, 1), il2cpp_rgctx_method(method->rgctx_data, 2), (void*)L_114, &L_120, L_119);
		bool L_122 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(L_121, L_120.method,L_120.thisPtr, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? L_118: *(void**)L_118));
		if (!L_122)
		{
			goto IL_028b;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_123 = ___0_first;
		intptr_t L_124 = V_0;
		intptr_t L_125;
		L_125 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_124, 1, NULL);
		Il2CppFullySharedGenericAny* L_126;
		L_126 = il2cpp_unsafe_add<Il2CppFullySharedGenericAny,intptr_t>(L_123, L_125, SizeOf_T_tA91C6D107131EAE93E450381F49C19A8205A47B5);
		Il2CppFullySharedGenericAny* L_127 = ___1_second;
		intptr_t L_128 = V_0;
		intptr_t L_129;
		L_129 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_128, 1, NULL);
		Il2CppFullySharedGenericAny* L_130;
		L_130 = il2cpp_unsafe_add<Il2CppFullySharedGenericAny,intptr_t>(L_127, L_129, SizeOf_T_tA91C6D107131EAE93E450381F49C19A8205A47B5);
		il2cpp_codegen_memcpy(L_131, L_130, SizeOf_T_tA91C6D107131EAE93E450381F49C19A8205A47B5);
		Il2CppConstrainedCallData L_133;
		Il2CppMethodPointer L_134 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(method->rgctx_data, 1), il2cpp_rgctx_method(method->rgctx_data, 2), (void*)L_126, &L_133, L_132);
		bool L_135 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(L_134, L_133.method,L_133.thisPtr, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? L_131: *(void**)L_131));
		if (!L_135)
		{
			goto IL_028b;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_136 = ___0_first;
		intptr_t L_137 = V_0;
		intptr_t L_138;
		L_138 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_137, 2, NULL);
		Il2CppFullySharedGenericAny* L_139;
		L_139 = il2cpp_unsafe_add<Il2CppFullySharedGenericAny,intptr_t>(L_136, L_138, SizeOf_T_tA91C6D107131EAE93E450381F49C19A8205A47B5);
		Il2CppFullySharedGenericAny* L_140 = ___1_second;
		intptr_t L_141 = V_0;
		intptr_t L_142;
		L_142 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_141, 2, NULL);
		Il2CppFullySharedGenericAny* L_143;
		L_143 = il2cpp_unsafe_add<Il2CppFullySharedGenericAny,intptr_t>(L_140, L_142, SizeOf_T_tA91C6D107131EAE93E450381F49C19A8205A47B5);
		il2cpp_codegen_memcpy(L_144, L_143, SizeOf_T_tA91C6D107131EAE93E450381F49C19A8205A47B5);
		Il2CppConstrainedCallData L_146;
		Il2CppMethodPointer L_147 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(method->rgctx_data, 1), il2cpp_rgctx_method(method->rgctx_data, 2), (void*)L_139, &L_146, L_145);
		bool L_148 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(L_147, L_146.method,L_146.thisPtr, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? L_144: *(void**)L_144));
		if (!L_148)
		{
			goto IL_028b;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_149 = ___0_first;
		intptr_t L_150 = V_0;
		intptr_t L_151;
		L_151 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_150, 3, NULL);
		Il2CppFullySharedGenericAny* L_152;
		L_152 = il2cpp_unsafe_add<Il2CppFullySharedGenericAny,intptr_t>(L_149, L_151, SizeOf_T_tA91C6D107131EAE93E450381F49C19A8205A47B5);
		Il2CppFullySharedGenericAny* L_153 = ___1_second;
		intptr_t L_154 = V_0;
		intptr_t L_155;
		L_155 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_154, 3, NULL);
		Il2CppFullySharedGenericAny* L_156;
		L_156 = il2cpp_unsafe_add<Il2CppFullySharedGenericAny,intptr_t>(L_153, L_155, SizeOf_T_tA91C6D107131EAE93E450381F49C19A8205A47B5);
		il2cpp_codegen_memcpy(L_157, L_156, SizeOf_T_tA91C6D107131EAE93E450381F49C19A8205A47B5);
		Il2CppConstrainedCallData L_159;
		Il2CppMethodPointer L_160 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(method->rgctx_data, 1), il2cpp_rgctx_method(method->rgctx_data, 2), (void*)L_152, &L_159, L_158);
		bool L_161 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(L_160, L_159.method,L_159.thisPtr, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? L_157: *(void**)L_157));
		if (!L_161)
		{
			goto IL_028b;
		}
	}
	{
		intptr_t L_162 = V_0;
		intptr_t L_163;
		L_163 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_162, 4, NULL);
		V_0 = L_163;
		goto IL_0285;
	}

IL_0258:
	{
		Il2CppFullySharedGenericAny* L_164 = ___0_first;
		intptr_t L_165 = V_0;
		Il2CppFullySharedGenericAny* L_166;
		L_166 = il2cpp_unsafe_add<Il2CppFullySharedGenericAny,intptr_t>(L_164, L_165, SizeOf_T_tA91C6D107131EAE93E450381F49C19A8205A47B5);
		Il2CppFullySharedGenericAny* L_167 = ___1_second;
		intptr_t L_168 = V_0;
		Il2CppFullySharedGenericAny* L_169;
		L_169 = il2cpp_unsafe_add<Il2CppFullySharedGenericAny,intptr_t>(L_167, L_168, SizeOf_T_tA91C6D107131EAE93E450381F49C19A8205A47B5);
		il2cpp_codegen_memcpy(L_170, L_169, SizeOf_T_tA91C6D107131EAE93E450381F49C19A8205A47B5);
		Il2CppConstrainedCallData L_172;
		Il2CppMethodPointer L_173 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(method->rgctx_data, 1), il2cpp_rgctx_method(method->rgctx_data, 2), (void*)L_166, &L_172, L_171);
		bool L_174 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(L_173, L_172.method,L_172.thisPtr, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? L_170: *(void**)L_170));
		if (!L_174)
		{
			goto IL_028b;
		}
	}
	{
		intptr_t L_175 = V_0;
		intptr_t L_176;
		L_176 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_175, 1, NULL);
		V_0 = L_176;
		int32_t L_177 = ___2_length;
		___2_length = ((int32_t)il2cpp_codegen_subtract(L_177, 1));
	}

IL_0285:
	{
		int32_t L_178 = ___2_length;
		if ((((int32_t)L_178) > ((int32_t)0)))
		{
			goto IL_0258;
		}
	}

IL_0289:
	{
		return (bool)1;
	}

IL_028b:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Create_TisValueTuple_3_t94AB360726755BBED1ED3E10C22F399AE18E226E_mE81F2343FC0D6B9171E80190021EB7A07A47A562_gshared (int32_t ___0_length, ValueTuple_3_t94AB360726755BBED1ED3E10C22F399AE18E226E ___1_state, SpanAction_2_t7E9C729D70F4264C725B3A5B383D01398D40CB63* ___2_action, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		SpanAction_2_t7E9C729D70F4264C725B3A5B383D01398D40CB63* L_0 = ___2_action;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF9010398F7F524C05AB19445BDCE02E617A3E267)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = ___0_length;
		if ((((int32_t)L_2) > ((int32_t)0)))
		{
			goto IL_0026;
		}
	}
	{
		int32_t L_3 = ___0_length;
		if (L_3)
		{
			goto IL_001b;
		}
	}
	{
		String_t* L_4 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty;
		return L_4;
	}

IL_001b:
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_5 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, method);
	}

IL_0026:
	{
		int32_t L_6 = ___0_length;
		String_t* L_7;
		L_7 = String_FastAllocateString_m071BD33B9EFB2375443E1550C028861164D0F104(L_6, NULL);
		V_0 = L_7;
		SpanAction_2_t7E9C729D70F4264C725B3A5B383D01398D40CB63* L_8 = ___2_action;
		String_t* L_9 = V_0;
		Il2CppChar* L_10;
		L_10 = String_GetRawStringData_m87BC50B7B314C055E27A28032D1003D42FDE411D(L_9, NULL);
		int32_t L_11 = ___0_length;
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D L_12;
		memset((&L_12), 0, sizeof(L_12));
		Span_1__ctor_mC9BE2938B716B46BB6B9070B94DBE5CE814BC0E2_inline((&L_12), L_10, L_11, NULL);
		ValueTuple_3_t94AB360726755BBED1ED3E10C22F399AE18E226E L_13 = ___1_state;
		SpanAction_2_Invoke_m47CBAA653C2AF4E0B4D3CA9600C55A94FA090732_inline(L_8, L_12, L_13, NULL);
		String_t* L_14 = V_0;
		return L_14;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Create_TisValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57_mC8713BB789582FA498F3A9BDD075B77794145A53 (int32_t ___0_length, ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57 ___1_state, SpanAction_2_t84FDFFEECCC96A9A407DCB490E60340E38185947* ___2_action, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		SpanAction_2_t84FDFFEECCC96A9A407DCB490E60340E38185947* L_0 = ___2_action;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF9010398F7F524C05AB19445BDCE02E617A3E267)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = ___0_length;
		if ((((int32_t)L_2) > ((int32_t)0)))
		{
			goto IL_0026;
		}
	}
	{
		int32_t L_3 = ___0_length;
		if (L_3)
		{
			goto IL_001b;
		}
	}
	{
		String_t* L_4 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty;
		return L_4;
	}

IL_001b:
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_5 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, method);
	}

IL_0026:
	{
		int32_t L_6 = ___0_length;
		String_t* L_7;
		L_7 = String_FastAllocateString_m071BD33B9EFB2375443E1550C028861164D0F104(L_6, NULL);
		V_0 = L_7;
		SpanAction_2_t84FDFFEECCC96A9A407DCB490E60340E38185947* L_8 = ___2_action;
		String_t* L_9 = V_0;
		Il2CppChar* L_10;
		L_10 = String_GetRawStringData_m87BC50B7B314C055E27A28032D1003D42FDE411D(L_9, NULL);
		int32_t L_11 = ___0_length;
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D L_12;
		memset((&L_12), 0, sizeof(L_12));
		Span_1__ctor_mC9BE2938B716B46BB6B9070B94DBE5CE814BC0E2_inline((&L_12), L_10, L_11, NULL);
		ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57 L_13 = ___1_state;
		SpanAction_2_Invoke_m65D110A8BF9027F070FA8CF53AF75D47A98C6E2A_inline(L_8, L_12, L_13, NULL);
		String_t* L_14 = V_0;
		return L_14;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Create_TisIl2CppFullySharedGenericAny_m9AD9A2FD15EE0B25DC884BEF778D0D414364F9CA_fshared (int32_t ___0_length, Il2CppFullySharedGenericAny ___1_state, SpanAction_2_tDD4C82B5E0425EE8AD03A2BB704E9D1FA491820A* ___2_action, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_TState_tF86514A7FB385D80584CE625C93D41AE0EAEF433 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	const Il2CppFullySharedGenericAny L_13 = alloca(SizeOf_TState_tF86514A7FB385D80584CE625C93D41AE0EAEF433);
	String_t* V_0 = NULL;
	{
		SpanAction_2_tDD4C82B5E0425EE8AD03A2BB704E9D1FA491820A* L_0 = ___2_action;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF9010398F7F524C05AB19445BDCE02E617A3E267)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = ___0_length;
		if ((((int32_t)L_2) > ((int32_t)0)))
		{
			goto IL_0026;
		}
	}
	{
		int32_t L_3 = ___0_length;
		if (L_3)
		{
			goto IL_001b;
		}
	}
	{
		String_t* L_4 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty;
		return L_4;
	}

IL_001b:
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_5 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, method);
	}

IL_0026:
	{
		int32_t L_6 = ___0_length;
		String_t* L_7;
		L_7 = String_FastAllocateString_m071BD33B9EFB2375443E1550C028861164D0F104(L_6, NULL);
		V_0 = L_7;
		SpanAction_2_tDD4C82B5E0425EE8AD03A2BB704E9D1FA491820A* L_8 = ___2_action;
		String_t* L_9 = V_0;
		Il2CppChar* L_10;
		L_10 = String_GetRawStringData_m87BC50B7B314C055E27A28032D1003D42FDE411D(L_9, NULL);
		int32_t L_11 = ___0_length;
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D L_12;
		memset((&L_12), 0, sizeof(L_12));
		Span_1__ctor_mC9BE2938B716B46BB6B9070B94DBE5CE814BC0E2_inline((&L_12), L_10, L_11, NULL);
		il2cpp_codegen_memcpy(L_13, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___1_state : &___1_state), SizeOf_TState_tF86514A7FB385D80584CE625C93D41AE0EAEF433);
		InvokerActionInvoker2< Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), L_8, L_12, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? L_13: *(void**)L_13));
		String_t* L_14 = V_0;
		return L_14;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_AppendSpanFormattable_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m7B15D251663E1D9C147CD9DA1A8908CACF877570 (StringBuilder_t* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_StaticInit);
	{
		CHECKED_LOCAL_INIT(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_StaticInit,(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_0;
		L_0 = CultureInfo_get_CurrentCulture_m8A4580F49DDD7E9DB34C699965423DB8E3BBA9A5(NULL);
		String_t* L_1;
		L_1 = Int32_ToString_mE871810BC163EE4EF88E7C7682A6AD39911173B8((&___0_value), (String_t*)NULL, L_0, NULL);
		StringBuilder_t* L_2;
		L_2 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(__this, L_1, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_AppendSpanFormattable_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m61F274B553164EF6FB0CB7D16AED9687CE7CA5FC (StringBuilder_t* __this, uint32_t ___0_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_StaticInit);
	{
		CHECKED_LOCAL_INIT(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_StaticInit,(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_0;
		L_0 = CultureInfo_get_CurrentCulture_m8A4580F49DDD7E9DB34C699965423DB8E3BBA9A5(NULL);
		String_t* L_1;
		L_1 = UInt32_ToString_m464396B0FE2115F3CEA38AEECDDB0FACC3AADADE((&___0_value), (String_t*)NULL, L_0, NULL);
		StringBuilder_t* L_2;
		L_2 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(__this, L_1, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_AppendSpanFormattable_TisIl2CppFullySharedGenericAny_mF50A5C2F631F6F4450B612A08A50CA5E6DC58AEC_fshared (StringBuilder_t* __this, Il2CppFullySharedGenericAny ___0_value, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	CHECKED_LOCAL(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_StaticInit);
	void* L_1 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 0)));
	{
		CHECKED_LOCAL_INIT(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_StaticInit,(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_0;
		L_0 = CultureInfo_get_CurrentCulture_m8A4580F49DDD7E9DB34C699965423DB8E3BBA9A5(NULL);
		Il2CppConstrainedCallData L_2;
		Il2CppMethodPointer L_3 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(method->rgctx_data, 0), il2cpp_rgctx_method(method->rgctx_data, 1), (void*)(Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___0_value : &___0_value), &L_2, L_1);
		typedef String_t* ( *func_L_4)(void*,String_t*,RuntimeObject*,const RuntimeMethod*);
		String_t* L_5 = ((func_L_4)L_3)(L_2.thisPtr, (String_t*)NULL, L_0,L_2.method);
		StringBuilder_t* L_6;
		L_6 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(__this, L_5, NULL);
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t824317F4B958F7512E8F7300511752937A6C6043* Task_FromCancellation_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mB63359289167D8DDD29CD440525186BE9586873A (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___0_cancellationToken, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_StaticInit);
	bool V_0 = false;
	{
		CHECKED_LOCAL_INIT(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_StaticInit,(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_0;
		L_0 = CancellationToken_get_IsCancellationRequested_m9744F7A1A82946FDD1DC68E905F1ED826471D350((&___0_cancellationToken), NULL);
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_1 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC4ADC60D7B4D387FB421586A9B670B3D4B8A0775)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(bool));
		bool L_2 = V_0;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_3 = ___0_cancellationToken;
		Task_1_t824317F4B958F7512E8F7300511752937A6C6043* L_4 = (Task_1_t824317F4B958F7512E8F7300511752937A6C6043*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 1));
		Task_1__ctor_m912F5F25BF780F1B743BCB5FC21FEB08BB05ED52(L_4, (bool)1, L_2, 0, L_3, NULL);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* Task_FromCancellation_TisIl2CppFullySharedGenericAny_m8430FE61464A9242E9DFD47EA2551C8B3F5CD64F_fshared (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___0_cancellationToken, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_TResult_t11213E145EA5AF73864F9DDC4AE028673420DB5B = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	CHECKED_LOCAL(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_StaticInit);
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_TResult_t11213E145EA5AF73864F9DDC4AE028673420DB5B);
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_TResult_t11213E145EA5AF73864F9DDC4AE028673420DB5B);
	memset(V_0, 0, SizeOf_TResult_t11213E145EA5AF73864F9DDC4AE028673420DB5B);
	{
		CHECKED_LOCAL_INIT(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_StaticInit,(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_0;
		L_0 = CancellationToken_get_IsCancellationRequested_m9744F7A1A82946FDD1DC68E905F1ED826471D350((&___0_cancellationToken), NULL);
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_1 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC4ADC60D7B4D387FB421586A9B670B3D4B8A0775)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_0, SizeOf_TResult_t11213E145EA5AF73864F9DDC4AE028673420DB5B);
		il2cpp_codegen_memcpy(L_2, V_0, SizeOf_TResult_t11213E145EA5AF73864F9DDC4AE028673420DB5B);
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_3 = ___0_cancellationToken;
		Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* L_4 = (Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 1));
		InvokerActionInvoker4< bool, Il2CppFullySharedGenericAny, int32_t, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), L_4, (bool)1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? L_2: *(void**)L_2), 0, L_3);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t4C228DE57804012969575431CFF12D57C875552D* Task_FromResult_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mF151895F5C0BBB74AEE7600FA2F777D0A8D1EBC5 (int32_t ___0_result, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		int32_t L_0 = ___0_result;
		Task_1_t4C228DE57804012969575431CFF12D57C875552D* L_1 = (Task_1_t4C228DE57804012969575431CFF12D57C875552D*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 1));
		Task_1__ctor_mB3888CE20043DB96B5E044DF7193D494B41E3DA2(L_1, L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* Task_FromResult_TisIl2CppFullySharedGenericAny_m829FFC9F5B1DFAC382A3E6ABDED634066EADFB21_fshared (Il2CppFullySharedGenericAny ___0_result, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_TResult_t0BA7C9EB0581C5FFDCC03982969E83426BAAB98E = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TResult_t0BA7C9EB0581C5FFDCC03982969E83426BAAB98E);
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___0_result : &___0_result), SizeOf_TResult_t0BA7C9EB0581C5FFDCC03982969E83426BAAB98E);
		Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* L_1 = (Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 1));
		InvokerActionInvoker1< Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? L_0: *(void**)L_0));
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextGeneratorUtilities_ResizeInternalArray_TisTextProcessingElement_tDCD1EAF9D54829E796F4F9726D63B205344C7698_m6782229814169B966E0C9A291CDB9DBCCB5067D4 (TextProcessingElementU5BU5D_t24A1E4C8745577D794FE856B4236875595E7FD22** ___0_array, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	{
		TextProcessingElementU5BU5D_t24A1E4C8745577D794FE856B4236875595E7FD22** L_0 = ___0_array;
		TextProcessingElementU5BU5D_t24A1E4C8745577D794FE856B4236875595E7FD22* L_1 = *(L_0);
		int32_t L_2 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_1)->max_length),NULL));
		int32_t L_3;
		L_3 = Mathf_NextPowerOfTwo_mA1CE7F3EEF9B0B07AB2D586C030ED236D578F485_inline(((int32_t)il2cpp_codegen_add(L_2, 1)), NULL);
		V_0 = L_3;
		TextProcessingElementU5BU5D_t24A1E4C8745577D794FE856B4236875595E7FD22** L_4 = ___0_array;
		int32_t L_5 = V_0;
		Array_Resize_TisTextProcessingElement_tDCD1EAF9D54829E796F4F9726D63B205344C7698_mD70DF9176547529A9B644ECE46B999E7B347354E(L_4, L_5, il2cpp_rgctx_method(method->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextGeneratorUtilities_ResizeInternalArray_TisIl2CppFullySharedGenericAny_m6DA80337B38B359E2C0ED89B0491833F56AAC546_fshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** ___0_array, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** L_0 = ___0_array;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1 = *(L_0);
		int32_t L_2 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_1)->max_length),NULL));
		int32_t L_3;
		L_3 = Mathf_NextPowerOfTwo_mA1CE7F3EEF9B0B07AB2D586C030ED236D578F485_inline(((int32_t)il2cpp_codegen_add(L_2, 1)), NULL);
		V_0 = L_3;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** L_4 = ___0_array;
		int32_t L_5 = V_0;
		((  void (*) (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC**, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_4, L_5, il2cpp_rgctx_method(method->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextGeneratorUtilities_ResizeInternalArray_TisTextProcessingElement_tDCD1EAF9D54829E796F4F9726D63B205344C7698_mFA5A6BF0BC051A85069AE66C8647C10B5049CE3D (TextProcessingElementU5BU5D_t24A1E4C8745577D794FE856B4236875595E7FD22** ___0_array, int32_t ___1_size, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		int32_t L_0 = ___1_size;
		int32_t L_1;
		L_1 = Mathf_NextPowerOfTwo_mA1CE7F3EEF9B0B07AB2D586C030ED236D578F485_inline(((int32_t)il2cpp_codegen_add(L_0, 1)), NULL);
		___1_size = L_1;
		TextProcessingElementU5BU5D_t24A1E4C8745577D794FE856B4236875595E7FD22** L_2 = ___0_array;
		int32_t L_3 = ___1_size;
		Array_Resize_TisTextProcessingElement_tDCD1EAF9D54829E796F4F9726D63B205344C7698_mD70DF9176547529A9B644ECE46B999E7B347354E(L_2, L_3, il2cpp_rgctx_method(method->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextGeneratorUtilities_ResizeInternalArray_TisIl2CppFullySharedGenericAny_mCF3CE030276460690AC28FBCC7DAAD9337DAD265_fshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** ___0_array, int32_t ___1_size, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		int32_t L_0 = ___1_size;
		int32_t L_1;
		L_1 = Mathf_NextPowerOfTwo_mA1CE7F3EEF9B0B07AB2D586C030ED236D578F485_inline(((int32_t)il2cpp_codegen_add(L_0, 1)), NULL);
		___1_size = L_1;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** L_2 = ___0_array;
		int32_t L_3 = ___1_size;
		((  void (*) (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC**, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_2, L_3, il2cpp_rgctx_method(method->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextHandle_InitArray_TisIl2CppSharedGenericObject_mC0D8C52EDACCEA9B63312CDD41967C556AF04496_gshared (__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979** ___0_array, Func_1_t566D4A654882E282E54CDC3A001E05486F913903* ___1_createInstance, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	{
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979** L_0 = ___0_array;
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_1 = *(L_0);
		if (!L_1)
		{
			goto IL_0005;
		}
	}
	{
		return;
	}

IL_0005:
	{
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979** L_2 = ___0_array;
		int32_t L_3;
		L_3 = JobsUtility_get_ThreadIndexCount_m88A954344398143540618B35943F863B92465676(NULL);
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_4 = (__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979*)(__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979*)SZArrayNew(il2cpp_rgctx_data(method->rgctx_data, 0), (uint32_t)L_3);
		*(((RuntimeObject**)L_2)) = ((RuntimeObject*)L_4);
		Il2CppCodeGenWriteBarrier((void**)((RuntimeObject**)L_2), (void*)((RuntimeObject*)L_4));
		V_0 = 0;
		goto IL_0027;
	}

IL_0015:
	{
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979** L_5 = ___0_array;
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_6 = *(L_5);
		int32_t L_7 = V_0;
		Func_1_t566D4A654882E282E54CDC3A001E05486F913903* L_8 = ___1_createInstance;
		Il2CppSharedGenericObject* L_9;
		L_9 = Func_1_Invoke_m201DDBB72CE38673C89C22034EC8779981D83E6D_inline(L_8, NULL);
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7), (Il2CppSharedGenericObject*)L_9);
		int32_t L_10 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0027:
	{
		int32_t L_11 = V_0;
		int32_t L_12;
		L_12 = JobsUtility_get_ThreadIndexCount_m88A954344398143540618B35943F863B92465676(NULL);
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_0015;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextHandle_InitArray_TisIl2CppFullySharedGenericAny_mB6E6F4CBD320F8B2398EAFC5D029728B0CF56DFF_fshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** ___0_array, Func_1_tBB8824FA8746333BFFF3AB3CE4A41B58450AF431* ___1_createInstance, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_tD27F54E1457D0C330FB86AB38DF1AF5CAD1FAB54 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_T_tD27F54E1457D0C330FB86AB38DF1AF5CAD1FAB54);
	int32_t V_0 = 0;
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** L_0 = ___0_array;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1 = *(L_0);
		if (!L_1)
		{
			goto IL_0005;
		}
	}
	{
		return;
	}

IL_0005:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** L_2 = ___0_array;
		int32_t L_3;
		L_3 = JobsUtility_get_ThreadIndexCount_m88A954344398143540618B35943F863B92465676(NULL);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_4 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)SZArrayNew(il2cpp_rgctx_data(method->rgctx_data, 0), (uint32_t)L_3);
		*(((RuntimeObject**)L_2)) = ((RuntimeObject*)L_4);
		Il2CppCodeGenWriteBarrier((void**)((RuntimeObject**)L_2), (void*)((RuntimeObject*)L_4));
		V_0 = 0;
		goto IL_0027;
	}

IL_0015:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** L_5 = ___0_array;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_6 = *(L_5);
		int32_t L_7 = V_0;
		Func_1_tBB8824FA8746333BFFF3AB3CE4A41B58450AF431* L_8 = ___1_createInstance;
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), L_8, (Il2CppFullySharedGenericAny*)L_9);
		il2cpp_codegen_memcpy((L_6)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_7)), L_9, SizeOf_T_tD27F54E1457D0C330FB86AB38DF1AF5CAD1FAB54);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 2), (void**)(L_6)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_7)), (void*)L_9);
		int32_t L_10 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0027:
	{
		int32_t L_11 = V_0;
		int32_t L_12;
		L_12 = JobsUtility_get_ThreadIndexCount_m88A954344398143540618B35943F863B92465676(NULL);
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_0015;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextInfo_Resize_TisLinkInfo_tE85DDAFDFBDA635E6405C88EE4FD5941A9243DD8_m69E901740AA5A1BA1DB56BF6E903819E8360A6F9 (LinkInfoU5BU5D_tB7EB23E47AF29CCBEC884F9D0DB95BC97F62AE51** ___0_array, int32_t ___1_size, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = ___1_size;
		if ((((int32_t)L_0) > ((int32_t)((int32_t)1024))))
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_1 = ___1_size;
		int32_t L_2;
		L_2 = Mathf_NextPowerOfTwo_mA1CE7F3EEF9B0B07AB2D586C030ED236D578F485_inline(L_1, NULL);
		G_B3_0 = L_2;
		goto IL_0017;
	}

IL_0010:
	{
		int32_t L_3 = ___1_size;
		G_B3_0 = ((int32_t)il2cpp_codegen_add(L_3, ((int32_t)256)));
	}

IL_0017:
	{
		V_0 = G_B3_0;
		LinkInfoU5BU5D_tB7EB23E47AF29CCBEC884F9D0DB95BC97F62AE51** L_4 = ___0_array;
		int32_t L_5 = V_0;
		Array_Resize_TisLinkInfo_tE85DDAFDFBDA635E6405C88EE4FD5941A9243DD8_m9F69F603EB19033FF225E25B457B288FF3EA3011(L_4, L_5, il2cpp_rgctx_method(method->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextInfo_Resize_TisWordInfo_tA466206097891A5A2590896EE164AFC406EB060D_m979FAC74E1ACB2C4A59ED1F2C66707E97688D48D (WordInfoU5BU5D_tAD74C9720883D7BB229A20FFAE9EFD2CF9963F7B** ___0_array, int32_t ___1_size, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = ___1_size;
		if ((((int32_t)L_0) > ((int32_t)((int32_t)1024))))
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_1 = ___1_size;
		int32_t L_2;
		L_2 = Mathf_NextPowerOfTwo_mA1CE7F3EEF9B0B07AB2D586C030ED236D578F485_inline(L_1, NULL);
		G_B3_0 = L_2;
		goto IL_0017;
	}

IL_0010:
	{
		int32_t L_3 = ___1_size;
		G_B3_0 = ((int32_t)il2cpp_codegen_add(L_3, ((int32_t)256)));
	}

IL_0017:
	{
		V_0 = G_B3_0;
		WordInfoU5BU5D_tAD74C9720883D7BB229A20FFAE9EFD2CF9963F7B** L_4 = ___0_array;
		int32_t L_5 = V_0;
		Array_Resize_TisWordInfo_tA466206097891A5A2590896EE164AFC406EB060D_m6646EE6AF7569488926F3672FEF3AC3091453D89(L_4, L_5, il2cpp_rgctx_method(method->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextInfo_Resize_TisIl2CppFullySharedGenericAny_m2C45260716FF60199EEDC9435E8545C1A8AC5E27_fshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** ___0_array, int32_t ___1_size, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = ___1_size;
		if ((((int32_t)L_0) > ((int32_t)((int32_t)1024))))
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_1 = ___1_size;
		int32_t L_2;
		L_2 = Mathf_NextPowerOfTwo_mA1CE7F3EEF9B0B07AB2D586C030ED236D578F485_inline(L_1, NULL);
		G_B3_0 = L_2;
		goto IL_0017;
	}

IL_0010:
	{
		int32_t L_3 = ___1_size;
		G_B3_0 = ((int32_t)il2cpp_codegen_add(L_3, ((int32_t)256)));
	}

IL_0017:
	{
		V_0 = G_B3_0;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** L_4 = ___0_array;
		int32_t L_5 = V_0;
		((  void (*) (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC**, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_4, L_5, il2cpp_rgctx_method(method->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextInfo_Resize_TisMeshInfo_tE55C4A8846CC2C399CCC3FE989476D987B86AB2F_m12C1214F381EE3DE1ABDDCD67922D47344C093CA (MeshInfoU5BU5D_t3DF8B75BF4A213334EED197AD25E432212894AC6** ___0_array, int32_t ___1_size, bool ___2_isBlockAllocated, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t G_B4_0 = 0;
	{
		bool L_0 = ___2_isBlockAllocated;
		if (!L_0)
		{
			goto IL_001c;
		}
	}
	{
		int32_t L_1 = ___1_size;
		if ((((int32_t)L_1) > ((int32_t)((int32_t)1024))))
		{
			goto IL_0013;
		}
	}
	{
		int32_t L_2 = ___1_size;
		int32_t L_3;
		L_3 = Mathf_NextPowerOfTwo_mA1CE7F3EEF9B0B07AB2D586C030ED236D578F485_inline(L_2, NULL);
		G_B4_0 = L_3;
		goto IL_001a;
	}

IL_0013:
	{
		int32_t L_4 = ___1_size;
		G_B4_0 = ((int32_t)il2cpp_codegen_add(L_4, ((int32_t)256)));
	}

IL_001a:
	{
		___1_size = G_B4_0;
	}

IL_001c:
	{
		int32_t L_5 = ___1_size;
		MeshInfoU5BU5D_t3DF8B75BF4A213334EED197AD25E432212894AC6** L_6 = ___0_array;
		MeshInfoU5BU5D_t3DF8B75BF4A213334EED197AD25E432212894AC6* L_7 = *(L_6);
		int32_t L_8 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_7)->max_length),NULL));
		if ((!(((uint32_t)L_5) == ((uint32_t)L_8))))
		{
			goto IL_0024;
		}
	}
	{
		return;
	}

IL_0024:
	{
		MeshInfoU5BU5D_t3DF8B75BF4A213334EED197AD25E432212894AC6** L_9 = ___0_array;
		int32_t L_10 = ___1_size;
		Array_Resize_TisMeshInfo_tE55C4A8846CC2C399CCC3FE989476D987B86AB2F_mB235457CD021CAEB78F1A46E61EE85B010D130AC(L_9, L_10, il2cpp_rgctx_method(method->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextInfo_Resize_TisTextElementInfo_tDD7A12E319505510E0B350E342BD55F32AB5F976_mA6966A5218C8D7A4AD10F39BA419E598E283C4DD (TextElementInfoU5BU5D_tEC28C9B72883EE21AA798913497C69E179A15C4E** ___0_array, int32_t ___1_size, bool ___2_isBlockAllocated, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t G_B4_0 = 0;
	{
		bool L_0 = ___2_isBlockAllocated;
		if (!L_0)
		{
			goto IL_001c;
		}
	}
	{
		int32_t L_1 = ___1_size;
		if ((((int32_t)L_1) > ((int32_t)((int32_t)1024))))
		{
			goto IL_0013;
		}
	}
	{
		int32_t L_2 = ___1_size;
		int32_t L_3;
		L_3 = Mathf_NextPowerOfTwo_mA1CE7F3EEF9B0B07AB2D586C030ED236D578F485_inline(L_2, NULL);
		G_B4_0 = L_3;
		goto IL_001a;
	}

IL_0013:
	{
		int32_t L_4 = ___1_size;
		G_B4_0 = ((int32_t)il2cpp_codegen_add(L_4, ((int32_t)256)));
	}

IL_001a:
	{
		___1_size = G_B4_0;
	}

IL_001c:
	{
		int32_t L_5 = ___1_size;
		TextElementInfoU5BU5D_tEC28C9B72883EE21AA798913497C69E179A15C4E** L_6 = ___0_array;
		TextElementInfoU5BU5D_tEC28C9B72883EE21AA798913497C69E179A15C4E* L_7 = *(L_6);
		int32_t L_8 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_7)->max_length),NULL));
		if ((!(((uint32_t)L_5) == ((uint32_t)L_8))))
		{
			goto IL_0024;
		}
	}
	{
		return;
	}

IL_0024:
	{
		TextElementInfoU5BU5D_tEC28C9B72883EE21AA798913497C69E179A15C4E** L_9 = ___0_array;
		int32_t L_10 = ___1_size;
		Array_Resize_TisTextElementInfo_tDD7A12E319505510E0B350E342BD55F32AB5F976_mF6D48102F97D6CEEFF8844D21732E754C411A71D(L_9, L_10, il2cpp_rgctx_method(method->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextInfo_Resize_TisIl2CppFullySharedGenericAny_m7096ECDB11995E143D4B39166A45E07091C6D15B_fshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** ___0_array, int32_t ___1_size, bool ___2_isBlockAllocated, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t G_B4_0 = 0;
	{
		bool L_0 = ___2_isBlockAllocated;
		if (!L_0)
		{
			goto IL_001c;
		}
	}
	{
		int32_t L_1 = ___1_size;
		if ((((int32_t)L_1) > ((int32_t)((int32_t)1024))))
		{
			goto IL_0013;
		}
	}
	{
		int32_t L_2 = ___1_size;
		int32_t L_3;
		L_3 = Mathf_NextPowerOfTwo_mA1CE7F3EEF9B0B07AB2D586C030ED236D578F485_inline(L_2, NULL);
		G_B4_0 = L_3;
		goto IL_001a;
	}

IL_0013:
	{
		int32_t L_4 = ___1_size;
		G_B4_0 = ((int32_t)il2cpp_codegen_add(L_4, ((int32_t)256)));
	}

IL_001a:
	{
		___1_size = G_B4_0;
	}

IL_001c:
	{
		int32_t L_5 = ___1_size;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** L_6 = ___0_array;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_7 = *(L_6);
		int32_t L_8 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_7)->max_length),NULL));
		if ((!(((uint32_t)L_5) == ((uint32_t)L_8))))
		{
			goto IL_0024;
		}
	}
	{
		return;
	}

IL_0024:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** L_9 = ___0_array;
		int32_t L_10 = ___1_size;
		((  void (*) (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC**, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_9, L_10, il2cpp_rgctx_method(method->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A_m7BB1736E93D2D981AB026211DC2C4DF479BBCDB5_gshared (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) 
{
	ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(ValueTuple_2_t24B04C868EB44FD9AE1FE6B403964C5697775C8A));
	}
	{
		int32_t L_2 = ___1_argName;
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(L_2, NULL);
	}

IL_0019:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisValueTuple_2_t0A96E043A7E5674155FA717C6511EDFFDF318BFE_m19B4DC127BF460731A01C36851ADC2998F38B84C_gshared (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) 
{
	ValueTuple_2_t0A96E043A7E5674155FA717C6511EDFFDF318BFE V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(ValueTuple_2_t0A96E043A7E5674155FA717C6511EDFFDF318BFE));
	}
	{
		int32_t L_2 = ___1_argName;
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(L_2, NULL);
	}

IL_0019:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m92ED6D35EB625EDC96D474780EA2DBE2E0A38D3B (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		RuntimeObject* L_0 = ___0_value;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(bool));
	}
	{
		int32_t L_2 = ___1_argName;
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(L_2, NULL);
	}

IL_0019:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m824F1B8830C5D9946D6CDF297C66FABC7E1A94F2 (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) 
{
	Il2CppChar V_0 = 0x0;
	{
		RuntimeObject* L_0 = ___0_value;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Il2CppChar));
	}
	{
		int32_t L_2 = ___1_argName;
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(L_2, NULL);
	}

IL_0019:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m327318335753275A24C067508F367C42F3842877 (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F));
	}
	{
		int32_t L_2 = ___1_argName;
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(L_2, NULL);
	}

IL_0019:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisEntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8_mC85BADB7F750EEAF18520AFA219ECD6F5A7E1071 (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) 
{
	EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8));
	}
	{
		int32_t L_2 = ___1_argName;
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(L_2, NULL);
	}

IL_0019:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisGlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E_mAC84FFFDC9FFB212F128B6CCFF412C0521B3CF35 (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) 
{
	GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E));
	}
	{
		int32_t L_2 = ___1_argName;
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(L_2, NULL);
	}

IL_0019:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisGlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D_mE880C25C1E2250EB54958DB93F63F2B2D1C27579 (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) 
{
	GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D));
	}
	{
		int32_t L_2 = ___1_argName;
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(L_2, NULL);
	}

IL_0019:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m0F7A078274F301B83DFC51191B3AFC763DE9C4D0 (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = ___0_value;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(int32_t));
	}
	{
		int32_t L_2 = ___1_argName;
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(L_2, NULL);
	}

IL_0019:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisIntPtr_t_mDD5DC9A593963B7FEE10D59351EA0AA0C0023879 (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(intptr_t));
	}
	{
		int32_t L_2 = ___1_argName;
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(L_2, NULL);
	}

IL_0019:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisLigatureSubstitutionRecord_t8660DC6B1D65C655D698216F72BFB3C85DDCAB94_m83FD76C9CE6153FA8BAC1399EE4B32CC4BE56891 (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) 
{
	LigatureSubstitutionRecord_t8660DC6B1D65C655D698216F72BFB3C85DDCAB94 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(LigatureSubstitutionRecord_t8660DC6B1D65C655D698216F72BFB3C85DDCAB94));
	}
	{
		int32_t L_2 = ___1_argName;
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(L_2, NULL);
	}

IL_0019:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisMarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607_m38A8E0DAA141B66DE625AFAC57A1CE80494454A6 (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) 
{
	MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607));
	}
	{
		int32_t L_2 = ___1_argName;
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(L_2, NULL);
	}

IL_0019:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisMarkToMarkAdjustmentRecord_tD53618A3728435D5C904857DAC644EE27640807C_mBA2AE448CF35E3B49B08412574DC88B5DA2EC5DD (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) 
{
	MarkToMarkAdjustmentRecord_tD53618A3728435D5C904857DAC644EE27640807C V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(MarkToMarkAdjustmentRecord_tD53618A3728435D5C904857DAC644EE27640807C));
	}
	{
		int32_t L_2 = ___1_argName;
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(L_2, NULL);
	}

IL_0019:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisMeshInfoBindings_t75C3901D8003725F85E8FD2F33C1712A92DB3EAF_mCED93CC50AA75D397596087807FA64731F2DB2B5 (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) 
{
	MeshInfoBindings_t75C3901D8003725F85E8FD2F33C1712A92DB3EAF V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(MeshInfoBindings_t75C3901D8003725F85E8FD2F33C1712A92DB3EAF));
	}
	{
		int32_t L_2 = ___1_argName;
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(L_2, NULL);
	}

IL_0019:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisMultipleSubstitutionRecord_t668A640AFADBD46E3D4EC3A8417D0A02764DF87B_m843FD4A465B7204A130644153874A8AD60827141 (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) 
{
	MultipleSubstitutionRecord_t668A640AFADBD46E3D4EC3A8417D0A02764DF87B V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(MultipleSubstitutionRecord_t668A640AFADBD46E3D4EC3A8417D0A02764DF87B));
	}
	{
		int32_t L_2 = ___1_argName;
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(L_2, NULL);
	}

IL_0019:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisRenderInstancedDataLayout_t06AF33510AC89DBD09A3A161FF809EDFAB30EC7A_mC60CB167BC480E23DF6A0A65004EB6F911A18A24 (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) 
{
	RenderInstancedDataLayout_t06AF33510AC89DBD09A3A161FF809EDFAB30EC7A V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(RenderInstancedDataLayout_t06AF33510AC89DBD09A3A161FF809EDFAB30EC7A));
	}
	{
		int32_t L_2 = ___1_argName;
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(L_2, NULL);
	}

IL_0019:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisRenderSpriteInstancedDataLayout_t4129388FA190352FA5AC84729B01A7AB44DFEAB9_m02B746C0FC85A285B8FB2E8F5D69D124642193D5 (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) 
{
	RenderSpriteInstancedDataLayout_t4129388FA190352FA5AC84729B01A7AB44DFEAB9 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(RenderSpriteInstancedDataLayout_t4129388FA190352FA5AC84729B01A7AB44DFEAB9));
	}
	{
		int32_t L_2 = ___1_argName;
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(L_2, NULL);
	}

IL_0019:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisResourceHandle_tAB7888F3AB5071C94127D0D46AAB3D702BC4B9F8_mA91A20BD242392A65004CD8897E77F0A9BA80940 (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) 
{
	ResourceHandle_tAB7888F3AB5071C94127D0D46AAB3D702BC4B9F8 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(ResourceHandle_tAB7888F3AB5071C94127D0D46AAB3D702BC4B9F8));
	}
	{
		int32_t L_2 = ___1_argName;
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(L_2, NULL);
	}

IL_0019:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122_m28BA78BC355CF32BB4AD2746ED27CB02477A1157 (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) 
{
	ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122));
	}
	{
		int32_t L_2 = ___1_argName;
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(L_2, NULL);
	}

IL_0019:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mD81B5632275C9C89651C1B357F26058E8E76A526 (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		RuntimeObject* L_0 = ___0_value;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(uint32_t));
	}
	{
		int32_t L_2 = ___1_argName;
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(L_2, NULL);
	}

IL_0019:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisIl2CppSharedGenericObject_mE7A1EEC53480BA1ED6C827938ADAF45B127DD054_gshared (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) 
{
	Il2CppSharedGenericObject* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___0_value;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Il2CppSharedGenericObject*));
		Il2CppSharedGenericObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		int32_t L_2 = ___1_argName;
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(L_2, NULL);
	}

IL_0019:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisIl2CppFullySharedGenericAny_mD1546AD31023759C065B096A4FE412E69838164A_fshared (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t5DE196DCA7C0154BE25468F6265C9DFFFA59B2FA = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T_t5DE196DCA7C0154BE25468F6265C9DFFFA59B2FA);
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_T_t5DE196DCA7C0154BE25468F6265C9DFFFA59B2FA);
	memset(V_0, 0, SizeOf_T_t5DE196DCA7C0154BE25468F6265C9DFFFA59B2FA);
	{
		RuntimeObject* L_0 = ___0_value;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_0, SizeOf_T_t5DE196DCA7C0154BE25468F6265C9DFFFA59B2FA);
		il2cpp_codegen_memcpy(L_1, V_0, SizeOf_T_t5DE196DCA7C0154BE25468F6265C9DFFFA59B2FA);
		bool L_2 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(method->rgctx_data, 0), L_1);
		if (!L_2)
		{
			goto IL_0019;
		}
	}
	{
		int32_t L_3 = ___1_argName;
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(L_3, NULL);
	}

IL_0019:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_Tis__Il2CppInt32Enum_tE5E90BB5D60D5281C33DB29D9DCBD70D5E2E1F7B_m835718C92D2C5DA2051794F6922D21453EAC493E_gshared (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = ___0_value;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(int32_t));
	}
	{
		int32_t L_2 = ___1_argName;
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(L_2, NULL);
	}

IL_0019:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_Tis__Il2CppUInt32Enum_t030A7AC35A8339F4C1125239BA7E0DF352914770_mB550F72315A962B072051B4E80B0F9D124721798_gshared (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		RuntimeObject* L_0 = ___0_value;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(uint32_t));
	}
	{
		int32_t L_2 = ___1_argName;
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(L_2, NULL);
	}

IL_0019:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisAwaitableAndFrameIndex_t5B42EA520B0415D199F9487706ABCD53407C0161_m668408E30034D9AF162BA065A1B8A9190CCB854C (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) 
{
	AwaitableAndFrameIndex_t5B42EA520B0415D199F9487706ABCD53407C0161 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(AwaitableAndFrameIndex_t5B42EA520B0415D199F9487706ABCD53407C0161));
	}
	{
		int32_t L_2 = ___1_argName;
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(L_2, NULL);
	}

IL_0019:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisOrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837_m054615FD6A62EE7702B344B2E24BA8423FEF9621 (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) 
{
	OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837));
	}
	{
		int32_t L_2 = ___1_argName;
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(L_2, NULL);
	}

IL_0019:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisBinding_t4902D3C6D27680D096CC41D83FFD0872785E57F8_mA18D5105179EC292D090491E378CBED448E54927 (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) 
{
	Binding_t4902D3C6D27680D096CC41D83FFD0872785E57F8 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Binding_t4902D3C6D27680D096CC41D83FFD0872785E57F8));
	}
	{
		int32_t L_2 = ___1_argName;
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(L_2, NULL);
	}

IL_0019:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisProfilerMarker_t8B7F9848320B93F87A7944B157255D5F9B576F2D_m237AC2C08DE06EC2EEB543C922F234B578919699 (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) 
{
	ProfilerMarker_t8B7F9848320B93F87A7944B157255D5F9B576F2D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(ProfilerMarker_t8B7F9848320B93F87A7944B157255D5F9B576F2D));
	}
	{
		int32_t L_2 = ___1_argName;
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(L_2, NULL);
	}

IL_0019:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisSingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC_m85CB6FEF509A4859399929F09F545FA1133C3051 (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) 
{
	SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC));
	}
	{
		int32_t L_2 = ___1_argName;
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(L_2, NULL);
	}

IL_0019:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisFontAssetRef_t7B8E634754BC5683F1E6601D7CD0061285A28FF3_m4AC822CD5CEAF4DA1B4035660F409BF9DD47B8BE (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) 
{
	FontAssetRef_t7B8E634754BC5683F1E6601D7CD0061285A28FF3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(FontAssetRef_t7B8E634754BC5683F1E6601D7CD0061285A28FF3));
	}
	{
		int32_t L_2 = ___1_argName;
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(L_2, NULL);
	}

IL_0019:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisFontReferenceMap_t1C0CECF3F0F650BE4A881A50A25EFB26965E7831_m636F71F1C531B9D0CA2D454670A8DCFC77D9EB09 (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) 
{
	FontReferenceMap_t1C0CECF3F0F650BE4A881A50A25EFB26965E7831 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(FontReferenceMap_t1C0CECF3F0F650BE4A881A50A25EFB26965E7831));
	}
	{
		int32_t L_2 = ___1_argName;
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(L_2, NULL);
	}

IL_0019:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisWorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44_mB9D015C9FCBF6CD2BCA1E436743F0CC080CFC110 (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) 
{
	WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44));
	}
	{
		int32_t L_2 = ___1_argName;
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(L_2, NULL);
	}

IL_0019:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericAny* Unsafe_AddByteOffset_TisIl2CppFullySharedGenericAny_mA6877EB6A5CE3EEE6671E72022081A718D8CBEC8_fshared (Il2CppFullySharedGenericAny* ___0_source, intptr_t ___1_byteOffset, const RuntimeMethod* method) 
{
	{
		Il2CppFullySharedGenericAny* L_0 = ___0_source;
		intptr_t L_1 = ___1_byteOffset;
		return ((Il2CppFullySharedGenericAny*)il2cpp_codegen_add((intptr_t)L_0, L_1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericAny* Unsafe_AddByteOffset_TisIl2CppFullySharedGenericAny_mFEF319F8CEF9CA5FD56DB2E46B519799801465DC_fshared (Il2CppFullySharedGenericAny* ___0_source, uintptr_t ___1_byteOffset, const RuntimeMethod* method) 
{
	{
		Il2CppFullySharedGenericAny* L_0 = ___0_source;
		uintptr_t L_1 = ___1_byteOffset;
		return ((Il2CppFullySharedGenericAny*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)L_1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* Unsafe_As_TisIl2CppSharedGenericObject_mF43B42CDF61533403D004E09920FB9F3F7CFD768_gshared (RuntimeObject* ___0_o, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_o;
		return (Il2CppSharedGenericObject*)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericAny* Unsafe_As_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m6A2B605DB158987669F45298C591DC5876B5128C_fshared (Il2CppFullySharedGenericAny* ___0_source, const RuntimeMethod* method) 
{
	{
		Il2CppFullySharedGenericAny* L_0 = ___0_source;
		return (Il2CppFullySharedGenericAny*)(L_0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* Unsafe_AsPointer_TisIl2CppFullySharedGenericAny_mB3F08848197461508634619D2125BFB713699361_fshared (Il2CppFullySharedGenericAny* ___0_value, const RuntimeMethod* method) 
{
	{
		Il2CppFullySharedGenericAny* L_0 = ___0_value;
		uintptr_t L_1 = (il2cpp_codegen_conv<uintptr_t,Il2CppFullySharedGenericAny*,intptr_t,false,false>(L_0,NULL));
		return (void*)(L_1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericAny* Unsafe_AsRef_TisIl2CppFullySharedGenericAny_mF06D34D5150ECDA41C2E3902F90C988F2CF868CB_fshared (void* ___0_source, const RuntimeMethod* method) 
{
	int32_t* V_0 = NULL;
	{
		void* L_0 = ___0_source;
		V_0 = (int32_t*)L_0;
		int32_t* L_1 = V_0;
		return (Il2CppFullySharedGenericAny*)(L_1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Unsafe_ByteOffset_TisIl2CppFullySharedGenericAny_mFD0E1A923BABD9757AA645DF6F879C4AA2F00E34_fshared (Il2CppFullySharedGenericAny* ___0_origin, Il2CppFullySharedGenericAny* ___1_target, const RuntimeMethod* method) 
{
	{
		Il2CppFullySharedGenericAny* L_0 = ___1_target;
		Il2CppFullySharedGenericAny* L_1 = ___0_origin;
		return (intptr_t)((Il2CppFullySharedGenericAny*)il2cpp_codegen_subtract((intptr_t)L_0, (intptr_t)L_1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Unsafe_ReadUnaligned_TisIl2CppFullySharedGenericAny_m14D483BC40001F823BDC3F9AFAA26C86027B655A_fshared (uint8_t* ___0_source, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t0BE9A499D7700B8625DF3E0AAF1EB1345188F8EE = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T_t0BE9A499D7700B8625DF3E0AAF1EB1345188F8EE);
	{
		uint8_t* L_0 = ___0_source;
		il2cpp_codegen_memcpy(L_1, L_0, SizeOf_T_t0BE9A499D7700B8625DF3E0AAF1EB1345188F8EE);
		il2cpp_codegen_memcpy(il2cppRetVal, L_1, SizeOf_T_t0BE9A499D7700B8625DF3E0AAF1EB1345188F8EE);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Unsafe_ReadUnaligned_TisIl2CppFullySharedGenericAny_m535CEEECB2FC10C90C764D5AD3CC65EA97DEBD00_fshared (void* ___0_source, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t15D3C2F20CB4F9D5A08E7998BE25B9AB3C131769 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T_t15D3C2F20CB4F9D5A08E7998BE25B9AB3C131769);
	{
		void* L_0 = ___0_source;
		il2cpp_codegen_memcpy(L_1, L_0, SizeOf_T_t15D3C2F20CB4F9D5A08E7998BE25B9AB3C131769);
		il2cpp_codegen_memcpy(il2cppRetVal, L_1, SizeOf_T_t15D3C2F20CB4F9D5A08E7998BE25B9AB3C131769);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Unsafe_WriteUnaligned_TisIl2CppFullySharedGenericAny_m4A21AE425C18E39310C29B4F493602AA6E56A6D9_fshared (uint8_t* ___0_destination, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_tFDE785E318899B2ADBC90EFA1364A3B76599F750 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T_tFDE785E318899B2ADBC90EFA1364A3B76599F750);
	{
		uint8_t* L_0 = ___0_destination;
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___1_value : &___1_value), SizeOf_T_tFDE785E318899B2ADBC90EFA1364A3B76599F750);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_0, L_1, SizeOf_T_tFDE785E318899B2ADBC90EFA1364A3B76599F750);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 0), (void**)(Il2CppFullySharedGenericAny*)L_0, (void*)L_1);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Unsafe_WriteUnaligned_TisIl2CppFullySharedGenericAny_m8E4966BB8B73735827F57FFA14E1947FA84C9394_fshared (void* ___0_destination, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t7D75490B2823EDFE685A24645133F767DDEE1DCB = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T_t7D75490B2823EDFE685A24645133F767DDEE1DCB);
	{
		void* L_0 = ___0_destination;
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___1_value : &___1_value), SizeOf_T_t7D75490B2823EDFE685A24645133F767DDEE1DCB);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_0, L_1, SizeOf_T_t7D75490B2823EDFE685A24645133F767DDEE1DCB);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 0), (void**)(Il2CppFullySharedGenericAny*)L_0, (void*)L_1);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericAny* Unsafe_Add_TisIl2CppFullySharedGenericAny_mDA4722F94AF13693FCE1583B641A792D2EA47924_fshared (Il2CppFullySharedGenericAny* ___0_source, int32_t ___1_elementOffset, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_tBE6850158665A8E196430E1D80AEFF9AC121F5F9 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	{
		Il2CppFullySharedGenericAny* L_0 = ___0_source;
		int32_t L_1 = ___1_elementOffset;
		uint32_t L_2 = SizeOf_T_tBE6850158665A8E196430E1D80AEFF9AC121F5F9;
		intptr_t L_3 = (il2cpp_codegen_conv<intptr_t,uint32_t,int32_t,false,false>(L_2,NULL));
		return ((Il2CppFullySharedGenericAny*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(L_1, L_3))));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericAny* Unsafe_Add_TisIl2CppFullySharedGenericAny_mC89D70E498F759E971238CF82E99E44CC68197DA_fshared (Il2CppFullySharedGenericAny* ___0_source, intptr_t ___1_elementOffset, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_tEE9E2B0A67EF7877E2DDB454C5066EBB8C09D0DA = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	{
		Il2CppFullySharedGenericAny* L_0 = ___0_source;
		intptr_t L_1 = ___1_elementOffset;
		uint32_t L_2 = SizeOf_T_tEE9E2B0A67EF7877E2DDB454C5066EBB8C09D0DA;
		return ((Il2CppFullySharedGenericAny*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(L_1, (int32_t)L_2))));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericAny* Unsafe_AddByteOffset_TisIl2CppFullySharedGenericAny_m023762698D869AA8F4D477B66833C0BCFC1EA25C_fshared (Il2CppFullySharedGenericAny* ___0_source, intptr_t ___1_byteOffset, const RuntimeMethod* method) 
{
	{
		Il2CppFullySharedGenericAny* L_0 = ___0_source;
		intptr_t L_1 = ___1_byteOffset;
		return ((Il2CppFullySharedGenericAny*)il2cpp_codegen_add((intptr_t)L_0, L_1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericAny* Unsafe_AddByteOffset_TisIl2CppFullySharedGenericAny_m77EFAC6DAA578E6C65CAC97578F1800F25019689_fshared (Il2CppFullySharedGenericAny* ___0_source, uint64_t ___1_byteOffset, const RuntimeMethod* method) 
{
	{
		Il2CppFullySharedGenericAny* L_0 = ___0_source;
		uint64_t L_1 = ___1_byteOffset;
		uintptr_t L_2 = (il2cpp_codegen_conv<uintptr_t,uint64_t,int64_t,false,false>(L_1,NULL));
		intptr_t L_3;
		L_3 = IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D((void*)L_2, NULL);
		Il2CppFullySharedGenericAny* L_4;
		L_4 = il2cpp_unsafe_add_byte_offset<Il2CppFullySharedGenericAny,intptr_t>(L_0, L_3);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Unsafe_AreSame_TisIl2CppFullySharedGenericAny_mEFCD9F27093DEB04CA603DC1C6F306CE6DCCDC3C_fshared (Il2CppFullySharedGenericAny* ___0_left, Il2CppFullySharedGenericAny* ___1_right, const RuntimeMethod* method) 
{
	{
		Il2CppFullySharedGenericAny* L_0 = ___0_left;
		Il2CppFullySharedGenericAny* L_1 = ___1_right;
		return (bool)((((RuntimeObject*)(intptr_t)L_0) == ((RuntimeObject*)(intptr_t)L_1))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* Unsafe_As_TisIl2CppSharedGenericObject_mEA282A8D403A0B743C8FF21F53E3421FFE98BCCC_gshared (RuntimeObject* ___0_o, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_o;
		return (Il2CppSharedGenericObject*)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericAny* Unsafe_As_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mAF06A659941D15118FC1E4800E3A7A0F262628A4_fshared (Il2CppFullySharedGenericAny* ___0_source, const RuntimeMethod* method) 
{
	{
		Il2CppFullySharedGenericAny* L_0 = ___0_source;
		return (Il2CppFullySharedGenericAny*)(L_0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* Unsafe_AsPointer_TisIl2CppFullySharedGenericAny_mE85961ECFFC7310EBEF309E6E67AD0FED2F9030B_fshared (Il2CppFullySharedGenericAny* ___0_value, const RuntimeMethod* method) 
{
	{
		Il2CppFullySharedGenericAny* L_0 = ___0_value;
		uintptr_t L_1 = (il2cpp_codegen_conv<uintptr_t,Il2CppFullySharedGenericAny*,intptr_t,false,false>(L_0,NULL));
		return (void*)(L_1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericAny* Unsafe_AsRef_TisIl2CppFullySharedGenericAny_m088920550101BD3FA6B40E99A5F107C35BE752FA_fshared (Il2CppFullySharedGenericAny* ___0_source, const RuntimeMethod* method) 
{
	{
		Il2CppFullySharedGenericAny* L_0 = ___0_source;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericAny* Unsafe_AsRef_TisIl2CppFullySharedGenericAny_mD269D4D95DA51D3CF4E4025805638814158802A3_fshared (void* ___0_source, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		return (Il2CppFullySharedGenericAny*)(L_0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Unsafe_IsAddressLessThan_TisIl2CppFullySharedGenericAny_m731B9B0C5A4B349E4545E7AAAB44731B9ADB6597_fshared (Il2CppFullySharedGenericAny* ___0_left, Il2CppFullySharedGenericAny* ___1_right, const RuntimeMethod* method) 
{
	{
		Il2CppFullySharedGenericAny* L_0 = ___0_left;
		Il2CppFullySharedGenericAny* L_1 = ___1_right;
		return (bool)((!(((RuntimeObject*)(uintptr_t)L_0) >= ((RuntimeObject*)(uintptr_t)L_1)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Unsafe_Read_TisIl2CppFullySharedGenericAny_mF6B28073E683AAE891ED373C5F5F29DA2A0708A2_fshared (void* ___0_source, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_tB42CCB1CEED288E2BEBBDFE4BE22B8CB6F084B54 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T_tB42CCB1CEED288E2BEBBDFE4BE22B8CB6F084B54);
	{
		void* L_0 = ___0_source;
		il2cpp_codegen_memcpy(L_1, L_0, SizeOf_T_tB42CCB1CEED288E2BEBBDFE4BE22B8CB6F084B54);
		il2cpp_codegen_memcpy(il2cppRetVal, L_1, SizeOf_T_tB42CCB1CEED288E2BEBBDFE4BE22B8CB6F084B54);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Unsafe_ReadUnaligned_TisIl2CppFullySharedGenericAny_m42C276800437B81F51F1F38619B499B6AAFB0021_fshared (uint8_t* ___0_source, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_tE109D24A290E1158759C26079ED706B46290FAE5 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T_tE109D24A290E1158759C26079ED706B46290FAE5);
	{
		uint8_t* L_0 = ___0_source;
		il2cpp_codegen_memcpy(L_1, L_0, SizeOf_T_tE109D24A290E1158759C26079ED706B46290FAE5);
		il2cpp_codegen_memcpy(il2cppRetVal, L_1, SizeOf_T_tE109D24A290E1158759C26079ED706B46290FAE5);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Unsafe_SizeOf_TisIl2CppFullySharedGenericAny_mD5748385042811E049C06FFD865AFD213C5FA9EB_fshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t77C4AF644C0D2AE4F0E9399E7AED3FED3426FBD7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	{
		uint32_t L_0 = SizeOf_T_t77C4AF644C0D2AE4F0E9399E7AED3FED3426FBD7;
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Unsafe_WriteUnaligned_TisIl2CppFullySharedGenericAny_mF9DAA41D685A65A581864DBF65CE23C6F7E72BDF_fshared (uint8_t* ___0_destination, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_tBBA6F3D6E1BC76807F91C471253B4033DB66D6E8 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T_tBBA6F3D6E1BC76807F91C471253B4033DB66D6E8);
	{
		uint8_t* L_0 = ___0_destination;
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___1_value : &___1_value), SizeOf_T_tBBA6F3D6E1BC76807F91C471253B4033DB66D6E8);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_0, L_1, SizeOf_T_tBBA6F3D6E1BC76807F91C471253B4033DB66D6E8);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 0), (void**)(Il2CppFullySharedGenericAny*)L_0, (void*)L_1);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t* UnsafeUtility_Add_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m6B9F350F0F53569AA71C7448E87D47E49E62F38F (uint8_t* ___0_source, int32_t ___1_elementOffset, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___0_source;
		int32_t L_1 = ___1_elementOffset;
		uint8_t* L_2;
		L_2 = UnsafeUtilityInternal_Add_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m5A3E59E17B5D433E8D6EFA9D4C1C40182A89B306_inline(L_0, L_1, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericStruct* UnsafeUtility_Add_TisIl2CppFullySharedGenericStruct_m4625509781F2C6C3F2D7CD81A4F403FBD0C5F68E_fshared (Il2CppFullySharedGenericStruct* ___0_source, int32_t ___1_elementOffset, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		Il2CppFullySharedGenericStruct* L_0 = ___0_source;
		int32_t L_1 = ___1_elementOffset;
		Il2CppFullySharedGenericStruct* L_2;
		L_2 = ((  Il2CppFullySharedGenericStruct* (*) (Il2CppFullySharedGenericStruct*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_0, L_1, il2cpp_rgctx_method(method->rgctx_data, 0));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisBatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D_m55CBD42505397C2C585C193FA2DB9264910F8D99 (const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = UnsafeUtilityInternal_AlignOf_TisBatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D_mB855D0A6C39C238FD086F0A41F578C588DD1E57D_inline(NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_m2B54DEAE04DA7718238C600DEC6801202F182CAB (const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = UnsafeUtilityInternal_AlignOf_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_mBCD966C8D21A7FA7A531E312657F8536BB7D5591_inline(NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mB152D3C658FB48DEDB6E662EEB0C91018E7F2857 (const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = UnsafeUtilityInternal_AlignOf_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mC44B74F48735FA62BAE3FBA763123E932B9EF822_inline(NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mB110C01B667FD6BDC9B423AEB0AA6F0AEB497272 (const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = UnsafeUtilityInternal_AlignOf_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m80DCA0AC9767EB192DAAE87F5F4F56708D278474_inline(NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B_m2AE326FE5077B7826CA97AFD52249B22B1E6F673 (const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = UnsafeUtilityInternal_AlignOf_TisContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B_m47308D0D016580B804EBE2B83A11C2BEA28E74B4_inline(NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisCullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0_mE27D3F37C819B68DEF46727F1C111BA5ECE8B7EB (const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = UnsafeUtilityInternal_AlignOf_TisCullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0_mECD98232E4577E26AB1077C802A175181CEF9E17_inline(NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisEmbeddedLODBuffer_t6D75CECAC228D0710132158E77ACB46D0C43027B_mEB6296776C95A2A3440CABCB121B9DE34745F87C (const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = UnsafeUtilityInternal_AlignOf_TisEmbeddedLODBuffer_t6D75CECAC228D0710132158E77ACB46D0C43027B_mF15FE3B1714441550D2BDA30F695E79AA17709D9_inline(NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisEntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8_m336B97C32947D1D53AC28694E7164925EDA450BE (const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = UnsafeUtilityInternal_AlignOf_TisEntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8_mCAE1EDAA3D44B416A2AF29A2CD1437A60C94B184_inline(NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisGPUDrivenMeshData_t0D53E18AECCB1ED48149AFD77C12CF1624340C32_m312BA37FED97B204682E60E5D9443F66C3E54BB1 (const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = UnsafeUtilityInternal_AlignOf_TisGPUDrivenMeshData_t0D53E18AECCB1ED48149AFD77C12CF1624340C32_mE4B475BB745CDDD8575CFF31796C75EC5BE1677C_inline(NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisGPUDrivenSubMesh_t2D3B77E083A07816281294E54907E064B2A2A22B_m4F85DCE87BDB18E498D0AEC2CAE8885182B9B623 (const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = UnsafeUtilityInternal_AlignOf_TisGPUDrivenSubMesh_t2D3B77E083A07816281294E54907E064B2A2A22B_m07E75B4F5F05AFDC7DD95993E4BE4E6832AC951F_inline(NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m850FB9C9422BCC4F42F36EF592EE59C881EE2312 (const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = UnsafeUtilityInternal_AlignOf_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m0987C997B0BCBFDE388F4E1808BCF6706136856A_inline(NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m274F833CD001C63E56A22D8F42C76CE8C6CC39DF (const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = UnsafeUtilityInternal_AlignOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mB5611745B3ED473868EF6B61479E2860BBB2223C_inline(NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisIntPtr_t_mB17C6C168D8CA088879EDD0D5B9923F70F5269B8 (const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = UnsafeUtilityInternal_AlignOf_TisIntPtr_t_m7FF5CB3788B437CA624174389D25EE9BCB2B212E_inline(NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisInternalLODGroupSettings_t9F08C56422FEBE035004C6D96DE664DB1961F38D_m1CA23B5FBDCD8201648A712DC74ECD78735CFCDB (const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = UnsafeUtilityInternal_AlignOf_TisInternalLODGroupSettings_t9F08C56422FEBE035004C6D96DE664DB1961F38D_m2D29EB1E0BB5C7D366275F1AEB950D0C3365A3EC_inline(NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisInternalMeshLodRendererSettings_t2B499712F80597BFB45A4813CC139D1BEEDEBB73_m27514475B79403724F06D2D179196E9E53AF6088 (const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = UnsafeUtilityInternal_AlignOf_TisInternalMeshLodRendererSettings_t2B499712F80597BFB45A4813CC139D1BEEDEBB73_m4613462C0A843B2F0C9BE750FF1486558EC20A57_inline(NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisInternalMeshRendererSettings_tFA0423524032AD2C34E24C53548BE032F67FC6AF_m21C65DFDEFB5D4DEF712F149EE79389591864AB7 (const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = UnsafeUtilityInternal_AlignOf_TisInternalMeshRendererSettings_tFA0423524032AD2C34E24C53548BE032F67FC6AF_m218A1DC76BE997229B2F8774AE0E528B6BAE4EAF_inline(NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisLightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21_m6E1227F119951939CF6F08C6A1948051ED483009 (const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = UnsafeUtilityInternal_AlignOf_TisLightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21_m2D3813D1A1056BED9EEE9B6BF630EBDCF618551D_inline(NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_mF5AA4A895EA1D19CEB918E04CACADA5DCB0A13C6 (const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = UnsafeUtilityInternal_AlignOf_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_m6E66E9028E798C9896F3F56F7FA05908E32B1689_inline(NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960_m763C773E8E8A2C722C8D68FB0140B7554C7936B4 (const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = UnsafeUtilityInternal_AlignOf_TisModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960_m9396C9240C13C7F344AC4E11A89D9B0A75EF52AB_inline(NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisPlane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C_m7C9676413764B9F46479956AB3EAE4D4D3987344 (const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = UnsafeUtilityInternal_AlignOf_TisPlane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C_m9E02365A60C7193DCE9B1B1CCAC6B940995AB87F_inline(NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m7EC424F97CFAB6AB7BFD7207C89C3185EE211913 (const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = UnsafeUtilityInternal_AlignOf_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_mCFA49B63212293A47A946132716CC8084F118BBF_inline(NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisRangeInt_tDFBE4FD13857C11F21F7C3DA6B60D05341B67268_m11FD71BF1A7D98E85310EF3E4FB409CC0C522D9A (const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = UnsafeUtilityInternal_AlignOf_TisRangeInt_tDFBE4FD13857C11F21F7C3DA6B60D05341B67268_m36853F8E5ABD4C14B492DED38BA104203DA9FADC_inline(NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7BDD582A0A2C440C146F9699D10B6FF35C0C027C (const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = UnsafeUtilityInternal_AlignOf_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m9B9607330865C0A5ABFB515754C1C1C96D19F344_inline(NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisUEncroachingSegment_t3AE1B0B8E50020697D3FA3FFF0C86E406ABFA3C1_m86F4CFEB8CC5570C70BB73E41B82B106F3E5C979 (const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = UnsafeUtilityInternal_AlignOf_TisUEncroachingSegment_t3AE1B0B8E50020697D3FA3FFF0C86E406ABFA3C1_mC80D3B528E9C492E0BAE5124788711053E5BA8AE_inline(NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisUEvent_t81CE84F34955D2A2DE962ADE28CDE659605FB2AC_m1D662E46C57120C95F8262615B2E5146F46B6D38 (const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = UnsafeUtilityInternal_AlignOf_TisUEvent_t81CE84F34955D2A2DE962ADE28CDE659605FB2AC_m2EAF1749DEC30DF8BAE54F2E152E33EEBF06D2E7_inline(NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisUHull_tBA3DC6A41F928298B0D924EDFE00150F307BA851_mC641BD145A97E83EFDA9E06A0A8BC9497BE3A659 (const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = UnsafeUtilityInternal_AlignOf_TisUHull_tBA3DC6A41F928298B0D924EDFE00150F307BA851_m9DF201FCDB9B057604B20987096858076D21CFAB_inline(NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m742C058FF2011B81DD081BA92DC32E0E34CEAAC8 (const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = UnsafeUtilityInternal_AlignOf_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m5CC670602FE83644EBD988EBBA04AB4D7D731FD7_inline(NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mCE248C5AF70A79CF4BEF0C2B3DDBDCACB5CC53F7 (const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = UnsafeUtilityInternal_AlignOf_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mF228544B123C545DB4D43DDE0E23492B7A731A7F_inline(NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m8127223B00E08567EC09EF1D992F89C74F248AB0 (const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = UnsafeUtilityInternal_AlignOf_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m29B7D9DA9527706BBA1F73ECEA934CCD0B2D99E3_inline(NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisUStar_tF8CA0D7A7A3197E68176CA173B07251554C7465D_m51EC804E1F6D61CA6E3332D2E54B4A19B476AF14 (const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = UnsafeUtilityInternal_AlignOf_TisUStar_tF8CA0D7A7A3197E68176CA173B07251554C7465D_m120C8454AB3B92B9FDB39562A6C50C333B6D7BD3_inline(NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisUTriangle_t6D4513C8A4054BEEC30F937F14BBE005BC4A141F_m4136B05A3F50899D8363AEBD93E4FE127EB34A7E (const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = UnsafeUtilityInternal_AlignOf_TisUTriangle_t6D4513C8A4054BEEC30F937F14BBE005BC4A141F_mC3E4D8B9B275315C3369194023ADC219C9BFA56B_inline(NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mCFF3A02BFA327100E27F86AA90F94EA85D86D689 (const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = UnsafeUtilityInternal_AlignOf_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m5A04043858F190DDD4C4AB8C2C707306514BCA45_inline(NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m9B25263D143C20F712C84EF45A8BFD1E0B24F3EF (const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = UnsafeUtilityInternal_AlignOf_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mA208BE87A87C101AE5CCF93D07CE98EF4B72BB9D_inline(NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisIl2CppFullySharedGenericStruct_m11D1023B182BE19CF0F1A57DBE826004A1B81A41_fshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_Tisdouble2_t2124FB15A5BDCC0BD48B80116D4B24DC9DCA9D83_m3115F456DEC2AED1FB99EA00EE354E3B6D4F63A7 (const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = UnsafeUtilityInternal_AlignOf_Tisdouble2_t2124FB15A5BDCC0BD48B80116D4B24DC9DCA9D83_m8D474CAB34FA5FB18D61421063147CE9793F0B05_inline(NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_Tisfloat2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5_m1667EECF0EBA8277537CA7FDCD0FBADDEDBCEA08 (const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = UnsafeUtilityInternal_AlignOf_Tisfloat2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5_mF5574E385BD8BFE25E8CE39CF6C0587EEB03EA32_inline(NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_Tisint2_tB123E869131C6102341F8F9AA01726E0E7C2768D_m0A4863DD32FC0F3C1A06F8D8C03E2DDA275696D3 (const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = UnsafeUtilityInternal_AlignOf_Tisint2_tB123E869131C6102341F8F9AA01726E0E7C2768D_m26EBC94AD0C3507224F27777BDABDC7B666D0880_inline(NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_Tisint3_t18873F121F1EF24ECE875EAB01170B69E1B498C5_mB656C24F20B80413C265EE41F3C5A03DFF6E9F1D (const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = UnsafeUtilityInternal_AlignOf_Tisint3_t18873F121F1EF24ECE875EAB01170B69E1B498C5_mBF5C30CFD8345346842446C6C9505350076D4166_inline(NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_Tisint4_t6DC3FEACC0DD1EAE4D5B897188E8D669BC4DAB90_mD96C4758EF8B6FBDA9B371605B91BFEC95A9597D (const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = UnsafeUtilityInternal_AlignOf_Tisint4_t6DC3FEACC0DD1EAE4D5B897188E8D669BC4DAB90_mE9667172DCCAA2CC0371D40CBC26AD69CA73BE00_inline(NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject** UnsafeUtility_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisIl2CppSharedGenericObject_mE24DEF94AFB77ADFE585EA284FD61661D5B4953A_gshared (uint8_t* ___0_from, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___0_from;
		Il2CppSharedGenericObject** L_1;
		L_1 = UnsafeUtilityInternal_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisIl2CppSharedGenericObject_mCC5695768CDD2910B4B23769B9C6E1255C530F11_inline(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* UnsafeUtility_As_TisIntPtr_t_TisGCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC_mD94F597CB91662C823496DA9FA9A7CF908734A78 (intptr_t* ___0_from, const RuntimeMethod* method) 
{
	{
		intptr_t* L_0 = ___0_from;
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* L_1;
		L_1 = UnsafeUtilityInternal_As_TisIntPtr_t_TisGCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC_mD43127D5F7AA6EB4B52E5C30BA53F29843E9E9A2_inline(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject** UnsafeUtility_As_TisIl2CppSharedGenericObject_TisIl2CppSharedGenericObject_m7E01BE5B3130A632C43D1F86A8781C30A93D3DCF_gshared (Il2CppSharedGenericObject** ___0_from, const RuntimeMethod* method) 
{
	{
		Il2CppSharedGenericObject** L_0 = ___0_from;
		Il2CppSharedGenericObject** L_1;
		L_1 = UnsafeUtilityInternal_As_TisIl2CppSharedGenericObject_TisIl2CppSharedGenericObject_m1C63CD01558497B8FF90637D897964E5BF4FAC2A_inline(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericAny* UnsafeUtility_As_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mD6BECC32C10552E82C8D23115CAF774983D95F0C_fshared (Il2CppFullySharedGenericAny* ___0_from, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		Il2CppFullySharedGenericAny* L_0 = ___0_from;
		Il2CppFullySharedGenericAny* L_1;
		L_1 = ((  Il2CppFullySharedGenericAny* (*) (Il2CppFullySharedGenericAny*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t* UnsafeUtility_AsRef_TisIntPtr_t_m5E80CE586FADFB0EE0E808A1A736F9BF28C2B28B (void* ___0_ptr, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_ptr;
		intptr_t* L_1;
		L_1 = UnsafeUtilityInternal_AsRef_TisIntPtr_t_m339CF12381F6ABACE5B83137775FCA5DF3B2FA19_inline(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericStruct* UnsafeUtility_AsRef_TisIl2CppFullySharedGenericStruct_m78B0690121A96EFFDA7D6D3ADAF97940CF8136BE_fshared (void* ___0_ptr, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		void* L_0 = ___0_ptr;
		Il2CppFullySharedGenericStruct* L_1;
		L_1 = ((  Il2CppFullySharedGenericStruct* (*) (void*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D UnsafeUtility_ReadArrayElement_TisBatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D_mAD2E8BB847754DAFE09F5868548BEDDA822A2617 (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D L_2;
		L_2 = UnsafeUtilityInternal_ReadArrayElement_TisBatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D_mDBEEA432305DC45F859549C5C3C2BC1AB641161C_inline(L_0, L_1, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 UnsafeUtility_ReadArrayElement_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_mA77EAA0B012867DC63EF516448C2F5FA24F96CD5 (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_2;
		L_2 = UnsafeUtilityInternal_ReadArrayElement_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_mFF2A9A45B70E41FC9F6A40A69B2C8E3BAF76360A_inline(L_0, L_1, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t UnsafeUtility_ReadArrayElement_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m06447B534673E0861DE4F55616DFAF9BD7DCBCC6 (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		uint8_t L_2;
		L_2 = UnsafeUtilityInternal_ReadArrayElement_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m215470D8CCA83493150D2E40676D8A40FCF722B0_inline(L_0, L_1, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar UnsafeUtility_ReadArrayElement_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mDEAC58505EC6C38BCF5140449CEB8CB55136C377 (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		Il2CppChar L_2;
		L_2 = UnsafeUtilityInternal_ReadArrayElement_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m2FEACC2DB55AEEA0CA84FFD3CFC0DA3A103577EB_inline(L_0, L_1, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B UnsafeUtility_ReadArrayElement_TisContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B_m27C9AC27DE15EAB418444BE62AD9C2CE19317991 (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B L_2;
		L_2 = UnsafeUtilityInternal_ReadArrayElement_TisContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B_mE64830E3E69DCC7AFC8FF6B0965DCA99D7390356_inline(L_0, L_1, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0 UnsafeUtility_ReadArrayElement_TisCullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0_mFD2AC538DAACCF1C5AAE44C0B4758D3A6A4C54EF (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0 L_2;
		L_2 = UnsafeUtilityInternal_ReadArrayElement_TisCullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0_m3DD623F7581DFB21C61537373F0F32050E5D8CFE_inline(L_0, L_1, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double UnsafeUtility_ReadArrayElement_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m9C628D150915A65E81E8B222A33E95755596D167 (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		double L_2;
		L_2 = UnsafeUtilityInternal_ReadArrayElement_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m3153A5430B46A926C90C99ECC737289006BAB570_inline(L_0, L_1, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EmbeddedLODBuffer_t6D75CECAC228D0710132158E77ACB46D0C43027B UnsafeUtility_ReadArrayElement_TisEmbeddedLODBuffer_t6D75CECAC228D0710132158E77ACB46D0C43027B_m636B16C7FAE04CCA69A15700712ECB9E95585812 (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		EmbeddedLODBuffer_t6D75CECAC228D0710132158E77ACB46D0C43027B L_2;
		L_2 = UnsafeUtilityInternal_ReadArrayElement_TisEmbeddedLODBuffer_t6D75CECAC228D0710132158E77ACB46D0C43027B_mAAB0A3B6158D3A53128F92076405F23C82C562CA_inline(L_0, L_1, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 UnsafeUtility_ReadArrayElement_TisEntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8_mCA80AB19D82B40C3B0B1BC9A4BE2F87BAFD9BE64 (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 L_2;
		L_2 = UnsafeUtilityInternal_ReadArrayElement_TisEntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8_mDC8A7125EE74C940B9F940440D412BA4B3A42575_inline(L_0, L_1, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GPUDrivenMeshData_t0D53E18AECCB1ED48149AFD77C12CF1624340C32 UnsafeUtility_ReadArrayElement_TisGPUDrivenMeshData_t0D53E18AECCB1ED48149AFD77C12CF1624340C32_m21A5E02751759C9BA429F30B068C328D019B53EE (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		GPUDrivenMeshData_t0D53E18AECCB1ED48149AFD77C12CF1624340C32 L_2;
		L_2 = UnsafeUtilityInternal_ReadArrayElement_TisGPUDrivenMeshData_t0D53E18AECCB1ED48149AFD77C12CF1624340C32_m3AC186183B40DD72F475DEA5ABBA39D050266613_inline(L_0, L_1, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GPUDrivenSubMesh_t2D3B77E083A07816281294E54907E064B2A2A22B UnsafeUtility_ReadArrayElement_TisGPUDrivenSubMesh_t2D3B77E083A07816281294E54907E064B2A2A22B_mAE8FEB32714B69865DA53A642D5E181EB2F8809A (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		GPUDrivenSubMesh_t2D3B77E083A07816281294E54907E064B2A2A22B L_2;
		L_2 = UnsafeUtilityInternal_ReadArrayElement_TisGPUDrivenSubMesh_t2D3B77E083A07816281294E54907E064B2A2A22B_mBF012366896A35F47863D2A27520F935DBDFADE0_inline(L_0, L_1, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t UnsafeUtility_ReadArrayElement_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mF2AFA3F9C5D4F6BDB6CBAC3D8C29A51CA8D71EC9 (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		int16_t L_2;
		L_2 = UnsafeUtilityInternal_ReadArrayElement_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mE907DE0EDCAAEB74B259B5022D1AC07C3FA77763_inline(L_0, L_1, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_ReadArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mFBA66C06ECEB0A2BC1AAE634B6E6BB436F957084 (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		int32_t L_2;
		L_2 = UnsafeUtilityInternal_ReadArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m0B7B877C8F00DCC1C95D7124B3B0D83C6D492345_inline(L_0, L_1, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t UnsafeUtility_ReadArrayElement_TisIntPtr_t_m1AB5DE7A4962B63822FF70AF37E0BADC77C4AE23 (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		intptr_t L_2;
		L_2 = UnsafeUtilityInternal_ReadArrayElement_TisIntPtr_t_mC53DA66CA829ADB467A34898F82725DDA86091D6_inline(L_0, L_1, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InternalLODGroupSettings_t9F08C56422FEBE035004C6D96DE664DB1961F38D UnsafeUtility_ReadArrayElement_TisInternalLODGroupSettings_t9F08C56422FEBE035004C6D96DE664DB1961F38D_mB6F5D86C1E8F6A0BEACDD6D4F0B693CCDB4277C0 (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		InternalLODGroupSettings_t9F08C56422FEBE035004C6D96DE664DB1961F38D L_2;
		L_2 = UnsafeUtilityInternal_ReadArrayElement_TisInternalLODGroupSettings_t9F08C56422FEBE035004C6D96DE664DB1961F38D_m9B17FB9991C066865590CE397EC91A2056D1089A_inline(L_0, L_1, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InternalMeshLodRendererSettings_t2B499712F80597BFB45A4813CC139D1BEEDEBB73 UnsafeUtility_ReadArrayElement_TisInternalMeshLodRendererSettings_t2B499712F80597BFB45A4813CC139D1BEEDEBB73_mA754D188685B180A0F497FD811E5532A56743BD2 (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		InternalMeshLodRendererSettings_t2B499712F80597BFB45A4813CC139D1BEEDEBB73 L_2;
		L_2 = UnsafeUtilityInternal_ReadArrayElement_TisInternalMeshLodRendererSettings_t2B499712F80597BFB45A4813CC139D1BEEDEBB73_mE43484F89D326B2CFC50C120174997AB2082FBE0_inline(L_0, L_1, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InternalMeshRendererSettings_tFA0423524032AD2C34E24C53548BE032F67FC6AF UnsafeUtility_ReadArrayElement_TisInternalMeshRendererSettings_tFA0423524032AD2C34E24C53548BE032F67FC6AF_mE609B853DC7087CE4C10CE2F308B1B9C4BE94115 (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		InternalMeshRendererSettings_tFA0423524032AD2C34E24C53548BE032F67FC6AF L_2;
		L_2 = UnsafeUtilityInternal_ReadArrayElement_TisInternalMeshRendererSettings_tFA0423524032AD2C34E24C53548BE032F67FC6AF_m0FD7B9D7ECD3AD5A4D20DA6E6A0CF95AB3D75C46_inline(L_0, L_1, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21 UnsafeUtility_ReadArrayElement_TisLightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21_m2ED1FB77CEDEF6090E5857DAA0CE6F3AFC6C35E4 (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21 L_2;
		L_2 = UnsafeUtilityInternal_ReadArrayElement_TisLightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21_m2B823F0822F76CA45530AD04A3D3DB110EC8259B_inline(L_0, L_1, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 UnsafeUtility_ReadArrayElement_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_m200AA8F5A5776F6CAEA9E79B6551EC01D4316611 (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_2;
		L_2 = UnsafeUtilityInternal_ReadArrayElement_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_mDC2BC421E66DB6186E7ADB438406EB88CF637011_inline(L_0, L_1, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960 UnsafeUtility_ReadArrayElement_TisModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960_mEA45FBD76E48DCE01C215C48D8C647B488C60516 (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		ModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960 L_2;
		L_2 = UnsafeUtilityInternal_ReadArrayElement_TisModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960_m1967F25DC74B6E081724F2C2A8158CE6999A3F63_inline(L_0, L_1, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C UnsafeUtility_ReadArrayElement_TisPlane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C_mEB527AAA71722D961891591C3A13D3FDD83B42A5 (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C L_2;
		L_2 = UnsafeUtilityInternal_ReadArrayElement_TisPlane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C_mD0A53DDAFDC425AE7EEA283E95C48E3A414A87FD_inline(L_0, L_1, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 UnsafeUtility_ReadArrayElement_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_mC90C0EE3D32DDFEF22B982217F27BA07286AC2B7 (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2;
		L_2 = UnsafeUtilityInternal_ReadArrayElement_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m02B55D9C2BC9B83FDE111ACC6AC6826964D5E3D4_inline(L_0, L_1, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RangeInt_tDFBE4FD13857C11F21F7C3DA6B60D05341B67268 UnsafeUtility_ReadArrayElement_TisRangeInt_tDFBE4FD13857C11F21F7C3DA6B60D05341B67268_m98C26C5BAD492EBCE9F5F45EEADDD18D3E6E86B3 (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		RangeInt_tDFBE4FD13857C11F21F7C3DA6B60D05341B67268 L_2;
		L_2 = UnsafeUtilityInternal_ReadArrayElement_TisRangeInt_tDFBE4FD13857C11F21F7C3DA6B60D05341B67268_mA0E6724F3B2E9E09250FBC5091626A5CF5A6FF93_inline(L_0, L_1, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float UnsafeUtility_ReadArrayElement_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mE8E8016F9D75B5FE0F784B0B6EBEF71D6B31D134 (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		float L_2;
		L_2 = UnsafeUtilityInternal_ReadArrayElement_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mC8BDFAFE242DB675D668D2942EFD7CE36006251C_inline(L_0, L_1, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UEncroachingSegment_t3AE1B0B8E50020697D3FA3FFF0C86E406ABFA3C1 UnsafeUtility_ReadArrayElement_TisUEncroachingSegment_t3AE1B0B8E50020697D3FA3FFF0C86E406ABFA3C1_m6C6D3136E8452CBF21273768028BD9DC2C5502C1 (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		UEncroachingSegment_t3AE1B0B8E50020697D3FA3FFF0C86E406ABFA3C1 L_2;
		L_2 = UnsafeUtilityInternal_ReadArrayElement_TisUEncroachingSegment_t3AE1B0B8E50020697D3FA3FFF0C86E406ABFA3C1_m8F5A17DAD42997B6D75E949B0FF9379B2D066CE2_inline(L_0, L_1, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UEvent_t81CE84F34955D2A2DE962ADE28CDE659605FB2AC UnsafeUtility_ReadArrayElement_TisUEvent_t81CE84F34955D2A2DE962ADE28CDE659605FB2AC_m42502E154D35D1F0F7FE378A38BF7A2B4F85EB7F (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		UEvent_t81CE84F34955D2A2DE962ADE28CDE659605FB2AC L_2;
		L_2 = UnsafeUtilityInternal_ReadArrayElement_TisUEvent_t81CE84F34955D2A2DE962ADE28CDE659605FB2AC_mEE88732C7CB1E07F024B69DB93E5131352E8A1E7_inline(L_0, L_1, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UHull_tBA3DC6A41F928298B0D924EDFE00150F307BA851 UnsafeUtility_ReadArrayElement_TisUHull_tBA3DC6A41F928298B0D924EDFE00150F307BA851_m364F47583D2E1A4B76FEC89361C8D440F6E74322 (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		UHull_tBA3DC6A41F928298B0D924EDFE00150F307BA851 L_2;
		L_2 = UnsafeUtilityInternal_ReadArrayElement_TisUHull_tBA3DC6A41F928298B0D924EDFE00150F307BA851_m8EB87859A6B1CDD9DD1729BB8913CB8985295847_inline(L_0, L_1, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t UnsafeUtility_ReadArrayElement_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mDA4F2F1FC33E2F2F8CC3E761D626E638762C61E4 (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		uint16_t L_2;
		L_2 = UnsafeUtilityInternal_ReadArrayElement_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m67997A9A0642E52B1CB9AD52C90FD98038221C0F_inline(L_0, L_1, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t UnsafeUtility_ReadArrayElement_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mDA80BAFF55EA77496672B3B5B3804B55274B7E95 (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		uint32_t L_2;
		L_2 = UnsafeUtilityInternal_ReadArrayElement_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mAA4A4AC11C7C0784A0566FAE86EFBAD08CF4126D_inline(L_0, L_1, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t UnsafeUtility_ReadArrayElement_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m8F5B829A65BCE22A8B2364D1C303A1E2876A3898 (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		uint64_t L_2;
		L_2 = UnsafeUtilityInternal_ReadArrayElement_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mA5895D44428BCE7F38A3E30CA324F5E0E599364F_inline(L_0, L_1, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UStar_tF8CA0D7A7A3197E68176CA173B07251554C7465D UnsafeUtility_ReadArrayElement_TisUStar_tF8CA0D7A7A3197E68176CA173B07251554C7465D_mF962A8C6B0F5C51FAE55351F949AE793AFEDB518 (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		UStar_tF8CA0D7A7A3197E68176CA173B07251554C7465D L_2;
		L_2 = UnsafeUtilityInternal_ReadArrayElement_TisUStar_tF8CA0D7A7A3197E68176CA173B07251554C7465D_m11B8FD36241682A117B1BD6EC4B1F4ED78B49B47_inline(L_0, L_1, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UTriangle_t6D4513C8A4054BEEC30F937F14BBE005BC4A141F UnsafeUtility_ReadArrayElement_TisUTriangle_t6D4513C8A4054BEEC30F937F14BBE005BC4A141F_mB4BD207D2E7152F7D8F3BBFB1530009599F55141 (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		UTriangle_t6D4513C8A4054BEEC30F937F14BBE005BC4A141F L_2;
		L_2 = UnsafeUtilityInternal_ReadArrayElement_TisUTriangle_t6D4513C8A4054BEEC30F937F14BBE005BC4A141F_mD9BEE07F15A62EDC899159691530AC27B6ABDAE2_inline(L_0, L_1, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 UnsafeUtility_ReadArrayElement_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m113285A6894774BBBB284A644C2D7094F30AB442 (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = UnsafeUtilityInternal_ReadArrayElement_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m726E59AE606BDAEEA7E8DD67B5F69FD00875153F_inline(L_0, L_1, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 UnsafeUtility_ReadArrayElement_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mB8C3F12E6821644D47C741DA0824437BD6F96340 (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_2;
		L_2 = UnsafeUtilityInternal_ReadArrayElement_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m4E48372E1097232C60446DED043FEC5C7A61C4B0_inline(L_0, L_1, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_ReadArrayElement_TisIl2CppFullySharedGenericAny_m295186AA082411C57485F8BDB824E4D8AC1C6D93_fshared (void* ___0_source, int32_t ___1_index, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t3818EBA71DF5EA591716A05E0BBD988D81931B5C = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_T_t3818EBA71DF5EA591716A05E0BBD988D81931B5C);
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		InvokerActionInvoker3< void*, int32_t, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), NULL, L_0, L_1, (Il2CppFullySharedGenericAny*)L_2);
		il2cpp_codegen_memcpy(il2cppRetVal, L_2, SizeOf_T_t3818EBA71DF5EA591716A05E0BBD988D81931B5C);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double2_t2124FB15A5BDCC0BD48B80116D4B24DC9DCA9D83 UnsafeUtility_ReadArrayElement_Tisdouble2_t2124FB15A5BDCC0BD48B80116D4B24DC9DCA9D83_m14BD1904E376CB57F1814E97084C29FA0F7AD7D7 (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		double2_t2124FB15A5BDCC0BD48B80116D4B24DC9DCA9D83 L_2;
		L_2 = UnsafeUtilityInternal_ReadArrayElement_Tisdouble2_t2124FB15A5BDCC0BD48B80116D4B24DC9DCA9D83_m40CEC3B3B74322BA7691BA450694C03DC4A1D452_inline(L_0, L_1, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5 UnsafeUtility_ReadArrayElement_Tisfloat2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5_m92C401F406D35BCD2980C867375C73FB290FCA83 (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		float2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5 L_2;
		L_2 = UnsafeUtilityInternal_ReadArrayElement_Tisfloat2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5_mAA646CC2B25329E898077679928AB15DE9BC865E_inline(L_0, L_1, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int2_tB123E869131C6102341F8F9AA01726E0E7C2768D UnsafeUtility_ReadArrayElement_Tisint2_tB123E869131C6102341F8F9AA01726E0E7C2768D_mEF7B9D6AC26FFFC21DE942E43BF4A9F61B241442 (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		int2_tB123E869131C6102341F8F9AA01726E0E7C2768D L_2;
		L_2 = UnsafeUtilityInternal_ReadArrayElement_Tisint2_tB123E869131C6102341F8F9AA01726E0E7C2768D_m331A9772A1384E1911C59CDE98F9366F81EED2C7_inline(L_0, L_1, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int3_t18873F121F1EF24ECE875EAB01170B69E1B498C5 UnsafeUtility_ReadArrayElement_Tisint3_t18873F121F1EF24ECE875EAB01170B69E1B498C5_m53CCBF36FDBB11B0A73C124541588FC4B578FF2F (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		int3_t18873F121F1EF24ECE875EAB01170B69E1B498C5 L_2;
		L_2 = UnsafeUtilityInternal_ReadArrayElement_Tisint3_t18873F121F1EF24ECE875EAB01170B69E1B498C5_mBD52AD6E8736CB48656CFA0961D93E411266B81E_inline(L_0, L_1, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int4_t6DC3FEACC0DD1EAE4D5B897188E8D669BC4DAB90 UnsafeUtility_ReadArrayElement_Tisint4_t6DC3FEACC0DD1EAE4D5B897188E8D669BC4DAB90_m338AD5DAA40CD958BD2FB4F096F9631C232BD083 (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		int4_t6DC3FEACC0DD1EAE4D5B897188E8D669BC4DAB90 L_2;
		L_2 = UnsafeUtilityInternal_ReadArrayElement_Tisint4_t6DC3FEACC0DD1EAE4D5B897188E8D669BC4DAB90_m776429375A9EF46AD949435543FDD0C5676070AC_inline(L_0, L_1, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_ReadArrayElementWithStride_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m405947B70A379EFE67E19578E195B20BC0B75A67 (void* ___0_source, int32_t ___1_index, int32_t ___2_stride, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		int32_t L_2 = ___2_stride;
		int32_t L_3;
		L_3 = UnsafeUtilityInternal_ReadArrayElementWithStride_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m142239EC03EF551AAC70809189D5B14C59260A72_inline(L_0, L_1, L_2, NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_ReadArrayElementWithStride_TisIl2CppFullySharedGenericAny_mA2FA845DC97225E057F01D0D4161C801EECA284F_fshared (void* ___0_source, int32_t ___1_index, int32_t ___2_stride, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_tF00BEB2D39C607DEF67E891605A383D95A9912A8 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T_tF00BEB2D39C607DEF67E891605A383D95A9912A8);
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		int32_t L_2 = ___2_stride;
		InvokerActionInvoker4< void*, int32_t, int32_t, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), NULL, L_0, L_1, L_2, (Il2CppFullySharedGenericAny*)L_3);
		il2cpp_codegen_memcpy(il2cppRetVal, L_3, SizeOf_T_tF00BEB2D39C607DEF67E891605A383D95A9912A8);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisBatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D_m012D9D895FCD4DFB1B9CD8A5C7DA209064892673 (const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = UnsafeUtilityInternal_SizeOf_TisBatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D_m439E4115054F2F7F3DFE86DEAEF565B37F9DA51F_inline(NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_mD2F34AAB2050E90842D914F6E4ACCC10746C260D (const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = UnsafeUtilityInternal_SizeOf_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_m1B3257CEE82ED08641AFCA4D9B2ACBC96222B922_inline(NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m97C7D5E5DE74DC60A0ECAA914830BEDF2C46ACAA (const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = UnsafeUtilityInternal_SizeOf_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m485E79FA6794AD30B29C6414A85A867DF156E5E1_inline(NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mF1A992A33EE20BF0BC7D52A877B684496C257722 (const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = UnsafeUtilityInternal_SizeOf_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m2DB960E4C25CE2F72A3A1ABC302E23F0963089F5_inline(NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B_m390771D188BFC7495FCB3A56351B5E401291B516 (const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = UnsafeUtilityInternal_SizeOf_TisContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B_m409346A2C7D4615BB703F2802A6B9E12650CDB39_inline(NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisCullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0_mEE3DDAFA529F9402C6A7F47BFB9A6FF91410C2BE (const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = UnsafeUtilityInternal_SizeOf_TisCullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0_m445C79CB5CEFFE71D2530C3CACDBC4B8D3A9D0A9_inline(NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisEmbeddedLODBuffer_t6D75CECAC228D0710132158E77ACB46D0C43027B_m4D0481064DF16017FB4BA2602339F52B31AF4C43 (const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = UnsafeUtilityInternal_SizeOf_TisEmbeddedLODBuffer_t6D75CECAC228D0710132158E77ACB46D0C43027B_mA1468D24A7B620A10E023979868C9D1EE2D5DE69_inline(NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisEntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8_m08598794D3B261C40B450629DF5F06602A5AE07E (const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = UnsafeUtilityInternal_SizeOf_TisEntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8_mD1B0EBD0B43B19830ED5B0A121221D27AA0B963E_inline(NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisGPUDrivenMeshData_t0D53E18AECCB1ED48149AFD77C12CF1624340C32_m45B49B28BF4C4D3C67E3E97242A22A0ABC6DEFE3 (const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = UnsafeUtilityInternal_SizeOf_TisGPUDrivenMeshData_t0D53E18AECCB1ED48149AFD77C12CF1624340C32_mAC88D9A89F4AD39D5BDA8F3FF5419977CDCCC3E3_inline(NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisGPUDrivenSubMesh_t2D3B77E083A07816281294E54907E064B2A2A22B_mF2F331D655F94C7D53A2A6CC53FEA77004CC0D8F (const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = UnsafeUtilityInternal_SizeOf_TisGPUDrivenSubMesh_t2D3B77E083A07816281294E54907E064B2A2A22B_m90E80C680B80CD82EB5839F5DDE33F22BFBF18D1_inline(NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mCB825B1D70E67004BF5727535B982744D7748AEC (const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = UnsafeUtilityInternal_SizeOf_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m8EC54AD1BB1FFE52E59D872A1F83666DD9D381AA_inline(NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931 (const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = UnsafeUtilityInternal_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mA24CDBA02971DC06DEDE40B17E72F8C262B6B131_inline(NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisIntPtr_t_mB2B3CFF1CB804C99734D4E2F5D8A8C9DB0D209A8 (const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = UnsafeUtilityInternal_SizeOf_TisIntPtr_t_mF9218FE174B91F132731D032A744AFC048AFB932_inline(NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisInternalLODGroupSettings_t9F08C56422FEBE035004C6D96DE664DB1961F38D_m70E9545B366314302788F0E1BC38923FA9A615DD (const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = UnsafeUtilityInternal_SizeOf_TisInternalLODGroupSettings_t9F08C56422FEBE035004C6D96DE664DB1961F38D_m7042BFD95CFAA71CA1DD3DB939DB030B0656C6D2_inline(NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisInternalMeshLodRendererSettings_t2B499712F80597BFB45A4813CC139D1BEEDEBB73_m6751488A2A9157A9C997B3565468257C18BED296 (const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = UnsafeUtilityInternal_SizeOf_TisInternalMeshLodRendererSettings_t2B499712F80597BFB45A4813CC139D1BEEDEBB73_m00E1BE18CB920FCCCBFE7C2C4A1BF8BA0A7EFECF_inline(NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisInternalMeshRendererSettings_tFA0423524032AD2C34E24C53548BE032F67FC6AF_mD9339F750CA0D2D3BF8C7BDEF41B48D06193F67A (const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = UnsafeUtilityInternal_SizeOf_TisInternalMeshRendererSettings_tFA0423524032AD2C34E24C53548BE032F67FC6AF_mFB035E1C19B4E54280B4B9D660EDA3A8A086CAF6_inline(NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisLightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21_mB02E6C828323C4B414AB855EA914B81EADADEB68 (const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = UnsafeUtilityInternal_SizeOf_TisLightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21_mF4E7699562D0DD8909029C23414C07C41E83166C_inline(NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_m3E93E3D3F245D3AACCB1346E8FEFD7BAC2ABBC4C (const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = UnsafeUtilityInternal_SizeOf_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_m310E3F9A8E091DFAB070D735691100178B15463B_inline(NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960_mC54F55F9EC7B43A45570471F1D8CFA82F37AFE1D (const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = UnsafeUtilityInternal_SizeOf_TisModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960_m4FA6D33FFCEC8031D4883ABCA5ED229D28E44D80_inline(NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisPlane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C_mC98A334942D13D3EBBEAE20C5BB187A0A0ADF14E (const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = UnsafeUtilityInternal_SizeOf_TisPlane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C_m289C662F3DEC8A9CACB14474D55B65B1E5E1AE84_inline(NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m37DD322328DA83780B700E31BC9725EB652C968D (const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = UnsafeUtilityInternal_SizeOf_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_mA10F583A957D150C530045E8E0C54DD2A4D96489_inline(NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisRangeInt_tDFBE4FD13857C11F21F7C3DA6B60D05341B67268_m8FEB40E99B7AC93B17218E31E52424937F30C370 (const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = UnsafeUtilityInternal_SizeOf_TisRangeInt_tDFBE4FD13857C11F21F7C3DA6B60D05341B67268_m462940FF70DE74B43CFAFE2670B4A652829BDF3F_inline(NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m3E4AF62978F92E52CE242CAC83115C8EA6C850A3 (const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = UnsafeUtilityInternal_SizeOf_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m2379B61902CFDAAAE7E5BE25FDA4BBBBF7E54273_inline(NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisUEncroachingSegment_t3AE1B0B8E50020697D3FA3FFF0C86E406ABFA3C1_mB54E8D4B4BB80B1D6B59DE0A342560088F9DCE8D (const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = UnsafeUtilityInternal_SizeOf_TisUEncroachingSegment_t3AE1B0B8E50020697D3FA3FFF0C86E406ABFA3C1_m78BC20EBEDF9DDD29C261AACF9F19965B5A49C92_inline(NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisUEvent_t81CE84F34955D2A2DE962ADE28CDE659605FB2AC_m18579B644AA5955CCD5B43833F86B10165515794 (const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = UnsafeUtilityInternal_SizeOf_TisUEvent_t81CE84F34955D2A2DE962ADE28CDE659605FB2AC_mD7804F40606876E9729617E9761E42F9D6056B26_inline(NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisUHull_tBA3DC6A41F928298B0D924EDFE00150F307BA851_m5F414CD290F534D9924F4CA874CF270AD4CC1633 (const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = UnsafeUtilityInternal_SizeOf_TisUHull_tBA3DC6A41F928298B0D924EDFE00150F307BA851_mDB23A7351A2DB7A69197EC17A28401C3A9B4DA98_inline(NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mEC9469DBD91362D6135B8F5A81E90486BF328075 (const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = UnsafeUtilityInternal_SizeOf_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mB21F3357E1DB01146285E803CB68EE945ADA7149_inline(NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mD5B3C428BB4E25A820C242BF663DC5471EFFA654 (const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = UnsafeUtilityInternal_SizeOf_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m483305F08D432A8FC41A6E11289383D1E2C3E8AE_inline(NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m6C198B51ACD7B8EC62D5E0E75433C12BE9D65A58 (const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = UnsafeUtilityInternal_SizeOf_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mAA2B8333B77A7410376516B6E13FCC02AEE6A5AC_inline(NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisUStar_tF8CA0D7A7A3197E68176CA173B07251554C7465D_m0BD346B4AA74E50B219277112ED3DB49609E0E9A (const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = UnsafeUtilityInternal_SizeOf_TisUStar_tF8CA0D7A7A3197E68176CA173B07251554C7465D_m87DD2D062338C42E1537725895679ED703A237D3_inline(NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisUTriangle_t6D4513C8A4054BEEC30F937F14BBE005BC4A141F_m7864EBA9D1DB4ED7323CFDDF271E1C7AF2F44952 (const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = UnsafeUtilityInternal_SizeOf_TisUTriangle_t6D4513C8A4054BEEC30F937F14BBE005BC4A141F_m0E3277DA666E697D096F659128CBE7238C655CA3_inline(NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mB2AF8CA03DEC485BAD3A37CCBE5CDEBA3C67758C (const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = UnsafeUtilityInternal_SizeOf_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m297C8507511B4B7C587AF49B53D880021418C5CC_inline(NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m2842DB279BEAD40C9CB39EC85BDE2241798CFFF7 (const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = UnsafeUtilityInternal_SizeOf_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m567C299D0E9EA26E8A3ADC4158D175D9F101BC1E_inline(NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisIl2CppFullySharedGenericStruct_mB6FBF9DDC79FEC02EC8705E9E527E1CD495564BF_fshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_Tisdouble2_t2124FB15A5BDCC0BD48B80116D4B24DC9DCA9D83_m832636FF379E2B26D1AB0BCC2F68E799837D5C4A (const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = UnsafeUtilityInternal_SizeOf_Tisdouble2_t2124FB15A5BDCC0BD48B80116D4B24DC9DCA9D83_m96D588AB3F164F56BB1DE77BC435342E9F1BD745_inline(NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_Tisfloat2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5_mE9E8F42621BB5250450EE0CB425ADD4F854695DA (const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = UnsafeUtilityInternal_SizeOf_Tisfloat2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5_mE64EA17FB7FE71E52F389B33C2AE7F4894B63B16_inline(NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_Tisint2_tB123E869131C6102341F8F9AA01726E0E7C2768D_mEBA77C64C399D4BCC37EE3F3D159A5E94C33C6D3 (const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = UnsafeUtilityInternal_SizeOf_Tisint2_tB123E869131C6102341F8F9AA01726E0E7C2768D_mB216CE24697733053C38D23575F516F72C0E7F06_inline(NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_Tisint3_t18873F121F1EF24ECE875EAB01170B69E1B498C5_m8D990A8D391065FD74E77A00692F7A4E622C60D9 (const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = UnsafeUtilityInternal_SizeOf_Tisint3_t18873F121F1EF24ECE875EAB01170B69E1B498C5_m8C0D64D09B9A2F8238A614656203048B06759A6B_inline(NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_Tisint4_t6DC3FEACC0DD1EAE4D5B897188E8D669BC4DAB90_mE55FC19F1D06AA452120E724280DA0E7FE4BD66C (const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = UnsafeUtilityInternal_SizeOf_Tisint4_t6DC3FEACC0DD1EAE4D5B897188E8D669BC4DAB90_mA8C62CC9E230AC8C9856724F0AD3DB92EBABE192_inline(NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisBatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D_m91B4BE7F47C68D100E0A963FE8AEDB5C491546FA (void* ___0_destination, int32_t ___1_index, BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D L_2 = ___2_value;
		UnsafeUtilityInternal_WriteArrayElement_TisBatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D_m8F2F55BA88BD7D9AE44C0AEDE2832F7B5D1F35B6_inline(L_0, L_1, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_m39673DEA8CD190D6395DE7B4743E53DD8E7576E0 (void* ___0_destination, int32_t ___1_index, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_2 = ___2_value;
		UnsafeUtilityInternal_WriteArrayElement_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_m2A0F09E085DD77128506415E87841F78B28A6C54_inline(L_0, L_1, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m193B136343991E144053A14C8C435C19E5516EE0 (void* ___0_destination, int32_t ___1_index, uint8_t ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		uint8_t L_2 = ___2_value;
		UnsafeUtilityInternal_WriteArrayElement_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m5BCA8D074309F3B46CEC7FD68ED40110FC26ADB7_inline(L_0, L_1, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m7D9CCB085034C8CAA723407DD3DD35BD7B0543E8 (void* ___0_destination, int32_t ___1_index, Il2CppChar ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		Il2CppChar L_2 = ___2_value;
		UnsafeUtilityInternal_WriteArrayElement_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mD1BA031E3E1E75F3DE14D24A768757C9E12F51CD_inline(L_0, L_1, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B_mF19D462EAE007A50E5E2D633559CE72611626837 (void* ___0_destination, int32_t ___1_index, ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B L_2 = ___2_value;
		UnsafeUtilityInternal_WriteArrayElement_TisContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B_mE39132565475093BAD090E92CA932991E46BC595_inline(L_0, L_1, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisCullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0_mEF6442BF2C415D9A5FFD255E882378DF7F682E19 (void* ___0_destination, int32_t ___1_index, CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0 ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0 L_2 = ___2_value;
		UnsafeUtilityInternal_WriteArrayElement_TisCullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0_m384FBBC6F8F5110A48E4143C7F675776EA47445F_inline(L_0, L_1, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m50027C12D1885A79A6CB214E98437C87238F159F (void* ___0_destination, int32_t ___1_index, double ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		double L_2 = ___2_value;
		UnsafeUtilityInternal_WriteArrayElement_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_mC2A7BB5CE0978BC539FB52E5326DA5A704553463_inline(L_0, L_1, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisEmbeddedLODBuffer_t6D75CECAC228D0710132158E77ACB46D0C43027B_m81193E3F78F23B139FABC84F014169954DC20743 (void* ___0_destination, int32_t ___1_index, EmbeddedLODBuffer_t6D75CECAC228D0710132158E77ACB46D0C43027B ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		EmbeddedLODBuffer_t6D75CECAC228D0710132158E77ACB46D0C43027B L_2 = ___2_value;
		UnsafeUtilityInternal_WriteArrayElement_TisEmbeddedLODBuffer_t6D75CECAC228D0710132158E77ACB46D0C43027B_m51B6E5CA111B53732375EAEACEAAA619F6649872_inline(L_0, L_1, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisEntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8_m0E708F519A1821659A5DB22A6551BF3AD6584AF2 (void* ___0_destination, int32_t ___1_index, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 L_2 = ___2_value;
		UnsafeUtilityInternal_WriteArrayElement_TisEntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8_m9C0FADCA718C9341E229CEE17C8FE4855AC72880_inline(L_0, L_1, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisGPUDrivenMeshData_t0D53E18AECCB1ED48149AFD77C12CF1624340C32_mA2ECC305BE471B742A0F8A21008BFDF84B8CE6DD (void* ___0_destination, int32_t ___1_index, GPUDrivenMeshData_t0D53E18AECCB1ED48149AFD77C12CF1624340C32 ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		GPUDrivenMeshData_t0D53E18AECCB1ED48149AFD77C12CF1624340C32 L_2 = ___2_value;
		UnsafeUtilityInternal_WriteArrayElement_TisGPUDrivenMeshData_t0D53E18AECCB1ED48149AFD77C12CF1624340C32_m8D30843628A1D5617028C57F54F533476754764A_inline(L_0, L_1, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisGPUDrivenSubMesh_t2D3B77E083A07816281294E54907E064B2A2A22B_mD8E8E40C6234AA692B549620F0D7FF1D2309713E (void* ___0_destination, int32_t ___1_index, GPUDrivenSubMesh_t2D3B77E083A07816281294E54907E064B2A2A22B ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		GPUDrivenSubMesh_t2D3B77E083A07816281294E54907E064B2A2A22B L_2 = ___2_value;
		UnsafeUtilityInternal_WriteArrayElement_TisGPUDrivenSubMesh_t2D3B77E083A07816281294E54907E064B2A2A22B_mD11C11FD5E761DB5DFA854AE4BAD7EC7255AE737_inline(L_0, L_1, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m3FEF0035123C35A7E3C79551C6CB1CF49D800A4C (void* ___0_destination, int32_t ___1_index, int16_t ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		int16_t L_2 = ___2_value;
		UnsafeUtilityInternal_WriteArrayElement_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m98F5668334FA5D7DC5943C2EF4820057B8FA3AC8_inline(L_0, L_1, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m0DD1CC90B2F1EF5041F2F4E1DABB58224229F0D7 (void* ___0_destination, int32_t ___1_index, int32_t ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		int32_t L_2 = ___2_value;
		UnsafeUtilityInternal_WriteArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m6CE8AF6F42FA98657985C680DB85747DAC856E2F_inline(L_0, L_1, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisIntPtr_t_m4F172B1EA620A9AAD916874CDBA3ECB5FB5BA8BE (void* ___0_destination, int32_t ___1_index, intptr_t ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		intptr_t L_2 = ___2_value;
		UnsafeUtilityInternal_WriteArrayElement_TisIntPtr_t_mD032891DCCD5A38294F51BAEEA8BFAA62B8557FB_inline(L_0, L_1, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisInternalLODGroupSettings_t9F08C56422FEBE035004C6D96DE664DB1961F38D_mE6EB6C7E8C8354FAF1CBCC74E3824B89F17DADEF (void* ___0_destination, int32_t ___1_index, InternalLODGroupSettings_t9F08C56422FEBE035004C6D96DE664DB1961F38D ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		InternalLODGroupSettings_t9F08C56422FEBE035004C6D96DE664DB1961F38D L_2 = ___2_value;
		UnsafeUtilityInternal_WriteArrayElement_TisInternalLODGroupSettings_t9F08C56422FEBE035004C6D96DE664DB1961F38D_m8A735DF8D46F26149043C87F203926540BC1E6B8_inline(L_0, L_1, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisInternalMeshLodRendererSettings_t2B499712F80597BFB45A4813CC139D1BEEDEBB73_mADB541C095B1C4A306057C9E114235988B3A52D9 (void* ___0_destination, int32_t ___1_index, InternalMeshLodRendererSettings_t2B499712F80597BFB45A4813CC139D1BEEDEBB73 ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		InternalMeshLodRendererSettings_t2B499712F80597BFB45A4813CC139D1BEEDEBB73 L_2 = ___2_value;
		UnsafeUtilityInternal_WriteArrayElement_TisInternalMeshLodRendererSettings_t2B499712F80597BFB45A4813CC139D1BEEDEBB73_mD92C129429E118347DCE3E80F61ABED812BB3713_inline(L_0, L_1, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisInternalMeshRendererSettings_tFA0423524032AD2C34E24C53548BE032F67FC6AF_m35A9E355587315DB02A3550EF7A71172F418C9C5 (void* ___0_destination, int32_t ___1_index, InternalMeshRendererSettings_tFA0423524032AD2C34E24C53548BE032F67FC6AF ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		InternalMeshRendererSettings_tFA0423524032AD2C34E24C53548BE032F67FC6AF L_2 = ___2_value;
		UnsafeUtilityInternal_WriteArrayElement_TisInternalMeshRendererSettings_tFA0423524032AD2C34E24C53548BE032F67FC6AF_m7A4D40E228244C59345E45676D4CC8348B83617A_inline(L_0, L_1, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisLightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21_m6113BA4FEE412326B8C4AE48EF490E280EF24144 (void* ___0_destination, int32_t ___1_index, LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21 ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21 L_2 = ___2_value;
		UnsafeUtilityInternal_WriteArrayElement_TisLightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21_m214EFE079E3D95383C08945E8BAFA5E3C3FAA190_inline(L_0, L_1, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_mDED3D71F106839CF27D02475C04EB53AFC379717 (void* ___0_destination, int32_t ___1_index, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_2 = ___2_value;
		UnsafeUtilityInternal_WriteArrayElement_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_mA93DE94079CF55B4D3FB32AE0780DF796C3CCA47_inline(L_0, L_1, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960_m984D59C779E69C17ED01C8FAB083CE6F114D6E44 (void* ___0_destination, int32_t ___1_index, ModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960 ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		ModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960 L_2 = ___2_value;
		UnsafeUtilityInternal_WriteArrayElement_TisModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960_m6B028924EA3CC36810A213B16F58DE31DE31687E_inline(L_0, L_1, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisPlane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C_m5752F3073072D6DCB16C429071ED8126C1CB6502 (void* ___0_destination, int32_t ___1_index, Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C L_2 = ___2_value;
		UnsafeUtilityInternal_WriteArrayElement_TisPlane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C_mBE119E8ABAF3D83B9A393B7004C208DF31E4901C_inline(L_0, L_1, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m8FECF9726B6A90FEADC960133A19868C171B28E9 (void* ___0_destination, int32_t ___1_index, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2 = ___2_value;
		UnsafeUtilityInternal_WriteArrayElement_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m9F92E74FB0AAD0FC40CC4DE76AF4BBA2C47C88D6_inline(L_0, L_1, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisRangeInt_tDFBE4FD13857C11F21F7C3DA6B60D05341B67268_m6F644E9F16BCA33198224E89E60794839BC6D59F (void* ___0_destination, int32_t ___1_index, RangeInt_tDFBE4FD13857C11F21F7C3DA6B60D05341B67268 ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		RangeInt_tDFBE4FD13857C11F21F7C3DA6B60D05341B67268 L_2 = ___2_value;
		UnsafeUtilityInternal_WriteArrayElement_TisRangeInt_tDFBE4FD13857C11F21F7C3DA6B60D05341B67268_m8A51075F082D2E4A1FB053EA92EB0FC37CAE35EA_inline(L_0, L_1, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mC03212F05038DAAA1F180317241B89AB90500BF8 (void* ___0_destination, int32_t ___1_index, float ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		float L_2 = ___2_value;
		UnsafeUtilityInternal_WriteArrayElement_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7871DE4308B379F2F32315380DA04C05F11DA13F_inline(L_0, L_1, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisUEncroachingSegment_t3AE1B0B8E50020697D3FA3FFF0C86E406ABFA3C1_m732CD7912D512A7A4C7D14088BB6F3E787787301 (void* ___0_destination, int32_t ___1_index, UEncroachingSegment_t3AE1B0B8E50020697D3FA3FFF0C86E406ABFA3C1 ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		UEncroachingSegment_t3AE1B0B8E50020697D3FA3FFF0C86E406ABFA3C1 L_2 = ___2_value;
		UnsafeUtilityInternal_WriteArrayElement_TisUEncroachingSegment_t3AE1B0B8E50020697D3FA3FFF0C86E406ABFA3C1_mE2BF625B742B08C6B1C2B768BD2C6B56E8FCF9FA_inline(L_0, L_1, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisUEvent_t81CE84F34955D2A2DE962ADE28CDE659605FB2AC_m15133A0C0BF6249AE7A0FDFE4C67BB3E791F69D9 (void* ___0_destination, int32_t ___1_index, UEvent_t81CE84F34955D2A2DE962ADE28CDE659605FB2AC ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		UEvent_t81CE84F34955D2A2DE962ADE28CDE659605FB2AC L_2 = ___2_value;
		UnsafeUtilityInternal_WriteArrayElement_TisUEvent_t81CE84F34955D2A2DE962ADE28CDE659605FB2AC_m2FBE2FA3BBCE3FB77BD4AE0019762C8453B4C17B_inline(L_0, L_1, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisUHull_tBA3DC6A41F928298B0D924EDFE00150F307BA851_mB66A73C5EE6A1E07FE1D498E36446BB1171162A3 (void* ___0_destination, int32_t ___1_index, UHull_tBA3DC6A41F928298B0D924EDFE00150F307BA851 ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		UHull_tBA3DC6A41F928298B0D924EDFE00150F307BA851 L_2 = ___2_value;
		UnsafeUtilityInternal_WriteArrayElement_TisUHull_tBA3DC6A41F928298B0D924EDFE00150F307BA851_m80FE70456505C6177FDF18C114A5896234C5A46A_inline(L_0, L_1, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mAAF2E6888B17B2E7C3606BE66298D92F589F68C8 (void* ___0_destination, int32_t ___1_index, uint16_t ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		uint16_t L_2 = ___2_value;
		UnsafeUtilityInternal_WriteArrayElement_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m8096FCC44AAECDAC8F7011A27B6D4B6745A539CE_inline(L_0, L_1, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m839FEB3192BEC0090FBA73A11E371E1A01C13ADF (void* ___0_destination, int32_t ___1_index, uint32_t ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = ___2_value;
		UnsafeUtilityInternal_WriteArrayElement_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m2A3A6B90150B69BBDEE5319C3CE02AF8B872B64B_inline(L_0, L_1, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mC1C144C4AC4D9B3B2C30F06F88CB6E6AB475125E (void* ___0_destination, int32_t ___1_index, uint64_t ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		uint64_t L_2 = ___2_value;
		UnsafeUtilityInternal_WriteArrayElement_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mC71868C665A692778D508E69E8AF1A631E0CD348_inline(L_0, L_1, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisUStar_tF8CA0D7A7A3197E68176CA173B07251554C7465D_m2113B27F893798752DB889FE405DA10308484E3D (void* ___0_destination, int32_t ___1_index, UStar_tF8CA0D7A7A3197E68176CA173B07251554C7465D ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		UStar_tF8CA0D7A7A3197E68176CA173B07251554C7465D L_2 = ___2_value;
		UnsafeUtilityInternal_WriteArrayElement_TisUStar_tF8CA0D7A7A3197E68176CA173B07251554C7465D_m5EA80C1639D238E594564D9B622DF4CCE1141D4B_inline(L_0, L_1, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisUTriangle_t6D4513C8A4054BEEC30F937F14BBE005BC4A141F_m652CA69E96E0C52A1BBBE531DC7C263D38BA15AF (void* ___0_destination, int32_t ___1_index, UTriangle_t6D4513C8A4054BEEC30F937F14BBE005BC4A141F ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		UTriangle_t6D4513C8A4054BEEC30F937F14BBE005BC4A141F L_2 = ___2_value;
		UnsafeUtilityInternal_WriteArrayElement_TisUTriangle_t6D4513C8A4054BEEC30F937F14BBE005BC4A141F_m6A69EFB7BEE099EB16798F6EA62AC3C8612E49D0_inline(L_0, L_1, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mC08010A74AC1BF608813C293C4C52F4EF4B30106 (void* ___0_destination, int32_t ___1_index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___2_value;
		UnsafeUtilityInternal_WriteArrayElement_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m4DC28ACC65CD91D06E733BEA0BC919D23DF3D7E4_inline(L_0, L_1, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m824816C030A3E2FD028D3B4ECCC252E8E50DDF6E (void* ___0_destination, int32_t ___1_index, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_2 = ___2_value;
		UnsafeUtilityInternal_WriteArrayElement_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mA724E762E40FA0C9F59E22D26CD7760418780D94_inline(L_0, L_1, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisIl2CppFullySharedGenericAny_m3C86E25D63AB95F3D572F8010D623EB7C6D78283_fshared (void* ___0_destination, int32_t ___1_index, Il2CppFullySharedGenericAny ___2_value, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t9B5DAD81EFECDA494525FB73A37EE675A422B5E5 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_T_t9B5DAD81EFECDA494525FB73A37EE675A422B5E5);
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		il2cpp_codegen_memcpy(L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___2_value : &___2_value), SizeOf_T_t9B5DAD81EFECDA494525FB73A37EE675A422B5E5);
		InvokerActionInvoker3< void*, int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), NULL, L_0, L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? L_2: *(void**)L_2));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_Tisdouble2_t2124FB15A5BDCC0BD48B80116D4B24DC9DCA9D83_m2EF6DA483B772658A1A474A6F60F145EF76A2CA6 (void* ___0_destination, int32_t ___1_index, double2_t2124FB15A5BDCC0BD48B80116D4B24DC9DCA9D83 ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		double2_t2124FB15A5BDCC0BD48B80116D4B24DC9DCA9D83 L_2 = ___2_value;
		UnsafeUtilityInternal_WriteArrayElement_Tisdouble2_t2124FB15A5BDCC0BD48B80116D4B24DC9DCA9D83_mF7835C7C0CCCC6506483D47D9F965AE133A2580A_inline(L_0, L_1, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_Tisfloat2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5_mA50FEE606D0A8B7BC7123320B1DD82EE34FA9714 (void* ___0_destination, int32_t ___1_index, float2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5 ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		float2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5 L_2 = ___2_value;
		UnsafeUtilityInternal_WriteArrayElement_Tisfloat2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5_m394E812F3E02FCD362EB8DCBF0A7D112DBBE9DA3_inline(L_0, L_1, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_Tisint2_tB123E869131C6102341F8F9AA01726E0E7C2768D_mB65608056427FDDB5C875F9A9BFA4AF826060353 (void* ___0_destination, int32_t ___1_index, int2_tB123E869131C6102341F8F9AA01726E0E7C2768D ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		int2_tB123E869131C6102341F8F9AA01726E0E7C2768D L_2 = ___2_value;
		UnsafeUtilityInternal_WriteArrayElement_Tisint2_tB123E869131C6102341F8F9AA01726E0E7C2768D_mE5E734E01AED08F1ED47485C1721B5B1331B0A58_inline(L_0, L_1, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_Tisint3_t18873F121F1EF24ECE875EAB01170B69E1B498C5_m794C9F01A3E5F0A9305838CD917B82E56A378D9C (void* ___0_destination, int32_t ___1_index, int3_t18873F121F1EF24ECE875EAB01170B69E1B498C5 ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		int3_t18873F121F1EF24ECE875EAB01170B69E1B498C5 L_2 = ___2_value;
		UnsafeUtilityInternal_WriteArrayElement_Tisint3_t18873F121F1EF24ECE875EAB01170B69E1B498C5_m3A3B9DFD873633E9078206152E40D232B1B0F8D2_inline(L_0, L_1, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_Tisint4_t6DC3FEACC0DD1EAE4D5B897188E8D669BC4DAB90_mCBF0D230EF842056DC360B35BFE25E596271187F (void* ___0_destination, int32_t ___1_index, int4_t6DC3FEACC0DD1EAE4D5B897188E8D669BC4DAB90 ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		int4_t6DC3FEACC0DD1EAE4D5B897188E8D669BC4DAB90 L_2 = ___2_value;
		UnsafeUtilityInternal_WriteArrayElement_Tisint4_t6DC3FEACC0DD1EAE4D5B897188E8D669BC4DAB90_mBFAF687EB944C031EFE295967D340706BA7A8F57_inline(L_0, L_1, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElementWithStride_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m80C8F345F9429879F43C7FD98D593C2A26798D07 (void* ___0_destination, int32_t ___1_index, int32_t ___2_stride, int32_t ___3_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		int32_t L_2 = ___2_stride;
		int32_t L_3 = ___3_value;
		UnsafeUtilityInternal_WriteArrayElementWithStride_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m46E20F2BBF8564E1BC4A202FE67CCEC245A13E11_inline(L_0, L_1, L_2, L_3, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElementWithStride_TisIl2CppFullySharedGenericAny_mD6C17E0F294919C280E583601A298E265D20935A_fshared (void* ___0_destination, int32_t ___1_index, int32_t ___2_stride, Il2CppFullySharedGenericAny ___3_value, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_tF19C221134244841BC3C05863D0FAA96B103C520 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T_tF19C221134244841BC3C05863D0FAA96B103C520);
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		int32_t L_2 = ___2_stride;
		il2cpp_codegen_memcpy(L_3, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___3_value : &___3_value), SizeOf_T_tF19C221134244841BC3C05863D0FAA96B103C520);
		InvokerActionInvoker4< void*, int32_t, int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), NULL, L_0, L_1, L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? L_3: *(void**)L_3));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t* UnsafeUtilityInternal_Add_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m5A3E59E17B5D433E8D6EFA9D4C1C40182A89B306 (uint8_t* ___0_source, int32_t ___1_elementOffset, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___0_source;
		uint32_t L_1 = sizeof(uint8_t);
		int32_t L_2 = ___1_elementOffset;
		return ((uint8_t*)il2cpp_codegen_add((intptr_t)L_0, ((int32_t)il2cpp_codegen_multiply((int32_t)L_1, L_2))));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericStruct* UnsafeUtilityInternal_Add_TisIl2CppFullySharedGenericStruct_mADE8643D255967F447F5FF97A4E32E2A70D13178_fshared (Il2CppFullySharedGenericStruct* ___0_source, int32_t ___1_elementOffset, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_tA593F27D8B3730356B3E9F4B5F356622864AEA39 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	{
		Il2CppFullySharedGenericStruct* L_0 = ___0_source;
		uint32_t L_1 = SizeOf_T_tA593F27D8B3730356B3E9F4B5F356622864AEA39;
		int32_t L_2 = ___1_elementOffset;
		return ((Il2CppFullySharedGenericStruct*)il2cpp_codegen_add((intptr_t)L_0, ((int32_t)il2cpp_codegen_multiply((int32_t)L_1, L_2))));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_AlignOf_TisBatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D_mB855D0A6C39C238FD086F0A41F578C588DD1E57D (const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = UnsafeUtilityInternal_SizeOf_TisAlignOfHelper_1_tBEA2F557D94117D6B5CA3D54DEA10F7A2F5AF996_mC0091F1B9C9C5F6FE2EF40A40286F792951D680B_inline(NULL);
		int32_t L_1;
		L_1 = UnsafeUtilityInternal_SizeOf_TisBatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D_m439E4115054F2F7F3DFE86DEAEF565B37F9DA51F_inline(NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_AlignOf_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_mBCD966C8D21A7FA7A531E312657F8536BB7D5591 (const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = UnsafeUtilityInternal_SizeOf_TisAlignOfHelper_1_t34CCC6CF432525FDD94891D4DAFB9DB74F9AF3E9_m8E01215ECE32A86C1F6BEBD206783D5863BE3102_inline(NULL);
		int32_t L_1;
		L_1 = UnsafeUtilityInternal_SizeOf_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_m1B3257CEE82ED08641AFCA4D9B2ACBC96222B922_inline(NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_AlignOf_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mC44B74F48735FA62BAE3FBA763123E932B9EF822 (const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = UnsafeUtilityInternal_SizeOf_TisAlignOfHelper_1_tAF795AF837E3C37401B92C7483D74A4E5145DB4D_m8CB43E8118CC0E65E6E8130381DEB11701F21848_inline(NULL);
		int32_t L_1;
		L_1 = UnsafeUtilityInternal_SizeOf_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m485E79FA6794AD30B29C6414A85A867DF156E5E1_inline(NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_AlignOf_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m80DCA0AC9767EB192DAAE87F5F4F56708D278474 (const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = UnsafeUtilityInternal_SizeOf_TisAlignOfHelper_1_tB21BA45542E8060FB85BA02002482499EBFA00A2_mA1D5B3481244A0872D4C4419C5C507BC5C9CA1A4_inline(NULL);
		int32_t L_1;
		L_1 = UnsafeUtilityInternal_SizeOf_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m2DB960E4C25CE2F72A3A1ABC302E23F0963089F5_inline(NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_AlignOf_TisContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B_m47308D0D016580B804EBE2B83A11C2BEA28E74B4 (const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = UnsafeUtilityInternal_SizeOf_TisAlignOfHelper_1_t08A14D9ACB4D26ACA71BCA57DAB866764B883825_m234350549A466D387273283CD034377BA980C785_inline(NULL);
		int32_t L_1;
		L_1 = UnsafeUtilityInternal_SizeOf_TisContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B_m409346A2C7D4615BB703F2802A6B9E12650CDB39_inline(NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_AlignOf_TisCullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0_mECD98232E4577E26AB1077C802A175181CEF9E17 (const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = UnsafeUtilityInternal_SizeOf_TisAlignOfHelper_1_tF6B6CAC1AFD67E6448C9B177EA1734D57E3BCDA2_mF17960322FD73F94C5B1EA66A15A812107E8E26C_inline(NULL);
		int32_t L_1;
		L_1 = UnsafeUtilityInternal_SizeOf_TisCullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0_m445C79CB5CEFFE71D2530C3CACDBC4B8D3A9D0A9_inline(NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_AlignOf_TisEmbeddedLODBuffer_t6D75CECAC228D0710132158E77ACB46D0C43027B_mF15FE3B1714441550D2BDA30F695E79AA17709D9 (const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = UnsafeUtilityInternal_SizeOf_TisAlignOfHelper_1_tFC537E4E3FE3F7962CBC5F219276522C16824ACF_m6ED1AB2C11E9DEA8670BFFABDB8A999E66D4460D_inline(NULL);
		int32_t L_1;
		L_1 = UnsafeUtilityInternal_SizeOf_TisEmbeddedLODBuffer_t6D75CECAC228D0710132158E77ACB46D0C43027B_mA1468D24A7B620A10E023979868C9D1EE2D5DE69_inline(NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_AlignOf_TisEntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8_mCAE1EDAA3D44B416A2AF29A2CD1437A60C94B184 (const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = UnsafeUtilityInternal_SizeOf_TisAlignOfHelper_1_tCD4B08DBB915013B12E50DA43CE11B02B0D135DD_m5CB9D53CC2151EBA31EE911F86BF64236024C41B_inline(NULL);
		int32_t L_1;
		L_1 = UnsafeUtilityInternal_SizeOf_TisEntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8_mD1B0EBD0B43B19830ED5B0A121221D27AA0B963E_inline(NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_AlignOf_TisGPUDrivenMeshData_t0D53E18AECCB1ED48149AFD77C12CF1624340C32_mE4B475BB745CDDD8575CFF31796C75EC5BE1677C (const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = UnsafeUtilityInternal_SizeOf_TisAlignOfHelper_1_t398568B8BA5FC2BA68E01C861AA1BEDC4750E61D_m5F14358FA8512CD3007A89FBBF226B14ECA4C00B_inline(NULL);
		int32_t L_1;
		L_1 = UnsafeUtilityInternal_SizeOf_TisGPUDrivenMeshData_t0D53E18AECCB1ED48149AFD77C12CF1624340C32_mAC88D9A89F4AD39D5BDA8F3FF5419977CDCCC3E3_inline(NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_AlignOf_TisGPUDrivenSubMesh_t2D3B77E083A07816281294E54907E064B2A2A22B_m07E75B4F5F05AFDC7DD95993E4BE4E6832AC951F (const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = UnsafeUtilityInternal_SizeOf_TisAlignOfHelper_1_t9B8325E941D53AE21ECA21E2996411A52D0F8663_m70AC25EBFF484644D693343C24F146A8528614C8_inline(NULL);
		int32_t L_1;
		L_1 = UnsafeUtilityInternal_SizeOf_TisGPUDrivenSubMesh_t2D3B77E083A07816281294E54907E064B2A2A22B_m90E80C680B80CD82EB5839F5DDE33F22BFBF18D1_inline(NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_AlignOf_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m0987C997B0BCBFDE388F4E1808BCF6706136856A (const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = UnsafeUtilityInternal_SizeOf_TisAlignOfHelper_1_t2B1B6F8C95D259E66B253A1C059AE8D3365B528E_m9653BC5706AAE6334C692185FFA0519BD7824CB3_inline(NULL);
		int32_t L_1;
		L_1 = UnsafeUtilityInternal_SizeOf_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m8EC54AD1BB1FFE52E59D872A1F83666DD9D381AA_inline(NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_AlignOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mB5611745B3ED473868EF6B61479E2860BBB2223C (const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = UnsafeUtilityInternal_SizeOf_TisAlignOfHelper_1_t676424B8757032427D7761BC732079DC7512D8AE_mB243DC326B2D814D1A62FDABCC2F2AA541A8C895_inline(NULL);
		int32_t L_1;
		L_1 = UnsafeUtilityInternal_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mA24CDBA02971DC06DEDE40B17E72F8C262B6B131_inline(NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_AlignOf_TisIntPtr_t_m7FF5CB3788B437CA624174389D25EE9BCB2B212E (const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = UnsafeUtilityInternal_SizeOf_TisAlignOfHelper_1_t1C2506D8F2F53BF0A585917F05CD8BC880EBB752_m6197C4317CE4E01732509D53E08172FEA65ED04E_inline(NULL);
		int32_t L_1;
		L_1 = UnsafeUtilityInternal_SizeOf_TisIntPtr_t_mF9218FE174B91F132731D032A744AFC048AFB932_inline(NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_AlignOf_TisInternalLODGroupSettings_t9F08C56422FEBE035004C6D96DE664DB1961F38D_m2D29EB1E0BB5C7D366275F1AEB950D0C3365A3EC (const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = UnsafeUtilityInternal_SizeOf_TisAlignOfHelper_1_tCFC8A208D36EA414B14215D004A770AEC0DB8BA2_m88DBA349C0FF85634217C1CB08E8DB162E461E71_inline(NULL);
		int32_t L_1;
		L_1 = UnsafeUtilityInternal_SizeOf_TisInternalLODGroupSettings_t9F08C56422FEBE035004C6D96DE664DB1961F38D_m7042BFD95CFAA71CA1DD3DB939DB030B0656C6D2_inline(NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_AlignOf_TisInternalMeshLodRendererSettings_t2B499712F80597BFB45A4813CC139D1BEEDEBB73_m4613462C0A843B2F0C9BE750FF1486558EC20A57 (const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = UnsafeUtilityInternal_SizeOf_TisAlignOfHelper_1_t1A20691B0774E0EFBEAD966FB0B480A553DCF42E_m2B08131E6C67851405962CD6DF12CF465931B858_inline(NULL);
		int32_t L_1;
		L_1 = UnsafeUtilityInternal_SizeOf_TisInternalMeshLodRendererSettings_t2B499712F80597BFB45A4813CC139D1BEEDEBB73_m00E1BE18CB920FCCCBFE7C2C4A1BF8BA0A7EFECF_inline(NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_AlignOf_TisInternalMeshRendererSettings_tFA0423524032AD2C34E24C53548BE032F67FC6AF_m218A1DC76BE997229B2F8774AE0E528B6BAE4EAF (const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = UnsafeUtilityInternal_SizeOf_TisAlignOfHelper_1_t6F2F300ADF773C90F661FF403B84D167EB793773_m69F6C16E7F867D1C227B7289CE495CC095EC7AD0_inline(NULL);
		int32_t L_1;
		L_1 = UnsafeUtilityInternal_SizeOf_TisInternalMeshRendererSettings_tFA0423524032AD2C34E24C53548BE032F67FC6AF_mFB035E1C19B4E54280B4B9D660EDA3A8A086CAF6_inline(NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_AlignOf_TisLightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21_m2D3813D1A1056BED9EEE9B6BF630EBDCF618551D (const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = UnsafeUtilityInternal_SizeOf_TisAlignOfHelper_1_tF9C3457088E3B293794AA641A2261DD4B6D5B57A_m58FF4964D2CAEB4EFC416B1E0FDFD6E9705F3143_inline(NULL);
		int32_t L_1;
		L_1 = UnsafeUtilityInternal_SizeOf_TisLightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21_mF4E7699562D0DD8909029C23414C07C41E83166C_inline(NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_AlignOf_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_m6E66E9028E798C9896F3F56F7FA05908E32B1689 (const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = UnsafeUtilityInternal_SizeOf_TisAlignOfHelper_1_t6C24EA77B111E6877D279F01810C1D4E13534301_m65D985DC623EBE012CF7CAE94EF2DFEF1B8A3243_inline(NULL);
		int32_t L_1;
		L_1 = UnsafeUtilityInternal_SizeOf_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_m310E3F9A8E091DFAB070D735691100178B15463B_inline(NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_AlignOf_TisModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960_m9396C9240C13C7F344AC4E11A89D9B0A75EF52AB (const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = UnsafeUtilityInternal_SizeOf_TisAlignOfHelper_1_tF3D321A7435452B0B749AF58D2CF8AB1865BC52C_m1CAC82495552B9A4A605EEA04EA097B8AF87C8C2_inline(NULL);
		int32_t L_1;
		L_1 = UnsafeUtilityInternal_SizeOf_TisModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960_m4FA6D33FFCEC8031D4883ABCA5ED229D28E44D80_inline(NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_AlignOf_TisPlane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C_m9E02365A60C7193DCE9B1B1CCAC6B940995AB87F (const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = UnsafeUtilityInternal_SizeOf_TisAlignOfHelper_1_t4257D6924487B14B176AB4C639F1251F2E4ED1C6_mDDF1DABCBD0F4009518CE893AD84E6078D170199_inline(NULL);
		int32_t L_1;
		L_1 = UnsafeUtilityInternal_SizeOf_TisPlane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C_m289C662F3DEC8A9CACB14474D55B65B1E5E1AE84_inline(NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_AlignOf_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_mCFA49B63212293A47A946132716CC8084F118BBF (const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = UnsafeUtilityInternal_SizeOf_TisAlignOfHelper_1_tE6A7C0BC2AB9B74FA79F8449B8FA1BC94A474BC4_m19212FA6DC039BBDFD64B28E598F6264D54DB691_inline(NULL);
		int32_t L_1;
		L_1 = UnsafeUtilityInternal_SizeOf_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_mA10F583A957D150C530045E8E0C54DD2A4D96489_inline(NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_AlignOf_TisRangeInt_tDFBE4FD13857C11F21F7C3DA6B60D05341B67268_m36853F8E5ABD4C14B492DED38BA104203DA9FADC (const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = UnsafeUtilityInternal_SizeOf_TisAlignOfHelper_1_t151A1BD8ECCDCBCF3185238615804E396C3B07A5_mC4112DF120EBF605C8F77839E842177AF068D44E_inline(NULL);
		int32_t L_1;
		L_1 = UnsafeUtilityInternal_SizeOf_TisRangeInt_tDFBE4FD13857C11F21F7C3DA6B60D05341B67268_m462940FF70DE74B43CFAFE2670B4A652829BDF3F_inline(NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_AlignOf_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m9B9607330865C0A5ABFB515754C1C1C96D19F344 (const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = UnsafeUtilityInternal_SizeOf_TisAlignOfHelper_1_t25880EEE885729199077AC19774C8BE13323D4B4_m19CE06B2A77B620A1DE800E56AFEE3A5616E99E6_inline(NULL);
		int32_t L_1;
		L_1 = UnsafeUtilityInternal_SizeOf_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m2379B61902CFDAAAE7E5BE25FDA4BBBBF7E54273_inline(NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_AlignOf_TisUEncroachingSegment_t3AE1B0B8E50020697D3FA3FFF0C86E406ABFA3C1_mC80D3B528E9C492E0BAE5124788711053E5BA8AE (const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = UnsafeUtilityInternal_SizeOf_TisAlignOfHelper_1_t3FE2545879EC19D84F399DE73EA83AAEDEA14C9D_m22F628ADD6E12980B394B9237C61AB0C95E1EC1C_inline(NULL);
		int32_t L_1;
		L_1 = UnsafeUtilityInternal_SizeOf_TisUEncroachingSegment_t3AE1B0B8E50020697D3FA3FFF0C86E406ABFA3C1_m78BC20EBEDF9DDD29C261AACF9F19965B5A49C92_inline(NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_AlignOf_TisUEvent_t81CE84F34955D2A2DE962ADE28CDE659605FB2AC_m2EAF1749DEC30DF8BAE54F2E152E33EEBF06D2E7 (const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = UnsafeUtilityInternal_SizeOf_TisAlignOfHelper_1_t054F2568D7C1097239A28CF25D80D8353E29BB37_m120CCD2A94A7B51A2631C5630A9E505F1DDB1CD7_inline(NULL);
		int32_t L_1;
		L_1 = UnsafeUtilityInternal_SizeOf_TisUEvent_t81CE84F34955D2A2DE962ADE28CDE659605FB2AC_mD7804F40606876E9729617E9761E42F9D6056B26_inline(NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_AlignOf_TisUHull_tBA3DC6A41F928298B0D924EDFE00150F307BA851_m9DF201FCDB9B057604B20987096858076D21CFAB (const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = UnsafeUtilityInternal_SizeOf_TisAlignOfHelper_1_t0280929E6B4134EE85E97F8BFC283CFB4C7BC056_m24D80B10C7527E88ECD7E5C10731C7F1663E2C27_inline(NULL);
		int32_t L_1;
		L_1 = UnsafeUtilityInternal_SizeOf_TisUHull_tBA3DC6A41F928298B0D924EDFE00150F307BA851_mDB23A7351A2DB7A69197EC17A28401C3A9B4DA98_inline(NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_AlignOf_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m5CC670602FE83644EBD988EBBA04AB4D7D731FD7 (const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = UnsafeUtilityInternal_SizeOf_TisAlignOfHelper_1_t70E1FB13BE93757804A731D115FA219AE664F9B9_mE690DD75A3C952CEDEB71F13B96E603904A60567_inline(NULL);
		int32_t L_1;
		L_1 = UnsafeUtilityInternal_SizeOf_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mB21F3357E1DB01146285E803CB68EE945ADA7149_inline(NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_AlignOf_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mF228544B123C545DB4D43DDE0E23492B7A731A7F (const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = UnsafeUtilityInternal_SizeOf_TisAlignOfHelper_1_tF3C6E1F1F032602FD9777BBE4466632711C12DC3_m936B8B899C03B9C80AA39CD231B892274340136D_inline(NULL);
		int32_t L_1;
		L_1 = UnsafeUtilityInternal_SizeOf_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m483305F08D432A8FC41A6E11289383D1E2C3E8AE_inline(NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_AlignOf_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m29B7D9DA9527706BBA1F73ECEA934CCD0B2D99E3 (const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = UnsafeUtilityInternal_SizeOf_TisAlignOfHelper_1_tE21040F72E90527C319FF9B07B398E23DF95BE2E_m2D3BC72BBF45866A72C7ADF31F40AEFC56BBD498_inline(NULL);
		int32_t L_1;
		L_1 = UnsafeUtilityInternal_SizeOf_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mAA2B8333B77A7410376516B6E13FCC02AEE6A5AC_inline(NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_AlignOf_TisUStar_tF8CA0D7A7A3197E68176CA173B07251554C7465D_m120C8454AB3B92B9FDB39562A6C50C333B6D7BD3 (const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = UnsafeUtilityInternal_SizeOf_TisAlignOfHelper_1_t9E9A73E6B25DCBB1356ABAF5D5F64CEB912639E5_m6333413607F97523DA83C70DA244CCE8E0B50D8E_inline(NULL);
		int32_t L_1;
		L_1 = UnsafeUtilityInternal_SizeOf_TisUStar_tF8CA0D7A7A3197E68176CA173B07251554C7465D_m87DD2D062338C42E1537725895679ED703A237D3_inline(NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_AlignOf_TisUTriangle_t6D4513C8A4054BEEC30F937F14BBE005BC4A141F_mC3E4D8B9B275315C3369194023ADC219C9BFA56B (const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = UnsafeUtilityInternal_SizeOf_TisAlignOfHelper_1_tE0DC7EEADD8DE994397C46E4B7F6E4EC9FE4F669_m50F19243DCF7F556C625C9C7048E8BA7FDA09C6E_inline(NULL);
		int32_t L_1;
		L_1 = UnsafeUtilityInternal_SizeOf_TisUTriangle_t6D4513C8A4054BEEC30F937F14BBE005BC4A141F_m0E3277DA666E697D096F659128CBE7238C655CA3_inline(NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_AlignOf_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m5A04043858F190DDD4C4AB8C2C707306514BCA45 (const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = UnsafeUtilityInternal_SizeOf_TisAlignOfHelper_1_tA7BAD341B87833F98272549F84315FE63B02CC5A_m034AE7678181AD29323E752CCA82EDCFE2E3CAA0_inline(NULL);
		int32_t L_1;
		L_1 = UnsafeUtilityInternal_SizeOf_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m297C8507511B4B7C587AF49B53D880021418C5CC_inline(NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_AlignOf_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mA208BE87A87C101AE5CCF93D07CE98EF4B72BB9D (const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = UnsafeUtilityInternal_SizeOf_TisAlignOfHelper_1_t26C526A4040EF3870B74BFD09D3768388C3BD773_mAA11ED5EDA264AB3B48690198F615B38D00FE294_inline(NULL);
		int32_t L_1;
		L_1 = UnsafeUtilityInternal_SizeOf_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m567C299D0E9EA26E8A3ADC4158D175D9F101BC1E_inline(NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_AlignOf_TisIl2CppFullySharedGenericStruct_m530059660A1E31984686E17CC9E1E8EC5BADDADF_fshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(il2cpp_rgctx_method(method->rgctx_data, 1));
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_AlignOf_Tisdouble2_t2124FB15A5BDCC0BD48B80116D4B24DC9DCA9D83_m8D474CAB34FA5FB18D61421063147CE9793F0B05 (const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = UnsafeUtilityInternal_SizeOf_TisAlignOfHelper_1_tF31F09BEF44353E98923E6193CEADA52B8ED43D4_m29E0C0863AA5A2364C1F00FAEAD6CCEC94DA70FF_inline(NULL);
		int32_t L_1;
		L_1 = UnsafeUtilityInternal_SizeOf_Tisdouble2_t2124FB15A5BDCC0BD48B80116D4B24DC9DCA9D83_m96D588AB3F164F56BB1DE77BC435342E9F1BD745_inline(NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_AlignOf_Tisfloat2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5_mF5574E385BD8BFE25E8CE39CF6C0587EEB03EA32 (const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = UnsafeUtilityInternal_SizeOf_TisAlignOfHelper_1_t0C97FDE41871CAD34CA643C258038DE7C30AA460_mDA796E09ECCAD2EAEF6F0A2C1773617A9FBA6E6E_inline(NULL);
		int32_t L_1;
		L_1 = UnsafeUtilityInternal_SizeOf_Tisfloat2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5_mE64EA17FB7FE71E52F389B33C2AE7F4894B63B16_inline(NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_AlignOf_Tisint2_tB123E869131C6102341F8F9AA01726E0E7C2768D_m26EBC94AD0C3507224F27777BDABDC7B666D0880 (const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = UnsafeUtilityInternal_SizeOf_TisAlignOfHelper_1_t6ADF810505F028EA6EBCA5B664B68A8372696F9C_mAA91F87ABC1C69B33E87DD76C50A480D237F8B9A_inline(NULL);
		int32_t L_1;
		L_1 = UnsafeUtilityInternal_SizeOf_Tisint2_tB123E869131C6102341F8F9AA01726E0E7C2768D_mB216CE24697733053C38D23575F516F72C0E7F06_inline(NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_AlignOf_Tisint3_t18873F121F1EF24ECE875EAB01170B69E1B498C5_mBF5C30CFD8345346842446C6C9505350076D4166 (const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = UnsafeUtilityInternal_SizeOf_TisAlignOfHelper_1_t5DC854A29E0F5E52BA538EDE0BFDED0CC3F2B396_mB59C152F5426670D374DC720745E2F06FAADE0CA_inline(NULL);
		int32_t L_1;
		L_1 = UnsafeUtilityInternal_SizeOf_Tisint3_t18873F121F1EF24ECE875EAB01170B69E1B498C5_m8C0D64D09B9A2F8238A614656203048B06759A6B_inline(NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_AlignOf_Tisint4_t6DC3FEACC0DD1EAE4D5B897188E8D669BC4DAB90_mE9667172DCCAA2CC0371D40CBC26AD69CA73BE00 (const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = UnsafeUtilityInternal_SizeOf_TisAlignOfHelper_1_t3815CFB9721539E18DAC181E8DB449C4D3C731E3_m35ABFDD366C53EC12FEB57C526087B620B8844C2_inline(NULL);
		int32_t L_1;
		L_1 = UnsafeUtilityInternal_SizeOf_Tisint4_t6DC3FEACC0DD1EAE4D5B897188E8D669BC4DAB90_mA8C62CC9E230AC8C9856724F0AD3DB92EBABE192_inline(NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericAny* UnsafeUtilityInternal_As_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mE1CA751887466B801BE69083C2B0EA3EDE41FF9B_fshared (Il2CppFullySharedGenericAny* ___0_from, const RuntimeMethod* method) 
{
	{
		Il2CppFullySharedGenericAny* L_0 = ___0_from;
		return (Il2CppFullySharedGenericAny*)(L_0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericStruct* UnsafeUtilityInternal_AsRef_TisIl2CppFullySharedGenericStruct_m4AE204964F54C3F7626BE47CADE4A52CF2797B6B_fshared (void* ___0_ptr, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_ptr;
		return (Il2CppFullySharedGenericStruct*)(L_0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D UnsafeUtilityInternal_ReadArrayElement_TisBatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D_mDBEEA432305DC45F859549C5C3C2BC1AB641161C (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D L_6 = (*(BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)));
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 UnsafeUtilityInternal_ReadArrayElement_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_mFF2A9A45B70E41FC9F6A40A69B2C8E3BAF76360A (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_6 = (*(Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)));
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t UnsafeUtilityInternal_ReadArrayElement_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m215470D8CCA83493150D2E40676D8A40FCF722B0 (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(uint8_t);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		uint8_t L_6 = (*(uint8_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)));
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar UnsafeUtilityInternal_ReadArrayElement_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m2FEACC2DB55AEEA0CA84FFD3CFC0DA3A103577EB (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(Il2CppChar);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		Il2CppChar L_6 = (*(Il2CppChar*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)));
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B UnsafeUtilityInternal_ReadArrayElement_TisContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B_mE64830E3E69DCC7AFC8FF6B0965DCA99D7390356 (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B L_6 = (*(ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)));
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0 UnsafeUtilityInternal_ReadArrayElement_TisCullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0_m3DD623F7581DFB21C61537373F0F32050E5D8CFE (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0 L_6 = (*(CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)));
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double UnsafeUtilityInternal_ReadArrayElement_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m3153A5430B46A926C90C99ECC737289006BAB570 (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(double);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		double L_6 = (*(double*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)));
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EmbeddedLODBuffer_t6D75CECAC228D0710132158E77ACB46D0C43027B UnsafeUtilityInternal_ReadArrayElement_TisEmbeddedLODBuffer_t6D75CECAC228D0710132158E77ACB46D0C43027B_mAAB0A3B6158D3A53128F92076405F23C82C562CA (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(EmbeddedLODBuffer_t6D75CECAC228D0710132158E77ACB46D0C43027B);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		EmbeddedLODBuffer_t6D75CECAC228D0710132158E77ACB46D0C43027B L_6 = (*(EmbeddedLODBuffer_t6D75CECAC228D0710132158E77ACB46D0C43027B*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)));
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 UnsafeUtilityInternal_ReadArrayElement_TisEntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8_mDC8A7125EE74C940B9F940440D412BA4B3A42575 (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 L_6 = (*(EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)));
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GPUDrivenMeshData_t0D53E18AECCB1ED48149AFD77C12CF1624340C32 UnsafeUtilityInternal_ReadArrayElement_TisGPUDrivenMeshData_t0D53E18AECCB1ED48149AFD77C12CF1624340C32_m3AC186183B40DD72F475DEA5ABBA39D050266613 (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(GPUDrivenMeshData_t0D53E18AECCB1ED48149AFD77C12CF1624340C32);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		GPUDrivenMeshData_t0D53E18AECCB1ED48149AFD77C12CF1624340C32 L_6 = (*(GPUDrivenMeshData_t0D53E18AECCB1ED48149AFD77C12CF1624340C32*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)));
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GPUDrivenSubMesh_t2D3B77E083A07816281294E54907E064B2A2A22B UnsafeUtilityInternal_ReadArrayElement_TisGPUDrivenSubMesh_t2D3B77E083A07816281294E54907E064B2A2A22B_mBF012366896A35F47863D2A27520F935DBDFADE0 (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(GPUDrivenSubMesh_t2D3B77E083A07816281294E54907E064B2A2A22B);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		GPUDrivenSubMesh_t2D3B77E083A07816281294E54907E064B2A2A22B L_6 = (*(GPUDrivenSubMesh_t2D3B77E083A07816281294E54907E064B2A2A22B*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)));
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t UnsafeUtilityInternal_ReadArrayElement_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mE907DE0EDCAAEB74B259B5022D1AC07C3FA77763 (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(int16_t);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		int16_t L_6 = (*(int16_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)));
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_ReadArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m0B7B877C8F00DCC1C95D7124B3B0D83C6D492345 (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(int32_t);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		int32_t L_6 = (*(int32_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)));
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t UnsafeUtilityInternal_ReadArrayElement_TisIntPtr_t_mC53DA66CA829ADB467A34898F82725DDA86091D6 (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(intptr_t);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		intptr_t L_6 = (*(intptr_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)));
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InternalLODGroupSettings_t9F08C56422FEBE035004C6D96DE664DB1961F38D UnsafeUtilityInternal_ReadArrayElement_TisInternalLODGroupSettings_t9F08C56422FEBE035004C6D96DE664DB1961F38D_m9B17FB9991C066865590CE397EC91A2056D1089A (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(InternalLODGroupSettings_t9F08C56422FEBE035004C6D96DE664DB1961F38D);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		InternalLODGroupSettings_t9F08C56422FEBE035004C6D96DE664DB1961F38D L_6 = (*(InternalLODGroupSettings_t9F08C56422FEBE035004C6D96DE664DB1961F38D*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)));
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InternalMeshLodRendererSettings_t2B499712F80597BFB45A4813CC139D1BEEDEBB73 UnsafeUtilityInternal_ReadArrayElement_TisInternalMeshLodRendererSettings_t2B499712F80597BFB45A4813CC139D1BEEDEBB73_mE43484F89D326B2CFC50C120174997AB2082FBE0 (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(InternalMeshLodRendererSettings_t2B499712F80597BFB45A4813CC139D1BEEDEBB73);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		InternalMeshLodRendererSettings_t2B499712F80597BFB45A4813CC139D1BEEDEBB73 L_6 = (*(InternalMeshLodRendererSettings_t2B499712F80597BFB45A4813CC139D1BEEDEBB73*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)));
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InternalMeshRendererSettings_tFA0423524032AD2C34E24C53548BE032F67FC6AF UnsafeUtilityInternal_ReadArrayElement_TisInternalMeshRendererSettings_tFA0423524032AD2C34E24C53548BE032F67FC6AF_m0FD7B9D7ECD3AD5A4D20DA6E6A0CF95AB3D75C46 (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(InternalMeshRendererSettings_tFA0423524032AD2C34E24C53548BE032F67FC6AF);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		InternalMeshRendererSettings_tFA0423524032AD2C34E24C53548BE032F67FC6AF L_6 = (*(InternalMeshRendererSettings_tFA0423524032AD2C34E24C53548BE032F67FC6AF*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)));
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21 UnsafeUtilityInternal_ReadArrayElement_TisLightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21_m2B823F0822F76CA45530AD04A3D3DB110EC8259B (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21 L_6 = (*(LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)));
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 UnsafeUtilityInternal_ReadArrayElement_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_mDC2BC421E66DB6186E7ADB438406EB88CF637011 (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_6 = (*(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)));
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960 UnsafeUtilityInternal_ReadArrayElement_TisModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960_m1967F25DC74B6E081724F2C2A8158CE6999A3F63 (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(ModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		ModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960 L_6 = (*(ModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)));
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C UnsafeUtilityInternal_ReadArrayElement_TisPlane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C_mD0A53DDAFDC425AE7EEA283E95C48E3A414A87FD (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C L_6 = (*(Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)));
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 UnsafeUtilityInternal_ReadArrayElement_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m02B55D9C2BC9B83FDE111ACC6AC6826964D5E3D4 (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = (*(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)));
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RangeInt_tDFBE4FD13857C11F21F7C3DA6B60D05341B67268 UnsafeUtilityInternal_ReadArrayElement_TisRangeInt_tDFBE4FD13857C11F21F7C3DA6B60D05341B67268_mA0E6724F3B2E9E09250FBC5091626A5CF5A6FF93 (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(RangeInt_tDFBE4FD13857C11F21F7C3DA6B60D05341B67268);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		RangeInt_tDFBE4FD13857C11F21F7C3DA6B60D05341B67268 L_6 = (*(RangeInt_tDFBE4FD13857C11F21F7C3DA6B60D05341B67268*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)));
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float UnsafeUtilityInternal_ReadArrayElement_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mC8BDFAFE242DB675D668D2942EFD7CE36006251C (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(float);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		float L_6 = (*(float*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)));
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UEncroachingSegment_t3AE1B0B8E50020697D3FA3FFF0C86E406ABFA3C1 UnsafeUtilityInternal_ReadArrayElement_TisUEncroachingSegment_t3AE1B0B8E50020697D3FA3FFF0C86E406ABFA3C1_m8F5A17DAD42997B6D75E949B0FF9379B2D066CE2 (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(UEncroachingSegment_t3AE1B0B8E50020697D3FA3FFF0C86E406ABFA3C1);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		UEncroachingSegment_t3AE1B0B8E50020697D3FA3FFF0C86E406ABFA3C1 L_6 = (*(UEncroachingSegment_t3AE1B0B8E50020697D3FA3FFF0C86E406ABFA3C1*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)));
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UEvent_t81CE84F34955D2A2DE962ADE28CDE659605FB2AC UnsafeUtilityInternal_ReadArrayElement_TisUEvent_t81CE84F34955D2A2DE962ADE28CDE659605FB2AC_mEE88732C7CB1E07F024B69DB93E5131352E8A1E7 (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(UEvent_t81CE84F34955D2A2DE962ADE28CDE659605FB2AC);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		UEvent_t81CE84F34955D2A2DE962ADE28CDE659605FB2AC L_6 = (*(UEvent_t81CE84F34955D2A2DE962ADE28CDE659605FB2AC*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)));
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UHull_tBA3DC6A41F928298B0D924EDFE00150F307BA851 UnsafeUtilityInternal_ReadArrayElement_TisUHull_tBA3DC6A41F928298B0D924EDFE00150F307BA851_m8EB87859A6B1CDD9DD1729BB8913CB8985295847 (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(UHull_tBA3DC6A41F928298B0D924EDFE00150F307BA851);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		UHull_tBA3DC6A41F928298B0D924EDFE00150F307BA851 L_6 = (*(UHull_tBA3DC6A41F928298B0D924EDFE00150F307BA851*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)));
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t UnsafeUtilityInternal_ReadArrayElement_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m67997A9A0642E52B1CB9AD52C90FD98038221C0F (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(uint16_t);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		uint16_t L_6 = (*(uint16_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)));
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t UnsafeUtilityInternal_ReadArrayElement_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mAA4A4AC11C7C0784A0566FAE86EFBAD08CF4126D (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(uint32_t);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		uint32_t L_6 = (*(uint32_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)));
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t UnsafeUtilityInternal_ReadArrayElement_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mA5895D44428BCE7F38A3E30CA324F5E0E599364F (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(uint64_t);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		uint64_t L_6 = (*(uint64_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)));
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UStar_tF8CA0D7A7A3197E68176CA173B07251554C7465D UnsafeUtilityInternal_ReadArrayElement_TisUStar_tF8CA0D7A7A3197E68176CA173B07251554C7465D_m11B8FD36241682A117B1BD6EC4B1F4ED78B49B47 (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(UStar_tF8CA0D7A7A3197E68176CA173B07251554C7465D);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		UStar_tF8CA0D7A7A3197E68176CA173B07251554C7465D L_6 = (*(UStar_tF8CA0D7A7A3197E68176CA173B07251554C7465D*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)));
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UTriangle_t6D4513C8A4054BEEC30F937F14BBE005BC4A141F UnsafeUtilityInternal_ReadArrayElement_TisUTriangle_t6D4513C8A4054BEEC30F937F14BBE005BC4A141F_mD9BEE07F15A62EDC899159691530AC27B6ABDAE2 (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(UTriangle_t6D4513C8A4054BEEC30F937F14BBE005BC4A141F);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		UTriangle_t6D4513C8A4054BEEC30F937F14BBE005BC4A141F L_6 = (*(UTriangle_t6D4513C8A4054BEEC30F937F14BBE005BC4A141F*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)));
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 UnsafeUtilityInternal_ReadArrayElement_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m726E59AE606BDAEEA7E8DD67B5F69FD00875153F (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)));
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 UnsafeUtilityInternal_ReadArrayElement_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m4E48372E1097232C60446DED043FEC5C7A61C4B0 (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_6 = (*(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)));
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtilityInternal_ReadArrayElement_TisIl2CppFullySharedGenericAny_mC729F1975F0494EB9B61C929EAF0F798DCF68563_fshared (void* ___0_source, int32_t ___1_index, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t0AA6189E765AD6394317DDCA688595C885DC47B5 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_T_t0AA6189E765AD6394317DDCA688595C885DC47B5);
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = SizeOf_T_t0AA6189E765AD6394317DDCA688595C885DC47B5;
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		il2cpp_codegen_memcpy(L_6, ((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)), SizeOf_T_t0AA6189E765AD6394317DDCA688595C885DC47B5);
		il2cpp_codegen_memcpy(il2cppRetVal, L_6, SizeOf_T_t0AA6189E765AD6394317DDCA688595C885DC47B5);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double2_t2124FB15A5BDCC0BD48B80116D4B24DC9DCA9D83 UnsafeUtilityInternal_ReadArrayElement_Tisdouble2_t2124FB15A5BDCC0BD48B80116D4B24DC9DCA9D83_m40CEC3B3B74322BA7691BA450694C03DC4A1D452 (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(double2_t2124FB15A5BDCC0BD48B80116D4B24DC9DCA9D83);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		double2_t2124FB15A5BDCC0BD48B80116D4B24DC9DCA9D83 L_6 = (*(double2_t2124FB15A5BDCC0BD48B80116D4B24DC9DCA9D83*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)));
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5 UnsafeUtilityInternal_ReadArrayElement_Tisfloat2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5_mAA646CC2B25329E898077679928AB15DE9BC865E (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(float2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		float2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5 L_6 = (*(float2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)));
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int2_tB123E869131C6102341F8F9AA01726E0E7C2768D UnsafeUtilityInternal_ReadArrayElement_Tisint2_tB123E869131C6102341F8F9AA01726E0E7C2768D_m331A9772A1384E1911C59CDE98F9366F81EED2C7 (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(int2_tB123E869131C6102341F8F9AA01726E0E7C2768D);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		int2_tB123E869131C6102341F8F9AA01726E0E7C2768D L_6 = (*(int2_tB123E869131C6102341F8F9AA01726E0E7C2768D*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)));
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int3_t18873F121F1EF24ECE875EAB01170B69E1B498C5 UnsafeUtilityInternal_ReadArrayElement_Tisint3_t18873F121F1EF24ECE875EAB01170B69E1B498C5_mBD52AD6E8736CB48656CFA0961D93E411266B81E (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(int3_t18873F121F1EF24ECE875EAB01170B69E1B498C5);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		int3_t18873F121F1EF24ECE875EAB01170B69E1B498C5 L_6 = (*(int3_t18873F121F1EF24ECE875EAB01170B69E1B498C5*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)));
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int4_t6DC3FEACC0DD1EAE4D5B897188E8D669BC4DAB90 UnsafeUtilityInternal_ReadArrayElement_Tisint4_t6DC3FEACC0DD1EAE4D5B897188E8D669BC4DAB90_m776429375A9EF46AD949435543FDD0C5676070AC (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(int4_t6DC3FEACC0DD1EAE4D5B897188E8D669BC4DAB90);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		int4_t6DC3FEACC0DD1EAE4D5B897188E8D669BC4DAB90 L_6 = (*(int4_t6DC3FEACC0DD1EAE4D5B897188E8D669BC4DAB90*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)));
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_ReadArrayElementWithStride_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m142239EC03EF551AAC70809189D5B14C59260A72 (void* ___0_source, int32_t ___1_index, int32_t ___2_stride, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		int32_t L_3 = ___2_stride;
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		int32_t L_6 = (*(int32_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)));
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtilityInternal_ReadArrayElementWithStride_TisIl2CppFullySharedGenericAny_mD8DC640103D38E555B272D6E61CA4B06A15E46ED_fshared (void* ___0_source, int32_t ___1_index, int32_t ___2_stride, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_tA43FF1096C0DCB01EA2F665B1AE872CB6AB31798 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_T_tA43FF1096C0DCB01EA2F665B1AE872CB6AB31798);
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		int32_t L_3 = ___2_stride;
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		il2cpp_codegen_memcpy(L_6, ((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)), SizeOf_T_tA43FF1096C0DCB01EA2F665B1AE872CB6AB31798);
		il2cpp_codegen_memcpy(il2cppRetVal, L_6, SizeOf_T_tA43FF1096C0DCB01EA2F665B1AE872CB6AB31798);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisAlignOfHelper_1_tBEA2F557D94117D6B5CA3D54DEA10F7A2F5AF996_mC0091F1B9C9C5F6FE2EF40A40286F792951D680B (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_tBEA2F557D94117D6B5CA3D54DEA10F7A2F5AF996);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisAlignOfHelper_1_t34CCC6CF432525FDD94891D4DAFB9DB74F9AF3E9_m8E01215ECE32A86C1F6BEBD206783D5863BE3102 (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t34CCC6CF432525FDD94891D4DAFB9DB74F9AF3E9);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisAlignOfHelper_1_tAF795AF837E3C37401B92C7483D74A4E5145DB4D_m8CB43E8118CC0E65E6E8130381DEB11701F21848 (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_tAF795AF837E3C37401B92C7483D74A4E5145DB4D);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisAlignOfHelper_1_tB21BA45542E8060FB85BA02002482499EBFA00A2_mA1D5B3481244A0872D4C4419C5C507BC5C9CA1A4 (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_tB21BA45542E8060FB85BA02002482499EBFA00A2);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisAlignOfHelper_1_t08A14D9ACB4D26ACA71BCA57DAB866764B883825_m234350549A466D387273283CD034377BA980C785 (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t08A14D9ACB4D26ACA71BCA57DAB866764B883825);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisAlignOfHelper_1_tF6B6CAC1AFD67E6448C9B177EA1734D57E3BCDA2_mF17960322FD73F94C5B1EA66A15A812107E8E26C (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_tF6B6CAC1AFD67E6448C9B177EA1734D57E3BCDA2);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisAlignOfHelper_1_tFC537E4E3FE3F7962CBC5F219276522C16824ACF_m6ED1AB2C11E9DEA8670BFFABDB8A999E66D4460D (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_tFC537E4E3FE3F7962CBC5F219276522C16824ACF);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisAlignOfHelper_1_tCD4B08DBB915013B12E50DA43CE11B02B0D135DD_m5CB9D53CC2151EBA31EE911F86BF64236024C41B (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_tCD4B08DBB915013B12E50DA43CE11B02B0D135DD);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisAlignOfHelper_1_t398568B8BA5FC2BA68E01C861AA1BEDC4750E61D_m5F14358FA8512CD3007A89FBBF226B14ECA4C00B (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t398568B8BA5FC2BA68E01C861AA1BEDC4750E61D);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisAlignOfHelper_1_t9B8325E941D53AE21ECA21E2996411A52D0F8663_m70AC25EBFF484644D693343C24F146A8528614C8 (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t9B8325E941D53AE21ECA21E2996411A52D0F8663);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisAlignOfHelper_1_t2B1B6F8C95D259E66B253A1C059AE8D3365B528E_m9653BC5706AAE6334C692185FFA0519BD7824CB3 (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t2B1B6F8C95D259E66B253A1C059AE8D3365B528E);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisAlignOfHelper_1_t676424B8757032427D7761BC732079DC7512D8AE_mB243DC326B2D814D1A62FDABCC2F2AA541A8C895 (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t676424B8757032427D7761BC732079DC7512D8AE);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisAlignOfHelper_1_t1C2506D8F2F53BF0A585917F05CD8BC880EBB752_m6197C4317CE4E01732509D53E08172FEA65ED04E (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t1C2506D8F2F53BF0A585917F05CD8BC880EBB752);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisAlignOfHelper_1_tCFC8A208D36EA414B14215D004A770AEC0DB8BA2_m88DBA349C0FF85634217C1CB08E8DB162E461E71 (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_tCFC8A208D36EA414B14215D004A770AEC0DB8BA2);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisAlignOfHelper_1_t1A20691B0774E0EFBEAD966FB0B480A553DCF42E_m2B08131E6C67851405962CD6DF12CF465931B858 (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t1A20691B0774E0EFBEAD966FB0B480A553DCF42E);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisAlignOfHelper_1_t6F2F300ADF773C90F661FF403B84D167EB793773_m69F6C16E7F867D1C227B7289CE495CC095EC7AD0 (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t6F2F300ADF773C90F661FF403B84D167EB793773);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisAlignOfHelper_1_tF9C3457088E3B293794AA641A2261DD4B6D5B57A_m58FF4964D2CAEB4EFC416B1E0FDFD6E9705F3143 (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_tF9C3457088E3B293794AA641A2261DD4B6D5B57A);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisAlignOfHelper_1_t6C24EA77B111E6877D279F01810C1D4E13534301_m65D985DC623EBE012CF7CAE94EF2DFEF1B8A3243 (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t6C24EA77B111E6877D279F01810C1D4E13534301);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisAlignOfHelper_1_tF3D321A7435452B0B749AF58D2CF8AB1865BC52C_m1CAC82495552B9A4A605EEA04EA097B8AF87C8C2 (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_tF3D321A7435452B0B749AF58D2CF8AB1865BC52C);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisAlignOfHelper_1_t4257D6924487B14B176AB4C639F1251F2E4ED1C6_mDDF1DABCBD0F4009518CE893AD84E6078D170199 (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t4257D6924487B14B176AB4C639F1251F2E4ED1C6);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisAlignOfHelper_1_tE6A7C0BC2AB9B74FA79F8449B8FA1BC94A474BC4_m19212FA6DC039BBDFD64B28E598F6264D54DB691 (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_tE6A7C0BC2AB9B74FA79F8449B8FA1BC94A474BC4);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisAlignOfHelper_1_t151A1BD8ECCDCBCF3185238615804E396C3B07A5_mC4112DF120EBF605C8F77839E842177AF068D44E (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t151A1BD8ECCDCBCF3185238615804E396C3B07A5);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisAlignOfHelper_1_t25880EEE885729199077AC19774C8BE13323D4B4_m19CE06B2A77B620A1DE800E56AFEE3A5616E99E6 (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t25880EEE885729199077AC19774C8BE13323D4B4);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisAlignOfHelper_1_t3FE2545879EC19D84F399DE73EA83AAEDEA14C9D_m22F628ADD6E12980B394B9237C61AB0C95E1EC1C (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t3FE2545879EC19D84F399DE73EA83AAEDEA14C9D);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisAlignOfHelper_1_t054F2568D7C1097239A28CF25D80D8353E29BB37_m120CCD2A94A7B51A2631C5630A9E505F1DDB1CD7 (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t054F2568D7C1097239A28CF25D80D8353E29BB37);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisAlignOfHelper_1_t0280929E6B4134EE85E97F8BFC283CFB4C7BC056_m24D80B10C7527E88ECD7E5C10731C7F1663E2C27 (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t0280929E6B4134EE85E97F8BFC283CFB4C7BC056);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisAlignOfHelper_1_t70E1FB13BE93757804A731D115FA219AE664F9B9_mE690DD75A3C952CEDEB71F13B96E603904A60567 (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t70E1FB13BE93757804A731D115FA219AE664F9B9);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisAlignOfHelper_1_tF3C6E1F1F032602FD9777BBE4466632711C12DC3_m936B8B899C03B9C80AA39CD231B892274340136D (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_tF3C6E1F1F032602FD9777BBE4466632711C12DC3);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisAlignOfHelper_1_tE21040F72E90527C319FF9B07B398E23DF95BE2E_m2D3BC72BBF45866A72C7ADF31F40AEFC56BBD498 (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_tE21040F72E90527C319FF9B07B398E23DF95BE2E);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisAlignOfHelper_1_t9E9A73E6B25DCBB1356ABAF5D5F64CEB912639E5_m6333413607F97523DA83C70DA244CCE8E0B50D8E (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t9E9A73E6B25DCBB1356ABAF5D5F64CEB912639E5);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisAlignOfHelper_1_tE0DC7EEADD8DE994397C46E4B7F6E4EC9FE4F669_m50F19243DCF7F556C625C9C7048E8BA7FDA09C6E (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_tE0DC7EEADD8DE994397C46E4B7F6E4EC9FE4F669);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisAlignOfHelper_1_tA7BAD341B87833F98272549F84315FE63B02CC5A_m034AE7678181AD29323E752CCA82EDCFE2E3CAA0 (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_tA7BAD341B87833F98272549F84315FE63B02CC5A);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisAlignOfHelper_1_t26C526A4040EF3870B74BFD09D3768388C3BD773_mAA11ED5EDA264AB3B48690198F615B38D00FE294 (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t26C526A4040EF3870B74BFD09D3768388C3BD773);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisAlignOfHelper_1_tF31F09BEF44353E98923E6193CEADA52B8ED43D4_m29E0C0863AA5A2364C1F00FAEAD6CCEC94DA70FF (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_tF31F09BEF44353E98923E6193CEADA52B8ED43D4);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisAlignOfHelper_1_t0C97FDE41871CAD34CA643C258038DE7C30AA460_mDA796E09ECCAD2EAEF6F0A2C1773617A9FBA6E6E (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t0C97FDE41871CAD34CA643C258038DE7C30AA460);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisAlignOfHelper_1_t6ADF810505F028EA6EBCA5B664B68A8372696F9C_mAA91F87ABC1C69B33E87DD76C50A480D237F8B9A (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t6ADF810505F028EA6EBCA5B664B68A8372696F9C);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisAlignOfHelper_1_t5DC854A29E0F5E52BA538EDE0BFDED0CC3F2B396_mB59C152F5426670D374DC720745E2F06FAADE0CA (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t5DC854A29E0F5E52BA538EDE0BFDED0CC3F2B396);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisAlignOfHelper_1_t3815CFB9721539E18DAC181E8DB449C4D3C731E3_m35ABFDD366C53EC12FEB57C526087B620B8844C2 (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t3815CFB9721539E18DAC181E8DB449C4D3C731E3);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisBatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D_m439E4115054F2F7F3DFE86DEAEF565B37F9DA51F (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_m1B3257CEE82ED08641AFCA4D9B2ACBC96222B922 (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m485E79FA6794AD30B29C6414A85A867DF156E5E1 (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(uint8_t);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m2DB960E4C25CE2F72A3A1ABC302E23F0963089F5 (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(Il2CppChar);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B_m409346A2C7D4615BB703F2802A6B9E12650CDB39 (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisCullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0_m445C79CB5CEFFE71D2530C3CACDBC4B8D3A9D0A9 (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisEmbeddedLODBuffer_t6D75CECAC228D0710132158E77ACB46D0C43027B_mA1468D24A7B620A10E023979868C9D1EE2D5DE69 (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(EmbeddedLODBuffer_t6D75CECAC228D0710132158E77ACB46D0C43027B);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisEntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8_mD1B0EBD0B43B19830ED5B0A121221D27AA0B963E (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisGPUDrivenMeshData_t0D53E18AECCB1ED48149AFD77C12CF1624340C32_mAC88D9A89F4AD39D5BDA8F3FF5419977CDCCC3E3 (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(GPUDrivenMeshData_t0D53E18AECCB1ED48149AFD77C12CF1624340C32);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisGPUDrivenSubMesh_t2D3B77E083A07816281294E54907E064B2A2A22B_m90E80C680B80CD82EB5839F5DDE33F22BFBF18D1 (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(GPUDrivenSubMesh_t2D3B77E083A07816281294E54907E064B2A2A22B);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m8EC54AD1BB1FFE52E59D872A1F83666DD9D381AA (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(int16_t);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mA24CDBA02971DC06DEDE40B17E72F8C262B6B131 (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(int32_t);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisIntPtr_t_mF9218FE174B91F132731D032A744AFC048AFB932 (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(intptr_t);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisInternalLODGroupSettings_t9F08C56422FEBE035004C6D96DE664DB1961F38D_m7042BFD95CFAA71CA1DD3DB939DB030B0656C6D2 (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(InternalLODGroupSettings_t9F08C56422FEBE035004C6D96DE664DB1961F38D);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisInternalMeshLodRendererSettings_t2B499712F80597BFB45A4813CC139D1BEEDEBB73_m00E1BE18CB920FCCCBFE7C2C4A1BF8BA0A7EFECF (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(InternalMeshLodRendererSettings_t2B499712F80597BFB45A4813CC139D1BEEDEBB73);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisInternalMeshRendererSettings_tFA0423524032AD2C34E24C53548BE032F67FC6AF_mFB035E1C19B4E54280B4B9D660EDA3A8A086CAF6 (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(InternalMeshRendererSettings_tFA0423524032AD2C34E24C53548BE032F67FC6AF);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisLightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21_mF4E7699562D0DD8909029C23414C07C41E83166C (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_m310E3F9A8E091DFAB070D735691100178B15463B (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960_m4FA6D33FFCEC8031D4883ABCA5ED229D28E44D80 (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(ModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisPlane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C_m289C662F3DEC8A9CACB14474D55B65B1E5E1AE84 (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_mA10F583A957D150C530045E8E0C54DD2A4D96489 (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisRangeInt_tDFBE4FD13857C11F21F7C3DA6B60D05341B67268_m462940FF70DE74B43CFAFE2670B4A652829BDF3F (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(RangeInt_tDFBE4FD13857C11F21F7C3DA6B60D05341B67268);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m2379B61902CFDAAAE7E5BE25FDA4BBBBF7E54273 (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(float);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisUEncroachingSegment_t3AE1B0B8E50020697D3FA3FFF0C86E406ABFA3C1_m78BC20EBEDF9DDD29C261AACF9F19965B5A49C92 (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(UEncroachingSegment_t3AE1B0B8E50020697D3FA3FFF0C86E406ABFA3C1);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisUEvent_t81CE84F34955D2A2DE962ADE28CDE659605FB2AC_mD7804F40606876E9729617E9761E42F9D6056B26 (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(UEvent_t81CE84F34955D2A2DE962ADE28CDE659605FB2AC);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisUHull_tBA3DC6A41F928298B0D924EDFE00150F307BA851_mDB23A7351A2DB7A69197EC17A28401C3A9B4DA98 (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(UHull_tBA3DC6A41F928298B0D924EDFE00150F307BA851);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mB21F3357E1DB01146285E803CB68EE945ADA7149 (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(uint16_t);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m483305F08D432A8FC41A6E11289383D1E2C3E8AE (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(uint32_t);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mAA2B8333B77A7410376516B6E13FCC02AEE6A5AC (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(uint64_t);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisUStar_tF8CA0D7A7A3197E68176CA173B07251554C7465D_m87DD2D062338C42E1537725895679ED703A237D3 (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(UStar_tF8CA0D7A7A3197E68176CA173B07251554C7465D);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisUTriangle_t6D4513C8A4054BEEC30F937F14BBE005BC4A141F_m0E3277DA666E697D096F659128CBE7238C655CA3 (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(UTriangle_t6D4513C8A4054BEEC30F937F14BBE005BC4A141F);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m297C8507511B4B7C587AF49B53D880021418C5CC (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m567C299D0E9EA26E8A3ADC4158D175D9F101BC1E (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisIl2CppFullySharedGenericStruct_m9FC95A845D303A9C72ED4044691DD435A70F994A_fshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t8EBE725B2740B3ECE9C2D5E9EBEB0B97172D5E18 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	{
		uint32_t L_0 = SizeOf_T_t8EBE725B2740B3ECE9C2D5E9EBEB0B97172D5E18;
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_Tisdouble2_t2124FB15A5BDCC0BD48B80116D4B24DC9DCA9D83_m96D588AB3F164F56BB1DE77BC435342E9F1BD745 (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(double2_t2124FB15A5BDCC0BD48B80116D4B24DC9DCA9D83);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_Tisfloat2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5_mE64EA17FB7FE71E52F389B33C2AE7F4894B63B16 (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(float2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_Tisint2_tB123E869131C6102341F8F9AA01726E0E7C2768D_mB216CE24697733053C38D23575F516F72C0E7F06 (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(int2_tB123E869131C6102341F8F9AA01726E0E7C2768D);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_Tisint3_t18873F121F1EF24ECE875EAB01170B69E1B498C5_m8C0D64D09B9A2F8238A614656203048B06759A6B (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(int3_t18873F121F1EF24ECE875EAB01170B69E1B498C5);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_Tisint4_t6DC3FEACC0DD1EAE4D5B897188E8D669BC4DAB90_mA8C62CC9E230AC8C9856724F0AD3DB92EBABE192 (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(int4_t6DC3FEACC0DD1EAE4D5B897188E8D669BC4DAB90);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtilityInternal_WriteArrayElement_TisBatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D_m8F2F55BA88BD7D9AE44C0AEDE2832F7B5D1F35B6 (void* ___0_destination, int32_t ___1_index, BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D L_6 = ___2_value;
		*(BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)) = L_6;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtilityInternal_WriteArrayElement_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_m2A0F09E085DD77128506415E87841F78B28A6C54 (void* ___0_destination, int32_t ___1_index, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_6 = ___2_value;
		*(Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)) = L_6;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtilityInternal_WriteArrayElement_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m5BCA8D074309F3B46CEC7FD68ED40110FC26ADB7 (void* ___0_destination, int32_t ___1_index, uint8_t ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(uint8_t);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		uint8_t L_6 = ___2_value;
		*(uint8_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)) = L_6;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtilityInternal_WriteArrayElement_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mD1BA031E3E1E75F3DE14D24A768757C9E12F51CD (void* ___0_destination, int32_t ___1_index, Il2CppChar ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(Il2CppChar);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		Il2CppChar L_6 = ___2_value;
		*(Il2CppChar*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)) = L_6;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtilityInternal_WriteArrayElement_TisContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B_mE39132565475093BAD090E92CA932991E46BC595 (void* ___0_destination, int32_t ___1_index, ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B L_6 = ___2_value;
		*(ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)) = L_6;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtilityInternal_WriteArrayElement_TisCullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0_m384FBBC6F8F5110A48E4143C7F675776EA47445F (void* ___0_destination, int32_t ___1_index, CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0 ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0 L_6 = ___2_value;
		*(CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)) = L_6;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtilityInternal_WriteArrayElement_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_mC2A7BB5CE0978BC539FB52E5326DA5A704553463 (void* ___0_destination, int32_t ___1_index, double ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(double);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		double L_6 = ___2_value;
		*(double*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)) = L_6;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtilityInternal_WriteArrayElement_TisEmbeddedLODBuffer_t6D75CECAC228D0710132158E77ACB46D0C43027B_m51B6E5CA111B53732375EAEACEAAA619F6649872 (void* ___0_destination, int32_t ___1_index, EmbeddedLODBuffer_t6D75CECAC228D0710132158E77ACB46D0C43027B ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(EmbeddedLODBuffer_t6D75CECAC228D0710132158E77ACB46D0C43027B);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		EmbeddedLODBuffer_t6D75CECAC228D0710132158E77ACB46D0C43027B L_6 = ___2_value;
		*(EmbeddedLODBuffer_t6D75CECAC228D0710132158E77ACB46D0C43027B*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)) = L_6;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtilityInternal_WriteArrayElement_TisEntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8_m9C0FADCA718C9341E229CEE17C8FE4855AC72880 (void* ___0_destination, int32_t ___1_index, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 L_6 = ___2_value;
		*(EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)) = L_6;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtilityInternal_WriteArrayElement_TisGPUDrivenMeshData_t0D53E18AECCB1ED48149AFD77C12CF1624340C32_m8D30843628A1D5617028C57F54F533476754764A (void* ___0_destination, int32_t ___1_index, GPUDrivenMeshData_t0D53E18AECCB1ED48149AFD77C12CF1624340C32 ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(GPUDrivenMeshData_t0D53E18AECCB1ED48149AFD77C12CF1624340C32);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		GPUDrivenMeshData_t0D53E18AECCB1ED48149AFD77C12CF1624340C32 L_6 = ___2_value;
		*(GPUDrivenMeshData_t0D53E18AECCB1ED48149AFD77C12CF1624340C32*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)) = L_6;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtilityInternal_WriteArrayElement_TisGPUDrivenSubMesh_t2D3B77E083A07816281294E54907E064B2A2A22B_mD11C11FD5E761DB5DFA854AE4BAD7EC7255AE737 (void* ___0_destination, int32_t ___1_index, GPUDrivenSubMesh_t2D3B77E083A07816281294E54907E064B2A2A22B ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(GPUDrivenSubMesh_t2D3B77E083A07816281294E54907E064B2A2A22B);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		GPUDrivenSubMesh_t2D3B77E083A07816281294E54907E064B2A2A22B L_6 = ___2_value;
		*(GPUDrivenSubMesh_t2D3B77E083A07816281294E54907E064B2A2A22B*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)) = L_6;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtilityInternal_WriteArrayElement_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m98F5668334FA5D7DC5943C2EF4820057B8FA3AC8 (void* ___0_destination, int32_t ___1_index, int16_t ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(int16_t);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		int16_t L_6 = ___2_value;
		*(int16_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)) = L_6;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtilityInternal_WriteArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m6CE8AF6F42FA98657985C680DB85747DAC856E2F (void* ___0_destination, int32_t ___1_index, int32_t ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(int32_t);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		int32_t L_6 = ___2_value;
		*(int32_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)) = L_6;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtilityInternal_WriteArrayElement_TisIntPtr_t_mD032891DCCD5A38294F51BAEEA8BFAA62B8557FB (void* ___0_destination, int32_t ___1_index, intptr_t ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(intptr_t);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		intptr_t L_6 = ___2_value;
		*(intptr_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)) = L_6;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtilityInternal_WriteArrayElement_TisInternalLODGroupSettings_t9F08C56422FEBE035004C6D96DE664DB1961F38D_m8A735DF8D46F26149043C87F203926540BC1E6B8 (void* ___0_destination, int32_t ___1_index, InternalLODGroupSettings_t9F08C56422FEBE035004C6D96DE664DB1961F38D ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(InternalLODGroupSettings_t9F08C56422FEBE035004C6D96DE664DB1961F38D);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		InternalLODGroupSettings_t9F08C56422FEBE035004C6D96DE664DB1961F38D L_6 = ___2_value;
		*(InternalLODGroupSettings_t9F08C56422FEBE035004C6D96DE664DB1961F38D*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)) = L_6;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtilityInternal_WriteArrayElement_TisInternalMeshLodRendererSettings_t2B499712F80597BFB45A4813CC139D1BEEDEBB73_mD92C129429E118347DCE3E80F61ABED812BB3713 (void* ___0_destination, int32_t ___1_index, InternalMeshLodRendererSettings_t2B499712F80597BFB45A4813CC139D1BEEDEBB73 ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(InternalMeshLodRendererSettings_t2B499712F80597BFB45A4813CC139D1BEEDEBB73);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		InternalMeshLodRendererSettings_t2B499712F80597BFB45A4813CC139D1BEEDEBB73 L_6 = ___2_value;
		*(InternalMeshLodRendererSettings_t2B499712F80597BFB45A4813CC139D1BEEDEBB73*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)) = L_6;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtilityInternal_WriteArrayElement_TisInternalMeshRendererSettings_tFA0423524032AD2C34E24C53548BE032F67FC6AF_m7A4D40E228244C59345E45676D4CC8348B83617A (void* ___0_destination, int32_t ___1_index, InternalMeshRendererSettings_tFA0423524032AD2C34E24C53548BE032F67FC6AF ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(InternalMeshRendererSettings_tFA0423524032AD2C34E24C53548BE032F67FC6AF);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		InternalMeshRendererSettings_tFA0423524032AD2C34E24C53548BE032F67FC6AF L_6 = ___2_value;
		*(InternalMeshRendererSettings_tFA0423524032AD2C34E24C53548BE032F67FC6AF*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)) = L_6;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtilityInternal_WriteArrayElement_TisLightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21_m214EFE079E3D95383C08945E8BAFA5E3C3FAA190 (void* ___0_destination, int32_t ___1_index, LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21 ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21 L_6 = ___2_value;
		*(LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)) = L_6;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtilityInternal_WriteArrayElement_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_mA93DE94079CF55B4D3FB32AE0780DF796C3CCA47 (void* ___0_destination, int32_t ___1_index, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_6 = ___2_value;
		*(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)) = L_6;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtilityInternal_WriteArrayElement_TisModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960_m6B028924EA3CC36810A213B16F58DE31DE31687E (void* ___0_destination, int32_t ___1_index, ModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960 ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(ModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		ModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960 L_6 = ___2_value;
		*(ModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)) = L_6;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtilityInternal_WriteArrayElement_TisPlane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C_mBE119E8ABAF3D83B9A393B7004C208DF31E4901C (void* ___0_destination, int32_t ___1_index, Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C L_6 = ___2_value;
		*(Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)) = L_6;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtilityInternal_WriteArrayElement_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m9F92E74FB0AAD0FC40CC4DE76AF4BBA2C47C88D6 (void* ___0_destination, int32_t ___1_index, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = ___2_value;
		*(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)) = L_6;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtilityInternal_WriteArrayElement_TisRangeInt_tDFBE4FD13857C11F21F7C3DA6B60D05341B67268_m8A51075F082D2E4A1FB053EA92EB0FC37CAE35EA (void* ___0_destination, int32_t ___1_index, RangeInt_tDFBE4FD13857C11F21F7C3DA6B60D05341B67268 ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(RangeInt_tDFBE4FD13857C11F21F7C3DA6B60D05341B67268);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		RangeInt_tDFBE4FD13857C11F21F7C3DA6B60D05341B67268 L_6 = ___2_value;
		*(RangeInt_tDFBE4FD13857C11F21F7C3DA6B60D05341B67268*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)) = L_6;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtilityInternal_WriteArrayElement_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7871DE4308B379F2F32315380DA04C05F11DA13F (void* ___0_destination, int32_t ___1_index, float ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(float);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		float L_6 = ___2_value;
		*(float*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)) = L_6;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtilityInternal_WriteArrayElement_TisUEncroachingSegment_t3AE1B0B8E50020697D3FA3FFF0C86E406ABFA3C1_mE2BF625B742B08C6B1C2B768BD2C6B56E8FCF9FA (void* ___0_destination, int32_t ___1_index, UEncroachingSegment_t3AE1B0B8E50020697D3FA3FFF0C86E406ABFA3C1 ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(UEncroachingSegment_t3AE1B0B8E50020697D3FA3FFF0C86E406ABFA3C1);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		UEncroachingSegment_t3AE1B0B8E50020697D3FA3FFF0C86E406ABFA3C1 L_6 = ___2_value;
		*(UEncroachingSegment_t3AE1B0B8E50020697D3FA3FFF0C86E406ABFA3C1*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)) = L_6;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtilityInternal_WriteArrayElement_TisUEvent_t81CE84F34955D2A2DE962ADE28CDE659605FB2AC_m2FBE2FA3BBCE3FB77BD4AE0019762C8453B4C17B (void* ___0_destination, int32_t ___1_index, UEvent_t81CE84F34955D2A2DE962ADE28CDE659605FB2AC ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(UEvent_t81CE84F34955D2A2DE962ADE28CDE659605FB2AC);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		UEvent_t81CE84F34955D2A2DE962ADE28CDE659605FB2AC L_6 = ___2_value;
		*(UEvent_t81CE84F34955D2A2DE962ADE28CDE659605FB2AC*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)) = L_6;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtilityInternal_WriteArrayElement_TisUHull_tBA3DC6A41F928298B0D924EDFE00150F307BA851_m80FE70456505C6177FDF18C114A5896234C5A46A (void* ___0_destination, int32_t ___1_index, UHull_tBA3DC6A41F928298B0D924EDFE00150F307BA851 ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(UHull_tBA3DC6A41F928298B0D924EDFE00150F307BA851);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		UHull_tBA3DC6A41F928298B0D924EDFE00150F307BA851 L_6 = ___2_value;
		*(UHull_tBA3DC6A41F928298B0D924EDFE00150F307BA851*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)) = L_6;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtilityInternal_WriteArrayElement_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m8096FCC44AAECDAC8F7011A27B6D4B6745A539CE (void* ___0_destination, int32_t ___1_index, uint16_t ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(uint16_t);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		uint16_t L_6 = ___2_value;
		*(uint16_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)) = L_6;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtilityInternal_WriteArrayElement_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m2A3A6B90150B69BBDEE5319C3CE02AF8B872B64B (void* ___0_destination, int32_t ___1_index, uint32_t ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(uint32_t);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		uint32_t L_6 = ___2_value;
		*(uint32_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)) = L_6;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtilityInternal_WriteArrayElement_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mC71868C665A692778D508E69E8AF1A631E0CD348 (void* ___0_destination, int32_t ___1_index, uint64_t ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(uint64_t);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		uint64_t L_6 = ___2_value;
		*(uint64_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)) = L_6;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtilityInternal_WriteArrayElement_TisUStar_tF8CA0D7A7A3197E68176CA173B07251554C7465D_m5EA80C1639D238E594564D9B622DF4CCE1141D4B (void* ___0_destination, int32_t ___1_index, UStar_tF8CA0D7A7A3197E68176CA173B07251554C7465D ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(UStar_tF8CA0D7A7A3197E68176CA173B07251554C7465D);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		UStar_tF8CA0D7A7A3197E68176CA173B07251554C7465D L_6 = ___2_value;
		*(UStar_tF8CA0D7A7A3197E68176CA173B07251554C7465D*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)) = L_6;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtilityInternal_WriteArrayElement_TisUTriangle_t6D4513C8A4054BEEC30F937F14BBE005BC4A141F_m6A69EFB7BEE099EB16798F6EA62AC3C8612E49D0 (void* ___0_destination, int32_t ___1_index, UTriangle_t6D4513C8A4054BEEC30F937F14BBE005BC4A141F ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(UTriangle_t6D4513C8A4054BEEC30F937F14BBE005BC4A141F);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		UTriangle_t6D4513C8A4054BEEC30F937F14BBE005BC4A141F L_6 = ___2_value;
		*(UTriangle_t6D4513C8A4054BEEC30F937F14BBE005BC4A141F*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)) = L_6;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtilityInternal_WriteArrayElement_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m4DC28ACC65CD91D06E733BEA0BC919D23DF3D7E4 (void* ___0_destination, int32_t ___1_index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___2_value;
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)) = L_6;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtilityInternal_WriteArrayElement_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mA724E762E40FA0C9F59E22D26CD7760418780D94 (void* ___0_destination, int32_t ___1_index, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_6 = ___2_value;
		*(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)) = L_6;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtilityInternal_WriteArrayElement_TisIl2CppFullySharedGenericAny_mDF23616AEE03407D05BE4CE63658C326ACA1ADC0_fshared (void* ___0_destination, int32_t ___1_index, Il2CppFullySharedGenericAny ___2_value, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t07C3F1A12A8E95862F1A2E3DD5ED60C8EC56F580 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_T_t07C3F1A12A8E95862F1A2E3DD5ED60C8EC56F580);
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = SizeOf_T_t07C3F1A12A8E95862F1A2E3DD5ED60C8EC56F580;
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		il2cpp_codegen_memcpy(L_6, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___2_value : &___2_value), SizeOf_T_t07C3F1A12A8E95862F1A2E3DD5ED60C8EC56F580);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)), L_6, SizeOf_T_t07C3F1A12A8E95862F1A2E3DD5ED60C8EC56F580);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 0), (void**)(Il2CppFullySharedGenericAny*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)), (void*)L_6);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtilityInternal_WriteArrayElement_Tisdouble2_t2124FB15A5BDCC0BD48B80116D4B24DC9DCA9D83_mF7835C7C0CCCC6506483D47D9F965AE133A2580A (void* ___0_destination, int32_t ___1_index, double2_t2124FB15A5BDCC0BD48B80116D4B24DC9DCA9D83 ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(double2_t2124FB15A5BDCC0BD48B80116D4B24DC9DCA9D83);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		double2_t2124FB15A5BDCC0BD48B80116D4B24DC9DCA9D83 L_6 = ___2_value;
		*(double2_t2124FB15A5BDCC0BD48B80116D4B24DC9DCA9D83*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)) = L_6;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtilityInternal_WriteArrayElement_Tisfloat2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5_m394E812F3E02FCD362EB8DCBF0A7D112DBBE9DA3 (void* ___0_destination, int32_t ___1_index, float2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5 ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(float2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		float2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5 L_6 = ___2_value;
		*(float2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)) = L_6;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtilityInternal_WriteArrayElement_Tisint2_tB123E869131C6102341F8F9AA01726E0E7C2768D_mE5E734E01AED08F1ED47485C1721B5B1331B0A58 (void* ___0_destination, int32_t ___1_index, int2_tB123E869131C6102341F8F9AA01726E0E7C2768D ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(int2_tB123E869131C6102341F8F9AA01726E0E7C2768D);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		int2_tB123E869131C6102341F8F9AA01726E0E7C2768D L_6 = ___2_value;
		*(int2_tB123E869131C6102341F8F9AA01726E0E7C2768D*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)) = L_6;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtilityInternal_WriteArrayElement_Tisint3_t18873F121F1EF24ECE875EAB01170B69E1B498C5_m3A3B9DFD873633E9078206152E40D232B1B0F8D2 (void* ___0_destination, int32_t ___1_index, int3_t18873F121F1EF24ECE875EAB01170B69E1B498C5 ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(int3_t18873F121F1EF24ECE875EAB01170B69E1B498C5);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		int3_t18873F121F1EF24ECE875EAB01170B69E1B498C5 L_6 = ___2_value;
		*(int3_t18873F121F1EF24ECE875EAB01170B69E1B498C5*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)) = L_6;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtilityInternal_WriteArrayElement_Tisint4_t6DC3FEACC0DD1EAE4D5B897188E8D669BC4DAB90_mBFAF687EB944C031EFE295967D340706BA7A8F57 (void* ___0_destination, int32_t ___1_index, int4_t6DC3FEACC0DD1EAE4D5B897188E8D669BC4DAB90 ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(int4_t6DC3FEACC0DD1EAE4D5B897188E8D669BC4DAB90);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		int4_t6DC3FEACC0DD1EAE4D5B897188E8D669BC4DAB90 L_6 = ___2_value;
		*(int4_t6DC3FEACC0DD1EAE4D5B897188E8D669BC4DAB90*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)) = L_6;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtilityInternal_WriteArrayElementWithStride_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m46E20F2BBF8564E1BC4A202FE67CCEC245A13E11 (void* ___0_destination, int32_t ___1_index, int32_t ___2_stride, int32_t ___3_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		int32_t L_3 = ___2_stride;
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		int32_t L_6 = ___3_value;
		*(int32_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)) = L_6;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtilityInternal_WriteArrayElementWithStride_TisIl2CppFullySharedGenericAny_m43737F191942C3B66CAD8213014C3E89AB211631_fshared (void* ___0_destination, int32_t ___1_index, int32_t ___2_stride, Il2CppFullySharedGenericAny ___3_value, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t9E3CA3FDC66F405C1818D76720E23E0FECDA7AEF = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_T_t9E3CA3FDC66F405C1818D76720E23E0FECDA7AEF);
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		int32_t L_3 = ___2_stride;
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		il2cpp_codegen_memcpy(L_6, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___3_value : &___3_value), SizeOf_T_t9E3CA3FDC66F405C1818D76720E23E0FECDA7AEF);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)), L_6, SizeOf_T_t9E3CA3FDC66F405C1818D76720E23E0FECDA7AEF);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 0), (void**)(Il2CppFullySharedGenericAny*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)), (void*)L_6);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A Vector_AsVectorUInt64_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m0D538510931D731CE9075661C07B0DECAAC84B82 (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 ___0_value, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	CHECKED_LOCAL(Vector_1_t5ABB92D0A8A9F5B15E1C6E405ADBABA59736E56F_StaticInit);
	{
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_0 = ___0_value;
		CHECKED_LOCAL_INIT(Vector_1_t5ABB92D0A8A9F5B15E1C6E405ADBABA59736E56F_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 1)),il2cpp_codegen_runtime_class_init_inline);
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_1;
		L_1 = Vector_1_op_Explicit_m5E44D3923BF92F437AEC34CDE0CBD6130883B0B7(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A Vector_AsVectorUInt64_TisIl2CppFullySharedGenericStruct_mD3B6243B6DD2F19C7DA294F642D66F699D797811_fshared (Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 ___0_value, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	CHECKED_LOCAL(Vector_1_t5ABB92D0A8A9F5B15E1C6E405ADBABA59736E56F_StaticInit);
	{
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_0 = ___0_value;
		CHECKED_LOCAL_INIT(Vector_1_t5ABB92D0A8A9F5B15E1C6E405ADBABA59736E56F_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 1)),il2cpp_codegen_runtime_class_init_inline);
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_1;
		L_1 = ((  Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A (*) (Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 Vector_Equals_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m1E49423160D9D2F662A38FDEE88842FC26B67EBC (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 ___0_left, Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 ___1_right, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	CHECKED_LOCAL(Vector_1_t6B5A9226C7EC33CCA1D9ED26AD7E3FB392A69961_StaticInit);
	{
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_0 = ___0_left;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_1 = ___1_right;
		CHECKED_LOCAL_INIT(Vector_1_t6B5A9226C7EC33CCA1D9ED26AD7E3FB392A69961_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 1)),il2cpp_codegen_runtime_class_init_inline);
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_2;
		L_2 = Vector_1_Equals_m6F913845CB1E8A1A753B3C187A8EB840C36F5ADF_inline(L_0, L_1, il2cpp_rgctx_method(method->rgctx_data, 0));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 Vector_Equals_TisIl2CppFullySharedGenericStruct_m589C7C54FDBBA8A38CC7672C2E2734EB16BDFD24_fshared (Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 ___0_left, Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 ___1_right, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	CHECKED_LOCAL(Vector_1_t6B5A9226C7EC33CCA1D9ED26AD7E3FB392A69961_StaticInit);
	{
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_0 = ___0_left;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_1 = ___1_right;
		CHECKED_LOCAL_INIT(Vector_1_t6B5A9226C7EC33CCA1D9ED26AD7E3FB392A69961_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 1)),il2cpp_codegen_runtime_class_init_inline);
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_2;
		L_2 = ((  Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 (*) (Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2, Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_0, L_1, il2cpp_rgctx_method(method->rgctx_data, 0));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* Volatile_Read_TisIl2CppSharedGenericObject_m80AA45DB17514248EE3F1C51892F22E546B63BC9_gshared (Il2CppSharedGenericObject** ___0_location, const RuntimeMethod* method) 
{
	{
		Il2CppSharedGenericObject** L_0 = ___0_location;
		VolatileObject_tEA3ACFAAFB9D2EFA5162F693BAAB342EA7737B99* L_1;
		L_1 = il2cpp_unsafe_as_ref<VolatileObject_tEA3ACFAAFB9D2EFA5162F693BAAB342EA7737B99>(L_0);
		RuntimeObject* L_2 = L_1->___Value;
		il2cpp_codegen_memory_barrier();
		Il2CppSharedGenericObject* L_3;
		L_3 = il2cpp_unsafe_as<Il2CppSharedGenericObject*>(L_2);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Volatile_Write_TisIl2CppSharedGenericObject_m5283DEB09B854082CE5EFC9E4C1B19F4D8E1A5CA_gshared (Il2CppSharedGenericObject** ___0_location, Il2CppSharedGenericObject* ___1_value, const RuntimeMethod* method) 
{
	{
		Il2CppSharedGenericObject** L_0 = ___0_location;
		VolatileObject_tEA3ACFAAFB9D2EFA5162F693BAAB342EA7737B99* L_1;
		L_1 = il2cpp_unsafe_as_ref<VolatileObject_tEA3ACFAAFB9D2EFA5162F693BAAB342EA7737B99>(L_0);
		Il2CppSharedGenericObject* L_2 = ___1_value;
		il2cpp_codegen_memory_barrier();
		L_1->___Value = (RuntimeObject*)L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___Value), (void*)(RuntimeObject*)L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t MarshalledUnityObject_Marshal_TisIl2CppSharedGenericObject_m35CB06885EF5600EDBB840B54EDAF3A806896DBB_gshared (Il2CppSharedGenericObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		Il2CppSharedGenericObject* L_0 = ___0_obj;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		return 0;
	}

IL_000e:
	{
		Il2CppSharedGenericObject* L_1 = ___0_obj;
		intptr_t L_2;
		L_2 = MarshalledUnityObject_MarshalNotNull_TisIl2CppSharedGenericObject_mCE897EC9A79983B4B1E6E2C8342452256309044A_inline(L_1, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t MarshalledUnityObject_MarshalNotNull_TisIl2CppSharedGenericObject_mCE897EC9A79983B4B1E6E2C8342452256309044A_gshared (Il2CppSharedGenericObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		Il2CppSharedGenericObject* L_0 = ___0_obj;
		intptr_t L_1 = ((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_0)->___m_CachedPtr;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* MarshalledUnityObject_Unmarshal_TisIl2CppSharedGenericObject_mDFF812844C3A315BA334E9FD102E4EE28E2847B1_gshared (intptr_t ___0_gcHandlePtr, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC V_0;
	memset((&V_0), 0, sizeof(V_0));
	Il2CppSharedGenericObject* V_1 = NULL;
	{
		intptr_t L_0 = ___0_gcHandlePtr;
		bool L_1;
		L_1 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271_inline(L_0, 0, NULL);
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		il2cpp_codegen_initobj((&V_1), sizeof(Il2CppSharedGenericObject*));
		Il2CppSharedGenericObject* L_2 = V_1;
		return L_2;
	}

IL_0017:
	{
		intptr_t L_3 = ___0_gcHandlePtr;
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC L_4;
		L_4 = MarshalledUnityObject_FromIntPtrUnsafe_m1C5AE0FB7CD1978A8387B0081DB909BAAC2324C3_inline(L_3, NULL);
		V_0 = L_4;
		RuntimeObject* L_5;
		L_5 = GCHandle_get_Target_m481F9508DA5E384D33CD1F4450060DC56BBD4CD5_inline((&V_0), NULL);
		return ((Il2CppSharedGenericObject*)Castclass((RuntimeObject*)L_5, il2cpp_rgctx_data(method->rgctx_data, 0)));
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool RenderPipeline_get_disposed_mF0D4B88DF44249E0FC2371697B913DD5A81B3850_inline (RenderPipeline_t3AF1E2046D27ABCEBA2279770AADA9F531073E69* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CdisposedU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* ScopeTransitionHelper_get_AllAssemblies_mBD1DC2D507C344159A521F20F3DBF2A440BF403D_inline (ScopeTransitionHelper_t069C5DE337C0C8F615857F4D731C5CBE3B0F4347* __this, const RuntimeMethod* method) 
{
	{
		StackOrderedAssemblyList_t57E870538D7E4DC7B2168FFB75368CE0C906AF97* L_0 = __this->____assemblyList;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_NextPowerOfTwo_mA1CE7F3EEF9B0B07AB2D586C030ED236D578F485_inline (int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		int32_t L_1 = ((int32_t)il2cpp_codegen_subtract(L_0, 1));
		int32_t L_2 = ((int32_t)(L_1|((int32_t)(L_1>>((int32_t)16)))));
		int32_t L_3 = ((int32_t)(L_2|((int32_t)(L_2>>8))));
		int32_t L_4 = ((int32_t)(L_3|((int32_t)(L_3>>4))));
		int32_t L_5 = ((int32_t)(L_4|((int32_t)(L_4>>2))));
		return ((int32_t)il2cpp_codegen_add(((int32_t)(L_5|((int32_t)(L_5>>1)))), 1));
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271_inline (intptr_t ___0_value1, intptr_t ___1_value2, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = ___0_value1;
		intptr_t L_1 = ___1_value2;
		return (bool)((((intptr_t)L_0) == ((intptr_t)L_1))? 1 : 0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC MarshalledUnityObject_FromIntPtrUnsafe_m1C5AE0FB7CD1978A8387B0081DB909BAAC2324C3_inline (intptr_t ___0_gcHandle, const RuntimeMethod* method) 
{
	{
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* L_0;
		L_0 = UnsafeUtility_As_TisIntPtr_t_TisGCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC_mD94F597CB91662C823496DA9FA9A7CF908734A78_inline((&___0_gcHandle), NULL);
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC L_1 = (*(GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC*)L_0);
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* GCHandle_get_Target_m481F9508DA5E384D33CD1F4450060DC56BBD4CD5_inline (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* __this, const RuntimeMethod* method) 
{
	{
		bool L_0;
		L_0 = GCHandle_get_IsAllocated_m241908103D8D867E11CCAB73C918729825E86843_inline(__this, NULL);
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_1 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4EBC86E0EACFCA522AEB82874860D0E248D782A5)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GCHandle_get_Target_m481F9508DA5E384D33CD1F4450060DC56BBD4CD5_RuntimeMethod_var)));
	}

IL_0013:
	{
		intptr_t L_2 = __this->___handle;
		bool L_3;
		L_3 = GCHandle_CanDereferenceHandle_mAAAC42D1268CEF3FDD040A3D1574773D08140579_inline(L_2, NULL);
		if (!L_3)
		{
			goto IL_002c;
		}
	}
	{
		intptr_t L_4 = __this->___handle;
		RuntimeObject* L_5;
		L_5 = GCHandle_GetRef_mAC7E58E62417209DC41C99F66BA70F0C3AA18DA8_inline(L_4, NULL);
		return L_5;
	}

IL_002c:
	{
		intptr_t L_6 = __this->___handle;
		RuntimeObject* L_7;
		L_7 = GCHandle_GetTarget_mE0AF851834410E2AEA6285B2497751570236C794(L_6, NULL);
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m0CE6E39234ED33F5195AABC8029D06D4756C75C1_gshared_inline (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* __this, Il2CppSharedGenericObject* ___0_item, const RuntimeMethod* method) 
{
	__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_1 = __this->____items;
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		V_1 = L_2;
		int32_t L_3 = V_1;
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_4 = V_0;
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		if ((!(((uint32_t)L_3) < ((uint32_t)L_5))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_6 = V_1;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_6, 1));
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_7 = V_0;
		int32_t L_8 = V_1;
		Il2CppSharedGenericObject* L_9 = ___0_item;
		(L_7)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_8), (Il2CppSharedGenericObject*)L_9);
		return;
	}

IL_0034:
	{
		Il2CppSharedGenericObject* L_10 = ___0_item;
		List_1_AddWithResize_mCC24A812DFC30C3DE2230E3C8EE705871C1DFF81(__this, L_10, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mD2ED26ACAF3BAF386FFEA83893BA51DB9FD8BA30_fshared_inline (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mBA868F06359701D9950DEB1B10F52F848E9FF6DA_fshared_inline (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* __this, Il2CppFullySharedGenericAny* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		Il2CppFullySharedGenericAny* L_0 = ___0_ptr;
		ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SpanAction_2_Invoke_m47CBAA653C2AF4E0B4D3CA9600C55A94FA090732_gshared_inline (SpanAction_2_t7E9C729D70F4264C725B3A5B383D01398D40CB63* __this, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ___0_span, ValueTuple_3_t94AB360726755BBED1ED3E10C22F399AE18E226E ___1_arg, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D, ValueTuple_3_t94AB360726755BBED1ED3E10C22F399AE18E226E, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_span, ___1_arg, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SpanAction_2_Invoke_m65D110A8BF9027F070FA8CF53AF75D47A98C6E2A_inline (SpanAction_2_t84FDFFEECCC96A9A407DCB490E60340E38185947* __this, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ___0_span, ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57 ___1_arg, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D, ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_span, ___1_arg, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* Func_1_Invoke_m201DDBB72CE38673C89C22034EC8779981D83E6D_gshared_inline (Func_1_t566D4A654882E282E54CDC3A001E05486F913903* __this, const RuntimeMethod* method) 
{
	typedef Il2CppSharedGenericObject* (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t* UnsafeUtilityInternal_Add_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m5A3E59E17B5D433E8D6EFA9D4C1C40182A89B306_inline (uint8_t* ___0_source, int32_t ___1_elementOffset, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___0_source;
		uint32_t L_1 = sizeof(uint8_t);
		int32_t L_2 = ___1_elementOffset;
		return ((uint8_t*)il2cpp_codegen_add((intptr_t)L_0, ((int32_t)il2cpp_codegen_multiply((int32_t)L_1, L_2))));
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_AlignOf_TisBatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D_mB855D0A6C39C238FD086F0A41F578C588DD1E57D_inline (const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = UnsafeUtilityInternal_SizeOf_TisAlignOfHelper_1_tBEA2F557D94117D6B5CA3D54DEA10F7A2F5AF996_mC0091F1B9C9C5F6FE2EF40A40286F792951D680B_inline(NULL);
		int32_t L_1;
		L_1 = UnsafeUtilityInternal_SizeOf_TisBatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D_m439E4115054F2F7F3DFE86DEAEF565B37F9DA51F_inline(NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_AlignOf_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_mBCD966C8D21A7FA7A531E312657F8536BB7D5591_inline (const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = UnsafeUtilityInternal_SizeOf_TisAlignOfHelper_1_t34CCC6CF432525FDD94891D4DAFB9DB74F9AF3E9_m8E01215ECE32A86C1F6BEBD206783D5863BE3102_inline(NULL);
		int32_t L_1;
		L_1 = UnsafeUtilityInternal_SizeOf_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_m1B3257CEE82ED08641AFCA4D9B2ACBC96222B922_inline(NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_AlignOf_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mC44B74F48735FA62BAE3FBA763123E932B9EF822_inline (const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = UnsafeUtilityInternal_SizeOf_TisAlignOfHelper_1_tAF795AF837E3C37401B92C7483D74A4E5145DB4D_m8CB43E8118CC0E65E6E8130381DEB11701F21848_inline(NULL);
		int32_t L_1;
		L_1 = UnsafeUtilityInternal_SizeOf_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m485E79FA6794AD30B29C6414A85A867DF156E5E1_inline(NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_AlignOf_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m80DCA0AC9767EB192DAAE87F5F4F56708D278474_inline (const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = UnsafeUtilityInternal_SizeOf_TisAlignOfHelper_1_tB21BA45542E8060FB85BA02002482499EBFA00A2_mA1D5B3481244A0872D4C4419C5C507BC5C9CA1A4_inline(NULL);
		int32_t L_1;
		L_1 = UnsafeUtilityInternal_SizeOf_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m2DB960E4C25CE2F72A3A1ABC302E23F0963089F5_inline(NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_AlignOf_TisContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B_m47308D0D016580B804EBE2B83A11C2BEA28E74B4_inline (const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = UnsafeUtilityInternal_SizeOf_TisAlignOfHelper_1_t08A14D9ACB4D26ACA71BCA57DAB866764B883825_m234350549A466D387273283CD034377BA980C785_inline(NULL);
		int32_t L_1;
		L_1 = UnsafeUtilityInternal_SizeOf_TisContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B_m409346A2C7D4615BB703F2802A6B9E12650CDB39_inline(NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_AlignOf_TisCullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0_mECD98232E4577E26AB1077C802A175181CEF9E17_inline (const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = UnsafeUtilityInternal_SizeOf_TisAlignOfHelper_1_tF6B6CAC1AFD67E6448C9B177EA1734D57E3BCDA2_mF17960322FD73F94C5B1EA66A15A812107E8E26C_inline(NULL);
		int32_t L_1;
		L_1 = UnsafeUtilityInternal_SizeOf_TisCullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0_m445C79CB5CEFFE71D2530C3CACDBC4B8D3A9D0A9_inline(NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_AlignOf_TisEmbeddedLODBuffer_t6D75CECAC228D0710132158E77ACB46D0C43027B_mF15FE3B1714441550D2BDA30F695E79AA17709D9_inline (const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = UnsafeUtilityInternal_SizeOf_TisAlignOfHelper_1_tFC537E4E3FE3F7962CBC5F219276522C16824ACF_m6ED1AB2C11E9DEA8670BFFABDB8A999E66D4460D_inline(NULL);
		int32_t L_1;
		L_1 = UnsafeUtilityInternal_SizeOf_TisEmbeddedLODBuffer_t6D75CECAC228D0710132158E77ACB46D0C43027B_mA1468D24A7B620A10E023979868C9D1EE2D5DE69_inline(NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_AlignOf_TisEntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8_mCAE1EDAA3D44B416A2AF29A2CD1437A60C94B184_inline (const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = UnsafeUtilityInternal_SizeOf_TisAlignOfHelper_1_tCD4B08DBB915013B12E50DA43CE11B02B0D135DD_m5CB9D53CC2151EBA31EE911F86BF64236024C41B_inline(NULL);
		int32_t L_1;
		L_1 = UnsafeUtilityInternal_SizeOf_TisEntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8_mD1B0EBD0B43B19830ED5B0A121221D27AA0B963E_inline(NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_AlignOf_TisGPUDrivenMeshData_t0D53E18AECCB1ED48149AFD77C12CF1624340C32_mE4B475BB745CDDD8575CFF31796C75EC5BE1677C_inline (const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = UnsafeUtilityInternal_SizeOf_TisAlignOfHelper_1_t398568B8BA5FC2BA68E01C861AA1BEDC4750E61D_m5F14358FA8512CD3007A89FBBF226B14ECA4C00B_inline(NULL);
		int32_t L_1;
		L_1 = UnsafeUtilityInternal_SizeOf_TisGPUDrivenMeshData_t0D53E18AECCB1ED48149AFD77C12CF1624340C32_mAC88D9A89F4AD39D5BDA8F3FF5419977CDCCC3E3_inline(NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_AlignOf_TisGPUDrivenSubMesh_t2D3B77E083A07816281294E54907E064B2A2A22B_m07E75B4F5F05AFDC7DD95993E4BE4E6832AC951F_inline (const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = UnsafeUtilityInternal_SizeOf_TisAlignOfHelper_1_t9B8325E941D53AE21ECA21E2996411A52D0F8663_m70AC25EBFF484644D693343C24F146A8528614C8_inline(NULL);
		int32_t L_1;
		L_1 = UnsafeUtilityInternal_SizeOf_TisGPUDrivenSubMesh_t2D3B77E083A07816281294E54907E064B2A2A22B_m90E80C680B80CD82EB5839F5DDE33F22BFBF18D1_inline(NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_AlignOf_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m0987C997B0BCBFDE388F4E1808BCF6706136856A_inline (const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = UnsafeUtilityInternal_SizeOf_TisAlignOfHelper_1_t2B1B6F8C95D259E66B253A1C059AE8D3365B528E_m9653BC5706AAE6334C692185FFA0519BD7824CB3_inline(NULL);
		int32_t L_1;
		L_1 = UnsafeUtilityInternal_SizeOf_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m8EC54AD1BB1FFE52E59D872A1F83666DD9D381AA_inline(NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_AlignOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mB5611745B3ED473868EF6B61479E2860BBB2223C_inline (const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = UnsafeUtilityInternal_SizeOf_TisAlignOfHelper_1_t676424B8757032427D7761BC732079DC7512D8AE_mB243DC326B2D814D1A62FDABCC2F2AA541A8C895_inline(NULL);
		int32_t L_1;
		L_1 = UnsafeUtilityInternal_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mA24CDBA02971DC06DEDE40B17E72F8C262B6B131_inline(NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_AlignOf_TisIntPtr_t_m7FF5CB3788B437CA624174389D25EE9BCB2B212E_inline (const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = UnsafeUtilityInternal_SizeOf_TisAlignOfHelper_1_t1C2506D8F2F53BF0A585917F05CD8BC880EBB752_m6197C4317CE4E01732509D53E08172FEA65ED04E_inline(NULL);
		int32_t L_1;
		L_1 = UnsafeUtilityInternal_SizeOf_TisIntPtr_t_mF9218FE174B91F132731D032A744AFC048AFB932_inline(NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_AlignOf_TisInternalLODGroupSettings_t9F08C56422FEBE035004C6D96DE664DB1961F38D_m2D29EB1E0BB5C7D366275F1AEB950D0C3365A3EC_inline (const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = UnsafeUtilityInternal_SizeOf_TisAlignOfHelper_1_tCFC8A208D36EA414B14215D004A770AEC0DB8BA2_m88DBA349C0FF85634217C1CB08E8DB162E461E71_inline(NULL);
		int32_t L_1;
		L_1 = UnsafeUtilityInternal_SizeOf_TisInternalLODGroupSettings_t9F08C56422FEBE035004C6D96DE664DB1961F38D_m7042BFD95CFAA71CA1DD3DB939DB030B0656C6D2_inline(NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_AlignOf_TisInternalMeshLodRendererSettings_t2B499712F80597BFB45A4813CC139D1BEEDEBB73_m4613462C0A843B2F0C9BE750FF1486558EC20A57_inline (const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = UnsafeUtilityInternal_SizeOf_TisAlignOfHelper_1_t1A20691B0774E0EFBEAD966FB0B480A553DCF42E_m2B08131E6C67851405962CD6DF12CF465931B858_inline(NULL);
		int32_t L_1;
		L_1 = UnsafeUtilityInternal_SizeOf_TisInternalMeshLodRendererSettings_t2B499712F80597BFB45A4813CC139D1BEEDEBB73_m00E1BE18CB920FCCCBFE7C2C4A1BF8BA0A7EFECF_inline(NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_AlignOf_TisInternalMeshRendererSettings_tFA0423524032AD2C34E24C53548BE032F67FC6AF_m218A1DC76BE997229B2F8774AE0E528B6BAE4EAF_inline (const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = UnsafeUtilityInternal_SizeOf_TisAlignOfHelper_1_t6F2F300ADF773C90F661FF403B84D167EB793773_m69F6C16E7F867D1C227B7289CE495CC095EC7AD0_inline(NULL);
		int32_t L_1;
		L_1 = UnsafeUtilityInternal_SizeOf_TisInternalMeshRendererSettings_tFA0423524032AD2C34E24C53548BE032F67FC6AF_mFB035E1C19B4E54280B4B9D660EDA3A8A086CAF6_inline(NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_AlignOf_TisLightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21_m2D3813D1A1056BED9EEE9B6BF630EBDCF618551D_inline (const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = UnsafeUtilityInternal_SizeOf_TisAlignOfHelper_1_tF9C3457088E3B293794AA641A2261DD4B6D5B57A_m58FF4964D2CAEB4EFC416B1E0FDFD6E9705F3143_inline(NULL);
		int32_t L_1;
		L_1 = UnsafeUtilityInternal_SizeOf_TisLightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21_mF4E7699562D0DD8909029C23414C07C41E83166C_inline(NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_AlignOf_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_m6E66E9028E798C9896F3F56F7FA05908E32B1689_inline (const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = UnsafeUtilityInternal_SizeOf_TisAlignOfHelper_1_t6C24EA77B111E6877D279F01810C1D4E13534301_m65D985DC623EBE012CF7CAE94EF2DFEF1B8A3243_inline(NULL);
		int32_t L_1;
		L_1 = UnsafeUtilityInternal_SizeOf_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_m310E3F9A8E091DFAB070D735691100178B15463B_inline(NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_AlignOf_TisModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960_m9396C9240C13C7F344AC4E11A89D9B0A75EF52AB_inline (const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = UnsafeUtilityInternal_SizeOf_TisAlignOfHelper_1_tF3D321A7435452B0B749AF58D2CF8AB1865BC52C_m1CAC82495552B9A4A605EEA04EA097B8AF87C8C2_inline(NULL);
		int32_t L_1;
		L_1 = UnsafeUtilityInternal_SizeOf_TisModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960_m4FA6D33FFCEC8031D4883ABCA5ED229D28E44D80_inline(NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_AlignOf_TisPlane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C_m9E02365A60C7193DCE9B1B1CCAC6B940995AB87F_inline (const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = UnsafeUtilityInternal_SizeOf_TisAlignOfHelper_1_t4257D6924487B14B176AB4C639F1251F2E4ED1C6_mDDF1DABCBD0F4009518CE893AD84E6078D170199_inline(NULL);
		int32_t L_1;
		L_1 = UnsafeUtilityInternal_SizeOf_TisPlane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C_m289C662F3DEC8A9CACB14474D55B65B1E5E1AE84_inline(NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_AlignOf_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_mCFA49B63212293A47A946132716CC8084F118BBF_inline (const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = UnsafeUtilityInternal_SizeOf_TisAlignOfHelper_1_tE6A7C0BC2AB9B74FA79F8449B8FA1BC94A474BC4_m19212FA6DC039BBDFD64B28E598F6264D54DB691_inline(NULL);
		int32_t L_1;
		L_1 = UnsafeUtilityInternal_SizeOf_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_mA10F583A957D150C530045E8E0C54DD2A4D96489_inline(NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_AlignOf_TisRangeInt_tDFBE4FD13857C11F21F7C3DA6B60D05341B67268_m36853F8E5ABD4C14B492DED38BA104203DA9FADC_inline (const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = UnsafeUtilityInternal_SizeOf_TisAlignOfHelper_1_t151A1BD8ECCDCBCF3185238615804E396C3B07A5_mC4112DF120EBF605C8F77839E842177AF068D44E_inline(NULL);
		int32_t L_1;
		L_1 = UnsafeUtilityInternal_SizeOf_TisRangeInt_tDFBE4FD13857C11F21F7C3DA6B60D05341B67268_m462940FF70DE74B43CFAFE2670B4A652829BDF3F_inline(NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_AlignOf_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m9B9607330865C0A5ABFB515754C1C1C96D19F344_inline (const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = UnsafeUtilityInternal_SizeOf_TisAlignOfHelper_1_t25880EEE885729199077AC19774C8BE13323D4B4_m19CE06B2A77B620A1DE800E56AFEE3A5616E99E6_inline(NULL);
		int32_t L_1;
		L_1 = UnsafeUtilityInternal_SizeOf_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m2379B61902CFDAAAE7E5BE25FDA4BBBBF7E54273_inline(NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_AlignOf_TisUEncroachingSegment_t3AE1B0B8E50020697D3FA3FFF0C86E406ABFA3C1_mC80D3B528E9C492E0BAE5124788711053E5BA8AE_inline (const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = UnsafeUtilityInternal_SizeOf_TisAlignOfHelper_1_t3FE2545879EC19D84F399DE73EA83AAEDEA14C9D_m22F628ADD6E12980B394B9237C61AB0C95E1EC1C_inline(NULL);
		int32_t L_1;
		L_1 = UnsafeUtilityInternal_SizeOf_TisUEncroachingSegment_t3AE1B0B8E50020697D3FA3FFF0C86E406ABFA3C1_m78BC20EBEDF9DDD29C261AACF9F19965B5A49C92_inline(NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_AlignOf_TisUEvent_t81CE84F34955D2A2DE962ADE28CDE659605FB2AC_m2EAF1749DEC30DF8BAE54F2E152E33EEBF06D2E7_inline (const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = UnsafeUtilityInternal_SizeOf_TisAlignOfHelper_1_t054F2568D7C1097239A28CF25D80D8353E29BB37_m120CCD2A94A7B51A2631C5630A9E505F1DDB1CD7_inline(NULL);
		int32_t L_1;
		L_1 = UnsafeUtilityInternal_SizeOf_TisUEvent_t81CE84F34955D2A2DE962ADE28CDE659605FB2AC_mD7804F40606876E9729617E9761E42F9D6056B26_inline(NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_AlignOf_TisUHull_tBA3DC6A41F928298B0D924EDFE00150F307BA851_m9DF201FCDB9B057604B20987096858076D21CFAB_inline (const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = UnsafeUtilityInternal_SizeOf_TisAlignOfHelper_1_t0280929E6B4134EE85E97F8BFC283CFB4C7BC056_m24D80B10C7527E88ECD7E5C10731C7F1663E2C27_inline(NULL);
		int32_t L_1;
		L_1 = UnsafeUtilityInternal_SizeOf_TisUHull_tBA3DC6A41F928298B0D924EDFE00150F307BA851_mDB23A7351A2DB7A69197EC17A28401C3A9B4DA98_inline(NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_AlignOf_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m5CC670602FE83644EBD988EBBA04AB4D7D731FD7_inline (const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = UnsafeUtilityInternal_SizeOf_TisAlignOfHelper_1_t70E1FB13BE93757804A731D115FA219AE664F9B9_mE690DD75A3C952CEDEB71F13B96E603904A60567_inline(NULL);
		int32_t L_1;
		L_1 = UnsafeUtilityInternal_SizeOf_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mB21F3357E1DB01146285E803CB68EE945ADA7149_inline(NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_AlignOf_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mF228544B123C545DB4D43DDE0E23492B7A731A7F_inline (const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = UnsafeUtilityInternal_SizeOf_TisAlignOfHelper_1_tF3C6E1F1F032602FD9777BBE4466632711C12DC3_m936B8B899C03B9C80AA39CD231B892274340136D_inline(NULL);
		int32_t L_1;
		L_1 = UnsafeUtilityInternal_SizeOf_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m483305F08D432A8FC41A6E11289383D1E2C3E8AE_inline(NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_AlignOf_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m29B7D9DA9527706BBA1F73ECEA934CCD0B2D99E3_inline (const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = UnsafeUtilityInternal_SizeOf_TisAlignOfHelper_1_tE21040F72E90527C319FF9B07B398E23DF95BE2E_m2D3BC72BBF45866A72C7ADF31F40AEFC56BBD498_inline(NULL);
		int32_t L_1;
		L_1 = UnsafeUtilityInternal_SizeOf_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mAA2B8333B77A7410376516B6E13FCC02AEE6A5AC_inline(NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_AlignOf_TisUStar_tF8CA0D7A7A3197E68176CA173B07251554C7465D_m120C8454AB3B92B9FDB39562A6C50C333B6D7BD3_inline (const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = UnsafeUtilityInternal_SizeOf_TisAlignOfHelper_1_t9E9A73E6B25DCBB1356ABAF5D5F64CEB912639E5_m6333413607F97523DA83C70DA244CCE8E0B50D8E_inline(NULL);
		int32_t L_1;
		L_1 = UnsafeUtilityInternal_SizeOf_TisUStar_tF8CA0D7A7A3197E68176CA173B07251554C7465D_m87DD2D062338C42E1537725895679ED703A237D3_inline(NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_AlignOf_TisUTriangle_t6D4513C8A4054BEEC30F937F14BBE005BC4A141F_mC3E4D8B9B275315C3369194023ADC219C9BFA56B_inline (const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = UnsafeUtilityInternal_SizeOf_TisAlignOfHelper_1_tE0DC7EEADD8DE994397C46E4B7F6E4EC9FE4F669_m50F19243DCF7F556C625C9C7048E8BA7FDA09C6E_inline(NULL);
		int32_t L_1;
		L_1 = UnsafeUtilityInternal_SizeOf_TisUTriangle_t6D4513C8A4054BEEC30F937F14BBE005BC4A141F_m0E3277DA666E697D096F659128CBE7238C655CA3_inline(NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_AlignOf_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m5A04043858F190DDD4C4AB8C2C707306514BCA45_inline (const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = UnsafeUtilityInternal_SizeOf_TisAlignOfHelper_1_tA7BAD341B87833F98272549F84315FE63B02CC5A_m034AE7678181AD29323E752CCA82EDCFE2E3CAA0_inline(NULL);
		int32_t L_1;
		L_1 = UnsafeUtilityInternal_SizeOf_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m297C8507511B4B7C587AF49B53D880021418C5CC_inline(NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_AlignOf_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mA208BE87A87C101AE5CCF93D07CE98EF4B72BB9D_inline (const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = UnsafeUtilityInternal_SizeOf_TisAlignOfHelper_1_t26C526A4040EF3870B74BFD09D3768388C3BD773_mAA11ED5EDA264AB3B48690198F615B38D00FE294_inline(NULL);
		int32_t L_1;
		L_1 = UnsafeUtilityInternal_SizeOf_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m567C299D0E9EA26E8A3ADC4158D175D9F101BC1E_inline(NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_AlignOf_Tisdouble2_t2124FB15A5BDCC0BD48B80116D4B24DC9DCA9D83_m8D474CAB34FA5FB18D61421063147CE9793F0B05_inline (const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = UnsafeUtilityInternal_SizeOf_TisAlignOfHelper_1_tF31F09BEF44353E98923E6193CEADA52B8ED43D4_m29E0C0863AA5A2364C1F00FAEAD6CCEC94DA70FF_inline(NULL);
		int32_t L_1;
		L_1 = UnsafeUtilityInternal_SizeOf_Tisdouble2_t2124FB15A5BDCC0BD48B80116D4B24DC9DCA9D83_m96D588AB3F164F56BB1DE77BC435342E9F1BD745_inline(NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_AlignOf_Tisfloat2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5_mF5574E385BD8BFE25E8CE39CF6C0587EEB03EA32_inline (const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = UnsafeUtilityInternal_SizeOf_TisAlignOfHelper_1_t0C97FDE41871CAD34CA643C258038DE7C30AA460_mDA796E09ECCAD2EAEF6F0A2C1773617A9FBA6E6E_inline(NULL);
		int32_t L_1;
		L_1 = UnsafeUtilityInternal_SizeOf_Tisfloat2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5_mE64EA17FB7FE71E52F389B33C2AE7F4894B63B16_inline(NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_AlignOf_Tisint2_tB123E869131C6102341F8F9AA01726E0E7C2768D_m26EBC94AD0C3507224F27777BDABDC7B666D0880_inline (const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = UnsafeUtilityInternal_SizeOf_TisAlignOfHelper_1_t6ADF810505F028EA6EBCA5B664B68A8372696F9C_mAA91F87ABC1C69B33E87DD76C50A480D237F8B9A_inline(NULL);
		int32_t L_1;
		L_1 = UnsafeUtilityInternal_SizeOf_Tisint2_tB123E869131C6102341F8F9AA01726E0E7C2768D_mB216CE24697733053C38D23575F516F72C0E7F06_inline(NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_AlignOf_Tisint3_t18873F121F1EF24ECE875EAB01170B69E1B498C5_mBF5C30CFD8345346842446C6C9505350076D4166_inline (const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = UnsafeUtilityInternal_SizeOf_TisAlignOfHelper_1_t5DC854A29E0F5E52BA538EDE0BFDED0CC3F2B396_mB59C152F5426670D374DC720745E2F06FAADE0CA_inline(NULL);
		int32_t L_1;
		L_1 = UnsafeUtilityInternal_SizeOf_Tisint3_t18873F121F1EF24ECE875EAB01170B69E1B498C5_m8C0D64D09B9A2F8238A614656203048B06759A6B_inline(NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_AlignOf_Tisint4_t6DC3FEACC0DD1EAE4D5B897188E8D669BC4DAB90_mE9667172DCCAA2CC0371D40CBC26AD69CA73BE00_inline (const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = UnsafeUtilityInternal_SizeOf_TisAlignOfHelper_1_t3815CFB9721539E18DAC181E8DB449C4D3C731E3_m35ABFDD366C53EC12FEB57C526087B620B8844C2_inline(NULL);
		int32_t L_1;
		L_1 = UnsafeUtilityInternal_SizeOf_Tisint4_t6DC3FEACC0DD1EAE4D5B897188E8D669BC4DAB90_mA8C62CC9E230AC8C9856724F0AD3DB92EBABE192_inline(NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppFullySharedGenericAny* UnsafeUtilityInternal_As_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mE1CA751887466B801BE69083C2B0EA3EDE41FF9B_fshared_inline (Il2CppFullySharedGenericAny* ___0_from, const RuntimeMethod* method) 
{
	{
		Il2CppFullySharedGenericAny* L_0 = ___0_from;
		return (Il2CppFullySharedGenericAny*)(L_0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppFullySharedGenericStruct* UnsafeUtilityInternal_AsRef_TisIl2CppFullySharedGenericStruct_m4AE204964F54C3F7626BE47CADE4A52CF2797B6B_fshared_inline (void* ___0_ptr, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_ptr;
		return (Il2CppFullySharedGenericStruct*)(L_0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D UnsafeUtilityInternal_ReadArrayElement_TisBatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D_mDBEEA432305DC45F859549C5C3C2BC1AB641161C_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D L_6 = (*(BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)));
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 UnsafeUtilityInternal_ReadArrayElement_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_mFF2A9A45B70E41FC9F6A40A69B2C8E3BAF76360A_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_6 = (*(Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)));
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t UnsafeUtilityInternal_ReadArrayElement_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m215470D8CCA83493150D2E40676D8A40FCF722B0_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(uint8_t);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		uint8_t L_6 = (*(uint8_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)));
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppChar UnsafeUtilityInternal_ReadArrayElement_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m2FEACC2DB55AEEA0CA84FFD3CFC0DA3A103577EB_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(Il2CppChar);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		Il2CppChar L_6 = (*(Il2CppChar*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)));
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B UnsafeUtilityInternal_ReadArrayElement_TisContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B_mE64830E3E69DCC7AFC8FF6B0965DCA99D7390356_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B L_6 = (*(ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)));
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0 UnsafeUtilityInternal_ReadArrayElement_TisCullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0_m3DD623F7581DFB21C61537373F0F32050E5D8CFE_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0 L_6 = (*(CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)));
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double UnsafeUtilityInternal_ReadArrayElement_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m3153A5430B46A926C90C99ECC737289006BAB570_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(double);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		double L_6 = (*(double*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)));
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EmbeddedLODBuffer_t6D75CECAC228D0710132158E77ACB46D0C43027B UnsafeUtilityInternal_ReadArrayElement_TisEmbeddedLODBuffer_t6D75CECAC228D0710132158E77ACB46D0C43027B_mAAB0A3B6158D3A53128F92076405F23C82C562CA_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(EmbeddedLODBuffer_t6D75CECAC228D0710132158E77ACB46D0C43027B);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		EmbeddedLODBuffer_t6D75CECAC228D0710132158E77ACB46D0C43027B L_6 = (*(EmbeddedLODBuffer_t6D75CECAC228D0710132158E77ACB46D0C43027B*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)));
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 UnsafeUtilityInternal_ReadArrayElement_TisEntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8_mDC8A7125EE74C940B9F940440D412BA4B3A42575_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 L_6 = (*(EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)));
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GPUDrivenMeshData_t0D53E18AECCB1ED48149AFD77C12CF1624340C32 UnsafeUtilityInternal_ReadArrayElement_TisGPUDrivenMeshData_t0D53E18AECCB1ED48149AFD77C12CF1624340C32_m3AC186183B40DD72F475DEA5ABBA39D050266613_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(GPUDrivenMeshData_t0D53E18AECCB1ED48149AFD77C12CF1624340C32);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		GPUDrivenMeshData_t0D53E18AECCB1ED48149AFD77C12CF1624340C32 L_6 = (*(GPUDrivenMeshData_t0D53E18AECCB1ED48149AFD77C12CF1624340C32*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)));
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GPUDrivenSubMesh_t2D3B77E083A07816281294E54907E064B2A2A22B UnsafeUtilityInternal_ReadArrayElement_TisGPUDrivenSubMesh_t2D3B77E083A07816281294E54907E064B2A2A22B_mBF012366896A35F47863D2A27520F935DBDFADE0_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(GPUDrivenSubMesh_t2D3B77E083A07816281294E54907E064B2A2A22B);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		GPUDrivenSubMesh_t2D3B77E083A07816281294E54907E064B2A2A22B L_6 = (*(GPUDrivenSubMesh_t2D3B77E083A07816281294E54907E064B2A2A22B*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)));
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int16_t UnsafeUtilityInternal_ReadArrayElement_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mE907DE0EDCAAEB74B259B5022D1AC07C3FA77763_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(int16_t);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		int16_t L_6 = (*(int16_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)));
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_ReadArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m0B7B877C8F00DCC1C95D7124B3B0D83C6D492345_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(int32_t);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		int32_t L_6 = (*(int32_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)));
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t UnsafeUtilityInternal_ReadArrayElement_TisIntPtr_t_mC53DA66CA829ADB467A34898F82725DDA86091D6_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(intptr_t);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		intptr_t L_6 = (*(intptr_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)));
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InternalLODGroupSettings_t9F08C56422FEBE035004C6D96DE664DB1961F38D UnsafeUtilityInternal_ReadArrayElement_TisInternalLODGroupSettings_t9F08C56422FEBE035004C6D96DE664DB1961F38D_m9B17FB9991C066865590CE397EC91A2056D1089A_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(InternalLODGroupSettings_t9F08C56422FEBE035004C6D96DE664DB1961F38D);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		InternalLODGroupSettings_t9F08C56422FEBE035004C6D96DE664DB1961F38D L_6 = (*(InternalLODGroupSettings_t9F08C56422FEBE035004C6D96DE664DB1961F38D*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)));
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InternalMeshLodRendererSettings_t2B499712F80597BFB45A4813CC139D1BEEDEBB73 UnsafeUtilityInternal_ReadArrayElement_TisInternalMeshLodRendererSettings_t2B499712F80597BFB45A4813CC139D1BEEDEBB73_mE43484F89D326B2CFC50C120174997AB2082FBE0_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(InternalMeshLodRendererSettings_t2B499712F80597BFB45A4813CC139D1BEEDEBB73);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		InternalMeshLodRendererSettings_t2B499712F80597BFB45A4813CC139D1BEEDEBB73 L_6 = (*(InternalMeshLodRendererSettings_t2B499712F80597BFB45A4813CC139D1BEEDEBB73*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)));
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InternalMeshRendererSettings_tFA0423524032AD2C34E24C53548BE032F67FC6AF UnsafeUtilityInternal_ReadArrayElement_TisInternalMeshRendererSettings_tFA0423524032AD2C34E24C53548BE032F67FC6AF_m0FD7B9D7ECD3AD5A4D20DA6E6A0CF95AB3D75C46_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(InternalMeshRendererSettings_tFA0423524032AD2C34E24C53548BE032F67FC6AF);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		InternalMeshRendererSettings_tFA0423524032AD2C34E24C53548BE032F67FC6AF L_6 = (*(InternalMeshRendererSettings_tFA0423524032AD2C34E24C53548BE032F67FC6AF*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)));
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21 UnsafeUtilityInternal_ReadArrayElement_TisLightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21_m2B823F0822F76CA45530AD04A3D3DB110EC8259B_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21 L_6 = (*(LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)));
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 UnsafeUtilityInternal_ReadArrayElement_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_mDC2BC421E66DB6186E7ADB438406EB88CF637011_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_6 = (*(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)));
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960 UnsafeUtilityInternal_ReadArrayElement_TisModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960_m1967F25DC74B6E081724F2C2A8158CE6999A3F63_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(ModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		ModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960 L_6 = (*(ModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)));
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C UnsafeUtilityInternal_ReadArrayElement_TisPlane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C_mD0A53DDAFDC425AE7EEA283E95C48E3A414A87FD_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C L_6 = (*(Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)));
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 UnsafeUtilityInternal_ReadArrayElement_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m02B55D9C2BC9B83FDE111ACC6AC6826964D5E3D4_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = (*(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)));
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RangeInt_tDFBE4FD13857C11F21F7C3DA6B60D05341B67268 UnsafeUtilityInternal_ReadArrayElement_TisRangeInt_tDFBE4FD13857C11F21F7C3DA6B60D05341B67268_mA0E6724F3B2E9E09250FBC5091626A5CF5A6FF93_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(RangeInt_tDFBE4FD13857C11F21F7C3DA6B60D05341B67268);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		RangeInt_tDFBE4FD13857C11F21F7C3DA6B60D05341B67268 L_6 = (*(RangeInt_tDFBE4FD13857C11F21F7C3DA6B60D05341B67268*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)));
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float UnsafeUtilityInternal_ReadArrayElement_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mC8BDFAFE242DB675D668D2942EFD7CE36006251C_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(float);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		float L_6 = (*(float*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)));
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UEncroachingSegment_t3AE1B0B8E50020697D3FA3FFF0C86E406ABFA3C1 UnsafeUtilityInternal_ReadArrayElement_TisUEncroachingSegment_t3AE1B0B8E50020697D3FA3FFF0C86E406ABFA3C1_m8F5A17DAD42997B6D75E949B0FF9379B2D066CE2_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(UEncroachingSegment_t3AE1B0B8E50020697D3FA3FFF0C86E406ABFA3C1);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		UEncroachingSegment_t3AE1B0B8E50020697D3FA3FFF0C86E406ABFA3C1 L_6 = (*(UEncroachingSegment_t3AE1B0B8E50020697D3FA3FFF0C86E406ABFA3C1*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)));
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UEvent_t81CE84F34955D2A2DE962ADE28CDE659605FB2AC UnsafeUtilityInternal_ReadArrayElement_TisUEvent_t81CE84F34955D2A2DE962ADE28CDE659605FB2AC_mEE88732C7CB1E07F024B69DB93E5131352E8A1E7_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(UEvent_t81CE84F34955D2A2DE962ADE28CDE659605FB2AC);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		UEvent_t81CE84F34955D2A2DE962ADE28CDE659605FB2AC L_6 = (*(UEvent_t81CE84F34955D2A2DE962ADE28CDE659605FB2AC*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)));
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UHull_tBA3DC6A41F928298B0D924EDFE00150F307BA851 UnsafeUtilityInternal_ReadArrayElement_TisUHull_tBA3DC6A41F928298B0D924EDFE00150F307BA851_m8EB87859A6B1CDD9DD1729BB8913CB8985295847_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(UHull_tBA3DC6A41F928298B0D924EDFE00150F307BA851);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		UHull_tBA3DC6A41F928298B0D924EDFE00150F307BA851 L_6 = (*(UHull_tBA3DC6A41F928298B0D924EDFE00150F307BA851*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)));
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint16_t UnsafeUtilityInternal_ReadArrayElement_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m67997A9A0642E52B1CB9AD52C90FD98038221C0F_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(uint16_t);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		uint16_t L_6 = (*(uint16_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)));
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t UnsafeUtilityInternal_ReadArrayElement_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mAA4A4AC11C7C0784A0566FAE86EFBAD08CF4126D_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(uint32_t);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		uint32_t L_6 = (*(uint32_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)));
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t UnsafeUtilityInternal_ReadArrayElement_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mA5895D44428BCE7F38A3E30CA324F5E0E599364F_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(uint64_t);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		uint64_t L_6 = (*(uint64_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)));
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UStar_tF8CA0D7A7A3197E68176CA173B07251554C7465D UnsafeUtilityInternal_ReadArrayElement_TisUStar_tF8CA0D7A7A3197E68176CA173B07251554C7465D_m11B8FD36241682A117B1BD6EC4B1F4ED78B49B47_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(UStar_tF8CA0D7A7A3197E68176CA173B07251554C7465D);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		UStar_tF8CA0D7A7A3197E68176CA173B07251554C7465D L_6 = (*(UStar_tF8CA0D7A7A3197E68176CA173B07251554C7465D*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)));
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UTriangle_t6D4513C8A4054BEEC30F937F14BBE005BC4A141F UnsafeUtilityInternal_ReadArrayElement_TisUTriangle_t6D4513C8A4054BEEC30F937F14BBE005BC4A141F_mD9BEE07F15A62EDC899159691530AC27B6ABDAE2_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(UTriangle_t6D4513C8A4054BEEC30F937F14BBE005BC4A141F);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		UTriangle_t6D4513C8A4054BEEC30F937F14BBE005BC4A141F L_6 = (*(UTriangle_t6D4513C8A4054BEEC30F937F14BBE005BC4A141F*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)));
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 UnsafeUtilityInternal_ReadArrayElement_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m726E59AE606BDAEEA7E8DD67B5F69FD00875153F_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)));
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 UnsafeUtilityInternal_ReadArrayElement_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m4E48372E1097232C60446DED043FEC5C7A61C4B0_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_6 = (*(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)));
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double2_t2124FB15A5BDCC0BD48B80116D4B24DC9DCA9D83 UnsafeUtilityInternal_ReadArrayElement_Tisdouble2_t2124FB15A5BDCC0BD48B80116D4B24DC9DCA9D83_m40CEC3B3B74322BA7691BA450694C03DC4A1D452_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(double2_t2124FB15A5BDCC0BD48B80116D4B24DC9DCA9D83);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		double2_t2124FB15A5BDCC0BD48B80116D4B24DC9DCA9D83 L_6 = (*(double2_t2124FB15A5BDCC0BD48B80116D4B24DC9DCA9D83*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)));
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5 UnsafeUtilityInternal_ReadArrayElement_Tisfloat2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5_mAA646CC2B25329E898077679928AB15DE9BC865E_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(float2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		float2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5 L_6 = (*(float2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)));
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int2_tB123E869131C6102341F8F9AA01726E0E7C2768D UnsafeUtilityInternal_ReadArrayElement_Tisint2_tB123E869131C6102341F8F9AA01726E0E7C2768D_m331A9772A1384E1911C59CDE98F9366F81EED2C7_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(int2_tB123E869131C6102341F8F9AA01726E0E7C2768D);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		int2_tB123E869131C6102341F8F9AA01726E0E7C2768D L_6 = (*(int2_tB123E869131C6102341F8F9AA01726E0E7C2768D*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)));
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int3_t18873F121F1EF24ECE875EAB01170B69E1B498C5 UnsafeUtilityInternal_ReadArrayElement_Tisint3_t18873F121F1EF24ECE875EAB01170B69E1B498C5_mBD52AD6E8736CB48656CFA0961D93E411266B81E_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(int3_t18873F121F1EF24ECE875EAB01170B69E1B498C5);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		int3_t18873F121F1EF24ECE875EAB01170B69E1B498C5 L_6 = (*(int3_t18873F121F1EF24ECE875EAB01170B69E1B498C5*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)));
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int4_t6DC3FEACC0DD1EAE4D5B897188E8D669BC4DAB90 UnsafeUtilityInternal_ReadArrayElement_Tisint4_t6DC3FEACC0DD1EAE4D5B897188E8D669BC4DAB90_m776429375A9EF46AD949435543FDD0C5676070AC_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(int4_t6DC3FEACC0DD1EAE4D5B897188E8D669BC4DAB90);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		int4_t6DC3FEACC0DD1EAE4D5B897188E8D669BC4DAB90 L_6 = (*(int4_t6DC3FEACC0DD1EAE4D5B897188E8D669BC4DAB90*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)));
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_ReadArrayElementWithStride_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m142239EC03EF551AAC70809189D5B14C59260A72_inline (void* ___0_source, int32_t ___1_index, int32_t ___2_stride, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		int32_t L_3 = ___2_stride;
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		int32_t L_6 = (*(int32_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)));
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisBatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D_m439E4115054F2F7F3DFE86DEAEF565B37F9DA51F_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_m1B3257CEE82ED08641AFCA4D9B2ACBC96222B922_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m485E79FA6794AD30B29C6414A85A867DF156E5E1_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(uint8_t);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m2DB960E4C25CE2F72A3A1ABC302E23F0963089F5_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(Il2CppChar);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B_m409346A2C7D4615BB703F2802A6B9E12650CDB39_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisCullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0_m445C79CB5CEFFE71D2530C3CACDBC4B8D3A9D0A9_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisEmbeddedLODBuffer_t6D75CECAC228D0710132158E77ACB46D0C43027B_mA1468D24A7B620A10E023979868C9D1EE2D5DE69_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(EmbeddedLODBuffer_t6D75CECAC228D0710132158E77ACB46D0C43027B);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisEntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8_mD1B0EBD0B43B19830ED5B0A121221D27AA0B963E_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisGPUDrivenMeshData_t0D53E18AECCB1ED48149AFD77C12CF1624340C32_mAC88D9A89F4AD39D5BDA8F3FF5419977CDCCC3E3_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(GPUDrivenMeshData_t0D53E18AECCB1ED48149AFD77C12CF1624340C32);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisGPUDrivenSubMesh_t2D3B77E083A07816281294E54907E064B2A2A22B_m90E80C680B80CD82EB5839F5DDE33F22BFBF18D1_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(GPUDrivenSubMesh_t2D3B77E083A07816281294E54907E064B2A2A22B);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m8EC54AD1BB1FFE52E59D872A1F83666DD9D381AA_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(int16_t);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mA24CDBA02971DC06DEDE40B17E72F8C262B6B131_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(int32_t);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisIntPtr_t_mF9218FE174B91F132731D032A744AFC048AFB932_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(intptr_t);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisInternalLODGroupSettings_t9F08C56422FEBE035004C6D96DE664DB1961F38D_m7042BFD95CFAA71CA1DD3DB939DB030B0656C6D2_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(InternalLODGroupSettings_t9F08C56422FEBE035004C6D96DE664DB1961F38D);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisInternalMeshLodRendererSettings_t2B499712F80597BFB45A4813CC139D1BEEDEBB73_m00E1BE18CB920FCCCBFE7C2C4A1BF8BA0A7EFECF_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(InternalMeshLodRendererSettings_t2B499712F80597BFB45A4813CC139D1BEEDEBB73);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisInternalMeshRendererSettings_tFA0423524032AD2C34E24C53548BE032F67FC6AF_mFB035E1C19B4E54280B4B9D660EDA3A8A086CAF6_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(InternalMeshRendererSettings_tFA0423524032AD2C34E24C53548BE032F67FC6AF);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisLightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21_mF4E7699562D0DD8909029C23414C07C41E83166C_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_m310E3F9A8E091DFAB070D735691100178B15463B_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960_m4FA6D33FFCEC8031D4883ABCA5ED229D28E44D80_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(ModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisPlane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C_m289C662F3DEC8A9CACB14474D55B65B1E5E1AE84_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_mA10F583A957D150C530045E8E0C54DD2A4D96489_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisRangeInt_tDFBE4FD13857C11F21F7C3DA6B60D05341B67268_m462940FF70DE74B43CFAFE2670B4A652829BDF3F_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(RangeInt_tDFBE4FD13857C11F21F7C3DA6B60D05341B67268);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m2379B61902CFDAAAE7E5BE25FDA4BBBBF7E54273_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(float);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisUEncroachingSegment_t3AE1B0B8E50020697D3FA3FFF0C86E406ABFA3C1_m78BC20EBEDF9DDD29C261AACF9F19965B5A49C92_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(UEncroachingSegment_t3AE1B0B8E50020697D3FA3FFF0C86E406ABFA3C1);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisUEvent_t81CE84F34955D2A2DE962ADE28CDE659605FB2AC_mD7804F40606876E9729617E9761E42F9D6056B26_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(UEvent_t81CE84F34955D2A2DE962ADE28CDE659605FB2AC);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisUHull_tBA3DC6A41F928298B0D924EDFE00150F307BA851_mDB23A7351A2DB7A69197EC17A28401C3A9B4DA98_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(UHull_tBA3DC6A41F928298B0D924EDFE00150F307BA851);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mB21F3357E1DB01146285E803CB68EE945ADA7149_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(uint16_t);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m483305F08D432A8FC41A6E11289383D1E2C3E8AE_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(uint32_t);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mAA2B8333B77A7410376516B6E13FCC02AEE6A5AC_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(uint64_t);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisUStar_tF8CA0D7A7A3197E68176CA173B07251554C7465D_m87DD2D062338C42E1537725895679ED703A237D3_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(UStar_tF8CA0D7A7A3197E68176CA173B07251554C7465D);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisUTriangle_t6D4513C8A4054BEEC30F937F14BBE005BC4A141F_m0E3277DA666E697D096F659128CBE7238C655CA3_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(UTriangle_t6D4513C8A4054BEEC30F937F14BBE005BC4A141F);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m297C8507511B4B7C587AF49B53D880021418C5CC_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m567C299D0E9EA26E8A3ADC4158D175D9F101BC1E_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_Tisdouble2_t2124FB15A5BDCC0BD48B80116D4B24DC9DCA9D83_m96D588AB3F164F56BB1DE77BC435342E9F1BD745_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(double2_t2124FB15A5BDCC0BD48B80116D4B24DC9DCA9D83);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_Tisfloat2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5_mE64EA17FB7FE71E52F389B33C2AE7F4894B63B16_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(float2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_Tisint2_tB123E869131C6102341F8F9AA01726E0E7C2768D_mB216CE24697733053C38D23575F516F72C0E7F06_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(int2_tB123E869131C6102341F8F9AA01726E0E7C2768D);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_Tisint3_t18873F121F1EF24ECE875EAB01170B69E1B498C5_m8C0D64D09B9A2F8238A614656203048B06759A6B_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(int3_t18873F121F1EF24ECE875EAB01170B69E1B498C5);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_Tisint4_t6DC3FEACC0DD1EAE4D5B897188E8D669BC4DAB90_mA8C62CC9E230AC8C9856724F0AD3DB92EBABE192_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(int4_t6DC3FEACC0DD1EAE4D5B897188E8D669BC4DAB90);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtilityInternal_WriteArrayElement_TisBatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D_m8F2F55BA88BD7D9AE44C0AEDE2832F7B5D1F35B6_inline (void* ___0_destination, int32_t ___1_index, BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D L_6 = ___2_value;
		*(BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)) = L_6;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtilityInternal_WriteArrayElement_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_m2A0F09E085DD77128506415E87841F78B28A6C54_inline (void* ___0_destination, int32_t ___1_index, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_6 = ___2_value;
		*(Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)) = L_6;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtilityInternal_WriteArrayElement_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m5BCA8D074309F3B46CEC7FD68ED40110FC26ADB7_inline (void* ___0_destination, int32_t ___1_index, uint8_t ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(uint8_t);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		uint8_t L_6 = ___2_value;
		*(uint8_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)) = L_6;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtilityInternal_WriteArrayElement_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mD1BA031E3E1E75F3DE14D24A768757C9E12F51CD_inline (void* ___0_destination, int32_t ___1_index, Il2CppChar ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(Il2CppChar);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		Il2CppChar L_6 = ___2_value;
		*(Il2CppChar*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)) = L_6;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtilityInternal_WriteArrayElement_TisContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B_mE39132565475093BAD090E92CA932991E46BC595_inline (void* ___0_destination, int32_t ___1_index, ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B L_6 = ___2_value;
		*(ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)) = L_6;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtilityInternal_WriteArrayElement_TisCullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0_m384FBBC6F8F5110A48E4143C7F675776EA47445F_inline (void* ___0_destination, int32_t ___1_index, CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0 ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0 L_6 = ___2_value;
		*(CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)) = L_6;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtilityInternal_WriteArrayElement_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_mC2A7BB5CE0978BC539FB52E5326DA5A704553463_inline (void* ___0_destination, int32_t ___1_index, double ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(double);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		double L_6 = ___2_value;
		*(double*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)) = L_6;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtilityInternal_WriteArrayElement_TisEmbeddedLODBuffer_t6D75CECAC228D0710132158E77ACB46D0C43027B_m51B6E5CA111B53732375EAEACEAAA619F6649872_inline (void* ___0_destination, int32_t ___1_index, EmbeddedLODBuffer_t6D75CECAC228D0710132158E77ACB46D0C43027B ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(EmbeddedLODBuffer_t6D75CECAC228D0710132158E77ACB46D0C43027B);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		EmbeddedLODBuffer_t6D75CECAC228D0710132158E77ACB46D0C43027B L_6 = ___2_value;
		*(EmbeddedLODBuffer_t6D75CECAC228D0710132158E77ACB46D0C43027B*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)) = L_6;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtilityInternal_WriteArrayElement_TisEntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8_m9C0FADCA718C9341E229CEE17C8FE4855AC72880_inline (void* ___0_destination, int32_t ___1_index, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 L_6 = ___2_value;
		*(EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)) = L_6;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtilityInternal_WriteArrayElement_TisGPUDrivenMeshData_t0D53E18AECCB1ED48149AFD77C12CF1624340C32_m8D30843628A1D5617028C57F54F533476754764A_inline (void* ___0_destination, int32_t ___1_index, GPUDrivenMeshData_t0D53E18AECCB1ED48149AFD77C12CF1624340C32 ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(GPUDrivenMeshData_t0D53E18AECCB1ED48149AFD77C12CF1624340C32);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		GPUDrivenMeshData_t0D53E18AECCB1ED48149AFD77C12CF1624340C32 L_6 = ___2_value;
		*(GPUDrivenMeshData_t0D53E18AECCB1ED48149AFD77C12CF1624340C32*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)) = L_6;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtilityInternal_WriteArrayElement_TisGPUDrivenSubMesh_t2D3B77E083A07816281294E54907E064B2A2A22B_mD11C11FD5E761DB5DFA854AE4BAD7EC7255AE737_inline (void* ___0_destination, int32_t ___1_index, GPUDrivenSubMesh_t2D3B77E083A07816281294E54907E064B2A2A22B ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(GPUDrivenSubMesh_t2D3B77E083A07816281294E54907E064B2A2A22B);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		GPUDrivenSubMesh_t2D3B77E083A07816281294E54907E064B2A2A22B L_6 = ___2_value;
		*(GPUDrivenSubMesh_t2D3B77E083A07816281294E54907E064B2A2A22B*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)) = L_6;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtilityInternal_WriteArrayElement_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m98F5668334FA5D7DC5943C2EF4820057B8FA3AC8_inline (void* ___0_destination, int32_t ___1_index, int16_t ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(int16_t);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		int16_t L_6 = ___2_value;
		*(int16_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)) = L_6;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtilityInternal_WriteArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m6CE8AF6F42FA98657985C680DB85747DAC856E2F_inline (void* ___0_destination, int32_t ___1_index, int32_t ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(int32_t);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		int32_t L_6 = ___2_value;
		*(int32_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)) = L_6;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtilityInternal_WriteArrayElement_TisIntPtr_t_mD032891DCCD5A38294F51BAEEA8BFAA62B8557FB_inline (void* ___0_destination, int32_t ___1_index, intptr_t ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(intptr_t);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		intptr_t L_6 = ___2_value;
		*(intptr_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)) = L_6;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtilityInternal_WriteArrayElement_TisInternalLODGroupSettings_t9F08C56422FEBE035004C6D96DE664DB1961F38D_m8A735DF8D46F26149043C87F203926540BC1E6B8_inline (void* ___0_destination, int32_t ___1_index, InternalLODGroupSettings_t9F08C56422FEBE035004C6D96DE664DB1961F38D ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(InternalLODGroupSettings_t9F08C56422FEBE035004C6D96DE664DB1961F38D);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		InternalLODGroupSettings_t9F08C56422FEBE035004C6D96DE664DB1961F38D L_6 = ___2_value;
		*(InternalLODGroupSettings_t9F08C56422FEBE035004C6D96DE664DB1961F38D*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)) = L_6;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtilityInternal_WriteArrayElement_TisInternalMeshLodRendererSettings_t2B499712F80597BFB45A4813CC139D1BEEDEBB73_mD92C129429E118347DCE3E80F61ABED812BB3713_inline (void* ___0_destination, int32_t ___1_index, InternalMeshLodRendererSettings_t2B499712F80597BFB45A4813CC139D1BEEDEBB73 ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(InternalMeshLodRendererSettings_t2B499712F80597BFB45A4813CC139D1BEEDEBB73);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		InternalMeshLodRendererSettings_t2B499712F80597BFB45A4813CC139D1BEEDEBB73 L_6 = ___2_value;
		*(InternalMeshLodRendererSettings_t2B499712F80597BFB45A4813CC139D1BEEDEBB73*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)) = L_6;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtilityInternal_WriteArrayElement_TisInternalMeshRendererSettings_tFA0423524032AD2C34E24C53548BE032F67FC6AF_m7A4D40E228244C59345E45676D4CC8348B83617A_inline (void* ___0_destination, int32_t ___1_index, InternalMeshRendererSettings_tFA0423524032AD2C34E24C53548BE032F67FC6AF ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(InternalMeshRendererSettings_tFA0423524032AD2C34E24C53548BE032F67FC6AF);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		InternalMeshRendererSettings_tFA0423524032AD2C34E24C53548BE032F67FC6AF L_6 = ___2_value;
		*(InternalMeshRendererSettings_tFA0423524032AD2C34E24C53548BE032F67FC6AF*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)) = L_6;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtilityInternal_WriteArrayElement_TisLightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21_m214EFE079E3D95383C08945E8BAFA5E3C3FAA190_inline (void* ___0_destination, int32_t ___1_index, LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21 ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21 L_6 = ___2_value;
		*(LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)) = L_6;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtilityInternal_WriteArrayElement_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_mA93DE94079CF55B4D3FB32AE0780DF796C3CCA47_inline (void* ___0_destination, int32_t ___1_index, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_6 = ___2_value;
		*(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)) = L_6;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtilityInternal_WriteArrayElement_TisModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960_m6B028924EA3CC36810A213B16F58DE31DE31687E_inline (void* ___0_destination, int32_t ___1_index, ModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960 ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(ModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		ModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960 L_6 = ___2_value;
		*(ModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)) = L_6;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtilityInternal_WriteArrayElement_TisPlane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C_mBE119E8ABAF3D83B9A393B7004C208DF31E4901C_inline (void* ___0_destination, int32_t ___1_index, Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C L_6 = ___2_value;
		*(Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)) = L_6;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtilityInternal_WriteArrayElement_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m9F92E74FB0AAD0FC40CC4DE76AF4BBA2C47C88D6_inline (void* ___0_destination, int32_t ___1_index, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = ___2_value;
		*(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)) = L_6;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtilityInternal_WriteArrayElement_TisRangeInt_tDFBE4FD13857C11F21F7C3DA6B60D05341B67268_m8A51075F082D2E4A1FB053EA92EB0FC37CAE35EA_inline (void* ___0_destination, int32_t ___1_index, RangeInt_tDFBE4FD13857C11F21F7C3DA6B60D05341B67268 ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(RangeInt_tDFBE4FD13857C11F21F7C3DA6B60D05341B67268);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		RangeInt_tDFBE4FD13857C11F21F7C3DA6B60D05341B67268 L_6 = ___2_value;
		*(RangeInt_tDFBE4FD13857C11F21F7C3DA6B60D05341B67268*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)) = L_6;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtilityInternal_WriteArrayElement_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7871DE4308B379F2F32315380DA04C05F11DA13F_inline (void* ___0_destination, int32_t ___1_index, float ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(float);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		float L_6 = ___2_value;
		*(float*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)) = L_6;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtilityInternal_WriteArrayElement_TisUEncroachingSegment_t3AE1B0B8E50020697D3FA3FFF0C86E406ABFA3C1_mE2BF625B742B08C6B1C2B768BD2C6B56E8FCF9FA_inline (void* ___0_destination, int32_t ___1_index, UEncroachingSegment_t3AE1B0B8E50020697D3FA3FFF0C86E406ABFA3C1 ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(UEncroachingSegment_t3AE1B0B8E50020697D3FA3FFF0C86E406ABFA3C1);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		UEncroachingSegment_t3AE1B0B8E50020697D3FA3FFF0C86E406ABFA3C1 L_6 = ___2_value;
		*(UEncroachingSegment_t3AE1B0B8E50020697D3FA3FFF0C86E406ABFA3C1*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)) = L_6;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtilityInternal_WriteArrayElement_TisUEvent_t81CE84F34955D2A2DE962ADE28CDE659605FB2AC_m2FBE2FA3BBCE3FB77BD4AE0019762C8453B4C17B_inline (void* ___0_destination, int32_t ___1_index, UEvent_t81CE84F34955D2A2DE962ADE28CDE659605FB2AC ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(UEvent_t81CE84F34955D2A2DE962ADE28CDE659605FB2AC);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		UEvent_t81CE84F34955D2A2DE962ADE28CDE659605FB2AC L_6 = ___2_value;
		*(UEvent_t81CE84F34955D2A2DE962ADE28CDE659605FB2AC*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)) = L_6;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtilityInternal_WriteArrayElement_TisUHull_tBA3DC6A41F928298B0D924EDFE00150F307BA851_m80FE70456505C6177FDF18C114A5896234C5A46A_inline (void* ___0_destination, int32_t ___1_index, UHull_tBA3DC6A41F928298B0D924EDFE00150F307BA851 ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(UHull_tBA3DC6A41F928298B0D924EDFE00150F307BA851);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		UHull_tBA3DC6A41F928298B0D924EDFE00150F307BA851 L_6 = ___2_value;
		*(UHull_tBA3DC6A41F928298B0D924EDFE00150F307BA851*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)) = L_6;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtilityInternal_WriteArrayElement_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m8096FCC44AAECDAC8F7011A27B6D4B6745A539CE_inline (void* ___0_destination, int32_t ___1_index, uint16_t ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(uint16_t);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		uint16_t L_6 = ___2_value;
		*(uint16_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)) = L_6;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtilityInternal_WriteArrayElement_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m2A3A6B90150B69BBDEE5319C3CE02AF8B872B64B_inline (void* ___0_destination, int32_t ___1_index, uint32_t ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(uint32_t);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		uint32_t L_6 = ___2_value;
		*(uint32_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)) = L_6;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtilityInternal_WriteArrayElement_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mC71868C665A692778D508E69E8AF1A631E0CD348_inline (void* ___0_destination, int32_t ___1_index, uint64_t ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(uint64_t);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		uint64_t L_6 = ___2_value;
		*(uint64_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)) = L_6;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtilityInternal_WriteArrayElement_TisUStar_tF8CA0D7A7A3197E68176CA173B07251554C7465D_m5EA80C1639D238E594564D9B622DF4CCE1141D4B_inline (void* ___0_destination, int32_t ___1_index, UStar_tF8CA0D7A7A3197E68176CA173B07251554C7465D ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(UStar_tF8CA0D7A7A3197E68176CA173B07251554C7465D);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		UStar_tF8CA0D7A7A3197E68176CA173B07251554C7465D L_6 = ___2_value;
		*(UStar_tF8CA0D7A7A3197E68176CA173B07251554C7465D*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)) = L_6;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtilityInternal_WriteArrayElement_TisUTriangle_t6D4513C8A4054BEEC30F937F14BBE005BC4A141F_m6A69EFB7BEE099EB16798F6EA62AC3C8612E49D0_inline (void* ___0_destination, int32_t ___1_index, UTriangle_t6D4513C8A4054BEEC30F937F14BBE005BC4A141F ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(UTriangle_t6D4513C8A4054BEEC30F937F14BBE005BC4A141F);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		UTriangle_t6D4513C8A4054BEEC30F937F14BBE005BC4A141F L_6 = ___2_value;
		*(UTriangle_t6D4513C8A4054BEEC30F937F14BBE005BC4A141F*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)) = L_6;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtilityInternal_WriteArrayElement_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m4DC28ACC65CD91D06E733BEA0BC919D23DF3D7E4_inline (void* ___0_destination, int32_t ___1_index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___2_value;
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)) = L_6;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtilityInternal_WriteArrayElement_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mA724E762E40FA0C9F59E22D26CD7760418780D94_inline (void* ___0_destination, int32_t ___1_index, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_6 = ___2_value;
		*(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)) = L_6;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtilityInternal_WriteArrayElement_Tisdouble2_t2124FB15A5BDCC0BD48B80116D4B24DC9DCA9D83_mF7835C7C0CCCC6506483D47D9F965AE133A2580A_inline (void* ___0_destination, int32_t ___1_index, double2_t2124FB15A5BDCC0BD48B80116D4B24DC9DCA9D83 ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(double2_t2124FB15A5BDCC0BD48B80116D4B24DC9DCA9D83);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		double2_t2124FB15A5BDCC0BD48B80116D4B24DC9DCA9D83 L_6 = ___2_value;
		*(double2_t2124FB15A5BDCC0BD48B80116D4B24DC9DCA9D83*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)) = L_6;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtilityInternal_WriteArrayElement_Tisfloat2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5_m394E812F3E02FCD362EB8DCBF0A7D112DBBE9DA3_inline (void* ___0_destination, int32_t ___1_index, float2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5 ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(float2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		float2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5 L_6 = ___2_value;
		*(float2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)) = L_6;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtilityInternal_WriteArrayElement_Tisint2_tB123E869131C6102341F8F9AA01726E0E7C2768D_mE5E734E01AED08F1ED47485C1721B5B1331B0A58_inline (void* ___0_destination, int32_t ___1_index, int2_tB123E869131C6102341F8F9AA01726E0E7C2768D ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(int2_tB123E869131C6102341F8F9AA01726E0E7C2768D);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		int2_tB123E869131C6102341F8F9AA01726E0E7C2768D L_6 = ___2_value;
		*(int2_tB123E869131C6102341F8F9AA01726E0E7C2768D*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)) = L_6;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtilityInternal_WriteArrayElement_Tisint3_t18873F121F1EF24ECE875EAB01170B69E1B498C5_m3A3B9DFD873633E9078206152E40D232B1B0F8D2_inline (void* ___0_destination, int32_t ___1_index, int3_t18873F121F1EF24ECE875EAB01170B69E1B498C5 ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(int3_t18873F121F1EF24ECE875EAB01170B69E1B498C5);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		int3_t18873F121F1EF24ECE875EAB01170B69E1B498C5 L_6 = ___2_value;
		*(int3_t18873F121F1EF24ECE875EAB01170B69E1B498C5*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)) = L_6;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtilityInternal_WriteArrayElement_Tisint4_t6DC3FEACC0DD1EAE4D5B897188E8D669BC4DAB90_mBFAF687EB944C031EFE295967D340706BA7A8F57_inline (void* ___0_destination, int32_t ___1_index, int4_t6DC3FEACC0DD1EAE4D5B897188E8D669BC4DAB90 ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(int4_t6DC3FEACC0DD1EAE4D5B897188E8D669BC4DAB90);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		int4_t6DC3FEACC0DD1EAE4D5B897188E8D669BC4DAB90 L_6 = ___2_value;
		*(int4_t6DC3FEACC0DD1EAE4D5B897188E8D669BC4DAB90*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)) = L_6;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtilityInternal_WriteArrayElementWithStride_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m46E20F2BBF8564E1BC4A202FE67CCEC245A13E11_inline (void* ___0_destination, int32_t ___1_index, int32_t ___2_stride, int32_t ___3_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		int32_t L_3 = ___2_stride;
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		int32_t L_6 = ___3_value;
		*(int32_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)) = L_6;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisAlignOfHelper_1_tBEA2F557D94117D6B5CA3D54DEA10F7A2F5AF996_mC0091F1B9C9C5F6FE2EF40A40286F792951D680B_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_tBEA2F557D94117D6B5CA3D54DEA10F7A2F5AF996);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisAlignOfHelper_1_t34CCC6CF432525FDD94891D4DAFB9DB74F9AF3E9_m8E01215ECE32A86C1F6BEBD206783D5863BE3102_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t34CCC6CF432525FDD94891D4DAFB9DB74F9AF3E9);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisAlignOfHelper_1_tAF795AF837E3C37401B92C7483D74A4E5145DB4D_m8CB43E8118CC0E65E6E8130381DEB11701F21848_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_tAF795AF837E3C37401B92C7483D74A4E5145DB4D);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisAlignOfHelper_1_tB21BA45542E8060FB85BA02002482499EBFA00A2_mA1D5B3481244A0872D4C4419C5C507BC5C9CA1A4_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_tB21BA45542E8060FB85BA02002482499EBFA00A2);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisAlignOfHelper_1_t08A14D9ACB4D26ACA71BCA57DAB866764B883825_m234350549A466D387273283CD034377BA980C785_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t08A14D9ACB4D26ACA71BCA57DAB866764B883825);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisAlignOfHelper_1_tF6B6CAC1AFD67E6448C9B177EA1734D57E3BCDA2_mF17960322FD73F94C5B1EA66A15A812107E8E26C_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_tF6B6CAC1AFD67E6448C9B177EA1734D57E3BCDA2);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisAlignOfHelper_1_tFC537E4E3FE3F7962CBC5F219276522C16824ACF_m6ED1AB2C11E9DEA8670BFFABDB8A999E66D4460D_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_tFC537E4E3FE3F7962CBC5F219276522C16824ACF);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisAlignOfHelper_1_tCD4B08DBB915013B12E50DA43CE11B02B0D135DD_m5CB9D53CC2151EBA31EE911F86BF64236024C41B_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_tCD4B08DBB915013B12E50DA43CE11B02B0D135DD);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisAlignOfHelper_1_t398568B8BA5FC2BA68E01C861AA1BEDC4750E61D_m5F14358FA8512CD3007A89FBBF226B14ECA4C00B_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t398568B8BA5FC2BA68E01C861AA1BEDC4750E61D);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisAlignOfHelper_1_t9B8325E941D53AE21ECA21E2996411A52D0F8663_m70AC25EBFF484644D693343C24F146A8528614C8_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t9B8325E941D53AE21ECA21E2996411A52D0F8663);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisAlignOfHelper_1_t2B1B6F8C95D259E66B253A1C059AE8D3365B528E_m9653BC5706AAE6334C692185FFA0519BD7824CB3_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t2B1B6F8C95D259E66B253A1C059AE8D3365B528E);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisAlignOfHelper_1_t676424B8757032427D7761BC732079DC7512D8AE_mB243DC326B2D814D1A62FDABCC2F2AA541A8C895_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t676424B8757032427D7761BC732079DC7512D8AE);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisAlignOfHelper_1_t1C2506D8F2F53BF0A585917F05CD8BC880EBB752_m6197C4317CE4E01732509D53E08172FEA65ED04E_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t1C2506D8F2F53BF0A585917F05CD8BC880EBB752);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisAlignOfHelper_1_tCFC8A208D36EA414B14215D004A770AEC0DB8BA2_m88DBA349C0FF85634217C1CB08E8DB162E461E71_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_tCFC8A208D36EA414B14215D004A770AEC0DB8BA2);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisAlignOfHelper_1_t1A20691B0774E0EFBEAD966FB0B480A553DCF42E_m2B08131E6C67851405962CD6DF12CF465931B858_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t1A20691B0774E0EFBEAD966FB0B480A553DCF42E);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisAlignOfHelper_1_t6F2F300ADF773C90F661FF403B84D167EB793773_m69F6C16E7F867D1C227B7289CE495CC095EC7AD0_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t6F2F300ADF773C90F661FF403B84D167EB793773);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisAlignOfHelper_1_tF9C3457088E3B293794AA641A2261DD4B6D5B57A_m58FF4964D2CAEB4EFC416B1E0FDFD6E9705F3143_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_tF9C3457088E3B293794AA641A2261DD4B6D5B57A);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisAlignOfHelper_1_t6C24EA77B111E6877D279F01810C1D4E13534301_m65D985DC623EBE012CF7CAE94EF2DFEF1B8A3243_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t6C24EA77B111E6877D279F01810C1D4E13534301);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisAlignOfHelper_1_tF3D321A7435452B0B749AF58D2CF8AB1865BC52C_m1CAC82495552B9A4A605EEA04EA097B8AF87C8C2_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_tF3D321A7435452B0B749AF58D2CF8AB1865BC52C);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisAlignOfHelper_1_t4257D6924487B14B176AB4C639F1251F2E4ED1C6_mDDF1DABCBD0F4009518CE893AD84E6078D170199_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t4257D6924487B14B176AB4C639F1251F2E4ED1C6);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisAlignOfHelper_1_tE6A7C0BC2AB9B74FA79F8449B8FA1BC94A474BC4_m19212FA6DC039BBDFD64B28E598F6264D54DB691_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_tE6A7C0BC2AB9B74FA79F8449B8FA1BC94A474BC4);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisAlignOfHelper_1_t151A1BD8ECCDCBCF3185238615804E396C3B07A5_mC4112DF120EBF605C8F77839E842177AF068D44E_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t151A1BD8ECCDCBCF3185238615804E396C3B07A5);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisAlignOfHelper_1_t25880EEE885729199077AC19774C8BE13323D4B4_m19CE06B2A77B620A1DE800E56AFEE3A5616E99E6_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t25880EEE885729199077AC19774C8BE13323D4B4);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisAlignOfHelper_1_t3FE2545879EC19D84F399DE73EA83AAEDEA14C9D_m22F628ADD6E12980B394B9237C61AB0C95E1EC1C_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t3FE2545879EC19D84F399DE73EA83AAEDEA14C9D);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisAlignOfHelper_1_t054F2568D7C1097239A28CF25D80D8353E29BB37_m120CCD2A94A7B51A2631C5630A9E505F1DDB1CD7_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t054F2568D7C1097239A28CF25D80D8353E29BB37);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisAlignOfHelper_1_t0280929E6B4134EE85E97F8BFC283CFB4C7BC056_m24D80B10C7527E88ECD7E5C10731C7F1663E2C27_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t0280929E6B4134EE85E97F8BFC283CFB4C7BC056);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisAlignOfHelper_1_t70E1FB13BE93757804A731D115FA219AE664F9B9_mE690DD75A3C952CEDEB71F13B96E603904A60567_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t70E1FB13BE93757804A731D115FA219AE664F9B9);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisAlignOfHelper_1_tF3C6E1F1F032602FD9777BBE4466632711C12DC3_m936B8B899C03B9C80AA39CD231B892274340136D_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_tF3C6E1F1F032602FD9777BBE4466632711C12DC3);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisAlignOfHelper_1_tE21040F72E90527C319FF9B07B398E23DF95BE2E_m2D3BC72BBF45866A72C7ADF31F40AEFC56BBD498_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_tE21040F72E90527C319FF9B07B398E23DF95BE2E);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisAlignOfHelper_1_t9E9A73E6B25DCBB1356ABAF5D5F64CEB912639E5_m6333413607F97523DA83C70DA244CCE8E0B50D8E_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t9E9A73E6B25DCBB1356ABAF5D5F64CEB912639E5);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisAlignOfHelper_1_tE0DC7EEADD8DE994397C46E4B7F6E4EC9FE4F669_m50F19243DCF7F556C625C9C7048E8BA7FDA09C6E_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_tE0DC7EEADD8DE994397C46E4B7F6E4EC9FE4F669);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisAlignOfHelper_1_tA7BAD341B87833F98272549F84315FE63B02CC5A_m034AE7678181AD29323E752CCA82EDCFE2E3CAA0_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_tA7BAD341B87833F98272549F84315FE63B02CC5A);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisAlignOfHelper_1_t26C526A4040EF3870B74BFD09D3768388C3BD773_mAA11ED5EDA264AB3B48690198F615B38D00FE294_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t26C526A4040EF3870B74BFD09D3768388C3BD773);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisAlignOfHelper_1_tF31F09BEF44353E98923E6193CEADA52B8ED43D4_m29E0C0863AA5A2364C1F00FAEAD6CCEC94DA70FF_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_tF31F09BEF44353E98923E6193CEADA52B8ED43D4);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisAlignOfHelper_1_t0C97FDE41871CAD34CA643C258038DE7C30AA460_mDA796E09ECCAD2EAEF6F0A2C1773617A9FBA6E6E_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t0C97FDE41871CAD34CA643C258038DE7C30AA460);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisAlignOfHelper_1_t6ADF810505F028EA6EBCA5B664B68A8372696F9C_mAA91F87ABC1C69B33E87DD76C50A480D237F8B9A_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t6ADF810505F028EA6EBCA5B664B68A8372696F9C);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisAlignOfHelper_1_t5DC854A29E0F5E52BA538EDE0BFDED0CC3F2B396_mB59C152F5426670D374DC720745E2F06FAADE0CA_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t5DC854A29E0F5E52BA538EDE0BFDED0CC3F2B396);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisAlignOfHelper_1_t3815CFB9721539E18DAC181E8DB449C4D3C731E3_m35ABFDD366C53EC12FEB57C526087B620B8844C2_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t3815CFB9721539E18DAC181E8DB449C4D3C731E3);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 Vector_1_Equals_m6F913845CB1E8A1A753B3C187A8EB840C36F5ADF_inline (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 ___0_left, Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 ___1_right, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(Vector_1_t2DEF63E613428E110D429967E5CA7DE8ADF91630_StaticInit);
	uint8_t* V_0 = NULL;
	int32_t V_1 = 0;
	int8_t* V_2 = NULL;
	int32_t V_3 = 0;
	uint16_t* V_4 = NULL;
	int32_t V_5 = 0;
	int16_t* V_6 = NULL;
	int32_t V_7 = 0;
	uint32_t* V_8 = NULL;
	int32_t V_9 = 0;
	int32_t* V_10 = NULL;
	int32_t V_11 = 0;
	uint64_t* V_12 = NULL;
	int32_t V_13 = 0;
	int64_t* V_14 = NULL;
	int32_t V_15 = 0;
	float* V_16 = NULL;
	int32_t V_17 = 0;
	double* V_18 = NULL;
	int32_t V_19 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A V_20;
	memset((&V_20), 0, sizeof(V_20));
	uint16_t* G_B21_0 = NULL;
	uint16_t* G_B20_0 = NULL;
	int32_t G_B22_0 = 0;
	uint16_t* G_B22_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B185_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B184_0 = NULL;
	int32_t G_B186_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B186_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B188_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B187_0 = NULL;
	int32_t G_B189_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B189_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B191_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B190_0 = NULL;
	int32_t G_B192_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B192_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B194_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B193_0 = NULL;
	int32_t G_B195_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B195_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B197_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B196_0 = NULL;
	int32_t G_B198_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B198_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B200_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B199_0 = NULL;
	int32_t G_B201_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B201_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B203_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B202_0 = NULL;
	int32_t G_B204_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B204_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B206_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B205_0 = NULL;
	int32_t G_B207_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B207_1 = NULL;
	{
		bool L_0;
		L_0 = Vector_get_IsHardwareAccelerated_m783509258751EBED64CBD9F387EC1BB4A15088AA(NULL);
		if (!L_0)
		{
			goto IL_0447;
		}
	}
	{
		goto IL_0068;
	}

IL_0068:
	{
		goto IL_00c6;
	}

IL_00c6:
	{
	}
	{
		CHECKED_LOCAL_INIT(Vector_1_t2DEF63E613428E110D429967E5CA7DE8ADF91630_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_1;
		L_1 = Vector_1_get_Count_m6DF09E4443FC90521D33C892BE69D32B04D85A15_inline(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3));
		uintptr_t L_2 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(L_1,NULL));
		if ((uintptr_t)L_2 * (uintptr_t)2 > (uintptr_t)kIl2CppUIntPtrMax)
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		intptr_t L_3 = ((intptr_t)il2cpp_codegen_multiply((intptr_t)L_2, 2));
		int8_t* L_4;
		if (L_3 == 0)
		{
			L_4 = NULL;
		}
		else
		{
			L_4 = (int8_t*)alloca(L_3);
			memset(L_4, 0, L_3);
		}
		V_4 = (uint16_t*)L_4;
		V_5 = 0;
		goto IL_0122;
	}

IL_00f2:
	{
		uint16_t* L_5 = V_4;
		int32_t L_6 = V_5;
		intptr_t L_7 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_6,NULL));
		int32_t L_8 = V_5;
		CHECKED_LOCAL_INIT(Vector_1_t2DEF63E613428E110D429967E5CA7DE8ADF91630_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)),il2cpp_codegen_runtime_class_init_inline);
		uint16_t L_9;
		L_9 = Vector_1_get_Item_m248FFF521980A3A43D237B8C5CA2ABD5C62D4D27((&___0_left), L_8, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6));
		int32_t L_10 = V_5;
		uint16_t L_11;
		L_11 = Vector_1_get_Item_m248FFF521980A3A43D237B8C5CA2ABD5C62D4D27((&___1_right), L_10, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6));
		bool L_12;
		L_12 = Vector_1_ScalarEquals_m4E13E30219B0D2AADB58AD6E5CB2B54B9FCBFAAE_inline(L_9, L_11, NULL);
		if (L_12)
		{
			G_B21_0 = ((uint16_t*)il2cpp_codegen_add((intptr_t)L_5, ((intptr_t)il2cpp_codegen_multiply(L_7, 2))));
			goto IL_0116;
		}
		G_B20_0 = ((uint16_t*)il2cpp_codegen_add((intptr_t)L_5, ((intptr_t)il2cpp_codegen_multiply(L_7, 2))));
	}
	{
		G_B22_0 = 0;
		G_B22_1 = G_B20_0;
		goto IL_011b;
	}

IL_0116:
	{
		uint16_t L_13;
		L_13 = ConstantHelper_GetUInt16WithAllBitsSet_mD3E13D933A06059499F0E0CBE6798D72D175464A_inline(NULL);
		G_B22_0 = ((int32_t)(L_13));
		G_B22_1 = G_B21_0;
	}

IL_011b:
	{
		*(((int16_t*)G_B22_1)) = ((int16_t)G_B22_0);
		int32_t L_14 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_14, 1));
	}

IL_0122:
	{
		int32_t L_15 = V_5;
		CHECKED_LOCAL_INIT(Vector_1_t2DEF63E613428E110D429967E5CA7DE8ADF91630_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_16;
		L_16 = Vector_1_get_Count_m6DF09E4443FC90521D33C892BE69D32B04D85A15_inline(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3));
		if ((((int32_t)L_15) < ((int32_t)L_16)))
		{
			goto IL_00f2;
		}
	}
	{
		uint16_t* L_17 = V_4;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_18;
		memset((&L_18), 0, sizeof(L_18));
		Vector_1__ctor_m46ADEA122EFBA7AEF487716891A8ADD284FD12E3((&L_18), (void*)L_17, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 10));
		return L_18;
	}

IL_0447:
	{
		il2cpp_codegen_initobj((&V_20), sizeof(Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A));
		goto IL_06e5;
	}

IL_06e5:
	{
		goto IL_097b;
	}

IL_097b:
	{
	}
	{
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_19 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_20 = L_19.___register;
		uint16_t L_21 = L_20.___uint16_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_22 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_23 = L_22.___register;
		uint16_t L_24 = L_23.___uint16_0;
		if ((((int32_t)L_21) == ((int32_t)L_24)))
		{
			G_B185_0 = (&V_20);
			goto IL_09b6;
		}
		G_B184_0 = (&V_20);
	}
	{
		G_B186_0 = 0;
		G_B186_1 = G_B184_0;
		goto IL_09bb;
	}

IL_09b6:
	{
		uint16_t L_25;
		L_25 = ConstantHelper_GetUInt16WithAllBitsSet_mD3E13D933A06059499F0E0CBE6798D72D175464A_inline(NULL);
		G_B186_0 = ((int32_t)(L_25));
		G_B186_1 = G_B185_0;
	}

IL_09bb:
	{
		G_B186_1->___uint16_0 = (uint16_t)G_B186_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_26 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_27 = L_26.___register;
		uint16_t L_28 = L_27.___uint16_1;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_29 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_30 = L_29.___register;
		uint16_t L_31 = L_30.___uint16_1;
		if ((((int32_t)L_28) == ((int32_t)L_31)))
		{
			G_B188_0 = (&V_20);
			goto IL_09dd;
		}
		G_B187_0 = (&V_20);
	}
	{
		G_B189_0 = 0;
		G_B189_1 = G_B187_0;
		goto IL_09e2;
	}

IL_09dd:
	{
		uint16_t L_32;
		L_32 = ConstantHelper_GetUInt16WithAllBitsSet_mD3E13D933A06059499F0E0CBE6798D72D175464A_inline(NULL);
		G_B189_0 = ((int32_t)(L_32));
		G_B189_1 = G_B188_0;
	}

IL_09e2:
	{
		G_B189_1->___uint16_1 = (uint16_t)G_B189_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_33 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_34 = L_33.___register;
		uint16_t L_35 = L_34.___uint16_2;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_36 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_37 = L_36.___register;
		uint16_t L_38 = L_37.___uint16_2;
		if ((((int32_t)L_35) == ((int32_t)L_38)))
		{
			G_B191_0 = (&V_20);
			goto IL_0a04;
		}
		G_B190_0 = (&V_20);
	}
	{
		G_B192_0 = 0;
		G_B192_1 = G_B190_0;
		goto IL_0a09;
	}

IL_0a04:
	{
		uint16_t L_39;
		L_39 = ConstantHelper_GetUInt16WithAllBitsSet_mD3E13D933A06059499F0E0CBE6798D72D175464A_inline(NULL);
		G_B192_0 = ((int32_t)(L_39));
		G_B192_1 = G_B191_0;
	}

IL_0a09:
	{
		G_B192_1->___uint16_2 = (uint16_t)G_B192_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_40 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_41 = L_40.___register;
		uint16_t L_42 = L_41.___uint16_3;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_43 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_44 = L_43.___register;
		uint16_t L_45 = L_44.___uint16_3;
		if ((((int32_t)L_42) == ((int32_t)L_45)))
		{
			G_B194_0 = (&V_20);
			goto IL_0a2b;
		}
		G_B193_0 = (&V_20);
	}
	{
		G_B195_0 = 0;
		G_B195_1 = G_B193_0;
		goto IL_0a30;
	}

IL_0a2b:
	{
		uint16_t L_46;
		L_46 = ConstantHelper_GetUInt16WithAllBitsSet_mD3E13D933A06059499F0E0CBE6798D72D175464A_inline(NULL);
		G_B195_0 = ((int32_t)(L_46));
		G_B195_1 = G_B194_0;
	}

IL_0a30:
	{
		G_B195_1->___uint16_3 = (uint16_t)G_B195_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_47 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_48 = L_47.___register;
		uint16_t L_49 = L_48.___uint16_4;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_50 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_51 = L_50.___register;
		uint16_t L_52 = L_51.___uint16_4;
		if ((((int32_t)L_49) == ((int32_t)L_52)))
		{
			G_B197_0 = (&V_20);
			goto IL_0a52;
		}
		G_B196_0 = (&V_20);
	}
	{
		G_B198_0 = 0;
		G_B198_1 = G_B196_0;
		goto IL_0a57;
	}

IL_0a52:
	{
		uint16_t L_53;
		L_53 = ConstantHelper_GetUInt16WithAllBitsSet_mD3E13D933A06059499F0E0CBE6798D72D175464A_inline(NULL);
		G_B198_0 = ((int32_t)(L_53));
		G_B198_1 = G_B197_0;
	}

IL_0a57:
	{
		G_B198_1->___uint16_4 = (uint16_t)G_B198_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_54 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_55 = L_54.___register;
		uint16_t L_56 = L_55.___uint16_5;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_57 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_58 = L_57.___register;
		uint16_t L_59 = L_58.___uint16_5;
		if ((((int32_t)L_56) == ((int32_t)L_59)))
		{
			G_B200_0 = (&V_20);
			goto IL_0a79;
		}
		G_B199_0 = (&V_20);
	}
	{
		G_B201_0 = 0;
		G_B201_1 = G_B199_0;
		goto IL_0a7e;
	}

IL_0a79:
	{
		uint16_t L_60;
		L_60 = ConstantHelper_GetUInt16WithAllBitsSet_mD3E13D933A06059499F0E0CBE6798D72D175464A_inline(NULL);
		G_B201_0 = ((int32_t)(L_60));
		G_B201_1 = G_B200_0;
	}

IL_0a7e:
	{
		G_B201_1->___uint16_5 = (uint16_t)G_B201_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_61 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_62 = L_61.___register;
		uint16_t L_63 = L_62.___uint16_6;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_64 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_65 = L_64.___register;
		uint16_t L_66 = L_65.___uint16_6;
		if ((((int32_t)L_63) == ((int32_t)L_66)))
		{
			G_B203_0 = (&V_20);
			goto IL_0aa0;
		}
		G_B202_0 = (&V_20);
	}
	{
		G_B204_0 = 0;
		G_B204_1 = G_B202_0;
		goto IL_0aa5;
	}

IL_0aa0:
	{
		uint16_t L_67;
		L_67 = ConstantHelper_GetUInt16WithAllBitsSet_mD3E13D933A06059499F0E0CBE6798D72D175464A_inline(NULL);
		G_B204_0 = ((int32_t)(L_67));
		G_B204_1 = G_B203_0;
	}

IL_0aa5:
	{
		G_B204_1->___uint16_6 = (uint16_t)G_B204_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_68 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_69 = L_68.___register;
		uint16_t L_70 = L_69.___uint16_7;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_71 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_72 = L_71.___register;
		uint16_t L_73 = L_72.___uint16_7;
		if ((((int32_t)L_70) == ((int32_t)L_73)))
		{
			G_B206_0 = (&V_20);
			goto IL_0ac7;
		}
		G_B205_0 = (&V_20);
	}
	{
		G_B207_0 = 0;
		G_B207_1 = G_B205_0;
		goto IL_0acc;
	}

IL_0ac7:
	{
		uint16_t L_74;
		L_74 = ConstantHelper_GetUInt16WithAllBitsSet_mD3E13D933A06059499F0E0CBE6798D72D175464A_inline(NULL);
		G_B207_0 = ((int32_t)(L_74));
		G_B207_1 = G_B206_0;
	}

IL_0acc:
	{
		G_B207_1->___uint16_7 = (uint16_t)G_B207_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_75;
		memset((&L_75), 0, sizeof(L_75));
		Vector_1__ctor_m48CD7847B9597F3193C9C0BA97ED64E276F4340A((&L_75), (&V_20), NULL);
		return L_75;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t MarshalledUnityObject_MarshalNotNull_TisIl2CppSharedGenericObject_mCE897EC9A79983B4B1E6E2C8342452256309044A_gshared_inline (Il2CppSharedGenericObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		Il2CppSharedGenericObject* L_0 = ___0_obj;
		intptr_t L_1 = ((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_0)->___m_CachedPtr;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool GCHandle_get_IsAllocated_m241908103D8D867E11CCAB73C918729825E86843_inline (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* __this, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = __this->___handle;
		bool L_1;
		L_1 = IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B_inline(L_0, 0, NULL);
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool GCHandle_CanDereferenceHandle_mAAAC42D1268CEF3FDD040A3D1574773D08140579_inline (intptr_t ___0_handle, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = ___0_handle;
		intptr_t L_1 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(1,NULL));
		intptr_t L_2 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(0,NULL));
		return (bool)((((intptr_t)((intptr_t)(L_0&L_1))) == ((intptr_t)L_2))? 1 : 0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* GCHandle_GetRef_mAC7E58E62417209DC41C99F66BA70F0C3AA18DA8_inline (intptr_t ___0_handle, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = ___0_handle;
		void* L_1;
		L_1 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_0, NULL);
		RuntimeObject** L_2;
		L_2 = il2cpp_unsafe_as_ref<RuntimeObject*>((intptr_t*)L_1);
		RuntimeObject* L_3 = *(L_2);
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint16_t ConstantHelper_GetUInt16WithAllBitsSet_mD3E13D933A06059499F0E0CBE6798D72D175464A_inline (const RuntimeMethod* method) 
{
	uint16_t V_0 = 0;
	{
		V_0 = (uint16_t)0;
		uintptr_t L_0 = (il2cpp_codegen_conv<uintptr_t,uint16_t*,intptr_t,false,false>((&V_0),NULL));
		*(((int16_t*)L_0)) = ((int16_t)((int32_t)65535));
		uint16_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* UnsafeUtility_As_TisIntPtr_t_TisGCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC_mD94F597CB91662C823496DA9FA9A7CF908734A78_inline (intptr_t* ___0_from, const RuntimeMethod* method) 
{
	{
		intptr_t* L_0 = ___0_from;
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* L_1;
		L_1 = UnsafeUtilityInternal_As_TisIntPtr_t_TisGCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC_mD43127D5F7AA6EB4B52E5C30BA53F29843E9E9A2_inline(L_0, NULL);
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector_1_get_Count_m6DF09E4443FC90521D33C892BE69D32B04D85A15_inline (const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(Vector_1_t2DEF63E613428E110D429967E5CA7DE8ADF91630_StaticInit);
	{
		CHECKED_LOCAL_INIT(Vector_1_t2DEF63E613428E110D429967E5CA7DE8ADF91630_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_0 = ((Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___s_count;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector_1_ScalarEquals_m4E13E30219B0D2AADB58AD6E5CB2B54B9FCBFAAE_inline (uint16_t ___0_left, uint16_t ___1_right, const RuntimeMethod* method) 
{
	{
		goto IL_0034;
	}

IL_0034:
	{
		goto IL_0068;
	}

IL_0068:
	{
	}
	{
		uint16_t L_0 = ___0_left;
		uint16_t L_1 = ___1_right;
		return (bool)((((int32_t)L_0) == ((int32_t)L_1))? 1 : 0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B_inline (intptr_t ___0_value1, intptr_t ___1_value2, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = ___0_value1;
		intptr_t L_1 = ___1_value2;
		return (bool)((((int32_t)((((intptr_t)L_0) == ((intptr_t)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
