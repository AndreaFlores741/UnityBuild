#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// System.Collections.Generic.Dictionary`2<System.Int32,System.Text.Encoding>
struct Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
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
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
// System.ApplicationException
struct ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A;
// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F;
// BCrypt.Net.BCrypt
struct BCrypt_tCB4114075C0C8A206D099F038AB79D00297588EE;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2;
// System.Text.DecoderFallback
struct DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90;
// System.Text.EncoderFallback
struct EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293;
// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095;
// System.Exception
struct Exception_t;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Runtime.Serialization.IFormatterConverter
struct IFormatterConverter_t726606DAC82C384B08C82471313C340968DDB609;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t4E862666A2F7D55324960670C7A1B4C2D40222F3;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// BCrypt.Net.SaltParseException
struct SaltParseException_t1505F5933955FAC31BFD3DA243A79E4BFB426255;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.Type
struct Type_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BCrypt_tCB4114075C0C8A206D099F038AB79D00297588EE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SaltParseException_t1505F5933955FAC31BFD3DA243A79E4BFB426255_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3EU7B93DF5421U2DB93BU2D4464U2DADF0U2D4940F841A427U7D_tDECE82D79072A652D5C5ED4C3A0C343E70A9EAA4____U24U24method0x6000017U2D1_0_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3EU7B93DF5421U2DB93BU2D4464U2DADF0U2D4940F841A427U7D_tDECE82D79072A652D5C5ED4C3A0C343E70A9EAA4____U24U24method0x6000017U2D2_1_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3EU7B93DF5421U2DB93BU2D4464U2DADF0U2D4940F841A427U7D_tDECE82D79072A652D5C5ED4C3A0C343E70A9EAA4____U24U24method0x6000017U2D3_2_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3EU7B93DF5421U2DB93BU2D4464U2DADF0U2D4940F841A427U7D_tDECE82D79072A652D5C5ED4C3A0C343E70A9EAA4____U24U24method0x6000017U2D4_3_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3EU7B93DF5421U2DB93BU2D4464U2DADF0U2D4940F841A427U7D_tDECE82D79072A652D5C5ED4C3A0C343E70A9EAA4____U24U24method0x6000017U2D5_4_FieldInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral132F0A944E255ED795ACF9142D94AD93C11D1146;
IL2CPP_EXTERN_C String_t* _stringLiteral1489F923C4DCA729178B3E3233458550D8DDDF29;
IL2CPP_EXTERN_C String_t* _stringLiteral15088A7C50E83E49058833A4287B3C2F1CD730D2;
IL2CPP_EXTERN_C String_t* _stringLiteral207B8DA9E4F288463184404EA4A66FEAE4E583E1;
IL2CPP_EXTERN_C String_t* _stringLiteral2430024CFE9D6D56580A9E403D25BE1E3F18EF80;
IL2CPP_EXTERN_C String_t* _stringLiteral305E820C4852F5827650FB7E2E790DDF084FD363;
IL2CPP_EXTERN_C String_t* _stringLiteral3A8C9252A3DD108EF5BB2B2CB6F60A0997C2BB71;
IL2CPP_EXTERN_C String_t* _stringLiteral457C08B2BC549BECED5AD5BF512DED04886D5FAB;
IL2CPP_EXTERN_C String_t* _stringLiteral47DE90D4E0BB7EC71ED9AAB6D86542524D25A435;
IL2CPP_EXTERN_C String_t* _stringLiteral60668ACBB1126EF66E5DA781C86804EDF2CE04B9;
IL2CPP_EXTERN_C String_t* _stringLiteral695A1105FE2F884BC421B3A7997A11F5EA62EE85;
IL2CPP_EXTERN_C String_t* _stringLiteral6E9BE86A04E70B5E8501A3337496D251240F0C33;
IL2CPP_EXTERN_C String_t* _stringLiteral842B8C7345E8AE5608EE332378D4489B8AF9C37C;
IL2CPP_EXTERN_C String_t* _stringLiteral9C69DFA1A2915D096AE20CEE7B2A9DF23BC35619;
IL2CPP_EXTERN_C String_t* _stringLiteralAB8FA5D74CFE374E1FDFF961AB039FE41B3C4016;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB;
IL2CPP_EXTERN_C String_t* _stringLiteralEAFAB8629E2B010E7CE723A19B7BB6073C331266;
IL2CPP_EXTERN_C String_t* _stringLiteralEBD1D3C8F03D764919B72D96D6073EAD61736638;
IL2CPP_EXTERN_C String_t* _stringLiteralF26BDD2E757D8AF4CB126C3BCA5502F4C025A5AB;
IL2CPP_EXTERN_C String_t* _stringLiteralFDBA649D238B80D2A8A001CA2C68CD171DFDCCF0;
IL2CPP_EXTERN_C const RuntimeMethod* BCrypt_CryptRaw_m246A44A7BD01EB5570DF689ACD8547BE52A0298F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BCrypt_DecodeBase64_mB62D749B3FF7C435FF93EBD98EBDF9634E631275_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BCrypt_EncodeBase64_m7FCC17C3FDE2CF1F5C81FC8557535F48D2DC073E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BCrypt_GenerateSalt_m9CB528496C6839CD753CF4397DCDCFFC185F6DD1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BCrypt_HashPassword_mAE5F46747537F38CC68A99408060AA5DE4725ADE_RuntimeMethod_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tDF4F6EA7F9E9C82E4BB8312ACDD57D8C9A19FA4C 
{
};
struct Il2CppArrayBounds;

// BCrypt.Net.BCrypt
struct BCrypt_tCB4114075C0C8A206D099F038AB79D00297588EE  : public RuntimeObject
{
	// System.UInt32[] BCrypt.Net.BCrypt::_P
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ____P_8;
	// System.UInt32[] BCrypt.Net.BCrypt::_S
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ____S_9;
};

struct BCrypt_tCB4114075C0C8A206D099F038AB79D00297588EE_StaticFields
{
	// System.UInt32[] BCrypt.Net.BCrypt::_POrig
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ____POrig_3;
	// System.UInt32[] BCrypt.Net.BCrypt::_SOrig
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ____SOrig_4;
	// System.UInt32[] BCrypt.Net.BCrypt::_BfCryptCiphertext
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ____BfCryptCiphertext_5;
	// System.Char[] BCrypt.Net.BCrypt::_Base64Code
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ____Base64Code_6;
	// System.Int32[] BCrypt.Net.BCrypt::_Index64
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____Index64_7;
};

// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095  : public RuntimeObject
{
	// System.Int32 System.Text.Encoding::m_codePage
	int32_t ___m_codePage_9;
	// System.Globalization.CodePageDataItem System.Text.Encoding::dataItem
	CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2* ___dataItem_10;
	// System.Boolean System.Text.Encoding::m_deserializedFromEverett
	bool ___m_deserializedFromEverett_11;
	// System.Boolean System.Text.Encoding::m_isReadOnly
	bool ___m_isReadOnly_12;
	// System.Text.EncoderFallback System.Text.Encoding::encoderFallback
	EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293* ___encoderFallback_13;
	// System.Text.DecoderFallback System.Text.Encoding::decoderFallback
	DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90* ___decoderFallback_14;
};

struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095_StaticFields
{
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::defaultEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___defaultEncoding_0;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::unicodeEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___unicodeEncoding_1;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianUnicode
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___bigEndianUnicode_2;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf7Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf7Encoding_3;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf8Encoding_4;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf32Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf32Encoding_5;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::asciiEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___asciiEncoding_6;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::latin1Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___latin1Encoding_7;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Text.Encoding> modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::encodings
	Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54* ___encodings_8;
	// System.Object System.Text.Encoding::s_InternalSyncObject
	RuntimeObject* ___s_InternalSyncObject_15;
};

// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t4E862666A2F7D55324960670C7A1B4C2D40222F3  : public RuntimeObject
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

// System.Text.StringBuilder
struct StringBuilder_t  : public RuntimeObject
{
	// System.Char[] System.Text.StringBuilder::m_ChunkChars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_ChunkChars_0;
	// System.Text.StringBuilder System.Text.StringBuilder::m_ChunkPrevious
	StringBuilder_t* ___m_ChunkPrevious_1;
	// System.Int32 System.Text.StringBuilder::m_ChunkLength
	int32_t ___m_ChunkLength_2;
	// System.Int32 System.Text.StringBuilder::m_ChunkOffset
	int32_t ___m_ChunkOffset_3;
	// System.Int32 System.Text.StringBuilder::m_MaxCapacity
	int32_t ___m_MaxCapacity_4;
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

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;
};

struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	// System.Byte[] System.Char::s_categoryForLatin1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1_3;
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

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
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

// <PrivateImplementationDetails>{93DF5421-B93B-4464-ADF0-4940F841A427}/__StaticArrayInitTypeSize=128
struct __StaticArrayInitTypeSizeU3D128_tEB3A105C17441F01B144D5A94D9EB241970AA6BF 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D128_tEB3A105C17441F01B144D5A94D9EB241970AA6BF__padding[128];
	};
};

// <PrivateImplementationDetails>{93DF5421-B93B-4464-ADF0-4940F841A427}/__StaticArrayInitTypeSize=24
struct __StaticArrayInitTypeSizeU3D24_t8DE69855DD8611601343FF01DB8BBC9BDF3C9DB8 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D24_t8DE69855DD8611601343FF01DB8BBC9BDF3C9DB8__padding[24];
	};
};

// <PrivateImplementationDetails>{93DF5421-B93B-4464-ADF0-4940F841A427}/__StaticArrayInitTypeSize=4096
struct __StaticArrayInitTypeSizeU3D4096_t4D80E01517210D33B2D2A07703690BFAD428CEA7 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D4096_t4D80E01517210D33B2D2A07703690BFAD428CEA7__padding[4096];
	};
};

// <PrivateImplementationDetails>{93DF5421-B93B-4464-ADF0-4940F841A427}/__StaticArrayInitTypeSize=512
struct __StaticArrayInitTypeSizeU3D512_tFAA0DA8511DAA04075CBA3A4B3A2DFC86FD9304E 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D512_tFAA0DA8511DAA04075CBA3A4B3A2DFC86FD9304E__padding[512];
	};
};

// <PrivateImplementationDetails>{93DF5421-B93B-4464-ADF0-4940F841A427}/__StaticArrayInitTypeSize=72
struct __StaticArrayInitTypeSizeU3D72_tD4AF136D7B2AB87B4B36E7A14728C59124731499 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D72_tD4AF136D7B2AB87B4B36E7A14728C59124731499__padding[72];
	};
};

// <PrivateImplementationDetails>{93DF5421-B93B-4464-ADF0-4940F841A427}
struct U3CPrivateImplementationDetailsU3EU7B93DF5421U2DB93BU2D4464U2DADF0U2D4940F841A427U7D_tDECE82D79072A652D5C5ED4C3A0C343E70A9EAA4  : public RuntimeObject
{
};

