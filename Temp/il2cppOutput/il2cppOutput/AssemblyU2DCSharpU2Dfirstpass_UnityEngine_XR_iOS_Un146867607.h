#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.Transform
struct Transform_t3275118058;
// UnityEngine.GameObject
struct GameObject_t1756533147;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARHitTestExample
struct  UnityARHitTestExample_t146867607  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Transform UnityEngine.XR.iOS.UnityARHitTestExample::m_HitTransform
	Transform_t3275118058 * ___m_HitTransform_2;
	// UnityEngine.GameObject UnityEngine.XR.iOS.UnityARHitTestExample::newBoxFloor
	GameObject_t1756533147 * ___newBoxFloor_3;

public:
	inline static int32_t get_offset_of_m_HitTransform_2() { return static_cast<int32_t>(offsetof(UnityARHitTestExample_t146867607, ___m_HitTransform_2)); }
	inline Transform_t3275118058 * get_m_HitTransform_2() const { return ___m_HitTransform_2; }
	inline Transform_t3275118058 ** get_address_of_m_HitTransform_2() { return &___m_HitTransform_2; }
	inline void set_m_HitTransform_2(Transform_t3275118058 * value)
	{
		___m_HitTransform_2 = value;
		Il2CppCodeGenWriteBarrier(&___m_HitTransform_2, value);
	}

	inline static int32_t get_offset_of_newBoxFloor_3() { return static_cast<int32_t>(offsetof(UnityARHitTestExample_t146867607, ___newBoxFloor_3)); }
	inline GameObject_t1756533147 * get_newBoxFloor_3() const { return ___newBoxFloor_3; }
	inline GameObject_t1756533147 ** get_address_of_newBoxFloor_3() { return &___newBoxFloor_3; }
	inline void set_newBoxFloor_3(GameObject_t1756533147 * value)
	{
		___newBoxFloor_3 = value;
		Il2CppCodeGenWriteBarrier(&___newBoxFloor_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
