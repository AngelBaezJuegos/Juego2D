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

struct Comparer_1_t075B18A0921F760D040E0D8BFE6637CE0E1587E4;
struct Comparer_1_t2FF14F26F4D678A8FA199B888FF61A2A9D1D2D80;
struct Comparer_1_t91B2382B439BF4E331D0FFB1C6F386A825BCD68D;
struct Comparer_1_tB56A5468D831FE137C33D5EF7A7DCE42DEF55024;
struct Comparer_1_tF59A960F33DD69C2CF0330F3FF6AD7828FF0F3FB;
struct Dictionary_2_t9FA6D82CAFC18769F7515BB51D1C56DAE09381C3;
struct Dictionary_2_tE1603CE612C16451D1E56FF4D4859D4FE4087C28;
struct EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4;
struct EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC;
struct EqualityComparer_1_t13ACD867E946362B862A2AA1D58B7265A48EDC21;
struct EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081;
struct EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
struct Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B;
struct CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0;
struct DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A;
struct IComparer_tE7497C3BE3F68A5A2DCEBF0DAD7D13D738FE7BAD;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1;
struct IFormatProvider_tC202922D43BFF3525109ABF3FB79625F5646AB52;
struct IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82;
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
struct NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct String_t;
struct StringBuilder_t;
struct TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HashHelpers_t285C6E63B4A4E8D837BDBC63DE4E2D23C85467D4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IComparer_tE7497C3BE3F68A5A2DCEBF0DAD7D13D738FE7BAD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral1459AD7D3E0F8808A85528961118835E18AD1F96;
IL2CPP_EXTERN_C String_t* _stringLiteral3DCC6243286938BE75C3FA773B9BA71160A2E869;
IL2CPP_EXTERN_C String_t* _stringLiteral491788442E76F5D7830F0DBFCF8EDD98854F636F;
IL2CPP_EXTERN_C String_t* _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D;
IL2CPP_EXTERN_C String_t* _stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73;
IL2CPP_EXTERN_C String_t* _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D;
IL2CPP_EXTERN_C String_t* _stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_com;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_pinvoke;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct Comparer_1_t075B18A0921F760D040E0D8BFE6637CE0E1587E4  : public RuntimeObject
{
};
struct Comparer_1_t2FF14F26F4D678A8FA199B888FF61A2A9D1D2D80  : public RuntimeObject
{
};
struct Comparer_1_t91B2382B439BF4E331D0FFB1C6F386A825BCD68D  : public RuntimeObject
{
};
struct Comparer_1_tB56A5468D831FE137C33D5EF7A7DCE42DEF55024  : public RuntimeObject
{
};
struct Comparer_1_tF59A960F33DD69C2CF0330F3FF6AD7828FF0F3FB  : public RuntimeObject
{
};
struct EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4  : public RuntimeObject
{
};
struct EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC  : public RuntimeObject
{
};
struct EqualityComparer_1_t13ACD867E946362B862A2AA1D58B7265A48EDC21  : public RuntimeObject
{
};
struct EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081  : public RuntimeObject
{
};
struct EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC  : public RuntimeObject
{
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
struct NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___numberGroupSizes;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___currencyGroupSizes;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___percentGroupSizes;
	String_t* ___positiveSign;
	String_t* ___negativeSign;
	String_t* ___numberDecimalSeparator;
	String_t* ___numberGroupSeparator;
	String_t* ___currencyGroupSeparator;
	String_t* ___currencyDecimalSeparator;
	String_t* ___currencySymbol;
	String_t* ___ansiCurrencySymbol;
	String_t* ___nanSymbol;
	String_t* ___positiveInfinitySymbol;
	String_t* ___negativeInfinitySymbol;
	String_t* ___percentDecimalSeparator;
	String_t* ___percentGroupSeparator;
	String_t* ___percentSymbol;
	String_t* ___perMilleSymbol;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___nativeDigits;
	int32_t ___m_dataItem;
	int32_t ___numberDecimalDigits;
	int32_t ___currencyDecimalDigits;
	int32_t ___currencyPositivePattern;
	int32_t ___currencyNegativePattern;
	int32_t ___numberNegativePattern;
	int32_t ___percentPositivePattern;
	int32_t ___percentNegativePattern;
	int32_t ___percentDecimalDigits;
	int32_t ___digitSubstitution;
	bool ___isReadOnly;
	bool ___m_useUserOverride;
	bool ___m_isInvariant;
	bool ___validForParseAsNumber;
	bool ___validForParseAsCurrency;
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
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};
struct ValueTuple_3_t35635C5723D86442D27F016747CEB94E7F2F8C6D 
{
	Il2CppSharedGenericObject* ___Item1;
	Il2CppSharedGenericObject* ___Item2;
	int32_t ___Item3;
};
typedef Il2CppFullySharedGenericStruct ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98;
typedef Il2CppFullySharedGenericStruct ValueTuple_4_tC84FAA888D71F1EEFA9404956966C93E7171155F;
typedef Il2CppFullySharedGenericStruct ValueTuple_5_t0372F0E081F7940A88ECA2C5C0C5EBCD0CCCEDD8;
typedef Il2CppFullySharedGenericStruct ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56;
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	uint8_t ___m_value;
};
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	Il2CppChar ___m_value;
};
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	double ___m_value;
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
struct SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5 
{
	int8_t ___m_value;
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
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	intptr_t ___value;
};
struct VectorSizeHelper_tC26CEAD1B0D88F765A24D653A74900C4C7FEBD18 
{
	Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 ____placeholder;
	uint8_t ____byte;
};
struct VectorSizeHelper_tF54ACCE947CB8A38047BEB642392A4E7345A157D 
{
	Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A ____placeholder;
	uint8_t ____byte;
};
struct VectorSizeHelper_tAB183E4966E0B97A19A75D213EDAE51037A6BF3C 
{
	Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 ____placeholder;
	uint8_t ____byte;
};
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};
struct Type_t  : public MemberInfo_t
{
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl;
};
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	String_t* ____paramName;
};
struct IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct Comparer_1_t075B18A0921F760D040E0D8BFE6637CE0E1587E4_StaticFields
{
	Comparer_1_t075B18A0921F760D040E0D8BFE6637CE0E1587E4* ___defaultComparer;
};
struct Comparer_1_t2FF14F26F4D678A8FA199B888FF61A2A9D1D2D80_StaticFields
{
	Comparer_1_t2FF14F26F4D678A8FA199B888FF61A2A9D1D2D80* ___defaultComparer;
};
struct Comparer_1_t91B2382B439BF4E331D0FFB1C6F386A825BCD68D_StaticFields
{
	Comparer_1_t91B2382B439BF4E331D0FFB1C6F386A825BCD68D* ___defaultComparer;
};
struct Comparer_1_tB56A5468D831FE137C33D5EF7A7DCE42DEF55024_StaticFields
{
	Comparer_1_tB56A5468D831FE137C33D5EF7A7DCE42DEF55024* ___defaultComparer;
};
struct Comparer_1_tF59A960F33DD69C2CF0330F3FF6AD7828FF0F3FB_StaticFields
{
	Comparer_1_tF59A960F33DD69C2CF0330F3FF6AD7828FF0F3FB* ___defaultComparer;
};
struct EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4_StaticFields
{
	EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4* ___defaultComparer;
};
struct EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC_StaticFields
{
	EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* ___defaultComparer;
};
struct EqualityComparer_1_t13ACD867E946362B862A2AA1D58B7265A48EDC21_StaticFields
{
	EqualityComparer_1_t13ACD867E946362B862A2AA1D58B7265A48EDC21* ___defaultComparer;
};
struct EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081_StaticFields
{
	EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* ___defaultComparer;
};
struct EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC_StaticFields
{
	EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* ___defaultComparer;
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
struct NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472_StaticFields
{
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___invariantInfo;
};
struct String_t_StaticFields
{
	String_t* ___Empty;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString;
	String_t* ___FalseString;
};
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1;
};
struct IntPtr_t_StaticFields
{
	intptr_t ___Zero;
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
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTuple_3_Equals_m5707B4EF24894820E5561A1C846DCA3CF31AA3BE_gshared (ValueTuple_3_t35635C5723D86442D27F016747CEB94E7F2F8C6D* __this, ValueTuple_3_t35635C5723D86442D27F016747CEB94E7F2F8C6D ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTuple_3_Equals_mC5895E9EBF708455FFE8271B5ACD836F77CB9891_gshared (ValueTuple_3_t35635C5723D86442D27F016747CEB94E7F2F8C6D* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* EqualityComparer_1_get_Default_mB451453B7B5B4B570A9347E090AB0FAC75C0C628_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* EqualityComparer_1_get_Default_mF70F6C11A35B420DFA4628EE316B087F2DCB280C_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTuple_3_System_Collections_IStructuralEquatable_Equals_m41DAF980D6E9E987ADDF15AD7EC1F382FAAD081E_gshared (ValueTuple_3_t35635C5723D86442D27F016747CEB94E7F2F8C6D* __this, RuntimeObject* ___0_other, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_3_CompareTo_m4A540B1ECF8A41095A4FE297B49AF343CA2D6B8C_gshared (ValueTuple_3_t35635C5723D86442D27F016747CEB94E7F2F8C6D* __this, ValueTuple_3_t35635C5723D86442D27F016747CEB94E7F2F8C6D ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_3_System_IComparable_CompareTo_m47862A09CC0C7F29E53BB25263BEC49D46E87AEA_gshared (ValueTuple_3_t35635C5723D86442D27F016747CEB94E7F2F8C6D* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Comparer_1_tB56A5468D831FE137C33D5EF7A7DCE42DEF55024* Comparer_1_get_Default_m9D7E1E21FFEE2C32B345D0E5C835BA713DA80B2C_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Comparer_1_t2FF14F26F4D678A8FA199B888FF61A2A9D1D2D80* Comparer_1_get_Default_m55220E2A5C7845F68201F047E7DA0D708E8AE051 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_3_System_Collections_IStructuralComparable_CompareTo_m6B703B22B27216A3FED158633926DB304EEA94CC_gshared (ValueTuple_3_t35635C5723D86442D27F016747CEB94E7F2F8C6D* __this, RuntimeObject* ___0_other, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_3_GetHashCode_m00DE042357BA8018B65CBD06633470B91C8137F5_gshared (ValueTuple_3_t35635C5723D86442D27F016747CEB94E7F2F8C6D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_3_GetHashCodeCore_m6CEB198B1D407B493CDD02FC861A3C0BD4659CB3_gshared (ValueTuple_3_t35635C5723D86442D27F016747CEB94E7F2F8C6D* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_3_System_Collections_IStructuralEquatable_GetHashCode_m4CC9D36AA352FE059FF7E00D3FED463C81F1EDC8_gshared (ValueTuple_3_t35635C5723D86442D27F016747CEB94E7F2F8C6D* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ValueTuple_3_ToString_mE7CCB72FC3C1ECA211113B37F5DE55C2B506E1BF_gshared (ValueTuple_3_t35635C5723D86442D27F016747CEB94E7F2F8C6D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTuple_3_Equals_m31C947DE700D3842AA28795E512D50FE1E505820_fshared (ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTuple_3_Equals_m1716966B94A34CEFBA3FCB15F00A3DE34CF167B4_fshared (ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98* __this, ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98 ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTuple_3_System_Collections_IStructuralEquatable_Equals_m3F5FEF37FD4F019408802635862595B7C9A633DB_fshared (ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98* __this, RuntimeObject* ___0_other, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_3_System_IComparable_CompareTo_mFB7A9AF6B4FE4D8FAB3B464AC27C78B9B8CA8725_fshared (ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_3_CompareTo_m4C3E08414A848EC10D70182B7471304542521377_fshared (ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98* __this, ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98 ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_3_System_Collections_IStructuralComparable_CompareTo_m0EAD982A014687A521C863B33102049D6042380B_fshared (ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98* __this, RuntimeObject* ___0_other, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_3_GetHashCode_m895E8857672E5454D68082DD0A8752865D8E71FC_fshared (ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_3_System_Collections_IStructuralEquatable_GetHashCode_m23E4A5E0CD82CE6A0C844FBFAAC98A510810E98A_fshared (ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ValueTuple_3_ToString_m9995C56C122AEC521C9BF4AD9C00A1498AA26744_fshared (ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTuple_5_Equals_m99B8DE48C98555DC32AF56AA531B12454562A174 (ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57* __this, ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57 ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTuple_5_Equals_mE53802FDDB1279A18C774D84FBEEC3E35639AE2C (ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t13ACD867E946362B862A2AA1D58B7265A48EDC21* EqualityComparer_1_get_Default_m68A9FC33718EE6F74A877D4A760989A962FBD0D2_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4* EqualityComparer_1_get_Default_mBB75BC0723DFD7850F43E72E34026DD070CF5932_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTuple_5_System_Collections_IStructuralEquatable_Equals_m5508A2CD6B0B69FA3C94F4F1A3ACD498DA6BE239 (ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57* __this, RuntimeObject* ___0_other, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_5_CompareTo_m64E05B06486B0FD436482342853A245129952934 (ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57* __this, ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57 ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_5_System_IComparable_CompareTo_mB2EE0E3D57FD4B471C5C9D1D3551EB6BFEC93BB9 (ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Comparer_1_t91B2382B439BF4E331D0FFB1C6F386A825BCD68D* Comparer_1_get_Default_m18BA95A661D7F8B2A998F3AF7ED5DC746AE7008A (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Comparer_1_t075B18A0921F760D040E0D8BFE6637CE0E1587E4* Comparer_1_get_Default_mCFD1A9E7464C248AC312558B9D4F772D8BE3B07C (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_5_System_Collections_IStructuralComparable_CompareTo_mB37ADC03FEA884033DC4DD8F46D58E28DCB2B154 (ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57* __this, RuntimeObject* ___0_other, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_5_GetHashCode_mB615A8EF3BA89A94F36DD4113BAF65429852D992 (ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_5_GetHashCodeCore_m7CD1CE8D3DF4213498F0220163AA6157D54F79EF (ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_5_System_Collections_IStructuralEquatable_GetHashCode_mA508E466DA982359C943FA2158B9D0B9E3A9F8F8 (ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ValueTuple_5_ToString_mFA28F2FBFD72F8DFD4C7AB0F85D7075061F0AC3B (ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTuple_5_Equals_mB9CD17DAD4FABF6412558E3A82BB15FE28160D82_fshared (ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTuple_5_Equals_m1BDE6D49AEE834527814FAEBE4534B414E1022A9_fshared (ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56* __this, ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56 ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTuple_5_System_Collections_IStructuralEquatable_Equals_m6220851574828DC96CE4C7E2D09213B84CA5C1FE_fshared (ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56* __this, RuntimeObject* ___0_other, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_5_System_IComparable_CompareTo_mA31E7015CC7DCBB59BA58FC44A74FB3ED5BBEF8F_fshared (ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_5_CompareTo_mC808DB0CE9EDE1F4B2C4D7382F3E57105940208A_fshared (ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56* __this, ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56 ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_5_System_Collections_IStructuralComparable_CompareTo_mF83475B1821A3AE012364E6215C27FFFF25A399E_fshared (ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56* __this, RuntimeObject* ___0_other, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_5_GetHashCode_m7B00692478B9218079F0364A02363A500A3202B0_fshared (ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_5_System_Collections_IStructuralEquatable_GetHashCode_mBA5888BE2DA308AEA1CCE2C0E702F5DF77975E7C_fshared (ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ValueTuple_5_ToString_m7265BEA8B1A29B537886BB6BEE00D1A154F8D814_fshared (ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector_1_get_Count_m6DF09E4443FC90521D33C892BE69D32B04D85A15_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector_1__ctor_m8212BCFF76673CC904541B2D9AF39E5FF124B359 (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489* __this, void* ___0_dataPointer, int32_t ___1_offset, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector_1_Equals_m729FD34A0F43A7C8A8DF285BCED9B5B31D579FE8 (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489* __this, Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 ___0_other, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector_1_Equals_mD7F4E0B493DD44E2685BC17F8D6EAD92342CBC29_inline (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t Vector_1_get_Item_m248FFF521980A3A43D237B8C5CA2ABD5C62D4D27 (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector_1_ScalarEquals_m4E13E30219B0D2AADB58AD6E5CB2B54B9FCBFAAE_inline (uint16_t ___0_left, uint16_t ___1_right, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Vector_1_GetHashCode_m3C7CFE908C6BB2DC94F94F7615F2D1AF0E2777D9 (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Vector_1_ToString_mA9FEB41834880EF7C7688EB8C3F83286697B0BC7 (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489* __this, String_t* ___0_format, RuntimeObject* ___1_formatProvider, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Vector_1_ToString_m2444D8FDCF0568D259DAE989EB7BCC77D37B2D6D (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector_1_op_Equality_mB42F3DAE52C3BC7579B302E623196C45A5DEAC6B_inline (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 ___0_left, Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 ___1_right, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector_1__ctor_m46ADEA122EFBA7AEF487716891A8ADD284FD12E3 (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489* __this, void* ___0_dataPointer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector_1__ctor_mF674294C34FEB07FB44E694358BDA181F564B674_fshared (Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2* __this, Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* ___0_existingRegister, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Vector_1_InitializeCount_m43BBDDA05FDAB290038584331DB79CB33C523B83 (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint16_t Vector_1_GetOneValue_m7E814AFD17E4D390C12EF731DA01203D262D9953_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector_1__ctor_mDA4A6115C4120BFDD773FD4D3753FD3EC2B10427 (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489* __this, uint16_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint16_t Vector_1_GetAllBitsSetValue_m854DE079EA89F97089D3EF29D7C31F081F420580_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector_1_get_Count_mC75C8C6E913E7FF8A3D10467D6DADE41711EF3CC_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector_1__ctor_mB3EB022FA5067096F41350560FA447FBA16BFF2B (Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A* __this, void* ___0_dataPointer, int32_t ___1_offset, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector_1_Equals_mAE01D42B31EB54893DC4DB1BE8A99216AF784C27 (Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A* __this, Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A ___0_other, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector_1_Equals_mE275DCDE4DC3B6FB30AB80ACEAC8363207BA9BEC_inline (Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t Vector_1_get_Item_m685EA4A01E8AF51DC7B5F78DE0583F8FD4997C99 (Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector_1_ScalarEquals_m73081D1B852400C74618D0A814BBED2FE272175D_inline (uint64_t ___0_left, uint64_t ___1_right, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Vector_1_GetHashCode_mEC951E56E2DC500CF877DFAD5542E0920B73B00A (Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Vector_1_ToString_m8F20119DB8CF7117F2D6E4D165C4A843F7D3586C (Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A* __this, String_t* ___0_format, RuntimeObject* ___1_formatProvider, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Vector_1_ToString_m3EBF88D3E195BD2C4B0D1CCBD9F71E32233CA4F4 (Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector_1_op_Equality_mD4D4AE7733CACE50CA2FCFFFB0A16818EEC01293_inline (Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A ___0_left, Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A ___1_right, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector_1__ctor_mBEC18AF78DE340D929AD22019717DE9ED57A4CCA (Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A* __this, void* ___0_dataPointer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Vector_1_InitializeCount_mE29E088973A17B81B830C30831075135FC8E263A (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t Vector_1_GetOneValue_mE2DE5D8CFC8D7A4990743C160CD1C4ED71CDA288_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector_1__ctor_m1B5D6A9264B4450B3C14BD8FF9430354A337F2D6 (Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A* __this, uint64_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t Vector_1_GetAllBitsSetValue_m99E582A6A7DA5089B26FE42E5F8FDE26A6005ED0_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* EqualityComparer_1_CreateComparer_m9D6667E20D4FCBB62E2725016FE2FC32442FE530_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* EqualityComparer_1_CreateComparer_m432C82F7354C37E610794C1DA866DFA7DAC9C35E (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t13ACD867E946362B862A2AA1D58B7265A48EDC21* EqualityComparer_1_CreateComparer_mB1324B20A8BC571BB3CBACC5E41F1A4D2F420632 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4* EqualityComparer_1_CreateComparer_m3BD7BED1F69ABEE55E320BA9CCFBB473E9F57C66 (const RuntimeMethod* method) ;

inline bool ValueTuple_3_Equals_m5707B4EF24894820E5561A1C846DCA3CF31AA3BE (ValueTuple_3_t35635C5723D86442D27F016747CEB94E7F2F8C6D* __this, ValueTuple_3_t35635C5723D86442D27F016747CEB94E7F2F8C6D ___0_other, const RuntimeMethod* method)
{
	return ((  bool (*) (ValueTuple_3_t35635C5723D86442D27F016747CEB94E7F2F8C6D*, ValueTuple_3_t35635C5723D86442D27F016747CEB94E7F2F8C6D, const RuntimeMethod*))ValueTuple_3_Equals_m5707B4EF24894820E5561A1C846DCA3CF31AA3BE_gshared)(__this, ___0_other, method);
}
inline bool ValueTuple_3_Equals_mC5895E9EBF708455FFE8271B5ACD836F77CB9891 (ValueTuple_3_t35635C5723D86442D27F016747CEB94E7F2F8C6D* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method)
{
	return ((  bool (*) (ValueTuple_3_t35635C5723D86442D27F016747CEB94E7F2F8C6D*, RuntimeObject*, const RuntimeMethod*))ValueTuple_3_Equals_mC5895E9EBF708455FFE8271B5ACD836F77CB9891_gshared)(__this, ___0_obj, method);
}
inline EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* EqualityComparer_1_get_Default_mB451453B7B5B4B570A9347E090AB0FAC75C0C628_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_mB451453B7B5B4B570A9347E090AB0FAC75C0C628_gshared_inline)(method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* EqualityComparer_1_get_Default_mF70F6C11A35B420DFA4628EE316B087F2DCB280C_inline (const RuntimeMethod* method) ;
inline bool ValueTuple_3_System_Collections_IStructuralEquatable_Equals_m41DAF980D6E9E987ADDF15AD7EC1F382FAAD081E (ValueTuple_3_t35635C5723D86442D27F016747CEB94E7F2F8C6D* __this, RuntimeObject* ___0_other, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	return ((  bool (*) (ValueTuple_3_t35635C5723D86442D27F016747CEB94E7F2F8C6D*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))ValueTuple_3_System_Collections_IStructuralEquatable_Equals_m41DAF980D6E9E987ADDF15AD7EC1F382FAAD081E_gshared)(__this, ___0_other, ___1_comparer, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_Format_m9E8DC9AEFDC34AC67473EFAEAB78C5066C1A0D09 (String_t* ___0_resourceFormat, RuntimeObject* ___1_p1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___0_message, String_t* ___1_paramName, const RuntimeMethod* method) ;
inline int32_t ValueTuple_3_CompareTo_m4A540B1ECF8A41095A4FE297B49AF343CA2D6B8C (ValueTuple_3_t35635C5723D86442D27F016747CEB94E7F2F8C6D* __this, ValueTuple_3_t35635C5723D86442D27F016747CEB94E7F2F8C6D ___0_other, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_3_t35635C5723D86442D27F016747CEB94E7F2F8C6D*, ValueTuple_3_t35635C5723D86442D27F016747CEB94E7F2F8C6D, const RuntimeMethod*))ValueTuple_3_CompareTo_m4A540B1ECF8A41095A4FE297B49AF343CA2D6B8C_gshared)(__this, ___0_other, method);
}
inline int32_t ValueTuple_3_System_IComparable_CompareTo_m47862A09CC0C7F29E53BB25263BEC49D46E87AEA (ValueTuple_3_t35635C5723D86442D27F016747CEB94E7F2F8C6D* __this, RuntimeObject* ___0_other, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_3_t35635C5723D86442D27F016747CEB94E7F2F8C6D*, RuntimeObject*, const RuntimeMethod*))ValueTuple_3_System_IComparable_CompareTo_m47862A09CC0C7F29E53BB25263BEC49D46E87AEA_gshared)(__this, ___0_other, method);
}
inline Comparer_1_tB56A5468D831FE137C33D5EF7A7DCE42DEF55024* Comparer_1_get_Default_m9D7E1E21FFEE2C32B345D0E5C835BA713DA80B2C (const RuntimeMethod* method)
{
	return ((  Comparer_1_tB56A5468D831FE137C33D5EF7A7DCE42DEF55024* (*) (const RuntimeMethod*))Comparer_1_get_Default_m9D7E1E21FFEE2C32B345D0E5C835BA713DA80B2C_gshared)(method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Comparer_1_t2FF14F26F4D678A8FA199B888FF61A2A9D1D2D80* Comparer_1_get_Default_m55220E2A5C7845F68201F047E7DA0D708E8AE051 (const RuntimeMethod* method) ;
inline int32_t ValueTuple_3_System_Collections_IStructuralComparable_CompareTo_m6B703B22B27216A3FED158633926DB304EEA94CC (ValueTuple_3_t35635C5723D86442D27F016747CEB94E7F2F8C6D* __this, RuntimeObject* ___0_other, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_3_t35635C5723D86442D27F016747CEB94E7F2F8C6D*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))ValueTuple_3_System_Collections_IStructuralComparable_CompareTo_m6B703B22B27216A3FED158633926DB304EEA94CC_gshared)(__this, ___0_other, ___1_comparer, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295 (int32_t* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_CombineHashCodes_mA282AB8367E72AAC2CD03794350EEDF885DBC3D9 (int32_t ___0_h1, int32_t ___1_h2, int32_t ___2_h3, const RuntimeMethod* method) ;
inline int32_t ValueTuple_3_GetHashCode_m00DE042357BA8018B65CBD06633470B91C8137F5 (ValueTuple_3_t35635C5723D86442D27F016747CEB94E7F2F8C6D* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_3_t35635C5723D86442D27F016747CEB94E7F2F8C6D*, const RuntimeMethod*))ValueTuple_3_GetHashCode_m00DE042357BA8018B65CBD06633470B91C8137F5_gshared)(__this, method);
}
inline int32_t ValueTuple_3_GetHashCodeCore_m6CEB198B1D407B493CDD02FC861A3C0BD4659CB3 (ValueTuple_3_t35635C5723D86442D27F016747CEB94E7F2F8C6D* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_3_t35635C5723D86442D27F016747CEB94E7F2F8C6D*, RuntimeObject*, const RuntimeMethod*))ValueTuple_3_GetHashCodeCore_m6CEB198B1D407B493CDD02FC861A3C0BD4659CB3_gshared)(__this, ___0_comparer, method);
}
inline int32_t ValueTuple_3_System_Collections_IStructuralEquatable_GetHashCode_m4CC9D36AA352FE059FF7E00D3FED463C81F1EDC8 (ValueTuple_3_t35635C5723D86442D27F016747CEB94E7F2F8C6D* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_3_t35635C5723D86442D27F016747CEB94E7F2F8C6D*, RuntimeObject*, const RuntimeMethod*))ValueTuple_3_System_Collections_IStructuralEquatable_GetHashCode_m4CC9D36AA352FE059FF7E00D3FED463C81F1EDC8_gshared)(__this, ___0_comparer, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_values, const RuntimeMethod* method) ;
inline String_t* ValueTuple_3_ToString_mE7CCB72FC3C1ECA211113B37F5DE55C2B506E1BF (ValueTuple_3_t35635C5723D86442D27F016747CEB94E7F2F8C6D* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (ValueTuple_3_t35635C5723D86442D27F016747CEB94E7F2F8C6D*, const RuntimeMethod*))ValueTuple_3_ToString_mE7CCB72FC3C1ECA211113B37F5DE55C2B506E1BF_gshared)(__this, method);
}
inline bool ValueTuple_3_Equals_m31C947DE700D3842AA28795E512D50FE1E505820 (ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method)
{
	return ((  bool (*) (ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98*, RuntimeObject*, const RuntimeMethod*))ValueTuple_3_Equals_m31C947DE700D3842AA28795E512D50FE1E505820_fshared)(__this, ___0_obj, method);
}
inline bool ValueTuple_3_Equals_m1716966B94A34CEFBA3FCB15F00A3DE34CF167B4 (ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98* __this, ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98 ___0_other, const RuntimeMethod* method)
{
	return ((  bool (*) (ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98*, ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98, const RuntimeMethod*))ValueTuple_3_Equals_m1716966B94A34CEFBA3FCB15F00A3DE34CF167B4_fshared)((ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98*)__this, ___0_other, method);
}
inline bool ValueTuple_3_System_Collections_IStructuralEquatable_Equals_m3F5FEF37FD4F019408802635862595B7C9A633DB (ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98* __this, RuntimeObject* ___0_other, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	return ((  bool (*) (ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))ValueTuple_3_System_Collections_IStructuralEquatable_Equals_m3F5FEF37FD4F019408802635862595B7C9A633DB_fshared)(__this, ___0_other, ___1_comparer, method);
}
inline int32_t ValueTuple_3_System_IComparable_CompareTo_mFB7A9AF6B4FE4D8FAB3B464AC27C78B9B8CA8725 (ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98* __this, RuntimeObject* ___0_other, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98*, RuntimeObject*, const RuntimeMethod*))ValueTuple_3_System_IComparable_CompareTo_mFB7A9AF6B4FE4D8FAB3B464AC27C78B9B8CA8725_fshared)(__this, ___0_other, method);
}
inline int32_t ValueTuple_3_CompareTo_m4C3E08414A848EC10D70182B7471304542521377 (ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98* __this, ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98 ___0_other, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98*, ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98, const RuntimeMethod*))ValueTuple_3_CompareTo_m4C3E08414A848EC10D70182B7471304542521377_fshared)((ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98*)__this, ___0_other, method);
}
inline int32_t ValueTuple_3_System_Collections_IStructuralComparable_CompareTo_m0EAD982A014687A521C863B33102049D6042380B (ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98* __this, RuntimeObject* ___0_other, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))ValueTuple_3_System_Collections_IStructuralComparable_CompareTo_m0EAD982A014687A521C863B33102049D6042380B_fshared)(__this, ___0_other, ___1_comparer, method);
}
inline int32_t ValueTuple_3_GetHashCode_m895E8857672E5454D68082DD0A8752865D8E71FC (ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98*, const RuntimeMethod*))ValueTuple_3_GetHashCode_m895E8857672E5454D68082DD0A8752865D8E71FC_fshared)(__this, method);
}
inline int32_t ValueTuple_3_System_Collections_IStructuralEquatable_GetHashCode_m23E4A5E0CD82CE6A0C844FBFAAC98A510810E98A (ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98*, RuntimeObject*, const RuntimeMethod*))ValueTuple_3_System_Collections_IStructuralEquatable_GetHashCode_m23E4A5E0CD82CE6A0C844FBFAAC98A510810E98A_fshared)(__this, ___0_comparer, method);
}
inline String_t* ValueTuple_3_ToString_m9995C56C122AEC521C9BF4AD9C00A1498AA26744 (ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98*, const RuntimeMethod*))ValueTuple_3_ToString_m9995C56C122AEC521C9BF4AD9C00A1498AA26744_fshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTuple_5_Equals_m99B8DE48C98555DC32AF56AA531B12454562A174 (ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57* __this, ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57 ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTuple_5_Equals_mE53802FDDB1279A18C774D84FBEEC3E35639AE2C (ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t13ACD867E946362B862A2AA1D58B7265A48EDC21* EqualityComparer_1_get_Default_m68A9FC33718EE6F74A877D4A760989A962FBD0D2_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4* EqualityComparer_1_get_Default_mBB75BC0723DFD7850F43E72E34026DD070CF5932_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTuple_5_System_Collections_IStructuralEquatable_Equals_m5508A2CD6B0B69FA3C94F4F1A3ACD498DA6BE239 (ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57* __this, RuntimeObject* ___0_other, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_5_CompareTo_m64E05B06486B0FD436482342853A245129952934 (ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57* __this, ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57 ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_5_System_IComparable_CompareTo_mB2EE0E3D57FD4B471C5C9D1D3551EB6BFEC93BB9 (ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Comparer_1_t91B2382B439BF4E331D0FFB1C6F386A825BCD68D* Comparer_1_get_Default_m18BA95A661D7F8B2A998F3AF7ED5DC746AE7008A (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Comparer_1_t075B18A0921F760D040E0D8BFE6637CE0E1587E4* Comparer_1_get_Default_mCFD1A9E7464C248AC312558B9D4F772D8BE3B07C (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_5_System_Collections_IStructuralComparable_CompareTo_mB37ADC03FEA884033DC4DD8F46D58E28DCB2B154 (ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57* __this, RuntimeObject* ___0_other, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IntPtr_GetHashCode_m669B16AD7483C1C396E48F41D9CAC4B719E38F3D (intptr_t* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Boolean_GetHashCode_mEDB6904770C962BAF4510E5D24F08083C33900E3 (bool* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_CombineHashCodes_m60E50AC57049CAC8E58C145BDC9022989DD8BF4A (int32_t ___0_h1, int32_t ___1_h2, int32_t ___2_h3, int32_t ___3_h4, int32_t ___4_h5, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_5_GetHashCode_mB615A8EF3BA89A94F36DD4113BAF65429852D992 (ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_5_GetHashCodeCore_m7CD1CE8D3DF4213498F0220163AA6157D54F79EF (ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_5_System_Collections_IStructuralEquatable_GetHashCode_mA508E466DA982359C943FA2158B9D0B9E3A9F8F8 (ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* IntPtr_ToString_mDA1150F4802E1FB9313FB4E32C684EEE19116E5C (intptr_t* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Boolean_ToString_m6646C8026B1DF381A1EE8CD13549175E9703CC63 (bool* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ValueTuple_5_ToString_mFA28F2FBFD72F8DFD4C7AB0F85D7075061F0AC3B (ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57* __this, const RuntimeMethod* method) ;
inline bool ValueTuple_5_Equals_mB9CD17DAD4FABF6412558E3A82BB15FE28160D82 (ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method)
{
	return ((  bool (*) (ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56*, RuntimeObject*, const RuntimeMethod*))ValueTuple_5_Equals_mB9CD17DAD4FABF6412558E3A82BB15FE28160D82_fshared)(__this, ___0_obj, method);
}
inline bool ValueTuple_5_Equals_m1BDE6D49AEE834527814FAEBE4534B414E1022A9 (ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56* __this, ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56 ___0_other, const RuntimeMethod* method)
{
	return ((  bool (*) (ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56*, ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56, const RuntimeMethod*))ValueTuple_5_Equals_m1BDE6D49AEE834527814FAEBE4534B414E1022A9_fshared)((ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56*)__this, ___0_other, method);
}
inline bool ValueTuple_5_System_Collections_IStructuralEquatable_Equals_m6220851574828DC96CE4C7E2D09213B84CA5C1FE (ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56* __this, RuntimeObject* ___0_other, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	return ((  bool (*) (ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))ValueTuple_5_System_Collections_IStructuralEquatable_Equals_m6220851574828DC96CE4C7E2D09213B84CA5C1FE_fshared)(__this, ___0_other, ___1_comparer, method);
}
inline int32_t ValueTuple_5_System_IComparable_CompareTo_mA31E7015CC7DCBB59BA58FC44A74FB3ED5BBEF8F (ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56* __this, RuntimeObject* ___0_other, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56*, RuntimeObject*, const RuntimeMethod*))ValueTuple_5_System_IComparable_CompareTo_mA31E7015CC7DCBB59BA58FC44A74FB3ED5BBEF8F_fshared)(__this, ___0_other, method);
}
inline int32_t ValueTuple_5_CompareTo_mC808DB0CE9EDE1F4B2C4D7382F3E57105940208A (ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56* __this, ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56 ___0_other, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56*, ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56, const RuntimeMethod*))ValueTuple_5_CompareTo_mC808DB0CE9EDE1F4B2C4D7382F3E57105940208A_fshared)((ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56*)__this, ___0_other, method);
}
inline int32_t ValueTuple_5_System_Collections_IStructuralComparable_CompareTo_mF83475B1821A3AE012364E6215C27FFFF25A399E (ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56* __this, RuntimeObject* ___0_other, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))ValueTuple_5_System_Collections_IStructuralComparable_CompareTo_mF83475B1821A3AE012364E6215C27FFFF25A399E_fshared)(__this, ___0_other, ___1_comparer, method);
}
inline int32_t ValueTuple_5_GetHashCode_m7B00692478B9218079F0364A02363A500A3202B0 (ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56*, const RuntimeMethod*))ValueTuple_5_GetHashCode_m7B00692478B9218079F0364A02363A500A3202B0_fshared)(__this, method);
}
inline int32_t ValueTuple_5_System_Collections_IStructuralEquatable_GetHashCode_mBA5888BE2DA308AEA1CCE2C0E702F5DF77975E7C (ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56*, RuntimeObject*, const RuntimeMethod*))ValueTuple_5_System_Collections_IStructuralEquatable_GetHashCode_mBA5888BE2DA308AEA1CCE2C0E702F5DF77975E7C_fshared)(__this, ___0_comparer, method);
}
inline String_t* ValueTuple_5_ToString_m7265BEA8B1A29B537886BB6BEE00D1A154F8D814 (ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56*, const RuntimeMethod*))ValueTuple_5_ToString_m7265BEA8B1A29B537886BB6BEE00D1A154F8D814_fshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector_get_IsHardwareAccelerated_m783509258751EBED64CBD9F387EC1BB4A15088AA (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector_1_get_Count_m6DF09E4443FC90521D33C892BE69D32B04D85A15_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector_1__ctor_m8212BCFF76673CC904541B2D9AF39E5FF124B359 (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489* __this, void* ___0_dataPointer, int32_t ___1_offset, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IndexOutOfRangeException__ctor_mFD06819F05B815BE2D6E826D4E04F4C449D0A425 (IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82* __this, String_t* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector_1_Equals_m729FD34A0F43A7C8A8DF285BCED9B5B31D579FE8 (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489* __this, Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 ___0_other, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector_1_Equals_mD7F4E0B493DD44E2685BC17F8D6EAD92342CBC29_inline (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t Vector_1_get_Item_m248FFF521980A3A43D237B8C5CA2ABD5C62D4D27 (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector_1_ScalarEquals_m4E13E30219B0D2AADB58AD6E5CB2B54B9FCBFAAE_inline (uint16_t ___0_left, uint16_t ___1_right, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UInt16_GetHashCode_m534E5103D0DA9C6FCED4F2F007993D3E38165200 (uint16_t* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7 (int32_t ___0_h1, int32_t ___1_h2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Vector_1_GetHashCode_m3C7CFE908C6BB2DC94F94F7615F2D1AF0E2777D9 (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* CultureInfo_get_CurrentCulture_m8A4580F49DDD7E9DB34C699965423DB8E3BBA9A5 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Vector_1_ToString_mA9FEB41834880EF7C7688EB8C3F83286697B0BC7 (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489* __this, String_t* ___0_format, RuntimeObject* ___1_formatProvider, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Vector_1_ToString_m2444D8FDCF0568D259DAE989EB7BCC77D37B2D6D (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D (StringBuilder_t* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* NumberFormatInfo_GetInstance_m705987E5E7D3E5EC5C5DD2D088FBC9BCBA0FC31F (RuntimeObject* ___0_formatProvider, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* NumberFormatInfo_get_NumberGroupSeparator_m0556B092AA471513B1EDC31C047712226D39BEB6_inline (NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1 (StringBuilder_t* __this, Il2CppChar ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UInt16_ToString_mBD648884B6569D3E7D779669EEFCB1ED5EE4A521 (uint16_t* __this, String_t* ___0_format, RuntimeObject* ___1_provider, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D (StringBuilder_t* __this, String_t* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector_1_op_Equality_mB42F3DAE52C3BC7579B302E623196C45A5DEAC6B_inline (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 ___0_left, Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 ___1_right, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint16_t ConstantHelper_GetUInt16WithAllBitsSet_mD3E13D933A06059499F0E0CBE6798D72D175464A_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector_1__ctor_m46ADEA122EFBA7AEF487716891A8ADD284FD12E3 (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489* __this, void* ___0_dataPointer, const RuntimeMethod* method) ;
inline void Vector_1__ctor_m48CD7847B9597F3193C9C0BA97ED64E276F4340A (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489* __this, Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* ___0_existingRegister, const RuntimeMethod* method)
{
	((  void (*) (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489*, Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*, const RuntimeMethod*))Vector_1__ctor_mF674294C34FEB07FB44E694358BDA181F564B674_fshared)(__this, ___0_existingRegister, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Vector_1_InitializeCount_m43BBDDA05FDAB290038584331DB79CB33C523B83 (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint16_t Vector_1_GetOneValue_m7E814AFD17E4D390C12EF731DA01203D262D9953_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector_1__ctor_mDA4A6115C4120BFDD773FD4D3753FD3EC2B10427 (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489* __this, uint16_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint16_t Vector_1_GetAllBitsSetValue_m854DE079EA89F97089D3EF29D7C31F081F420580_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector_1_get_Count_mC75C8C6E913E7FF8A3D10467D6DADE41711EF3CC_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector_1__ctor_mB3EB022FA5067096F41350560FA447FBA16BFF2B (Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A* __this, void* ___0_dataPointer, int32_t ___1_offset, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector_1_Equals_mAE01D42B31EB54893DC4DB1BE8A99216AF784C27 (Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A* __this, Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A ___0_other, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector_1_Equals_mE275DCDE4DC3B6FB30AB80ACEAC8363207BA9BEC_inline (Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t Vector_1_get_Item_m685EA4A01E8AF51DC7B5F78DE0583F8FD4997C99 (Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector_1_ScalarEquals_m73081D1B852400C74618D0A814BBED2FE272175D_inline (uint64_t ___0_left, uint64_t ___1_right, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UInt64_GetHashCode_m65D9FD0102B6B01BF38D986F060F0BDBC29B4F92 (uint64_t* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Vector_1_GetHashCode_mEC951E56E2DC500CF877DFAD5542E0920B73B00A (Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Vector_1_ToString_m8F20119DB8CF7117F2D6E4D165C4A843F7D3586C (Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A* __this, String_t* ___0_format, RuntimeObject* ___1_formatProvider, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Vector_1_ToString_m3EBF88D3E195BD2C4B0D1CCBD9F71E32233CA4F4 (Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UInt64_ToString_m779041C8FDD58BF8617838B00CD041788DB2F1A3 (uint64_t* __this, String_t* ___0_format, RuntimeObject* ___1_provider, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector_1_op_Equality_mD4D4AE7733CACE50CA2FCFFFB0A16818EEC01293_inline (Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A ___0_left, Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A ___1_right, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t ConstantHelper_GetUInt64WithAllBitsSet_mB7F3E046EE6B1B20C552BF7CF619416E239A5A96_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector_1__ctor_mBEC18AF78DE340D929AD22019717DE9ED57A4CCA (Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A* __this, void* ___0_dataPointer, const RuntimeMethod* method) ;
inline void Vector_1__ctor_mEA86543744A54FCE590FDBF012FAE9037A5F1606 (Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A* __this, Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* ___0_existingRegister, const RuntimeMethod* method)
{
	((  void (*) (Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A*, Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*, const RuntimeMethod*))Vector_1__ctor_mF674294C34FEB07FB44E694358BDA181F564B674_fshared)(__this, ___0_existingRegister, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Vector_1_InitializeCount_mE29E088973A17B81B830C30831075135FC8E263A (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t Vector_1_GetOneValue_mE2DE5D8CFC8D7A4990743C160CD1C4ED71CDA288_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector_1__ctor_m1B5D6A9264B4450B3C14BD8FF9430354A337F2D6 (Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A* __this, uint64_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t Vector_1_GetAllBitsSetValue_m99E582A6A7DA5089B26FE42E5F8FDE26A6005ED0_inline (const RuntimeMethod* method) ;
inline EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* EqualityComparer_1_CreateComparer_m9D6667E20D4FCBB62E2725016FE2FC32442FE530 (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_m9D6667E20D4FCBB62E2725016FE2FC32442FE530_gshared)(method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* EqualityComparer_1_CreateComparer_m432C82F7354C37E610794C1DA866DFA7DAC9C35E (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t13ACD867E946362B862A2AA1D58B7265A48EDC21* EqualityComparer_1_CreateComparer_mB1324B20A8BC571BB3CBACC5E41F1A4D2F420632 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4* EqualityComparer_1_CreateComparer_m3BD7BED1F69ABEE55E320BA9CCFBB473E9F57C66 (const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueTuple_3__ctor_m5BE7DBD08197CF41C0FA0ECD14631EFFEC6BC17F_gshared (ValueTuple_3_t35635C5723D86442D27F016747CEB94E7F2F8C6D* __this, Il2CppSharedGenericObject* ___0_item1, Il2CppSharedGenericObject* ___1_item2, int32_t ___2_item3, const RuntimeMethod* method) 
{
	{
		Il2CppSharedGenericObject* L_0 = ___0_item1;
		__this->___Item1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Item1), (void*)L_0);
		Il2CppSharedGenericObject* L_1 = ___1_item2;
		__this->___Item2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Item2), (void*)L_1);
		int32_t L_2 = ___2_item3;
		__this->___Item3 = L_2;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTuple_3_Equals_mC5895E9EBF708455FFE8271B5ACD836F77CB9891_gshared (ValueTuple_3_t35635C5723D86442D27F016747CEB94E7F2F8C6D* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	{
		RuntimeObject* L_0 = ___0_obj;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1))))
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_1 = ___0_obj;
		bool L_2;
		L_2 = ValueTuple_3_Equals_m5707B4EF24894820E5561A1C846DCA3CF31AA3BE(__this, ((*(ValueTuple_3_t35635C5723D86442D27F016747CEB94E7F2F8C6D*)UnBox(L_1, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1)))), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7));
		return L_2;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool ValueTuple_3_Equals_mC5895E9EBF708455FFE8271B5ACD836F77CB9891_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method)
{
	ValueTuple_3_t35635C5723D86442D27F016747CEB94E7F2F8C6D* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ValueTuple_3_t35635C5723D86442D27F016747CEB94E7F2F8C6D>(__this);
	bool _returnValue;
	_returnValue = ValueTuple_3_Equals_mC5895E9EBF708455FFE8271B5ACD836F77CB9891(_thisAdjusted, ___0_obj, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTuple_3_Equals_m5707B4EF24894820E5561A1C846DCA3CF31AA3BE_gshared (ValueTuple_3_t35635C5723D86442D27F016747CEB94E7F2F8C6D* __this, ValueTuple_3_t35635C5723D86442D27F016747CEB94E7F2F8C6D ___0_other, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	{
		EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* L_0;
		L_0 = EqualityComparer_1_get_Default_mB451453B7B5B4B570A9347E090AB0FAC75C0C628_inline(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8));
		Il2CppSharedGenericObject* L_1 = __this->___Item1;
		ValueTuple_3_t35635C5723D86442D27F016747CEB94E7F2F8C6D L_2 = ___0_other;
		Il2CppSharedGenericObject* L_3 = L_2.___Item1;
		bool L_4;
		L_4 = VirtualFuncInvoker2< bool, Il2CppSharedGenericObject*, Il2CppSharedGenericObject* >::Invoke(8, L_0, L_1, L_3);
		if (!L_4)
		{
			goto IL_0047;
		}
	}
	{
		EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* L_5;
		L_5 = EqualityComparer_1_get_Default_mB451453B7B5B4B570A9347E090AB0FAC75C0C628_inline(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 9));
		Il2CppSharedGenericObject* L_6 = __this->___Item2;
		ValueTuple_3_t35635C5723D86442D27F016747CEB94E7F2F8C6D L_7 = ___0_other;
		Il2CppSharedGenericObject* L_8 = L_7.___Item2;
		bool L_9;
		L_9 = VirtualFuncInvoker2< bool, Il2CppSharedGenericObject*, Il2CppSharedGenericObject* >::Invoke(8, L_5, L_6, L_8);
		if (!L_9)
		{
			goto IL_0047;
		}
	}
	{
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_10;
		L_10 = EqualityComparer_1_get_Default_mF70F6C11A35B420DFA4628EE316B087F2DCB280C_inline(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 10));
		int32_t L_11 = __this->___Item3;
		ValueTuple_3_t35635C5723D86442D27F016747CEB94E7F2F8C6D L_12 = ___0_other;
		int32_t L_13 = L_12.___Item3;
		bool L_14;
		L_14 = VirtualFuncInvoker2< bool, int32_t, int32_t >::Invoke(8, L_10, L_11, L_13);
		return L_14;
	}

IL_0047:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool ValueTuple_3_Equals_m5707B4EF24894820E5561A1C846DCA3CF31AA3BE_AdjustorThunk (RuntimeObject* __this, ValueTuple_3_t35635C5723D86442D27F016747CEB94E7F2F8C6D ___0_other, const RuntimeMethod* method)
{
	ValueTuple_3_t35635C5723D86442D27F016747CEB94E7F2F8C6D* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ValueTuple_3_t35635C5723D86442D27F016747CEB94E7F2F8C6D>(__this);
	bool _returnValue;
	_returnValue = ValueTuple_3_Equals_m5707B4EF24894820E5561A1C846DCA3CF31AA3BE(_thisAdjusted, ___0_other, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTuple_3_System_Collections_IStructuralEquatable_Equals_m41DAF980D6E9E987ADDF15AD7EC1F382FAAD081E_gshared (ValueTuple_3_t35635C5723D86442D27F016747CEB94E7F2F8C6D* __this, RuntimeObject* ___0_other, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	ValueTuple_3_t35635C5723D86442D27F016747CEB94E7F2F8C6D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_other;
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		RuntimeObject* L_1 = ___0_other;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_1, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1))))
		{
			goto IL_000d;
		}
	}

IL_000b:
	{
		return (bool)0;
	}

IL_000d:
	{
		RuntimeObject* L_2 = ___0_other;
		V_0 = ((*(ValueTuple_3_t35635C5723D86442D27F016747CEB94E7F2F8C6D*)UnBox(L_2, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1))));
		RuntimeObject* L_3 = ___1_comparer;
		Il2CppSharedGenericObject* L_4 = __this->___Item1;
		ValueTuple_3_t35635C5723D86442D27F016747CEB94E7F2F8C6D L_5 = V_0;
		Il2CppSharedGenericObject* L_6 = L_5.___Item1;
		bool L_7;
		L_7 = InterfaceFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(0, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_3, (RuntimeObject*)L_4, (RuntimeObject*)L_6);
		if (!L_7)
		{
			goto IL_006d;
		}
	}
	{
		RuntimeObject* L_8 = ___1_comparer;
		Il2CppSharedGenericObject* L_9 = __this->___Item2;
		ValueTuple_3_t35635C5723D86442D27F016747CEB94E7F2F8C6D L_10 = V_0;
		Il2CppSharedGenericObject* L_11 = L_10.___Item2;
		bool L_12;
		L_12 = InterfaceFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(0, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_8, (RuntimeObject*)L_9, (RuntimeObject*)L_11);
		if (!L_12)
		{
			goto IL_006d;
		}
	}
	{
		RuntimeObject* L_13 = ___1_comparer;
		int32_t L_14 = __this->___Item3;
		int32_t L_15 = L_14;
		RuntimeObject* L_16 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5), &L_15);
		ValueTuple_3_t35635C5723D86442D27F016747CEB94E7F2F8C6D L_17 = V_0;
		int32_t L_18 = L_17.___Item3;
		int32_t L_19 = L_18;
		RuntimeObject* L_20 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5), &L_19);
		bool L_21;
		L_21 = InterfaceFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(0, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_13, L_16, L_20);
		return L_21;
	}

IL_006d:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool ValueTuple_3_System_Collections_IStructuralEquatable_Equals_m41DAF980D6E9E987ADDF15AD7EC1F382FAAD081E_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_other, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	ValueTuple_3_t35635C5723D86442D27F016747CEB94E7F2F8C6D* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ValueTuple_3_t35635C5723D86442D27F016747CEB94E7F2F8C6D>(__this);
	bool _returnValue;
	_returnValue = ValueTuple_3_System_Collections_IStructuralEquatable_Equals_m41DAF980D6E9E987ADDF15AD7EC1F382FAAD081E(_thisAdjusted, ___0_other, ___1_comparer, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_3_System_IComparable_CompareTo_m47862A09CC0C7F29E53BB25263BEC49D46E87AEA_gshared (ValueTuple_3_t35635C5723D86442D27F016747CEB94E7F2F8C6D* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return 1;
	}

IL_0005:
	{
		RuntimeObject* L_1 = ___0_other;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_1, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1))))
		{
			goto IL_0037;
		}
	}
	{
		ValueTuple_3_t35635C5723D86442D27F016747CEB94E7F2F8C6D L_2 = (*(ValueTuple_3_t35635C5723D86442D27F016747CEB94E7F2F8C6D*)__this);
		ValueTuple_3_t35635C5723D86442D27F016747CEB94E7F2F8C6D L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1), &L_3);
		Type_t* L_5;
		L_5 = il2cpp_codegen_object_get_type(L_4);
		String_t* L_6;
		L_6 = VirtualFuncInvoker0< String_t* >::Invoke(3, L_5);
		String_t* L_7;
		L_7 = SR_Format_m9E8DC9AEFDC34AC67473EFAEAB78C5066C1A0D09(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1459AD7D3E0F8808A85528961118835E18AD1F96)), L_6, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_8 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_8, L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, method);
	}

IL_0037:
	{
		RuntimeObject* L_9 = ___0_other;
		int32_t L_10;
		L_10 = ValueTuple_3_CompareTo_m4A540B1ECF8A41095A4FE297B49AF343CA2D6B8C(__this, ((*(ValueTuple_3_t35635C5723D86442D27F016747CEB94E7F2F8C6D*)UnBox(L_9, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1)))), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 11));
		return L_10;
	}
}
IL2CPP_EXTERN_C  int32_t ValueTuple_3_System_IComparable_CompareTo_m47862A09CC0C7F29E53BB25263BEC49D46E87AEA_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_other, const RuntimeMethod* method)
{
	ValueTuple_3_t35635C5723D86442D27F016747CEB94E7F2F8C6D* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ValueTuple_3_t35635C5723D86442D27F016747CEB94E7F2F8C6D>(__this);
	int32_t _returnValue;
	_returnValue = ValueTuple_3_System_IComparable_CompareTo_m47862A09CC0C7F29E53BB25263BEC49D46E87AEA(_thisAdjusted, ___0_other, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_3_CompareTo_m4A540B1ECF8A41095A4FE297B49AF343CA2D6B8C_gshared (ValueTuple_3_t35635C5723D86442D27F016747CEB94E7F2F8C6D* __this, ValueTuple_3_t35635C5723D86442D27F016747CEB94E7F2F8C6D ___0_other, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	int32_t V_0 = 0;
	{
		Comparer_1_tB56A5468D831FE137C33D5EF7A7DCE42DEF55024* L_0;
		L_0 = Comparer_1_get_Default_m9D7E1E21FFEE2C32B345D0E5C835BA713DA80B2C(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 12));
		Il2CppSharedGenericObject* L_1 = __this->___Item1;
		ValueTuple_3_t35635C5723D86442D27F016747CEB94E7F2F8C6D L_2 = ___0_other;
		Il2CppSharedGenericObject* L_3 = L_2.___Item1;
		int32_t L_4;
		L_4 = VirtualFuncInvoker2< int32_t, Il2CppSharedGenericObject*, Il2CppSharedGenericObject* >::Invoke(6, L_0, L_1, L_3);
		V_0 = L_4;
		int32_t L_5 = V_0;
		if (!L_5)
		{
			goto IL_001c;
		}
	}
	{
		int32_t L_6 = V_0;
		return L_6;
	}

IL_001c:
	{
		Comparer_1_tB56A5468D831FE137C33D5EF7A7DCE42DEF55024* L_7;
		L_7 = Comparer_1_get_Default_m9D7E1E21FFEE2C32B345D0E5C835BA713DA80B2C(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13));
		Il2CppSharedGenericObject* L_8 = __this->___Item2;
		ValueTuple_3_t35635C5723D86442D27F016747CEB94E7F2F8C6D L_9 = ___0_other;
		Il2CppSharedGenericObject* L_10 = L_9.___Item2;
		int32_t L_11;
		L_11 = VirtualFuncInvoker2< int32_t, Il2CppSharedGenericObject*, Il2CppSharedGenericObject* >::Invoke(6, L_7, L_8, L_10);
		V_0 = L_11;
		int32_t L_12 = V_0;
		if (!L_12)
		{
			goto IL_0038;
		}
	}
	{
		int32_t L_13 = V_0;
		return L_13;
	}

IL_0038:
	{
		Comparer_1_t2FF14F26F4D678A8FA199B888FF61A2A9D1D2D80* L_14;
		L_14 = Comparer_1_get_Default_m55220E2A5C7845F68201F047E7DA0D708E8AE051(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 14));
		int32_t L_15 = __this->___Item3;
		ValueTuple_3_t35635C5723D86442D27F016747CEB94E7F2F8C6D L_16 = ___0_other;
		int32_t L_17 = L_16.___Item3;
		int32_t L_18;
		L_18 = VirtualFuncInvoker2< int32_t, int32_t, int32_t >::Invoke(6, L_14, L_15, L_17);
		return L_18;
	}
}
IL2CPP_EXTERN_C  int32_t ValueTuple_3_CompareTo_m4A540B1ECF8A41095A4FE297B49AF343CA2D6B8C_AdjustorThunk (RuntimeObject* __this, ValueTuple_3_t35635C5723D86442D27F016747CEB94E7F2F8C6D ___0_other, const RuntimeMethod* method)
{
	ValueTuple_3_t35635C5723D86442D27F016747CEB94E7F2F8C6D* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ValueTuple_3_t35635C5723D86442D27F016747CEB94E7F2F8C6D>(__this);
	int32_t _returnValue;
	_returnValue = ValueTuple_3_CompareTo_m4A540B1ECF8A41095A4FE297B49AF343CA2D6B8C(_thisAdjusted, ___0_other, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_3_System_Collections_IStructuralComparable_CompareTo_m6B703B22B27216A3FED158633926DB304EEA94CC_gshared (ValueTuple_3_t35635C5723D86442D27F016747CEB94E7F2F8C6D* __this, RuntimeObject* ___0_other, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IComparer_tE7497C3BE3F68A5A2DCEBF0DAD7D13D738FE7BAD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	ValueTuple_3_t35635C5723D86442D27F016747CEB94E7F2F8C6D V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return 1;
	}

IL_0005:
	{
		RuntimeObject* L_1 = ___0_other;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_1, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1))))
		{
			goto IL_0037;
		}
	}
	{
		ValueTuple_3_t35635C5723D86442D27F016747CEB94E7F2F8C6D L_2 = (*(ValueTuple_3_t35635C5723D86442D27F016747CEB94E7F2F8C6D*)__this);
		ValueTuple_3_t35635C5723D86442D27F016747CEB94E7F2F8C6D L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1), &L_3);
		Type_t* L_5;
		L_5 = il2cpp_codegen_object_get_type(L_4);
		String_t* L_6;
		L_6 = VirtualFuncInvoker0< String_t* >::Invoke(3, L_5);
		String_t* L_7;
		L_7 = SR_Format_m9E8DC9AEFDC34AC67473EFAEAB78C5066C1A0D09(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1459AD7D3E0F8808A85528961118835E18AD1F96)), L_6, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_8 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_8, L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, method);
	}

IL_0037:
	{
		RuntimeObject* L_9 = ___0_other;
		V_0 = ((*(ValueTuple_3_t35635C5723D86442D27F016747CEB94E7F2F8C6D*)UnBox(L_9, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1))));
		RuntimeObject* L_10 = ___1_comparer;
		Il2CppSharedGenericObject* L_11 = __this->___Item1;
		ValueTuple_3_t35635C5723D86442D27F016747CEB94E7F2F8C6D L_12 = V_0;
		Il2CppSharedGenericObject* L_13 = L_12.___Item1;
		int32_t L_14;
		L_14 = InterfaceFuncInvoker2< int32_t, RuntimeObject*, RuntimeObject* >::Invoke(0, IComparer_tE7497C3BE3F68A5A2DCEBF0DAD7D13D738FE7BAD_il2cpp_TypeInfo_var, L_10, (RuntimeObject*)L_11, (RuntimeObject*)L_13);
		V_1 = L_14;
		int32_t L_15 = V_1;
		if (!L_15)
		{
			goto IL_0060;
		}
	}
	{
		int32_t L_16 = V_1;
		return L_16;
	}

IL_0060:
	{
		RuntimeObject* L_17 = ___1_comparer;
		Il2CppSharedGenericObject* L_18 = __this->___Item2;
		ValueTuple_3_t35635C5723D86442D27F016747CEB94E7F2F8C6D L_19 = V_0;
		Il2CppSharedGenericObject* L_20 = L_19.___Item2;
		int32_t L_21;
		L_21 = InterfaceFuncInvoker2< int32_t, RuntimeObject*, RuntimeObject* >::Invoke(0, IComparer_tE7497C3BE3F68A5A2DCEBF0DAD7D13D738FE7BAD_il2cpp_TypeInfo_var, L_17, (RuntimeObject*)L_18, (RuntimeObject*)L_20);
		V_1 = L_21;
		int32_t L_22 = V_1;
		if (!L_22)
		{
			goto IL_0082;
		}
	}
	{
		int32_t L_23 = V_1;
		return L_23;
	}

IL_0082:
	{
		RuntimeObject* L_24 = ___1_comparer;
		int32_t L_25 = __this->___Item3;
		int32_t L_26 = L_25;
		RuntimeObject* L_27 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5), &L_26);
		ValueTuple_3_t35635C5723D86442D27F016747CEB94E7F2F8C6D L_28 = V_0;
		int32_t L_29 = L_28.___Item3;
		int32_t L_30 = L_29;
		RuntimeObject* L_31 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5), &L_30);
		int32_t L_32;
		L_32 = InterfaceFuncInvoker2< int32_t, RuntimeObject*, RuntimeObject* >::Invoke(0, IComparer_tE7497C3BE3F68A5A2DCEBF0DAD7D13D738FE7BAD_il2cpp_TypeInfo_var, L_24, L_27, L_31);
		return L_32;
	}
}
IL2CPP_EXTERN_C  int32_t ValueTuple_3_System_Collections_IStructuralComparable_CompareTo_m6B703B22B27216A3FED158633926DB304EEA94CC_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_other, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	ValueTuple_3_t35635C5723D86442D27F016747CEB94E7F2F8C6D* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ValueTuple_3_t35635C5723D86442D27F016747CEB94E7F2F8C6D>(__this);
	int32_t _returnValue;
	_returnValue = ValueTuple_3_System_Collections_IStructuralComparable_CompareTo_m6B703B22B27216A3FED158633926DB304EEA94CC(_thisAdjusted, ___0_other, ___1_comparer, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_3_GetHashCode_m00DE042357BA8018B65CBD06633470B91C8137F5_gshared (ValueTuple_3_t35635C5723D86442D27F016747CEB94E7F2F8C6D* __this, const RuntimeMethod* method) 
{
	Il2CppSharedGenericObject* V_0 = NULL;
	Il2CppSharedGenericObject* V_1 = NULL;
	int32_t V_2 = 0;
	Il2CppSharedGenericObject** G_B3_0 = NULL;
	Il2CppSharedGenericObject** G_B1_0 = NULL;
	Il2CppSharedGenericObject** G_B2_0 = NULL;
	int32_t G_B4_0 = 0;
	Il2CppSharedGenericObject** G_B7_0 = NULL;
	int32_t G_B7_1 = 0;
	Il2CppSharedGenericObject** G_B5_0 = NULL;
	int32_t G_B5_1 = 0;
	Il2CppSharedGenericObject** G_B6_0 = NULL;
	int32_t G_B6_1 = 0;
	int32_t G_B8_0 = 0;
	int32_t G_B8_1 = 0;
	int32_t* G_B11_0 = NULL;
	int32_t G_B11_1 = 0;
	int32_t G_B11_2 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B12_1 = 0;
	int32_t G_B12_2 = 0;
	{
		Il2CppSharedGenericObject** L_0 = (Il2CppSharedGenericObject**)(&__this->___Item1);
		il2cpp_codegen_initobj((&V_0), sizeof(Il2CppSharedGenericObject*));
		Il2CppSharedGenericObject* L_1 = V_0;
		if (L_1)
		{
			G_B3_0 = L_0;
			goto IL_002a;
		}
		G_B1_0 = L_0;
	}
	{
		Il2CppSharedGenericObject* L_2 = (*(Il2CppSharedGenericObject**)G_B1_0);
		V_0 = L_2;
		Il2CppSharedGenericObject* L_3 = V_0;
		if (L_3)
		{
			G_B3_0 = (&V_0);
			goto IL_002a;
		}
		G_B2_0 = (&V_0);
	}
	{
		G_B4_0 = 0;
		goto IL_0035;
	}

IL_002a:
	{
		int32_t L_4;
		L_4 = VirtualFuncInvoker0< int32_t >::Invoke(2, (RuntimeObject*)(*G_B3_0));
		G_B4_0 = L_4;
	}

IL_0035:
	{
		Il2CppSharedGenericObject** L_5 = (Il2CppSharedGenericObject**)(&__this->___Item2);
		il2cpp_codegen_initobj((&V_1), sizeof(Il2CppSharedGenericObject*));
		Il2CppSharedGenericObject* L_6 = V_1;
		if (L_6)
		{
			G_B7_0 = L_5;
			G_B7_1 = G_B4_0;
			goto IL_005f;
		}
		G_B5_0 = L_5;
		G_B5_1 = G_B4_0;
	}
	{
		Il2CppSharedGenericObject* L_7 = (*(Il2CppSharedGenericObject**)G_B5_0);
		V_1 = L_7;
		Il2CppSharedGenericObject* L_8 = V_1;
		if (L_8)
		{
			G_B7_0 = (&V_1);
			G_B7_1 = G_B5_1;
			goto IL_005f;
		}
		G_B6_0 = (&V_1);
		G_B6_1 = G_B5_1;
	}
	{
		G_B8_0 = 0;
		G_B8_1 = G_B6_1;
		goto IL_006a;
	}

IL_005f:
	{
		int32_t L_9;
		L_9 = VirtualFuncInvoker0< int32_t >::Invoke(2, (RuntimeObject*)(*G_B7_0));
		G_B8_0 = L_9;
		G_B8_1 = G_B7_1;
	}

IL_006a:
	{
		int32_t* L_10 = (int32_t*)(&__this->___Item3);
		il2cpp_codegen_initobj((&V_2), sizeof(int32_t));
		G_B11_0 = L_10;
		G_B11_1 = G_B8_0;
		G_B11_2 = G_B8_1;
		goto IL_0094;
	}

IL_0094:
	{
		int32_t L_12;
		L_12 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295(G_B11_0, NULL);
		G_B12_0 = L_12;
		G_B12_1 = G_B11_1;
		G_B12_2 = G_B11_2;
	}

IL_009f:
	{
		int32_t L_13;
		L_13 = ValueTuple_CombineHashCodes_mA282AB8367E72AAC2CD03794350EEDF885DBC3D9(G_B12_2, G_B12_1, G_B12_0, NULL);
		return L_13;
	}
}
IL2CPP_EXTERN_C  int32_t ValueTuple_3_GetHashCode_m00DE042357BA8018B65CBD06633470B91C8137F5_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ValueTuple_3_t35635C5723D86442D27F016747CEB94E7F2F8C6D* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ValueTuple_3_t35635C5723D86442D27F016747CEB94E7F2F8C6D>(__this);
	int32_t _returnValue;
	_returnValue = ValueTuple_3_GetHashCode_m00DE042357BA8018B65CBD06633470B91C8137F5(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_3_System_Collections_IStructuralEquatable_GetHashCode_m4CC9D36AA352FE059FF7E00D3FED463C81F1EDC8_gshared (ValueTuple_3_t35635C5723D86442D27F016747CEB94E7F2F8C6D* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	{
		RuntimeObject* L_0 = ___0_comparer;
		int32_t L_1;
		L_1 = ValueTuple_3_GetHashCodeCore_m6CEB198B1D407B493CDD02FC861A3C0BD4659CB3(__this, L_0, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 18));
		return L_1;
	}
}
IL2CPP_EXTERN_C  int32_t ValueTuple_3_System_Collections_IStructuralEquatable_GetHashCode_m4CC9D36AA352FE059FF7E00D3FED463C81F1EDC8_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method)
{
	ValueTuple_3_t35635C5723D86442D27F016747CEB94E7F2F8C6D* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ValueTuple_3_t35635C5723D86442D27F016747CEB94E7F2F8C6D>(__this);
	int32_t _returnValue;
	_returnValue = ValueTuple_3_System_Collections_IStructuralEquatable_GetHashCode_m4CC9D36AA352FE059FF7E00D3FED463C81F1EDC8(_thisAdjusted, ___0_comparer, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_3_GetHashCodeCore_m6CEB198B1D407B493CDD02FC861A3C0BD4659CB3_gshared (ValueTuple_3_t35635C5723D86442D27F016747CEB94E7F2F8C6D* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	{
		RuntimeObject* L_0 = ___0_comparer;
		Il2CppSharedGenericObject* L_1 = __this->___Item1;
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_0, (RuntimeObject*)L_1);
		RuntimeObject* L_3 = ___0_comparer;
		Il2CppSharedGenericObject* L_4 = __this->___Item2;
		int32_t L_5;
		L_5 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_3, (RuntimeObject*)L_4);
		RuntimeObject* L_6 = ___0_comparer;
		int32_t L_7 = __this->___Item3;
		int32_t L_8 = L_7;
		RuntimeObject* L_9 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5), &L_8);
		int32_t L_10;
		L_10 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_6, L_9);
		int32_t L_11;
		L_11 = ValueTuple_CombineHashCodes_mA282AB8367E72AAC2CD03794350EEDF885DBC3D9(L_2, L_5, L_10, NULL);
		return L_11;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ValueTuple_3_ToString_mE7CCB72FC3C1ECA211113B37F5DE55C2B506E1BF_gshared (ValueTuple_3_t35635C5723D86442D27F016747CEB94E7F2F8C6D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppSharedGenericObject* V_0 = NULL;
	Il2CppSharedGenericObject* V_1 = NULL;
	int32_t V_2 = 0;
	Il2CppSharedGenericObject** G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B3_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B3_3 = NULL;
	Il2CppSharedGenericObject** G_B1_0 = NULL;
	int32_t G_B1_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B1_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B1_3 = NULL;
	Il2CppSharedGenericObject** G_B2_0 = NULL;
	int32_t G_B2_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B2_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B2_3 = NULL;
	String_t* G_B4_0 = NULL;
	int32_t G_B4_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B4_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B4_3 = NULL;
	Il2CppSharedGenericObject** G_B7_0 = NULL;
	int32_t G_B7_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B7_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B7_3 = NULL;
	Il2CppSharedGenericObject** G_B5_0 = NULL;
	int32_t G_B5_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B5_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B5_3 = NULL;
	Il2CppSharedGenericObject** G_B6_0 = NULL;
	int32_t G_B6_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B6_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B6_3 = NULL;
	String_t* G_B8_0 = NULL;
	int32_t G_B8_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B8_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B8_3 = NULL;
	int32_t* G_B11_0 = NULL;
	int32_t G_B11_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B11_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B11_3 = NULL;
	String_t* G_B12_0 = NULL;
	int32_t G_B12_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B12_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B12_3 = NULL;
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)7);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = L_0;
		(L_1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = L_1;
		Il2CppSharedGenericObject** L_3 = (Il2CppSharedGenericObject**)(&__this->___Item1);
		il2cpp_codegen_initobj((&V_0), sizeof(Il2CppSharedGenericObject*));
		Il2CppSharedGenericObject* L_4 = V_0;
		if (L_4)
		{
			G_B3_0 = L_3;
			G_B3_1 = 1;
			G_B3_2 = L_2;
			G_B3_3 = L_2;
			goto IL_003a;
		}
		G_B1_0 = L_3;
		G_B1_1 = 1;
		G_B1_2 = L_2;
		G_B1_3 = L_2;
	}
	{
		Il2CppSharedGenericObject* L_5 = (*(Il2CppSharedGenericObject**)G_B1_0);
		V_0 = L_5;
		Il2CppSharedGenericObject* L_6 = V_0;
		if (L_6)
		{
			G_B3_0 = (&V_0);
			G_B3_1 = G_B1_1;
			G_B3_2 = G_B1_2;
			G_B3_3 = G_B1_3;
			goto IL_003a;
		}
		G_B2_0 = (&V_0);
		G_B2_1 = G_B1_1;
		G_B2_2 = G_B1_2;
		G_B2_3 = G_B1_3;
	}
	{
		G_B4_0 = ((String_t*)(NULL));
		G_B4_1 = G_B2_1;
		G_B4_2 = G_B2_2;
		G_B4_3 = G_B2_3;
		goto IL_0045;
	}

IL_003a:
	{
		String_t* L_7;
		L_7 = VirtualFuncInvoker0< String_t* >::Invoke(3, (RuntimeObject*)(*G_B3_0));
		G_B4_0 = L_7;
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
		G_B4_3 = G_B3_3;
	}

IL_0045:
	{
		(G_B4_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(G_B4_1), (String_t*)G_B4_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_8 = G_B4_3;
		(L_8)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_9 = L_8;
		Il2CppSharedGenericObject** L_10 = (Il2CppSharedGenericObject**)(&__this->___Item2);
		il2cpp_codegen_initobj((&V_1), sizeof(Il2CppSharedGenericObject*));
		Il2CppSharedGenericObject* L_11 = V_1;
		if (L_11)
		{
			G_B7_0 = L_10;
			G_B7_1 = 3;
			G_B7_2 = L_9;
			G_B7_3 = L_9;
			goto IL_007a;
		}
		G_B5_0 = L_10;
		G_B5_1 = 3;
		G_B5_2 = L_9;
		G_B5_3 = L_9;
	}
	{
		Il2CppSharedGenericObject* L_12 = (*(Il2CppSharedGenericObject**)G_B5_0);
		V_1 = L_12;
		Il2CppSharedGenericObject* L_13 = V_1;
		if (L_13)
		{
			G_B7_0 = (&V_1);
			G_B7_1 = G_B5_1;
			G_B7_2 = G_B5_2;
			G_B7_3 = G_B5_3;
			goto IL_007a;
		}
		G_B6_0 = (&V_1);
		G_B6_1 = G_B5_1;
		G_B6_2 = G_B5_2;
		G_B6_3 = G_B5_3;
	}
	{
		G_B8_0 = ((String_t*)(NULL));
		G_B8_1 = G_B6_1;
		G_B8_2 = G_B6_2;
		G_B8_3 = G_B6_3;
		goto IL_0085;
	}

IL_007a:
	{
		String_t* L_14;
		L_14 = VirtualFuncInvoker0< String_t* >::Invoke(3, (RuntimeObject*)(*G_B7_0));
		G_B8_0 = L_14;
		G_B8_1 = G_B7_1;
		G_B8_2 = G_B7_2;
		G_B8_3 = G_B7_3;
	}

IL_0085:
	{
		(G_B8_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(G_B8_1), (String_t*)G_B8_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_15 = G_B8_3;
		(L_15)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_16 = L_15;
		int32_t* L_17 = (int32_t*)(&__this->___Item3);
		il2cpp_codegen_initobj((&V_2), sizeof(int32_t));
		G_B11_0 = L_17;
		G_B11_1 = 5;
		G_B11_2 = L_16;
		G_B11_3 = L_16;
		goto IL_00ba;
	}

IL_00ba:
	{
		String_t* L_19;
		L_19 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(G_B11_0, NULL);
		G_B12_0 = L_19;
		G_B12_1 = G_B11_1;
		G_B12_2 = G_B11_2;
		G_B12_3 = G_B11_3;
	}

IL_00c5:
	{
		(G_B12_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(G_B12_1), (String_t*)G_B12_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_20 = G_B12_3;
		(L_20)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(6), (String_t*)_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		String_t* L_21;
		L_21 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_20, NULL);
		return L_21;
	}
}
IL2CPP_EXTERN_C  String_t* ValueTuple_3_ToString_mE7CCB72FC3C1ECA211113B37F5DE55C2B506E1BF_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ValueTuple_3_t35635C5723D86442D27F016747CEB94E7F2F8C6D* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ValueTuple_3_t35635C5723D86442D27F016747CEB94E7F2F8C6D>(__this);
	String_t* _returnValue;
	_returnValue = ValueTuple_3_ToString_mE7CCB72FC3C1ECA211113B37F5DE55C2B506E1BF(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueTuple_3__ctor_mAB800E7134D8E52646FD55A8B2979AC908028759_fshared (ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98* __this, Il2CppFullySharedGenericAny ___0_item1, Il2CppFullySharedGenericAny ___1_item2, Il2CppFullySharedGenericAny ___2_item3, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_T1_tBC720C36AD805FA5DB312B4F4F6EA7FCD0B8CB60 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0));
	const uint32_t SizeOf_T2_tF18BC33782A28B818FF07972258CDAA30E5C8BAA = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3));
	const uint32_t SizeOf_T3_t0F612E67C437973C5E601367F19AA9245240E29A = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_T1_tBC720C36AD805FA5DB312B4F4F6EA7FCD0B8CB60);
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T2_tF18BC33782A28B818FF07972258CDAA30E5C8BAA);
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_T3_t0F612E67C437973C5E601367F19AA9245240E29A);
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)) ? ___0_item1 : &___0_item1), SizeOf_T1_tBC720C36AD805FA5DB312B4F4F6EA7FCD0B8CB60);
		il2cpp_codegen_write_field_data<true>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1),0), il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2), L_0, SizeOf_T1_tBC720C36AD805FA5DB312B4F4F6EA7FCD0B8CB60);
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)) ? ___1_item2 : &___1_item2), SizeOf_T2_tF18BC33782A28B818FF07972258CDAA30E5C8BAA);
		il2cpp_codegen_write_field_data<true>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1),1), il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4), L_1, SizeOf_T2_tF18BC33782A28B818FF07972258CDAA30E5C8BAA);
		il2cpp_codegen_memcpy(L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5)) ? ___2_item3 : &___2_item3), SizeOf_T3_t0F612E67C437973C5E601367F19AA9245240E29A);
		il2cpp_codegen_write_field_data<true>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1),2), il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6), L_2, SizeOf_T3_t0F612E67C437973C5E601367F19AA9245240E29A);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTuple_3_Equals_m31C947DE700D3842AA28795E512D50FE1E505820_fshared (ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	{
		RuntimeObject* L_0 = ___0_obj;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1))))
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_1 = ___0_obj;
		bool L_2;
		L_2 = InvokerFuncInvoker1< bool, ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98 >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7)), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7), __this, (((ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98)(ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98*)UnBox(L_1, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1)))));
		return L_2;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool ValueTuple_3_Equals_m31C947DE700D3842AA28795E512D50FE1E505820_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method)
{
	ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98>(__this);
	bool _returnValue;
	_returnValue = ValueTuple_3_Equals_m31C947DE700D3842AA28795E512D50FE1E505820(_thisAdjusted, ___0_obj, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTuple_3_Equals_m1716966B94A34CEFBA3FCB15F00A3DE34CF167B4_fshared (ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98* __this, ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98 ___0_other, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_T1_tBC720C36AD805FA5DB312B4F4F6EA7FCD0B8CB60 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0));
	const uint32_t SizeOf_ValueTuple_3_tDE4F3C5EBA1AA6F0C63495C2B0A7F47CA8B4DA6D = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
	const uint32_t SizeOf_T2_tF18BC33782A28B818FF07972258CDAA30E5C8BAA = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3));
	const uint32_t SizeOf_T3_t0F612E67C437973C5E601367F19AA9245240E29A = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T1_tBC720C36AD805FA5DB312B4F4F6EA7FCD0B8CB60);
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T1_tBC720C36AD805FA5DB312B4F4F6EA7FCD0B8CB60);
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_T2_tF18BC33782A28B818FF07972258CDAA30E5C8BAA);
	const Il2CppFullySharedGenericAny L_8 = alloca(SizeOf_T2_tF18BC33782A28B818FF07972258CDAA30E5C8BAA);
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_T3_t0F612E67C437973C5E601367F19AA9245240E29A);
	const Il2CppFullySharedGenericAny L_13 = alloca(SizeOf_T3_t0F612E67C437973C5E601367F19AA9245240E29A);
	const ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98 L_2 = alloca(SizeOf_ValueTuple_3_tDE4F3C5EBA1AA6F0C63495C2B0A7F47CA8B4DA6D);
	const ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98 L_7 = L_2;
	const ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98 L_12 = L_2;
	{
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_0;
		L_0 = ((  EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8)))(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8));
		il2cpp_codegen_memcpy(L_1, il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2)), SizeOf_T1_tBC720C36AD805FA5DB312B4F4F6EA7FCD0B8CB60);
		il2cpp_codegen_memcpy(L_2, ___0_other, SizeOf_ValueTuple_3_tDE4F3C5EBA1AA6F0C63495C2B0A7F47CA8B4DA6D);
		il2cpp_codegen_memcpy(L_3, il2cpp_codegen_get_field_data_pointer(L_2, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2)), SizeOf_T1_tBC720C36AD805FA5DB312B4F4F6EA7FCD0B8CB60);
		bool L_4;
		L_4 = VirtualFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(8, L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)) ? L_1: *(void**)L_1), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)) ? L_3: *(void**)L_3));
		if (!L_4)
		{
			goto IL_0047;
		}
	}
	{
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_5;
		L_5 = ((  EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 9)))(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 9));
		il2cpp_codegen_memcpy(L_6, il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4)), SizeOf_T2_tF18BC33782A28B818FF07972258CDAA30E5C8BAA);
		il2cpp_codegen_memcpy(L_7, ___0_other, SizeOf_ValueTuple_3_tDE4F3C5EBA1AA6F0C63495C2B0A7F47CA8B4DA6D);
		il2cpp_codegen_memcpy(L_8, il2cpp_codegen_get_field_data_pointer(L_7, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4)), SizeOf_T2_tF18BC33782A28B818FF07972258CDAA30E5C8BAA);
		bool L_9;
		L_9 = VirtualFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(8, L_5, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)) ? L_6: *(void**)L_6), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)) ? L_8: *(void**)L_8));
		if (!L_9)
		{
			goto IL_0047;
		}
	}
	{
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_10;
		L_10 = ((  EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 10)))(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 10));
		il2cpp_codegen_memcpy(L_11, il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6)), SizeOf_T3_t0F612E67C437973C5E601367F19AA9245240E29A);
		il2cpp_codegen_memcpy(L_12, ___0_other, SizeOf_ValueTuple_3_tDE4F3C5EBA1AA6F0C63495C2B0A7F47CA8B4DA6D);
		il2cpp_codegen_memcpy(L_13, il2cpp_codegen_get_field_data_pointer(L_12, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6)), SizeOf_T3_t0F612E67C437973C5E601367F19AA9245240E29A);
		bool L_14;
		L_14 = VirtualFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(8, L_10, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5)) ? L_11: *(void**)L_11), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5)) ? L_13: *(void**)L_13));
		return L_14;
	}

IL_0047:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool ValueTuple_3_Equals_m1716966B94A34CEFBA3FCB15F00A3DE34CF167B4_AdjustorThunk (RuntimeObject* __this, ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98 ___0_other, const RuntimeMethod* method)
{
	ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98>(__this);
	bool _returnValue;
	_returnValue = ValueTuple_3_Equals_m1716966B94A34CEFBA3FCB15F00A3DE34CF167B4(_thisAdjusted, ___0_other, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTuple_3_System_Collections_IStructuralEquatable_Equals_m3F5FEF37FD4F019408802635862595B7C9A633DB_fshared (ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98* __this, RuntimeObject* ___0_other, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_ValueTuple_3_tDE4F3C5EBA1AA6F0C63495C2B0A7F47CA8B4DA6D = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
	const uint32_t SizeOf_T1_tBC720C36AD805FA5DB312B4F4F6EA7FCD0B8CB60 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0));
	const uint32_t SizeOf_T2_tF18BC33782A28B818FF07972258CDAA30E5C8BAA = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3));
	const uint32_t SizeOf_T3_t0F612E67C437973C5E601367F19AA9245240E29A = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5));
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_T1_tBC720C36AD805FA5DB312B4F4F6EA7FCD0B8CB60);
	const Il2CppFullySharedGenericAny L_7 = alloca(SizeOf_T1_tBC720C36AD805FA5DB312B4F4F6EA7FCD0B8CB60);
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_T2_tF18BC33782A28B818FF07972258CDAA30E5C8BAA);
	const Il2CppFullySharedGenericAny L_14 = alloca(SizeOf_T2_tF18BC33782A28B818FF07972258CDAA30E5C8BAA);
	const Il2CppFullySharedGenericAny L_18 = alloca(SizeOf_T3_t0F612E67C437973C5E601367F19AA9245240E29A);
	const Il2CppFullySharedGenericAny L_21 = alloca(SizeOf_T3_t0F612E67C437973C5E601367F19AA9245240E29A);
	const ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98 L_6 = alloca(SizeOf_ValueTuple_3_tDE4F3C5EBA1AA6F0C63495C2B0A7F47CA8B4DA6D);
	const ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98 L_13 = L_6;
	const ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98 L_20 = L_6;
	ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98 V_0 = alloca(SizeOf_ValueTuple_3_tDE4F3C5EBA1AA6F0C63495C2B0A7F47CA8B4DA6D);
	memset(V_0, 0, SizeOf_ValueTuple_3_tDE4F3C5EBA1AA6F0C63495C2B0A7F47CA8B4DA6D);
	{
		RuntimeObject* L_0 = ___0_other;
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		RuntimeObject* L_1 = ___0_other;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_1, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1))))
		{
			goto IL_000d;
		}
	}

IL_000b:
	{
		return (bool)0;
	}

IL_000d:
	{
		RuntimeObject* L_2 = ___0_other;
		il2cpp_codegen_memcpy(V_0, (((ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98)(ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98*)UnBox(L_2, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1)))), SizeOf_ValueTuple_3_tDE4F3C5EBA1AA6F0C63495C2B0A7F47CA8B4DA6D);
		RuntimeObject* L_3 = ___1_comparer;
		il2cpp_codegen_memcpy(L_4, il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2)), SizeOf_T1_tBC720C36AD805FA5DB312B4F4F6EA7FCD0B8CB60);
		RuntimeObject* L_5 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0), L_4);
		il2cpp_codegen_memcpy(L_6, V_0, SizeOf_ValueTuple_3_tDE4F3C5EBA1AA6F0C63495C2B0A7F47CA8B4DA6D);
		il2cpp_codegen_memcpy(L_7, il2cpp_codegen_get_field_data_pointer(L_6, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2)), SizeOf_T1_tBC720C36AD805FA5DB312B4F4F6EA7FCD0B8CB60);
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0), L_7);
		bool L_9;
		L_9 = InterfaceFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(0, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_3, L_5, L_8);
		if (!L_9)
		{
			goto IL_006d;
		}
	}
	{
		RuntimeObject* L_10 = ___1_comparer;
		il2cpp_codegen_memcpy(L_11, il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4)), SizeOf_T2_tF18BC33782A28B818FF07972258CDAA30E5C8BAA);
		RuntimeObject* L_12 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3), L_11);
		il2cpp_codegen_memcpy(L_13, V_0, SizeOf_ValueTuple_3_tDE4F3C5EBA1AA6F0C63495C2B0A7F47CA8B4DA6D);
		il2cpp_codegen_memcpy(L_14, il2cpp_codegen_get_field_data_pointer(L_13, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4)), SizeOf_T2_tF18BC33782A28B818FF07972258CDAA30E5C8BAA);
		RuntimeObject* L_15 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3), L_14);
		bool L_16;
		L_16 = InterfaceFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(0, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_10, L_12, L_15);
		if (!L_16)
		{
			goto IL_006d;
		}
	}
	{
		RuntimeObject* L_17 = ___1_comparer;
		il2cpp_codegen_memcpy(L_18, il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6)), SizeOf_T3_t0F612E67C437973C5E601367F19AA9245240E29A);
		RuntimeObject* L_19 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5), L_18);
		il2cpp_codegen_memcpy(L_20, V_0, SizeOf_ValueTuple_3_tDE4F3C5EBA1AA6F0C63495C2B0A7F47CA8B4DA6D);
		il2cpp_codegen_memcpy(L_21, il2cpp_codegen_get_field_data_pointer(L_20, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6)), SizeOf_T3_t0F612E67C437973C5E601367F19AA9245240E29A);
		RuntimeObject* L_22 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5), L_21);
		bool L_23;
		L_23 = InterfaceFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(0, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_17, L_19, L_22);
		return L_23;
	}

IL_006d:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool ValueTuple_3_System_Collections_IStructuralEquatable_Equals_m3F5FEF37FD4F019408802635862595B7C9A633DB_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_other, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98>(__this);
	bool _returnValue;
	_returnValue = ValueTuple_3_System_Collections_IStructuralEquatable_Equals_m3F5FEF37FD4F019408802635862595B7C9A633DB(_thisAdjusted, ___0_other, ___1_comparer, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_3_System_IComparable_CompareTo_mFB7A9AF6B4FE4D8FAB3B464AC27C78B9B8CA8725_fshared (ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_ValueTuple_3_tDE4F3C5EBA1AA6F0C63495C2B0A7F47CA8B4DA6D = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
	const ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98 L_2 = alloca(SizeOf_ValueTuple_3_tDE4F3C5EBA1AA6F0C63495C2B0A7F47CA8B4DA6D);
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return 1;
	}

IL_0005:
	{
		RuntimeObject* L_1 = ___0_other;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_1, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1))))
		{
			goto IL_0037;
		}
	}
	{
		il2cpp_codegen_memcpy(L_2, __this, SizeOf_ValueTuple_3_tDE4F3C5EBA1AA6F0C63495C2B0A7F47CA8B4DA6D);
		RuntimeObject* L_3 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1), L_2);
		Type_t* L_4;
		L_4 = il2cpp_codegen_object_get_type(L_3);
		String_t* L_5;
		L_5 = VirtualFuncInvoker0< String_t* >::Invoke(3, L_4);
		String_t* L_6;
		L_6 = SR_Format_m9E8DC9AEFDC34AC67473EFAEAB78C5066C1A0D09(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1459AD7D3E0F8808A85528961118835E18AD1F96)), L_5, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_7 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_7, L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, method);
	}

IL_0037:
	{
		RuntimeObject* L_8 = ___0_other;
		int32_t L_9;
		L_9 = InvokerFuncInvoker1< int32_t, ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98 >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 11)), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 11), __this, (((ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98)(ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98*)UnBox(L_8, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1)))));
		return L_9;
	}
}
IL2CPP_EXTERN_C  int32_t ValueTuple_3_System_IComparable_CompareTo_mFB7A9AF6B4FE4D8FAB3B464AC27C78B9B8CA8725_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_other, const RuntimeMethod* method)
{
	ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98>(__this);
	int32_t _returnValue;
	_returnValue = ValueTuple_3_System_IComparable_CompareTo_mFB7A9AF6B4FE4D8FAB3B464AC27C78B9B8CA8725(_thisAdjusted, ___0_other, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_3_CompareTo_m4C3E08414A848EC10D70182B7471304542521377_fshared (ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98* __this, ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98 ___0_other, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_T1_tBC720C36AD805FA5DB312B4F4F6EA7FCD0B8CB60 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0));
	const uint32_t SizeOf_ValueTuple_3_tDE4F3C5EBA1AA6F0C63495C2B0A7F47CA8B4DA6D = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
	const uint32_t SizeOf_T2_tF18BC33782A28B818FF07972258CDAA30E5C8BAA = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3));
	const uint32_t SizeOf_T3_t0F612E67C437973C5E601367F19AA9245240E29A = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T1_tBC720C36AD805FA5DB312B4F4F6EA7FCD0B8CB60);
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T1_tBC720C36AD805FA5DB312B4F4F6EA7FCD0B8CB60);
	const Il2CppFullySharedGenericAny L_8 = alloca(SizeOf_T2_tF18BC33782A28B818FF07972258CDAA30E5C8BAA);
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_T2_tF18BC33782A28B818FF07972258CDAA30E5C8BAA);
	const Il2CppFullySharedGenericAny L_15 = alloca(SizeOf_T3_t0F612E67C437973C5E601367F19AA9245240E29A);
	const Il2CppFullySharedGenericAny L_17 = alloca(SizeOf_T3_t0F612E67C437973C5E601367F19AA9245240E29A);
	const ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98 L_2 = alloca(SizeOf_ValueTuple_3_tDE4F3C5EBA1AA6F0C63495C2B0A7F47CA8B4DA6D);
	const ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98 L_9 = L_2;
	const ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98 L_16 = L_2;
	int32_t V_0 = 0;
	{
		Comparer_1_tF59A960F33DD69C2CF0330F3FF6AD7828FF0F3FB* L_0;
		L_0 = ((  Comparer_1_tF59A960F33DD69C2CF0330F3FF6AD7828FF0F3FB* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 12)))(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 12));
		il2cpp_codegen_memcpy(L_1, il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2)), SizeOf_T1_tBC720C36AD805FA5DB312B4F4F6EA7FCD0B8CB60);
		il2cpp_codegen_memcpy(L_2, ___0_other, SizeOf_ValueTuple_3_tDE4F3C5EBA1AA6F0C63495C2B0A7F47CA8B4DA6D);
		il2cpp_codegen_memcpy(L_3, il2cpp_codegen_get_field_data_pointer(L_2, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2)), SizeOf_T1_tBC720C36AD805FA5DB312B4F4F6EA7FCD0B8CB60);
		int32_t L_4;
		L_4 = VirtualFuncInvoker2Invoker< int32_t, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(6, L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)) ? L_1: *(void**)L_1), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)) ? L_3: *(void**)L_3));
		V_0 = L_4;
		int32_t L_5 = V_0;
		if (!L_5)
		{
			goto IL_001c;
		}
	}
	{
		int32_t L_6 = V_0;
		return L_6;
	}

IL_001c:
	{
		Comparer_1_tF59A960F33DD69C2CF0330F3FF6AD7828FF0F3FB* L_7;
		L_7 = ((  Comparer_1_tF59A960F33DD69C2CF0330F3FF6AD7828FF0F3FB* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13));
		il2cpp_codegen_memcpy(L_8, il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4)), SizeOf_T2_tF18BC33782A28B818FF07972258CDAA30E5C8BAA);
		il2cpp_codegen_memcpy(L_9, ___0_other, SizeOf_ValueTuple_3_tDE4F3C5EBA1AA6F0C63495C2B0A7F47CA8B4DA6D);
		il2cpp_codegen_memcpy(L_10, il2cpp_codegen_get_field_data_pointer(L_9, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4)), SizeOf_T2_tF18BC33782A28B818FF07972258CDAA30E5C8BAA);
		int32_t L_11;
		L_11 = VirtualFuncInvoker2Invoker< int32_t, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(6, L_7, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)) ? L_8: *(void**)L_8), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)) ? L_10: *(void**)L_10));
		V_0 = L_11;
		int32_t L_12 = V_0;
		if (!L_12)
		{
			goto IL_0038;
		}
	}
	{
		int32_t L_13 = V_0;
		return L_13;
	}

IL_0038:
	{
		Comparer_1_tF59A960F33DD69C2CF0330F3FF6AD7828FF0F3FB* L_14;
		L_14 = ((  Comparer_1_tF59A960F33DD69C2CF0330F3FF6AD7828FF0F3FB* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 14)))(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 14));
		il2cpp_codegen_memcpy(L_15, il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6)), SizeOf_T3_t0F612E67C437973C5E601367F19AA9245240E29A);
		il2cpp_codegen_memcpy(L_16, ___0_other, SizeOf_ValueTuple_3_tDE4F3C5EBA1AA6F0C63495C2B0A7F47CA8B4DA6D);
		il2cpp_codegen_memcpy(L_17, il2cpp_codegen_get_field_data_pointer(L_16, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6)), SizeOf_T3_t0F612E67C437973C5E601367F19AA9245240E29A);
		int32_t L_18;
		L_18 = VirtualFuncInvoker2Invoker< int32_t, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(6, L_14, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5)) ? L_15: *(void**)L_15), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5)) ? L_17: *(void**)L_17));
		return L_18;
	}
}
IL2CPP_EXTERN_C  int32_t ValueTuple_3_CompareTo_m4C3E08414A848EC10D70182B7471304542521377_AdjustorThunk (RuntimeObject* __this, ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98 ___0_other, const RuntimeMethod* method)
{
	ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98>(__this);
	int32_t _returnValue;
	_returnValue = ValueTuple_3_CompareTo_m4C3E08414A848EC10D70182B7471304542521377(_thisAdjusted, ___0_other, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_3_System_Collections_IStructuralComparable_CompareTo_m0EAD982A014687A521C863B33102049D6042380B_fshared (ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98* __this, RuntimeObject* ___0_other, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IComparer_tE7497C3BE3F68A5A2DCEBF0DAD7D13D738FE7BAD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_ValueTuple_3_tDE4F3C5EBA1AA6F0C63495C2B0A7F47CA8B4DA6D = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
	const uint32_t SizeOf_T1_tBC720C36AD805FA5DB312B4F4F6EA7FCD0B8CB60 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0));
	const uint32_t SizeOf_T2_tF18BC33782A28B818FF07972258CDAA30E5C8BAA = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3));
	const uint32_t SizeOf_T3_t0F612E67C437973C5E601367F19AA9245240E29A = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5));
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_T1_tBC720C36AD805FA5DB312B4F4F6EA7FCD0B8CB60);
	const Il2CppFullySharedGenericAny L_13 = alloca(SizeOf_T1_tBC720C36AD805FA5DB312B4F4F6EA7FCD0B8CB60);
	const Il2CppFullySharedGenericAny L_19 = alloca(SizeOf_T2_tF18BC33782A28B818FF07972258CDAA30E5C8BAA);
	const Il2CppFullySharedGenericAny L_22 = alloca(SizeOf_T2_tF18BC33782A28B818FF07972258CDAA30E5C8BAA);
	const Il2CppFullySharedGenericAny L_28 = alloca(SizeOf_T3_t0F612E67C437973C5E601367F19AA9245240E29A);
	const Il2CppFullySharedGenericAny L_31 = alloca(SizeOf_T3_t0F612E67C437973C5E601367F19AA9245240E29A);
	const ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98 L_2 = alloca(SizeOf_ValueTuple_3_tDE4F3C5EBA1AA6F0C63495C2B0A7F47CA8B4DA6D);
	const ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98 L_12 = L_2;
	const ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98 L_21 = L_2;
	const ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98 L_30 = L_2;
	ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98 V_0 = alloca(SizeOf_ValueTuple_3_tDE4F3C5EBA1AA6F0C63495C2B0A7F47CA8B4DA6D);
	memset(V_0, 0, SizeOf_ValueTuple_3_tDE4F3C5EBA1AA6F0C63495C2B0A7F47CA8B4DA6D);
	int32_t V_1 = 0;
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return 1;
	}

IL_0005:
	{
		RuntimeObject* L_1 = ___0_other;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_1, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1))))
		{
			goto IL_0037;
		}
	}
	{
		il2cpp_codegen_memcpy(L_2, __this, SizeOf_ValueTuple_3_tDE4F3C5EBA1AA6F0C63495C2B0A7F47CA8B4DA6D);
		RuntimeObject* L_3 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1), L_2);
		Type_t* L_4;
		L_4 = il2cpp_codegen_object_get_type(L_3);
		String_t* L_5;
		L_5 = VirtualFuncInvoker0< String_t* >::Invoke(3, L_4);
		String_t* L_6;
		L_6 = SR_Format_m9E8DC9AEFDC34AC67473EFAEAB78C5066C1A0D09(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1459AD7D3E0F8808A85528961118835E18AD1F96)), L_5, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_7 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_7, L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, method);
	}

IL_0037:
	{
		RuntimeObject* L_8 = ___0_other;
		il2cpp_codegen_memcpy(V_0, (((ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98)(ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98*)UnBox(L_8, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1)))), SizeOf_ValueTuple_3_tDE4F3C5EBA1AA6F0C63495C2B0A7F47CA8B4DA6D);
		RuntimeObject* L_9 = ___1_comparer;
		il2cpp_codegen_memcpy(L_10, il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2)), SizeOf_T1_tBC720C36AD805FA5DB312B4F4F6EA7FCD0B8CB60);
		RuntimeObject* L_11 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0), L_10);
		il2cpp_codegen_memcpy(L_12, V_0, SizeOf_ValueTuple_3_tDE4F3C5EBA1AA6F0C63495C2B0A7F47CA8B4DA6D);
		il2cpp_codegen_memcpy(L_13, il2cpp_codegen_get_field_data_pointer(L_12, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2)), SizeOf_T1_tBC720C36AD805FA5DB312B4F4F6EA7FCD0B8CB60);
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0), L_13);
		int32_t L_15;
		L_15 = InterfaceFuncInvoker2< int32_t, RuntimeObject*, RuntimeObject* >::Invoke(0, IComparer_tE7497C3BE3F68A5A2DCEBF0DAD7D13D738FE7BAD_il2cpp_TypeInfo_var, L_9, L_11, L_14);
		V_1 = L_15;
		int32_t L_16 = V_1;
		if (!L_16)
		{
			goto IL_0060;
		}
	}
	{
		int32_t L_17 = V_1;
		return L_17;
	}

IL_0060:
	{
		RuntimeObject* L_18 = ___1_comparer;
		il2cpp_codegen_memcpy(L_19, il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4)), SizeOf_T2_tF18BC33782A28B818FF07972258CDAA30E5C8BAA);
		RuntimeObject* L_20 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3), L_19);
		il2cpp_codegen_memcpy(L_21, V_0, SizeOf_ValueTuple_3_tDE4F3C5EBA1AA6F0C63495C2B0A7F47CA8B4DA6D);
		il2cpp_codegen_memcpy(L_22, il2cpp_codegen_get_field_data_pointer(L_21, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4)), SizeOf_T2_tF18BC33782A28B818FF07972258CDAA30E5C8BAA);
		RuntimeObject* L_23 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3), L_22);
		int32_t L_24;
		L_24 = InterfaceFuncInvoker2< int32_t, RuntimeObject*, RuntimeObject* >::Invoke(0, IComparer_tE7497C3BE3F68A5A2DCEBF0DAD7D13D738FE7BAD_il2cpp_TypeInfo_var, L_18, L_20, L_23);
		V_1 = L_24;
		int32_t L_25 = V_1;
		if (!L_25)
		{
			goto IL_0082;
		}
	}
	{
		int32_t L_26 = V_1;
		return L_26;
	}

IL_0082:
	{
		RuntimeObject* L_27 = ___1_comparer;
		il2cpp_codegen_memcpy(L_28, il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6)), SizeOf_T3_t0F612E67C437973C5E601367F19AA9245240E29A);
		RuntimeObject* L_29 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5), L_28);
		il2cpp_codegen_memcpy(L_30, V_0, SizeOf_ValueTuple_3_tDE4F3C5EBA1AA6F0C63495C2B0A7F47CA8B4DA6D);
		il2cpp_codegen_memcpy(L_31, il2cpp_codegen_get_field_data_pointer(L_30, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6)), SizeOf_T3_t0F612E67C437973C5E601367F19AA9245240E29A);
		RuntimeObject* L_32 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5), L_31);
		int32_t L_33;
		L_33 = InterfaceFuncInvoker2< int32_t, RuntimeObject*, RuntimeObject* >::Invoke(0, IComparer_tE7497C3BE3F68A5A2DCEBF0DAD7D13D738FE7BAD_il2cpp_TypeInfo_var, L_27, L_29, L_32);
		return L_33;
	}
}
IL2CPP_EXTERN_C  int32_t ValueTuple_3_System_Collections_IStructuralComparable_CompareTo_m0EAD982A014687A521C863B33102049D6042380B_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_other, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98>(__this);
	int32_t _returnValue;
	_returnValue = ValueTuple_3_System_Collections_IStructuralComparable_CompareTo_m0EAD982A014687A521C863B33102049D6042380B(_thisAdjusted, ___0_other, ___1_comparer, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_3_GetHashCode_m895E8857672E5454D68082DD0A8752865D8E71FC_fshared (ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_T1_tBC720C36AD805FA5DB312B4F4F6EA7FCD0B8CB60 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0));
	const uint32_t SizeOf_T2_tF18BC33782A28B818FF07972258CDAA30E5C8BAA = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3));
	const uint32_t SizeOf_T3_t0F612E67C437973C5E601367F19AA9245240E29A = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5));
	void* L_5 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)));
	void* L_15 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)));
	void* L_25 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5)));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_T1_tBC720C36AD805FA5DB312B4F4F6EA7FCD0B8CB60);
	const Il2CppFullySharedGenericAny L_2 = L_0;
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T1_tBC720C36AD805FA5DB312B4F4F6EA7FCD0B8CB60);
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_T2_tF18BC33782A28B818FF07972258CDAA30E5C8BAA);
	const Il2CppFullySharedGenericAny L_12 = L_10;
	const Il2CppFullySharedGenericAny L_13 = alloca(SizeOf_T2_tF18BC33782A28B818FF07972258CDAA30E5C8BAA);
	const Il2CppFullySharedGenericAny L_20 = alloca(SizeOf_T3_t0F612E67C437973C5E601367F19AA9245240E29A);
	const Il2CppFullySharedGenericAny L_22 = L_20;
	const Il2CppFullySharedGenericAny L_23 = alloca(SizeOf_T3_t0F612E67C437973C5E601367F19AA9245240E29A);
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_T1_tBC720C36AD805FA5DB312B4F4F6EA7FCD0B8CB60);
	memset(V_0, 0, SizeOf_T1_tBC720C36AD805FA5DB312B4F4F6EA7FCD0B8CB60);
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_T2_tF18BC33782A28B818FF07972258CDAA30E5C8BAA);
	memset(V_1, 0, SizeOf_T2_tF18BC33782A28B818FF07972258CDAA30E5C8BAA);
	Il2CppFullySharedGenericAny V_2 = alloca(SizeOf_T3_t0F612E67C437973C5E601367F19AA9245240E29A);
	memset(V_2, 0, SizeOf_T3_t0F612E67C437973C5E601367F19AA9245240E29A);
	Il2CppFullySharedGenericAny* G_B3_0 = NULL;
	Il2CppFullySharedGenericAny* G_B1_0 = NULL;
	Il2CppFullySharedGenericAny G_B2_0 = alloca(SizeOf_T1_tBC720C36AD805FA5DB312B4F4F6EA7FCD0B8CB60);
	memset(G_B2_0, 0, SizeOf_T1_tBC720C36AD805FA5DB312B4F4F6EA7FCD0B8CB60);
	int32_t G_B4_0 = 0;
	Il2CppFullySharedGenericAny* G_B7_0 = NULL;
	int32_t G_B7_1 = 0;
	Il2CppFullySharedGenericAny* G_B5_0 = NULL;
	int32_t G_B5_1 = 0;
	Il2CppFullySharedGenericAny G_B6_0 = alloca(SizeOf_T2_tF18BC33782A28B818FF07972258CDAA30E5C8BAA);
	memset(G_B6_0, 0, SizeOf_T2_tF18BC33782A28B818FF07972258CDAA30E5C8BAA);
	int32_t G_B6_1 = 0;
	int32_t G_B8_0 = 0;
	int32_t G_B8_1 = 0;
	Il2CppFullySharedGenericAny* G_B11_0 = NULL;
	int32_t G_B11_1 = 0;
	int32_t G_B11_2 = 0;
	Il2CppFullySharedGenericAny* G_B9_0 = NULL;
	int32_t G_B9_1 = 0;
	int32_t G_B9_2 = 0;
	Il2CppFullySharedGenericAny G_B10_0 = alloca(SizeOf_T3_t0F612E67C437973C5E601367F19AA9245240E29A);
	memset(G_B10_0, 0, SizeOf_T3_t0F612E67C437973C5E601367F19AA9245240E29A);
	int32_t G_B10_1 = 0;
	int32_t G_B10_2 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B12_1 = 0;
	int32_t G_B12_2 = 0;
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_0, SizeOf_T1_tBC720C36AD805FA5DB312B4F4F6EA7FCD0B8CB60);
		il2cpp_codegen_memcpy(L_0, V_0, SizeOf_T1_tBC720C36AD805FA5DB312B4F4F6EA7FCD0B8CB60);
		bool L_1 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0), L_0);
		if (L_1)
		{
			G_B3_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2)))));
			goto IL_002a;
		}
		G_B1_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2)))));
	}
	{
		il2cpp_codegen_memcpy(L_2, G_B1_0, SizeOf_T1_tBC720C36AD805FA5DB312B4F4F6EA7FCD0B8CB60);
		il2cpp_codegen_memcpy(V_0, L_2, SizeOf_T1_tBC720C36AD805FA5DB312B4F4F6EA7FCD0B8CB60);
		il2cpp_codegen_memcpy(L_3, V_0, SizeOf_T1_tBC720C36AD805FA5DB312B4F4F6EA7FCD0B8CB60);
		bool L_4 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0), L_3);
		if (L_4)
		{
			G_B3_0 = ((Il2CppFullySharedGenericAny*)(Il2CppFullySharedGenericAny*)V_0);
			goto IL_002a;
		}
		il2cpp_codegen_memcpy(G_B2_0, (Il2CppFullySharedGenericAny*)V_0, SizeOf_T1_tBC720C36AD805FA5DB312B4F4F6EA7FCD0B8CB60);
	}
	{
		G_B4_0 = 0;
		goto IL_0035;
	}

IL_002a:
	{
		Il2CppConstrainedCallData L_6;
		Il2CppMethodPointer L_7 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 15), (void*)G_B3_0, &L_6, L_5);
		typedef int32_t ( *func_L_8)(void*,const RuntimeMethod*);
		int32_t L_9 = ((func_L_8)L_7)(L_6.thisPtr,L_6.method);
		G_B4_0 = L_9;
	}

IL_0035:
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_1, SizeOf_T2_tF18BC33782A28B818FF07972258CDAA30E5C8BAA);
		il2cpp_codegen_memcpy(L_10, V_1, SizeOf_T2_tF18BC33782A28B818FF07972258CDAA30E5C8BAA);
		bool L_11 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3), L_10);
		if (L_11)
		{
			G_B7_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4)))));
			G_B7_1 = G_B4_0;
			goto IL_005f;
		}
		G_B5_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4)))));
		G_B5_1 = G_B4_0;
	}
	{
		il2cpp_codegen_memcpy(L_12, G_B5_0, SizeOf_T2_tF18BC33782A28B818FF07972258CDAA30E5C8BAA);
		il2cpp_codegen_memcpy(V_1, L_12, SizeOf_T2_tF18BC33782A28B818FF07972258CDAA30E5C8BAA);
		il2cpp_codegen_memcpy(L_13, V_1, SizeOf_T2_tF18BC33782A28B818FF07972258CDAA30E5C8BAA);
		bool L_14 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3), L_13);
		if (L_14)
		{
			G_B7_0 = ((Il2CppFullySharedGenericAny*)(Il2CppFullySharedGenericAny*)V_1);
			G_B7_1 = G_B5_1;
			goto IL_005f;
		}
		il2cpp_codegen_memcpy(G_B6_0, (Il2CppFullySharedGenericAny*)V_1, SizeOf_T2_tF18BC33782A28B818FF07972258CDAA30E5C8BAA);
		G_B6_1 = G_B5_1;
	}
	{
		G_B8_0 = 0;
		G_B8_1 = G_B6_1;
		goto IL_006a;
	}

IL_005f:
	{
		Il2CppConstrainedCallData L_16;
		Il2CppMethodPointer L_17 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 16), (void*)G_B7_0, &L_16, L_15);
		typedef int32_t ( *func_L_18)(void*,const RuntimeMethod*);
		int32_t L_19 = ((func_L_18)L_17)(L_16.thisPtr,L_16.method);
		G_B8_0 = L_19;
		G_B8_1 = G_B7_1;
	}

IL_006a:
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_2, SizeOf_T3_t0F612E67C437973C5E601367F19AA9245240E29A);
		il2cpp_codegen_memcpy(L_20, V_2, SizeOf_T3_t0F612E67C437973C5E601367F19AA9245240E29A);
		bool L_21 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5), L_20);
		if (L_21)
		{
			G_B11_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6)))));
			G_B11_1 = G_B8_0;
			G_B11_2 = G_B8_1;
			goto IL_0094;
		}
		G_B9_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6)))));
		G_B9_1 = G_B8_0;
		G_B9_2 = G_B8_1;
	}
	{
		il2cpp_codegen_memcpy(L_22, G_B9_0, SizeOf_T3_t0F612E67C437973C5E601367F19AA9245240E29A);
		il2cpp_codegen_memcpy(V_2, L_22, SizeOf_T3_t0F612E67C437973C5E601367F19AA9245240E29A);
		il2cpp_codegen_memcpy(L_23, V_2, SizeOf_T3_t0F612E67C437973C5E601367F19AA9245240E29A);
		bool L_24 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5), L_23);
		if (L_24)
		{
			G_B11_0 = ((Il2CppFullySharedGenericAny*)(Il2CppFullySharedGenericAny*)V_2);
			G_B11_1 = G_B9_1;
			G_B11_2 = G_B9_2;
			goto IL_0094;
		}
		il2cpp_codegen_memcpy(G_B10_0, (Il2CppFullySharedGenericAny*)V_2, SizeOf_T3_t0F612E67C437973C5E601367F19AA9245240E29A);
		G_B10_1 = G_B9_1;
		G_B10_2 = G_B9_2;
	}
	{
		G_B12_0 = 0;
		G_B12_1 = G_B10_1;
		G_B12_2 = G_B10_2;
		goto IL_009f;
	}

IL_0094:
	{
		Il2CppConstrainedCallData L_26;
		Il2CppMethodPointer L_27 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 17), (void*)G_B11_0, &L_26, L_25);
		typedef int32_t ( *func_L_28)(void*,const RuntimeMethod*);
		int32_t L_29 = ((func_L_28)L_27)(L_26.thisPtr,L_26.method);
		G_B12_0 = L_29;
		G_B12_1 = G_B11_1;
		G_B12_2 = G_B11_2;
	}

IL_009f:
	{
		int32_t L_30;
		L_30 = ValueTuple_CombineHashCodes_mA282AB8367E72AAC2CD03794350EEDF885DBC3D9(G_B12_2, G_B12_1, G_B12_0, NULL);
		return L_30;
	}
}
IL2CPP_EXTERN_C  int32_t ValueTuple_3_GetHashCode_m895E8857672E5454D68082DD0A8752865D8E71FC_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98>(__this);
	int32_t _returnValue;
	_returnValue = ValueTuple_3_GetHashCode_m895E8857672E5454D68082DD0A8752865D8E71FC(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_3_System_Collections_IStructuralEquatable_GetHashCode_m23E4A5E0CD82CE6A0C844FBFAAC98A510810E98A_fshared (ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	{
		RuntimeObject* L_0 = ___0_comparer;
		int32_t L_1;
		L_1 = ((  int32_t (*) (ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 18)))(__this, L_0, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 18));
		return L_1;
	}
}
IL2CPP_EXTERN_C  int32_t ValueTuple_3_System_Collections_IStructuralEquatable_GetHashCode_m23E4A5E0CD82CE6A0C844FBFAAC98A510810E98A_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method)
{
	ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98>(__this);
	int32_t _returnValue;
	_returnValue = ValueTuple_3_System_Collections_IStructuralEquatable_GetHashCode_m23E4A5E0CD82CE6A0C844FBFAAC98A510810E98A(_thisAdjusted, ___0_comparer, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_3_GetHashCodeCore_m33A8FA4704589007BFD95252E15C89CFDC3D7642_fshared (ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_T1_tBC720C36AD805FA5DB312B4F4F6EA7FCD0B8CB60 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0));
	const uint32_t SizeOf_T2_tF18BC33782A28B818FF07972258CDAA30E5C8BAA = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3));
	const uint32_t SizeOf_T3_t0F612E67C437973C5E601367F19AA9245240E29A = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T1_tBC720C36AD805FA5DB312B4F4F6EA7FCD0B8CB60);
	const Il2CppFullySharedGenericAny L_5 = alloca(SizeOf_T2_tF18BC33782A28B818FF07972258CDAA30E5C8BAA);
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_T3_t0F612E67C437973C5E601367F19AA9245240E29A);
	{
		RuntimeObject* L_0 = ___0_comparer;
		il2cpp_codegen_memcpy(L_1, il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2)), SizeOf_T1_tBC720C36AD805FA5DB312B4F4F6EA7FCD0B8CB60);
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0), L_1);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_0, L_2);
		RuntimeObject* L_4 = ___0_comparer;
		il2cpp_codegen_memcpy(L_5, il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4)), SizeOf_T2_tF18BC33782A28B818FF07972258CDAA30E5C8BAA);
		RuntimeObject* L_6 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3), L_5);
		int32_t L_7;
		L_7 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_4, L_6);
		RuntimeObject* L_8 = ___0_comparer;
		il2cpp_codegen_memcpy(L_9, il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6)), SizeOf_T3_t0F612E67C437973C5E601367F19AA9245240E29A);
		RuntimeObject* L_10 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5), L_9);
		int32_t L_11;
		L_11 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_8, L_10);
		int32_t L_12;
		L_12 = ValueTuple_CombineHashCodes_mA282AB8367E72AAC2CD03794350EEDF885DBC3D9(L_3, L_7, L_11, NULL);
		return L_12;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ValueTuple_3_ToString_m9995C56C122AEC521C9BF4AD9C00A1498AA26744_fshared (ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_T1_tBC720C36AD805FA5DB312B4F4F6EA7FCD0B8CB60 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0));
	const uint32_t SizeOf_T2_tF18BC33782A28B818FF07972258CDAA30E5C8BAA = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3));
	const uint32_t SizeOf_T3_t0F612E67C437973C5E601367F19AA9245240E29A = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5));
	void* L_8 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)));
	void* L_20 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)));
	void* L_32 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5)));
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T1_tBC720C36AD805FA5DB312B4F4F6EA7FCD0B8CB60);
	const Il2CppFullySharedGenericAny L_5 = L_3;
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_T1_tBC720C36AD805FA5DB312B4F4F6EA7FCD0B8CB60);
	const Il2CppFullySharedGenericAny L_15 = alloca(SizeOf_T2_tF18BC33782A28B818FF07972258CDAA30E5C8BAA);
	const Il2CppFullySharedGenericAny L_17 = L_15;
	const Il2CppFullySharedGenericAny L_18 = alloca(SizeOf_T2_tF18BC33782A28B818FF07972258CDAA30E5C8BAA);
	const Il2CppFullySharedGenericAny L_27 = alloca(SizeOf_T3_t0F612E67C437973C5E601367F19AA9245240E29A);
	const Il2CppFullySharedGenericAny L_29 = L_27;
	const Il2CppFullySharedGenericAny L_30 = alloca(SizeOf_T3_t0F612E67C437973C5E601367F19AA9245240E29A);
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_T1_tBC720C36AD805FA5DB312B4F4F6EA7FCD0B8CB60);
	memset(V_0, 0, SizeOf_T1_tBC720C36AD805FA5DB312B4F4F6EA7FCD0B8CB60);
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_T2_tF18BC33782A28B818FF07972258CDAA30E5C8BAA);
	memset(V_1, 0, SizeOf_T2_tF18BC33782A28B818FF07972258CDAA30E5C8BAA);
	Il2CppFullySharedGenericAny V_2 = alloca(SizeOf_T3_t0F612E67C437973C5E601367F19AA9245240E29A);
	memset(V_2, 0, SizeOf_T3_t0F612E67C437973C5E601367F19AA9245240E29A);
	Il2CppFullySharedGenericAny* G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B3_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B3_3 = NULL;
	Il2CppFullySharedGenericAny* G_B1_0 = NULL;
	int32_t G_B1_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B1_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B1_3 = NULL;
	Il2CppFullySharedGenericAny G_B2_0 = alloca(SizeOf_T1_tBC720C36AD805FA5DB312B4F4F6EA7FCD0B8CB60);
	memset(G_B2_0, 0, SizeOf_T1_tBC720C36AD805FA5DB312B4F4F6EA7FCD0B8CB60);
	int32_t G_B2_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B2_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B2_3 = NULL;
	String_t* G_B4_0 = NULL;
	int32_t G_B4_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B4_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B4_3 = NULL;
	Il2CppFullySharedGenericAny* G_B7_0 = NULL;
	int32_t G_B7_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B7_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B7_3 = NULL;
	Il2CppFullySharedGenericAny* G_B5_0 = NULL;
	int32_t G_B5_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B5_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B5_3 = NULL;
	Il2CppFullySharedGenericAny G_B6_0 = alloca(SizeOf_T2_tF18BC33782A28B818FF07972258CDAA30E5C8BAA);
	memset(G_B6_0, 0, SizeOf_T2_tF18BC33782A28B818FF07972258CDAA30E5C8BAA);
	int32_t G_B6_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B6_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B6_3 = NULL;
	String_t* G_B8_0 = NULL;
	int32_t G_B8_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B8_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B8_3 = NULL;
	Il2CppFullySharedGenericAny* G_B11_0 = NULL;
	int32_t G_B11_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B11_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B11_3 = NULL;
	Il2CppFullySharedGenericAny* G_B9_0 = NULL;
	int32_t G_B9_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B9_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B9_3 = NULL;
	Il2CppFullySharedGenericAny G_B10_0 = alloca(SizeOf_T3_t0F612E67C437973C5E601367F19AA9245240E29A);
	memset(G_B10_0, 0, SizeOf_T3_t0F612E67C437973C5E601367F19AA9245240E29A);
	int32_t G_B10_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B10_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B10_3 = NULL;
	String_t* G_B12_0 = NULL;
	int32_t G_B12_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B12_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B12_3 = NULL;
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)7);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = L_0;
		(L_1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = L_1;
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_0, SizeOf_T1_tBC720C36AD805FA5DB312B4F4F6EA7FCD0B8CB60);
		il2cpp_codegen_memcpy(L_3, V_0, SizeOf_T1_tBC720C36AD805FA5DB312B4F4F6EA7FCD0B8CB60);
		bool L_4 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0), L_3);
		if (L_4)
		{
			G_B3_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2)))));
			G_B3_1 = 1;
			G_B3_2 = L_2;
			G_B3_3 = L_2;
			goto IL_003a;
		}
		G_B1_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2)))));
		G_B1_1 = 1;
		G_B1_2 = L_2;
		G_B1_3 = L_2;
	}
	{
		il2cpp_codegen_memcpy(L_5, G_B1_0, SizeOf_T1_tBC720C36AD805FA5DB312B4F4F6EA7FCD0B8CB60);
		il2cpp_codegen_memcpy(V_0, L_5, SizeOf_T1_tBC720C36AD805FA5DB312B4F4F6EA7FCD0B8CB60);
		il2cpp_codegen_memcpy(L_6, V_0, SizeOf_T1_tBC720C36AD805FA5DB312B4F4F6EA7FCD0B8CB60);
		bool L_7 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0), L_6);
		if (L_7)
		{
			G_B3_0 = ((Il2CppFullySharedGenericAny*)(Il2CppFullySharedGenericAny*)V_0);
			G_B3_1 = G_B1_1;
			G_B3_2 = G_B1_2;
			G_B3_3 = G_B1_3;
			goto IL_003a;
		}
		il2cpp_codegen_memcpy(G_B2_0, (Il2CppFullySharedGenericAny*)V_0, SizeOf_T1_tBC720C36AD805FA5DB312B4F4F6EA7FCD0B8CB60);
		G_B2_1 = G_B1_1;
		G_B2_2 = G_B1_2;
		G_B2_3 = G_B1_3;
	}
	{
		G_B4_0 = ((String_t*)(NULL));
		G_B4_1 = G_B2_1;
		G_B4_2 = G_B2_2;
		G_B4_3 = G_B2_3;
		goto IL_0045;
	}

IL_003a:
	{
		Il2CppConstrainedCallData L_9;
		Il2CppMethodPointer L_10 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 19), (void*)G_B3_0, &L_9, L_8);
		typedef String_t* ( *func_L_11)(void*,const RuntimeMethod*);
		String_t* L_12 = ((func_L_11)L_10)(L_9.thisPtr,L_9.method);
		G_B4_0 = L_12;
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
		G_B4_3 = G_B3_3;
	}

IL_0045:
	{
		(G_B4_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(G_B4_1), (String_t*)G_B4_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_13 = G_B4_3;
		(L_13)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_14 = L_13;
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_1, SizeOf_T2_tF18BC33782A28B818FF07972258CDAA30E5C8BAA);
		il2cpp_codegen_memcpy(L_15, V_1, SizeOf_T2_tF18BC33782A28B818FF07972258CDAA30E5C8BAA);
		bool L_16 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3), L_15);
		if (L_16)
		{
			G_B7_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4)))));
			G_B7_1 = 3;
			G_B7_2 = L_14;
			G_B7_3 = L_14;
			goto IL_007a;
		}
		G_B5_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4)))));
		G_B5_1 = 3;
		G_B5_2 = L_14;
		G_B5_3 = L_14;
	}
	{
		il2cpp_codegen_memcpy(L_17, G_B5_0, SizeOf_T2_tF18BC33782A28B818FF07972258CDAA30E5C8BAA);
		il2cpp_codegen_memcpy(V_1, L_17, SizeOf_T2_tF18BC33782A28B818FF07972258CDAA30E5C8BAA);
		il2cpp_codegen_memcpy(L_18, V_1, SizeOf_T2_tF18BC33782A28B818FF07972258CDAA30E5C8BAA);
		bool L_19 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3), L_18);
		if (L_19)
		{
			G_B7_0 = ((Il2CppFullySharedGenericAny*)(Il2CppFullySharedGenericAny*)V_1);
			G_B7_1 = G_B5_1;
			G_B7_2 = G_B5_2;
			G_B7_3 = G_B5_3;
			goto IL_007a;
		}
		il2cpp_codegen_memcpy(G_B6_0, (Il2CppFullySharedGenericAny*)V_1, SizeOf_T2_tF18BC33782A28B818FF07972258CDAA30E5C8BAA);
		G_B6_1 = G_B5_1;
		G_B6_2 = G_B5_2;
		G_B6_3 = G_B5_3;
	}
	{
		G_B8_0 = ((String_t*)(NULL));
		G_B8_1 = G_B6_1;
		G_B8_2 = G_B6_2;
		G_B8_3 = G_B6_3;
		goto IL_0085;
	}

IL_007a:
	{
		Il2CppConstrainedCallData L_21;
		Il2CppMethodPointer L_22 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 20), (void*)G_B7_0, &L_21, L_20);
		typedef String_t* ( *func_L_23)(void*,const RuntimeMethod*);
		String_t* L_24 = ((func_L_23)L_22)(L_21.thisPtr,L_21.method);
		G_B8_0 = L_24;
		G_B8_1 = G_B7_1;
		G_B8_2 = G_B7_2;
		G_B8_3 = G_B7_3;
	}

IL_0085:
	{
		(G_B8_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(G_B8_1), (String_t*)G_B8_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_25 = G_B8_3;
		(L_25)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_26 = L_25;
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_2, SizeOf_T3_t0F612E67C437973C5E601367F19AA9245240E29A);
		il2cpp_codegen_memcpy(L_27, V_2, SizeOf_T3_t0F612E67C437973C5E601367F19AA9245240E29A);
		bool L_28 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5), L_27);
		if (L_28)
		{
			G_B11_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6)))));
			G_B11_1 = 5;
			G_B11_2 = L_26;
			G_B11_3 = L_26;
			goto IL_00ba;
		}
		G_B9_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6)))));
		G_B9_1 = 5;
		G_B9_2 = L_26;
		G_B9_3 = L_26;
	}
	{
		il2cpp_codegen_memcpy(L_29, G_B9_0, SizeOf_T3_t0F612E67C437973C5E601367F19AA9245240E29A);
		il2cpp_codegen_memcpy(V_2, L_29, SizeOf_T3_t0F612E67C437973C5E601367F19AA9245240E29A);
		il2cpp_codegen_memcpy(L_30, V_2, SizeOf_T3_t0F612E67C437973C5E601367F19AA9245240E29A);
		bool L_31 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5), L_30);
		if (L_31)
		{
			G_B11_0 = ((Il2CppFullySharedGenericAny*)(Il2CppFullySharedGenericAny*)V_2);
			G_B11_1 = G_B9_1;
			G_B11_2 = G_B9_2;
			G_B11_3 = G_B9_3;
			goto IL_00ba;
		}
		il2cpp_codegen_memcpy(G_B10_0, (Il2CppFullySharedGenericAny*)V_2, SizeOf_T3_t0F612E67C437973C5E601367F19AA9245240E29A);
		G_B10_1 = G_B9_1;
		G_B10_2 = G_B9_2;
		G_B10_3 = G_B9_3;
	}
	{
		G_B12_0 = ((String_t*)(NULL));
		G_B12_1 = G_B10_1;
		G_B12_2 = G_B10_2;
		G_B12_3 = G_B10_3;
		goto IL_00c5;
	}

IL_00ba:
	{
		Il2CppConstrainedCallData L_33;
		Il2CppMethodPointer L_34 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 21), (void*)G_B11_0, &L_33, L_32);
		typedef String_t* ( *func_L_35)(void*,const RuntimeMethod*);
		String_t* L_36 = ((func_L_35)L_34)(L_33.thisPtr,L_33.method);
		G_B12_0 = L_36;
		G_B12_1 = G_B11_1;
		G_B12_2 = G_B11_2;
		G_B12_3 = G_B11_3;
	}

IL_00c5:
	{
		(G_B12_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(G_B12_1), (String_t*)G_B12_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_37 = G_B12_3;
		(L_37)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(6), (String_t*)_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		String_t* L_38;
		L_38 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_37, NULL);
		return L_38;
	}
}
IL2CPP_EXTERN_C  String_t* ValueTuple_3_ToString_m9995C56C122AEC521C9BF4AD9C00A1498AA26744_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98>(__this);
	String_t* _returnValue;
	_returnValue = ValueTuple_3_ToString_m9995C56C122AEC521C9BF4AD9C00A1498AA26744(_thisAdjusted, method);
	return _returnValue;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueTuple_5__ctor_mE956FB598740F15964DFC699BB03493A5889634B (ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57* __this, intptr_t ___0_item1, int32_t ___1_item2, intptr_t ___2_item3, int32_t ___3_item4, bool ___4_item5, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = ___0_item1;
		__this->___Item1 = L_0;
		int32_t L_1 = ___1_item2;
		__this->___Item2 = L_1;
		intptr_t L_2 = ___2_item3;
		__this->___Item3 = L_2;
		int32_t L_3 = ___3_item4;
		__this->___Item4 = L_3;
		bool L_4 = ___4_item5;
		__this->___Item5 = L_4;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTuple_5_Equals_mE53802FDDB1279A18C774D84FBEEC3E35639AE2C (ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	{
		RuntimeObject* L_0 = ___0_obj;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1))))
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_1 = ___0_obj;
		bool L_2;
		L_2 = ValueTuple_5_Equals_m99B8DE48C98555DC32AF56AA531B12454562A174(__this, ((*(ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57*)UnBox(L_1, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1)))), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 11));
		return L_2;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool ValueTuple_5_Equals_mE53802FDDB1279A18C774D84FBEEC3E35639AE2C_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method)
{
	ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57>(__this);
	bool _returnValue;
	_returnValue = ValueTuple_5_Equals_mE53802FDDB1279A18C774D84FBEEC3E35639AE2C(_thisAdjusted, ___0_obj, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTuple_5_Equals_m99B8DE48C98555DC32AF56AA531B12454562A174 (ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57* __this, ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57 ___0_other, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	{
		EqualityComparer_1_t13ACD867E946362B862A2AA1D58B7265A48EDC21* L_0;
		L_0 = EqualityComparer_1_get_Default_m68A9FC33718EE6F74A877D4A760989A962FBD0D2_inline(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 12));
		intptr_t L_1 = __this->___Item1;
		ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57 L_2 = ___0_other;
		intptr_t L_3 = L_2.___Item1;
		bool L_4;
		L_4 = VirtualFuncInvoker2< bool, intptr_t, intptr_t >::Invoke(8, L_0, L_1, L_3);
		if (!L_4)
		{
			goto IL_0077;
		}
	}
	{
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_5;
		L_5 = EqualityComparer_1_get_Default_mF70F6C11A35B420DFA4628EE316B087F2DCB280C_inline(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13));
		int32_t L_6 = __this->___Item2;
		ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57 L_7 = ___0_other;
		int32_t L_8 = L_7.___Item2;
		bool L_9;
		L_9 = VirtualFuncInvoker2< bool, int32_t, int32_t >::Invoke(8, L_5, L_6, L_8);
		if (!L_9)
		{
			goto IL_0077;
		}
	}
	{
		EqualityComparer_1_t13ACD867E946362B862A2AA1D58B7265A48EDC21* L_10;
		L_10 = EqualityComparer_1_get_Default_m68A9FC33718EE6F74A877D4A760989A962FBD0D2_inline(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 14));
		intptr_t L_11 = __this->___Item3;
		ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57 L_12 = ___0_other;
		intptr_t L_13 = L_12.___Item3;
		bool L_14;
		L_14 = VirtualFuncInvoker2< bool, intptr_t, intptr_t >::Invoke(8, L_10, L_11, L_13);
		if (!L_14)
		{
			goto IL_0077;
		}
	}
	{
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_15;
		L_15 = EqualityComparer_1_get_Default_mF70F6C11A35B420DFA4628EE316B087F2DCB280C_inline(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 15));
		int32_t L_16 = __this->___Item4;
		ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57 L_17 = ___0_other;
		int32_t L_18 = L_17.___Item4;
		bool L_19;
		L_19 = VirtualFuncInvoker2< bool, int32_t, int32_t >::Invoke(8, L_15, L_16, L_18);
		if (!L_19)
		{
			goto IL_0077;
		}
	}
	{
		EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4* L_20;
		L_20 = EqualityComparer_1_get_Default_mBB75BC0723DFD7850F43E72E34026DD070CF5932_inline(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 16));
		bool L_21 = __this->___Item5;
		ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57 L_22 = ___0_other;
		bool L_23 = L_22.___Item5;
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, bool, bool >::Invoke(8, L_20, L_21, L_23);
		return L_24;
	}

IL_0077:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool ValueTuple_5_Equals_m99B8DE48C98555DC32AF56AA531B12454562A174_AdjustorThunk (RuntimeObject* __this, ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57 ___0_other, const RuntimeMethod* method)
{
	ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57>(__this);
	bool _returnValue;
	_returnValue = ValueTuple_5_Equals_m99B8DE48C98555DC32AF56AA531B12454562A174(_thisAdjusted, ___0_other, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTuple_5_System_Collections_IStructuralEquatable_Equals_m5508A2CD6B0B69FA3C94F4F1A3ACD498DA6BE239 (ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57* __this, RuntimeObject* ___0_other, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_other;
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		RuntimeObject* L_1 = ___0_other;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_1, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1))))
		{
			goto IL_000d;
		}
	}

IL_000b:
	{
		return (bool)0;
	}

IL_000d:
	{
		RuntimeObject* L_2 = ___0_other;
		V_0 = ((*(ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57*)UnBox(L_2, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1))));
		RuntimeObject* L_3 = ___1_comparer;
		intptr_t L_4 = __this->___Item1;
		intptr_t L_5 = L_4;
		RuntimeObject* L_6 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0), &L_5);
		ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57 L_7 = V_0;
		intptr_t L_8 = L_7.___Item1;
		intptr_t L_9 = L_8;
		RuntimeObject* L_10 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0), &L_9);
		bool L_11;
		L_11 = InterfaceFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(0, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_3, L_6, L_10);
		if (!L_11)
		{
			goto IL_00a9;
		}
	}
	{
		RuntimeObject* L_12 = ___1_comparer;
		int32_t L_13 = __this->___Item2;
		int32_t L_14 = L_13;
		RuntimeObject* L_15 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3), &L_14);
		ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57 L_16 = V_0;
		int32_t L_17 = L_16.___Item2;
		int32_t L_18 = L_17;
		RuntimeObject* L_19 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3), &L_18);
		bool L_20;
		L_20 = InterfaceFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(0, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_12, L_15, L_19);
		if (!L_20)
		{
			goto IL_00a9;
		}
	}
	{
		RuntimeObject* L_21 = ___1_comparer;
		intptr_t L_22 = __this->___Item3;
		intptr_t L_23 = L_22;
		RuntimeObject* L_24 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5), &L_23);
		ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57 L_25 = V_0;
		intptr_t L_26 = L_25.___Item3;
		intptr_t L_27 = L_26;
		RuntimeObject* L_28 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5), &L_27);
		bool L_29;
		L_29 = InterfaceFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(0, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_21, L_24, L_28);
		if (!L_29)
		{
			goto IL_00a9;
		}
	}
	{
		RuntimeObject* L_30 = ___1_comparer;
		int32_t L_31 = __this->___Item4;
		int32_t L_32 = L_31;
		RuntimeObject* L_33 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7), &L_32);
		ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57 L_34 = V_0;
		int32_t L_35 = L_34.___Item4;
		int32_t L_36 = L_35;
		RuntimeObject* L_37 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7), &L_36);
		bool L_38;
		L_38 = InterfaceFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(0, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_30, L_33, L_37);
		if (!L_38)
		{
			goto IL_00a9;
		}
	}
	{
		RuntimeObject* L_39 = ___1_comparer;
		bool L_40 = __this->___Item5;
		bool L_41 = L_40;
		RuntimeObject* L_42 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 9), &L_41);
		ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57 L_43 = V_0;
		bool L_44 = L_43.___Item5;
		bool L_45 = L_44;
		RuntimeObject* L_46 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 9), &L_45);
		bool L_47;
		L_47 = InterfaceFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(0, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_39, L_42, L_46);
		return L_47;
	}

IL_00a9:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool ValueTuple_5_System_Collections_IStructuralEquatable_Equals_m5508A2CD6B0B69FA3C94F4F1A3ACD498DA6BE239_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_other, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57>(__this);
	bool _returnValue;
	_returnValue = ValueTuple_5_System_Collections_IStructuralEquatable_Equals_m5508A2CD6B0B69FA3C94F4F1A3ACD498DA6BE239(_thisAdjusted, ___0_other, ___1_comparer, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_5_System_IComparable_CompareTo_mB2EE0E3D57FD4B471C5C9D1D3551EB6BFEC93BB9 (ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return 1;
	}

IL_0005:
	{
		RuntimeObject* L_1 = ___0_other;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_1, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1))))
		{
			goto IL_0037;
		}
	}
	{
		ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57 L_2 = (*(ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57*)__this);
		ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57 L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1), &L_3);
		Type_t* L_5;
		L_5 = il2cpp_codegen_object_get_type(L_4);
		String_t* L_6;
		L_6 = VirtualFuncInvoker0< String_t* >::Invoke(3, L_5);
		String_t* L_7;
		L_7 = SR_Format_m9E8DC9AEFDC34AC67473EFAEAB78C5066C1A0D09(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1459AD7D3E0F8808A85528961118835E18AD1F96)), L_6, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_8 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_8, L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, method);
	}

IL_0037:
	{
		RuntimeObject* L_9 = ___0_other;
		int32_t L_10;
		L_10 = ValueTuple_5_CompareTo_m64E05B06486B0FD436482342853A245129952934(__this, ((*(ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57*)UnBox(L_9, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1)))), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 17));
		return L_10;
	}
}
IL2CPP_EXTERN_C  int32_t ValueTuple_5_System_IComparable_CompareTo_mB2EE0E3D57FD4B471C5C9D1D3551EB6BFEC93BB9_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_other, const RuntimeMethod* method)
{
	ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57>(__this);
	int32_t _returnValue;
	_returnValue = ValueTuple_5_System_IComparable_CompareTo_mB2EE0E3D57FD4B471C5C9D1D3551EB6BFEC93BB9(_thisAdjusted, ___0_other, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_5_CompareTo_m64E05B06486B0FD436482342853A245129952934 (ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57* __this, ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57 ___0_other, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	int32_t V_0 = 0;
	{
		Comparer_1_t91B2382B439BF4E331D0FFB1C6F386A825BCD68D* L_0;
		L_0 = Comparer_1_get_Default_m18BA95A661D7F8B2A998F3AF7ED5DC746AE7008A(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 18));
		intptr_t L_1 = __this->___Item1;
		ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57 L_2 = ___0_other;
		intptr_t L_3 = L_2.___Item1;
		int32_t L_4;
		L_4 = VirtualFuncInvoker2< int32_t, intptr_t, intptr_t >::Invoke(6, L_0, L_1, L_3);
		V_0 = L_4;
		int32_t L_5 = V_0;
		if (!L_5)
		{
			goto IL_001c;
		}
	}
	{
		int32_t L_6 = V_0;
		return L_6;
	}

IL_001c:
	{
		Comparer_1_t2FF14F26F4D678A8FA199B888FF61A2A9D1D2D80* L_7;
		L_7 = Comparer_1_get_Default_m55220E2A5C7845F68201F047E7DA0D708E8AE051(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 19));
		int32_t L_8 = __this->___Item2;
		ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57 L_9 = ___0_other;
		int32_t L_10 = L_9.___Item2;
		int32_t L_11;
		L_11 = VirtualFuncInvoker2< int32_t, int32_t, int32_t >::Invoke(6, L_7, L_8, L_10);
		V_0 = L_11;
		int32_t L_12 = V_0;
		if (!L_12)
		{
			goto IL_0038;
		}
	}
	{
		int32_t L_13 = V_0;
		return L_13;
	}

IL_0038:
	{
		Comparer_1_t91B2382B439BF4E331D0FFB1C6F386A825BCD68D* L_14;
		L_14 = Comparer_1_get_Default_m18BA95A661D7F8B2A998F3AF7ED5DC746AE7008A(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 20));
		intptr_t L_15 = __this->___Item3;
		ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57 L_16 = ___0_other;
		intptr_t L_17 = L_16.___Item3;
		int32_t L_18;
		L_18 = VirtualFuncInvoker2< int32_t, intptr_t, intptr_t >::Invoke(6, L_14, L_15, L_17);
		V_0 = L_18;
		int32_t L_19 = V_0;
		if (!L_19)
		{
			goto IL_0054;
		}
	}
	{
		int32_t L_20 = V_0;
		return L_20;
	}

IL_0054:
	{
		Comparer_1_t2FF14F26F4D678A8FA199B888FF61A2A9D1D2D80* L_21;
		L_21 = Comparer_1_get_Default_m55220E2A5C7845F68201F047E7DA0D708E8AE051(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 21));
		int32_t L_22 = __this->___Item4;
		ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57 L_23 = ___0_other;
		int32_t L_24 = L_23.___Item4;
		int32_t L_25;
		L_25 = VirtualFuncInvoker2< int32_t, int32_t, int32_t >::Invoke(6, L_21, L_22, L_24);
		V_0 = L_25;
		int32_t L_26 = V_0;
		if (!L_26)
		{
			goto IL_0070;
		}
	}
	{
		int32_t L_27 = V_0;
		return L_27;
	}

IL_0070:
	{
		Comparer_1_t075B18A0921F760D040E0D8BFE6637CE0E1587E4* L_28;
		L_28 = Comparer_1_get_Default_mCFD1A9E7464C248AC312558B9D4F772D8BE3B07C(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 22));
		bool L_29 = __this->___Item5;
		ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57 L_30 = ___0_other;
		bool L_31 = L_30.___Item5;
		int32_t L_32;
		L_32 = VirtualFuncInvoker2< int32_t, bool, bool >::Invoke(6, L_28, L_29, L_31);
		return L_32;
	}
}
IL2CPP_EXTERN_C  int32_t ValueTuple_5_CompareTo_m64E05B06486B0FD436482342853A245129952934_AdjustorThunk (RuntimeObject* __this, ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57 ___0_other, const RuntimeMethod* method)
{
	ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57>(__this);
	int32_t _returnValue;
	_returnValue = ValueTuple_5_CompareTo_m64E05B06486B0FD436482342853A245129952934(_thisAdjusted, ___0_other, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_5_System_Collections_IStructuralComparable_CompareTo_mB37ADC03FEA884033DC4DD8F46D58E28DCB2B154 (ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57* __this, RuntimeObject* ___0_other, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IComparer_tE7497C3BE3F68A5A2DCEBF0DAD7D13D738FE7BAD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return 1;
	}

IL_0005:
	{
		RuntimeObject* L_1 = ___0_other;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_1, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1))))
		{
			goto IL_0037;
		}
	}
	{
		ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57 L_2 = (*(ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57*)__this);
		ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57 L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1), &L_3);
		Type_t* L_5;
		L_5 = il2cpp_codegen_object_get_type(L_4);
		String_t* L_6;
		L_6 = VirtualFuncInvoker0< String_t* >::Invoke(3, L_5);
		String_t* L_7;
		L_7 = SR_Format_m9E8DC9AEFDC34AC67473EFAEAB78C5066C1A0D09(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1459AD7D3E0F8808A85528961118835E18AD1F96)), L_6, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_8 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_8, L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, method);
	}

IL_0037:
	{
		RuntimeObject* L_9 = ___0_other;
		V_0 = ((*(ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57*)UnBox(L_9, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1))));
		RuntimeObject* L_10 = ___1_comparer;
		intptr_t L_11 = __this->___Item1;
		intptr_t L_12 = L_11;
		RuntimeObject* L_13 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0), &L_12);
		ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57 L_14 = V_0;
		intptr_t L_15 = L_14.___Item1;
		intptr_t L_16 = L_15;
		RuntimeObject* L_17 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0), &L_16);
		int32_t L_18;
		L_18 = InterfaceFuncInvoker2< int32_t, RuntimeObject*, RuntimeObject* >::Invoke(0, IComparer_tE7497C3BE3F68A5A2DCEBF0DAD7D13D738FE7BAD_il2cpp_TypeInfo_var, L_10, L_13, L_17);
		V_1 = L_18;
		int32_t L_19 = V_1;
		if (!L_19)
		{
			goto IL_0060;
		}
	}
	{
		int32_t L_20 = V_1;
		return L_20;
	}

IL_0060:
	{
		RuntimeObject* L_21 = ___1_comparer;
		int32_t L_22 = __this->___Item2;
		int32_t L_23 = L_22;
		RuntimeObject* L_24 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3), &L_23);
		ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57 L_25 = V_0;
		int32_t L_26 = L_25.___Item2;
		int32_t L_27 = L_26;
		RuntimeObject* L_28 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3), &L_27);
		int32_t L_29;
		L_29 = InterfaceFuncInvoker2< int32_t, RuntimeObject*, RuntimeObject* >::Invoke(0, IComparer_tE7497C3BE3F68A5A2DCEBF0DAD7D13D738FE7BAD_il2cpp_TypeInfo_var, L_21, L_24, L_28);
		V_1 = L_29;
		int32_t L_30 = V_1;
		if (!L_30)
		{
			goto IL_0082;
		}
	}
	{
		int32_t L_31 = V_1;
		return L_31;
	}

IL_0082:
	{
		RuntimeObject* L_32 = ___1_comparer;
		intptr_t L_33 = __this->___Item3;
		intptr_t L_34 = L_33;
		RuntimeObject* L_35 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5), &L_34);
		ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57 L_36 = V_0;
		intptr_t L_37 = L_36.___Item3;
		intptr_t L_38 = L_37;
		RuntimeObject* L_39 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5), &L_38);
		int32_t L_40;
		L_40 = InterfaceFuncInvoker2< int32_t, RuntimeObject*, RuntimeObject* >::Invoke(0, IComparer_tE7497C3BE3F68A5A2DCEBF0DAD7D13D738FE7BAD_il2cpp_TypeInfo_var, L_32, L_35, L_39);
		V_1 = L_40;
		int32_t L_41 = V_1;
		if (!L_41)
		{
			goto IL_00a4;
		}
	}
	{
		int32_t L_42 = V_1;
		return L_42;
	}

IL_00a4:
	{
		RuntimeObject* L_43 = ___1_comparer;
		int32_t L_44 = __this->___Item4;
		int32_t L_45 = L_44;
		RuntimeObject* L_46 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7), &L_45);
		ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57 L_47 = V_0;
		int32_t L_48 = L_47.___Item4;
		int32_t L_49 = L_48;
		RuntimeObject* L_50 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7), &L_49);
		int32_t L_51;
		L_51 = InterfaceFuncInvoker2< int32_t, RuntimeObject*, RuntimeObject* >::Invoke(0, IComparer_tE7497C3BE3F68A5A2DCEBF0DAD7D13D738FE7BAD_il2cpp_TypeInfo_var, L_43, L_46, L_50);
		V_1 = L_51;
		int32_t L_52 = V_1;
		if (!L_52)
		{
			goto IL_00c6;
		}
	}
	{
		int32_t L_53 = V_1;
		return L_53;
	}

IL_00c6:
	{
		RuntimeObject* L_54 = ___1_comparer;
		bool L_55 = __this->___Item5;
		bool L_56 = L_55;
		RuntimeObject* L_57 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 9), &L_56);
		ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57 L_58 = V_0;
		bool L_59 = L_58.___Item5;
		bool L_60 = L_59;
		RuntimeObject* L_61 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 9), &L_60);
		int32_t L_62;
		L_62 = InterfaceFuncInvoker2< int32_t, RuntimeObject*, RuntimeObject* >::Invoke(0, IComparer_tE7497C3BE3F68A5A2DCEBF0DAD7D13D738FE7BAD_il2cpp_TypeInfo_var, L_54, L_57, L_61);
		return L_62;
	}
}
IL2CPP_EXTERN_C  int32_t ValueTuple_5_System_Collections_IStructuralComparable_CompareTo_mB37ADC03FEA884033DC4DD8F46D58E28DCB2B154_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_other, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57>(__this);
	int32_t _returnValue;
	_returnValue = ValueTuple_5_System_Collections_IStructuralComparable_CompareTo_mB37ADC03FEA884033DC4DD8F46D58E28DCB2B154(_thisAdjusted, ___0_other, ___1_comparer, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_5_GetHashCode_mB615A8EF3BA89A94F36DD4113BAF65429852D992 (ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticInit);
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	intptr_t V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	bool V_4 = false;
	intptr_t* G_B3_0 = NULL;
	int32_t G_B4_0 = 0;
	int32_t* G_B7_0 = NULL;
	int32_t G_B7_1 = 0;
	int32_t G_B8_0 = 0;
	int32_t G_B8_1 = 0;
	intptr_t* G_B11_0 = NULL;
	int32_t G_B11_1 = 0;
	int32_t G_B11_2 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B12_1 = 0;
	int32_t G_B12_2 = 0;
	int32_t* G_B15_0 = NULL;
	int32_t G_B15_1 = 0;
	int32_t G_B15_2 = 0;
	int32_t G_B15_3 = 0;
	int32_t G_B16_0 = 0;
	int32_t G_B16_1 = 0;
	int32_t G_B16_2 = 0;
	int32_t G_B16_3 = 0;
	bool* G_B19_0 = NULL;
	int32_t G_B19_1 = 0;
	int32_t G_B19_2 = 0;
	int32_t G_B19_3 = 0;
	int32_t G_B19_4 = 0;
	int32_t G_B20_0 = 0;
	int32_t G_B20_1 = 0;
	int32_t G_B20_2 = 0;
	int32_t G_B20_3 = 0;
	int32_t G_B20_4 = 0;
	{
		intptr_t* L_0 = (intptr_t*)(&__this->___Item1);
		il2cpp_codegen_initobj((&V_0), sizeof(intptr_t));
		G_B3_0 = L_0;
		goto IL_002a;
	}

IL_002a:
	{
		int32_t L_2;
		L_2 = IntPtr_GetHashCode_m669B16AD7483C1C396E48F41D9CAC4B719E38F3D(G_B3_0, NULL);
		G_B4_0 = L_2;
	}

IL_0035:
	{
		int32_t* L_3 = (int32_t*)(&__this->___Item2);
		il2cpp_codegen_initobj((&V_1), sizeof(int32_t));
		G_B7_0 = L_3;
		G_B7_1 = G_B4_0;
		goto IL_005f;
	}

IL_005f:
	{
		int32_t L_5;
		L_5 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295(G_B7_0, NULL);
		G_B8_0 = L_5;
		G_B8_1 = G_B7_1;
	}

IL_006a:
	{
		intptr_t* L_6 = (intptr_t*)(&__this->___Item3);
		il2cpp_codegen_initobj((&V_2), sizeof(intptr_t));
		G_B11_0 = L_6;
		G_B11_1 = G_B8_0;
		G_B11_2 = G_B8_1;
		goto IL_0094;
	}

IL_0094:
	{
		int32_t L_8;
		L_8 = IntPtr_GetHashCode_m669B16AD7483C1C396E48F41D9CAC4B719E38F3D(G_B11_0, NULL);
		G_B12_0 = L_8;
		G_B12_1 = G_B11_1;
		G_B12_2 = G_B11_2;
	}

IL_009f:
	{
		int32_t* L_9 = (int32_t*)(&__this->___Item4);
		il2cpp_codegen_initobj((&V_3), sizeof(int32_t));
		G_B15_0 = L_9;
		G_B15_1 = G_B12_0;
		G_B15_2 = G_B12_1;
		G_B15_3 = G_B12_2;
		goto IL_00c9;
	}

IL_00c9:
	{
		int32_t L_11;
		L_11 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295(G_B15_0, NULL);
		G_B16_0 = L_11;
		G_B16_1 = G_B15_1;
		G_B16_2 = G_B15_2;
		G_B16_3 = G_B15_3;
	}

IL_00d4:
	{
		bool* L_12 = (bool*)(&__this->___Item5);
		il2cpp_codegen_initobj((&V_4), sizeof(bool));
		G_B19_0 = L_12;
		G_B19_1 = G_B16_0;
		G_B19_2 = G_B16_1;
		G_B19_3 = G_B16_2;
		G_B19_4 = G_B16_3;
		goto IL_0101;
	}

IL_0101:
	{
		CHECKED_LOCAL_INIT(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticInit,(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_14;
		L_14 = Boolean_GetHashCode_mEDB6904770C962BAF4510E5D24F08083C33900E3(G_B19_0, NULL);
		G_B20_0 = L_14;
		G_B20_1 = G_B19_1;
		G_B20_2 = G_B19_2;
		G_B20_3 = G_B19_3;
		G_B20_4 = G_B19_4;
	}

IL_010c:
	{
		int32_t L_15;
		L_15 = ValueTuple_CombineHashCodes_m60E50AC57049CAC8E58C145BDC9022989DD8BF4A(G_B20_4, G_B20_3, G_B20_2, G_B20_1, G_B20_0, NULL);
		return L_15;
	}
}
IL2CPP_EXTERN_C  int32_t ValueTuple_5_GetHashCode_mB615A8EF3BA89A94F36DD4113BAF65429852D992_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57>(__this);
	int32_t _returnValue;
	_returnValue = ValueTuple_5_GetHashCode_mB615A8EF3BA89A94F36DD4113BAF65429852D992(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_5_System_Collections_IStructuralEquatable_GetHashCode_mA508E466DA982359C943FA2158B9D0B9E3A9F8F8 (ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	{
		RuntimeObject* L_0 = ___0_comparer;
		int32_t L_1;
		L_1 = ValueTuple_5_GetHashCodeCore_m7CD1CE8D3DF4213498F0220163AA6157D54F79EF(__this, L_0, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 28));
		return L_1;
	}
}
IL2CPP_EXTERN_C  int32_t ValueTuple_5_System_Collections_IStructuralEquatable_GetHashCode_mA508E466DA982359C943FA2158B9D0B9E3A9F8F8_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method)
{
	ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57>(__this);
	int32_t _returnValue;
	_returnValue = ValueTuple_5_System_Collections_IStructuralEquatable_GetHashCode_mA508E466DA982359C943FA2158B9D0B9E3A9F8F8(_thisAdjusted, ___0_comparer, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_5_GetHashCodeCore_m7CD1CE8D3DF4213498F0220163AA6157D54F79EF (ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	{
		RuntimeObject* L_0 = ___0_comparer;
		intptr_t L_1 = __this->___Item1;
		intptr_t L_2 = L_1;
		RuntimeObject* L_3 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0), &L_2);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_0, L_3);
		RuntimeObject* L_5 = ___0_comparer;
		int32_t L_6 = __this->___Item2;
		int32_t L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3), &L_7);
		int32_t L_9;
		L_9 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_5, L_8);
		RuntimeObject* L_10 = ___0_comparer;
		intptr_t L_11 = __this->___Item3;
		intptr_t L_12 = L_11;
		RuntimeObject* L_13 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5), &L_12);
		int32_t L_14;
		L_14 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_10, L_13);
		RuntimeObject* L_15 = ___0_comparer;
		int32_t L_16 = __this->___Item4;
		int32_t L_17 = L_16;
		RuntimeObject* L_18 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7), &L_17);
		int32_t L_19;
		L_19 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_15, L_18);
		RuntimeObject* L_20 = ___0_comparer;
		bool L_21 = __this->___Item5;
		bool L_22 = L_21;
		RuntimeObject* L_23 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 9), &L_22);
		int32_t L_24;
		L_24 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_20, L_23);
		int32_t L_25;
		L_25 = ValueTuple_CombineHashCodes_m60E50AC57049CAC8E58C145BDC9022989DD8BF4A(L_4, L_9, L_14, L_19, L_24, NULL);
		return L_25;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ValueTuple_5_ToString_mFA28F2FBFD72F8DFD4C7AB0F85D7075061F0AC3B (ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticInit);
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	intptr_t V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	bool V_4 = false;
	intptr_t* G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B3_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B3_3 = NULL;
	String_t* G_B4_0 = NULL;
	int32_t G_B4_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B4_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B4_3 = NULL;
	int32_t* G_B7_0 = NULL;
	int32_t G_B7_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B7_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B7_3 = NULL;
	String_t* G_B8_0 = NULL;
	int32_t G_B8_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B8_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B8_3 = NULL;
	intptr_t* G_B11_0 = NULL;
	int32_t G_B11_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B11_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B11_3 = NULL;
	String_t* G_B12_0 = NULL;
	int32_t G_B12_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B12_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B12_3 = NULL;
	int32_t* G_B15_0 = NULL;
	int32_t G_B15_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B15_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B15_3 = NULL;
	String_t* G_B16_0 = NULL;
	int32_t G_B16_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B16_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B16_3 = NULL;
	bool* G_B19_0 = NULL;
	int32_t G_B19_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B19_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B19_3 = NULL;
	String_t* G_B20_0 = NULL;
	int32_t G_B20_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B20_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B20_3 = NULL;
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)((int32_t)11));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = L_0;
		(L_1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = L_1;
		intptr_t* L_3 = (intptr_t*)(&__this->___Item1);
		il2cpp_codegen_initobj((&V_0), sizeof(intptr_t));
		G_B3_0 = L_3;
		G_B3_1 = 1;
		G_B3_2 = L_2;
		G_B3_3 = L_2;
		goto IL_003b;
	}

IL_003b:
	{
		String_t* L_5;
		L_5 = IntPtr_ToString_mDA1150F4802E1FB9313FB4E32C684EEE19116E5C(G_B3_0, NULL);
		G_B4_0 = L_5;
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
		G_B4_3 = G_B3_3;
	}

IL_0046:
	{
		(G_B4_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(G_B4_1), (String_t*)G_B4_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = G_B4_3;
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_7 = L_6;
		int32_t* L_8 = (int32_t*)(&__this->___Item2);
		il2cpp_codegen_initobj((&V_1), sizeof(int32_t));
		G_B7_0 = L_8;
		G_B7_1 = 3;
		G_B7_2 = L_7;
		G_B7_3 = L_7;
		goto IL_007b;
	}

IL_007b:
	{
		String_t* L_10;
		L_10 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(G_B7_0, NULL);
		G_B8_0 = L_10;
		G_B8_1 = G_B7_1;
		G_B8_2 = G_B7_2;
		G_B8_3 = G_B7_3;
	}

IL_0086:
	{
		(G_B8_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(G_B8_1), (String_t*)G_B8_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_11 = G_B8_3;
		(L_11)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_12 = L_11;
		intptr_t* L_13 = (intptr_t*)(&__this->___Item3);
		il2cpp_codegen_initobj((&V_2), sizeof(intptr_t));
		G_B11_0 = L_13;
		G_B11_1 = 5;
		G_B11_2 = L_12;
		G_B11_3 = L_12;
		goto IL_00bb;
	}

IL_00bb:
	{
		String_t* L_15;
		L_15 = IntPtr_ToString_mDA1150F4802E1FB9313FB4E32C684EEE19116E5C(G_B11_0, NULL);
		G_B12_0 = L_15;
		G_B12_1 = G_B11_1;
		G_B12_2 = G_B11_2;
		G_B12_3 = G_B11_3;
	}

IL_00c6:
	{
		(G_B12_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(G_B12_1), (String_t*)G_B12_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_16 = G_B12_3;
		(L_16)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(6), (String_t*)_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_17 = L_16;
		int32_t* L_18 = (int32_t*)(&__this->___Item4);
		il2cpp_codegen_initobj((&V_3), sizeof(int32_t));
		G_B15_0 = L_18;
		G_B15_1 = 7;
		G_B15_2 = L_17;
		G_B15_3 = L_17;
		goto IL_00fb;
	}

IL_00fb:
	{
		String_t* L_20;
		L_20 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(G_B15_0, NULL);
		G_B16_0 = L_20;
		G_B16_1 = G_B15_1;
		G_B16_2 = G_B15_2;
		G_B16_3 = G_B15_3;
	}

IL_0106:
	{
		(G_B16_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(G_B16_1), (String_t*)G_B16_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_21 = G_B16_3;
		(L_21)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(8), (String_t*)_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_22 = L_21;
		bool* L_23 = (bool*)(&__this->___Item5);
		il2cpp_codegen_initobj((&V_4), sizeof(bool));
		G_B19_0 = L_23;
		G_B19_1 = ((int32_t)9);
		G_B19_2 = L_22;
		G_B19_3 = L_22;
		goto IL_013f;
	}

IL_013f:
	{
		CHECKED_LOCAL_INIT(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticInit,(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		String_t* L_25;
		L_25 = Boolean_ToString_m6646C8026B1DF381A1EE8CD13549175E9703CC63(G_B19_0, NULL);
		G_B20_0 = L_25;
		G_B20_1 = G_B19_1;
		G_B20_2 = G_B19_2;
		G_B20_3 = G_B19_3;
	}

IL_014a:
	{
		(G_B20_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(G_B20_1), (String_t*)G_B20_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_26 = G_B20_3;
		(L_26)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)10)), (String_t*)_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		String_t* L_27;
		L_27 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_26, NULL);
		return L_27;
	}
}
IL2CPP_EXTERN_C  String_t* ValueTuple_5_ToString_mFA28F2FBFD72F8DFD4C7AB0F85D7075061F0AC3B_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57>(__this);
	String_t* _returnValue;
	_returnValue = ValueTuple_5_ToString_mFA28F2FBFD72F8DFD4C7AB0F85D7075061F0AC3B(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueTuple_5__ctor_m137533B18C66876071676469953787BAFAA5AEFF_fshared (ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56* __this, Il2CppFullySharedGenericAny ___0_item1, Il2CppFullySharedGenericAny ___1_item2, Il2CppFullySharedGenericAny ___2_item3, Il2CppFullySharedGenericAny ___3_item4, Il2CppFullySharedGenericAny ___4_item5, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_T1_t1DAF9B0DCADCC79CF41C2003E5C592942F805E50 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0));
	const uint32_t SizeOf_T2_t9E1D5C5A88209EFE3B28D44A8BE5D6688608BF24 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3));
	const uint32_t SizeOf_T3_t4A7ECBCF15AA62D044B6039FFF640DD71AD40BDB = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5));
	const uint32_t SizeOf_T4_t67AC00AF93B93F8979EEE590739A0DF4AAEE2EE3 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7));
	const uint32_t SizeOf_T5_t76A3327D5DFAE29A6A88ADC0A5DDC9720642E2AB = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 9));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_T1_t1DAF9B0DCADCC79CF41C2003E5C592942F805E50);
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T2_t9E1D5C5A88209EFE3B28D44A8BE5D6688608BF24);
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_T3_t4A7ECBCF15AA62D044B6039FFF640DD71AD40BDB);
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T4_t67AC00AF93B93F8979EEE590739A0DF4AAEE2EE3);
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_T5_t76A3327D5DFAE29A6A88ADC0A5DDC9720642E2AB);
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)) ? ___0_item1 : &___0_item1), SizeOf_T1_t1DAF9B0DCADCC79CF41C2003E5C592942F805E50);
		il2cpp_codegen_write_field_data<true>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1),0), il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2), L_0, SizeOf_T1_t1DAF9B0DCADCC79CF41C2003E5C592942F805E50);
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)) ? ___1_item2 : &___1_item2), SizeOf_T2_t9E1D5C5A88209EFE3B28D44A8BE5D6688608BF24);
		il2cpp_codegen_write_field_data<true>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1),1), il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4), L_1, SizeOf_T2_t9E1D5C5A88209EFE3B28D44A8BE5D6688608BF24);
		il2cpp_codegen_memcpy(L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5)) ? ___2_item3 : &___2_item3), SizeOf_T3_t4A7ECBCF15AA62D044B6039FFF640DD71AD40BDB);
		il2cpp_codegen_write_field_data<true>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1),2), il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6), L_2, SizeOf_T3_t4A7ECBCF15AA62D044B6039FFF640DD71AD40BDB);
		il2cpp_codegen_memcpy(L_3, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7)) ? ___3_item4 : &___3_item4), SizeOf_T4_t67AC00AF93B93F8979EEE590739A0DF4AAEE2EE3);
		il2cpp_codegen_write_field_data<true>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1),3), il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8), L_3, SizeOf_T4_t67AC00AF93B93F8979EEE590739A0DF4AAEE2EE3);
		il2cpp_codegen_memcpy(L_4, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 9)) ? ___4_item5 : &___4_item5), SizeOf_T5_t76A3327D5DFAE29A6A88ADC0A5DDC9720642E2AB);
		il2cpp_codegen_write_field_data<true>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1),4), il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 10), L_4, SizeOf_T5_t76A3327D5DFAE29A6A88ADC0A5DDC9720642E2AB);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTuple_5_Equals_mB9CD17DAD4FABF6412558E3A82BB15FE28160D82_fshared (ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	{
		RuntimeObject* L_0 = ___0_obj;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1))))
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_1 = ___0_obj;
		bool L_2;
		L_2 = InvokerFuncInvoker1< bool, ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56 >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 11)), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 11), __this, (((ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56)(ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56*)UnBox(L_1, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1)))));
		return L_2;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool ValueTuple_5_Equals_mB9CD17DAD4FABF6412558E3A82BB15FE28160D82_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method)
{
	ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56>(__this);
	bool _returnValue;
	_returnValue = ValueTuple_5_Equals_mB9CD17DAD4FABF6412558E3A82BB15FE28160D82(_thisAdjusted, ___0_obj, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTuple_5_Equals_m1BDE6D49AEE834527814FAEBE4534B414E1022A9_fshared (ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56* __this, ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56 ___0_other, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_T1_t1DAF9B0DCADCC79CF41C2003E5C592942F805E50 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0));
	const uint32_t SizeOf_ValueTuple_5_t25CBC148656E3ACC2A136FE20FBBB109E8593794 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
	const uint32_t SizeOf_T2_t9E1D5C5A88209EFE3B28D44A8BE5D6688608BF24 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3));
	const uint32_t SizeOf_T3_t4A7ECBCF15AA62D044B6039FFF640DD71AD40BDB = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5));
	const uint32_t SizeOf_T4_t67AC00AF93B93F8979EEE590739A0DF4AAEE2EE3 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7));
	const uint32_t SizeOf_T5_t76A3327D5DFAE29A6A88ADC0A5DDC9720642E2AB = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 9));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T1_t1DAF9B0DCADCC79CF41C2003E5C592942F805E50);
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T1_t1DAF9B0DCADCC79CF41C2003E5C592942F805E50);
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_T2_t9E1D5C5A88209EFE3B28D44A8BE5D6688608BF24);
	const Il2CppFullySharedGenericAny L_8 = alloca(SizeOf_T2_t9E1D5C5A88209EFE3B28D44A8BE5D6688608BF24);
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_T3_t4A7ECBCF15AA62D044B6039FFF640DD71AD40BDB);
	const Il2CppFullySharedGenericAny L_13 = alloca(SizeOf_T3_t4A7ECBCF15AA62D044B6039FFF640DD71AD40BDB);
	const Il2CppFullySharedGenericAny L_16 = alloca(SizeOf_T4_t67AC00AF93B93F8979EEE590739A0DF4AAEE2EE3);
	const Il2CppFullySharedGenericAny L_18 = alloca(SizeOf_T4_t67AC00AF93B93F8979EEE590739A0DF4AAEE2EE3);
	const Il2CppFullySharedGenericAny L_21 = alloca(SizeOf_T5_t76A3327D5DFAE29A6A88ADC0A5DDC9720642E2AB);
	const Il2CppFullySharedGenericAny L_23 = alloca(SizeOf_T5_t76A3327D5DFAE29A6A88ADC0A5DDC9720642E2AB);
	const ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56 L_2 = alloca(SizeOf_ValueTuple_5_t25CBC148656E3ACC2A136FE20FBBB109E8593794);
	const ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56 L_7 = L_2;
	const ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56 L_12 = L_2;
	const ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56 L_17 = L_2;
	const ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56 L_22 = L_2;
	{
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_0;
		L_0 = ((  EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 12)))(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 12));
		il2cpp_codegen_memcpy(L_1, il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2)), SizeOf_T1_t1DAF9B0DCADCC79CF41C2003E5C592942F805E50);
		il2cpp_codegen_memcpy(L_2, ___0_other, SizeOf_ValueTuple_5_t25CBC148656E3ACC2A136FE20FBBB109E8593794);
		il2cpp_codegen_memcpy(L_3, il2cpp_codegen_get_field_data_pointer(L_2, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2)), SizeOf_T1_t1DAF9B0DCADCC79CF41C2003E5C592942F805E50);
		bool L_4;
		L_4 = VirtualFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(8, L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)) ? L_1: *(void**)L_1), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)) ? L_3: *(void**)L_3));
		if (!L_4)
		{
			goto IL_0077;
		}
	}
	{
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_5;
		L_5 = ((  EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13));
		il2cpp_codegen_memcpy(L_6, il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4)), SizeOf_T2_t9E1D5C5A88209EFE3B28D44A8BE5D6688608BF24);
		il2cpp_codegen_memcpy(L_7, ___0_other, SizeOf_ValueTuple_5_t25CBC148656E3ACC2A136FE20FBBB109E8593794);
		il2cpp_codegen_memcpy(L_8, il2cpp_codegen_get_field_data_pointer(L_7, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4)), SizeOf_T2_t9E1D5C5A88209EFE3B28D44A8BE5D6688608BF24);
		bool L_9;
		L_9 = VirtualFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(8, L_5, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)) ? L_6: *(void**)L_6), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)) ? L_8: *(void**)L_8));
		if (!L_9)
		{
			goto IL_0077;
		}
	}
	{
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_10;
		L_10 = ((  EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 14)))(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 14));
		il2cpp_codegen_memcpy(L_11, il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6)), SizeOf_T3_t4A7ECBCF15AA62D044B6039FFF640DD71AD40BDB);
		il2cpp_codegen_memcpy(L_12, ___0_other, SizeOf_ValueTuple_5_t25CBC148656E3ACC2A136FE20FBBB109E8593794);
		il2cpp_codegen_memcpy(L_13, il2cpp_codegen_get_field_data_pointer(L_12, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6)), SizeOf_T3_t4A7ECBCF15AA62D044B6039FFF640DD71AD40BDB);
		bool L_14;
		L_14 = VirtualFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(8, L_10, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5)) ? L_11: *(void**)L_11), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5)) ? L_13: *(void**)L_13));
		if (!L_14)
		{
			goto IL_0077;
		}
	}
	{
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_15;
		L_15 = ((  EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 15)))(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 15));
		il2cpp_codegen_memcpy(L_16, il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8)), SizeOf_T4_t67AC00AF93B93F8979EEE590739A0DF4AAEE2EE3);
		il2cpp_codegen_memcpy(L_17, ___0_other, SizeOf_ValueTuple_5_t25CBC148656E3ACC2A136FE20FBBB109E8593794);
		il2cpp_codegen_memcpy(L_18, il2cpp_codegen_get_field_data_pointer(L_17, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8)), SizeOf_T4_t67AC00AF93B93F8979EEE590739A0DF4AAEE2EE3);
		bool L_19;
		L_19 = VirtualFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(8, L_15, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7)) ? L_16: *(void**)L_16), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7)) ? L_18: *(void**)L_18));
		if (!L_19)
		{
			goto IL_0077;
		}
	}
	{
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_20;
		L_20 = ((  EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 16)))(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 16));
		il2cpp_codegen_memcpy(L_21, il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 10)), SizeOf_T5_t76A3327D5DFAE29A6A88ADC0A5DDC9720642E2AB);
		il2cpp_codegen_memcpy(L_22, ___0_other, SizeOf_ValueTuple_5_t25CBC148656E3ACC2A136FE20FBBB109E8593794);
		il2cpp_codegen_memcpy(L_23, il2cpp_codegen_get_field_data_pointer(L_22, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 10)), SizeOf_T5_t76A3327D5DFAE29A6A88ADC0A5DDC9720642E2AB);
		bool L_24;
		L_24 = VirtualFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(8, L_20, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 9)) ? L_21: *(void**)L_21), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 9)) ? L_23: *(void**)L_23));
		return L_24;
	}

IL_0077:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool ValueTuple_5_Equals_m1BDE6D49AEE834527814FAEBE4534B414E1022A9_AdjustorThunk (RuntimeObject* __this, ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56 ___0_other, const RuntimeMethod* method)
{
	ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56>(__this);
	bool _returnValue;
	_returnValue = ValueTuple_5_Equals_m1BDE6D49AEE834527814FAEBE4534B414E1022A9(_thisAdjusted, ___0_other, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTuple_5_System_Collections_IStructuralEquatable_Equals_m6220851574828DC96CE4C7E2D09213B84CA5C1FE_fshared (ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56* __this, RuntimeObject* ___0_other, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_ValueTuple_5_t25CBC148656E3ACC2A136FE20FBBB109E8593794 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
	const uint32_t SizeOf_T1_t1DAF9B0DCADCC79CF41C2003E5C592942F805E50 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0));
	const uint32_t SizeOf_T2_t9E1D5C5A88209EFE3B28D44A8BE5D6688608BF24 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3));
	const uint32_t SizeOf_T3_t4A7ECBCF15AA62D044B6039FFF640DD71AD40BDB = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5));
	const uint32_t SizeOf_T4_t67AC00AF93B93F8979EEE590739A0DF4AAEE2EE3 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7));
	const uint32_t SizeOf_T5_t76A3327D5DFAE29A6A88ADC0A5DDC9720642E2AB = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 9));
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_T1_t1DAF9B0DCADCC79CF41C2003E5C592942F805E50);
	const Il2CppFullySharedGenericAny L_7 = alloca(SizeOf_T1_t1DAF9B0DCADCC79CF41C2003E5C592942F805E50);
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_T2_t9E1D5C5A88209EFE3B28D44A8BE5D6688608BF24);
	const Il2CppFullySharedGenericAny L_14 = alloca(SizeOf_T2_t9E1D5C5A88209EFE3B28D44A8BE5D6688608BF24);
	const Il2CppFullySharedGenericAny L_18 = alloca(SizeOf_T3_t4A7ECBCF15AA62D044B6039FFF640DD71AD40BDB);
	const Il2CppFullySharedGenericAny L_21 = alloca(SizeOf_T3_t4A7ECBCF15AA62D044B6039FFF640DD71AD40BDB);
	const Il2CppFullySharedGenericAny L_25 = alloca(SizeOf_T4_t67AC00AF93B93F8979EEE590739A0DF4AAEE2EE3);
	const Il2CppFullySharedGenericAny L_28 = alloca(SizeOf_T4_t67AC00AF93B93F8979EEE590739A0DF4AAEE2EE3);
	const Il2CppFullySharedGenericAny L_32 = alloca(SizeOf_T5_t76A3327D5DFAE29A6A88ADC0A5DDC9720642E2AB);
	const Il2CppFullySharedGenericAny L_35 = alloca(SizeOf_T5_t76A3327D5DFAE29A6A88ADC0A5DDC9720642E2AB);
	const ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56 L_6 = alloca(SizeOf_ValueTuple_5_t25CBC148656E3ACC2A136FE20FBBB109E8593794);
	const ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56 L_13 = L_6;
	const ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56 L_20 = L_6;
	const ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56 L_27 = L_6;
	const ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56 L_34 = L_6;
	ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56 V_0 = alloca(SizeOf_ValueTuple_5_t25CBC148656E3ACC2A136FE20FBBB109E8593794);
	memset(V_0, 0, SizeOf_ValueTuple_5_t25CBC148656E3ACC2A136FE20FBBB109E8593794);
	{
		RuntimeObject* L_0 = ___0_other;
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		RuntimeObject* L_1 = ___0_other;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_1, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1))))
		{
			goto IL_000d;
		}
	}

IL_000b:
	{
		return (bool)0;
	}

IL_000d:
	{
		RuntimeObject* L_2 = ___0_other;
		il2cpp_codegen_memcpy(V_0, (((ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56)(ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56*)UnBox(L_2, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1)))), SizeOf_ValueTuple_5_t25CBC148656E3ACC2A136FE20FBBB109E8593794);
		RuntimeObject* L_3 = ___1_comparer;
		il2cpp_codegen_memcpy(L_4, il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2)), SizeOf_T1_t1DAF9B0DCADCC79CF41C2003E5C592942F805E50);
		RuntimeObject* L_5 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0), L_4);
		il2cpp_codegen_memcpy(L_6, V_0, SizeOf_ValueTuple_5_t25CBC148656E3ACC2A136FE20FBBB109E8593794);
		il2cpp_codegen_memcpy(L_7, il2cpp_codegen_get_field_data_pointer(L_6, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2)), SizeOf_T1_t1DAF9B0DCADCC79CF41C2003E5C592942F805E50);
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0), L_7);
		bool L_9;
		L_9 = InterfaceFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(0, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_3, L_5, L_8);
		if (!L_9)
		{
			goto IL_00a9;
		}
	}
	{
		RuntimeObject* L_10 = ___1_comparer;
		il2cpp_codegen_memcpy(L_11, il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4)), SizeOf_T2_t9E1D5C5A88209EFE3B28D44A8BE5D6688608BF24);
		RuntimeObject* L_12 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3), L_11);
		il2cpp_codegen_memcpy(L_13, V_0, SizeOf_ValueTuple_5_t25CBC148656E3ACC2A136FE20FBBB109E8593794);
		il2cpp_codegen_memcpy(L_14, il2cpp_codegen_get_field_data_pointer(L_13, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4)), SizeOf_T2_t9E1D5C5A88209EFE3B28D44A8BE5D6688608BF24);
		RuntimeObject* L_15 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3), L_14);
		bool L_16;
		L_16 = InterfaceFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(0, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_10, L_12, L_15);
		if (!L_16)
		{
			goto IL_00a9;
		}
	}
	{
		RuntimeObject* L_17 = ___1_comparer;
		il2cpp_codegen_memcpy(L_18, il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6)), SizeOf_T3_t4A7ECBCF15AA62D044B6039FFF640DD71AD40BDB);
		RuntimeObject* L_19 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5), L_18);
		il2cpp_codegen_memcpy(L_20, V_0, SizeOf_ValueTuple_5_t25CBC148656E3ACC2A136FE20FBBB109E8593794);
		il2cpp_codegen_memcpy(L_21, il2cpp_codegen_get_field_data_pointer(L_20, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6)), SizeOf_T3_t4A7ECBCF15AA62D044B6039FFF640DD71AD40BDB);
		RuntimeObject* L_22 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5), L_21);
		bool L_23;
		L_23 = InterfaceFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(0, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_17, L_19, L_22);
		if (!L_23)
		{
			goto IL_00a9;
		}
	}
	{
		RuntimeObject* L_24 = ___1_comparer;
		il2cpp_codegen_memcpy(L_25, il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8)), SizeOf_T4_t67AC00AF93B93F8979EEE590739A0DF4AAEE2EE3);
		RuntimeObject* L_26 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7), L_25);
		il2cpp_codegen_memcpy(L_27, V_0, SizeOf_ValueTuple_5_t25CBC148656E3ACC2A136FE20FBBB109E8593794);
		il2cpp_codegen_memcpy(L_28, il2cpp_codegen_get_field_data_pointer(L_27, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8)), SizeOf_T4_t67AC00AF93B93F8979EEE590739A0DF4AAEE2EE3);
		RuntimeObject* L_29 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7), L_28);
		bool L_30;
		L_30 = InterfaceFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(0, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_24, L_26, L_29);
		if (!L_30)
		{
			goto IL_00a9;
		}
	}
	{
		RuntimeObject* L_31 = ___1_comparer;
		il2cpp_codegen_memcpy(L_32, il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 10)), SizeOf_T5_t76A3327D5DFAE29A6A88ADC0A5DDC9720642E2AB);
		RuntimeObject* L_33 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 9), L_32);
		il2cpp_codegen_memcpy(L_34, V_0, SizeOf_ValueTuple_5_t25CBC148656E3ACC2A136FE20FBBB109E8593794);
		il2cpp_codegen_memcpy(L_35, il2cpp_codegen_get_field_data_pointer(L_34, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 10)), SizeOf_T5_t76A3327D5DFAE29A6A88ADC0A5DDC9720642E2AB);
		RuntimeObject* L_36 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 9), L_35);
		bool L_37;
		L_37 = InterfaceFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(0, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_31, L_33, L_36);
		return L_37;
	}

IL_00a9:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool ValueTuple_5_System_Collections_IStructuralEquatable_Equals_m6220851574828DC96CE4C7E2D09213B84CA5C1FE_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_other, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56>(__this);
	bool _returnValue;
	_returnValue = ValueTuple_5_System_Collections_IStructuralEquatable_Equals_m6220851574828DC96CE4C7E2D09213B84CA5C1FE(_thisAdjusted, ___0_other, ___1_comparer, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_5_System_IComparable_CompareTo_mA31E7015CC7DCBB59BA58FC44A74FB3ED5BBEF8F_fshared (ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_ValueTuple_5_t25CBC148656E3ACC2A136FE20FBBB109E8593794 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
	const ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56 L_2 = alloca(SizeOf_ValueTuple_5_t25CBC148656E3ACC2A136FE20FBBB109E8593794);
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return 1;
	}

IL_0005:
	{
		RuntimeObject* L_1 = ___0_other;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_1, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1))))
		{
			goto IL_0037;
		}
	}
	{
		il2cpp_codegen_memcpy(L_2, __this, SizeOf_ValueTuple_5_t25CBC148656E3ACC2A136FE20FBBB109E8593794);
		RuntimeObject* L_3 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1), L_2);
		Type_t* L_4;
		L_4 = il2cpp_codegen_object_get_type(L_3);
		String_t* L_5;
		L_5 = VirtualFuncInvoker0< String_t* >::Invoke(3, L_4);
		String_t* L_6;
		L_6 = SR_Format_m9E8DC9AEFDC34AC67473EFAEAB78C5066C1A0D09(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1459AD7D3E0F8808A85528961118835E18AD1F96)), L_5, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_7 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_7, L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, method);
	}

IL_0037:
	{
		RuntimeObject* L_8 = ___0_other;
		int32_t L_9;
		L_9 = InvokerFuncInvoker1< int32_t, ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56 >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 17)), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 17), __this, (((ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56)(ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56*)UnBox(L_8, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1)))));
		return L_9;
	}
}
IL2CPP_EXTERN_C  int32_t ValueTuple_5_System_IComparable_CompareTo_mA31E7015CC7DCBB59BA58FC44A74FB3ED5BBEF8F_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_other, const RuntimeMethod* method)
{
	ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56>(__this);
	int32_t _returnValue;
	_returnValue = ValueTuple_5_System_IComparable_CompareTo_mA31E7015CC7DCBB59BA58FC44A74FB3ED5BBEF8F(_thisAdjusted, ___0_other, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_5_CompareTo_mC808DB0CE9EDE1F4B2C4D7382F3E57105940208A_fshared (ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56* __this, ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56 ___0_other, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_T1_t1DAF9B0DCADCC79CF41C2003E5C592942F805E50 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0));
	const uint32_t SizeOf_ValueTuple_5_t25CBC148656E3ACC2A136FE20FBBB109E8593794 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
	const uint32_t SizeOf_T2_t9E1D5C5A88209EFE3B28D44A8BE5D6688608BF24 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3));
	const uint32_t SizeOf_T3_t4A7ECBCF15AA62D044B6039FFF640DD71AD40BDB = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5));
	const uint32_t SizeOf_T4_t67AC00AF93B93F8979EEE590739A0DF4AAEE2EE3 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7));
	const uint32_t SizeOf_T5_t76A3327D5DFAE29A6A88ADC0A5DDC9720642E2AB = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 9));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T1_t1DAF9B0DCADCC79CF41C2003E5C592942F805E50);
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T1_t1DAF9B0DCADCC79CF41C2003E5C592942F805E50);
	const Il2CppFullySharedGenericAny L_8 = alloca(SizeOf_T2_t9E1D5C5A88209EFE3B28D44A8BE5D6688608BF24);
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_T2_t9E1D5C5A88209EFE3B28D44A8BE5D6688608BF24);
	const Il2CppFullySharedGenericAny L_15 = alloca(SizeOf_T3_t4A7ECBCF15AA62D044B6039FFF640DD71AD40BDB);
	const Il2CppFullySharedGenericAny L_17 = alloca(SizeOf_T3_t4A7ECBCF15AA62D044B6039FFF640DD71AD40BDB);
	const Il2CppFullySharedGenericAny L_22 = alloca(SizeOf_T4_t67AC00AF93B93F8979EEE590739A0DF4AAEE2EE3);
	const Il2CppFullySharedGenericAny L_24 = alloca(SizeOf_T4_t67AC00AF93B93F8979EEE590739A0DF4AAEE2EE3);
	const Il2CppFullySharedGenericAny L_29 = alloca(SizeOf_T5_t76A3327D5DFAE29A6A88ADC0A5DDC9720642E2AB);
	const Il2CppFullySharedGenericAny L_31 = alloca(SizeOf_T5_t76A3327D5DFAE29A6A88ADC0A5DDC9720642E2AB);
	const ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56 L_2 = alloca(SizeOf_ValueTuple_5_t25CBC148656E3ACC2A136FE20FBBB109E8593794);
	const ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56 L_9 = L_2;
	const ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56 L_16 = L_2;
	const ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56 L_23 = L_2;
	const ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56 L_30 = L_2;
	int32_t V_0 = 0;
	{
		Comparer_1_tF59A960F33DD69C2CF0330F3FF6AD7828FF0F3FB* L_0;
		L_0 = ((  Comparer_1_tF59A960F33DD69C2CF0330F3FF6AD7828FF0F3FB* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 18)))(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 18));
		il2cpp_codegen_memcpy(L_1, il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2)), SizeOf_T1_t1DAF9B0DCADCC79CF41C2003E5C592942F805E50);
		il2cpp_codegen_memcpy(L_2, ___0_other, SizeOf_ValueTuple_5_t25CBC148656E3ACC2A136FE20FBBB109E8593794);
		il2cpp_codegen_memcpy(L_3, il2cpp_codegen_get_field_data_pointer(L_2, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2)), SizeOf_T1_t1DAF9B0DCADCC79CF41C2003E5C592942F805E50);
		int32_t L_4;
		L_4 = VirtualFuncInvoker2Invoker< int32_t, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(6, L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)) ? L_1: *(void**)L_1), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)) ? L_3: *(void**)L_3));
		V_0 = L_4;
		int32_t L_5 = V_0;
		if (!L_5)
		{
			goto IL_001c;
		}
	}
	{
		int32_t L_6 = V_0;
		return L_6;
	}

IL_001c:
	{
		Comparer_1_tF59A960F33DD69C2CF0330F3FF6AD7828FF0F3FB* L_7;
		L_7 = ((  Comparer_1_tF59A960F33DD69C2CF0330F3FF6AD7828FF0F3FB* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 19)))(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 19));
		il2cpp_codegen_memcpy(L_8, il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4)), SizeOf_T2_t9E1D5C5A88209EFE3B28D44A8BE5D6688608BF24);
		il2cpp_codegen_memcpy(L_9, ___0_other, SizeOf_ValueTuple_5_t25CBC148656E3ACC2A136FE20FBBB109E8593794);
		il2cpp_codegen_memcpy(L_10, il2cpp_codegen_get_field_data_pointer(L_9, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4)), SizeOf_T2_t9E1D5C5A88209EFE3B28D44A8BE5D6688608BF24);
		int32_t L_11;
		L_11 = VirtualFuncInvoker2Invoker< int32_t, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(6, L_7, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)) ? L_8: *(void**)L_8), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)) ? L_10: *(void**)L_10));
		V_0 = L_11;
		int32_t L_12 = V_0;
		if (!L_12)
		{
			goto IL_0038;
		}
	}
	{
		int32_t L_13 = V_0;
		return L_13;
	}

IL_0038:
	{
		Comparer_1_tF59A960F33DD69C2CF0330F3FF6AD7828FF0F3FB* L_14;
		L_14 = ((  Comparer_1_tF59A960F33DD69C2CF0330F3FF6AD7828FF0F3FB* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 20)))(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 20));
		il2cpp_codegen_memcpy(L_15, il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6)), SizeOf_T3_t4A7ECBCF15AA62D044B6039FFF640DD71AD40BDB);
		il2cpp_codegen_memcpy(L_16, ___0_other, SizeOf_ValueTuple_5_t25CBC148656E3ACC2A136FE20FBBB109E8593794);
		il2cpp_codegen_memcpy(L_17, il2cpp_codegen_get_field_data_pointer(L_16, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6)), SizeOf_T3_t4A7ECBCF15AA62D044B6039FFF640DD71AD40BDB);
		int32_t L_18;
		L_18 = VirtualFuncInvoker2Invoker< int32_t, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(6, L_14, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5)) ? L_15: *(void**)L_15), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5)) ? L_17: *(void**)L_17));
		V_0 = L_18;
		int32_t L_19 = V_0;
		if (!L_19)
		{
			goto IL_0054;
		}
	}
	{
		int32_t L_20 = V_0;
		return L_20;
	}

IL_0054:
	{
		Comparer_1_tF59A960F33DD69C2CF0330F3FF6AD7828FF0F3FB* L_21;
		L_21 = ((  Comparer_1_tF59A960F33DD69C2CF0330F3FF6AD7828FF0F3FB* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 21)))(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 21));
		il2cpp_codegen_memcpy(L_22, il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8)), SizeOf_T4_t67AC00AF93B93F8979EEE590739A0DF4AAEE2EE3);
		il2cpp_codegen_memcpy(L_23, ___0_other, SizeOf_ValueTuple_5_t25CBC148656E3ACC2A136FE20FBBB109E8593794);
		il2cpp_codegen_memcpy(L_24, il2cpp_codegen_get_field_data_pointer(L_23, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8)), SizeOf_T4_t67AC00AF93B93F8979EEE590739A0DF4AAEE2EE3);
		int32_t L_25;
		L_25 = VirtualFuncInvoker2Invoker< int32_t, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(6, L_21, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7)) ? L_22: *(void**)L_22), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7)) ? L_24: *(void**)L_24));
		V_0 = L_25;
		int32_t L_26 = V_0;
		if (!L_26)
		{
			goto IL_0070;
		}
	}
	{
		int32_t L_27 = V_0;
		return L_27;
	}

IL_0070:
	{
		Comparer_1_tF59A960F33DD69C2CF0330F3FF6AD7828FF0F3FB* L_28;
		L_28 = ((  Comparer_1_tF59A960F33DD69C2CF0330F3FF6AD7828FF0F3FB* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 22)))(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 22));
		il2cpp_codegen_memcpy(L_29, il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 10)), SizeOf_T5_t76A3327D5DFAE29A6A88ADC0A5DDC9720642E2AB);
		il2cpp_codegen_memcpy(L_30, ___0_other, SizeOf_ValueTuple_5_t25CBC148656E3ACC2A136FE20FBBB109E8593794);
		il2cpp_codegen_memcpy(L_31, il2cpp_codegen_get_field_data_pointer(L_30, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 10)), SizeOf_T5_t76A3327D5DFAE29A6A88ADC0A5DDC9720642E2AB);
		int32_t L_32;
		L_32 = VirtualFuncInvoker2Invoker< int32_t, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(6, L_28, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 9)) ? L_29: *(void**)L_29), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 9)) ? L_31: *(void**)L_31));
		return L_32;
	}
}
IL2CPP_EXTERN_C  int32_t ValueTuple_5_CompareTo_mC808DB0CE9EDE1F4B2C4D7382F3E57105940208A_AdjustorThunk (RuntimeObject* __this, ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56 ___0_other, const RuntimeMethod* method)
{
	ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56>(__this);
	int32_t _returnValue;
	_returnValue = ValueTuple_5_CompareTo_mC808DB0CE9EDE1F4B2C4D7382F3E57105940208A(_thisAdjusted, ___0_other, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_5_System_Collections_IStructuralComparable_CompareTo_mF83475B1821A3AE012364E6215C27FFFF25A399E_fshared (ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56* __this, RuntimeObject* ___0_other, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IComparer_tE7497C3BE3F68A5A2DCEBF0DAD7D13D738FE7BAD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_ValueTuple_5_t25CBC148656E3ACC2A136FE20FBBB109E8593794 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
	const uint32_t SizeOf_T1_t1DAF9B0DCADCC79CF41C2003E5C592942F805E50 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0));
	const uint32_t SizeOf_T2_t9E1D5C5A88209EFE3B28D44A8BE5D6688608BF24 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3));
	const uint32_t SizeOf_T3_t4A7ECBCF15AA62D044B6039FFF640DD71AD40BDB = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5));
	const uint32_t SizeOf_T4_t67AC00AF93B93F8979EEE590739A0DF4AAEE2EE3 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7));
	const uint32_t SizeOf_T5_t76A3327D5DFAE29A6A88ADC0A5DDC9720642E2AB = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 9));
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_T1_t1DAF9B0DCADCC79CF41C2003E5C592942F805E50);
	const Il2CppFullySharedGenericAny L_13 = alloca(SizeOf_T1_t1DAF9B0DCADCC79CF41C2003E5C592942F805E50);
	const Il2CppFullySharedGenericAny L_19 = alloca(SizeOf_T2_t9E1D5C5A88209EFE3B28D44A8BE5D6688608BF24);
	const Il2CppFullySharedGenericAny L_22 = alloca(SizeOf_T2_t9E1D5C5A88209EFE3B28D44A8BE5D6688608BF24);
	const Il2CppFullySharedGenericAny L_28 = alloca(SizeOf_T3_t4A7ECBCF15AA62D044B6039FFF640DD71AD40BDB);
	const Il2CppFullySharedGenericAny L_31 = alloca(SizeOf_T3_t4A7ECBCF15AA62D044B6039FFF640DD71AD40BDB);
	const Il2CppFullySharedGenericAny L_37 = alloca(SizeOf_T4_t67AC00AF93B93F8979EEE590739A0DF4AAEE2EE3);
	const Il2CppFullySharedGenericAny L_40 = alloca(SizeOf_T4_t67AC00AF93B93F8979EEE590739A0DF4AAEE2EE3);
	const Il2CppFullySharedGenericAny L_46 = alloca(SizeOf_T5_t76A3327D5DFAE29A6A88ADC0A5DDC9720642E2AB);
	const Il2CppFullySharedGenericAny L_49 = alloca(SizeOf_T5_t76A3327D5DFAE29A6A88ADC0A5DDC9720642E2AB);
	const ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56 L_2 = alloca(SizeOf_ValueTuple_5_t25CBC148656E3ACC2A136FE20FBBB109E8593794);
	const ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56 L_12 = L_2;
	const ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56 L_21 = L_2;
	const ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56 L_30 = L_2;
	const ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56 L_39 = L_2;
	const ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56 L_48 = L_2;
	ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56 V_0 = alloca(SizeOf_ValueTuple_5_t25CBC148656E3ACC2A136FE20FBBB109E8593794);
	memset(V_0, 0, SizeOf_ValueTuple_5_t25CBC148656E3ACC2A136FE20FBBB109E8593794);
	int32_t V_1 = 0;
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return 1;
	}

IL_0005:
	{
		RuntimeObject* L_1 = ___0_other;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_1, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1))))
		{
			goto IL_0037;
		}
	}
	{
		il2cpp_codegen_memcpy(L_2, __this, SizeOf_ValueTuple_5_t25CBC148656E3ACC2A136FE20FBBB109E8593794);
		RuntimeObject* L_3 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1), L_2);
		Type_t* L_4;
		L_4 = il2cpp_codegen_object_get_type(L_3);
		String_t* L_5;
		L_5 = VirtualFuncInvoker0< String_t* >::Invoke(3, L_4);
		String_t* L_6;
		L_6 = SR_Format_m9E8DC9AEFDC34AC67473EFAEAB78C5066C1A0D09(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1459AD7D3E0F8808A85528961118835E18AD1F96)), L_5, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_7 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_7, L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, method);
	}

IL_0037:
	{
		RuntimeObject* L_8 = ___0_other;
		il2cpp_codegen_memcpy(V_0, (((ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56)(ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56*)UnBox(L_8, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1)))), SizeOf_ValueTuple_5_t25CBC148656E3ACC2A136FE20FBBB109E8593794);
		RuntimeObject* L_9 = ___1_comparer;
		il2cpp_codegen_memcpy(L_10, il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2)), SizeOf_T1_t1DAF9B0DCADCC79CF41C2003E5C592942F805E50);
		RuntimeObject* L_11 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0), L_10);
		il2cpp_codegen_memcpy(L_12, V_0, SizeOf_ValueTuple_5_t25CBC148656E3ACC2A136FE20FBBB109E8593794);
		il2cpp_codegen_memcpy(L_13, il2cpp_codegen_get_field_data_pointer(L_12, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2)), SizeOf_T1_t1DAF9B0DCADCC79CF41C2003E5C592942F805E50);
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0), L_13);
		int32_t L_15;
		L_15 = InterfaceFuncInvoker2< int32_t, RuntimeObject*, RuntimeObject* >::Invoke(0, IComparer_tE7497C3BE3F68A5A2DCEBF0DAD7D13D738FE7BAD_il2cpp_TypeInfo_var, L_9, L_11, L_14);
		V_1 = L_15;
		int32_t L_16 = V_1;
		if (!L_16)
		{
			goto IL_0060;
		}
	}
	{
		int32_t L_17 = V_1;
		return L_17;
	}

IL_0060:
	{
		RuntimeObject* L_18 = ___1_comparer;
		il2cpp_codegen_memcpy(L_19, il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4)), SizeOf_T2_t9E1D5C5A88209EFE3B28D44A8BE5D6688608BF24);
		RuntimeObject* L_20 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3), L_19);
		il2cpp_codegen_memcpy(L_21, V_0, SizeOf_ValueTuple_5_t25CBC148656E3ACC2A136FE20FBBB109E8593794);
		il2cpp_codegen_memcpy(L_22, il2cpp_codegen_get_field_data_pointer(L_21, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4)), SizeOf_T2_t9E1D5C5A88209EFE3B28D44A8BE5D6688608BF24);
		RuntimeObject* L_23 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3), L_22);
		int32_t L_24;
		L_24 = InterfaceFuncInvoker2< int32_t, RuntimeObject*, RuntimeObject* >::Invoke(0, IComparer_tE7497C3BE3F68A5A2DCEBF0DAD7D13D738FE7BAD_il2cpp_TypeInfo_var, L_18, L_20, L_23);
		V_1 = L_24;
		int32_t L_25 = V_1;
		if (!L_25)
		{
			goto IL_0082;
		}
	}
	{
		int32_t L_26 = V_1;
		return L_26;
	}

IL_0082:
	{
		RuntimeObject* L_27 = ___1_comparer;
		il2cpp_codegen_memcpy(L_28, il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6)), SizeOf_T3_t4A7ECBCF15AA62D044B6039FFF640DD71AD40BDB);
		RuntimeObject* L_29 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5), L_28);
		il2cpp_codegen_memcpy(L_30, V_0, SizeOf_ValueTuple_5_t25CBC148656E3ACC2A136FE20FBBB109E8593794);
		il2cpp_codegen_memcpy(L_31, il2cpp_codegen_get_field_data_pointer(L_30, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6)), SizeOf_T3_t4A7ECBCF15AA62D044B6039FFF640DD71AD40BDB);
		RuntimeObject* L_32 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5), L_31);
		int32_t L_33;
		L_33 = InterfaceFuncInvoker2< int32_t, RuntimeObject*, RuntimeObject* >::Invoke(0, IComparer_tE7497C3BE3F68A5A2DCEBF0DAD7D13D738FE7BAD_il2cpp_TypeInfo_var, L_27, L_29, L_32);
		V_1 = L_33;
		int32_t L_34 = V_1;
		if (!L_34)
		{
			goto IL_00a4;
		}
	}
	{
		int32_t L_35 = V_1;
		return L_35;
	}

IL_00a4:
	{
		RuntimeObject* L_36 = ___1_comparer;
		il2cpp_codegen_memcpy(L_37, il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8)), SizeOf_T4_t67AC00AF93B93F8979EEE590739A0DF4AAEE2EE3);
		RuntimeObject* L_38 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7), L_37);
		il2cpp_codegen_memcpy(L_39, V_0, SizeOf_ValueTuple_5_t25CBC148656E3ACC2A136FE20FBBB109E8593794);
		il2cpp_codegen_memcpy(L_40, il2cpp_codegen_get_field_data_pointer(L_39, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8)), SizeOf_T4_t67AC00AF93B93F8979EEE590739A0DF4AAEE2EE3);
		RuntimeObject* L_41 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7), L_40);
		int32_t L_42;
		L_42 = InterfaceFuncInvoker2< int32_t, RuntimeObject*, RuntimeObject* >::Invoke(0, IComparer_tE7497C3BE3F68A5A2DCEBF0DAD7D13D738FE7BAD_il2cpp_TypeInfo_var, L_36, L_38, L_41);
		V_1 = L_42;
		int32_t L_43 = V_1;
		if (!L_43)
		{
			goto IL_00c6;
		}
	}
	{
		int32_t L_44 = V_1;
		return L_44;
	}

IL_00c6:
	{
		RuntimeObject* L_45 = ___1_comparer;
		il2cpp_codegen_memcpy(L_46, il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 10)), SizeOf_T5_t76A3327D5DFAE29A6A88ADC0A5DDC9720642E2AB);
		RuntimeObject* L_47 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 9), L_46);
		il2cpp_codegen_memcpy(L_48, V_0, SizeOf_ValueTuple_5_t25CBC148656E3ACC2A136FE20FBBB109E8593794);
		il2cpp_codegen_memcpy(L_49, il2cpp_codegen_get_field_data_pointer(L_48, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 10)), SizeOf_T5_t76A3327D5DFAE29A6A88ADC0A5DDC9720642E2AB);
		RuntimeObject* L_50 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 9), L_49);
		int32_t L_51;
		L_51 = InterfaceFuncInvoker2< int32_t, RuntimeObject*, RuntimeObject* >::Invoke(0, IComparer_tE7497C3BE3F68A5A2DCEBF0DAD7D13D738FE7BAD_il2cpp_TypeInfo_var, L_45, L_47, L_50);
		return L_51;
	}
}
IL2CPP_EXTERN_C  int32_t ValueTuple_5_System_Collections_IStructuralComparable_CompareTo_mF83475B1821A3AE012364E6215C27FFFF25A399E_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_other, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56>(__this);
	int32_t _returnValue;
	_returnValue = ValueTuple_5_System_Collections_IStructuralComparable_CompareTo_mF83475B1821A3AE012364E6215C27FFFF25A399E(_thisAdjusted, ___0_other, ___1_comparer, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_5_GetHashCode_m7B00692478B9218079F0364A02363A500A3202B0_fshared (ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_T1_t1DAF9B0DCADCC79CF41C2003E5C592942F805E50 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0));
	const uint32_t SizeOf_T2_t9E1D5C5A88209EFE3B28D44A8BE5D6688608BF24 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3));
	const uint32_t SizeOf_T3_t4A7ECBCF15AA62D044B6039FFF640DD71AD40BDB = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5));
	const uint32_t SizeOf_T4_t67AC00AF93B93F8979EEE590739A0DF4AAEE2EE3 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7));
	const uint32_t SizeOf_T5_t76A3327D5DFAE29A6A88ADC0A5DDC9720642E2AB = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 9));
	void* L_5 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)));
	void* L_15 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)));
	void* L_25 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5)));
	void* L_35 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7)));
	void* L_45 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 9)));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_T1_t1DAF9B0DCADCC79CF41C2003E5C592942F805E50);
	const Il2CppFullySharedGenericAny L_2 = L_0;
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T1_t1DAF9B0DCADCC79CF41C2003E5C592942F805E50);
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_T2_t9E1D5C5A88209EFE3B28D44A8BE5D6688608BF24);
	const Il2CppFullySharedGenericAny L_12 = L_10;
	const Il2CppFullySharedGenericAny L_13 = alloca(SizeOf_T2_t9E1D5C5A88209EFE3B28D44A8BE5D6688608BF24);
	const Il2CppFullySharedGenericAny L_20 = alloca(SizeOf_T3_t4A7ECBCF15AA62D044B6039FFF640DD71AD40BDB);
	const Il2CppFullySharedGenericAny L_22 = L_20;
	const Il2CppFullySharedGenericAny L_23 = alloca(SizeOf_T3_t4A7ECBCF15AA62D044B6039FFF640DD71AD40BDB);
	const Il2CppFullySharedGenericAny L_30 = alloca(SizeOf_T4_t67AC00AF93B93F8979EEE590739A0DF4AAEE2EE3);
	const Il2CppFullySharedGenericAny L_32 = L_30;
	const Il2CppFullySharedGenericAny L_33 = alloca(SizeOf_T4_t67AC00AF93B93F8979EEE590739A0DF4AAEE2EE3);
	const Il2CppFullySharedGenericAny L_40 = alloca(SizeOf_T5_t76A3327D5DFAE29A6A88ADC0A5DDC9720642E2AB);
	const Il2CppFullySharedGenericAny L_42 = L_40;
	const Il2CppFullySharedGenericAny L_43 = alloca(SizeOf_T5_t76A3327D5DFAE29A6A88ADC0A5DDC9720642E2AB);
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_T1_t1DAF9B0DCADCC79CF41C2003E5C592942F805E50);
	memset(V_0, 0, SizeOf_T1_t1DAF9B0DCADCC79CF41C2003E5C592942F805E50);
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_T2_t9E1D5C5A88209EFE3B28D44A8BE5D6688608BF24);
	memset(V_1, 0, SizeOf_T2_t9E1D5C5A88209EFE3B28D44A8BE5D6688608BF24);
	Il2CppFullySharedGenericAny V_2 = alloca(SizeOf_T3_t4A7ECBCF15AA62D044B6039FFF640DD71AD40BDB);
	memset(V_2, 0, SizeOf_T3_t4A7ECBCF15AA62D044B6039FFF640DD71AD40BDB);
	Il2CppFullySharedGenericAny V_3 = alloca(SizeOf_T4_t67AC00AF93B93F8979EEE590739A0DF4AAEE2EE3);
	memset(V_3, 0, SizeOf_T4_t67AC00AF93B93F8979EEE590739A0DF4AAEE2EE3);
	Il2CppFullySharedGenericAny V_4 = alloca(SizeOf_T5_t76A3327D5DFAE29A6A88ADC0A5DDC9720642E2AB);
	memset(V_4, 0, SizeOf_T5_t76A3327D5DFAE29A6A88ADC0A5DDC9720642E2AB);
	Il2CppFullySharedGenericAny* G_B3_0 = NULL;
	Il2CppFullySharedGenericAny* G_B1_0 = NULL;
	Il2CppFullySharedGenericAny G_B2_0 = alloca(SizeOf_T1_t1DAF9B0DCADCC79CF41C2003E5C592942F805E50);
	memset(G_B2_0, 0, SizeOf_T1_t1DAF9B0DCADCC79CF41C2003E5C592942F805E50);
	int32_t G_B4_0 = 0;
	Il2CppFullySharedGenericAny* G_B7_0 = NULL;
	int32_t G_B7_1 = 0;
	Il2CppFullySharedGenericAny* G_B5_0 = NULL;
	int32_t G_B5_1 = 0;
	Il2CppFullySharedGenericAny G_B6_0 = alloca(SizeOf_T2_t9E1D5C5A88209EFE3B28D44A8BE5D6688608BF24);
	memset(G_B6_0, 0, SizeOf_T2_t9E1D5C5A88209EFE3B28D44A8BE5D6688608BF24);
	int32_t G_B6_1 = 0;
	int32_t G_B8_0 = 0;
	int32_t G_B8_1 = 0;
	Il2CppFullySharedGenericAny* G_B11_0 = NULL;
	int32_t G_B11_1 = 0;
	int32_t G_B11_2 = 0;
	Il2CppFullySharedGenericAny* G_B9_0 = NULL;
	int32_t G_B9_1 = 0;
	int32_t G_B9_2 = 0;
	Il2CppFullySharedGenericAny G_B10_0 = alloca(SizeOf_T3_t4A7ECBCF15AA62D044B6039FFF640DD71AD40BDB);
	memset(G_B10_0, 0, SizeOf_T3_t4A7ECBCF15AA62D044B6039FFF640DD71AD40BDB);
	int32_t G_B10_1 = 0;
	int32_t G_B10_2 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B12_1 = 0;
	int32_t G_B12_2 = 0;
	Il2CppFullySharedGenericAny* G_B15_0 = NULL;
	int32_t G_B15_1 = 0;
	int32_t G_B15_2 = 0;
	int32_t G_B15_3 = 0;
	Il2CppFullySharedGenericAny* G_B13_0 = NULL;
	int32_t G_B13_1 = 0;
	int32_t G_B13_2 = 0;
	int32_t G_B13_3 = 0;
	Il2CppFullySharedGenericAny G_B14_0 = alloca(SizeOf_T4_t67AC00AF93B93F8979EEE590739A0DF4AAEE2EE3);
	memset(G_B14_0, 0, SizeOf_T4_t67AC00AF93B93F8979EEE590739A0DF4AAEE2EE3);
	int32_t G_B14_1 = 0;
	int32_t G_B14_2 = 0;
	int32_t G_B14_3 = 0;
	int32_t G_B16_0 = 0;
	int32_t G_B16_1 = 0;
	int32_t G_B16_2 = 0;
	int32_t G_B16_3 = 0;
	Il2CppFullySharedGenericAny* G_B19_0 = NULL;
	int32_t G_B19_1 = 0;
	int32_t G_B19_2 = 0;
	int32_t G_B19_3 = 0;
	int32_t G_B19_4 = 0;
	Il2CppFullySharedGenericAny* G_B17_0 = NULL;
	int32_t G_B17_1 = 0;
	int32_t G_B17_2 = 0;
	int32_t G_B17_3 = 0;
	int32_t G_B17_4 = 0;
	Il2CppFullySharedGenericAny G_B18_0 = alloca(SizeOf_T5_t76A3327D5DFAE29A6A88ADC0A5DDC9720642E2AB);
	memset(G_B18_0, 0, SizeOf_T5_t76A3327D5DFAE29A6A88ADC0A5DDC9720642E2AB);
	int32_t G_B18_1 = 0;
	int32_t G_B18_2 = 0;
	int32_t G_B18_3 = 0;
	int32_t G_B18_4 = 0;
	int32_t G_B20_0 = 0;
	int32_t G_B20_1 = 0;
	int32_t G_B20_2 = 0;
	int32_t G_B20_3 = 0;
	int32_t G_B20_4 = 0;
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_0, SizeOf_T1_t1DAF9B0DCADCC79CF41C2003E5C592942F805E50);
		il2cpp_codegen_memcpy(L_0, V_0, SizeOf_T1_t1DAF9B0DCADCC79CF41C2003E5C592942F805E50);
		bool L_1 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0), L_0);
		if (L_1)
		{
			G_B3_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2)))));
			goto IL_002a;
		}
		G_B1_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2)))));
	}
	{
		il2cpp_codegen_memcpy(L_2, G_B1_0, SizeOf_T1_t1DAF9B0DCADCC79CF41C2003E5C592942F805E50);
		il2cpp_codegen_memcpy(V_0, L_2, SizeOf_T1_t1DAF9B0DCADCC79CF41C2003E5C592942F805E50);
		il2cpp_codegen_memcpy(L_3, V_0, SizeOf_T1_t1DAF9B0DCADCC79CF41C2003E5C592942F805E50);
		bool L_4 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0), L_3);
		if (L_4)
		{
			G_B3_0 = ((Il2CppFullySharedGenericAny*)(Il2CppFullySharedGenericAny*)V_0);
			goto IL_002a;
		}
		il2cpp_codegen_memcpy(G_B2_0, (Il2CppFullySharedGenericAny*)V_0, SizeOf_T1_t1DAF9B0DCADCC79CF41C2003E5C592942F805E50);
	}
	{
		G_B4_0 = 0;
		goto IL_0035;
	}

IL_002a:
	{
		Il2CppConstrainedCallData L_6;
		Il2CppMethodPointer L_7 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 23), (void*)G_B3_0, &L_6, L_5);
		typedef int32_t ( *func_L_8)(void*,const RuntimeMethod*);
		int32_t L_9 = ((func_L_8)L_7)(L_6.thisPtr,L_6.method);
		G_B4_0 = L_9;
	}

IL_0035:
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_1, SizeOf_T2_t9E1D5C5A88209EFE3B28D44A8BE5D6688608BF24);
		il2cpp_codegen_memcpy(L_10, V_1, SizeOf_T2_t9E1D5C5A88209EFE3B28D44A8BE5D6688608BF24);
		bool L_11 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3), L_10);
		if (L_11)
		{
			G_B7_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4)))));
			G_B7_1 = G_B4_0;
			goto IL_005f;
		}
		G_B5_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4)))));
		G_B5_1 = G_B4_0;
	}
	{
		il2cpp_codegen_memcpy(L_12, G_B5_0, SizeOf_T2_t9E1D5C5A88209EFE3B28D44A8BE5D6688608BF24);
		il2cpp_codegen_memcpy(V_1, L_12, SizeOf_T2_t9E1D5C5A88209EFE3B28D44A8BE5D6688608BF24);
		il2cpp_codegen_memcpy(L_13, V_1, SizeOf_T2_t9E1D5C5A88209EFE3B28D44A8BE5D6688608BF24);
		bool L_14 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3), L_13);
		if (L_14)
		{
			G_B7_0 = ((Il2CppFullySharedGenericAny*)(Il2CppFullySharedGenericAny*)V_1);
			G_B7_1 = G_B5_1;
			goto IL_005f;
		}
		il2cpp_codegen_memcpy(G_B6_0, (Il2CppFullySharedGenericAny*)V_1, SizeOf_T2_t9E1D5C5A88209EFE3B28D44A8BE5D6688608BF24);
		G_B6_1 = G_B5_1;
	}
	{
		G_B8_0 = 0;
		G_B8_1 = G_B6_1;
		goto IL_006a;
	}

IL_005f:
	{
		Il2CppConstrainedCallData L_16;
		Il2CppMethodPointer L_17 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 24), (void*)G_B7_0, &L_16, L_15);
		typedef int32_t ( *func_L_18)(void*,const RuntimeMethod*);
		int32_t L_19 = ((func_L_18)L_17)(L_16.thisPtr,L_16.method);
		G_B8_0 = L_19;
		G_B8_1 = G_B7_1;
	}

IL_006a:
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_2, SizeOf_T3_t4A7ECBCF15AA62D044B6039FFF640DD71AD40BDB);
		il2cpp_codegen_memcpy(L_20, V_2, SizeOf_T3_t4A7ECBCF15AA62D044B6039FFF640DD71AD40BDB);
		bool L_21 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5), L_20);
		if (L_21)
		{
			G_B11_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6)))));
			G_B11_1 = G_B8_0;
			G_B11_2 = G_B8_1;
			goto IL_0094;
		}
		G_B9_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6)))));
		G_B9_1 = G_B8_0;
		G_B9_2 = G_B8_1;
	}
	{
		il2cpp_codegen_memcpy(L_22, G_B9_0, SizeOf_T3_t4A7ECBCF15AA62D044B6039FFF640DD71AD40BDB);
		il2cpp_codegen_memcpy(V_2, L_22, SizeOf_T3_t4A7ECBCF15AA62D044B6039FFF640DD71AD40BDB);
		il2cpp_codegen_memcpy(L_23, V_2, SizeOf_T3_t4A7ECBCF15AA62D044B6039FFF640DD71AD40BDB);
		bool L_24 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5), L_23);
		if (L_24)
		{
			G_B11_0 = ((Il2CppFullySharedGenericAny*)(Il2CppFullySharedGenericAny*)V_2);
			G_B11_1 = G_B9_1;
			G_B11_2 = G_B9_2;
			goto IL_0094;
		}
		il2cpp_codegen_memcpy(G_B10_0, (Il2CppFullySharedGenericAny*)V_2, SizeOf_T3_t4A7ECBCF15AA62D044B6039FFF640DD71AD40BDB);
		G_B10_1 = G_B9_1;
		G_B10_2 = G_B9_2;
	}
	{
		G_B12_0 = 0;
		G_B12_1 = G_B10_1;
		G_B12_2 = G_B10_2;
		goto IL_009f;
	}

IL_0094:
	{
		Il2CppConstrainedCallData L_26;
		Il2CppMethodPointer L_27 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 25), (void*)G_B11_0, &L_26, L_25);
		typedef int32_t ( *func_L_28)(void*,const RuntimeMethod*);
		int32_t L_29 = ((func_L_28)L_27)(L_26.thisPtr,L_26.method);
		G_B12_0 = L_29;
		G_B12_1 = G_B11_1;
		G_B12_2 = G_B11_2;
	}

IL_009f:
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_3, SizeOf_T4_t67AC00AF93B93F8979EEE590739A0DF4AAEE2EE3);
		il2cpp_codegen_memcpy(L_30, V_3, SizeOf_T4_t67AC00AF93B93F8979EEE590739A0DF4AAEE2EE3);
		bool L_31 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7), L_30);
		if (L_31)
		{
			G_B15_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8)))));
			G_B15_1 = G_B12_0;
			G_B15_2 = G_B12_1;
			G_B15_3 = G_B12_2;
			goto IL_00c9;
		}
		G_B13_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8)))));
		G_B13_1 = G_B12_0;
		G_B13_2 = G_B12_1;
		G_B13_3 = G_B12_2;
	}
	{
		il2cpp_codegen_memcpy(L_32, G_B13_0, SizeOf_T4_t67AC00AF93B93F8979EEE590739A0DF4AAEE2EE3);
		il2cpp_codegen_memcpy(V_3, L_32, SizeOf_T4_t67AC00AF93B93F8979EEE590739A0DF4AAEE2EE3);
		il2cpp_codegen_memcpy(L_33, V_3, SizeOf_T4_t67AC00AF93B93F8979EEE590739A0DF4AAEE2EE3);
		bool L_34 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7), L_33);
		if (L_34)
		{
			G_B15_0 = ((Il2CppFullySharedGenericAny*)(Il2CppFullySharedGenericAny*)V_3);
			G_B15_1 = G_B13_1;
			G_B15_2 = G_B13_2;
			G_B15_3 = G_B13_3;
			goto IL_00c9;
		}
		il2cpp_codegen_memcpy(G_B14_0, (Il2CppFullySharedGenericAny*)V_3, SizeOf_T4_t67AC00AF93B93F8979EEE590739A0DF4AAEE2EE3);
		G_B14_1 = G_B13_1;
		G_B14_2 = G_B13_2;
		G_B14_3 = G_B13_3;
	}
	{
		G_B16_0 = 0;
		G_B16_1 = G_B14_1;
		G_B16_2 = G_B14_2;
		G_B16_3 = G_B14_3;
		goto IL_00d4;
	}

IL_00c9:
	{
		Il2CppConstrainedCallData L_36;
		Il2CppMethodPointer L_37 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 26), (void*)G_B15_0, &L_36, L_35);
		typedef int32_t ( *func_L_38)(void*,const RuntimeMethod*);
		int32_t L_39 = ((func_L_38)L_37)(L_36.thisPtr,L_36.method);
		G_B16_0 = L_39;
		G_B16_1 = G_B15_1;
		G_B16_2 = G_B15_2;
		G_B16_3 = G_B15_3;
	}

IL_00d4:
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_4, SizeOf_T5_t76A3327D5DFAE29A6A88ADC0A5DDC9720642E2AB);
		il2cpp_codegen_memcpy(L_40, V_4, SizeOf_T5_t76A3327D5DFAE29A6A88ADC0A5DDC9720642E2AB);
		bool L_41 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 9), L_40);
		if (L_41)
		{
			G_B19_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 10)))));
			G_B19_1 = G_B16_0;
			G_B19_2 = G_B16_1;
			G_B19_3 = G_B16_2;
			G_B19_4 = G_B16_3;
			goto IL_0101;
		}
		G_B17_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 10)))));
		G_B17_1 = G_B16_0;
		G_B17_2 = G_B16_1;
		G_B17_3 = G_B16_2;
		G_B17_4 = G_B16_3;
	}
	{
		il2cpp_codegen_memcpy(L_42, G_B17_0, SizeOf_T5_t76A3327D5DFAE29A6A88ADC0A5DDC9720642E2AB);
		il2cpp_codegen_memcpy(V_4, L_42, SizeOf_T5_t76A3327D5DFAE29A6A88ADC0A5DDC9720642E2AB);
		il2cpp_codegen_memcpy(L_43, V_4, SizeOf_T5_t76A3327D5DFAE29A6A88ADC0A5DDC9720642E2AB);
		bool L_44 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 9), L_43);
		if (L_44)
		{
			G_B19_0 = ((Il2CppFullySharedGenericAny*)(Il2CppFullySharedGenericAny*)V_4);
			G_B19_1 = G_B17_1;
			G_B19_2 = G_B17_2;
			G_B19_3 = G_B17_3;
			G_B19_4 = G_B17_4;
			goto IL_0101;
		}
		il2cpp_codegen_memcpy(G_B18_0, (Il2CppFullySharedGenericAny*)V_4, SizeOf_T5_t76A3327D5DFAE29A6A88ADC0A5DDC9720642E2AB);
		G_B18_1 = G_B17_1;
		G_B18_2 = G_B17_2;
		G_B18_3 = G_B17_3;
		G_B18_4 = G_B17_4;
	}
	{
		G_B20_0 = 0;
		G_B20_1 = G_B18_1;
		G_B20_2 = G_B18_2;
		G_B20_3 = G_B18_3;
		G_B20_4 = G_B18_4;
		goto IL_010c;
	}

IL_0101:
	{
		Il2CppConstrainedCallData L_46;
		Il2CppMethodPointer L_47 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 9), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 27), (void*)G_B19_0, &L_46, L_45);
		typedef int32_t ( *func_L_48)(void*,const RuntimeMethod*);
		int32_t L_49 = ((func_L_48)L_47)(L_46.thisPtr,L_46.method);
		G_B20_0 = L_49;
		G_B20_1 = G_B19_1;
		G_B20_2 = G_B19_2;
		G_B20_3 = G_B19_3;
		G_B20_4 = G_B19_4;
	}

IL_010c:
	{
		int32_t L_50;
		L_50 = ValueTuple_CombineHashCodes_m60E50AC57049CAC8E58C145BDC9022989DD8BF4A(G_B20_4, G_B20_3, G_B20_2, G_B20_1, G_B20_0, NULL);
		return L_50;
	}
}
IL2CPP_EXTERN_C  int32_t ValueTuple_5_GetHashCode_m7B00692478B9218079F0364A02363A500A3202B0_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56>(__this);
	int32_t _returnValue;
	_returnValue = ValueTuple_5_GetHashCode_m7B00692478B9218079F0364A02363A500A3202B0(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_5_System_Collections_IStructuralEquatable_GetHashCode_mBA5888BE2DA308AEA1CCE2C0E702F5DF77975E7C_fshared (ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	{
		RuntimeObject* L_0 = ___0_comparer;
		int32_t L_1;
		L_1 = ((  int32_t (*) (ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 28)))(__this, L_0, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 28));
		return L_1;
	}
}
IL2CPP_EXTERN_C  int32_t ValueTuple_5_System_Collections_IStructuralEquatable_GetHashCode_mBA5888BE2DA308AEA1CCE2C0E702F5DF77975E7C_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method)
{
	ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56>(__this);
	int32_t _returnValue;
	_returnValue = ValueTuple_5_System_Collections_IStructuralEquatable_GetHashCode_mBA5888BE2DA308AEA1CCE2C0E702F5DF77975E7C(_thisAdjusted, ___0_comparer, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_5_GetHashCodeCore_mCAC2EA3BE3C748840BE08F742B272274BB7E171A_fshared (ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_T1_t1DAF9B0DCADCC79CF41C2003E5C592942F805E50 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0));
	const uint32_t SizeOf_T2_t9E1D5C5A88209EFE3B28D44A8BE5D6688608BF24 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3));
	const uint32_t SizeOf_T3_t4A7ECBCF15AA62D044B6039FFF640DD71AD40BDB = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5));
	const uint32_t SizeOf_T4_t67AC00AF93B93F8979EEE590739A0DF4AAEE2EE3 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7));
	const uint32_t SizeOf_T5_t76A3327D5DFAE29A6A88ADC0A5DDC9720642E2AB = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 9));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T1_t1DAF9B0DCADCC79CF41C2003E5C592942F805E50);
	const Il2CppFullySharedGenericAny L_5 = alloca(SizeOf_T2_t9E1D5C5A88209EFE3B28D44A8BE5D6688608BF24);
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_T3_t4A7ECBCF15AA62D044B6039FFF640DD71AD40BDB);
	const Il2CppFullySharedGenericAny L_13 = alloca(SizeOf_T4_t67AC00AF93B93F8979EEE590739A0DF4AAEE2EE3);
	const Il2CppFullySharedGenericAny L_17 = alloca(SizeOf_T5_t76A3327D5DFAE29A6A88ADC0A5DDC9720642E2AB);
	{
		RuntimeObject* L_0 = ___0_comparer;
		il2cpp_codegen_memcpy(L_1, il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2)), SizeOf_T1_t1DAF9B0DCADCC79CF41C2003E5C592942F805E50);
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0), L_1);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_0, L_2);
		RuntimeObject* L_4 = ___0_comparer;
		il2cpp_codegen_memcpy(L_5, il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4)), SizeOf_T2_t9E1D5C5A88209EFE3B28D44A8BE5D6688608BF24);
		RuntimeObject* L_6 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3), L_5);
		int32_t L_7;
		L_7 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_4, L_6);
		RuntimeObject* L_8 = ___0_comparer;
		il2cpp_codegen_memcpy(L_9, il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6)), SizeOf_T3_t4A7ECBCF15AA62D044B6039FFF640DD71AD40BDB);
		RuntimeObject* L_10 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5), L_9);
		int32_t L_11;
		L_11 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_8, L_10);
		RuntimeObject* L_12 = ___0_comparer;
		il2cpp_codegen_memcpy(L_13, il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8)), SizeOf_T4_t67AC00AF93B93F8979EEE590739A0DF4AAEE2EE3);
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7), L_13);
		int32_t L_15;
		L_15 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_12, L_14);
		RuntimeObject* L_16 = ___0_comparer;
		il2cpp_codegen_memcpy(L_17, il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 10)), SizeOf_T5_t76A3327D5DFAE29A6A88ADC0A5DDC9720642E2AB);
		RuntimeObject* L_18 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 9), L_17);
		int32_t L_19;
		L_19 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_16, L_18);
		int32_t L_20;
		L_20 = ValueTuple_CombineHashCodes_m60E50AC57049CAC8E58C145BDC9022989DD8BF4A(L_3, L_7, L_11, L_15, L_19, NULL);
		return L_20;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ValueTuple_5_ToString_m7265BEA8B1A29B537886BB6BEE00D1A154F8D814_fshared (ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_T1_t1DAF9B0DCADCC79CF41C2003E5C592942F805E50 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0));
	const uint32_t SizeOf_T2_t9E1D5C5A88209EFE3B28D44A8BE5D6688608BF24 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3));
	const uint32_t SizeOf_T3_t4A7ECBCF15AA62D044B6039FFF640DD71AD40BDB = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5));
	const uint32_t SizeOf_T4_t67AC00AF93B93F8979EEE590739A0DF4AAEE2EE3 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7));
	const uint32_t SizeOf_T5_t76A3327D5DFAE29A6A88ADC0A5DDC9720642E2AB = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 9));
	void* L_8 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)));
	void* L_20 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)));
	void* L_32 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5)));
	void* L_44 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7)));
	void* L_56 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 9)));
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T1_t1DAF9B0DCADCC79CF41C2003E5C592942F805E50);
	const Il2CppFullySharedGenericAny L_5 = L_3;
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_T1_t1DAF9B0DCADCC79CF41C2003E5C592942F805E50);
	const Il2CppFullySharedGenericAny L_15 = alloca(SizeOf_T2_t9E1D5C5A88209EFE3B28D44A8BE5D6688608BF24);
	const Il2CppFullySharedGenericAny L_17 = L_15;
	const Il2CppFullySharedGenericAny L_18 = alloca(SizeOf_T2_t9E1D5C5A88209EFE3B28D44A8BE5D6688608BF24);
	const Il2CppFullySharedGenericAny L_27 = alloca(SizeOf_T3_t4A7ECBCF15AA62D044B6039FFF640DD71AD40BDB);
	const Il2CppFullySharedGenericAny L_29 = L_27;
	const Il2CppFullySharedGenericAny L_30 = alloca(SizeOf_T3_t4A7ECBCF15AA62D044B6039FFF640DD71AD40BDB);
	const Il2CppFullySharedGenericAny L_39 = alloca(SizeOf_T4_t67AC00AF93B93F8979EEE590739A0DF4AAEE2EE3);
	const Il2CppFullySharedGenericAny L_41 = L_39;
	const Il2CppFullySharedGenericAny L_42 = alloca(SizeOf_T4_t67AC00AF93B93F8979EEE590739A0DF4AAEE2EE3);
	const Il2CppFullySharedGenericAny L_51 = alloca(SizeOf_T5_t76A3327D5DFAE29A6A88ADC0A5DDC9720642E2AB);
	const Il2CppFullySharedGenericAny L_53 = L_51;
	const Il2CppFullySharedGenericAny L_54 = alloca(SizeOf_T5_t76A3327D5DFAE29A6A88ADC0A5DDC9720642E2AB);
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_T1_t1DAF9B0DCADCC79CF41C2003E5C592942F805E50);
	memset(V_0, 0, SizeOf_T1_t1DAF9B0DCADCC79CF41C2003E5C592942F805E50);
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_T2_t9E1D5C5A88209EFE3B28D44A8BE5D6688608BF24);
	memset(V_1, 0, SizeOf_T2_t9E1D5C5A88209EFE3B28D44A8BE5D6688608BF24);
	Il2CppFullySharedGenericAny V_2 = alloca(SizeOf_T3_t4A7ECBCF15AA62D044B6039FFF640DD71AD40BDB);
	memset(V_2, 0, SizeOf_T3_t4A7ECBCF15AA62D044B6039FFF640DD71AD40BDB);
	Il2CppFullySharedGenericAny V_3 = alloca(SizeOf_T4_t67AC00AF93B93F8979EEE590739A0DF4AAEE2EE3);
	memset(V_3, 0, SizeOf_T4_t67AC00AF93B93F8979EEE590739A0DF4AAEE2EE3);
	Il2CppFullySharedGenericAny V_4 = alloca(SizeOf_T5_t76A3327D5DFAE29A6A88ADC0A5DDC9720642E2AB);
	memset(V_4, 0, SizeOf_T5_t76A3327D5DFAE29A6A88ADC0A5DDC9720642E2AB);
	Il2CppFullySharedGenericAny* G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B3_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B3_3 = NULL;
	Il2CppFullySharedGenericAny* G_B1_0 = NULL;
	int32_t G_B1_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B1_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B1_3 = NULL;
	Il2CppFullySharedGenericAny G_B2_0 = alloca(SizeOf_T1_t1DAF9B0DCADCC79CF41C2003E5C592942F805E50);
	memset(G_B2_0, 0, SizeOf_T1_t1DAF9B0DCADCC79CF41C2003E5C592942F805E50);
	int32_t G_B2_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B2_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B2_3 = NULL;
	String_t* G_B4_0 = NULL;
	int32_t G_B4_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B4_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B4_3 = NULL;
	Il2CppFullySharedGenericAny* G_B7_0 = NULL;
	int32_t G_B7_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B7_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B7_3 = NULL;
	Il2CppFullySharedGenericAny* G_B5_0 = NULL;
	int32_t G_B5_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B5_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B5_3 = NULL;
	Il2CppFullySharedGenericAny G_B6_0 = alloca(SizeOf_T2_t9E1D5C5A88209EFE3B28D44A8BE5D6688608BF24);
	memset(G_B6_0, 0, SizeOf_T2_t9E1D5C5A88209EFE3B28D44A8BE5D6688608BF24);
	int32_t G_B6_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B6_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B6_3 = NULL;
	String_t* G_B8_0 = NULL;
	int32_t G_B8_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B8_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B8_3 = NULL;
	Il2CppFullySharedGenericAny* G_B11_0 = NULL;
	int32_t G_B11_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B11_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B11_3 = NULL;
	Il2CppFullySharedGenericAny* G_B9_0 = NULL;
	int32_t G_B9_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B9_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B9_3 = NULL;
	Il2CppFullySharedGenericAny G_B10_0 = alloca(SizeOf_T3_t4A7ECBCF15AA62D044B6039FFF640DD71AD40BDB);
	memset(G_B10_0, 0, SizeOf_T3_t4A7ECBCF15AA62D044B6039FFF640DD71AD40BDB);
	int32_t G_B10_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B10_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B10_3 = NULL;
	String_t* G_B12_0 = NULL;
	int32_t G_B12_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B12_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B12_3 = NULL;
	Il2CppFullySharedGenericAny* G_B15_0 = NULL;
	int32_t G_B15_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B15_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B15_3 = NULL;
	Il2CppFullySharedGenericAny* G_B13_0 = NULL;
	int32_t G_B13_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B13_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B13_3 = NULL;
	Il2CppFullySharedGenericAny G_B14_0 = alloca(SizeOf_T4_t67AC00AF93B93F8979EEE590739A0DF4AAEE2EE3);
	memset(G_B14_0, 0, SizeOf_T4_t67AC00AF93B93F8979EEE590739A0DF4AAEE2EE3);
	int32_t G_B14_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B14_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B14_3 = NULL;
	String_t* G_B16_0 = NULL;
	int32_t G_B16_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B16_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B16_3 = NULL;
	Il2CppFullySharedGenericAny* G_B19_0 = NULL;
	int32_t G_B19_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B19_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B19_3 = NULL;
	Il2CppFullySharedGenericAny* G_B17_0 = NULL;
	int32_t G_B17_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B17_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B17_3 = NULL;
	Il2CppFullySharedGenericAny G_B18_0 = alloca(SizeOf_T5_t76A3327D5DFAE29A6A88ADC0A5DDC9720642E2AB);
	memset(G_B18_0, 0, SizeOf_T5_t76A3327D5DFAE29A6A88ADC0A5DDC9720642E2AB);
	int32_t G_B18_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B18_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B18_3 = NULL;
	String_t* G_B20_0 = NULL;
	int32_t G_B20_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B20_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B20_3 = NULL;
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)((int32_t)11));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = L_0;
		(L_1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = L_1;
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_0, SizeOf_T1_t1DAF9B0DCADCC79CF41C2003E5C592942F805E50);
		il2cpp_codegen_memcpy(L_3, V_0, SizeOf_T1_t1DAF9B0DCADCC79CF41C2003E5C592942F805E50);
		bool L_4 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0), L_3);
		if (L_4)
		{
			G_B3_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2)))));
			G_B3_1 = 1;
			G_B3_2 = L_2;
			G_B3_3 = L_2;
			goto IL_003b;
		}
		G_B1_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2)))));
		G_B1_1 = 1;
		G_B1_2 = L_2;
		G_B1_3 = L_2;
	}
	{
		il2cpp_codegen_memcpy(L_5, G_B1_0, SizeOf_T1_t1DAF9B0DCADCC79CF41C2003E5C592942F805E50);
		il2cpp_codegen_memcpy(V_0, L_5, SizeOf_T1_t1DAF9B0DCADCC79CF41C2003E5C592942F805E50);
		il2cpp_codegen_memcpy(L_6, V_0, SizeOf_T1_t1DAF9B0DCADCC79CF41C2003E5C592942F805E50);
		bool L_7 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0), L_6);
		if (L_7)
		{
			G_B3_0 = ((Il2CppFullySharedGenericAny*)(Il2CppFullySharedGenericAny*)V_0);
			G_B3_1 = G_B1_1;
			G_B3_2 = G_B1_2;
			G_B3_3 = G_B1_3;
			goto IL_003b;
		}
		il2cpp_codegen_memcpy(G_B2_0, (Il2CppFullySharedGenericAny*)V_0, SizeOf_T1_t1DAF9B0DCADCC79CF41C2003E5C592942F805E50);
		G_B2_1 = G_B1_1;
		G_B2_2 = G_B1_2;
		G_B2_3 = G_B1_3;
	}
	{
		G_B4_0 = ((String_t*)(NULL));
		G_B4_1 = G_B2_1;
		G_B4_2 = G_B2_2;
		G_B4_3 = G_B2_3;
		goto IL_0046;
	}

IL_003b:
	{
		Il2CppConstrainedCallData L_9;
		Il2CppMethodPointer L_10 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 29), (void*)G_B3_0, &L_9, L_8);
		typedef String_t* ( *func_L_11)(void*,const RuntimeMethod*);
		String_t* L_12 = ((func_L_11)L_10)(L_9.thisPtr,L_9.method);
		G_B4_0 = L_12;
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
		G_B4_3 = G_B3_3;
	}

IL_0046:
	{
		(G_B4_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(G_B4_1), (String_t*)G_B4_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_13 = G_B4_3;
		(L_13)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_14 = L_13;
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_1, SizeOf_T2_t9E1D5C5A88209EFE3B28D44A8BE5D6688608BF24);
		il2cpp_codegen_memcpy(L_15, V_1, SizeOf_T2_t9E1D5C5A88209EFE3B28D44A8BE5D6688608BF24);
		bool L_16 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3), L_15);
		if (L_16)
		{
			G_B7_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4)))));
			G_B7_1 = 3;
			G_B7_2 = L_14;
			G_B7_3 = L_14;
			goto IL_007b;
		}
		G_B5_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4)))));
		G_B5_1 = 3;
		G_B5_2 = L_14;
		G_B5_3 = L_14;
	}
	{
		il2cpp_codegen_memcpy(L_17, G_B5_0, SizeOf_T2_t9E1D5C5A88209EFE3B28D44A8BE5D6688608BF24);
		il2cpp_codegen_memcpy(V_1, L_17, SizeOf_T2_t9E1D5C5A88209EFE3B28D44A8BE5D6688608BF24);
		il2cpp_codegen_memcpy(L_18, V_1, SizeOf_T2_t9E1D5C5A88209EFE3B28D44A8BE5D6688608BF24);
		bool L_19 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3), L_18);
		if (L_19)
		{
			G_B7_0 = ((Il2CppFullySharedGenericAny*)(Il2CppFullySharedGenericAny*)V_1);
			G_B7_1 = G_B5_1;
			G_B7_2 = G_B5_2;
			G_B7_3 = G_B5_3;
			goto IL_007b;
		}
		il2cpp_codegen_memcpy(G_B6_0, (Il2CppFullySharedGenericAny*)V_1, SizeOf_T2_t9E1D5C5A88209EFE3B28D44A8BE5D6688608BF24);
		G_B6_1 = G_B5_1;
		G_B6_2 = G_B5_2;
		G_B6_3 = G_B5_3;
	}
	{
		G_B8_0 = ((String_t*)(NULL));
		G_B8_1 = G_B6_1;
		G_B8_2 = G_B6_2;
		G_B8_3 = G_B6_3;
		goto IL_0086;
	}

IL_007b:
	{
		Il2CppConstrainedCallData L_21;
		Il2CppMethodPointer L_22 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 30), (void*)G_B7_0, &L_21, L_20);
		typedef String_t* ( *func_L_23)(void*,const RuntimeMethod*);
		String_t* L_24 = ((func_L_23)L_22)(L_21.thisPtr,L_21.method);
		G_B8_0 = L_24;
		G_B8_1 = G_B7_1;
		G_B8_2 = G_B7_2;
		G_B8_3 = G_B7_3;
	}

IL_0086:
	{
		(G_B8_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(G_B8_1), (String_t*)G_B8_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_25 = G_B8_3;
		(L_25)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_26 = L_25;
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_2, SizeOf_T3_t4A7ECBCF15AA62D044B6039FFF640DD71AD40BDB);
		il2cpp_codegen_memcpy(L_27, V_2, SizeOf_T3_t4A7ECBCF15AA62D044B6039FFF640DD71AD40BDB);
		bool L_28 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5), L_27);
		if (L_28)
		{
			G_B11_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6)))));
			G_B11_1 = 5;
			G_B11_2 = L_26;
			G_B11_3 = L_26;
			goto IL_00bb;
		}
		G_B9_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6)))));
		G_B9_1 = 5;
		G_B9_2 = L_26;
		G_B9_3 = L_26;
	}
	{
		il2cpp_codegen_memcpy(L_29, G_B9_0, SizeOf_T3_t4A7ECBCF15AA62D044B6039FFF640DD71AD40BDB);
		il2cpp_codegen_memcpy(V_2, L_29, SizeOf_T3_t4A7ECBCF15AA62D044B6039FFF640DD71AD40BDB);
		il2cpp_codegen_memcpy(L_30, V_2, SizeOf_T3_t4A7ECBCF15AA62D044B6039FFF640DD71AD40BDB);
		bool L_31 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5), L_30);
		if (L_31)
		{
			G_B11_0 = ((Il2CppFullySharedGenericAny*)(Il2CppFullySharedGenericAny*)V_2);
			G_B11_1 = G_B9_1;
			G_B11_2 = G_B9_2;
			G_B11_3 = G_B9_3;
			goto IL_00bb;
		}
		il2cpp_codegen_memcpy(G_B10_0, (Il2CppFullySharedGenericAny*)V_2, SizeOf_T3_t4A7ECBCF15AA62D044B6039FFF640DD71AD40BDB);
		G_B10_1 = G_B9_1;
		G_B10_2 = G_B9_2;
		G_B10_3 = G_B9_3;
	}
	{
		G_B12_0 = ((String_t*)(NULL));
		G_B12_1 = G_B10_1;
		G_B12_2 = G_B10_2;
		G_B12_3 = G_B10_3;
		goto IL_00c6;
	}

IL_00bb:
	{
		Il2CppConstrainedCallData L_33;
		Il2CppMethodPointer L_34 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 31), (void*)G_B11_0, &L_33, L_32);
		typedef String_t* ( *func_L_35)(void*,const RuntimeMethod*);
		String_t* L_36 = ((func_L_35)L_34)(L_33.thisPtr,L_33.method);
		G_B12_0 = L_36;
		G_B12_1 = G_B11_1;
		G_B12_2 = G_B11_2;
		G_B12_3 = G_B11_3;
	}

IL_00c6:
	{
		(G_B12_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(G_B12_1), (String_t*)G_B12_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_37 = G_B12_3;
		(L_37)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(6), (String_t*)_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_38 = L_37;
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_3, SizeOf_T4_t67AC00AF93B93F8979EEE590739A0DF4AAEE2EE3);
		il2cpp_codegen_memcpy(L_39, V_3, SizeOf_T4_t67AC00AF93B93F8979EEE590739A0DF4AAEE2EE3);
		bool L_40 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7), L_39);
		if (L_40)
		{
			G_B15_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8)))));
			G_B15_1 = 7;
			G_B15_2 = L_38;
			G_B15_3 = L_38;
			goto IL_00fb;
		}
		G_B13_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8)))));
		G_B13_1 = 7;
		G_B13_2 = L_38;
		G_B13_3 = L_38;
	}
	{
		il2cpp_codegen_memcpy(L_41, G_B13_0, SizeOf_T4_t67AC00AF93B93F8979EEE590739A0DF4AAEE2EE3);
		il2cpp_codegen_memcpy(V_3, L_41, SizeOf_T4_t67AC00AF93B93F8979EEE590739A0DF4AAEE2EE3);
		il2cpp_codegen_memcpy(L_42, V_3, SizeOf_T4_t67AC00AF93B93F8979EEE590739A0DF4AAEE2EE3);
		bool L_43 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7), L_42);
		if (L_43)
		{
			G_B15_0 = ((Il2CppFullySharedGenericAny*)(Il2CppFullySharedGenericAny*)V_3);
			G_B15_1 = G_B13_1;
			G_B15_2 = G_B13_2;
			G_B15_3 = G_B13_3;
			goto IL_00fb;
		}
		il2cpp_codegen_memcpy(G_B14_0, (Il2CppFullySharedGenericAny*)V_3, SizeOf_T4_t67AC00AF93B93F8979EEE590739A0DF4AAEE2EE3);
		G_B14_1 = G_B13_1;
		G_B14_2 = G_B13_2;
		G_B14_3 = G_B13_3;
	}
	{
		G_B16_0 = ((String_t*)(NULL));
		G_B16_1 = G_B14_1;
		G_B16_2 = G_B14_2;
		G_B16_3 = G_B14_3;
		goto IL_0106;
	}

IL_00fb:
	{
		Il2CppConstrainedCallData L_45;
		Il2CppMethodPointer L_46 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 32), (void*)G_B15_0, &L_45, L_44);
		typedef String_t* ( *func_L_47)(void*,const RuntimeMethod*);
		String_t* L_48 = ((func_L_47)L_46)(L_45.thisPtr,L_45.method);
		G_B16_0 = L_48;
		G_B16_1 = G_B15_1;
		G_B16_2 = G_B15_2;
		G_B16_3 = G_B15_3;
	}

IL_0106:
	{
		(G_B16_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(G_B16_1), (String_t*)G_B16_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_49 = G_B16_3;
		(L_49)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(8), (String_t*)_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_50 = L_49;
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_4, SizeOf_T5_t76A3327D5DFAE29A6A88ADC0A5DDC9720642E2AB);
		il2cpp_codegen_memcpy(L_51, V_4, SizeOf_T5_t76A3327D5DFAE29A6A88ADC0A5DDC9720642E2AB);
		bool L_52 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 9), L_51);
		if (L_52)
		{
			G_B19_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 10)))));
			G_B19_1 = ((int32_t)9);
			G_B19_2 = L_50;
			G_B19_3 = L_50;
			goto IL_013f;
		}
		G_B17_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 10)))));
		G_B17_1 = ((int32_t)9);
		G_B17_2 = L_50;
		G_B17_3 = L_50;
	}
	{
		il2cpp_codegen_memcpy(L_53, G_B17_0, SizeOf_T5_t76A3327D5DFAE29A6A88ADC0A5DDC9720642E2AB);
		il2cpp_codegen_memcpy(V_4, L_53, SizeOf_T5_t76A3327D5DFAE29A6A88ADC0A5DDC9720642E2AB);
		il2cpp_codegen_memcpy(L_54, V_4, SizeOf_T5_t76A3327D5DFAE29A6A88ADC0A5DDC9720642E2AB);
		bool L_55 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 9), L_54);
		if (L_55)
		{
			G_B19_0 = ((Il2CppFullySharedGenericAny*)(Il2CppFullySharedGenericAny*)V_4);
			G_B19_1 = G_B17_1;
			G_B19_2 = G_B17_2;
			G_B19_3 = G_B17_3;
			goto IL_013f;
		}
		il2cpp_codegen_memcpy(G_B18_0, (Il2CppFullySharedGenericAny*)V_4, SizeOf_T5_t76A3327D5DFAE29A6A88ADC0A5DDC9720642E2AB);
		G_B18_1 = G_B17_1;
		G_B18_2 = G_B17_2;
		G_B18_3 = G_B17_3;
	}
	{
		G_B20_0 = ((String_t*)(NULL));
		G_B20_1 = G_B18_1;
		G_B20_2 = G_B18_2;
		G_B20_3 = G_B18_3;
		goto IL_014a;
	}

IL_013f:
	{
		Il2CppConstrainedCallData L_57;
		Il2CppMethodPointer L_58 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 9), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 33), (void*)G_B19_0, &L_57, L_56);
		typedef String_t* ( *func_L_59)(void*,const RuntimeMethod*);
		String_t* L_60 = ((func_L_59)L_58)(L_57.thisPtr,L_57.method);
		G_B20_0 = L_60;
		G_B20_1 = G_B19_1;
		G_B20_2 = G_B19_2;
		G_B20_3 = G_B19_3;
	}

IL_014a:
	{
		(G_B20_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(G_B20_1), (String_t*)G_B20_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_61 = G_B20_3;
		(L_61)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)10)), (String_t*)_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		String_t* L_62;
		L_62 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_61, NULL);
		return L_62;
	}
}
IL2CPP_EXTERN_C  String_t* ValueTuple_5_ToString_m7265BEA8B1A29B537886BB6BEE00D1A154F8D814_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56>(__this);
	String_t* _returnValue;
	_returnValue = ValueTuple_5_ToString_m7265BEA8B1A29B537886BB6BEE00D1A154F8D814(_thisAdjusted, method);
	return _returnValue;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Vector_1_get_Count_m6DF09E4443FC90521D33C892BE69D32B04D85A15 (const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(Vector_1_t2DEF63E613428E110D429967E5CA7DE8ADF91630_StaticInit);
	{
		CHECKED_LOCAL_INIT(Vector_1_t2DEF63E613428E110D429967E5CA7DE8ADF91630_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_0 = ((Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___s_count;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 Vector_1_get_Zero_mDB2680DF070B1C7F273400548848C621F96343A4 (const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(Vector_1_t2DEF63E613428E110D429967E5CA7DE8ADF91630_StaticInit);
	{
		CHECKED_LOCAL_INIT(Vector_1_t2DEF63E613428E110D429967E5CA7DE8ADF91630_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)),il2cpp_codegen_runtime_class_init_inline);
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_0 = ((Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___s_zero;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Vector_1_InitializeCount_m43BBDDA05FDAB290038584331DB79CB33C523B83 (const RuntimeMethod* method) 
{
	VectorSizeHelper_tC26CEAD1B0D88F765A24D653A74900C4C7FEBD18 V_0;
	memset((&V_0), 0, sizeof(V_0));
	uint8_t* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B21_0 = 0;
	int32_t G_B4_0 = 0;
	int32_t G_B5_0 = 0;
	{
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489* L_0 = (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489*)(&(&V_0)->____placeholder);
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_1 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&L_0->___register);
		uint8_t* L_2 = (uint8_t*)(&L_1->___byte_0);
		uintptr_t L_3 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_2,NULL));
		V_1 = (uint8_t*)L_3;
		uint8_t* L_4 = (uint8_t*)(&(&V_0)->____byte);
		uintptr_t L_5 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_4,NULL));
		uint8_t* L_6 = V_1;
		int64_t L_7 = (il2cpp_codegen_conv<int64_t,uint8_t*,intptr_t,false,false>(((uint8_t*)((intptr_t)((uint8_t*)il2cpp_codegen_subtract((intptr_t)L_5, (intptr_t)L_6))/1)),NULL));
		int32_t L_8 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>(L_7,NULL));
		V_2 = (-1);
		G_B2_0 = L_8;
		goto IL_0045;
	}

IL_0045:
	{
		G_B4_0 = G_B2_0;
		goto IL_0067;
	}

IL_0067:
	{
		G_B5_0 = G_B4_0;
	}
	{
		V_2 = 2;
		G_B21_0 = G_B5_0;
		goto IL_0176;
	}

IL_0176:
	{
		int32_t L_9 = V_2;
		return ((int32_t)(G_B21_0/L_9));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector_1__ctor_mDA4A6115C4120BFDD773FD4D3753FD3EC2B10427 (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489* __this, uint16_t ___0_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(Vector_1_t2DEF63E613428E110D429967E5CA7DE8ADF91630_StaticInit);
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	int32_t V_2 = 0;
	int8_t* V_3 = NULL;
	int8_t* V_4 = NULL;
	int32_t V_5 = 0;
	uint16_t* V_6 = NULL;
	uint16_t* V_7 = NULL;
	int32_t V_8 = 0;
	int16_t* V_9 = NULL;
	int16_t* V_10 = NULL;
	int32_t V_11 = 0;
	uint32_t* V_12 = NULL;
	uint32_t* V_13 = NULL;
	int32_t V_14 = 0;
	int32_t* V_15 = NULL;
	int32_t* V_16 = NULL;
	int32_t V_17 = 0;
	uint64_t* V_18 = NULL;
	uint64_t* V_19 = NULL;
	int32_t V_20 = 0;
	int64_t* V_21 = NULL;
	int64_t* V_22 = NULL;
	int32_t V_23 = 0;
	float* V_24 = NULL;
	float* V_25 = NULL;
	int32_t V_26 = 0;
	double* V_27 = NULL;
	double* V_28 = NULL;
	int32_t V_29 = 0;
	{
		il2cpp_codegen_initobj(__this, sizeof(Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489));
		bool L_0;
		L_0 = Vector_get_IsHardwareAccelerated_m783509258751EBED64CBD9F387EC1BB4A15088AA(NULL);
		if (!L_0)
		{
			goto IL_0386;
		}
	}
	{
		goto IL_005e;
	}

IL_005e:
	{
		goto IL_00b3;
	}

IL_00b3:
	{
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_1 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint16_t* L_2 = (uint16_t*)(&L_1->___uint16_0);
		V_7 = L_2;
		uint16_t* L_3 = V_7;
		uintptr_t L_4 = (il2cpp_codegen_conv<uintptr_t,uint16_t*,intptr_t,false,false>(L_3,NULL));
		V_6 = (uint16_t*)L_4;
		V_8 = 0;
		goto IL_00ff;
	}

IL_00e5:
	{
		uint16_t* L_5 = V_6;
		int32_t L_6 = V_8;
		intptr_t L_7 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_6,NULL));
		uint16_t L_8 = ___0_value;
		*(((int16_t*)((uint16_t*)il2cpp_codegen_add((intptr_t)L_5, ((intptr_t)il2cpp_codegen_multiply(L_7, 2)))))) = ((int16_t)L_8);
		int32_t L_9 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_00ff:
	{
		int32_t L_10 = V_8;
		CHECKED_LOCAL_INIT(Vector_1_t2DEF63E613428E110D429967E5CA7DE8ADF91630_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_11;
		L_11 = Vector_1_get_Count_m6DF09E4443FC90521D33C892BE69D32B04D85A15_inline(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3));
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_00e5;
		}
	}
	{
		uintptr_t L_12 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_7 = (uint16_t*)L_12;
		return;
	}

IL_0386:
	{
		goto IL_0505;
	}

IL_0505:
	{
		goto IL_0684;
	}

IL_0684:
	{
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_13 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint16_t L_14 = ___0_value;
		L_13->___uint16_0 = L_14;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_15 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint16_t L_16 = ___0_value;
		L_15->___uint16_1 = L_16;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_17 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint16_t L_18 = ___0_value;
		L_17->___uint16_2 = L_18;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_19 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint16_t L_20 = ___0_value;
		L_19->___uint16_3 = L_20;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_21 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint16_t L_22 = ___0_value;
		L_21->___uint16_4 = L_22;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_23 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint16_t L_24 = ___0_value;
		L_23->___uint16_5 = L_24;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_25 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint16_t L_26 = ___0_value;
		L_25->___uint16_6 = L_26;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_27 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint16_t L_28 = ___0_value;
		L_27->___uint16_7 = L_28;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector_1__ctor_m46ADEA122EFBA7AEF487716891A8ADD284FD12E3 (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489* __this, void* ___0_dataPointer, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(Vector_1_t2DEF63E613428E110D429967E5CA7DE8ADF91630_StaticInit);
	{
		void* L_0 = ___0_dataPointer;
		CHECKED_LOCAL_INIT(Vector_1_t2DEF63E613428E110D429967E5CA7DE8ADF91630_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)),il2cpp_codegen_runtime_class_init_inline);
		Vector_1__ctor_m8212BCFF76673CC904541B2D9AF39E5FF124B359(__this, L_0, 0, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector_1__ctor_m8212BCFF76673CC904541B2D9AF39E5FF124B359 (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489* __this, void* ___0_dataPointer, int32_t ___1_offset, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(Vector_1_t2DEF63E613428E110D429967E5CA7DE8ADF91630_StaticInit);
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	int32_t V_3 = 0;
	int8_t* V_4 = NULL;
	int8_t* V_5 = NULL;
	int8_t* V_6 = NULL;
	int32_t V_7 = 0;
	uint16_t* V_8 = NULL;
	uint16_t* V_9 = NULL;
	uint16_t* V_10 = NULL;
	int32_t V_11 = 0;
	int16_t* V_12 = NULL;
	int16_t* V_13 = NULL;
	int16_t* V_14 = NULL;
	int32_t V_15 = 0;
	uint32_t* V_16 = NULL;
	uint32_t* V_17 = NULL;
	uint32_t* V_18 = NULL;
	int32_t V_19 = 0;
	int32_t* V_20 = NULL;
	int32_t* V_21 = NULL;
	int32_t* V_22 = NULL;
	int32_t V_23 = 0;
	uint64_t* V_24 = NULL;
	uint64_t* V_25 = NULL;
	uint64_t* V_26 = NULL;
	int32_t V_27 = 0;
	int64_t* V_28 = NULL;
	int64_t* V_29 = NULL;
	int64_t* V_30 = NULL;
	int32_t V_31 = 0;
	float* V_32 = NULL;
	float* V_33 = NULL;
	float* V_34 = NULL;
	int32_t V_35 = 0;
	double* V_36 = NULL;
	double* V_37 = NULL;
	double* V_38 = NULL;
	int32_t V_39 = 0;
	{
		il2cpp_codegen_initobj(__this, sizeof(Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489));
		goto IL_0053;
	}

IL_0053:
	{
		goto IL_00ae;
	}

IL_00ae:
	{
	}
	{
		void* L_0 = ___0_dataPointer;
		V_8 = (uint16_t*)L_0;
		uint16_t* L_1 = V_8;
		int32_t L_2 = ___1_offset;
		intptr_t L_3 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_2,NULL));
		V_8 = ((uint16_t*)il2cpp_codegen_add((intptr_t)L_1, ((intptr_t)il2cpp_codegen_multiply(L_3, 2))));
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_4 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint16_t* L_5 = (uint16_t*)(&L_4->___uint16_0);
		V_10 = L_5;
		uint16_t* L_6 = V_10;
		uintptr_t L_7 = (il2cpp_codegen_conv<uintptr_t,uint16_t*,intptr_t,false,false>(L_6,NULL));
		V_9 = (uint16_t*)L_7;
		V_11 = 0;
		goto IL_0104;
	}

IL_00ec:
	{
		uint16_t* L_8 = V_9;
		int32_t L_9 = V_11;
		intptr_t L_10 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_9,NULL));
		uint16_t* L_11 = V_8;
		int32_t L_12 = V_11;
		intptr_t L_13 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_12,NULL));
		int32_t L_14 = ((int32_t)*(((uint16_t*)il2cpp_codegen_add((intptr_t)L_11, ((intptr_t)il2cpp_codegen_multiply(L_13, 2))))));
		*(((int16_t*)((uint16_t*)il2cpp_codegen_add((intptr_t)L_8, ((intptr_t)il2cpp_codegen_multiply(L_10, 2)))))) = ((int16_t)L_14);
		int32_t L_15 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_add(L_15, 1));
	}

IL_0104:
	{
		int32_t L_16 = V_11;
		CHECKED_LOCAL_INIT(Vector_1_t2DEF63E613428E110D429967E5CA7DE8ADF91630_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_17;
		L_17 = Vector_1_get_Count_m6DF09E4443FC90521D33C892BE69D32B04D85A15_inline(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3));
		if ((((int32_t)L_16) < ((int32_t)L_17)))
		{
			goto IL_00ec;
		}
	}
	{
		uintptr_t L_18 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_10 = (uint16_t*)L_18;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t Vector_1_get_Item_m248FFF521980A3A43D237B8C5CA2ABD5C62D4D27 (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(Vector_1_t2DEF63E613428E110D429967E5CA7DE8ADF91630_StaticInit);
	uint8_t* V_0 = NULL;
	int8_t* V_1 = NULL;
	uint16_t* V_2 = NULL;
	int16_t* V_3 = NULL;
	uint32_t* V_4 = NULL;
	int32_t* V_5 = NULL;
	uint64_t* V_6 = NULL;
	int64_t* V_7 = NULL;
	float* V_8 = NULL;
	double* V_9 = NULL;
	{
		int32_t L_0 = ___0_index;
		CHECKED_LOCAL_INIT(Vector_1_t2DEF63E613428E110D429967E5CA7DE8ADF91630_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_1;
		L_1 = Vector_1_get_Count_m6DF09E4443FC90521D33C892BE69D32B04D85A15_inline(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3));
		if ((((int32_t)L_0) >= ((int32_t)L_1)))
		{
			goto IL_000c;
		}
	}
	{
		int32_t L_2 = ___0_index;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_0022;
		}
	}

IL_000c:
	{
		int32_t L_3 = ___0_index;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_4);
		String_t* L_6;
		L_6 = SR_Format_m9E8DC9AEFDC34AC67473EFAEAB78C5066C1A0D09(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral491788442E76F5D7830F0DBFCF8EDD98854F636F)), L_5, NULL);
		IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82* L_7 = (IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82_il2cpp_TypeInfo_var)));
		IndexOutOfRangeException__ctor_mFD06819F05B815BE2D6E826D4E04F4C449D0A425(L_7, L_6, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, method);
	}

IL_0022:
	{
		goto IL_0059;
	}

IL_0059:
	{
		goto IL_0090;
	}

IL_0090:
	{
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_8 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint16_t* L_9 = (uint16_t*)(&L_8->___uint16_0);
		V_2 = L_9;
		uint16_t* L_10 = V_2;
		uintptr_t L_11 = (il2cpp_codegen_conv<uintptr_t,uint16_t*,intptr_t,false,false>(L_10,NULL));
		int32_t L_12 = ___0_index;
		intptr_t L_13 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_12,NULL));
		int32_t L_14 = ((int32_t)*(((uint16_t*)((intptr_t)il2cpp_codegen_add((intptr_t)L_11, ((intptr_t)il2cpp_codegen_multiply(L_13, 2)))))));
		return (uint16_t)L_14;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector_1_Equals_mD7F4E0B493DD44E2685BC17F8D6EAD92342CBC29 (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(Vector_1_t2DEF63E613428E110D429967E5CA7DE8ADF91630_StaticInit);
	{
		RuntimeObject* L_0 = ___0_obj;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0))))
		{
			goto IL_000a;
		}
	}
	{
		return (bool)0;
	}

IL_000a:
	{
		RuntimeObject* L_1 = ___0_obj;
		CHECKED_LOCAL_INIT(Vector_1_t2DEF63E613428E110D429967E5CA7DE8ADF91630_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)),il2cpp_codegen_runtime_class_init_inline);
		bool L_2;
		L_2 = Vector_1_Equals_m729FD34A0F43A7C8A8DF285BCED9B5B31D579FE8(__this, ((*(Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489*)UnBox(L_1, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5));
		return L_2;
	}
}
IL2CPP_EXTERN_C  bool Vector_1_Equals_mD7F4E0B493DD44E2685BC17F8D6EAD92342CBC29_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method)
{
	Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489>(__this);
	bool _returnValue;
	_returnValue = Vector_1_Equals_mD7F4E0B493DD44E2685BC17F8D6EAD92342CBC29_inline(_thisAdjusted, ___0_obj, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector_1_Equals_m729FD34A0F43A7C8A8DF285BCED9B5B31D579FE8 (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489* __this, Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 ___0_other, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(Vector_1_t2DEF63E613428E110D429967E5CA7DE8ADF91630_StaticInit);
	int32_t V_0 = 0;
	{
		bool L_0;
		L_0 = Vector_get_IsHardwareAccelerated_m783509258751EBED64CBD9F387EC1BB4A15088AA(NULL);
		if (!L_0)
		{
			goto IL_0031;
		}
	}
	{
		V_0 = 0;
		goto IL_0027;
	}

IL_000b:
	{
		int32_t L_1 = V_0;
		CHECKED_LOCAL_INIT(Vector_1_t2DEF63E613428E110D429967E5CA7DE8ADF91630_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)),il2cpp_codegen_runtime_class_init_inline);
		uint16_t L_2;
		L_2 = Vector_1_get_Item_m248FFF521980A3A43D237B8C5CA2ABD5C62D4D27(__this, L_1, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6));
		int32_t L_3 = V_0;
		uint16_t L_4;
		L_4 = Vector_1_get_Item_m248FFF521980A3A43D237B8C5CA2ABD5C62D4D27((&___0_other), L_3, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6));
		bool L_5;
		L_5 = Vector_1_ScalarEquals_m4E13E30219B0D2AADB58AD6E5CB2B54B9FCBFAAE_inline(L_2, L_4, NULL);
		if (L_5)
		{
			goto IL_0023;
		}
	}
	{
		return (bool)0;
	}

IL_0023:
	{
		int32_t L_6 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_6, 1));
	}

IL_0027:
	{
		int32_t L_7 = V_0;
		CHECKED_LOCAL_INIT(Vector_1_t2DEF63E613428E110D429967E5CA7DE8ADF91630_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_8;
		L_8 = Vector_1_get_Count_m6DF09E4443FC90521D33C892BE69D32B04D85A15_inline(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3));
		if ((((int32_t)L_7) < ((int32_t)L_8)))
		{
			goto IL_000b;
		}
	}
	{
		return (bool)1;
	}

IL_0031:
	{
		goto IL_01f0;
	}

IL_01f0:
	{
		goto IL_03af;
	}

IL_03af:
	{
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_9 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint16_t L_10 = L_9->___uint16_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_11 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_12 = L_11.___register;
		uint16_t L_13 = L_12.___uint16_0;
		if ((!(((uint32_t)L_10) == ((uint32_t)L_13))))
		{
			goto IL_0494;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_14 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint16_t L_15 = L_14->___uint16_1;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_16 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_17 = L_16.___register;
		uint16_t L_18 = L_17.___uint16_1;
		if ((!(((uint32_t)L_15) == ((uint32_t)L_18))))
		{
			goto IL_0494;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_19 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint16_t L_20 = L_19->___uint16_2;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_21 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_22 = L_21.___register;
		uint16_t L_23 = L_22.___uint16_2;
		if ((!(((uint32_t)L_20) == ((uint32_t)L_23))))
		{
			goto IL_0494;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_24 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint16_t L_25 = L_24->___uint16_3;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_26 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_27 = L_26.___register;
		uint16_t L_28 = L_27.___uint16_3;
		if ((!(((uint32_t)L_25) == ((uint32_t)L_28))))
		{
			goto IL_0494;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_29 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint16_t L_30 = L_29->___uint16_4;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_31 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_32 = L_31.___register;
		uint16_t L_33 = L_32.___uint16_4;
		if ((!(((uint32_t)L_30) == ((uint32_t)L_33))))
		{
			goto IL_0494;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_34 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint16_t L_35 = L_34->___uint16_5;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_36 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_37 = L_36.___register;
		uint16_t L_38 = L_37.___uint16_5;
		if ((!(((uint32_t)L_35) == ((uint32_t)L_38))))
		{
			goto IL_0494;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_39 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint16_t L_40 = L_39->___uint16_6;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_41 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_42 = L_41.___register;
		uint16_t L_43 = L_42.___uint16_6;
		if ((!(((uint32_t)L_40) == ((uint32_t)L_43))))
		{
			goto IL_0494;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_44 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint16_t L_45 = L_44->___uint16_7;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_46 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_47 = L_46.___register;
		uint16_t L_48 = L_47.___uint16_7;
		return (bool)((((int32_t)L_45) == ((int32_t)L_48))? 1 : 0);
	}

IL_0494:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool Vector_1_Equals_m729FD34A0F43A7C8A8DF285BCED9B5B31D579FE8_AdjustorThunk (RuntimeObject* __this, Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 ___0_other, const RuntimeMethod* method)
{
	Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489>(__this);
	bool _returnValue;
	_returnValue = Vector_1_Equals_m729FD34A0F43A7C8A8DF285BCED9B5B31D579FE8(_thisAdjusted, ___0_other, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Vector_1_GetHashCode_m3C7CFE908C6BB2DC94F94F7615F2D1AF0E2777D9 (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t285C6E63B4A4E8D837BDBC63DE4E2D23C85467D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(Vector_1_t2DEF63E613428E110D429967E5CA7DE8ADF91630_StaticInit);
	CHECKED_LOCAL(HashHelpers_t285C6E63B4A4E8D837BDBC63DE4E2D23C85467D4_StaticInit);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	uint8_t V_2 = 0x0;
	int32_t V_3 = 0;
	int8_t V_4 = 0x0;
	int32_t V_5 = 0;
	uint16_t V_6 = 0;
	int32_t V_7 = 0;
	int16_t V_8 = 0;
	int32_t V_9 = 0;
	uint32_t V_10 = 0;
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	int32_t V_13 = 0;
	uint64_t V_14 = 0;
	int32_t V_15 = 0;
	int64_t V_16 = 0;
	int32_t V_17 = 0;
	float V_18 = 0.0f;
	int32_t V_19 = 0;
	double V_20 = 0.0;
	{
		V_0 = 0;
		bool L_0;
		L_0 = Vector_get_IsHardwareAccelerated_m783509258751EBED64CBD9F387EC1BB4A15088AA(NULL);
		if (!L_0)
		{
			goto IL_034a;
		}
	}
	{
		goto IL_0059;
	}

IL_0059:
	{
		goto IL_00a7;
	}

IL_00a7:
	{
	}
	{
		V_5 = 0;
		goto IL_00ef;
	}

IL_00c7:
	{
		int32_t L_1 = V_0;
		int32_t L_2 = V_5;
		CHECKED_LOCAL_INIT(Vector_1_t2DEF63E613428E110D429967E5CA7DE8ADF91630_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)),il2cpp_codegen_runtime_class_init_inline);
		uint16_t L_3;
		L_3 = Vector_1_get_Item_m248FFF521980A3A43D237B8C5CA2ABD5C62D4D27(__this, L_2, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6));
		V_6 = L_3;
		int32_t L_4;
		L_4 = UInt16_GetHashCode_m534E5103D0DA9C6FCED4F2F007993D3E38165200((&V_6), NULL);
		CHECKED_LOCAL_INIT(HashHelpers_t285C6E63B4A4E8D837BDBC63DE4E2D23C85467D4_StaticInit,(HashHelpers_t285C6E63B4A4E8D837BDBC63DE4E2D23C85467D4_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_5;
		L_5 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_1, L_4, NULL);
		V_0 = L_5;
		int32_t L_6 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_6, 1));
	}

IL_00ef:
	{
		int32_t L_7 = V_5;
		CHECKED_LOCAL_INIT(Vector_1_t2DEF63E613428E110D429967E5CA7DE8ADF91630_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_8;
		L_8 = Vector_1_get_Count_m6DF09E4443FC90521D33C892BE69D32B04D85A15_inline(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3));
		if ((((int32_t)L_7) < ((int32_t)L_8)))
		{
			goto IL_00c7;
		}
	}
	{
		int32_t L_9 = V_0;
		return L_9;
	}

IL_034a:
	{
		goto IL_04da;
	}

IL_04da:
	{
		goto IL_066a;
	}

IL_066a:
	{
	}
	{
		int32_t L_10 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_11 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint16_t* L_12 = (uint16_t*)(&L_11->___uint16_0);
		int32_t L_13;
		L_13 = UInt16_GetHashCode_m534E5103D0DA9C6FCED4F2F007993D3E38165200(L_12, NULL);
		CHECKED_LOCAL_INIT(HashHelpers_t285C6E63B4A4E8D837BDBC63DE4E2D23C85467D4_StaticInit,(HashHelpers_t285C6E63B4A4E8D837BDBC63DE4E2D23C85467D4_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_14;
		L_14 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_10, L_13, NULL);
		V_0 = L_14;
		int32_t L_15 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_16 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint16_t* L_17 = (uint16_t*)(&L_16->___uint16_1);
		int32_t L_18;
		L_18 = UInt16_GetHashCode_m534E5103D0DA9C6FCED4F2F007993D3E38165200(L_17, NULL);
		int32_t L_19;
		L_19 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_15, L_18, NULL);
		V_0 = L_19;
		int32_t L_20 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_21 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint16_t* L_22 = (uint16_t*)(&L_21->___uint16_2);
		int32_t L_23;
		L_23 = UInt16_GetHashCode_m534E5103D0DA9C6FCED4F2F007993D3E38165200(L_22, NULL);
		int32_t L_24;
		L_24 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_20, L_23, NULL);
		V_0 = L_24;
		int32_t L_25 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_26 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint16_t* L_27 = (uint16_t*)(&L_26->___uint16_3);
		int32_t L_28;
		L_28 = UInt16_GetHashCode_m534E5103D0DA9C6FCED4F2F007993D3E38165200(L_27, NULL);
		int32_t L_29;
		L_29 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_25, L_28, NULL);
		V_0 = L_29;
		int32_t L_30 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_31 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint16_t* L_32 = (uint16_t*)(&L_31->___uint16_4);
		int32_t L_33;
		L_33 = UInt16_GetHashCode_m534E5103D0DA9C6FCED4F2F007993D3E38165200(L_32, NULL);
		int32_t L_34;
		L_34 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_30, L_33, NULL);
		V_0 = L_34;
		int32_t L_35 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_36 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint16_t* L_37 = (uint16_t*)(&L_36->___uint16_5);
		int32_t L_38;
		L_38 = UInt16_GetHashCode_m534E5103D0DA9C6FCED4F2F007993D3E38165200(L_37, NULL);
		int32_t L_39;
		L_39 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_35, L_38, NULL);
		V_0 = L_39;
		int32_t L_40 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_41 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint16_t* L_42 = (uint16_t*)(&L_41->___uint16_6);
		int32_t L_43;
		L_43 = UInt16_GetHashCode_m534E5103D0DA9C6FCED4F2F007993D3E38165200(L_42, NULL);
		int32_t L_44;
		L_44 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_40, L_43, NULL);
		V_0 = L_44;
		int32_t L_45 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_46 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint16_t* L_47 = (uint16_t*)(&L_46->___uint16_7);
		int32_t L_48;
		L_48 = UInt16_GetHashCode_m534E5103D0DA9C6FCED4F2F007993D3E38165200(L_47, NULL);
		int32_t L_49;
		L_49 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_45, L_48, NULL);
		V_0 = L_49;
		int32_t L_50 = V_0;
		return L_50;
	}
}
IL2CPP_EXTERN_C  int32_t Vector_1_GetHashCode_m3C7CFE908C6BB2DC94F94F7615F2D1AF0E2777D9_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489>(__this);
	int32_t _returnValue;
	_returnValue = Vector_1_GetHashCode_m3C7CFE908C6BB2DC94F94F7615F2D1AF0E2777D9(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Vector_1_ToString_m2444D8FDCF0568D259DAE989EB7BCC77D37B2D6D (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3DCC6243286938BE75C3FA773B9BA71160A2E869);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_StaticInit);
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(Vector_1_t2DEF63E613428E110D429967E5CA7DE8ADF91630_StaticInit);
	{
		CHECKED_LOCAL_INIT(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_StaticInit,(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_0;
		L_0 = CultureInfo_get_CurrentCulture_m8A4580F49DDD7E9DB34C699965423DB8E3BBA9A5(NULL);
		CHECKED_LOCAL_INIT(Vector_1_t2DEF63E613428E110D429967E5CA7DE8ADF91630_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)),il2cpp_codegen_runtime_class_init_inline);
		String_t* L_1;
		L_1 = Vector_1_ToString_mA9FEB41834880EF7C7688EB8C3F83286697B0BC7(__this, _stringLiteral3DCC6243286938BE75C3FA773B9BA71160A2E869, L_0, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8));
		return L_1;
	}
}
IL2CPP_EXTERN_C  String_t* Vector_1_ToString_m2444D8FDCF0568D259DAE989EB7BCC77D37B2D6D_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489>(__this);
	String_t* _returnValue;
	_returnValue = Vector_1_ToString_m2444D8FDCF0568D259DAE989EB7BCC77D37B2D6D(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Vector_1_ToString_mA9FEB41834880EF7C7688EB8C3F83286697B0BC7 (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489* __this, String_t* ___0_format, RuntimeObject* ___1_formatProvider, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(Vector_1_t2DEF63E613428E110D429967E5CA7DE8ADF91630_StaticInit);
	StringBuilder_t* V_0 = NULL;
	String_t* V_1 = NULL;
	int32_t V_2 = 0;
	{
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		V_0 = L_0;
		RuntimeObject* L_1 = ___1_formatProvider;
		NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* L_2;
		L_2 = NumberFormatInfo_GetInstance_m705987E5E7D3E5EC5C5DD2D088FBC9BCBA0FC31F(L_1, NULL);
		String_t* L_3;
		L_3 = NumberFormatInfo_get_NumberGroupSeparator_m0556B092AA471513B1EDC31C047712226D39BEB6_inline(L_2, NULL);
		V_1 = L_3;
		StringBuilder_t* L_4 = V_0;
		StringBuilder_t* L_5;
		L_5 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_4, ((int32_t)60), NULL);
		V_2 = 0;
		goto IL_0053;
	}

IL_001f:
	{
		StringBuilder_t* L_6 = V_0;
		int32_t L_7 = V_2;
		CHECKED_LOCAL_INIT(Vector_1_t2DEF63E613428E110D429967E5CA7DE8ADF91630_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)),il2cpp_codegen_runtime_class_init_inline);
		uint16_t L_8;
		L_8 = Vector_1_get_Item_m248FFF521980A3A43D237B8C5CA2ABD5C62D4D27(__this, L_7, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6));
		uint16_t L_9 = L_8;
		RuntimeObject* L_10 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2), &L_9);
		String_t* L_11 = ___0_format;
		RuntimeObject* L_12 = ___1_formatProvider;
		String_t* L_13;
		L_13 = UInt16_ToString_mBD648884B6569D3E7D779669EEFCB1ED5EE4A521((uint16_t*)UnBox(L_10), L_11, L_12, NULL);
		StringBuilder_t* L_14;
		L_14 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_6, L_13, NULL);
		StringBuilder_t* L_15 = V_0;
		String_t* L_16 = V_1;
		StringBuilder_t* L_17;
		L_17 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_15, L_16, NULL);
		StringBuilder_t* L_18 = V_0;
		StringBuilder_t* L_19;
		L_19 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_18, ((int32_t)32), NULL);
		int32_t L_20 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_20, 1));
	}

IL_0053:
	{
		int32_t L_21 = V_2;
		CHECKED_LOCAL_INIT(Vector_1_t2DEF63E613428E110D429967E5CA7DE8ADF91630_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_22;
		L_22 = Vector_1_get_Count_m6DF09E4443FC90521D33C892BE69D32B04D85A15_inline(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3));
		if ((((int32_t)L_21) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_22, 1)))))
		{
			goto IL_001f;
		}
	}
	{
		StringBuilder_t* L_23 = V_0;
		CHECKED_LOCAL_INIT(Vector_1_t2DEF63E613428E110D429967E5CA7DE8ADF91630_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_24;
		L_24 = Vector_1_get_Count_m6DF09E4443FC90521D33C892BE69D32B04D85A15_inline(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3));
		uint16_t L_25;
		L_25 = Vector_1_get_Item_m248FFF521980A3A43D237B8C5CA2ABD5C62D4D27(__this, ((int32_t)il2cpp_codegen_subtract(L_24, 1)), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6));
		uint16_t L_26 = L_25;
		RuntimeObject* L_27 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2), &L_26);
		String_t* L_28 = ___0_format;
		RuntimeObject* L_29 = ___1_formatProvider;
		String_t* L_30;
		L_30 = UInt16_ToString_mBD648884B6569D3E7D779669EEFCB1ED5EE4A521((uint16_t*)UnBox(L_27), L_28, L_29, NULL);
		StringBuilder_t* L_31;
		L_31 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_23, L_30, NULL);
		StringBuilder_t* L_32 = V_0;
		StringBuilder_t* L_33;
		L_33 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_32, ((int32_t)62), NULL);
		StringBuilder_t* L_34 = V_0;
		String_t* L_35;
		L_35 = VirtualFuncInvoker0< String_t* >::Invoke(3, L_34);
		return L_35;
	}
}
IL2CPP_EXTERN_C  String_t* Vector_1_ToString_mA9FEB41834880EF7C7688EB8C3F83286697B0BC7_AdjustorThunk (RuntimeObject* __this, String_t* ___0_format, RuntimeObject* ___1_formatProvider, const RuntimeMethod* method)
{
	Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489>(__this);
	String_t* _returnValue;
	_returnValue = Vector_1_ToString_mA9FEB41834880EF7C7688EB8C3F83286697B0BC7(_thisAdjusted, ___0_format, ___1_formatProvider, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector_1_op_Equality_mB42F3DAE52C3BC7579B302E623196C45A5DEAC6B (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 ___0_left, Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 ___1_right, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(Vector_1_t2DEF63E613428E110D429967E5CA7DE8ADF91630_StaticInit);
	{
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_0 = ___1_right;
		CHECKED_LOCAL_INIT(Vector_1_t2DEF63E613428E110D429967E5CA7DE8ADF91630_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)),il2cpp_codegen_runtime_class_init_inline);
		bool L_1;
		L_1 = Vector_1_Equals_m729FD34A0F43A7C8A8DF285BCED9B5B31D579FE8((&___0_left), L_0, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5));
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector_1_op_Inequality_m32F4DFF513244591C00E23353EB6F6294E8BE9F0 (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 ___0_left, Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 ___1_right, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(Vector_1_t2DEF63E613428E110D429967E5CA7DE8ADF91630_StaticInit);
	{
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_0 = ___0_left;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_1 = ___1_right;
		CHECKED_LOCAL_INIT(Vector_1_t2DEF63E613428E110D429967E5CA7DE8ADF91630_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)),il2cpp_codegen_runtime_class_init_inline);
		bool L_2;
		L_2 = Vector_1_op_Equality_mB42F3DAE52C3BC7579B302E623196C45A5DEAC6B_inline(L_0, L_1, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 9));
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 Vector_1_Equals_m6F913845CB1E8A1A753B3C187A8EB840C36F5ADF (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 ___0_left, Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 ___1_right, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector_1_ScalarEquals_m4E13E30219B0D2AADB58AD6E5CB2B54B9FCBFAAE (uint16_t ___0_left, uint16_t ___1_right, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t Vector_1_GetOneValue_m7E814AFD17E4D390C12EF731DA01203D262D9953 (const RuntimeMethod* method) 
{
	{
		goto IL_0027;
	}

IL_0027:
	{
		goto IL_004e;
	}

IL_004e:
	{
	}
	{
		return (uint16_t)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t Vector_1_GetAllBitsSetValue_m854DE079EA89F97089D3EF29D7C31F081F420580 (const RuntimeMethod* method) 
{
	{
		goto IL_002b;
	}

IL_002b:
	{
		goto IL_0056;
	}

IL_0056:
	{
	}
	{
		uint16_t L_0;
		L_0 = ConstantHelper_GetUInt16WithAllBitsSet_mD3E13D933A06059499F0E0CBE6798D72D175464A_inline(NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector_1__cctor_m6764AA686DE7E188C362C5B3E96AB2F5AB09F3CA (const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	{
		int32_t L_0;
		L_0 = Vector_1_InitializeCount_m43BBDDA05FDAB290038584331DB79CB33C523B83(NULL);
		((Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___s_count = L_0;
		il2cpp_codegen_initobj((&((Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___s_zero), sizeof(Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489));
		uint16_t L_1;
		L_1 = Vector_1_GetOneValue_m7E814AFD17E4D390C12EF731DA01203D262D9953_inline(NULL);
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_2;
		memset((&L_2), 0, sizeof(L_2));
		Vector_1__ctor_mDA4A6115C4120BFDD773FD4D3753FD3EC2B10427((&L_2), L_1, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 14));
		((Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___s_one = L_2;
		uint16_t L_3;
		L_3 = Vector_1_GetAllBitsSetValue_m854DE079EA89F97089D3EF29D7C31F081F420580_inline(NULL);
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector_1__ctor_mDA4A6115C4120BFDD773FD4D3753FD3EC2B10427((&L_4), L_3, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 14));
		((Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___s_allOnes = L_4;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Vector_1_get_Count_mC75C8C6E913E7FF8A3D10467D6DADE41711EF3CC (const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(Vector_1_t2DEF63E613428E110D429967E5CA7DE8ADF91630_StaticInit);
	{
		CHECKED_LOCAL_INIT(Vector_1_t2DEF63E613428E110D429967E5CA7DE8ADF91630_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_0 = ((Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___s_count;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A Vector_1_get_Zero_m052680C155E15387C16A5E044176ACB59DF53359 (const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(Vector_1_t2DEF63E613428E110D429967E5CA7DE8ADF91630_StaticInit);
	{
		CHECKED_LOCAL_INIT(Vector_1_t2DEF63E613428E110D429967E5CA7DE8ADF91630_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)),il2cpp_codegen_runtime_class_init_inline);
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_0 = ((Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___s_zero;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Vector_1_InitializeCount_mE29E088973A17B81B830C30831075135FC8E263A (const RuntimeMethod* method) 
{
	VectorSizeHelper_tF54ACCE947CB8A38047BEB642392A4E7345A157D V_0;
	memset((&V_0), 0, sizeof(V_0));
	uint8_t* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B21_0 = 0;
	int32_t G_B4_0 = 0;
	int32_t G_B6_0 = 0;
	int32_t G_B8_0 = 0;
	int32_t G_B10_0 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B13_0 = 0;
	{
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A* L_0 = (Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A*)(&(&V_0)->____placeholder);
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_1 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&L_0->___register);
		uint8_t* L_2 = (uint8_t*)(&L_1->___byte_0);
		uintptr_t L_3 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_2,NULL));
		V_1 = (uint8_t*)L_3;
		uint8_t* L_4 = (uint8_t*)(&(&V_0)->____byte);
		uintptr_t L_5 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_4,NULL));
		uint8_t* L_6 = V_1;
		int64_t L_7 = (il2cpp_codegen_conv<int64_t,uint8_t*,intptr_t,false,false>(((uint8_t*)((intptr_t)((uint8_t*)il2cpp_codegen_subtract((intptr_t)L_5, (intptr_t)L_6))/1)),NULL));
		int32_t L_8 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>(L_7,NULL));
		V_2 = (-1);
		G_B2_0 = L_8;
		goto IL_0045;
	}

IL_0045:
	{
		G_B4_0 = G_B2_0;
		goto IL_0067;
	}

IL_0067:
	{
		G_B6_0 = G_B4_0;
		goto IL_0089;
	}

IL_0089:
	{
		G_B8_0 = G_B6_0;
		goto IL_00ab;
	}

IL_00ab:
	{
		G_B10_0 = G_B8_0;
		goto IL_00cd;
	}

IL_00cd:
	{
		G_B12_0 = G_B10_0;
		goto IL_00ef;
	}

IL_00ef:
	{
		G_B13_0 = G_B12_0;
	}
	{
		V_2 = 8;
		G_B21_0 = G_B13_0;
		goto IL_0176;
	}

IL_0176:
	{
		int32_t L_9 = V_2;
		return ((int32_t)(G_B21_0/L_9));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector_1__ctor_m1B5D6A9264B4450B3C14BD8FF9430354A337F2D6 (Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A* __this, uint64_t ___0_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(Vector_1_t2DEF63E613428E110D429967E5CA7DE8ADF91630_StaticInit);
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	int32_t V_2 = 0;
	int8_t* V_3 = NULL;
	int8_t* V_4 = NULL;
	int32_t V_5 = 0;
	uint16_t* V_6 = NULL;
	uint16_t* V_7 = NULL;
	int32_t V_8 = 0;
	int16_t* V_9 = NULL;
	int16_t* V_10 = NULL;
	int32_t V_11 = 0;
	uint32_t* V_12 = NULL;
	uint32_t* V_13 = NULL;
	int32_t V_14 = 0;
	int32_t* V_15 = NULL;
	int32_t* V_16 = NULL;
	int32_t V_17 = 0;
	uint64_t* V_18 = NULL;
	uint64_t* V_19 = NULL;
	int32_t V_20 = 0;
	int64_t* V_21 = NULL;
	int64_t* V_22 = NULL;
	int32_t V_23 = 0;
	float* V_24 = NULL;
	float* V_25 = NULL;
	int32_t V_26 = 0;
	double* V_27 = NULL;
	double* V_28 = NULL;
	int32_t V_29 = 0;
	{
		il2cpp_codegen_initobj(__this, sizeof(Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A));
		bool L_0;
		L_0 = Vector_get_IsHardwareAccelerated_m783509258751EBED64CBD9F387EC1BB4A15088AA(NULL);
		if (!L_0)
		{
			goto IL_0386;
		}
	}
	{
		goto IL_005e;
	}

IL_005e:
	{
		goto IL_00b3;
	}

IL_00b3:
	{
		goto IL_010d;
	}

IL_010d:
	{
		goto IL_0167;
	}

IL_0167:
	{
		goto IL_01c1;
	}

IL_01c1:
	{
		goto IL_021b;
	}

IL_021b:
	{
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_1 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint64_t* L_2 = (uint64_t*)(&L_1->___uint64_0);
		V_19 = L_2;
		uint64_t* L_3 = V_19;
		uintptr_t L_4 = (il2cpp_codegen_conv<uintptr_t,uint64_t*,intptr_t,false,false>(L_3,NULL));
		V_18 = (uint64_t*)L_4;
		V_20 = 0;
		goto IL_0267;
	}

IL_024d:
	{
		uint64_t* L_5 = V_18;
		int32_t L_6 = V_20;
		intptr_t L_7 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_6,NULL));
		uint64_t L_8 = ___0_value;
		*(((int64_t*)((uint64_t*)il2cpp_codegen_add((intptr_t)L_5, ((intptr_t)il2cpp_codegen_multiply(L_7, 8)))))) = ((int64_t)L_8);
		int32_t L_9 = V_20;
		V_20 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0267:
	{
		int32_t L_10 = V_20;
		CHECKED_LOCAL_INIT(Vector_1_t2DEF63E613428E110D429967E5CA7DE8ADF91630_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_11;
		L_11 = Vector_1_get_Count_mC75C8C6E913E7FF8A3D10467D6DADE41711EF3CC_inline(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3));
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_024d;
		}
	}
	{
		uintptr_t L_12 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_19 = (uint64_t*)L_12;
		return;
	}

IL_0386:
	{
		goto IL_0505;
	}

IL_0505:
	{
		goto IL_0684;
	}

IL_0684:
	{
		goto IL_0753;
	}

IL_0753:
	{
		goto IL_0822;
	}

IL_0822:
	{
		goto IL_0896;
	}

IL_0896:
	{
		goto IL_090a;
	}

IL_090a:
	{
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_13 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint64_t L_14 = ___0_value;
		L_13->___uint64_0 = L_14;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_15 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint64_t L_16 = ___0_value;
		L_15->___uint64_1 = L_16;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector_1__ctor_mBEC18AF78DE340D929AD22019717DE9ED57A4CCA (Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A* __this, void* ___0_dataPointer, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(Vector_1_t2DEF63E613428E110D429967E5CA7DE8ADF91630_StaticInit);
	{
		void* L_0 = ___0_dataPointer;
		CHECKED_LOCAL_INIT(Vector_1_t2DEF63E613428E110D429967E5CA7DE8ADF91630_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)),il2cpp_codegen_runtime_class_init_inline);
		Vector_1__ctor_mB3EB022FA5067096F41350560FA447FBA16BFF2B(__this, L_0, 0, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector_1__ctor_mB3EB022FA5067096F41350560FA447FBA16BFF2B (Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A* __this, void* ___0_dataPointer, int32_t ___1_offset, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(Vector_1_t2DEF63E613428E110D429967E5CA7DE8ADF91630_StaticInit);
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	int32_t V_3 = 0;
	int8_t* V_4 = NULL;
	int8_t* V_5 = NULL;
	int8_t* V_6 = NULL;
	int32_t V_7 = 0;
	uint16_t* V_8 = NULL;
	uint16_t* V_9 = NULL;
	uint16_t* V_10 = NULL;
	int32_t V_11 = 0;
	int16_t* V_12 = NULL;
	int16_t* V_13 = NULL;
	int16_t* V_14 = NULL;
	int32_t V_15 = 0;
	uint32_t* V_16 = NULL;
	uint32_t* V_17 = NULL;
	uint32_t* V_18 = NULL;
	int32_t V_19 = 0;
	int32_t* V_20 = NULL;
	int32_t* V_21 = NULL;
	int32_t* V_22 = NULL;
	int32_t V_23 = 0;
	uint64_t* V_24 = NULL;
	uint64_t* V_25 = NULL;
	uint64_t* V_26 = NULL;
	int32_t V_27 = 0;
	int64_t* V_28 = NULL;
	int64_t* V_29 = NULL;
	int64_t* V_30 = NULL;
	int32_t V_31 = 0;
	float* V_32 = NULL;
	float* V_33 = NULL;
	float* V_34 = NULL;
	int32_t V_35 = 0;
	double* V_36 = NULL;
	double* V_37 = NULL;
	double* V_38 = NULL;
	int32_t V_39 = 0;
	{
		il2cpp_codegen_initobj(__this, sizeof(Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A));
		goto IL_0053;
	}

IL_0053:
	{
		goto IL_00ae;
	}

IL_00ae:
	{
		goto IL_0112;
	}

IL_0112:
	{
		goto IL_0176;
	}

IL_0176:
	{
		goto IL_01da;
	}

IL_01da:
	{
		goto IL_023e;
	}

IL_023e:
	{
	}
	{
		void* L_0 = ___0_dataPointer;
		V_24 = (uint64_t*)L_0;
		uint64_t* L_1 = V_24;
		int32_t L_2 = ___1_offset;
		intptr_t L_3 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_2,NULL));
		V_24 = ((uint64_t*)il2cpp_codegen_add((intptr_t)L_1, ((intptr_t)il2cpp_codegen_multiply(L_3, 8))));
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_4 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint64_t* L_5 = (uint64_t*)(&L_4->___uint64_0);
		V_26 = L_5;
		uint64_t* L_6 = V_26;
		uintptr_t L_7 = (il2cpp_codegen_conv<uintptr_t,uint64_t*,intptr_t,false,false>(L_6,NULL));
		V_25 = (uint64_t*)L_7;
		V_27 = 0;
		goto IL_0294;
	}

IL_027c:
	{
		uint64_t* L_8 = V_25;
		int32_t L_9 = V_27;
		intptr_t L_10 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_9,NULL));
		uint64_t* L_11 = V_24;
		int32_t L_12 = V_27;
		intptr_t L_13 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_12,NULL));
		int64_t L_14 = *(((int64_t*)((uint64_t*)il2cpp_codegen_add((intptr_t)L_11, ((intptr_t)il2cpp_codegen_multiply(L_13, 8))))));
		*(((int64_t*)((uint64_t*)il2cpp_codegen_add((intptr_t)L_8, ((intptr_t)il2cpp_codegen_multiply(L_10, 8)))))) = L_14;
		int32_t L_15 = V_27;
		V_27 = ((int32_t)il2cpp_codegen_add(L_15, 1));
	}

IL_0294:
	{
		int32_t L_16 = V_27;
		CHECKED_LOCAL_INIT(Vector_1_t2DEF63E613428E110D429967E5CA7DE8ADF91630_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_17;
		L_17 = Vector_1_get_Count_mC75C8C6E913E7FF8A3D10467D6DADE41711EF3CC_inline(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3));
		if ((((int32_t)L_16) < ((int32_t)L_17)))
		{
			goto IL_027c;
		}
	}
	{
		uintptr_t L_18 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_26 = (uint64_t*)L_18;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t Vector_1_get_Item_m685EA4A01E8AF51DC7B5F78DE0583F8FD4997C99 (Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(Vector_1_t2DEF63E613428E110D429967E5CA7DE8ADF91630_StaticInit);
	uint8_t* V_0 = NULL;
	int8_t* V_1 = NULL;
	uint16_t* V_2 = NULL;
	int16_t* V_3 = NULL;
	uint32_t* V_4 = NULL;
	int32_t* V_5 = NULL;
	uint64_t* V_6 = NULL;
	int64_t* V_7 = NULL;
	float* V_8 = NULL;
	double* V_9 = NULL;
	{
		int32_t L_0 = ___0_index;
		CHECKED_LOCAL_INIT(Vector_1_t2DEF63E613428E110D429967E5CA7DE8ADF91630_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_1;
		L_1 = Vector_1_get_Count_mC75C8C6E913E7FF8A3D10467D6DADE41711EF3CC_inline(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3));
		if ((((int32_t)L_0) >= ((int32_t)L_1)))
		{
			goto IL_000c;
		}
	}
	{
		int32_t L_2 = ___0_index;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_0022;
		}
	}

IL_000c:
	{
		int32_t L_3 = ___0_index;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_4);
		String_t* L_6;
		L_6 = SR_Format_m9E8DC9AEFDC34AC67473EFAEAB78C5066C1A0D09(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral491788442E76F5D7830F0DBFCF8EDD98854F636F)), L_5, NULL);
		IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82* L_7 = (IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82_il2cpp_TypeInfo_var)));
		IndexOutOfRangeException__ctor_mFD06819F05B815BE2D6E826D4E04F4C449D0A425(L_7, L_6, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, method);
	}

IL_0022:
	{
		goto IL_0059;
	}

IL_0059:
	{
		goto IL_0090;
	}

IL_0090:
	{
		goto IL_00ca;
	}

IL_00ca:
	{
		goto IL_0104;
	}

IL_0104:
	{
		goto IL_0140;
	}

IL_0140:
	{
		goto IL_017c;
	}

IL_017c:
	{
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_8 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint64_t* L_9 = (uint64_t*)(&L_8->___uint64_0);
		V_6 = L_9;
		uint64_t* L_10 = V_6;
		uintptr_t L_11 = (il2cpp_codegen_conv<uintptr_t,uint64_t*,intptr_t,false,false>(L_10,NULL));
		int32_t L_12 = ___0_index;
		intptr_t L_13 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_12,NULL));
		int64_t L_14 = *(((int64_t*)((intptr_t)il2cpp_codegen_add((intptr_t)L_11, ((intptr_t)il2cpp_codegen_multiply(L_13, 8))))));
		return L_14;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector_1_Equals_mE275DCDE4DC3B6FB30AB80ACEAC8363207BA9BEC (Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(Vector_1_t2DEF63E613428E110D429967E5CA7DE8ADF91630_StaticInit);
	{
		RuntimeObject* L_0 = ___0_obj;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0))))
		{
			goto IL_000a;
		}
	}
	{
		return (bool)0;
	}

IL_000a:
	{
		RuntimeObject* L_1 = ___0_obj;
		CHECKED_LOCAL_INIT(Vector_1_t2DEF63E613428E110D429967E5CA7DE8ADF91630_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)),il2cpp_codegen_runtime_class_init_inline);
		bool L_2;
		L_2 = Vector_1_Equals_mAE01D42B31EB54893DC4DB1BE8A99216AF784C27(__this, ((*(Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A*)UnBox(L_1, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5));
		return L_2;
	}
}
IL2CPP_EXTERN_C  bool Vector_1_Equals_mE275DCDE4DC3B6FB30AB80ACEAC8363207BA9BEC_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method)
{
	Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A>(__this);
	bool _returnValue;
	_returnValue = Vector_1_Equals_mE275DCDE4DC3B6FB30AB80ACEAC8363207BA9BEC_inline(_thisAdjusted, ___0_obj, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector_1_Equals_mAE01D42B31EB54893DC4DB1BE8A99216AF784C27 (Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A* __this, Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A ___0_other, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(Vector_1_t2DEF63E613428E110D429967E5CA7DE8ADF91630_StaticInit);
	int32_t V_0 = 0;
	{
		bool L_0;
		L_0 = Vector_get_IsHardwareAccelerated_m783509258751EBED64CBD9F387EC1BB4A15088AA(NULL);
		if (!L_0)
		{
			goto IL_0031;
		}
	}
	{
		V_0 = 0;
		goto IL_0027;
	}

IL_000b:
	{
		int32_t L_1 = V_0;
		CHECKED_LOCAL_INIT(Vector_1_t2DEF63E613428E110D429967E5CA7DE8ADF91630_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)),il2cpp_codegen_runtime_class_init_inline);
		uint64_t L_2;
		L_2 = Vector_1_get_Item_m685EA4A01E8AF51DC7B5F78DE0583F8FD4997C99(__this, L_1, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6));
		int32_t L_3 = V_0;
		uint64_t L_4;
		L_4 = Vector_1_get_Item_m685EA4A01E8AF51DC7B5F78DE0583F8FD4997C99((&___0_other), L_3, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6));
		bool L_5;
		L_5 = Vector_1_ScalarEquals_m73081D1B852400C74618D0A814BBED2FE272175D_inline(L_2, L_4, NULL);
		if (L_5)
		{
			goto IL_0023;
		}
	}
	{
		return (bool)0;
	}

IL_0023:
	{
		int32_t L_6 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_6, 1));
	}

IL_0027:
	{
		int32_t L_7 = V_0;
		CHECKED_LOCAL_INIT(Vector_1_t2DEF63E613428E110D429967E5CA7DE8ADF91630_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_8;
		L_8 = Vector_1_get_Count_mC75C8C6E913E7FF8A3D10467D6DADE41711EF3CC_inline(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3));
		if ((((int32_t)L_7) < ((int32_t)L_8)))
		{
			goto IL_000b;
		}
	}
	{
		return (bool)1;
	}

IL_0031:
	{
		goto IL_01f0;
	}

IL_01f0:
	{
		goto IL_03af;
	}

IL_03af:
	{
		goto IL_0496;
	}

IL_0496:
	{
		goto IL_057d;
	}

IL_057d:
	{
		goto IL_05fb;
	}

IL_05fb:
	{
		goto IL_0679;
	}

IL_0679:
	{
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_9 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint64_t L_10 = L_9->___uint64_0;
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_11 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_12 = L_11.___register;
		uint64_t L_13 = L_12.___uint64_0;
		if ((!(((uint64_t)L_10) == ((uint64_t)L_13))))
		{
			goto IL_06c5;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_14 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint64_t L_15 = L_14->___uint64_1;
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_16 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_17 = L_16.___register;
		uint64_t L_18 = L_17.___uint64_1;
		return (bool)((((int64_t)L_15) == ((int64_t)L_18))? 1 : 0);
	}

IL_06c5:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool Vector_1_Equals_mAE01D42B31EB54893DC4DB1BE8A99216AF784C27_AdjustorThunk (RuntimeObject* __this, Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A ___0_other, const RuntimeMethod* method)
{
	Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A>(__this);
	bool _returnValue;
	_returnValue = Vector_1_Equals_mAE01D42B31EB54893DC4DB1BE8A99216AF784C27(_thisAdjusted, ___0_other, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Vector_1_GetHashCode_mEC951E56E2DC500CF877DFAD5542E0920B73B00A (Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t285C6E63B4A4E8D837BDBC63DE4E2D23C85467D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(Vector_1_t2DEF63E613428E110D429967E5CA7DE8ADF91630_StaticInit);
	CHECKED_LOCAL(HashHelpers_t285C6E63B4A4E8D837BDBC63DE4E2D23C85467D4_StaticInit);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	uint8_t V_2 = 0x0;
	int32_t V_3 = 0;
	int8_t V_4 = 0x0;
	int32_t V_5 = 0;
	uint16_t V_6 = 0;
	int32_t V_7 = 0;
	int16_t V_8 = 0;
	int32_t V_9 = 0;
	uint32_t V_10 = 0;
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	int32_t V_13 = 0;
	uint64_t V_14 = 0;
	int32_t V_15 = 0;
	int64_t V_16 = 0;
	int32_t V_17 = 0;
	float V_18 = 0.0f;
	int32_t V_19 = 0;
	double V_20 = 0.0;
	{
		V_0 = 0;
		bool L_0;
		L_0 = Vector_get_IsHardwareAccelerated_m783509258751EBED64CBD9F387EC1BB4A15088AA(NULL);
		if (!L_0)
		{
			goto IL_034a;
		}
	}
	{
		goto IL_0059;
	}

IL_0059:
	{
		goto IL_00a7;
	}

IL_00a7:
	{
		goto IL_00fa;
	}

IL_00fa:
	{
		goto IL_014d;
	}

IL_014d:
	{
		goto IL_01a0;
	}

IL_01a0:
	{
		goto IL_01f3;
	}

IL_01f3:
	{
	}
	{
		V_13 = 0;
		goto IL_023b;
	}

IL_0213:
	{
		int32_t L_1 = V_0;
		int32_t L_2 = V_13;
		CHECKED_LOCAL_INIT(Vector_1_t2DEF63E613428E110D429967E5CA7DE8ADF91630_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)),il2cpp_codegen_runtime_class_init_inline);
		uint64_t L_3;
		L_3 = Vector_1_get_Item_m685EA4A01E8AF51DC7B5F78DE0583F8FD4997C99(__this, L_2, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6));
		V_14 = L_3;
		int32_t L_4;
		L_4 = UInt64_GetHashCode_m65D9FD0102B6B01BF38D986F060F0BDBC29B4F92((&V_14), NULL);
		CHECKED_LOCAL_INIT(HashHelpers_t285C6E63B4A4E8D837BDBC63DE4E2D23C85467D4_StaticInit,(HashHelpers_t285C6E63B4A4E8D837BDBC63DE4E2D23C85467D4_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_5;
		L_5 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_1, L_4, NULL);
		V_0 = L_5;
		int32_t L_6 = V_13;
		V_13 = ((int32_t)il2cpp_codegen_add(L_6, 1));
	}

IL_023b:
	{
		int32_t L_7 = V_13;
		CHECKED_LOCAL_INIT(Vector_1_t2DEF63E613428E110D429967E5CA7DE8ADF91630_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_8;
		L_8 = Vector_1_get_Count_mC75C8C6E913E7FF8A3D10467D6DADE41711EF3CC_inline(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3));
		if ((((int32_t)L_7) < ((int32_t)L_8)))
		{
			goto IL_0213;
		}
	}
	{
		int32_t L_9 = V_0;
		return L_9;
	}

IL_034a:
	{
		goto IL_04da;
	}

IL_04da:
	{
		goto IL_066a;
	}

IL_066a:
	{
		goto IL_0742;
	}

IL_0742:
	{
		goto IL_081a;
	}

IL_081a:
	{
		goto IL_0893;
	}

IL_0893:
	{
		goto IL_090c;
	}

IL_090c:
	{
	}
	{
		int32_t L_10 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_11 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint64_t* L_12 = (uint64_t*)(&L_11->___uint64_0);
		int32_t L_13;
		L_13 = UInt64_GetHashCode_m65D9FD0102B6B01BF38D986F060F0BDBC29B4F92(L_12, NULL);
		CHECKED_LOCAL_INIT(HashHelpers_t285C6E63B4A4E8D837BDBC63DE4E2D23C85467D4_StaticInit,(HashHelpers_t285C6E63B4A4E8D837BDBC63DE4E2D23C85467D4_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_14;
		L_14 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_10, L_13, NULL);
		V_0 = L_14;
		int32_t L_15 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_16 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint64_t* L_17 = (uint64_t*)(&L_16->___uint64_1);
		int32_t L_18;
		L_18 = UInt64_GetHashCode_m65D9FD0102B6B01BF38D986F060F0BDBC29B4F92(L_17, NULL);
		int32_t L_19;
		L_19 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_15, L_18, NULL);
		V_0 = L_19;
		int32_t L_20 = V_0;
		return L_20;
	}
}
IL2CPP_EXTERN_C  int32_t Vector_1_GetHashCode_mEC951E56E2DC500CF877DFAD5542E0920B73B00A_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A>(__this);
	int32_t _returnValue;
	_returnValue = Vector_1_GetHashCode_mEC951E56E2DC500CF877DFAD5542E0920B73B00A(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Vector_1_ToString_m3EBF88D3E195BD2C4B0D1CCBD9F71E32233CA4F4 (Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3DCC6243286938BE75C3FA773B9BA71160A2E869);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_StaticInit);
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(Vector_1_t2DEF63E613428E110D429967E5CA7DE8ADF91630_StaticInit);
	{
		CHECKED_LOCAL_INIT(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_StaticInit,(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_0;
		L_0 = CultureInfo_get_CurrentCulture_m8A4580F49DDD7E9DB34C699965423DB8E3BBA9A5(NULL);
		CHECKED_LOCAL_INIT(Vector_1_t2DEF63E613428E110D429967E5CA7DE8ADF91630_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)),il2cpp_codegen_runtime_class_init_inline);
		String_t* L_1;
		L_1 = Vector_1_ToString_m8F20119DB8CF7117F2D6E4D165C4A843F7D3586C(__this, _stringLiteral3DCC6243286938BE75C3FA773B9BA71160A2E869, L_0, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8));
		return L_1;
	}
}
IL2CPP_EXTERN_C  String_t* Vector_1_ToString_m3EBF88D3E195BD2C4B0D1CCBD9F71E32233CA4F4_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A>(__this);
	String_t* _returnValue;
	_returnValue = Vector_1_ToString_m3EBF88D3E195BD2C4B0D1CCBD9F71E32233CA4F4(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Vector_1_ToString_m8F20119DB8CF7117F2D6E4D165C4A843F7D3586C (Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A* __this, String_t* ___0_format, RuntimeObject* ___1_formatProvider, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(Vector_1_t2DEF63E613428E110D429967E5CA7DE8ADF91630_StaticInit);
	StringBuilder_t* V_0 = NULL;
	String_t* V_1 = NULL;
	int32_t V_2 = 0;
	{
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		V_0 = L_0;
		RuntimeObject* L_1 = ___1_formatProvider;
		NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* L_2;
		L_2 = NumberFormatInfo_GetInstance_m705987E5E7D3E5EC5C5DD2D088FBC9BCBA0FC31F(L_1, NULL);
		String_t* L_3;
		L_3 = NumberFormatInfo_get_NumberGroupSeparator_m0556B092AA471513B1EDC31C047712226D39BEB6_inline(L_2, NULL);
		V_1 = L_3;
		StringBuilder_t* L_4 = V_0;
		StringBuilder_t* L_5;
		L_5 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_4, ((int32_t)60), NULL);
		V_2 = 0;
		goto IL_0053;
	}

IL_001f:
	{
		StringBuilder_t* L_6 = V_0;
		int32_t L_7 = V_2;
		CHECKED_LOCAL_INIT(Vector_1_t2DEF63E613428E110D429967E5CA7DE8ADF91630_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)),il2cpp_codegen_runtime_class_init_inline);
		uint64_t L_8;
		L_8 = Vector_1_get_Item_m685EA4A01E8AF51DC7B5F78DE0583F8FD4997C99(__this, L_7, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6));
		uint64_t L_9 = L_8;
		RuntimeObject* L_10 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2), &L_9);
		String_t* L_11 = ___0_format;
		RuntimeObject* L_12 = ___1_formatProvider;
		String_t* L_13;
		L_13 = UInt64_ToString_m779041C8FDD58BF8617838B00CD041788DB2F1A3((uint64_t*)UnBox(L_10), L_11, L_12, NULL);
		StringBuilder_t* L_14;
		L_14 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_6, L_13, NULL);
		StringBuilder_t* L_15 = V_0;
		String_t* L_16 = V_1;
		StringBuilder_t* L_17;
		L_17 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_15, L_16, NULL);
		StringBuilder_t* L_18 = V_0;
		StringBuilder_t* L_19;
		L_19 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_18, ((int32_t)32), NULL);
		int32_t L_20 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_20, 1));
	}

IL_0053:
	{
		int32_t L_21 = V_2;
		CHECKED_LOCAL_INIT(Vector_1_t2DEF63E613428E110D429967E5CA7DE8ADF91630_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_22;
		L_22 = Vector_1_get_Count_mC75C8C6E913E7FF8A3D10467D6DADE41711EF3CC_inline(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3));
		if ((((int32_t)L_21) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_22, 1)))))
		{
			goto IL_001f;
		}
	}
	{
		StringBuilder_t* L_23 = V_0;
		CHECKED_LOCAL_INIT(Vector_1_t2DEF63E613428E110D429967E5CA7DE8ADF91630_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_24;
		L_24 = Vector_1_get_Count_mC75C8C6E913E7FF8A3D10467D6DADE41711EF3CC_inline(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3));
		uint64_t L_25;
		L_25 = Vector_1_get_Item_m685EA4A01E8AF51DC7B5F78DE0583F8FD4997C99(__this, ((int32_t)il2cpp_codegen_subtract(L_24, 1)), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6));
		uint64_t L_26 = L_25;
		RuntimeObject* L_27 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2), &L_26);
		String_t* L_28 = ___0_format;
		RuntimeObject* L_29 = ___1_formatProvider;
		String_t* L_30;
		L_30 = UInt64_ToString_m779041C8FDD58BF8617838B00CD041788DB2F1A3((uint64_t*)UnBox(L_27), L_28, L_29, NULL);
		StringBuilder_t* L_31;
		L_31 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_23, L_30, NULL);
		StringBuilder_t* L_32 = V_0;
		StringBuilder_t* L_33;
		L_33 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_32, ((int32_t)62), NULL);
		StringBuilder_t* L_34 = V_0;
		String_t* L_35;
		L_35 = VirtualFuncInvoker0< String_t* >::Invoke(3, L_34);
		return L_35;
	}
}
IL2CPP_EXTERN_C  String_t* Vector_1_ToString_m8F20119DB8CF7117F2D6E4D165C4A843F7D3586C_AdjustorThunk (RuntimeObject* __this, String_t* ___0_format, RuntimeObject* ___1_formatProvider, const RuntimeMethod* method)
{
	Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A>(__this);
	String_t* _returnValue;
	_returnValue = Vector_1_ToString_m8F20119DB8CF7117F2D6E4D165C4A843F7D3586C(_thisAdjusted, ___0_format, ___1_formatProvider, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector_1_op_Equality_mD4D4AE7733CACE50CA2FCFFFB0A16818EEC01293 (Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A ___0_left, Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A ___1_right, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(Vector_1_t2DEF63E613428E110D429967E5CA7DE8ADF91630_StaticInit);
	{
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_0 = ___1_right;
		CHECKED_LOCAL_INIT(Vector_1_t2DEF63E613428E110D429967E5CA7DE8ADF91630_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)),il2cpp_codegen_runtime_class_init_inline);
		bool L_1;
		L_1 = Vector_1_Equals_mAE01D42B31EB54893DC4DB1BE8A99216AF784C27((&___0_left), L_0, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5));
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector_1_op_Inequality_m4963768CF3F7944DA5E519ADB8668431198BBC36 (Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A ___0_left, Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A ___1_right, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(Vector_1_t2DEF63E613428E110D429967E5CA7DE8ADF91630_StaticInit);
	{
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_0 = ___0_left;
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_1 = ___1_right;
		CHECKED_LOCAL_INIT(Vector_1_t2DEF63E613428E110D429967E5CA7DE8ADF91630_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)),il2cpp_codegen_runtime_class_init_inline);
		bool L_2;
		L_2 = Vector_1_op_Equality_mD4D4AE7733CACE50CA2FCFFFB0A16818EEC01293_inline(L_0, L_1, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 9));
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A Vector_1_Equals_m10063846A51F9D722BC0A8999A9F6B12C37988FF (Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A ___0_left, Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A ___1_right, const RuntimeMethod* method) 
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
	uint64_t* G_B53_0 = NULL;
	uint64_t* G_B52_0 = NULL;
	uint64_t G_B54_0 = 0;
	uint64_t* G_B54_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B265_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B264_0 = NULL;
	uint64_t G_B266_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B266_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B268_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B267_0 = NULL;
	uint64_t G_B269_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B269_1 = NULL;
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
		goto IL_0133;
	}

IL_0133:
	{
		goto IL_01a0;
	}

IL_01a0:
	{
		goto IL_020d;
	}

IL_020d:
	{
		goto IL_027a;
	}

IL_027a:
	{
	}
	{
		CHECKED_LOCAL_INIT(Vector_1_t2DEF63E613428E110D429967E5CA7DE8ADF91630_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_1;
		L_1 = Vector_1_get_Count_mC75C8C6E913E7FF8A3D10467D6DADE41711EF3CC_inline(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3));
		uintptr_t L_2 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(L_1,NULL));
		if ((uintptr_t)L_2 * (uintptr_t)8 > (uintptr_t)kIl2CppUIntPtrMax)
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		intptr_t L_3 = ((intptr_t)il2cpp_codegen_multiply((intptr_t)L_2, 8));
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
		V_12 = (uint64_t*)L_4;
		V_13 = 0;
		goto IL_02d7;
	}

IL_02a6:
	{
		uint64_t* L_5 = V_12;
		int32_t L_6 = V_13;
		intptr_t L_7 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_6,NULL));
		int32_t L_8 = V_13;
		CHECKED_LOCAL_INIT(Vector_1_t2DEF63E613428E110D429967E5CA7DE8ADF91630_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)),il2cpp_codegen_runtime_class_init_inline);
		uint64_t L_9;
		L_9 = Vector_1_get_Item_m685EA4A01E8AF51DC7B5F78DE0583F8FD4997C99((&___0_left), L_8, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6));
		int32_t L_10 = V_13;
		uint64_t L_11;
		L_11 = Vector_1_get_Item_m685EA4A01E8AF51DC7B5F78DE0583F8FD4997C99((&___1_right), L_10, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6));
		bool L_12;
		L_12 = Vector_1_ScalarEquals_m73081D1B852400C74618D0A814BBED2FE272175D_inline(L_9, L_11, NULL);
		if (L_12)
		{
			G_B53_0 = ((uint64_t*)il2cpp_codegen_add((intptr_t)L_5, ((intptr_t)il2cpp_codegen_multiply(L_7, 8))));
			goto IL_02cb;
		}
		G_B52_0 = ((uint64_t*)il2cpp_codegen_add((intptr_t)L_5, ((intptr_t)il2cpp_codegen_multiply(L_7, 8))));
	}
	{
		int64_t L_13 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(0,NULL));
		G_B54_0 = ((uint64_t)(L_13));
		G_B54_1 = G_B52_0;
		goto IL_02d0;
	}

IL_02cb:
	{
		uint64_t L_14;
		L_14 = ConstantHelper_GetUInt64WithAllBitsSet_mB7F3E046EE6B1B20C552BF7CF619416E239A5A96_inline(NULL);
		G_B54_0 = L_14;
		G_B54_1 = G_B53_0;
	}

IL_02d0:
	{
		*(((int64_t*)G_B54_1)) = ((int64_t)G_B54_0);
		int32_t L_15 = V_13;
		V_13 = ((int32_t)il2cpp_codegen_add(L_15, 1));
	}

IL_02d7:
	{
		int32_t L_16 = V_13;
		CHECKED_LOCAL_INIT(Vector_1_t2DEF63E613428E110D429967E5CA7DE8ADF91630_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_17;
		L_17 = Vector_1_get_Count_mC75C8C6E913E7FF8A3D10467D6DADE41711EF3CC_inline(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3));
		if ((((int32_t)L_16) < ((int32_t)L_17)))
		{
			goto IL_02a6;
		}
	}
	{
		uint64_t* L_18 = V_12;
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_19;
		memset((&L_19), 0, sizeof(L_19));
		Vector_1__ctor_mBEC18AF78DE340D929AD22019717DE9ED57A4CCA((&L_19), (void*)L_18, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 10));
		return L_19;
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
		goto IL_0ad9;
	}

IL_0ad9:
	{
		goto IL_0c37;
	}

IL_0c37:
	{
		goto IL_0cf9;
	}

IL_0cf9:
	{
		goto IL_0dbb;
	}

IL_0dbb:
	{
	}
	{
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_20 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_21 = L_20.___register;
		uint64_t L_22 = L_21.___uint64_0;
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_23 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_24 = L_23.___register;
		uint64_t L_25 = L_24.___uint64_0;
		if ((((int64_t)L_22) == ((int64_t)L_25)))
		{
			G_B265_0 = (&V_20);
			goto IL_0df4;
		}
		G_B264_0 = (&V_20);
	}
	{
		int64_t L_26 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(0,NULL));
		G_B266_0 = ((uint64_t)(L_26));
		G_B266_1 = G_B264_0;
		goto IL_0df9;
	}

IL_0df4:
	{
		uint64_t L_27;
		L_27 = ConstantHelper_GetUInt64WithAllBitsSet_mB7F3E046EE6B1B20C552BF7CF619416E239A5A96_inline(NULL);
		G_B266_0 = L_27;
		G_B266_1 = G_B265_0;
	}

IL_0df9:
	{
		G_B266_1->___uint64_0 = G_B266_0;
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_28 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_29 = L_28.___register;
		uint64_t L_30 = L_29.___uint64_1;
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_31 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_32 = L_31.___register;
		uint64_t L_33 = L_32.___uint64_1;
		if ((((int64_t)L_30) == ((int64_t)L_33)))
		{
			G_B268_0 = (&V_20);
			goto IL_0e1c;
		}
		G_B267_0 = (&V_20);
	}
	{
		int64_t L_34 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(0,NULL));
		G_B269_0 = ((uint64_t)(L_34));
		G_B269_1 = G_B267_0;
		goto IL_0e21;
	}

IL_0e1c:
	{
		uint64_t L_35;
		L_35 = ConstantHelper_GetUInt64WithAllBitsSet_mB7F3E046EE6B1B20C552BF7CF619416E239A5A96_inline(NULL);
		G_B269_0 = L_35;
		G_B269_1 = G_B268_0;
	}

IL_0e21:
	{
		G_B269_1->___uint64_1 = G_B269_0;
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_36;
		memset((&L_36), 0, sizeof(L_36));
		Vector_1__ctor_mEA86543744A54FCE590FDBF012FAE9037A5F1606((&L_36), (&V_20), NULL);
		return L_36;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector_1_ScalarEquals_m73081D1B852400C74618D0A814BBED2FE272175D (uint64_t ___0_left, uint64_t ___1_right, const RuntimeMethod* method) 
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
		goto IL_009c;
	}

IL_009c:
	{
		goto IL_00d0;
	}

IL_00d0:
	{
		goto IL_0104;
	}

IL_0104:
	{
		goto IL_0138;
	}

IL_0138:
	{
	}
	{
		uint64_t L_0 = ___0_left;
		uint64_t L_1 = ___1_right;
		return (bool)((((int64_t)L_0) == ((int64_t)L_1))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t Vector_1_GetOneValue_mE2DE5D8CFC8D7A4990743C160CD1C4ED71CDA288 (const RuntimeMethod* method) 
{
	{
		goto IL_0027;
	}

IL_0027:
	{
		goto IL_004e;
	}

IL_004e:
	{
		goto IL_0075;
	}

IL_0075:
	{
		goto IL_009c;
	}

IL_009c:
	{
		goto IL_00c3;
	}

IL_00c3:
	{
		goto IL_00ea;
	}

IL_00ea:
	{
	}
	{
		int64_t L_0 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(1,NULL));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t Vector_1_GetAllBitsSetValue_m99E582A6A7DA5089B26FE42E5F8FDE26A6005ED0 (const RuntimeMethod* method) 
{
	{
		goto IL_002b;
	}

IL_002b:
	{
		goto IL_0056;
	}

IL_0056:
	{
		goto IL_0081;
	}

IL_0081:
	{
		goto IL_00ac;
	}

IL_00ac:
	{
		goto IL_00d7;
	}

IL_00d7:
	{
		goto IL_0102;
	}

IL_0102:
	{
	}
	{
		uint64_t L_0;
		L_0 = ConstantHelper_GetUInt64WithAllBitsSet_mB7F3E046EE6B1B20C552BF7CF619416E239A5A96_inline(NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector_1__cctor_m152F538F7C3F6DB8EA8C03902F8A68FF06A70109 (const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	{
		int32_t L_0;
		L_0 = Vector_1_InitializeCount_mE29E088973A17B81B830C30831075135FC8E263A(NULL);
		((Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___s_count = L_0;
		il2cpp_codegen_initobj((&((Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___s_zero), sizeof(Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A));
		uint64_t L_1;
		L_1 = Vector_1_GetOneValue_mE2DE5D8CFC8D7A4990743C160CD1C4ED71CDA288_inline(NULL);
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_2;
		memset((&L_2), 0, sizeof(L_2));
		Vector_1__ctor_m1B5D6A9264B4450B3C14BD8FF9430354A337F2D6((&L_2), L_1, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 14));
		((Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___s_one = L_2;
		uint64_t L_3;
		L_3 = Vector_1_GetAllBitsSetValue_m99E582A6A7DA5089B26FE42E5F8FDE26A6005ED0_inline(NULL);
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector_1__ctor_m1B5D6A9264B4450B3C14BD8FF9430354A337F2D6((&L_4), L_3, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 14));
		((Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___s_allOnes = L_4;
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* NumberFormatInfo_get_NumberGroupSeparator_m0556B092AA471513B1EDC31C047712226D39BEB6_inline (NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___numberGroupSeparator;
		return L_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t ConstantHelper_GetUInt64WithAllBitsSet_mB7F3E046EE6B1B20C552BF7CF619416E239A5A96_inline (const RuntimeMethod* method) 
{
	uint64_t V_0 = 0;
	{
		int64_t L_0 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(0,NULL));
		V_0 = L_0;
		uintptr_t L_1 = (il2cpp_codegen_conv<uintptr_t,uint64_t*,intptr_t,false,false>((&V_0),NULL));
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>((-1),NULL));
		*(((int64_t*)L_1)) = L_2;
		uint64_t L_3 = V_0;
		return L_3;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* EqualityComparer_1_get_Default_mF70F6C11A35B420DFA4628EE316B087F2DCB280C_inline (const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* V_0 = NULL;
	{
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_0 = ((EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_2;
		L_2 = EqualityComparer_1_CreateComparer_m432C82F7354C37E610794C1DA866DFA7DAC9C35E(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
		V_0 = L_2;
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t13ACD867E946362B862A2AA1D58B7265A48EDC21* EqualityComparer_1_get_Default_m68A9FC33718EE6F74A877D4A760989A962FBD0D2_inline (const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	EqualityComparer_1_t13ACD867E946362B862A2AA1D58B7265A48EDC21* V_0 = NULL;
	{
		EqualityComparer_1_t13ACD867E946362B862A2AA1D58B7265A48EDC21* L_0 = ((EqualityComparer_1_t13ACD867E946362B862A2AA1D58B7265A48EDC21_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_t13ACD867E946362B862A2AA1D58B7265A48EDC21* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_t13ACD867E946362B862A2AA1D58B7265A48EDC21* L_2;
		L_2 = EqualityComparer_1_CreateComparer_mB1324B20A8BC571BB3CBACC5E41F1A4D2F420632(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
		V_0 = L_2;
		EqualityComparer_1_t13ACD867E946362B862A2AA1D58B7265A48EDC21* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_t13ACD867E946362B862A2AA1D58B7265A48EDC21_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_t13ACD867E946362B862A2AA1D58B7265A48EDC21_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_t13ACD867E946362B862A2AA1D58B7265A48EDC21* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4* EqualityComparer_1_get_Default_mBB75BC0723DFD7850F43E72E34026DD070CF5932_inline (const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4* V_0 = NULL;
	{
		EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4* L_0 = ((EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4* L_2;
		L_2 = EqualityComparer_1_CreateComparer_m3BD7BED1F69ABEE55E320BA9CCFBB473E9F57C66(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
		V_0 = L_2;
		EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4* L_4 = V_0;
		return L_4;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector_1_Equals_mD7F4E0B493DD44E2685BC17F8D6EAD92342CBC29_inline (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(Vector_1_t2DEF63E613428E110D429967E5CA7DE8ADF91630_StaticInit);
	{
		RuntimeObject* L_0 = ___0_obj;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0))))
		{
			goto IL_000a;
		}
	}
	{
		return (bool)0;
	}

IL_000a:
	{
		RuntimeObject* L_1 = ___0_obj;
		CHECKED_LOCAL_INIT(Vector_1_t2DEF63E613428E110D429967E5CA7DE8ADF91630_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)),il2cpp_codegen_runtime_class_init_inline);
		bool L_2;
		L_2 = Vector_1_Equals_m729FD34A0F43A7C8A8DF285BCED9B5B31D579FE8(__this, ((*(Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489*)UnBox(L_1, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5));
		return L_2;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector_1_op_Equality_mB42F3DAE52C3BC7579B302E623196C45A5DEAC6B_inline (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 ___0_left, Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 ___1_right, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(Vector_1_t2DEF63E613428E110D429967E5CA7DE8ADF91630_StaticInit);
	{
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_0 = ___1_right;
		CHECKED_LOCAL_INIT(Vector_1_t2DEF63E613428E110D429967E5CA7DE8ADF91630_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)),il2cpp_codegen_runtime_class_init_inline);
		bool L_1;
		L_1 = Vector_1_Equals_m729FD34A0F43A7C8A8DF285BCED9B5B31D579FE8((&___0_left), L_0, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5));
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint16_t Vector_1_GetOneValue_m7E814AFD17E4D390C12EF731DA01203D262D9953_inline (const RuntimeMethod* method) 
{
	{
		goto IL_0027;
	}

IL_0027:
	{
		goto IL_004e;
	}

IL_004e:
	{
	}
	{
		return (uint16_t)1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint16_t Vector_1_GetAllBitsSetValue_m854DE079EA89F97089D3EF29D7C31F081F420580_inline (const RuntimeMethod* method) 
{
	{
		goto IL_002b;
	}

IL_002b:
	{
		goto IL_0056;
	}

IL_0056:
	{
	}
	{
		uint16_t L_0;
		L_0 = ConstantHelper_GetUInt16WithAllBitsSet_mD3E13D933A06059499F0E0CBE6798D72D175464A_inline(NULL);
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector_1_get_Count_mC75C8C6E913E7FF8A3D10467D6DADE41711EF3CC_inline (const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(Vector_1_t2DEF63E613428E110D429967E5CA7DE8ADF91630_StaticInit);
	{
		CHECKED_LOCAL_INIT(Vector_1_t2DEF63E613428E110D429967E5CA7DE8ADF91630_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_0 = ((Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___s_count;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector_1_Equals_mE275DCDE4DC3B6FB30AB80ACEAC8363207BA9BEC_inline (Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(Vector_1_t2DEF63E613428E110D429967E5CA7DE8ADF91630_StaticInit);
	{
		RuntimeObject* L_0 = ___0_obj;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0))))
		{
			goto IL_000a;
		}
	}
	{
		return (bool)0;
	}

IL_000a:
	{
		RuntimeObject* L_1 = ___0_obj;
		CHECKED_LOCAL_INIT(Vector_1_t2DEF63E613428E110D429967E5CA7DE8ADF91630_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)),il2cpp_codegen_runtime_class_init_inline);
		bool L_2;
		L_2 = Vector_1_Equals_mAE01D42B31EB54893DC4DB1BE8A99216AF784C27(__this, ((*(Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A*)UnBox(L_1, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5));
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector_1_ScalarEquals_m73081D1B852400C74618D0A814BBED2FE272175D_inline (uint64_t ___0_left, uint64_t ___1_right, const RuntimeMethod* method) 
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
		goto IL_009c;
	}

IL_009c:
	{
		goto IL_00d0;
	}

IL_00d0:
	{
		goto IL_0104;
	}

IL_0104:
	{
		goto IL_0138;
	}

IL_0138:
	{
	}
	{
		uint64_t L_0 = ___0_left;
		uint64_t L_1 = ___1_right;
		return (bool)((((int64_t)L_0) == ((int64_t)L_1))? 1 : 0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector_1_op_Equality_mD4D4AE7733CACE50CA2FCFFFB0A16818EEC01293_inline (Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A ___0_left, Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A ___1_right, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(Vector_1_t2DEF63E613428E110D429967E5CA7DE8ADF91630_StaticInit);
	{
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_0 = ___1_right;
		CHECKED_LOCAL_INIT(Vector_1_t2DEF63E613428E110D429967E5CA7DE8ADF91630_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)),il2cpp_codegen_runtime_class_init_inline);
		bool L_1;
		L_1 = Vector_1_Equals_mAE01D42B31EB54893DC4DB1BE8A99216AF784C27((&___0_left), L_0, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5));
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t Vector_1_GetOneValue_mE2DE5D8CFC8D7A4990743C160CD1C4ED71CDA288_inline (const RuntimeMethod* method) 
{
	{
		goto IL_0027;
	}

IL_0027:
	{
		goto IL_004e;
	}

IL_004e:
	{
		goto IL_0075;
	}

IL_0075:
	{
		goto IL_009c;
	}

IL_009c:
	{
		goto IL_00c3;
	}

IL_00c3:
	{
		goto IL_00ea;
	}

IL_00ea:
	{
	}
	{
		int64_t L_0 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(1,NULL));
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t Vector_1_GetAllBitsSetValue_m99E582A6A7DA5089B26FE42E5F8FDE26A6005ED0_inline (const RuntimeMethod* method) 
{
	{
		goto IL_002b;
	}

IL_002b:
	{
		goto IL_0056;
	}

IL_0056:
	{
		goto IL_0081;
	}

IL_0081:
	{
		goto IL_00ac;
	}

IL_00ac:
	{
		goto IL_00d7;
	}

IL_00d7:
	{
		goto IL_0102;
	}

IL_0102:
	{
	}
	{
		uint64_t L_0;
		L_0 = ConstantHelper_GetUInt64WithAllBitsSet_mB7F3E046EE6B1B20C552BF7CF619416E239A5A96_inline(NULL);
		return L_0;
	}
}