struct U3CPrivateImplementationDetailsU3EU7B93DF5421U2DB93BU2D4464U2DADF0U2D4940F841A427U7D_tDECE82D79072A652D5C5ED4C3A0C343E70A9EAA4_StaticFields
{
	// <PrivateImplementationDetails>{93DF5421-B93B-4464-ADF0-4940F841A427}/__StaticArrayInitTypeSize=72 <PrivateImplementationDetails>{93DF5421-B93B-4464-ADF0-4940F841A427}::$$method0x6000017-1
	__StaticArrayInitTypeSizeU3D72_tD4AF136D7B2AB87B4B36E7A14728C59124731499 ___U24U24method0x6000017U2D1_0;
	// <PrivateImplementationDetails>{93DF5421-B93B-4464-ADF0-4940F841A427}/__StaticArrayInitTypeSize=4096 <PrivateImplementationDetails>{93DF5421-B93B-4464-ADF0-4940F841A427}::$$method0x6000017-2
	__StaticArrayInitTypeSizeU3D4096_t4D80E01517210D33B2D2A07703690BFAD428CEA7 ___U24U24method0x6000017U2D2_1;
	// <PrivateImplementationDetails>{93DF5421-B93B-4464-ADF0-4940F841A427}/__StaticArrayInitTypeSize=24 <PrivateImplementationDetails>{93DF5421-B93B-4464-ADF0-4940F841A427}::$$method0x6000017-3
	__StaticArrayInitTypeSizeU3D24_t8DE69855DD8611601343FF01DB8BBC9BDF3C9DB8 ___U24U24method0x6000017U2D3_2;
	// <PrivateImplementationDetails>{93DF5421-B93B-4464-ADF0-4940F841A427}/__StaticArrayInitTypeSize=128 <PrivateImplementationDetails>{93DF5421-B93B-4464-ADF0-4940F841A427}::$$method0x6000017-4
	__StaticArrayInitTypeSizeU3D128_tEB3A105C17441F01B144D5A94D9EB241970AA6BF ___U24U24method0x6000017U2D4_3;
	// <PrivateImplementationDetails>{93DF5421-B93B-4464-ADF0-4940F841A427}/__StaticArrayInitTypeSize=512 <PrivateImplementationDetails>{93DF5421-B93B-4464-ADF0-4940F841A427}::$$method0x6000017-5
	__StaticArrayInitTypeSizeU3D512_tFAA0DA8511DAA04075CBA3A4B3A2DFC86FD9304E ___U24U24method0x6000017U2D5_4;
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

// System.RuntimeFieldHandle
struct RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 
{
	// System.IntPtr System.RuntimeFieldHandle::value
	intptr_t ___value_0;
};

// System.ApplicationException
struct ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A  : public Exception_t
{
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};

// BCrypt.Net.SaltParseException
struct SaltParseException_t1505F5933955FAC31BFD3DA243A79E4BFB426255  : public ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A
{
};

// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
};

// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
	// System.Object System.ArgumentOutOfRangeException::_actualValue
	RuntimeObject* ____actualValue_19;
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
// System.UInt32[]
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
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB  : public RuntimeArray
{
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

	inline Il2CppChar GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppChar value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Il2CppChar GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppChar value)
	{
		m_Items[index] = value;
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



// System.String BCrypt.Net.BCrypt::HashPassword(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BCrypt_HashPassword_mEA463EBBE60AC638CA87EF8BB7FF71CB58B4BD0E (String_t* ___input0, const RuntimeMethod* method) ;
// System.String BCrypt.Net.BCrypt::GenerateSalt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BCrypt_GenerateSalt_m9CB528496C6839CD753CF4397DCDCFFC185F6DD1 (int32_t ___workFactor0, const RuntimeMethod* method) ;
// System.String BCrypt.Net.BCrypt::HashPassword(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BCrypt_HashPassword_mAE5F46747537F38CC68A99408060AA5DE4725ADE (String_t* ___input0, String_t* ___salt1, const RuntimeMethod* method) ;
// System.String BCrypt.Net.BCrypt::GenerateSalt()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BCrypt_GenerateSalt_m959F34C4330B991C5DB4374E1976A182E05B42BB (const RuntimeMethod* method) ;
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___paramName0, const RuntimeMethod* method) ;
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478 (String_t* ___value0, const RuntimeMethod* method) ;
// System.Void System.ArgumentException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method) ;
// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3 (String_t* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void BCrypt.Net.SaltParseException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SaltParseException__ctor_mFBE67BE9C71DA7E81EC78BFCA970FC302811BED5 (SaltParseException_t1505F5933955FAC31BFD3DA243A79E4BFB426255* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.String System.String::Substring(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE (String_t* __this, int32_t ___startIndex0, int32_t ___length1, const RuntimeMethod* method) ;
// System.Int32 System.Convert::ToInt32(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Convert_ToInt32_m0C3F3778B1D646778F41B6912138AEEEE6BEB9D4 (String_t* ___value0, const RuntimeMethod* method) ;
// System.Text.Encoding System.Text.Encoding::get_UTF8()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9 (const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Byte[] BCrypt.Net.BCrypt::DecodeBase64(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* BCrypt_DecodeBase64_mB62D749B3FF7C435FF93EBD98EBDF9634E631275 (String_t* ___encodedstring0, int32_t ___maximumBytes1, const RuntimeMethod* method) ;
// System.Void BCrypt.Net.BCrypt::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BCrypt__ctor_mAC573F58F3C16F29B2AF533D757B1CA7E7A9A17C (BCrypt_tCB4114075C0C8A206D099F038AB79D00297588EE* __this, const RuntimeMethod* method) ;
// System.Byte[] BCrypt.Net.BCrypt::CryptRaw(System.Byte[],System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* BCrypt_CryptRaw_m246A44A7BD01EB5570DF689ACD8547BE52A0298F (BCrypt_tCB4114075C0C8A206D099F038AB79D00297588EE* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___inputBytes0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___saltBytes1, int32_t ___logRounds2, const RuntimeMethod* method) ;
// System.Void System.Text.StringBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D (StringBuilder_t* __this, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D (StringBuilder_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1 (StringBuilder_t* __this, Il2CppChar ___value0, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::AppendFormat(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_AppendFormat_mFA88863E4018C2912D1A783E0EA6DAE4F594124F (StringBuilder_t* __this, String_t* ___format0, RuntimeObject* ___arg01, const RuntimeMethod* method) ;
// System.String BCrypt.Net.BCrypt::EncodeBase64(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BCrypt_EncodeBase64_m7FCC17C3FDE2CF1F5C81FC8557535F48D2DC073E (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___byteArray0, int32_t ___length1, const RuntimeMethod* method) ;
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String,System.Object,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85 (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* __this, String_t* ___paramName0, RuntimeObject* ___actualValue1, String_t* ___message2, const RuntimeMethod* method) ;
// System.Security.Cryptography.RandomNumberGenerator System.Security.Cryptography.RandomNumberGenerator::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RandomNumberGenerator_t4E862666A2F7D55324960670C7A1B4C2D40222F3* RandomNumberGenerator_Create_m10E13D4B5CF93E2EBB1BE9226488C919FFAC3340 (const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
// System.Int32 BCrypt.Net.BCrypt::Char64(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BCrypt_Char64_mE28A3C33B02B875DCC66BF7A0D5350EB0CADCB01 (Il2CppChar ___character0, const RuntimeMethod* method) ;
// System.Char System.Text.StringBuilder::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar StringBuilder_get_Chars_m254FD6F2F75C00B0D353D73B2A4A19316BD7624D (StringBuilder_t* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void System.Array::Copy(System.Array,System.Array,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Copy_m4233828B4E6288B6D815F539AAA38575DE627900 (RuntimeArray* ___sourceArray0, RuntimeArray* ___destinationArray1, int32_t ___length2, const RuntimeMethod* method) ;
// System.UInt32 BCrypt.Net.BCrypt::StreamToWord(System.Byte[],System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t BCrypt_StreamToWord_mB886DB41AC2065D28E2C1DB90E45A3C0D764DFD3 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data0, int32_t* ___offset1, const RuntimeMethod* method) ;
// System.Void BCrypt.Net.BCrypt::Encipher(System.UInt32[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BCrypt_Encipher_mB6825D56C5C7954E4F0FCD565CCDC099D0526F7A (BCrypt_tCB4114075C0C8A206D099F038AB79D00297588EE* __this, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___blockArray0, int32_t ___offset1, const RuntimeMethod* method) ;
// System.Void BCrypt.Net.BCrypt::InitializeKey()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BCrypt_InitializeKey_mE88A5B16B11DAB67E6AAF894681AABD9BEF60BCB (BCrypt_tCB4114075C0C8A206D099F038AB79D00297588EE* __this, const RuntimeMethod* method) ;
// System.Void BCrypt.Net.BCrypt::EKSKey(System.Byte[],System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BCrypt_EKSKey_m34A5BC87942C87523BCC8C1B0BFFAE30168A3CDF (BCrypt_tCB4114075C0C8A206D099F038AB79D00297588EE* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___saltBytes0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___inputBytes1, const RuntimeMethod* method) ;
// System.Void BCrypt.Net.BCrypt::Key(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BCrypt_Key_m8DF10AAD16FAC4C1B22E85448BE89C3EE3EEC88C (BCrypt_tCB4114075C0C8A206D099F038AB79D00297588EE* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___keyBytes0, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.RuntimeHelpers::InitializeArray(System.Array,System.RuntimeFieldHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B (RuntimeArray* ___array0, RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 ___fldHandle1, const RuntimeMethod* method) ;
// System.Void System.ApplicationException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ApplicationException__ctor_m481B0251BEC0BF28EAAF3FCB11A47EFCB2E56E2A (ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A* __this, const RuntimeMethod* method) ;
// System.Void System.ApplicationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ApplicationException__ctor_mE51100DFCDB0A0DF23B482CC43EC8E396BE7BE82 (ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Void System.ApplicationException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ApplicationException__ctor_m924E77609BAFA0595453363EB8B7BCCBA03B32DD (ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A* __this, String_t* ___message0, Exception_t* ___innerException1, const RuntimeMethod* method) ;
// System.Void System.ApplicationException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ApplicationException__ctor_mFF00B1678B9B13F1C9FEB0829C495F6507CAF031 (ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___info0, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___context1, const RuntimeMethod* method) ;
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
// System.String BCrypt.Net.BCrypt::HashString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BCrypt_HashString_mA876117855D867AE5FCEE7D81ECF9D6417FBC892 (String_t* ___source0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BCrypt_tCB4114075C0C8A206D099F038AB79D00297588EE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___source0;
		il2cpp_codegen_runtime_class_init_inline(BCrypt_tCB4114075C0C8A206D099F038AB79D00297588EE_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = BCrypt_HashPassword_mEA463EBBE60AC638CA87EF8BB7FF71CB58B4BD0E(L_0, NULL);
		return L_1;
	}
}
// System.String BCrypt.Net.BCrypt::HashString(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BCrypt_HashString_mCF9ED552CB0A720976F01E899E44F15F46AADBAE (String_t* ___source0, int32_t ___workFactor1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BCrypt_tCB4114075C0C8A206D099F038AB79D00297588EE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___source0;
		int32_t L_1 = ___workFactor1;
		il2cpp_codegen_runtime_class_init_inline(BCrypt_tCB4114075C0C8A206D099F038AB79D00297588EE_il2cpp_TypeInfo_var);
		String_t* L_2;
		L_2 = BCrypt_GenerateSalt_m9CB528496C6839CD753CF4397DCDCFFC185F6DD1(L_1, NULL);
		String_t* L_3;
		L_3 = BCrypt_HashPassword_mAE5F46747537F38CC68A99408060AA5DE4725ADE(L_0, L_2, NULL);
		return L_3;
	}
}
// System.String BCrypt.Net.BCrypt::HashPassword(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BCrypt_HashPassword_mEA463EBBE60AC638CA87EF8BB7FF71CB58B4BD0E (String_t* ___input0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BCrypt_tCB4114075C0C8A206D099F038AB79D00297588EE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___input0;
		il2cpp_codegen_runtime_class_init_inline(BCrypt_tCB4114075C0C8A206D099F038AB79D00297588EE_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = BCrypt_GenerateSalt_m959F34C4330B991C5DB4374E1976A182E05B42BB(NULL);
		String_t* L_2;
		L_2 = BCrypt_HashPassword_mAE5F46747537F38CC68A99408060AA5DE4725ADE(L_0, L_1, NULL);
		return L_2;
	}
}
// System.String BCrypt.Net.BCrypt::HashPassword(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BCrypt_HashPassword_mF9D075D4AD30F1F6E7C3C206E47427AA5F10728C (String_t* ___input0, int32_t ___workFactor1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BCrypt_tCB4114075C0C8A206D099F038AB79D00297588EE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___input0;
		int32_t L_1 = ___workFactor1;
		il2cpp_codegen_runtime_class_init_inline(BCrypt_tCB4114075C0C8A206D099F038AB79D00297588EE_il2cpp_TypeInfo_var);
		String_t* L_2;
		L_2 = BCrypt_GenerateSalt_m9CB528496C6839CD753CF4397DCDCFFC185F6DD1(L_1, NULL);
		String_t* L_3;
		L_3 = BCrypt_HashPassword_mAE5F46747537F38CC68A99408060AA5DE4725ADE(L_0, L_2, NULL);
		return L_3;
	}
}
// System.String BCrypt.Net.BCrypt::HashPassword(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BCrypt_HashPassword_mAE5F46747537F38CC68A99408060AA5DE4725ADE (String_t* ___input0, String_t* ___salt1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BCrypt_tCB4114075C0C8A206D099F038AB79D00297588EE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1489F923C4DCA729178B3E3233458550D8DDDF29);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral207B8DA9E4F288463184404EA4A66FEAE4E583E1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral47DE90D4E0BB7EC71ED9AAB6D86542524D25A435);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Il2CppChar V_1 = 0x0;
	int32_t V_2 = 0;
	String_t* V_3 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_4 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_5 = NULL;
	BCrypt_tCB4114075C0C8A206D099F038AB79D00297588EE* V_6 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_7 = NULL;
	StringBuilder_t* V_8 = NULL;
	String_t* G_B17_0 = NULL;
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* G_B17_1 = NULL;
	String_t* G_B16_0 = NULL;
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* G_B16_1 = NULL;
	String_t* G_B18_0 = NULL;
	String_t* G_B18_1 = NULL;
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* G_B18_2 = NULL;
	{
		String_t* L_0 = ___input0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral15088A7C50E83E49058833A4287B3C2F1CD730D2)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BCrypt_HashPassword_mAE5F46747537F38CC68A99408060AA5DE4725ADE_RuntimeMethod_var)));
	}

