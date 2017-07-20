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





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// selectBox
struct  selectBox_t2744202403  : public MonoBehaviour_t1158329972
{
public:
	// System.Boolean selectBox::firstTime
	bool ___firstTime_2;
	// UnityEngine.RaycastHit selectBox::raycastHit
	RaycastHit_t87180320  ___raycastHit_3;
	// UnityEngine.RaycastHit selectBox::raycastHitPrev
	RaycastHit_t87180320  ___raycastHitPrev_4;

public:
	inline static int32_t get_offset_of_firstTime_2() { return static_cast<int32_t>(offsetof(selectBox_t2744202403, ___firstTime_2)); }
	inline bool get_firstTime_2() const { return ___firstTime_2; }
	inline bool* get_address_of_firstTime_2() { return &___firstTime_2; }
	inline void set_firstTime_2(bool value)
	{
		___firstTime_2 = value;
	}

	inline static int32_t get_offset_of_raycastHit_3() { return static_cast<int32_t>(offsetof(selectBox_t2744202403, ___raycastHit_3)); }
	inline RaycastHit_t87180320  get_raycastHit_3() const { return ___raycastHit_3; }
	inline RaycastHit_t87180320 * get_address_of_raycastHit_3() { return &___raycastHit_3; }
	inline void set_raycastHit_3(RaycastHit_t87180320  value)
	{
		___raycastHit_3 = value;
	}

	inline static int32_t get_offset_of_raycastHitPrev_4() { return static_cast<int32_t>(offsetof(selectBox_t2744202403, ___raycastHitPrev_4)); }
	inline RaycastHit_t87180320  get_raycastHitPrev_4() const { return ___raycastHitPrev_4; }
	inline RaycastHit_t87180320 * get_address_of_raycastHitPrev_4() { return &___raycastHitPrev_4; }
	inline void set_raycastHitPrev_4(RaycastHit_t87180320  value)
	{
		___raycastHitPrev_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
