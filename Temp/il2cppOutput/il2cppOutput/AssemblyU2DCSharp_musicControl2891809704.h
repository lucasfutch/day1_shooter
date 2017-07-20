#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

// UnityEngine.AudioSource
struct AudioSource_t1135106623;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// musicControl
struct  musicControl_t2891809704  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.AudioSource musicControl::drums
	AudioSource_t1135106623 * ___drums_2;
	// UnityEngine.AudioSource musicControl::boxMusic
	AudioSource_t1135106623 * ___boxMusic_3;
	// UnityEngine.Vector3 musicControl::touchPosWorld
	Vector3_t2243707580  ___touchPosWorld_4;

public:
	inline static int32_t get_offset_of_drums_2() { return static_cast<int32_t>(offsetof(musicControl_t2891809704, ___drums_2)); }
	inline AudioSource_t1135106623 * get_drums_2() const { return ___drums_2; }
	inline AudioSource_t1135106623 ** get_address_of_drums_2() { return &___drums_2; }
	inline void set_drums_2(AudioSource_t1135106623 * value)
	{
		___drums_2 = value;
		Il2CppCodeGenWriteBarrier(&___drums_2, value);
	}

	inline static int32_t get_offset_of_boxMusic_3() { return static_cast<int32_t>(offsetof(musicControl_t2891809704, ___boxMusic_3)); }
	inline AudioSource_t1135106623 * get_boxMusic_3() const { return ___boxMusic_3; }
	inline AudioSource_t1135106623 ** get_address_of_boxMusic_3() { return &___boxMusic_3; }
	inline void set_boxMusic_3(AudioSource_t1135106623 * value)
	{
		___boxMusic_3 = value;
		Il2CppCodeGenWriteBarrier(&___boxMusic_3, value);
	}

	inline static int32_t get_offset_of_touchPosWorld_4() { return static_cast<int32_t>(offsetof(musicControl_t2891809704, ___touchPosWorld_4)); }
	inline Vector3_t2243707580  get_touchPosWorld_4() const { return ___touchPosWorld_4; }
	inline Vector3_t2243707580 * get_address_of_touchPosWorld_4() { return &___touchPosWorld_4; }
	inline void set_touchPosWorld_4(Vector3_t2243707580  value)
	{
		___touchPosWorld_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