IL_000e:
	{
		String_t* L_2 = ___salt1;
		bool L_3;
		L_3 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_2, NULL);
		if (!L_3)
		{
			goto IL_0026;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAB8FA5D74CFE374E1FDFF961AB039FE41B3C4016)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral842B8C7345E8AE5608EE332378D4489B8AF9C37C)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BCrypt_HashPassword_mAE5F46747537F38CC68A99408060AA5DE4725ADE_RuntimeMethod_var)));
	}

IL_0026:
	{
		V_1 = 0;
		String_t* L_5 = ___salt1;
		NullCheck(L_5);
		Il2CppChar L_6;
		L_6 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_5, 0, NULL);
		if ((!(((uint32_t)L_6) == ((uint32_t)((int32_t)36)))))
		{
			goto IL_003e;
		}
	}
	{
		String_t* L_7 = ___salt1;
		NullCheck(L_7);
		Il2CppChar L_8;
		L_8 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_7, 1, NULL);
		if ((((int32_t)L_8) == ((int32_t)((int32_t)50))))
		{
			goto IL_0049;
		}
	}

IL_003e:
	{
		SaltParseException_t1505F5933955FAC31BFD3DA243A79E4BFB426255* L_9 = (SaltParseException_t1505F5933955FAC31BFD3DA243A79E4BFB426255*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SaltParseException_t1505F5933955FAC31BFD3DA243A79E4BFB426255_il2cpp_TypeInfo_var)));
		NullCheck(L_9);
		SaltParseException__ctor_mFBE67BE9C71DA7E81EC78BFCA970FC302811BED5(L_9, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralEAFAB8629E2B010E7CE723A19B7BB6073C331266)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BCrypt_HashPassword_mAE5F46747537F38CC68A99408060AA5DE4725ADE_RuntimeMethod_var)));
	}

IL_0049:
	{
		String_t* L_10 = ___salt1;
		NullCheck(L_10);
		Il2CppChar L_11;
		L_11 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_10, 2, NULL);
		if ((!(((uint32_t)L_11) == ((uint32_t)((int32_t)36)))))
		{
			goto IL_0058;
		}
	}
	{
		V_0 = 3;
		goto IL_007d;
	}

IL_0058:
	{
		String_t* L_12 = ___salt1;
		NullCheck(L_12);
		Il2CppChar L_13;
		L_13 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_12, 2, NULL);
		V_1 = L_13;
		Il2CppChar L_14 = V_1;
		if ((!(((uint32_t)L_14) == ((uint32_t)((int32_t)97)))))
		{
			goto IL_0070;
		}
	}
	{
		String_t* L_15 = ___salt1;
		NullCheck(L_15);
		Il2CppChar L_16;
		L_16 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_15, 3, NULL);
		if ((((int32_t)L_16) == ((int32_t)((int32_t)36))))
		{
			goto IL_007b;
		}
	}

IL_0070:
	{
		SaltParseException_t1505F5933955FAC31BFD3DA243A79E4BFB426255* L_17 = (SaltParseException_t1505F5933955FAC31BFD3DA243A79E4BFB426255*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SaltParseException_t1505F5933955FAC31BFD3DA243A79E4BFB426255_il2cpp_TypeInfo_var)));
		NullCheck(L_17);
		SaltParseException__ctor_mFBE67BE9C71DA7E81EC78BFCA970FC302811BED5(L_17, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF26BDD2E757D8AF4CB126C3BCA5502F4C025A5AB)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_17, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BCrypt_HashPassword_mAE5F46747537F38CC68A99408060AA5DE4725ADE_RuntimeMethod_var)));
	}

IL_007b:
	{
		V_0 = 4;
	}

IL_007d:
	{
		String_t* L_18 = ___salt1;
		int32_t L_19 = V_0;
		NullCheck(L_18);
		Il2CppChar L_20;
		L_20 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_18, ((int32_t)il2cpp_codegen_add(L_19, 2)), NULL);
		if ((((int32_t)L_20) <= ((int32_t)((int32_t)36))))
		{
			goto IL_0095;
		}
	}
	{
		SaltParseException_t1505F5933955FAC31BFD3DA243A79E4BFB426255* L_21 = (SaltParseException_t1505F5933955FAC31BFD3DA243A79E4BFB426255*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SaltParseException_t1505F5933955FAC31BFD3DA243A79E4BFB426255_il2cpp_TypeInfo_var)));
		NullCheck(L_21);
		SaltParseException__ctor_mFBE67BE9C71DA7E81EC78BFCA970FC302811BED5(L_21, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2430024CFE9D6D56580A9E403D25BE1E3F18EF80)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_21, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BCrypt_HashPassword_mAE5F46747537F38CC68A99408060AA5DE4725ADE_RuntimeMethod_var)));
	}

IL_0095:
	{
		String_t* L_22 = ___salt1;
		int32_t L_23 = V_0;
		NullCheck(L_22);
		String_t* L_24;
		L_24 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_22, L_23, 2, NULL);
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		int32_t L_25;
		L_25 = Convert_ToInt32_m0C3F3778B1D646778F41B6912138AEEEE6BEB9D4(L_24, NULL);
		V_2 = L_25;
		String_t* L_26 = ___salt1;
		int32_t L_27 = V_0;
		NullCheck(L_26);
		String_t* L_28;
		L_28 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_26, ((int32_t)il2cpp_codegen_add(L_27, 3)), ((int32_t)22), NULL);
		V_3 = L_28;
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_29;
		L_29 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
		String_t* L_30 = ___input0;
		Il2CppChar L_31 = V_1;
		G_B16_0 = L_30;
		G_B16_1 = L_29;
		if ((((int32_t)L_31) >= ((int32_t)((int32_t)97))))
		{
			G_B17_0 = L_30;
			G_B17_1 = L_29;
			goto IL_00c1;
		}
	}
	{
		G_B18_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		G_B18_1 = G_B16_0;
		G_B18_2 = G_B16_1;
		goto IL_00c6;
	}

IL_00c1:
	{
		G_B18_0 = _stringLiteral1489F923C4DCA729178B3E3233458550D8DDDF29;
		G_B18_1 = G_B17_0;
		G_B18_2 = G_B17_1;
	}

IL_00c6:
	{
		String_t* L_32;
		L_32 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(G_B18_1, G_B18_0, NULL);
		NullCheck(G_B18_2);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_33;
		L_33 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(19 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, G_B18_2, L_32);
		V_4 = L_33;
		String_t* L_34 = V_3;
		il2cpp_codegen_runtime_class_init_inline(BCrypt_tCB4114075C0C8A206D099F038AB79D00297588EE_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_35;
		L_35 = BCrypt_DecodeBase64_mB62D749B3FF7C435FF93EBD98EBDF9634E631275(L_34, ((int32_t)16), NULL);
		V_5 = L_35;
		BCrypt_tCB4114075C0C8A206D099F038AB79D00297588EE* L_36 = (BCrypt_tCB4114075C0C8A206D099F038AB79D00297588EE*)il2cpp_codegen_object_new(BCrypt_tCB4114075C0C8A206D099F038AB79D00297588EE_il2cpp_TypeInfo_var);
		NullCheck(L_36);
		BCrypt__ctor_mAC573F58F3C16F29B2AF533D757B1CA7E7A9A17C(L_36, NULL);
		V_6 = L_36;
		BCrypt_tCB4114075C0C8A206D099F038AB79D00297588EE* L_37 = V_6;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_38 = V_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_39 = V_5;
		int32_t L_40 = V_2;
		NullCheck(L_37);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_41;
		L_41 = BCrypt_CryptRaw_m246A44A7BD01EB5570DF689ACD8547BE52A0298F(L_37, L_38, L_39, L_40, NULL);
		V_7 = L_41;
		StringBuilder_t* L_42 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_42);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_42, NULL);
		V_8 = L_42;
		StringBuilder_t* L_43 = V_8;
		NullCheck(L_43);
		StringBuilder_t* L_44;
		L_44 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_43, _stringLiteral47DE90D4E0BB7EC71ED9AAB6D86542524D25A435, NULL);
		Il2CppChar L_45 = V_1;
		if ((((int32_t)L_45) < ((int32_t)((int32_t)97))))
		{
			goto IL_0113;
		}
	}
	{
		StringBuilder_t* L_46 = V_8;
		Il2CppChar L_47 = V_1;
		NullCheck(L_46);
		StringBuilder_t* L_48;
		L_48 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_46, L_47, NULL);
	}

IL_0113:
	{
		StringBuilder_t* L_49 = V_8;
		int32_t L_50 = V_2;
		int32_t L_51 = L_50;
		RuntimeObject* L_52 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_51);
		NullCheck(L_49);
		StringBuilder_t* L_53;
		L_53 = StringBuilder_AppendFormat_mFA88863E4018C2912D1A783E0EA6DAE4F594124F(L_49, _stringLiteral207B8DA9E4F288463184404EA4A66FEAE4E583E1, L_52, NULL);
		StringBuilder_t* L_54 = V_8;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_55 = V_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_56 = V_5;
		NullCheck(L_56);
		il2cpp_codegen_runtime_class_init_inline(BCrypt_tCB4114075C0C8A206D099F038AB79D00297588EE_il2cpp_TypeInfo_var);
		String_t* L_57;
		L_57 = BCrypt_EncodeBase64_m7FCC17C3FDE2CF1F5C81FC8557535F48D2DC073E(L_55, ((int32_t)(((RuntimeArray*)L_56)->max_length)), NULL);
		NullCheck(L_54);
		StringBuilder_t* L_58;
		L_58 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_54, L_57, NULL);
		StringBuilder_t* L_59 = V_8;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_60 = V_7;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_61 = ((BCrypt_tCB4114075C0C8A206D099F038AB79D00297588EE_StaticFields*)il2cpp_codegen_static_fields_for(BCrypt_tCB4114075C0C8A206D099F038AB79D00297588EE_il2cpp_TypeInfo_var))->____BfCryptCiphertext_5;
		NullCheck(L_61);
		String_t* L_62;
		L_62 = BCrypt_EncodeBase64_m7FCC17C3FDE2CF1F5C81FC8557535F48D2DC073E(L_60, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_multiply(((int32_t)(((RuntimeArray*)L_61)->max_length)), 4)), 1)), NULL);
		NullCheck(L_59);
		StringBuilder_t* L_63;
		L_63 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_59, L_62, NULL);
		StringBuilder_t* L_64 = V_8;
		NullCheck(L_64);
		String_t* L_65;
		L_65 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_64);
		return L_65;
	}
}
// System.String BCrypt.Net.BCrypt::GenerateSalt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BCrypt_GenerateSalt_m9CB528496C6839CD753CF4397DCDCFFC185F6DD1 (int32_t ___workFactor0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BCrypt_tCB4114075C0C8A206D099F038AB79D00297588EE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9C69DFA1A2915D096AE20CEE7B2A9DF23BC35619);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	RandomNumberGenerator_t4E862666A2F7D55324960670C7A1B4C2D40222F3* V_1 = NULL;
	StringBuilder_t* V_2 = NULL;
	{
		int32_t L_0 = ___workFactor0;
		if ((((int32_t)L_0) < ((int32_t)4)))
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_1 = ___workFactor0;
		if ((((int32_t)L_1) <= ((int32_t)((int32_t)31))))
		{
			goto IL_001f;
		}
	}

