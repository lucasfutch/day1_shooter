#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_RaycastHit87180320.h"

// UnityEngine.Transform
struct Transform_t3275118058;
// UnityEngine.AI.NavMeshAgent
struct NavMeshAgent_t2761625415;




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
	// System.Boolean UnityEngine.XR.iOS.UnityARHitTestExample2::firstTime
	bool ___firstTime_3;
	// UnityEngine.AI.NavMeshAgent UnityEngine.XR.iOS.UnityARHitTestExample2::agent
	NavMeshAgent_t2761625415 * ___agent_4;
	// UnityEngine.RaycastHit UnityEngine.XR.iOS.UnityARHitTestExample2::raycastHitPrev
	RaycastHit_t87180320  ___raycastHitPrev_5;

public:
	inline static int32_t get_offset_of_m_HitTransform_2() { return static_cast<int32_t>(offsetof(UnityARHitTestExample2_t121388197, ___m_HitTransform_2)); }
	inline Transform_t3275118058 * get_m_HitTransform_2() const { return ___m_HitTransform_2; }
	inline Transform_t3275118058 ** get_address_of_m_HitTransform_2() { return &___m_HitTransform_2; }
	inline void set_m_HitTransform_2(Transform_t3275118058 * value)
	{
		___m_HitTransform_2 = value;
		Il2CppCodeGenWriteBarrier(&___m_HitTransform_2, value);
	}

	inline static int32_t get_offset_of_firstTime_3() { return static_cast<int32_t>(offsetof(UnityARHitTestExample2_t121388197, ___firstTime_3)); }
	inline bool get_firstTime_3() const { return ___firstTime_3; }
	inline bool* get_address_of_firstTime_3() { return &___firstTime_3; }
	inline void set_firstTime_3(bool value)
	{
		___firstTime_3 = value;
	}

	inline static int32_t get_offset_of_agent_4() { return static_cast<int32_t>(offsetof(UnityARHitTestExample2_t121388197, ___agent_4)); }
	inline NavMeshAgent_t2761625415 * get_agent_4() const { return ___agent_4; }
	inline NavMeshAgent_t2761625415 ** get_address_of_agent_4() { return &___agent_4; }
	inline void set_agent_4(NavMeshAgent_t2761625415 * value)
	{
		___agent_4 = value;
		Il2CppCodeGenWriteBarrier(&___agent_4, value);
	}

	inline static int32_t get_offset_of_raycastHitPrev_5() { return static_cast<int32_t>(offsetof(UnityARHitTestExample2_t121388197, ___raycastHitPrev_5)); }
	inline RaycastHit_t87180320  get_raycastHitPrev_5() const { return ___raycastHitPrev_5; }
	inline RaycastHit_t87180320 * get_address_of_raycastHitPrev_5() { return &___raycastHitPrev_5; }
	inline void set_raycastHitPrev_5(RaycastHit_t87180320  value)
	{
		___raycastHitPrev_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
