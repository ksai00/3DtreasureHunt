#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Light
struct Light_t494725636;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// enablelight
struct  enablelight_t1097810269  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Light enablelight::ourlight
	Light_t494725636 * ___ourlight_2;

public:
	inline static int32_t get_offset_of_ourlight_2() { return static_cast<int32_t>(offsetof(enablelight_t1097810269, ___ourlight_2)); }
	inline Light_t494725636 * get_ourlight_2() const { return ___ourlight_2; }
	inline Light_t494725636 ** get_address_of_ourlight_2() { return &___ourlight_2; }
	inline void set_ourlight_2(Light_t494725636 * value)
	{
		___ourlight_2 = value;
		Il2CppCodeGenWriteBarrier(&___ourlight_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