IL_0009:
	{
		int32_t L_2 = ___workFactor0;
		int32_t L_3 = L_2;
		RuntimeObject* L_4 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_3);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_5 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralFDBA649D238B80D2A8A001CA2C68CD171DFDCCF0)), L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6E9BE86A04E70B5E8501A3337496D251240F0C33)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BCrypt_GenerateSalt_m9CB528496C6839CD753CF4397DCDCFFC185F6DD1_RuntimeMethod_var)));
	}

IL_001f:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		V_0 = L_6;
		RandomNumberGenerator_t4E862666A2F7D55324960670C7A1B4C2D40222F3* L_7;
		L_7 = RandomNumberGenerator_Create_m10E13D4B5CF93E2EBB1BE9226488C919FFAC3340(NULL);
		V_1 = L_7;
		RandomNumberGenerator_t4E862666A2F7D55324960670C7A1B4C2D40222F3* L_8 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = V_0;
		NullCheck(L_8);
		VirtualActionInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(6 /* System.Void System.Security.Cryptography.RandomNumberGenerator::GetBytes(System.Byte[]) */, L_8, L_9);
		StringBuilder_t* L_10 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_10, NULL);
		V_2 = L_10;
		StringBuilder_t* L_11 = V_2;
		int32_t L_12 = ___workFactor0;
		int32_t L_13 = L_12;
		RuntimeObject* L_14 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_13);
		NullCheck(L_11);
		StringBuilder_t* L_15;
		L_15 = StringBuilder_AppendFormat_mFA88863E4018C2912D1A783E0EA6DAE4F594124F(L_11, _stringLiteral9C69DFA1A2915D096AE20CEE7B2A9DF23BC35619, L_14, NULL);
		StringBuilder_t* L_16 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = V_0;
		NullCheck(L_18);
		il2cpp_codegen_runtime_class_init_inline(BCrypt_tCB4114075C0C8A206D099F038AB79D00297588EE_il2cpp_TypeInfo_var);
		String_t* L_19;
		L_19 = BCrypt_EncodeBase64_m7FCC17C3FDE2CF1F5C81FC8557535F48D2DC073E(L_17, ((int32_t)(((RuntimeArray*)L_18)->max_length)), NULL);
		NullCheck(L_16);
		StringBuilder_t* L_20;
		L_20 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_16, L_19, NULL);
		StringBuilder_t* L_21 = V_2;
		NullCheck(L_21);
		String_t* L_22;
		L_22 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_21);
		return L_22;
	}
}
// System.String BCrypt.Net.BCrypt::GenerateSalt()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BCrypt_GenerateSalt_m959F34C4330B991C5DB4374E1976A182E05B42BB (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BCrypt_tCB4114075C0C8A206D099F038AB79D00297588EE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(BCrypt_tCB4114075C0C8A206D099F038AB79D00297588EE_il2cpp_TypeInfo_var);
		String_t* L_0;
		L_0 = BCrypt_GenerateSalt_m9CB528496C6839CD753CF4397DCDCFFC185F6DD1(((int32_t)10), NULL);
		return L_0;
	}
}
// System.Boolean BCrypt.Net.BCrypt::Verify(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BCrypt_Verify_mD6EBF034EAED883DD1B61B001B47F5E84BE656C6 (String_t* ___text0, String_t* ___hash1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BCrypt_tCB4114075C0C8A206D099F038AB79D00297588EE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___hash1;
		String_t* L_1 = ___text0;
		String_t* L_2 = ___hash1;
		il2cpp_codegen_runtime_class_init_inline(BCrypt_tCB4114075C0C8A206D099F038AB79D00297588EE_il2cpp_TypeInfo_var);
		String_t* L_3;
		L_3 = BCrypt_HashPassword_mAE5F46747537F38CC68A99408060AA5DE4725ADE(L_1, L_2, NULL);
		bool L_4;
		L_4 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_0, L_3, NULL);
		return L_4;
	}
}
// System.String BCrypt.Net.BCrypt::EncodeBase64(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BCrypt_EncodeBase64_m7FCC17C3FDE2CF1F5C81FC8557535F48D2DC073E (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___byteArray0, int32_t ___length1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BCrypt_tCB4114075C0C8A206D099F038AB79D00297588EE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	StringBuilder_t* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		int32_t L_0 = ___length1;
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_000a;
		}
	}
	{
		int32_t L_1 = ___length1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___byteArray0;
		NullCheck(L_2);
		if ((((int32_t)L_1) <= ((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length)))))
		{
			goto IL_001a;
		}
	}

IL_000a:
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_3 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral457C08B2BC549BECED5AD5BF512DED04886D5FAB)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BCrypt_EncodeBase64_m7FCC17C3FDE2CF1F5C81FC8557535F48D2DC073E_RuntimeMethod_var)));
	}

IL_001a:
	{
		V_0 = 0;
		StringBuilder_t* L_4 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_4, NULL);
		V_1 = L_4;
		goto IL_00e6;
	}

IL_0027:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = ___byteArray0;
		int32_t L_6 = V_0;
		int32_t L_7 = L_6;
		V_0 = ((int32_t)il2cpp_codegen_add(L_7, 1));
		NullCheck(L_5);
		int32_t L_8 = L_7;
		uint8_t L_9 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		V_2 = ((int32_t)((int32_t)L_9&((int32_t)255)));
		StringBuilder_t* L_10 = V_1;
		il2cpp_codegen_runtime_class_init_inline(BCrypt_tCB4114075C0C8A206D099F038AB79D00297588EE_il2cpp_TypeInfo_var);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_11 = ((BCrypt_tCB4114075C0C8A206D099F038AB79D00297588EE_StaticFields*)il2cpp_codegen_static_fields_for(BCrypt_tCB4114075C0C8A206D099F038AB79D00297588EE_il2cpp_TypeInfo_var))->____Base64Code_6;
		int32_t L_12 = V_2;
		NullCheck(L_11);
		int32_t L_13 = ((int32_t)(((int32_t)(L_12>>2))&((int32_t)63)));
		uint16_t L_14 = (uint16_t)(L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		NullCheck(L_10);
		StringBuilder_t* L_15;
		L_15 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_10, L_14, NULL);
		int32_t L_16 = V_2;
		V_2 = ((int32_t)(((int32_t)(L_16&3))<<4));
		int32_t L_17 = V_0;
		int32_t L_18 = ___length1;
		if ((((int32_t)L_17) < ((int32_t)L_18)))
		{
			goto IL_0068;
		}
	}
	{
		StringBuilder_t* L_19 = V_1;
		il2cpp_codegen_runtime_class_init_inline(BCrypt_tCB4114075C0C8A206D099F038AB79D00297588EE_il2cpp_TypeInfo_var);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_20 = ((BCrypt_tCB4114075C0C8A206D099F038AB79D00297588EE_StaticFields*)il2cpp_codegen_static_fields_for(BCrypt_tCB4114075C0C8A206D099F038AB79D00297588EE_il2cpp_TypeInfo_var))->____Base64Code_6;
		int32_t L_21 = V_2;
		NullCheck(L_20);
		int32_t L_22 = ((int32_t)(L_21&((int32_t)63)));
		uint16_t L_23 = (uint16_t)(L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		NullCheck(L_19);
		StringBuilder_t* L_24;
		L_24 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_19, L_23, NULL);
		goto IL_00ed;
	}

IL_0068:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_25 = ___byteArray0;
		int32_t L_26 = V_0;
		int32_t L_27 = L_26;
		V_0 = ((int32_t)il2cpp_codegen_add(L_27, 1));
		NullCheck(L_25);
		int32_t L_28 = L_27;
		uint8_t L_29 = (L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		V_3 = ((int32_t)((int32_t)L_29&((int32_t)255)));
		int32_t L_30 = V_2;
		int32_t L_31 = V_3;
		V_2 = ((int32_t)(L_30|((int32_t)(((int32_t)(L_31>>4))&((int32_t)15)))));
		StringBuilder_t* L_32 = V_1;
		il2cpp_codegen_runtime_class_init_inline(BCrypt_tCB4114075C0C8A206D099F038AB79D00297588EE_il2cpp_TypeInfo_var);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_33 = ((BCrypt_tCB4114075C0C8A206D099F038AB79D00297588EE_StaticFields*)il2cpp_codegen_static_fields_for(BCrypt_tCB4114075C0C8A206D099F038AB79D00297588EE_il2cpp_TypeInfo_var))->____Base64Code_6;
		int32_t L_34 = V_2;
		NullCheck(L_33);
		int32_t L_35 = ((int32_t)(L_34&((int32_t)63)));
		uint16_t L_36 = (uint16_t)(L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_35));
		NullCheck(L_32);
		StringBuilder_t* L_37;
		L_37 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_32, L_36, NULL);
		int32_t L_38 = V_3;
		V_2 = ((int32_t)(((int32_t)(L_38&((int32_t)15)))<<2));
		int32_t L_39 = V_0;
		int32_t L_40 = ___length1;
		if ((((int32_t)L_39) < ((int32_t)L_40)))
		{
			goto IL_00ae;
		}
	}
	{
		StringBuilder_t* L_41 = V_1;
		il2cpp_codegen_runtime_class_init_inline(BCrypt_tCB4114075C0C8A206D099F038AB79D00297588EE_il2cpp_TypeInfo_var);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_42 = ((BCrypt_tCB4114075C0C8A206D099F038AB79D00297588EE_StaticFields*)il2cpp_codegen_static_fields_for(BCrypt_tCB4114075C0C8A206D099F038AB79D00297588EE_il2cpp_TypeInfo_var))->____Base64Code_6;
		int32_t L_43 = V_2;
		NullCheck(L_42);
		int32_t L_44 = ((int32_t)(L_43&((int32_t)63)));
		uint16_t L_45 = (uint16_t)(L_42)->GetAt(static_cast<il2cpp_array_size_t>(L_44));
		NullCheck(L_41);
		StringBuilder_t* L_46;
		L_46 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_41, L_45, NULL);
		goto IL_00ed;
	}

