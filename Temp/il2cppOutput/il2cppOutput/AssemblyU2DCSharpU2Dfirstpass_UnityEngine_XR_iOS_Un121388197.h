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

// UnityEngine.XR.iOS.UnityARHitTestExample2
struct  UnityARHitTestExample2_t121388197  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Transform UnityEngine.XR.iOS.UnityARHitTestExample2::m_HitTransform
	Transform_t3275118058 * ___m_HitTransform_2;
	// UnityEngine.GameObject UnityEngine.XR.iOS.UnityARHitTestExample2::zombie
	GameObject_t1756533147 * ___zombie_3;
	// System.Boolean UnityEngine.XR.iOS.UnityARHitTestExample2::aiActive
	bool ___aiActive_4;
	// System.Boolean UnityEngine.XR.iOS.UnityARHitTestExample2::aiFinished
	bool ___aiFinished_5;

public:
	inline static int32_t get_offset_of_m_HitTransform_2() { return static_cast<int32_t>(offsetof(UnityARHitTestExample2_t121388197, ___m_HitTransform_2)); }
	inline Transform_t3275118058 * get_m_HitTransform_2() const { return ___m_HitTransform_2; }
	inline Transform_t3275118058 ** get_address_of_m_HitTransform_2() { return &___m_HitTransform_2; }
	inline void set_m_HitTransform_2(Transform_t3275118058 * value)
	{
		___m_HitTransform_2 = value;
		Il2CppCodeGenWriteBarrier(&___m_HitTransform_2, value);
	}

	inline static int32_t get_offset_of_zombie_3() { return static_cast<int32_t>(offsetof(UnityARHitTestExample2_t121388197, ___zombie_3)); }
	inline GameObject_t1756533147 * get_zombie_3() const { return ___zombie_3; }
	inline GameObject_t1756533147 ** get_address_of_zombie_3() { return &___zombie_3; }
	inline void set_zombie_3(GameObject_t1756533147 * value)
	{
		___zombie_3 = value;
		Il2CppCodeGenWriteBarrier(&___zombie_3, value);
	}

	inline static int32_t get_offset_of_aiActive_4() { return static_cast<int32_t>(offsetof(UnityARHitTestExample2_t121388197, ___aiActive_4)); }
	inline bool get_aiActive_4() const { return ___aiActive_4; }
	inline bool* get_address_of_aiActive_4() { return &___aiActive_4; }
	inline void set_aiActive_4(bool value)
	{
		___aiActive_4 = value;
	}

	inline static int32_t get_offset_of_aiFinished_5() { return static_cast<int32_t>(offsetof(UnityARHitTestExample2_t121388197, ___aiFinished_5)); }
	inline bool get_aiFinished_5() const { return ___aiFinished_5; }
	inline bool* get_address_of_aiFinished_5() { return &___aiFinished_5; }
	inline void set_aiFinished_5(bool value)
	{
		___aiFinished_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
