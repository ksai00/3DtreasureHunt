#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.Text
struct Text_t356221433;
// System.String
struct String_t;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// textcube
struct  textcube_t1934551878  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.UI.Text textcube::mytext
	Text_t356221433 * ___mytext_2;
	// System.String textcube::message
	String_t* ___message_3;
	// System.Boolean textcube::presspace
	bool ___presspace_4;

public:
	inline static int32_t get_offset_of_mytext_2() { return static_cast<int32_t>(offsetof(textcube_t1934551878, ___mytext_2)); }
	inline Text_t356221433 * get_mytext_2() const { return ___mytext_2; }
	inline Text_t356221433 ** get_address_of_mytext_2() { return &___mytext_2; }
	inline void set_mytext_2(Text_t356221433 * value)
	{
		___mytext_2 = value;
		Il2CppCodeGenWriteBarrier(&___mytext_2, value);
	}

	inline static int32_t get_offset_of_message_3() { return static_cast<int32_t>(offsetof(textcube_t1934551878, ___message_3)); }
	inline String_t* get_message_3() const { return ___message_3; }
	inline String_t** get_address_of_message_3() { return &___message_3; }
	inline void set_message_3(String_t* value)
	{
		___message_3 = value;
		Il2CppCodeGenWriteBarrier(&___message_3, value);
	}

	inline static int32_t get_offset_of_presspace_4() { return static_cast<int32_t>(offsetof(textcube_t1934551878, ___presspace_4)); }
	inline bool get_presspace_4() const { return ___presspace_4; }
	inline bool* get_address_of_presspace_4() { return &___presspace_4; }
	inline void set_presspace_4(bool value)
	{
		___presspace_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