IL_00ae:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_47 = ___byteArray0;
		int32_t L_48 = V_0;
		int32_t L_49 = L_48;
		V_0 = ((int32_t)il2cpp_codegen_add(L_49, 1));
		NullCheck(L_47);
		int32_t L_50 = L_49;
		uint8_t L_51 = (L_47)->GetAt(static_cast<il2cpp_array_size_t>(L_50));
		V_3 = ((int32_t)((int32_t)L_51&((int32_t)255)));
		int32_t L_52 = V_2;
		int32_t L_53 = V_3;
		V_2 = ((int32_t)(L_52|((int32_t)(((int32_t)(L_53>>6))&3))));
		StringBuilder_t* L_54 = V_1;
		il2cpp_codegen_runtime_class_init_inline(BCrypt_tCB4114075C0C8A206D099F038AB79D00297588EE_il2cpp_TypeInfo_var);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_55 = ((BCrypt_tCB4114075C0C8A206D099F038AB79D00297588EE_StaticFields*)il2cpp_codegen_static_fields_for(BCrypt_tCB4114075C0C8A206D099F038AB79D00297588EE_il2cpp_TypeInfo_var))->____Base64Code_6;
		int32_t L_56 = V_2;
		NullCheck(L_55);
		int32_t L_57 = ((int32_t)(L_56&((int32_t)63)));
		uint16_t L_58 = (uint16_t)(L_55)->GetAt(static_cast<il2cpp_array_size_t>(L_57));
		NullCheck(L_54);
		StringBuilder_t* L_59;
		L_59 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_54, L_58, NULL);
		StringBuilder_t* L_60 = V_1;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_61 = ((BCrypt_tCB4114075C0C8A206D099F038AB79D00297588EE_StaticFields*)il2cpp_codegen_static_fields_for(BCrypt_tCB4114075C0C8A206D099F038AB79D00297588EE_il2cpp_TypeInfo_var))->____Base64Code_6;
		int32_t L_62 = V_3;
		NullCheck(L_61);
		int32_t L_63 = ((int32_t)(L_62&((int32_t)63)));
		uint16_t L_64 = (uint16_t)(L_61)->GetAt(static_cast<il2cpp_array_size_t>(L_63));
		NullCheck(L_60);
		StringBuilder_t* L_65;
		L_65 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_60, L_64, NULL);
	}

IL_00e6:
	{
		int32_t L_66 = V_0;
		int32_t L_67 = ___length1;
		if ((((int32_t)L_66) < ((int32_t)L_67)))
		{
			goto IL_0027;
		}
	}

IL_00ed:
	{
		StringBuilder_t* L_68 = V_1;
		NullCheck(L_68);
		String_t* L_69;
		L_69 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_68);
		return L_69;
	}
}
// System.Byte[] BCrypt.Net.BCrypt::DecodeBase64(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* BCrypt_DecodeBase64_mB62D749B3FF7C435FF93EBD98EBDF9634E631275 (String_t* ___encodedstring0, int32_t ___maximumBytes1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BCrypt_tCB4114075C0C8A206D099F038AB79D00297588EE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	StringBuilder_t* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_8 = NULL;
	{
		V_0 = 0;
		String_t* L_0 = ___encodedstring0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_0, NULL);
		V_1 = L_1;
		V_2 = 0;
		int32_t L_2 = ___maximumBytes1;
		if ((((int32_t)L_2) > ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_3 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral695A1105FE2F884BC421B3A7997A11F5EA62EE85)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralEBD1D3C8F03D764919B72D96D6073EAD61736638)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BCrypt_DecodeBase64_mB62D749B3FF7C435FF93EBD98EBDF9634E631275_RuntimeMethod_var)));
	}

IL_001f:
	{
		StringBuilder_t* L_4 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_4, NULL);
		V_3 = L_4;
		goto IL_00df;
	}

IL_002a:
	{
		String_t* L_5 = ___encodedstring0;
		int32_t L_6 = V_0;
		int32_t L_7 = L_6;
		V_0 = ((int32_t)il2cpp_codegen_add(L_7, 1));
		NullCheck(L_5);
		Il2CppChar L_8;
		L_8 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_5, L_7, NULL);
		il2cpp_codegen_runtime_class_init_inline(BCrypt_tCB4114075C0C8A206D099F038AB79D00297588EE_il2cpp_TypeInfo_var);
		int32_t L_9;
		L_9 = BCrypt_Char64_mE28A3C33B02B875DCC66BF7A0D5350EB0CADCB01(L_8, NULL);
		V_4 = L_9;
		String_t* L_10 = ___encodedstring0;
		int32_t L_11 = V_0;
		int32_t L_12 = L_11;
		V_0 = ((int32_t)il2cpp_codegen_add(L_12, 1));
		NullCheck(L_10);
		Il2CppChar L_13;
		L_13 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_10, L_12, NULL);
		int32_t L_14;
		L_14 = BCrypt_Char64_mE28A3C33B02B875DCC66BF7A0D5350EB0CADCB01(L_13, NULL);
		V_5 = L_14;
		int32_t L_15 = V_4;
		if ((((int32_t)L_15) == ((int32_t)(-1))))
		{
			goto IL_00ec;
		}
	}
	{
		int32_t L_16 = V_5;
		if ((((int32_t)L_16) == ((int32_t)(-1))))
		{
			goto IL_00ec;
		}
	}
	{
		StringBuilder_t* L_17 = V_3;
		int32_t L_18 = V_4;
		int32_t L_19 = V_5;
		NullCheck(L_17);
		StringBuilder_t* L_20;
		L_20 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_17, ((int32_t)(uint16_t)((int32_t)(((int32_t)(L_18<<2))|((int32_t)(((int32_t)(L_19&((int32_t)48)))>>4))))), NULL);
		int32_t L_21 = V_2;
		int32_t L_22 = ((int32_t)il2cpp_codegen_add(L_21, 1));
		V_2 = L_22;
		int32_t L_23 = ___maximumBytes1;
		if ((((int32_t)L_22) >= ((int32_t)L_23)))
		{
			goto IL_00ec;
		}
	}
	{
		int32_t L_24 = V_0;
		int32_t L_25 = V_1;
		if ((((int32_t)L_24) >= ((int32_t)L_25)))
		{
			goto IL_00ec;
		}
	}
	{
		String_t* L_26 = ___encodedstring0;
		int32_t L_27 = V_0;
		int32_t L_28 = L_27;
		V_0 = ((int32_t)il2cpp_codegen_add(L_28, 1));
		NullCheck(L_26);
		Il2CppChar L_29;
		L_29 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_26, L_28, NULL);
		il2cpp_codegen_runtime_class_init_inline(BCrypt_tCB4114075C0C8A206D099F038AB79D00297588EE_il2cpp_TypeInfo_var);
		int32_t L_30;
		L_30 = BCrypt_Char64_mE28A3C33B02B875DCC66BF7A0D5350EB0CADCB01(L_29, NULL);
		V_6 = L_30;
		int32_t L_31 = V_6;
		if ((((int32_t)L_31) == ((int32_t)(-1))))
		{
			goto IL_00ec;
		}
	}
	{
		StringBuilder_t* L_32 = V_3;
		int32_t L_33 = V_5;
		int32_t L_34 = V_6;
		NullCheck(L_32);
		StringBuilder_t* L_35;
		L_35 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_32, ((int32_t)(uint16_t)((int32_t)(((int32_t)(((int32_t)(L_33&((int32_t)15)))<<4))|((int32_t)(((int32_t)(L_34&((int32_t)60)))>>2))))), NULL);
		int32_t L_36 = V_2;
		int32_t L_37 = ((int32_t)il2cpp_codegen_add(L_36, 1));
		V_2 = L_37;
		int32_t L_38 = ___maximumBytes1;
		if ((((int32_t)L_37) >= ((int32_t)L_38)))
		{
			goto IL_00ec;
		}
	}
	{
		int32_t L_39 = V_0;
		int32_t L_40 = V_1;
		if ((((int32_t)L_39) >= ((int32_t)L_40)))
		{
			goto IL_00ec;
		}
	}
	{
		String_t* L_41 = ___encodedstring0;
		int32_t L_42 = V_0;
		int32_t L_43 = L_42;
		V_0 = ((int32_t)il2cpp_codegen_add(L_43, 1));
		NullCheck(L_41);
		Il2CppChar L_44;
		L_44 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_41, L_43, NULL);
		il2cpp_codegen_runtime_class_init_inline(BCrypt_tCB4114075C0C8A206D099F038AB79D00297588EE_il2cpp_TypeInfo_var);
		int32_t L_45;
		L_45 = BCrypt_Char64_mE28A3C33B02B875DCC66BF7A0D5350EB0CADCB01(L_44, NULL);
		V_7 = L_45;
		StringBuilder_t* L_46 = V_3;
		int32_t L_47 = V_6;
		int32_t L_48 = V_7;
		NullCheck(L_46);
		StringBuilder_t* L_49;
		L_49 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_46, ((int32_t)(uint16_t)((int32_t)(((int32_t)(((int32_t)(L_47&3))<<6))|L_48))), NULL);
		int32_t L_50 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_50, 1));
	}

IL_00df:
	{
		int32_t L_51 = V_0;
		int32_t L_52 = V_1;
		if ((((int32_t)L_51) >= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_52, 1)))))
		{
			goto IL_00ec;
		}
	}
	{
		int32_t L_53 = V_2;
		int32_t L_54 = ___maximumBytes1;
		if ((((int32_t)L_53) < ((int32_t)L_54)))
		{
			goto IL_002a;
		}
	}

IL_00ec:
	{
		int32_t L_55 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_56 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_55);
		V_8 = L_56;
		V_0 = 0;
		goto IL_0108;
	}

IL_00f8:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_57 = V_8;
		int32_t L_58 = V_0;
		StringBuilder_t* L_59 = V_3;
		int32_t L_60 = V_0;
		NullCheck(L_59);
		Il2CppChar L_61;
		L_61 = StringBuilder_get_Chars_m254FD6F2F75C00B0D353D73B2A4A19316BD7624D(L_59, L_60, NULL);
		NullCheck(L_57);
		(L_57)->SetAt(static_cast<il2cpp_array_size_t>(L_58), (uint8_t)((int32_t)(uint8_t)L_61));
		int32_t L_62 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_62, 1));
	}

IL_0108:
	{
		int32_t L_63 = V_0;
		int32_t L_64 = V_2;
		if ((((int32_t)L_63) < ((int32_t)L_64)))
		{
			goto IL_00f8;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_65 = V_8;
		return L_65;
	}
}
// System.Int32 BCrypt.Net.BCrypt::Char64(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BCrypt_Char64_mE28A3C33B02B875DCC66BF7A0D5350EB0CADCB01 (Il2CppChar ___character0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BCrypt_tCB4114075C0C8A206D099F038AB79D00297588EE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Il2CppChar L_0 = ___character0;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_000e;
		}
	}
	{
		Il2CppChar L_1 = ___character0;
		il2cpp_codegen_runtime_class_init_inline(BCrypt_tCB4114075C0C8A206D099F038AB79D00297588EE_il2cpp_TypeInfo_var);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = ((BCrypt_tCB4114075C0C8A206D099F038AB79D00297588EE_StaticFields*)il2cpp_codegen_static_fields_for(BCrypt_tCB4114075C0C8A206D099F038AB79D00297588EE_il2cpp_TypeInfo_var))->____Index64_7;
		NullCheck(L_2);
		if ((((int32_t)L_1) <= ((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length)))))
		{
			goto IL_0010;
		}
	}

IL_000e:
	{
		return (-1);
	}

IL_0010:
	{
		il2cpp_codegen_runtime_class_init_inline(BCrypt_tCB4114075C0C8A206D099F038AB79D00297588EE_il2cpp_TypeInfo_var);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = ((BCrypt_tCB4114075C0C8A206D099F038AB79D00297588EE_StaticFields*)il2cpp_codegen_static_fields_for(BCrypt_tCB4114075C0C8A206D099F038AB79D00297588EE_il2cpp_TypeInfo_var))->____Index64_7;
		Il2CppChar L_4 = ___character0;
		NullCheck(L_3);
		Il2CppChar L_5 = L_4;
		int32_t L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		return L_6;
	}
}
// System.Void BCrypt.Net.BCrypt::Encipher(System.UInt32[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BCrypt_Encipher_mB6825D56C5C7954E4F0FCD565CCDC099D0526F7A (BCrypt_tCB4114075C0C8A206D099F038AB79D00297588EE* __this, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___blockArray0, int32_t ___offset1, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	uint32_t V_2 = 0;
	uint32_t V_3 = 0;
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___blockArray0;
		int32_t L_1 = ___offset1;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		uint32_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_2 = L_3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4 = ___blockArray0;
		int32_t L_5 = ___offset1;
		NullCheck(L_4);
		int32_t L_6 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		uint32_t L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_3 = L_7;
		uint32_t L_8 = V_2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_9 = __this->____P_8;
		NullCheck(L_9);
		int32_t L_10 = 0;
		uint32_t L_11 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_2 = ((int32_t)((int32_t)L_8^(int32_t)L_11));
		V_0 = 0;
		goto IL_0100;
	}

