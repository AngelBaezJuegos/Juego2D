#include "pch-cpp.hpp"





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
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*,T1,T2,const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj,p1,p2,invokeData.method);
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
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InvokerFuncInvoker4;
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InvokerFuncInvoker4<R, T1*, T2*, T3, T4>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3 p3, T4 p4)
	{
		R ret;
		void* params[4] = { p1, p2, &p3, &p4 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};

struct Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404;
struct Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2;
struct Action_1_t3C69DE7F9955C35DC22C9DEA53238F2CF0D23802;
struct Action_1_t801DD0C5C7757F429A097C411325B152D78BAC33;
struct Action_1_t1AC3D5C3F81C6F9B1B32157D44B18D2F3098FF66;
struct Action_1_tFB4CF7B05ED4457EF963EF457274973F784847E1;
struct Action_1_t45EE9233F562CACBFAD099A7F22DC3DEC41DC5F2;
struct Action_1_tA9D6FD07CF73C3DCEA4B280667EEFD02150EEA98;
struct Action_1_t831946BFD83EBA9DE498D3E682F1D4F14D17878D;
struct Action_1_tF0E1373A391479E6E235E0D82CE1EF1DE6B6C505;
struct Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99;
struct Comparison_1_tB7DE1436CB53924C2FC41FF926D074C1ACC14D89;
struct Comparison_1_tD773004B8607A867202EE8F35BD74AE6496D742A;
struct Comparison_1_tE68D245A5CD7F54899C04EDE679025720DDC8BC0;
struct Comparison_1_tBF85733D18400A902C910AD0E30BDB26192F0E9B;
struct Comparison_1_t739F3AE6EBC2BD5F3A9FF0FE425BBA1EDE2AF7B3;
struct Comparison_1_t214C1E54D5D8ACACB1511E4F54BAB8E01EAF78B5;
struct Comparison_1_t9A125FC4BBCDF36E042FD4E1BC9A5C86A812BB72;
struct Comparison_1_tDCA291E0A9EC3450564AE324BB4A8232F7171A75;
struct Comparison_1_tF77ABBDA0482B2BE658FA3EE0DFA2E0ECB09A60B;
struct Comparison_1_tC9FBFF747FA0455CD35BD7D097691DE20DDCC2B5;
struct Comparison_1_tE94B5C4AE59DE10B7A54AD7C3291462A05D5CD49;
struct ICollection_1_t828FEFDDBF830D003AFB480F0898186B499E26B0;
struct ICollection_1_t00C657072990EFC3811C7F429B8E3CBEF805BD8A;
struct ICollection_1_t5E4953111374D1284927C80D03DAA31A4C696E82;
struct ICollection_1_t98EFEE019A930A80E08F46ECD80A0D880642C2C1;
struct ICollection_1_t4A5413BF3C121829BA4FC3671C331C1ED9ED92E7;
struct ICollection_1_tB3EA01D14E8BD481446760565DB8B1BE902E2A0C;
struct ICollection_1_t59AE69129F00A94E750287243728C2832A268109;
struct ICollection_1_t9ABDB7CFC022637CE635605675B689FD11182922;
struct ICollection_1_t03EA087489342703ED691AFD807C50289BADA136;
struct ICollection_1_t58D5B5A564BF08CD3C8EE106100AC0D7B8C4508B;
struct ICollection_1_tB388ED908E2D241F56264CA971F25D9ADC1ADEC3;
struct IComparer_1_t4483F9B9F43C7B0F8D4FEEAE12FAFDD3F9CF81FD;
struct IComparer_1_tC8A75A381B719F8FA4F84EAACFCE66E93FC34E0A;
struct IComparer_1_tECA14B9E78A671492391AECF3DBB0FD7DBE53DAA;
struct IComparer_1_t730AFC2E6D7001B2C80C3E44CBC0F13D70598054;
struct IComparer_1_t8D637A6872BF3A8C8246281D0013CDE49FB122E2;
struct IComparer_1_t5BEC98BA1DA080B0683DCBD66CC0E5F45FDF1F9F;
struct IComparer_1_t3789566B04358071B16B2D6A41C7064418AF4EB1;
struct IComparer_1_t8FAA43D4B9AB767E9923CC028420EAAB3BAD33E4;
struct IComparer_1_t2823311A1816BF1DC53D0C642C909DD5E1804382;
struct IComparer_1_t3B0F39D062C0830CA6D3DD5C771FEF9D2E6F5DEF;
struct IComparer_1_tCA720E7837F12C38065A4AB632B5FAAD19EC30AA;
struct IEnumerable_1_tCE758D940790D6D0D56B457E522C195F8C413AF2;
struct IEnumerable_1_t101D1ED4FD2E11F59AE617F3A394F7AA0A21C585;
struct IEnumerable_1_t7A393989987F03DA8F60B376BA268312A4EFB898;
struct IEnumerable_1_tEC612AE46C64B901EC8843E9C1B95C7484E2D334;
struct IEnumerable_1_tFBE064108F6FBA7C779E1916D7E9CEFD842D8C17;
struct IEnumerable_1_t9E93492B7B3B5B533E03C7E7FC18F1F330641D8B;
struct IEnumerable_1_t73FC5294CA2E305D1A7572A8B27263FDBFBA3342;
struct IEnumerable_1_t03F85466526BD0AB0636FF1CE70183856290B59E;
struct IEnumerable_1_tF78C5A55C1D093F0B8CD95E0247BA2EE703D9D55;
struct IEnumerable_1_t6D5FFB1B4A97F30426C5D394135AD0D2FAEAE680;
struct IEnumerable_1_t29E7244AE33B71FA0981E50D5BC73B7938F35C66;
struct IEnumerator_1_tD6A90A7446DA8E6CF865EDFBBF18C1200BB6D452;
struct IEnumerator_1_tE9D1C7A5287039A2077BA3B539B100F0E12F3A6C;
struct IEnumerator_1_tB3A77E02B009CBA74566B206E9F55B5316929F22;
struct IEnumerator_1_tCC67BEAA983E6697A11E37A7C2F35060DB9E7AC8;
struct IEnumerator_1_t86C7944555313A63536FC1D85BE5398E78D2715B;
struct IEnumerator_1_t3139D515B6AA0245B98E26D2A2CE520C44E6EF1B;
struct IEnumerator_1_t221F3EC52DD9E5159750EA26FB0B447C65FD210E;
struct IEnumerator_1_tAFB9FBA3034F90362F7C09F78083B4ACC168DA5D;
struct IEnumerator_1_t737E5D96E5E3657734509E507812DBA5E7EDD547;
struct IEnumerator_1_tB41B292FAFD525FC5C54D7E469F0BA1A193CA8B1;
struct IEnumerator_1_t75CB2681E18F7F2791528FA2CA60361FDB5DA08D;
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73;
struct List_1_t6D4D3AAF46D9E2944E578579CE720FABFD990C26;
struct List_1_t420B17163897A4DF994BA698744548CD81961E70;
struct List_1_t8837CD02A40CED632406E449B6D76FF9AB3E4468;
struct List_1_tF7A39AE542CF9A5C63B48726F173FA38571D52C3;
struct List_1_tC99D7D75F0197EF8D9C0B56B71A1B77C6B6C8AC6;
struct List_1_tD497C1314C02F6E7345D74565C2424A939B46AA7;
struct List_1_t480A595B8D45A9019FF0E9A33AD53D81F7355674;
struct List_1_t9B68833848E4C4D7F623C05F6B77F0449396354A;
struct List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E;
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A;
struct Predicate_1_t6CDE3111264F492F4F13277756366A07CA78A4C3;
struct Predicate_1_t1659F6182C62A18F9877F492426DD2DEC6A68A9B;
struct Predicate_1_t75A270EF719DA010F98BE7630ECAA21A66DD8FFE;
struct Predicate_1_t1A0605C87155DBCA6412C23F07D0AEBBDC65F25B;
struct Predicate_1_t86696A7752B102AFC6ED1D86EE72BB4CD74918CF;
struct Predicate_1_t09023B0AB7D2D62F61A5FE077D1F3DF03EFB51D3;
struct Predicate_1_tB19E1C7275588953C5ED1BC720F0294C2011833E;
struct Predicate_1_tD559AF1002ABFFC541AF884654337A564D28B733;
struct Predicate_1_t2F212B682F64543895DDB2A14A8816A433567EFF;
struct Predicate_1_t586817D6627D147076FFDCC73DA7BEC23132FA88;
struct Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct LigatureSubstitutionRecordU5BU5D_t04186B1B45C8D4F2AAB2299EE24668D39B4E9B50;
struct MarkToBaseAdjustmentRecordU5BU5D_t4F120A507E14039BC63574D1815FF2E7B9D73911;
struct MarkToMarkAdjustmentRecordU5BU5D_t09E9394A7451C53E2DD62ACB4FD0CF5F52159061;
struct MeshInfoBindingsU5BU5D_tAB8E8C31A391A18DE5B83869CC7C3C43DA40C641;
struct MultipleSubstitutionRecordU5BU5D_t97C158785342D9FF7B0B89861AC760DE6E38E934;
struct ResourceHandleU5BU5D_tD8EAD492F528F246F46563C67691360F9F2B0918;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct TextCoreVertexU5BU5D_tB1DD4645DEB2946FA2271F94CE23D57FB4B9FE17;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
struct __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
struct MethodInfo_t;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct String_t;
struct Type_t;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;

IL2CPP_EXTERN_C RuntimeClass* ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct TextCoreVertex_t012334F340F916622ED5237971E8BA32198060E4;

struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct LigatureSubstitutionRecordU5BU5D_t04186B1B45C8D4F2AAB2299EE24668D39B4E9B50;
struct MarkToBaseAdjustmentRecordU5BU5D_t4F120A507E14039BC63574D1815FF2E7B9D73911;
struct MarkToMarkAdjustmentRecordU5BU5D_t09E9394A7451C53E2DD62ACB4FD0CF5F52159061;
struct MeshInfoBindingsU5BU5D_tAB8E8C31A391A18DE5B83869CC7C3C43DA40C641;
struct MultipleSubstitutionRecordU5BU5D_t97C158785342D9FF7B0B89861AC760DE6E38E934;
struct ResourceHandleU5BU5D_tD8EAD492F528F246F46563C67691360F9F2B0918;
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
struct __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_t6D4D3AAF46D9E2944E578579CE720FABFD990C26  : public RuntimeObject
{
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_t420B17163897A4DF994BA698744548CD81961E70  : public RuntimeObject
{
	LigatureSubstitutionRecordU5BU5D_t04186B1B45C8D4F2AAB2299EE24668D39B4E9B50* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_t8837CD02A40CED632406E449B6D76FF9AB3E4468  : public RuntimeObject
{
	MarkToBaseAdjustmentRecordU5BU5D_t4F120A507E14039BC63574D1815FF2E7B9D73911* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_tF7A39AE542CF9A5C63B48726F173FA38571D52C3  : public RuntimeObject
{
	MarkToMarkAdjustmentRecordU5BU5D_t09E9394A7451C53E2DD62ACB4FD0CF5F52159061* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_tC99D7D75F0197EF8D9C0B56B71A1B77C6B6C8AC6  : public RuntimeObject
{
	MeshInfoBindingsU5BU5D_tAB8E8C31A391A18DE5B83869CC7C3C43DA40C641* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_tD497C1314C02F6E7345D74565C2424A939B46AA7  : public RuntimeObject
{
	MultipleSubstitutionRecordU5BU5D_t97C158785342D9FF7B0B89861AC760DE6E38E934* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_t480A595B8D45A9019FF0E9A33AD53D81F7355674  : public RuntimeObject
{
	ResourceHandleU5BU5D_tD8EAD492F528F246F46563C67691360F9F2B0918* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_t9B68833848E4C4D7F623C05F6B77F0449396354A  : public RuntimeObject
{
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ____items;
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
struct MemberInfo_t  : public RuntimeObject
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
struct Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC 
{
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ____list;
	int32_t ____index;
	int32_t ____version;
	int32_t ____current;
};
struct Enumerator_tE11EF15BE791F6B44F4B296E90476ADCDDC5D87F 
{
	List_1_t9B68833848E4C4D7F623C05F6B77F0449396354A* ____list;
	int32_t ____index;
	int32_t ____version;
	uint32_t ____current;
};
struct Enumerator_tC367FBE981D257FF6A6357382526F6EC9FF3B2F9 
{
	List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* ____list;
	int32_t ____index;
	int32_t ____version;
	Il2CppSharedGenericObject* ____current;
};
typedef Il2CppFullySharedGenericStruct Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF;
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
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
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	int32_t ___m_value;
};
struct IntPtr_t 
{
	void* ___m_value;
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
struct MarkPositionAdjustment_t2523798D56F14A93A080D9D1298498325A51F436 
{
	float ___m_XPositionAdjustment;
	float ___m_YPositionAdjustment;
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
struct ResourceHandle_tAB7888F3AB5071C94127D0D46AAB3D702BC4B9F8 
{
	uint64_t ___value;
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
struct Enumerator_tDBDA4B0709B5415FB3A6891D4253A5C7ADF9D658 
{
	List_1_t6D4D3AAF46D9E2944E578579CE720FABFD990C26* ____list;
	int32_t ____index;
	int32_t ____version;
	intptr_t ____current;
};
struct Enumerator_tF178DB8F022DE0B9858009BADBED741E672A04E2 
{
	List_1_t420B17163897A4DF994BA698744548CD81961E70* ____list;
	int32_t ____index;
	int32_t ____version;
	LigatureSubstitutionRecord_t8660DC6B1D65C655D698216F72BFB3C85DDCAB94 ____current;
};
struct Enumerator_t8A20D5B25F288B18A262EE8D0F6E09A214832BE9 
{
	List_1_tC99D7D75F0197EF8D9C0B56B71A1B77C6B6C8AC6* ____list;
	int32_t ____index;
	int32_t ____version;
	MeshInfoBindings_t75C3901D8003725F85E8FD2F33C1712A92DB3EAF ____current;
};
struct Enumerator_t801050780B43627808ABA984A28657A83654A691 
{
	List_1_tD497C1314C02F6E7345D74565C2424A939B46AA7* ____list;
	int32_t ____index;
	int32_t ____version;
	MultipleSubstitutionRecord_t668A640AFADBD46E3D4EC3A8417D0A02764DF87B ____current;
};
struct Enumerator_t1F35D895285609CB64A4AE42EEBBACABF575870C 
{
	List_1_t480A595B8D45A9019FF0E9A33AD53D81F7355674* ____list;
	int32_t ____index;
	int32_t ____version;
	ResourceHandle_tAB7888F3AB5071C94127D0D46AAB3D702BC4B9F8 ____current;
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
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	intptr_t ___value;
};
struct Enumerator_tCD90581783D3AA12E0C1FEDDAB2936C6A69F1644 
{
	List_1_t8837CD02A40CED632406E449B6D76FF9AB3E4468* ____list;
	int32_t ____index;
	int32_t ____version;
	MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607 ____current;
};
struct Enumerator_t41A770DBA333774F33A9D3A1CECAEF383E2E0653 
{
	List_1_tF7A39AE542CF9A5C63B48726F173FA38571D52C3* ____list;
	int32_t ____index;
	int32_t ____version;
	MarkToMarkAdjustmentRecord_tD53618A3728435D5C904857DAC644EE27640807C ____current;
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
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};
struct Type_t  : public MemberInfo_t
{
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl;
};
struct Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404  : public MulticastDelegate_t
{
};
struct Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2  : public MulticastDelegate_t
{
};
struct Action_1_t3C69DE7F9955C35DC22C9DEA53238F2CF0D23802  : public MulticastDelegate_t
{
};
struct Action_1_t801DD0C5C7757F429A097C411325B152D78BAC33  : public MulticastDelegate_t
{
};
struct Action_1_t1AC3D5C3F81C6F9B1B32157D44B18D2F3098FF66  : public MulticastDelegate_t
{
};
struct Action_1_tFB4CF7B05ED4457EF963EF457274973F784847E1  : public MulticastDelegate_t
{
};
struct Action_1_t45EE9233F562CACBFAD099A7F22DC3DEC41DC5F2  : public MulticastDelegate_t
{
};
struct Action_1_tA9D6FD07CF73C3DCEA4B280667EEFD02150EEA98  : public MulticastDelegate_t
{
};
struct Action_1_t831946BFD83EBA9DE498D3E682F1D4F14D17878D  : public MulticastDelegate_t
{
};
struct Action_1_tF0E1373A391479E6E235E0D82CE1EF1DE6B6C505  : public MulticastDelegate_t
{
};
struct Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99  : public MulticastDelegate_t
{
};
struct Comparison_1_tB7DE1436CB53924C2FC41FF926D074C1ACC14D89  : public MulticastDelegate_t
{
};
struct Comparison_1_tD773004B8607A867202EE8F35BD74AE6496D742A  : public MulticastDelegate_t
{
};
struct Comparison_1_tE68D245A5CD7F54899C04EDE679025720DDC8BC0  : public MulticastDelegate_t
{
};
struct Comparison_1_tBF85733D18400A902C910AD0E30BDB26192F0E9B  : public MulticastDelegate_t
{
};
struct Comparison_1_t739F3AE6EBC2BD5F3A9FF0FE425BBA1EDE2AF7B3  : public MulticastDelegate_t
{
};
struct Comparison_1_t214C1E54D5D8ACACB1511E4F54BAB8E01EAF78B5  : public MulticastDelegate_t
{
};
struct Comparison_1_t9A125FC4BBCDF36E042FD4E1BC9A5C86A812BB72  : public MulticastDelegate_t
{
};
struct Comparison_1_tDCA291E0A9EC3450564AE324BB4A8232F7171A75  : public MulticastDelegate_t
{
};
struct Comparison_1_tF77ABBDA0482B2BE658FA3EE0DFA2E0ECB09A60B  : public MulticastDelegate_t
{
};
struct Comparison_1_tC9FBFF747FA0455CD35BD7D097691DE20DDCC2B5  : public MulticastDelegate_t
{
};
struct Comparison_1_tE94B5C4AE59DE10B7A54AD7C3291462A05D5CD49  : public MulticastDelegate_t
{
};
struct Predicate_1_t6CDE3111264F492F4F13277756366A07CA78A4C3  : public MulticastDelegate_t
{
};
struct Predicate_1_t1659F6182C62A18F9877F492426DD2DEC6A68A9B  : public MulticastDelegate_t
{
};
struct Predicate_1_t75A270EF719DA010F98BE7630ECAA21A66DD8FFE  : public MulticastDelegate_t
{
};
struct Predicate_1_t1A0605C87155DBCA6412C23F07D0AEBBDC65F25B  : public MulticastDelegate_t
{
};
struct Predicate_1_t86696A7752B102AFC6ED1D86EE72BB4CD74918CF  : public MulticastDelegate_t
{
};
struct Predicate_1_t09023B0AB7D2D62F61A5FE077D1F3DF03EFB51D3  : public MulticastDelegate_t
{
};
struct Predicate_1_tB19E1C7275588953C5ED1BC720F0294C2011833E  : public MulticastDelegate_t
{
};
struct Predicate_1_tD559AF1002ABFFC541AF884654337A564D28B733  : public MulticastDelegate_t
{
};
struct Predicate_1_t2F212B682F64543895DDB2A14A8816A433567EFF  : public MulticastDelegate_t
{
};
struct Predicate_1_t586817D6627D147076FFDCC73DA7BEC23132FA88  : public MulticastDelegate_t
{
};
struct Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107  : public MulticastDelegate_t
{
};
struct ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_StaticFields
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_emptyArray;
};
struct List_1_t6D4D3AAF46D9E2944E578579CE720FABFD990C26_StaticFields
{
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___s_emptyArray;
};
struct List_1_t420B17163897A4DF994BA698744548CD81961E70_StaticFields
{
	LigatureSubstitutionRecordU5BU5D_t04186B1B45C8D4F2AAB2299EE24668D39B4E9B50* ___s_emptyArray;
};
struct List_1_t8837CD02A40CED632406E449B6D76FF9AB3E4468_StaticFields
{
	MarkToBaseAdjustmentRecordU5BU5D_t4F120A507E14039BC63574D1815FF2E7B9D73911* ___s_emptyArray;
};
struct List_1_tF7A39AE542CF9A5C63B48726F173FA38571D52C3_StaticFields
{
	MarkToMarkAdjustmentRecordU5BU5D_t09E9394A7451C53E2DD62ACB4FD0CF5F52159061* ___s_emptyArray;
};
struct List_1_tC99D7D75F0197EF8D9C0B56B71A1B77C6B6C8AC6_StaticFields
{
	MeshInfoBindingsU5BU5D_tAB8E8C31A391A18DE5B83869CC7C3C43DA40C641* ___s_emptyArray;
};
struct List_1_tD497C1314C02F6E7345D74565C2424A939B46AA7_StaticFields
{
	MultipleSubstitutionRecordU5BU5D_t97C158785342D9FF7B0B89861AC760DE6E38E934* ___s_emptyArray;
};
struct List_1_t480A595B8D45A9019FF0E9A33AD53D81F7355674_StaticFields
{
	ResourceHandleU5BU5D_tD8EAD492F528F246F46563C67691360F9F2B0918* ___s_emptyArray;
};
struct List_1_t9B68833848E4C4D7F623C05F6B77F0449396354A_StaticFields
{
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___s_emptyArray;
};
struct List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E_StaticFields
{
	__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* ___s_emptyArray;
};
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A_StaticFields
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___s_emptyArray;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString;
	String_t* ___FalseString;
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
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832  : public RuntimeArray
{
	ALIGN_FIELD (8) intptr_t m_Items[1];

	inline intptr_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline intptr_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, intptr_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline intptr_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline intptr_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, intptr_t value)
	{
		m_Items[index] = value;
	}
};
struct LigatureSubstitutionRecordU5BU5D_t04186B1B45C8D4F2AAB2299EE24668D39B4E9B50  : public RuntimeArray
{
	ALIGN_FIELD (8) LigatureSubstitutionRecord_t8660DC6B1D65C655D698216F72BFB3C85DDCAB94 m_Items[1];

	inline LigatureSubstitutionRecord_t8660DC6B1D65C655D698216F72BFB3C85DDCAB94 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline LigatureSubstitutionRecord_t8660DC6B1D65C655D698216F72BFB3C85DDCAB94* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, LigatureSubstitutionRecord_t8660DC6B1D65C655D698216F72BFB3C85DDCAB94 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_ComponentGlyphIDs), (void*)NULL);
	}
	inline LigatureSubstitutionRecord_t8660DC6B1D65C655D698216F72BFB3C85DDCAB94 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline LigatureSubstitutionRecord_t8660DC6B1D65C655D698216F72BFB3C85DDCAB94* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, LigatureSubstitutionRecord_t8660DC6B1D65C655D698216F72BFB3C85DDCAB94 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_ComponentGlyphIDs), (void*)NULL);
	}
};
struct MarkToBaseAdjustmentRecordU5BU5D_t4F120A507E14039BC63574D1815FF2E7B9D73911  : public RuntimeArray
{
	ALIGN_FIELD (8) MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607 m_Items[1];

	inline MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607 value)
	{
		m_Items[index] = value;
	}
};
struct MarkToMarkAdjustmentRecordU5BU5D_t09E9394A7451C53E2DD62ACB4FD0CF5F52159061  : public RuntimeArray
{
	ALIGN_FIELD (8) MarkToMarkAdjustmentRecord_tD53618A3728435D5C904857DAC644EE27640807C m_Items[1];

	inline MarkToMarkAdjustmentRecord_tD53618A3728435D5C904857DAC644EE27640807C GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline MarkToMarkAdjustmentRecord_tD53618A3728435D5C904857DAC644EE27640807C* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, MarkToMarkAdjustmentRecord_tD53618A3728435D5C904857DAC644EE27640807C value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline MarkToMarkAdjustmentRecord_tD53618A3728435D5C904857DAC644EE27640807C GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline MarkToMarkAdjustmentRecord_tD53618A3728435D5C904857DAC644EE27640807C* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, MarkToMarkAdjustmentRecord_tD53618A3728435D5C904857DAC644EE27640807C value)
	{
		m_Items[index] = value;
	}
};
struct MeshInfoBindingsU5BU5D_tAB8E8C31A391A18DE5B83869CC7C3C43DA40C641  : public RuntimeArray
{
	ALIGN_FIELD (8) MeshInfoBindings_t75C3901D8003725F85E8FD2F33C1712A92DB3EAF m_Items[1];

	inline MeshInfoBindings_t75C3901D8003725F85E8FD2F33C1712A92DB3EAF GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline MeshInfoBindings_t75C3901D8003725F85E8FD2F33C1712A92DB3EAF* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, MeshInfoBindings_t75C3901D8003725F85E8FD2F33C1712A92DB3EAF value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___vertexData), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___material), (void*)NULL);
		#endif
	}
	inline MeshInfoBindings_t75C3901D8003725F85E8FD2F33C1712A92DB3EAF GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline MeshInfoBindings_t75C3901D8003725F85E8FD2F33C1712A92DB3EAF* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, MeshInfoBindings_t75C3901D8003725F85E8FD2F33C1712A92DB3EAF value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___vertexData), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___material), (void*)NULL);
		#endif
	}
};
struct MultipleSubstitutionRecordU5BU5D_t97C158785342D9FF7B0B89861AC760DE6E38E934  : public RuntimeArray
{
	ALIGN_FIELD (8) MultipleSubstitutionRecord_t668A640AFADBD46E3D4EC3A8417D0A02764DF87B m_Items[1];

	inline MultipleSubstitutionRecord_t668A640AFADBD46E3D4EC3A8417D0A02764DF87B GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline MultipleSubstitutionRecord_t668A640AFADBD46E3D4EC3A8417D0A02764DF87B* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, MultipleSubstitutionRecord_t668A640AFADBD46E3D4EC3A8417D0A02764DF87B value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_SubstituteGlyphIDs), (void*)NULL);
	}
	inline MultipleSubstitutionRecord_t668A640AFADBD46E3D4EC3A8417D0A02764DF87B GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline MultipleSubstitutionRecord_t668A640AFADBD46E3D4EC3A8417D0A02764DF87B* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, MultipleSubstitutionRecord_t668A640AFADBD46E3D4EC3A8417D0A02764DF87B value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_SubstituteGlyphIDs), (void*)NULL);
	}
};
struct ResourceHandleU5BU5D_tD8EAD492F528F246F46563C67691360F9F2B0918  : public RuntimeArray
{
	ALIGN_FIELD (8) ResourceHandle_tAB7888F3AB5071C94127D0D46AAB3D702BC4B9F8 m_Items[1];

	inline ResourceHandle_tAB7888F3AB5071C94127D0D46AAB3D702BC4B9F8 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ResourceHandle_tAB7888F3AB5071C94127D0D46AAB3D702BC4B9F8* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ResourceHandle_tAB7888F3AB5071C94127D0D46AAB3D702BC4B9F8 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline ResourceHandle_tAB7888F3AB5071C94127D0D46AAB3D702BC4B9F8 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ResourceHandle_tAB7888F3AB5071C94127D0D46AAB3D702BC4B9F8* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ResourceHandle_tAB7888F3AB5071C94127D0D46AAB3D702BC4B9F8 value)
	{
		m_Items[index] = value;
	}
};
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA  : public RuntimeArray
{
	ALIGN_FIELD (8) uint32_t m_Items[1];

	inline uint32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint32_t value)
	{
		m_Items[index] = value;
	}
};
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


IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddEnumerable_m0D03C24E342A0F77A0042603E40AD506136B684F (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, RuntimeObject* ___0_enumerable, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m0F7A078274F301B83DFC51191B3AFC763DE9C4D0 (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_m95629806F31CF369D937590912E0B6A53FF7C587 (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_index, int32_t ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_m378B392086AAB6F400944FA9839516326B3F7BB8 (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_EnsureCapacity_m86DF3071CD67B1463C1CF26C7791331D70D431C0 (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_min, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_item, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mD2ED26ACAF3BAF386FFEA83893BA51DB9FD8BA30_fshared_inline (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_InsertRange_m1D3DE2073A8946E2D1113677F2062F35881FA7B8 (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_index, RuntimeObject* ___1_collection, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_IndexOf_mC3D1A2CECAC0E3D42C78B43772E1BD3D0333C450 (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_IsCompatibleObject_m0C506FD38C6F16AC8A7700817EF89401910F873C (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_m4FD96E89F15844C90032C7386BAB528817F1FF5B (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_CopyTo_m5180D7A430072A21034A0692CDD1D565ADEE2ABB_fshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Capacity_mA667E9DF466C9574AC22A4B0FE0E358D818505CC (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mAC3C34BA1905AB5B79E483CD9BB082B7D667F703_inline (Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* __this, int32_t ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_mB5D11409C5765078140B3C3652FEF06536FDFA6B (Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC* __this, List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___0_list, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m30DD6F0F8DFBA9856BF7220A3CDB1C89ECEC0D98 (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_IndexOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m22CB8CB6C30E1C3E70C8662D7A290B88EF5007F3 (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_array, int32_t ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Insert_mC1B6D4E6CC94D8BA82A60B2F80CE9684D9345AAE (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_index, int32_t ___1_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_m76C4CDACF47BA529BAFADFC8D5E13DB9587F4004 (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m2B41E5B9E061DD4D5F58B693018024AADF2AD7F5 (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_item, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_mD16C664FFE93598D1C12AC86190D12B0F90B5419_inline (Predicate_1_t6CDE3111264F492F4F13277756366A07CA78A4C3* __this, int32_t ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Reverse_mE0857BE335F36FD830B3A301AA7BF67F2F3C783F (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Reverse_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m57764BD8E3718881AE35094284EFDECEE528991D (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_m3178B19CB7B6281DC7B995E4C5A6AD200EC6153B (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_index, int32_t ___1_count, RuntimeObject* ___2_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Sort_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m6E0CF4C26182BB9D788C90ABE423C2F4CD145E41 (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_array, int32_t ___1_index, int32_t ___2_length, RuntimeObject* ___3_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArraySortHelper_1_Sort_m7FA55FB83B1A81CF769D2928FCE3E06425DAC06B (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_keys, int32_t ___1_index, int32_t ___2_length, Comparison_1_tB7DE1436CB53924C2FC41FF926D074C1ACC14D89* ___3_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddEnumerable_mF75A670B3D0D8AF2E9266550725885BA19A3CB70 (List_1_t6D4D3AAF46D9E2944E578579CE720FABFD990C26* __this, RuntimeObject* ___0_enumerable, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t List_1_get_Item_m80B91085C4AB45590345F24DE9DE55833417232D (List_1_t6D4D3AAF46D9E2944E578579CE720FABFD990C26* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisIntPtr_t_mDD5DC9A593963B7FEE10D59351EA0AA0C0023879 (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_mFEF0384CF40792E1F2D1B89BFA8D57F2AE977378 (List_1_t6D4D3AAF46D9E2944E578579CE720FABFD990C26* __this, int32_t ___0_index, intptr_t ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_mFD3AECDFEA2B2C10E6C4A4400AF180A57212A0AF (List_1_t6D4D3AAF46D9E2944E578579CE720FABFD990C26* __this, intptr_t ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_EnsureCapacity_mD58612136E5F31EA08BDB8C4D659526F6801AC8B (List_1_t6D4D3AAF46D9E2944E578579CE720FABFD990C26* __this, int32_t ___0_min, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m40A676842DBAD96A16B8A64BE3ACB4F133CC81A7_inline (List_1_t6D4D3AAF46D9E2944E578579CE720FABFD990C26* __this, intptr_t ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_InsertRange_m54AAFAC76FCBEC819D4B3F86673B052D375F69CE (List_1_t6D4D3AAF46D9E2944E578579CE720FABFD990C26* __this, int32_t ___0_index, RuntimeObject* ___1_collection, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_IndexOf_mC56D43DFD8ADFA8CE54B6F2A3D2A9FD3BF21C549 (List_1_t6D4D3AAF46D9E2944E578579CE720FABFD990C26* __this, intptr_t ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_IsCompatibleObject_mE01111D6A37077AA71987C0D6B399DCCE1D47FD3 (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_m12DF6A0A682745AD74A51FDD38F76ED167C7A82D (List_1_t6D4D3AAF46D9E2944E578579CE720FABFD990C26* __this, intptr_t ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Capacity_mC7DF87D52676FCDB707F792F4854EB4AFB6EF7D2 (List_1_t6D4D3AAF46D9E2944E578579CE720FABFD990C26* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_m783EC8C62449882812B741E4DE67BF3106686D9C_inline (Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2* __this, intptr_t ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m48DD40EBB417626E48880FE8E5F1F0DE91E9C262 (Enumerator_tDBDA4B0709B5415FB3A6891D4253A5C7ADF9D658* __this, List_1_t6D4D3AAF46D9E2944E578579CE720FABFD990C26* ___0_list, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mFEEC2CDB7C8FAB7B07B0946BFB8ED8CB182AF5A9 (List_1_t6D4D3AAF46D9E2944E578579CE720FABFD990C26* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_IndexOf_TisIntPtr_t_m3EF39FCEE1A746C609E4ACA55B7DBA0B9B2FF13E (IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___0_array, intptr_t ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Insert_m765F6BAE1C5A79CAD741F2A9471BDA8E54604973 (List_1_t6D4D3AAF46D9E2944E578579CE720FABFD990C26* __this, int32_t ___0_index, intptr_t ___1_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_m4BDEB4B3ACBE5931B5698BD94322CA487B8F9589 (List_1_t6D4D3AAF46D9E2944E578579CE720FABFD990C26* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m4329C1FC8B6E6C62C2C0314F1AE9D0002EF4215A (List_1_t6D4D3AAF46D9E2944E578579CE720FABFD990C26* __this, intptr_t ___0_item, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_mCEB9F2ADE76B8447BE54DEAE7EC0E295F91FECDF_inline (Predicate_1_t1659F6182C62A18F9877F492426DD2DEC6A68A9B* __this, intptr_t ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Reverse_m7DA0B9AF4D9AAF520AE1D8EA5D66C70952E0EC9D (List_1_t6D4D3AAF46D9E2944E578579CE720FABFD990C26* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Reverse_TisIntPtr_t_m4644EEA142E76AA0835453F90B837AF3CBA906B8 (IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_m470B15C85362979FA4421C94F84AC41AC247983C (List_1_t6D4D3AAF46D9E2944E578579CE720FABFD990C26* __this, int32_t ___0_index, int32_t ___1_count, RuntimeObject* ___2_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Sort_TisIntPtr_t_mB78635DE9DC1121D3F7ED84572DFE599F40BE7E7 (IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___0_array, int32_t ___1_index, int32_t ___2_length, RuntimeObject* ___3_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArraySortHelper_1_Sort_m550DF7E1E4B5AAD082993DB3F3683640A653FCB5 (IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___0_keys, int32_t ___1_index, int32_t ___2_length, Comparison_1_tD773004B8607A867202EE8F35BD74AE6496D742A* ___3_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddEnumerable_mB42271BB905D9B0DFAA613FBA60CCAD013BA0A44 (List_1_t420B17163897A4DF994BA698744548CD81961E70* __this, RuntimeObject* ___0_enumerable, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LigatureSubstitutionRecord_t8660DC6B1D65C655D698216F72BFB3C85DDCAB94 List_1_get_Item_mB8AD74ED5BF7AC044165CC1DB56DE13AA35E3080 (List_1_t420B17163897A4DF994BA698744548CD81961E70* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisLigatureSubstitutionRecord_t8660DC6B1D65C655D698216F72BFB3C85DDCAB94_m83FD76C9CE6153FA8BAC1399EE4B32CC4BE56891 (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_m08B55D220D442584613E60854499F9B6795E3B7C (List_1_t420B17163897A4DF994BA698744548CD81961E70* __this, int32_t ___0_index, LigatureSubstitutionRecord_t8660DC6B1D65C655D698216F72BFB3C85DDCAB94 ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_m5D34622BB8796C326247AB8DED3588710917CDBE (List_1_t420B17163897A4DF994BA698744548CD81961E70* __this, LigatureSubstitutionRecord_t8660DC6B1D65C655D698216F72BFB3C85DDCAB94 ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_EnsureCapacity_m9DB2A28A18CDEF06F164BDAE9CDBBA72AA377645 (List_1_t420B17163897A4DF994BA698744548CD81961E70* __this, int32_t ___0_min, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m32E57A790444FACBD9BC16F86A57C8363980CCDA_inline (List_1_t420B17163897A4DF994BA698744548CD81961E70* __this, LigatureSubstitutionRecord_t8660DC6B1D65C655D698216F72BFB3C85DDCAB94 ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_InsertRange_m08D6F59E2F7AF654F456DB02BFCE0F4630CD6B39 (List_1_t420B17163897A4DF994BA698744548CD81961E70* __this, int32_t ___0_index, RuntimeObject* ___1_collection, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_IndexOf_mB1F3CF7F9F30093831AB619015A91170B32C33B7 (List_1_t420B17163897A4DF994BA698744548CD81961E70* __this, LigatureSubstitutionRecord_t8660DC6B1D65C655D698216F72BFB3C85DDCAB94 ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_IsCompatibleObject_mCFD2792F06553078069614B2377FA211C28D8829 (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_m6AEE9B228620C4E5A1ACCC1879664E7190E68468 (List_1_t420B17163897A4DF994BA698744548CD81961E70* __this, LigatureSubstitutionRecord_t8660DC6B1D65C655D698216F72BFB3C85DDCAB94 ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Capacity_mA9D07EF6CEE696E77162917AA2510F7F86D00AFB (List_1_t420B17163897A4DF994BA698744548CD81961E70* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mE2D564FE48C72E75796517B8E687F8C4194E58A4_inline (Action_1_t3C69DE7F9955C35DC22C9DEA53238F2CF0D23802* __this, LigatureSubstitutionRecord_t8660DC6B1D65C655D698216F72BFB3C85DDCAB94 ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_mE23D271442656549091441A140194B21E7E758EB (Enumerator_tF178DB8F022DE0B9858009BADBED741E672A04E2* __this, List_1_t420B17163897A4DF994BA698744548CD81961E70* ___0_list, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mF8F415F31533D1BEAE4D59A680D75A577B7EE5C3 (List_1_t420B17163897A4DF994BA698744548CD81961E70* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_IndexOf_TisLigatureSubstitutionRecord_t8660DC6B1D65C655D698216F72BFB3C85DDCAB94_m94FC7F2E670E87F38F1811C819D7D7E9F0A31025 (LigatureSubstitutionRecordU5BU5D_t04186B1B45C8D4F2AAB2299EE24668D39B4E9B50* ___0_array, LigatureSubstitutionRecord_t8660DC6B1D65C655D698216F72BFB3C85DDCAB94 ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Insert_mCDFAA9FBB8075FF3F71A0CD8B3D38164F01E6E02 (List_1_t420B17163897A4DF994BA698744548CD81961E70* __this, int32_t ___0_index, LigatureSubstitutionRecord_t8660DC6B1D65C655D698216F72BFB3C85DDCAB94 ___1_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_m97771CE2ACBE5E924D4A9CDD3847A6F3D676F418 (List_1_t420B17163897A4DF994BA698744548CD81961E70* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_mAD2BC8B5C08A5BE2207A08ABE2BDBEB45A50AF89 (List_1_t420B17163897A4DF994BA698744548CD81961E70* __this, LigatureSubstitutionRecord_t8660DC6B1D65C655D698216F72BFB3C85DDCAB94 ___0_item, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_m02B60E049382273FC4D120B0558764B11D3B2ADE_inline (Predicate_1_t75A270EF719DA010F98BE7630ECAA21A66DD8FFE* __this, LigatureSubstitutionRecord_t8660DC6B1D65C655D698216F72BFB3C85DDCAB94 ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Reverse_mF343508DEF6E849C3043BB04262CECDEBC29DD04 (List_1_t420B17163897A4DF994BA698744548CD81961E70* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Reverse_TisLigatureSubstitutionRecord_t8660DC6B1D65C655D698216F72BFB3C85DDCAB94_m59A5711531F3B01A7FD38FB04BFC563BA5ACF61C (LigatureSubstitutionRecordU5BU5D_t04186B1B45C8D4F2AAB2299EE24668D39B4E9B50* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_m12C609F0F65CD40DB15D3F1DE5819B457ABBCD7E (List_1_t420B17163897A4DF994BA698744548CD81961E70* __this, int32_t ___0_index, int32_t ___1_count, RuntimeObject* ___2_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Sort_TisLigatureSubstitutionRecord_t8660DC6B1D65C655D698216F72BFB3C85DDCAB94_mFAE044C7CB74A79921108CCC1A15E61AF4DCCAFD (LigatureSubstitutionRecordU5BU5D_t04186B1B45C8D4F2AAB2299EE24668D39B4E9B50* ___0_array, int32_t ___1_index, int32_t ___2_length, RuntimeObject* ___3_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArraySortHelper_1_Sort_mBF96DD2C71393DB577087D751CB701D9D7DC5D57 (LigatureSubstitutionRecordU5BU5D_t04186B1B45C8D4F2AAB2299EE24668D39B4E9B50* ___0_keys, int32_t ___1_index, int32_t ___2_length, Comparison_1_tE68D245A5CD7F54899C04EDE679025720DDC8BC0* ___3_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddEnumerable_m63117E55062699B6C56607E49B1902855F902765 (List_1_t8837CD02A40CED632406E449B6D76FF9AB3E4468* __this, RuntimeObject* ___0_enumerable, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607 List_1_get_Item_mD6F8CB74400D6D16784E14C495835979643EE5C8 (List_1_t8837CD02A40CED632406E449B6D76FF9AB3E4468* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisMarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607_m38A8E0DAA141B66DE625AFAC57A1CE80494454A6 (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_m06E1AA2D2C3EE28B83862E18860FC03F90987F80 (List_1_t8837CD02A40CED632406E449B6D76FF9AB3E4468* __this, int32_t ___0_index, MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607 ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_m58952DA47BD7D859A8AF9ED552F78C58AA5ED5F8 (List_1_t8837CD02A40CED632406E449B6D76FF9AB3E4468* __this, MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607 ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_EnsureCapacity_mEECF97630862151EC7B9E4E78E54C8B6CD44CE1E (List_1_t8837CD02A40CED632406E449B6D76FF9AB3E4468* __this, int32_t ___0_min, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m0C181B61B3E3305719C8A3206BF633E7DD84A27D_inline (List_1_t8837CD02A40CED632406E449B6D76FF9AB3E4468* __this, MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607 ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_InsertRange_m3D2ADCD47DA8085B1C4B73FC643FDD146CE30DC3 (List_1_t8837CD02A40CED632406E449B6D76FF9AB3E4468* __this, int32_t ___0_index, RuntimeObject* ___1_collection, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_IndexOf_m91AF7A4F8617158B04229C8F75C0E26E427DC888 (List_1_t8837CD02A40CED632406E449B6D76FF9AB3E4468* __this, MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607 ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_IsCompatibleObject_mF02CF0A90086FADDF391D08A99E844C15337772C (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_m5DA54316CDCDFF672431FE41B258C61EA7E9FA9C (List_1_t8837CD02A40CED632406E449B6D76FF9AB3E4468* __this, MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607 ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Capacity_m008D87C6772690F931BE144DB0ED5C0BCCF39E89 (List_1_t8837CD02A40CED632406E449B6D76FF9AB3E4468* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_m9D2103EFF0BBD8E29BA43CD08164936D8DE9CB07_inline (Action_1_t801DD0C5C7757F429A097C411325B152D78BAC33* __this, MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607 ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_mBFD97CE7FBC658EAA43E0A89B5111DB34EB9D610 (Enumerator_tCD90581783D3AA12E0C1FEDDAB2936C6A69F1644* __this, List_1_t8837CD02A40CED632406E449B6D76FF9AB3E4468* ___0_list, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m9EF60B3E6CE1B4E19B56110E6054CB3D31944BFB (List_1_t8837CD02A40CED632406E449B6D76FF9AB3E4468* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_IndexOf_TisMarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607_mF844176DACF8302F4F662DCAC4D66EE3D79E4B51 (MarkToBaseAdjustmentRecordU5BU5D_t4F120A507E14039BC63574D1815FF2E7B9D73911* ___0_array, MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607 ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Insert_m33930B40B49F189B11CC8C4AD7BF1F241CEC9C5E (List_1_t8837CD02A40CED632406E449B6D76FF9AB3E4468* __this, int32_t ___0_index, MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607 ___1_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_mD5837F88CA2CD54C4BE33C33132BFC98089BD5D7 (List_1_t8837CD02A40CED632406E449B6D76FF9AB3E4468* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_mE601E95FA154EB920C6EB4E1FC469866C677A0C8 (List_1_t8837CD02A40CED632406E449B6D76FF9AB3E4468* __this, MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607 ___0_item, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_m359A2A4F02AD08F4FD3E4714D4A018527704D814_inline (Predicate_1_t1A0605C87155DBCA6412C23F07D0AEBBDC65F25B* __this, MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607 ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Reverse_m2210C2F03B49CB361FF9AB83F945ADFE0AED86C2 (List_1_t8837CD02A40CED632406E449B6D76FF9AB3E4468* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Reverse_TisMarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607_m5F132BE6F494AFBA9EC2B18CC710487E5A11DA69 (MarkToBaseAdjustmentRecordU5BU5D_t4F120A507E14039BC63574D1815FF2E7B9D73911* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_m62378EB9C2B757BDD9EF803A3ACAEA524F139D95 (List_1_t8837CD02A40CED632406E449B6D76FF9AB3E4468* __this, int32_t ___0_index, int32_t ___1_count, RuntimeObject* ___2_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Sort_TisMarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607_m03A3DE5602EC6D91154F9CC065212AF1F2D030AB (MarkToBaseAdjustmentRecordU5BU5D_t4F120A507E14039BC63574D1815FF2E7B9D73911* ___0_array, int32_t ___1_index, int32_t ___2_length, RuntimeObject* ___3_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArraySortHelper_1_Sort_mDDAF1B2F4F29BCF90F0DF811BDAA3975C943D5CD (MarkToBaseAdjustmentRecordU5BU5D_t4F120A507E14039BC63574D1815FF2E7B9D73911* ___0_keys, int32_t ___1_index, int32_t ___2_length, Comparison_1_tBF85733D18400A902C910AD0E30BDB26192F0E9B* ___3_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddEnumerable_m1792A159A9E41312885AC11F79A4BA366CA60973 (List_1_tF7A39AE542CF9A5C63B48726F173FA38571D52C3* __this, RuntimeObject* ___0_enumerable, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MarkToMarkAdjustmentRecord_tD53618A3728435D5C904857DAC644EE27640807C List_1_get_Item_m932D436636A921BDBD8ACE9807AF92FC93878C41 (List_1_tF7A39AE542CF9A5C63B48726F173FA38571D52C3* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisMarkToMarkAdjustmentRecord_tD53618A3728435D5C904857DAC644EE27640807C_mBA2AE448CF35E3B49B08412574DC88B5DA2EC5DD (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_m97E71B2566ADDC1686FD241A1C7BB080644E9DC1 (List_1_tF7A39AE542CF9A5C63B48726F173FA38571D52C3* __this, int32_t ___0_index, MarkToMarkAdjustmentRecord_tD53618A3728435D5C904857DAC644EE27640807C ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_m74BC4D9B052F89D90F161E7CCE09374362B7B3E5 (List_1_tF7A39AE542CF9A5C63B48726F173FA38571D52C3* __this, MarkToMarkAdjustmentRecord_tD53618A3728435D5C904857DAC644EE27640807C ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_EnsureCapacity_m0BED530C57A0199BD38419764632C782B7B8788D (List_1_tF7A39AE542CF9A5C63B48726F173FA38571D52C3* __this, int32_t ___0_min, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m75222C9F0ABBFD176919C42A8981E0D32682DF96_inline (List_1_tF7A39AE542CF9A5C63B48726F173FA38571D52C3* __this, MarkToMarkAdjustmentRecord_tD53618A3728435D5C904857DAC644EE27640807C ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_InsertRange_mF2C2D40C93777B7D4FF3808877EC2E36A4FB0677 (List_1_tF7A39AE542CF9A5C63B48726F173FA38571D52C3* __this, int32_t ___0_index, RuntimeObject* ___1_collection, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_IndexOf_m2650D61FE0B4C47251D5ECA998DF5082E6BB63C7 (List_1_tF7A39AE542CF9A5C63B48726F173FA38571D52C3* __this, MarkToMarkAdjustmentRecord_tD53618A3728435D5C904857DAC644EE27640807C ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_IsCompatibleObject_m35042AC0220DAD6E6C7F40929ABD234E1980E44F (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_m5E465C45A35DD0723F62EA2DC070BA98F09BAA9B (List_1_tF7A39AE542CF9A5C63B48726F173FA38571D52C3* __this, MarkToMarkAdjustmentRecord_tD53618A3728435D5C904857DAC644EE27640807C ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Capacity_m19659A6F69DA9520FCEE03356BC92A0FEB711AF9 (List_1_tF7A39AE542CF9A5C63B48726F173FA38571D52C3* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_m537A457F9B2C719DF77C61359F8A566DCF3186AD_inline (Action_1_t1AC3D5C3F81C6F9B1B32157D44B18D2F3098FF66* __this, MarkToMarkAdjustmentRecord_tD53618A3728435D5C904857DAC644EE27640807C ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m53B2769EE2681F58CAE05386D05820D3A34A65D3 (Enumerator_t41A770DBA333774F33A9D3A1CECAEF383E2E0653* __this, List_1_tF7A39AE542CF9A5C63B48726F173FA38571D52C3* ___0_list, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m405BC4E121522B84E7199ED7504085C421AEBAC9 (List_1_tF7A39AE542CF9A5C63B48726F173FA38571D52C3* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_IndexOf_TisMarkToMarkAdjustmentRecord_tD53618A3728435D5C904857DAC644EE27640807C_m89740D2C402B3FC2D500885E14C0E3FAAB6C9887 (MarkToMarkAdjustmentRecordU5BU5D_t09E9394A7451C53E2DD62ACB4FD0CF5F52159061* ___0_array, MarkToMarkAdjustmentRecord_tD53618A3728435D5C904857DAC644EE27640807C ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Insert_m568F190A867458AB8951F8386764E79D23305E1D (List_1_tF7A39AE542CF9A5C63B48726F173FA38571D52C3* __this, int32_t ___0_index, MarkToMarkAdjustmentRecord_tD53618A3728435D5C904857DAC644EE27640807C ___1_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_m898FB697A104F82CA9BEA7EA6969BFFE48231F7B (List_1_tF7A39AE542CF9A5C63B48726F173FA38571D52C3* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m9CAF01E89B3B7CA037242D8919802B85F0B73BC8 (List_1_tF7A39AE542CF9A5C63B48726F173FA38571D52C3* __this, MarkToMarkAdjustmentRecord_tD53618A3728435D5C904857DAC644EE27640807C ___0_item, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_m59DD28C260255EA76ACBDE643536314F9BF372F7_inline (Predicate_1_t86696A7752B102AFC6ED1D86EE72BB4CD74918CF* __this, MarkToMarkAdjustmentRecord_tD53618A3728435D5C904857DAC644EE27640807C ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Reverse_m596E134CCD33A7370EEA1A3B973883BC7E551A44 (List_1_tF7A39AE542CF9A5C63B48726F173FA38571D52C3* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Reverse_TisMarkToMarkAdjustmentRecord_tD53618A3728435D5C904857DAC644EE27640807C_m304D980C6E0E898F064E5E311E048D6D9BC97CE2 (MarkToMarkAdjustmentRecordU5BU5D_t09E9394A7451C53E2DD62ACB4FD0CF5F52159061* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_m4232D966ED26A2B54F6DA4EFB7DD7F4F44B360F4 (List_1_tF7A39AE542CF9A5C63B48726F173FA38571D52C3* __this, int32_t ___0_index, int32_t ___1_count, RuntimeObject* ___2_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Sort_TisMarkToMarkAdjustmentRecord_tD53618A3728435D5C904857DAC644EE27640807C_m0AC86D4BEE4B93C5DBC9514E2EBEF3B3528B4A07 (MarkToMarkAdjustmentRecordU5BU5D_t09E9394A7451C53E2DD62ACB4FD0CF5F52159061* ___0_array, int32_t ___1_index, int32_t ___2_length, RuntimeObject* ___3_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArraySortHelper_1_Sort_mB5065982019B3A53460EA6201CDA10F11387D6EF (MarkToMarkAdjustmentRecordU5BU5D_t09E9394A7451C53E2DD62ACB4FD0CF5F52159061* ___0_keys, int32_t ___1_index, int32_t ___2_length, Comparison_1_t739F3AE6EBC2BD5F3A9FF0FE425BBA1EDE2AF7B3* ___3_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddEnumerable_m824B831DF59A332409910EE4AD627BFB2DEFC2AE (List_1_tC99D7D75F0197EF8D9C0B56B71A1B77C6B6C8AC6* __this, RuntimeObject* ___0_enumerable, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MeshInfoBindings_t75C3901D8003725F85E8FD2F33C1712A92DB3EAF List_1_get_Item_m18F31D575DF8E0840608AD65332429C6EF599644 (List_1_tC99D7D75F0197EF8D9C0B56B71A1B77C6B6C8AC6* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisMeshInfoBindings_t75C3901D8003725F85E8FD2F33C1712A92DB3EAF_mCED93CC50AA75D397596087807FA64731F2DB2B5 (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_m860416881396CDE2C8A0BC4F62995CD3A0B1D851 (List_1_tC99D7D75F0197EF8D9C0B56B71A1B77C6B6C8AC6* __this, int32_t ___0_index, MeshInfoBindings_t75C3901D8003725F85E8FD2F33C1712A92DB3EAF ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_m1ACBAD225ECA81E408127C86E4BAAE3865014613 (List_1_tC99D7D75F0197EF8D9C0B56B71A1B77C6B6C8AC6* __this, MeshInfoBindings_t75C3901D8003725F85E8FD2F33C1712A92DB3EAF ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_EnsureCapacity_mDA7A0120E14A4D287D6F01CC44F64DA4CA061EC7 (List_1_tC99D7D75F0197EF8D9C0B56B71A1B77C6B6C8AC6* __this, int32_t ___0_min, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mF385946D3C21B253EEBD0914E26E8AB90B6FB8A7_inline (List_1_tC99D7D75F0197EF8D9C0B56B71A1B77C6B6C8AC6* __this, MeshInfoBindings_t75C3901D8003725F85E8FD2F33C1712A92DB3EAF ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_InsertRange_m8F834A7B7E2FE4C754CFF38D8B6364ED8E5043E8 (List_1_tC99D7D75F0197EF8D9C0B56B71A1B77C6B6C8AC6* __this, int32_t ___0_index, RuntimeObject* ___1_collection, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_IndexOf_m394E113D68BEA74889454FF4B196486B550E8976 (List_1_tC99D7D75F0197EF8D9C0B56B71A1B77C6B6C8AC6* __this, MeshInfoBindings_t75C3901D8003725F85E8FD2F33C1712A92DB3EAF ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_IsCompatibleObject_m6CCA331B33F1DFD12BF79547BAF82E64869C07EB (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_m08AD398220DEE98CD7BCDA879F0EC7111ED884FB (List_1_tC99D7D75F0197EF8D9C0B56B71A1B77C6B6C8AC6* __this, MeshInfoBindings_t75C3901D8003725F85E8FD2F33C1712A92DB3EAF ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Capacity_mBA78BE093D3C14FC2571FBBB1A745C75F4121BE3 (List_1_tC99D7D75F0197EF8D9C0B56B71A1B77C6B6C8AC6* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_m52BBC04008C888EC507D9985F7A2136BBDEF803C_inline (Action_1_tFB4CF7B05ED4457EF963EF457274973F784847E1* __this, MeshInfoBindings_t75C3901D8003725F85E8FD2F33C1712A92DB3EAF ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m58623E42908B47DD3729F6954AA1E5D768D5D1F3 (Enumerator_t8A20D5B25F288B18A262EE8D0F6E09A214832BE9* __this, List_1_tC99D7D75F0197EF8D9C0B56B71A1B77C6B6C8AC6* ___0_list, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mDDF6BDDDC562B198F4A175C8725F492617AD2B73 (List_1_tC99D7D75F0197EF8D9C0B56B71A1B77C6B6C8AC6* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_IndexOf_TisMeshInfoBindings_t75C3901D8003725F85E8FD2F33C1712A92DB3EAF_mEE0B6D6841AE1F568E128A2D4E9D762B5D968998 (MeshInfoBindingsU5BU5D_tAB8E8C31A391A18DE5B83869CC7C3C43DA40C641* ___0_array, MeshInfoBindings_t75C3901D8003725F85E8FD2F33C1712A92DB3EAF ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Insert_mCDDF99E07C935DDAE809AE3BB5232D93E8C07811 (List_1_tC99D7D75F0197EF8D9C0B56B71A1B77C6B6C8AC6* __this, int32_t ___0_index, MeshInfoBindings_t75C3901D8003725F85E8FD2F33C1712A92DB3EAF ___1_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_mDA8E142C41C3A3D768C01A93D454C3CE43A6BF7C (List_1_tC99D7D75F0197EF8D9C0B56B71A1B77C6B6C8AC6* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m6420B669AC716755BB9E1EB3FBE6C093D3E41750 (List_1_tC99D7D75F0197EF8D9C0B56B71A1B77C6B6C8AC6* __this, MeshInfoBindings_t75C3901D8003725F85E8FD2F33C1712A92DB3EAF ___0_item, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_mA988E072F30C796A4800138B64AA90FB0C84685E_inline (Predicate_1_t09023B0AB7D2D62F61A5FE077D1F3DF03EFB51D3* __this, MeshInfoBindings_t75C3901D8003725F85E8FD2F33C1712A92DB3EAF ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Reverse_m834F8C46FFE8EC255D3B8D935A5C6693FB97C906 (List_1_tC99D7D75F0197EF8D9C0B56B71A1B77C6B6C8AC6* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Reverse_TisMeshInfoBindings_t75C3901D8003725F85E8FD2F33C1712A92DB3EAF_mC60D8F1E12334580D3510C64D54D98073D4DC409 (MeshInfoBindingsU5BU5D_tAB8E8C31A391A18DE5B83869CC7C3C43DA40C641* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_m3E7A925CE83A78D3EEDC0E2E389EEE5E0823A560 (List_1_tC99D7D75F0197EF8D9C0B56B71A1B77C6B6C8AC6* __this, int32_t ___0_index, int32_t ___1_count, RuntimeObject* ___2_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Sort_TisMeshInfoBindings_t75C3901D8003725F85E8FD2F33C1712A92DB3EAF_m098DB8E05156D34EBB60B201656711C886B324E6 (MeshInfoBindingsU5BU5D_tAB8E8C31A391A18DE5B83869CC7C3C43DA40C641* ___0_array, int32_t ___1_index, int32_t ___2_length, RuntimeObject* ___3_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArraySortHelper_1_Sort_mBC24450F902D3503D20BFBB20136742F2D8FF4B5 (MeshInfoBindingsU5BU5D_tAB8E8C31A391A18DE5B83869CC7C3C43DA40C641* ___0_keys, int32_t ___1_index, int32_t ___2_length, Comparison_1_t214C1E54D5D8ACACB1511E4F54BAB8E01EAF78B5* ___3_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddEnumerable_m25823106E60B95872432336B618BDD1803315582 (List_1_tD497C1314C02F6E7345D74565C2424A939B46AA7* __this, RuntimeObject* ___0_enumerable, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MultipleSubstitutionRecord_t668A640AFADBD46E3D4EC3A8417D0A02764DF87B List_1_get_Item_m2164802BF9C9903281D99DBD3B1D41A4C76B29EC (List_1_tD497C1314C02F6E7345D74565C2424A939B46AA7* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisMultipleSubstitutionRecord_t668A640AFADBD46E3D4EC3A8417D0A02764DF87B_m843FD4A465B7204A130644153874A8AD60827141 (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_mC8D2DF8A365FB9E113B142A9A5FC3B8A0E43F061 (List_1_tD497C1314C02F6E7345D74565C2424A939B46AA7* __this, int32_t ___0_index, MultipleSubstitutionRecord_t668A640AFADBD46E3D4EC3A8417D0A02764DF87B ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_mA0DD34F99218D5498D14A1F12196EA06898974BB (List_1_tD497C1314C02F6E7345D74565C2424A939B46AA7* __this, MultipleSubstitutionRecord_t668A640AFADBD46E3D4EC3A8417D0A02764DF87B ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_EnsureCapacity_m180216A9AD531D62ED1FCA10218B1C20ED75B01D (List_1_tD497C1314C02F6E7345D74565C2424A939B46AA7* __this, int32_t ___0_min, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m0F287C5DA436E45442C23034E2F0C1BCE2B8C99D_inline (List_1_tD497C1314C02F6E7345D74565C2424A939B46AA7* __this, MultipleSubstitutionRecord_t668A640AFADBD46E3D4EC3A8417D0A02764DF87B ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_InsertRange_m9FC373D72507EFA8AA926B0035F0E4326AA4661B (List_1_tD497C1314C02F6E7345D74565C2424A939B46AA7* __this, int32_t ___0_index, RuntimeObject* ___1_collection, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_IndexOf_m0C575610DA6F18B107BF64C0419E839CC142DF77 (List_1_tD497C1314C02F6E7345D74565C2424A939B46AA7* __this, MultipleSubstitutionRecord_t668A640AFADBD46E3D4EC3A8417D0A02764DF87B ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_IsCompatibleObject_m90D54C1B434CCE6C46663223C6C888D98EBDE0F2 (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_mFE8D52B1E9514520EF5B9D6EAC276E67F2297F43 (List_1_tD497C1314C02F6E7345D74565C2424A939B46AA7* __this, MultipleSubstitutionRecord_t668A640AFADBD46E3D4EC3A8417D0A02764DF87B ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Capacity_m961E626CCEC05EEB952C2734F1EFA16A4DAF8353 (List_1_tD497C1314C02F6E7345D74565C2424A939B46AA7* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mDD8EACF0FE87BE9E69F0AAEF47DDD885A2878F14_inline (Action_1_t45EE9233F562CACBFAD099A7F22DC3DEC41DC5F2* __this, MultipleSubstitutionRecord_t668A640AFADBD46E3D4EC3A8417D0A02764DF87B ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_mE1163009922C13BBE682EACE71A46101884D17B4 (Enumerator_t801050780B43627808ABA984A28657A83654A691* __this, List_1_tD497C1314C02F6E7345D74565C2424A939B46AA7* ___0_list, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m84D08CA936E8D742C6695320BE434E741EC394DD (List_1_tD497C1314C02F6E7345D74565C2424A939B46AA7* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_IndexOf_TisMultipleSubstitutionRecord_t668A640AFADBD46E3D4EC3A8417D0A02764DF87B_mA1D1C4194AB58A1C5C96F9C604D736B06157CC9E (MultipleSubstitutionRecordU5BU5D_t97C158785342D9FF7B0B89861AC760DE6E38E934* ___0_array, MultipleSubstitutionRecord_t668A640AFADBD46E3D4EC3A8417D0A02764DF87B ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Insert_mDAC169475E46470CB29608353F26912ED76A1FC9 (List_1_tD497C1314C02F6E7345D74565C2424A939B46AA7* __this, int32_t ___0_index, MultipleSubstitutionRecord_t668A640AFADBD46E3D4EC3A8417D0A02764DF87B ___1_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_m90B7FA9455E3D72C4484BE06F69564F8CB1BA700 (List_1_tD497C1314C02F6E7345D74565C2424A939B46AA7* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m510D1D4DE405150EAA15D441E0CC258E93A0B356 (List_1_tD497C1314C02F6E7345D74565C2424A939B46AA7* __this, MultipleSubstitutionRecord_t668A640AFADBD46E3D4EC3A8417D0A02764DF87B ___0_item, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_m8B262358618A1C8806C5F73FAC6805666D1E1D30_inline (Predicate_1_tB19E1C7275588953C5ED1BC720F0294C2011833E* __this, MultipleSubstitutionRecord_t668A640AFADBD46E3D4EC3A8417D0A02764DF87B ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Reverse_mB3CBE4370D0FA013BAFBE1137FAC0EB8E72B75BC (List_1_tD497C1314C02F6E7345D74565C2424A939B46AA7* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Reverse_TisMultipleSubstitutionRecord_t668A640AFADBD46E3D4EC3A8417D0A02764DF87B_mECAA0E7F9376FE8592BF74D8038E58A4C90A0BAF (MultipleSubstitutionRecordU5BU5D_t97C158785342D9FF7B0B89861AC760DE6E38E934* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_m294CF087114C8BCD7ED5C165B49965B2E63C2E7D (List_1_tD497C1314C02F6E7345D74565C2424A939B46AA7* __this, int32_t ___0_index, int32_t ___1_count, RuntimeObject* ___2_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Sort_TisMultipleSubstitutionRecord_t668A640AFADBD46E3D4EC3A8417D0A02764DF87B_m9B714671AD166C36DC78E505CA0B7739F6AF7084 (MultipleSubstitutionRecordU5BU5D_t97C158785342D9FF7B0B89861AC760DE6E38E934* ___0_array, int32_t ___1_index, int32_t ___2_length, RuntimeObject* ___3_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArraySortHelper_1_Sort_m7AC53717D492DB26AEB178A9A8E35EA2ECA12A24 (MultipleSubstitutionRecordU5BU5D_t97C158785342D9FF7B0B89861AC760DE6E38E934* ___0_keys, int32_t ___1_index, int32_t ___2_length, Comparison_1_t9A125FC4BBCDF36E042FD4E1BC9A5C86A812BB72* ___3_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddEnumerable_m4E122E2502A8627C778FE4556937C624B46C7997 (List_1_t480A595B8D45A9019FF0E9A33AD53D81F7355674* __this, RuntimeObject* ___0_enumerable, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ResourceHandle_tAB7888F3AB5071C94127D0D46AAB3D702BC4B9F8 List_1_get_Item_mD173DE9CD6A82455F2B1CB9778BE90B63FF73391 (List_1_t480A595B8D45A9019FF0E9A33AD53D81F7355674* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisResourceHandle_tAB7888F3AB5071C94127D0D46AAB3D702BC4B9F8_mA91A20BD242392A65004CD8897E77F0A9BA80940 (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_mB2BEDCB542156BEC23496A84CFE200BC8782E57D (List_1_t480A595B8D45A9019FF0E9A33AD53D81F7355674* __this, int32_t ___0_index, ResourceHandle_tAB7888F3AB5071C94127D0D46AAB3D702BC4B9F8 ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_m28AFC3F6D5F6FE74B5CC7A3E42AC5CC6FFE0F2B8 (List_1_t480A595B8D45A9019FF0E9A33AD53D81F7355674* __this, ResourceHandle_tAB7888F3AB5071C94127D0D46AAB3D702BC4B9F8 ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_EnsureCapacity_m5056E5ED803534E727AD5E9FAEC838428ACC47FB (List_1_t480A595B8D45A9019FF0E9A33AD53D81F7355674* __this, int32_t ___0_min, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mF04CCC12DEF9C866AC5DC5330FDC48AB65CCA024_inline (List_1_t480A595B8D45A9019FF0E9A33AD53D81F7355674* __this, ResourceHandle_tAB7888F3AB5071C94127D0D46AAB3D702BC4B9F8 ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_InsertRange_m2E53EA9AC569CA67C76F3C118E063BBCF7704CAE (List_1_t480A595B8D45A9019FF0E9A33AD53D81F7355674* __this, int32_t ___0_index, RuntimeObject* ___1_collection, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_IndexOf_m69A02C552A18C10D19C781295373AB8A8AEE5031 (List_1_t480A595B8D45A9019FF0E9A33AD53D81F7355674* __this, ResourceHandle_tAB7888F3AB5071C94127D0D46AAB3D702BC4B9F8 ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_IsCompatibleObject_m4F61B731116EA18BCF77D3B5EA97CC7F6B74BA8E (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_mD8BB26D8A824572630E9C0E3F4D1DC9A3120F44A (List_1_t480A595B8D45A9019FF0E9A33AD53D81F7355674* __this, ResourceHandle_tAB7888F3AB5071C94127D0D46AAB3D702BC4B9F8 ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Capacity_m5206BE528EF098F0A05B20F06F65AF72FD28CC3D (List_1_t480A595B8D45A9019FF0E9A33AD53D81F7355674* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_m32309F80523567ABFD485831B4D6CF626A350927_inline (Action_1_tA9D6FD07CF73C3DCEA4B280667EEFD02150EEA98* __this, ResourceHandle_tAB7888F3AB5071C94127D0D46AAB3D702BC4B9F8 ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m835D87EAED18476EAAF9606BFFC75C69A7EF65A8 (Enumerator_t1F35D895285609CB64A4AE42EEBBACABF575870C* __this, List_1_t480A595B8D45A9019FF0E9A33AD53D81F7355674* ___0_list, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mBB1736A52639A5F2DB93050D54A1E96F9ABDEE47 (List_1_t480A595B8D45A9019FF0E9A33AD53D81F7355674* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_IndexOf_TisResourceHandle_tAB7888F3AB5071C94127D0D46AAB3D702BC4B9F8_m8332FAAEA1F00BD676F75CB7D21BDDE5EB8108FC (ResourceHandleU5BU5D_tD8EAD492F528F246F46563C67691360F9F2B0918* ___0_array, ResourceHandle_tAB7888F3AB5071C94127D0D46AAB3D702BC4B9F8 ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Insert_m87451DF4EDEDCFD7A4F723FD3862823FC8208F03 (List_1_t480A595B8D45A9019FF0E9A33AD53D81F7355674* __this, int32_t ___0_index, ResourceHandle_tAB7888F3AB5071C94127D0D46AAB3D702BC4B9F8 ___1_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_m193AD81345965E50C83F85222E0549DC26D12328 (List_1_t480A595B8D45A9019FF0E9A33AD53D81F7355674* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_mCE97C009362B0A9CD4552C1B51C5E2A86246CA15 (List_1_t480A595B8D45A9019FF0E9A33AD53D81F7355674* __this, ResourceHandle_tAB7888F3AB5071C94127D0D46AAB3D702BC4B9F8 ___0_item, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_m34AFEF07BE56D23BA7F5BA2338AC3C3F1ED777CF_inline (Predicate_1_tD559AF1002ABFFC541AF884654337A564D28B733* __this, ResourceHandle_tAB7888F3AB5071C94127D0D46AAB3D702BC4B9F8 ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Reverse_m6AFF276121D16C2E2B20450B50341A6290ADEB1A (List_1_t480A595B8D45A9019FF0E9A33AD53D81F7355674* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Reverse_TisResourceHandle_tAB7888F3AB5071C94127D0D46AAB3D702BC4B9F8_m21433AAF5C37ED5C37B245798D8BED8D43C21BF4 (ResourceHandleU5BU5D_tD8EAD492F528F246F46563C67691360F9F2B0918* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_m741493F9355B59A4913E75FC9DBAF48FF66DFA57 (List_1_t480A595B8D45A9019FF0E9A33AD53D81F7355674* __this, int32_t ___0_index, int32_t ___1_count, RuntimeObject* ___2_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Sort_TisResourceHandle_tAB7888F3AB5071C94127D0D46AAB3D702BC4B9F8_m15B3CC39BEC812E83A1A2CE71AE193200A9E1762 (ResourceHandleU5BU5D_tD8EAD492F528F246F46563C67691360F9F2B0918* ___0_array, int32_t ___1_index, int32_t ___2_length, RuntimeObject* ___3_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArraySortHelper_1_Sort_m7051900D4D21A46096B77E03BE73D6D5907DA7E4 (ResourceHandleU5BU5D_tD8EAD492F528F246F46563C67691360F9F2B0918* ___0_keys, int32_t ___1_index, int32_t ___2_length, Comparison_1_tDCA291E0A9EC3450564AE324BB4A8232F7171A75* ___3_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddEnumerable_m7306D508C149BFCA2F5AF72B013F75A308A08204 (List_1_t9B68833848E4C4D7F623C05F6B77F0449396354A* __this, RuntimeObject* ___0_enumerable, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t List_1_get_Item_m934DB856B4560B22F57FDEEF351E373E5F1B6324 (List_1_t9B68833848E4C4D7F623C05F6B77F0449396354A* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mD81B5632275C9C89651C1B357F26058E8E76A526 (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_m92246880796BA27EBA18129EC97C00C65F17E7C5 (List_1_t9B68833848E4C4D7F623C05F6B77F0449396354A* __this, int32_t ___0_index, uint32_t ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_m88BD32FBFE050A30CA8A331F209B9D6FF6C3A423 (List_1_t9B68833848E4C4D7F623C05F6B77F0449396354A* __this, uint32_t ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_EnsureCapacity_m5DB123345126DC3D92D13E5F9A545806C4184296 (List_1_t9B68833848E4C4D7F623C05F6B77F0449396354A* __this, int32_t ___0_min, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m084F52E7C436446A23080F15F803212491693F6B_inline (List_1_t9B68833848E4C4D7F623C05F6B77F0449396354A* __this, uint32_t ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_InsertRange_m29B3B6011A4CF0D086BC1615992ABBF9045CDFAB (List_1_t9B68833848E4C4D7F623C05F6B77F0449396354A* __this, int32_t ___0_index, RuntimeObject* ___1_collection, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_IndexOf_mABB902B1AAE8B2D146C0ADBE69F1AE07DD33A824 (List_1_t9B68833848E4C4D7F623C05F6B77F0449396354A* __this, uint32_t ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_IsCompatibleObject_m05B0D418D70673CEA58C4991E8C26A67B469ECFC (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_mA3FC146588710EE5814FEBEFABB180FB2EA4D4D8 (List_1_t9B68833848E4C4D7F623C05F6B77F0449396354A* __this, uint32_t ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Capacity_mEF17C2D6137726F17AB42310C55C8F88A0E0537D (List_1_t9B68833848E4C4D7F623C05F6B77F0449396354A* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mA1BDAC0ADA0ABAC07CC491658788A24E6DC8B7EE_inline (Action_1_t831946BFD83EBA9DE498D3E682F1D4F14D17878D* __this, uint32_t ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m25DDA08EFA61F9AD346678D19BC674E2AD71A7F7 (Enumerator_tE11EF15BE791F6B44F4B296E90476ADCDDC5D87F* __this, List_1_t9B68833848E4C4D7F623C05F6B77F0449396354A* ___0_list, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mD6C4D49C755FF9AD73456488D5FAABFD532AAEA9 (List_1_t9B68833848E4C4D7F623C05F6B77F0449396354A* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_IndexOf_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mFC8BDE74B86C42A57D89FDA28EED3DDEF7B67A17 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_array, uint32_t ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Insert_mA1CAB048AF0A6CB36BD753A432BB19402C898B53 (List_1_t9B68833848E4C4D7F623C05F6B77F0449396354A* __this, int32_t ___0_index, uint32_t ___1_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_mFBE8510D49E8C1843C279A9D3FF8C4BE83CDECD0 (List_1_t9B68833848E4C4D7F623C05F6B77F0449396354A* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m7F278AC340D3D507A585015EA22C309049AC91AC (List_1_t9B68833848E4C4D7F623C05F6B77F0449396354A* __this, uint32_t ___0_item, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_mCE33776BF08B37A05CCD7FBB46335E5FB6B215DC_inline (Predicate_1_t2F212B682F64543895DDB2A14A8816A433567EFF* __this, uint32_t ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Reverse_m3112F78E91DA387ACEF86675EEF7D0F004ED07D8 (List_1_t9B68833848E4C4D7F623C05F6B77F0449396354A* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Reverse_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mFFA9B7CF98584CC40CD31B6897ABB99499611E7E (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_m0C4A4981F6581FBF0C85D77719B15FD4A24755C3 (List_1_t9B68833848E4C4D7F623C05F6B77F0449396354A* __this, int32_t ___0_index, int32_t ___1_count, RuntimeObject* ___2_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Sort_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mBA485F66F726C6BFFE9C6F718D41776E17DAB3A8 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_array, int32_t ___1_index, int32_t ___2_length, RuntimeObject* ___3_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArraySortHelper_1_Sort_mFC27B3DD081A42FB1EC554B088A4A73805D2C2FF (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_keys, int32_t ___1_index, int32_t ___2_length, Comparison_1_tF77ABBDA0482B2BE658FA3EE0DFA2E0ECB09A60B* ___3_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddEnumerable_m44B5C2177E9403DB0E3DC2BC6E590CDA7266BE79_gshared (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* __this, RuntimeObject* ___0_enumerable, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* List_1_get_Item_m02336594E8F76D7313E2BCB7A3ED5ABD13B4D515_gshared (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisIl2CppSharedGenericObject_mE7A1EEC53480BA1ED6C827938ADAF45B127DD054_gshared (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_mCD8F7775F9C4842958A7188EBC0EBF1BE03101EF_gshared (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* __this, int32_t ___0_index, Il2CppSharedGenericObject* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_mCC24A812DFC30C3DE2230E3C8EE705871C1DFF81_gshared (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* __this, Il2CppSharedGenericObject* ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_EnsureCapacity_m89719BB37EEDA80E6AD7FAC5D1AAC5A47DDE86B5_gshared (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* __this, int32_t ___0_min, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m0CE6E39234ED33F5195AABC8029D06D4756C75C1_gshared_inline (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* __this, Il2CppSharedGenericObject* ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_InsertRange_m7B9D6C4AB69B4EA07C23832C6109C25C21E99804_gshared (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* __this, int32_t ___0_index, RuntimeObject* ___1_collection, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_IndexOf_m4B13B6BE7AA6327431F1BE406264329892975DE9_gshared (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* __this, Il2CppSharedGenericObject* ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_IsCompatibleObject_m9E5E0DF2443D88570595AEA0FEF7D7122455EB26_gshared (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_m63E643DC9A821297E2EBF9085D93B39BFC2F9DCE_gshared (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* __this, Il2CppSharedGenericObject* ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Capacity_m4B62593B8671BB60809057D57DC60568557315E6_gshared (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mDB8F7C7381C08B4DCE4E409D2FA4073BC17F90B5_gshared_inline (Action_1_tF0E1373A391479E6E235E0D82CE1EF1DE6B6C505* __this, Il2CppSharedGenericObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_mB0C2B8891214015BE286DC32F260DEBDFAD317E9_gshared (Enumerator_tC367FBE981D257FF6A6357382526F6EC9FF3B2F9* __this, List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* ___0_list, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m54D719307910A9DC9CD4DEFA8AE2626F49EB7516_gshared (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_IndexOf_TisIl2CppSharedGenericObject_m0C73DE72012C676D6E4354C82EA6550BBADC3D33_gshared (__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* ___0_array, Il2CppSharedGenericObject* ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Insert_mC5A8238645AD1D203E75313802D4DC78BDE7857E_gshared (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* __this, int32_t ___0_index, Il2CppSharedGenericObject* ___1_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_m36F68EA689DB109415094085A496D5EA21E2F23C_gshared (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m0AC731A08F1400089DD478E2D366804833660796_gshared (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* __this, Il2CppSharedGenericObject* ___0_item, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_mDF332C0CEB003C0D86A1E3A194ECFA96D424E34C_gshared_inline (Predicate_1_t586817D6627D147076FFDCC73DA7BEC23132FA88* __this, Il2CppSharedGenericObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Reverse_m97197478E9535E327B4509C065B30BB0DD6F1F99_gshared (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Reverse_TisIl2CppSharedGenericObject_mFAAB0AB623769BB8245CDF219832F2FE75427541_gshared (__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_m15AB808AB5390BF8B6D7A057EDA17A54A80A1A6A_gshared (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* __this, int32_t ___0_index, int32_t ___1_count, RuntimeObject* ___2_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Sort_TisIl2CppSharedGenericObject_m8C8A5C187776FEA1D5CC7F053F0DC63B32764D61_gshared (__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* ___0_array, int32_t ___1_index, int32_t ___2_length, RuntimeObject* ___3_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArraySortHelper_1_Sort_m745CBFE82472049A441AC9522C4B8FA33F5AF970_gshared (__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* ___0_keys, int32_t ___1_index, int32_t ___2_length, Comparison_1_tC9FBFF747FA0455CD35BD7D097691DE20DDCC2B5* ___3_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m5C66A91DC68887BE203985B56EF2F74222E9AF50_fshared (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF* __this, List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* ___0_list, const RuntimeMethod* method) ;

IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F (int32_t ___0_argument, int32_t ___1_resource, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC (int32_t ___0_argument, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddEnumerable_m0D03C24E342A0F77A0042603E40AD506136B684F (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, RuntimeObject* ___0_enumerable, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41 (RuntimeArray* ___0_sourceArray, int32_t ___1_sourceIndex, RuntimeArray* ___2_destinationArray, int32_t ___3_destinationIndex, int32_t ___4_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRange_IndexException_mC7661B8C6DD827679C95FC6B6C08F8724174936D (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m0F7A078274F301B83DFC51191B3AFC763DE9C4D0 (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_m95629806F31CF369D937590912E0B6A53FF7C587 (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_index, int32_t ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910 (RuntimeObject* ___0_value, Type_t* ___1_targetType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_m378B392086AAB6F400944FA9839516326B3F7BB8 (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_EnsureCapacity_m86DF3071CD67B1463C1CF26C7791331D70D431C0 (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_min, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_item, const RuntimeMethod* method) ;
inline int32_t List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, const RuntimeMethod*))List_1_get_Count_mD2ED26ACAF3BAF386FFEA83893BA51DB9FD8BA30_fshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_InsertRange_m1D3DE2073A8946E2D1113677F2062F35881FA7B8 (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_index, RuntimeObject* ___1_collection, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_IndexOf_mC3D1A2CECAC0E3D42C78B43772E1BD3D0333C450 (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_IsCompatibleObject_m0C506FD38C6F16AC8A7700817EF89401910F873C (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_m4FD96E89F15844C90032C7386BAB528817F1FF5B (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_item, const RuntimeMethod* method) ;
inline void List_1_CopyTo_m030AAF730ACCF739D45671086EBF4786FED908D5 (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method)
{
	((  void (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*, int32_t, const RuntimeMethod*))List_1_CopyTo_m5180D7A430072A21034A0692CDD1D565ADEE2ABB_fshared)(__this, ___0_array, ___1_arrayIndex, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Capacity_mA667E9DF466C9574AC22A4B0FE0E358D818505CC (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mAC3C34BA1905AB5B79E483CD9BB082B7D667F703_inline (Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* __this, int32_t ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowInvalidOperationException_InvalidOperation_EnumFailedVersion_m5331E2E0EC0E36843D53F439C2529530595ACE9F (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_mB5D11409C5765078140B3C3652FEF06536FDFA6B (Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC* __this, List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___0_list, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA (int32_t ___0_resource, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m30DD6F0F8DFBA9856BF7220A3CDB1C89ECEC0D98 (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_IndexOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m22CB8CB6C30E1C3E70C8662D7A290B88EF5007F3 (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_array, int32_t ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Insert_mC1B6D4E6CC94D8BA82A60B2F80CE9684D9345AAE (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_index, int32_t ___1_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_m76C4CDACF47BA529BAFADFC8D5E13DB9587F4004 (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m2B41E5B9E061DD4D5F58B693018024AADF2AD7F5 (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_item, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_mD16C664FFE93598D1C12AC86190D12B0F90B5419_inline (Predicate_1_t6CDE3111264F492F4F13277756366A07CA78A4C3* __this, int32_t ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Reverse_mE0857BE335F36FD830B3A301AA7BF67F2F3C783F (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Reverse_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m57764BD8E3718881AE35094284EFDECEE528991D (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_m3178B19CB7B6281DC7B995E4C5A6AD200EC6153B (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_index, int32_t ___1_count, RuntimeObject* ___2_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Sort_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m6E0CF4C26182BB9D788C90ABE423C2F4CD145E41 (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_array, int32_t ___1_index, int32_t ___2_length, RuntimeObject* ___3_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArraySortHelper_1_Sort_m7FA55FB83B1A81CF769D2928FCE3E06425DAC06B (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_keys, int32_t ___1_index, int32_t ___2_length, Comparison_1_tB7DE1436CB53924C2FC41FF926D074C1ACC14D89* ___3_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddEnumerable_mF75A670B3D0D8AF2E9266550725885BA19A3CB70 (List_1_t6D4D3AAF46D9E2944E578579CE720FABFD990C26* __this, RuntimeObject* ___0_enumerable, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t List_1_get_Item_m80B91085C4AB45590345F24DE9DE55833417232D (List_1_t6D4D3AAF46D9E2944E578579CE720FABFD990C26* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisIntPtr_t_mDD5DC9A593963B7FEE10D59351EA0AA0C0023879 (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_mFEF0384CF40792E1F2D1B89BFA8D57F2AE977378 (List_1_t6D4D3AAF46D9E2944E578579CE720FABFD990C26* __this, int32_t ___0_index, intptr_t ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_mFD3AECDFEA2B2C10E6C4A4400AF180A57212A0AF (List_1_t6D4D3AAF46D9E2944E578579CE720FABFD990C26* __this, intptr_t ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_EnsureCapacity_mD58612136E5F31EA08BDB8C4D659526F6801AC8B (List_1_t6D4D3AAF46D9E2944E578579CE720FABFD990C26* __this, int32_t ___0_min, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m40A676842DBAD96A16B8A64BE3ACB4F133CC81A7_inline (List_1_t6D4D3AAF46D9E2944E578579CE720FABFD990C26* __this, intptr_t ___0_item, const RuntimeMethod* method) ;
inline int32_t List_1_get_Count_m3C633C1D40D1D824C9EDF031FA1FF2AB5CD586E2_inline (List_1_t6D4D3AAF46D9E2944E578579CE720FABFD990C26* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t6D4D3AAF46D9E2944E578579CE720FABFD990C26*, const RuntimeMethod*))List_1_get_Count_mD2ED26ACAF3BAF386FFEA83893BA51DB9FD8BA30_fshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_InsertRange_m54AAFAC76FCBEC819D4B3F86673B052D375F69CE (List_1_t6D4D3AAF46D9E2944E578579CE720FABFD990C26* __this, int32_t ___0_index, RuntimeObject* ___1_collection, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_IndexOf_mC56D43DFD8ADFA8CE54B6F2A3D2A9FD3BF21C549 (List_1_t6D4D3AAF46D9E2944E578579CE720FABFD990C26* __this, intptr_t ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_IsCompatibleObject_mE01111D6A37077AA71987C0D6B399DCCE1D47FD3 (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_m12DF6A0A682745AD74A51FDD38F76ED167C7A82D (List_1_t6D4D3AAF46D9E2944E578579CE720FABFD990C26* __this, intptr_t ___0_item, const RuntimeMethod* method) ;
inline void List_1_CopyTo_m78D1194C1B144CF0D8CFC975434166E718165E93 (List_1_t6D4D3AAF46D9E2944E578579CE720FABFD990C26* __this, IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6D4D3AAF46D9E2944E578579CE720FABFD990C26*, IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832*, int32_t, const RuntimeMethod*))List_1_CopyTo_m5180D7A430072A21034A0692CDD1D565ADEE2ABB_fshared)(__this, ___0_array, ___1_arrayIndex, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Capacity_mC7DF87D52676FCDB707F792F4854EB4AFB6EF7D2 (List_1_t6D4D3AAF46D9E2944E578579CE720FABFD990C26* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_m783EC8C62449882812B741E4DE67BF3106686D9C_inline (Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2* __this, intptr_t ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m48DD40EBB417626E48880FE8E5F1F0DE91E9C262 (Enumerator_tDBDA4B0709B5415FB3A6891D4253A5C7ADF9D658* __this, List_1_t6D4D3AAF46D9E2944E578579CE720FABFD990C26* ___0_list, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mFEEC2CDB7C8FAB7B07B0946BFB8ED8CB182AF5A9 (List_1_t6D4D3AAF46D9E2944E578579CE720FABFD990C26* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_IndexOf_TisIntPtr_t_m3EF39FCEE1A746C609E4ACA55B7DBA0B9B2FF13E (IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___0_array, intptr_t ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Insert_m765F6BAE1C5A79CAD741F2A9471BDA8E54604973 (List_1_t6D4D3AAF46D9E2944E578579CE720FABFD990C26* __this, int32_t ___0_index, intptr_t ___1_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_m4BDEB4B3ACBE5931B5698BD94322CA487B8F9589 (List_1_t6D4D3AAF46D9E2944E578579CE720FABFD990C26* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m4329C1FC8B6E6C62C2C0314F1AE9D0002EF4215A (List_1_t6D4D3AAF46D9E2944E578579CE720FABFD990C26* __this, intptr_t ___0_item, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_mCEB9F2ADE76B8447BE54DEAE7EC0E295F91FECDF_inline (Predicate_1_t1659F6182C62A18F9877F492426DD2DEC6A68A9B* __this, intptr_t ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Reverse_m7DA0B9AF4D9AAF520AE1D8EA5D66C70952E0EC9D (List_1_t6D4D3AAF46D9E2944E578579CE720FABFD990C26* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Reverse_TisIntPtr_t_m4644EEA142E76AA0835453F90B837AF3CBA906B8 (IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_m470B15C85362979FA4421C94F84AC41AC247983C (List_1_t6D4D3AAF46D9E2944E578579CE720FABFD990C26* __this, int32_t ___0_index, int32_t ___1_count, RuntimeObject* ___2_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Sort_TisIntPtr_t_mB78635DE9DC1121D3F7ED84572DFE599F40BE7E7 (IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___0_array, int32_t ___1_index, int32_t ___2_length, RuntimeObject* ___3_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArraySortHelper_1_Sort_m550DF7E1E4B5AAD082993DB3F3683640A653FCB5 (IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___0_keys, int32_t ___1_index, int32_t ___2_length, Comparison_1_tD773004B8607A867202EE8F35BD74AE6496D742A* ___3_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddEnumerable_mB42271BB905D9B0DFAA613FBA60CCAD013BA0A44 (List_1_t420B17163897A4DF994BA698744548CD81961E70* __this, RuntimeObject* ___0_enumerable, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LigatureSubstitutionRecord_t8660DC6B1D65C655D698216F72BFB3C85DDCAB94 List_1_get_Item_mB8AD74ED5BF7AC044165CC1DB56DE13AA35E3080 (List_1_t420B17163897A4DF994BA698744548CD81961E70* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisLigatureSubstitutionRecord_t8660DC6B1D65C655D698216F72BFB3C85DDCAB94_m83FD76C9CE6153FA8BAC1399EE4B32CC4BE56891 (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_m08B55D220D442584613E60854499F9B6795E3B7C (List_1_t420B17163897A4DF994BA698744548CD81961E70* __this, int32_t ___0_index, LigatureSubstitutionRecord_t8660DC6B1D65C655D698216F72BFB3C85DDCAB94 ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_m5D34622BB8796C326247AB8DED3588710917CDBE (List_1_t420B17163897A4DF994BA698744548CD81961E70* __this, LigatureSubstitutionRecord_t8660DC6B1D65C655D698216F72BFB3C85DDCAB94 ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_EnsureCapacity_m9DB2A28A18CDEF06F164BDAE9CDBBA72AA377645 (List_1_t420B17163897A4DF994BA698744548CD81961E70* __this, int32_t ___0_min, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m32E57A790444FACBD9BC16F86A57C8363980CCDA_inline (List_1_t420B17163897A4DF994BA698744548CD81961E70* __this, LigatureSubstitutionRecord_t8660DC6B1D65C655D698216F72BFB3C85DDCAB94 ___0_item, const RuntimeMethod* method) ;
inline int32_t List_1_get_Count_m57B62D5396EAD21285DF79006D76BC93E9B9A09A_inline (List_1_t420B17163897A4DF994BA698744548CD81961E70* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t420B17163897A4DF994BA698744548CD81961E70*, const RuntimeMethod*))List_1_get_Count_mD2ED26ACAF3BAF386FFEA83893BA51DB9FD8BA30_fshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_InsertRange_m08D6F59E2F7AF654F456DB02BFCE0F4630CD6B39 (List_1_t420B17163897A4DF994BA698744548CD81961E70* __this, int32_t ___0_index, RuntimeObject* ___1_collection, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB (RuntimeArray* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_IndexOf_mB1F3CF7F9F30093831AB619015A91170B32C33B7 (List_1_t420B17163897A4DF994BA698744548CD81961E70* __this, LigatureSubstitutionRecord_t8660DC6B1D65C655D698216F72BFB3C85DDCAB94 ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_IsCompatibleObject_mCFD2792F06553078069614B2377FA211C28D8829 (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_m6AEE9B228620C4E5A1ACCC1879664E7190E68468 (List_1_t420B17163897A4DF994BA698744548CD81961E70* __this, LigatureSubstitutionRecord_t8660DC6B1D65C655D698216F72BFB3C85DDCAB94 ___0_item, const RuntimeMethod* method) ;
inline void List_1_CopyTo_m4399B10FDA489280A34B28867B8F5EF44CFE1D04 (List_1_t420B17163897A4DF994BA698744548CD81961E70* __this, LigatureSubstitutionRecordU5BU5D_t04186B1B45C8D4F2AAB2299EE24668D39B4E9B50* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method)
{
	((  void (*) (List_1_t420B17163897A4DF994BA698744548CD81961E70*, LigatureSubstitutionRecordU5BU5D_t04186B1B45C8D4F2AAB2299EE24668D39B4E9B50*, int32_t, const RuntimeMethod*))List_1_CopyTo_m5180D7A430072A21034A0692CDD1D565ADEE2ABB_fshared)(__this, ___0_array, ___1_arrayIndex, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Capacity_mA9D07EF6CEE696E77162917AA2510F7F86D00AFB (List_1_t420B17163897A4DF994BA698744548CD81961E70* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mE2D564FE48C72E75796517B8E687F8C4194E58A4_inline (Action_1_t3C69DE7F9955C35DC22C9DEA53238F2CF0D23802* __this, LigatureSubstitutionRecord_t8660DC6B1D65C655D698216F72BFB3C85DDCAB94 ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_mE23D271442656549091441A140194B21E7E758EB (Enumerator_tF178DB8F022DE0B9858009BADBED741E672A04E2* __this, List_1_t420B17163897A4DF994BA698744548CD81961E70* ___0_list, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mF8F415F31533D1BEAE4D59A680D75A577B7EE5C3 (List_1_t420B17163897A4DF994BA698744548CD81961E70* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_IndexOf_TisLigatureSubstitutionRecord_t8660DC6B1D65C655D698216F72BFB3C85DDCAB94_m94FC7F2E670E87F38F1811C819D7D7E9F0A31025 (LigatureSubstitutionRecordU5BU5D_t04186B1B45C8D4F2AAB2299EE24668D39B4E9B50* ___0_array, LigatureSubstitutionRecord_t8660DC6B1D65C655D698216F72BFB3C85DDCAB94 ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Insert_mCDFAA9FBB8075FF3F71A0CD8B3D38164F01E6E02 (List_1_t420B17163897A4DF994BA698744548CD81961E70* __this, int32_t ___0_index, LigatureSubstitutionRecord_t8660DC6B1D65C655D698216F72BFB3C85DDCAB94 ___1_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_m97771CE2ACBE5E924D4A9CDD3847A6F3D676F418 (List_1_t420B17163897A4DF994BA698744548CD81961E70* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_mAD2BC8B5C08A5BE2207A08ABE2BDBEB45A50AF89 (List_1_t420B17163897A4DF994BA698744548CD81961E70* __this, LigatureSubstitutionRecord_t8660DC6B1D65C655D698216F72BFB3C85DDCAB94 ___0_item, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_m02B60E049382273FC4D120B0558764B11D3B2ADE_inline (Predicate_1_t75A270EF719DA010F98BE7630ECAA21A66DD8FFE* __this, LigatureSubstitutionRecord_t8660DC6B1D65C655D698216F72BFB3C85DDCAB94 ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Reverse_mF343508DEF6E849C3043BB04262CECDEBC29DD04 (List_1_t420B17163897A4DF994BA698744548CD81961E70* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Reverse_TisLigatureSubstitutionRecord_t8660DC6B1D65C655D698216F72BFB3C85DDCAB94_m59A5711531F3B01A7FD38FB04BFC563BA5ACF61C (LigatureSubstitutionRecordU5BU5D_t04186B1B45C8D4F2AAB2299EE24668D39B4E9B50* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_m12C609F0F65CD40DB15D3F1DE5819B457ABBCD7E (List_1_t420B17163897A4DF994BA698744548CD81961E70* __this, int32_t ___0_index, int32_t ___1_count, RuntimeObject* ___2_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Sort_TisLigatureSubstitutionRecord_t8660DC6B1D65C655D698216F72BFB3C85DDCAB94_mFAE044C7CB74A79921108CCC1A15E61AF4DCCAFD (LigatureSubstitutionRecordU5BU5D_t04186B1B45C8D4F2AAB2299EE24668D39B4E9B50* ___0_array, int32_t ___1_index, int32_t ___2_length, RuntimeObject* ___3_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArraySortHelper_1_Sort_mBF96DD2C71393DB577087D751CB701D9D7DC5D57 (LigatureSubstitutionRecordU5BU5D_t04186B1B45C8D4F2AAB2299EE24668D39B4E9B50* ___0_keys, int32_t ___1_index, int32_t ___2_length, Comparison_1_tE68D245A5CD7F54899C04EDE679025720DDC8BC0* ___3_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddEnumerable_m63117E55062699B6C56607E49B1902855F902765 (List_1_t8837CD02A40CED632406E449B6D76FF9AB3E4468* __this, RuntimeObject* ___0_enumerable, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607 List_1_get_Item_mD6F8CB74400D6D16784E14C495835979643EE5C8 (List_1_t8837CD02A40CED632406E449B6D76FF9AB3E4468* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisMarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607_m38A8E0DAA141B66DE625AFAC57A1CE80494454A6 (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_m06E1AA2D2C3EE28B83862E18860FC03F90987F80 (List_1_t8837CD02A40CED632406E449B6D76FF9AB3E4468* __this, int32_t ___0_index, MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607 ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_m58952DA47BD7D859A8AF9ED552F78C58AA5ED5F8 (List_1_t8837CD02A40CED632406E449B6D76FF9AB3E4468* __this, MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607 ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_EnsureCapacity_mEECF97630862151EC7B9E4E78E54C8B6CD44CE1E (List_1_t8837CD02A40CED632406E449B6D76FF9AB3E4468* __this, int32_t ___0_min, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m0C181B61B3E3305719C8A3206BF633E7DD84A27D_inline (List_1_t8837CD02A40CED632406E449B6D76FF9AB3E4468* __this, MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607 ___0_item, const RuntimeMethod* method) ;
inline int32_t List_1_get_Count_mC4819D6F7667DFF1413FC11A20B5640FE7BDCA33_inline (List_1_t8837CD02A40CED632406E449B6D76FF9AB3E4468* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t8837CD02A40CED632406E449B6D76FF9AB3E4468*, const RuntimeMethod*))List_1_get_Count_mD2ED26ACAF3BAF386FFEA83893BA51DB9FD8BA30_fshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_InsertRange_m3D2ADCD47DA8085B1C4B73FC643FDD146CE30DC3 (List_1_t8837CD02A40CED632406E449B6D76FF9AB3E4468* __this, int32_t ___0_index, RuntimeObject* ___1_collection, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_IndexOf_m91AF7A4F8617158B04229C8F75C0E26E427DC888 (List_1_t8837CD02A40CED632406E449B6D76FF9AB3E4468* __this, MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607 ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_IsCompatibleObject_mF02CF0A90086FADDF391D08A99E844C15337772C (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_m5DA54316CDCDFF672431FE41B258C61EA7E9FA9C (List_1_t8837CD02A40CED632406E449B6D76FF9AB3E4468* __this, MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607 ___0_item, const RuntimeMethod* method) ;
inline void List_1_CopyTo_mD17C44C31E84FFBC80E893892BCC66CE19A68244 (List_1_t8837CD02A40CED632406E449B6D76FF9AB3E4468* __this, MarkToBaseAdjustmentRecordU5BU5D_t4F120A507E14039BC63574D1815FF2E7B9D73911* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method)
{
	((  void (*) (List_1_t8837CD02A40CED632406E449B6D76FF9AB3E4468*, MarkToBaseAdjustmentRecordU5BU5D_t4F120A507E14039BC63574D1815FF2E7B9D73911*, int32_t, const RuntimeMethod*))List_1_CopyTo_m5180D7A430072A21034A0692CDD1D565ADEE2ABB_fshared)(__this, ___0_array, ___1_arrayIndex, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Capacity_m008D87C6772690F931BE144DB0ED5C0BCCF39E89 (List_1_t8837CD02A40CED632406E449B6D76FF9AB3E4468* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_m9D2103EFF0BBD8E29BA43CD08164936D8DE9CB07_inline (Action_1_t801DD0C5C7757F429A097C411325B152D78BAC33* __this, MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607 ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_mBFD97CE7FBC658EAA43E0A89B5111DB34EB9D610 (Enumerator_tCD90581783D3AA12E0C1FEDDAB2936C6A69F1644* __this, List_1_t8837CD02A40CED632406E449B6D76FF9AB3E4468* ___0_list, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m9EF60B3E6CE1B4E19B56110E6054CB3D31944BFB (List_1_t8837CD02A40CED632406E449B6D76FF9AB3E4468* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_IndexOf_TisMarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607_mF844176DACF8302F4F662DCAC4D66EE3D79E4B51 (MarkToBaseAdjustmentRecordU5BU5D_t4F120A507E14039BC63574D1815FF2E7B9D73911* ___0_array, MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607 ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Insert_m33930B40B49F189B11CC8C4AD7BF1F241CEC9C5E (List_1_t8837CD02A40CED632406E449B6D76FF9AB3E4468* __this, int32_t ___0_index, MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607 ___1_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_mD5837F88CA2CD54C4BE33C33132BFC98089BD5D7 (List_1_t8837CD02A40CED632406E449B6D76FF9AB3E4468* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_mE601E95FA154EB920C6EB4E1FC469866C677A0C8 (List_1_t8837CD02A40CED632406E449B6D76FF9AB3E4468* __this, MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607 ___0_item, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_m359A2A4F02AD08F4FD3E4714D4A018527704D814_inline (Predicate_1_t1A0605C87155DBCA6412C23F07D0AEBBDC65F25B* __this, MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607 ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Reverse_m2210C2F03B49CB361FF9AB83F945ADFE0AED86C2 (List_1_t8837CD02A40CED632406E449B6D76FF9AB3E4468* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Reverse_TisMarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607_m5F132BE6F494AFBA9EC2B18CC710487E5A11DA69 (MarkToBaseAdjustmentRecordU5BU5D_t4F120A507E14039BC63574D1815FF2E7B9D73911* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_m62378EB9C2B757BDD9EF803A3ACAEA524F139D95 (List_1_t8837CD02A40CED632406E449B6D76FF9AB3E4468* __this, int32_t ___0_index, int32_t ___1_count, RuntimeObject* ___2_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Sort_TisMarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607_m03A3DE5602EC6D91154F9CC065212AF1F2D030AB (MarkToBaseAdjustmentRecordU5BU5D_t4F120A507E14039BC63574D1815FF2E7B9D73911* ___0_array, int32_t ___1_index, int32_t ___2_length, RuntimeObject* ___3_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArraySortHelper_1_Sort_mDDAF1B2F4F29BCF90F0DF811BDAA3975C943D5CD (MarkToBaseAdjustmentRecordU5BU5D_t4F120A507E14039BC63574D1815FF2E7B9D73911* ___0_keys, int32_t ___1_index, int32_t ___2_length, Comparison_1_tBF85733D18400A902C910AD0E30BDB26192F0E9B* ___3_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddEnumerable_m1792A159A9E41312885AC11F79A4BA366CA60973 (List_1_tF7A39AE542CF9A5C63B48726F173FA38571D52C3* __this, RuntimeObject* ___0_enumerable, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MarkToMarkAdjustmentRecord_tD53618A3728435D5C904857DAC644EE27640807C List_1_get_Item_m932D436636A921BDBD8ACE9807AF92FC93878C41 (List_1_tF7A39AE542CF9A5C63B48726F173FA38571D52C3* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisMarkToMarkAdjustmentRecord_tD53618A3728435D5C904857DAC644EE27640807C_mBA2AE448CF35E3B49B08412574DC88B5DA2EC5DD (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_m97E71B2566ADDC1686FD241A1C7BB080644E9DC1 (List_1_tF7A39AE542CF9A5C63B48726F173FA38571D52C3* __this, int32_t ___0_index, MarkToMarkAdjustmentRecord_tD53618A3728435D5C904857DAC644EE27640807C ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_m74BC4D9B052F89D90F161E7CCE09374362B7B3E5 (List_1_tF7A39AE542CF9A5C63B48726F173FA38571D52C3* __this, MarkToMarkAdjustmentRecord_tD53618A3728435D5C904857DAC644EE27640807C ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_EnsureCapacity_m0BED530C57A0199BD38419764632C782B7B8788D (List_1_tF7A39AE542CF9A5C63B48726F173FA38571D52C3* __this, int32_t ___0_min, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m75222C9F0ABBFD176919C42A8981E0D32682DF96_inline (List_1_tF7A39AE542CF9A5C63B48726F173FA38571D52C3* __this, MarkToMarkAdjustmentRecord_tD53618A3728435D5C904857DAC644EE27640807C ___0_item, const RuntimeMethod* method) ;
inline int32_t List_1_get_Count_m01942BBB98465E950439A0527283B299554A6703_inline (List_1_tF7A39AE542CF9A5C63B48726F173FA38571D52C3* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tF7A39AE542CF9A5C63B48726F173FA38571D52C3*, const RuntimeMethod*))List_1_get_Count_mD2ED26ACAF3BAF386FFEA83893BA51DB9FD8BA30_fshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_InsertRange_mF2C2D40C93777B7D4FF3808877EC2E36A4FB0677 (List_1_tF7A39AE542CF9A5C63B48726F173FA38571D52C3* __this, int32_t ___0_index, RuntimeObject* ___1_collection, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_IndexOf_m2650D61FE0B4C47251D5ECA998DF5082E6BB63C7 (List_1_tF7A39AE542CF9A5C63B48726F173FA38571D52C3* __this, MarkToMarkAdjustmentRecord_tD53618A3728435D5C904857DAC644EE27640807C ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_IsCompatibleObject_m35042AC0220DAD6E6C7F40929ABD234E1980E44F (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_m5E465C45A35DD0723F62EA2DC070BA98F09BAA9B (List_1_tF7A39AE542CF9A5C63B48726F173FA38571D52C3* __this, MarkToMarkAdjustmentRecord_tD53618A3728435D5C904857DAC644EE27640807C ___0_item, const RuntimeMethod* method) ;
inline void List_1_CopyTo_m730982F38A6AFFDCA1B26279BDC30FEBA9F3198D (List_1_tF7A39AE542CF9A5C63B48726F173FA38571D52C3* __this, MarkToMarkAdjustmentRecordU5BU5D_t09E9394A7451C53E2DD62ACB4FD0CF5F52159061* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF7A39AE542CF9A5C63B48726F173FA38571D52C3*, MarkToMarkAdjustmentRecordU5BU5D_t09E9394A7451C53E2DD62ACB4FD0CF5F52159061*, int32_t, const RuntimeMethod*))List_1_CopyTo_m5180D7A430072A21034A0692CDD1D565ADEE2ABB_fshared)(__this, ___0_array, ___1_arrayIndex, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Capacity_m19659A6F69DA9520FCEE03356BC92A0FEB711AF9 (List_1_tF7A39AE542CF9A5C63B48726F173FA38571D52C3* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_m537A457F9B2C719DF77C61359F8A566DCF3186AD_inline (Action_1_t1AC3D5C3F81C6F9B1B32157D44B18D2F3098FF66* __this, MarkToMarkAdjustmentRecord_tD53618A3728435D5C904857DAC644EE27640807C ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m53B2769EE2681F58CAE05386D05820D3A34A65D3 (Enumerator_t41A770DBA333774F33A9D3A1CECAEF383E2E0653* __this, List_1_tF7A39AE542CF9A5C63B48726F173FA38571D52C3* ___0_list, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m405BC4E121522B84E7199ED7504085C421AEBAC9 (List_1_tF7A39AE542CF9A5C63B48726F173FA38571D52C3* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_IndexOf_TisMarkToMarkAdjustmentRecord_tD53618A3728435D5C904857DAC644EE27640807C_m89740D2C402B3FC2D500885E14C0E3FAAB6C9887 (MarkToMarkAdjustmentRecordU5BU5D_t09E9394A7451C53E2DD62ACB4FD0CF5F52159061* ___0_array, MarkToMarkAdjustmentRecord_tD53618A3728435D5C904857DAC644EE27640807C ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Insert_m568F190A867458AB8951F8386764E79D23305E1D (List_1_tF7A39AE542CF9A5C63B48726F173FA38571D52C3* __this, int32_t ___0_index, MarkToMarkAdjustmentRecord_tD53618A3728435D5C904857DAC644EE27640807C ___1_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_m898FB697A104F82CA9BEA7EA6969BFFE48231F7B (List_1_tF7A39AE542CF9A5C63B48726F173FA38571D52C3* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m9CAF01E89B3B7CA037242D8919802B85F0B73BC8 (List_1_tF7A39AE542CF9A5C63B48726F173FA38571D52C3* __this, MarkToMarkAdjustmentRecord_tD53618A3728435D5C904857DAC644EE27640807C ___0_item, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_m59DD28C260255EA76ACBDE643536314F9BF372F7_inline (Predicate_1_t86696A7752B102AFC6ED1D86EE72BB4CD74918CF* __this, MarkToMarkAdjustmentRecord_tD53618A3728435D5C904857DAC644EE27640807C ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Reverse_m596E134CCD33A7370EEA1A3B973883BC7E551A44 (List_1_tF7A39AE542CF9A5C63B48726F173FA38571D52C3* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Reverse_TisMarkToMarkAdjustmentRecord_tD53618A3728435D5C904857DAC644EE27640807C_m304D980C6E0E898F064E5E311E048D6D9BC97CE2 (MarkToMarkAdjustmentRecordU5BU5D_t09E9394A7451C53E2DD62ACB4FD0CF5F52159061* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_m4232D966ED26A2B54F6DA4EFB7DD7F4F44B360F4 (List_1_tF7A39AE542CF9A5C63B48726F173FA38571D52C3* __this, int32_t ___0_index, int32_t ___1_count, RuntimeObject* ___2_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Sort_TisMarkToMarkAdjustmentRecord_tD53618A3728435D5C904857DAC644EE27640807C_m0AC86D4BEE4B93C5DBC9514E2EBEF3B3528B4A07 (MarkToMarkAdjustmentRecordU5BU5D_t09E9394A7451C53E2DD62ACB4FD0CF5F52159061* ___0_array, int32_t ___1_index, int32_t ___2_length, RuntimeObject* ___3_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArraySortHelper_1_Sort_mB5065982019B3A53460EA6201CDA10F11387D6EF (MarkToMarkAdjustmentRecordU5BU5D_t09E9394A7451C53E2DD62ACB4FD0CF5F52159061* ___0_keys, int32_t ___1_index, int32_t ___2_length, Comparison_1_t739F3AE6EBC2BD5F3A9FF0FE425BBA1EDE2AF7B3* ___3_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddEnumerable_m824B831DF59A332409910EE4AD627BFB2DEFC2AE (List_1_tC99D7D75F0197EF8D9C0B56B71A1B77C6B6C8AC6* __this, RuntimeObject* ___0_enumerable, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MeshInfoBindings_t75C3901D8003725F85E8FD2F33C1712A92DB3EAF List_1_get_Item_m18F31D575DF8E0840608AD65332429C6EF599644 (List_1_tC99D7D75F0197EF8D9C0B56B71A1B77C6B6C8AC6* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisMeshInfoBindings_t75C3901D8003725F85E8FD2F33C1712A92DB3EAF_mCED93CC50AA75D397596087807FA64731F2DB2B5 (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_m860416881396CDE2C8A0BC4F62995CD3A0B1D851 (List_1_tC99D7D75F0197EF8D9C0B56B71A1B77C6B6C8AC6* __this, int32_t ___0_index, MeshInfoBindings_t75C3901D8003725F85E8FD2F33C1712A92DB3EAF ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_m1ACBAD225ECA81E408127C86E4BAAE3865014613 (List_1_tC99D7D75F0197EF8D9C0B56B71A1B77C6B6C8AC6* __this, MeshInfoBindings_t75C3901D8003725F85E8FD2F33C1712A92DB3EAF ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_EnsureCapacity_mDA7A0120E14A4D287D6F01CC44F64DA4CA061EC7 (List_1_tC99D7D75F0197EF8D9C0B56B71A1B77C6B6C8AC6* __this, int32_t ___0_min, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mF385946D3C21B253EEBD0914E26E8AB90B6FB8A7_inline (List_1_tC99D7D75F0197EF8D9C0B56B71A1B77C6B6C8AC6* __this, MeshInfoBindings_t75C3901D8003725F85E8FD2F33C1712A92DB3EAF ___0_item, const RuntimeMethod* method) ;
inline int32_t List_1_get_Count_mD76C6DAD418B365B1587216904BE9FB223599155_inline (List_1_tC99D7D75F0197EF8D9C0B56B71A1B77C6B6C8AC6* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tC99D7D75F0197EF8D9C0B56B71A1B77C6B6C8AC6*, const RuntimeMethod*))List_1_get_Count_mD2ED26ACAF3BAF386FFEA83893BA51DB9FD8BA30_fshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_InsertRange_m8F834A7B7E2FE4C754CFF38D8B6364ED8E5043E8 (List_1_tC99D7D75F0197EF8D9C0B56B71A1B77C6B6C8AC6* __this, int32_t ___0_index, RuntimeObject* ___1_collection, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_IndexOf_m394E113D68BEA74889454FF4B196486B550E8976 (List_1_tC99D7D75F0197EF8D9C0B56B71A1B77C6B6C8AC6* __this, MeshInfoBindings_t75C3901D8003725F85E8FD2F33C1712A92DB3EAF ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_IsCompatibleObject_m6CCA331B33F1DFD12BF79547BAF82E64869C07EB (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_m08AD398220DEE98CD7BCDA879F0EC7111ED884FB (List_1_tC99D7D75F0197EF8D9C0B56B71A1B77C6B6C8AC6* __this, MeshInfoBindings_t75C3901D8003725F85E8FD2F33C1712A92DB3EAF ___0_item, const RuntimeMethod* method) ;
inline void List_1_CopyTo_m92CA99A2FACF7093EC0C1CD76065AFC71E9EDBA9 (List_1_tC99D7D75F0197EF8D9C0B56B71A1B77C6B6C8AC6* __this, MeshInfoBindingsU5BU5D_tAB8E8C31A391A18DE5B83869CC7C3C43DA40C641* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method)
{
	((  void (*) (List_1_tC99D7D75F0197EF8D9C0B56B71A1B77C6B6C8AC6*, MeshInfoBindingsU5BU5D_tAB8E8C31A391A18DE5B83869CC7C3C43DA40C641*, int32_t, const RuntimeMethod*))List_1_CopyTo_m5180D7A430072A21034A0692CDD1D565ADEE2ABB_fshared)(__this, ___0_array, ___1_arrayIndex, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Capacity_mBA78BE093D3C14FC2571FBBB1A745C75F4121BE3 (List_1_tC99D7D75F0197EF8D9C0B56B71A1B77C6B6C8AC6* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_m52BBC04008C888EC507D9985F7A2136BBDEF803C_inline (Action_1_tFB4CF7B05ED4457EF963EF457274973F784847E1* __this, MeshInfoBindings_t75C3901D8003725F85E8FD2F33C1712A92DB3EAF ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m58623E42908B47DD3729F6954AA1E5D768D5D1F3 (Enumerator_t8A20D5B25F288B18A262EE8D0F6E09A214832BE9* __this, List_1_tC99D7D75F0197EF8D9C0B56B71A1B77C6B6C8AC6* ___0_list, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mDDF6BDDDC562B198F4A175C8725F492617AD2B73 (List_1_tC99D7D75F0197EF8D9C0B56B71A1B77C6B6C8AC6* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_IndexOf_TisMeshInfoBindings_t75C3901D8003725F85E8FD2F33C1712A92DB3EAF_mEE0B6D6841AE1F568E128A2D4E9D762B5D968998 (MeshInfoBindingsU5BU5D_tAB8E8C31A391A18DE5B83869CC7C3C43DA40C641* ___0_array, MeshInfoBindings_t75C3901D8003725F85E8FD2F33C1712A92DB3EAF ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Insert_mCDDF99E07C935DDAE809AE3BB5232D93E8C07811 (List_1_tC99D7D75F0197EF8D9C0B56B71A1B77C6B6C8AC6* __this, int32_t ___0_index, MeshInfoBindings_t75C3901D8003725F85E8FD2F33C1712A92DB3EAF ___1_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_mDA8E142C41C3A3D768C01A93D454C3CE43A6BF7C (List_1_tC99D7D75F0197EF8D9C0B56B71A1B77C6B6C8AC6* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m6420B669AC716755BB9E1EB3FBE6C093D3E41750 (List_1_tC99D7D75F0197EF8D9C0B56B71A1B77C6B6C8AC6* __this, MeshInfoBindings_t75C3901D8003725F85E8FD2F33C1712A92DB3EAF ___0_item, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_mA988E072F30C796A4800138B64AA90FB0C84685E_inline (Predicate_1_t09023B0AB7D2D62F61A5FE077D1F3DF03EFB51D3* __this, MeshInfoBindings_t75C3901D8003725F85E8FD2F33C1712A92DB3EAF ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Reverse_m834F8C46FFE8EC255D3B8D935A5C6693FB97C906 (List_1_tC99D7D75F0197EF8D9C0B56B71A1B77C6B6C8AC6* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Reverse_TisMeshInfoBindings_t75C3901D8003725F85E8FD2F33C1712A92DB3EAF_mC60D8F1E12334580D3510C64D54D98073D4DC409 (MeshInfoBindingsU5BU5D_tAB8E8C31A391A18DE5B83869CC7C3C43DA40C641* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_m3E7A925CE83A78D3EEDC0E2E389EEE5E0823A560 (List_1_tC99D7D75F0197EF8D9C0B56B71A1B77C6B6C8AC6* __this, int32_t ___0_index, int32_t ___1_count, RuntimeObject* ___2_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Sort_TisMeshInfoBindings_t75C3901D8003725F85E8FD2F33C1712A92DB3EAF_m098DB8E05156D34EBB60B201656711C886B324E6 (MeshInfoBindingsU5BU5D_tAB8E8C31A391A18DE5B83869CC7C3C43DA40C641* ___0_array, int32_t ___1_index, int32_t ___2_length, RuntimeObject* ___3_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArraySortHelper_1_Sort_mBC24450F902D3503D20BFBB20136742F2D8FF4B5 (MeshInfoBindingsU5BU5D_tAB8E8C31A391A18DE5B83869CC7C3C43DA40C641* ___0_keys, int32_t ___1_index, int32_t ___2_length, Comparison_1_t214C1E54D5D8ACACB1511E4F54BAB8E01EAF78B5* ___3_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddEnumerable_m25823106E60B95872432336B618BDD1803315582 (List_1_tD497C1314C02F6E7345D74565C2424A939B46AA7* __this, RuntimeObject* ___0_enumerable, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MultipleSubstitutionRecord_t668A640AFADBD46E3D4EC3A8417D0A02764DF87B List_1_get_Item_m2164802BF9C9903281D99DBD3B1D41A4C76B29EC (List_1_tD497C1314C02F6E7345D74565C2424A939B46AA7* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisMultipleSubstitutionRecord_t668A640AFADBD46E3D4EC3A8417D0A02764DF87B_m843FD4A465B7204A130644153874A8AD60827141 (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_mC8D2DF8A365FB9E113B142A9A5FC3B8A0E43F061 (List_1_tD497C1314C02F6E7345D74565C2424A939B46AA7* __this, int32_t ___0_index, MultipleSubstitutionRecord_t668A640AFADBD46E3D4EC3A8417D0A02764DF87B ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_mA0DD34F99218D5498D14A1F12196EA06898974BB (List_1_tD497C1314C02F6E7345D74565C2424A939B46AA7* __this, MultipleSubstitutionRecord_t668A640AFADBD46E3D4EC3A8417D0A02764DF87B ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_EnsureCapacity_m180216A9AD531D62ED1FCA10218B1C20ED75B01D (List_1_tD497C1314C02F6E7345D74565C2424A939B46AA7* __this, int32_t ___0_min, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m0F287C5DA436E45442C23034E2F0C1BCE2B8C99D_inline (List_1_tD497C1314C02F6E7345D74565C2424A939B46AA7* __this, MultipleSubstitutionRecord_t668A640AFADBD46E3D4EC3A8417D0A02764DF87B ___0_item, const RuntimeMethod* method) ;
inline int32_t List_1_get_Count_m381F792E8E05E4C9DCD31FC82F25FF56DCD07C23_inline (List_1_tD497C1314C02F6E7345D74565C2424A939B46AA7* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tD497C1314C02F6E7345D74565C2424A939B46AA7*, const RuntimeMethod*))List_1_get_Count_mD2ED26ACAF3BAF386FFEA83893BA51DB9FD8BA30_fshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_InsertRange_m9FC373D72507EFA8AA926B0035F0E4326AA4661B (List_1_tD497C1314C02F6E7345D74565C2424A939B46AA7* __this, int32_t ___0_index, RuntimeObject* ___1_collection, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_IndexOf_m0C575610DA6F18B107BF64C0419E839CC142DF77 (List_1_tD497C1314C02F6E7345D74565C2424A939B46AA7* __this, MultipleSubstitutionRecord_t668A640AFADBD46E3D4EC3A8417D0A02764DF87B ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_IsCompatibleObject_m90D54C1B434CCE6C46663223C6C888D98EBDE0F2 (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_mFE8D52B1E9514520EF5B9D6EAC276E67F2297F43 (List_1_tD497C1314C02F6E7345D74565C2424A939B46AA7* __this, MultipleSubstitutionRecord_t668A640AFADBD46E3D4EC3A8417D0A02764DF87B ___0_item, const RuntimeMethod* method) ;
inline void List_1_CopyTo_m31DD5DCC295219A17DB2F4ECB2E393F6433DBD4D (List_1_tD497C1314C02F6E7345D74565C2424A939B46AA7* __this, MultipleSubstitutionRecordU5BU5D_t97C158785342D9FF7B0B89861AC760DE6E38E934* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method)
{
	((  void (*) (List_1_tD497C1314C02F6E7345D74565C2424A939B46AA7*, MultipleSubstitutionRecordU5BU5D_t97C158785342D9FF7B0B89861AC760DE6E38E934*, int32_t, const RuntimeMethod*))List_1_CopyTo_m5180D7A430072A21034A0692CDD1D565ADEE2ABB_fshared)(__this, ___0_array, ___1_arrayIndex, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Capacity_m961E626CCEC05EEB952C2734F1EFA16A4DAF8353 (List_1_tD497C1314C02F6E7345D74565C2424A939B46AA7* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mDD8EACF0FE87BE9E69F0AAEF47DDD885A2878F14_inline (Action_1_t45EE9233F562CACBFAD099A7F22DC3DEC41DC5F2* __this, MultipleSubstitutionRecord_t668A640AFADBD46E3D4EC3A8417D0A02764DF87B ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_mE1163009922C13BBE682EACE71A46101884D17B4 (Enumerator_t801050780B43627808ABA984A28657A83654A691* __this, List_1_tD497C1314C02F6E7345D74565C2424A939B46AA7* ___0_list, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m84D08CA936E8D742C6695320BE434E741EC394DD (List_1_tD497C1314C02F6E7345D74565C2424A939B46AA7* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_IndexOf_TisMultipleSubstitutionRecord_t668A640AFADBD46E3D4EC3A8417D0A02764DF87B_mA1D1C4194AB58A1C5C96F9C604D736B06157CC9E (MultipleSubstitutionRecordU5BU5D_t97C158785342D9FF7B0B89861AC760DE6E38E934* ___0_array, MultipleSubstitutionRecord_t668A640AFADBD46E3D4EC3A8417D0A02764DF87B ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Insert_mDAC169475E46470CB29608353F26912ED76A1FC9 (List_1_tD497C1314C02F6E7345D74565C2424A939B46AA7* __this, int32_t ___0_index, MultipleSubstitutionRecord_t668A640AFADBD46E3D4EC3A8417D0A02764DF87B ___1_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_m90B7FA9455E3D72C4484BE06F69564F8CB1BA700 (List_1_tD497C1314C02F6E7345D74565C2424A939B46AA7* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m510D1D4DE405150EAA15D441E0CC258E93A0B356 (List_1_tD497C1314C02F6E7345D74565C2424A939B46AA7* __this, MultipleSubstitutionRecord_t668A640AFADBD46E3D4EC3A8417D0A02764DF87B ___0_item, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_m8B262358618A1C8806C5F73FAC6805666D1E1D30_inline (Predicate_1_tB19E1C7275588953C5ED1BC720F0294C2011833E* __this, MultipleSubstitutionRecord_t668A640AFADBD46E3D4EC3A8417D0A02764DF87B ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Reverse_mB3CBE4370D0FA013BAFBE1137FAC0EB8E72B75BC (List_1_tD497C1314C02F6E7345D74565C2424A939B46AA7* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Reverse_TisMultipleSubstitutionRecord_t668A640AFADBD46E3D4EC3A8417D0A02764DF87B_mECAA0E7F9376FE8592BF74D8038E58A4C90A0BAF (MultipleSubstitutionRecordU5BU5D_t97C158785342D9FF7B0B89861AC760DE6E38E934* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_m294CF087114C8BCD7ED5C165B49965B2E63C2E7D (List_1_tD497C1314C02F6E7345D74565C2424A939B46AA7* __this, int32_t ___0_index, int32_t ___1_count, RuntimeObject* ___2_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Sort_TisMultipleSubstitutionRecord_t668A640AFADBD46E3D4EC3A8417D0A02764DF87B_m9B714671AD166C36DC78E505CA0B7739F6AF7084 (MultipleSubstitutionRecordU5BU5D_t97C158785342D9FF7B0B89861AC760DE6E38E934* ___0_array, int32_t ___1_index, int32_t ___2_length, RuntimeObject* ___3_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArraySortHelper_1_Sort_m7AC53717D492DB26AEB178A9A8E35EA2ECA12A24 (MultipleSubstitutionRecordU5BU5D_t97C158785342D9FF7B0B89861AC760DE6E38E934* ___0_keys, int32_t ___1_index, int32_t ___2_length, Comparison_1_t9A125FC4BBCDF36E042FD4E1BC9A5C86A812BB72* ___3_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddEnumerable_m4E122E2502A8627C778FE4556937C624B46C7997 (List_1_t480A595B8D45A9019FF0E9A33AD53D81F7355674* __this, RuntimeObject* ___0_enumerable, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ResourceHandle_tAB7888F3AB5071C94127D0D46AAB3D702BC4B9F8 List_1_get_Item_mD173DE9CD6A82455F2B1CB9778BE90B63FF73391 (List_1_t480A595B8D45A9019FF0E9A33AD53D81F7355674* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisResourceHandle_tAB7888F3AB5071C94127D0D46AAB3D702BC4B9F8_mA91A20BD242392A65004CD8897E77F0A9BA80940 (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_mB2BEDCB542156BEC23496A84CFE200BC8782E57D (List_1_t480A595B8D45A9019FF0E9A33AD53D81F7355674* __this, int32_t ___0_index, ResourceHandle_tAB7888F3AB5071C94127D0D46AAB3D702BC4B9F8 ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_m28AFC3F6D5F6FE74B5CC7A3E42AC5CC6FFE0F2B8 (List_1_t480A595B8D45A9019FF0E9A33AD53D81F7355674* __this, ResourceHandle_tAB7888F3AB5071C94127D0D46AAB3D702BC4B9F8 ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_EnsureCapacity_m5056E5ED803534E727AD5E9FAEC838428ACC47FB (List_1_t480A595B8D45A9019FF0E9A33AD53D81F7355674* __this, int32_t ___0_min, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mF04CCC12DEF9C866AC5DC5330FDC48AB65CCA024_inline (List_1_t480A595B8D45A9019FF0E9A33AD53D81F7355674* __this, ResourceHandle_tAB7888F3AB5071C94127D0D46AAB3D702BC4B9F8 ___0_item, const RuntimeMethod* method) ;
inline int32_t List_1_get_Count_m9F65F44EDFFE199D00E71A358851A11FBF35CA0D_inline (List_1_t480A595B8D45A9019FF0E9A33AD53D81F7355674* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t480A595B8D45A9019FF0E9A33AD53D81F7355674*, const RuntimeMethod*))List_1_get_Count_mD2ED26ACAF3BAF386FFEA83893BA51DB9FD8BA30_fshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_InsertRange_m2E53EA9AC569CA67C76F3C118E063BBCF7704CAE (List_1_t480A595B8D45A9019FF0E9A33AD53D81F7355674* __this, int32_t ___0_index, RuntimeObject* ___1_collection, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_IndexOf_m69A02C552A18C10D19C781295373AB8A8AEE5031 (List_1_t480A595B8D45A9019FF0E9A33AD53D81F7355674* __this, ResourceHandle_tAB7888F3AB5071C94127D0D46AAB3D702BC4B9F8 ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_IsCompatibleObject_m4F61B731116EA18BCF77D3B5EA97CC7F6B74BA8E (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_mD8BB26D8A824572630E9C0E3F4D1DC9A3120F44A (List_1_t480A595B8D45A9019FF0E9A33AD53D81F7355674* __this, ResourceHandle_tAB7888F3AB5071C94127D0D46AAB3D702BC4B9F8 ___0_item, const RuntimeMethod* method) ;
inline void List_1_CopyTo_m991F7CA6913952712B14D32980B84A10304DCFC0 (List_1_t480A595B8D45A9019FF0E9A33AD53D81F7355674* __this, ResourceHandleU5BU5D_tD8EAD492F528F246F46563C67691360F9F2B0918* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method)
{
	((  void (*) (List_1_t480A595B8D45A9019FF0E9A33AD53D81F7355674*, ResourceHandleU5BU5D_tD8EAD492F528F246F46563C67691360F9F2B0918*, int32_t, const RuntimeMethod*))List_1_CopyTo_m5180D7A430072A21034A0692CDD1D565ADEE2ABB_fshared)(__this, ___0_array, ___1_arrayIndex, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Capacity_m5206BE528EF098F0A05B20F06F65AF72FD28CC3D (List_1_t480A595B8D45A9019FF0E9A33AD53D81F7355674* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_m32309F80523567ABFD485831B4D6CF626A350927_inline (Action_1_tA9D6FD07CF73C3DCEA4B280667EEFD02150EEA98* __this, ResourceHandle_tAB7888F3AB5071C94127D0D46AAB3D702BC4B9F8 ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m835D87EAED18476EAAF9606BFFC75C69A7EF65A8 (Enumerator_t1F35D895285609CB64A4AE42EEBBACABF575870C* __this, List_1_t480A595B8D45A9019FF0E9A33AD53D81F7355674* ___0_list, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mBB1736A52639A5F2DB93050D54A1E96F9ABDEE47 (List_1_t480A595B8D45A9019FF0E9A33AD53D81F7355674* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_IndexOf_TisResourceHandle_tAB7888F3AB5071C94127D0D46AAB3D702BC4B9F8_m8332FAAEA1F00BD676F75CB7D21BDDE5EB8108FC (ResourceHandleU5BU5D_tD8EAD492F528F246F46563C67691360F9F2B0918* ___0_array, ResourceHandle_tAB7888F3AB5071C94127D0D46AAB3D702BC4B9F8 ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Insert_m87451DF4EDEDCFD7A4F723FD3862823FC8208F03 (List_1_t480A595B8D45A9019FF0E9A33AD53D81F7355674* __this, int32_t ___0_index, ResourceHandle_tAB7888F3AB5071C94127D0D46AAB3D702BC4B9F8 ___1_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_m193AD81345965E50C83F85222E0549DC26D12328 (List_1_t480A595B8D45A9019FF0E9A33AD53D81F7355674* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_mCE97C009362B0A9CD4552C1B51C5E2A86246CA15 (List_1_t480A595B8D45A9019FF0E9A33AD53D81F7355674* __this, ResourceHandle_tAB7888F3AB5071C94127D0D46AAB3D702BC4B9F8 ___0_item, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_m34AFEF07BE56D23BA7F5BA2338AC3C3F1ED777CF_inline (Predicate_1_tD559AF1002ABFFC541AF884654337A564D28B733* __this, ResourceHandle_tAB7888F3AB5071C94127D0D46AAB3D702BC4B9F8 ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Reverse_m6AFF276121D16C2E2B20450B50341A6290ADEB1A (List_1_t480A595B8D45A9019FF0E9A33AD53D81F7355674* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Reverse_TisResourceHandle_tAB7888F3AB5071C94127D0D46AAB3D702BC4B9F8_m21433AAF5C37ED5C37B245798D8BED8D43C21BF4 (ResourceHandleU5BU5D_tD8EAD492F528F246F46563C67691360F9F2B0918* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_m741493F9355B59A4913E75FC9DBAF48FF66DFA57 (List_1_t480A595B8D45A9019FF0E9A33AD53D81F7355674* __this, int32_t ___0_index, int32_t ___1_count, RuntimeObject* ___2_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Sort_TisResourceHandle_tAB7888F3AB5071C94127D0D46AAB3D702BC4B9F8_m15B3CC39BEC812E83A1A2CE71AE193200A9E1762 (ResourceHandleU5BU5D_tD8EAD492F528F246F46563C67691360F9F2B0918* ___0_array, int32_t ___1_index, int32_t ___2_length, RuntimeObject* ___3_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArraySortHelper_1_Sort_m7051900D4D21A46096B77E03BE73D6D5907DA7E4 (ResourceHandleU5BU5D_tD8EAD492F528F246F46563C67691360F9F2B0918* ___0_keys, int32_t ___1_index, int32_t ___2_length, Comparison_1_tDCA291E0A9EC3450564AE324BB4A8232F7171A75* ___3_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddEnumerable_m7306D508C149BFCA2F5AF72B013F75A308A08204 (List_1_t9B68833848E4C4D7F623C05F6B77F0449396354A* __this, RuntimeObject* ___0_enumerable, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t List_1_get_Item_m934DB856B4560B22F57FDEEF351E373E5F1B6324 (List_1_t9B68833848E4C4D7F623C05F6B77F0449396354A* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mD81B5632275C9C89651C1B357F26058E8E76A526 (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_m92246880796BA27EBA18129EC97C00C65F17E7C5 (List_1_t9B68833848E4C4D7F623C05F6B77F0449396354A* __this, int32_t ___0_index, uint32_t ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_m88BD32FBFE050A30CA8A331F209B9D6FF6C3A423 (List_1_t9B68833848E4C4D7F623C05F6B77F0449396354A* __this, uint32_t ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_EnsureCapacity_m5DB123345126DC3D92D13E5F9A545806C4184296 (List_1_t9B68833848E4C4D7F623C05F6B77F0449396354A* __this, int32_t ___0_min, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m084F52E7C436446A23080F15F803212491693F6B_inline (List_1_t9B68833848E4C4D7F623C05F6B77F0449396354A* __this, uint32_t ___0_item, const RuntimeMethod* method) ;
inline int32_t List_1_get_Count_mA30526AC2097A68939350DBA860B7D2B0EEE1585_inline (List_1_t9B68833848E4C4D7F623C05F6B77F0449396354A* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t9B68833848E4C4D7F623C05F6B77F0449396354A*, const RuntimeMethod*))List_1_get_Count_mD2ED26ACAF3BAF386FFEA83893BA51DB9FD8BA30_fshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_InsertRange_m29B3B6011A4CF0D086BC1615992ABBF9045CDFAB (List_1_t9B68833848E4C4D7F623C05F6B77F0449396354A* __this, int32_t ___0_index, RuntimeObject* ___1_collection, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_IndexOf_mABB902B1AAE8B2D146C0ADBE69F1AE07DD33A824 (List_1_t9B68833848E4C4D7F623C05F6B77F0449396354A* __this, uint32_t ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_IsCompatibleObject_m05B0D418D70673CEA58C4991E8C26A67B469ECFC (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_mA3FC146588710EE5814FEBEFABB180FB2EA4D4D8 (List_1_t9B68833848E4C4D7F623C05F6B77F0449396354A* __this, uint32_t ___0_item, const RuntimeMethod* method) ;
inline void List_1_CopyTo_mD22BC65B8E36D13F51395CEEBF6D76643814E25E (List_1_t9B68833848E4C4D7F623C05F6B77F0449396354A* __this, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method)
{
	((  void (*) (List_1_t9B68833848E4C4D7F623C05F6B77F0449396354A*, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*, int32_t, const RuntimeMethod*))List_1_CopyTo_m5180D7A430072A21034A0692CDD1D565ADEE2ABB_fshared)(__this, ___0_array, ___1_arrayIndex, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Capacity_mEF17C2D6137726F17AB42310C55C8F88A0E0537D (List_1_t9B68833848E4C4D7F623C05F6B77F0449396354A* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mA1BDAC0ADA0ABAC07CC491658788A24E6DC8B7EE_inline (Action_1_t831946BFD83EBA9DE498D3E682F1D4F14D17878D* __this, uint32_t ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m25DDA08EFA61F9AD346678D19BC674E2AD71A7F7 (Enumerator_tE11EF15BE791F6B44F4B296E90476ADCDDC5D87F* __this, List_1_t9B68833848E4C4D7F623C05F6B77F0449396354A* ___0_list, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mD6C4D49C755FF9AD73456488D5FAABFD532AAEA9 (List_1_t9B68833848E4C4D7F623C05F6B77F0449396354A* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_IndexOf_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mFC8BDE74B86C42A57D89FDA28EED3DDEF7B67A17 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_array, uint32_t ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Insert_mA1CAB048AF0A6CB36BD753A432BB19402C898B53 (List_1_t9B68833848E4C4D7F623C05F6B77F0449396354A* __this, int32_t ___0_index, uint32_t ___1_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_mFBE8510D49E8C1843C279A9D3FF8C4BE83CDECD0 (List_1_t9B68833848E4C4D7F623C05F6B77F0449396354A* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m7F278AC340D3D507A585015EA22C309049AC91AC (List_1_t9B68833848E4C4D7F623C05F6B77F0449396354A* __this, uint32_t ___0_item, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_mCE33776BF08B37A05CCD7FBB46335E5FB6B215DC_inline (Predicate_1_t2F212B682F64543895DDB2A14A8816A433567EFF* __this, uint32_t ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Reverse_m3112F78E91DA387ACEF86675EEF7D0F004ED07D8 (List_1_t9B68833848E4C4D7F623C05F6B77F0449396354A* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Reverse_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mFFA9B7CF98584CC40CD31B6897ABB99499611E7E (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_m0C4A4981F6581FBF0C85D77719B15FD4A24755C3 (List_1_t9B68833848E4C4D7F623C05F6B77F0449396354A* __this, int32_t ___0_index, int32_t ___1_count, RuntimeObject* ___2_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Sort_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mBA485F66F726C6BFFE9C6F718D41776E17DAB3A8 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_array, int32_t ___1_index, int32_t ___2_length, RuntimeObject* ___3_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArraySortHelper_1_Sort_mFC27B3DD081A42FB1EC554B088A4A73805D2C2FF (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_keys, int32_t ___1_index, int32_t ___2_length, Comparison_1_tF77ABBDA0482B2BE658FA3EE0DFA2E0ECB09A60B* ___3_comparer, const RuntimeMethod* method) ;
inline void List_1_AddEnumerable_m44B5C2177E9403DB0E3DC2BC6E590CDA7266BE79 (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* __this, RuntimeObject* ___0_enumerable, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E*, RuntimeObject*, const RuntimeMethod*))List_1_AddEnumerable_m44B5C2177E9403DB0E3DC2BC6E590CDA7266BE79_gshared)(__this, ___0_enumerable, method);
}
inline Il2CppSharedGenericObject* List_1_get_Item_m02336594E8F76D7313E2BCB7A3ED5ABD13B4D515 (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  Il2CppSharedGenericObject* (*) (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E*, int32_t, const RuntimeMethod*))List_1_get_Item_m02336594E8F76D7313E2BCB7A3ED5ABD13B4D515_gshared)(__this, ___0_index, method);
}
inline void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisIl2CppSharedGenericObject_mE7A1EEC53480BA1ED6C827938ADAF45B127DD054 (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method)
{
	((  void (*) (RuntimeObject*, int32_t, const RuntimeMethod*))ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisIl2CppSharedGenericObject_mE7A1EEC53480BA1ED6C827938ADAF45B127DD054_gshared)(___0_value, ___1_argName, method);
}
inline void List_1_set_Item_mCD8F7775F9C4842958A7188EBC0EBF1BE03101EF (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* __this, int32_t ___0_index, Il2CppSharedGenericObject* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E*, int32_t, Il2CppSharedGenericObject*, const RuntimeMethod*))List_1_set_Item_mCD8F7775F9C4842958A7188EBC0EBF1BE03101EF_gshared)(__this, ___0_index, ___1_value, method);
}
inline void List_1_AddWithResize_mCC24A812DFC30C3DE2230E3C8EE705871C1DFF81 (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* __this, Il2CppSharedGenericObject* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E*, Il2CppSharedGenericObject*, const RuntimeMethod*))List_1_AddWithResize_mCC24A812DFC30C3DE2230E3C8EE705871C1DFF81_gshared)(__this, ___0_item, method);
}
inline void List_1_EnsureCapacity_m89719BB37EEDA80E6AD7FAC5D1AAC5A47DDE86B5 (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* __this, int32_t ___0_min, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E*, int32_t, const RuntimeMethod*))List_1_EnsureCapacity_m89719BB37EEDA80E6AD7FAC5D1AAC5A47DDE86B5_gshared)(__this, ___0_min, method);
}
inline void List_1_Add_m0CE6E39234ED33F5195AABC8029D06D4756C75C1_inline (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* __this, Il2CppSharedGenericObject* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E*, Il2CppSharedGenericObject*, const RuntimeMethod*))List_1_Add_m0CE6E39234ED33F5195AABC8029D06D4756C75C1_gshared_inline)(__this, ___0_item, method);
}
inline int32_t List_1_get_Count_m9832942FE310479E64D9D0D23F29C65305BE1622_inline (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E*, const RuntimeMethod*))List_1_get_Count_mD2ED26ACAF3BAF386FFEA83893BA51DB9FD8BA30_fshared_inline)(__this, method);
}
inline void List_1_InsertRange_m7B9D6C4AB69B4EA07C23832C6109C25C21E99804 (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* __this, int32_t ___0_index, RuntimeObject* ___1_collection, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E*, int32_t, RuntimeObject*, const RuntimeMethod*))List_1_InsertRange_m7B9D6C4AB69B4EA07C23832C6109C25C21E99804_gshared)(__this, ___0_index, ___1_collection, method);
}
inline int32_t List_1_IndexOf_m4B13B6BE7AA6327431F1BE406264329892975DE9 (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* __this, Il2CppSharedGenericObject* ___0_item, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E*, Il2CppSharedGenericObject*, const RuntimeMethod*))List_1_IndexOf_m4B13B6BE7AA6327431F1BE406264329892975DE9_gshared)(__this, ___0_item, method);
}
inline bool List_1_IsCompatibleObject_m9E5E0DF2443D88570595AEA0FEF7D7122455EB26 (RuntimeObject* ___0_value, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, const RuntimeMethod*))List_1_IsCompatibleObject_m9E5E0DF2443D88570595AEA0FEF7D7122455EB26_gshared)(___0_value, method);
}
inline bool List_1_Contains_m63E643DC9A821297E2EBF9085D93B39BFC2F9DCE (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* __this, Il2CppSharedGenericObject* ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E*, Il2CppSharedGenericObject*, const RuntimeMethod*))List_1_Contains_m63E643DC9A821297E2EBF9085D93B39BFC2F9DCE_gshared)(__this, ___0_item, method);
}
inline void List_1_CopyTo_m75919E1737F4EC8D7DD329629C11CACA64EF5BE3 (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* __this, __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E*, __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979*, int32_t, const RuntimeMethod*))List_1_CopyTo_m5180D7A430072A21034A0692CDD1D565ADEE2ABB_fshared)(__this, ___0_array, ___1_arrayIndex, method);
}
inline void List_1_set_Capacity_m4B62593B8671BB60809057D57DC60568557315E6 (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* __this, int32_t ___0_value, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E*, int32_t, const RuntimeMethod*))List_1_set_Capacity_m4B62593B8671BB60809057D57DC60568557315E6_gshared)(__this, ___0_value, method);
}
inline void Action_1_Invoke_mDB8F7C7381C08B4DCE4E409D2FA4073BC17F90B5_inline (Action_1_tF0E1373A391479E6E235E0D82CE1EF1DE6B6C505* __this, Il2CppSharedGenericObject* ___0_obj, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tF0E1373A391479E6E235E0D82CE1EF1DE6B6C505*, Il2CppSharedGenericObject*, const RuntimeMethod*))Action_1_Invoke_mDB8F7C7381C08B4DCE4E409D2FA4073BC17F90B5_gshared_inline)(__this, ___0_obj, method);
}
inline void Enumerator__ctor_mB0C2B8891214015BE286DC32F260DEBDFAD317E9 (Enumerator_tC367FBE981D257FF6A6357382526F6EC9FF3B2F9* __this, List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* ___0_list, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tC367FBE981D257FF6A6357382526F6EC9FF3B2F9*, List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E*, const RuntimeMethod*))Enumerator__ctor_mB0C2B8891214015BE286DC32F260DEBDFAD317E9_gshared)(__this, ___0_list, method);
}
inline void List_1__ctor_m54D719307910A9DC9CD4DEFA8AE2626F49EB7516 (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E*, int32_t, const RuntimeMethod*))List_1__ctor_m54D719307910A9DC9CD4DEFA8AE2626F49EB7516_gshared)(__this, ___0_capacity, method);
}
inline int32_t Array_IndexOf_TisIl2CppSharedGenericObject_m0C73DE72012C676D6E4354C82EA6550BBADC3D33 (__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* ___0_array, Il2CppSharedGenericObject* ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method)
{
	return ((  int32_t (*) (__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979*, Il2CppSharedGenericObject*, int32_t, int32_t, const RuntimeMethod*))Array_IndexOf_TisIl2CppSharedGenericObject_m0C73DE72012C676D6E4354C82EA6550BBADC3D33_gshared)(___0_array, ___1_value, ___2_startIndex, ___3_count, method);
}
inline void List_1_Insert_mC5A8238645AD1D203E75313802D4DC78BDE7857E (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* __this, int32_t ___0_index, Il2CppSharedGenericObject* ___1_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E*, int32_t, Il2CppSharedGenericObject*, const RuntimeMethod*))List_1_Insert_mC5A8238645AD1D203E75313802D4DC78BDE7857E_gshared)(__this, ___0_index, ___1_item, method);
}
inline void List_1_RemoveAt_m36F68EA689DB109415094085A496D5EA21E2F23C (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E*, int32_t, const RuntimeMethod*))List_1_RemoveAt_m36F68EA689DB109415094085A496D5EA21E2F23C_gshared)(__this, ___0_index, method);
}
inline bool List_1_Remove_m0AC731A08F1400089DD478E2D366804833660796 (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* __this, Il2CppSharedGenericObject* ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E*, Il2CppSharedGenericObject*, const RuntimeMethod*))List_1_Remove_m0AC731A08F1400089DD478E2D366804833660796_gshared)(__this, ___0_item, method);
}
inline bool Predicate_1_Invoke_mDF332C0CEB003C0D86A1E3A194ECFA96D424E34C_inline (Predicate_1_t586817D6627D147076FFDCC73DA7BEC23132FA88* __this, Il2CppSharedGenericObject* ___0_obj, const RuntimeMethod* method)
{
	return ((  bool (*) (Predicate_1_t586817D6627D147076FFDCC73DA7BEC23132FA88*, Il2CppSharedGenericObject*, const RuntimeMethod*))Predicate_1_Invoke_mDF332C0CEB003C0D86A1E3A194ECFA96D424E34C_gshared_inline)(__this, ___0_obj, method);
}
inline void List_1_Reverse_m97197478E9535E327B4509C065B30BB0DD6F1F99 (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E*, int32_t, int32_t, const RuntimeMethod*))List_1_Reverse_m97197478E9535E327B4509C065B30BB0DD6F1F99_gshared)(__this, ___0_index, ___1_count, method);
}
inline void Array_Reverse_TisIl2CppSharedGenericObject_mFAAB0AB623769BB8245CDF219832F2FE75427541 (__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method)
{
	((  void (*) (__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979*, int32_t, int32_t, const RuntimeMethod*))Array_Reverse_TisIl2CppSharedGenericObject_mFAAB0AB623769BB8245CDF219832F2FE75427541_gshared)(___0_array, ___1_index, ___2_length, method);
}
inline void List_1_Sort_m15AB808AB5390BF8B6D7A057EDA17A54A80A1A6A (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* __this, int32_t ___0_index, int32_t ___1_count, RuntimeObject* ___2_comparer, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E*, int32_t, int32_t, RuntimeObject*, const RuntimeMethod*))List_1_Sort_m15AB808AB5390BF8B6D7A057EDA17A54A80A1A6A_gshared)(__this, ___0_index, ___1_count, ___2_comparer, method);
}
inline void Array_Sort_TisIl2CppSharedGenericObject_m8C8A5C187776FEA1D5CC7F053F0DC63B32764D61 (__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* ___0_array, int32_t ___1_index, int32_t ___2_length, RuntimeObject* ___3_comparer, const RuntimeMethod* method)
{
	((  void (*) (__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979*, int32_t, int32_t, RuntimeObject*, const RuntimeMethod*))Array_Sort_TisIl2CppSharedGenericObject_m8C8A5C187776FEA1D5CC7F053F0DC63B32764D61_gshared)(___0_array, ___1_index, ___2_length, ___3_comparer, method);
}
inline void ArraySortHelper_1_Sort_m745CBFE82472049A441AC9522C4B8FA33F5AF970 (__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* ___0_keys, int32_t ___1_index, int32_t ___2_length, Comparison_1_tC9FBFF747FA0455CD35BD7D097691DE20DDCC2B5* ___3_comparer, const RuntimeMethod* method)
{
	((  void (*) (__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979*, int32_t, int32_t, Comparison_1_tC9FBFF747FA0455CD35BD7D097691DE20DDCC2B5*, const RuntimeMethod*))ArraySortHelper_1_Sort_m745CBFE82472049A441AC9522C4B8FA33F5AF970_gshared)(___0_keys, ___1_index, ___2_length, ___3_comparer, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58 (const RuntimeMethod* method) ;
inline void Enumerator__ctor_m5C66A91DC68887BE203985B56EF2F74222E9AF50 (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF* __this, List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* ___0_list, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*, List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))Enumerator__ctor_m5C66A91DC68887BE203985B56EF2F74222E9AF50_fshared)(__this, ___0_list, method);
}
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8 (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit);
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		CHECKED_LOCAL_INIT(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)),il2cpp_codegen_runtime_class_init_inline);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = ((List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)))->___s_emptyArray;
		__this->____items = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m30DD6F0F8DFBA9856BF7220A3CDB1C89ECEC0D98 (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit);
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0012;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F(((int32_t)12), 4, NULL);
	}

IL_0012:
	{
		int32_t L_1 = ___0_capacity;
		if (L_1)
		{
			goto IL_0021;
		}
	}
	{
		CHECKED_LOCAL_INIT(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)),il2cpp_codegen_runtime_class_init_inline);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = ((List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)))->___s_emptyArray;
		__this->____items = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_2);
		return;
	}

IL_0021:
	{
		int32_t L_3 = ___0_capacity;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1), (uint32_t)L_3);
		__this->____items = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_4);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mCC0E71080DE343C1A527526A1AC2DBEC355CEA6C (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit);
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_collection;
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(6, NULL);
	}

IL_000f:
	{
		RuntimeObject* L_1 = ___0_collection;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_1, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2)));
		RuntimeObject* L_2 = V_0;
		if (!L_2)
		{
			goto IL_0050;
		}
	}
	{
		RuntimeObject* L_3 = V_0;
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_3);
		V_1 = L_4;
		int32_t L_5 = V_1;
		if (L_5)
		{
			goto IL_002f;
		}
	}
	{
		CHECKED_LOCAL_INIT(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)),il2cpp_codegen_runtime_class_init_inline);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = ((List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)))->___s_emptyArray;
		__this->____items = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_6);
		return;
	}

IL_002f:
	{
		int32_t L_7 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1), (uint32_t)L_7);
		__this->____items = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_8);
		RuntimeObject* L_9 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = __this->____items;
		InterfaceActionInvoker2< Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_9, L_10, 0);
		int32_t L_11 = V_1;
		__this->____size = L_11;
		return;
	}

IL_0050:
	{
		__this->____size = 0;
		CHECKED_LOCAL_INIT(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)),il2cpp_codegen_runtime_class_init_inline);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = ((List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)))->___s_emptyArray;
		__this->____items = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_12);
		RuntimeObject* L_13 = ___0_collection;
		List_1_AddEnumerable_m0D03C24E342A0F77A0042603E40AD506136B684F(__this, L_13, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 5));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Capacity_mA667E9DF466C9574AC22A4B0FE0E358D818505CC (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit);
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	{
		int32_t L_0 = ___0_value;
		int32_t L_1 = __this->____size;
		if ((((int32_t)L_0) >= ((int32_t)L_1)))
		{
			goto IL_0012;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F(((int32_t)15), ((int32_t)21), NULL);
	}

IL_0012:
	{
		int32_t L_2 = ___0_value;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = __this->____items;
		int32_t L_4 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_3)->max_length),NULL));
		if ((((int32_t)L_2) == ((int32_t)L_4)))
		{
			goto IL_0058;
		}
	}
	{
		int32_t L_5 = ___0_value;
		if ((((int32_t)L_5) <= ((int32_t)0)))
		{
			goto IL_004d;
		}
	}
	{
		int32_t L_6 = ___0_value;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1), (uint32_t)L_6);
		V_0 = L_7;
		int32_t L_8 = __this->____size;
		if ((((int32_t)L_8) <= ((int32_t)0)))
		{
			goto IL_0045;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = __this->____items;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = V_0;
		int32_t L_11 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_9, 0, (RuntimeArray*)L_10, 0, L_11, NULL);
	}

IL_0045:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = V_0;
		__this->____items = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_12);
		return;
	}

IL_004d:
	{
		CHECKED_LOCAL_INIT(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)),il2cpp_codegen_runtime_class_init_inline);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = ((List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)))->___s_emptyArray;
		__this->____items = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_13);
	}

IL_0058:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRange_IndexException_mC7661B8C6DD827679C95FC6B6C08F8724174936D(NULL);
	}

IL_000e:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->____items;
		int32_t L_3 = ___0_index;
		int32_t L_4 = L_3;
		int32_t L_5 = (L_2)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_m95629806F31CF369D937590912E0B6A53FF7C587 (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_index, int32_t ___1_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRange_IndexException_mC7661B8C6DD827679C95FC6B6C08F8724174936D(NULL);
	}

IL_000e:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->____items;
		int32_t L_3 = ___0_index;
		int32_t L_4 = ___1_value;
		(L_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3), (int32_t)L_4);
		int32_t L_5 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_5, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_IsCompatibleObject_m0C506FD38C6F16AC8A7700817EF89401910F873C (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = ___0_value;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6))))
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(int32_t));
		int32_t L_2 = V_0;
		return false;
	}

IL_001d:
	{
		return (bool)0;
	}

IL_001f:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_System_Collections_IList_get_Item_m1E933D1B423B829C27D0AAE6181F4C5E0CA89F33 (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		int32_t L_1;
		L_1 = List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D(__this, L_0, NULL);
		int32_t L_2 = L_1;
		RuntimeObject* L_3 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6), &L_2);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_System_Collections_IList_set_Item_m9CD1267F4F075504130F719883E3EFD9DF762253 (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_index, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(Type_t_StaticInit);
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = ___1_value;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m0F7A078274F301B83DFC51191B3AFC763DE9C4D0(L_0, ((int32_t)15), NULL);
	}
	try
	{
		int32_t L_1 = ___0_index;
		RuntimeObject* L_2 = ___1_value;
		List_1_set_Item_m95629806F31CF369D937590912E0B6A53FF7C587(__this, L_1, ((*(int32_t*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6)))), NULL);
		goto IL_002a;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0017;
		}
		throw e;
	}

CATCH_0017:
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_3 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_4 = ___1_value;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 10)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
		ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_4, L_6, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_002a;
	}

IL_002a:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_item, const RuntimeMethod* method) 
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____items;
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		V_1 = L_2;
		int32_t L_3 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = V_0;
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		if ((!(((uint32_t)L_3) < ((uint32_t)L_5))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_6 = V_1;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_6, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = V_0;
		int32_t L_8 = V_1;
		int32_t L_9 = ___0_item;
		(L_7)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_8), (int32_t)L_9);
		return;
	}

IL_0034:
	{
		int32_t L_10 = ___0_item;
		List_1_AddWithResize_m378B392086AAB6F400944FA9839516326B3F7BB8(__this, L_10, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 11));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_m378B392086AAB6F400944FA9839516326B3F7BB8 (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____size;
		V_0 = L_0;
		int32_t L_1 = V_0;
		List_1_EnsureCapacity_m86DF3071CD67B1463C1CF26C7791331D70D431C0(__this, ((int32_t)il2cpp_codegen_add(L_1, 1)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 12));
		int32_t L_2 = V_0;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_2, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = __this->____items;
		int32_t L_4 = V_0;
		int32_t L_5 = ___0_item;
		(L_3)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4), (int32_t)L_5);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_System_Collections_IList_Add_m39E3DB029FA8CE14D5437A70E01A96684957F6B6 (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(Type_t_StaticInit);
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = ___0_item;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m0F7A078274F301B83DFC51191B3AFC763DE9C4D0(L_0, ((int32_t)20), NULL);
	}
	try
	{
		RuntimeObject* L_1 = ___0_item;
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(__this, ((*(int32_t*)UnBox(L_1, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		goto IL_0029;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0016;
		}
		throw e;
	}

CATCH_0016:
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_2 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_3 = ___0_item;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_4 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 10)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_5;
		L_5 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_4, NULL);
		ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_3, L_5, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0029;
	}

IL_0029:
	{
		int32_t L_6;
		L_6 = List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_inline(__this, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_6, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddRange_m1A10E697703D67F6551D47C603FFE78E16CE4204 (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		RuntimeObject* L_1 = ___0_collection;
		List_1_InsertRange_m1D3DE2073A8946E2D1113677F2062F35881FA7B8(__this, L_0, L_1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 15));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_mF6795DE5F49C1D0B91D6A0955F448B22970D67A9 (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		goto IL_0035;
	}

IL_0035:
	{
		__this->____size = 0;
	}

IL_003c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_m4FD96E89F15844C90032C7386BAB528817F1FF5B (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_item, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___0_item;
		int32_t L_2;
		L_2 = List_1_IndexOf_mC3D1A2CECAC0E3D42C78B43772E1BD3D0333C450(__this, L_1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 17));
		return (bool)((((int32_t)((((int32_t)L_2) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0016:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_System_Collections_IList_Contains_mE7517FD1F4EBD12003672EAFAEB76B269822CD44 (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit);
	{
		RuntimeObject* L_0 = ___0_item;
		CHECKED_LOCAL_INIT(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)),il2cpp_codegen_runtime_class_init_inline);
		bool L_1;
		L_1 = List_1_IsCompatibleObject_m0C506FD38C6F16AC8A7700817EF89401910F873C(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 18));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_item;
		bool L_3;
		L_3 = List_1_Contains_m4FD96E89F15844C90032C7386BAB528817F1FF5B(__this, ((*(int32_t*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 19));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_CopyTo_mF4D90DC6EDE97B45F2F568839E9D5C34233FFA6B (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_array, const RuntimeMethod* method) 
{
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = ___0_array;
		List_1_CopyTo_m030AAF730ACCF739D45671086EBF4786FED908D5(__this, L_0, 0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_EnsureCapacity_m86DF3071CD67B1463C1CF26C7791331D70D431C0 (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_min, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t G_B4_0 = 0;
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->____items;
		int32_t L_1 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_0)->max_length),NULL));
		int32_t L_2 = ___0_min;
		if ((((int32_t)L_1) >= ((int32_t)L_2)))
		{
			goto IL_003d;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = __this->____items;
		if (!(((RuntimeArray*)L_3)->max_length))
		{
			goto IL_0020;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = __this->____items;
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		G_B4_0 = ((int32_t)il2cpp_codegen_multiply(L_5, 2));
		goto IL_0021;
	}

IL_0020:
	{
		G_B4_0 = 4;
	}

IL_0021:
	{
		V_0 = G_B4_0;
		int32_t L_6 = V_0;
		if ((!(((uint32_t)L_6) > ((uint32_t)((int32_t)2146435071)))))
		{
			goto IL_0030;
		}
	}
	{
		V_0 = ((int32_t)2146435071);
	}

IL_0030:
	{
		int32_t L_7 = V_0;
		int32_t L_8 = ___0_min;
		if ((((int32_t)L_7) >= ((int32_t)L_8)))
		{
			goto IL_0036;
		}
	}
	{
		int32_t L_9 = ___0_min;
		V_0 = L_9;
	}

IL_0036:
	{
		int32_t L_10 = V_0;
		List_1_set_Capacity_mA667E9DF466C9574AC22A4B0FE0E358D818505CC(__this, L_10, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 21));
	}

IL_003d:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_ForEach_m1586340C3D588CF61B941F469BDB9556E22BCCE0 (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* ___0_action, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_0 = ___0_action;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(((int32_t)33), NULL);
	}

IL_000a:
	{
		int32_t L_1 = __this->____version;
		V_0 = L_1;
		V_1 = 0;
		goto IL_0034;
	}

IL_0015:
	{
		int32_t L_2 = V_0;
		int32_t L_3 = __this->____version;
		if ((!(((uint32_t)L_2) == ((uint32_t)L_3))))
		{
			goto IL_003d;
		}
	}
	{
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_4 = ___0_action;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = __this->____items;
		int32_t L_6 = V_1;
		int32_t L_7 = L_6;
		int32_t L_8 = (L_5)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7));
		Action_1_Invoke_mAC3C34BA1905AB5B79E483CD9BB082B7D667F703_inline(L_4, L_8, NULL);
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0034:
	{
		int32_t L_10 = V_1;
		int32_t L_11 = __this->____size;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_0015;
		}
	}

IL_003d:
	{
		int32_t L_12 = V_0;
		int32_t L_13 = __this->____version;
		if ((((int32_t)L_12) == ((int32_t)L_13)))
		{
			goto IL_004b;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_InvalidOperation_EnumFailedVersion_m5331E2E0EC0E36843D53F439C2529530595ACE9F(NULL);
	}

IL_004b:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC List_1_GetEnumerator_mCADB185AB483C855873FCD0B1D5AAC909ED7F7BD (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mB5D11409C5765078140B3C3652FEF06536FDFA6B((&L_0), __this, NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_mB9F20F5DCF4F0D1D426C507F13B662C972AE4516 (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mB5D11409C5765078140B3C3652FEF06536FDFA6B((&L_0), __this, NULL);
		Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 23), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_System_Collections_IEnumerable_GetEnumerator_mC6BECA0B4B79418D229C9568104AEBCE2D23C903 (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mB5D11409C5765078140B3C3652FEF06536FDFA6B((&L_0), __this, NULL);
		Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 23), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* List_1_GetRange_m821C7554D9144281552F48B790B4E5109D285595 (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method) 
{
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* V_0 = NULL;
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_count;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F(((int32_t)16), 4, NULL);
	}

IL_0015:
	{
		int32_t L_2 = __this->____size;
		int32_t L_3 = ___0_index;
		int32_t L_4 = ___1_count;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_2, L_3))) >= ((int32_t)L_4)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(((int32_t)23), NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_count;
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_6 = (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0));
		List_1__ctor_m30DD6F0F8DFBA9856BF7220A3CDB1C89ECEC0D98(L_6, L_5, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 25));
		V_0 = L_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = __this->____items;
		int32_t L_8 = ___0_index;
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_9 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = L_9->____items;
		int32_t L_11 = ___1_count;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_7, L_8, (RuntimeArray*)L_10, 0, L_11, NULL);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_12 = V_0;
		int32_t L_13 = ___1_count;
		L_12->____size = L_13;
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_14 = V_0;
		return L_14;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_IndexOf_mC3D1A2CECAC0E3D42C78B43772E1BD3D0333C450 (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_item, const RuntimeMethod* method) 
{
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->____items;
		int32_t L_1 = ___0_item;
		int32_t L_2 = __this->____size;
		int32_t L_3;
		L_3 = Array_IndexOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m22CB8CB6C30E1C3E70C8662D7A290B88EF5007F3(L_0, L_1, 0, L_2, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 26));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_System_Collections_IList_IndexOf_m9FC60CFC60B64D25F3F26455A4AC0386E6E2C26F (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit);
	{
		RuntimeObject* L_0 = ___0_item;
		CHECKED_LOCAL_INIT(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)),il2cpp_codegen_runtime_class_init_inline);
		bool L_1;
		L_1 = List_1_IsCompatibleObject_m0C506FD38C6F16AC8A7700817EF89401910F873C(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 18));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_item;
		int32_t L_3;
		L_3 = List_1_IndexOf_mC3D1A2CECAC0E3D42C78B43772E1BD3D0333C450(__this, ((*(int32_t*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 17));
		return L_3;
	}

IL_0015:
	{
		return (-1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Insert_mC1B6D4E6CC94D8BA82A60B2F80CE9684D9345AAE (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_index, int32_t ___1_item, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_0012;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F(((int32_t)13), ((int32_t)27), NULL);
	}

IL_0012:
	{
		int32_t L_2 = __this->____size;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = __this->____items;
		int32_t L_4 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_3)->max_length),NULL));
		if ((!(((uint32_t)L_2) == ((uint32_t)L_4))))
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_5 = __this->____size;
		List_1_EnsureCapacity_m86DF3071CD67B1463C1CF26C7791331D70D431C0(__this, ((int32_t)il2cpp_codegen_add(L_5, 1)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 12));
	}

IL_0030:
	{
		int32_t L_6 = ___0_index;
		int32_t L_7 = __this->____size;
		if ((((int32_t)L_6) >= ((int32_t)L_7)))
		{
			goto IL_0056;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = __this->____items;
		int32_t L_9 = ___0_index;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = __this->____items;
		int32_t L_11 = ___0_index;
		int32_t L_12 = __this->____size;
		int32_t L_13 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_8, L_9, (RuntimeArray*)L_10, ((int32_t)il2cpp_codegen_add(L_11, 1)), ((int32_t)il2cpp_codegen_subtract(L_12, L_13)), NULL);
	}

IL_0056:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_14 = __this->____items;
		int32_t L_15 = ___0_index;
		int32_t L_16 = ___1_item;
		(L_14)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_15), (int32_t)L_16);
		int32_t L_17 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_17, 1));
		int32_t L_18 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_18, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_System_Collections_IList_Insert_m998EB213788F375DC5B0A8A62C3400CBD267E86B (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_index, RuntimeObject* ___1_item, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(Type_t_StaticInit);
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = ___1_item;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m0F7A078274F301B83DFC51191B3AFC763DE9C4D0(L_0, ((int32_t)20), NULL);
	}
	try
	{
		int32_t L_1 = ___0_index;
		RuntimeObject* L_2 = ___1_item;
		List_1_Insert_mC1B6D4E6CC94D8BA82A60B2F80CE9684D9345AAE(__this, L_1, ((*(int32_t*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 27));
		goto IL_002a;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0017;
		}
		throw e;
	}

CATCH_0017:
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_3 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_4 = ___1_item;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 10)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
		ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_4, L_6, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_002a;
	}

IL_002a:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_InsertRange_m1D3DE2073A8946E2D1113677F2062F35881FA7B8 (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_index, RuntimeObject* ___1_collection, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	RuntimeObject* V_2 = NULL;
	{
		RuntimeObject* L_0 = ___1_collection;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(6, NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___0_index;
		int32_t L_2 = __this->____size;
		if ((!(((uint32_t)L_1) > ((uint32_t)L_2))))
		{
			goto IL_0017;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRange_IndexException_mC7661B8C6DD827679C95FC6B6C08F8724174936D(NULL);
	}

IL_0017:
	{
		RuntimeObject* L_3 = ___1_collection;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_3, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2)));
		RuntimeObject* L_4 = V_0;
		if (!L_4)
		{
			goto IL_00bc;
		}
	}
	{
		RuntimeObject* L_5 = V_0;
		int32_t L_6;
		L_6 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_5);
		V_1 = L_6;
		int32_t L_7 = V_1;
		if ((((int32_t)L_7) <= ((int32_t)0)))
		{
			goto IL_00fb;
		}
	}
	{
		int32_t L_8 = __this->____size;
		int32_t L_9 = V_1;
		List_1_EnsureCapacity_m86DF3071CD67B1463C1CF26C7791331D70D431C0(__this, ((int32_t)il2cpp_codegen_add(L_8, L_9)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 12));
		int32_t L_10 = ___0_index;
		int32_t L_11 = __this->____size;
		if ((((int32_t)L_10) >= ((int32_t)L_11)))
		{
			goto IL_0066;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = __this->____items;
		int32_t L_13 = ___0_index;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_14 = __this->____items;
		int32_t L_15 = ___0_index;
		int32_t L_16 = V_1;
		int32_t L_17 = __this->____size;
		int32_t L_18 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_12, L_13, (RuntimeArray*)L_14, ((int32_t)il2cpp_codegen_add(L_15, L_16)), ((int32_t)il2cpp_codegen_subtract(L_17, L_18)), NULL);
	}

IL_0066:
	{
		RuntimeObject* L_19 = V_0;
		if ((!(((RuntimeObject*)(List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*)__this) == ((RuntimeObject*)(RuntimeObject*)L_19))))
		{
			goto IL_009f;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_20 = __this->____items;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_21 = __this->____items;
		int32_t L_22 = ___0_index;
		int32_t L_23 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_20, 0, (RuntimeArray*)L_21, L_22, L_23, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_24 = __this->____items;
		int32_t L_25 = ___0_index;
		int32_t L_26 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_27 = __this->____items;
		int32_t L_28 = ___0_index;
		int32_t L_29 = __this->____size;
		int32_t L_30 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_24, ((int32_t)il2cpp_codegen_add(L_25, L_26)), (RuntimeArray*)L_27, ((int32_t)il2cpp_codegen_multiply(L_28, 2)), ((int32_t)il2cpp_codegen_subtract(L_29, L_30)), NULL);
		goto IL_00ac;
	}

IL_009f:
	{
		RuntimeObject* L_31 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_32 = __this->____items;
		int32_t L_33 = ___0_index;
		InterfaceActionInvoker2< Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_31, L_32, L_33);
	}

IL_00ac:
	{
		int32_t L_34 = __this->____size;
		int32_t L_35 = V_1;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_34, L_35));
		goto IL_00fb;
	}

IL_00bc:
	{
		int32_t L_36 = ___0_index;
		int32_t L_37 = __this->____size;
		if ((((int32_t)L_36) >= ((int32_t)L_37)))
		{
			goto IL_00f4;
		}
	}
	{
		RuntimeObject* L_38 = ___1_collection;
		RuntimeObject* L_39;
		L_39 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 28), L_38);
		V_2 = L_39;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00ea:
			{
				{
					RuntimeObject* L_40 = V_2;
					if (!L_40)
					{
						goto IL_00f3;
					}
				}
				{
					RuntimeObject* L_41 = V_2;
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_41);
				}

IL_00f3:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_00e0_1;
			}

IL_00ce_1:
			{
				int32_t L_42 = ___0_index;
				int32_t L_43 = L_42;
				___0_index = ((int32_t)il2cpp_codegen_add(L_43, 1));
				RuntimeObject* L_44 = V_2;
				int32_t L_45;
				L_45 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 30), L_44);
				List_1_Insert_mC1B6D4E6CC94D8BA82A60B2F80CE9684D9345AAE(__this, L_43, L_45, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 27));
			}

IL_00e0_1:
			{
				RuntimeObject* L_46 = V_2;
				bool L_47;
				L_47 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_46);
				if (L_47)
				{
					goto IL_00ce_1;
				}
			}
			{
				goto IL_00fb;
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

IL_00f4:
	{
		RuntimeObject* L_48 = ___1_collection;
		List_1_AddEnumerable_m0D03C24E342A0F77A0042603E40AD506136B684F(__this, L_48, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 5));
	}

IL_00fb:
	{
		int32_t L_49 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_49, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m2B41E5B9E061DD4D5F58B693018024AADF2AD7F5 (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_item;
		int32_t L_1;
		L_1 = List_1_IndexOf_mC3D1A2CECAC0E3D42C78B43772E1BD3D0333C450(__this, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 17));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		int32_t L_3 = V_0;
		List_1_RemoveAt_m76C4CDACF47BA529BAFADFC8D5E13DB9587F4004(__this, L_3, NULL);
		return (bool)1;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_System_Collections_IList_Remove_mC39E90783873C337B8CB0938BE43A6E5AD42EF0A (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit);
	{
		RuntimeObject* L_0 = ___0_item;
		CHECKED_LOCAL_INIT(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)),il2cpp_codegen_runtime_class_init_inline);
		bool L_1;
		L_1 = List_1_IsCompatibleObject_m0C506FD38C6F16AC8A7700817EF89401910F873C(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 18));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_item;
		bool L_3;
		L_3 = List_1_Remove_m2B41E5B9E061DD4D5F58B693018024AADF2AD7F5(__this, ((*(int32_t*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 33));
	}

IL_0015:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_RemoveAll_mF14DFF09F0ADFF511FBE004265EF8B7269ABA4D8 (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, Predicate_1_t6CDE3111264F492F4F13277756366A07CA78A4C3* ___0_match, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Predicate_1_t6CDE3111264F492F4F13277756366A07CA78A4C3* L_0 = ___0_match;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(8, NULL);
	}

IL_0009:
	{
		V_0 = 0;
		goto IL_0011;
	}

IL_000d:
	{
		int32_t L_1 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_1, 1));
	}

IL_0011:
	{
		int32_t L_2 = V_0;
		int32_t L_3 = __this->____size;
		if ((((int32_t)L_2) >= ((int32_t)L_3)))
		{
			goto IL_002e;
		}
	}
	{
		Predicate_1_t6CDE3111264F492F4F13277756366A07CA78A4C3* L_4 = ___0_match;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = __this->____items;
		int32_t L_6 = V_0;
		int32_t L_7 = L_6;
		int32_t L_8 = (L_5)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7));
		bool L_9;
		L_9 = Predicate_1_Invoke_mD16C664FFE93598D1C12AC86190D12B0F90B5419_inline(L_4, L_8, NULL);
		if (!L_9)
		{
			goto IL_000d;
		}
	}

IL_002e:
	{
		int32_t L_10 = V_0;
		int32_t L_11 = __this->____size;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_0039;
		}
	}
	{
		return 0;
	}

IL_0039:
	{
		int32_t L_12 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
		goto IL_0089;
	}

IL_003f:
	{
		int32_t L_13 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0043:
	{
		int32_t L_14 = V_1;
		int32_t L_15 = __this->____size;
		if ((((int32_t)L_14) >= ((int32_t)L_15)))
		{
			goto IL_0060;
		}
	}
	{
		Predicate_1_t6CDE3111264F492F4F13277756366A07CA78A4C3* L_16 = ___0_match;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_17 = __this->____items;
		int32_t L_18 = V_1;
		int32_t L_19 = L_18;
		int32_t L_20 = (L_17)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_19));
		bool L_21;
		L_21 = Predicate_1_Invoke_mD16C664FFE93598D1C12AC86190D12B0F90B5419_inline(L_16, L_20, NULL);
		if (L_21)
		{
			goto IL_003f;
		}
	}

IL_0060:
	{
		int32_t L_22 = V_1;
		int32_t L_23 = __this->____size;
		if ((((int32_t)L_22) >= ((int32_t)L_23)))
		{
			goto IL_0089;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_24 = __this->____items;
		int32_t L_25 = V_0;
		int32_t L_26 = L_25;
		V_0 = ((int32_t)il2cpp_codegen_add(L_26, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_27 = __this->____items;
		int32_t L_28 = V_1;
		int32_t L_29 = L_28;
		V_1 = ((int32_t)il2cpp_codegen_add(L_29, 1));
		int32_t L_30 = L_29;
		int32_t L_31 = (L_27)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_30));
		(L_24)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_26), (int32_t)L_31);
	}

IL_0089:
	{
		int32_t L_32 = V_1;
		int32_t L_33 = __this->____size;
		if ((((int32_t)L_32) < ((int32_t)L_33)))
		{
			goto IL_0043;
		}
	}
	{
		goto IL_00ad;
	}

IL_00ad:
	{
		int32_t L_34 = __this->____size;
		int32_t L_35 = V_0;
		int32_t L_36 = V_0;
		__this->____size = L_36;
		int32_t L_37 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_37, 1));
		return ((int32_t)il2cpp_codegen_subtract(L_34, L_35));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_m76C4CDACF47BA529BAFADFC8D5E13DB9587F4004 (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRange_IndexException_mC7661B8C6DD827679C95FC6B6C08F8724174936D(NULL);
	}

IL_000e:
	{
		int32_t L_2 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_2, 1));
		int32_t L_3 = ___0_index;
		int32_t L_4 = __this->____size;
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_0042;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = __this->____items;
		int32_t L_6 = ___0_index;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = __this->____items;
		int32_t L_8 = ___0_index;
		int32_t L_9 = __this->____size;
		int32_t L_10 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, ((int32_t)il2cpp_codegen_add(L_6, 1)), (RuntimeArray*)L_7, L_8, ((int32_t)il2cpp_codegen_subtract(L_9, L_10)), NULL);
	}

IL_0042:
	{
		goto IL_0063;
	}

IL_0063:
	{
		int32_t L_11 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_11, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveRange_m1E69C4C8438AA5D7E05C2936C79C01D96F89BE68 (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_count;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F(((int32_t)16), 4, NULL);
	}

IL_0015:
	{
		int32_t L_2 = __this->____size;
		int32_t L_3 = ___0_index;
		int32_t L_4 = ___1_count;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_2, L_3))) >= ((int32_t)L_4)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(((int32_t)23), NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_count;
		if ((((int32_t)L_5) <= ((int32_t)0)))
		{
			goto IL_008d;
		}
	}
	{
		int32_t L_6 = __this->____size;
		int32_t L_7 = __this->____size;
		int32_t L_8 = ___1_count;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_7, L_8));
		int32_t L_9 = ___0_index;
		int32_t L_10 = __this->____size;
		if ((((int32_t)L_9) >= ((int32_t)L_10)))
		{
			goto IL_0066;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____items;
		int32_t L_12 = ___0_index;
		int32_t L_13 = ___1_count;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_14 = __this->____items;
		int32_t L_15 = ___0_index;
		int32_t L_16 = __this->____size;
		int32_t L_17 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_11, ((int32_t)il2cpp_codegen_add(L_12, L_13)), (RuntimeArray*)L_14, L_15, ((int32_t)il2cpp_codegen_subtract(L_16, L_17)), NULL);
	}

IL_0066:
	{
		int32_t L_18 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_18, 1));
		goto IL_008d;
	}

IL_008d:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Reverse_m09394C650409964E568ED088D88C1BA78EE468DC (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_inline(__this, NULL);
		List_1_Reverse_mE0857BE335F36FD830B3A301AA7BF67F2F3C783F(__this, 0, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 35));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Reverse_mE0857BE335F36FD830B3A301AA7BF67F2F3C783F (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_count;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F(((int32_t)16), 4, NULL);
	}

IL_0015:
	{
		int32_t L_2 = __this->____size;
		int32_t L_3 = ___0_index;
		int32_t L_4 = ___1_count;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_2, L_3))) >= ((int32_t)L_4)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(((int32_t)23), NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_count;
		if ((((int32_t)L_5) <= ((int32_t)1)))
		{
			goto IL_0038;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = __this->____items;
		int32_t L_7 = ___0_index;
		int32_t L_8 = ___1_count;
		Array_Reverse_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m57764BD8E3718881AE35094284EFDECEE528991D(L_6, L_7, L_8, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 36));
	}

IL_0038:
	{
		int32_t L_9 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_9, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_m8AF34E53DDA0850F189B6FA670A2CC358C9747E7 (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_inline(__this, NULL);
		RuntimeObject* L_1 = ___0_comparer;
		List_1_Sort_m3178B19CB7B6281DC7B995E4C5A6AD200EC6153B(__this, 0, L_0, L_1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 37));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_m3178B19CB7B6281DC7B995E4C5A6AD200EC6153B (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_index, int32_t ___1_count, RuntimeObject* ___2_comparer, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_count;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F(((int32_t)16), 4, NULL);
	}

IL_0015:
	{
		int32_t L_2 = __this->____size;
		int32_t L_3 = ___0_index;
		int32_t L_4 = ___1_count;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_2, L_3))) >= ((int32_t)L_4)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(((int32_t)23), NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_count;
		if ((((int32_t)L_5) <= ((int32_t)1)))
		{
			goto IL_0039;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = __this->____items;
		int32_t L_7 = ___0_index;
		int32_t L_8 = ___1_count;
		RuntimeObject* L_9 = ___2_comparer;
		Array_Sort_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m6E0CF4C26182BB9D788C90ABE423C2F4CD145E41(L_6, L_7, L_8, L_9, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 38));
	}

IL_0039:
	{
		int32_t L_10 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_10, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_m90CDC07AEBE737318A490F4C2BC6F2955443EDA4 (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, Comparison_1_tB7DE1436CB53924C2FC41FF926D074C1ACC14D89* ___0_comparison, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(ArraySortHelper_1_t0B69B36E8E1F97490E6BE32C23AE1784AB1ADA3A_StaticInit);
	{
		Comparison_1_tB7DE1436CB53924C2FC41FF926D074C1ACC14D89* L_0 = ___0_comparison;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(((int32_t)34), NULL);
	}

IL_000a:
	{
		int32_t L_1 = __this->____size;
		if ((((int32_t)L_1) <= ((int32_t)1)))
		{
			goto IL_0026;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->____items;
		int32_t L_3 = __this->____size;
		Comparison_1_tB7DE1436CB53924C2FC41FF926D074C1ACC14D89* L_4 = ___0_comparison;
		CHECKED_LOCAL_INIT(ArraySortHelper_1_t0B69B36E8E1F97490E6BE32C23AE1784AB1ADA3A_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 40)),il2cpp_codegen_runtime_class_init_inline);
		ArraySortHelper_1_Sort_m7FA55FB83B1A81CF769D2928FCE3E06425DAC06B(L_2, 0, L_3, L_4, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 39));
	}

IL_0026:
	{
		int32_t L_5 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_5, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* List_1_ToArray_m65479FB75A5FE539EA1A0D6681172717D23CEAAA (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit);
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		CHECKED_LOCAL_INIT(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)),il2cpp_codegen_runtime_class_init_inline);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = ((List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)))->___s_emptyArray;
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____size;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1), (uint32_t)L_2);
		V_0 = L_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = __this->____items;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = V_0;
		int32_t L_6 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_4, 0, (RuntimeArray*)L_5, 0, L_6, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = V_0;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddEnumerable_m0D03C24E342A0F77A0042603E40AD506136B684F (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, RuntimeObject* ___0_enumerable, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		RuntimeObject* L_1 = ___0_enumerable;
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 28), L_1);
		V_0 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0063:
			{
				{
					RuntimeObject* L_3 = V_0;
					if (!L_3)
					{
						goto IL_006c;
					}
				}
				{
					RuntimeObject* L_4 = V_0;
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_4);
				}

IL_006c:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_0059_1;
			}

IL_0017_1:
			{
				RuntimeObject* L_5 = V_0;
				int32_t L_6;
				L_6 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 30), L_5);
				V_1 = L_6;
				int32_t L_7 = __this->____size;
				Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = __this->____items;
				int32_t L_9 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_8)->max_length),NULL));
				if ((!(((uint32_t)L_7) == ((uint32_t)L_9))))
				{
					goto IL_003c_1;
				}
			}
			{
				int32_t L_10 = __this->____size;
				List_1_EnsureCapacity_m86DF3071CD67B1463C1CF26C7791331D70D431C0(__this, ((int32_t)il2cpp_codegen_add(L_10, 1)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 12));
			}

IL_003c_1:
			{
				Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____items;
				int32_t L_12 = __this->____size;
				V_2 = L_12;
				int32_t L_13 = V_2;
				__this->____size = ((int32_t)il2cpp_codegen_add(L_13, 1));
				int32_t L_14 = V_2;
				int32_t L_15 = V_1;
				(L_11)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_14), (int32_t)L_15);
			}

IL_0059_1:
			{
				RuntimeObject* L_16 = V_0;
				bool L_17;
				L_17 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_16);
				if (L_17)
				{
					goto IL_0017_1;
				}
			}
			{
				goto IL_006d;
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

IL_006d:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__cctor_m34A28120D67ECFCD65E7E95E5A27026C1DF8B865 (const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1), (uint32_t)0);
		((List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___s_emptyArray = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___s_emptyArray), (void*)L_0);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m5D29B990EB19839003AAD6B3FA764A2210996EB1 (List_1_t6D4D3AAF46D9E2944E578579CE720FABFD990C26* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit);
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		CHECKED_LOCAL_INIT(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)),il2cpp_codegen_runtime_class_init_inline);
		IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_0 = ((List_1_t6D4D3AAF46D9E2944E578579CE720FABFD990C26_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)))->___s_emptyArray;
		__this->____items = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mFEEC2CDB7C8FAB7B07B0946BFB8ED8CB182AF5A9 (List_1_t6D4D3AAF46D9E2944E578579CE720FABFD990C26* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit);
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0012;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F(((int32_t)12), 4, NULL);
	}

IL_0012:
	{
		int32_t L_1 = ___0_capacity;
		if (L_1)
		{
			goto IL_0021;
		}
	}
	{
		CHECKED_LOCAL_INIT(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)),il2cpp_codegen_runtime_class_init_inline);
		IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_2 = ((List_1_t6D4D3AAF46D9E2944E578579CE720FABFD990C26_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)))->___s_emptyArray;
		__this->____items = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_2);
		return;
	}

IL_0021:
	{
		int32_t L_3 = ___0_capacity;
		IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_4 = (IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832*)(IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1), (uint32_t)L_3);
		__this->____items = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_4);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m9392B2717E9D48CC39482A30BD57C0190C7AD45E (List_1_t6D4D3AAF46D9E2944E578579CE720FABFD990C26* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit);
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_collection;
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(6, NULL);
	}

IL_000f:
	{
		RuntimeObject* L_1 = ___0_collection;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_1, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2)));
		RuntimeObject* L_2 = V_0;
		if (!L_2)
		{
			goto IL_0050;
		}
	}
	{
		RuntimeObject* L_3 = V_0;
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_3);
		V_1 = L_4;
		int32_t L_5 = V_1;
		if (L_5)
		{
			goto IL_002f;
		}
	}
	{
		CHECKED_LOCAL_INIT(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)),il2cpp_codegen_runtime_class_init_inline);
		IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_6 = ((List_1_t6D4D3AAF46D9E2944E578579CE720FABFD990C26_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)))->___s_emptyArray;
		__this->____items = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_6);
		return;
	}

IL_002f:
	{
		int32_t L_7 = V_1;
		IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_8 = (IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832*)(IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1), (uint32_t)L_7);
		__this->____items = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_8);
		RuntimeObject* L_9 = V_0;
		IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_10 = __this->____items;
		InterfaceActionInvoker2< IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_9, L_10, 0);
		int32_t L_11 = V_1;
		__this->____size = L_11;
		return;
	}

IL_0050:
	{
		__this->____size = 0;
		CHECKED_LOCAL_INIT(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)),il2cpp_codegen_runtime_class_init_inline);
		IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_12 = ((List_1_t6D4D3AAF46D9E2944E578579CE720FABFD990C26_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)))->___s_emptyArray;
		__this->____items = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_12);
		RuntimeObject* L_13 = ___0_collection;
		List_1_AddEnumerable_mF75A670B3D0D8AF2E9266550725885BA19A3CB70(__this, L_13, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 5));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Capacity_mC7DF87D52676FCDB707F792F4854EB4AFB6EF7D2 (List_1_t6D4D3AAF46D9E2944E578579CE720FABFD990C26* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit);
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* V_0 = NULL;
	{
		int32_t L_0 = ___0_value;
		int32_t L_1 = __this->____size;
		if ((((int32_t)L_0) >= ((int32_t)L_1)))
		{
			goto IL_0012;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F(((int32_t)15), ((int32_t)21), NULL);
	}

IL_0012:
	{
		int32_t L_2 = ___0_value;
		IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_3 = __this->____items;
		int32_t L_4 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_3)->max_length),NULL));
		if ((((int32_t)L_2) == ((int32_t)L_4)))
		{
			goto IL_0058;
		}
	}
	{
		int32_t L_5 = ___0_value;
		if ((((int32_t)L_5) <= ((int32_t)0)))
		{
			goto IL_004d;
		}
	}
	{
		int32_t L_6 = ___0_value;
		IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_7 = (IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832*)(IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1), (uint32_t)L_6);
		V_0 = L_7;
		int32_t L_8 = __this->____size;
		if ((((int32_t)L_8) <= ((int32_t)0)))
		{
			goto IL_0045;
		}
	}
	{
		IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_9 = __this->____items;
		IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_10 = V_0;
		int32_t L_11 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_9, 0, (RuntimeArray*)L_10, 0, L_11, NULL);
	}

IL_0045:
	{
		IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_12 = V_0;
		__this->____items = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_12);
		return;
	}

IL_004d:
	{
		CHECKED_LOCAL_INIT(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)),il2cpp_codegen_runtime_class_init_inline);
		IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_13 = ((List_1_t6D4D3AAF46D9E2944E578579CE720FABFD990C26_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)))->___s_emptyArray;
		__this->____items = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_13);
	}

IL_0058:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t List_1_get_Item_m80B91085C4AB45590345F24DE9DE55833417232D (List_1_t6D4D3AAF46D9E2944E578579CE720FABFD990C26* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRange_IndexException_mC7661B8C6DD827679C95FC6B6C08F8724174936D(NULL);
	}

IL_000e:
	{
		IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_2 = __this->____items;
		int32_t L_3 = ___0_index;
		int32_t L_4 = L_3;
		intptr_t L_5 = (L_2)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_mFEF0384CF40792E1F2D1B89BFA8D57F2AE977378 (List_1_t6D4D3AAF46D9E2944E578579CE720FABFD990C26* __this, int32_t ___0_index, intptr_t ___1_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRange_IndexException_mC7661B8C6DD827679C95FC6B6C08F8724174936D(NULL);
	}

IL_000e:
	{
		IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_2 = __this->____items;
		int32_t L_3 = ___0_index;
		intptr_t L_4 = ___1_value;
		(L_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3), (intptr_t)L_4);
		int32_t L_5 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_5, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_IsCompatibleObject_mE01111D6A37077AA71987C0D6B399DCCE1D47FD3 (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6))))
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(intptr_t));
		intptr_t L_2 = V_0;
		return false;
	}

IL_001d:
	{
		return (bool)0;
	}

IL_001f:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_System_Collections_IList_get_Item_m7EEC721EC79262856B37C87F91B6EEF6A6B4708D (List_1_t6D4D3AAF46D9E2944E578579CE720FABFD990C26* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		intptr_t L_1;
		L_1 = List_1_get_Item_m80B91085C4AB45590345F24DE9DE55833417232D(__this, L_0, NULL);
		intptr_t L_2 = L_1;
		RuntimeObject* L_3 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6), &L_2);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_System_Collections_IList_set_Item_m3C50EED246A8FAF6BA96DA2D78F2061037D51602 (List_1_t6D4D3AAF46D9E2944E578579CE720FABFD990C26* __this, int32_t ___0_index, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(Type_t_StaticInit);
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = ___1_value;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisIntPtr_t_mDD5DC9A593963B7FEE10D59351EA0AA0C0023879(L_0, ((int32_t)15), NULL);
	}
	try
	{
		int32_t L_1 = ___0_index;
		RuntimeObject* L_2 = ___1_value;
		List_1_set_Item_mFEF0384CF40792E1F2D1B89BFA8D57F2AE977378(__this, L_1, ((*(intptr_t*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6)))), NULL);
		goto IL_002a;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0017;
		}
		throw e;
	}

CATCH_0017:
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_3 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_4 = ___1_value;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 10)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
		ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_4, L_6, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_002a;
	}

IL_002a:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_m40A676842DBAD96A16B8A64BE3ACB4F133CC81A7 (List_1_t6D4D3AAF46D9E2944E578579CE720FABFD990C26* __this, intptr_t ___0_item, const RuntimeMethod* method) 
{
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_1 = __this->____items;
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		V_1 = L_2;
		int32_t L_3 = V_1;
		IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_4 = V_0;
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		if ((!(((uint32_t)L_3) < ((uint32_t)L_5))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_6 = V_1;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_6, 1));
		IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_7 = V_0;
		int32_t L_8 = V_1;
		intptr_t L_9 = ___0_item;
		(L_7)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_8), (intptr_t)L_9);
		return;
	}

IL_0034:
	{
		intptr_t L_10 = ___0_item;
		List_1_AddWithResize_mFD3AECDFEA2B2C10E6C4A4400AF180A57212A0AF(__this, L_10, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 11));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_mFD3AECDFEA2B2C10E6C4A4400AF180A57212A0AF (List_1_t6D4D3AAF46D9E2944E578579CE720FABFD990C26* __this, intptr_t ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____size;
		V_0 = L_0;
		int32_t L_1 = V_0;
		List_1_EnsureCapacity_mD58612136E5F31EA08BDB8C4D659526F6801AC8B(__this, ((int32_t)il2cpp_codegen_add(L_1, 1)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 12));
		int32_t L_2 = V_0;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_2, 1));
		IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_3 = __this->____items;
		int32_t L_4 = V_0;
		intptr_t L_5 = ___0_item;
		(L_3)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4), (intptr_t)L_5);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_System_Collections_IList_Add_mFB84BB5CBA9878EDDD12632CCFD2E5EE99F8635C (List_1_t6D4D3AAF46D9E2944E578579CE720FABFD990C26* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(Type_t_StaticInit);
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = ___0_item;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisIntPtr_t_mDD5DC9A593963B7FEE10D59351EA0AA0C0023879(L_0, ((int32_t)20), NULL);
	}
	try
	{
		RuntimeObject* L_1 = ___0_item;
		List_1_Add_m40A676842DBAD96A16B8A64BE3ACB4F133CC81A7_inline(__this, ((*(intptr_t*)UnBox(L_1, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		goto IL_0029;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0016;
		}
		throw e;
	}

CATCH_0016:
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_2 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_3 = ___0_item;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_4 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 10)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_5;
		L_5 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_4, NULL);
		ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_3, L_5, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0029;
	}

IL_0029:
	{
		int32_t L_6;
		L_6 = List_1_get_Count_m3C633C1D40D1D824C9EDF031FA1FF2AB5CD586E2_inline(__this, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_6, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddRange_m489EE9DA7891076376F127BFDD74A4F810BD4E22 (List_1_t6D4D3AAF46D9E2944E578579CE720FABFD990C26* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		RuntimeObject* L_1 = ___0_collection;
		List_1_InsertRange_m54AAFAC76FCBEC819D4B3F86673B052D375F69CE(__this, L_0, L_1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 15));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_m69A0FC39CBC66ADC415DF72EE86E432ED7C1F4E1 (List_1_t6D4D3AAF46D9E2944E578579CE720FABFD990C26* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		goto IL_0035;
	}

IL_0035:
	{
		__this->____size = 0;
	}

IL_003c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_m12DF6A0A682745AD74A51FDD38F76ED167C7A82D (List_1_t6D4D3AAF46D9E2944E578579CE720FABFD990C26* __this, intptr_t ___0_item, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		intptr_t L_1 = ___0_item;
		int32_t L_2;
		L_2 = List_1_IndexOf_mC56D43DFD8ADFA8CE54B6F2A3D2A9FD3BF21C549(__this, L_1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 17));
		return (bool)((((int32_t)((((int32_t)L_2) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0016:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_System_Collections_IList_Contains_mB71631C59F319307EAE2D29420C8A082A5616044 (List_1_t6D4D3AAF46D9E2944E578579CE720FABFD990C26* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit);
	{
		RuntimeObject* L_0 = ___0_item;
		CHECKED_LOCAL_INIT(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)),il2cpp_codegen_runtime_class_init_inline);
		bool L_1;
		L_1 = List_1_IsCompatibleObject_mE01111D6A37077AA71987C0D6B399DCCE1D47FD3(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 18));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_item;
		bool L_3;
		L_3 = List_1_Contains_m12DF6A0A682745AD74A51FDD38F76ED167C7A82D(__this, ((*(intptr_t*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 19));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_CopyTo_m4CD48FAE3389BE1C1CD07942FCF834966C58E560 (List_1_t6D4D3AAF46D9E2944E578579CE720FABFD990C26* __this, IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___0_array, const RuntimeMethod* method) 
{
	{
		IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_0 = ___0_array;
		List_1_CopyTo_m78D1194C1B144CF0D8CFC975434166E718165E93(__this, L_0, 0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_EnsureCapacity_mD58612136E5F31EA08BDB8C4D659526F6801AC8B (List_1_t6D4D3AAF46D9E2944E578579CE720FABFD990C26* __this, int32_t ___0_min, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t G_B4_0 = 0;
	{
		IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_0 = __this->____items;
		int32_t L_1 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_0)->max_length),NULL));
		int32_t L_2 = ___0_min;
		if ((((int32_t)L_1) >= ((int32_t)L_2)))
		{
			goto IL_003d;
		}
	}
	{
		IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_3 = __this->____items;
		if (!(((RuntimeArray*)L_3)->max_length))
		{
			goto IL_0020;
		}
	}
	{
		IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_4 = __this->____items;
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		G_B4_0 = ((int32_t)il2cpp_codegen_multiply(L_5, 2));
		goto IL_0021;
	}

IL_0020:
	{
		G_B4_0 = 4;
	}

IL_0021:
	{
		V_0 = G_B4_0;
		int32_t L_6 = V_0;
		if ((!(((uint32_t)L_6) > ((uint32_t)((int32_t)2146435071)))))
		{
			goto IL_0030;
		}
	}
	{
		V_0 = ((int32_t)2146435071);
	}

IL_0030:
	{
		int32_t L_7 = V_0;
		int32_t L_8 = ___0_min;
		if ((((int32_t)L_7) >= ((int32_t)L_8)))
		{
			goto IL_0036;
		}
	}
	{
		int32_t L_9 = ___0_min;
		V_0 = L_9;
	}

IL_0036:
	{
		int32_t L_10 = V_0;
		List_1_set_Capacity_mC7DF87D52676FCDB707F792F4854EB4AFB6EF7D2(__this, L_10, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 21));
	}

IL_003d:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_ForEach_mE9F8F971A1635469850D75EF714CB0FF6EA520DC (List_1_t6D4D3AAF46D9E2944E578579CE720FABFD990C26* __this, Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2* ___0_action, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2* L_0 = ___0_action;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(((int32_t)33), NULL);
	}

IL_000a:
	{
		int32_t L_1 = __this->____version;
		V_0 = L_1;
		V_1 = 0;
		goto IL_0034;
	}

IL_0015:
	{
		int32_t L_2 = V_0;
		int32_t L_3 = __this->____version;
		if ((!(((uint32_t)L_2) == ((uint32_t)L_3))))
		{
			goto IL_003d;
		}
	}
	{
		Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2* L_4 = ___0_action;
		IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_5 = __this->____items;
		int32_t L_6 = V_1;
		int32_t L_7 = L_6;
		intptr_t L_8 = (L_5)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7));
		Action_1_Invoke_m783EC8C62449882812B741E4DE67BF3106686D9C_inline(L_4, L_8, NULL);
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0034:
	{
		int32_t L_10 = V_1;
		int32_t L_11 = __this->____size;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_0015;
		}
	}

IL_003d:
	{
		int32_t L_12 = V_0;
		int32_t L_13 = __this->____version;
		if ((((int32_t)L_12) == ((int32_t)L_13)))
		{
			goto IL_004b;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_InvalidOperation_EnumFailedVersion_m5331E2E0EC0E36843D53F439C2529530595ACE9F(NULL);
	}

IL_004b:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tDBDA4B0709B5415FB3A6891D4253A5C7ADF9D658 List_1_GetEnumerator_m729F04EC763CA388AFCBD6134AB4B808431D7D3B (List_1_t6D4D3AAF46D9E2944E578579CE720FABFD990C26* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tDBDA4B0709B5415FB3A6891D4253A5C7ADF9D658 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m48DD40EBB417626E48880FE8E5F1F0DE91E9C262((&L_0), __this, NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m148764BE0580EF07A83E8514973FF333957B760C (List_1_t6D4D3AAF46D9E2944E578579CE720FABFD990C26* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tDBDA4B0709B5415FB3A6891D4253A5C7ADF9D658 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m48DD40EBB417626E48880FE8E5F1F0DE91E9C262((&L_0), __this, NULL);
		Enumerator_tDBDA4B0709B5415FB3A6891D4253A5C7ADF9D658 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 23), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_System_Collections_IEnumerable_GetEnumerator_mB3E67CCC127C19CE127E66E3D3E9650FFCB76AC5 (List_1_t6D4D3AAF46D9E2944E578579CE720FABFD990C26* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tDBDA4B0709B5415FB3A6891D4253A5C7ADF9D658 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m48DD40EBB417626E48880FE8E5F1F0DE91E9C262((&L_0), __this, NULL);
		Enumerator_tDBDA4B0709B5415FB3A6891D4253A5C7ADF9D658 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 23), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t6D4D3AAF46D9E2944E578579CE720FABFD990C26* List_1_GetRange_m2A54BC1435813D2F86B1B28FE0E0A5CC49CA3CEF (List_1_t6D4D3AAF46D9E2944E578579CE720FABFD990C26* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method) 
{
	List_1_t6D4D3AAF46D9E2944E578579CE720FABFD990C26* V_0 = NULL;
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_count;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F(((int32_t)16), 4, NULL);
	}

IL_0015:
	{
		int32_t L_2 = __this->____size;
		int32_t L_3 = ___0_index;
		int32_t L_4 = ___1_count;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_2, L_3))) >= ((int32_t)L_4)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(((int32_t)23), NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_count;
		List_1_t6D4D3AAF46D9E2944E578579CE720FABFD990C26* L_6 = (List_1_t6D4D3AAF46D9E2944E578579CE720FABFD990C26*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0));
		List_1__ctor_mFEEC2CDB7C8FAB7B07B0946BFB8ED8CB182AF5A9(L_6, L_5, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 25));
		V_0 = L_6;
		IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_7 = __this->____items;
		int32_t L_8 = ___0_index;
		List_1_t6D4D3AAF46D9E2944E578579CE720FABFD990C26* L_9 = V_0;
		IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_10 = L_9->____items;
		int32_t L_11 = ___1_count;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_7, L_8, (RuntimeArray*)L_10, 0, L_11, NULL);
		List_1_t6D4D3AAF46D9E2944E578579CE720FABFD990C26* L_12 = V_0;
		int32_t L_13 = ___1_count;
		L_12->____size = L_13;
		List_1_t6D4D3AAF46D9E2944E578579CE720FABFD990C26* L_14 = V_0;
		return L_14;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_IndexOf_mC56D43DFD8ADFA8CE54B6F2A3D2A9FD3BF21C549 (List_1_t6D4D3AAF46D9E2944E578579CE720FABFD990C26* __this, intptr_t ___0_item, const RuntimeMethod* method) 
{
	{
		IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_0 = __this->____items;
		intptr_t L_1 = ___0_item;
		int32_t L_2 = __this->____size;
		int32_t L_3;
		L_3 = Array_IndexOf_TisIntPtr_t_m3EF39FCEE1A746C609E4ACA55B7DBA0B9B2FF13E(L_0, L_1, 0, L_2, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 26));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_System_Collections_IList_IndexOf_m55257A95C0593D753DA1E8B9641D8D01E4D30CD0 (List_1_t6D4D3AAF46D9E2944E578579CE720FABFD990C26* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit);
	{
		RuntimeObject* L_0 = ___0_item;
		CHECKED_LOCAL_INIT(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)),il2cpp_codegen_runtime_class_init_inline);
		bool L_1;
		L_1 = List_1_IsCompatibleObject_mE01111D6A37077AA71987C0D6B399DCCE1D47FD3(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 18));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_item;
		int32_t L_3;
		L_3 = List_1_IndexOf_mC56D43DFD8ADFA8CE54B6F2A3D2A9FD3BF21C549(__this, ((*(intptr_t*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 17));
		return L_3;
	}

IL_0015:
	{
		return (-1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Insert_m765F6BAE1C5A79CAD741F2A9471BDA8E54604973 (List_1_t6D4D3AAF46D9E2944E578579CE720FABFD990C26* __this, int32_t ___0_index, intptr_t ___1_item, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_0012;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F(((int32_t)13), ((int32_t)27), NULL);
	}

IL_0012:
	{
		int32_t L_2 = __this->____size;
		IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_3 = __this->____items;
		int32_t L_4 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_3)->max_length),NULL));
		if ((!(((uint32_t)L_2) == ((uint32_t)L_4))))
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_5 = __this->____size;
		List_1_EnsureCapacity_mD58612136E5F31EA08BDB8C4D659526F6801AC8B(__this, ((int32_t)il2cpp_codegen_add(L_5, 1)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 12));
	}

IL_0030:
	{
		int32_t L_6 = ___0_index;
		int32_t L_7 = __this->____size;
		if ((((int32_t)L_6) >= ((int32_t)L_7)))
		{
			goto IL_0056;
		}
	}
	{
		IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_8 = __this->____items;
		int32_t L_9 = ___0_index;
		IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_10 = __this->____items;
		int32_t L_11 = ___0_index;
		int32_t L_12 = __this->____size;
		int32_t L_13 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_8, L_9, (RuntimeArray*)L_10, ((int32_t)il2cpp_codegen_add(L_11, 1)), ((int32_t)il2cpp_codegen_subtract(L_12, L_13)), NULL);
	}

IL_0056:
	{
		IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_14 = __this->____items;
		int32_t L_15 = ___0_index;
		intptr_t L_16 = ___1_item;
		(L_14)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_15), (intptr_t)L_16);
		int32_t L_17 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_17, 1));
		int32_t L_18 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_18, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_System_Collections_IList_Insert_m928B1DAAF7F46D3F06A1E289D6420946ADF3E9D2 (List_1_t6D4D3AAF46D9E2944E578579CE720FABFD990C26* __this, int32_t ___0_index, RuntimeObject* ___1_item, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(Type_t_StaticInit);
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = ___1_item;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisIntPtr_t_mDD5DC9A593963B7FEE10D59351EA0AA0C0023879(L_0, ((int32_t)20), NULL);
	}
	try
	{
		int32_t L_1 = ___0_index;
		RuntimeObject* L_2 = ___1_item;
		List_1_Insert_m765F6BAE1C5A79CAD741F2A9471BDA8E54604973(__this, L_1, ((*(intptr_t*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 27));
		goto IL_002a;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0017;
		}
		throw e;
	}

CATCH_0017:
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_3 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_4 = ___1_item;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 10)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
		ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_4, L_6, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_002a;
	}

IL_002a:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_InsertRange_m54AAFAC76FCBEC819D4B3F86673B052D375F69CE (List_1_t6D4D3AAF46D9E2944E578579CE720FABFD990C26* __this, int32_t ___0_index, RuntimeObject* ___1_collection, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	RuntimeObject* V_2 = NULL;
	{
		RuntimeObject* L_0 = ___1_collection;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(6, NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___0_index;
		int32_t L_2 = __this->____size;
		if ((!(((uint32_t)L_1) > ((uint32_t)L_2))))
		{
			goto IL_0017;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRange_IndexException_mC7661B8C6DD827679C95FC6B6C08F8724174936D(NULL);
	}

IL_0017:
	{
		RuntimeObject* L_3 = ___1_collection;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_3, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2)));
		RuntimeObject* L_4 = V_0;
		if (!L_4)
		{
			goto IL_00bc;
		}
	}
	{
		RuntimeObject* L_5 = V_0;
		int32_t L_6;
		L_6 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_5);
		V_1 = L_6;
		int32_t L_7 = V_1;
		if ((((int32_t)L_7) <= ((int32_t)0)))
		{
			goto IL_00fb;
		}
	}
	{
		int32_t L_8 = __this->____size;
		int32_t L_9 = V_1;
		List_1_EnsureCapacity_mD58612136E5F31EA08BDB8C4D659526F6801AC8B(__this, ((int32_t)il2cpp_codegen_add(L_8, L_9)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 12));
		int32_t L_10 = ___0_index;
		int32_t L_11 = __this->____size;
		if ((((int32_t)L_10) >= ((int32_t)L_11)))
		{
			goto IL_0066;
		}
	}
	{
		IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_12 = __this->____items;
		int32_t L_13 = ___0_index;
		IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_14 = __this->____items;
		int32_t L_15 = ___0_index;
		int32_t L_16 = V_1;
		int32_t L_17 = __this->____size;
		int32_t L_18 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_12, L_13, (RuntimeArray*)L_14, ((int32_t)il2cpp_codegen_add(L_15, L_16)), ((int32_t)il2cpp_codegen_subtract(L_17, L_18)), NULL);
	}

IL_0066:
	{
		RuntimeObject* L_19 = V_0;
		if ((!(((RuntimeObject*)(List_1_t6D4D3AAF46D9E2944E578579CE720FABFD990C26*)__this) == ((RuntimeObject*)(RuntimeObject*)L_19))))
		{
			goto IL_009f;
		}
	}
	{
		IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_20 = __this->____items;
		IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_21 = __this->____items;
		int32_t L_22 = ___0_index;
		int32_t L_23 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_20, 0, (RuntimeArray*)L_21, L_22, L_23, NULL);
		IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_24 = __this->____items;
		int32_t L_25 = ___0_index;
		int32_t L_26 = V_1;
		IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_27 = __this->____items;
		int32_t L_28 = ___0_index;
		int32_t L_29 = __this->____size;
		int32_t L_30 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_24, ((int32_t)il2cpp_codegen_add(L_25, L_26)), (RuntimeArray*)L_27, ((int32_t)il2cpp_codegen_multiply(L_28, 2)), ((int32_t)il2cpp_codegen_subtract(L_29, L_30)), NULL);
		goto IL_00ac;
	}

IL_009f:
	{
		RuntimeObject* L_31 = V_0;
		IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_32 = __this->____items;
		int32_t L_33 = ___0_index;
		InterfaceActionInvoker2< IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_31, L_32, L_33);
	}

IL_00ac:
	{
		int32_t L_34 = __this->____size;
		int32_t L_35 = V_1;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_34, L_35));
		goto IL_00fb;
	}

IL_00bc:
	{
		int32_t L_36 = ___0_index;
		int32_t L_37 = __this->____size;
		if ((((int32_t)L_36) >= ((int32_t)L_37)))
		{
			goto IL_00f4;
		}
	}
	{
		RuntimeObject* L_38 = ___1_collection;
		RuntimeObject* L_39;
		L_39 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 28), L_38);
		V_2 = L_39;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00ea:
			{
				{
					RuntimeObject* L_40 = V_2;
					if (!L_40)
					{
						goto IL_00f3;
					}
				}
				{
					RuntimeObject* L_41 = V_2;
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_41);
				}

IL_00f3:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_00e0_1;
			}

IL_00ce_1:
			{
				int32_t L_42 = ___0_index;
				int32_t L_43 = L_42;
				___0_index = ((int32_t)il2cpp_codegen_add(L_43, 1));
				RuntimeObject* L_44 = V_2;
				intptr_t L_45;
				L_45 = InterfaceFuncInvoker0< intptr_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 30), L_44);
				List_1_Insert_m765F6BAE1C5A79CAD741F2A9471BDA8E54604973(__this, L_43, L_45, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 27));
			}

IL_00e0_1:
			{
				RuntimeObject* L_46 = V_2;
				bool L_47;
				L_47 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_46);
				if (L_47)
				{
					goto IL_00ce_1;
				}
			}
			{
				goto IL_00fb;
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

IL_00f4:
	{
		RuntimeObject* L_48 = ___1_collection;
		List_1_AddEnumerable_mF75A670B3D0D8AF2E9266550725885BA19A3CB70(__this, L_48, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 5));
	}

IL_00fb:
	{
		int32_t L_49 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_49, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m4329C1FC8B6E6C62C2C0314F1AE9D0002EF4215A (List_1_t6D4D3AAF46D9E2944E578579CE720FABFD990C26* __this, intptr_t ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		intptr_t L_0 = ___0_item;
		int32_t L_1;
		L_1 = List_1_IndexOf_mC56D43DFD8ADFA8CE54B6F2A3D2A9FD3BF21C549(__this, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 17));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		int32_t L_3 = V_0;
		List_1_RemoveAt_m4BDEB4B3ACBE5931B5698BD94322CA487B8F9589(__this, L_3, NULL);
		return (bool)1;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_System_Collections_IList_Remove_mCFE8D13FDC87D5A4472ACF5E1487E7AA45CF0509 (List_1_t6D4D3AAF46D9E2944E578579CE720FABFD990C26* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit);
	{
		RuntimeObject* L_0 = ___0_item;
		CHECKED_LOCAL_INIT(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)),il2cpp_codegen_runtime_class_init_inline);
		bool L_1;
		L_1 = List_1_IsCompatibleObject_mE01111D6A37077AA71987C0D6B399DCCE1D47FD3(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 18));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_item;
		bool L_3;
		L_3 = List_1_Remove_m4329C1FC8B6E6C62C2C0314F1AE9D0002EF4215A(__this, ((*(intptr_t*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 33));
	}

IL_0015:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_RemoveAll_m6DDF49012FC0B6792DE9CBEA898386A03CA33680 (List_1_t6D4D3AAF46D9E2944E578579CE720FABFD990C26* __this, Predicate_1_t1659F6182C62A18F9877F492426DD2DEC6A68A9B* ___0_match, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Predicate_1_t1659F6182C62A18F9877F492426DD2DEC6A68A9B* L_0 = ___0_match;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(8, NULL);
	}

IL_0009:
	{
		V_0 = 0;
		goto IL_0011;
	}

IL_000d:
	{
		int32_t L_1 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_1, 1));
	}

IL_0011:
	{
		int32_t L_2 = V_0;
		int32_t L_3 = __this->____size;
		if ((((int32_t)L_2) >= ((int32_t)L_3)))
		{
			goto IL_002e;
		}
	}
	{
		Predicate_1_t1659F6182C62A18F9877F492426DD2DEC6A68A9B* L_4 = ___0_match;
		IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_5 = __this->____items;
		int32_t L_6 = V_0;
		int32_t L_7 = L_6;
		intptr_t L_8 = (L_5)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7));
		bool L_9;
		L_9 = Predicate_1_Invoke_mCEB9F2ADE76B8447BE54DEAE7EC0E295F91FECDF_inline(L_4, L_8, NULL);
		if (!L_9)
		{
			goto IL_000d;
		}
	}

IL_002e:
	{
		int32_t L_10 = V_0;
		int32_t L_11 = __this->____size;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_0039;
		}
	}
	{
		return 0;
	}

IL_0039:
	{
		int32_t L_12 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
		goto IL_0089;
	}

IL_003f:
	{
		int32_t L_13 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0043:
	{
		int32_t L_14 = V_1;
		int32_t L_15 = __this->____size;
		if ((((int32_t)L_14) >= ((int32_t)L_15)))
		{
			goto IL_0060;
		}
	}
	{
		Predicate_1_t1659F6182C62A18F9877F492426DD2DEC6A68A9B* L_16 = ___0_match;
		IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_17 = __this->____items;
		int32_t L_18 = V_1;
		int32_t L_19 = L_18;
		intptr_t L_20 = (L_17)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_19));
		bool L_21;
		L_21 = Predicate_1_Invoke_mCEB9F2ADE76B8447BE54DEAE7EC0E295F91FECDF_inline(L_16, L_20, NULL);
		if (L_21)
		{
			goto IL_003f;
		}
	}

IL_0060:
	{
		int32_t L_22 = V_1;
		int32_t L_23 = __this->____size;
		if ((((int32_t)L_22) >= ((int32_t)L_23)))
		{
			goto IL_0089;
		}
	}
	{
		IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_24 = __this->____items;
		int32_t L_25 = V_0;
		int32_t L_26 = L_25;
		V_0 = ((int32_t)il2cpp_codegen_add(L_26, 1));
		IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_27 = __this->____items;
		int32_t L_28 = V_1;
		int32_t L_29 = L_28;
		V_1 = ((int32_t)il2cpp_codegen_add(L_29, 1));
		int32_t L_30 = L_29;
		intptr_t L_31 = (L_27)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_30));
		(L_24)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_26), (intptr_t)L_31);
	}

IL_0089:
	{
		int32_t L_32 = V_1;
		int32_t L_33 = __this->____size;
		if ((((int32_t)L_32) < ((int32_t)L_33)))
		{
			goto IL_0043;
		}
	}
	{
		goto IL_00ad;
	}

IL_00ad:
	{
		int32_t L_34 = __this->____size;
		int32_t L_35 = V_0;
		int32_t L_36 = V_0;
		__this->____size = L_36;
		int32_t L_37 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_37, 1));
		return ((int32_t)il2cpp_codegen_subtract(L_34, L_35));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_m4BDEB4B3ACBE5931B5698BD94322CA487B8F9589 (List_1_t6D4D3AAF46D9E2944E578579CE720FABFD990C26* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRange_IndexException_mC7661B8C6DD827679C95FC6B6C08F8724174936D(NULL);
	}

IL_000e:
	{
		int32_t L_2 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_2, 1));
		int32_t L_3 = ___0_index;
		int32_t L_4 = __this->____size;
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_0042;
		}
	}
	{
		IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_5 = __this->____items;
		int32_t L_6 = ___0_index;
		IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_7 = __this->____items;
		int32_t L_8 = ___0_index;
		int32_t L_9 = __this->____size;
		int32_t L_10 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, ((int32_t)il2cpp_codegen_add(L_6, 1)), (RuntimeArray*)L_7, L_8, ((int32_t)il2cpp_codegen_subtract(L_9, L_10)), NULL);
	}

IL_0042:
	{
		goto IL_0063;
	}

IL_0063:
	{
		int32_t L_11 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_11, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveRange_mFEEAC356EB2AAA867CBF18D7802ABFFD800B98FD (List_1_t6D4D3AAF46D9E2944E578579CE720FABFD990C26* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_count;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F(((int32_t)16), 4, NULL);
	}

IL_0015:
	{
		int32_t L_2 = __this->____size;
		int32_t L_3 = ___0_index;
		int32_t L_4 = ___1_count;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_2, L_3))) >= ((int32_t)L_4)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(((int32_t)23), NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_count;
		if ((((int32_t)L_5) <= ((int32_t)0)))
		{
			goto IL_008d;
		}
	}
	{
		int32_t L_6 = __this->____size;
		int32_t L_7 = __this->____size;
		int32_t L_8 = ___1_count;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_7, L_8));
		int32_t L_9 = ___0_index;
		int32_t L_10 = __this->____size;
		if ((((int32_t)L_9) >= ((int32_t)L_10)))
		{
			goto IL_0066;
		}
	}
	{
		IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_11 = __this->____items;
		int32_t L_12 = ___0_index;
		int32_t L_13 = ___1_count;
		IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_14 = __this->____items;
		int32_t L_15 = ___0_index;
		int32_t L_16 = __this->____size;
		int32_t L_17 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_11, ((int32_t)il2cpp_codegen_add(L_12, L_13)), (RuntimeArray*)L_14, L_15, ((int32_t)il2cpp_codegen_subtract(L_16, L_17)), NULL);
	}

IL_0066:
	{
		int32_t L_18 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_18, 1));
		goto IL_008d;
	}

IL_008d:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Reverse_m6B128F0D85CC105A8774DA909A150D69A2A1D3D7 (List_1_t6D4D3AAF46D9E2944E578579CE720FABFD990C26* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = List_1_get_Count_m3C633C1D40D1D824C9EDF031FA1FF2AB5CD586E2_inline(__this, NULL);
		List_1_Reverse_m7DA0B9AF4D9AAF520AE1D8EA5D66C70952E0EC9D(__this, 0, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 35));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Reverse_m7DA0B9AF4D9AAF520AE1D8EA5D66C70952E0EC9D (List_1_t6D4D3AAF46D9E2944E578579CE720FABFD990C26* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_count;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F(((int32_t)16), 4, NULL);
	}

IL_0015:
	{
		int32_t L_2 = __this->____size;
		int32_t L_3 = ___0_index;
		int32_t L_4 = ___1_count;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_2, L_3))) >= ((int32_t)L_4)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(((int32_t)23), NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_count;
		if ((((int32_t)L_5) <= ((int32_t)1)))
		{
			goto IL_0038;
		}
	}
	{
		IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_6 = __this->____items;
		int32_t L_7 = ___0_index;
		int32_t L_8 = ___1_count;
		Array_Reverse_TisIntPtr_t_m4644EEA142E76AA0835453F90B837AF3CBA906B8(L_6, L_7, L_8, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 36));
	}

IL_0038:
	{
		int32_t L_9 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_9, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_m2F8A461FB577CAF0332C1A46F14FF8E4B1A21CDE (List_1_t6D4D3AAF46D9E2944E578579CE720FABFD990C26* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = List_1_get_Count_m3C633C1D40D1D824C9EDF031FA1FF2AB5CD586E2_inline(__this, NULL);
		RuntimeObject* L_1 = ___0_comparer;
		List_1_Sort_m470B15C85362979FA4421C94F84AC41AC247983C(__this, 0, L_0, L_1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 37));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_m470B15C85362979FA4421C94F84AC41AC247983C (List_1_t6D4D3AAF46D9E2944E578579CE720FABFD990C26* __this, int32_t ___0_index, int32_t ___1_count, RuntimeObject* ___2_comparer, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_count;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F(((int32_t)16), 4, NULL);
	}

IL_0015:
	{
		int32_t L_2 = __this->____size;
		int32_t L_3 = ___0_index;
		int32_t L_4 = ___1_count;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_2, L_3))) >= ((int32_t)L_4)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(((int32_t)23), NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_count;
		if ((((int32_t)L_5) <= ((int32_t)1)))
		{
			goto IL_0039;
		}
	}
	{
		IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_6 = __this->____items;
		int32_t L_7 = ___0_index;
		int32_t L_8 = ___1_count;
		RuntimeObject* L_9 = ___2_comparer;
		Array_Sort_TisIntPtr_t_mB78635DE9DC1121D3F7ED84572DFE599F40BE7E7(L_6, L_7, L_8, L_9, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 38));
	}

IL_0039:
	{
		int32_t L_10 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_10, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_m8CDEA20F140BE569E4B9880DB48C603EC1694788 (List_1_t6D4D3AAF46D9E2944E578579CE720FABFD990C26* __this, Comparison_1_tD773004B8607A867202EE8F35BD74AE6496D742A* ___0_comparison, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(ArraySortHelper_1_t0B69B36E8E1F97490E6BE32C23AE1784AB1ADA3A_StaticInit);
	{
		Comparison_1_tD773004B8607A867202EE8F35BD74AE6496D742A* L_0 = ___0_comparison;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(((int32_t)34), NULL);
	}

IL_000a:
	{
		int32_t L_1 = __this->____size;
		if ((((int32_t)L_1) <= ((int32_t)1)))
		{
			goto IL_0026;
		}
	}
	{
		IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_2 = __this->____items;
		int32_t L_3 = __this->____size;
		Comparison_1_tD773004B8607A867202EE8F35BD74AE6496D742A* L_4 = ___0_comparison;
		CHECKED_LOCAL_INIT(ArraySortHelper_1_t0B69B36E8E1F97490E6BE32C23AE1784AB1ADA3A_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 40)),il2cpp_codegen_runtime_class_init_inline);
		ArraySortHelper_1_Sort_m550DF7E1E4B5AAD082993DB3F3683640A653FCB5(L_2, 0, L_3, L_4, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 39));
	}

IL_0026:
	{
		int32_t L_5 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_5, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* List_1_ToArray_m7227FA48B0C214A53767565B8A49AFC6ECEEFABB (List_1_t6D4D3AAF46D9E2944E578579CE720FABFD990C26* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit);
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* V_0 = NULL;
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		CHECKED_LOCAL_INIT(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)),il2cpp_codegen_runtime_class_init_inline);
		IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_1 = ((List_1_t6D4D3AAF46D9E2944E578579CE720FABFD990C26_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)))->___s_emptyArray;
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____size;
		IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_3 = (IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832*)(IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1), (uint32_t)L_2);
		V_0 = L_3;
		IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_4 = __this->____items;
		IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_5 = V_0;
		int32_t L_6 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_4, 0, (RuntimeArray*)L_5, 0, L_6, NULL);
		IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_7 = V_0;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddEnumerable_mF75A670B3D0D8AF2E9266550725885BA19A3CB70 (List_1_t6D4D3AAF46D9E2944E578579CE720FABFD990C26* __this, RuntimeObject* ___0_enumerable, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		RuntimeObject* L_1 = ___0_enumerable;
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 28), L_1);
		V_0 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0063:
			{
				{
					RuntimeObject* L_3 = V_0;
					if (!L_3)
					{
						goto IL_006c;
					}
				}
				{
					RuntimeObject* L_4 = V_0;
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_4);
				}

IL_006c:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_0059_1;
			}

IL_0017_1:
			{
				RuntimeObject* L_5 = V_0;
				intptr_t L_6;
				L_6 = InterfaceFuncInvoker0< intptr_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 30), L_5);
				V_1 = L_6;
				int32_t L_7 = __this->____size;
				IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_8 = __this->____items;
				int32_t L_9 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_8)->max_length),NULL));
				if ((!(((uint32_t)L_7) == ((uint32_t)L_9))))
				{
					goto IL_003c_1;
				}
			}
			{
				int32_t L_10 = __this->____size;
				List_1_EnsureCapacity_mD58612136E5F31EA08BDB8C4D659526F6801AC8B(__this, ((int32_t)il2cpp_codegen_add(L_10, 1)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 12));
			}

IL_003c_1:
			{
				IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_11 = __this->____items;
				int32_t L_12 = __this->____size;
				V_2 = L_12;
				int32_t L_13 = V_2;
				__this->____size = ((int32_t)il2cpp_codegen_add(L_13, 1));
				int32_t L_14 = V_2;
				intptr_t L_15 = V_1;
				(L_11)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_14), (intptr_t)L_15);
			}

IL_0059_1:
			{
				RuntimeObject* L_16 = V_0;
				bool L_17;
				L_17 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_16);
				if (L_17)
				{
					goto IL_0017_1;
				}
			}
			{
				goto IL_006d;
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

IL_006d:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__cctor_mB0EED9CD8F1CF94AC1BAAAD9E038CBD7D6C3B39B (const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	{
		IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_0 = (IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832*)(IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832*)SZArrayNew(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1), (uint32_t)0);
		((List_1_t6D4D3AAF46D9E2944E578579CE720FABFD990C26_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___s_emptyArray = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((List_1_t6D4D3AAF46D9E2944E578579CE720FABFD990C26_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___s_emptyArray), (void*)L_0);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m1E40A92A6C8F8E656E5129B00C69C7D9902C11ED (List_1_t420B17163897A4DF994BA698744548CD81961E70* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit);
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		CHECKED_LOCAL_INIT(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)),il2cpp_codegen_runtime_class_init_inline);
		LigatureSubstitutionRecordU5BU5D_t04186B1B45C8D4F2AAB2299EE24668D39B4E9B50* L_0 = ((List_1_t420B17163897A4DF994BA698744548CD81961E70_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)))->___s_emptyArray;
		__this->____items = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mF8F415F31533D1BEAE4D59A680D75A577B7EE5C3 (List_1_t420B17163897A4DF994BA698744548CD81961E70* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit);
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0012;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F(((int32_t)12), 4, NULL);
	}

IL_0012:
	{
		int32_t L_1 = ___0_capacity;
		if (L_1)
		{
			goto IL_0021;
		}
	}
	{
		CHECKED_LOCAL_INIT(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)),il2cpp_codegen_runtime_class_init_inline);
		LigatureSubstitutionRecordU5BU5D_t04186B1B45C8D4F2AAB2299EE24668D39B4E9B50* L_2 = ((List_1_t420B17163897A4DF994BA698744548CD81961E70_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)))->___s_emptyArray;
		__this->____items = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_2);
		return;
	}

IL_0021:
	{
		int32_t L_3 = ___0_capacity;
		LigatureSubstitutionRecordU5BU5D_t04186B1B45C8D4F2AAB2299EE24668D39B4E9B50* L_4 = (LigatureSubstitutionRecordU5BU5D_t04186B1B45C8D4F2AAB2299EE24668D39B4E9B50*)(LigatureSubstitutionRecordU5BU5D_t04186B1B45C8D4F2AAB2299EE24668D39B4E9B50*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1), (uint32_t)L_3);
		__this->____items = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_4);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mB3BDF273C9F43104F5140D7AD8FB3D15FEAFECFF (List_1_t420B17163897A4DF994BA698744548CD81961E70* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit);
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_collection;
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(6, NULL);
	}

IL_000f:
	{
		RuntimeObject* L_1 = ___0_collection;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_1, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2)));
		RuntimeObject* L_2 = V_0;
		if (!L_2)
		{
			goto IL_0050;
		}
	}
	{
		RuntimeObject* L_3 = V_0;
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_3);
		V_1 = L_4;
		int32_t L_5 = V_1;
		if (L_5)
		{
			goto IL_002f;
		}
	}
	{
		CHECKED_LOCAL_INIT(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)),il2cpp_codegen_runtime_class_init_inline);
		LigatureSubstitutionRecordU5BU5D_t04186B1B45C8D4F2AAB2299EE24668D39B4E9B50* L_6 = ((List_1_t420B17163897A4DF994BA698744548CD81961E70_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)))->___s_emptyArray;
		__this->____items = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_6);
		return;
	}

IL_002f:
	{
		int32_t L_7 = V_1;
		LigatureSubstitutionRecordU5BU5D_t04186B1B45C8D4F2AAB2299EE24668D39B4E9B50* L_8 = (LigatureSubstitutionRecordU5BU5D_t04186B1B45C8D4F2AAB2299EE24668D39B4E9B50*)(LigatureSubstitutionRecordU5BU5D_t04186B1B45C8D4F2AAB2299EE24668D39B4E9B50*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1), (uint32_t)L_7);
		__this->____items = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_8);
		RuntimeObject* L_9 = V_0;
		LigatureSubstitutionRecordU5BU5D_t04186B1B45C8D4F2AAB2299EE24668D39B4E9B50* L_10 = __this->____items;
		InterfaceActionInvoker2< LigatureSubstitutionRecordU5BU5D_t04186B1B45C8D4F2AAB2299EE24668D39B4E9B50*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_9, L_10, 0);
		int32_t L_11 = V_1;
		__this->____size = L_11;
		return;
	}

IL_0050:
	{
		__this->____size = 0;
		CHECKED_LOCAL_INIT(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)),il2cpp_codegen_runtime_class_init_inline);
		LigatureSubstitutionRecordU5BU5D_t04186B1B45C8D4F2AAB2299EE24668D39B4E9B50* L_12 = ((List_1_t420B17163897A4DF994BA698744548CD81961E70_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)))->___s_emptyArray;
		__this->____items = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_12);
		RuntimeObject* L_13 = ___0_collection;
		List_1_AddEnumerable_mB42271BB905D9B0DFAA613FBA60CCAD013BA0A44(__this, L_13, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 5));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Capacity_mA9D07EF6CEE696E77162917AA2510F7F86D00AFB (List_1_t420B17163897A4DF994BA698744548CD81961E70* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit);
	LigatureSubstitutionRecordU5BU5D_t04186B1B45C8D4F2AAB2299EE24668D39B4E9B50* V_0 = NULL;
	{
		int32_t L_0 = ___0_value;
		int32_t L_1 = __this->____size;
		if ((((int32_t)L_0) >= ((int32_t)L_1)))
		{
			goto IL_0012;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F(((int32_t)15), ((int32_t)21), NULL);
	}

IL_0012:
	{
		int32_t L_2 = ___0_value;
		LigatureSubstitutionRecordU5BU5D_t04186B1B45C8D4F2AAB2299EE24668D39B4E9B50* L_3 = __this->____items;
		int32_t L_4 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_3)->max_length),NULL));
		if ((((int32_t)L_2) == ((int32_t)L_4)))
		{
			goto IL_0058;
		}
	}
	{
		int32_t L_5 = ___0_value;
		if ((((int32_t)L_5) <= ((int32_t)0)))
		{
			goto IL_004d;
		}
	}
	{
		int32_t L_6 = ___0_value;
		LigatureSubstitutionRecordU5BU5D_t04186B1B45C8D4F2AAB2299EE24668D39B4E9B50* L_7 = (LigatureSubstitutionRecordU5BU5D_t04186B1B45C8D4F2AAB2299EE24668D39B4E9B50*)(LigatureSubstitutionRecordU5BU5D_t04186B1B45C8D4F2AAB2299EE24668D39B4E9B50*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1), (uint32_t)L_6);
		V_0 = L_7;
		int32_t L_8 = __this->____size;
		if ((((int32_t)L_8) <= ((int32_t)0)))
		{
			goto IL_0045;
		}
	}
	{
		LigatureSubstitutionRecordU5BU5D_t04186B1B45C8D4F2AAB2299EE24668D39B4E9B50* L_9 = __this->____items;
		LigatureSubstitutionRecordU5BU5D_t04186B1B45C8D4F2AAB2299EE24668D39B4E9B50* L_10 = V_0;
		int32_t L_11 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_9, 0, (RuntimeArray*)L_10, 0, L_11, NULL);
	}

IL_0045:
	{
		LigatureSubstitutionRecordU5BU5D_t04186B1B45C8D4F2AAB2299EE24668D39B4E9B50* L_12 = V_0;
		__this->____items = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_12);
		return;
	}

IL_004d:
	{
		CHECKED_LOCAL_INIT(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)),il2cpp_codegen_runtime_class_init_inline);
		LigatureSubstitutionRecordU5BU5D_t04186B1B45C8D4F2AAB2299EE24668D39B4E9B50* L_13 = ((List_1_t420B17163897A4DF994BA698744548CD81961E70_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)))->___s_emptyArray;
		__this->____items = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_13);
	}

IL_0058:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LigatureSubstitutionRecord_t8660DC6B1D65C655D698216F72BFB3C85DDCAB94 List_1_get_Item_mB8AD74ED5BF7AC044165CC1DB56DE13AA35E3080 (List_1_t420B17163897A4DF994BA698744548CD81961E70* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRange_IndexException_mC7661B8C6DD827679C95FC6B6C08F8724174936D(NULL);
	}

IL_000e:
	{
		LigatureSubstitutionRecordU5BU5D_t04186B1B45C8D4F2AAB2299EE24668D39B4E9B50* L_2 = __this->____items;
		int32_t L_3 = ___0_index;
		int32_t L_4 = L_3;
		LigatureSubstitutionRecord_t8660DC6B1D65C655D698216F72BFB3C85DDCAB94 L_5 = (L_2)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_m08B55D220D442584613E60854499F9B6795E3B7C (List_1_t420B17163897A4DF994BA698744548CD81961E70* __this, int32_t ___0_index, LigatureSubstitutionRecord_t8660DC6B1D65C655D698216F72BFB3C85DDCAB94 ___1_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRange_IndexException_mC7661B8C6DD827679C95FC6B6C08F8724174936D(NULL);
	}

IL_000e:
	{
		LigatureSubstitutionRecordU5BU5D_t04186B1B45C8D4F2AAB2299EE24668D39B4E9B50* L_2 = __this->____items;
		int32_t L_3 = ___0_index;
		LigatureSubstitutionRecord_t8660DC6B1D65C655D698216F72BFB3C85DDCAB94 L_4 = ___1_value;
		(L_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3), (LigatureSubstitutionRecord_t8660DC6B1D65C655D698216F72BFB3C85DDCAB94)L_4);
		int32_t L_5 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_5, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_IsCompatibleObject_mCFD2792F06553078069614B2377FA211C28D8829 (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	LigatureSubstitutionRecord_t8660DC6B1D65C655D698216F72BFB3C85DDCAB94 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6))))
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(LigatureSubstitutionRecord_t8660DC6B1D65C655D698216F72BFB3C85DDCAB94));
		LigatureSubstitutionRecord_t8660DC6B1D65C655D698216F72BFB3C85DDCAB94 L_2 = V_0;
		return false;
	}

IL_001d:
	{
		return (bool)0;
	}

IL_001f:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_System_Collections_IList_get_Item_m01FA46D1BB5C82C5DF3E5F27FFCE5CA6778D4755 (List_1_t420B17163897A4DF994BA698744548CD81961E70* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		LigatureSubstitutionRecord_t8660DC6B1D65C655D698216F72BFB3C85DDCAB94 L_1;
		L_1 = List_1_get_Item_mB8AD74ED5BF7AC044165CC1DB56DE13AA35E3080(__this, L_0, NULL);
		LigatureSubstitutionRecord_t8660DC6B1D65C655D698216F72BFB3C85DDCAB94 L_2 = L_1;
		RuntimeObject* L_3 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6), &L_2);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_System_Collections_IList_set_Item_m5544A3E84DC2B9CF326CA467688DBDEDED886D99 (List_1_t420B17163897A4DF994BA698744548CD81961E70* __this, int32_t ___0_index, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(Type_t_StaticInit);
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = ___1_value;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisLigatureSubstitutionRecord_t8660DC6B1D65C655D698216F72BFB3C85DDCAB94_m83FD76C9CE6153FA8BAC1399EE4B32CC4BE56891(L_0, ((int32_t)15), NULL);
	}
	try
	{
		int32_t L_1 = ___0_index;
		RuntimeObject* L_2 = ___1_value;
		List_1_set_Item_m08B55D220D442584613E60854499F9B6795E3B7C(__this, L_1, ((*(LigatureSubstitutionRecord_t8660DC6B1D65C655D698216F72BFB3C85DDCAB94*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6)))), NULL);
		goto IL_002a;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0017;
		}
		throw e;
	}

CATCH_0017:
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_3 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_4 = ___1_value;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 10)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
		ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_4, L_6, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_002a;
	}

IL_002a:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_m32E57A790444FACBD9BC16F86A57C8363980CCDA (List_1_t420B17163897A4DF994BA698744548CD81961E70* __this, LigatureSubstitutionRecord_t8660DC6B1D65C655D698216F72BFB3C85DDCAB94 ___0_item, const RuntimeMethod* method) 
{
	LigatureSubstitutionRecordU5BU5D_t04186B1B45C8D4F2AAB2299EE24668D39B4E9B50* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		LigatureSubstitutionRecordU5BU5D_t04186B1B45C8D4F2AAB2299EE24668D39B4E9B50* L_1 = __this->____items;
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		V_1 = L_2;
		int32_t L_3 = V_1;
		LigatureSubstitutionRecordU5BU5D_t04186B1B45C8D4F2AAB2299EE24668D39B4E9B50* L_4 = V_0;
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		if ((!(((uint32_t)L_3) < ((uint32_t)L_5))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_6 = V_1;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_6, 1));
		LigatureSubstitutionRecordU5BU5D_t04186B1B45C8D4F2AAB2299EE24668D39B4E9B50* L_7 = V_0;
		int32_t L_8 = V_1;
		LigatureSubstitutionRecord_t8660DC6B1D65C655D698216F72BFB3C85DDCAB94 L_9 = ___0_item;
		(L_7)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_8), (LigatureSubstitutionRecord_t8660DC6B1D65C655D698216F72BFB3C85DDCAB94)L_9);
		return;
	}

IL_0034:
	{
		LigatureSubstitutionRecord_t8660DC6B1D65C655D698216F72BFB3C85DDCAB94 L_10 = ___0_item;
		List_1_AddWithResize_m5D34622BB8796C326247AB8DED3588710917CDBE(__this, L_10, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 11));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_m5D34622BB8796C326247AB8DED3588710917CDBE (List_1_t420B17163897A4DF994BA698744548CD81961E70* __this, LigatureSubstitutionRecord_t8660DC6B1D65C655D698216F72BFB3C85DDCAB94 ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____size;
		V_0 = L_0;
		int32_t L_1 = V_0;
		List_1_EnsureCapacity_m9DB2A28A18CDEF06F164BDAE9CDBBA72AA377645(__this, ((int32_t)il2cpp_codegen_add(L_1, 1)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 12));
		int32_t L_2 = V_0;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_2, 1));
		LigatureSubstitutionRecordU5BU5D_t04186B1B45C8D4F2AAB2299EE24668D39B4E9B50* L_3 = __this->____items;
		int32_t L_4 = V_0;
		LigatureSubstitutionRecord_t8660DC6B1D65C655D698216F72BFB3C85DDCAB94 L_5 = ___0_item;
		(L_3)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4), (LigatureSubstitutionRecord_t8660DC6B1D65C655D698216F72BFB3C85DDCAB94)L_5);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_System_Collections_IList_Add_mC4E19FCBDA77F08B800B4A6C65C44204DED8A324 (List_1_t420B17163897A4DF994BA698744548CD81961E70* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(Type_t_StaticInit);
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = ___0_item;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisLigatureSubstitutionRecord_t8660DC6B1D65C655D698216F72BFB3C85DDCAB94_m83FD76C9CE6153FA8BAC1399EE4B32CC4BE56891(L_0, ((int32_t)20), NULL);
	}
	try
	{
		RuntimeObject* L_1 = ___0_item;
		List_1_Add_m32E57A790444FACBD9BC16F86A57C8363980CCDA_inline(__this, ((*(LigatureSubstitutionRecord_t8660DC6B1D65C655D698216F72BFB3C85DDCAB94*)UnBox(L_1, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		goto IL_0029;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0016;
		}
		throw e;
	}

CATCH_0016:
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_2 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_3 = ___0_item;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_4 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 10)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_5;
		L_5 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_4, NULL);
		ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_3, L_5, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0029;
	}

IL_0029:
	{
		int32_t L_6;
		L_6 = List_1_get_Count_m57B62D5396EAD21285DF79006D76BC93E9B9A09A_inline(__this, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_6, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddRange_mC1D90285F5D6D07396E1C1D2D10544EADFD1E3E2 (List_1_t420B17163897A4DF994BA698744548CD81961E70* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		RuntimeObject* L_1 = ___0_collection;
		List_1_InsertRange_m08D6F59E2F7AF654F456DB02BFCE0F4630CD6B39(__this, L_0, L_1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 15));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_m080DCB6E267F68A483FC7602DF3C4400DA20F60F (List_1_t420B17163897A4DF994BA698744548CD81961E70* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
	}
	{
		int32_t L_1 = __this->____size;
		V_0 = L_1;
		__this->____size = 0;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		LigatureSubstitutionRecordU5BU5D_t04186B1B45C8D4F2AAB2299EE24668D39B4E9B50* L_3 = __this->____items;
		int32_t L_4 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_3, 0, L_4, NULL);
		return;
	}

IL_003c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_m6AEE9B228620C4E5A1ACCC1879664E7190E68468 (List_1_t420B17163897A4DF994BA698744548CD81961E70* __this, LigatureSubstitutionRecord_t8660DC6B1D65C655D698216F72BFB3C85DDCAB94 ___0_item, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		LigatureSubstitutionRecord_t8660DC6B1D65C655D698216F72BFB3C85DDCAB94 L_1 = ___0_item;
		int32_t L_2;
		L_2 = List_1_IndexOf_mB1F3CF7F9F30093831AB619015A91170B32C33B7(__this, L_1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 17));
		return (bool)((((int32_t)((((int32_t)L_2) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0016:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_System_Collections_IList_Contains_m5F736D0C6EBC4692EAEC503B21DCD4D28AF6B5A0 (List_1_t420B17163897A4DF994BA698744548CD81961E70* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit);
	{
		RuntimeObject* L_0 = ___0_item;
		CHECKED_LOCAL_INIT(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)),il2cpp_codegen_runtime_class_init_inline);
		bool L_1;
		L_1 = List_1_IsCompatibleObject_mCFD2792F06553078069614B2377FA211C28D8829(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 18));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_item;
		bool L_3;
		L_3 = List_1_Contains_m6AEE9B228620C4E5A1ACCC1879664E7190E68468(__this, ((*(LigatureSubstitutionRecord_t8660DC6B1D65C655D698216F72BFB3C85DDCAB94*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 19));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_CopyTo_mB80EDE571C89E190A1374B8D75873C3BFA9929F6 (List_1_t420B17163897A4DF994BA698744548CD81961E70* __this, LigatureSubstitutionRecordU5BU5D_t04186B1B45C8D4F2AAB2299EE24668D39B4E9B50* ___0_array, const RuntimeMethod* method) 
{
	{
		LigatureSubstitutionRecordU5BU5D_t04186B1B45C8D4F2AAB2299EE24668D39B4E9B50* L_0 = ___0_array;
		List_1_CopyTo_m4399B10FDA489280A34B28867B8F5EF44CFE1D04(__this, L_0, 0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_EnsureCapacity_m9DB2A28A18CDEF06F164BDAE9CDBBA72AA377645 (List_1_t420B17163897A4DF994BA698744548CD81961E70* __this, int32_t ___0_min, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t G_B4_0 = 0;
	{
		LigatureSubstitutionRecordU5BU5D_t04186B1B45C8D4F2AAB2299EE24668D39B4E9B50* L_0 = __this->____items;
		int32_t L_1 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_0)->max_length),NULL));
		int32_t L_2 = ___0_min;
		if ((((int32_t)L_1) >= ((int32_t)L_2)))
		{
			goto IL_003d;
		}
	}
	{
		LigatureSubstitutionRecordU5BU5D_t04186B1B45C8D4F2AAB2299EE24668D39B4E9B50* L_3 = __this->____items;
		if (!(((RuntimeArray*)L_3)->max_length))
		{
			goto IL_0020;
		}
	}
	{
		LigatureSubstitutionRecordU5BU5D_t04186B1B45C8D4F2AAB2299EE24668D39B4E9B50* L_4 = __this->____items;
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		G_B4_0 = ((int32_t)il2cpp_codegen_multiply(L_5, 2));
		goto IL_0021;
	}

IL_0020:
	{
		G_B4_0 = 4;
	}

IL_0021:
	{
		V_0 = G_B4_0;
		int32_t L_6 = V_0;
		if ((!(((uint32_t)L_6) > ((uint32_t)((int32_t)2146435071)))))
		{
			goto IL_0030;
		}
	}
	{
		V_0 = ((int32_t)2146435071);
	}

IL_0030:
	{
		int32_t L_7 = V_0;
		int32_t L_8 = ___0_min;
		if ((((int32_t)L_7) >= ((int32_t)L_8)))
		{
			goto IL_0036;
		}
	}
	{
		int32_t L_9 = ___0_min;
		V_0 = L_9;
	}

IL_0036:
	{
		int32_t L_10 = V_0;
		List_1_set_Capacity_mA9D07EF6CEE696E77162917AA2510F7F86D00AFB(__this, L_10, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 21));
	}

IL_003d:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_ForEach_m2959BCBCA405220887C5570DF16CC9C81E27D4C1 (List_1_t420B17163897A4DF994BA698744548CD81961E70* __this, Action_1_t3C69DE7F9955C35DC22C9DEA53238F2CF0D23802* ___0_action, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Action_1_t3C69DE7F9955C35DC22C9DEA53238F2CF0D23802* L_0 = ___0_action;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(((int32_t)33), NULL);
	}

IL_000a:
	{
		int32_t L_1 = __this->____version;
		V_0 = L_1;
		V_1 = 0;
		goto IL_0034;
	}

IL_0015:
	{
		int32_t L_2 = V_0;
		int32_t L_3 = __this->____version;
		if ((!(((uint32_t)L_2) == ((uint32_t)L_3))))
		{
			goto IL_003d;
		}
	}
	{
		Action_1_t3C69DE7F9955C35DC22C9DEA53238F2CF0D23802* L_4 = ___0_action;
		LigatureSubstitutionRecordU5BU5D_t04186B1B45C8D4F2AAB2299EE24668D39B4E9B50* L_5 = __this->____items;
		int32_t L_6 = V_1;
		int32_t L_7 = L_6;
		LigatureSubstitutionRecord_t8660DC6B1D65C655D698216F72BFB3C85DDCAB94 L_8 = (L_5)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7));
		Action_1_Invoke_mE2D564FE48C72E75796517B8E687F8C4194E58A4_inline(L_4, L_8, NULL);
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0034:
	{
		int32_t L_10 = V_1;
		int32_t L_11 = __this->____size;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_0015;
		}
	}

IL_003d:
	{
		int32_t L_12 = V_0;
		int32_t L_13 = __this->____version;
		if ((((int32_t)L_12) == ((int32_t)L_13)))
		{
			goto IL_004b;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_InvalidOperation_EnumFailedVersion_m5331E2E0EC0E36843D53F439C2529530595ACE9F(NULL);
	}

IL_004b:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tF178DB8F022DE0B9858009BADBED741E672A04E2 List_1_GetEnumerator_m7D35A9F4F9BF9356ADEA794203B5FC4D266B49F3 (List_1_t420B17163897A4DF994BA698744548CD81961E70* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tF178DB8F022DE0B9858009BADBED741E672A04E2 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mE23D271442656549091441A140194B21E7E758EB((&L_0), __this, NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_mCA71607E6ABA176A7DD7F1C3288F57B5DDE79C79 (List_1_t420B17163897A4DF994BA698744548CD81961E70* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tF178DB8F022DE0B9858009BADBED741E672A04E2 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mE23D271442656549091441A140194B21E7E758EB((&L_0), __this, NULL);
		Enumerator_tF178DB8F022DE0B9858009BADBED741E672A04E2 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 23), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_System_Collections_IEnumerable_GetEnumerator_m7D23D4A8241C4F73030A8E2F1EB328EE7ADB6877 (List_1_t420B17163897A4DF994BA698744548CD81961E70* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tF178DB8F022DE0B9858009BADBED741E672A04E2 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mE23D271442656549091441A140194B21E7E758EB((&L_0), __this, NULL);
		Enumerator_tF178DB8F022DE0B9858009BADBED741E672A04E2 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 23), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t420B17163897A4DF994BA698744548CD81961E70* List_1_GetRange_mC7EDDBF4C765B817F54E9F6E6A5AFA1646B319C9 (List_1_t420B17163897A4DF994BA698744548CD81961E70* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method) 
{
	List_1_t420B17163897A4DF994BA698744548CD81961E70* V_0 = NULL;
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_count;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F(((int32_t)16), 4, NULL);
	}

IL_0015:
	{
		int32_t L_2 = __this->____size;
		int32_t L_3 = ___0_index;
		int32_t L_4 = ___1_count;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_2, L_3))) >= ((int32_t)L_4)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(((int32_t)23), NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_count;
		List_1_t420B17163897A4DF994BA698744548CD81961E70* L_6 = (List_1_t420B17163897A4DF994BA698744548CD81961E70*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0));
		List_1__ctor_mF8F415F31533D1BEAE4D59A680D75A577B7EE5C3(L_6, L_5, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 25));
		V_0 = L_6;
		LigatureSubstitutionRecordU5BU5D_t04186B1B45C8D4F2AAB2299EE24668D39B4E9B50* L_7 = __this->____items;
		int32_t L_8 = ___0_index;
		List_1_t420B17163897A4DF994BA698744548CD81961E70* L_9 = V_0;
		LigatureSubstitutionRecordU5BU5D_t04186B1B45C8D4F2AAB2299EE24668D39B4E9B50* L_10 = L_9->____items;
		int32_t L_11 = ___1_count;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_7, L_8, (RuntimeArray*)L_10, 0, L_11, NULL);
		List_1_t420B17163897A4DF994BA698744548CD81961E70* L_12 = V_0;
		int32_t L_13 = ___1_count;
		L_12->____size = L_13;
		List_1_t420B17163897A4DF994BA698744548CD81961E70* L_14 = V_0;
		return L_14;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_IndexOf_mB1F3CF7F9F30093831AB619015A91170B32C33B7 (List_1_t420B17163897A4DF994BA698744548CD81961E70* __this, LigatureSubstitutionRecord_t8660DC6B1D65C655D698216F72BFB3C85DDCAB94 ___0_item, const RuntimeMethod* method) 
{
	{
		LigatureSubstitutionRecordU5BU5D_t04186B1B45C8D4F2AAB2299EE24668D39B4E9B50* L_0 = __this->____items;
		LigatureSubstitutionRecord_t8660DC6B1D65C655D698216F72BFB3C85DDCAB94 L_1 = ___0_item;
		int32_t L_2 = __this->____size;
		int32_t L_3;
		L_3 = Array_IndexOf_TisLigatureSubstitutionRecord_t8660DC6B1D65C655D698216F72BFB3C85DDCAB94_m94FC7F2E670E87F38F1811C819D7D7E9F0A31025(L_0, L_1, 0, L_2, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 26));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_System_Collections_IList_IndexOf_m1082008905AD6A57B8BE32DA1ACEE2921BD5BCCE (List_1_t420B17163897A4DF994BA698744548CD81961E70* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit);
	{
		RuntimeObject* L_0 = ___0_item;
		CHECKED_LOCAL_INIT(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)),il2cpp_codegen_runtime_class_init_inline);
		bool L_1;
		L_1 = List_1_IsCompatibleObject_mCFD2792F06553078069614B2377FA211C28D8829(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 18));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_item;
		int32_t L_3;
		L_3 = List_1_IndexOf_mB1F3CF7F9F30093831AB619015A91170B32C33B7(__this, ((*(LigatureSubstitutionRecord_t8660DC6B1D65C655D698216F72BFB3C85DDCAB94*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 17));
		return L_3;
	}

IL_0015:
	{
		return (-1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Insert_mCDFAA9FBB8075FF3F71A0CD8B3D38164F01E6E02 (List_1_t420B17163897A4DF994BA698744548CD81961E70* __this, int32_t ___0_index, LigatureSubstitutionRecord_t8660DC6B1D65C655D698216F72BFB3C85DDCAB94 ___1_item, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_0012;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F(((int32_t)13), ((int32_t)27), NULL);
	}

IL_0012:
	{
		int32_t L_2 = __this->____size;
		LigatureSubstitutionRecordU5BU5D_t04186B1B45C8D4F2AAB2299EE24668D39B4E9B50* L_3 = __this->____items;
		int32_t L_4 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_3)->max_length),NULL));
		if ((!(((uint32_t)L_2) == ((uint32_t)L_4))))
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_5 = __this->____size;
		List_1_EnsureCapacity_m9DB2A28A18CDEF06F164BDAE9CDBBA72AA377645(__this, ((int32_t)il2cpp_codegen_add(L_5, 1)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 12));
	}

IL_0030:
	{
		int32_t L_6 = ___0_index;
		int32_t L_7 = __this->____size;
		if ((((int32_t)L_6) >= ((int32_t)L_7)))
		{
			goto IL_0056;
		}
	}
	{
		LigatureSubstitutionRecordU5BU5D_t04186B1B45C8D4F2AAB2299EE24668D39B4E9B50* L_8 = __this->____items;
		int32_t L_9 = ___0_index;
		LigatureSubstitutionRecordU5BU5D_t04186B1B45C8D4F2AAB2299EE24668D39B4E9B50* L_10 = __this->____items;
		int32_t L_11 = ___0_index;
		int32_t L_12 = __this->____size;
		int32_t L_13 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_8, L_9, (RuntimeArray*)L_10, ((int32_t)il2cpp_codegen_add(L_11, 1)), ((int32_t)il2cpp_codegen_subtract(L_12, L_13)), NULL);
	}

IL_0056:
	{
		LigatureSubstitutionRecordU5BU5D_t04186B1B45C8D4F2AAB2299EE24668D39B4E9B50* L_14 = __this->____items;
		int32_t L_15 = ___0_index;
		LigatureSubstitutionRecord_t8660DC6B1D65C655D698216F72BFB3C85DDCAB94 L_16 = ___1_item;
		(L_14)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_15), (LigatureSubstitutionRecord_t8660DC6B1D65C655D698216F72BFB3C85DDCAB94)L_16);
		int32_t L_17 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_17, 1));
		int32_t L_18 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_18, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_System_Collections_IList_Insert_m362041311049B1292163944A72E5ACF35D4457ED (List_1_t420B17163897A4DF994BA698744548CD81961E70* __this, int32_t ___0_index, RuntimeObject* ___1_item, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(Type_t_StaticInit);
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = ___1_item;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisLigatureSubstitutionRecord_t8660DC6B1D65C655D698216F72BFB3C85DDCAB94_m83FD76C9CE6153FA8BAC1399EE4B32CC4BE56891(L_0, ((int32_t)20), NULL);
	}
	try
	{
		int32_t L_1 = ___0_index;
		RuntimeObject* L_2 = ___1_item;
		List_1_Insert_mCDFAA9FBB8075FF3F71A0CD8B3D38164F01E6E02(__this, L_1, ((*(LigatureSubstitutionRecord_t8660DC6B1D65C655D698216F72BFB3C85DDCAB94*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 27));
		goto IL_002a;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0017;
		}
		throw e;
	}

CATCH_0017:
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_3 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_4 = ___1_item;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 10)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
		ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_4, L_6, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_002a;
	}

IL_002a:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_InsertRange_m08D6F59E2F7AF654F456DB02BFCE0F4630CD6B39 (List_1_t420B17163897A4DF994BA698744548CD81961E70* __this, int32_t ___0_index, RuntimeObject* ___1_collection, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	RuntimeObject* V_2 = NULL;
	{
		RuntimeObject* L_0 = ___1_collection;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(6, NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___0_index;
		int32_t L_2 = __this->____size;
		if ((!(((uint32_t)L_1) > ((uint32_t)L_2))))
		{
			goto IL_0017;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRange_IndexException_mC7661B8C6DD827679C95FC6B6C08F8724174936D(NULL);
	}

IL_0017:
	{
		RuntimeObject* L_3 = ___1_collection;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_3, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2)));
		RuntimeObject* L_4 = V_0;
		if (!L_4)
		{
			goto IL_00bc;
		}
	}
	{
		RuntimeObject* L_5 = V_0;
		int32_t L_6;
		L_6 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_5);
		V_1 = L_6;
		int32_t L_7 = V_1;
		if ((((int32_t)L_7) <= ((int32_t)0)))
		{
			goto IL_00fb;
		}
	}
	{
		int32_t L_8 = __this->____size;
		int32_t L_9 = V_1;
		List_1_EnsureCapacity_m9DB2A28A18CDEF06F164BDAE9CDBBA72AA377645(__this, ((int32_t)il2cpp_codegen_add(L_8, L_9)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 12));
		int32_t L_10 = ___0_index;
		int32_t L_11 = __this->____size;
		if ((((int32_t)L_10) >= ((int32_t)L_11)))
		{
			goto IL_0066;
		}
	}
	{
		LigatureSubstitutionRecordU5BU5D_t04186B1B45C8D4F2AAB2299EE24668D39B4E9B50* L_12 = __this->____items;
		int32_t L_13 = ___0_index;
		LigatureSubstitutionRecordU5BU5D_t04186B1B45C8D4F2AAB2299EE24668D39B4E9B50* L_14 = __this->____items;
		int32_t L_15 = ___0_index;
		int32_t L_16 = V_1;
		int32_t L_17 = __this->____size;
		int32_t L_18 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_12, L_13, (RuntimeArray*)L_14, ((int32_t)il2cpp_codegen_add(L_15, L_16)), ((int32_t)il2cpp_codegen_subtract(L_17, L_18)), NULL);
	}

IL_0066:
	{
		RuntimeObject* L_19 = V_0;
		if ((!(((RuntimeObject*)(List_1_t420B17163897A4DF994BA698744548CD81961E70*)__this) == ((RuntimeObject*)(RuntimeObject*)L_19))))
		{
			goto IL_009f;
		}
	}
	{
		LigatureSubstitutionRecordU5BU5D_t04186B1B45C8D4F2AAB2299EE24668D39B4E9B50* L_20 = __this->____items;
		LigatureSubstitutionRecordU5BU5D_t04186B1B45C8D4F2AAB2299EE24668D39B4E9B50* L_21 = __this->____items;
		int32_t L_22 = ___0_index;
		int32_t L_23 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_20, 0, (RuntimeArray*)L_21, L_22, L_23, NULL);
		LigatureSubstitutionRecordU5BU5D_t04186B1B45C8D4F2AAB2299EE24668D39B4E9B50* L_24 = __this->____items;
		int32_t L_25 = ___0_index;
		int32_t L_26 = V_1;
		LigatureSubstitutionRecordU5BU5D_t04186B1B45C8D4F2AAB2299EE24668D39B4E9B50* L_27 = __this->____items;
		int32_t L_28 = ___0_index;
		int32_t L_29 = __this->____size;
		int32_t L_30 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_24, ((int32_t)il2cpp_codegen_add(L_25, L_26)), (RuntimeArray*)L_27, ((int32_t)il2cpp_codegen_multiply(L_28, 2)), ((int32_t)il2cpp_codegen_subtract(L_29, L_30)), NULL);
		goto IL_00ac;
	}

IL_009f:
	{
		RuntimeObject* L_31 = V_0;
		LigatureSubstitutionRecordU5BU5D_t04186B1B45C8D4F2AAB2299EE24668D39B4E9B50* L_32 = __this->____items;
		int32_t L_33 = ___0_index;
		InterfaceActionInvoker2< LigatureSubstitutionRecordU5BU5D_t04186B1B45C8D4F2AAB2299EE24668D39B4E9B50*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_31, L_32, L_33);
	}

IL_00ac:
	{
		int32_t L_34 = __this->____size;
		int32_t L_35 = V_1;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_34, L_35));
		goto IL_00fb;
	}

IL_00bc:
	{
		int32_t L_36 = ___0_index;
		int32_t L_37 = __this->____size;
		if ((((int32_t)L_36) >= ((int32_t)L_37)))
		{
			goto IL_00f4;
		}
	}
	{
		RuntimeObject* L_38 = ___1_collection;
		RuntimeObject* L_39;
		L_39 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 28), L_38);
		V_2 = L_39;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00ea:
			{
				{
					RuntimeObject* L_40 = V_2;
					if (!L_40)
					{
						goto IL_00f3;
					}
				}
				{
					RuntimeObject* L_41 = V_2;
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_41);
				}

IL_00f3:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_00e0_1;
			}

IL_00ce_1:
			{
				int32_t L_42 = ___0_index;
				int32_t L_43 = L_42;
				___0_index = ((int32_t)il2cpp_codegen_add(L_43, 1));
				RuntimeObject* L_44 = V_2;
				LigatureSubstitutionRecord_t8660DC6B1D65C655D698216F72BFB3C85DDCAB94 L_45;
				L_45 = InterfaceFuncInvoker0< LigatureSubstitutionRecord_t8660DC6B1D65C655D698216F72BFB3C85DDCAB94 >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 30), L_44);
				List_1_Insert_mCDFAA9FBB8075FF3F71A0CD8B3D38164F01E6E02(__this, L_43, L_45, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 27));
			}

IL_00e0_1:
			{
				RuntimeObject* L_46 = V_2;
				bool L_47;
				L_47 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_46);
				if (L_47)
				{
					goto IL_00ce_1;
				}
			}
			{
				goto IL_00fb;
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

IL_00f4:
	{
		RuntimeObject* L_48 = ___1_collection;
		List_1_AddEnumerable_mB42271BB905D9B0DFAA613FBA60CCAD013BA0A44(__this, L_48, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 5));
	}

IL_00fb:
	{
		int32_t L_49 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_49, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_mAD2BC8B5C08A5BE2207A08ABE2BDBEB45A50AF89 (List_1_t420B17163897A4DF994BA698744548CD81961E70* __this, LigatureSubstitutionRecord_t8660DC6B1D65C655D698216F72BFB3C85DDCAB94 ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		LigatureSubstitutionRecord_t8660DC6B1D65C655D698216F72BFB3C85DDCAB94 L_0 = ___0_item;
		int32_t L_1;
		L_1 = List_1_IndexOf_mB1F3CF7F9F30093831AB619015A91170B32C33B7(__this, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 17));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		int32_t L_3 = V_0;
		List_1_RemoveAt_m97771CE2ACBE5E924D4A9CDD3847A6F3D676F418(__this, L_3, NULL);
		return (bool)1;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_System_Collections_IList_Remove_m604DC81AB6FF3E6644F43C0932EA2DA6B84EE0C3 (List_1_t420B17163897A4DF994BA698744548CD81961E70* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit);
	{
		RuntimeObject* L_0 = ___0_item;
		CHECKED_LOCAL_INIT(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)),il2cpp_codegen_runtime_class_init_inline);
		bool L_1;
		L_1 = List_1_IsCompatibleObject_mCFD2792F06553078069614B2377FA211C28D8829(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 18));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_item;
		bool L_3;
		L_3 = List_1_Remove_mAD2BC8B5C08A5BE2207A08ABE2BDBEB45A50AF89(__this, ((*(LigatureSubstitutionRecord_t8660DC6B1D65C655D698216F72BFB3C85DDCAB94*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 33));
	}

IL_0015:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_RemoveAll_m3891E7343BD8801E4C44EFE8ED051DA05D183098 (List_1_t420B17163897A4DF994BA698744548CD81961E70* __this, Predicate_1_t75A270EF719DA010F98BE7630ECAA21A66DD8FFE* ___0_match, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Predicate_1_t75A270EF719DA010F98BE7630ECAA21A66DD8FFE* L_0 = ___0_match;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(8, NULL);
	}

IL_0009:
	{
		V_0 = 0;
		goto IL_0011;
	}

IL_000d:
	{
		int32_t L_1 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_1, 1));
	}

IL_0011:
	{
		int32_t L_2 = V_0;
		int32_t L_3 = __this->____size;
		if ((((int32_t)L_2) >= ((int32_t)L_3)))
		{
			goto IL_002e;
		}
	}
	{
		Predicate_1_t75A270EF719DA010F98BE7630ECAA21A66DD8FFE* L_4 = ___0_match;
		LigatureSubstitutionRecordU5BU5D_t04186B1B45C8D4F2AAB2299EE24668D39B4E9B50* L_5 = __this->____items;
		int32_t L_6 = V_0;
		int32_t L_7 = L_6;
		LigatureSubstitutionRecord_t8660DC6B1D65C655D698216F72BFB3C85DDCAB94 L_8 = (L_5)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7));
		bool L_9;
		L_9 = Predicate_1_Invoke_m02B60E049382273FC4D120B0558764B11D3B2ADE_inline(L_4, L_8, NULL);
		if (!L_9)
		{
			goto IL_000d;
		}
	}

IL_002e:
	{
		int32_t L_10 = V_0;
		int32_t L_11 = __this->____size;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_0039;
		}
	}
	{
		return 0;
	}

IL_0039:
	{
		int32_t L_12 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
		goto IL_0089;
	}

IL_003f:
	{
		int32_t L_13 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0043:
	{
		int32_t L_14 = V_1;
		int32_t L_15 = __this->____size;
		if ((((int32_t)L_14) >= ((int32_t)L_15)))
		{
			goto IL_0060;
		}
	}
	{
		Predicate_1_t75A270EF719DA010F98BE7630ECAA21A66DD8FFE* L_16 = ___0_match;
		LigatureSubstitutionRecordU5BU5D_t04186B1B45C8D4F2AAB2299EE24668D39B4E9B50* L_17 = __this->____items;
		int32_t L_18 = V_1;
		int32_t L_19 = L_18;
		LigatureSubstitutionRecord_t8660DC6B1D65C655D698216F72BFB3C85DDCAB94 L_20 = (L_17)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_19));
		bool L_21;
		L_21 = Predicate_1_Invoke_m02B60E049382273FC4D120B0558764B11D3B2ADE_inline(L_16, L_20, NULL);
		if (L_21)
		{
			goto IL_003f;
		}
	}

IL_0060:
	{
		int32_t L_22 = V_1;
		int32_t L_23 = __this->____size;
		if ((((int32_t)L_22) >= ((int32_t)L_23)))
		{
			goto IL_0089;
		}
	}
	{
		LigatureSubstitutionRecordU5BU5D_t04186B1B45C8D4F2AAB2299EE24668D39B4E9B50* L_24 = __this->____items;
		int32_t L_25 = V_0;
		int32_t L_26 = L_25;
		V_0 = ((int32_t)il2cpp_codegen_add(L_26, 1));
		LigatureSubstitutionRecordU5BU5D_t04186B1B45C8D4F2AAB2299EE24668D39B4E9B50* L_27 = __this->____items;
		int32_t L_28 = V_1;
		int32_t L_29 = L_28;
		V_1 = ((int32_t)il2cpp_codegen_add(L_29, 1));
		int32_t L_30 = L_29;
		LigatureSubstitutionRecord_t8660DC6B1D65C655D698216F72BFB3C85DDCAB94 L_31 = (L_27)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_30));
		(L_24)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_26), (LigatureSubstitutionRecord_t8660DC6B1D65C655D698216F72BFB3C85DDCAB94)L_31);
	}

IL_0089:
	{
		int32_t L_32 = V_1;
		int32_t L_33 = __this->____size;
		if ((((int32_t)L_32) < ((int32_t)L_33)))
		{
			goto IL_0043;
		}
	}
	{
	}
	{
		LigatureSubstitutionRecordU5BU5D_t04186B1B45C8D4F2AAB2299EE24668D39B4E9B50* L_34 = __this->____items;
		int32_t L_35 = V_0;
		int32_t L_36 = __this->____size;
		int32_t L_37 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_34, L_35, ((int32_t)il2cpp_codegen_subtract(L_36, L_37)), NULL);
	}

IL_00ad:
	{
		int32_t L_38 = __this->____size;
		int32_t L_39 = V_0;
		int32_t L_40 = V_0;
		__this->____size = L_40;
		int32_t L_41 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_41, 1));
		return ((int32_t)il2cpp_codegen_subtract(L_38, L_39));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_m97771CE2ACBE5E924D4A9CDD3847A6F3D676F418 (List_1_t420B17163897A4DF994BA698744548CD81961E70* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	LigatureSubstitutionRecord_t8660DC6B1D65C655D698216F72BFB3C85DDCAB94 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRange_IndexException_mC7661B8C6DD827679C95FC6B6C08F8724174936D(NULL);
	}

IL_000e:
	{
		int32_t L_2 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_2, 1));
		int32_t L_3 = ___0_index;
		int32_t L_4 = __this->____size;
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_0042;
		}
	}
	{
		LigatureSubstitutionRecordU5BU5D_t04186B1B45C8D4F2AAB2299EE24668D39B4E9B50* L_5 = __this->____items;
		int32_t L_6 = ___0_index;
		LigatureSubstitutionRecordU5BU5D_t04186B1B45C8D4F2AAB2299EE24668D39B4E9B50* L_7 = __this->____items;
		int32_t L_8 = ___0_index;
		int32_t L_9 = __this->____size;
		int32_t L_10 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, ((int32_t)il2cpp_codegen_add(L_6, 1)), (RuntimeArray*)L_7, L_8, ((int32_t)il2cpp_codegen_subtract(L_9, L_10)), NULL);
	}

IL_0042:
	{
	}
	{
		LigatureSubstitutionRecordU5BU5D_t04186B1B45C8D4F2AAB2299EE24668D39B4E9B50* L_11 = __this->____items;
		int32_t L_12 = __this->____size;
		il2cpp_codegen_initobj((&V_0), sizeof(LigatureSubstitutionRecord_t8660DC6B1D65C655D698216F72BFB3C85DDCAB94));
		LigatureSubstitutionRecord_t8660DC6B1D65C655D698216F72BFB3C85DDCAB94 L_13 = V_0;
		(L_11)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_12), (LigatureSubstitutionRecord_t8660DC6B1D65C655D698216F72BFB3C85DDCAB94)L_13);
	}

IL_0063:
	{
		int32_t L_14 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_14, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveRange_m2A7910DC3EC2FF7A0354A6B19AC8812CDBDCDA6F (List_1_t420B17163897A4DF994BA698744548CD81961E70* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_count;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F(((int32_t)16), 4, NULL);
	}

IL_0015:
	{
		int32_t L_2 = __this->____size;
		int32_t L_3 = ___0_index;
		int32_t L_4 = ___1_count;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_2, L_3))) >= ((int32_t)L_4)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(((int32_t)23), NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_count;
		if ((((int32_t)L_5) <= ((int32_t)0)))
		{
			goto IL_008d;
		}
	}
	{
		int32_t L_6 = __this->____size;
		int32_t L_7 = __this->____size;
		int32_t L_8 = ___1_count;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_7, L_8));
		int32_t L_9 = ___0_index;
		int32_t L_10 = __this->____size;
		if ((((int32_t)L_9) >= ((int32_t)L_10)))
		{
			goto IL_0066;
		}
	}
	{
		LigatureSubstitutionRecordU5BU5D_t04186B1B45C8D4F2AAB2299EE24668D39B4E9B50* L_11 = __this->____items;
		int32_t L_12 = ___0_index;
		int32_t L_13 = ___1_count;
		LigatureSubstitutionRecordU5BU5D_t04186B1B45C8D4F2AAB2299EE24668D39B4E9B50* L_14 = __this->____items;
		int32_t L_15 = ___0_index;
		int32_t L_16 = __this->____size;
		int32_t L_17 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_11, ((int32_t)il2cpp_codegen_add(L_12, L_13)), (RuntimeArray*)L_14, L_15, ((int32_t)il2cpp_codegen_subtract(L_16, L_17)), NULL);
	}

IL_0066:
	{
		int32_t L_18 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}
	{
		LigatureSubstitutionRecordU5BU5D_t04186B1B45C8D4F2AAB2299EE24668D39B4E9B50* L_19 = __this->____items;
		int32_t L_20 = __this->____size;
		int32_t L_21 = ___1_count;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_19, L_20, L_21, NULL);
	}

IL_008d:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Reverse_mBF1423F68BB34FE85CD6E72783CDA4FBA64A5307 (List_1_t420B17163897A4DF994BA698744548CD81961E70* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = List_1_get_Count_m57B62D5396EAD21285DF79006D76BC93E9B9A09A_inline(__this, NULL);
		List_1_Reverse_mF343508DEF6E849C3043BB04262CECDEBC29DD04(__this, 0, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 35));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Reverse_mF343508DEF6E849C3043BB04262CECDEBC29DD04 (List_1_t420B17163897A4DF994BA698744548CD81961E70* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_count;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F(((int32_t)16), 4, NULL);
	}

IL_0015:
	{
		int32_t L_2 = __this->____size;
		int32_t L_3 = ___0_index;
		int32_t L_4 = ___1_count;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_2, L_3))) >= ((int32_t)L_4)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(((int32_t)23), NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_count;
		if ((((int32_t)L_5) <= ((int32_t)1)))
		{
			goto IL_0038;
		}
	}
	{
		LigatureSubstitutionRecordU5BU5D_t04186B1B45C8D4F2AAB2299EE24668D39B4E9B50* L_6 = __this->____items;
		int32_t L_7 = ___0_index;
		int32_t L_8 = ___1_count;
		Array_Reverse_TisLigatureSubstitutionRecord_t8660DC6B1D65C655D698216F72BFB3C85DDCAB94_m59A5711531F3B01A7FD38FB04BFC563BA5ACF61C(L_6, L_7, L_8, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 36));
	}

IL_0038:
	{
		int32_t L_9 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_9, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_mE7FBAAF969CB5B87FCD0650382986F726A2F7CE0 (List_1_t420B17163897A4DF994BA698744548CD81961E70* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = List_1_get_Count_m57B62D5396EAD21285DF79006D76BC93E9B9A09A_inline(__this, NULL);
		RuntimeObject* L_1 = ___0_comparer;
		List_1_Sort_m12C609F0F65CD40DB15D3F1DE5819B457ABBCD7E(__this, 0, L_0, L_1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 37));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_m12C609F0F65CD40DB15D3F1DE5819B457ABBCD7E (List_1_t420B17163897A4DF994BA698744548CD81961E70* __this, int32_t ___0_index, int32_t ___1_count, RuntimeObject* ___2_comparer, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_count;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F(((int32_t)16), 4, NULL);
	}

IL_0015:
	{
		int32_t L_2 = __this->____size;
		int32_t L_3 = ___0_index;
		int32_t L_4 = ___1_count;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_2, L_3))) >= ((int32_t)L_4)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(((int32_t)23), NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_count;
		if ((((int32_t)L_5) <= ((int32_t)1)))
		{
			goto IL_0039;
		}
	}
	{
		LigatureSubstitutionRecordU5BU5D_t04186B1B45C8D4F2AAB2299EE24668D39B4E9B50* L_6 = __this->____items;
		int32_t L_7 = ___0_index;
		int32_t L_8 = ___1_count;
		RuntimeObject* L_9 = ___2_comparer;
		Array_Sort_TisLigatureSubstitutionRecord_t8660DC6B1D65C655D698216F72BFB3C85DDCAB94_mFAE044C7CB74A79921108CCC1A15E61AF4DCCAFD(L_6, L_7, L_8, L_9, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 38));
	}

IL_0039:
	{
		int32_t L_10 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_10, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_mDD39F933F93C6C48681924AF81AEED59B3C10510 (List_1_t420B17163897A4DF994BA698744548CD81961E70* __this, Comparison_1_tE68D245A5CD7F54899C04EDE679025720DDC8BC0* ___0_comparison, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(ArraySortHelper_1_t0B69B36E8E1F97490E6BE32C23AE1784AB1ADA3A_StaticInit);
	{
		Comparison_1_tE68D245A5CD7F54899C04EDE679025720DDC8BC0* L_0 = ___0_comparison;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(((int32_t)34), NULL);
	}

IL_000a:
	{
		int32_t L_1 = __this->____size;
		if ((((int32_t)L_1) <= ((int32_t)1)))
		{
			goto IL_0026;
		}
	}
	{
		LigatureSubstitutionRecordU5BU5D_t04186B1B45C8D4F2AAB2299EE24668D39B4E9B50* L_2 = __this->____items;
		int32_t L_3 = __this->____size;
		Comparison_1_tE68D245A5CD7F54899C04EDE679025720DDC8BC0* L_4 = ___0_comparison;
		CHECKED_LOCAL_INIT(ArraySortHelper_1_t0B69B36E8E1F97490E6BE32C23AE1784AB1ADA3A_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 40)),il2cpp_codegen_runtime_class_init_inline);
		ArraySortHelper_1_Sort_mBF96DD2C71393DB577087D751CB701D9D7DC5D57(L_2, 0, L_3, L_4, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 39));
	}

IL_0026:
	{
		int32_t L_5 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_5, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LigatureSubstitutionRecordU5BU5D_t04186B1B45C8D4F2AAB2299EE24668D39B4E9B50* List_1_ToArray_mA2D5C4BCAA136816E60603708EEB46729959C63C (List_1_t420B17163897A4DF994BA698744548CD81961E70* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit);
	LigatureSubstitutionRecordU5BU5D_t04186B1B45C8D4F2AAB2299EE24668D39B4E9B50* V_0 = NULL;
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		CHECKED_LOCAL_INIT(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)),il2cpp_codegen_runtime_class_init_inline);
		LigatureSubstitutionRecordU5BU5D_t04186B1B45C8D4F2AAB2299EE24668D39B4E9B50* L_1 = ((List_1_t420B17163897A4DF994BA698744548CD81961E70_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)))->___s_emptyArray;
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____size;
		LigatureSubstitutionRecordU5BU5D_t04186B1B45C8D4F2AAB2299EE24668D39B4E9B50* L_3 = (LigatureSubstitutionRecordU5BU5D_t04186B1B45C8D4F2AAB2299EE24668D39B4E9B50*)(LigatureSubstitutionRecordU5BU5D_t04186B1B45C8D4F2AAB2299EE24668D39B4E9B50*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1), (uint32_t)L_2);
		V_0 = L_3;
		LigatureSubstitutionRecordU5BU5D_t04186B1B45C8D4F2AAB2299EE24668D39B4E9B50* L_4 = __this->____items;
		LigatureSubstitutionRecordU5BU5D_t04186B1B45C8D4F2AAB2299EE24668D39B4E9B50* L_5 = V_0;
		int32_t L_6 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_4, 0, (RuntimeArray*)L_5, 0, L_6, NULL);
		LigatureSubstitutionRecordU5BU5D_t04186B1B45C8D4F2AAB2299EE24668D39B4E9B50* L_7 = V_0;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddEnumerable_mB42271BB905D9B0DFAA613FBA60CCAD013BA0A44 (List_1_t420B17163897A4DF994BA698744548CD81961E70* __this, RuntimeObject* ___0_enumerable, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	LigatureSubstitutionRecord_t8660DC6B1D65C655D698216F72BFB3C85DDCAB94 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		RuntimeObject* L_1 = ___0_enumerable;
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 28), L_1);
		V_0 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0063:
			{
				{
					RuntimeObject* L_3 = V_0;
					if (!L_3)
					{
						goto IL_006c;
					}
				}
				{
					RuntimeObject* L_4 = V_0;
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_4);
				}

IL_006c:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_0059_1;
			}

IL_0017_1:
			{
				RuntimeObject* L_5 = V_0;
				LigatureSubstitutionRecord_t8660DC6B1D65C655D698216F72BFB3C85DDCAB94 L_6;
				L_6 = InterfaceFuncInvoker0< LigatureSubstitutionRecord_t8660DC6B1D65C655D698216F72BFB3C85DDCAB94 >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 30), L_5);
				V_1 = L_6;
				int32_t L_7 = __this->____size;
				LigatureSubstitutionRecordU5BU5D_t04186B1B45C8D4F2AAB2299EE24668D39B4E9B50* L_8 = __this->____items;
				int32_t L_9 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_8)->max_length),NULL));
				if ((!(((uint32_t)L_7) == ((uint32_t)L_9))))
				{
					goto IL_003c_1;
				}
			}
			{
				int32_t L_10 = __this->____size;
				List_1_EnsureCapacity_m9DB2A28A18CDEF06F164BDAE9CDBBA72AA377645(__this, ((int32_t)il2cpp_codegen_add(L_10, 1)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 12));
			}

IL_003c_1:
			{
				LigatureSubstitutionRecordU5BU5D_t04186B1B45C8D4F2AAB2299EE24668D39B4E9B50* L_11 = __this->____items;
				int32_t L_12 = __this->____size;
				V_2 = L_12;
				int32_t L_13 = V_2;
				__this->____size = ((int32_t)il2cpp_codegen_add(L_13, 1));
				int32_t L_14 = V_2;
				LigatureSubstitutionRecord_t8660DC6B1D65C655D698216F72BFB3C85DDCAB94 L_15 = V_1;
				(L_11)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_14), (LigatureSubstitutionRecord_t8660DC6B1D65C655D698216F72BFB3C85DDCAB94)L_15);
			}

IL_0059_1:
			{
				RuntimeObject* L_16 = V_0;
				bool L_17;
				L_17 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_16);
				if (L_17)
				{
					goto IL_0017_1;
				}
			}
			{
				goto IL_006d;
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

IL_006d:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__cctor_m58CC454FB03FC0F4CC91A65593A01B6291583F95 (const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	{
		LigatureSubstitutionRecordU5BU5D_t04186B1B45C8D4F2AAB2299EE24668D39B4E9B50* L_0 = (LigatureSubstitutionRecordU5BU5D_t04186B1B45C8D4F2AAB2299EE24668D39B4E9B50*)(LigatureSubstitutionRecordU5BU5D_t04186B1B45C8D4F2AAB2299EE24668D39B4E9B50*)SZArrayNew(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1), (uint32_t)0);
		((List_1_t420B17163897A4DF994BA698744548CD81961E70_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___s_emptyArray = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((List_1_t420B17163897A4DF994BA698744548CD81961E70_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___s_emptyArray), (void*)L_0);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mDEDFF0ADDAEAD447A046E55A0789C34EB802F26A (List_1_t8837CD02A40CED632406E449B6D76FF9AB3E4468* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit);
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		CHECKED_LOCAL_INIT(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)),il2cpp_codegen_runtime_class_init_inline);
		MarkToBaseAdjustmentRecordU5BU5D_t4F120A507E14039BC63574D1815FF2E7B9D73911* L_0 = ((List_1_t8837CD02A40CED632406E449B6D76FF9AB3E4468_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)))->___s_emptyArray;
		__this->____items = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m9EF60B3E6CE1B4E19B56110E6054CB3D31944BFB (List_1_t8837CD02A40CED632406E449B6D76FF9AB3E4468* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit);
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0012;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F(((int32_t)12), 4, NULL);
	}

IL_0012:
	{
		int32_t L_1 = ___0_capacity;
		if (L_1)
		{
			goto IL_0021;
		}
	}
	{
		CHECKED_LOCAL_INIT(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)),il2cpp_codegen_runtime_class_init_inline);
		MarkToBaseAdjustmentRecordU5BU5D_t4F120A507E14039BC63574D1815FF2E7B9D73911* L_2 = ((List_1_t8837CD02A40CED632406E449B6D76FF9AB3E4468_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)))->___s_emptyArray;
		__this->____items = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_2);
		return;
	}

IL_0021:
	{
		int32_t L_3 = ___0_capacity;
		MarkToBaseAdjustmentRecordU5BU5D_t4F120A507E14039BC63574D1815FF2E7B9D73911* L_4 = (MarkToBaseAdjustmentRecordU5BU5D_t4F120A507E14039BC63574D1815FF2E7B9D73911*)(MarkToBaseAdjustmentRecordU5BU5D_t4F120A507E14039BC63574D1815FF2E7B9D73911*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1), (uint32_t)L_3);
		__this->____items = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_4);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m8F2668EF0FCDA0A12C69D4EE14E900CA8AEC893A (List_1_t8837CD02A40CED632406E449B6D76FF9AB3E4468* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit);
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_collection;
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(6, NULL);
	}

IL_000f:
	{
		RuntimeObject* L_1 = ___0_collection;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_1, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2)));
		RuntimeObject* L_2 = V_0;
		if (!L_2)
		{
			goto IL_0050;
		}
	}
	{
		RuntimeObject* L_3 = V_0;
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_3);
		V_1 = L_4;
		int32_t L_5 = V_1;
		if (L_5)
		{
			goto IL_002f;
		}
	}
	{
		CHECKED_LOCAL_INIT(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)),il2cpp_codegen_runtime_class_init_inline);
		MarkToBaseAdjustmentRecordU5BU5D_t4F120A507E14039BC63574D1815FF2E7B9D73911* L_6 = ((List_1_t8837CD02A40CED632406E449B6D76FF9AB3E4468_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)))->___s_emptyArray;
		__this->____items = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_6);
		return;
	}

IL_002f:
	{
		int32_t L_7 = V_1;
		MarkToBaseAdjustmentRecordU5BU5D_t4F120A507E14039BC63574D1815FF2E7B9D73911* L_8 = (MarkToBaseAdjustmentRecordU5BU5D_t4F120A507E14039BC63574D1815FF2E7B9D73911*)(MarkToBaseAdjustmentRecordU5BU5D_t4F120A507E14039BC63574D1815FF2E7B9D73911*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1), (uint32_t)L_7);
		__this->____items = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_8);
		RuntimeObject* L_9 = V_0;
		MarkToBaseAdjustmentRecordU5BU5D_t4F120A507E14039BC63574D1815FF2E7B9D73911* L_10 = __this->____items;
		InterfaceActionInvoker2< MarkToBaseAdjustmentRecordU5BU5D_t4F120A507E14039BC63574D1815FF2E7B9D73911*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_9, L_10, 0);
		int32_t L_11 = V_1;
		__this->____size = L_11;
		return;
	}

IL_0050:
	{
		__this->____size = 0;
		CHECKED_LOCAL_INIT(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)),il2cpp_codegen_runtime_class_init_inline);
		MarkToBaseAdjustmentRecordU5BU5D_t4F120A507E14039BC63574D1815FF2E7B9D73911* L_12 = ((List_1_t8837CD02A40CED632406E449B6D76FF9AB3E4468_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)))->___s_emptyArray;
		__this->____items = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_12);
		RuntimeObject* L_13 = ___0_collection;
		List_1_AddEnumerable_m63117E55062699B6C56607E49B1902855F902765(__this, L_13, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 5));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Capacity_m008D87C6772690F931BE144DB0ED5C0BCCF39E89 (List_1_t8837CD02A40CED632406E449B6D76FF9AB3E4468* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit);
	MarkToBaseAdjustmentRecordU5BU5D_t4F120A507E14039BC63574D1815FF2E7B9D73911* V_0 = NULL;
	{
		int32_t L_0 = ___0_value;
		int32_t L_1 = __this->____size;
		if ((((int32_t)L_0) >= ((int32_t)L_1)))
		{
			goto IL_0012;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F(((int32_t)15), ((int32_t)21), NULL);
	}

IL_0012:
	{
		int32_t L_2 = ___0_value;
		MarkToBaseAdjustmentRecordU5BU5D_t4F120A507E14039BC63574D1815FF2E7B9D73911* L_3 = __this->____items;
		int32_t L_4 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_3)->max_length),NULL));
		if ((((int32_t)L_2) == ((int32_t)L_4)))
		{
			goto IL_0058;
		}
	}
	{
		int32_t L_5 = ___0_value;
		if ((((int32_t)L_5) <= ((int32_t)0)))
		{
			goto IL_004d;
		}
	}
	{
		int32_t L_6 = ___0_value;
		MarkToBaseAdjustmentRecordU5BU5D_t4F120A507E14039BC63574D1815FF2E7B9D73911* L_7 = (MarkToBaseAdjustmentRecordU5BU5D_t4F120A507E14039BC63574D1815FF2E7B9D73911*)(MarkToBaseAdjustmentRecordU5BU5D_t4F120A507E14039BC63574D1815FF2E7B9D73911*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1), (uint32_t)L_6);
		V_0 = L_7;
		int32_t L_8 = __this->____size;
		if ((((int32_t)L_8) <= ((int32_t)0)))
		{
			goto IL_0045;
		}
	}
	{
		MarkToBaseAdjustmentRecordU5BU5D_t4F120A507E14039BC63574D1815FF2E7B9D73911* L_9 = __this->____items;
		MarkToBaseAdjustmentRecordU5BU5D_t4F120A507E14039BC63574D1815FF2E7B9D73911* L_10 = V_0;
		int32_t L_11 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_9, 0, (RuntimeArray*)L_10, 0, L_11, NULL);
	}

IL_0045:
	{
		MarkToBaseAdjustmentRecordU5BU5D_t4F120A507E14039BC63574D1815FF2E7B9D73911* L_12 = V_0;
		__this->____items = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_12);
		return;
	}

IL_004d:
	{
		CHECKED_LOCAL_INIT(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)),il2cpp_codegen_runtime_class_init_inline);
		MarkToBaseAdjustmentRecordU5BU5D_t4F120A507E14039BC63574D1815FF2E7B9D73911* L_13 = ((List_1_t8837CD02A40CED632406E449B6D76FF9AB3E4468_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)))->___s_emptyArray;
		__this->____items = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_13);
	}

IL_0058:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607 List_1_get_Item_mD6F8CB74400D6D16784E14C495835979643EE5C8 (List_1_t8837CD02A40CED632406E449B6D76FF9AB3E4468* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRange_IndexException_mC7661B8C6DD827679C95FC6B6C08F8724174936D(NULL);
	}

IL_000e:
	{
		MarkToBaseAdjustmentRecordU5BU5D_t4F120A507E14039BC63574D1815FF2E7B9D73911* L_2 = __this->____items;
		int32_t L_3 = ___0_index;
		int32_t L_4 = L_3;
		MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607 L_5 = (L_2)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_m06E1AA2D2C3EE28B83862E18860FC03F90987F80 (List_1_t8837CD02A40CED632406E449B6D76FF9AB3E4468* __this, int32_t ___0_index, MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607 ___1_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRange_IndexException_mC7661B8C6DD827679C95FC6B6C08F8724174936D(NULL);
	}

IL_000e:
	{
		MarkToBaseAdjustmentRecordU5BU5D_t4F120A507E14039BC63574D1815FF2E7B9D73911* L_2 = __this->____items;
		int32_t L_3 = ___0_index;
		MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607 L_4 = ___1_value;
		(L_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3), (MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607)L_4);
		int32_t L_5 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_5, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_IsCompatibleObject_mF02CF0A90086FADDF391D08A99E844C15337772C (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6))))
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607));
		MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607 L_2 = V_0;
		return false;
	}

IL_001d:
	{
		return (bool)0;
	}

IL_001f:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_System_Collections_IList_get_Item_m7BE622008C5EDD55BD4ED16C70C1A9B21FF4CB59 (List_1_t8837CD02A40CED632406E449B6D76FF9AB3E4468* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607 L_1;
		L_1 = List_1_get_Item_mD6F8CB74400D6D16784E14C495835979643EE5C8(__this, L_0, NULL);
		MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607 L_2 = L_1;
		RuntimeObject* L_3 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6), &L_2);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_System_Collections_IList_set_Item_m0F536065F082A118CC731583EE10D9BE67BB9FC9 (List_1_t8837CD02A40CED632406E449B6D76FF9AB3E4468* __this, int32_t ___0_index, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(Type_t_StaticInit);
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = ___1_value;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisMarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607_m38A8E0DAA141B66DE625AFAC57A1CE80494454A6(L_0, ((int32_t)15), NULL);
	}
	try
	{
		int32_t L_1 = ___0_index;
		RuntimeObject* L_2 = ___1_value;
		List_1_set_Item_m06E1AA2D2C3EE28B83862E18860FC03F90987F80(__this, L_1, ((*(MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6)))), NULL);
		goto IL_002a;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0017;
		}
		throw e;
	}

CATCH_0017:
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_3 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_4 = ___1_value;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 10)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
		ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_4, L_6, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_002a;
	}

IL_002a:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_m0C181B61B3E3305719C8A3206BF633E7DD84A27D (List_1_t8837CD02A40CED632406E449B6D76FF9AB3E4468* __this, MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607 ___0_item, const RuntimeMethod* method) 
{
	MarkToBaseAdjustmentRecordU5BU5D_t4F120A507E14039BC63574D1815FF2E7B9D73911* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		MarkToBaseAdjustmentRecordU5BU5D_t4F120A507E14039BC63574D1815FF2E7B9D73911* L_1 = __this->____items;
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		V_1 = L_2;
		int32_t L_3 = V_1;
		MarkToBaseAdjustmentRecordU5BU5D_t4F120A507E14039BC63574D1815FF2E7B9D73911* L_4 = V_0;
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		if ((!(((uint32_t)L_3) < ((uint32_t)L_5))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_6 = V_1;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_6, 1));
		MarkToBaseAdjustmentRecordU5BU5D_t4F120A507E14039BC63574D1815FF2E7B9D73911* L_7 = V_0;
		int32_t L_8 = V_1;
		MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607 L_9 = ___0_item;
		(L_7)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_8), (MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607)L_9);
		return;
	}

IL_0034:
	{
		MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607 L_10 = ___0_item;
		List_1_AddWithResize_m58952DA47BD7D859A8AF9ED552F78C58AA5ED5F8(__this, L_10, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 11));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_m58952DA47BD7D859A8AF9ED552F78C58AA5ED5F8 (List_1_t8837CD02A40CED632406E449B6D76FF9AB3E4468* __this, MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607 ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____size;
		V_0 = L_0;
		int32_t L_1 = V_0;
		List_1_EnsureCapacity_mEECF97630862151EC7B9E4E78E54C8B6CD44CE1E(__this, ((int32_t)il2cpp_codegen_add(L_1, 1)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 12));
		int32_t L_2 = V_0;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_2, 1));
		MarkToBaseAdjustmentRecordU5BU5D_t4F120A507E14039BC63574D1815FF2E7B9D73911* L_3 = __this->____items;
		int32_t L_4 = V_0;
		MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607 L_5 = ___0_item;
		(L_3)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4), (MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607)L_5);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_System_Collections_IList_Add_m262EDB2C53A47954E12466BD1C7B05D52013BA61 (List_1_t8837CD02A40CED632406E449B6D76FF9AB3E4468* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(Type_t_StaticInit);
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = ___0_item;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisMarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607_m38A8E0DAA141B66DE625AFAC57A1CE80494454A6(L_0, ((int32_t)20), NULL);
	}
	try
	{
		RuntimeObject* L_1 = ___0_item;
		List_1_Add_m0C181B61B3E3305719C8A3206BF633E7DD84A27D_inline(__this, ((*(MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607*)UnBox(L_1, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		goto IL_0029;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0016;
		}
		throw e;
	}

CATCH_0016:
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_2 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_3 = ___0_item;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_4 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 10)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_5;
		L_5 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_4, NULL);
		ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_3, L_5, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0029;
	}

IL_0029:
	{
		int32_t L_6;
		L_6 = List_1_get_Count_mC4819D6F7667DFF1413FC11A20B5640FE7BDCA33_inline(__this, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_6, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddRange_mA6E9CAEF1D21C6F3709E1FBAD82FD83E68A97C08 (List_1_t8837CD02A40CED632406E449B6D76FF9AB3E4468* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		RuntimeObject* L_1 = ___0_collection;
		List_1_InsertRange_m3D2ADCD47DA8085B1C4B73FC643FDD146CE30DC3(__this, L_0, L_1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 15));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_mDFBA0817FDA92CE28C95552C3A90DE35382040DC (List_1_t8837CD02A40CED632406E449B6D76FF9AB3E4468* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		goto IL_0035;
	}

IL_0035:
	{
		__this->____size = 0;
	}

IL_003c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_m5DA54316CDCDFF672431FE41B258C61EA7E9FA9C (List_1_t8837CD02A40CED632406E449B6D76FF9AB3E4468* __this, MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607 ___0_item, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607 L_1 = ___0_item;
		int32_t L_2;
		L_2 = List_1_IndexOf_m91AF7A4F8617158B04229C8F75C0E26E427DC888(__this, L_1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 17));
		return (bool)((((int32_t)((((int32_t)L_2) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0016:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_System_Collections_IList_Contains_mDF073BE558A2433F6D300AFB90BFD910E471354F (List_1_t8837CD02A40CED632406E449B6D76FF9AB3E4468* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit);
	{
		RuntimeObject* L_0 = ___0_item;
		CHECKED_LOCAL_INIT(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)),il2cpp_codegen_runtime_class_init_inline);
		bool L_1;
		L_1 = List_1_IsCompatibleObject_mF02CF0A90086FADDF391D08A99E844C15337772C(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 18));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_item;
		bool L_3;
		L_3 = List_1_Contains_m5DA54316CDCDFF672431FE41B258C61EA7E9FA9C(__this, ((*(MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 19));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_CopyTo_mCF4ABF679231725FBE29EB0A8C80B0E6D49EF040 (List_1_t8837CD02A40CED632406E449B6D76FF9AB3E4468* __this, MarkToBaseAdjustmentRecordU5BU5D_t4F120A507E14039BC63574D1815FF2E7B9D73911* ___0_array, const RuntimeMethod* method) 
{
	{
		MarkToBaseAdjustmentRecordU5BU5D_t4F120A507E14039BC63574D1815FF2E7B9D73911* L_0 = ___0_array;
		List_1_CopyTo_mD17C44C31E84FFBC80E893892BCC66CE19A68244(__this, L_0, 0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_EnsureCapacity_mEECF97630862151EC7B9E4E78E54C8B6CD44CE1E (List_1_t8837CD02A40CED632406E449B6D76FF9AB3E4468* __this, int32_t ___0_min, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t G_B4_0 = 0;
	{
		MarkToBaseAdjustmentRecordU5BU5D_t4F120A507E14039BC63574D1815FF2E7B9D73911* L_0 = __this->____items;
		int32_t L_1 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_0)->max_length),NULL));
		int32_t L_2 = ___0_min;
		if ((((int32_t)L_1) >= ((int32_t)L_2)))
		{
			goto IL_003d;
		}
	}
	{
		MarkToBaseAdjustmentRecordU5BU5D_t4F120A507E14039BC63574D1815FF2E7B9D73911* L_3 = __this->____items;
		if (!(((RuntimeArray*)L_3)->max_length))
		{
			goto IL_0020;
		}
	}
	{
		MarkToBaseAdjustmentRecordU5BU5D_t4F120A507E14039BC63574D1815FF2E7B9D73911* L_4 = __this->____items;
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		G_B4_0 = ((int32_t)il2cpp_codegen_multiply(L_5, 2));
		goto IL_0021;
	}

IL_0020:
	{
		G_B4_0 = 4;
	}

IL_0021:
	{
		V_0 = G_B4_0;
		int32_t L_6 = V_0;
		if ((!(((uint32_t)L_6) > ((uint32_t)((int32_t)2146435071)))))
		{
			goto IL_0030;
		}
	}
	{
		V_0 = ((int32_t)2146435071);
	}

IL_0030:
	{
		int32_t L_7 = V_0;
		int32_t L_8 = ___0_min;
		if ((((int32_t)L_7) >= ((int32_t)L_8)))
		{
			goto IL_0036;
		}
	}
	{
		int32_t L_9 = ___0_min;
		V_0 = L_9;
	}

IL_0036:
	{
		int32_t L_10 = V_0;
		List_1_set_Capacity_m008D87C6772690F931BE144DB0ED5C0BCCF39E89(__this, L_10, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 21));
	}

IL_003d:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_ForEach_m344B9BF476C6E4D6AA3B6FE5D4DE73E84F62AA02 (List_1_t8837CD02A40CED632406E449B6D76FF9AB3E4468* __this, Action_1_t801DD0C5C7757F429A097C411325B152D78BAC33* ___0_action, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Action_1_t801DD0C5C7757F429A097C411325B152D78BAC33* L_0 = ___0_action;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(((int32_t)33), NULL);
	}

IL_000a:
	{
		int32_t L_1 = __this->____version;
		V_0 = L_1;
		V_1 = 0;
		goto IL_0034;
	}

IL_0015:
	{
		int32_t L_2 = V_0;
		int32_t L_3 = __this->____version;
		if ((!(((uint32_t)L_2) == ((uint32_t)L_3))))
		{
			goto IL_003d;
		}
	}
	{
		Action_1_t801DD0C5C7757F429A097C411325B152D78BAC33* L_4 = ___0_action;
		MarkToBaseAdjustmentRecordU5BU5D_t4F120A507E14039BC63574D1815FF2E7B9D73911* L_5 = __this->____items;
		int32_t L_6 = V_1;
		int32_t L_7 = L_6;
		MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607 L_8 = (L_5)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7));
		Action_1_Invoke_m9D2103EFF0BBD8E29BA43CD08164936D8DE9CB07_inline(L_4, L_8, NULL);
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0034:
	{
		int32_t L_10 = V_1;
		int32_t L_11 = __this->____size;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_0015;
		}
	}

IL_003d:
	{
		int32_t L_12 = V_0;
		int32_t L_13 = __this->____version;
		if ((((int32_t)L_12) == ((int32_t)L_13)))
		{
			goto IL_004b;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_InvalidOperation_EnumFailedVersion_m5331E2E0EC0E36843D53F439C2529530595ACE9F(NULL);
	}

IL_004b:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tCD90581783D3AA12E0C1FEDDAB2936C6A69F1644 List_1_GetEnumerator_mBD3455B76B7F039DF417CF69327568DC4B139518 (List_1_t8837CD02A40CED632406E449B6D76FF9AB3E4468* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tCD90581783D3AA12E0C1FEDDAB2936C6A69F1644 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mBFD97CE7FBC658EAA43E0A89B5111DB34EB9D610((&L_0), __this, NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_mF8262FDA122CF4CB3B6E45E2080723913D9F36C1 (List_1_t8837CD02A40CED632406E449B6D76FF9AB3E4468* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tCD90581783D3AA12E0C1FEDDAB2936C6A69F1644 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mBFD97CE7FBC658EAA43E0A89B5111DB34EB9D610((&L_0), __this, NULL);
		Enumerator_tCD90581783D3AA12E0C1FEDDAB2936C6A69F1644 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 23), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_System_Collections_IEnumerable_GetEnumerator_mF5600B6C0E4C05E98E5EDA220BDE4729976568E5 (List_1_t8837CD02A40CED632406E449B6D76FF9AB3E4468* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tCD90581783D3AA12E0C1FEDDAB2936C6A69F1644 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mBFD97CE7FBC658EAA43E0A89B5111DB34EB9D610((&L_0), __this, NULL);
		Enumerator_tCD90581783D3AA12E0C1FEDDAB2936C6A69F1644 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 23), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t8837CD02A40CED632406E449B6D76FF9AB3E4468* List_1_GetRange_mCA37CF71B5E1D17A01EAC703D18CB1A1EAAAB567 (List_1_t8837CD02A40CED632406E449B6D76FF9AB3E4468* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method) 
{
	List_1_t8837CD02A40CED632406E449B6D76FF9AB3E4468* V_0 = NULL;
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_count;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F(((int32_t)16), 4, NULL);
	}

IL_0015:
	{
		int32_t L_2 = __this->____size;
		int32_t L_3 = ___0_index;
		int32_t L_4 = ___1_count;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_2, L_3))) >= ((int32_t)L_4)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(((int32_t)23), NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_count;
		List_1_t8837CD02A40CED632406E449B6D76FF9AB3E4468* L_6 = (List_1_t8837CD02A40CED632406E449B6D76FF9AB3E4468*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0));
		List_1__ctor_m9EF60B3E6CE1B4E19B56110E6054CB3D31944BFB(L_6, L_5, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 25));
		V_0 = L_6;
		MarkToBaseAdjustmentRecordU5BU5D_t4F120A507E14039BC63574D1815FF2E7B9D73911* L_7 = __this->____items;
		int32_t L_8 = ___0_index;
		List_1_t8837CD02A40CED632406E449B6D76FF9AB3E4468* L_9 = V_0;
		MarkToBaseAdjustmentRecordU5BU5D_t4F120A507E14039BC63574D1815FF2E7B9D73911* L_10 = L_9->____items;
		int32_t L_11 = ___1_count;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_7, L_8, (RuntimeArray*)L_10, 0, L_11, NULL);
		List_1_t8837CD02A40CED632406E449B6D76FF9AB3E4468* L_12 = V_0;
		int32_t L_13 = ___1_count;
		L_12->____size = L_13;
		List_1_t8837CD02A40CED632406E449B6D76FF9AB3E4468* L_14 = V_0;
		return L_14;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_IndexOf_m91AF7A4F8617158B04229C8F75C0E26E427DC888 (List_1_t8837CD02A40CED632406E449B6D76FF9AB3E4468* __this, MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607 ___0_item, const RuntimeMethod* method) 
{
	{
		MarkToBaseAdjustmentRecordU5BU5D_t4F120A507E14039BC63574D1815FF2E7B9D73911* L_0 = __this->____items;
		MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607 L_1 = ___0_item;
		int32_t L_2 = __this->____size;
		int32_t L_3;
		L_3 = Array_IndexOf_TisMarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607_mF844176DACF8302F4F662DCAC4D66EE3D79E4B51(L_0, L_1, 0, L_2, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 26));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_System_Collections_IList_IndexOf_mD4CC25B89F524B3D0697676044C240B80C1A44A8 (List_1_t8837CD02A40CED632406E449B6D76FF9AB3E4468* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit);
	{
		RuntimeObject* L_0 = ___0_item;
		CHECKED_LOCAL_INIT(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)),il2cpp_codegen_runtime_class_init_inline);
		bool L_1;
		L_1 = List_1_IsCompatibleObject_mF02CF0A90086FADDF391D08A99E844C15337772C(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 18));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_item;
		int32_t L_3;
		L_3 = List_1_IndexOf_m91AF7A4F8617158B04229C8F75C0E26E427DC888(__this, ((*(MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 17));
		return L_3;
	}

IL_0015:
	{
		return (-1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Insert_m33930B40B49F189B11CC8C4AD7BF1F241CEC9C5E (List_1_t8837CD02A40CED632406E449B6D76FF9AB3E4468* __this, int32_t ___0_index, MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607 ___1_item, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_0012;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F(((int32_t)13), ((int32_t)27), NULL);
	}

IL_0012:
	{
		int32_t L_2 = __this->____size;
		MarkToBaseAdjustmentRecordU5BU5D_t4F120A507E14039BC63574D1815FF2E7B9D73911* L_3 = __this->____items;
		int32_t L_4 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_3)->max_length),NULL));
		if ((!(((uint32_t)L_2) == ((uint32_t)L_4))))
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_5 = __this->____size;
		List_1_EnsureCapacity_mEECF97630862151EC7B9E4E78E54C8B6CD44CE1E(__this, ((int32_t)il2cpp_codegen_add(L_5, 1)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 12));
	}

IL_0030:
	{
		int32_t L_6 = ___0_index;
		int32_t L_7 = __this->____size;
		if ((((int32_t)L_6) >= ((int32_t)L_7)))
		{
			goto IL_0056;
		}
	}
	{
		MarkToBaseAdjustmentRecordU5BU5D_t4F120A507E14039BC63574D1815FF2E7B9D73911* L_8 = __this->____items;
		int32_t L_9 = ___0_index;
		MarkToBaseAdjustmentRecordU5BU5D_t4F120A507E14039BC63574D1815FF2E7B9D73911* L_10 = __this->____items;
		int32_t L_11 = ___0_index;
		int32_t L_12 = __this->____size;
		int32_t L_13 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_8, L_9, (RuntimeArray*)L_10, ((int32_t)il2cpp_codegen_add(L_11, 1)), ((int32_t)il2cpp_codegen_subtract(L_12, L_13)), NULL);
	}

IL_0056:
	{
		MarkToBaseAdjustmentRecordU5BU5D_t4F120A507E14039BC63574D1815FF2E7B9D73911* L_14 = __this->____items;
		int32_t L_15 = ___0_index;
		MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607 L_16 = ___1_item;
		(L_14)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_15), (MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607)L_16);
		int32_t L_17 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_17, 1));
		int32_t L_18 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_18, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_System_Collections_IList_Insert_mE924A309C3D5F5AC05F4BE1D4A536D0610CBFDC4 (List_1_t8837CD02A40CED632406E449B6D76FF9AB3E4468* __this, int32_t ___0_index, RuntimeObject* ___1_item, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(Type_t_StaticInit);
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = ___1_item;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisMarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607_m38A8E0DAA141B66DE625AFAC57A1CE80494454A6(L_0, ((int32_t)20), NULL);
	}
	try
	{
		int32_t L_1 = ___0_index;
		RuntimeObject* L_2 = ___1_item;
		List_1_Insert_m33930B40B49F189B11CC8C4AD7BF1F241CEC9C5E(__this, L_1, ((*(MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 27));
		goto IL_002a;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0017;
		}
		throw e;
	}

CATCH_0017:
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_3 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_4 = ___1_item;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 10)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
		ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_4, L_6, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_002a;
	}

IL_002a:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_InsertRange_m3D2ADCD47DA8085B1C4B73FC643FDD146CE30DC3 (List_1_t8837CD02A40CED632406E449B6D76FF9AB3E4468* __this, int32_t ___0_index, RuntimeObject* ___1_collection, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	RuntimeObject* V_2 = NULL;
	{
		RuntimeObject* L_0 = ___1_collection;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(6, NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___0_index;
		int32_t L_2 = __this->____size;
		if ((!(((uint32_t)L_1) > ((uint32_t)L_2))))
		{
			goto IL_0017;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRange_IndexException_mC7661B8C6DD827679C95FC6B6C08F8724174936D(NULL);
	}

IL_0017:
	{
		RuntimeObject* L_3 = ___1_collection;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_3, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2)));
		RuntimeObject* L_4 = V_0;
		if (!L_4)
		{
			goto IL_00bc;
		}
	}
	{
		RuntimeObject* L_5 = V_0;
		int32_t L_6;
		L_6 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_5);
		V_1 = L_6;
		int32_t L_7 = V_1;
		if ((((int32_t)L_7) <= ((int32_t)0)))
		{
			goto IL_00fb;
		}
	}
	{
		int32_t L_8 = __this->____size;
		int32_t L_9 = V_1;
		List_1_EnsureCapacity_mEECF97630862151EC7B9E4E78E54C8B6CD44CE1E(__this, ((int32_t)il2cpp_codegen_add(L_8, L_9)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 12));
		int32_t L_10 = ___0_index;
		int32_t L_11 = __this->____size;
		if ((((int32_t)L_10) >= ((int32_t)L_11)))
		{
			goto IL_0066;
		}
	}
	{
		MarkToBaseAdjustmentRecordU5BU5D_t4F120A507E14039BC63574D1815FF2E7B9D73911* L_12 = __this->____items;
		int32_t L_13 = ___0_index;
		MarkToBaseAdjustmentRecordU5BU5D_t4F120A507E14039BC63574D1815FF2E7B9D73911* L_14 = __this->____items;
		int32_t L_15 = ___0_index;
		int32_t L_16 = V_1;
		int32_t L_17 = __this->____size;
		int32_t L_18 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_12, L_13, (RuntimeArray*)L_14, ((int32_t)il2cpp_codegen_add(L_15, L_16)), ((int32_t)il2cpp_codegen_subtract(L_17, L_18)), NULL);
	}

IL_0066:
	{
		RuntimeObject* L_19 = V_0;
		if ((!(((RuntimeObject*)(List_1_t8837CD02A40CED632406E449B6D76FF9AB3E4468*)__this) == ((RuntimeObject*)(RuntimeObject*)L_19))))
		{
			goto IL_009f;
		}
	}
	{
		MarkToBaseAdjustmentRecordU5BU5D_t4F120A507E14039BC63574D1815FF2E7B9D73911* L_20 = __this->____items;
		MarkToBaseAdjustmentRecordU5BU5D_t4F120A507E14039BC63574D1815FF2E7B9D73911* L_21 = __this->____items;
		int32_t L_22 = ___0_index;
		int32_t L_23 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_20, 0, (RuntimeArray*)L_21, L_22, L_23, NULL);
		MarkToBaseAdjustmentRecordU5BU5D_t4F120A507E14039BC63574D1815FF2E7B9D73911* L_24 = __this->____items;
		int32_t L_25 = ___0_index;
		int32_t L_26 = V_1;
		MarkToBaseAdjustmentRecordU5BU5D_t4F120A507E14039BC63574D1815FF2E7B9D73911* L_27 = __this->____items;
		int32_t L_28 = ___0_index;
		int32_t L_29 = __this->____size;
		int32_t L_30 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_24, ((int32_t)il2cpp_codegen_add(L_25, L_26)), (RuntimeArray*)L_27, ((int32_t)il2cpp_codegen_multiply(L_28, 2)), ((int32_t)il2cpp_codegen_subtract(L_29, L_30)), NULL);
		goto IL_00ac;
	}

IL_009f:
	{
		RuntimeObject* L_31 = V_0;
		MarkToBaseAdjustmentRecordU5BU5D_t4F120A507E14039BC63574D1815FF2E7B9D73911* L_32 = __this->____items;
		int32_t L_33 = ___0_index;
		InterfaceActionInvoker2< MarkToBaseAdjustmentRecordU5BU5D_t4F120A507E14039BC63574D1815FF2E7B9D73911*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_31, L_32, L_33);
	}

IL_00ac:
	{
		int32_t L_34 = __this->____size;
		int32_t L_35 = V_1;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_34, L_35));
		goto IL_00fb;
	}

IL_00bc:
	{
		int32_t L_36 = ___0_index;
		int32_t L_37 = __this->____size;
		if ((((int32_t)L_36) >= ((int32_t)L_37)))
		{
			goto IL_00f4;
		}
	}
	{
		RuntimeObject* L_38 = ___1_collection;
		RuntimeObject* L_39;
		L_39 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 28), L_38);
		V_2 = L_39;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00ea:
			{
				{
					RuntimeObject* L_40 = V_2;
					if (!L_40)
					{
						goto IL_00f3;
					}
				}
				{
					RuntimeObject* L_41 = V_2;
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_41);
				}

IL_00f3:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_00e0_1;
			}

IL_00ce_1:
			{
				int32_t L_42 = ___0_index;
				int32_t L_43 = L_42;
				___0_index = ((int32_t)il2cpp_codegen_add(L_43, 1));
				RuntimeObject* L_44 = V_2;
				MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607 L_45;
				L_45 = InterfaceFuncInvoker0< MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607 >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 30), L_44);
				List_1_Insert_m33930B40B49F189B11CC8C4AD7BF1F241CEC9C5E(__this, L_43, L_45, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 27));
			}

IL_00e0_1:
			{
				RuntimeObject* L_46 = V_2;
				bool L_47;
				L_47 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_46);
				if (L_47)
				{
					goto IL_00ce_1;
				}
			}
			{
				goto IL_00fb;
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

IL_00f4:
	{
		RuntimeObject* L_48 = ___1_collection;
		List_1_AddEnumerable_m63117E55062699B6C56607E49B1902855F902765(__this, L_48, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 5));
	}

IL_00fb:
	{
		int32_t L_49 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_49, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_mE601E95FA154EB920C6EB4E1FC469866C677A0C8 (List_1_t8837CD02A40CED632406E449B6D76FF9AB3E4468* __this, MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607 ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607 L_0 = ___0_item;
		int32_t L_1;
		L_1 = List_1_IndexOf_m91AF7A4F8617158B04229C8F75C0E26E427DC888(__this, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 17));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		int32_t L_3 = V_0;
		List_1_RemoveAt_mD5837F88CA2CD54C4BE33C33132BFC98089BD5D7(__this, L_3, NULL);
		return (bool)1;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_System_Collections_IList_Remove_mFF3FC1E34BCA7646FD38771869B90E04EFD06F95 (List_1_t8837CD02A40CED632406E449B6D76FF9AB3E4468* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit);
	{
		RuntimeObject* L_0 = ___0_item;
		CHECKED_LOCAL_INIT(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)),il2cpp_codegen_runtime_class_init_inline);
		bool L_1;
		L_1 = List_1_IsCompatibleObject_mF02CF0A90086FADDF391D08A99E844C15337772C(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 18));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_item;
		bool L_3;
		L_3 = List_1_Remove_mE601E95FA154EB920C6EB4E1FC469866C677A0C8(__this, ((*(MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 33));
	}

IL_0015:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_RemoveAll_m7ADF9175D9AB5CDF2A736F970F1D38CEB2CBEFAC (List_1_t8837CD02A40CED632406E449B6D76FF9AB3E4468* __this, Predicate_1_t1A0605C87155DBCA6412C23F07D0AEBBDC65F25B* ___0_match, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Predicate_1_t1A0605C87155DBCA6412C23F07D0AEBBDC65F25B* L_0 = ___0_match;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(8, NULL);
	}

IL_0009:
	{
		V_0 = 0;
		goto IL_0011;
	}

IL_000d:
	{
		int32_t L_1 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_1, 1));
	}

IL_0011:
	{
		int32_t L_2 = V_0;
		int32_t L_3 = __this->____size;
		if ((((int32_t)L_2) >= ((int32_t)L_3)))
		{
			goto IL_002e;
		}
	}
	{
		Predicate_1_t1A0605C87155DBCA6412C23F07D0AEBBDC65F25B* L_4 = ___0_match;
		MarkToBaseAdjustmentRecordU5BU5D_t4F120A507E14039BC63574D1815FF2E7B9D73911* L_5 = __this->____items;
		int32_t L_6 = V_0;
		int32_t L_7 = L_6;
		MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607 L_8 = (L_5)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7));
		bool L_9;
		L_9 = Predicate_1_Invoke_m359A2A4F02AD08F4FD3E4714D4A018527704D814_inline(L_4, L_8, NULL);
		if (!L_9)
		{
			goto IL_000d;
		}
	}

IL_002e:
	{
		int32_t L_10 = V_0;
		int32_t L_11 = __this->____size;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_0039;
		}
	}
	{
		return 0;
	}

IL_0039:
	{
		int32_t L_12 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
		goto IL_0089;
	}

IL_003f:
	{
		int32_t L_13 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0043:
	{
		int32_t L_14 = V_1;
		int32_t L_15 = __this->____size;
		if ((((int32_t)L_14) >= ((int32_t)L_15)))
		{
			goto IL_0060;
		}
	}
	{
		Predicate_1_t1A0605C87155DBCA6412C23F07D0AEBBDC65F25B* L_16 = ___0_match;
		MarkToBaseAdjustmentRecordU5BU5D_t4F120A507E14039BC63574D1815FF2E7B9D73911* L_17 = __this->____items;
		int32_t L_18 = V_1;
		int32_t L_19 = L_18;
		MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607 L_20 = (L_17)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_19));
		bool L_21;
		L_21 = Predicate_1_Invoke_m359A2A4F02AD08F4FD3E4714D4A018527704D814_inline(L_16, L_20, NULL);
		if (L_21)
		{
			goto IL_003f;
		}
	}

IL_0060:
	{
		int32_t L_22 = V_1;
		int32_t L_23 = __this->____size;
		if ((((int32_t)L_22) >= ((int32_t)L_23)))
		{
			goto IL_0089;
		}
	}
	{
		MarkToBaseAdjustmentRecordU5BU5D_t4F120A507E14039BC63574D1815FF2E7B9D73911* L_24 = __this->____items;
		int32_t L_25 = V_0;
		int32_t L_26 = L_25;
		V_0 = ((int32_t)il2cpp_codegen_add(L_26, 1));
		MarkToBaseAdjustmentRecordU5BU5D_t4F120A507E14039BC63574D1815FF2E7B9D73911* L_27 = __this->____items;
		int32_t L_28 = V_1;
		int32_t L_29 = L_28;
		V_1 = ((int32_t)il2cpp_codegen_add(L_29, 1));
		int32_t L_30 = L_29;
		MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607 L_31 = (L_27)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_30));
		(L_24)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_26), (MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607)L_31);
	}

IL_0089:
	{
		int32_t L_32 = V_1;
		int32_t L_33 = __this->____size;
		if ((((int32_t)L_32) < ((int32_t)L_33)))
		{
			goto IL_0043;
		}
	}
	{
		goto IL_00ad;
	}

IL_00ad:
	{
		int32_t L_34 = __this->____size;
		int32_t L_35 = V_0;
		int32_t L_36 = V_0;
		__this->____size = L_36;
		int32_t L_37 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_37, 1));
		return ((int32_t)il2cpp_codegen_subtract(L_34, L_35));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_mD5837F88CA2CD54C4BE33C33132BFC98089BD5D7 (List_1_t8837CD02A40CED632406E449B6D76FF9AB3E4468* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRange_IndexException_mC7661B8C6DD827679C95FC6B6C08F8724174936D(NULL);
	}

IL_000e:
	{
		int32_t L_2 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_2, 1));
		int32_t L_3 = ___0_index;
		int32_t L_4 = __this->____size;
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_0042;
		}
	}
	{
		MarkToBaseAdjustmentRecordU5BU5D_t4F120A507E14039BC63574D1815FF2E7B9D73911* L_5 = __this->____items;
		int32_t L_6 = ___0_index;
		MarkToBaseAdjustmentRecordU5BU5D_t4F120A507E14039BC63574D1815FF2E7B9D73911* L_7 = __this->____items;
		int32_t L_8 = ___0_index;
		int32_t L_9 = __this->____size;
		int32_t L_10 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, ((int32_t)il2cpp_codegen_add(L_6, 1)), (RuntimeArray*)L_7, L_8, ((int32_t)il2cpp_codegen_subtract(L_9, L_10)), NULL);
	}

IL_0042:
	{
		goto IL_0063;
	}

IL_0063:
	{
		int32_t L_11 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_11, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveRange_m08048319F0B9BFAD3228E8A30306027D8FDCEBF3 (List_1_t8837CD02A40CED632406E449B6D76FF9AB3E4468* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_count;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F(((int32_t)16), 4, NULL);
	}

IL_0015:
	{
		int32_t L_2 = __this->____size;
		int32_t L_3 = ___0_index;
		int32_t L_4 = ___1_count;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_2, L_3))) >= ((int32_t)L_4)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(((int32_t)23), NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_count;
		if ((((int32_t)L_5) <= ((int32_t)0)))
		{
			goto IL_008d;
		}
	}
	{
		int32_t L_6 = __this->____size;
		int32_t L_7 = __this->____size;
		int32_t L_8 = ___1_count;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_7, L_8));
		int32_t L_9 = ___0_index;
		int32_t L_10 = __this->____size;
		if ((((int32_t)L_9) >= ((int32_t)L_10)))
		{
			goto IL_0066;
		}
	}
	{
		MarkToBaseAdjustmentRecordU5BU5D_t4F120A507E14039BC63574D1815FF2E7B9D73911* L_11 = __this->____items;
		int32_t L_12 = ___0_index;
		int32_t L_13 = ___1_count;
		MarkToBaseAdjustmentRecordU5BU5D_t4F120A507E14039BC63574D1815FF2E7B9D73911* L_14 = __this->____items;
		int32_t L_15 = ___0_index;
		int32_t L_16 = __this->____size;
		int32_t L_17 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_11, ((int32_t)il2cpp_codegen_add(L_12, L_13)), (RuntimeArray*)L_14, L_15, ((int32_t)il2cpp_codegen_subtract(L_16, L_17)), NULL);
	}

IL_0066:
	{
		int32_t L_18 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_18, 1));
		goto IL_008d;
	}

IL_008d:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Reverse_m4C814BF5486C52C33C8CB088DCBEE1E92E9CFA42 (List_1_t8837CD02A40CED632406E449B6D76FF9AB3E4468* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = List_1_get_Count_mC4819D6F7667DFF1413FC11A20B5640FE7BDCA33_inline(__this, NULL);
		List_1_Reverse_m2210C2F03B49CB361FF9AB83F945ADFE0AED86C2(__this, 0, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 35));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Reverse_m2210C2F03B49CB361FF9AB83F945ADFE0AED86C2 (List_1_t8837CD02A40CED632406E449B6D76FF9AB3E4468* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_count;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F(((int32_t)16), 4, NULL);
	}

IL_0015:
	{
		int32_t L_2 = __this->____size;
		int32_t L_3 = ___0_index;
		int32_t L_4 = ___1_count;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_2, L_3))) >= ((int32_t)L_4)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(((int32_t)23), NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_count;
		if ((((int32_t)L_5) <= ((int32_t)1)))
		{
			goto IL_0038;
		}
	}
	{
		MarkToBaseAdjustmentRecordU5BU5D_t4F120A507E14039BC63574D1815FF2E7B9D73911* L_6 = __this->____items;
		int32_t L_7 = ___0_index;
		int32_t L_8 = ___1_count;
		Array_Reverse_TisMarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607_m5F132BE6F494AFBA9EC2B18CC710487E5A11DA69(L_6, L_7, L_8, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 36));
	}

IL_0038:
	{
		int32_t L_9 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_9, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_m71669EF8C9B1A2D0EA145ADC4D36EE01385636C5 (List_1_t8837CD02A40CED632406E449B6D76FF9AB3E4468* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = List_1_get_Count_mC4819D6F7667DFF1413FC11A20B5640FE7BDCA33_inline(__this, NULL);
		RuntimeObject* L_1 = ___0_comparer;
		List_1_Sort_m62378EB9C2B757BDD9EF803A3ACAEA524F139D95(__this, 0, L_0, L_1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 37));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_m62378EB9C2B757BDD9EF803A3ACAEA524F139D95 (List_1_t8837CD02A40CED632406E449B6D76FF9AB3E4468* __this, int32_t ___0_index, int32_t ___1_count, RuntimeObject* ___2_comparer, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_count;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F(((int32_t)16), 4, NULL);
	}

IL_0015:
	{
		int32_t L_2 = __this->____size;
		int32_t L_3 = ___0_index;
		int32_t L_4 = ___1_count;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_2, L_3))) >= ((int32_t)L_4)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(((int32_t)23), NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_count;
		if ((((int32_t)L_5) <= ((int32_t)1)))
		{
			goto IL_0039;
		}
	}
	{
		MarkToBaseAdjustmentRecordU5BU5D_t4F120A507E14039BC63574D1815FF2E7B9D73911* L_6 = __this->____items;
		int32_t L_7 = ___0_index;
		int32_t L_8 = ___1_count;
		RuntimeObject* L_9 = ___2_comparer;
		Array_Sort_TisMarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607_m03A3DE5602EC6D91154F9CC065212AF1F2D030AB(L_6, L_7, L_8, L_9, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 38));
	}

IL_0039:
	{
		int32_t L_10 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_10, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_mD17ACC36C05D704788078683F0099630C8C80401 (List_1_t8837CD02A40CED632406E449B6D76FF9AB3E4468* __this, Comparison_1_tBF85733D18400A902C910AD0E30BDB26192F0E9B* ___0_comparison, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(ArraySortHelper_1_t0B69B36E8E1F97490E6BE32C23AE1784AB1ADA3A_StaticInit);
	{
		Comparison_1_tBF85733D18400A902C910AD0E30BDB26192F0E9B* L_0 = ___0_comparison;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(((int32_t)34), NULL);
	}

IL_000a:
	{
		int32_t L_1 = __this->____size;
		if ((((int32_t)L_1) <= ((int32_t)1)))
		{
			goto IL_0026;
		}
	}
	{
		MarkToBaseAdjustmentRecordU5BU5D_t4F120A507E14039BC63574D1815FF2E7B9D73911* L_2 = __this->____items;
		int32_t L_3 = __this->____size;
		Comparison_1_tBF85733D18400A902C910AD0E30BDB26192F0E9B* L_4 = ___0_comparison;
		CHECKED_LOCAL_INIT(ArraySortHelper_1_t0B69B36E8E1F97490E6BE32C23AE1784AB1ADA3A_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 40)),il2cpp_codegen_runtime_class_init_inline);
		ArraySortHelper_1_Sort_mDDAF1B2F4F29BCF90F0DF811BDAA3975C943D5CD(L_2, 0, L_3, L_4, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 39));
	}

IL_0026:
	{
		int32_t L_5 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_5, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MarkToBaseAdjustmentRecordU5BU5D_t4F120A507E14039BC63574D1815FF2E7B9D73911* List_1_ToArray_mA82F19BAF8B7501A8C18C14889001166681E3E3F (List_1_t8837CD02A40CED632406E449B6D76FF9AB3E4468* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit);
	MarkToBaseAdjustmentRecordU5BU5D_t4F120A507E14039BC63574D1815FF2E7B9D73911* V_0 = NULL;
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		CHECKED_LOCAL_INIT(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)),il2cpp_codegen_runtime_class_init_inline);
		MarkToBaseAdjustmentRecordU5BU5D_t4F120A507E14039BC63574D1815FF2E7B9D73911* L_1 = ((List_1_t8837CD02A40CED632406E449B6D76FF9AB3E4468_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)))->___s_emptyArray;
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____size;
		MarkToBaseAdjustmentRecordU5BU5D_t4F120A507E14039BC63574D1815FF2E7B9D73911* L_3 = (MarkToBaseAdjustmentRecordU5BU5D_t4F120A507E14039BC63574D1815FF2E7B9D73911*)(MarkToBaseAdjustmentRecordU5BU5D_t4F120A507E14039BC63574D1815FF2E7B9D73911*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1), (uint32_t)L_2);
		V_0 = L_3;
		MarkToBaseAdjustmentRecordU5BU5D_t4F120A507E14039BC63574D1815FF2E7B9D73911* L_4 = __this->____items;
		MarkToBaseAdjustmentRecordU5BU5D_t4F120A507E14039BC63574D1815FF2E7B9D73911* L_5 = V_0;
		int32_t L_6 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_4, 0, (RuntimeArray*)L_5, 0, L_6, NULL);
		MarkToBaseAdjustmentRecordU5BU5D_t4F120A507E14039BC63574D1815FF2E7B9D73911* L_7 = V_0;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddEnumerable_m63117E55062699B6C56607E49B1902855F902765 (List_1_t8837CD02A40CED632406E449B6D76FF9AB3E4468* __this, RuntimeObject* ___0_enumerable, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		RuntimeObject* L_1 = ___0_enumerable;
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 28), L_1);
		V_0 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0063:
			{
				{
					RuntimeObject* L_3 = V_0;
					if (!L_3)
					{
						goto IL_006c;
					}
				}
				{
					RuntimeObject* L_4 = V_0;
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_4);
				}

IL_006c:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_0059_1;
			}

IL_0017_1:
			{
				RuntimeObject* L_5 = V_0;
				MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607 L_6;
				L_6 = InterfaceFuncInvoker0< MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607 >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 30), L_5);
				V_1 = L_6;
				int32_t L_7 = __this->____size;
				MarkToBaseAdjustmentRecordU5BU5D_t4F120A507E14039BC63574D1815FF2E7B9D73911* L_8 = __this->____items;
				int32_t L_9 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_8)->max_length),NULL));
				if ((!(((uint32_t)L_7) == ((uint32_t)L_9))))
				{
					goto IL_003c_1;
				}
			}
			{
				int32_t L_10 = __this->____size;
				List_1_EnsureCapacity_mEECF97630862151EC7B9E4E78E54C8B6CD44CE1E(__this, ((int32_t)il2cpp_codegen_add(L_10, 1)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 12));
			}

IL_003c_1:
			{
				MarkToBaseAdjustmentRecordU5BU5D_t4F120A507E14039BC63574D1815FF2E7B9D73911* L_11 = __this->____items;
				int32_t L_12 = __this->____size;
				V_2 = L_12;
				int32_t L_13 = V_2;
				__this->____size = ((int32_t)il2cpp_codegen_add(L_13, 1));
				int32_t L_14 = V_2;
				MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607 L_15 = V_1;
				(L_11)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_14), (MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607)L_15);
			}

IL_0059_1:
			{
				RuntimeObject* L_16 = V_0;
				bool L_17;
				L_17 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_16);
				if (L_17)
				{
					goto IL_0017_1;
				}
			}
			{
				goto IL_006d;
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

IL_006d:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__cctor_mA874FA977C6A4A4D632D73FFAF5BDB5BAF9692B8 (const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	{
		MarkToBaseAdjustmentRecordU5BU5D_t4F120A507E14039BC63574D1815FF2E7B9D73911* L_0 = (MarkToBaseAdjustmentRecordU5BU5D_t4F120A507E14039BC63574D1815FF2E7B9D73911*)(MarkToBaseAdjustmentRecordU5BU5D_t4F120A507E14039BC63574D1815FF2E7B9D73911*)SZArrayNew(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1), (uint32_t)0);
		((List_1_t8837CD02A40CED632406E449B6D76FF9AB3E4468_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___s_emptyArray = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((List_1_t8837CD02A40CED632406E449B6D76FF9AB3E4468_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___s_emptyArray), (void*)L_0);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mEAE811076D57AF685FD731F10D795AD274DF2853 (List_1_tF7A39AE542CF9A5C63B48726F173FA38571D52C3* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit);
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		CHECKED_LOCAL_INIT(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)),il2cpp_codegen_runtime_class_init_inline);
		MarkToMarkAdjustmentRecordU5BU5D_t09E9394A7451C53E2DD62ACB4FD0CF5F52159061* L_0 = ((List_1_tF7A39AE542CF9A5C63B48726F173FA38571D52C3_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)))->___s_emptyArray;
		__this->____items = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m405BC4E121522B84E7199ED7504085C421AEBAC9 (List_1_tF7A39AE542CF9A5C63B48726F173FA38571D52C3* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit);
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0012;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F(((int32_t)12), 4, NULL);
	}

IL_0012:
	{
		int32_t L_1 = ___0_capacity;
		if (L_1)
		{
			goto IL_0021;
		}
	}
	{
		CHECKED_LOCAL_INIT(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)),il2cpp_codegen_runtime_class_init_inline);
		MarkToMarkAdjustmentRecordU5BU5D_t09E9394A7451C53E2DD62ACB4FD0CF5F52159061* L_2 = ((List_1_tF7A39AE542CF9A5C63B48726F173FA38571D52C3_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)))->___s_emptyArray;
		__this->____items = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_2);
		return;
	}

IL_0021:
	{
		int32_t L_3 = ___0_capacity;
		MarkToMarkAdjustmentRecordU5BU5D_t09E9394A7451C53E2DD62ACB4FD0CF5F52159061* L_4 = (MarkToMarkAdjustmentRecordU5BU5D_t09E9394A7451C53E2DD62ACB4FD0CF5F52159061*)(MarkToMarkAdjustmentRecordU5BU5D_t09E9394A7451C53E2DD62ACB4FD0CF5F52159061*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1), (uint32_t)L_3);
		__this->____items = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_4);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7BAE7DCA392FD54FDF3336EAA1DE51F460CD879D (List_1_tF7A39AE542CF9A5C63B48726F173FA38571D52C3* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit);
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_collection;
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(6, NULL);
	}

IL_000f:
	{
		RuntimeObject* L_1 = ___0_collection;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_1, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2)));
		RuntimeObject* L_2 = V_0;
		if (!L_2)
		{
			goto IL_0050;
		}
	}
	{
		RuntimeObject* L_3 = V_0;
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_3);
		V_1 = L_4;
		int32_t L_5 = V_1;
		if (L_5)
		{
			goto IL_002f;
		}
	}
	{
		CHECKED_LOCAL_INIT(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)),il2cpp_codegen_runtime_class_init_inline);
		MarkToMarkAdjustmentRecordU5BU5D_t09E9394A7451C53E2DD62ACB4FD0CF5F52159061* L_6 = ((List_1_tF7A39AE542CF9A5C63B48726F173FA38571D52C3_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)))->___s_emptyArray;
		__this->____items = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_6);
		return;
	}

IL_002f:
	{
		int32_t L_7 = V_1;
		MarkToMarkAdjustmentRecordU5BU5D_t09E9394A7451C53E2DD62ACB4FD0CF5F52159061* L_8 = (MarkToMarkAdjustmentRecordU5BU5D_t09E9394A7451C53E2DD62ACB4FD0CF5F52159061*)(MarkToMarkAdjustmentRecordU5BU5D_t09E9394A7451C53E2DD62ACB4FD0CF5F52159061*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1), (uint32_t)L_7);
		__this->____items = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_8);
		RuntimeObject* L_9 = V_0;
		MarkToMarkAdjustmentRecordU5BU5D_t09E9394A7451C53E2DD62ACB4FD0CF5F52159061* L_10 = __this->____items;
		InterfaceActionInvoker2< MarkToMarkAdjustmentRecordU5BU5D_t09E9394A7451C53E2DD62ACB4FD0CF5F52159061*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_9, L_10, 0);
		int32_t L_11 = V_1;
		__this->____size = L_11;
		return;
	}

IL_0050:
	{
		__this->____size = 0;
		CHECKED_LOCAL_INIT(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)),il2cpp_codegen_runtime_class_init_inline);
		MarkToMarkAdjustmentRecordU5BU5D_t09E9394A7451C53E2DD62ACB4FD0CF5F52159061* L_12 = ((List_1_tF7A39AE542CF9A5C63B48726F173FA38571D52C3_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)))->___s_emptyArray;
		__this->____items = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_12);
		RuntimeObject* L_13 = ___0_collection;
		List_1_AddEnumerable_m1792A159A9E41312885AC11F79A4BA366CA60973(__this, L_13, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 5));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Capacity_m19659A6F69DA9520FCEE03356BC92A0FEB711AF9 (List_1_tF7A39AE542CF9A5C63B48726F173FA38571D52C3* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit);
	MarkToMarkAdjustmentRecordU5BU5D_t09E9394A7451C53E2DD62ACB4FD0CF5F52159061* V_0 = NULL;
	{
		int32_t L_0 = ___0_value;
		int32_t L_1 = __this->____size;
		if ((((int32_t)L_0) >= ((int32_t)L_1)))
		{
			goto IL_0012;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F(((int32_t)15), ((int32_t)21), NULL);
	}

IL_0012:
	{
		int32_t L_2 = ___0_value;
		MarkToMarkAdjustmentRecordU5BU5D_t09E9394A7451C53E2DD62ACB4FD0CF5F52159061* L_3 = __this->____items;
		int32_t L_4 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_3)->max_length),NULL));
		if ((((int32_t)L_2) == ((int32_t)L_4)))
		{
			goto IL_0058;
		}
	}
	{
		int32_t L_5 = ___0_value;
		if ((((int32_t)L_5) <= ((int32_t)0)))
		{
			goto IL_004d;
		}
	}
	{
		int32_t L_6 = ___0_value;
		MarkToMarkAdjustmentRecordU5BU5D_t09E9394A7451C53E2DD62ACB4FD0CF5F52159061* L_7 = (MarkToMarkAdjustmentRecordU5BU5D_t09E9394A7451C53E2DD62ACB4FD0CF5F52159061*)(MarkToMarkAdjustmentRecordU5BU5D_t09E9394A7451C53E2DD62ACB4FD0CF5F52159061*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1), (uint32_t)L_6);
		V_0 = L_7;
		int32_t L_8 = __this->____size;
		if ((((int32_t)L_8) <= ((int32_t)0)))
		{
			goto IL_0045;
		}
	}
	{
		MarkToMarkAdjustmentRecordU5BU5D_t09E9394A7451C53E2DD62ACB4FD0CF5F52159061* L_9 = __this->____items;
		MarkToMarkAdjustmentRecordU5BU5D_t09E9394A7451C53E2DD62ACB4FD0CF5F52159061* L_10 = V_0;
		int32_t L_11 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_9, 0, (RuntimeArray*)L_10, 0, L_11, NULL);
	}

IL_0045:
	{
		MarkToMarkAdjustmentRecordU5BU5D_t09E9394A7451C53E2DD62ACB4FD0CF5F52159061* L_12 = V_0;
		__this->____items = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_12);
		return;
	}

IL_004d:
	{
		CHECKED_LOCAL_INIT(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)),il2cpp_codegen_runtime_class_init_inline);
		MarkToMarkAdjustmentRecordU5BU5D_t09E9394A7451C53E2DD62ACB4FD0CF5F52159061* L_13 = ((List_1_tF7A39AE542CF9A5C63B48726F173FA38571D52C3_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)))->___s_emptyArray;
		__this->____items = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_13);
	}

IL_0058:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MarkToMarkAdjustmentRecord_tD53618A3728435D5C904857DAC644EE27640807C List_1_get_Item_m932D436636A921BDBD8ACE9807AF92FC93878C41 (List_1_tF7A39AE542CF9A5C63B48726F173FA38571D52C3* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRange_IndexException_mC7661B8C6DD827679C95FC6B6C08F8724174936D(NULL);
	}

IL_000e:
	{
		MarkToMarkAdjustmentRecordU5BU5D_t09E9394A7451C53E2DD62ACB4FD0CF5F52159061* L_2 = __this->____items;
		int32_t L_3 = ___0_index;
		int32_t L_4 = L_3;
		MarkToMarkAdjustmentRecord_tD53618A3728435D5C904857DAC644EE27640807C L_5 = (L_2)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_m97E71B2566ADDC1686FD241A1C7BB080644E9DC1 (List_1_tF7A39AE542CF9A5C63B48726F173FA38571D52C3* __this, int32_t ___0_index, MarkToMarkAdjustmentRecord_tD53618A3728435D5C904857DAC644EE27640807C ___1_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRange_IndexException_mC7661B8C6DD827679C95FC6B6C08F8724174936D(NULL);
	}

IL_000e:
	{
		MarkToMarkAdjustmentRecordU5BU5D_t09E9394A7451C53E2DD62ACB4FD0CF5F52159061* L_2 = __this->____items;
		int32_t L_3 = ___0_index;
		MarkToMarkAdjustmentRecord_tD53618A3728435D5C904857DAC644EE27640807C L_4 = ___1_value;
		(L_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3), (MarkToMarkAdjustmentRecord_tD53618A3728435D5C904857DAC644EE27640807C)L_4);
		int32_t L_5 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_5, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_IsCompatibleObject_m35042AC0220DAD6E6C7F40929ABD234E1980E44F (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	MarkToMarkAdjustmentRecord_tD53618A3728435D5C904857DAC644EE27640807C V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6))))
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(MarkToMarkAdjustmentRecord_tD53618A3728435D5C904857DAC644EE27640807C));
		MarkToMarkAdjustmentRecord_tD53618A3728435D5C904857DAC644EE27640807C L_2 = V_0;
		return false;
	}

IL_001d:
	{
		return (bool)0;
	}

IL_001f:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_System_Collections_IList_get_Item_m8FB6C6EBEAA2D2CC12CA82B89E23DBDE2E23DA14 (List_1_tF7A39AE542CF9A5C63B48726F173FA38571D52C3* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		MarkToMarkAdjustmentRecord_tD53618A3728435D5C904857DAC644EE27640807C L_1;
		L_1 = List_1_get_Item_m932D436636A921BDBD8ACE9807AF92FC93878C41(__this, L_0, NULL);
		MarkToMarkAdjustmentRecord_tD53618A3728435D5C904857DAC644EE27640807C L_2 = L_1;
		RuntimeObject* L_3 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6), &L_2);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_System_Collections_IList_set_Item_m37524AB028E4D6B85CC1C0A56AA995BD5E957775 (List_1_tF7A39AE542CF9A5C63B48726F173FA38571D52C3* __this, int32_t ___0_index, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(Type_t_StaticInit);
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = ___1_value;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisMarkToMarkAdjustmentRecord_tD53618A3728435D5C904857DAC644EE27640807C_mBA2AE448CF35E3B49B08412574DC88B5DA2EC5DD(L_0, ((int32_t)15), NULL);
	}
	try
	{
		int32_t L_1 = ___0_index;
		RuntimeObject* L_2 = ___1_value;
		List_1_set_Item_m97E71B2566ADDC1686FD241A1C7BB080644E9DC1(__this, L_1, ((*(MarkToMarkAdjustmentRecord_tD53618A3728435D5C904857DAC644EE27640807C*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6)))), NULL);
		goto IL_002a;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0017;
		}
		throw e;
	}

CATCH_0017:
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_3 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_4 = ___1_value;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 10)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
		ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_4, L_6, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_002a;
	}

IL_002a:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_m75222C9F0ABBFD176919C42A8981E0D32682DF96 (List_1_tF7A39AE542CF9A5C63B48726F173FA38571D52C3* __this, MarkToMarkAdjustmentRecord_tD53618A3728435D5C904857DAC644EE27640807C ___0_item, const RuntimeMethod* method) 
{
	MarkToMarkAdjustmentRecordU5BU5D_t09E9394A7451C53E2DD62ACB4FD0CF5F52159061* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		MarkToMarkAdjustmentRecordU5BU5D_t09E9394A7451C53E2DD62ACB4FD0CF5F52159061* L_1 = __this->____items;
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		V_1 = L_2;
		int32_t L_3 = V_1;
		MarkToMarkAdjustmentRecordU5BU5D_t09E9394A7451C53E2DD62ACB4FD0CF5F52159061* L_4 = V_0;
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		if ((!(((uint32_t)L_3) < ((uint32_t)L_5))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_6 = V_1;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_6, 1));
		MarkToMarkAdjustmentRecordU5BU5D_t09E9394A7451C53E2DD62ACB4FD0CF5F52159061* L_7 = V_0;
		int32_t L_8 = V_1;
		MarkToMarkAdjustmentRecord_tD53618A3728435D5C904857DAC644EE27640807C L_9 = ___0_item;
		(L_7)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_8), (MarkToMarkAdjustmentRecord_tD53618A3728435D5C904857DAC644EE27640807C)L_9);
		return;
	}

IL_0034:
	{
		MarkToMarkAdjustmentRecord_tD53618A3728435D5C904857DAC644EE27640807C L_10 = ___0_item;
		List_1_AddWithResize_m74BC4D9B052F89D90F161E7CCE09374362B7B3E5(__this, L_10, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 11));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_m74BC4D9B052F89D90F161E7CCE09374362B7B3E5 (List_1_tF7A39AE542CF9A5C63B48726F173FA38571D52C3* __this, MarkToMarkAdjustmentRecord_tD53618A3728435D5C904857DAC644EE27640807C ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____size;
		V_0 = L_0;
		int32_t L_1 = V_0;
		List_1_EnsureCapacity_m0BED530C57A0199BD38419764632C782B7B8788D(__this, ((int32_t)il2cpp_codegen_add(L_1, 1)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 12));
		int32_t L_2 = V_0;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_2, 1));
		MarkToMarkAdjustmentRecordU5BU5D_t09E9394A7451C53E2DD62ACB4FD0CF5F52159061* L_3 = __this->____items;
		int32_t L_4 = V_0;
		MarkToMarkAdjustmentRecord_tD53618A3728435D5C904857DAC644EE27640807C L_5 = ___0_item;
		(L_3)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4), (MarkToMarkAdjustmentRecord_tD53618A3728435D5C904857DAC644EE27640807C)L_5);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_System_Collections_IList_Add_m331D760EDD7B84F96B0A63F554C71644C355DA5D (List_1_tF7A39AE542CF9A5C63B48726F173FA38571D52C3* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(Type_t_StaticInit);
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = ___0_item;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisMarkToMarkAdjustmentRecord_tD53618A3728435D5C904857DAC644EE27640807C_mBA2AE448CF35E3B49B08412574DC88B5DA2EC5DD(L_0, ((int32_t)20), NULL);
	}
	try
	{
		RuntimeObject* L_1 = ___0_item;
		List_1_Add_m75222C9F0ABBFD176919C42A8981E0D32682DF96_inline(__this, ((*(MarkToMarkAdjustmentRecord_tD53618A3728435D5C904857DAC644EE27640807C*)UnBox(L_1, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		goto IL_0029;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0016;
		}
		throw e;
	}

CATCH_0016:
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_2 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_3 = ___0_item;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_4 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 10)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_5;
		L_5 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_4, NULL);
		ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_3, L_5, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0029;
	}

IL_0029:
	{
		int32_t L_6;
		L_6 = List_1_get_Count_m01942BBB98465E950439A0527283B299554A6703_inline(__this, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_6, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddRange_mD72BC0864C55AB469236E03A33FE62BA7D4412DC (List_1_tF7A39AE542CF9A5C63B48726F173FA38571D52C3* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		RuntimeObject* L_1 = ___0_collection;
		List_1_InsertRange_mF2C2D40C93777B7D4FF3808877EC2E36A4FB0677(__this, L_0, L_1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 15));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_m961A7FB9CA987C68BE479A013CC96A011E0F3B47 (List_1_tF7A39AE542CF9A5C63B48726F173FA38571D52C3* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		goto IL_0035;
	}

IL_0035:
	{
		__this->____size = 0;
	}

IL_003c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_m5E465C45A35DD0723F62EA2DC070BA98F09BAA9B (List_1_tF7A39AE542CF9A5C63B48726F173FA38571D52C3* __this, MarkToMarkAdjustmentRecord_tD53618A3728435D5C904857DAC644EE27640807C ___0_item, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		MarkToMarkAdjustmentRecord_tD53618A3728435D5C904857DAC644EE27640807C L_1 = ___0_item;
		int32_t L_2;
		L_2 = List_1_IndexOf_m2650D61FE0B4C47251D5ECA998DF5082E6BB63C7(__this, L_1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 17));
		return (bool)((((int32_t)((((int32_t)L_2) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0016:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_System_Collections_IList_Contains_m2CF646492B0695F3CB0D278886377A14476531DE (List_1_tF7A39AE542CF9A5C63B48726F173FA38571D52C3* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit);
	{
		RuntimeObject* L_0 = ___0_item;
		CHECKED_LOCAL_INIT(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)),il2cpp_codegen_runtime_class_init_inline);
		bool L_1;
		L_1 = List_1_IsCompatibleObject_m35042AC0220DAD6E6C7F40929ABD234E1980E44F(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 18));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_item;
		bool L_3;
		L_3 = List_1_Contains_m5E465C45A35DD0723F62EA2DC070BA98F09BAA9B(__this, ((*(MarkToMarkAdjustmentRecord_tD53618A3728435D5C904857DAC644EE27640807C*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 19));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_CopyTo_m6F7FA078D4EAA6F219353BF8BA717973FD49F023 (List_1_tF7A39AE542CF9A5C63B48726F173FA38571D52C3* __this, MarkToMarkAdjustmentRecordU5BU5D_t09E9394A7451C53E2DD62ACB4FD0CF5F52159061* ___0_array, const RuntimeMethod* method) 
{
	{
		MarkToMarkAdjustmentRecordU5BU5D_t09E9394A7451C53E2DD62ACB4FD0CF5F52159061* L_0 = ___0_array;
		List_1_CopyTo_m730982F38A6AFFDCA1B26279BDC30FEBA9F3198D(__this, L_0, 0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_EnsureCapacity_m0BED530C57A0199BD38419764632C782B7B8788D (List_1_tF7A39AE542CF9A5C63B48726F173FA38571D52C3* __this, int32_t ___0_min, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t G_B4_0 = 0;
	{
		MarkToMarkAdjustmentRecordU5BU5D_t09E9394A7451C53E2DD62ACB4FD0CF5F52159061* L_0 = __this->____items;
		int32_t L_1 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_0)->max_length),NULL));
		int32_t L_2 = ___0_min;
		if ((((int32_t)L_1) >= ((int32_t)L_2)))
		{
			goto IL_003d;
		}
	}
	{
		MarkToMarkAdjustmentRecordU5BU5D_t09E9394A7451C53E2DD62ACB4FD0CF5F52159061* L_3 = __this->____items;
		if (!(((RuntimeArray*)L_3)->max_length))
		{
			goto IL_0020;
		}
	}
	{
		MarkToMarkAdjustmentRecordU5BU5D_t09E9394A7451C53E2DD62ACB4FD0CF5F52159061* L_4 = __this->____items;
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		G_B4_0 = ((int32_t)il2cpp_codegen_multiply(L_5, 2));
		goto IL_0021;
	}

IL_0020:
	{
		G_B4_0 = 4;
	}

IL_0021:
	{
		V_0 = G_B4_0;
		int32_t L_6 = V_0;
		if ((!(((uint32_t)L_6) > ((uint32_t)((int32_t)2146435071)))))
		{
			goto IL_0030;
		}
	}
	{
		V_0 = ((int32_t)2146435071);
	}

IL_0030:
	{
		int32_t L_7 = V_0;
		int32_t L_8 = ___0_min;
		if ((((int32_t)L_7) >= ((int32_t)L_8)))
		{
			goto IL_0036;
		}
	}
	{
		int32_t L_9 = ___0_min;
		V_0 = L_9;
	}

IL_0036:
	{
		int32_t L_10 = V_0;
		List_1_set_Capacity_m19659A6F69DA9520FCEE03356BC92A0FEB711AF9(__this, L_10, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 21));
	}

IL_003d:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_ForEach_mCC0B0EAC40E8AEBDF69E91810F501104697E49A8 (List_1_tF7A39AE542CF9A5C63B48726F173FA38571D52C3* __this, Action_1_t1AC3D5C3F81C6F9B1B32157D44B18D2F3098FF66* ___0_action, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Action_1_t1AC3D5C3F81C6F9B1B32157D44B18D2F3098FF66* L_0 = ___0_action;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(((int32_t)33), NULL);
	}

IL_000a:
	{
		int32_t L_1 = __this->____version;
		V_0 = L_1;
		V_1 = 0;
		goto IL_0034;
	}

IL_0015:
	{
		int32_t L_2 = V_0;
		int32_t L_3 = __this->____version;
		if ((!(((uint32_t)L_2) == ((uint32_t)L_3))))
		{
			goto IL_003d;
		}
	}
	{
		Action_1_t1AC3D5C3F81C6F9B1B32157D44B18D2F3098FF66* L_4 = ___0_action;
		MarkToMarkAdjustmentRecordU5BU5D_t09E9394A7451C53E2DD62ACB4FD0CF5F52159061* L_5 = __this->____items;
		int32_t L_6 = V_1;
		int32_t L_7 = L_6;
		MarkToMarkAdjustmentRecord_tD53618A3728435D5C904857DAC644EE27640807C L_8 = (L_5)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7));
		Action_1_Invoke_m537A457F9B2C719DF77C61359F8A566DCF3186AD_inline(L_4, L_8, NULL);
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0034:
	{
		int32_t L_10 = V_1;
		int32_t L_11 = __this->____size;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_0015;
		}
	}

IL_003d:
	{
		int32_t L_12 = V_0;
		int32_t L_13 = __this->____version;
		if ((((int32_t)L_12) == ((int32_t)L_13)))
		{
			goto IL_004b;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_InvalidOperation_EnumFailedVersion_m5331E2E0EC0E36843D53F439C2529530595ACE9F(NULL);
	}

IL_004b:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t41A770DBA333774F33A9D3A1CECAEF383E2E0653 List_1_GetEnumerator_mFEDC719FAF62A48667DEFE74D3272428B2DD6634 (List_1_tF7A39AE542CF9A5C63B48726F173FA38571D52C3* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t41A770DBA333774F33A9D3A1CECAEF383E2E0653 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m53B2769EE2681F58CAE05386D05820D3A34A65D3((&L_0), __this, NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_mB4FFB6B1A4697D14341CB022FA14CDD35CBFE553 (List_1_tF7A39AE542CF9A5C63B48726F173FA38571D52C3* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t41A770DBA333774F33A9D3A1CECAEF383E2E0653 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m53B2769EE2681F58CAE05386D05820D3A34A65D3((&L_0), __this, NULL);
		Enumerator_t41A770DBA333774F33A9D3A1CECAEF383E2E0653 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 23), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_System_Collections_IEnumerable_GetEnumerator_mC65FADA7B391074E4C224EEDE886B7C33647E47A (List_1_tF7A39AE542CF9A5C63B48726F173FA38571D52C3* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t41A770DBA333774F33A9D3A1CECAEF383E2E0653 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m53B2769EE2681F58CAE05386D05820D3A34A65D3((&L_0), __this, NULL);
		Enumerator_t41A770DBA333774F33A9D3A1CECAEF383E2E0653 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 23), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tF7A39AE542CF9A5C63B48726F173FA38571D52C3* List_1_GetRange_mE60BAE3E321403B59A7E7093F3D93F6DE0F3959C (List_1_tF7A39AE542CF9A5C63B48726F173FA38571D52C3* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method) 
{
	List_1_tF7A39AE542CF9A5C63B48726F173FA38571D52C3* V_0 = NULL;
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_count;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F(((int32_t)16), 4, NULL);
	}

IL_0015:
	{
		int32_t L_2 = __this->____size;
		int32_t L_3 = ___0_index;
		int32_t L_4 = ___1_count;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_2, L_3))) >= ((int32_t)L_4)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(((int32_t)23), NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_count;
		List_1_tF7A39AE542CF9A5C63B48726F173FA38571D52C3* L_6 = (List_1_tF7A39AE542CF9A5C63B48726F173FA38571D52C3*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0));
		List_1__ctor_m405BC4E121522B84E7199ED7504085C421AEBAC9(L_6, L_5, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 25));
		V_0 = L_6;
		MarkToMarkAdjustmentRecordU5BU5D_t09E9394A7451C53E2DD62ACB4FD0CF5F52159061* L_7 = __this->____items;
		int32_t L_8 = ___0_index;
		List_1_tF7A39AE542CF9A5C63B48726F173FA38571D52C3* L_9 = V_0;
		MarkToMarkAdjustmentRecordU5BU5D_t09E9394A7451C53E2DD62ACB4FD0CF5F52159061* L_10 = L_9->____items;
		int32_t L_11 = ___1_count;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_7, L_8, (RuntimeArray*)L_10, 0, L_11, NULL);
		List_1_tF7A39AE542CF9A5C63B48726F173FA38571D52C3* L_12 = V_0;
		int32_t L_13 = ___1_count;
		L_12->____size = L_13;
		List_1_tF7A39AE542CF9A5C63B48726F173FA38571D52C3* L_14 = V_0;
		return L_14;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_IndexOf_m2650D61FE0B4C47251D5ECA998DF5082E6BB63C7 (List_1_tF7A39AE542CF9A5C63B48726F173FA38571D52C3* __this, MarkToMarkAdjustmentRecord_tD53618A3728435D5C904857DAC644EE27640807C ___0_item, const RuntimeMethod* method) 
{
	{
		MarkToMarkAdjustmentRecordU5BU5D_t09E9394A7451C53E2DD62ACB4FD0CF5F52159061* L_0 = __this->____items;
		MarkToMarkAdjustmentRecord_tD53618A3728435D5C904857DAC644EE27640807C L_1 = ___0_item;
		int32_t L_2 = __this->____size;
		int32_t L_3;
		L_3 = Array_IndexOf_TisMarkToMarkAdjustmentRecord_tD53618A3728435D5C904857DAC644EE27640807C_m89740D2C402B3FC2D500885E14C0E3FAAB6C9887(L_0, L_1, 0, L_2, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 26));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_System_Collections_IList_IndexOf_mC5D35D8A1EF11E6365631C4C569178378A654BD3 (List_1_tF7A39AE542CF9A5C63B48726F173FA38571D52C3* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit);
	{
		RuntimeObject* L_0 = ___0_item;
		CHECKED_LOCAL_INIT(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)),il2cpp_codegen_runtime_class_init_inline);
		bool L_1;
		L_1 = List_1_IsCompatibleObject_m35042AC0220DAD6E6C7F40929ABD234E1980E44F(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 18));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_item;
		int32_t L_3;
		L_3 = List_1_IndexOf_m2650D61FE0B4C47251D5ECA998DF5082E6BB63C7(__this, ((*(MarkToMarkAdjustmentRecord_tD53618A3728435D5C904857DAC644EE27640807C*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 17));
		return L_3;
	}

IL_0015:
	{
		return (-1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Insert_m568F190A867458AB8951F8386764E79D23305E1D (List_1_tF7A39AE542CF9A5C63B48726F173FA38571D52C3* __this, int32_t ___0_index, MarkToMarkAdjustmentRecord_tD53618A3728435D5C904857DAC644EE27640807C ___1_item, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_0012;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F(((int32_t)13), ((int32_t)27), NULL);
	}

IL_0012:
	{
		int32_t L_2 = __this->____size;
		MarkToMarkAdjustmentRecordU5BU5D_t09E9394A7451C53E2DD62ACB4FD0CF5F52159061* L_3 = __this->____items;
		int32_t L_4 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_3)->max_length),NULL));
		if ((!(((uint32_t)L_2) == ((uint32_t)L_4))))
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_5 = __this->____size;
		List_1_EnsureCapacity_m0BED530C57A0199BD38419764632C782B7B8788D(__this, ((int32_t)il2cpp_codegen_add(L_5, 1)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 12));
	}

IL_0030:
	{
		int32_t L_6 = ___0_index;
		int32_t L_7 = __this->____size;
		if ((((int32_t)L_6) >= ((int32_t)L_7)))
		{
			goto IL_0056;
		}
	}
	{
		MarkToMarkAdjustmentRecordU5BU5D_t09E9394A7451C53E2DD62ACB4FD0CF5F52159061* L_8 = __this->____items;
		int32_t L_9 = ___0_index;
		MarkToMarkAdjustmentRecordU5BU5D_t09E9394A7451C53E2DD62ACB4FD0CF5F52159061* L_10 = __this->____items;
		int32_t L_11 = ___0_index;
		int32_t L_12 = __this->____size;
		int32_t L_13 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_8, L_9, (RuntimeArray*)L_10, ((int32_t)il2cpp_codegen_add(L_11, 1)), ((int32_t)il2cpp_codegen_subtract(L_12, L_13)), NULL);
	}

IL_0056:
	{
		MarkToMarkAdjustmentRecordU5BU5D_t09E9394A7451C53E2DD62ACB4FD0CF5F52159061* L_14 = __this->____items;
		int32_t L_15 = ___0_index;
		MarkToMarkAdjustmentRecord_tD53618A3728435D5C904857DAC644EE27640807C L_16 = ___1_item;
		(L_14)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_15), (MarkToMarkAdjustmentRecord_tD53618A3728435D5C904857DAC644EE27640807C)L_16);
		int32_t L_17 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_17, 1));
		int32_t L_18 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_18, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_System_Collections_IList_Insert_mE4D4F99840982289DCDB8257DEB3081615F3EF47 (List_1_tF7A39AE542CF9A5C63B48726F173FA38571D52C3* __this, int32_t ___0_index, RuntimeObject* ___1_item, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(Type_t_StaticInit);
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = ___1_item;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisMarkToMarkAdjustmentRecord_tD53618A3728435D5C904857DAC644EE27640807C_mBA2AE448CF35E3B49B08412574DC88B5DA2EC5DD(L_0, ((int32_t)20), NULL);
	}
	try
	{
		int32_t L_1 = ___0_index;
		RuntimeObject* L_2 = ___1_item;
		List_1_Insert_m568F190A867458AB8951F8386764E79D23305E1D(__this, L_1, ((*(MarkToMarkAdjustmentRecord_tD53618A3728435D5C904857DAC644EE27640807C*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 27));
		goto IL_002a;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0017;
		}
		throw e;
	}

CATCH_0017:
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_3 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_4 = ___1_item;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 10)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
		ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_4, L_6, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_002a;
	}

IL_002a:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_InsertRange_mF2C2D40C93777B7D4FF3808877EC2E36A4FB0677 (List_1_tF7A39AE542CF9A5C63B48726F173FA38571D52C3* __this, int32_t ___0_index, RuntimeObject* ___1_collection, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	RuntimeObject* V_2 = NULL;
	{
		RuntimeObject* L_0 = ___1_collection;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(6, NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___0_index;
		int32_t L_2 = __this->____size;
		if ((!(((uint32_t)L_1) > ((uint32_t)L_2))))
		{
			goto IL_0017;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRange_IndexException_mC7661B8C6DD827679C95FC6B6C08F8724174936D(NULL);
	}

IL_0017:
	{
		RuntimeObject* L_3 = ___1_collection;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_3, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2)));
		RuntimeObject* L_4 = V_0;
		if (!L_4)
		{
			goto IL_00bc;
		}
	}
	{
		RuntimeObject* L_5 = V_0;
		int32_t L_6;
		L_6 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_5);
		V_1 = L_6;
		int32_t L_7 = V_1;
		if ((((int32_t)L_7) <= ((int32_t)0)))
		{
			goto IL_00fb;
		}
	}
	{
		int32_t L_8 = __this->____size;
		int32_t L_9 = V_1;
		List_1_EnsureCapacity_m0BED530C57A0199BD38419764632C782B7B8788D(__this, ((int32_t)il2cpp_codegen_add(L_8, L_9)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 12));
		int32_t L_10 = ___0_index;
		int32_t L_11 = __this->____size;
		if ((((int32_t)L_10) >= ((int32_t)L_11)))
		{
			goto IL_0066;
		}
	}
	{
		MarkToMarkAdjustmentRecordU5BU5D_t09E9394A7451C53E2DD62ACB4FD0CF5F52159061* L_12 = __this->____items;
		int32_t L_13 = ___0_index;
		MarkToMarkAdjustmentRecordU5BU5D_t09E9394A7451C53E2DD62ACB4FD0CF5F52159061* L_14 = __this->____items;
		int32_t L_15 = ___0_index;
		int32_t L_16 = V_1;
		int32_t L_17 = __this->____size;
		int32_t L_18 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_12, L_13, (RuntimeArray*)L_14, ((int32_t)il2cpp_codegen_add(L_15, L_16)), ((int32_t)il2cpp_codegen_subtract(L_17, L_18)), NULL);
	}

IL_0066:
	{
		RuntimeObject* L_19 = V_0;
		if ((!(((RuntimeObject*)(List_1_tF7A39AE542CF9A5C63B48726F173FA38571D52C3*)__this) == ((RuntimeObject*)(RuntimeObject*)L_19))))
		{
			goto IL_009f;
		}
	}
	{
		MarkToMarkAdjustmentRecordU5BU5D_t09E9394A7451C53E2DD62ACB4FD0CF5F52159061* L_20 = __this->____items;
		MarkToMarkAdjustmentRecordU5BU5D_t09E9394A7451C53E2DD62ACB4FD0CF5F52159061* L_21 = __this->____items;
		int32_t L_22 = ___0_index;
		int32_t L_23 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_20, 0, (RuntimeArray*)L_21, L_22, L_23, NULL);
		MarkToMarkAdjustmentRecordU5BU5D_t09E9394A7451C53E2DD62ACB4FD0CF5F52159061* L_24 = __this->____items;
		int32_t L_25 = ___0_index;
		int32_t L_26 = V_1;
		MarkToMarkAdjustmentRecordU5BU5D_t09E9394A7451C53E2DD62ACB4FD0CF5F52159061* L_27 = __this->____items;
		int32_t L_28 = ___0_index;
		int32_t L_29 = __this->____size;
		int32_t L_30 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_24, ((int32_t)il2cpp_codegen_add(L_25, L_26)), (RuntimeArray*)L_27, ((int32_t)il2cpp_codegen_multiply(L_28, 2)), ((int32_t)il2cpp_codegen_subtract(L_29, L_30)), NULL);
		goto IL_00ac;
	}

IL_009f:
	{
		RuntimeObject* L_31 = V_0;
		MarkToMarkAdjustmentRecordU5BU5D_t09E9394A7451C53E2DD62ACB4FD0CF5F52159061* L_32 = __this->____items;
		int32_t L_33 = ___0_index;
		InterfaceActionInvoker2< MarkToMarkAdjustmentRecordU5BU5D_t09E9394A7451C53E2DD62ACB4FD0CF5F52159061*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_31, L_32, L_33);
	}

IL_00ac:
	{
		int32_t L_34 = __this->____size;
		int32_t L_35 = V_1;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_34, L_35));
		goto IL_00fb;
	}

IL_00bc:
	{
		int32_t L_36 = ___0_index;
		int32_t L_37 = __this->____size;
		if ((((int32_t)L_36) >= ((int32_t)L_37)))
		{
			goto IL_00f4;
		}
	}
	{
		RuntimeObject* L_38 = ___1_collection;
		RuntimeObject* L_39;
		L_39 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 28), L_38);
		V_2 = L_39;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00ea:
			{
				{
					RuntimeObject* L_40 = V_2;
					if (!L_40)
					{
						goto IL_00f3;
					}
				}
				{
					RuntimeObject* L_41 = V_2;
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_41);
				}

IL_00f3:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_00e0_1;
			}

IL_00ce_1:
			{
				int32_t L_42 = ___0_index;
				int32_t L_43 = L_42;
				___0_index = ((int32_t)il2cpp_codegen_add(L_43, 1));
				RuntimeObject* L_44 = V_2;
				MarkToMarkAdjustmentRecord_tD53618A3728435D5C904857DAC644EE27640807C L_45;
				L_45 = InterfaceFuncInvoker0< MarkToMarkAdjustmentRecord_tD53618A3728435D5C904857DAC644EE27640807C >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 30), L_44);
				List_1_Insert_m568F190A867458AB8951F8386764E79D23305E1D(__this, L_43, L_45, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 27));
			}

IL_00e0_1:
			{
				RuntimeObject* L_46 = V_2;
				bool L_47;
				L_47 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_46);
				if (L_47)
				{
					goto IL_00ce_1;
				}
			}
			{
				goto IL_00fb;
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

IL_00f4:
	{
		RuntimeObject* L_48 = ___1_collection;
		List_1_AddEnumerable_m1792A159A9E41312885AC11F79A4BA366CA60973(__this, L_48, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 5));
	}

IL_00fb:
	{
		int32_t L_49 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_49, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m9CAF01E89B3B7CA037242D8919802B85F0B73BC8 (List_1_tF7A39AE542CF9A5C63B48726F173FA38571D52C3* __this, MarkToMarkAdjustmentRecord_tD53618A3728435D5C904857DAC644EE27640807C ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		MarkToMarkAdjustmentRecord_tD53618A3728435D5C904857DAC644EE27640807C L_0 = ___0_item;
		int32_t L_1;
		L_1 = List_1_IndexOf_m2650D61FE0B4C47251D5ECA998DF5082E6BB63C7(__this, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 17));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		int32_t L_3 = V_0;
		List_1_RemoveAt_m898FB697A104F82CA9BEA7EA6969BFFE48231F7B(__this, L_3, NULL);
		return (bool)1;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_System_Collections_IList_Remove_mA4CEC0B38369CDF39125C5EF72FA9957B182342E (List_1_tF7A39AE542CF9A5C63B48726F173FA38571D52C3* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit);
	{
		RuntimeObject* L_0 = ___0_item;
		CHECKED_LOCAL_INIT(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)),il2cpp_codegen_runtime_class_init_inline);
		bool L_1;
		L_1 = List_1_IsCompatibleObject_m35042AC0220DAD6E6C7F40929ABD234E1980E44F(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 18));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_item;
		bool L_3;
		L_3 = List_1_Remove_m9CAF01E89B3B7CA037242D8919802B85F0B73BC8(__this, ((*(MarkToMarkAdjustmentRecord_tD53618A3728435D5C904857DAC644EE27640807C*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 33));
	}

IL_0015:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_RemoveAll_m7D0CA2E3315821D8C904E2D6CAAA013128695536 (List_1_tF7A39AE542CF9A5C63B48726F173FA38571D52C3* __this, Predicate_1_t86696A7752B102AFC6ED1D86EE72BB4CD74918CF* ___0_match, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Predicate_1_t86696A7752B102AFC6ED1D86EE72BB4CD74918CF* L_0 = ___0_match;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(8, NULL);
	}

IL_0009:
	{
		V_0 = 0;
		goto IL_0011;
	}

IL_000d:
	{
		int32_t L_1 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_1, 1));
	}

IL_0011:
	{
		int32_t L_2 = V_0;
		int32_t L_3 = __this->____size;
		if ((((int32_t)L_2) >= ((int32_t)L_3)))
		{
			goto IL_002e;
		}
	}
	{
		Predicate_1_t86696A7752B102AFC6ED1D86EE72BB4CD74918CF* L_4 = ___0_match;
		MarkToMarkAdjustmentRecordU5BU5D_t09E9394A7451C53E2DD62ACB4FD0CF5F52159061* L_5 = __this->____items;
		int32_t L_6 = V_0;
		int32_t L_7 = L_6;
		MarkToMarkAdjustmentRecord_tD53618A3728435D5C904857DAC644EE27640807C L_8 = (L_5)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7));
		bool L_9;
		L_9 = Predicate_1_Invoke_m59DD28C260255EA76ACBDE643536314F9BF372F7_inline(L_4, L_8, NULL);
		if (!L_9)
		{
			goto IL_000d;
		}
	}

IL_002e:
	{
		int32_t L_10 = V_0;
		int32_t L_11 = __this->____size;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_0039;
		}
	}
	{
		return 0;
	}

IL_0039:
	{
		int32_t L_12 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
		goto IL_0089;
	}

IL_003f:
	{
		int32_t L_13 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0043:
	{
		int32_t L_14 = V_1;
		int32_t L_15 = __this->____size;
		if ((((int32_t)L_14) >= ((int32_t)L_15)))
		{
			goto IL_0060;
		}
	}
	{
		Predicate_1_t86696A7752B102AFC6ED1D86EE72BB4CD74918CF* L_16 = ___0_match;
		MarkToMarkAdjustmentRecordU5BU5D_t09E9394A7451C53E2DD62ACB4FD0CF5F52159061* L_17 = __this->____items;
		int32_t L_18 = V_1;
		int32_t L_19 = L_18;
		MarkToMarkAdjustmentRecord_tD53618A3728435D5C904857DAC644EE27640807C L_20 = (L_17)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_19));
		bool L_21;
		L_21 = Predicate_1_Invoke_m59DD28C260255EA76ACBDE643536314F9BF372F7_inline(L_16, L_20, NULL);
		if (L_21)
		{
			goto IL_003f;
		}
	}

IL_0060:
	{
		int32_t L_22 = V_1;
		int32_t L_23 = __this->____size;
		if ((((int32_t)L_22) >= ((int32_t)L_23)))
		{
			goto IL_0089;
		}
	}
	{
		MarkToMarkAdjustmentRecordU5BU5D_t09E9394A7451C53E2DD62ACB4FD0CF5F52159061* L_24 = __this->____items;
		int32_t L_25 = V_0;
		int32_t L_26 = L_25;
		V_0 = ((int32_t)il2cpp_codegen_add(L_26, 1));
		MarkToMarkAdjustmentRecordU5BU5D_t09E9394A7451C53E2DD62ACB4FD0CF5F52159061* L_27 = __this->____items;
		int32_t L_28 = V_1;
		int32_t L_29 = L_28;
		V_1 = ((int32_t)il2cpp_codegen_add(L_29, 1));
		int32_t L_30 = L_29;
		MarkToMarkAdjustmentRecord_tD53618A3728435D5C904857DAC644EE27640807C L_31 = (L_27)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_30));
		(L_24)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_26), (MarkToMarkAdjustmentRecord_tD53618A3728435D5C904857DAC644EE27640807C)L_31);
	}

IL_0089:
	{
		int32_t L_32 = V_1;
		int32_t L_33 = __this->____size;
		if ((((int32_t)L_32) < ((int32_t)L_33)))
		{
			goto IL_0043;
		}
	}
	{
		goto IL_00ad;
	}

IL_00ad:
	{
		int32_t L_34 = __this->____size;
		int32_t L_35 = V_0;
		int32_t L_36 = V_0;
		__this->____size = L_36;
		int32_t L_37 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_37, 1));
		return ((int32_t)il2cpp_codegen_subtract(L_34, L_35));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_m898FB697A104F82CA9BEA7EA6969BFFE48231F7B (List_1_tF7A39AE542CF9A5C63B48726F173FA38571D52C3* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	MarkToMarkAdjustmentRecord_tD53618A3728435D5C904857DAC644EE27640807C V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRange_IndexException_mC7661B8C6DD827679C95FC6B6C08F8724174936D(NULL);
	}

IL_000e:
	{
		int32_t L_2 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_2, 1));
		int32_t L_3 = ___0_index;
		int32_t L_4 = __this->____size;
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_0042;
		}
	}
	{
		MarkToMarkAdjustmentRecordU5BU5D_t09E9394A7451C53E2DD62ACB4FD0CF5F52159061* L_5 = __this->____items;
		int32_t L_6 = ___0_index;
		MarkToMarkAdjustmentRecordU5BU5D_t09E9394A7451C53E2DD62ACB4FD0CF5F52159061* L_7 = __this->____items;
		int32_t L_8 = ___0_index;
		int32_t L_9 = __this->____size;
		int32_t L_10 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, ((int32_t)il2cpp_codegen_add(L_6, 1)), (RuntimeArray*)L_7, L_8, ((int32_t)il2cpp_codegen_subtract(L_9, L_10)), NULL);
	}

IL_0042:
	{
		goto IL_0063;
	}

IL_0063:
	{
		int32_t L_11 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_11, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveRange_m3C4613296341C53E8B4B07D8560E76F739CB9A3F (List_1_tF7A39AE542CF9A5C63B48726F173FA38571D52C3* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_count;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F(((int32_t)16), 4, NULL);
	}

IL_0015:
	{
		int32_t L_2 = __this->____size;
		int32_t L_3 = ___0_index;
		int32_t L_4 = ___1_count;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_2, L_3))) >= ((int32_t)L_4)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(((int32_t)23), NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_count;
		if ((((int32_t)L_5) <= ((int32_t)0)))
		{
			goto IL_008d;
		}
	}
	{
		int32_t L_6 = __this->____size;
		int32_t L_7 = __this->____size;
		int32_t L_8 = ___1_count;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_7, L_8));
		int32_t L_9 = ___0_index;
		int32_t L_10 = __this->____size;
		if ((((int32_t)L_9) >= ((int32_t)L_10)))
		{
			goto IL_0066;
		}
	}
	{
		MarkToMarkAdjustmentRecordU5BU5D_t09E9394A7451C53E2DD62ACB4FD0CF5F52159061* L_11 = __this->____items;
		int32_t L_12 = ___0_index;
		int32_t L_13 = ___1_count;
		MarkToMarkAdjustmentRecordU5BU5D_t09E9394A7451C53E2DD62ACB4FD0CF5F52159061* L_14 = __this->____items;
		int32_t L_15 = ___0_index;
		int32_t L_16 = __this->____size;
		int32_t L_17 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_11, ((int32_t)il2cpp_codegen_add(L_12, L_13)), (RuntimeArray*)L_14, L_15, ((int32_t)il2cpp_codegen_subtract(L_16, L_17)), NULL);
	}

IL_0066:
	{
		int32_t L_18 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_18, 1));
		goto IL_008d;
	}

IL_008d:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Reverse_mB51CD4400D976D328F218A71D48FDC627E2FD86F (List_1_tF7A39AE542CF9A5C63B48726F173FA38571D52C3* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = List_1_get_Count_m01942BBB98465E950439A0527283B299554A6703_inline(__this, NULL);
		List_1_Reverse_m596E134CCD33A7370EEA1A3B973883BC7E551A44(__this, 0, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 35));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Reverse_m596E134CCD33A7370EEA1A3B973883BC7E551A44 (List_1_tF7A39AE542CF9A5C63B48726F173FA38571D52C3* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_count;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F(((int32_t)16), 4, NULL);
	}

IL_0015:
	{
		int32_t L_2 = __this->____size;
		int32_t L_3 = ___0_index;
		int32_t L_4 = ___1_count;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_2, L_3))) >= ((int32_t)L_4)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(((int32_t)23), NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_count;
		if ((((int32_t)L_5) <= ((int32_t)1)))
		{
			goto IL_0038;
		}
	}
	{
		MarkToMarkAdjustmentRecordU5BU5D_t09E9394A7451C53E2DD62ACB4FD0CF5F52159061* L_6 = __this->____items;
		int32_t L_7 = ___0_index;
		int32_t L_8 = ___1_count;
		Array_Reverse_TisMarkToMarkAdjustmentRecord_tD53618A3728435D5C904857DAC644EE27640807C_m304D980C6E0E898F064E5E311E048D6D9BC97CE2(L_6, L_7, L_8, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 36));
	}

IL_0038:
	{
		int32_t L_9 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_9, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_m7FC7FA2245B4C7A5D3F681F1DAFFD8A1BF06EFBC (List_1_tF7A39AE542CF9A5C63B48726F173FA38571D52C3* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = List_1_get_Count_m01942BBB98465E950439A0527283B299554A6703_inline(__this, NULL);
		RuntimeObject* L_1 = ___0_comparer;
		List_1_Sort_m4232D966ED26A2B54F6DA4EFB7DD7F4F44B360F4(__this, 0, L_0, L_1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 37));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_m4232D966ED26A2B54F6DA4EFB7DD7F4F44B360F4 (List_1_tF7A39AE542CF9A5C63B48726F173FA38571D52C3* __this, int32_t ___0_index, int32_t ___1_count, RuntimeObject* ___2_comparer, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_count;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F(((int32_t)16), 4, NULL);
	}

IL_0015:
	{
		int32_t L_2 = __this->____size;
		int32_t L_3 = ___0_index;
		int32_t L_4 = ___1_count;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_2, L_3))) >= ((int32_t)L_4)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(((int32_t)23), NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_count;
		if ((((int32_t)L_5) <= ((int32_t)1)))
		{
			goto IL_0039;
		}
	}
	{
		MarkToMarkAdjustmentRecordU5BU5D_t09E9394A7451C53E2DD62ACB4FD0CF5F52159061* L_6 = __this->____items;
		int32_t L_7 = ___0_index;
		int32_t L_8 = ___1_count;
		RuntimeObject* L_9 = ___2_comparer;
		Array_Sort_TisMarkToMarkAdjustmentRecord_tD53618A3728435D5C904857DAC644EE27640807C_m0AC86D4BEE4B93C5DBC9514E2EBEF3B3528B4A07(L_6, L_7, L_8, L_9, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 38));
	}

IL_0039:
	{
		int32_t L_10 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_10, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_m7728857CBABFCDEEE4D3B9D155DF6DCCB6BFAAD0 (List_1_tF7A39AE542CF9A5C63B48726F173FA38571D52C3* __this, Comparison_1_t739F3AE6EBC2BD5F3A9FF0FE425BBA1EDE2AF7B3* ___0_comparison, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(ArraySortHelper_1_t0B69B36E8E1F97490E6BE32C23AE1784AB1ADA3A_StaticInit);
	{
		Comparison_1_t739F3AE6EBC2BD5F3A9FF0FE425BBA1EDE2AF7B3* L_0 = ___0_comparison;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(((int32_t)34), NULL);
	}

IL_000a:
	{
		int32_t L_1 = __this->____size;
		if ((((int32_t)L_1) <= ((int32_t)1)))
		{
			goto IL_0026;
		}
	}
	{
		MarkToMarkAdjustmentRecordU5BU5D_t09E9394A7451C53E2DD62ACB4FD0CF5F52159061* L_2 = __this->____items;
		int32_t L_3 = __this->____size;
		Comparison_1_t739F3AE6EBC2BD5F3A9FF0FE425BBA1EDE2AF7B3* L_4 = ___0_comparison;
		CHECKED_LOCAL_INIT(ArraySortHelper_1_t0B69B36E8E1F97490E6BE32C23AE1784AB1ADA3A_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 40)),il2cpp_codegen_runtime_class_init_inline);
		ArraySortHelper_1_Sort_mB5065982019B3A53460EA6201CDA10F11387D6EF(L_2, 0, L_3, L_4, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 39));
	}

IL_0026:
	{
		int32_t L_5 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_5, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MarkToMarkAdjustmentRecordU5BU5D_t09E9394A7451C53E2DD62ACB4FD0CF5F52159061* List_1_ToArray_mAEE16972820EAAD7D8CBF6470E39C78D00162007 (List_1_tF7A39AE542CF9A5C63B48726F173FA38571D52C3* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit);
	MarkToMarkAdjustmentRecordU5BU5D_t09E9394A7451C53E2DD62ACB4FD0CF5F52159061* V_0 = NULL;
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		CHECKED_LOCAL_INIT(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)),il2cpp_codegen_runtime_class_init_inline);
		MarkToMarkAdjustmentRecordU5BU5D_t09E9394A7451C53E2DD62ACB4FD0CF5F52159061* L_1 = ((List_1_tF7A39AE542CF9A5C63B48726F173FA38571D52C3_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)))->___s_emptyArray;
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____size;
		MarkToMarkAdjustmentRecordU5BU5D_t09E9394A7451C53E2DD62ACB4FD0CF5F52159061* L_3 = (MarkToMarkAdjustmentRecordU5BU5D_t09E9394A7451C53E2DD62ACB4FD0CF5F52159061*)(MarkToMarkAdjustmentRecordU5BU5D_t09E9394A7451C53E2DD62ACB4FD0CF5F52159061*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1), (uint32_t)L_2);
		V_0 = L_3;
		MarkToMarkAdjustmentRecordU5BU5D_t09E9394A7451C53E2DD62ACB4FD0CF5F52159061* L_4 = __this->____items;
		MarkToMarkAdjustmentRecordU5BU5D_t09E9394A7451C53E2DD62ACB4FD0CF5F52159061* L_5 = V_0;
		int32_t L_6 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_4, 0, (RuntimeArray*)L_5, 0, L_6, NULL);
		MarkToMarkAdjustmentRecordU5BU5D_t09E9394A7451C53E2DD62ACB4FD0CF5F52159061* L_7 = V_0;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddEnumerable_m1792A159A9E41312885AC11F79A4BA366CA60973 (List_1_tF7A39AE542CF9A5C63B48726F173FA38571D52C3* __this, RuntimeObject* ___0_enumerable, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	MarkToMarkAdjustmentRecord_tD53618A3728435D5C904857DAC644EE27640807C V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		RuntimeObject* L_1 = ___0_enumerable;
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 28), L_1);
		V_0 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0063:
			{
				{
					RuntimeObject* L_3 = V_0;
					if (!L_3)
					{
						goto IL_006c;
					}
				}
				{
					RuntimeObject* L_4 = V_0;
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_4);
				}

IL_006c:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_0059_1;
			}

IL_0017_1:
			{
				RuntimeObject* L_5 = V_0;
				MarkToMarkAdjustmentRecord_tD53618A3728435D5C904857DAC644EE27640807C L_6;
				L_6 = InterfaceFuncInvoker0< MarkToMarkAdjustmentRecord_tD53618A3728435D5C904857DAC644EE27640807C >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 30), L_5);
				V_1 = L_6;
				int32_t L_7 = __this->____size;
				MarkToMarkAdjustmentRecordU5BU5D_t09E9394A7451C53E2DD62ACB4FD0CF5F52159061* L_8 = __this->____items;
				int32_t L_9 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_8)->max_length),NULL));
				if ((!(((uint32_t)L_7) == ((uint32_t)L_9))))
				{
					goto IL_003c_1;
				}
			}
			{
				int32_t L_10 = __this->____size;
				List_1_EnsureCapacity_m0BED530C57A0199BD38419764632C782B7B8788D(__this, ((int32_t)il2cpp_codegen_add(L_10, 1)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 12));
			}

IL_003c_1:
			{
				MarkToMarkAdjustmentRecordU5BU5D_t09E9394A7451C53E2DD62ACB4FD0CF5F52159061* L_11 = __this->____items;
				int32_t L_12 = __this->____size;
				V_2 = L_12;
				int32_t L_13 = V_2;
				__this->____size = ((int32_t)il2cpp_codegen_add(L_13, 1));
				int32_t L_14 = V_2;
				MarkToMarkAdjustmentRecord_tD53618A3728435D5C904857DAC644EE27640807C L_15 = V_1;
				(L_11)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_14), (MarkToMarkAdjustmentRecord_tD53618A3728435D5C904857DAC644EE27640807C)L_15);
			}

IL_0059_1:
			{
				RuntimeObject* L_16 = V_0;
				bool L_17;
				L_17 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_16);
				if (L_17)
				{
					goto IL_0017_1;
				}
			}
			{
				goto IL_006d;
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

IL_006d:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__cctor_m1F7DE26DDB4C639FBC3A11325379C5F85A9B0D44 (const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	{
		MarkToMarkAdjustmentRecordU5BU5D_t09E9394A7451C53E2DD62ACB4FD0CF5F52159061* L_0 = (MarkToMarkAdjustmentRecordU5BU5D_t09E9394A7451C53E2DD62ACB4FD0CF5F52159061*)(MarkToMarkAdjustmentRecordU5BU5D_t09E9394A7451C53E2DD62ACB4FD0CF5F52159061*)SZArrayNew(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1), (uint32_t)0);
		((List_1_tF7A39AE542CF9A5C63B48726F173FA38571D52C3_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___s_emptyArray = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((List_1_tF7A39AE542CF9A5C63B48726F173FA38571D52C3_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___s_emptyArray), (void*)L_0);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F24766F7E9CCEDEDF5776732579FDFA0BADB4D0 (List_1_tC99D7D75F0197EF8D9C0B56B71A1B77C6B6C8AC6* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit);
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		CHECKED_LOCAL_INIT(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)),il2cpp_codegen_runtime_class_init_inline);
		MeshInfoBindingsU5BU5D_tAB8E8C31A391A18DE5B83869CC7C3C43DA40C641* L_0 = ((List_1_tC99D7D75F0197EF8D9C0B56B71A1B77C6B6C8AC6_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)))->___s_emptyArray;
		__this->____items = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mDDF6BDDDC562B198F4A175C8725F492617AD2B73 (List_1_tC99D7D75F0197EF8D9C0B56B71A1B77C6B6C8AC6* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit);
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0012;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F(((int32_t)12), 4, NULL);
	}

IL_0012:
	{
		int32_t L_1 = ___0_capacity;
		if (L_1)
		{
			goto IL_0021;
		}
	}
	{
		CHECKED_LOCAL_INIT(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)),il2cpp_codegen_runtime_class_init_inline);
		MeshInfoBindingsU5BU5D_tAB8E8C31A391A18DE5B83869CC7C3C43DA40C641* L_2 = ((List_1_tC99D7D75F0197EF8D9C0B56B71A1B77C6B6C8AC6_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)))->___s_emptyArray;
		__this->____items = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_2);
		return;
	}

IL_0021:
	{
		int32_t L_3 = ___0_capacity;
		MeshInfoBindingsU5BU5D_tAB8E8C31A391A18DE5B83869CC7C3C43DA40C641* L_4 = (MeshInfoBindingsU5BU5D_tAB8E8C31A391A18DE5B83869CC7C3C43DA40C641*)(MeshInfoBindingsU5BU5D_tAB8E8C31A391A18DE5B83869CC7C3C43DA40C641*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1), (uint32_t)L_3);
		__this->____items = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_4);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m791AFFE8CD7C647822CF6947088706765506DD0A (List_1_tC99D7D75F0197EF8D9C0B56B71A1B77C6B6C8AC6* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit);
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_collection;
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(6, NULL);
	}

IL_000f:
	{
		RuntimeObject* L_1 = ___0_collection;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_1, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2)));
		RuntimeObject* L_2 = V_0;
		if (!L_2)
		{
			goto IL_0050;
		}
	}
	{
		RuntimeObject* L_3 = V_0;
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_3);
		V_1 = L_4;
		int32_t L_5 = V_1;
		if (L_5)
		{
			goto IL_002f;
		}
	}
	{
		CHECKED_LOCAL_INIT(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)),il2cpp_codegen_runtime_class_init_inline);
		MeshInfoBindingsU5BU5D_tAB8E8C31A391A18DE5B83869CC7C3C43DA40C641* L_6 = ((List_1_tC99D7D75F0197EF8D9C0B56B71A1B77C6B6C8AC6_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)))->___s_emptyArray;
		__this->____items = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_6);
		return;
	}

IL_002f:
	{
		int32_t L_7 = V_1;
		MeshInfoBindingsU5BU5D_tAB8E8C31A391A18DE5B83869CC7C3C43DA40C641* L_8 = (MeshInfoBindingsU5BU5D_tAB8E8C31A391A18DE5B83869CC7C3C43DA40C641*)(MeshInfoBindingsU5BU5D_tAB8E8C31A391A18DE5B83869CC7C3C43DA40C641*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1), (uint32_t)L_7);
		__this->____items = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_8);
		RuntimeObject* L_9 = V_0;
		MeshInfoBindingsU5BU5D_tAB8E8C31A391A18DE5B83869CC7C3C43DA40C641* L_10 = __this->____items;
		InterfaceActionInvoker2< MeshInfoBindingsU5BU5D_tAB8E8C31A391A18DE5B83869CC7C3C43DA40C641*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_9, L_10, 0);
		int32_t L_11 = V_1;
		__this->____size = L_11;
		return;
	}

IL_0050:
	{
		__this->____size = 0;
		CHECKED_LOCAL_INIT(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)),il2cpp_codegen_runtime_class_init_inline);
		MeshInfoBindingsU5BU5D_tAB8E8C31A391A18DE5B83869CC7C3C43DA40C641* L_12 = ((List_1_tC99D7D75F0197EF8D9C0B56B71A1B77C6B6C8AC6_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)))->___s_emptyArray;
		__this->____items = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_12);
		RuntimeObject* L_13 = ___0_collection;
		List_1_AddEnumerable_m824B831DF59A332409910EE4AD627BFB2DEFC2AE(__this, L_13, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 5));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Capacity_mBA78BE093D3C14FC2571FBBB1A745C75F4121BE3 (List_1_tC99D7D75F0197EF8D9C0B56B71A1B77C6B6C8AC6* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit);
	MeshInfoBindingsU5BU5D_tAB8E8C31A391A18DE5B83869CC7C3C43DA40C641* V_0 = NULL;
	{
		int32_t L_0 = ___0_value;
		int32_t L_1 = __this->____size;
		if ((((int32_t)L_0) >= ((int32_t)L_1)))
		{
			goto IL_0012;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F(((int32_t)15), ((int32_t)21), NULL);
	}

IL_0012:
	{
		int32_t L_2 = ___0_value;
		MeshInfoBindingsU5BU5D_tAB8E8C31A391A18DE5B83869CC7C3C43DA40C641* L_3 = __this->____items;
		int32_t L_4 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_3)->max_length),NULL));
		if ((((int32_t)L_2) == ((int32_t)L_4)))
		{
			goto IL_0058;
		}
	}
	{
		int32_t L_5 = ___0_value;
		if ((((int32_t)L_5) <= ((int32_t)0)))
		{
			goto IL_004d;
		}
	}
	{
		int32_t L_6 = ___0_value;
		MeshInfoBindingsU5BU5D_tAB8E8C31A391A18DE5B83869CC7C3C43DA40C641* L_7 = (MeshInfoBindingsU5BU5D_tAB8E8C31A391A18DE5B83869CC7C3C43DA40C641*)(MeshInfoBindingsU5BU5D_tAB8E8C31A391A18DE5B83869CC7C3C43DA40C641*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1), (uint32_t)L_6);
		V_0 = L_7;
		int32_t L_8 = __this->____size;
		if ((((int32_t)L_8) <= ((int32_t)0)))
		{
			goto IL_0045;
		}
	}
	{
		MeshInfoBindingsU5BU5D_tAB8E8C31A391A18DE5B83869CC7C3C43DA40C641* L_9 = __this->____items;
		MeshInfoBindingsU5BU5D_tAB8E8C31A391A18DE5B83869CC7C3C43DA40C641* L_10 = V_0;
		int32_t L_11 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_9, 0, (RuntimeArray*)L_10, 0, L_11, NULL);
	}

IL_0045:
	{
		MeshInfoBindingsU5BU5D_tAB8E8C31A391A18DE5B83869CC7C3C43DA40C641* L_12 = V_0;
		__this->____items = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_12);
		return;
	}

IL_004d:
	{
		CHECKED_LOCAL_INIT(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)),il2cpp_codegen_runtime_class_init_inline);
		MeshInfoBindingsU5BU5D_tAB8E8C31A391A18DE5B83869CC7C3C43DA40C641* L_13 = ((List_1_tC99D7D75F0197EF8D9C0B56B71A1B77C6B6C8AC6_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)))->___s_emptyArray;
		__this->____items = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_13);
	}

IL_0058:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MeshInfoBindings_t75C3901D8003725F85E8FD2F33C1712A92DB3EAF List_1_get_Item_m18F31D575DF8E0840608AD65332429C6EF599644 (List_1_tC99D7D75F0197EF8D9C0B56B71A1B77C6B6C8AC6* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRange_IndexException_mC7661B8C6DD827679C95FC6B6C08F8724174936D(NULL);
	}

IL_000e:
	{
		MeshInfoBindingsU5BU5D_tAB8E8C31A391A18DE5B83869CC7C3C43DA40C641* L_2 = __this->____items;
		int32_t L_3 = ___0_index;
		int32_t L_4 = L_3;
		MeshInfoBindings_t75C3901D8003725F85E8FD2F33C1712A92DB3EAF L_5 = (L_2)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_m860416881396CDE2C8A0BC4F62995CD3A0B1D851 (List_1_tC99D7D75F0197EF8D9C0B56B71A1B77C6B6C8AC6* __this, int32_t ___0_index, MeshInfoBindings_t75C3901D8003725F85E8FD2F33C1712A92DB3EAF ___1_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRange_IndexException_mC7661B8C6DD827679C95FC6B6C08F8724174936D(NULL);
	}

IL_000e:
	{
		MeshInfoBindingsU5BU5D_tAB8E8C31A391A18DE5B83869CC7C3C43DA40C641* L_2 = __this->____items;
		int32_t L_3 = ___0_index;
		MeshInfoBindings_t75C3901D8003725F85E8FD2F33C1712A92DB3EAF L_4 = ___1_value;
		(L_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3), (MeshInfoBindings_t75C3901D8003725F85E8FD2F33C1712A92DB3EAF)L_4);
		int32_t L_5 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_5, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_IsCompatibleObject_m6CCA331B33F1DFD12BF79547BAF82E64869C07EB (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	MeshInfoBindings_t75C3901D8003725F85E8FD2F33C1712A92DB3EAF V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6))))
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(MeshInfoBindings_t75C3901D8003725F85E8FD2F33C1712A92DB3EAF));
		MeshInfoBindings_t75C3901D8003725F85E8FD2F33C1712A92DB3EAF L_2 = V_0;
		return false;
	}

IL_001d:
	{
		return (bool)0;
	}

IL_001f:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_System_Collections_IList_get_Item_mFFD608F85742F7E08C338A8CF64CBEED8647F75D (List_1_tC99D7D75F0197EF8D9C0B56B71A1B77C6B6C8AC6* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		MeshInfoBindings_t75C3901D8003725F85E8FD2F33C1712A92DB3EAF L_1;
		L_1 = List_1_get_Item_m18F31D575DF8E0840608AD65332429C6EF599644(__this, L_0, NULL);
		MeshInfoBindings_t75C3901D8003725F85E8FD2F33C1712A92DB3EAF L_2 = L_1;
		RuntimeObject* L_3 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6), &L_2);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_System_Collections_IList_set_Item_m0B8CD8582A36046368FA6288BB9B382D0FD2E1E7 (List_1_tC99D7D75F0197EF8D9C0B56B71A1B77C6B6C8AC6* __this, int32_t ___0_index, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(Type_t_StaticInit);
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = ___1_value;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisMeshInfoBindings_t75C3901D8003725F85E8FD2F33C1712A92DB3EAF_mCED93CC50AA75D397596087807FA64731F2DB2B5(L_0, ((int32_t)15), NULL);
	}
	try
	{
		int32_t L_1 = ___0_index;
		RuntimeObject* L_2 = ___1_value;
		List_1_set_Item_m860416881396CDE2C8A0BC4F62995CD3A0B1D851(__this, L_1, ((*(MeshInfoBindings_t75C3901D8003725F85E8FD2F33C1712A92DB3EAF*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6)))), NULL);
		goto IL_002a;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0017;
		}
		throw e;
	}

CATCH_0017:
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_3 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_4 = ___1_value;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 10)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
		ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_4, L_6, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_002a;
	}

IL_002a:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mF385946D3C21B253EEBD0914E26E8AB90B6FB8A7 (List_1_tC99D7D75F0197EF8D9C0B56B71A1B77C6B6C8AC6* __this, MeshInfoBindings_t75C3901D8003725F85E8FD2F33C1712A92DB3EAF ___0_item, const RuntimeMethod* method) 
{
	MeshInfoBindingsU5BU5D_tAB8E8C31A391A18DE5B83869CC7C3C43DA40C641* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		MeshInfoBindingsU5BU5D_tAB8E8C31A391A18DE5B83869CC7C3C43DA40C641* L_1 = __this->____items;
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		V_1 = L_2;
		int32_t L_3 = V_1;
		MeshInfoBindingsU5BU5D_tAB8E8C31A391A18DE5B83869CC7C3C43DA40C641* L_4 = V_0;
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		if ((!(((uint32_t)L_3) < ((uint32_t)L_5))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_6 = V_1;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_6, 1));
		MeshInfoBindingsU5BU5D_tAB8E8C31A391A18DE5B83869CC7C3C43DA40C641* L_7 = V_0;
		int32_t L_8 = V_1;
		MeshInfoBindings_t75C3901D8003725F85E8FD2F33C1712A92DB3EAF L_9 = ___0_item;
		(L_7)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_8), (MeshInfoBindings_t75C3901D8003725F85E8FD2F33C1712A92DB3EAF)L_9);
		return;
	}

IL_0034:
	{
		MeshInfoBindings_t75C3901D8003725F85E8FD2F33C1712A92DB3EAF L_10 = ___0_item;
		List_1_AddWithResize_m1ACBAD225ECA81E408127C86E4BAAE3865014613(__this, L_10, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 11));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_m1ACBAD225ECA81E408127C86E4BAAE3865014613 (List_1_tC99D7D75F0197EF8D9C0B56B71A1B77C6B6C8AC6* __this, MeshInfoBindings_t75C3901D8003725F85E8FD2F33C1712A92DB3EAF ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____size;
		V_0 = L_0;
		int32_t L_1 = V_0;
		List_1_EnsureCapacity_mDA7A0120E14A4D287D6F01CC44F64DA4CA061EC7(__this, ((int32_t)il2cpp_codegen_add(L_1, 1)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 12));
		int32_t L_2 = V_0;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_2, 1));
		MeshInfoBindingsU5BU5D_tAB8E8C31A391A18DE5B83869CC7C3C43DA40C641* L_3 = __this->____items;
		int32_t L_4 = V_0;
		MeshInfoBindings_t75C3901D8003725F85E8FD2F33C1712A92DB3EAF L_5 = ___0_item;
		(L_3)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4), (MeshInfoBindings_t75C3901D8003725F85E8FD2F33C1712A92DB3EAF)L_5);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_System_Collections_IList_Add_mF590E972E2F55645F0CAFCF80278AF5CA5D56C1C (List_1_tC99D7D75F0197EF8D9C0B56B71A1B77C6B6C8AC6* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(Type_t_StaticInit);
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = ___0_item;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisMeshInfoBindings_t75C3901D8003725F85E8FD2F33C1712A92DB3EAF_mCED93CC50AA75D397596087807FA64731F2DB2B5(L_0, ((int32_t)20), NULL);
	}
	try
	{
		RuntimeObject* L_1 = ___0_item;
		List_1_Add_mF385946D3C21B253EEBD0914E26E8AB90B6FB8A7_inline(__this, ((*(MeshInfoBindings_t75C3901D8003725F85E8FD2F33C1712A92DB3EAF*)UnBox(L_1, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		goto IL_0029;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0016;
		}
		throw e;
	}

CATCH_0016:
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_2 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_3 = ___0_item;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_4 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 10)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_5;
		L_5 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_4, NULL);
		ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_3, L_5, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0029;
	}

IL_0029:
	{
		int32_t L_6;
		L_6 = List_1_get_Count_mD76C6DAD418B365B1587216904BE9FB223599155_inline(__this, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_6, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddRange_mEF62F9C7ED9AD37B46701DF5CD09C4FE10794AEF (List_1_tC99D7D75F0197EF8D9C0B56B71A1B77C6B6C8AC6* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		RuntimeObject* L_1 = ___0_collection;
		List_1_InsertRange_m8F834A7B7E2FE4C754CFF38D8B6364ED8E5043E8(__this, L_0, L_1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 15));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_m24FB2CDFAAD9A18B49FDB366FD172A5AF21E1D00 (List_1_tC99D7D75F0197EF8D9C0B56B71A1B77C6B6C8AC6* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
	}
	{
		int32_t L_1 = __this->____size;
		V_0 = L_1;
		__this->____size = 0;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		MeshInfoBindingsU5BU5D_tAB8E8C31A391A18DE5B83869CC7C3C43DA40C641* L_3 = __this->____items;
		int32_t L_4 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_3, 0, L_4, NULL);
		return;
	}

IL_003c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_m08AD398220DEE98CD7BCDA879F0EC7111ED884FB (List_1_tC99D7D75F0197EF8D9C0B56B71A1B77C6B6C8AC6* __this, MeshInfoBindings_t75C3901D8003725F85E8FD2F33C1712A92DB3EAF ___0_item, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		MeshInfoBindings_t75C3901D8003725F85E8FD2F33C1712A92DB3EAF L_1 = ___0_item;
		int32_t L_2;
		L_2 = List_1_IndexOf_m394E113D68BEA74889454FF4B196486B550E8976(__this, L_1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 17));
		return (bool)((((int32_t)((((int32_t)L_2) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0016:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_System_Collections_IList_Contains_mAD823ACCAD349003FA99E0F7B7144D0A6739FC03 (List_1_tC99D7D75F0197EF8D9C0B56B71A1B77C6B6C8AC6* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit);
	{
		RuntimeObject* L_0 = ___0_item;
		CHECKED_LOCAL_INIT(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)),il2cpp_codegen_runtime_class_init_inline);
		bool L_1;
		L_1 = List_1_IsCompatibleObject_m6CCA331B33F1DFD12BF79547BAF82E64869C07EB(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 18));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_item;
		bool L_3;
		L_3 = List_1_Contains_m08AD398220DEE98CD7BCDA879F0EC7111ED884FB(__this, ((*(MeshInfoBindings_t75C3901D8003725F85E8FD2F33C1712A92DB3EAF*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 19));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_CopyTo_m3544CA073D6F733640765C644FAA9BDC6FE6C6FB (List_1_tC99D7D75F0197EF8D9C0B56B71A1B77C6B6C8AC6* __this, MeshInfoBindingsU5BU5D_tAB8E8C31A391A18DE5B83869CC7C3C43DA40C641* ___0_array, const RuntimeMethod* method) 
{
	{
		MeshInfoBindingsU5BU5D_tAB8E8C31A391A18DE5B83869CC7C3C43DA40C641* L_0 = ___0_array;
		List_1_CopyTo_m92CA99A2FACF7093EC0C1CD76065AFC71E9EDBA9(__this, L_0, 0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_EnsureCapacity_mDA7A0120E14A4D287D6F01CC44F64DA4CA061EC7 (List_1_tC99D7D75F0197EF8D9C0B56B71A1B77C6B6C8AC6* __this, int32_t ___0_min, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t G_B4_0 = 0;
	{
		MeshInfoBindingsU5BU5D_tAB8E8C31A391A18DE5B83869CC7C3C43DA40C641* L_0 = __this->____items;
		int32_t L_1 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_0)->max_length),NULL));
		int32_t L_2 = ___0_min;
		if ((((int32_t)L_1) >= ((int32_t)L_2)))
		{
			goto IL_003d;
		}
	}
	{
		MeshInfoBindingsU5BU5D_tAB8E8C31A391A18DE5B83869CC7C3C43DA40C641* L_3 = __this->____items;
		if (!(((RuntimeArray*)L_3)->max_length))
		{
			goto IL_0020;
		}
	}
	{
		MeshInfoBindingsU5BU5D_tAB8E8C31A391A18DE5B83869CC7C3C43DA40C641* L_4 = __this->____items;
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		G_B4_0 = ((int32_t)il2cpp_codegen_multiply(L_5, 2));
		goto IL_0021;
	}

IL_0020:
	{
		G_B4_0 = 4;
	}

IL_0021:
	{
		V_0 = G_B4_0;
		int32_t L_6 = V_0;
		if ((!(((uint32_t)L_6) > ((uint32_t)((int32_t)2146435071)))))
		{
			goto IL_0030;
		}
	}
	{
		V_0 = ((int32_t)2146435071);
	}

IL_0030:
	{
		int32_t L_7 = V_0;
		int32_t L_8 = ___0_min;
		if ((((int32_t)L_7) >= ((int32_t)L_8)))
		{
			goto IL_0036;
		}
	}
	{
		int32_t L_9 = ___0_min;
		V_0 = L_9;
	}

IL_0036:
	{
		int32_t L_10 = V_0;
		List_1_set_Capacity_mBA78BE093D3C14FC2571FBBB1A745C75F4121BE3(__this, L_10, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 21));
	}

IL_003d:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_ForEach_m0F0AA78E6C395F2984A8A44455EF73F0BF92D995 (List_1_tC99D7D75F0197EF8D9C0B56B71A1B77C6B6C8AC6* __this, Action_1_tFB4CF7B05ED4457EF963EF457274973F784847E1* ___0_action, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Action_1_tFB4CF7B05ED4457EF963EF457274973F784847E1* L_0 = ___0_action;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(((int32_t)33), NULL);
	}

IL_000a:
	{
		int32_t L_1 = __this->____version;
		V_0 = L_1;
		V_1 = 0;
		goto IL_0034;
	}

IL_0015:
	{
		int32_t L_2 = V_0;
		int32_t L_3 = __this->____version;
		if ((!(((uint32_t)L_2) == ((uint32_t)L_3))))
		{
			goto IL_003d;
		}
	}
	{
		Action_1_tFB4CF7B05ED4457EF963EF457274973F784847E1* L_4 = ___0_action;
		MeshInfoBindingsU5BU5D_tAB8E8C31A391A18DE5B83869CC7C3C43DA40C641* L_5 = __this->____items;
		int32_t L_6 = V_1;
		int32_t L_7 = L_6;
		MeshInfoBindings_t75C3901D8003725F85E8FD2F33C1712A92DB3EAF L_8 = (L_5)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7));
		Action_1_Invoke_m52BBC04008C888EC507D9985F7A2136BBDEF803C_inline(L_4, L_8, NULL);
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0034:
	{
		int32_t L_10 = V_1;
		int32_t L_11 = __this->____size;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_0015;
		}
	}

IL_003d:
	{
		int32_t L_12 = V_0;
		int32_t L_13 = __this->____version;
		if ((((int32_t)L_12) == ((int32_t)L_13)))
		{
			goto IL_004b;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_InvalidOperation_EnumFailedVersion_m5331E2E0EC0E36843D53F439C2529530595ACE9F(NULL);
	}

IL_004b:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t8A20D5B25F288B18A262EE8D0F6E09A214832BE9 List_1_GetEnumerator_mC71DD6F8E341273ABA4A304D5F8492333AF1A1A3 (List_1_tC99D7D75F0197EF8D9C0B56B71A1B77C6B6C8AC6* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t8A20D5B25F288B18A262EE8D0F6E09A214832BE9 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m58623E42908B47DD3729F6954AA1E5D768D5D1F3((&L_0), __this, NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m648FC52DBE512D220CFA62D91B9EAB14326BF9D2 (List_1_tC99D7D75F0197EF8D9C0B56B71A1B77C6B6C8AC6* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t8A20D5B25F288B18A262EE8D0F6E09A214832BE9 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m58623E42908B47DD3729F6954AA1E5D768D5D1F3((&L_0), __this, NULL);
		Enumerator_t8A20D5B25F288B18A262EE8D0F6E09A214832BE9 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 23), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_System_Collections_IEnumerable_GetEnumerator_mC09F990134DE8BEF1808E4972CFA61AFFEE1DFF3 (List_1_tC99D7D75F0197EF8D9C0B56B71A1B77C6B6C8AC6* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t8A20D5B25F288B18A262EE8D0F6E09A214832BE9 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m58623E42908B47DD3729F6954AA1E5D768D5D1F3((&L_0), __this, NULL);
		Enumerator_t8A20D5B25F288B18A262EE8D0F6E09A214832BE9 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 23), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tC99D7D75F0197EF8D9C0B56B71A1B77C6B6C8AC6* List_1_GetRange_mF3500C78289859FFCB845EFBF4C5A1DDFDFF3047 (List_1_tC99D7D75F0197EF8D9C0B56B71A1B77C6B6C8AC6* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method) 
{
	List_1_tC99D7D75F0197EF8D9C0B56B71A1B77C6B6C8AC6* V_0 = NULL;
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_count;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F(((int32_t)16), 4, NULL);
	}

IL_0015:
	{
		int32_t L_2 = __this->____size;
		int32_t L_3 = ___0_index;
		int32_t L_4 = ___1_count;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_2, L_3))) >= ((int32_t)L_4)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(((int32_t)23), NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_count;
		List_1_tC99D7D75F0197EF8D9C0B56B71A1B77C6B6C8AC6* L_6 = (List_1_tC99D7D75F0197EF8D9C0B56B71A1B77C6B6C8AC6*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0));
		List_1__ctor_mDDF6BDDDC562B198F4A175C8725F492617AD2B73(L_6, L_5, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 25));
		V_0 = L_6;
		MeshInfoBindingsU5BU5D_tAB8E8C31A391A18DE5B83869CC7C3C43DA40C641* L_7 = __this->____items;
		int32_t L_8 = ___0_index;
		List_1_tC99D7D75F0197EF8D9C0B56B71A1B77C6B6C8AC6* L_9 = V_0;
		MeshInfoBindingsU5BU5D_tAB8E8C31A391A18DE5B83869CC7C3C43DA40C641* L_10 = L_9->____items;
		int32_t L_11 = ___1_count;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_7, L_8, (RuntimeArray*)L_10, 0, L_11, NULL);
		List_1_tC99D7D75F0197EF8D9C0B56B71A1B77C6B6C8AC6* L_12 = V_0;
		int32_t L_13 = ___1_count;
		L_12->____size = L_13;
		List_1_tC99D7D75F0197EF8D9C0B56B71A1B77C6B6C8AC6* L_14 = V_0;
		return L_14;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_IndexOf_m394E113D68BEA74889454FF4B196486B550E8976 (List_1_tC99D7D75F0197EF8D9C0B56B71A1B77C6B6C8AC6* __this, MeshInfoBindings_t75C3901D8003725F85E8FD2F33C1712A92DB3EAF ___0_item, const RuntimeMethod* method) 
{
	{
		MeshInfoBindingsU5BU5D_tAB8E8C31A391A18DE5B83869CC7C3C43DA40C641* L_0 = __this->____items;
		MeshInfoBindings_t75C3901D8003725F85E8FD2F33C1712A92DB3EAF L_1 = ___0_item;
		int32_t L_2 = __this->____size;
		int32_t L_3;
		L_3 = Array_IndexOf_TisMeshInfoBindings_t75C3901D8003725F85E8FD2F33C1712A92DB3EAF_mEE0B6D6841AE1F568E128A2D4E9D762B5D968998(L_0, L_1, 0, L_2, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 26));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_System_Collections_IList_IndexOf_m5C0A2B65661E7BBE73096E6F85E7602E16751F6F (List_1_tC99D7D75F0197EF8D9C0B56B71A1B77C6B6C8AC6* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit);
	{
		RuntimeObject* L_0 = ___0_item;
		CHECKED_LOCAL_INIT(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)),il2cpp_codegen_runtime_class_init_inline);
		bool L_1;
		L_1 = List_1_IsCompatibleObject_m6CCA331B33F1DFD12BF79547BAF82E64869C07EB(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 18));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_item;
		int32_t L_3;
		L_3 = List_1_IndexOf_m394E113D68BEA74889454FF4B196486B550E8976(__this, ((*(MeshInfoBindings_t75C3901D8003725F85E8FD2F33C1712A92DB3EAF*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 17));
		return L_3;
	}

IL_0015:
	{
		return (-1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Insert_mCDDF99E07C935DDAE809AE3BB5232D93E8C07811 (List_1_tC99D7D75F0197EF8D9C0B56B71A1B77C6B6C8AC6* __this, int32_t ___0_index, MeshInfoBindings_t75C3901D8003725F85E8FD2F33C1712A92DB3EAF ___1_item, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_0012;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F(((int32_t)13), ((int32_t)27), NULL);
	}

IL_0012:
	{
		int32_t L_2 = __this->____size;
		MeshInfoBindingsU5BU5D_tAB8E8C31A391A18DE5B83869CC7C3C43DA40C641* L_3 = __this->____items;
		int32_t L_4 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_3)->max_length),NULL));
		if ((!(((uint32_t)L_2) == ((uint32_t)L_4))))
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_5 = __this->____size;
		List_1_EnsureCapacity_mDA7A0120E14A4D287D6F01CC44F64DA4CA061EC7(__this, ((int32_t)il2cpp_codegen_add(L_5, 1)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 12));
	}

IL_0030:
	{
		int32_t L_6 = ___0_index;
		int32_t L_7 = __this->____size;
		if ((((int32_t)L_6) >= ((int32_t)L_7)))
		{
			goto IL_0056;
		}
	}
	{
		MeshInfoBindingsU5BU5D_tAB8E8C31A391A18DE5B83869CC7C3C43DA40C641* L_8 = __this->____items;
		int32_t L_9 = ___0_index;
		MeshInfoBindingsU5BU5D_tAB8E8C31A391A18DE5B83869CC7C3C43DA40C641* L_10 = __this->____items;
		int32_t L_11 = ___0_index;
		int32_t L_12 = __this->____size;
		int32_t L_13 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_8, L_9, (RuntimeArray*)L_10, ((int32_t)il2cpp_codegen_add(L_11, 1)), ((int32_t)il2cpp_codegen_subtract(L_12, L_13)), NULL);
	}

IL_0056:
	{
		MeshInfoBindingsU5BU5D_tAB8E8C31A391A18DE5B83869CC7C3C43DA40C641* L_14 = __this->____items;
		int32_t L_15 = ___0_index;
		MeshInfoBindings_t75C3901D8003725F85E8FD2F33C1712A92DB3EAF L_16 = ___1_item;
		(L_14)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_15), (MeshInfoBindings_t75C3901D8003725F85E8FD2F33C1712A92DB3EAF)L_16);
		int32_t L_17 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_17, 1));
		int32_t L_18 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_18, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_System_Collections_IList_Insert_m6700413F522A64A6FF96509A904F143DE7919E21 (List_1_tC99D7D75F0197EF8D9C0B56B71A1B77C6B6C8AC6* __this, int32_t ___0_index, RuntimeObject* ___1_item, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(Type_t_StaticInit);
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = ___1_item;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisMeshInfoBindings_t75C3901D8003725F85E8FD2F33C1712A92DB3EAF_mCED93CC50AA75D397596087807FA64731F2DB2B5(L_0, ((int32_t)20), NULL);
	}
	try
	{
		int32_t L_1 = ___0_index;
		RuntimeObject* L_2 = ___1_item;
		List_1_Insert_mCDDF99E07C935DDAE809AE3BB5232D93E8C07811(__this, L_1, ((*(MeshInfoBindings_t75C3901D8003725F85E8FD2F33C1712A92DB3EAF*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 27));
		goto IL_002a;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0017;
		}
		throw e;
	}

CATCH_0017:
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_3 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_4 = ___1_item;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 10)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
		ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_4, L_6, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_002a;
	}

IL_002a:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_InsertRange_m8F834A7B7E2FE4C754CFF38D8B6364ED8E5043E8 (List_1_tC99D7D75F0197EF8D9C0B56B71A1B77C6B6C8AC6* __this, int32_t ___0_index, RuntimeObject* ___1_collection, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	RuntimeObject* V_2 = NULL;
	{
		RuntimeObject* L_0 = ___1_collection;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(6, NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___0_index;
		int32_t L_2 = __this->____size;
		if ((!(((uint32_t)L_1) > ((uint32_t)L_2))))
		{
			goto IL_0017;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRange_IndexException_mC7661B8C6DD827679C95FC6B6C08F8724174936D(NULL);
	}

IL_0017:
	{
		RuntimeObject* L_3 = ___1_collection;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_3, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2)));
		RuntimeObject* L_4 = V_0;
		if (!L_4)
		{
			goto IL_00bc;
		}
	}
	{
		RuntimeObject* L_5 = V_0;
		int32_t L_6;
		L_6 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_5);
		V_1 = L_6;
		int32_t L_7 = V_1;
		if ((((int32_t)L_7) <= ((int32_t)0)))
		{
			goto IL_00fb;
		}
	}
	{
		int32_t L_8 = __this->____size;
		int32_t L_9 = V_1;
		List_1_EnsureCapacity_mDA7A0120E14A4D287D6F01CC44F64DA4CA061EC7(__this, ((int32_t)il2cpp_codegen_add(L_8, L_9)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 12));
		int32_t L_10 = ___0_index;
		int32_t L_11 = __this->____size;
		if ((((int32_t)L_10) >= ((int32_t)L_11)))
		{
			goto IL_0066;
		}
	}
	{
		MeshInfoBindingsU5BU5D_tAB8E8C31A391A18DE5B83869CC7C3C43DA40C641* L_12 = __this->____items;
		int32_t L_13 = ___0_index;
		MeshInfoBindingsU5BU5D_tAB8E8C31A391A18DE5B83869CC7C3C43DA40C641* L_14 = __this->____items;
		int32_t L_15 = ___0_index;
		int32_t L_16 = V_1;
		int32_t L_17 = __this->____size;
		int32_t L_18 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_12, L_13, (RuntimeArray*)L_14, ((int32_t)il2cpp_codegen_add(L_15, L_16)), ((int32_t)il2cpp_codegen_subtract(L_17, L_18)), NULL);
	}

IL_0066:
	{
		RuntimeObject* L_19 = V_0;
		if ((!(((RuntimeObject*)(List_1_tC99D7D75F0197EF8D9C0B56B71A1B77C6B6C8AC6*)__this) == ((RuntimeObject*)(RuntimeObject*)L_19))))
		{
			goto IL_009f;
		}
	}
	{
		MeshInfoBindingsU5BU5D_tAB8E8C31A391A18DE5B83869CC7C3C43DA40C641* L_20 = __this->____items;
		MeshInfoBindingsU5BU5D_tAB8E8C31A391A18DE5B83869CC7C3C43DA40C641* L_21 = __this->____items;
		int32_t L_22 = ___0_index;
		int32_t L_23 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_20, 0, (RuntimeArray*)L_21, L_22, L_23, NULL);
		MeshInfoBindingsU5BU5D_tAB8E8C31A391A18DE5B83869CC7C3C43DA40C641* L_24 = __this->____items;
		int32_t L_25 = ___0_index;
		int32_t L_26 = V_1;
		MeshInfoBindingsU5BU5D_tAB8E8C31A391A18DE5B83869CC7C3C43DA40C641* L_27 = __this->____items;
		int32_t L_28 = ___0_index;
		int32_t L_29 = __this->____size;
		int32_t L_30 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_24, ((int32_t)il2cpp_codegen_add(L_25, L_26)), (RuntimeArray*)L_27, ((int32_t)il2cpp_codegen_multiply(L_28, 2)), ((int32_t)il2cpp_codegen_subtract(L_29, L_30)), NULL);
		goto IL_00ac;
	}

IL_009f:
	{
		RuntimeObject* L_31 = V_0;
		MeshInfoBindingsU5BU5D_tAB8E8C31A391A18DE5B83869CC7C3C43DA40C641* L_32 = __this->____items;
		int32_t L_33 = ___0_index;
		InterfaceActionInvoker2< MeshInfoBindingsU5BU5D_tAB8E8C31A391A18DE5B83869CC7C3C43DA40C641*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_31, L_32, L_33);
	}

IL_00ac:
	{
		int32_t L_34 = __this->____size;
		int32_t L_35 = V_1;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_34, L_35));
		goto IL_00fb;
	}

IL_00bc:
	{
		int32_t L_36 = ___0_index;
		int32_t L_37 = __this->____size;
		if ((((int32_t)L_36) >= ((int32_t)L_37)))
		{
			goto IL_00f4;
		}
	}
	{
		RuntimeObject* L_38 = ___1_collection;
		RuntimeObject* L_39;
		L_39 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 28), L_38);
		V_2 = L_39;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00ea:
			{
				{
					RuntimeObject* L_40 = V_2;
					if (!L_40)
					{
						goto IL_00f3;
					}
				}
				{
					RuntimeObject* L_41 = V_2;
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_41);
				}

IL_00f3:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_00e0_1;
			}

IL_00ce_1:
			{
				int32_t L_42 = ___0_index;
				int32_t L_43 = L_42;
				___0_index = ((int32_t)il2cpp_codegen_add(L_43, 1));
				RuntimeObject* L_44 = V_2;
				MeshInfoBindings_t75C3901D8003725F85E8FD2F33C1712A92DB3EAF L_45;
				L_45 = InterfaceFuncInvoker0< MeshInfoBindings_t75C3901D8003725F85E8FD2F33C1712A92DB3EAF >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 30), L_44);
				List_1_Insert_mCDDF99E07C935DDAE809AE3BB5232D93E8C07811(__this, L_43, L_45, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 27));
			}

IL_00e0_1:
			{
				RuntimeObject* L_46 = V_2;
				bool L_47;
				L_47 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_46);
				if (L_47)
				{
					goto IL_00ce_1;
				}
			}
			{
				goto IL_00fb;
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

IL_00f4:
	{
		RuntimeObject* L_48 = ___1_collection;
		List_1_AddEnumerable_m824B831DF59A332409910EE4AD627BFB2DEFC2AE(__this, L_48, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 5));
	}

IL_00fb:
	{
		int32_t L_49 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_49, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m6420B669AC716755BB9E1EB3FBE6C093D3E41750 (List_1_tC99D7D75F0197EF8D9C0B56B71A1B77C6B6C8AC6* __this, MeshInfoBindings_t75C3901D8003725F85E8FD2F33C1712A92DB3EAF ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		MeshInfoBindings_t75C3901D8003725F85E8FD2F33C1712A92DB3EAF L_0 = ___0_item;
		int32_t L_1;
		L_1 = List_1_IndexOf_m394E113D68BEA74889454FF4B196486B550E8976(__this, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 17));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		int32_t L_3 = V_0;
		List_1_RemoveAt_mDA8E142C41C3A3D768C01A93D454C3CE43A6BF7C(__this, L_3, NULL);
		return (bool)1;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_System_Collections_IList_Remove_m35D672D9E6FA70C99BD91D5B503EEF07F7BE94B8 (List_1_tC99D7D75F0197EF8D9C0B56B71A1B77C6B6C8AC6* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit);
	{
		RuntimeObject* L_0 = ___0_item;
		CHECKED_LOCAL_INIT(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)),il2cpp_codegen_runtime_class_init_inline);
		bool L_1;
		L_1 = List_1_IsCompatibleObject_m6CCA331B33F1DFD12BF79547BAF82E64869C07EB(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 18));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_item;
		bool L_3;
		L_3 = List_1_Remove_m6420B669AC716755BB9E1EB3FBE6C093D3E41750(__this, ((*(MeshInfoBindings_t75C3901D8003725F85E8FD2F33C1712A92DB3EAF*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 33));
	}

IL_0015:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_RemoveAll_m6FACAB89EA49C2B1045EE91811EE843D34377C57 (List_1_tC99D7D75F0197EF8D9C0B56B71A1B77C6B6C8AC6* __this, Predicate_1_t09023B0AB7D2D62F61A5FE077D1F3DF03EFB51D3* ___0_match, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Predicate_1_t09023B0AB7D2D62F61A5FE077D1F3DF03EFB51D3* L_0 = ___0_match;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(8, NULL);
	}

IL_0009:
	{
		V_0 = 0;
		goto IL_0011;
	}

IL_000d:
	{
		int32_t L_1 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_1, 1));
	}

IL_0011:
	{
		int32_t L_2 = V_0;
		int32_t L_3 = __this->____size;
		if ((((int32_t)L_2) >= ((int32_t)L_3)))
		{
			goto IL_002e;
		}
	}
	{
		Predicate_1_t09023B0AB7D2D62F61A5FE077D1F3DF03EFB51D3* L_4 = ___0_match;
		MeshInfoBindingsU5BU5D_tAB8E8C31A391A18DE5B83869CC7C3C43DA40C641* L_5 = __this->____items;
		int32_t L_6 = V_0;
		int32_t L_7 = L_6;
		MeshInfoBindings_t75C3901D8003725F85E8FD2F33C1712A92DB3EAF L_8 = (L_5)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7));
		bool L_9;
		L_9 = Predicate_1_Invoke_mA988E072F30C796A4800138B64AA90FB0C84685E_inline(L_4, L_8, NULL);
		if (!L_9)
		{
			goto IL_000d;
		}
	}

IL_002e:
	{
		int32_t L_10 = V_0;
		int32_t L_11 = __this->____size;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_0039;
		}
	}
	{
		return 0;
	}

IL_0039:
	{
		int32_t L_12 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
		goto IL_0089;
	}

IL_003f:
	{
		int32_t L_13 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0043:
	{
		int32_t L_14 = V_1;
		int32_t L_15 = __this->____size;
		if ((((int32_t)L_14) >= ((int32_t)L_15)))
		{
			goto IL_0060;
		}
	}
	{
		Predicate_1_t09023B0AB7D2D62F61A5FE077D1F3DF03EFB51D3* L_16 = ___0_match;
		MeshInfoBindingsU5BU5D_tAB8E8C31A391A18DE5B83869CC7C3C43DA40C641* L_17 = __this->____items;
		int32_t L_18 = V_1;
		int32_t L_19 = L_18;
		MeshInfoBindings_t75C3901D8003725F85E8FD2F33C1712A92DB3EAF L_20 = (L_17)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_19));
		bool L_21;
		L_21 = Predicate_1_Invoke_mA988E072F30C796A4800138B64AA90FB0C84685E_inline(L_16, L_20, NULL);
		if (L_21)
		{
			goto IL_003f;
		}
	}

IL_0060:
	{
		int32_t L_22 = V_1;
		int32_t L_23 = __this->____size;
		if ((((int32_t)L_22) >= ((int32_t)L_23)))
		{
			goto IL_0089;
		}
	}
	{
		MeshInfoBindingsU5BU5D_tAB8E8C31A391A18DE5B83869CC7C3C43DA40C641* L_24 = __this->____items;
		int32_t L_25 = V_0;
		int32_t L_26 = L_25;
		V_0 = ((int32_t)il2cpp_codegen_add(L_26, 1));
		MeshInfoBindingsU5BU5D_tAB8E8C31A391A18DE5B83869CC7C3C43DA40C641* L_27 = __this->____items;
		int32_t L_28 = V_1;
		int32_t L_29 = L_28;
		V_1 = ((int32_t)il2cpp_codegen_add(L_29, 1));
		int32_t L_30 = L_29;
		MeshInfoBindings_t75C3901D8003725F85E8FD2F33C1712A92DB3EAF L_31 = (L_27)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_30));
		(L_24)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_26), (MeshInfoBindings_t75C3901D8003725F85E8FD2F33C1712A92DB3EAF)L_31);
	}

IL_0089:
	{
		int32_t L_32 = V_1;
		int32_t L_33 = __this->____size;
		if ((((int32_t)L_32) < ((int32_t)L_33)))
		{
			goto IL_0043;
		}
	}
	{
	}
	{
		MeshInfoBindingsU5BU5D_tAB8E8C31A391A18DE5B83869CC7C3C43DA40C641* L_34 = __this->____items;
		int32_t L_35 = V_0;
		int32_t L_36 = __this->____size;
		int32_t L_37 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_34, L_35, ((int32_t)il2cpp_codegen_subtract(L_36, L_37)), NULL);
	}

IL_00ad:
	{
		int32_t L_38 = __this->____size;
		int32_t L_39 = V_0;
		int32_t L_40 = V_0;
		__this->____size = L_40;
		int32_t L_41 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_41, 1));
		return ((int32_t)il2cpp_codegen_subtract(L_38, L_39));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_mDA8E142C41C3A3D768C01A93D454C3CE43A6BF7C (List_1_tC99D7D75F0197EF8D9C0B56B71A1B77C6B6C8AC6* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	MeshInfoBindings_t75C3901D8003725F85E8FD2F33C1712A92DB3EAF V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRange_IndexException_mC7661B8C6DD827679C95FC6B6C08F8724174936D(NULL);
	}

IL_000e:
	{
		int32_t L_2 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_2, 1));
		int32_t L_3 = ___0_index;
		int32_t L_4 = __this->____size;
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_0042;
		}
	}
	{
		MeshInfoBindingsU5BU5D_tAB8E8C31A391A18DE5B83869CC7C3C43DA40C641* L_5 = __this->____items;
		int32_t L_6 = ___0_index;
		MeshInfoBindingsU5BU5D_tAB8E8C31A391A18DE5B83869CC7C3C43DA40C641* L_7 = __this->____items;
		int32_t L_8 = ___0_index;
		int32_t L_9 = __this->____size;
		int32_t L_10 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, ((int32_t)il2cpp_codegen_add(L_6, 1)), (RuntimeArray*)L_7, L_8, ((int32_t)il2cpp_codegen_subtract(L_9, L_10)), NULL);
	}

IL_0042:
	{
	}
	{
		MeshInfoBindingsU5BU5D_tAB8E8C31A391A18DE5B83869CC7C3C43DA40C641* L_11 = __this->____items;
		int32_t L_12 = __this->____size;
		il2cpp_codegen_initobj((&V_0), sizeof(MeshInfoBindings_t75C3901D8003725F85E8FD2F33C1712A92DB3EAF));
		MeshInfoBindings_t75C3901D8003725F85E8FD2F33C1712A92DB3EAF L_13 = V_0;
		(L_11)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_12), (MeshInfoBindings_t75C3901D8003725F85E8FD2F33C1712A92DB3EAF)L_13);
	}

IL_0063:
	{
		int32_t L_14 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_14, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveRange_m809C618586C5B16032FDB5B7B03563F98131AF15 (List_1_tC99D7D75F0197EF8D9C0B56B71A1B77C6B6C8AC6* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_count;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F(((int32_t)16), 4, NULL);
	}

IL_0015:
	{
		int32_t L_2 = __this->____size;
		int32_t L_3 = ___0_index;
		int32_t L_4 = ___1_count;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_2, L_3))) >= ((int32_t)L_4)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(((int32_t)23), NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_count;
		if ((((int32_t)L_5) <= ((int32_t)0)))
		{
			goto IL_008d;
		}
	}
	{
		int32_t L_6 = __this->____size;
		int32_t L_7 = __this->____size;
		int32_t L_8 = ___1_count;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_7, L_8));
		int32_t L_9 = ___0_index;
		int32_t L_10 = __this->____size;
		if ((((int32_t)L_9) >= ((int32_t)L_10)))
		{
			goto IL_0066;
		}
	}
	{
		MeshInfoBindingsU5BU5D_tAB8E8C31A391A18DE5B83869CC7C3C43DA40C641* L_11 = __this->____items;
		int32_t L_12 = ___0_index;
		int32_t L_13 = ___1_count;
		MeshInfoBindingsU5BU5D_tAB8E8C31A391A18DE5B83869CC7C3C43DA40C641* L_14 = __this->____items;
		int32_t L_15 = ___0_index;
		int32_t L_16 = __this->____size;
		int32_t L_17 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_11, ((int32_t)il2cpp_codegen_add(L_12, L_13)), (RuntimeArray*)L_14, L_15, ((int32_t)il2cpp_codegen_subtract(L_16, L_17)), NULL);
	}

IL_0066:
	{
		int32_t L_18 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}
	{
		MeshInfoBindingsU5BU5D_tAB8E8C31A391A18DE5B83869CC7C3C43DA40C641* L_19 = __this->____items;
		int32_t L_20 = __this->____size;
		int32_t L_21 = ___1_count;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_19, L_20, L_21, NULL);
	}

IL_008d:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Reverse_m85255F74902EC58A7B90FF31249B8BB59C5C4F2E (List_1_tC99D7D75F0197EF8D9C0B56B71A1B77C6B6C8AC6* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = List_1_get_Count_mD76C6DAD418B365B1587216904BE9FB223599155_inline(__this, NULL);
		List_1_Reverse_m834F8C46FFE8EC255D3B8D935A5C6693FB97C906(__this, 0, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 35));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Reverse_m834F8C46FFE8EC255D3B8D935A5C6693FB97C906 (List_1_tC99D7D75F0197EF8D9C0B56B71A1B77C6B6C8AC6* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_count;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F(((int32_t)16), 4, NULL);
	}

IL_0015:
	{
		int32_t L_2 = __this->____size;
		int32_t L_3 = ___0_index;
		int32_t L_4 = ___1_count;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_2, L_3))) >= ((int32_t)L_4)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(((int32_t)23), NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_count;
		if ((((int32_t)L_5) <= ((int32_t)1)))
		{
			goto IL_0038;
		}
	}
	{
		MeshInfoBindingsU5BU5D_tAB8E8C31A391A18DE5B83869CC7C3C43DA40C641* L_6 = __this->____items;
		int32_t L_7 = ___0_index;
		int32_t L_8 = ___1_count;
		Array_Reverse_TisMeshInfoBindings_t75C3901D8003725F85E8FD2F33C1712A92DB3EAF_mC60D8F1E12334580D3510C64D54D98073D4DC409(L_6, L_7, L_8, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 36));
	}

IL_0038:
	{
		int32_t L_9 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_9, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_m5396FA03E84EDF807DFF23B00B9F8E8B1102860E (List_1_tC99D7D75F0197EF8D9C0B56B71A1B77C6B6C8AC6* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = List_1_get_Count_mD76C6DAD418B365B1587216904BE9FB223599155_inline(__this, NULL);
		RuntimeObject* L_1 = ___0_comparer;
		List_1_Sort_m3E7A925CE83A78D3EEDC0E2E389EEE5E0823A560(__this, 0, L_0, L_1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 37));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_m3E7A925CE83A78D3EEDC0E2E389EEE5E0823A560 (List_1_tC99D7D75F0197EF8D9C0B56B71A1B77C6B6C8AC6* __this, int32_t ___0_index, int32_t ___1_count, RuntimeObject* ___2_comparer, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_count;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F(((int32_t)16), 4, NULL);
	}

IL_0015:
	{
		int32_t L_2 = __this->____size;
		int32_t L_3 = ___0_index;
		int32_t L_4 = ___1_count;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_2, L_3))) >= ((int32_t)L_4)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(((int32_t)23), NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_count;
		if ((((int32_t)L_5) <= ((int32_t)1)))
		{
			goto IL_0039;
		}
	}
	{
		MeshInfoBindingsU5BU5D_tAB8E8C31A391A18DE5B83869CC7C3C43DA40C641* L_6 = __this->____items;
		int32_t L_7 = ___0_index;
		int32_t L_8 = ___1_count;
		RuntimeObject* L_9 = ___2_comparer;
		Array_Sort_TisMeshInfoBindings_t75C3901D8003725F85E8FD2F33C1712A92DB3EAF_m098DB8E05156D34EBB60B201656711C886B324E6(L_6, L_7, L_8, L_9, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 38));
	}

IL_0039:
	{
		int32_t L_10 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_10, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_mDE63D071BE5A10401E76D017AEB6FC38C1F6D253 (List_1_tC99D7D75F0197EF8D9C0B56B71A1B77C6B6C8AC6* __this, Comparison_1_t214C1E54D5D8ACACB1511E4F54BAB8E01EAF78B5* ___0_comparison, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(ArraySortHelper_1_t0B69B36E8E1F97490E6BE32C23AE1784AB1ADA3A_StaticInit);
	{
		Comparison_1_t214C1E54D5D8ACACB1511E4F54BAB8E01EAF78B5* L_0 = ___0_comparison;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(((int32_t)34), NULL);
	}

IL_000a:
	{
		int32_t L_1 = __this->____size;
		if ((((int32_t)L_1) <= ((int32_t)1)))
		{
			goto IL_0026;
		}
	}
	{
		MeshInfoBindingsU5BU5D_tAB8E8C31A391A18DE5B83869CC7C3C43DA40C641* L_2 = __this->____items;
		int32_t L_3 = __this->____size;
		Comparison_1_t214C1E54D5D8ACACB1511E4F54BAB8E01EAF78B5* L_4 = ___0_comparison;
		CHECKED_LOCAL_INIT(ArraySortHelper_1_t0B69B36E8E1F97490E6BE32C23AE1784AB1ADA3A_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 40)),il2cpp_codegen_runtime_class_init_inline);
		ArraySortHelper_1_Sort_mBC24450F902D3503D20BFBB20136742F2D8FF4B5(L_2, 0, L_3, L_4, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 39));
	}

IL_0026:
	{
		int32_t L_5 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_5, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MeshInfoBindingsU5BU5D_tAB8E8C31A391A18DE5B83869CC7C3C43DA40C641* List_1_ToArray_mCA9029F00A2C513728FDDA0B976B96C393A8CE65 (List_1_tC99D7D75F0197EF8D9C0B56B71A1B77C6B6C8AC6* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit);
	MeshInfoBindingsU5BU5D_tAB8E8C31A391A18DE5B83869CC7C3C43DA40C641* V_0 = NULL;
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		CHECKED_LOCAL_INIT(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)),il2cpp_codegen_runtime_class_init_inline);
		MeshInfoBindingsU5BU5D_tAB8E8C31A391A18DE5B83869CC7C3C43DA40C641* L_1 = ((List_1_tC99D7D75F0197EF8D9C0B56B71A1B77C6B6C8AC6_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)))->___s_emptyArray;
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____size;
		MeshInfoBindingsU5BU5D_tAB8E8C31A391A18DE5B83869CC7C3C43DA40C641* L_3 = (MeshInfoBindingsU5BU5D_tAB8E8C31A391A18DE5B83869CC7C3C43DA40C641*)(MeshInfoBindingsU5BU5D_tAB8E8C31A391A18DE5B83869CC7C3C43DA40C641*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1), (uint32_t)L_2);
		V_0 = L_3;
		MeshInfoBindingsU5BU5D_tAB8E8C31A391A18DE5B83869CC7C3C43DA40C641* L_4 = __this->____items;
		MeshInfoBindingsU5BU5D_tAB8E8C31A391A18DE5B83869CC7C3C43DA40C641* L_5 = V_0;
		int32_t L_6 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_4, 0, (RuntimeArray*)L_5, 0, L_6, NULL);
		MeshInfoBindingsU5BU5D_tAB8E8C31A391A18DE5B83869CC7C3C43DA40C641* L_7 = V_0;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddEnumerable_m824B831DF59A332409910EE4AD627BFB2DEFC2AE (List_1_tC99D7D75F0197EF8D9C0B56B71A1B77C6B6C8AC6* __this, RuntimeObject* ___0_enumerable, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	MeshInfoBindings_t75C3901D8003725F85E8FD2F33C1712A92DB3EAF V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		RuntimeObject* L_1 = ___0_enumerable;
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 28), L_1);
		V_0 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0063:
			{
				{
					RuntimeObject* L_3 = V_0;
					if (!L_3)
					{
						goto IL_006c;
					}
				}
				{
					RuntimeObject* L_4 = V_0;
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_4);
				}

IL_006c:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_0059_1;
			}

IL_0017_1:
			{
				RuntimeObject* L_5 = V_0;
				MeshInfoBindings_t75C3901D8003725F85E8FD2F33C1712A92DB3EAF L_6;
				L_6 = InterfaceFuncInvoker0< MeshInfoBindings_t75C3901D8003725F85E8FD2F33C1712A92DB3EAF >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 30), L_5);
				V_1 = L_6;
				int32_t L_7 = __this->____size;
				MeshInfoBindingsU5BU5D_tAB8E8C31A391A18DE5B83869CC7C3C43DA40C641* L_8 = __this->____items;
				int32_t L_9 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_8)->max_length),NULL));
				if ((!(((uint32_t)L_7) == ((uint32_t)L_9))))
				{
					goto IL_003c_1;
				}
			}
			{
				int32_t L_10 = __this->____size;
				List_1_EnsureCapacity_mDA7A0120E14A4D287D6F01CC44F64DA4CA061EC7(__this, ((int32_t)il2cpp_codegen_add(L_10, 1)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 12));
			}

IL_003c_1:
			{
				MeshInfoBindingsU5BU5D_tAB8E8C31A391A18DE5B83869CC7C3C43DA40C641* L_11 = __this->____items;
				int32_t L_12 = __this->____size;
				V_2 = L_12;
				int32_t L_13 = V_2;
				__this->____size = ((int32_t)il2cpp_codegen_add(L_13, 1));
				int32_t L_14 = V_2;
				MeshInfoBindings_t75C3901D8003725F85E8FD2F33C1712A92DB3EAF L_15 = V_1;
				(L_11)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_14), (MeshInfoBindings_t75C3901D8003725F85E8FD2F33C1712A92DB3EAF)L_15);
			}

IL_0059_1:
			{
				RuntimeObject* L_16 = V_0;
				bool L_17;
				L_17 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_16);
				if (L_17)
				{
					goto IL_0017_1;
				}
			}
			{
				goto IL_006d;
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

IL_006d:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__cctor_m01B16AD196B1D3C5788ABAA6AF1CD52101E1896C (const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	{
		MeshInfoBindingsU5BU5D_tAB8E8C31A391A18DE5B83869CC7C3C43DA40C641* L_0 = (MeshInfoBindingsU5BU5D_tAB8E8C31A391A18DE5B83869CC7C3C43DA40C641*)(MeshInfoBindingsU5BU5D_tAB8E8C31A391A18DE5B83869CC7C3C43DA40C641*)SZArrayNew(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1), (uint32_t)0);
		((List_1_tC99D7D75F0197EF8D9C0B56B71A1B77C6B6C8AC6_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___s_emptyArray = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((List_1_tC99D7D75F0197EF8D9C0B56B71A1B77C6B6C8AC6_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___s_emptyArray), (void*)L_0);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m073CD10D808299B47679506FCFF0F1AA5638AE46 (List_1_tD497C1314C02F6E7345D74565C2424A939B46AA7* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit);
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		CHECKED_LOCAL_INIT(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)),il2cpp_codegen_runtime_class_init_inline);
		MultipleSubstitutionRecordU5BU5D_t97C158785342D9FF7B0B89861AC760DE6E38E934* L_0 = ((List_1_tD497C1314C02F6E7345D74565C2424A939B46AA7_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)))->___s_emptyArray;
		__this->____items = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m84D08CA936E8D742C6695320BE434E741EC394DD (List_1_tD497C1314C02F6E7345D74565C2424A939B46AA7* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit);
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0012;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F(((int32_t)12), 4, NULL);
	}

IL_0012:
	{
		int32_t L_1 = ___0_capacity;
		if (L_1)
		{
			goto IL_0021;
		}
	}
	{
		CHECKED_LOCAL_INIT(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)),il2cpp_codegen_runtime_class_init_inline);
		MultipleSubstitutionRecordU5BU5D_t97C158785342D9FF7B0B89861AC760DE6E38E934* L_2 = ((List_1_tD497C1314C02F6E7345D74565C2424A939B46AA7_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)))->___s_emptyArray;
		__this->____items = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_2);
		return;
	}

IL_0021:
	{
		int32_t L_3 = ___0_capacity;
		MultipleSubstitutionRecordU5BU5D_t97C158785342D9FF7B0B89861AC760DE6E38E934* L_4 = (MultipleSubstitutionRecordU5BU5D_t97C158785342D9FF7B0B89861AC760DE6E38E934*)(MultipleSubstitutionRecordU5BU5D_t97C158785342D9FF7B0B89861AC760DE6E38E934*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1), (uint32_t)L_3);
		__this->____items = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_4);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m34E75BFFDF829B2C538A8F4C9A00E1105A6BB2CF (List_1_tD497C1314C02F6E7345D74565C2424A939B46AA7* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit);
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_collection;
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(6, NULL);
	}

IL_000f:
	{
		RuntimeObject* L_1 = ___0_collection;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_1, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2)));
		RuntimeObject* L_2 = V_0;
		if (!L_2)
		{
			goto IL_0050;
		}
	}
	{
		RuntimeObject* L_3 = V_0;
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_3);
		V_1 = L_4;
		int32_t L_5 = V_1;
		if (L_5)
		{
			goto IL_002f;
		}
	}
	{
		CHECKED_LOCAL_INIT(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)),il2cpp_codegen_runtime_class_init_inline);
		MultipleSubstitutionRecordU5BU5D_t97C158785342D9FF7B0B89861AC760DE6E38E934* L_6 = ((List_1_tD497C1314C02F6E7345D74565C2424A939B46AA7_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)))->___s_emptyArray;
		__this->____items = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_6);
		return;
	}

IL_002f:
	{
		int32_t L_7 = V_1;
		MultipleSubstitutionRecordU5BU5D_t97C158785342D9FF7B0B89861AC760DE6E38E934* L_8 = (MultipleSubstitutionRecordU5BU5D_t97C158785342D9FF7B0B89861AC760DE6E38E934*)(MultipleSubstitutionRecordU5BU5D_t97C158785342D9FF7B0B89861AC760DE6E38E934*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1), (uint32_t)L_7);
		__this->____items = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_8);
		RuntimeObject* L_9 = V_0;
		MultipleSubstitutionRecordU5BU5D_t97C158785342D9FF7B0B89861AC760DE6E38E934* L_10 = __this->____items;
		InterfaceActionInvoker2< MultipleSubstitutionRecordU5BU5D_t97C158785342D9FF7B0B89861AC760DE6E38E934*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_9, L_10, 0);
		int32_t L_11 = V_1;
		__this->____size = L_11;
		return;
	}

IL_0050:
	{
		__this->____size = 0;
		CHECKED_LOCAL_INIT(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)),il2cpp_codegen_runtime_class_init_inline);
		MultipleSubstitutionRecordU5BU5D_t97C158785342D9FF7B0B89861AC760DE6E38E934* L_12 = ((List_1_tD497C1314C02F6E7345D74565C2424A939B46AA7_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)))->___s_emptyArray;
		__this->____items = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_12);
		RuntimeObject* L_13 = ___0_collection;
		List_1_AddEnumerable_m25823106E60B95872432336B618BDD1803315582(__this, L_13, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 5));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Capacity_m961E626CCEC05EEB952C2734F1EFA16A4DAF8353 (List_1_tD497C1314C02F6E7345D74565C2424A939B46AA7* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit);
	MultipleSubstitutionRecordU5BU5D_t97C158785342D9FF7B0B89861AC760DE6E38E934* V_0 = NULL;
	{
		int32_t L_0 = ___0_value;
		int32_t L_1 = __this->____size;
		if ((((int32_t)L_0) >= ((int32_t)L_1)))
		{
			goto IL_0012;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F(((int32_t)15), ((int32_t)21), NULL);
	}

IL_0012:
	{
		int32_t L_2 = ___0_value;
		MultipleSubstitutionRecordU5BU5D_t97C158785342D9FF7B0B89861AC760DE6E38E934* L_3 = __this->____items;
		int32_t L_4 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_3)->max_length),NULL));
		if ((((int32_t)L_2) == ((int32_t)L_4)))
		{
			goto IL_0058;
		}
	}
	{
		int32_t L_5 = ___0_value;
		if ((((int32_t)L_5) <= ((int32_t)0)))
		{
			goto IL_004d;
		}
	}
	{
		int32_t L_6 = ___0_value;
		MultipleSubstitutionRecordU5BU5D_t97C158785342D9FF7B0B89861AC760DE6E38E934* L_7 = (MultipleSubstitutionRecordU5BU5D_t97C158785342D9FF7B0B89861AC760DE6E38E934*)(MultipleSubstitutionRecordU5BU5D_t97C158785342D9FF7B0B89861AC760DE6E38E934*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1), (uint32_t)L_6);
		V_0 = L_7;
		int32_t L_8 = __this->____size;
		if ((((int32_t)L_8) <= ((int32_t)0)))
		{
			goto IL_0045;
		}
	}
	{
		MultipleSubstitutionRecordU5BU5D_t97C158785342D9FF7B0B89861AC760DE6E38E934* L_9 = __this->____items;
		MultipleSubstitutionRecordU5BU5D_t97C158785342D9FF7B0B89861AC760DE6E38E934* L_10 = V_0;
		int32_t L_11 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_9, 0, (RuntimeArray*)L_10, 0, L_11, NULL);
	}

IL_0045:
	{
		MultipleSubstitutionRecordU5BU5D_t97C158785342D9FF7B0B89861AC760DE6E38E934* L_12 = V_0;
		__this->____items = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_12);
		return;
	}

IL_004d:
	{
		CHECKED_LOCAL_INIT(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)),il2cpp_codegen_runtime_class_init_inline);
		MultipleSubstitutionRecordU5BU5D_t97C158785342D9FF7B0B89861AC760DE6E38E934* L_13 = ((List_1_tD497C1314C02F6E7345D74565C2424A939B46AA7_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)))->___s_emptyArray;
		__this->____items = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_13);
	}

IL_0058:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MultipleSubstitutionRecord_t668A640AFADBD46E3D4EC3A8417D0A02764DF87B List_1_get_Item_m2164802BF9C9903281D99DBD3B1D41A4C76B29EC (List_1_tD497C1314C02F6E7345D74565C2424A939B46AA7* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRange_IndexException_mC7661B8C6DD827679C95FC6B6C08F8724174936D(NULL);
	}

IL_000e:
	{
		MultipleSubstitutionRecordU5BU5D_t97C158785342D9FF7B0B89861AC760DE6E38E934* L_2 = __this->____items;
		int32_t L_3 = ___0_index;
		int32_t L_4 = L_3;
		MultipleSubstitutionRecord_t668A640AFADBD46E3D4EC3A8417D0A02764DF87B L_5 = (L_2)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_mC8D2DF8A365FB9E113B142A9A5FC3B8A0E43F061 (List_1_tD497C1314C02F6E7345D74565C2424A939B46AA7* __this, int32_t ___0_index, MultipleSubstitutionRecord_t668A640AFADBD46E3D4EC3A8417D0A02764DF87B ___1_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRange_IndexException_mC7661B8C6DD827679C95FC6B6C08F8724174936D(NULL);
	}

IL_000e:
	{
		MultipleSubstitutionRecordU5BU5D_t97C158785342D9FF7B0B89861AC760DE6E38E934* L_2 = __this->____items;
		int32_t L_3 = ___0_index;
		MultipleSubstitutionRecord_t668A640AFADBD46E3D4EC3A8417D0A02764DF87B L_4 = ___1_value;
		(L_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3), (MultipleSubstitutionRecord_t668A640AFADBD46E3D4EC3A8417D0A02764DF87B)L_4);
		int32_t L_5 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_5, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_IsCompatibleObject_m90D54C1B434CCE6C46663223C6C888D98EBDE0F2 (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	MultipleSubstitutionRecord_t668A640AFADBD46E3D4EC3A8417D0A02764DF87B V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6))))
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(MultipleSubstitutionRecord_t668A640AFADBD46E3D4EC3A8417D0A02764DF87B));
		MultipleSubstitutionRecord_t668A640AFADBD46E3D4EC3A8417D0A02764DF87B L_2 = V_0;
		return false;
	}

IL_001d:
	{
		return (bool)0;
	}

IL_001f:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_System_Collections_IList_get_Item_mB92C2420A69C0E68FB645C4754D3B88A3667C1B3 (List_1_tD497C1314C02F6E7345D74565C2424A939B46AA7* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		MultipleSubstitutionRecord_t668A640AFADBD46E3D4EC3A8417D0A02764DF87B L_1;
		L_1 = List_1_get_Item_m2164802BF9C9903281D99DBD3B1D41A4C76B29EC(__this, L_0, NULL);
		MultipleSubstitutionRecord_t668A640AFADBD46E3D4EC3A8417D0A02764DF87B L_2 = L_1;
		RuntimeObject* L_3 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6), &L_2);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_System_Collections_IList_set_Item_mCC0935E6B215FAF6664154B36E36330BA59A5DC3 (List_1_tD497C1314C02F6E7345D74565C2424A939B46AA7* __this, int32_t ___0_index, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(Type_t_StaticInit);
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = ___1_value;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisMultipleSubstitutionRecord_t668A640AFADBD46E3D4EC3A8417D0A02764DF87B_m843FD4A465B7204A130644153874A8AD60827141(L_0, ((int32_t)15), NULL);
	}
	try
	{
		int32_t L_1 = ___0_index;
		RuntimeObject* L_2 = ___1_value;
		List_1_set_Item_mC8D2DF8A365FB9E113B142A9A5FC3B8A0E43F061(__this, L_1, ((*(MultipleSubstitutionRecord_t668A640AFADBD46E3D4EC3A8417D0A02764DF87B*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6)))), NULL);
		goto IL_002a;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0017;
		}
		throw e;
	}

CATCH_0017:
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_3 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_4 = ___1_value;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 10)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
		ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_4, L_6, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_002a;
	}

IL_002a:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_m0F287C5DA436E45442C23034E2F0C1BCE2B8C99D (List_1_tD497C1314C02F6E7345D74565C2424A939B46AA7* __this, MultipleSubstitutionRecord_t668A640AFADBD46E3D4EC3A8417D0A02764DF87B ___0_item, const RuntimeMethod* method) 
{
	MultipleSubstitutionRecordU5BU5D_t97C158785342D9FF7B0B89861AC760DE6E38E934* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		MultipleSubstitutionRecordU5BU5D_t97C158785342D9FF7B0B89861AC760DE6E38E934* L_1 = __this->____items;
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		V_1 = L_2;
		int32_t L_3 = V_1;
		MultipleSubstitutionRecordU5BU5D_t97C158785342D9FF7B0B89861AC760DE6E38E934* L_4 = V_0;
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		if ((!(((uint32_t)L_3) < ((uint32_t)L_5))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_6 = V_1;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_6, 1));
		MultipleSubstitutionRecordU5BU5D_t97C158785342D9FF7B0B89861AC760DE6E38E934* L_7 = V_0;
		int32_t L_8 = V_1;
		MultipleSubstitutionRecord_t668A640AFADBD46E3D4EC3A8417D0A02764DF87B L_9 = ___0_item;
		(L_7)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_8), (MultipleSubstitutionRecord_t668A640AFADBD46E3D4EC3A8417D0A02764DF87B)L_9);
		return;
	}

IL_0034:
	{
		MultipleSubstitutionRecord_t668A640AFADBD46E3D4EC3A8417D0A02764DF87B L_10 = ___0_item;
		List_1_AddWithResize_mA0DD34F99218D5498D14A1F12196EA06898974BB(__this, L_10, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 11));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_mA0DD34F99218D5498D14A1F12196EA06898974BB (List_1_tD497C1314C02F6E7345D74565C2424A939B46AA7* __this, MultipleSubstitutionRecord_t668A640AFADBD46E3D4EC3A8417D0A02764DF87B ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____size;
		V_0 = L_0;
		int32_t L_1 = V_0;
		List_1_EnsureCapacity_m180216A9AD531D62ED1FCA10218B1C20ED75B01D(__this, ((int32_t)il2cpp_codegen_add(L_1, 1)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 12));
		int32_t L_2 = V_0;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_2, 1));
		MultipleSubstitutionRecordU5BU5D_t97C158785342D9FF7B0B89861AC760DE6E38E934* L_3 = __this->____items;
		int32_t L_4 = V_0;
		MultipleSubstitutionRecord_t668A640AFADBD46E3D4EC3A8417D0A02764DF87B L_5 = ___0_item;
		(L_3)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4), (MultipleSubstitutionRecord_t668A640AFADBD46E3D4EC3A8417D0A02764DF87B)L_5);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_System_Collections_IList_Add_m9E240B1FA8DAE8DA91091412ED02CF4F163D44DC (List_1_tD497C1314C02F6E7345D74565C2424A939B46AA7* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(Type_t_StaticInit);
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = ___0_item;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisMultipleSubstitutionRecord_t668A640AFADBD46E3D4EC3A8417D0A02764DF87B_m843FD4A465B7204A130644153874A8AD60827141(L_0, ((int32_t)20), NULL);
	}
	try
	{
		RuntimeObject* L_1 = ___0_item;
		List_1_Add_m0F287C5DA436E45442C23034E2F0C1BCE2B8C99D_inline(__this, ((*(MultipleSubstitutionRecord_t668A640AFADBD46E3D4EC3A8417D0A02764DF87B*)UnBox(L_1, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		goto IL_0029;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0016;
		}
		throw e;
	}

CATCH_0016:
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_2 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_3 = ___0_item;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_4 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 10)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_5;
		L_5 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_4, NULL);
		ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_3, L_5, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0029;
	}

IL_0029:
	{
		int32_t L_6;
		L_6 = List_1_get_Count_m381F792E8E05E4C9DCD31FC82F25FF56DCD07C23_inline(__this, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_6, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddRange_mE1B8F61245F1CB57A35ADC8ABC0E8147FA8428C0 (List_1_tD497C1314C02F6E7345D74565C2424A939B46AA7* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		RuntimeObject* L_1 = ___0_collection;
		List_1_InsertRange_m9FC373D72507EFA8AA926B0035F0E4326AA4661B(__this, L_0, L_1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 15));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_m6667EC76D90065B98B72111FD4C506B9EDB52994 (List_1_tD497C1314C02F6E7345D74565C2424A939B46AA7* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
	}
	{
		int32_t L_1 = __this->____size;
		V_0 = L_1;
		__this->____size = 0;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		MultipleSubstitutionRecordU5BU5D_t97C158785342D9FF7B0B89861AC760DE6E38E934* L_3 = __this->____items;
		int32_t L_4 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_3, 0, L_4, NULL);
		return;
	}

IL_003c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_mFE8D52B1E9514520EF5B9D6EAC276E67F2297F43 (List_1_tD497C1314C02F6E7345D74565C2424A939B46AA7* __this, MultipleSubstitutionRecord_t668A640AFADBD46E3D4EC3A8417D0A02764DF87B ___0_item, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		MultipleSubstitutionRecord_t668A640AFADBD46E3D4EC3A8417D0A02764DF87B L_1 = ___0_item;
		int32_t L_2;
		L_2 = List_1_IndexOf_m0C575610DA6F18B107BF64C0419E839CC142DF77(__this, L_1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 17));
		return (bool)((((int32_t)((((int32_t)L_2) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0016:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_System_Collections_IList_Contains_m0188DBD538FBA3A30B2F8DD8B7A9ADF123979128 (List_1_tD497C1314C02F6E7345D74565C2424A939B46AA7* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit);
	{
		RuntimeObject* L_0 = ___0_item;
		CHECKED_LOCAL_INIT(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)),il2cpp_codegen_runtime_class_init_inline);
		bool L_1;
		L_1 = List_1_IsCompatibleObject_m90D54C1B434CCE6C46663223C6C888D98EBDE0F2(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 18));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_item;
		bool L_3;
		L_3 = List_1_Contains_mFE8D52B1E9514520EF5B9D6EAC276E67F2297F43(__this, ((*(MultipleSubstitutionRecord_t668A640AFADBD46E3D4EC3A8417D0A02764DF87B*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 19));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_CopyTo_m4530AB1FDDFA871832665AC51E66AB9A134AA3B2 (List_1_tD497C1314C02F6E7345D74565C2424A939B46AA7* __this, MultipleSubstitutionRecordU5BU5D_t97C158785342D9FF7B0B89861AC760DE6E38E934* ___0_array, const RuntimeMethod* method) 
{
	{
		MultipleSubstitutionRecordU5BU5D_t97C158785342D9FF7B0B89861AC760DE6E38E934* L_0 = ___0_array;
		List_1_CopyTo_m31DD5DCC295219A17DB2F4ECB2E393F6433DBD4D(__this, L_0, 0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_EnsureCapacity_m180216A9AD531D62ED1FCA10218B1C20ED75B01D (List_1_tD497C1314C02F6E7345D74565C2424A939B46AA7* __this, int32_t ___0_min, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t G_B4_0 = 0;
	{
		MultipleSubstitutionRecordU5BU5D_t97C158785342D9FF7B0B89861AC760DE6E38E934* L_0 = __this->____items;
		int32_t L_1 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_0)->max_length),NULL));
		int32_t L_2 = ___0_min;
		if ((((int32_t)L_1) >= ((int32_t)L_2)))
		{
			goto IL_003d;
		}
	}
	{
		MultipleSubstitutionRecordU5BU5D_t97C158785342D9FF7B0B89861AC760DE6E38E934* L_3 = __this->____items;
		if (!(((RuntimeArray*)L_3)->max_length))
		{
			goto IL_0020;
		}
	}
	{
		MultipleSubstitutionRecordU5BU5D_t97C158785342D9FF7B0B89861AC760DE6E38E934* L_4 = __this->____items;
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		G_B4_0 = ((int32_t)il2cpp_codegen_multiply(L_5, 2));
		goto IL_0021;
	}

IL_0020:
	{
		G_B4_0 = 4;
	}

IL_0021:
	{
		V_0 = G_B4_0;
		int32_t L_6 = V_0;
		if ((!(((uint32_t)L_6) > ((uint32_t)((int32_t)2146435071)))))
		{
			goto IL_0030;
		}
	}
	{
		V_0 = ((int32_t)2146435071);
	}

IL_0030:
	{
		int32_t L_7 = V_0;
		int32_t L_8 = ___0_min;
		if ((((int32_t)L_7) >= ((int32_t)L_8)))
		{
			goto IL_0036;
		}
	}
	{
		int32_t L_9 = ___0_min;
		V_0 = L_9;
	}

IL_0036:
	{
		int32_t L_10 = V_0;
		List_1_set_Capacity_m961E626CCEC05EEB952C2734F1EFA16A4DAF8353(__this, L_10, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 21));
	}

IL_003d:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_ForEach_m50463AD9F5829DA786A68943011A966E7E58EC1C (List_1_tD497C1314C02F6E7345D74565C2424A939B46AA7* __this, Action_1_t45EE9233F562CACBFAD099A7F22DC3DEC41DC5F2* ___0_action, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Action_1_t45EE9233F562CACBFAD099A7F22DC3DEC41DC5F2* L_0 = ___0_action;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(((int32_t)33), NULL);
	}

IL_000a:
	{
		int32_t L_1 = __this->____version;
		V_0 = L_1;
		V_1 = 0;
		goto IL_0034;
	}

IL_0015:
	{
		int32_t L_2 = V_0;
		int32_t L_3 = __this->____version;
		if ((!(((uint32_t)L_2) == ((uint32_t)L_3))))
		{
			goto IL_003d;
		}
	}
	{
		Action_1_t45EE9233F562CACBFAD099A7F22DC3DEC41DC5F2* L_4 = ___0_action;
		MultipleSubstitutionRecordU5BU5D_t97C158785342D9FF7B0B89861AC760DE6E38E934* L_5 = __this->____items;
		int32_t L_6 = V_1;
		int32_t L_7 = L_6;
		MultipleSubstitutionRecord_t668A640AFADBD46E3D4EC3A8417D0A02764DF87B L_8 = (L_5)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7));
		Action_1_Invoke_mDD8EACF0FE87BE9E69F0AAEF47DDD885A2878F14_inline(L_4, L_8, NULL);
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0034:
	{
		int32_t L_10 = V_1;
		int32_t L_11 = __this->____size;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_0015;
		}
	}

IL_003d:
	{
		int32_t L_12 = V_0;
		int32_t L_13 = __this->____version;
		if ((((int32_t)L_12) == ((int32_t)L_13)))
		{
			goto IL_004b;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_InvalidOperation_EnumFailedVersion_m5331E2E0EC0E36843D53F439C2529530595ACE9F(NULL);
	}

IL_004b:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t801050780B43627808ABA984A28657A83654A691 List_1_GetEnumerator_m5BC30A18890B8038F5D1A49B26B24E6F8C0B8093 (List_1_tD497C1314C02F6E7345D74565C2424A939B46AA7* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t801050780B43627808ABA984A28657A83654A691 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mE1163009922C13BBE682EACE71A46101884D17B4((&L_0), __this, NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m5F00D25E57C3675C2E30BEE1C6F221B0CB52D3AE (List_1_tD497C1314C02F6E7345D74565C2424A939B46AA7* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t801050780B43627808ABA984A28657A83654A691 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mE1163009922C13BBE682EACE71A46101884D17B4((&L_0), __this, NULL);
		Enumerator_t801050780B43627808ABA984A28657A83654A691 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 23), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_System_Collections_IEnumerable_GetEnumerator_mBF5036E87F3E61546F43B6446946EDEE23B4CD07 (List_1_tD497C1314C02F6E7345D74565C2424A939B46AA7* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t801050780B43627808ABA984A28657A83654A691 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mE1163009922C13BBE682EACE71A46101884D17B4((&L_0), __this, NULL);
		Enumerator_t801050780B43627808ABA984A28657A83654A691 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 23), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tD497C1314C02F6E7345D74565C2424A939B46AA7* List_1_GetRange_m28F8DACD0DA7127F634FB5A1ECF6593D91BAF024 (List_1_tD497C1314C02F6E7345D74565C2424A939B46AA7* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method) 
{
	List_1_tD497C1314C02F6E7345D74565C2424A939B46AA7* V_0 = NULL;
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_count;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F(((int32_t)16), 4, NULL);
	}

IL_0015:
	{
		int32_t L_2 = __this->____size;
		int32_t L_3 = ___0_index;
		int32_t L_4 = ___1_count;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_2, L_3))) >= ((int32_t)L_4)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(((int32_t)23), NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_count;
		List_1_tD497C1314C02F6E7345D74565C2424A939B46AA7* L_6 = (List_1_tD497C1314C02F6E7345D74565C2424A939B46AA7*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0));
		List_1__ctor_m84D08CA936E8D742C6695320BE434E741EC394DD(L_6, L_5, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 25));
		V_0 = L_6;
		MultipleSubstitutionRecordU5BU5D_t97C158785342D9FF7B0B89861AC760DE6E38E934* L_7 = __this->____items;
		int32_t L_8 = ___0_index;
		List_1_tD497C1314C02F6E7345D74565C2424A939B46AA7* L_9 = V_0;
		MultipleSubstitutionRecordU5BU5D_t97C158785342D9FF7B0B89861AC760DE6E38E934* L_10 = L_9->____items;
		int32_t L_11 = ___1_count;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_7, L_8, (RuntimeArray*)L_10, 0, L_11, NULL);
		List_1_tD497C1314C02F6E7345D74565C2424A939B46AA7* L_12 = V_0;
		int32_t L_13 = ___1_count;
		L_12->____size = L_13;
		List_1_tD497C1314C02F6E7345D74565C2424A939B46AA7* L_14 = V_0;
		return L_14;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_IndexOf_m0C575610DA6F18B107BF64C0419E839CC142DF77 (List_1_tD497C1314C02F6E7345D74565C2424A939B46AA7* __this, MultipleSubstitutionRecord_t668A640AFADBD46E3D4EC3A8417D0A02764DF87B ___0_item, const RuntimeMethod* method) 
{
	{
		MultipleSubstitutionRecordU5BU5D_t97C158785342D9FF7B0B89861AC760DE6E38E934* L_0 = __this->____items;
		MultipleSubstitutionRecord_t668A640AFADBD46E3D4EC3A8417D0A02764DF87B L_1 = ___0_item;
		int32_t L_2 = __this->____size;
		int32_t L_3;
		L_3 = Array_IndexOf_TisMultipleSubstitutionRecord_t668A640AFADBD46E3D4EC3A8417D0A02764DF87B_mA1D1C4194AB58A1C5C96F9C604D736B06157CC9E(L_0, L_1, 0, L_2, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 26));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_System_Collections_IList_IndexOf_m67168726ACF141FC232B95C2FD1389ECC21D6711 (List_1_tD497C1314C02F6E7345D74565C2424A939B46AA7* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit);
	{
		RuntimeObject* L_0 = ___0_item;
		CHECKED_LOCAL_INIT(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)),il2cpp_codegen_runtime_class_init_inline);
		bool L_1;
		L_1 = List_1_IsCompatibleObject_m90D54C1B434CCE6C46663223C6C888D98EBDE0F2(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 18));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_item;
		int32_t L_3;
		L_3 = List_1_IndexOf_m0C575610DA6F18B107BF64C0419E839CC142DF77(__this, ((*(MultipleSubstitutionRecord_t668A640AFADBD46E3D4EC3A8417D0A02764DF87B*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 17));
		return L_3;
	}

IL_0015:
	{
		return (-1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Insert_mDAC169475E46470CB29608353F26912ED76A1FC9 (List_1_tD497C1314C02F6E7345D74565C2424A939B46AA7* __this, int32_t ___0_index, MultipleSubstitutionRecord_t668A640AFADBD46E3D4EC3A8417D0A02764DF87B ___1_item, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_0012;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F(((int32_t)13), ((int32_t)27), NULL);
	}

IL_0012:
	{
		int32_t L_2 = __this->____size;
		MultipleSubstitutionRecordU5BU5D_t97C158785342D9FF7B0B89861AC760DE6E38E934* L_3 = __this->____items;
		int32_t L_4 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_3)->max_length),NULL));
		if ((!(((uint32_t)L_2) == ((uint32_t)L_4))))
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_5 = __this->____size;
		List_1_EnsureCapacity_m180216A9AD531D62ED1FCA10218B1C20ED75B01D(__this, ((int32_t)il2cpp_codegen_add(L_5, 1)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 12));
	}

IL_0030:
	{
		int32_t L_6 = ___0_index;
		int32_t L_7 = __this->____size;
		if ((((int32_t)L_6) >= ((int32_t)L_7)))
		{
			goto IL_0056;
		}
	}
	{
		MultipleSubstitutionRecordU5BU5D_t97C158785342D9FF7B0B89861AC760DE6E38E934* L_8 = __this->____items;
		int32_t L_9 = ___0_index;
		MultipleSubstitutionRecordU5BU5D_t97C158785342D9FF7B0B89861AC760DE6E38E934* L_10 = __this->____items;
		int32_t L_11 = ___0_index;
		int32_t L_12 = __this->____size;
		int32_t L_13 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_8, L_9, (RuntimeArray*)L_10, ((int32_t)il2cpp_codegen_add(L_11, 1)), ((int32_t)il2cpp_codegen_subtract(L_12, L_13)), NULL);
	}

IL_0056:
	{
		MultipleSubstitutionRecordU5BU5D_t97C158785342D9FF7B0B89861AC760DE6E38E934* L_14 = __this->____items;
		int32_t L_15 = ___0_index;
		MultipleSubstitutionRecord_t668A640AFADBD46E3D4EC3A8417D0A02764DF87B L_16 = ___1_item;
		(L_14)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_15), (MultipleSubstitutionRecord_t668A640AFADBD46E3D4EC3A8417D0A02764DF87B)L_16);
		int32_t L_17 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_17, 1));
		int32_t L_18 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_18, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_System_Collections_IList_Insert_m1F048003A3131B4066E6974AA725C8194BC99F0C (List_1_tD497C1314C02F6E7345D74565C2424A939B46AA7* __this, int32_t ___0_index, RuntimeObject* ___1_item, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(Type_t_StaticInit);
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = ___1_item;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisMultipleSubstitutionRecord_t668A640AFADBD46E3D4EC3A8417D0A02764DF87B_m843FD4A465B7204A130644153874A8AD60827141(L_0, ((int32_t)20), NULL);
	}
	try
	{
		int32_t L_1 = ___0_index;
		RuntimeObject* L_2 = ___1_item;
		List_1_Insert_mDAC169475E46470CB29608353F26912ED76A1FC9(__this, L_1, ((*(MultipleSubstitutionRecord_t668A640AFADBD46E3D4EC3A8417D0A02764DF87B*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 27));
		goto IL_002a;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0017;
		}
		throw e;
	}

CATCH_0017:
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_3 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_4 = ___1_item;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 10)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
		ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_4, L_6, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_002a;
	}

IL_002a:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_InsertRange_m9FC373D72507EFA8AA926B0035F0E4326AA4661B (List_1_tD497C1314C02F6E7345D74565C2424A939B46AA7* __this, int32_t ___0_index, RuntimeObject* ___1_collection, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	RuntimeObject* V_2 = NULL;
	{
		RuntimeObject* L_0 = ___1_collection;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(6, NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___0_index;
		int32_t L_2 = __this->____size;
		if ((!(((uint32_t)L_1) > ((uint32_t)L_2))))
		{
			goto IL_0017;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRange_IndexException_mC7661B8C6DD827679C95FC6B6C08F8724174936D(NULL);
	}

IL_0017:
	{
		RuntimeObject* L_3 = ___1_collection;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_3, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2)));
		RuntimeObject* L_4 = V_0;
		if (!L_4)
		{
			goto IL_00bc;
		}
	}
	{
		RuntimeObject* L_5 = V_0;
		int32_t L_6;
		L_6 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_5);
		V_1 = L_6;
		int32_t L_7 = V_1;
		if ((((int32_t)L_7) <= ((int32_t)0)))
		{
			goto IL_00fb;
		}
	}
	{
		int32_t L_8 = __this->____size;
		int32_t L_9 = V_1;
		List_1_EnsureCapacity_m180216A9AD531D62ED1FCA10218B1C20ED75B01D(__this, ((int32_t)il2cpp_codegen_add(L_8, L_9)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 12));
		int32_t L_10 = ___0_index;
		int32_t L_11 = __this->____size;
		if ((((int32_t)L_10) >= ((int32_t)L_11)))
		{
			goto IL_0066;
		}
	}
	{
		MultipleSubstitutionRecordU5BU5D_t97C158785342D9FF7B0B89861AC760DE6E38E934* L_12 = __this->____items;
		int32_t L_13 = ___0_index;
		MultipleSubstitutionRecordU5BU5D_t97C158785342D9FF7B0B89861AC760DE6E38E934* L_14 = __this->____items;
		int32_t L_15 = ___0_index;
		int32_t L_16 = V_1;
		int32_t L_17 = __this->____size;
		int32_t L_18 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_12, L_13, (RuntimeArray*)L_14, ((int32_t)il2cpp_codegen_add(L_15, L_16)), ((int32_t)il2cpp_codegen_subtract(L_17, L_18)), NULL);
	}

IL_0066:
	{
		RuntimeObject* L_19 = V_0;
		if ((!(((RuntimeObject*)(List_1_tD497C1314C02F6E7345D74565C2424A939B46AA7*)__this) == ((RuntimeObject*)(RuntimeObject*)L_19))))
		{
			goto IL_009f;
		}
	}
	{
		MultipleSubstitutionRecordU5BU5D_t97C158785342D9FF7B0B89861AC760DE6E38E934* L_20 = __this->____items;
		MultipleSubstitutionRecordU5BU5D_t97C158785342D9FF7B0B89861AC760DE6E38E934* L_21 = __this->____items;
		int32_t L_22 = ___0_index;
		int32_t L_23 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_20, 0, (RuntimeArray*)L_21, L_22, L_23, NULL);
		MultipleSubstitutionRecordU5BU5D_t97C158785342D9FF7B0B89861AC760DE6E38E934* L_24 = __this->____items;
		int32_t L_25 = ___0_index;
		int32_t L_26 = V_1;
		MultipleSubstitutionRecordU5BU5D_t97C158785342D9FF7B0B89861AC760DE6E38E934* L_27 = __this->____items;
		int32_t L_28 = ___0_index;
		int32_t L_29 = __this->____size;
		int32_t L_30 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_24, ((int32_t)il2cpp_codegen_add(L_25, L_26)), (RuntimeArray*)L_27, ((int32_t)il2cpp_codegen_multiply(L_28, 2)), ((int32_t)il2cpp_codegen_subtract(L_29, L_30)), NULL);
		goto IL_00ac;
	}

IL_009f:
	{
		RuntimeObject* L_31 = V_0;
		MultipleSubstitutionRecordU5BU5D_t97C158785342D9FF7B0B89861AC760DE6E38E934* L_32 = __this->____items;
		int32_t L_33 = ___0_index;
		InterfaceActionInvoker2< MultipleSubstitutionRecordU5BU5D_t97C158785342D9FF7B0B89861AC760DE6E38E934*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_31, L_32, L_33);
	}

IL_00ac:
	{
		int32_t L_34 = __this->____size;
		int32_t L_35 = V_1;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_34, L_35));
		goto IL_00fb;
	}

IL_00bc:
	{
		int32_t L_36 = ___0_index;
		int32_t L_37 = __this->____size;
		if ((((int32_t)L_36) >= ((int32_t)L_37)))
		{
			goto IL_00f4;
		}
	}
	{
		RuntimeObject* L_38 = ___1_collection;
		RuntimeObject* L_39;
		L_39 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 28), L_38);
		V_2 = L_39;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00ea:
			{
				{
					RuntimeObject* L_40 = V_2;
					if (!L_40)
					{
						goto IL_00f3;
					}
				}
				{
					RuntimeObject* L_41 = V_2;
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_41);
				}

IL_00f3:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_00e0_1;
			}

IL_00ce_1:
			{
				int32_t L_42 = ___0_index;
				int32_t L_43 = L_42;
				___0_index = ((int32_t)il2cpp_codegen_add(L_43, 1));
				RuntimeObject* L_44 = V_2;
				MultipleSubstitutionRecord_t668A640AFADBD46E3D4EC3A8417D0A02764DF87B L_45;
				L_45 = InterfaceFuncInvoker0< MultipleSubstitutionRecord_t668A640AFADBD46E3D4EC3A8417D0A02764DF87B >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 30), L_44);
				List_1_Insert_mDAC169475E46470CB29608353F26912ED76A1FC9(__this, L_43, L_45, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 27));
			}

IL_00e0_1:
			{
				RuntimeObject* L_46 = V_2;
				bool L_47;
				L_47 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_46);
				if (L_47)
				{
					goto IL_00ce_1;
				}
			}
			{
				goto IL_00fb;
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

IL_00f4:
	{
		RuntimeObject* L_48 = ___1_collection;
		List_1_AddEnumerable_m25823106E60B95872432336B618BDD1803315582(__this, L_48, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 5));
	}

IL_00fb:
	{
		int32_t L_49 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_49, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m510D1D4DE405150EAA15D441E0CC258E93A0B356 (List_1_tD497C1314C02F6E7345D74565C2424A939B46AA7* __this, MultipleSubstitutionRecord_t668A640AFADBD46E3D4EC3A8417D0A02764DF87B ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		MultipleSubstitutionRecord_t668A640AFADBD46E3D4EC3A8417D0A02764DF87B L_0 = ___0_item;
		int32_t L_1;
		L_1 = List_1_IndexOf_m0C575610DA6F18B107BF64C0419E839CC142DF77(__this, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 17));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		int32_t L_3 = V_0;
		List_1_RemoveAt_m90B7FA9455E3D72C4484BE06F69564F8CB1BA700(__this, L_3, NULL);
		return (bool)1;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_System_Collections_IList_Remove_m163A8EBFEB43A9380972796A38736A6515100188 (List_1_tD497C1314C02F6E7345D74565C2424A939B46AA7* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit);
	{
		RuntimeObject* L_0 = ___0_item;
		CHECKED_LOCAL_INIT(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)),il2cpp_codegen_runtime_class_init_inline);
		bool L_1;
		L_1 = List_1_IsCompatibleObject_m90D54C1B434CCE6C46663223C6C888D98EBDE0F2(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 18));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_item;
		bool L_3;
		L_3 = List_1_Remove_m510D1D4DE405150EAA15D441E0CC258E93A0B356(__this, ((*(MultipleSubstitutionRecord_t668A640AFADBD46E3D4EC3A8417D0A02764DF87B*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 33));
	}

IL_0015:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_RemoveAll_m6922EF77D564BF7ED78F59D6F1F04C973FF698D3 (List_1_tD497C1314C02F6E7345D74565C2424A939B46AA7* __this, Predicate_1_tB19E1C7275588953C5ED1BC720F0294C2011833E* ___0_match, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Predicate_1_tB19E1C7275588953C5ED1BC720F0294C2011833E* L_0 = ___0_match;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(8, NULL);
	}

IL_0009:
	{
		V_0 = 0;
		goto IL_0011;
	}

IL_000d:
	{
		int32_t L_1 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_1, 1));
	}

IL_0011:
	{
		int32_t L_2 = V_0;
		int32_t L_3 = __this->____size;
		if ((((int32_t)L_2) >= ((int32_t)L_3)))
		{
			goto IL_002e;
		}
	}
	{
		Predicate_1_tB19E1C7275588953C5ED1BC720F0294C2011833E* L_4 = ___0_match;
		MultipleSubstitutionRecordU5BU5D_t97C158785342D9FF7B0B89861AC760DE6E38E934* L_5 = __this->____items;
		int32_t L_6 = V_0;
		int32_t L_7 = L_6;
		MultipleSubstitutionRecord_t668A640AFADBD46E3D4EC3A8417D0A02764DF87B L_8 = (L_5)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7));
		bool L_9;
		L_9 = Predicate_1_Invoke_m8B262358618A1C8806C5F73FAC6805666D1E1D30_inline(L_4, L_8, NULL);
		if (!L_9)
		{
			goto IL_000d;
		}
	}

IL_002e:
	{
		int32_t L_10 = V_0;
		int32_t L_11 = __this->____size;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_0039;
		}
	}
	{
		return 0;
	}

IL_0039:
	{
		int32_t L_12 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
		goto IL_0089;
	}

IL_003f:
	{
		int32_t L_13 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0043:
	{
		int32_t L_14 = V_1;
		int32_t L_15 = __this->____size;
		if ((((int32_t)L_14) >= ((int32_t)L_15)))
		{
			goto IL_0060;
		}
	}
	{
		Predicate_1_tB19E1C7275588953C5ED1BC720F0294C2011833E* L_16 = ___0_match;
		MultipleSubstitutionRecordU5BU5D_t97C158785342D9FF7B0B89861AC760DE6E38E934* L_17 = __this->____items;
		int32_t L_18 = V_1;
		int32_t L_19 = L_18;
		MultipleSubstitutionRecord_t668A640AFADBD46E3D4EC3A8417D0A02764DF87B L_20 = (L_17)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_19));
		bool L_21;
		L_21 = Predicate_1_Invoke_m8B262358618A1C8806C5F73FAC6805666D1E1D30_inline(L_16, L_20, NULL);
		if (L_21)
		{
			goto IL_003f;
		}
	}

IL_0060:
	{
		int32_t L_22 = V_1;
		int32_t L_23 = __this->____size;
		if ((((int32_t)L_22) >= ((int32_t)L_23)))
		{
			goto IL_0089;
		}
	}
	{
		MultipleSubstitutionRecordU5BU5D_t97C158785342D9FF7B0B89861AC760DE6E38E934* L_24 = __this->____items;
		int32_t L_25 = V_0;
		int32_t L_26 = L_25;
		V_0 = ((int32_t)il2cpp_codegen_add(L_26, 1));
		MultipleSubstitutionRecordU5BU5D_t97C158785342D9FF7B0B89861AC760DE6E38E934* L_27 = __this->____items;
		int32_t L_28 = V_1;
		int32_t L_29 = L_28;
		V_1 = ((int32_t)il2cpp_codegen_add(L_29, 1));
		int32_t L_30 = L_29;
		MultipleSubstitutionRecord_t668A640AFADBD46E3D4EC3A8417D0A02764DF87B L_31 = (L_27)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_30));
		(L_24)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_26), (MultipleSubstitutionRecord_t668A640AFADBD46E3D4EC3A8417D0A02764DF87B)L_31);
	}

IL_0089:
	{
		int32_t L_32 = V_1;
		int32_t L_33 = __this->____size;
		if ((((int32_t)L_32) < ((int32_t)L_33)))
		{
			goto IL_0043;
		}
	}
	{
	}
	{
		MultipleSubstitutionRecordU5BU5D_t97C158785342D9FF7B0B89861AC760DE6E38E934* L_34 = __this->____items;
		int32_t L_35 = V_0;
		int32_t L_36 = __this->____size;
		int32_t L_37 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_34, L_35, ((int32_t)il2cpp_codegen_subtract(L_36, L_37)), NULL);
	}

IL_00ad:
	{
		int32_t L_38 = __this->____size;
		int32_t L_39 = V_0;
		int32_t L_40 = V_0;
		__this->____size = L_40;
		int32_t L_41 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_41, 1));
		return ((int32_t)il2cpp_codegen_subtract(L_38, L_39));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_m90B7FA9455E3D72C4484BE06F69564F8CB1BA700 (List_1_tD497C1314C02F6E7345D74565C2424A939B46AA7* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	MultipleSubstitutionRecord_t668A640AFADBD46E3D4EC3A8417D0A02764DF87B V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRange_IndexException_mC7661B8C6DD827679C95FC6B6C08F8724174936D(NULL);
	}

IL_000e:
	{
		int32_t L_2 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_2, 1));
		int32_t L_3 = ___0_index;
		int32_t L_4 = __this->____size;
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_0042;
		}
	}
	{
		MultipleSubstitutionRecordU5BU5D_t97C158785342D9FF7B0B89861AC760DE6E38E934* L_5 = __this->____items;
		int32_t L_6 = ___0_index;
		MultipleSubstitutionRecordU5BU5D_t97C158785342D9FF7B0B89861AC760DE6E38E934* L_7 = __this->____items;
		int32_t L_8 = ___0_index;
		int32_t L_9 = __this->____size;
		int32_t L_10 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, ((int32_t)il2cpp_codegen_add(L_6, 1)), (RuntimeArray*)L_7, L_8, ((int32_t)il2cpp_codegen_subtract(L_9, L_10)), NULL);
	}

IL_0042:
	{
	}
	{
		MultipleSubstitutionRecordU5BU5D_t97C158785342D9FF7B0B89861AC760DE6E38E934* L_11 = __this->____items;
		int32_t L_12 = __this->____size;
		il2cpp_codegen_initobj((&V_0), sizeof(MultipleSubstitutionRecord_t668A640AFADBD46E3D4EC3A8417D0A02764DF87B));
		MultipleSubstitutionRecord_t668A640AFADBD46E3D4EC3A8417D0A02764DF87B L_13 = V_0;
		(L_11)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_12), (MultipleSubstitutionRecord_t668A640AFADBD46E3D4EC3A8417D0A02764DF87B)L_13);
	}

IL_0063:
	{
		int32_t L_14 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_14, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveRange_m8A7EA8EE79AC50500E01CD467047FE5D42B0828F (List_1_tD497C1314C02F6E7345D74565C2424A939B46AA7* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_count;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F(((int32_t)16), 4, NULL);
	}

IL_0015:
	{
		int32_t L_2 = __this->____size;
		int32_t L_3 = ___0_index;
		int32_t L_4 = ___1_count;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_2, L_3))) >= ((int32_t)L_4)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(((int32_t)23), NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_count;
		if ((((int32_t)L_5) <= ((int32_t)0)))
		{
			goto IL_008d;
		}
	}
	{
		int32_t L_6 = __this->____size;
		int32_t L_7 = __this->____size;
		int32_t L_8 = ___1_count;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_7, L_8));
		int32_t L_9 = ___0_index;
		int32_t L_10 = __this->____size;
		if ((((int32_t)L_9) >= ((int32_t)L_10)))
		{
			goto IL_0066;
		}
	}
	{
		MultipleSubstitutionRecordU5BU5D_t97C158785342D9FF7B0B89861AC760DE6E38E934* L_11 = __this->____items;
		int32_t L_12 = ___0_index;
		int32_t L_13 = ___1_count;
		MultipleSubstitutionRecordU5BU5D_t97C158785342D9FF7B0B89861AC760DE6E38E934* L_14 = __this->____items;
		int32_t L_15 = ___0_index;
		int32_t L_16 = __this->____size;
		int32_t L_17 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_11, ((int32_t)il2cpp_codegen_add(L_12, L_13)), (RuntimeArray*)L_14, L_15, ((int32_t)il2cpp_codegen_subtract(L_16, L_17)), NULL);
	}

IL_0066:
	{
		int32_t L_18 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}
	{
		MultipleSubstitutionRecordU5BU5D_t97C158785342D9FF7B0B89861AC760DE6E38E934* L_19 = __this->____items;
		int32_t L_20 = __this->____size;
		int32_t L_21 = ___1_count;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_19, L_20, L_21, NULL);
	}

IL_008d:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Reverse_mAD202D6174F4023A91A72F7A443BDCD9845DB77A (List_1_tD497C1314C02F6E7345D74565C2424A939B46AA7* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = List_1_get_Count_m381F792E8E05E4C9DCD31FC82F25FF56DCD07C23_inline(__this, NULL);
		List_1_Reverse_mB3CBE4370D0FA013BAFBE1137FAC0EB8E72B75BC(__this, 0, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 35));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Reverse_mB3CBE4370D0FA013BAFBE1137FAC0EB8E72B75BC (List_1_tD497C1314C02F6E7345D74565C2424A939B46AA7* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_count;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F(((int32_t)16), 4, NULL);
	}

IL_0015:
	{
		int32_t L_2 = __this->____size;
		int32_t L_3 = ___0_index;
		int32_t L_4 = ___1_count;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_2, L_3))) >= ((int32_t)L_4)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(((int32_t)23), NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_count;
		if ((((int32_t)L_5) <= ((int32_t)1)))
		{
			goto IL_0038;
		}
	}
	{
		MultipleSubstitutionRecordU5BU5D_t97C158785342D9FF7B0B89861AC760DE6E38E934* L_6 = __this->____items;
		int32_t L_7 = ___0_index;
		int32_t L_8 = ___1_count;
		Array_Reverse_TisMultipleSubstitutionRecord_t668A640AFADBD46E3D4EC3A8417D0A02764DF87B_mECAA0E7F9376FE8592BF74D8038E58A4C90A0BAF(L_6, L_7, L_8, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 36));
	}

IL_0038:
	{
		int32_t L_9 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_9, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_mAFCA7CBAAA747FA4074064AF734A249E2856DBC2 (List_1_tD497C1314C02F6E7345D74565C2424A939B46AA7* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = List_1_get_Count_m381F792E8E05E4C9DCD31FC82F25FF56DCD07C23_inline(__this, NULL);
		RuntimeObject* L_1 = ___0_comparer;
		List_1_Sort_m294CF087114C8BCD7ED5C165B49965B2E63C2E7D(__this, 0, L_0, L_1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 37));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_m294CF087114C8BCD7ED5C165B49965B2E63C2E7D (List_1_tD497C1314C02F6E7345D74565C2424A939B46AA7* __this, int32_t ___0_index, int32_t ___1_count, RuntimeObject* ___2_comparer, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_count;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F(((int32_t)16), 4, NULL);
	}

IL_0015:
	{
		int32_t L_2 = __this->____size;
		int32_t L_3 = ___0_index;
		int32_t L_4 = ___1_count;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_2, L_3))) >= ((int32_t)L_4)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(((int32_t)23), NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_count;
		if ((((int32_t)L_5) <= ((int32_t)1)))
		{
			goto IL_0039;
		}
	}
	{
		MultipleSubstitutionRecordU5BU5D_t97C158785342D9FF7B0B89861AC760DE6E38E934* L_6 = __this->____items;
		int32_t L_7 = ___0_index;
		int32_t L_8 = ___1_count;
		RuntimeObject* L_9 = ___2_comparer;
		Array_Sort_TisMultipleSubstitutionRecord_t668A640AFADBD46E3D4EC3A8417D0A02764DF87B_m9B714671AD166C36DC78E505CA0B7739F6AF7084(L_6, L_7, L_8, L_9, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 38));
	}

IL_0039:
	{
		int32_t L_10 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_10, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_mCBB69E0C660475976F784FE05E18C6CDE18CACF2 (List_1_tD497C1314C02F6E7345D74565C2424A939B46AA7* __this, Comparison_1_t9A125FC4BBCDF36E042FD4E1BC9A5C86A812BB72* ___0_comparison, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(ArraySortHelper_1_t0B69B36E8E1F97490E6BE32C23AE1784AB1ADA3A_StaticInit);
	{
		Comparison_1_t9A125FC4BBCDF36E042FD4E1BC9A5C86A812BB72* L_0 = ___0_comparison;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(((int32_t)34), NULL);
	}

IL_000a:
	{
		int32_t L_1 = __this->____size;
		if ((((int32_t)L_1) <= ((int32_t)1)))
		{
			goto IL_0026;
		}
	}
	{
		MultipleSubstitutionRecordU5BU5D_t97C158785342D9FF7B0B89861AC760DE6E38E934* L_2 = __this->____items;
		int32_t L_3 = __this->____size;
		Comparison_1_t9A125FC4BBCDF36E042FD4E1BC9A5C86A812BB72* L_4 = ___0_comparison;
		CHECKED_LOCAL_INIT(ArraySortHelper_1_t0B69B36E8E1F97490E6BE32C23AE1784AB1ADA3A_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 40)),il2cpp_codegen_runtime_class_init_inline);
		ArraySortHelper_1_Sort_m7AC53717D492DB26AEB178A9A8E35EA2ECA12A24(L_2, 0, L_3, L_4, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 39));
	}

IL_0026:
	{
		int32_t L_5 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_5, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MultipleSubstitutionRecordU5BU5D_t97C158785342D9FF7B0B89861AC760DE6E38E934* List_1_ToArray_m2E210B41EAAB2D9F512A983B7A4F4C5F2B74876B (List_1_tD497C1314C02F6E7345D74565C2424A939B46AA7* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit);
	MultipleSubstitutionRecordU5BU5D_t97C158785342D9FF7B0B89861AC760DE6E38E934* V_0 = NULL;
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		CHECKED_LOCAL_INIT(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)),il2cpp_codegen_runtime_class_init_inline);
		MultipleSubstitutionRecordU5BU5D_t97C158785342D9FF7B0B89861AC760DE6E38E934* L_1 = ((List_1_tD497C1314C02F6E7345D74565C2424A939B46AA7_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)))->___s_emptyArray;
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____size;
		MultipleSubstitutionRecordU5BU5D_t97C158785342D9FF7B0B89861AC760DE6E38E934* L_3 = (MultipleSubstitutionRecordU5BU5D_t97C158785342D9FF7B0B89861AC760DE6E38E934*)(MultipleSubstitutionRecordU5BU5D_t97C158785342D9FF7B0B89861AC760DE6E38E934*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1), (uint32_t)L_2);
		V_0 = L_3;
		MultipleSubstitutionRecordU5BU5D_t97C158785342D9FF7B0B89861AC760DE6E38E934* L_4 = __this->____items;
		MultipleSubstitutionRecordU5BU5D_t97C158785342D9FF7B0B89861AC760DE6E38E934* L_5 = V_0;
		int32_t L_6 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_4, 0, (RuntimeArray*)L_5, 0, L_6, NULL);
		MultipleSubstitutionRecordU5BU5D_t97C158785342D9FF7B0B89861AC760DE6E38E934* L_7 = V_0;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddEnumerable_m25823106E60B95872432336B618BDD1803315582 (List_1_tD497C1314C02F6E7345D74565C2424A939B46AA7* __this, RuntimeObject* ___0_enumerable, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	MultipleSubstitutionRecord_t668A640AFADBD46E3D4EC3A8417D0A02764DF87B V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		RuntimeObject* L_1 = ___0_enumerable;
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 28), L_1);
		V_0 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0063:
			{
				{
					RuntimeObject* L_3 = V_0;
					if (!L_3)
					{
						goto IL_006c;
					}
				}
				{
					RuntimeObject* L_4 = V_0;
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_4);
				}

IL_006c:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_0059_1;
			}

IL_0017_1:
			{
				RuntimeObject* L_5 = V_0;
				MultipleSubstitutionRecord_t668A640AFADBD46E3D4EC3A8417D0A02764DF87B L_6;
				L_6 = InterfaceFuncInvoker0< MultipleSubstitutionRecord_t668A640AFADBD46E3D4EC3A8417D0A02764DF87B >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 30), L_5);
				V_1 = L_6;
				int32_t L_7 = __this->____size;
				MultipleSubstitutionRecordU5BU5D_t97C158785342D9FF7B0B89861AC760DE6E38E934* L_8 = __this->____items;
				int32_t L_9 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_8)->max_length),NULL));
				if ((!(((uint32_t)L_7) == ((uint32_t)L_9))))
				{
					goto IL_003c_1;
				}
			}
			{
				int32_t L_10 = __this->____size;
				List_1_EnsureCapacity_m180216A9AD531D62ED1FCA10218B1C20ED75B01D(__this, ((int32_t)il2cpp_codegen_add(L_10, 1)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 12));
			}

IL_003c_1:
			{
				MultipleSubstitutionRecordU5BU5D_t97C158785342D9FF7B0B89861AC760DE6E38E934* L_11 = __this->____items;
				int32_t L_12 = __this->____size;
				V_2 = L_12;
				int32_t L_13 = V_2;
				__this->____size = ((int32_t)il2cpp_codegen_add(L_13, 1));
				int32_t L_14 = V_2;
				MultipleSubstitutionRecord_t668A640AFADBD46E3D4EC3A8417D0A02764DF87B L_15 = V_1;
				(L_11)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_14), (MultipleSubstitutionRecord_t668A640AFADBD46E3D4EC3A8417D0A02764DF87B)L_15);
			}

IL_0059_1:
			{
				RuntimeObject* L_16 = V_0;
				bool L_17;
				L_17 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_16);
				if (L_17)
				{
					goto IL_0017_1;
				}
			}
			{
				goto IL_006d;
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

IL_006d:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__cctor_mBBBA3F02D3B8FE681E36B189E69E6D6673F26D12 (const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	{
		MultipleSubstitutionRecordU5BU5D_t97C158785342D9FF7B0B89861AC760DE6E38E934* L_0 = (MultipleSubstitutionRecordU5BU5D_t97C158785342D9FF7B0B89861AC760DE6E38E934*)(MultipleSubstitutionRecordU5BU5D_t97C158785342D9FF7B0B89861AC760DE6E38E934*)SZArrayNew(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1), (uint32_t)0);
		((List_1_tD497C1314C02F6E7345D74565C2424A939B46AA7_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___s_emptyArray = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((List_1_tD497C1314C02F6E7345D74565C2424A939B46AA7_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___s_emptyArray), (void*)L_0);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m514A917546C862D189702294180E2CD8F1EC7920 (List_1_t480A595B8D45A9019FF0E9A33AD53D81F7355674* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit);
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		CHECKED_LOCAL_INIT(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)),il2cpp_codegen_runtime_class_init_inline);
		ResourceHandleU5BU5D_tD8EAD492F528F246F46563C67691360F9F2B0918* L_0 = ((List_1_t480A595B8D45A9019FF0E9A33AD53D81F7355674_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)))->___s_emptyArray;
		__this->____items = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mBB1736A52639A5F2DB93050D54A1E96F9ABDEE47 (List_1_t480A595B8D45A9019FF0E9A33AD53D81F7355674* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit);
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0012;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F(((int32_t)12), 4, NULL);
	}

IL_0012:
	{
		int32_t L_1 = ___0_capacity;
		if (L_1)
		{
			goto IL_0021;
		}
	}
	{
		CHECKED_LOCAL_INIT(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)),il2cpp_codegen_runtime_class_init_inline);
		ResourceHandleU5BU5D_tD8EAD492F528F246F46563C67691360F9F2B0918* L_2 = ((List_1_t480A595B8D45A9019FF0E9A33AD53D81F7355674_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)))->___s_emptyArray;
		__this->____items = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_2);
		return;
	}

IL_0021:
	{
		int32_t L_3 = ___0_capacity;
		ResourceHandleU5BU5D_tD8EAD492F528F246F46563C67691360F9F2B0918* L_4 = (ResourceHandleU5BU5D_tD8EAD492F528F246F46563C67691360F9F2B0918*)(ResourceHandleU5BU5D_tD8EAD492F528F246F46563C67691360F9F2B0918*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1), (uint32_t)L_3);
		__this->____items = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_4);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m3B39D0F5983BD0822EDB07C5EDE75EDFD699DE14 (List_1_t480A595B8D45A9019FF0E9A33AD53D81F7355674* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit);
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_collection;
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(6, NULL);
	}

IL_000f:
	{
		RuntimeObject* L_1 = ___0_collection;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_1, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2)));
		RuntimeObject* L_2 = V_0;
		if (!L_2)
		{
			goto IL_0050;
		}
	}
	{
		RuntimeObject* L_3 = V_0;
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_3);
		V_1 = L_4;
		int32_t L_5 = V_1;
		if (L_5)
		{
			goto IL_002f;
		}
	}
	{
		CHECKED_LOCAL_INIT(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)),il2cpp_codegen_runtime_class_init_inline);
		ResourceHandleU5BU5D_tD8EAD492F528F246F46563C67691360F9F2B0918* L_6 = ((List_1_t480A595B8D45A9019FF0E9A33AD53D81F7355674_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)))->___s_emptyArray;
		__this->____items = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_6);
		return;
	}

IL_002f:
	{
		int32_t L_7 = V_1;
		ResourceHandleU5BU5D_tD8EAD492F528F246F46563C67691360F9F2B0918* L_8 = (ResourceHandleU5BU5D_tD8EAD492F528F246F46563C67691360F9F2B0918*)(ResourceHandleU5BU5D_tD8EAD492F528F246F46563C67691360F9F2B0918*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1), (uint32_t)L_7);
		__this->____items = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_8);
		RuntimeObject* L_9 = V_0;
		ResourceHandleU5BU5D_tD8EAD492F528F246F46563C67691360F9F2B0918* L_10 = __this->____items;
		InterfaceActionInvoker2< ResourceHandleU5BU5D_tD8EAD492F528F246F46563C67691360F9F2B0918*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_9, L_10, 0);
		int32_t L_11 = V_1;
		__this->____size = L_11;
		return;
	}

IL_0050:
	{
		__this->____size = 0;
		CHECKED_LOCAL_INIT(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)),il2cpp_codegen_runtime_class_init_inline);
		ResourceHandleU5BU5D_tD8EAD492F528F246F46563C67691360F9F2B0918* L_12 = ((List_1_t480A595B8D45A9019FF0E9A33AD53D81F7355674_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)))->___s_emptyArray;
		__this->____items = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_12);
		RuntimeObject* L_13 = ___0_collection;
		List_1_AddEnumerable_m4E122E2502A8627C778FE4556937C624B46C7997(__this, L_13, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 5));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Capacity_m5206BE528EF098F0A05B20F06F65AF72FD28CC3D (List_1_t480A595B8D45A9019FF0E9A33AD53D81F7355674* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit);
	ResourceHandleU5BU5D_tD8EAD492F528F246F46563C67691360F9F2B0918* V_0 = NULL;
	{
		int32_t L_0 = ___0_value;
		int32_t L_1 = __this->____size;
		if ((((int32_t)L_0) >= ((int32_t)L_1)))
		{
			goto IL_0012;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F(((int32_t)15), ((int32_t)21), NULL);
	}

IL_0012:
	{
		int32_t L_2 = ___0_value;
		ResourceHandleU5BU5D_tD8EAD492F528F246F46563C67691360F9F2B0918* L_3 = __this->____items;
		int32_t L_4 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_3)->max_length),NULL));
		if ((((int32_t)L_2) == ((int32_t)L_4)))
		{
			goto IL_0058;
		}
	}
	{
		int32_t L_5 = ___0_value;
		if ((((int32_t)L_5) <= ((int32_t)0)))
		{
			goto IL_004d;
		}
	}
	{
		int32_t L_6 = ___0_value;
		ResourceHandleU5BU5D_tD8EAD492F528F246F46563C67691360F9F2B0918* L_7 = (ResourceHandleU5BU5D_tD8EAD492F528F246F46563C67691360F9F2B0918*)(ResourceHandleU5BU5D_tD8EAD492F528F246F46563C67691360F9F2B0918*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1), (uint32_t)L_6);
		V_0 = L_7;
		int32_t L_8 = __this->____size;
		if ((((int32_t)L_8) <= ((int32_t)0)))
		{
			goto IL_0045;
		}
	}
	{
		ResourceHandleU5BU5D_tD8EAD492F528F246F46563C67691360F9F2B0918* L_9 = __this->____items;
		ResourceHandleU5BU5D_tD8EAD492F528F246F46563C67691360F9F2B0918* L_10 = V_0;
		int32_t L_11 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_9, 0, (RuntimeArray*)L_10, 0, L_11, NULL);
	}

IL_0045:
	{
		ResourceHandleU5BU5D_tD8EAD492F528F246F46563C67691360F9F2B0918* L_12 = V_0;
		__this->____items = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_12);
		return;
	}

IL_004d:
	{
		CHECKED_LOCAL_INIT(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)),il2cpp_codegen_runtime_class_init_inline);
		ResourceHandleU5BU5D_tD8EAD492F528F246F46563C67691360F9F2B0918* L_13 = ((List_1_t480A595B8D45A9019FF0E9A33AD53D81F7355674_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)))->___s_emptyArray;
		__this->____items = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_13);
	}

IL_0058:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ResourceHandle_tAB7888F3AB5071C94127D0D46AAB3D702BC4B9F8 List_1_get_Item_mD173DE9CD6A82455F2B1CB9778BE90B63FF73391 (List_1_t480A595B8D45A9019FF0E9A33AD53D81F7355674* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRange_IndexException_mC7661B8C6DD827679C95FC6B6C08F8724174936D(NULL);
	}

IL_000e:
	{
		ResourceHandleU5BU5D_tD8EAD492F528F246F46563C67691360F9F2B0918* L_2 = __this->____items;
		int32_t L_3 = ___0_index;
		int32_t L_4 = L_3;
		ResourceHandle_tAB7888F3AB5071C94127D0D46AAB3D702BC4B9F8 L_5 = (L_2)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_mB2BEDCB542156BEC23496A84CFE200BC8782E57D (List_1_t480A595B8D45A9019FF0E9A33AD53D81F7355674* __this, int32_t ___0_index, ResourceHandle_tAB7888F3AB5071C94127D0D46AAB3D702BC4B9F8 ___1_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRange_IndexException_mC7661B8C6DD827679C95FC6B6C08F8724174936D(NULL);
	}

IL_000e:
	{
		ResourceHandleU5BU5D_tD8EAD492F528F246F46563C67691360F9F2B0918* L_2 = __this->____items;
		int32_t L_3 = ___0_index;
		ResourceHandle_tAB7888F3AB5071C94127D0D46AAB3D702BC4B9F8 L_4 = ___1_value;
		(L_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3), (ResourceHandle_tAB7888F3AB5071C94127D0D46AAB3D702BC4B9F8)L_4);
		int32_t L_5 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_5, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_IsCompatibleObject_m4F61B731116EA18BCF77D3B5EA97CC7F6B74BA8E (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	ResourceHandle_tAB7888F3AB5071C94127D0D46AAB3D702BC4B9F8 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6))))
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(ResourceHandle_tAB7888F3AB5071C94127D0D46AAB3D702BC4B9F8));
		ResourceHandle_tAB7888F3AB5071C94127D0D46AAB3D702BC4B9F8 L_2 = V_0;
		return false;
	}

IL_001d:
	{
		return (bool)0;
	}

IL_001f:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_System_Collections_IList_get_Item_m04B457695937A66E06396700583FD6C35835CB74 (List_1_t480A595B8D45A9019FF0E9A33AD53D81F7355674* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		ResourceHandle_tAB7888F3AB5071C94127D0D46AAB3D702BC4B9F8 L_1;
		L_1 = List_1_get_Item_mD173DE9CD6A82455F2B1CB9778BE90B63FF73391(__this, L_0, NULL);
		ResourceHandle_tAB7888F3AB5071C94127D0D46AAB3D702BC4B9F8 L_2 = L_1;
		RuntimeObject* L_3 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6), &L_2);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_System_Collections_IList_set_Item_m45071D63DE985740B34DC7F52D98FF648E13A24D (List_1_t480A595B8D45A9019FF0E9A33AD53D81F7355674* __this, int32_t ___0_index, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(Type_t_StaticInit);
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = ___1_value;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisResourceHandle_tAB7888F3AB5071C94127D0D46AAB3D702BC4B9F8_mA91A20BD242392A65004CD8897E77F0A9BA80940(L_0, ((int32_t)15), NULL);
	}
	try
	{
		int32_t L_1 = ___0_index;
		RuntimeObject* L_2 = ___1_value;
		List_1_set_Item_mB2BEDCB542156BEC23496A84CFE200BC8782E57D(__this, L_1, ((*(ResourceHandle_tAB7888F3AB5071C94127D0D46AAB3D702BC4B9F8*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6)))), NULL);
		goto IL_002a;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0017;
		}
		throw e;
	}

CATCH_0017:
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_3 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_4 = ___1_value;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 10)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
		ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_4, L_6, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_002a;
	}

IL_002a:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mF04CCC12DEF9C866AC5DC5330FDC48AB65CCA024 (List_1_t480A595B8D45A9019FF0E9A33AD53D81F7355674* __this, ResourceHandle_tAB7888F3AB5071C94127D0D46AAB3D702BC4B9F8 ___0_item, const RuntimeMethod* method) 
{
	ResourceHandleU5BU5D_tD8EAD492F528F246F46563C67691360F9F2B0918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ResourceHandleU5BU5D_tD8EAD492F528F246F46563C67691360F9F2B0918* L_1 = __this->____items;
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ResourceHandleU5BU5D_tD8EAD492F528F246F46563C67691360F9F2B0918* L_4 = V_0;
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		if ((!(((uint32_t)L_3) < ((uint32_t)L_5))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_6 = V_1;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_6, 1));
		ResourceHandleU5BU5D_tD8EAD492F528F246F46563C67691360F9F2B0918* L_7 = V_0;
		int32_t L_8 = V_1;
		ResourceHandle_tAB7888F3AB5071C94127D0D46AAB3D702BC4B9F8 L_9 = ___0_item;
		(L_7)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_8), (ResourceHandle_tAB7888F3AB5071C94127D0D46AAB3D702BC4B9F8)L_9);
		return;
	}

IL_0034:
	{
		ResourceHandle_tAB7888F3AB5071C94127D0D46AAB3D702BC4B9F8 L_10 = ___0_item;
		List_1_AddWithResize_m28AFC3F6D5F6FE74B5CC7A3E42AC5CC6FFE0F2B8(__this, L_10, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 11));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_m28AFC3F6D5F6FE74B5CC7A3E42AC5CC6FFE0F2B8 (List_1_t480A595B8D45A9019FF0E9A33AD53D81F7355674* __this, ResourceHandle_tAB7888F3AB5071C94127D0D46AAB3D702BC4B9F8 ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____size;
		V_0 = L_0;
		int32_t L_1 = V_0;
		List_1_EnsureCapacity_m5056E5ED803534E727AD5E9FAEC838428ACC47FB(__this, ((int32_t)il2cpp_codegen_add(L_1, 1)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 12));
		int32_t L_2 = V_0;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_2, 1));
		ResourceHandleU5BU5D_tD8EAD492F528F246F46563C67691360F9F2B0918* L_3 = __this->____items;
		int32_t L_4 = V_0;
		ResourceHandle_tAB7888F3AB5071C94127D0D46AAB3D702BC4B9F8 L_5 = ___0_item;
		(L_3)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4), (ResourceHandle_tAB7888F3AB5071C94127D0D46AAB3D702BC4B9F8)L_5);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_System_Collections_IList_Add_mD419C884DEA6D2C1C6974E8ED706971AF1408C55 (List_1_t480A595B8D45A9019FF0E9A33AD53D81F7355674* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(Type_t_StaticInit);
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = ___0_item;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisResourceHandle_tAB7888F3AB5071C94127D0D46AAB3D702BC4B9F8_mA91A20BD242392A65004CD8897E77F0A9BA80940(L_0, ((int32_t)20), NULL);
	}
	try
	{
		RuntimeObject* L_1 = ___0_item;
		List_1_Add_mF04CCC12DEF9C866AC5DC5330FDC48AB65CCA024_inline(__this, ((*(ResourceHandle_tAB7888F3AB5071C94127D0D46AAB3D702BC4B9F8*)UnBox(L_1, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		goto IL_0029;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0016;
		}
		throw e;
	}

CATCH_0016:
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_2 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_3 = ___0_item;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_4 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 10)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_5;
		L_5 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_4, NULL);
		ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_3, L_5, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0029;
	}

IL_0029:
	{
		int32_t L_6;
		L_6 = List_1_get_Count_m9F65F44EDFFE199D00E71A358851A11FBF35CA0D_inline(__this, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_6, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddRange_m1ACAE9867614B2E7CB67475FC6E5C5F95C738E32 (List_1_t480A595B8D45A9019FF0E9A33AD53D81F7355674* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		RuntimeObject* L_1 = ___0_collection;
		List_1_InsertRange_m2E53EA9AC569CA67C76F3C118E063BBCF7704CAE(__this, L_0, L_1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 15));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_m927431BEB00B7E74BCD1DA47335D5202240D05AF (List_1_t480A595B8D45A9019FF0E9A33AD53D81F7355674* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		goto IL_0035;
	}

IL_0035:
	{
		__this->____size = 0;
	}

IL_003c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_mD8BB26D8A824572630E9C0E3F4D1DC9A3120F44A (List_1_t480A595B8D45A9019FF0E9A33AD53D81F7355674* __this, ResourceHandle_tAB7888F3AB5071C94127D0D46AAB3D702BC4B9F8 ___0_item, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		ResourceHandle_tAB7888F3AB5071C94127D0D46AAB3D702BC4B9F8 L_1 = ___0_item;
		int32_t L_2;
		L_2 = List_1_IndexOf_m69A02C552A18C10D19C781295373AB8A8AEE5031(__this, L_1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 17));
		return (bool)((((int32_t)((((int32_t)L_2) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0016:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_System_Collections_IList_Contains_mC832E4768CCD26C924DAF74400A6C9090B2F3883 (List_1_t480A595B8D45A9019FF0E9A33AD53D81F7355674* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit);
	{
		RuntimeObject* L_0 = ___0_item;
		CHECKED_LOCAL_INIT(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)),il2cpp_codegen_runtime_class_init_inline);
		bool L_1;
		L_1 = List_1_IsCompatibleObject_m4F61B731116EA18BCF77D3B5EA97CC7F6B74BA8E(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 18));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_item;
		bool L_3;
		L_3 = List_1_Contains_mD8BB26D8A824572630E9C0E3F4D1DC9A3120F44A(__this, ((*(ResourceHandle_tAB7888F3AB5071C94127D0D46AAB3D702BC4B9F8*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 19));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_CopyTo_m95F78FD27E79415CD43804407EFCFFB195316572 (List_1_t480A595B8D45A9019FF0E9A33AD53D81F7355674* __this, ResourceHandleU5BU5D_tD8EAD492F528F246F46563C67691360F9F2B0918* ___0_array, const RuntimeMethod* method) 
{
	{
		ResourceHandleU5BU5D_tD8EAD492F528F246F46563C67691360F9F2B0918* L_0 = ___0_array;
		List_1_CopyTo_m991F7CA6913952712B14D32980B84A10304DCFC0(__this, L_0, 0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_EnsureCapacity_m5056E5ED803534E727AD5E9FAEC838428ACC47FB (List_1_t480A595B8D45A9019FF0E9A33AD53D81F7355674* __this, int32_t ___0_min, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t G_B4_0 = 0;
	{
		ResourceHandleU5BU5D_tD8EAD492F528F246F46563C67691360F9F2B0918* L_0 = __this->____items;
		int32_t L_1 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_0)->max_length),NULL));
		int32_t L_2 = ___0_min;
		if ((((int32_t)L_1) >= ((int32_t)L_2)))
		{
			goto IL_003d;
		}
	}
	{
		ResourceHandleU5BU5D_tD8EAD492F528F246F46563C67691360F9F2B0918* L_3 = __this->____items;
		if (!(((RuntimeArray*)L_3)->max_length))
		{
			goto IL_0020;
		}
	}
	{
		ResourceHandleU5BU5D_tD8EAD492F528F246F46563C67691360F9F2B0918* L_4 = __this->____items;
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		G_B4_0 = ((int32_t)il2cpp_codegen_multiply(L_5, 2));
		goto IL_0021;
	}

IL_0020:
	{
		G_B4_0 = 4;
	}

IL_0021:
	{
		V_0 = G_B4_0;
		int32_t L_6 = V_0;
		if ((!(((uint32_t)L_6) > ((uint32_t)((int32_t)2146435071)))))
		{
			goto IL_0030;
		}
	}
	{
		V_0 = ((int32_t)2146435071);
	}

IL_0030:
	{
		int32_t L_7 = V_0;
		int32_t L_8 = ___0_min;
		if ((((int32_t)L_7) >= ((int32_t)L_8)))
		{
			goto IL_0036;
		}
	}
	{
		int32_t L_9 = ___0_min;
		V_0 = L_9;
	}

IL_0036:
	{
		int32_t L_10 = V_0;
		List_1_set_Capacity_m5206BE528EF098F0A05B20F06F65AF72FD28CC3D(__this, L_10, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 21));
	}

IL_003d:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_ForEach_m962F743E5F945CA61AFE58CD7891718EC630C1DB (List_1_t480A595B8D45A9019FF0E9A33AD53D81F7355674* __this, Action_1_tA9D6FD07CF73C3DCEA4B280667EEFD02150EEA98* ___0_action, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Action_1_tA9D6FD07CF73C3DCEA4B280667EEFD02150EEA98* L_0 = ___0_action;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(((int32_t)33), NULL);
	}

IL_000a:
	{
		int32_t L_1 = __this->____version;
		V_0 = L_1;
		V_1 = 0;
		goto IL_0034;
	}

IL_0015:
	{
		int32_t L_2 = V_0;
		int32_t L_3 = __this->____version;
		if ((!(((uint32_t)L_2) == ((uint32_t)L_3))))
		{
			goto IL_003d;
		}
	}
	{
		Action_1_tA9D6FD07CF73C3DCEA4B280667EEFD02150EEA98* L_4 = ___0_action;
		ResourceHandleU5BU5D_tD8EAD492F528F246F46563C67691360F9F2B0918* L_5 = __this->____items;
		int32_t L_6 = V_1;
		int32_t L_7 = L_6;
		ResourceHandle_tAB7888F3AB5071C94127D0D46AAB3D702BC4B9F8 L_8 = (L_5)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7));
		Action_1_Invoke_m32309F80523567ABFD485831B4D6CF626A350927_inline(L_4, L_8, NULL);
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0034:
	{
		int32_t L_10 = V_1;
		int32_t L_11 = __this->____size;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_0015;
		}
	}

IL_003d:
	{
		int32_t L_12 = V_0;
		int32_t L_13 = __this->____version;
		if ((((int32_t)L_12) == ((int32_t)L_13)))
		{
			goto IL_004b;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_InvalidOperation_EnumFailedVersion_m5331E2E0EC0E36843D53F439C2529530595ACE9F(NULL);
	}

IL_004b:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t1F35D895285609CB64A4AE42EEBBACABF575870C List_1_GetEnumerator_m0A297383A3371D391B0AE99556E2F20608C24CAE (List_1_t480A595B8D45A9019FF0E9A33AD53D81F7355674* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t1F35D895285609CB64A4AE42EEBBACABF575870C L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m835D87EAED18476EAAF9606BFFC75C69A7EF65A8((&L_0), __this, NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m9256A844FA404945E1BA436E3225DC63937E53EE (List_1_t480A595B8D45A9019FF0E9A33AD53D81F7355674* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t1F35D895285609CB64A4AE42EEBBACABF575870C L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m835D87EAED18476EAAF9606BFFC75C69A7EF65A8((&L_0), __this, NULL);
		Enumerator_t1F35D895285609CB64A4AE42EEBBACABF575870C L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 23), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_System_Collections_IEnumerable_GetEnumerator_mDEF9E0A67C74C2B363EAAAB72784DCB15492321A (List_1_t480A595B8D45A9019FF0E9A33AD53D81F7355674* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t1F35D895285609CB64A4AE42EEBBACABF575870C L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m835D87EAED18476EAAF9606BFFC75C69A7EF65A8((&L_0), __this, NULL);
		Enumerator_t1F35D895285609CB64A4AE42EEBBACABF575870C L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 23), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t480A595B8D45A9019FF0E9A33AD53D81F7355674* List_1_GetRange_m143F6821C1A5D91E436DB9048468719156ACD3CD (List_1_t480A595B8D45A9019FF0E9A33AD53D81F7355674* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method) 
{
	List_1_t480A595B8D45A9019FF0E9A33AD53D81F7355674* V_0 = NULL;
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_count;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F(((int32_t)16), 4, NULL);
	}

IL_0015:
	{
		int32_t L_2 = __this->____size;
		int32_t L_3 = ___0_index;
		int32_t L_4 = ___1_count;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_2, L_3))) >= ((int32_t)L_4)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(((int32_t)23), NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_count;
		List_1_t480A595B8D45A9019FF0E9A33AD53D81F7355674* L_6 = (List_1_t480A595B8D45A9019FF0E9A33AD53D81F7355674*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0));
		List_1__ctor_mBB1736A52639A5F2DB93050D54A1E96F9ABDEE47(L_6, L_5, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 25));
		V_0 = L_6;
		ResourceHandleU5BU5D_tD8EAD492F528F246F46563C67691360F9F2B0918* L_7 = __this->____items;
		int32_t L_8 = ___0_index;
		List_1_t480A595B8D45A9019FF0E9A33AD53D81F7355674* L_9 = V_0;
		ResourceHandleU5BU5D_tD8EAD492F528F246F46563C67691360F9F2B0918* L_10 = L_9->____items;
		int32_t L_11 = ___1_count;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_7, L_8, (RuntimeArray*)L_10, 0, L_11, NULL);
		List_1_t480A595B8D45A9019FF0E9A33AD53D81F7355674* L_12 = V_0;
		int32_t L_13 = ___1_count;
		L_12->____size = L_13;
		List_1_t480A595B8D45A9019FF0E9A33AD53D81F7355674* L_14 = V_0;
		return L_14;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_IndexOf_m69A02C552A18C10D19C781295373AB8A8AEE5031 (List_1_t480A595B8D45A9019FF0E9A33AD53D81F7355674* __this, ResourceHandle_tAB7888F3AB5071C94127D0D46AAB3D702BC4B9F8 ___0_item, const RuntimeMethod* method) 
{
	{
		ResourceHandleU5BU5D_tD8EAD492F528F246F46563C67691360F9F2B0918* L_0 = __this->____items;
		ResourceHandle_tAB7888F3AB5071C94127D0D46AAB3D702BC4B9F8 L_1 = ___0_item;
		int32_t L_2 = __this->____size;
		int32_t L_3;
		L_3 = Array_IndexOf_TisResourceHandle_tAB7888F3AB5071C94127D0D46AAB3D702BC4B9F8_m8332FAAEA1F00BD676F75CB7D21BDDE5EB8108FC(L_0, L_1, 0, L_2, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 26));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_System_Collections_IList_IndexOf_mDA5087B460A66C84E4A517B99343E2D19FA42059 (List_1_t480A595B8D45A9019FF0E9A33AD53D81F7355674* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit);
	{
		RuntimeObject* L_0 = ___0_item;
		CHECKED_LOCAL_INIT(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)),il2cpp_codegen_runtime_class_init_inline);
		bool L_1;
		L_1 = List_1_IsCompatibleObject_m4F61B731116EA18BCF77D3B5EA97CC7F6B74BA8E(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 18));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_item;
		int32_t L_3;
		L_3 = List_1_IndexOf_m69A02C552A18C10D19C781295373AB8A8AEE5031(__this, ((*(ResourceHandle_tAB7888F3AB5071C94127D0D46AAB3D702BC4B9F8*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 17));
		return L_3;
	}

IL_0015:
	{
		return (-1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Insert_m87451DF4EDEDCFD7A4F723FD3862823FC8208F03 (List_1_t480A595B8D45A9019FF0E9A33AD53D81F7355674* __this, int32_t ___0_index, ResourceHandle_tAB7888F3AB5071C94127D0D46AAB3D702BC4B9F8 ___1_item, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_0012;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F(((int32_t)13), ((int32_t)27), NULL);
	}

IL_0012:
	{
		int32_t L_2 = __this->____size;
		ResourceHandleU5BU5D_tD8EAD492F528F246F46563C67691360F9F2B0918* L_3 = __this->____items;
		int32_t L_4 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_3)->max_length),NULL));
		if ((!(((uint32_t)L_2) == ((uint32_t)L_4))))
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_5 = __this->____size;
		List_1_EnsureCapacity_m5056E5ED803534E727AD5E9FAEC838428ACC47FB(__this, ((int32_t)il2cpp_codegen_add(L_5, 1)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 12));
	}

IL_0030:
	{
		int32_t L_6 = ___0_index;
		int32_t L_7 = __this->____size;
		if ((((int32_t)L_6) >= ((int32_t)L_7)))
		{
			goto IL_0056;
		}
	}
	{
		ResourceHandleU5BU5D_tD8EAD492F528F246F46563C67691360F9F2B0918* L_8 = __this->____items;
		int32_t L_9 = ___0_index;
		ResourceHandleU5BU5D_tD8EAD492F528F246F46563C67691360F9F2B0918* L_10 = __this->____items;
		int32_t L_11 = ___0_index;
		int32_t L_12 = __this->____size;
		int32_t L_13 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_8, L_9, (RuntimeArray*)L_10, ((int32_t)il2cpp_codegen_add(L_11, 1)), ((int32_t)il2cpp_codegen_subtract(L_12, L_13)), NULL);
	}

IL_0056:
	{
		ResourceHandleU5BU5D_tD8EAD492F528F246F46563C67691360F9F2B0918* L_14 = __this->____items;
		int32_t L_15 = ___0_index;
		ResourceHandle_tAB7888F3AB5071C94127D0D46AAB3D702BC4B9F8 L_16 = ___1_item;
		(L_14)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_15), (ResourceHandle_tAB7888F3AB5071C94127D0D46AAB3D702BC4B9F8)L_16);
		int32_t L_17 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_17, 1));
		int32_t L_18 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_18, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_System_Collections_IList_Insert_m18278F2BB420F203F3AFB1FFC583ECEFD4BF5626 (List_1_t480A595B8D45A9019FF0E9A33AD53D81F7355674* __this, int32_t ___0_index, RuntimeObject* ___1_item, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(Type_t_StaticInit);
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = ___1_item;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisResourceHandle_tAB7888F3AB5071C94127D0D46AAB3D702BC4B9F8_mA91A20BD242392A65004CD8897E77F0A9BA80940(L_0, ((int32_t)20), NULL);
	}
	try
	{
		int32_t L_1 = ___0_index;
		RuntimeObject* L_2 = ___1_item;
		List_1_Insert_m87451DF4EDEDCFD7A4F723FD3862823FC8208F03(__this, L_1, ((*(ResourceHandle_tAB7888F3AB5071C94127D0D46AAB3D702BC4B9F8*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 27));
		goto IL_002a;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0017;
		}
		throw e;
	}

CATCH_0017:
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_3 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_4 = ___1_item;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 10)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
		ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_4, L_6, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_002a;
	}

IL_002a:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_InsertRange_m2E53EA9AC569CA67C76F3C118E063BBCF7704CAE (List_1_t480A595B8D45A9019FF0E9A33AD53D81F7355674* __this, int32_t ___0_index, RuntimeObject* ___1_collection, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	RuntimeObject* V_2 = NULL;
	{
		RuntimeObject* L_0 = ___1_collection;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(6, NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___0_index;
		int32_t L_2 = __this->____size;
		if ((!(((uint32_t)L_1) > ((uint32_t)L_2))))
		{
			goto IL_0017;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRange_IndexException_mC7661B8C6DD827679C95FC6B6C08F8724174936D(NULL);
	}

IL_0017:
	{
		RuntimeObject* L_3 = ___1_collection;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_3, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2)));
		RuntimeObject* L_4 = V_0;
		if (!L_4)
		{
			goto IL_00bc;
		}
	}
	{
		RuntimeObject* L_5 = V_0;
		int32_t L_6;
		L_6 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_5);
		V_1 = L_6;
		int32_t L_7 = V_1;
		if ((((int32_t)L_7) <= ((int32_t)0)))
		{
			goto IL_00fb;
		}
	}
	{
		int32_t L_8 = __this->____size;
		int32_t L_9 = V_1;
		List_1_EnsureCapacity_m5056E5ED803534E727AD5E9FAEC838428ACC47FB(__this, ((int32_t)il2cpp_codegen_add(L_8, L_9)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 12));
		int32_t L_10 = ___0_index;
		int32_t L_11 = __this->____size;
		if ((((int32_t)L_10) >= ((int32_t)L_11)))
		{
			goto IL_0066;
		}
	}
	{
		ResourceHandleU5BU5D_tD8EAD492F528F246F46563C67691360F9F2B0918* L_12 = __this->____items;
		int32_t L_13 = ___0_index;
		ResourceHandleU5BU5D_tD8EAD492F528F246F46563C67691360F9F2B0918* L_14 = __this->____items;
		int32_t L_15 = ___0_index;
		int32_t L_16 = V_1;
		int32_t L_17 = __this->____size;
		int32_t L_18 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_12, L_13, (RuntimeArray*)L_14, ((int32_t)il2cpp_codegen_add(L_15, L_16)), ((int32_t)il2cpp_codegen_subtract(L_17, L_18)), NULL);
	}

IL_0066:
	{
		RuntimeObject* L_19 = V_0;
		if ((!(((RuntimeObject*)(List_1_t480A595B8D45A9019FF0E9A33AD53D81F7355674*)__this) == ((RuntimeObject*)(RuntimeObject*)L_19))))
		{
			goto IL_009f;
		}
	}
	{
		ResourceHandleU5BU5D_tD8EAD492F528F246F46563C67691360F9F2B0918* L_20 = __this->____items;
		ResourceHandleU5BU5D_tD8EAD492F528F246F46563C67691360F9F2B0918* L_21 = __this->____items;
		int32_t L_22 = ___0_index;
		int32_t L_23 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_20, 0, (RuntimeArray*)L_21, L_22, L_23, NULL);
		ResourceHandleU5BU5D_tD8EAD492F528F246F46563C67691360F9F2B0918* L_24 = __this->____items;
		int32_t L_25 = ___0_index;
		int32_t L_26 = V_1;
		ResourceHandleU5BU5D_tD8EAD492F528F246F46563C67691360F9F2B0918* L_27 = __this->____items;
		int32_t L_28 = ___0_index;
		int32_t L_29 = __this->____size;
		int32_t L_30 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_24, ((int32_t)il2cpp_codegen_add(L_25, L_26)), (RuntimeArray*)L_27, ((int32_t)il2cpp_codegen_multiply(L_28, 2)), ((int32_t)il2cpp_codegen_subtract(L_29, L_30)), NULL);
		goto IL_00ac;
	}

IL_009f:
	{
		RuntimeObject* L_31 = V_0;
		ResourceHandleU5BU5D_tD8EAD492F528F246F46563C67691360F9F2B0918* L_32 = __this->____items;
		int32_t L_33 = ___0_index;
		InterfaceActionInvoker2< ResourceHandleU5BU5D_tD8EAD492F528F246F46563C67691360F9F2B0918*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_31, L_32, L_33);
	}

IL_00ac:
	{
		int32_t L_34 = __this->____size;
		int32_t L_35 = V_1;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_34, L_35));
		goto IL_00fb;
	}

IL_00bc:
	{
		int32_t L_36 = ___0_index;
		int32_t L_37 = __this->____size;
		if ((((int32_t)L_36) >= ((int32_t)L_37)))
		{
			goto IL_00f4;
		}
	}
	{
		RuntimeObject* L_38 = ___1_collection;
		RuntimeObject* L_39;
		L_39 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 28), L_38);
		V_2 = L_39;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00ea:
			{
				{
					RuntimeObject* L_40 = V_2;
					if (!L_40)
					{
						goto IL_00f3;
					}
				}
				{
					RuntimeObject* L_41 = V_2;
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_41);
				}

IL_00f3:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_00e0_1;
			}

IL_00ce_1:
			{
				int32_t L_42 = ___0_index;
				int32_t L_43 = L_42;
				___0_index = ((int32_t)il2cpp_codegen_add(L_43, 1));
				RuntimeObject* L_44 = V_2;
				ResourceHandle_tAB7888F3AB5071C94127D0D46AAB3D702BC4B9F8 L_45;
				L_45 = InterfaceFuncInvoker0< ResourceHandle_tAB7888F3AB5071C94127D0D46AAB3D702BC4B9F8 >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 30), L_44);
				List_1_Insert_m87451DF4EDEDCFD7A4F723FD3862823FC8208F03(__this, L_43, L_45, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 27));
			}

IL_00e0_1:
			{
				RuntimeObject* L_46 = V_2;
				bool L_47;
				L_47 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_46);
				if (L_47)
				{
					goto IL_00ce_1;
				}
			}
			{
				goto IL_00fb;
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

IL_00f4:
	{
		RuntimeObject* L_48 = ___1_collection;
		List_1_AddEnumerable_m4E122E2502A8627C778FE4556937C624B46C7997(__this, L_48, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 5));
	}

IL_00fb:
	{
		int32_t L_49 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_49, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_mCE97C009362B0A9CD4552C1B51C5E2A86246CA15 (List_1_t480A595B8D45A9019FF0E9A33AD53D81F7355674* __this, ResourceHandle_tAB7888F3AB5071C94127D0D46AAB3D702BC4B9F8 ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		ResourceHandle_tAB7888F3AB5071C94127D0D46AAB3D702BC4B9F8 L_0 = ___0_item;
		int32_t L_1;
		L_1 = List_1_IndexOf_m69A02C552A18C10D19C781295373AB8A8AEE5031(__this, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 17));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		int32_t L_3 = V_0;
		List_1_RemoveAt_m193AD81345965E50C83F85222E0549DC26D12328(__this, L_3, NULL);
		return (bool)1;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_System_Collections_IList_Remove_m99835BE81DC65A02636F44A5718B27D58037726C (List_1_t480A595B8D45A9019FF0E9A33AD53D81F7355674* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit);
	{
		RuntimeObject* L_0 = ___0_item;
		CHECKED_LOCAL_INIT(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)),il2cpp_codegen_runtime_class_init_inline);
		bool L_1;
		L_1 = List_1_IsCompatibleObject_m4F61B731116EA18BCF77D3B5EA97CC7F6B74BA8E(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 18));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_item;
		bool L_3;
		L_3 = List_1_Remove_mCE97C009362B0A9CD4552C1B51C5E2A86246CA15(__this, ((*(ResourceHandle_tAB7888F3AB5071C94127D0D46AAB3D702BC4B9F8*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 33));
	}

IL_0015:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_RemoveAll_m32FA8F9FEE2CD99C7589A668A706A0352E9D22B1 (List_1_t480A595B8D45A9019FF0E9A33AD53D81F7355674* __this, Predicate_1_tD559AF1002ABFFC541AF884654337A564D28B733* ___0_match, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Predicate_1_tD559AF1002ABFFC541AF884654337A564D28B733* L_0 = ___0_match;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(8, NULL);
	}

IL_0009:
	{
		V_0 = 0;
		goto IL_0011;
	}

IL_000d:
	{
		int32_t L_1 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_1, 1));
	}

IL_0011:
	{
		int32_t L_2 = V_0;
		int32_t L_3 = __this->____size;
		if ((((int32_t)L_2) >= ((int32_t)L_3)))
		{
			goto IL_002e;
		}
	}
	{
		Predicate_1_tD559AF1002ABFFC541AF884654337A564D28B733* L_4 = ___0_match;
		ResourceHandleU5BU5D_tD8EAD492F528F246F46563C67691360F9F2B0918* L_5 = __this->____items;
		int32_t L_6 = V_0;
		int32_t L_7 = L_6;
		ResourceHandle_tAB7888F3AB5071C94127D0D46AAB3D702BC4B9F8 L_8 = (L_5)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7));
		bool L_9;
		L_9 = Predicate_1_Invoke_m34AFEF07BE56D23BA7F5BA2338AC3C3F1ED777CF_inline(L_4, L_8, NULL);
		if (!L_9)
		{
			goto IL_000d;
		}
	}

IL_002e:
	{
		int32_t L_10 = V_0;
		int32_t L_11 = __this->____size;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_0039;
		}
	}
	{
		return 0;
	}

IL_0039:
	{
		int32_t L_12 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
		goto IL_0089;
	}

IL_003f:
	{
		int32_t L_13 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0043:
	{
		int32_t L_14 = V_1;
		int32_t L_15 = __this->____size;
		if ((((int32_t)L_14) >= ((int32_t)L_15)))
		{
			goto IL_0060;
		}
	}
	{
		Predicate_1_tD559AF1002ABFFC541AF884654337A564D28B733* L_16 = ___0_match;
		ResourceHandleU5BU5D_tD8EAD492F528F246F46563C67691360F9F2B0918* L_17 = __this->____items;
		int32_t L_18 = V_1;
		int32_t L_19 = L_18;
		ResourceHandle_tAB7888F3AB5071C94127D0D46AAB3D702BC4B9F8 L_20 = (L_17)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_19));
		bool L_21;
		L_21 = Predicate_1_Invoke_m34AFEF07BE56D23BA7F5BA2338AC3C3F1ED777CF_inline(L_16, L_20, NULL);
		if (L_21)
		{
			goto IL_003f;
		}
	}

IL_0060:
	{
		int32_t L_22 = V_1;
		int32_t L_23 = __this->____size;
		if ((((int32_t)L_22) >= ((int32_t)L_23)))
		{
			goto IL_0089;
		}
	}
	{
		ResourceHandleU5BU5D_tD8EAD492F528F246F46563C67691360F9F2B0918* L_24 = __this->____items;
		int32_t L_25 = V_0;
		int32_t L_26 = L_25;
		V_0 = ((int32_t)il2cpp_codegen_add(L_26, 1));
		ResourceHandleU5BU5D_tD8EAD492F528F246F46563C67691360F9F2B0918* L_27 = __this->____items;
		int32_t L_28 = V_1;
		int32_t L_29 = L_28;
		V_1 = ((int32_t)il2cpp_codegen_add(L_29, 1));
		int32_t L_30 = L_29;
		ResourceHandle_tAB7888F3AB5071C94127D0D46AAB3D702BC4B9F8 L_31 = (L_27)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_30));
		(L_24)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_26), (ResourceHandle_tAB7888F3AB5071C94127D0D46AAB3D702BC4B9F8)L_31);
	}

IL_0089:
	{
		int32_t L_32 = V_1;
		int32_t L_33 = __this->____size;
		if ((((int32_t)L_32) < ((int32_t)L_33)))
		{
			goto IL_0043;
		}
	}
	{
		goto IL_00ad;
	}

IL_00ad:
	{
		int32_t L_34 = __this->____size;
		int32_t L_35 = V_0;
		int32_t L_36 = V_0;
		__this->____size = L_36;
		int32_t L_37 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_37, 1));
		return ((int32_t)il2cpp_codegen_subtract(L_34, L_35));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_m193AD81345965E50C83F85222E0549DC26D12328 (List_1_t480A595B8D45A9019FF0E9A33AD53D81F7355674* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	ResourceHandle_tAB7888F3AB5071C94127D0D46AAB3D702BC4B9F8 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRange_IndexException_mC7661B8C6DD827679C95FC6B6C08F8724174936D(NULL);
	}

IL_000e:
	{
		int32_t L_2 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_2, 1));
		int32_t L_3 = ___0_index;
		int32_t L_4 = __this->____size;
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_0042;
		}
	}
	{
		ResourceHandleU5BU5D_tD8EAD492F528F246F46563C67691360F9F2B0918* L_5 = __this->____items;
		int32_t L_6 = ___0_index;
		ResourceHandleU5BU5D_tD8EAD492F528F246F46563C67691360F9F2B0918* L_7 = __this->____items;
		int32_t L_8 = ___0_index;
		int32_t L_9 = __this->____size;
		int32_t L_10 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, ((int32_t)il2cpp_codegen_add(L_6, 1)), (RuntimeArray*)L_7, L_8, ((int32_t)il2cpp_codegen_subtract(L_9, L_10)), NULL);
	}

IL_0042:
	{
		goto IL_0063;
	}

IL_0063:
	{
		int32_t L_11 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_11, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveRange_m252809FF329AD4AAE34D73B6496515FD0E7E5334 (List_1_t480A595B8D45A9019FF0E9A33AD53D81F7355674* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_count;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F(((int32_t)16), 4, NULL);
	}

IL_0015:
	{
		int32_t L_2 = __this->____size;
		int32_t L_3 = ___0_index;
		int32_t L_4 = ___1_count;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_2, L_3))) >= ((int32_t)L_4)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(((int32_t)23), NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_count;
		if ((((int32_t)L_5) <= ((int32_t)0)))
		{
			goto IL_008d;
		}
	}
	{
		int32_t L_6 = __this->____size;
		int32_t L_7 = __this->____size;
		int32_t L_8 = ___1_count;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_7, L_8));
		int32_t L_9 = ___0_index;
		int32_t L_10 = __this->____size;
		if ((((int32_t)L_9) >= ((int32_t)L_10)))
		{
			goto IL_0066;
		}
	}
	{
		ResourceHandleU5BU5D_tD8EAD492F528F246F46563C67691360F9F2B0918* L_11 = __this->____items;
		int32_t L_12 = ___0_index;
		int32_t L_13 = ___1_count;
		ResourceHandleU5BU5D_tD8EAD492F528F246F46563C67691360F9F2B0918* L_14 = __this->____items;
		int32_t L_15 = ___0_index;
		int32_t L_16 = __this->____size;
		int32_t L_17 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_11, ((int32_t)il2cpp_codegen_add(L_12, L_13)), (RuntimeArray*)L_14, L_15, ((int32_t)il2cpp_codegen_subtract(L_16, L_17)), NULL);
	}

IL_0066:
	{
		int32_t L_18 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_18, 1));
		goto IL_008d;
	}

IL_008d:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Reverse_m8EB00C91873F5440D1C39B14267B28051271F91C (List_1_t480A595B8D45A9019FF0E9A33AD53D81F7355674* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = List_1_get_Count_m9F65F44EDFFE199D00E71A358851A11FBF35CA0D_inline(__this, NULL);
		List_1_Reverse_m6AFF276121D16C2E2B20450B50341A6290ADEB1A(__this, 0, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 35));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Reverse_m6AFF276121D16C2E2B20450B50341A6290ADEB1A (List_1_t480A595B8D45A9019FF0E9A33AD53D81F7355674* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_count;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F(((int32_t)16), 4, NULL);
	}

IL_0015:
	{
		int32_t L_2 = __this->____size;
		int32_t L_3 = ___0_index;
		int32_t L_4 = ___1_count;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_2, L_3))) >= ((int32_t)L_4)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(((int32_t)23), NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_count;
		if ((((int32_t)L_5) <= ((int32_t)1)))
		{
			goto IL_0038;
		}
	}
	{
		ResourceHandleU5BU5D_tD8EAD492F528F246F46563C67691360F9F2B0918* L_6 = __this->____items;
		int32_t L_7 = ___0_index;
		int32_t L_8 = ___1_count;
		Array_Reverse_TisResourceHandle_tAB7888F3AB5071C94127D0D46AAB3D702BC4B9F8_m21433AAF5C37ED5C37B245798D8BED8D43C21BF4(L_6, L_7, L_8, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 36));
	}

IL_0038:
	{
		int32_t L_9 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_9, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_mA59C056D989DEE48434B5C0FE6AB215B53424390 (List_1_t480A595B8D45A9019FF0E9A33AD53D81F7355674* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = List_1_get_Count_m9F65F44EDFFE199D00E71A358851A11FBF35CA0D_inline(__this, NULL);
		RuntimeObject* L_1 = ___0_comparer;
		List_1_Sort_m741493F9355B59A4913E75FC9DBAF48FF66DFA57(__this, 0, L_0, L_1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 37));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_m741493F9355B59A4913E75FC9DBAF48FF66DFA57 (List_1_t480A595B8D45A9019FF0E9A33AD53D81F7355674* __this, int32_t ___0_index, int32_t ___1_count, RuntimeObject* ___2_comparer, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_count;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F(((int32_t)16), 4, NULL);
	}

IL_0015:
	{
		int32_t L_2 = __this->____size;
		int32_t L_3 = ___0_index;
		int32_t L_4 = ___1_count;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_2, L_3))) >= ((int32_t)L_4)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(((int32_t)23), NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_count;
		if ((((int32_t)L_5) <= ((int32_t)1)))
		{
			goto IL_0039;
		}
	}
	{
		ResourceHandleU5BU5D_tD8EAD492F528F246F46563C67691360F9F2B0918* L_6 = __this->____items;
		int32_t L_7 = ___0_index;
		int32_t L_8 = ___1_count;
		RuntimeObject* L_9 = ___2_comparer;
		Array_Sort_TisResourceHandle_tAB7888F3AB5071C94127D0D46AAB3D702BC4B9F8_m15B3CC39BEC812E83A1A2CE71AE193200A9E1762(L_6, L_7, L_8, L_9, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 38));
	}

IL_0039:
	{
		int32_t L_10 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_10, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_mE7B9AECBA7713C680FFDC0D1FFC16486EB2E57AD (List_1_t480A595B8D45A9019FF0E9A33AD53D81F7355674* __this, Comparison_1_tDCA291E0A9EC3450564AE324BB4A8232F7171A75* ___0_comparison, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(ArraySortHelper_1_t0B69B36E8E1F97490E6BE32C23AE1784AB1ADA3A_StaticInit);
	{
		Comparison_1_tDCA291E0A9EC3450564AE324BB4A8232F7171A75* L_0 = ___0_comparison;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(((int32_t)34), NULL);
	}

IL_000a:
	{
		int32_t L_1 = __this->____size;
		if ((((int32_t)L_1) <= ((int32_t)1)))
		{
			goto IL_0026;
		}
	}
	{
		ResourceHandleU5BU5D_tD8EAD492F528F246F46563C67691360F9F2B0918* L_2 = __this->____items;
		int32_t L_3 = __this->____size;
		Comparison_1_tDCA291E0A9EC3450564AE324BB4A8232F7171A75* L_4 = ___0_comparison;
		CHECKED_LOCAL_INIT(ArraySortHelper_1_t0B69B36E8E1F97490E6BE32C23AE1784AB1ADA3A_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 40)),il2cpp_codegen_runtime_class_init_inline);
		ArraySortHelper_1_Sort_m7051900D4D21A46096B77E03BE73D6D5907DA7E4(L_2, 0, L_3, L_4, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 39));
	}

IL_0026:
	{
		int32_t L_5 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_5, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ResourceHandleU5BU5D_tD8EAD492F528F246F46563C67691360F9F2B0918* List_1_ToArray_m36E61E82525E3D419991039822CAA987D5B8745A (List_1_t480A595B8D45A9019FF0E9A33AD53D81F7355674* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit);
	ResourceHandleU5BU5D_tD8EAD492F528F246F46563C67691360F9F2B0918* V_0 = NULL;
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		CHECKED_LOCAL_INIT(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)),il2cpp_codegen_runtime_class_init_inline);
		ResourceHandleU5BU5D_tD8EAD492F528F246F46563C67691360F9F2B0918* L_1 = ((List_1_t480A595B8D45A9019FF0E9A33AD53D81F7355674_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)))->___s_emptyArray;
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____size;
		ResourceHandleU5BU5D_tD8EAD492F528F246F46563C67691360F9F2B0918* L_3 = (ResourceHandleU5BU5D_tD8EAD492F528F246F46563C67691360F9F2B0918*)(ResourceHandleU5BU5D_tD8EAD492F528F246F46563C67691360F9F2B0918*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1), (uint32_t)L_2);
		V_0 = L_3;
		ResourceHandleU5BU5D_tD8EAD492F528F246F46563C67691360F9F2B0918* L_4 = __this->____items;
		ResourceHandleU5BU5D_tD8EAD492F528F246F46563C67691360F9F2B0918* L_5 = V_0;
		int32_t L_6 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_4, 0, (RuntimeArray*)L_5, 0, L_6, NULL);
		ResourceHandleU5BU5D_tD8EAD492F528F246F46563C67691360F9F2B0918* L_7 = V_0;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddEnumerable_m4E122E2502A8627C778FE4556937C624B46C7997 (List_1_t480A595B8D45A9019FF0E9A33AD53D81F7355674* __this, RuntimeObject* ___0_enumerable, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	ResourceHandle_tAB7888F3AB5071C94127D0D46AAB3D702BC4B9F8 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		RuntimeObject* L_1 = ___0_enumerable;
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 28), L_1);
		V_0 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0063:
			{
				{
					RuntimeObject* L_3 = V_0;
					if (!L_3)
					{
						goto IL_006c;
					}
				}
				{
					RuntimeObject* L_4 = V_0;
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_4);
				}

IL_006c:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_0059_1;
			}

IL_0017_1:
			{
				RuntimeObject* L_5 = V_0;
				ResourceHandle_tAB7888F3AB5071C94127D0D46AAB3D702BC4B9F8 L_6;
				L_6 = InterfaceFuncInvoker0< ResourceHandle_tAB7888F3AB5071C94127D0D46AAB3D702BC4B9F8 >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 30), L_5);
				V_1 = L_6;
				int32_t L_7 = __this->____size;
				ResourceHandleU5BU5D_tD8EAD492F528F246F46563C67691360F9F2B0918* L_8 = __this->____items;
				int32_t L_9 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_8)->max_length),NULL));
				if ((!(((uint32_t)L_7) == ((uint32_t)L_9))))
				{
					goto IL_003c_1;
				}
			}
			{
				int32_t L_10 = __this->____size;
				List_1_EnsureCapacity_m5056E5ED803534E727AD5E9FAEC838428ACC47FB(__this, ((int32_t)il2cpp_codegen_add(L_10, 1)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 12));
			}

IL_003c_1:
			{
				ResourceHandleU5BU5D_tD8EAD492F528F246F46563C67691360F9F2B0918* L_11 = __this->____items;
				int32_t L_12 = __this->____size;
				V_2 = L_12;
				int32_t L_13 = V_2;
				__this->____size = ((int32_t)il2cpp_codegen_add(L_13, 1));
				int32_t L_14 = V_2;
				ResourceHandle_tAB7888F3AB5071C94127D0D46AAB3D702BC4B9F8 L_15 = V_1;
				(L_11)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_14), (ResourceHandle_tAB7888F3AB5071C94127D0D46AAB3D702BC4B9F8)L_15);
			}

IL_0059_1:
			{
				RuntimeObject* L_16 = V_0;
				bool L_17;
				L_17 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_16);
				if (L_17)
				{
					goto IL_0017_1;
				}
			}
			{
				goto IL_006d;
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

IL_006d:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__cctor_mFB54BAF5F843CEF0ACB359DE97ADE45DAFAD1812 (const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	{
		ResourceHandleU5BU5D_tD8EAD492F528F246F46563C67691360F9F2B0918* L_0 = (ResourceHandleU5BU5D_tD8EAD492F528F246F46563C67691360F9F2B0918*)(ResourceHandleU5BU5D_tD8EAD492F528F246F46563C67691360F9F2B0918*)SZArrayNew(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1), (uint32_t)0);
		((List_1_t480A595B8D45A9019FF0E9A33AD53D81F7355674_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___s_emptyArray = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((List_1_t480A595B8D45A9019FF0E9A33AD53D81F7355674_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___s_emptyArray), (void*)L_0);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m2C432B7961B0F4289AE0E89EFF0147BFB96C2B31 (List_1_t9B68833848E4C4D7F623C05F6B77F0449396354A* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit);
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		CHECKED_LOCAL_INIT(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)),il2cpp_codegen_runtime_class_init_inline);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ((List_1_t9B68833848E4C4D7F623C05F6B77F0449396354A_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)))->___s_emptyArray;
		__this->____items = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mD6C4D49C755FF9AD73456488D5FAABFD532AAEA9 (List_1_t9B68833848E4C4D7F623C05F6B77F0449396354A* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit);
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0012;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F(((int32_t)12), 4, NULL);
	}

IL_0012:
	{
		int32_t L_1 = ___0_capacity;
		if (L_1)
		{
			goto IL_0021;
		}
	}
	{
		CHECKED_LOCAL_INIT(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)),il2cpp_codegen_runtime_class_init_inline);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2 = ((List_1_t9B68833848E4C4D7F623C05F6B77F0449396354A_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)))->___s_emptyArray;
		__this->____items = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_2);
		return;
	}

IL_0021:
	{
		int32_t L_3 = ___0_capacity;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1), (uint32_t)L_3);
		__this->____items = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_4);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mB26C949BC941BFA1599B59D6C9C695D3F700ACAE (List_1_t9B68833848E4C4D7F623C05F6B77F0449396354A* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit);
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_collection;
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(6, NULL);
	}

IL_000f:
	{
		RuntimeObject* L_1 = ___0_collection;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_1, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2)));
		RuntimeObject* L_2 = V_0;
		if (!L_2)
		{
			goto IL_0050;
		}
	}
	{
		RuntimeObject* L_3 = V_0;
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_3);
		V_1 = L_4;
		int32_t L_5 = V_1;
		if (L_5)
		{
			goto IL_002f;
		}
	}
	{
		CHECKED_LOCAL_INIT(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)),il2cpp_codegen_runtime_class_init_inline);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_6 = ((List_1_t9B68833848E4C4D7F623C05F6B77F0449396354A_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)))->___s_emptyArray;
		__this->____items = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_6);
		return;
	}

IL_002f:
	{
		int32_t L_7 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_8 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1), (uint32_t)L_7);
		__this->____items = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_8);
		RuntimeObject* L_9 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_10 = __this->____items;
		InterfaceActionInvoker2< UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_9, L_10, 0);
		int32_t L_11 = V_1;
		__this->____size = L_11;
		return;
	}

IL_0050:
	{
		__this->____size = 0;
		CHECKED_LOCAL_INIT(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)),il2cpp_codegen_runtime_class_init_inline);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_12 = ((List_1_t9B68833848E4C4D7F623C05F6B77F0449396354A_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)))->___s_emptyArray;
		__this->____items = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_12);
		RuntimeObject* L_13 = ___0_collection;
		List_1_AddEnumerable_m7306D508C149BFCA2F5AF72B013F75A308A08204(__this, L_13, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 5));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Capacity_mEF17C2D6137726F17AB42310C55C8F88A0E0537D (List_1_t9B68833848E4C4D7F623C05F6B77F0449396354A* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit);
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_0 = NULL;
	{
		int32_t L_0 = ___0_value;
		int32_t L_1 = __this->____size;
		if ((((int32_t)L_0) >= ((int32_t)L_1)))
		{
			goto IL_0012;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F(((int32_t)15), ((int32_t)21), NULL);
	}

IL_0012:
	{
		int32_t L_2 = ___0_value;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = __this->____items;
		int32_t L_4 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_3)->max_length),NULL));
		if ((((int32_t)L_2) == ((int32_t)L_4)))
		{
			goto IL_0058;
		}
	}
	{
		int32_t L_5 = ___0_value;
		if ((((int32_t)L_5) <= ((int32_t)0)))
		{
			goto IL_004d;
		}
	}
	{
		int32_t L_6 = ___0_value;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_7 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1), (uint32_t)L_6);
		V_0 = L_7;
		int32_t L_8 = __this->____size;
		if ((((int32_t)L_8) <= ((int32_t)0)))
		{
			goto IL_0045;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_9 = __this->____items;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_10 = V_0;
		int32_t L_11 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_9, 0, (RuntimeArray*)L_10, 0, L_11, NULL);
	}

IL_0045:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_12 = V_0;
		__this->____items = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_12);
		return;
	}

IL_004d:
	{
		CHECKED_LOCAL_INIT(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)),il2cpp_codegen_runtime_class_init_inline);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_13 = ((List_1_t9B68833848E4C4D7F623C05F6B77F0449396354A_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)))->___s_emptyArray;
		__this->____items = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_13);
	}

IL_0058:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t List_1_get_Item_m934DB856B4560B22F57FDEEF351E373E5F1B6324 (List_1_t9B68833848E4C4D7F623C05F6B77F0449396354A* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRange_IndexException_mC7661B8C6DD827679C95FC6B6C08F8724174936D(NULL);
	}

IL_000e:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2 = __this->____items;
		int32_t L_3 = ___0_index;
		int32_t L_4 = L_3;
		uint32_t L_5 = (L_2)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_m92246880796BA27EBA18129EC97C00C65F17E7C5 (List_1_t9B68833848E4C4D7F623C05F6B77F0449396354A* __this, int32_t ___0_index, uint32_t ___1_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRange_IndexException_mC7661B8C6DD827679C95FC6B6C08F8724174936D(NULL);
	}

IL_000e:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2 = __this->____items;
		int32_t L_3 = ___0_index;
		uint32_t L_4 = ___1_value;
		(L_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3), (uint32_t)L_4);
		int32_t L_5 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_5, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_IsCompatibleObject_m05B0D418D70673CEA58C4991E8C26A67B469ECFC (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	uint32_t V_0 = 0;
	{
		RuntimeObject* L_0 = ___0_value;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6))))
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(uint32_t));
		uint32_t L_2 = V_0;
		return false;
	}

IL_001d:
	{
		return (bool)0;
	}

IL_001f:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_System_Collections_IList_get_Item_m8DD576B2BB7A008B34ACC0482952D52E9269E752 (List_1_t9B68833848E4C4D7F623C05F6B77F0449396354A* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		uint32_t L_1;
		L_1 = List_1_get_Item_m934DB856B4560B22F57FDEEF351E373E5F1B6324(__this, L_0, NULL);
		uint32_t L_2 = L_1;
		RuntimeObject* L_3 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6), &L_2);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_System_Collections_IList_set_Item_m636C279E94F7F3539BB1C243FEE29F9B263862D6 (List_1_t9B68833848E4C4D7F623C05F6B77F0449396354A* __this, int32_t ___0_index, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(Type_t_StaticInit);
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = ___1_value;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mD81B5632275C9C89651C1B357F26058E8E76A526(L_0, ((int32_t)15), NULL);
	}
	try
	{
		int32_t L_1 = ___0_index;
		RuntimeObject* L_2 = ___1_value;
		List_1_set_Item_m92246880796BA27EBA18129EC97C00C65F17E7C5(__this, L_1, ((*(uint32_t*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6)))), NULL);
		goto IL_002a;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0017;
		}
		throw e;
	}

CATCH_0017:
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_3 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_4 = ___1_value;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 10)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
		ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_4, L_6, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_002a;
	}

IL_002a:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_m084F52E7C436446A23080F15F803212491693F6B (List_1_t9B68833848E4C4D7F623C05F6B77F0449396354A* __this, uint32_t ___0_item, const RuntimeMethod* method) 
{
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = __this->____items;
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		V_1 = L_2;
		int32_t L_3 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4 = V_0;
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		if ((!(((uint32_t)L_3) < ((uint32_t)L_5))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_6 = V_1;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_6, 1));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_7 = V_0;
		int32_t L_8 = V_1;
		uint32_t L_9 = ___0_item;
		(L_7)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_8), (uint32_t)L_9);
		return;
	}

IL_0034:
	{
		uint32_t L_10 = ___0_item;
		List_1_AddWithResize_m88BD32FBFE050A30CA8A331F209B9D6FF6C3A423(__this, L_10, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 11));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_m88BD32FBFE050A30CA8A331F209B9D6FF6C3A423 (List_1_t9B68833848E4C4D7F623C05F6B77F0449396354A* __this, uint32_t ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____size;
		V_0 = L_0;
		int32_t L_1 = V_0;
		List_1_EnsureCapacity_m5DB123345126DC3D92D13E5F9A545806C4184296(__this, ((int32_t)il2cpp_codegen_add(L_1, 1)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 12));
		int32_t L_2 = V_0;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_2, 1));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = __this->____items;
		int32_t L_4 = V_0;
		uint32_t L_5 = ___0_item;
		(L_3)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4), (uint32_t)L_5);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_System_Collections_IList_Add_mD08FCC3C0A3F505291B6F6BA25F61E6C41DB8F32 (List_1_t9B68833848E4C4D7F623C05F6B77F0449396354A* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(Type_t_StaticInit);
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = ___0_item;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mD81B5632275C9C89651C1B357F26058E8E76A526(L_0, ((int32_t)20), NULL);
	}
	try
	{
		RuntimeObject* L_1 = ___0_item;
		List_1_Add_m084F52E7C436446A23080F15F803212491693F6B_inline(__this, ((*(uint32_t*)UnBox(L_1, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		goto IL_0029;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0016;
		}
		throw e;
	}

CATCH_0016:
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_2 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_3 = ___0_item;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_4 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 10)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_5;
		L_5 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_4, NULL);
		ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_3, L_5, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0029;
	}

IL_0029:
	{
		int32_t L_6;
		L_6 = List_1_get_Count_mA30526AC2097A68939350DBA860B7D2B0EEE1585_inline(__this, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_6, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddRange_mF6B251F3900CA07AE492754233DC8EA7AA4547C9 (List_1_t9B68833848E4C4D7F623C05F6B77F0449396354A* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		RuntimeObject* L_1 = ___0_collection;
		List_1_InsertRange_m29B3B6011A4CF0D086BC1615992ABBF9045CDFAB(__this, L_0, L_1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 15));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_m6BF26614BFAA4D96650F4296BC5ED2455F26EA2C (List_1_t9B68833848E4C4D7F623C05F6B77F0449396354A* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		goto IL_0035;
	}

IL_0035:
	{
		__this->____size = 0;
	}

IL_003c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_mA3FC146588710EE5814FEBEFABB180FB2EA4D4D8 (List_1_t9B68833848E4C4D7F623C05F6B77F0449396354A* __this, uint32_t ___0_item, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		uint32_t L_1 = ___0_item;
		int32_t L_2;
		L_2 = List_1_IndexOf_mABB902B1AAE8B2D146C0ADBE69F1AE07DD33A824(__this, L_1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 17));
		return (bool)((((int32_t)((((int32_t)L_2) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0016:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_System_Collections_IList_Contains_m077F16421C4882ECEBD65F3DDE76D5866A63F526 (List_1_t9B68833848E4C4D7F623C05F6B77F0449396354A* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit);
	{
		RuntimeObject* L_0 = ___0_item;
		CHECKED_LOCAL_INIT(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)),il2cpp_codegen_runtime_class_init_inline);
		bool L_1;
		L_1 = List_1_IsCompatibleObject_m05B0D418D70673CEA58C4991E8C26A67B469ECFC(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 18));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_item;
		bool L_3;
		L_3 = List_1_Contains_mA3FC146588710EE5814FEBEFABB180FB2EA4D4D8(__this, ((*(uint32_t*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 19));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_CopyTo_mD1A974FF3026724857426F16333673BF255578E9 (List_1_t9B68833848E4C4D7F623C05F6B77F0449396354A* __this, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_array, const RuntimeMethod* method) 
{
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___0_array;
		List_1_CopyTo_mD22BC65B8E36D13F51395CEEBF6D76643814E25E(__this, L_0, 0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_EnsureCapacity_m5DB123345126DC3D92D13E5F9A545806C4184296 (List_1_t9B68833848E4C4D7F623C05F6B77F0449396354A* __this, int32_t ___0_min, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t G_B4_0 = 0;
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = __this->____items;
		int32_t L_1 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_0)->max_length),NULL));
		int32_t L_2 = ___0_min;
		if ((((int32_t)L_1) >= ((int32_t)L_2)))
		{
			goto IL_003d;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = __this->____items;
		if (!(((RuntimeArray*)L_3)->max_length))
		{
			goto IL_0020;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4 = __this->____items;
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		G_B4_0 = ((int32_t)il2cpp_codegen_multiply(L_5, 2));
		goto IL_0021;
	}

IL_0020:
	{
		G_B4_0 = 4;
	}

IL_0021:
	{
		V_0 = G_B4_0;
		int32_t L_6 = V_0;
		if ((!(((uint32_t)L_6) > ((uint32_t)((int32_t)2146435071)))))
		{
			goto IL_0030;
		}
	}
	{
		V_0 = ((int32_t)2146435071);
	}

IL_0030:
	{
		int32_t L_7 = V_0;
		int32_t L_8 = ___0_min;
		if ((((int32_t)L_7) >= ((int32_t)L_8)))
		{
			goto IL_0036;
		}
	}
	{
		int32_t L_9 = ___0_min;
		V_0 = L_9;
	}

IL_0036:
	{
		int32_t L_10 = V_0;
		List_1_set_Capacity_mEF17C2D6137726F17AB42310C55C8F88A0E0537D(__this, L_10, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 21));
	}

IL_003d:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_ForEach_m94E8FC5E19A9B1D72380A383EAD475E37F65733E (List_1_t9B68833848E4C4D7F623C05F6B77F0449396354A* __this, Action_1_t831946BFD83EBA9DE498D3E682F1D4F14D17878D* ___0_action, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Action_1_t831946BFD83EBA9DE498D3E682F1D4F14D17878D* L_0 = ___0_action;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(((int32_t)33), NULL);
	}

IL_000a:
	{
		int32_t L_1 = __this->____version;
		V_0 = L_1;
		V_1 = 0;
		goto IL_0034;
	}

IL_0015:
	{
		int32_t L_2 = V_0;
		int32_t L_3 = __this->____version;
		if ((!(((uint32_t)L_2) == ((uint32_t)L_3))))
		{
			goto IL_003d;
		}
	}
	{
		Action_1_t831946BFD83EBA9DE498D3E682F1D4F14D17878D* L_4 = ___0_action;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_5 = __this->____items;
		int32_t L_6 = V_1;
		int32_t L_7 = L_6;
		uint32_t L_8 = (L_5)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7));
		Action_1_Invoke_mA1BDAC0ADA0ABAC07CC491658788A24E6DC8B7EE_inline(L_4, L_8, NULL);
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0034:
	{
		int32_t L_10 = V_1;
		int32_t L_11 = __this->____size;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_0015;
		}
	}

IL_003d:
	{
		int32_t L_12 = V_0;
		int32_t L_13 = __this->____version;
		if ((((int32_t)L_12) == ((int32_t)L_13)))
		{
			goto IL_004b;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_InvalidOperation_EnumFailedVersion_m5331E2E0EC0E36843D53F439C2529530595ACE9F(NULL);
	}

IL_004b:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tE11EF15BE791F6B44F4B296E90476ADCDDC5D87F List_1_GetEnumerator_mC897ABF26C8665E359DCDE17121A0B0183C70823 (List_1_t9B68833848E4C4D7F623C05F6B77F0449396354A* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tE11EF15BE791F6B44F4B296E90476ADCDDC5D87F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m25DDA08EFA61F9AD346678D19BC674E2AD71A7F7((&L_0), __this, NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m484FE498708FF339DE09CBBE62172701DD98E5BD (List_1_t9B68833848E4C4D7F623C05F6B77F0449396354A* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tE11EF15BE791F6B44F4B296E90476ADCDDC5D87F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m25DDA08EFA61F9AD346678D19BC674E2AD71A7F7((&L_0), __this, NULL);
		Enumerator_tE11EF15BE791F6B44F4B296E90476ADCDDC5D87F L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 23), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_System_Collections_IEnumerable_GetEnumerator_mB451B9527BB322EE3A6D2E57ED9CB5B94F5CF033 (List_1_t9B68833848E4C4D7F623C05F6B77F0449396354A* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tE11EF15BE791F6B44F4B296E90476ADCDDC5D87F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m25DDA08EFA61F9AD346678D19BC674E2AD71A7F7((&L_0), __this, NULL);
		Enumerator_tE11EF15BE791F6B44F4B296E90476ADCDDC5D87F L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 23), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t9B68833848E4C4D7F623C05F6B77F0449396354A* List_1_GetRange_m59730EAF2CBD0F907A5B61D5519A6575BE7A2340 (List_1_t9B68833848E4C4D7F623C05F6B77F0449396354A* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method) 
{
	List_1_t9B68833848E4C4D7F623C05F6B77F0449396354A* V_0 = NULL;
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_count;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F(((int32_t)16), 4, NULL);
	}

IL_0015:
	{
		int32_t L_2 = __this->____size;
		int32_t L_3 = ___0_index;
		int32_t L_4 = ___1_count;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_2, L_3))) >= ((int32_t)L_4)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(((int32_t)23), NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_count;
		List_1_t9B68833848E4C4D7F623C05F6B77F0449396354A* L_6 = (List_1_t9B68833848E4C4D7F623C05F6B77F0449396354A*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0));
		List_1__ctor_mD6C4D49C755FF9AD73456488D5FAABFD532AAEA9(L_6, L_5, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 25));
		V_0 = L_6;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_7 = __this->____items;
		int32_t L_8 = ___0_index;
		List_1_t9B68833848E4C4D7F623C05F6B77F0449396354A* L_9 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_10 = L_9->____items;
		int32_t L_11 = ___1_count;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_7, L_8, (RuntimeArray*)L_10, 0, L_11, NULL);
		List_1_t9B68833848E4C4D7F623C05F6B77F0449396354A* L_12 = V_0;
		int32_t L_13 = ___1_count;
		L_12->____size = L_13;
		List_1_t9B68833848E4C4D7F623C05F6B77F0449396354A* L_14 = V_0;
		return L_14;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_IndexOf_mABB902B1AAE8B2D146C0ADBE69F1AE07DD33A824 (List_1_t9B68833848E4C4D7F623C05F6B77F0449396354A* __this, uint32_t ___0_item, const RuntimeMethod* method) 
{
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = __this->____items;
		uint32_t L_1 = ___0_item;
		int32_t L_2 = __this->____size;
		int32_t L_3;
		L_3 = Array_IndexOf_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mFC8BDE74B86C42A57D89FDA28EED3DDEF7B67A17(L_0, L_1, 0, L_2, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 26));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_System_Collections_IList_IndexOf_m521129CDFFB780E07E566C0D64B82FEAEF3EEDB7 (List_1_t9B68833848E4C4D7F623C05F6B77F0449396354A* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit);
	{
		RuntimeObject* L_0 = ___0_item;
		CHECKED_LOCAL_INIT(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)),il2cpp_codegen_runtime_class_init_inline);
		bool L_1;
		L_1 = List_1_IsCompatibleObject_m05B0D418D70673CEA58C4991E8C26A67B469ECFC(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 18));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_item;
		int32_t L_3;
		L_3 = List_1_IndexOf_mABB902B1AAE8B2D146C0ADBE69F1AE07DD33A824(__this, ((*(uint32_t*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 17));
		return L_3;
	}

IL_0015:
	{
		return (-1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Insert_mA1CAB048AF0A6CB36BD753A432BB19402C898B53 (List_1_t9B68833848E4C4D7F623C05F6B77F0449396354A* __this, int32_t ___0_index, uint32_t ___1_item, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_0012;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F(((int32_t)13), ((int32_t)27), NULL);
	}

IL_0012:
	{
		int32_t L_2 = __this->____size;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = __this->____items;
		int32_t L_4 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_3)->max_length),NULL));
		if ((!(((uint32_t)L_2) == ((uint32_t)L_4))))
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_5 = __this->____size;
		List_1_EnsureCapacity_m5DB123345126DC3D92D13E5F9A545806C4184296(__this, ((int32_t)il2cpp_codegen_add(L_5, 1)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 12));
	}

IL_0030:
	{
		int32_t L_6 = ___0_index;
		int32_t L_7 = __this->____size;
		if ((((int32_t)L_6) >= ((int32_t)L_7)))
		{
			goto IL_0056;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_8 = __this->____items;
		int32_t L_9 = ___0_index;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_10 = __this->____items;
		int32_t L_11 = ___0_index;
		int32_t L_12 = __this->____size;
		int32_t L_13 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_8, L_9, (RuntimeArray*)L_10, ((int32_t)il2cpp_codegen_add(L_11, 1)), ((int32_t)il2cpp_codegen_subtract(L_12, L_13)), NULL);
	}

IL_0056:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_14 = __this->____items;
		int32_t L_15 = ___0_index;
		uint32_t L_16 = ___1_item;
		(L_14)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_15), (uint32_t)L_16);
		int32_t L_17 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_17, 1));
		int32_t L_18 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_18, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_System_Collections_IList_Insert_mEBC24E64EBCE610BE0868BCA60EEC1D87F94A5A6 (List_1_t9B68833848E4C4D7F623C05F6B77F0449396354A* __this, int32_t ___0_index, RuntimeObject* ___1_item, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(Type_t_StaticInit);
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = ___1_item;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mD81B5632275C9C89651C1B357F26058E8E76A526(L_0, ((int32_t)20), NULL);
	}
	try
	{
		int32_t L_1 = ___0_index;
		RuntimeObject* L_2 = ___1_item;
		List_1_Insert_mA1CAB048AF0A6CB36BD753A432BB19402C898B53(__this, L_1, ((*(uint32_t*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 27));
		goto IL_002a;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0017;
		}
		throw e;
	}

CATCH_0017:
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_3 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_4 = ___1_item;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 10)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
		ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_4, L_6, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_002a;
	}

IL_002a:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_InsertRange_m29B3B6011A4CF0D086BC1615992ABBF9045CDFAB (List_1_t9B68833848E4C4D7F623C05F6B77F0449396354A* __this, int32_t ___0_index, RuntimeObject* ___1_collection, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	RuntimeObject* V_2 = NULL;
	{
		RuntimeObject* L_0 = ___1_collection;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(6, NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___0_index;
		int32_t L_2 = __this->____size;
		if ((!(((uint32_t)L_1) > ((uint32_t)L_2))))
		{
			goto IL_0017;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRange_IndexException_mC7661B8C6DD827679C95FC6B6C08F8724174936D(NULL);
	}

IL_0017:
	{
		RuntimeObject* L_3 = ___1_collection;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_3, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2)));
		RuntimeObject* L_4 = V_0;
		if (!L_4)
		{
			goto IL_00bc;
		}
	}
	{
		RuntimeObject* L_5 = V_0;
		int32_t L_6;
		L_6 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_5);
		V_1 = L_6;
		int32_t L_7 = V_1;
		if ((((int32_t)L_7) <= ((int32_t)0)))
		{
			goto IL_00fb;
		}
	}
	{
		int32_t L_8 = __this->____size;
		int32_t L_9 = V_1;
		List_1_EnsureCapacity_m5DB123345126DC3D92D13E5F9A545806C4184296(__this, ((int32_t)il2cpp_codegen_add(L_8, L_9)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 12));
		int32_t L_10 = ___0_index;
		int32_t L_11 = __this->____size;
		if ((((int32_t)L_10) >= ((int32_t)L_11)))
		{
			goto IL_0066;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_12 = __this->____items;
		int32_t L_13 = ___0_index;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_14 = __this->____items;
		int32_t L_15 = ___0_index;
		int32_t L_16 = V_1;
		int32_t L_17 = __this->____size;
		int32_t L_18 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_12, L_13, (RuntimeArray*)L_14, ((int32_t)il2cpp_codegen_add(L_15, L_16)), ((int32_t)il2cpp_codegen_subtract(L_17, L_18)), NULL);
	}

IL_0066:
	{
		RuntimeObject* L_19 = V_0;
		if ((!(((RuntimeObject*)(List_1_t9B68833848E4C4D7F623C05F6B77F0449396354A*)__this) == ((RuntimeObject*)(RuntimeObject*)L_19))))
		{
			goto IL_009f;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_20 = __this->____items;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_21 = __this->____items;
		int32_t L_22 = ___0_index;
		int32_t L_23 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_20, 0, (RuntimeArray*)L_21, L_22, L_23, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_24 = __this->____items;
		int32_t L_25 = ___0_index;
		int32_t L_26 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_27 = __this->____items;
		int32_t L_28 = ___0_index;
		int32_t L_29 = __this->____size;
		int32_t L_30 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_24, ((int32_t)il2cpp_codegen_add(L_25, L_26)), (RuntimeArray*)L_27, ((int32_t)il2cpp_codegen_multiply(L_28, 2)), ((int32_t)il2cpp_codegen_subtract(L_29, L_30)), NULL);
		goto IL_00ac;
	}

IL_009f:
	{
		RuntimeObject* L_31 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_32 = __this->____items;
		int32_t L_33 = ___0_index;
		InterfaceActionInvoker2< UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_31, L_32, L_33);
	}

IL_00ac:
	{
		int32_t L_34 = __this->____size;
		int32_t L_35 = V_1;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_34, L_35));
		goto IL_00fb;
	}

IL_00bc:
	{
		int32_t L_36 = ___0_index;
		int32_t L_37 = __this->____size;
		if ((((int32_t)L_36) >= ((int32_t)L_37)))
		{
			goto IL_00f4;
		}
	}
	{
		RuntimeObject* L_38 = ___1_collection;
		RuntimeObject* L_39;
		L_39 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 28), L_38);
		V_2 = L_39;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00ea:
			{
				{
					RuntimeObject* L_40 = V_2;
					if (!L_40)
					{
						goto IL_00f3;
					}
				}
				{
					RuntimeObject* L_41 = V_2;
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_41);
				}

IL_00f3:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_00e0_1;
			}

IL_00ce_1:
			{
				int32_t L_42 = ___0_index;
				int32_t L_43 = L_42;
				___0_index = ((int32_t)il2cpp_codegen_add(L_43, 1));
				RuntimeObject* L_44 = V_2;
				uint32_t L_45;
				L_45 = InterfaceFuncInvoker0< uint32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 30), L_44);
				List_1_Insert_mA1CAB048AF0A6CB36BD753A432BB19402C898B53(__this, L_43, L_45, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 27));
			}

IL_00e0_1:
			{
				RuntimeObject* L_46 = V_2;
				bool L_47;
				L_47 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_46);
				if (L_47)
				{
					goto IL_00ce_1;
				}
			}
			{
				goto IL_00fb;
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

IL_00f4:
	{
		RuntimeObject* L_48 = ___1_collection;
		List_1_AddEnumerable_m7306D508C149BFCA2F5AF72B013F75A308A08204(__this, L_48, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 5));
	}

IL_00fb:
	{
		int32_t L_49 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_49, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m7F278AC340D3D507A585015EA22C309049AC91AC (List_1_t9B68833848E4C4D7F623C05F6B77F0449396354A* __this, uint32_t ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		uint32_t L_0 = ___0_item;
		int32_t L_1;
		L_1 = List_1_IndexOf_mABB902B1AAE8B2D146C0ADBE69F1AE07DD33A824(__this, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 17));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		int32_t L_3 = V_0;
		List_1_RemoveAt_mFBE8510D49E8C1843C279A9D3FF8C4BE83CDECD0(__this, L_3, NULL);
		return (bool)1;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_System_Collections_IList_Remove_mFDBD9E5CBE3C3BD7541C8995470363093EFB736E (List_1_t9B68833848E4C4D7F623C05F6B77F0449396354A* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit);
	{
		RuntimeObject* L_0 = ___0_item;
		CHECKED_LOCAL_INIT(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)),il2cpp_codegen_runtime_class_init_inline);
		bool L_1;
		L_1 = List_1_IsCompatibleObject_m05B0D418D70673CEA58C4991E8C26A67B469ECFC(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 18));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_item;
		bool L_3;
		L_3 = List_1_Remove_m7F278AC340D3D507A585015EA22C309049AC91AC(__this, ((*(uint32_t*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 33));
	}

IL_0015:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_RemoveAll_mCD1BF411F1AD8117DA7D9EECE2D1115760F40511 (List_1_t9B68833848E4C4D7F623C05F6B77F0449396354A* __this, Predicate_1_t2F212B682F64543895DDB2A14A8816A433567EFF* ___0_match, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Predicate_1_t2F212B682F64543895DDB2A14A8816A433567EFF* L_0 = ___0_match;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(8, NULL);
	}

IL_0009:
	{
		V_0 = 0;
		goto IL_0011;
	}

IL_000d:
	{
		int32_t L_1 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_1, 1));
	}

IL_0011:
	{
		int32_t L_2 = V_0;
		int32_t L_3 = __this->____size;
		if ((((int32_t)L_2) >= ((int32_t)L_3)))
		{
			goto IL_002e;
		}
	}
	{
		Predicate_1_t2F212B682F64543895DDB2A14A8816A433567EFF* L_4 = ___0_match;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_5 = __this->____items;
		int32_t L_6 = V_0;
		int32_t L_7 = L_6;
		uint32_t L_8 = (L_5)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7));
		bool L_9;
		L_9 = Predicate_1_Invoke_mCE33776BF08B37A05CCD7FBB46335E5FB6B215DC_inline(L_4, L_8, NULL);
		if (!L_9)
		{
			goto IL_000d;
		}
	}

IL_002e:
	{
		int32_t L_10 = V_0;
		int32_t L_11 = __this->____size;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_0039;
		}
	}
	{
		return 0;
	}

IL_0039:
	{
		int32_t L_12 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
		goto IL_0089;
	}

IL_003f:
	{
		int32_t L_13 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0043:
	{
		int32_t L_14 = V_1;
		int32_t L_15 = __this->____size;
		if ((((int32_t)L_14) >= ((int32_t)L_15)))
		{
			goto IL_0060;
		}
	}
	{
		Predicate_1_t2F212B682F64543895DDB2A14A8816A433567EFF* L_16 = ___0_match;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_17 = __this->____items;
		int32_t L_18 = V_1;
		int32_t L_19 = L_18;
		uint32_t L_20 = (L_17)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_19));
		bool L_21;
		L_21 = Predicate_1_Invoke_mCE33776BF08B37A05CCD7FBB46335E5FB6B215DC_inline(L_16, L_20, NULL);
		if (L_21)
		{
			goto IL_003f;
		}
	}

IL_0060:
	{
		int32_t L_22 = V_1;
		int32_t L_23 = __this->____size;
		if ((((int32_t)L_22) >= ((int32_t)L_23)))
		{
			goto IL_0089;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_24 = __this->____items;
		int32_t L_25 = V_0;
		int32_t L_26 = L_25;
		V_0 = ((int32_t)il2cpp_codegen_add(L_26, 1));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_27 = __this->____items;
		int32_t L_28 = V_1;
		int32_t L_29 = L_28;
		V_1 = ((int32_t)il2cpp_codegen_add(L_29, 1));
		int32_t L_30 = L_29;
		uint32_t L_31 = (L_27)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_30));
		(L_24)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_26), (uint32_t)L_31);
	}

IL_0089:
	{
		int32_t L_32 = V_1;
		int32_t L_33 = __this->____size;
		if ((((int32_t)L_32) < ((int32_t)L_33)))
		{
			goto IL_0043;
		}
	}
	{
		goto IL_00ad;
	}

IL_00ad:
	{
		int32_t L_34 = __this->____size;
		int32_t L_35 = V_0;
		int32_t L_36 = V_0;
		__this->____size = L_36;
		int32_t L_37 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_37, 1));
		return ((int32_t)il2cpp_codegen_subtract(L_34, L_35));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_mFBE8510D49E8C1843C279A9D3FF8C4BE83CDECD0 (List_1_t9B68833848E4C4D7F623C05F6B77F0449396354A* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRange_IndexException_mC7661B8C6DD827679C95FC6B6C08F8724174936D(NULL);
	}

IL_000e:
	{
		int32_t L_2 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_2, 1));
		int32_t L_3 = ___0_index;
		int32_t L_4 = __this->____size;
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_0042;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_5 = __this->____items;
		int32_t L_6 = ___0_index;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_7 = __this->____items;
		int32_t L_8 = ___0_index;
		int32_t L_9 = __this->____size;
		int32_t L_10 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, ((int32_t)il2cpp_codegen_add(L_6, 1)), (RuntimeArray*)L_7, L_8, ((int32_t)il2cpp_codegen_subtract(L_9, L_10)), NULL);
	}

IL_0042:
	{
		goto IL_0063;
	}

IL_0063:
	{
		int32_t L_11 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_11, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveRange_m7889053BD8F664944472D2872812B2BD8D688652 (List_1_t9B68833848E4C4D7F623C05F6B77F0449396354A* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_count;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F(((int32_t)16), 4, NULL);
	}

IL_0015:
	{
		int32_t L_2 = __this->____size;
		int32_t L_3 = ___0_index;
		int32_t L_4 = ___1_count;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_2, L_3))) >= ((int32_t)L_4)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(((int32_t)23), NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_count;
		if ((((int32_t)L_5) <= ((int32_t)0)))
		{
			goto IL_008d;
		}
	}
	{
		int32_t L_6 = __this->____size;
		int32_t L_7 = __this->____size;
		int32_t L_8 = ___1_count;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_7, L_8));
		int32_t L_9 = ___0_index;
		int32_t L_10 = __this->____size;
		if ((((int32_t)L_9) >= ((int32_t)L_10)))
		{
			goto IL_0066;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_11 = __this->____items;
		int32_t L_12 = ___0_index;
		int32_t L_13 = ___1_count;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_14 = __this->____items;
		int32_t L_15 = ___0_index;
		int32_t L_16 = __this->____size;
		int32_t L_17 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_11, ((int32_t)il2cpp_codegen_add(L_12, L_13)), (RuntimeArray*)L_14, L_15, ((int32_t)il2cpp_codegen_subtract(L_16, L_17)), NULL);
	}

IL_0066:
	{
		int32_t L_18 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_18, 1));
		goto IL_008d;
	}

IL_008d:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Reverse_m914846F1A8D0282719E2805547A40B1D2F771A67 (List_1_t9B68833848E4C4D7F623C05F6B77F0449396354A* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = List_1_get_Count_mA30526AC2097A68939350DBA860B7D2B0EEE1585_inline(__this, NULL);
		List_1_Reverse_m3112F78E91DA387ACEF86675EEF7D0F004ED07D8(__this, 0, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 35));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Reverse_m3112F78E91DA387ACEF86675EEF7D0F004ED07D8 (List_1_t9B68833848E4C4D7F623C05F6B77F0449396354A* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_count;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F(((int32_t)16), 4, NULL);
	}

IL_0015:
	{
		int32_t L_2 = __this->____size;
		int32_t L_3 = ___0_index;
		int32_t L_4 = ___1_count;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_2, L_3))) >= ((int32_t)L_4)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(((int32_t)23), NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_count;
		if ((((int32_t)L_5) <= ((int32_t)1)))
		{
			goto IL_0038;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_6 = __this->____items;
		int32_t L_7 = ___0_index;
		int32_t L_8 = ___1_count;
		Array_Reverse_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mFFA9B7CF98584CC40CD31B6897ABB99499611E7E(L_6, L_7, L_8, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 36));
	}

IL_0038:
	{
		int32_t L_9 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_9, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_mF4FB0B9C6A9051560D7E325ABD348446E9239322 (List_1_t9B68833848E4C4D7F623C05F6B77F0449396354A* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = List_1_get_Count_mA30526AC2097A68939350DBA860B7D2B0EEE1585_inline(__this, NULL);
		RuntimeObject* L_1 = ___0_comparer;
		List_1_Sort_m0C4A4981F6581FBF0C85D77719B15FD4A24755C3(__this, 0, L_0, L_1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 37));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_m0C4A4981F6581FBF0C85D77719B15FD4A24755C3 (List_1_t9B68833848E4C4D7F623C05F6B77F0449396354A* __this, int32_t ___0_index, int32_t ___1_count, RuntimeObject* ___2_comparer, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_count;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F(((int32_t)16), 4, NULL);
	}

IL_0015:
	{
		int32_t L_2 = __this->____size;
		int32_t L_3 = ___0_index;
		int32_t L_4 = ___1_count;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_2, L_3))) >= ((int32_t)L_4)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(((int32_t)23), NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_count;
		if ((((int32_t)L_5) <= ((int32_t)1)))
		{
			goto IL_0039;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_6 = __this->____items;
		int32_t L_7 = ___0_index;
		int32_t L_8 = ___1_count;
		RuntimeObject* L_9 = ___2_comparer;
		Array_Sort_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mBA485F66F726C6BFFE9C6F718D41776E17DAB3A8(L_6, L_7, L_8, L_9, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 38));
	}

IL_0039:
	{
		int32_t L_10 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_10, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_mFFA86DFD52CBD4FC17A31600ED6565EA303619DA (List_1_t9B68833848E4C4D7F623C05F6B77F0449396354A* __this, Comparison_1_tF77ABBDA0482B2BE658FA3EE0DFA2E0ECB09A60B* ___0_comparison, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(ArraySortHelper_1_t0B69B36E8E1F97490E6BE32C23AE1784AB1ADA3A_StaticInit);
	{
		Comparison_1_tF77ABBDA0482B2BE658FA3EE0DFA2E0ECB09A60B* L_0 = ___0_comparison;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(((int32_t)34), NULL);
	}

IL_000a:
	{
		int32_t L_1 = __this->____size;
		if ((((int32_t)L_1) <= ((int32_t)1)))
		{
			goto IL_0026;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2 = __this->____items;
		int32_t L_3 = __this->____size;
		Comparison_1_tF77ABBDA0482B2BE658FA3EE0DFA2E0ECB09A60B* L_4 = ___0_comparison;
		CHECKED_LOCAL_INIT(ArraySortHelper_1_t0B69B36E8E1F97490E6BE32C23AE1784AB1ADA3A_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 40)),il2cpp_codegen_runtime_class_init_inline);
		ArraySortHelper_1_Sort_mFC27B3DD081A42FB1EC554B088A4A73805D2C2FF(L_2, 0, L_3, L_4, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 39));
	}

IL_0026:
	{
		int32_t L_5 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_5, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* List_1_ToArray_m1CC582554F660560CD50E99994F15107827F0CA3 (List_1_t9B68833848E4C4D7F623C05F6B77F0449396354A* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit);
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_0 = NULL;
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		CHECKED_LOCAL_INIT(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)),il2cpp_codegen_runtime_class_init_inline);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = ((List_1_t9B68833848E4C4D7F623C05F6B77F0449396354A_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)))->___s_emptyArray;
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____size;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1), (uint32_t)L_2);
		V_0 = L_3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4 = __this->____items;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_5 = V_0;
		int32_t L_6 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_4, 0, (RuntimeArray*)L_5, 0, L_6, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_7 = V_0;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddEnumerable_m7306D508C149BFCA2F5AF72B013F75A308A08204 (List_1_t9B68833848E4C4D7F623C05F6B77F0449396354A* __this, RuntimeObject* ___0_enumerable, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	uint32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		RuntimeObject* L_1 = ___0_enumerable;
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 28), L_1);
		V_0 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0063:
			{
				{
					RuntimeObject* L_3 = V_0;
					if (!L_3)
					{
						goto IL_006c;
					}
				}
				{
					RuntimeObject* L_4 = V_0;
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_4);
				}

IL_006c:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_0059_1;
			}

IL_0017_1:
			{
				RuntimeObject* L_5 = V_0;
				uint32_t L_6;
				L_6 = InterfaceFuncInvoker0< uint32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 30), L_5);
				V_1 = L_6;
				int32_t L_7 = __this->____size;
				UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_8 = __this->____items;
				int32_t L_9 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_8)->max_length),NULL));
				if ((!(((uint32_t)L_7) == ((uint32_t)L_9))))
				{
					goto IL_003c_1;
				}
			}
			{
				int32_t L_10 = __this->____size;
				List_1_EnsureCapacity_m5DB123345126DC3D92D13E5F9A545806C4184296(__this, ((int32_t)il2cpp_codegen_add(L_10, 1)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 12));
			}

IL_003c_1:
			{
				UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_11 = __this->____items;
				int32_t L_12 = __this->____size;
				V_2 = L_12;
				int32_t L_13 = V_2;
				__this->____size = ((int32_t)il2cpp_codegen_add(L_13, 1));
				int32_t L_14 = V_2;
				uint32_t L_15 = V_1;
				(L_11)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_14), (uint32_t)L_15);
			}

IL_0059_1:
			{
				RuntimeObject* L_16 = V_0;
				bool L_17;
				L_17 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_16);
				if (L_17)
				{
					goto IL_0017_1;
				}
			}
			{
				goto IL_006d;
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

IL_006d:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__cctor_m4799D5D7C3B38B6629597677AD0CA8F1A24C86A2 (const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1), (uint32_t)0);
		((List_1_t9B68833848E4C4D7F623C05F6B77F0449396354A_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___s_emptyArray = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((List_1_t9B68833848E4C4D7F623C05F6B77F0449396354A_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___s_emptyArray), (void*)L_0);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7378BA5FBCA1E88080985FB810820B3F47DAD54C_gshared (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit);
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		CHECKED_LOCAL_INIT(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)),il2cpp_codegen_runtime_class_init_inline);
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_0 = ((List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)))->___s_emptyArray;
		__this->____items = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m54D719307910A9DC9CD4DEFA8AE2626F49EB7516_gshared (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit);
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0012;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F(((int32_t)12), 4, NULL);
	}

IL_0012:
	{
		int32_t L_1 = ___0_capacity;
		if (L_1)
		{
			goto IL_0021;
		}
	}
	{
		CHECKED_LOCAL_INIT(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)),il2cpp_codegen_runtime_class_init_inline);
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_2 = ((List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)))->___s_emptyArray;
		__this->____items = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_2);
		return;
	}

IL_0021:
	{
		int32_t L_3 = ___0_capacity;
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_4 = (__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979*)(__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1), (uint32_t)L_3);
		__this->____items = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_4);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m4D165FBE2796C395527CD5404B0C5D0F2828736A_gshared (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit);
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		RuntimeObject* L_0 = ___0_collection;
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(6, NULL);
	}

IL_000f:
	{
		RuntimeObject* L_1 = ___0_collection;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_1, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2)));
		RuntimeObject* L_2 = V_0;
		if (!L_2)
		{
			goto IL_0050;
		}
	}
	{
		RuntimeObject* L_3 = V_0;
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_3);
		V_1 = L_4;
		int32_t L_5 = V_1;
		if (L_5)
		{
			goto IL_002f;
		}
	}
	{
		CHECKED_LOCAL_INIT(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)),il2cpp_codegen_runtime_class_init_inline);
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_6 = ((List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)))->___s_emptyArray;
		__this->____items = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_6);
		return;
	}

IL_002f:
	{
		int32_t L_7 = V_1;
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_8 = (__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979*)(__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1), (uint32_t)L_7);
		__this->____items = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_8);
		RuntimeObject* L_9 = V_0;
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_10 = __this->____items;
		InterfaceActionInvoker2< __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_9, L_10, 0);
		int32_t L_11 = V_1;
		__this->____size = L_11;
		return;
	}

IL_0050:
	{
		__this->____size = 0;
		CHECKED_LOCAL_INIT(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)),il2cpp_codegen_runtime_class_init_inline);
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_12 = ((List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)))->___s_emptyArray;
		__this->____items = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_12);
		RuntimeObject* L_13 = ___0_collection;
		List_1_AddEnumerable_m44B5C2177E9403DB0E3DC2BC6E590CDA7266BE79(__this, L_13, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 5));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Capacity_m4B62593B8671BB60809057D57DC60568557315E6_gshared (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit);
	__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* V_0 = NULL;
	{
		int32_t L_0 = ___0_value;
		int32_t L_1 = __this->____size;
		if ((((int32_t)L_0) >= ((int32_t)L_1)))
		{
			goto IL_0012;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F(((int32_t)15), ((int32_t)21), NULL);
	}

IL_0012:
	{
		int32_t L_2 = ___0_value;
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_3 = __this->____items;
		int32_t L_4 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_3)->max_length),NULL));
		if ((((int32_t)L_2) == ((int32_t)L_4)))
		{
			goto IL_0058;
		}
	}
	{
		int32_t L_5 = ___0_value;
		if ((((int32_t)L_5) <= ((int32_t)0)))
		{
			goto IL_004d;
		}
	}
	{
		int32_t L_6 = ___0_value;
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_7 = (__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979*)(__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1), (uint32_t)L_6);
		V_0 = L_7;
		int32_t L_8 = __this->____size;
		if ((((int32_t)L_8) <= ((int32_t)0)))
		{
			goto IL_0045;
		}
	}
	{
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_9 = __this->____items;
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_10 = V_0;
		int32_t L_11 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_9, 0, (RuntimeArray*)L_10, 0, L_11, NULL);
	}

IL_0045:
	{
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_12 = V_0;
		__this->____items = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_12);
		return;
	}

IL_004d:
	{
		CHECKED_LOCAL_INIT(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)),il2cpp_codegen_runtime_class_init_inline);
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_13 = ((List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)))->___s_emptyArray;
		__this->____items = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_13);
	}

IL_0058:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* List_1_get_Item_m02336594E8F76D7313E2BCB7A3ED5ABD13B4D515_gshared (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRange_IndexException_mC7661B8C6DD827679C95FC6B6C08F8724174936D(NULL);
	}

IL_000e:
	{
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_2 = __this->____items;
		int32_t L_3 = ___0_index;
		int32_t L_4 = L_3;
		Il2CppSharedGenericObject* L_5 = (L_2)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_mCD8F7775F9C4842958A7188EBC0EBF1BE03101EF_gshared (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* __this, int32_t ___0_index, Il2CppSharedGenericObject* ___1_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRange_IndexException_mC7661B8C6DD827679C95FC6B6C08F8724174936D(NULL);
	}

IL_000e:
	{
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_2 = __this->____items;
		int32_t L_3 = ___0_index;
		Il2CppSharedGenericObject* L_4 = ___1_value;
		(L_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3), (Il2CppSharedGenericObject*)L_4);
		int32_t L_5 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_5, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_IsCompatibleObject_m9E5E0DF2443D88570595AEA0FEF7D7122455EB26_gshared (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	Il2CppSharedGenericObject* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___0_value;
		if (((Il2CppSharedGenericObject*)IsInst((RuntimeObject*)L_0, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6))))
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Il2CppSharedGenericObject*));
		Il2CppSharedGenericObject* L_2 = V_0;
		return (bool)((((RuntimeObject*)(Il2CppSharedGenericObject*)L_2) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
	}

IL_001d:
	{
		return (bool)0;
	}

IL_001f:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_System_Collections_IList_get_Item_m78BCF727FD3CF47C4FE97D00AFAD2781B6A7F004_gshared (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		Il2CppSharedGenericObject* L_1;
		L_1 = List_1_get_Item_m02336594E8F76D7313E2BCB7A3ED5ABD13B4D515(__this, L_0, NULL);
		return (RuntimeObject*)L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_System_Collections_IList_set_Item_m5E8C43852B62BD7E2A9582754B44057F224BD12D_gshared (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* __this, int32_t ___0_index, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(Type_t_StaticInit);
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = ___1_value;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisIl2CppSharedGenericObject_mE7A1EEC53480BA1ED6C827938ADAF45B127DD054(L_0, ((int32_t)15), NULL);
	}
	try
	{
		int32_t L_1 = ___0_index;
		RuntimeObject* L_2 = ___1_value;
		List_1_set_Item_mCD8F7775F9C4842958A7188EBC0EBF1BE03101EF(__this, L_1, ((Il2CppSharedGenericObject*)Castclass((RuntimeObject*)L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6))), NULL);
		goto IL_002a;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0017;
		}
		throw e;
	}

CATCH_0017:
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_3 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_4 = ___1_value;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 10)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
		ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_4, L_6, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_002a;
	}

IL_002a:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_m0CE6E39234ED33F5195AABC8029D06D4756C75C1_gshared (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* __this, Il2CppSharedGenericObject* ___0_item, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_mCC24A812DFC30C3DE2230E3C8EE705871C1DFF81_gshared (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* __this, Il2CppSharedGenericObject* ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____size;
		V_0 = L_0;
		int32_t L_1 = V_0;
		List_1_EnsureCapacity_m89719BB37EEDA80E6AD7FAC5D1AAC5A47DDE86B5(__this, ((int32_t)il2cpp_codegen_add(L_1, 1)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 12));
		int32_t L_2 = V_0;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_2, 1));
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_3 = __this->____items;
		int32_t L_4 = V_0;
		Il2CppSharedGenericObject* L_5 = ___0_item;
		(L_3)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4), (Il2CppSharedGenericObject*)L_5);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_System_Collections_IList_Add_mC916FB88482D2EF5E43527D9840C8E67FAC4D4CB_gshared (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(Type_t_StaticInit);
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = ___0_item;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisIl2CppSharedGenericObject_mE7A1EEC53480BA1ED6C827938ADAF45B127DD054(L_0, ((int32_t)20), NULL);
	}
	try
	{
		RuntimeObject* L_1 = ___0_item;
		List_1_Add_m0CE6E39234ED33F5195AABC8029D06D4756C75C1_inline(__this, ((Il2CppSharedGenericObject*)Castclass((RuntimeObject*)L_1, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		goto IL_0029;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0016;
		}
		throw e;
	}

CATCH_0016:
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_2 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_3 = ___0_item;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_4 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 10)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_5;
		L_5 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_4, NULL);
		ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_3, L_5, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0029;
	}

IL_0029:
	{
		int32_t L_6;
		L_6 = List_1_get_Count_m9832942FE310479E64D9D0D23F29C65305BE1622_inline(__this, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_6, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddRange_m655A34E010FCB41069350D2D616558180A0C0AFF_gshared (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		RuntimeObject* L_1 = ___0_collection;
		List_1_InsertRange_m7B9D6C4AB69B4EA07C23832C6109C25C21E99804(__this, L_0, L_1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 15));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_mCCC05B98943E8F4E0F6FBF47063A269048AE71E5_gshared (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
	}
	{
		int32_t L_1 = __this->____size;
		V_0 = L_1;
		__this->____size = 0;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_3 = __this->____items;
		int32_t L_4 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_3, 0, L_4, NULL);
		return;
	}

IL_003c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_m63E643DC9A821297E2EBF9085D93B39BFC2F9DCE_gshared (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* __this, Il2CppSharedGenericObject* ___0_item, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		Il2CppSharedGenericObject* L_1 = ___0_item;
		int32_t L_2;
		L_2 = List_1_IndexOf_m4B13B6BE7AA6327431F1BE406264329892975DE9(__this, L_1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 17));
		return (bool)((((int32_t)((((int32_t)L_2) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0016:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_System_Collections_IList_Contains_m7E4E8EA0E50007EC7F90752FBB913B35DBD8C00B_gshared (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit);
	{
		RuntimeObject* L_0 = ___0_item;
		CHECKED_LOCAL_INIT(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)),il2cpp_codegen_runtime_class_init_inline);
		bool L_1;
		L_1 = List_1_IsCompatibleObject_m9E5E0DF2443D88570595AEA0FEF7D7122455EB26(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 18));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_item;
		bool L_3;
		L_3 = List_1_Contains_m63E643DC9A821297E2EBF9085D93B39BFC2F9DCE(__this, ((Il2CppSharedGenericObject*)Castclass((RuntimeObject*)L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 19));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_CopyTo_m04A1E702FBAB126758881A6A6D42052295136DCD_gshared (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* __this, __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* ___0_array, const RuntimeMethod* method) 
{
	{
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_0 = ___0_array;
		List_1_CopyTo_m75919E1737F4EC8D7DD329629C11CACA64EF5BE3(__this, L_0, 0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_EnsureCapacity_m89719BB37EEDA80E6AD7FAC5D1AAC5A47DDE86B5_gshared (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* __this, int32_t ___0_min, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t G_B4_0 = 0;
	{
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_0 = __this->____items;
		int32_t L_1 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_0)->max_length),NULL));
		int32_t L_2 = ___0_min;
		if ((((int32_t)L_1) >= ((int32_t)L_2)))
		{
			goto IL_003d;
		}
	}
	{
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_3 = __this->____items;
		if (!(((RuntimeArray*)L_3)->max_length))
		{
			goto IL_0020;
		}
	}
	{
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_4 = __this->____items;
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		G_B4_0 = ((int32_t)il2cpp_codegen_multiply(L_5, 2));
		goto IL_0021;
	}

IL_0020:
	{
		G_B4_0 = 4;
	}

IL_0021:
	{
		V_0 = G_B4_0;
		int32_t L_6 = V_0;
		if ((!(((uint32_t)L_6) > ((uint32_t)((int32_t)2146435071)))))
		{
			goto IL_0030;
		}
	}
	{
		V_0 = ((int32_t)2146435071);
	}

IL_0030:
	{
		int32_t L_7 = V_0;
		int32_t L_8 = ___0_min;
		if ((((int32_t)L_7) >= ((int32_t)L_8)))
		{
			goto IL_0036;
		}
	}
	{
		int32_t L_9 = ___0_min;
		V_0 = L_9;
	}

IL_0036:
	{
		int32_t L_10 = V_0;
		List_1_set_Capacity_m4B62593B8671BB60809057D57DC60568557315E6(__this, L_10, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 21));
	}

IL_003d:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_ForEach_m8ADDD90CD18FA47D7C9010951EE34AA49513AC50_gshared (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* __this, Action_1_tF0E1373A391479E6E235E0D82CE1EF1DE6B6C505* ___0_action, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Action_1_tF0E1373A391479E6E235E0D82CE1EF1DE6B6C505* L_0 = ___0_action;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(((int32_t)33), NULL);
	}

IL_000a:
	{
		int32_t L_1 = __this->____version;
		V_0 = L_1;
		V_1 = 0;
		goto IL_0034;
	}

IL_0015:
	{
		int32_t L_2 = V_0;
		int32_t L_3 = __this->____version;
		if ((!(((uint32_t)L_2) == ((uint32_t)L_3))))
		{
			goto IL_003d;
		}
	}
	{
		Action_1_tF0E1373A391479E6E235E0D82CE1EF1DE6B6C505* L_4 = ___0_action;
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_5 = __this->____items;
		int32_t L_6 = V_1;
		int32_t L_7 = L_6;
		Il2CppSharedGenericObject* L_8 = (L_5)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7));
		Action_1_Invoke_mDB8F7C7381C08B4DCE4E409D2FA4073BC17F90B5_inline(L_4, L_8, NULL);
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0034:
	{
		int32_t L_10 = V_1;
		int32_t L_11 = __this->____size;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_0015;
		}
	}

IL_003d:
	{
		int32_t L_12 = V_0;
		int32_t L_13 = __this->____version;
		if ((((int32_t)L_12) == ((int32_t)L_13)))
		{
			goto IL_004b;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_InvalidOperation_EnumFailedVersion_m5331E2E0EC0E36843D53F439C2529530595ACE9F(NULL);
	}

IL_004b:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tC367FBE981D257FF6A6357382526F6EC9FF3B2F9 List_1_GetEnumerator_mD48177D95D4B5D6A9D8E84E2477668C2850DD5D9_gshared (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tC367FBE981D257FF6A6357382526F6EC9FF3B2F9 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mB0C2B8891214015BE286DC32F260DEBDFAD317E9((&L_0), __this, NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_mBF03CBE09BFBA1E25B3E040FC761F6674F19D793_gshared (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tC367FBE981D257FF6A6357382526F6EC9FF3B2F9 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mB0C2B8891214015BE286DC32F260DEBDFAD317E9((&L_0), __this, NULL);
		Enumerator_tC367FBE981D257FF6A6357382526F6EC9FF3B2F9 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 23), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_System_Collections_IEnumerable_GetEnumerator_m2B6B507A19EBC0BBE5E87F276DB25C8B3388EC75_gshared (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tC367FBE981D257FF6A6357382526F6EC9FF3B2F9 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mB0C2B8891214015BE286DC32F260DEBDFAD317E9((&L_0), __this, NULL);
		Enumerator_tC367FBE981D257FF6A6357382526F6EC9FF3B2F9 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 23), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* List_1_GetRange_m2C6E6EDDC70F1D5E30EF591172FA5590D17035FB_gshared (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method) 
{
	List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* V_0 = NULL;
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_count;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F(((int32_t)16), 4, NULL);
	}

IL_0015:
	{
		int32_t L_2 = __this->____size;
		int32_t L_3 = ___0_index;
		int32_t L_4 = ___1_count;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_2, L_3))) >= ((int32_t)L_4)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(((int32_t)23), NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_count;
		List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* L_6 = (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0));
		List_1__ctor_m54D719307910A9DC9CD4DEFA8AE2626F49EB7516(L_6, L_5, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 25));
		V_0 = L_6;
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_7 = __this->____items;
		int32_t L_8 = ___0_index;
		List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* L_9 = V_0;
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_10 = L_9->____items;
		int32_t L_11 = ___1_count;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_7, L_8, (RuntimeArray*)L_10, 0, L_11, NULL);
		List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* L_12 = V_0;
		int32_t L_13 = ___1_count;
		L_12->____size = L_13;
		List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* L_14 = V_0;
		return L_14;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_IndexOf_m4B13B6BE7AA6327431F1BE406264329892975DE9_gshared (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* __this, Il2CppSharedGenericObject* ___0_item, const RuntimeMethod* method) 
{
	{
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_0 = __this->____items;
		Il2CppSharedGenericObject* L_1 = ___0_item;
		int32_t L_2 = __this->____size;
		int32_t L_3;
		L_3 = Array_IndexOf_TisIl2CppSharedGenericObject_m0C73DE72012C676D6E4354C82EA6550BBADC3D33(L_0, L_1, 0, L_2, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 26));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_System_Collections_IList_IndexOf_m1C5FA1B6E2917EF7F5DDC5BF65147FE6EF7F8517_gshared (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit);
	{
		RuntimeObject* L_0 = ___0_item;
		CHECKED_LOCAL_INIT(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)),il2cpp_codegen_runtime_class_init_inline);
		bool L_1;
		L_1 = List_1_IsCompatibleObject_m9E5E0DF2443D88570595AEA0FEF7D7122455EB26(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 18));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_item;
		int32_t L_3;
		L_3 = List_1_IndexOf_m4B13B6BE7AA6327431F1BE406264329892975DE9(__this, ((Il2CppSharedGenericObject*)Castclass((RuntimeObject*)L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 17));
		return L_3;
	}

IL_0015:
	{
		return (-1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Insert_mC5A8238645AD1D203E75313802D4DC78BDE7857E_gshared (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* __this, int32_t ___0_index, Il2CppSharedGenericObject* ___1_item, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_0012;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F(((int32_t)13), ((int32_t)27), NULL);
	}

IL_0012:
	{
		int32_t L_2 = __this->____size;
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_3 = __this->____items;
		int32_t L_4 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_3)->max_length),NULL));
		if ((!(((uint32_t)L_2) == ((uint32_t)L_4))))
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_5 = __this->____size;
		List_1_EnsureCapacity_m89719BB37EEDA80E6AD7FAC5D1AAC5A47DDE86B5(__this, ((int32_t)il2cpp_codegen_add(L_5, 1)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 12));
	}

IL_0030:
	{
		int32_t L_6 = ___0_index;
		int32_t L_7 = __this->____size;
		if ((((int32_t)L_6) >= ((int32_t)L_7)))
		{
			goto IL_0056;
		}
	}
	{
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_8 = __this->____items;
		int32_t L_9 = ___0_index;
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_10 = __this->____items;
		int32_t L_11 = ___0_index;
		int32_t L_12 = __this->____size;
		int32_t L_13 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_8, L_9, (RuntimeArray*)L_10, ((int32_t)il2cpp_codegen_add(L_11, 1)), ((int32_t)il2cpp_codegen_subtract(L_12, L_13)), NULL);
	}

IL_0056:
	{
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_14 = __this->____items;
		int32_t L_15 = ___0_index;
		Il2CppSharedGenericObject* L_16 = ___1_item;
		(L_14)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_15), (Il2CppSharedGenericObject*)L_16);
		int32_t L_17 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_17, 1));
		int32_t L_18 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_18, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_System_Collections_IList_Insert_m09D3F4F2042326635CFB5369AC8F9760A7F81CE2_gshared (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* __this, int32_t ___0_index, RuntimeObject* ___1_item, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(Type_t_StaticInit);
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = ___1_item;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisIl2CppSharedGenericObject_mE7A1EEC53480BA1ED6C827938ADAF45B127DD054(L_0, ((int32_t)20), NULL);
	}
	try
	{
		int32_t L_1 = ___0_index;
		RuntimeObject* L_2 = ___1_item;
		List_1_Insert_mC5A8238645AD1D203E75313802D4DC78BDE7857E(__this, L_1, ((Il2CppSharedGenericObject*)Castclass((RuntimeObject*)L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 27));
		goto IL_002a;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0017;
		}
		throw e;
	}

CATCH_0017:
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_3 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_4 = ___1_item;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 10)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
		ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_4, L_6, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_002a;
	}

IL_002a:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_InsertRange_m7B9D6C4AB69B4EA07C23832C6109C25C21E99804_gshared (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* __this, int32_t ___0_index, RuntimeObject* ___1_collection, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	RuntimeObject* V_2 = NULL;
	{
		RuntimeObject* L_0 = ___1_collection;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(6, NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___0_index;
		int32_t L_2 = __this->____size;
		if ((!(((uint32_t)L_1) > ((uint32_t)L_2))))
		{
			goto IL_0017;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRange_IndexException_mC7661B8C6DD827679C95FC6B6C08F8724174936D(NULL);
	}

IL_0017:
	{
		RuntimeObject* L_3 = ___1_collection;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_3, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2)));
		RuntimeObject* L_4 = V_0;
		if (!L_4)
		{
			goto IL_00bc;
		}
	}
	{
		RuntimeObject* L_5 = V_0;
		int32_t L_6;
		L_6 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_5);
		V_1 = L_6;
		int32_t L_7 = V_1;
		if ((((int32_t)L_7) <= ((int32_t)0)))
		{
			goto IL_00fb;
		}
	}
	{
		int32_t L_8 = __this->____size;
		int32_t L_9 = V_1;
		List_1_EnsureCapacity_m89719BB37EEDA80E6AD7FAC5D1AAC5A47DDE86B5(__this, ((int32_t)il2cpp_codegen_add(L_8, L_9)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 12));
		int32_t L_10 = ___0_index;
		int32_t L_11 = __this->____size;
		if ((((int32_t)L_10) >= ((int32_t)L_11)))
		{
			goto IL_0066;
		}
	}
	{
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_12 = __this->____items;
		int32_t L_13 = ___0_index;
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_14 = __this->____items;
		int32_t L_15 = ___0_index;
		int32_t L_16 = V_1;
		int32_t L_17 = __this->____size;
		int32_t L_18 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_12, L_13, (RuntimeArray*)L_14, ((int32_t)il2cpp_codegen_add(L_15, L_16)), ((int32_t)il2cpp_codegen_subtract(L_17, L_18)), NULL);
	}

IL_0066:
	{
		RuntimeObject* L_19 = V_0;
		if ((!(((RuntimeObject*)(List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E*)__this) == ((RuntimeObject*)(RuntimeObject*)L_19))))
		{
			goto IL_009f;
		}
	}
	{
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_20 = __this->____items;
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_21 = __this->____items;
		int32_t L_22 = ___0_index;
		int32_t L_23 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_20, 0, (RuntimeArray*)L_21, L_22, L_23, NULL);
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_24 = __this->____items;
		int32_t L_25 = ___0_index;
		int32_t L_26 = V_1;
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_27 = __this->____items;
		int32_t L_28 = ___0_index;
		int32_t L_29 = __this->____size;
		int32_t L_30 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_24, ((int32_t)il2cpp_codegen_add(L_25, L_26)), (RuntimeArray*)L_27, ((int32_t)il2cpp_codegen_multiply(L_28, 2)), ((int32_t)il2cpp_codegen_subtract(L_29, L_30)), NULL);
		goto IL_00ac;
	}

IL_009f:
	{
		RuntimeObject* L_31 = V_0;
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_32 = __this->____items;
		int32_t L_33 = ___0_index;
		InterfaceActionInvoker2< __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_31, L_32, L_33);
	}

IL_00ac:
	{
		int32_t L_34 = __this->____size;
		int32_t L_35 = V_1;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_34, L_35));
		goto IL_00fb;
	}

IL_00bc:
	{
		int32_t L_36 = ___0_index;
		int32_t L_37 = __this->____size;
		if ((((int32_t)L_36) >= ((int32_t)L_37)))
		{
			goto IL_00f4;
		}
	}
	{
		RuntimeObject* L_38 = ___1_collection;
		RuntimeObject* L_39;
		L_39 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 28), L_38);
		V_2 = L_39;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00ea:
			{
				{
					RuntimeObject* L_40 = V_2;
					if (!L_40)
					{
						goto IL_00f3;
					}
				}
				{
					RuntimeObject* L_41 = V_2;
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_41);
				}

IL_00f3:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_00e0_1;
			}

IL_00ce_1:
			{
				int32_t L_42 = ___0_index;
				int32_t L_43 = L_42;
				___0_index = ((int32_t)il2cpp_codegen_add(L_43, 1));
				RuntimeObject* L_44 = V_2;
				Il2CppSharedGenericObject* L_45;
				L_45 = InterfaceFuncInvoker0< Il2CppSharedGenericObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 30), L_44);
				List_1_Insert_mC5A8238645AD1D203E75313802D4DC78BDE7857E(__this, L_43, L_45, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 27));
			}

IL_00e0_1:
			{
				RuntimeObject* L_46 = V_2;
				bool L_47;
				L_47 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_46);
				if (L_47)
				{
					goto IL_00ce_1;
				}
			}
			{
				goto IL_00fb;
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

IL_00f4:
	{
		RuntimeObject* L_48 = ___1_collection;
		List_1_AddEnumerable_m44B5C2177E9403DB0E3DC2BC6E590CDA7266BE79(__this, L_48, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 5));
	}

IL_00fb:
	{
		int32_t L_49 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_49, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m0AC731A08F1400089DD478E2D366804833660796_gshared (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* __this, Il2CppSharedGenericObject* ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		Il2CppSharedGenericObject* L_0 = ___0_item;
		int32_t L_1;
		L_1 = List_1_IndexOf_m4B13B6BE7AA6327431F1BE406264329892975DE9(__this, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 17));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		int32_t L_3 = V_0;
		List_1_RemoveAt_m36F68EA689DB109415094085A496D5EA21E2F23C(__this, L_3, NULL);
		return (bool)1;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_System_Collections_IList_Remove_mCBBBF61C9D398AB54A3B84E64145D65DF44BA716_gshared (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit);
	{
		RuntimeObject* L_0 = ___0_item;
		CHECKED_LOCAL_INIT(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)),il2cpp_codegen_runtime_class_init_inline);
		bool L_1;
		L_1 = List_1_IsCompatibleObject_m9E5E0DF2443D88570595AEA0FEF7D7122455EB26(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 18));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_item;
		bool L_3;
		L_3 = List_1_Remove_m0AC731A08F1400089DD478E2D366804833660796(__this, ((Il2CppSharedGenericObject*)Castclass((RuntimeObject*)L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 33));
	}

IL_0015:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_RemoveAll_m4EE2013145E54D7A4FC8DC18C59D96E7DB7766FC_gshared (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* __this, Predicate_1_t586817D6627D147076FFDCC73DA7BEC23132FA88* ___0_match, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Predicate_1_t586817D6627D147076FFDCC73DA7BEC23132FA88* L_0 = ___0_match;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(8, NULL);
	}

IL_0009:
	{
		V_0 = 0;
		goto IL_0011;
	}

IL_000d:
	{
		int32_t L_1 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_1, 1));
	}

IL_0011:
	{
		int32_t L_2 = V_0;
		int32_t L_3 = __this->____size;
		if ((((int32_t)L_2) >= ((int32_t)L_3)))
		{
			goto IL_002e;
		}
	}
	{
		Predicate_1_t586817D6627D147076FFDCC73DA7BEC23132FA88* L_4 = ___0_match;
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_5 = __this->____items;
		int32_t L_6 = V_0;
		int32_t L_7 = L_6;
		Il2CppSharedGenericObject* L_8 = (L_5)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7));
		bool L_9;
		L_9 = Predicate_1_Invoke_mDF332C0CEB003C0D86A1E3A194ECFA96D424E34C_inline(L_4, L_8, NULL);
		if (!L_9)
		{
			goto IL_000d;
		}
	}

IL_002e:
	{
		int32_t L_10 = V_0;
		int32_t L_11 = __this->____size;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_0039;
		}
	}
	{
		return 0;
	}

IL_0039:
	{
		int32_t L_12 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
		goto IL_0089;
	}

IL_003f:
	{
		int32_t L_13 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0043:
	{
		int32_t L_14 = V_1;
		int32_t L_15 = __this->____size;
		if ((((int32_t)L_14) >= ((int32_t)L_15)))
		{
			goto IL_0060;
		}
	}
	{
		Predicate_1_t586817D6627D147076FFDCC73DA7BEC23132FA88* L_16 = ___0_match;
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_17 = __this->____items;
		int32_t L_18 = V_1;
		int32_t L_19 = L_18;
		Il2CppSharedGenericObject* L_20 = (L_17)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_19));
		bool L_21;
		L_21 = Predicate_1_Invoke_mDF332C0CEB003C0D86A1E3A194ECFA96D424E34C_inline(L_16, L_20, NULL);
		if (L_21)
		{
			goto IL_003f;
		}
	}

IL_0060:
	{
		int32_t L_22 = V_1;
		int32_t L_23 = __this->____size;
		if ((((int32_t)L_22) >= ((int32_t)L_23)))
		{
			goto IL_0089;
		}
	}
	{
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_24 = __this->____items;
		int32_t L_25 = V_0;
		int32_t L_26 = L_25;
		V_0 = ((int32_t)il2cpp_codegen_add(L_26, 1));
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_27 = __this->____items;
		int32_t L_28 = V_1;
		int32_t L_29 = L_28;
		V_1 = ((int32_t)il2cpp_codegen_add(L_29, 1));
		int32_t L_30 = L_29;
		Il2CppSharedGenericObject* L_31 = (L_27)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_30));
		(L_24)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_26), (Il2CppSharedGenericObject*)L_31);
	}

IL_0089:
	{
		int32_t L_32 = V_1;
		int32_t L_33 = __this->____size;
		if ((((int32_t)L_32) < ((int32_t)L_33)))
		{
			goto IL_0043;
		}
	}
	{
	}
	{
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_34 = __this->____items;
		int32_t L_35 = V_0;
		int32_t L_36 = __this->____size;
		int32_t L_37 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_34, L_35, ((int32_t)il2cpp_codegen_subtract(L_36, L_37)), NULL);
	}

IL_00ad:
	{
		int32_t L_38 = __this->____size;
		int32_t L_39 = V_0;
		int32_t L_40 = V_0;
		__this->____size = L_40;
		int32_t L_41 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_41, 1));
		return ((int32_t)il2cpp_codegen_subtract(L_38, L_39));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_m36F68EA689DB109415094085A496D5EA21E2F23C_gshared (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	Il2CppSharedGenericObject* V_0 = NULL;
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRange_IndexException_mC7661B8C6DD827679C95FC6B6C08F8724174936D(NULL);
	}

IL_000e:
	{
		int32_t L_2 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_2, 1));
		int32_t L_3 = ___0_index;
		int32_t L_4 = __this->____size;
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_0042;
		}
	}
	{
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_5 = __this->____items;
		int32_t L_6 = ___0_index;
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_7 = __this->____items;
		int32_t L_8 = ___0_index;
		int32_t L_9 = __this->____size;
		int32_t L_10 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, ((int32_t)il2cpp_codegen_add(L_6, 1)), (RuntimeArray*)L_7, L_8, ((int32_t)il2cpp_codegen_subtract(L_9, L_10)), NULL);
	}

IL_0042:
	{
	}
	{
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_11 = __this->____items;
		int32_t L_12 = __this->____size;
		il2cpp_codegen_initobj((&V_0), sizeof(Il2CppSharedGenericObject*));
		Il2CppSharedGenericObject* L_13 = V_0;
		(L_11)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_12), (Il2CppSharedGenericObject*)L_13);
	}

IL_0063:
	{
		int32_t L_14 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_14, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveRange_m62CC0A9594355982BB7665FB6F070950D3B89C30_gshared (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_count;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F(((int32_t)16), 4, NULL);
	}

IL_0015:
	{
		int32_t L_2 = __this->____size;
		int32_t L_3 = ___0_index;
		int32_t L_4 = ___1_count;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_2, L_3))) >= ((int32_t)L_4)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(((int32_t)23), NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_count;
		if ((((int32_t)L_5) <= ((int32_t)0)))
		{
			goto IL_008d;
		}
	}
	{
		int32_t L_6 = __this->____size;
		int32_t L_7 = __this->____size;
		int32_t L_8 = ___1_count;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_7, L_8));
		int32_t L_9 = ___0_index;
		int32_t L_10 = __this->____size;
		if ((((int32_t)L_9) >= ((int32_t)L_10)))
		{
			goto IL_0066;
		}
	}
	{
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_11 = __this->____items;
		int32_t L_12 = ___0_index;
		int32_t L_13 = ___1_count;
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_14 = __this->____items;
		int32_t L_15 = ___0_index;
		int32_t L_16 = __this->____size;
		int32_t L_17 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_11, ((int32_t)il2cpp_codegen_add(L_12, L_13)), (RuntimeArray*)L_14, L_15, ((int32_t)il2cpp_codegen_subtract(L_16, L_17)), NULL);
	}

IL_0066:
	{
		int32_t L_18 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}
	{
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_19 = __this->____items;
		int32_t L_20 = __this->____size;
		int32_t L_21 = ___1_count;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_19, L_20, L_21, NULL);
	}

IL_008d:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Reverse_m5D2819AF5937BFF72667A9AC1F0D657F4AFF58BC_gshared (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = List_1_get_Count_m9832942FE310479E64D9D0D23F29C65305BE1622_inline(__this, NULL);
		List_1_Reverse_m97197478E9535E327B4509C065B30BB0DD6F1F99(__this, 0, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 35));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Reverse_m97197478E9535E327B4509C065B30BB0DD6F1F99_gshared (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_count;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F(((int32_t)16), 4, NULL);
	}

IL_0015:
	{
		int32_t L_2 = __this->____size;
		int32_t L_3 = ___0_index;
		int32_t L_4 = ___1_count;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_2, L_3))) >= ((int32_t)L_4)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(((int32_t)23), NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_count;
		if ((((int32_t)L_5) <= ((int32_t)1)))
		{
			goto IL_0038;
		}
	}
	{
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_6 = __this->____items;
		int32_t L_7 = ___0_index;
		int32_t L_8 = ___1_count;
		Array_Reverse_TisIl2CppSharedGenericObject_mFAAB0AB623769BB8245CDF219832F2FE75427541(L_6, L_7, L_8, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 36));
	}

IL_0038:
	{
		int32_t L_9 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_9, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_mA11C7B54C894C91320394703D2B0BB90E5FBF21B_gshared (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = List_1_get_Count_m9832942FE310479E64D9D0D23F29C65305BE1622_inline(__this, NULL);
		RuntimeObject* L_1 = ___0_comparer;
		List_1_Sort_m15AB808AB5390BF8B6D7A057EDA17A54A80A1A6A(__this, 0, L_0, L_1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 37));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_m15AB808AB5390BF8B6D7A057EDA17A54A80A1A6A_gshared (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* __this, int32_t ___0_index, int32_t ___1_count, RuntimeObject* ___2_comparer, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_count;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F(((int32_t)16), 4, NULL);
	}

IL_0015:
	{
		int32_t L_2 = __this->____size;
		int32_t L_3 = ___0_index;
		int32_t L_4 = ___1_count;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_2, L_3))) >= ((int32_t)L_4)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(((int32_t)23), NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_count;
		if ((((int32_t)L_5) <= ((int32_t)1)))
		{
			goto IL_0039;
		}
	}
	{
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_6 = __this->____items;
		int32_t L_7 = ___0_index;
		int32_t L_8 = ___1_count;
		RuntimeObject* L_9 = ___2_comparer;
		Array_Sort_TisIl2CppSharedGenericObject_m8C8A5C187776FEA1D5CC7F053F0DC63B32764D61(L_6, L_7, L_8, L_9, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 38));
	}

IL_0039:
	{
		int32_t L_10 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_10, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_m5DC9EDD762287204259B029E98F1409BC3A63A81_gshared (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* __this, Comparison_1_tC9FBFF747FA0455CD35BD7D097691DE20DDCC2B5* ___0_comparison, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(ArraySortHelper_1_t0B69B36E8E1F97490E6BE32C23AE1784AB1ADA3A_StaticInit);
	{
		Comparison_1_tC9FBFF747FA0455CD35BD7D097691DE20DDCC2B5* L_0 = ___0_comparison;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(((int32_t)34), NULL);
	}

IL_000a:
	{
		int32_t L_1 = __this->____size;
		if ((((int32_t)L_1) <= ((int32_t)1)))
		{
			goto IL_0026;
		}
	}
	{
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_2 = __this->____items;
		int32_t L_3 = __this->____size;
		Comparison_1_tC9FBFF747FA0455CD35BD7D097691DE20DDCC2B5* L_4 = ___0_comparison;
		CHECKED_LOCAL_INIT(ArraySortHelper_1_t0B69B36E8E1F97490E6BE32C23AE1784AB1ADA3A_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 40)),il2cpp_codegen_runtime_class_init_inline);
		ArraySortHelper_1_Sort_m745CBFE82472049A441AC9522C4B8FA33F5AF970(L_2, 0, L_3, L_4, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 39));
	}

IL_0026:
	{
		int32_t L_5 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_5, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* List_1_ToArray_m90E6D9E57256EC0FB6B36FDC40F65B0F59D7B671_gshared (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit);
	__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* V_0 = NULL;
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		CHECKED_LOCAL_INIT(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)),il2cpp_codegen_runtime_class_init_inline);
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_1 = ((List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)))->___s_emptyArray;
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____size;
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_3 = (__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979*)(__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1), (uint32_t)L_2);
		V_0 = L_3;
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_4 = __this->____items;
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_5 = V_0;
		int32_t L_6 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_4, 0, (RuntimeArray*)L_5, 0, L_6, NULL);
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_7 = V_0;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddEnumerable_m44B5C2177E9403DB0E3DC2BC6E590CDA7266BE79_gshared (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* __this, RuntimeObject* ___0_enumerable, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	Il2CppSharedGenericObject* V_1 = NULL;
	int32_t V_2 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		RuntimeObject* L_1 = ___0_enumerable;
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 28), L_1);
		V_0 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0063:
			{
				{
					RuntimeObject* L_3 = V_0;
					if (!L_3)
					{
						goto IL_006c;
					}
				}
				{
					RuntimeObject* L_4 = V_0;
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_4);
				}

IL_006c:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_0059_1;
			}

IL_0017_1:
			{
				RuntimeObject* L_5 = V_0;
				Il2CppSharedGenericObject* L_6;
				L_6 = InterfaceFuncInvoker0< Il2CppSharedGenericObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 30), L_5);
				V_1 = L_6;
				int32_t L_7 = __this->____size;
				__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_8 = __this->____items;
				int32_t L_9 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_8)->max_length),NULL));
				if ((!(((uint32_t)L_7) == ((uint32_t)L_9))))
				{
					goto IL_003c_1;
				}
			}
			{
				int32_t L_10 = __this->____size;
				List_1_EnsureCapacity_m89719BB37EEDA80E6AD7FAC5D1AAC5A47DDE86B5(__this, ((int32_t)il2cpp_codegen_add(L_10, 1)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 12));
			}

IL_003c_1:
			{
				__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_11 = __this->____items;
				int32_t L_12 = __this->____size;
				V_2 = L_12;
				int32_t L_13 = V_2;
				__this->____size = ((int32_t)il2cpp_codegen_add(L_13, 1));
				int32_t L_14 = V_2;
				Il2CppSharedGenericObject* L_15 = V_1;
				(L_11)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_14), (Il2CppSharedGenericObject*)L_15);
			}

IL_0059_1:
			{
				RuntimeObject* L_16 = V_0;
				bool L_17;
				L_17 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_16);
				if (L_17)
				{
					goto IL_0017_1;
				}
			}
			{
				goto IL_006d;
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

IL_006d:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__cctor_mF9EC44C2DCE6FA8CA8EFEC794130234F42A1D6DB_gshared (const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	{
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_0 = (__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979*)(__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979*)SZArrayNew(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1), (uint32_t)0);
		((List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___s_emptyArray = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___s_emptyArray), (void*)L_0);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0AFBAEA7EC427E32CC9CA267B1930DC5DF67A374_fshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit);
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		CHECKED_LOCAL_INIT(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)),il2cpp_codegen_runtime_class_init_inline);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)))->___s_emptyArray;
		__this->____items = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m3069CACB5775E013107F559C825422266A09F9E8_fshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit);
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0012;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F(((int32_t)12), 4, NULL);
	}

IL_0012:
	{
		int32_t L_1 = ___0_capacity;
		if (L_1)
		{
			goto IL_0021;
		}
	}
	{
		CHECKED_LOCAL_INIT(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)),il2cpp_codegen_runtime_class_init_inline);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_2 = ((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)))->___s_emptyArray;
		__this->____items = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_2);
		return;
	}

IL_0021:
	{
		int32_t L_3 = ___0_capacity;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_4 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1), (uint32_t)L_3);
		__this->____items = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_4);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mACCB7726C2E9728AE336F99C68B334459F9F30FB_fshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit);
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		RuntimeObject* L_0 = ___0_collection;
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(6, NULL);
	}

IL_000f:
	{
		RuntimeObject* L_1 = ___0_collection;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_1, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2)));
		RuntimeObject* L_2 = V_0;
		if (!L_2)
		{
			goto IL_0050;
		}
	}
	{
		RuntimeObject* L_3 = V_0;
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_3);
		V_1 = L_4;
		int32_t L_5 = V_1;
		if (L_5)
		{
			goto IL_002f;
		}
	}
	{
		CHECKED_LOCAL_INIT(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)),il2cpp_codegen_runtime_class_init_inline);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_6 = ((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)))->___s_emptyArray;
		__this->____items = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_6);
		return;
	}

IL_002f:
	{
		int32_t L_7 = V_1;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_8 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1), (uint32_t)L_7);
		__this->____items = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_8);
		RuntimeObject* L_9 = V_0;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_10 = __this->____items;
		InterfaceActionInvoker2< __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_9, L_10, 0);
		int32_t L_11 = V_1;
		__this->____size = L_11;
		return;
	}

IL_0050:
	{
		__this->____size = 0;
		CHECKED_LOCAL_INIT(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)),il2cpp_codegen_runtime_class_init_inline);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_12 = ((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)))->___s_emptyArray;
		__this->____items = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_12);
		RuntimeObject* L_13 = ___0_collection;
		((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 5)))(__this, L_13, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 5));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_get_Capacity_m5BE6D733C76E1AB093FB6D2783220A5B96EF61DF_fshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method) 
{
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = __this->____items;
		int32_t L_1 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_0)->max_length),NULL));
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Capacity_mD365C22FA3D32D70A2088AB13116E7BA5FBF0BFB_fshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit);
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* V_0 = NULL;
	{
		int32_t L_0 = ___0_value;
		int32_t L_1 = __this->____size;
		if ((((int32_t)L_0) >= ((int32_t)L_1)))
		{
			goto IL_0012;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F(((int32_t)15), ((int32_t)21), NULL);
	}

IL_0012:
	{
		int32_t L_2 = ___0_value;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3 = __this->____items;
		int32_t L_4 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_3)->max_length),NULL));
		if ((((int32_t)L_2) == ((int32_t)L_4)))
		{
			goto IL_0058;
		}
	}
	{
		int32_t L_5 = ___0_value;
		if ((((int32_t)L_5) <= ((int32_t)0)))
		{
			goto IL_004d;
		}
	}
	{
		int32_t L_6 = ___0_value;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_7 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1), (uint32_t)L_6);
		V_0 = L_7;
		int32_t L_8 = __this->____size;
		if ((((int32_t)L_8) <= ((int32_t)0)))
		{
			goto IL_0045;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_9 = __this->____items;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_10 = V_0;
		int32_t L_11 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_9, 0, (RuntimeArray*)L_10, 0, L_11, NULL);
	}

IL_0045:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_12 = V_0;
		__this->____items = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_12);
		return;
	}

IL_004d:
	{
		CHECKED_LOCAL_INIT(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)),il2cpp_codegen_runtime_class_init_inline);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_13 = ((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)))->___s_emptyArray;
		__this->____items = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_13);
	}

IL_0058:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mD2ED26ACAF3BAF386FFEA83893BA51DB9FD8BA30_fshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m3F886C476FAC47C7E0B22BBEFA863E6E28CB6967_fshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_System_Collections_IList_get_IsReadOnly_m14CBA0E79745928530A7F91F920E3B29BF5977C2_fshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_System_Collections_ICollection_get_SyncRoot_m81521F85F116B00354BB0F726158451F3F1543F8_fshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->____syncRoot;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = il2cpp_intrinsic_interlocked_compare_exchange(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____syncRoot;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_get_Item_m6E4BA37C1FB558E4A62AE4324212E45D09C5C937_fshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, int32_t ___0_index, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6));
	const Il2CppFullySharedGenericAny L_5 = alloca(SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRange_IndexException_mC7661B8C6DD827679C95FC6B6C08F8724174936D(NULL);
	}

IL_000e:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_2 = __this->____items;
		int32_t L_3 = ___0_index;
		int32_t L_4 = L_3;
		il2cpp_codegen_memcpy(L_5, (L_2)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_4)), SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
		il2cpp_codegen_memcpy(il2cppRetVal, L_5, SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_m9A958091885CC5363CCFE9F0BC472EAFCB56C813_fshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, int32_t ___0_index, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6));
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRange_IndexException_mC7661B8C6DD827679C95FC6B6C08F8724174936D(NULL);
	}

IL_000e:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_2 = __this->____items;
		int32_t L_3 = ___0_index;
		il2cpp_codegen_memcpy(L_4, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6)) ? ___1_value : &___1_value), SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
		il2cpp_codegen_memcpy((L_2)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_3)), L_4, SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6), (void**)(L_2)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_3)), (void*)L_4);
		int32_t L_5 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_5, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_IsCompatibleObject_mF063A5AC0A6B869965B78A300A210C77D7D85A9E_fshared (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
	memset(V_0, 0, SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
	{
		RuntimeObject* L_0 = ___0_value;
		if (((RuntimeObject*)IsInst((RuntimeObject*)L_0, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6))))
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_0, SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
		il2cpp_codegen_memcpy(L_2, V_0, SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
		bool L_3 = !il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6), L_2);
		bool L_4 = L_3;
		return L_4;
	}

IL_001d:
	{
		return (bool)0;
	}

IL_001f:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_System_Collections_IList_get_Item_m9468A95C180AB56C22EF37B808E722B82FA5DA1D_fshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
	{
		int32_t L_0 = ___0_index;
		InvokerActionInvoker2< int32_t, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 7)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 7), __this, L_0, (Il2CppFullySharedGenericAny*)L_1);
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6), L_1);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_System_Collections_IList_set_Item_m0F05BC227468EA87CF5E5E2D0707EFEDD6DB1D48_fshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, int32_t ___0_index, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(Type_t_StaticInit);
	const uint32_t SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6));
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = ___1_value;
		((  void (*) (RuntimeObject*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 8)))(L_0, ((int32_t)15), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 8));
	}
	try
	{
		int32_t L_1 = ___0_index;
		RuntimeObject* L_2 = ___1_value;
		void* L_4 = UnBox_Any(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6), L_3);
		InvokerActionInvoker2< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 9)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 9), __this, L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6)) ? (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_4)): *(void**)(((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_4))));
		goto IL_002a;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0017;
		}
		throw e;
	}

CATCH_0017:
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_5 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_6 = ___1_value;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 10)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_6, L_8, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_002a;
	}

IL_002a:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mD4F3498FBD3BDD3F03CBCFB38041CBAC9C28CAFC_fshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6));
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
	const Il2CppFullySharedGenericAny L_10 = L_9;
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1 = __this->____items;
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		V_1 = L_2;
		int32_t L_3 = V_1;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_4 = V_0;
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		if ((!(((uint32_t)L_3) < ((uint32_t)L_5))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_6 = V_1;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_6, 1));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_7 = V_0;
		int32_t L_8 = V_1;
		il2cpp_codegen_memcpy(L_9, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6)) ? ___0_item : &___0_item), SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
		il2cpp_codegen_memcpy((L_7)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_8)), L_9, SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6), (void**)(L_7)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_8)), (void*)L_9);
		return;
	}

IL_0034:
	{
		il2cpp_codegen_memcpy(L_10, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6)) ? ___0_item : &___0_item), SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 11)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 11), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6)) ? L_10: *(void**)L_10));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_mA6DFDBC2B22D6318212C6989A34784BD8303AF33_fshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6));
	const Il2CppFullySharedGenericAny L_5 = alloca(SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____size;
		V_0 = L_0;
		int32_t L_1 = V_0;
		((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 12)))(__this, ((int32_t)il2cpp_codegen_add(L_1, 1)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 12));
		int32_t L_2 = V_0;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_2, 1));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3 = __this->____items;
		int32_t L_4 = V_0;
		il2cpp_codegen_memcpy(L_5, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6)) ? ___0_item : &___0_item), SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
		il2cpp_codegen_memcpy((L_3)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_4)), L_5, SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6), (void**)(L_3)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_4)), (void*)L_5);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_System_Collections_IList_Add_m16AFA75CCE3355CE51D428B0931951485666BF3D_fshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(Type_t_StaticInit);
	const uint32_t SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = ___0_item;
		((  void (*) (RuntimeObject*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 8)))(L_0, ((int32_t)20), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 8));
	}
	try
	{
		RuntimeObject* L_1 = ___0_item;
		void* L_3 = UnBox_Any(L_1, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6), L_2);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6)) ? (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_3)): *(void**)(((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_3))));
		goto IL_0029;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0016;
		}
		throw e;
	}

CATCH_0016:
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_4 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_5 = ___0_item;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 10)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_5, L_7, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0029;
	}

IL_0029:
	{
		int32_t L_8;
		L_8 = ((  int32_t (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14)))(__this, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_8, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddRange_m44DED39FFEBC8F2ACF6162DB065B649E888B9C57_fshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		RuntimeObject* L_1 = ___0_collection;
		((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 15)))(__this, L_0, L_1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 15));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_mD615D1BCB2C9DD91DAD86A2F9E5CF1DFFCBF7925_fshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		bool L_1;
		L_1 = il2cpp_codegen_is_reference_or_contains_references(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 16));
		if (!L_1)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_2 = __this->____size;
		V_0 = L_2;
		__this->____size = 0;
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_4 = __this->____items;
		int32_t L_5 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_4, 0, L_5, NULL);
		return;
	}

IL_0035:
	{
		__this->____size = 0;
	}

IL_003c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_m8DA550B703DFB328B69C4712064C667D7CA33DF1_fshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
	{
		int32_t L_0 = __this->____size;
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6)) ? ___0_item : &___0_item), SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
		int32_t L_2;
		L_2 = InvokerFuncInvoker1< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 17)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 17), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6)) ? L_1: *(void**)L_1));
		return (bool)((((int32_t)((((int32_t)L_2) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0016:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_System_Collections_IList_Contains_m20FD9B23AB202EAE6A3EBD3271A64B10BB21C5D9_fshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit);
	const uint32_t SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6));
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
	{
		RuntimeObject* L_0 = ___0_item;
		CHECKED_LOCAL_INIT(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)),il2cpp_codegen_runtime_class_init_inline);
		bool L_1;
		L_1 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 18)))(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 18));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_item;
		void* L_4 = UnBox_Any(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6), L_3);
		bool L_5;
		L_5 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 19)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 19), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6)) ? (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_4)): *(void**)(((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_4))));
		return L_5;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_CopyTo_m9632CAFAB9E06DBDE71886CC36E6C910F8350F9C_fshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, const RuntimeMethod* method) 
{
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ___0_array;
		((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 20)))(__this, L_0, 0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_System_Collections_ICollection_CopyTo_mAAA2256D3B50B6A712DFB270B01B470759AB4FE9_fshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, RuntimeArray* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method) 
{
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		RuntimeArray* L_1 = ___0_array;
		int32_t L_2;
		L_2 = il2cpp_codegen_array_get_rank(L_1);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0012;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(7, NULL);
	}

IL_0012:
	{
	}
	try
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3 = __this->____items;
		RuntimeArray* L_4 = ___0_array;
		int32_t L_5 = ___1_arrayIndex;
		int32_t L_6 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_3, 0, L_4, L_5, L_6, NULL);
		goto IL_0031;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0029;
		}
		throw e;
	}

CATCH_0029:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_7 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0031;
	}

IL_0031:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_CopyTo_m5180D7A430072A21034A0692CDD1D565ADEE2ABB_fshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method) 
{
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = __this->____items;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1 = ___0_array;
		int32_t L_2 = ___1_arrayIndex;
		int32_t L_3 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_0, 0, (RuntimeArray*)L_1, L_2, L_3, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_EnsureCapacity_m0116C3A6AF6FB7DCF2E909AD859A0ADC86A60C66_fshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, int32_t ___0_min, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t G_B4_0 = 0;
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = __this->____items;
		int32_t L_1 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_0)->max_length),NULL));
		int32_t L_2 = ___0_min;
		if ((((int32_t)L_1) >= ((int32_t)L_2)))
		{
			goto IL_003d;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3 = __this->____items;
		if (!(((RuntimeArray*)L_3)->max_length))
		{
			goto IL_0020;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_4 = __this->____items;
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		G_B4_0 = ((int32_t)il2cpp_codegen_multiply(L_5, 2));
		goto IL_0021;
	}

IL_0020:
	{
		G_B4_0 = 4;
	}

IL_0021:
	{
		V_0 = G_B4_0;
		int32_t L_6 = V_0;
		if ((!(((uint32_t)L_6) > ((uint32_t)((int32_t)2146435071)))))
		{
			goto IL_0030;
		}
	}
	{
		V_0 = ((int32_t)2146435071);
	}

IL_0030:
	{
		int32_t L_7 = V_0;
		int32_t L_8 = ___0_min;
		if ((((int32_t)L_7) >= ((int32_t)L_8)))
		{
			goto IL_0036;
		}
	}
	{
		int32_t L_9 = ___0_min;
		V_0 = L_9;
	}

IL_0036:
	{
		int32_t L_10 = V_0;
		((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 21)))(__this, L_10, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 21));
	}

IL_003d:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_ForEach_mA959944628050F666BD4CD147F51232EAC2E1B64_fshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99* ___0_action, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6));
	const Il2CppFullySharedGenericAny L_8 = alloca(SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99* L_0 = ___0_action;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(((int32_t)33), NULL);
	}

IL_000a:
	{
		int32_t L_1 = __this->____version;
		V_0 = L_1;
		V_1 = 0;
		goto IL_0034;
	}

IL_0015:
	{
		int32_t L_2 = V_0;
		int32_t L_3 = __this->____version;
		if ((!(((uint32_t)L_2) == ((uint32_t)L_3))))
		{
			goto IL_003d;
		}
	}
	{
		Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99* L_4 = ___0_action;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_5 = __this->____items;
		int32_t L_6 = V_1;
		int32_t L_7 = L_6;
		il2cpp_codegen_memcpy(L_8, (L_5)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_7)), SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 22)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 22), L_4, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6)) ? L_8: *(void**)L_8));
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0034:
	{
		int32_t L_10 = V_1;
		int32_t L_11 = __this->____size;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_0015;
		}
	}

IL_003d:
	{
		int32_t L_12 = V_0;
		int32_t L_13 = __this->____version;
		if ((((int32_t)L_12) == ((int32_t)L_13)))
		{
			goto IL_004b;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_InvalidOperation_EnumFailedVersion_m5331E2E0EC0E36843D53F439C2529530595ACE9F(NULL);
	}

IL_004b:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_GetEnumerator_m8B2A92ACD4FBA5FBDC3F6F4F5C23A0DDF491DA61_fshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_Enumerator_t4982EA6BF5A270D5544CF8876DE60B125EDF8FB9 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 23));
	const Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF L_0 = alloca(SizeOf_Enumerator_t4982EA6BF5A270D5544CF8876DE60B125EDF8FB9);
	{
		memset(L_0, 0, SizeOf_Enumerator_t4982EA6BF5A270D5544CF8876DE60B125EDF8FB9);
		Enumerator__ctor_m5C66A91DC68887BE203985B56EF2F74222E9AF50((Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*)L_0, __this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 24));
		il2cpp_codegen_memcpy(il2cppRetVal, L_0, SizeOf_Enumerator_t4982EA6BF5A270D5544CF8876DE60B125EDF8FB9);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_mF8AB18BC6656CC469BFB6E837C001C2DE0833859_fshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_Enumerator_t4982EA6BF5A270D5544CF8876DE60B125EDF8FB9 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 23));
	const Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF L_0 = alloca(SizeOf_Enumerator_t4982EA6BF5A270D5544CF8876DE60B125EDF8FB9);
	{
		memset(L_0, 0, SizeOf_Enumerator_t4982EA6BF5A270D5544CF8876DE60B125EDF8FB9);
		Enumerator__ctor_m5C66A91DC68887BE203985B56EF2F74222E9AF50((Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*)L_0, __this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 24));
		RuntimeObject* L_1 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 23), L_0);
		return (RuntimeObject*)L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_System_Collections_IEnumerable_GetEnumerator_m83A6D1115899BF6BA842C33FE41FAD8D6EB43ED9_fshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_Enumerator_t4982EA6BF5A270D5544CF8876DE60B125EDF8FB9 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 23));
	const Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF L_0 = alloca(SizeOf_Enumerator_t4982EA6BF5A270D5544CF8876DE60B125EDF8FB9);
	{
		memset(L_0, 0, SizeOf_Enumerator_t4982EA6BF5A270D5544CF8876DE60B125EDF8FB9);
		Enumerator__ctor_m5C66A91DC68887BE203985B56EF2F74222E9AF50((Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*)L_0, __this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 24));
		RuntimeObject* L_1 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 23), L_0);
		return (RuntimeObject*)L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* List_1_GetRange_mBB92D8804DB148ED81D02A0CCA79968FFD71CAD4_fshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method) 
{
	List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* V_0 = NULL;
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_count;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F(((int32_t)16), 4, NULL);
	}

IL_0015:
	{
		int32_t L_2 = __this->____size;
		int32_t L_3 = ___0_index;
		int32_t L_4 = ___1_count;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_2, L_3))) >= ((int32_t)L_4)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(((int32_t)23), NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_count;
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_6 = (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0));
		((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 25)))(L_6, L_5, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 25));
		V_0 = L_6;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_7 = __this->____items;
		int32_t L_8 = ___0_index;
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_9 = V_0;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_10 = L_9->____items;
		int32_t L_11 = ___1_count;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_7, L_8, (RuntimeArray*)L_10, 0, L_11, NULL);
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_12 = V_0;
		int32_t L_13 = ___1_count;
		L_12->____size = L_13;
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_14 = V_0;
		return L_14;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_IndexOf_m1FFA888B47CE3256B0AC301302FAD79AAAFC0818_fshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = __this->____items;
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6)) ? ___0_item : &___0_item), SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
		int32_t L_2 = __this->____size;
		int32_t L_3;
		L_3 = InvokerFuncInvoker4< int32_t, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, Il2CppFullySharedGenericAny, int32_t, int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 26)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 26), NULL, L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6)) ? L_1: *(void**)L_1), 0, L_2);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_System_Collections_IList_IndexOf_mF0601617A54C360278652B7AEE34E69F21B5ADDA_fshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit);
	const uint32_t SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6));
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
	{
		RuntimeObject* L_0 = ___0_item;
		CHECKED_LOCAL_INIT(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)),il2cpp_codegen_runtime_class_init_inline);
		bool L_1;
		L_1 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 18)))(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 18));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_item;
		void* L_4 = UnBox_Any(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6), L_3);
		int32_t L_5;
		L_5 = InvokerFuncInvoker1< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 17)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 17), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6)) ? (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_4)): *(void**)(((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_4))));
		return L_5;
	}

IL_0015:
	{
		return (-1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Insert_mB8862677E04375531A30F3EC07AC2372FCE61F55_fshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, int32_t ___0_index, Il2CppFullySharedGenericAny ___1_item, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6));
	const Il2CppFullySharedGenericAny L_16 = alloca(SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_0012;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F(((int32_t)13), ((int32_t)27), NULL);
	}

IL_0012:
	{
		int32_t L_2 = __this->____size;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3 = __this->____items;
		int32_t L_4 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_3)->max_length),NULL));
		if ((!(((uint32_t)L_2) == ((uint32_t)L_4))))
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_5 = __this->____size;
		((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 12)))(__this, ((int32_t)il2cpp_codegen_add(L_5, 1)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 12));
	}

IL_0030:
	{
		int32_t L_6 = ___0_index;
		int32_t L_7 = __this->____size;
		if ((((int32_t)L_6) >= ((int32_t)L_7)))
		{
			goto IL_0056;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_8 = __this->____items;
		int32_t L_9 = ___0_index;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_10 = __this->____items;
		int32_t L_11 = ___0_index;
		int32_t L_12 = __this->____size;
		int32_t L_13 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_8, L_9, (RuntimeArray*)L_10, ((int32_t)il2cpp_codegen_add(L_11, 1)), ((int32_t)il2cpp_codegen_subtract(L_12, L_13)), NULL);
	}

IL_0056:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_14 = __this->____items;
		int32_t L_15 = ___0_index;
		il2cpp_codegen_memcpy(L_16, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6)) ? ___1_item : &___1_item), SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
		il2cpp_codegen_memcpy((L_14)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_15)), L_16, SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6), (void**)(L_14)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_15)), (void*)L_16);
		int32_t L_17 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_17, 1));
		int32_t L_18 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_18, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_System_Collections_IList_Insert_m3A5BCE3337DF64C89354C0CDF5DB4EE39A30BCA7_fshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, int32_t ___0_index, RuntimeObject* ___1_item, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(Type_t_StaticInit);
	const uint32_t SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6));
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = ___1_item;
		((  void (*) (RuntimeObject*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 8)))(L_0, ((int32_t)20), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 8));
	}
	try
	{
		int32_t L_1 = ___0_index;
		RuntimeObject* L_2 = ___1_item;
		void* L_4 = UnBox_Any(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6), L_3);
		InvokerActionInvoker2< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 27)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 27), __this, L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6)) ? (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_4)): *(void**)(((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_4))));
		goto IL_002a;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0017;
		}
		throw e;
	}

CATCH_0017:
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_5 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_6 = ___1_item;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 10)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_6, L_8, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_002a;
	}

IL_002a:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_InsertRange_m729639E2C8D1AA7579AC78D259085921E7DC72F2_fshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, int32_t ___0_index, RuntimeObject* ___1_collection, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6));
	const Il2CppFullySharedGenericAny L_45 = alloca(SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	RuntimeObject* V_2 = NULL;
	{
		RuntimeObject* L_0 = ___1_collection;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(6, NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___0_index;
		int32_t L_2 = __this->____size;
		if ((!(((uint32_t)L_1) > ((uint32_t)L_2))))
		{
			goto IL_0017;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRange_IndexException_mC7661B8C6DD827679C95FC6B6C08F8724174936D(NULL);
	}

IL_0017:
	{
		RuntimeObject* L_3 = ___1_collection;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_3, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2)));
		RuntimeObject* L_4 = V_0;
		if (!L_4)
		{
			goto IL_00bc;
		}
	}
	{
		RuntimeObject* L_5 = V_0;
		int32_t L_6;
		L_6 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_5);
		V_1 = L_6;
		int32_t L_7 = V_1;
		if ((((int32_t)L_7) <= ((int32_t)0)))
		{
			goto IL_00fb;
		}
	}
	{
		int32_t L_8 = __this->____size;
		int32_t L_9 = V_1;
		((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 12)))(__this, ((int32_t)il2cpp_codegen_add(L_8, L_9)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 12));
		int32_t L_10 = ___0_index;
		int32_t L_11 = __this->____size;
		if ((((int32_t)L_10) >= ((int32_t)L_11)))
		{
			goto IL_0066;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_12 = __this->____items;
		int32_t L_13 = ___0_index;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_14 = __this->____items;
		int32_t L_15 = ___0_index;
		int32_t L_16 = V_1;
		int32_t L_17 = __this->____size;
		int32_t L_18 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_12, L_13, (RuntimeArray*)L_14, ((int32_t)il2cpp_codegen_add(L_15, L_16)), ((int32_t)il2cpp_codegen_subtract(L_17, L_18)), NULL);
	}

IL_0066:
	{
		RuntimeObject* L_19 = V_0;
		if ((!(((RuntimeObject*)(List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this) == ((RuntimeObject*)(RuntimeObject*)L_19))))
		{
			goto IL_009f;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_20 = __this->____items;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_21 = __this->____items;
		int32_t L_22 = ___0_index;
		int32_t L_23 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_20, 0, (RuntimeArray*)L_21, L_22, L_23, NULL);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_24 = __this->____items;
		int32_t L_25 = ___0_index;
		int32_t L_26 = V_1;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_27 = __this->____items;
		int32_t L_28 = ___0_index;
		int32_t L_29 = __this->____size;
		int32_t L_30 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_24, ((int32_t)il2cpp_codegen_add(L_25, L_26)), (RuntimeArray*)L_27, ((int32_t)il2cpp_codegen_multiply(L_28, 2)), ((int32_t)il2cpp_codegen_subtract(L_29, L_30)), NULL);
		goto IL_00ac;
	}

IL_009f:
	{
		RuntimeObject* L_31 = V_0;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_32 = __this->____items;
		int32_t L_33 = ___0_index;
		InterfaceActionInvoker2< __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_31, L_32, L_33);
	}

IL_00ac:
	{
		int32_t L_34 = __this->____size;
		int32_t L_35 = V_1;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_34, L_35));
		goto IL_00fb;
	}

IL_00bc:
	{
		int32_t L_36 = ___0_index;
		int32_t L_37 = __this->____size;
		if ((((int32_t)L_36) >= ((int32_t)L_37)))
		{
			goto IL_00f4;
		}
	}
	{
		RuntimeObject* L_38 = ___1_collection;
		RuntimeObject* L_39;
		L_39 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 28), L_38);
		V_2 = L_39;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00ea:
			{
				{
					RuntimeObject* L_40 = V_2;
					if (!L_40)
					{
						goto IL_00f3;
					}
				}
				{
					RuntimeObject* L_41 = V_2;
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_41);
				}

IL_00f3:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_00e0_1;
			}

IL_00ce_1:
			{
				int32_t L_42 = ___0_index;
				int32_t L_43 = L_42;
				___0_index = ((int32_t)il2cpp_codegen_add(L_43, 1));
				RuntimeObject* L_44 = V_2;
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 30), L_44, (Il2CppFullySharedGenericAny*)L_45);
				InvokerActionInvoker2< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 27)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 27), __this, L_43, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6)) ? L_45: *(void**)L_45));
			}

IL_00e0_1:
			{
				RuntimeObject* L_46 = V_2;
				bool L_47;
				L_47 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_46);
				if (L_47)
				{
					goto IL_00ce_1;
				}
			}
			{
				goto IL_00fb;
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

IL_00f4:
	{
		RuntimeObject* L_48 = ___1_collection;
		((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 5)))(__this, L_48, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 5));
	}

IL_00fb:
	{
		int32_t L_49 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_49, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m9BCE8CEF94E6F2BF8624D65214FF4F3CA686D60C_fshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
	int32_t V_0 = 0;
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6)) ? ___0_item : &___0_item), SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
		int32_t L_1;
		L_1 = InvokerFuncInvoker1< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 17)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 17), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6)) ? L_0: *(void**)L_0));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		int32_t L_3 = V_0;
		((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 32)))(__this, L_3, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 32));
		return (bool)1;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_System_Collections_IList_Remove_m69B0EB46209420A0DF794AE7598F8C3E02515509_fshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit);
	const uint32_t SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6));
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
	{
		RuntimeObject* L_0 = ___0_item;
		CHECKED_LOCAL_INIT(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)),il2cpp_codegen_runtime_class_init_inline);
		bool L_1;
		L_1 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 18)))(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 18));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_item;
		void* L_4 = UnBox_Any(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6), L_3);
		bool L_5;
		L_5 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 33)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 33), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6)) ? (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_4)): *(void**)(((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_4))));
	}

IL_0015:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_RemoveAll_m64ACE8FD442E00A79160BB070C0133B43A8C4075_fshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107* ___0_match, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6));
	const Il2CppFullySharedGenericAny L_8 = alloca(SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
	const Il2CppFullySharedGenericAny L_20 = L_8;
	const Il2CppFullySharedGenericAny L_31 = L_8;
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107* L_0 = ___0_match;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(8, NULL);
	}

IL_0009:
	{
		V_0 = 0;
		goto IL_0011;
	}

IL_000d:
	{
		int32_t L_1 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_1, 1));
	}

IL_0011:
	{
		int32_t L_2 = V_0;
		int32_t L_3 = __this->____size;
		if ((((int32_t)L_2) >= ((int32_t)L_3)))
		{
			goto IL_002e;
		}
	}
	{
		Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107* L_4 = ___0_match;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_5 = __this->____items;
		int32_t L_6 = V_0;
		int32_t L_7 = L_6;
		il2cpp_codegen_memcpy(L_8, (L_5)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_7)), SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
		bool L_9;
		L_9 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 34)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 34), L_4, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6)) ? L_8: *(void**)L_8));
		if (!L_9)
		{
			goto IL_000d;
		}
	}

IL_002e:
	{
		int32_t L_10 = V_0;
		int32_t L_11 = __this->____size;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_0039;
		}
	}
	{
		return 0;
	}

IL_0039:
	{
		int32_t L_12 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
		goto IL_0089;
	}

IL_003f:
	{
		int32_t L_13 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0043:
	{
		int32_t L_14 = V_1;
		int32_t L_15 = __this->____size;
		if ((((int32_t)L_14) >= ((int32_t)L_15)))
		{
			goto IL_0060;
		}
	}
	{
		Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107* L_16 = ___0_match;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_17 = __this->____items;
		int32_t L_18 = V_1;
		int32_t L_19 = L_18;
		il2cpp_codegen_memcpy(L_20, (L_17)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_19)), SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
		bool L_21;
		L_21 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 34)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 34), L_16, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6)) ? L_20: *(void**)L_20));
		if (L_21)
		{
			goto IL_003f;
		}
	}

IL_0060:
	{
		int32_t L_22 = V_1;
		int32_t L_23 = __this->____size;
		if ((((int32_t)L_22) >= ((int32_t)L_23)))
		{
			goto IL_0089;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_24 = __this->____items;
		int32_t L_25 = V_0;
		int32_t L_26 = L_25;
		V_0 = ((int32_t)il2cpp_codegen_add(L_26, 1));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_27 = __this->____items;
		int32_t L_28 = V_1;
		int32_t L_29 = L_28;
		V_1 = ((int32_t)il2cpp_codegen_add(L_29, 1));
		int32_t L_30 = L_29;
		il2cpp_codegen_memcpy(L_31, (L_27)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_30)), SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
		il2cpp_codegen_memcpy((L_24)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_26)), L_31, SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6), (void**)(L_24)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_26)), (void*)L_31);
	}

IL_0089:
	{
		int32_t L_32 = V_1;
		int32_t L_33 = __this->____size;
		if ((((int32_t)L_32) < ((int32_t)L_33)))
		{
			goto IL_0043;
		}
	}
	{
		bool L_34;
		L_34 = il2cpp_codegen_is_reference_or_contains_references(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 16));
		if (!L_34)
		{
			goto IL_00ad;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_35 = __this->____items;
		int32_t L_36 = V_0;
		int32_t L_37 = __this->____size;
		int32_t L_38 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_35, L_36, ((int32_t)il2cpp_codegen_subtract(L_37, L_38)), NULL);
	}

IL_00ad:
	{
		int32_t L_39 = __this->____size;
		int32_t L_40 = V_0;
		int32_t L_41 = V_0;
		__this->____size = L_41;
		int32_t L_42 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_42, 1));
		return ((int32_t)il2cpp_codegen_subtract(L_39, L_40));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_mF6C23E9072D8CBE2872705E7E4D08BDB78770F5C_fshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6));
	const Il2CppFullySharedGenericAny L_14 = alloca(SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
	memset(V_0, 0, SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRange_IndexException_mC7661B8C6DD827679C95FC6B6C08F8724174936D(NULL);
	}

IL_000e:
	{
		int32_t L_2 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_2, 1));
		int32_t L_3 = ___0_index;
		int32_t L_4 = __this->____size;
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_0042;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_5 = __this->____items;
		int32_t L_6 = ___0_index;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_7 = __this->____items;
		int32_t L_8 = ___0_index;
		int32_t L_9 = __this->____size;
		int32_t L_10 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, ((int32_t)il2cpp_codegen_add(L_6, 1)), (RuntimeArray*)L_7, L_8, ((int32_t)il2cpp_codegen_subtract(L_9, L_10)), NULL);
	}

IL_0042:
	{
		bool L_11;
		L_11 = il2cpp_codegen_is_reference_or_contains_references(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 16));
		if (!L_11)
		{
			goto IL_0063;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_12 = __this->____items;
		int32_t L_13 = __this->____size;
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_0, SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
		il2cpp_codegen_memcpy(L_14, V_0, SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
		il2cpp_codegen_memcpy((L_12)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_13)), L_14, SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6), (void**)(L_12)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_13)), (void*)L_14);
	}

IL_0063:
	{
		int32_t L_15 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_15, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveRange_mCD6121D4FDE143767E6F0EC89183A9A349884DFF_fshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_count;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F(((int32_t)16), 4, NULL);
	}

IL_0015:
	{
		int32_t L_2 = __this->____size;
		int32_t L_3 = ___0_index;
		int32_t L_4 = ___1_count;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_2, L_3))) >= ((int32_t)L_4)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(((int32_t)23), NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_count;
		if ((((int32_t)L_5) <= ((int32_t)0)))
		{
			goto IL_008d;
		}
	}
	{
		int32_t L_6 = __this->____size;
		int32_t L_7 = __this->____size;
		int32_t L_8 = ___1_count;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_7, L_8));
		int32_t L_9 = ___0_index;
		int32_t L_10 = __this->____size;
		if ((((int32_t)L_9) >= ((int32_t)L_10)))
		{
			goto IL_0066;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_11 = __this->____items;
		int32_t L_12 = ___0_index;
		int32_t L_13 = ___1_count;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_14 = __this->____items;
		int32_t L_15 = ___0_index;
		int32_t L_16 = __this->____size;
		int32_t L_17 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_11, ((int32_t)il2cpp_codegen_add(L_12, L_13)), (RuntimeArray*)L_14, L_15, ((int32_t)il2cpp_codegen_subtract(L_16, L_17)), NULL);
	}

IL_0066:
	{
		int32_t L_18 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_18, 1));
		bool L_19;
		L_19 = il2cpp_codegen_is_reference_or_contains_references(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 16));
		if (!L_19)
		{
			goto IL_008d;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_20 = __this->____items;
		int32_t L_21 = __this->____size;
		int32_t L_22 = ___1_count;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_20, L_21, L_22, NULL);
	}

IL_008d:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Reverse_m31924FC6445F9A1633DA40A8930F89E271B477F2_fshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14)))(__this, NULL);
		((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 35)))(__this, 0, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 35));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Reverse_m4F224F8A44C29751CCF7ED914FC00BFE7F27CD01_fshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_count;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F(((int32_t)16), 4, NULL);
	}

IL_0015:
	{
		int32_t L_2 = __this->____size;
		int32_t L_3 = ___0_index;
		int32_t L_4 = ___1_count;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_2, L_3))) >= ((int32_t)L_4)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(((int32_t)23), NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_count;
		if ((((int32_t)L_5) <= ((int32_t)1)))
		{
			goto IL_0038;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_6 = __this->____items;
		int32_t L_7 = ___0_index;
		int32_t L_8 = ___1_count;
		((  void (*) (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 36)))(L_6, L_7, L_8, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 36));
	}

IL_0038:
	{
		int32_t L_9 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_9, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_mCBEFEE4479438557E591F7AEF3BFDE2297DA269D_fshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14)))(__this, NULL);
		RuntimeObject* L_1 = ___0_comparer;
		((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, int32_t, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 37)))(__this, 0, L_0, L_1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 37));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_m851B4290E563560C0037434A52D469666ABDE79D_fshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, int32_t ___0_index, int32_t ___1_count, RuntimeObject* ___2_comparer, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_count;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F(((int32_t)16), 4, NULL);
	}

IL_0015:
	{
		int32_t L_2 = __this->____size;
		int32_t L_3 = ___0_index;
		int32_t L_4 = ___1_count;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_2, L_3))) >= ((int32_t)L_4)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(((int32_t)23), NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_count;
		if ((((int32_t)L_5) <= ((int32_t)1)))
		{
			goto IL_0039;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_6 = __this->____items;
		int32_t L_7 = ___0_index;
		int32_t L_8 = ___1_count;
		RuntimeObject* L_9 = ___2_comparer;
		((  void (*) (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 38)))(L_6, L_7, L_8, L_9, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 38));
	}

IL_0039:
	{
		int32_t L_10 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_10, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_mF939EF9300267AF108323ABAECB490A27894309B_fshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, Comparison_1_tE94B5C4AE59DE10B7A54AD7C3291462A05D5CD49* ___0_comparison, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(ArraySortHelper_1_t0B69B36E8E1F97490E6BE32C23AE1784AB1ADA3A_StaticInit);
	{
		Comparison_1_tE94B5C4AE59DE10B7A54AD7C3291462A05D5CD49* L_0 = ___0_comparison;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(((int32_t)34), NULL);
	}

IL_000a:
	{
		int32_t L_1 = __this->____size;
		if ((((int32_t)L_1) <= ((int32_t)1)))
		{
			goto IL_0026;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_2 = __this->____items;
		int32_t L_3 = __this->____size;
		Comparison_1_tE94B5C4AE59DE10B7A54AD7C3291462A05D5CD49* L_4 = ___0_comparison;
		CHECKED_LOCAL_INIT(ArraySortHelper_1_t0B69B36E8E1F97490E6BE32C23AE1784AB1ADA3A_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 40)),il2cpp_codegen_runtime_class_init_inline);
		((  void (*) (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t, int32_t, Comparison_1_tE94B5C4AE59DE10B7A54AD7C3291462A05D5CD49*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 39)))(L_2, 0, L_3, L_4, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 39));
	}

IL_0026:
	{
		int32_t L_5 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_5, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* List_1_ToArray_m5160526E5983BD8ED24DFFE47C33B141C1B3187A_fshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit);
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* V_0 = NULL;
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		CHECKED_LOCAL_INIT(List_1_tA054E80C004998BFCB1ED5377160B32E4A19B78C_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)),il2cpp_codegen_runtime_class_init_inline);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1 = ((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)))->___s_emptyArray;
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____size;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1), (uint32_t)L_2);
		V_0 = L_3;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_4 = __this->____items;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_5 = V_0;
		int32_t L_6 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_4, 0, (RuntimeArray*)L_5, 0, L_6, NULL);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_7 = V_0;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddEnumerable_mFD4E2919839A27C7CEACADF62222C63701302D02_fshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, RuntimeObject* ___0_enumerable, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6));
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
	const Il2CppFullySharedGenericAny L_15 = L_6;
	RuntimeObject* V_0 = NULL;
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
	memset(V_1, 0, SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
	int32_t V_2 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		RuntimeObject* L_1 = ___0_enumerable;
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 28), L_1);
		V_0 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0063:
			{
				{
					RuntimeObject* L_3 = V_0;
					if (!L_3)
					{
						goto IL_006c;
					}
				}
				{
					RuntimeObject* L_4 = V_0;
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_4);
				}

IL_006c:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_0059_1;
			}

IL_0017_1:
			{
				RuntimeObject* L_5 = V_0;
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 30), L_5, (Il2CppFullySharedGenericAny*)L_6);
				il2cpp_codegen_memcpy(V_1, L_6, SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
				int32_t L_7 = __this->____size;
				__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_8 = __this->____items;
				int32_t L_9 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_8)->max_length),NULL));
				if ((!(((uint32_t)L_7) == ((uint32_t)L_9))))
				{
					goto IL_003c_1;
				}
			}
			{
				int32_t L_10 = __this->____size;
				((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 12)))(__this, ((int32_t)il2cpp_codegen_add(L_10, 1)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 12));
			}

IL_003c_1:
			{
				__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_11 = __this->____items;
				int32_t L_12 = __this->____size;
				V_2 = L_12;
				int32_t L_13 = V_2;
				__this->____size = ((int32_t)il2cpp_codegen_add(L_13, 1));
				int32_t L_14 = V_2;
				il2cpp_codegen_memcpy(L_15, V_1, SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
				il2cpp_codegen_memcpy((L_11)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_14)), L_15, SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
				Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6), (void**)(L_11)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_14)), (void*)L_15);
			}

IL_0059_1:
			{
				RuntimeObject* L_16 = V_0;
				bool L_17;
				L_17 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_16);
				if (L_17)
				{
					goto IL_0017_1;
				}
			}
			{
				goto IL_006d;
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

IL_006d:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__cctor_mFBD61154F711CE4EF252AA0B8B504EFC3E7E5B37_fshared (const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)SZArrayNew(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1), (uint32_t)0);
		((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___s_emptyArray = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___s_emptyArray), (void*)L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_item, const RuntimeMethod* method) 
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____items;
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		V_1 = L_2;
		int32_t L_3 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = V_0;
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		if ((!(((uint32_t)L_3) < ((uint32_t)L_5))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_6 = V_1;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_6, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = V_0;
		int32_t L_8 = V_1;
		int32_t L_9 = ___0_item;
		(L_7)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_8), (int32_t)L_9);
		return;
	}

IL_0034:
	{
		int32_t L_10 = ___0_item;
		List_1_AddWithResize_m378B392086AAB6F400944FA9839516326B3F7BB8(__this, L_10, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 11));
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mAC3C34BA1905AB5B79E483CD9BB082B7D667F703_inline (Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* __this, int32_t ___0_obj, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_mD16C664FFE93598D1C12AC86190D12B0F90B5419_inline (Predicate_1_t6CDE3111264F492F4F13277756366A07CA78A4C3* __this, int32_t ___0_obj, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m40A676842DBAD96A16B8A64BE3ACB4F133CC81A7_inline (List_1_t6D4D3AAF46D9E2944E578579CE720FABFD990C26* __this, intptr_t ___0_item, const RuntimeMethod* method) 
{
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_1 = __this->____items;
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		V_1 = L_2;
		int32_t L_3 = V_1;
		IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_4 = V_0;
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		if ((!(((uint32_t)L_3) < ((uint32_t)L_5))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_6 = V_1;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_6, 1));
		IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_7 = V_0;
		int32_t L_8 = V_1;
		intptr_t L_9 = ___0_item;
		(L_7)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_8), (intptr_t)L_9);
		return;
	}

IL_0034:
	{
		intptr_t L_10 = ___0_item;
		List_1_AddWithResize_mFD3AECDFEA2B2C10E6C4A4400AF180A57212A0AF(__this, L_10, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_m783EC8C62449882812B741E4DE67BF3106686D9C_inline (Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2* __this, intptr_t ___0_obj, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_mCEB9F2ADE76B8447BE54DEAE7EC0E295F91FECDF_inline (Predicate_1_t1659F6182C62A18F9877F492426DD2DEC6A68A9B* __this, intptr_t ___0_obj, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, intptr_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m32E57A790444FACBD9BC16F86A57C8363980CCDA_inline (List_1_t420B17163897A4DF994BA698744548CD81961E70* __this, LigatureSubstitutionRecord_t8660DC6B1D65C655D698216F72BFB3C85DDCAB94 ___0_item, const RuntimeMethod* method) 
{
	LigatureSubstitutionRecordU5BU5D_t04186B1B45C8D4F2AAB2299EE24668D39B4E9B50* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		LigatureSubstitutionRecordU5BU5D_t04186B1B45C8D4F2AAB2299EE24668D39B4E9B50* L_1 = __this->____items;
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		V_1 = L_2;
		int32_t L_3 = V_1;
		LigatureSubstitutionRecordU5BU5D_t04186B1B45C8D4F2AAB2299EE24668D39B4E9B50* L_4 = V_0;
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		if ((!(((uint32_t)L_3) < ((uint32_t)L_5))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_6 = V_1;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_6, 1));
		LigatureSubstitutionRecordU5BU5D_t04186B1B45C8D4F2AAB2299EE24668D39B4E9B50* L_7 = V_0;
		int32_t L_8 = V_1;
		LigatureSubstitutionRecord_t8660DC6B1D65C655D698216F72BFB3C85DDCAB94 L_9 = ___0_item;
		(L_7)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_8), (LigatureSubstitutionRecord_t8660DC6B1D65C655D698216F72BFB3C85DDCAB94)L_9);
		return;
	}

IL_0034:
	{
		LigatureSubstitutionRecord_t8660DC6B1D65C655D698216F72BFB3C85DDCAB94 L_10 = ___0_item;
		List_1_AddWithResize_m5D34622BB8796C326247AB8DED3588710917CDBE(__this, L_10, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mE2D564FE48C72E75796517B8E687F8C4194E58A4_inline (Action_1_t3C69DE7F9955C35DC22C9DEA53238F2CF0D23802* __this, LigatureSubstitutionRecord_t8660DC6B1D65C655D698216F72BFB3C85DDCAB94 ___0_obj, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, LigatureSubstitutionRecord_t8660DC6B1D65C655D698216F72BFB3C85DDCAB94, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_m02B60E049382273FC4D120B0558764B11D3B2ADE_inline (Predicate_1_t75A270EF719DA010F98BE7630ECAA21A66DD8FFE* __this, LigatureSubstitutionRecord_t8660DC6B1D65C655D698216F72BFB3C85DDCAB94 ___0_obj, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, LigatureSubstitutionRecord_t8660DC6B1D65C655D698216F72BFB3C85DDCAB94, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m0C181B61B3E3305719C8A3206BF633E7DD84A27D_inline (List_1_t8837CD02A40CED632406E449B6D76FF9AB3E4468* __this, MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607 ___0_item, const RuntimeMethod* method) 
{
	MarkToBaseAdjustmentRecordU5BU5D_t4F120A507E14039BC63574D1815FF2E7B9D73911* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		MarkToBaseAdjustmentRecordU5BU5D_t4F120A507E14039BC63574D1815FF2E7B9D73911* L_1 = __this->____items;
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		V_1 = L_2;
		int32_t L_3 = V_1;
		MarkToBaseAdjustmentRecordU5BU5D_t4F120A507E14039BC63574D1815FF2E7B9D73911* L_4 = V_0;
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		if ((!(((uint32_t)L_3) < ((uint32_t)L_5))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_6 = V_1;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_6, 1));
		MarkToBaseAdjustmentRecordU5BU5D_t4F120A507E14039BC63574D1815FF2E7B9D73911* L_7 = V_0;
		int32_t L_8 = V_1;
		MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607 L_9 = ___0_item;
		(L_7)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_8), (MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607)L_9);
		return;
	}

IL_0034:
	{
		MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607 L_10 = ___0_item;
		List_1_AddWithResize_m58952DA47BD7D859A8AF9ED552F78C58AA5ED5F8(__this, L_10, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_m9D2103EFF0BBD8E29BA43CD08164936D8DE9CB07_inline (Action_1_t801DD0C5C7757F429A097C411325B152D78BAC33* __this, MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607 ___0_obj, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_m359A2A4F02AD08F4FD3E4714D4A018527704D814_inline (Predicate_1_t1A0605C87155DBCA6412C23F07D0AEBBDC65F25B* __this, MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607 ___0_obj, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m75222C9F0ABBFD176919C42A8981E0D32682DF96_inline (List_1_tF7A39AE542CF9A5C63B48726F173FA38571D52C3* __this, MarkToMarkAdjustmentRecord_tD53618A3728435D5C904857DAC644EE27640807C ___0_item, const RuntimeMethod* method) 
{
	MarkToMarkAdjustmentRecordU5BU5D_t09E9394A7451C53E2DD62ACB4FD0CF5F52159061* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		MarkToMarkAdjustmentRecordU5BU5D_t09E9394A7451C53E2DD62ACB4FD0CF5F52159061* L_1 = __this->____items;
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		V_1 = L_2;
		int32_t L_3 = V_1;
		MarkToMarkAdjustmentRecordU5BU5D_t09E9394A7451C53E2DD62ACB4FD0CF5F52159061* L_4 = V_0;
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		if ((!(((uint32_t)L_3) < ((uint32_t)L_5))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_6 = V_1;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_6, 1));
		MarkToMarkAdjustmentRecordU5BU5D_t09E9394A7451C53E2DD62ACB4FD0CF5F52159061* L_7 = V_0;
		int32_t L_8 = V_1;
		MarkToMarkAdjustmentRecord_tD53618A3728435D5C904857DAC644EE27640807C L_9 = ___0_item;
		(L_7)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_8), (MarkToMarkAdjustmentRecord_tD53618A3728435D5C904857DAC644EE27640807C)L_9);
		return;
	}

IL_0034:
	{
		MarkToMarkAdjustmentRecord_tD53618A3728435D5C904857DAC644EE27640807C L_10 = ___0_item;
		List_1_AddWithResize_m74BC4D9B052F89D90F161E7CCE09374362B7B3E5(__this, L_10, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_m537A457F9B2C719DF77C61359F8A566DCF3186AD_inline (Action_1_t1AC3D5C3F81C6F9B1B32157D44B18D2F3098FF66* __this, MarkToMarkAdjustmentRecord_tD53618A3728435D5C904857DAC644EE27640807C ___0_obj, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, MarkToMarkAdjustmentRecord_tD53618A3728435D5C904857DAC644EE27640807C, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_m59DD28C260255EA76ACBDE643536314F9BF372F7_inline (Predicate_1_t86696A7752B102AFC6ED1D86EE72BB4CD74918CF* __this, MarkToMarkAdjustmentRecord_tD53618A3728435D5C904857DAC644EE27640807C ___0_obj, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, MarkToMarkAdjustmentRecord_tD53618A3728435D5C904857DAC644EE27640807C, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mF385946D3C21B253EEBD0914E26E8AB90B6FB8A7_inline (List_1_tC99D7D75F0197EF8D9C0B56B71A1B77C6B6C8AC6* __this, MeshInfoBindings_t75C3901D8003725F85E8FD2F33C1712A92DB3EAF ___0_item, const RuntimeMethod* method) 
{
	MeshInfoBindingsU5BU5D_tAB8E8C31A391A18DE5B83869CC7C3C43DA40C641* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		MeshInfoBindingsU5BU5D_tAB8E8C31A391A18DE5B83869CC7C3C43DA40C641* L_1 = __this->____items;
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		V_1 = L_2;
		int32_t L_3 = V_1;
		MeshInfoBindingsU5BU5D_tAB8E8C31A391A18DE5B83869CC7C3C43DA40C641* L_4 = V_0;
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		if ((!(((uint32_t)L_3) < ((uint32_t)L_5))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_6 = V_1;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_6, 1));
		MeshInfoBindingsU5BU5D_tAB8E8C31A391A18DE5B83869CC7C3C43DA40C641* L_7 = V_0;
		int32_t L_8 = V_1;
		MeshInfoBindings_t75C3901D8003725F85E8FD2F33C1712A92DB3EAF L_9 = ___0_item;
		(L_7)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_8), (MeshInfoBindings_t75C3901D8003725F85E8FD2F33C1712A92DB3EAF)L_9);
		return;
	}

IL_0034:
	{
		MeshInfoBindings_t75C3901D8003725F85E8FD2F33C1712A92DB3EAF L_10 = ___0_item;
		List_1_AddWithResize_m1ACBAD225ECA81E408127C86E4BAAE3865014613(__this, L_10, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_m52BBC04008C888EC507D9985F7A2136BBDEF803C_inline (Action_1_tFB4CF7B05ED4457EF963EF457274973F784847E1* __this, MeshInfoBindings_t75C3901D8003725F85E8FD2F33C1712A92DB3EAF ___0_obj, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, MeshInfoBindings_t75C3901D8003725F85E8FD2F33C1712A92DB3EAF, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_mA988E072F30C796A4800138B64AA90FB0C84685E_inline (Predicate_1_t09023B0AB7D2D62F61A5FE077D1F3DF03EFB51D3* __this, MeshInfoBindings_t75C3901D8003725F85E8FD2F33C1712A92DB3EAF ___0_obj, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, MeshInfoBindings_t75C3901D8003725F85E8FD2F33C1712A92DB3EAF, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m0F287C5DA436E45442C23034E2F0C1BCE2B8C99D_inline (List_1_tD497C1314C02F6E7345D74565C2424A939B46AA7* __this, MultipleSubstitutionRecord_t668A640AFADBD46E3D4EC3A8417D0A02764DF87B ___0_item, const RuntimeMethod* method) 
{
	MultipleSubstitutionRecordU5BU5D_t97C158785342D9FF7B0B89861AC760DE6E38E934* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		MultipleSubstitutionRecordU5BU5D_t97C158785342D9FF7B0B89861AC760DE6E38E934* L_1 = __this->____items;
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		V_1 = L_2;
		int32_t L_3 = V_1;
		MultipleSubstitutionRecordU5BU5D_t97C158785342D9FF7B0B89861AC760DE6E38E934* L_4 = V_0;
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		if ((!(((uint32_t)L_3) < ((uint32_t)L_5))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_6 = V_1;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_6, 1));
		MultipleSubstitutionRecordU5BU5D_t97C158785342D9FF7B0B89861AC760DE6E38E934* L_7 = V_0;
		int32_t L_8 = V_1;
		MultipleSubstitutionRecord_t668A640AFADBD46E3D4EC3A8417D0A02764DF87B L_9 = ___0_item;
		(L_7)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_8), (MultipleSubstitutionRecord_t668A640AFADBD46E3D4EC3A8417D0A02764DF87B)L_9);
		return;
	}

IL_0034:
	{
		MultipleSubstitutionRecord_t668A640AFADBD46E3D4EC3A8417D0A02764DF87B L_10 = ___0_item;
		List_1_AddWithResize_mA0DD34F99218D5498D14A1F12196EA06898974BB(__this, L_10, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mDD8EACF0FE87BE9E69F0AAEF47DDD885A2878F14_inline (Action_1_t45EE9233F562CACBFAD099A7F22DC3DEC41DC5F2* __this, MultipleSubstitutionRecord_t668A640AFADBD46E3D4EC3A8417D0A02764DF87B ___0_obj, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, MultipleSubstitutionRecord_t668A640AFADBD46E3D4EC3A8417D0A02764DF87B, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_m8B262358618A1C8806C5F73FAC6805666D1E1D30_inline (Predicate_1_tB19E1C7275588953C5ED1BC720F0294C2011833E* __this, MultipleSubstitutionRecord_t668A640AFADBD46E3D4EC3A8417D0A02764DF87B ___0_obj, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, MultipleSubstitutionRecord_t668A640AFADBD46E3D4EC3A8417D0A02764DF87B, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mF04CCC12DEF9C866AC5DC5330FDC48AB65CCA024_inline (List_1_t480A595B8D45A9019FF0E9A33AD53D81F7355674* __this, ResourceHandle_tAB7888F3AB5071C94127D0D46AAB3D702BC4B9F8 ___0_item, const RuntimeMethod* method) 
{
	ResourceHandleU5BU5D_tD8EAD492F528F246F46563C67691360F9F2B0918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ResourceHandleU5BU5D_tD8EAD492F528F246F46563C67691360F9F2B0918* L_1 = __this->____items;
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ResourceHandleU5BU5D_tD8EAD492F528F246F46563C67691360F9F2B0918* L_4 = V_0;
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		if ((!(((uint32_t)L_3) < ((uint32_t)L_5))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_6 = V_1;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_6, 1));
		ResourceHandleU5BU5D_tD8EAD492F528F246F46563C67691360F9F2B0918* L_7 = V_0;
		int32_t L_8 = V_1;
		ResourceHandle_tAB7888F3AB5071C94127D0D46AAB3D702BC4B9F8 L_9 = ___0_item;
		(L_7)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_8), (ResourceHandle_tAB7888F3AB5071C94127D0D46AAB3D702BC4B9F8)L_9);
		return;
	}

IL_0034:
	{
		ResourceHandle_tAB7888F3AB5071C94127D0D46AAB3D702BC4B9F8 L_10 = ___0_item;
		List_1_AddWithResize_m28AFC3F6D5F6FE74B5CC7A3E42AC5CC6FFE0F2B8(__this, L_10, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_m32309F80523567ABFD485831B4D6CF626A350927_inline (Action_1_tA9D6FD07CF73C3DCEA4B280667EEFD02150EEA98* __this, ResourceHandle_tAB7888F3AB5071C94127D0D46AAB3D702BC4B9F8 ___0_obj, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, ResourceHandle_tAB7888F3AB5071C94127D0D46AAB3D702BC4B9F8, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_m34AFEF07BE56D23BA7F5BA2338AC3C3F1ED777CF_inline (Predicate_1_tD559AF1002ABFFC541AF884654337A564D28B733* __this, ResourceHandle_tAB7888F3AB5071C94127D0D46AAB3D702BC4B9F8 ___0_obj, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, ResourceHandle_tAB7888F3AB5071C94127D0D46AAB3D702BC4B9F8, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m084F52E7C436446A23080F15F803212491693F6B_inline (List_1_t9B68833848E4C4D7F623C05F6B77F0449396354A* __this, uint32_t ___0_item, const RuntimeMethod* method) 
{
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = __this->____items;
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		V_1 = L_2;
		int32_t L_3 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4 = V_0;
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		if ((!(((uint32_t)L_3) < ((uint32_t)L_5))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_6 = V_1;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_6, 1));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_7 = V_0;
		int32_t L_8 = V_1;
		uint32_t L_9 = ___0_item;
		(L_7)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_8), (uint32_t)L_9);
		return;
	}

IL_0034:
	{
		uint32_t L_10 = ___0_item;
		List_1_AddWithResize_m88BD32FBFE050A30CA8A331F209B9D6FF6C3A423(__this, L_10, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mA1BDAC0ADA0ABAC07CC491658788A24E6DC8B7EE_inline (Action_1_t831946BFD83EBA9DE498D3E682F1D4F14D17878D* __this, uint32_t ___0_obj, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, uint32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_mCE33776BF08B37A05CCD7FBB46335E5FB6B215DC_inline (Predicate_1_t2F212B682F64543895DDB2A14A8816A433567EFF* __this, uint32_t ___0_obj, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, uint32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method));
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mDB8F7C7381C08B4DCE4E409D2FA4073BC17F90B5_gshared_inline (Action_1_tF0E1373A391479E6E235E0D82CE1EF1DE6B6C505* __this, Il2CppSharedGenericObject* ___0_obj, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Il2CppSharedGenericObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_mDF332C0CEB003C0D86A1E3A194ECFA96D424E34C_gshared_inline (Predicate_1_t586817D6627D147076FFDCC73DA7BEC23132FA88* __this, Il2CppSharedGenericObject* ___0_obj, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, Il2CppSharedGenericObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
