#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Rigidbody
struct Rigidbody_t4233889191;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// rollerball
struct  rollerball_t2961320279  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Rigidbody rollerball::ourrigidbody
	Rigidbody_t4233889191 * ___ourrigidbody_2;
	// System.Single rollerball::velocity
	float ___velocity_3;

public:
	inline static int32_t get_offset_of_ourrigidbody_2() { return static_cast<int32_t>(offsetof(rollerball_t2961320279, ___ourrigidbody_2)); }
	inline Rigidbody_t4233889191 * get_ourrigidbody_2() const { return ___ourrigidbody_2; }
	inline Rigidbody_t4233889191 ** get_address_of_ourrigidbody_2() { return &___ourrigidbody_2; }
	inline void set_ourrigidbody_2(Rigidbody_t4233889191 * value)
	{
		___ourrigidbody_2 = value;
		Il2CppCodeGenWriteBarrier(&___ourrigidbody_2, value);
	}

	inline static int32_t get_offset_of_velocity_3() { return static_cast<int32_t>(offsetof(rollerball_t2961320279, ___velocity_3)); }
	inline float get_velocity_3() const { return ___velocity_3; }
	inline float* get_address_of_velocity_3() { return &___velocity_3; }
	inline void set_velocity_3(float value)
	{
		___velocity_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