IL_001c:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_12 = __this->____S_9;
		uint32_t L_13 = V_2;
		NullCheck(L_12);
		uintptr_t L_14 = ((uintptr_t)((int32_t)(((int32_t)((uint32_t)L_13>>((int32_t)24)))&((int32_t)255))));
		uint32_t L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		V_1 = L_15;
		uint32_t L_16 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_17 = __this->____S_9;
		uint32_t L_18 = V_2;
		NullCheck(L_17);
		uintptr_t L_19 = ((uintptr_t)((int32_t)(((int32_t)256)|((int32_t)(((int32_t)((uint32_t)L_18>>((int32_t)16)))&((int32_t)255))))));
		uint32_t L_20 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)L_20));
		uint32_t L_21 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_22 = __this->____S_9;
		uint32_t L_23 = V_2;
		NullCheck(L_22);
		uintptr_t L_24 = ((uintptr_t)((int32_t)(((int32_t)512)|((int32_t)(((int32_t)((uint32_t)L_23>>8))&((int32_t)255))))));
		uint32_t L_25 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		V_1 = ((int32_t)((int32_t)L_21^(int32_t)L_25));
		uint32_t L_26 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_27 = __this->____S_9;
		uint32_t L_28 = V_2;
		NullCheck(L_27);
		uintptr_t L_29 = ((uintptr_t)((int32_t)(((int32_t)768)|((int32_t)((int32_t)L_28&((int32_t)255))))));
		uint32_t L_30 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_26, (int32_t)L_30));
		uint32_t L_31 = V_3;
		uint32_t L_32 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_33 = __this->____P_8;
		uint32_t L_34 = V_0;
		int32_t L_35 = ((int32_t)il2cpp_codegen_add((int32_t)L_34, 1));
		V_0 = L_35;
		NullCheck(L_33);
		uintptr_t L_36 = ((uintptr_t)L_35);
		uint32_t L_37 = (L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_36));
		V_3 = ((int32_t)((int32_t)L_31^((int32_t)((int32_t)L_32^(int32_t)L_37))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_38 = __this->____S_9;
		uint32_t L_39 = V_3;
		NullCheck(L_38);
		uintptr_t L_40 = ((uintptr_t)((int32_t)(((int32_t)((uint32_t)L_39>>((int32_t)24)))&((int32_t)255))));
		uint32_t L_41 = (L_38)->GetAt(static_cast<il2cpp_array_size_t>(L_40));
		V_1 = L_41;
		uint32_t L_42 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_43 = __this->____S_9;
		uint32_t L_44 = V_3;
		NullCheck(L_43);
		uintptr_t L_45 = ((uintptr_t)((int32_t)(((int32_t)256)|((int32_t)(((int32_t)((uint32_t)L_44>>((int32_t)16)))&((int32_t)255))))));
		uint32_t L_46 = (L_43)->GetAt(static_cast<il2cpp_array_size_t>(L_45));
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_42, (int32_t)L_46));
		uint32_t L_47 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_48 = __this->____S_9;
		uint32_t L_49 = V_3;
		NullCheck(L_48);
		uintptr_t L_50 = ((uintptr_t)((int32_t)(((int32_t)512)|((int32_t)(((int32_t)((uint32_t)L_49>>8))&((int32_t)255))))));
		uint32_t L_51 = (L_48)->GetAt(static_cast<il2cpp_array_size_t>(L_50));
		V_1 = ((int32_t)((int32_t)L_47^(int32_t)L_51));
		uint32_t L_52 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_53 = __this->____S_9;
		uint32_t L_54 = V_3;
		NullCheck(L_53);
		uintptr_t L_55 = ((uintptr_t)((int32_t)(((int32_t)768)|((int32_t)((int32_t)L_54&((int32_t)255))))));
		uint32_t L_56 = (L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_55));
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_52, (int32_t)L_56));
		uint32_t L_57 = V_2;
		uint32_t L_58 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_59 = __this->____P_8;
		uint32_t L_60 = V_0;
		int32_t L_61 = ((int32_t)il2cpp_codegen_add((int32_t)L_60, 1));
		V_0 = L_61;
		NullCheck(L_59);
		uintptr_t L_62 = ((uintptr_t)L_61);
		uint32_t L_63 = (L_59)->GetAt(static_cast<il2cpp_array_size_t>(L_62));
		V_2 = ((int32_t)((int32_t)L_57^((int32_t)((int32_t)L_58^(int32_t)L_63))));
	}

IL_0100:
	{
		uint32_t L_64 = V_0;
		if ((!(((uint32_t)L_64) > ((uint32_t)((int32_t)14)))))
		{
			goto IL_001c;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_65 = ___blockArray0;
		int32_t L_66 = ___offset1;
		uint32_t L_67 = V_3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_68 = __this->____P_8;
		NullCheck(L_68);
		int32_t L_69 = ((int32_t)17);
		uint32_t L_70 = (L_68)->GetAt(static_cast<il2cpp_array_size_t>(L_69));
		NullCheck(L_65);
		(L_65)->SetAt(static_cast<il2cpp_array_size_t>(L_66), (uint32_t)((int32_t)((int32_t)L_67^(int32_t)L_70)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_71 = ___blockArray0;
		int32_t L_72 = ___offset1;
		uint32_t L_73 = V_2;
		NullCheck(L_71);
		(L_71)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_72, 1))), (uint32_t)L_73);
		return;
	}
}
// System.UInt32 BCrypt.Net.BCrypt::StreamToWord(System.Byte[],System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t BCrypt_StreamToWord_mB886DB41AC2065D28E2C1DB90E45A3C0D764DFD3 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data0, int32_t* ___offset1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	uint32_t V_1 = 0;
	{
		V_1 = 0;
		V_0 = 0;
		goto IL_0023;
	}

IL_0006:
	{
		uint32_t L_0 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___data0;
		int32_t* L_2 = ___offset1;
		int32_t L_3 = *((int32_t*)L_2);
		NullCheck(L_1);
		int32_t L_4 = L_3;
		uint8_t L_5 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_1 = ((int32_t)(((int32_t)((int32_t)L_0<<8))|((int32_t)((int32_t)L_5&((int32_t)255)))));
		int32_t* L_6 = ___offset1;
		int32_t* L_7 = ___offset1;
		int32_t L_8 = *((int32_t*)L_7);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ___data0;
		NullCheck(L_9);
		*((int32_t*)L_6) = (int32_t)((int32_t)(((int32_t)il2cpp_codegen_add(L_8, 1))%((int32_t)(((RuntimeArray*)L_9)->max_length))));
		int32_t L_10 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0023:
	{
		int32_t L_11 = V_0;
		if ((((int32_t)L_11) < ((int32_t)4)))
		{
			goto IL_0006;
		}
	}
	{
		uint32_t L_12 = V_1;
		return L_12;
	}
}
// System.Void BCrypt.Net.BCrypt::InitializeKey()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BCrypt_InitializeKey_mE88A5B16B11DAB67E6AAF894681AABD9BEF60BCB (BCrypt_tCB4114075C0C8A206D099F038AB79D00297588EE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BCrypt_tCB4114075C0C8A206D099F038AB79D00297588EE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(BCrypt_tCB4114075C0C8A206D099F038AB79D00297588EE_il2cpp_TypeInfo_var);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ((BCrypt_tCB4114075C0C8A206D099F038AB79D00297588EE_StaticFields*)il2cpp_codegen_static_fields_for(BCrypt_tCB4114075C0C8A206D099F038AB79D00297588EE_il2cpp_TypeInfo_var))->____POrig_3;
		NullCheck(L_0);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_0)->max_length)));
		__this->____P_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____P_8), (void*)L_1);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2 = ((BCrypt_tCB4114075C0C8A206D099F038AB79D00297588EE_StaticFields*)il2cpp_codegen_static_fields_for(BCrypt_tCB4114075C0C8A206D099F038AB79D00297588EE_il2cpp_TypeInfo_var))->____SOrig_4;
		NullCheck(L_2);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_2)->max_length)));
		__this->____S_9 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____S_9), (void*)L_3);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4 = ((BCrypt_tCB4114075C0C8A206D099F038AB79D00297588EE_StaticFields*)il2cpp_codegen_static_fields_for(BCrypt_tCB4114075C0C8A206D099F038AB79D00297588EE_il2cpp_TypeInfo_var))->____POrig_3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_5 = __this->____P_8;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_6 = ((BCrypt_tCB4114075C0C8A206D099F038AB79D00297588EE_StaticFields*)il2cpp_codegen_static_fields_for(BCrypt_tCB4114075C0C8A206D099F038AB79D00297588EE_il2cpp_TypeInfo_var))->____POrig_3;
		NullCheck(L_6);
		Array_Copy_m4233828B4E6288B6D815F539AAA38575DE627900((RuntimeArray*)L_4, (RuntimeArray*)L_5, ((int32_t)(((RuntimeArray*)L_6)->max_length)), NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_7 = ((BCrypt_tCB4114075C0C8A206D099F038AB79D00297588EE_StaticFields*)il2cpp_codegen_static_fields_for(BCrypt_tCB4114075C0C8A206D099F038AB79D00297588EE_il2cpp_TypeInfo_var))->____SOrig_4;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_8 = __this->____S_9;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_9 = ((BCrypt_tCB4114075C0C8A206D099F038AB79D00297588EE_StaticFields*)il2cpp_codegen_static_fields_for(BCrypt_tCB4114075C0C8A206D099F038AB79D00297588EE_il2cpp_TypeInfo_var))->____SOrig_4;
		NullCheck(L_9);
		Array_Copy_m4233828B4E6288B6D815F539AAA38575DE627900((RuntimeArray*)L_7, (RuntimeArray*)L_8, ((int32_t)(((RuntimeArray*)L_9)->max_length)), NULL);
		return;
	}
}
// System.Void BCrypt.Net.BCrypt::Key(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BCrypt_Key_m8DF10AAD16FAC4C1B22E85448BE89C3EE3EEC88C (BCrypt_tCB4114075C0C8A206D099F038AB79D00297588EE* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___keyBytes0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BCrypt_tCB4114075C0C8A206D099F038AB79D00297588EE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_5 = NULL;
	{
		V_1 = 0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)2);
		V_5 = L_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = V_5;
		V_2 = L_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2 = __this->____P_8;
		NullCheck(L_2);
		V_3 = ((int32_t)(((RuntimeArray*)L_2)->max_length));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = __this->____S_9;
		NullCheck(L_3);
		V_4 = ((int32_t)(((RuntimeArray*)L_3)->max_length));
		V_0 = 0;
		goto IL_0041;
	}

IL_0024:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4 = __this->____P_8;
		int32_t L_5 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_6 = __this->____P_8;
		int32_t L_7 = V_0;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		uint32_t L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = ___keyBytes0;
		il2cpp_codegen_runtime_class_init_inline(BCrypt_tCB4114075C0C8A206D099F038AB79D00297588EE_il2cpp_TypeInfo_var);
		uint32_t L_11;
		L_11 = BCrypt_StreamToWord_mB886DB41AC2065D28E2C1DB90E45A3C0D764DFD3(L_10, (&V_1), NULL);
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (uint32_t)((int32_t)((int32_t)L_9^(int32_t)L_11)));
		int32_t L_12 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0041:
	{
		int32_t L_13 = V_0;
		int32_t L_14 = V_3;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_0024;
		}
	}
	{
		V_0 = 0;
		goto IL_006d;
	}

IL_0049:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_15 = V_2;
		BCrypt_Encipher_mB6825D56C5C7954E4F0FCD565CCDC099D0526F7A(__this, L_15, 0, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_16 = __this->____P_8;
		int32_t L_17 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_18 = V_2;
		NullCheck(L_18);
		int32_t L_19 = 0;
		uint32_t L_20 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		NullCheck(L_16);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(L_17), (uint32_t)L_20);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_21 = __this->____P_8;
		int32_t L_22 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_23 = V_2;
		NullCheck(L_23);
		int32_t L_24 = 1;
		uint32_t L_25 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		NullCheck(L_21);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_22, 1))), (uint32_t)L_25);
		int32_t L_26 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_26, 2));
	}

IL_006d:
	{
		int32_t L_27 = V_0;
		int32_t L_28 = V_3;
		if ((((int32_t)L_27) < ((int32_t)L_28)))
		{
			goto IL_0049;
		}
	}
	{
		V_0 = 0;
		goto IL_0099;
	}

IL_0075:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_29 = V_2;
		BCrypt_Encipher_mB6825D56C5C7954E4F0FCD565CCDC099D0526F7A(__this, L_29, 0, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_30 = __this->____S_9;
		int32_t L_31 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_32 = V_2;
		NullCheck(L_32);
		int32_t L_33 = 0;
		uint32_t L_34 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		NullCheck(L_30);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_31), (uint32_t)L_34);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_35 = __this->____S_9;
		int32_t L_36 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_37 = V_2;
		NullCheck(L_37);
		int32_t L_38 = 1;
		uint32_t L_39 = (L_37)->GetAt(static_cast<il2cpp_array_size_t>(L_38));
		NullCheck(L_35);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_36, 1))), (uint32_t)L_39);
		int32_t L_40 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_40, 2));
	}

IL_0099:
	{
		int32_t L_41 = V_0;
		int32_t L_42 = V_4;
		if ((((int32_t)L_41) < ((int32_t)L_42)))
		{
			goto IL_0075;
		}
	}
	{
		return;
	}
}
// System.Void BCrypt.Net.BCrypt::EKSKey(System.Byte[],System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BCrypt_EKSKey_m34A5BC87942C87523BCC8C1B0BFFAE30168A3CDF (BCrypt_tCB4114075C0C8A206D099F038AB79D00297588EE* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___saltBytes0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___inputBytes1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BCrypt_tCB4114075C0C8A206D099F038AB79D00297588EE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_6 = NULL;
	{
		V_1 = 0;
		V_2 = 0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)2);
		V_6 = L_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = V_6;
		V_3 = L_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2 = __this->____P_8;
		NullCheck(L_2);
		V_4 = ((int32_t)(((RuntimeArray*)L_2)->max_length));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = __this->____S_9;
		NullCheck(L_3);
		V_5 = ((int32_t)(((RuntimeArray*)L_3)->max_length));
		V_0 = 0;
		goto IL_0044;
	}

IL_0027:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4 = __this->____P_8;
		int32_t L_5 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_6 = __this->____P_8;
		int32_t L_7 = V_0;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		uint32_t L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = ___inputBytes1;
		il2cpp_codegen_runtime_class_init_inline(BCrypt_tCB4114075C0C8A206D099F038AB79D00297588EE_il2cpp_TypeInfo_var);
		uint32_t L_11;
		L_11 = BCrypt_StreamToWord_mB886DB41AC2065D28E2C1DB90E45A3C0D764DFD3(L_10, (&V_1), NULL);
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (uint32_t)((int32_t)((int32_t)L_9^(int32_t)L_11)));
		int32_t L_12 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0044:
	{
		int32_t L_13 = V_0;
		int32_t L_14 = V_4;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_0027;
		}
	}
	{
		V_0 = 0;
		goto IL_00a7;
	}

IL_004d:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_15 = V_3;
		NullCheck(L_15);
		uint32_t* L_16 = ((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)));
		uint32_t L_17 = (*(uint32_t*)L_16);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = ___saltBytes0;
		il2cpp_codegen_runtime_class_init_inline(BCrypt_tCB4114075C0C8A206D099F038AB79D00297588EE_il2cpp_TypeInfo_var);
		uint32_t L_19;
		L_19 = BCrypt_StreamToWord_mB886DB41AC2065D28E2C1DB90E45A3C0D764DFD3(L_18, (&V_2), NULL);
		*(uint32_t*)L_16 = ((int32_t)((int32_t)L_17^(int32_t)L_19));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_20 = V_3;
		NullCheck(L_20);
		uint32_t* L_21 = ((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(1)));
		uint32_t L_22 = (*(uint32_t*)L_21);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_23 = ___saltBytes0;
		uint32_t L_24;
		L_24 = BCrypt_StreamToWord_mB886DB41AC2065D28E2C1DB90E45A3C0D764DFD3(L_23, (&V_2), NULL);
		*(uint32_t*)L_21 = ((int32_t)((int32_t)L_22^(int32_t)L_24));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_25 = V_3;
		BCrypt_Encipher_mB6825D56C5C7954E4F0FCD565CCDC099D0526F7A(__this, L_25, 0, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_26 = __this->____P_8;
		int32_t L_27 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_28 = V_3;
		NullCheck(L_28);
		int32_t L_29 = 0;
		uint32_t L_30 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		NullCheck(L_26);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(L_27), (uint32_t)L_30);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_31 = __this->____P_8;
		int32_t L_32 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_33 = V_3;
		NullCheck(L_33);
		int32_t L_34 = 1;
		uint32_t L_35 = (L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		NullCheck(L_31);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_32, 1))), (uint32_t)L_35);
		int32_t L_36 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_36, 2));
	}

IL_00a7:
	{
		int32_t L_37 = V_0;
		int32_t L_38 = V_4;
		if ((((int32_t)L_37) < ((int32_t)L_38)))
		{
			goto IL_004d;
		}
	}
	{
		V_0 = 0;
		goto IL_010a;
	}

IL_00b0:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_39 = V_3;
		NullCheck(L_39);
		uint32_t* L_40 = ((L_39)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)));
		uint32_t L_41 = (*(uint32_t*)L_40);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_42 = ___saltBytes0;
		il2cpp_codegen_runtime_class_init_inline(BCrypt_tCB4114075C0C8A206D099F038AB79D00297588EE_il2cpp_TypeInfo_var);
		uint32_t L_43;
		L_43 = BCrypt_StreamToWord_mB886DB41AC2065D28E2C1DB90E45A3C0D764DFD3(L_42, (&V_2), NULL);
		*(uint32_t*)L_40 = ((int32_t)((int32_t)L_41^(int32_t)L_43));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_44 = V_3;
		NullCheck(L_44);
		uint32_t* L_45 = ((L_44)->GetAddressAt(static_cast<il2cpp_array_size_t>(1)));
		uint32_t L_46 = (*(uint32_t*)L_45);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_47 = ___saltBytes0;
		uint32_t L_48;
		L_48 = BCrypt_StreamToWord_mB886DB41AC2065D28E2C1DB90E45A3C0D764DFD3(L_47, (&V_2), NULL);
		*(uint32_t*)L_45 = ((int32_t)((int32_t)L_46^(int32_t)L_48));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_49 = V_3;
		BCrypt_Encipher_mB6825D56C5C7954E4F0FCD565CCDC099D0526F7A(__this, L_49, 0, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_50 = __this->____S_9;
		int32_t L_51 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_52 = V_3;
		NullCheck(L_52);
		int32_t L_53 = 0;
		uint32_t L_54 = (L_52)->GetAt(static_cast<il2cpp_array_size_t>(L_53));
		NullCheck(L_50);
		(L_50)->SetAt(static_cast<il2cpp_array_size_t>(L_51), (uint32_t)L_54);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_55 = __this->____S_9;
		int32_t L_56 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_57 = V_3;
		NullCheck(L_57);
		int32_t L_58 = 1;
		uint32_t L_59 = (L_57)->GetAt(static_cast<il2cpp_array_size_t>(L_58));
		NullCheck(L_55);
		(L_55)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_56, 1))), (uint32_t)L_59);
		int32_t L_60 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_60, 2));
	}

IL_010a:
	{
		int32_t L_61 = V_0;
		int32_t L_62 = V_5;
		if ((((int32_t)L_61) < ((int32_t)L_62)))
		{
			goto IL_00b0;
		}
	}
	{
		return;
	}
}
// System.Byte[] BCrypt.Net.BCrypt::CryptRaw(System.Byte[],System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* BCrypt_CryptRaw_m246A44A7BD01EB5570DF689ACD8547BE52A0298F (BCrypt_tCB4114075C0C8A206D099F038AB79D00297588EE* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___inputBytes0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___saltBytes1, int32_t ___logRounds2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BCrypt_tCB4114075C0C8A206D099F038AB79D00297588EE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_0 = NULL;
	int32_t V_1 = 0;
	uint32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_6 = NULL;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(BCrypt_tCB4114075C0C8A206D099F038AB79D00297588EE_il2cpp_TypeInfo_var);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ((BCrypt_tCB4114075C0C8A206D099F038AB79D00297588EE_StaticFields*)il2cpp_codegen_static_fields_for(BCrypt_tCB4114075C0C8A206D099F038AB79D00297588EE_il2cpp_TypeInfo_var))->____BfCryptCiphertext_5;
		NullCheck(L_0);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_0)->max_length)));
		V_0 = L_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2 = ((BCrypt_tCB4114075C0C8A206D099F038AB79D00297588EE_StaticFields*)il2cpp_codegen_static_fields_for(BCrypt_tCB4114075C0C8A206D099F038AB79D00297588EE_il2cpp_TypeInfo_var))->____BfCryptCiphertext_5;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4 = ((BCrypt_tCB4114075C0C8A206D099F038AB79D00297588EE_StaticFields*)il2cpp_codegen_static_fields_for(BCrypt_tCB4114075C0C8A206D099F038AB79D00297588EE_il2cpp_TypeInfo_var))->____BfCryptCiphertext_5;
		NullCheck(L_4);
		Array_Copy_m4233828B4E6288B6D815F539AAA38575DE627900((RuntimeArray*)L_2, (RuntimeArray*)L_3, ((int32_t)(((RuntimeArray*)L_4)->max_length)), NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_5 = V_0;
		NullCheck(L_5);
		V_1 = ((int32_t)(((RuntimeArray*)L_5)->max_length));
		int32_t L_6 = ___logRounds2;
		if ((((int32_t)L_6) < ((int32_t)4)))
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_7 = ___logRounds2;
		if ((((int32_t)L_7) <= ((int32_t)((int32_t)31))))
		{
			goto IL_003c;
		}
	}

IL_002c:
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_8 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_8);
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_8, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3A8C9252A3DD108EF5BB2B2CB6F60A0997C2BB71)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral60668ACBB1126EF66E5DA781C86804EDF2CE04B9)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BCrypt_CryptRaw_m246A44A7BD01EB5570DF689ACD8547BE52A0298F_RuntimeMethod_var)));
	}

IL_003c:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ___saltBytes1;
		NullCheck(L_9);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length))) == ((int32_t)((int32_t)16))))
		{
			goto IL_0053;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_10 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_10);
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_10, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral132F0A944E255ED795ACF9142D94AD93C11D1146)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral305E820C4852F5827650FB7E2E790DDF084FD363)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BCrypt_CryptRaw_m246A44A7BD01EB5570DF689ACD8547BE52A0298F_RuntimeMethod_var)));
	}

IL_0053:
	{
		int32_t L_11 = ___logRounds2;
		V_2 = ((int32_t)(1<<((int32_t)(L_11&((int32_t)31)))));
		BCrypt_InitializeKey_mE88A5B16B11DAB67E6AAF894681AABD9BEF60BCB(__this, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = ___saltBytes1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = ___inputBytes0;
		BCrypt_EKSKey_m34A5BC87942C87523BCC8C1B0BFFAE30168A3CDF(__this, L_12, L_13, NULL);
		V_3 = 0;
		goto IL_007e;
	}

IL_006c:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = ___inputBytes0;
		BCrypt_Key_m8DF10AAD16FAC4C1B22E85448BE89C3EE3EEC88C(__this, L_14, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = ___saltBytes1;
		BCrypt_Key_m8DF10AAD16FAC4C1B22E85448BE89C3EE3EEC88C(__this, L_15, NULL);
		int32_t L_16 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_16, 1));
	}

IL_007e:
	{
		int32_t L_17 = V_3;
		uint32_t L_18 = V_2;
		if ((((int64_t)((int64_t)L_17)) < ((int64_t)((int64_t)(uint64_t)L_18))))
		{
			goto IL_006c;
		}
	}
	{
		V_4 = 0;
		goto IL_00ac;
	}

IL_0089:
	{
		V_5 = 0;
		goto IL_009f;
	}

IL_008e:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_19 = V_0;
		int32_t L_20 = V_5;
		BCrypt_Encipher_mB6825D56C5C7954E4F0FCD565CCDC099D0526F7A(__this, L_19, ((int32_t)(L_20<<1)), NULL);
		int32_t L_21 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_009f:
	{
		int32_t L_22 = V_5;
		int32_t L_23 = V_1;
		if ((((int32_t)L_22) < ((int32_t)((int32_t)(L_23>>1)))))
		{
			goto IL_008e;
		}
	}
	{
		int32_t L_24 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_24, 1));
	}

IL_00ac:
	{
		int32_t L_25 = V_4;
		if ((((int32_t)L_25) < ((int32_t)((int32_t)64))))
		{
			goto IL_0089;
		}
	}
	{
		int32_t L_26 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_27 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply(L_26, 4)));
		V_6 = L_27;
		V_7 = 0;
		V_8 = 0;
		goto IL_0126;
	}

IL_00c4:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_28 = V_6;
		int32_t L_29 = V_8;
		int32_t L_30 = L_29;
		V_8 = ((int32_t)il2cpp_codegen_add(L_30, 1));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_31 = V_0;
		int32_t L_32 = V_7;
		NullCheck(L_31);
		int32_t L_33 = L_32;
		uint32_t L_34 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		NullCheck(L_28);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(L_30), (uint8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)((uint32_t)L_34>>((int32_t)24)))&((int32_t)255)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_35 = V_6;
		int32_t L_36 = V_8;
		int32_t L_37 = L_36;
		V_8 = ((int32_t)il2cpp_codegen_add(L_37, 1));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_38 = V_0;
		int32_t L_39 = V_7;
		NullCheck(L_38);
		int32_t L_40 = L_39;
		uint32_t L_41 = (L_38)->GetAt(static_cast<il2cpp_array_size_t>(L_40));
		NullCheck(L_35);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(L_37), (uint8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)((uint32_t)L_41>>((int32_t)16)))&((int32_t)255)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_42 = V_6;
		int32_t L_43 = V_8;
		int32_t L_44 = L_43;
		V_8 = ((int32_t)il2cpp_codegen_add(L_44, 1));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_45 = V_0;
		int32_t L_46 = V_7;
		NullCheck(L_45);
		int32_t L_47 = L_46;
		uint32_t L_48 = (L_45)->GetAt(static_cast<il2cpp_array_size_t>(L_47));
		NullCheck(L_42);
		(L_42)->SetAt(static_cast<il2cpp_array_size_t>(L_44), (uint8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)((uint32_t)L_48>>8))&((int32_t)255)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_49 = V_6;
		int32_t L_50 = V_8;
		int32_t L_51 = L_50;
		V_8 = ((int32_t)il2cpp_codegen_add(L_51, 1));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_52 = V_0;
		int32_t L_53 = V_7;
		NullCheck(L_52);
		int32_t L_54 = L_53;
		uint32_t L_55 = (L_52)->GetAt(static_cast<il2cpp_array_size_t>(L_54));
		NullCheck(L_49);
		(L_49)->SetAt(static_cast<il2cpp_array_size_t>(L_51), (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_55&((int32_t)255)))));
		int32_t L_56 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_56, 1));
	}

IL_0126:
	{
		int32_t L_57 = V_7;
		int32_t L_58 = V_1;
		if ((((int32_t)L_57) < ((int32_t)L_58)))
		{
			goto IL_00c4;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_59 = V_6;
		return L_59;
	}
}
// System.Void BCrypt.Net.BCrypt::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BCrypt__ctor_mAC573F58F3C16F29B2AF533D757B1CA7E7A9A17C (BCrypt_tCB4114075C0C8A206D099F038AB79D00297588EE* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void BCrypt.Net.BCrypt::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BCrypt__cctor_m6E27C770908276D2DFC32B7E6EA9B291F4D5DABE (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BCrypt_tCB4114075C0C8A206D099F038AB79D00297588EE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3EU7B93DF5421U2DB93BU2D4464U2DADF0U2D4940F841A427U7D_tDECE82D79072A652D5C5ED4C3A0C343E70A9EAA4____U24U24method0x6000017U2D1_0_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3EU7B93DF5421U2DB93BU2D4464U2DADF0U2D4940F841A427U7D_tDECE82D79072A652D5C5ED4C3A0C343E70A9EAA4____U24U24method0x6000017U2D2_1_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3EU7B93DF5421U2DB93BU2D4464U2DADF0U2D4940F841A427U7D_tDECE82D79072A652D5C5ED4C3A0C343E70A9EAA4____U24U24method0x6000017U2D3_2_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3EU7B93DF5421U2DB93BU2D4464U2DADF0U2D4940F841A427U7D_tDECE82D79072A652D5C5ED4C3A0C343E70A9EAA4____U24U24method0x6000017U2D4_3_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3EU7B93DF5421U2DB93BU2D4464U2DADF0U2D4940F841A427U7D_tDECE82D79072A652D5C5ED4C3A0C343E70A9EAA4____U24U24method0x6000017U2D5_4_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)18));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = L_0;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_2 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3EU7B93DF5421U2DB93BU2D4464U2DADF0U2D4940F841A427U7D_tDECE82D79072A652D5C5ED4C3A0C343E70A9EAA4____U24U24method0x6000017U2D1_0_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_1, L_2, NULL);
		((BCrypt_tCB4114075C0C8A206D099F038AB79D00297588EE_StaticFields*)il2cpp_codegen_static_fields_for(BCrypt_tCB4114075C0C8A206D099F038AB79D00297588EE_il2cpp_TypeInfo_var))->____POrig_3 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((BCrypt_tCB4114075C0C8A206D099F038AB79D00297588EE_StaticFields*)il2cpp_codegen_static_fields_for(BCrypt_tCB4114075C0C8A206D099F038AB79D00297588EE_il2cpp_TypeInfo_var))->____POrig_3), (void*)L_1);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)1024));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4 = L_3;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_5 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3EU7B93DF5421U2DB93BU2D4464U2DADF0U2D4940F841A427U7D_tDECE82D79072A652D5C5ED4C3A0C343E70A9EAA4____U24U24method0x6000017U2D2_1_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_4, L_5, NULL);
		((BCrypt_tCB4114075C0C8A206D099F038AB79D00297588EE_StaticFields*)il2cpp_codegen_static_fields_for(BCrypt_tCB4114075C0C8A206D099F038AB79D00297588EE_il2cpp_TypeInfo_var))->____SOrig_4 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((BCrypt_tCB4114075C0C8A206D099F038AB79D00297588EE_StaticFields*)il2cpp_codegen_static_fields_for(BCrypt_tCB4114075C0C8A206D099F038AB79D00297588EE_il2cpp_TypeInfo_var))->____SOrig_4), (void*)L_4);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_6 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)6);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_7 = L_6;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_8 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3EU7B93DF5421U2DB93BU2D4464U2DADF0U2D4940F841A427U7D_tDECE82D79072A652D5C5ED4C3A0C343E70A9EAA4____U24U24method0x6000017U2D3_2_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_7, L_8, NULL);
		((BCrypt_tCB4114075C0C8A206D099F038AB79D00297588EE_StaticFields*)il2cpp_codegen_static_fields_for(BCrypt_tCB4114075C0C8A206D099F038AB79D00297588EE_il2cpp_TypeInfo_var))->____BfCryptCiphertext_5 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&((BCrypt_tCB4114075C0C8A206D099F038AB79D00297588EE_StaticFields*)il2cpp_codegen_static_fields_for(BCrypt_tCB4114075C0C8A206D099F038AB79D00297588EE_il2cpp_TypeInfo_var))->____BfCryptCiphertext_5), (void*)L_7);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_9 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var, (uint32_t)((int32_t)64));
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_10 = L_9;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_11 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3EU7B93DF5421U2DB93BU2D4464U2DADF0U2D4940F841A427U7D_tDECE82D79072A652D5C5ED4C3A0C343E70A9EAA4____U24U24method0x6000017U2D4_3_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_10, L_11, NULL);
		((BCrypt_tCB4114075C0C8A206D099F038AB79D00297588EE_StaticFields*)il2cpp_codegen_static_fields_for(BCrypt_tCB4114075C0C8A206D099F038AB79D00297588EE_il2cpp_TypeInfo_var))->____Base64Code_6 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&((BCrypt_tCB4114075C0C8A206D099F038AB79D00297588EE_StaticFields*)il2cpp_codegen_static_fields_for(BCrypt_tCB4114075C0C8A206D099F038AB79D00297588EE_il2cpp_TypeInfo_var))->____Base64Code_6), (void*)L_10);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)128));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = L_12;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_14 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3EU7B93DF5421U2DB93BU2D4464U2DADF0U2D4940F841A427U7D_tDECE82D79072A652D5C5ED4C3A0C343E70A9EAA4____U24U24method0x6000017U2D5_4_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_13, L_14, NULL);
		((BCrypt_tCB4114075C0C8A206D099F038AB79D00297588EE_StaticFields*)il2cpp_codegen_static_fields_for(BCrypt_tCB4114075C0C8A206D099F038AB79D00297588EE_il2cpp_TypeInfo_var))->____Index64_7 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&((BCrypt_tCB4114075C0C8A206D099F038AB79D00297588EE_StaticFields*)il2cpp_codegen_static_fields_for(BCrypt_tCB4114075C0C8A206D099F038AB79D00297588EE_il2cpp_TypeInfo_var))->____Index64_7), (void*)L_13);
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
// System.Void BCrypt.Net.SaltParseException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SaltParseException__ctor_mAEB6DDC8E21D68FF8821B76FC88474344AA12CC1 (SaltParseException_t1505F5933955FAC31BFD3DA243A79E4BFB426255* __this, const RuntimeMethod* method) 
{
	{
		ApplicationException__ctor_m481B0251BEC0BF28EAAF3FCB11A47EFCB2E56E2A(__this, NULL);
		return;
	}
}
// System.Void BCrypt.Net.SaltParseException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SaltParseException__ctor_mFBE67BE9C71DA7E81EC78BFCA970FC302811BED5 (SaltParseException_t1505F5933955FAC31BFD3DA243A79E4BFB426255* __this, String_t* ___message0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___message0;
		ApplicationException__ctor_mE51100DFCDB0A0DF23B482CC43EC8E396BE7BE82(__this, L_0, NULL);
		return;
	}
}
// System.Void BCrypt.Net.SaltParseException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SaltParseException__ctor_mE7ED48313CD0E6EF9EB9BFDECE896788BA9C1A68 (SaltParseException_t1505F5933955FAC31BFD3DA243A79E4BFB426255* __this, String_t* ___message0, Exception_t* ___innerException1, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___message0;
		Exception_t* L_1 = ___innerException1;
		ApplicationException__ctor_m924E77609BAFA0595453363EB8B7BCCBA03B32DD(__this, L_0, L_1, NULL);
		return;
	}
}
// System.Void BCrypt.Net.SaltParseException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SaltParseException__ctor_mEB3248C4FB224EC8FA86C1010421408ACF2944C9 (SaltParseException_t1505F5933955FAC31BFD3DA243A79E4BFB426255* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___info0, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___context1, const RuntimeMethod* method) 
{
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___info0;
		StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 L_1 = ___context1;
		ApplicationException__ctor_mFF00B1678B9B13F1C9FEB0829C495F6507CAF031(__this, L_0, L_1, NULL);
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength_4;
		return L_0;
	}
}
