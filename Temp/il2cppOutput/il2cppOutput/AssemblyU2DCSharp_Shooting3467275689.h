#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.AudioSource
struct AudioSource_t1135106623;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Shooting
struct  Shooting_t3467275689  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject Shooting::objetoAAparecer
	GameObject_t1756533147 * ___objetoAAparecer_2;
	// UnityEngine.GameObject Shooting::particleEffect
	GameObject_t1756533147 * ___particleEffect_3;
	// UnityEngine.GameObject Shooting::toggleButton
	GameObject_t1756533147 * ___toggleButton_4;
	// UnityEngine.GameObject Shooting::crossHair
	GameObject_t1756533147 * ___crossHair_5;
	// UnityEngine.GameObject Shooting::bullet
	GameObject_t1756533147 * ___bullet_6;
	// UnityEngine.AudioSource Shooting::bulletSound
	AudioSource_t1135106623 * ___bulletSound_7;
	// UnityEngine.GameObject Shooting::muzzleFlashObject
	GameObject_t1756533147 * ___muzzleFlashObject_8;
	// System.Single Shooting::muzzleFlashTimer
	float ___muzzleFlashTimer_9;
	// System.Single Shooting::muzzleFlashTimerStart
	float ___muzzleFlashTimerStart_10;
	// System.Boolean Shooting::muzzleFlashEnabled
	bool ___muzzleFlashEnabled_11;
	// System.Boolean Shooting::canShoot
	bool ___canShoot_12;
	// System.Boolean Shooting::toggled
	bool ___toggled_13;
	// System.Single Shooting::timeElapsed
	float ___timeElapsed_14;

public:
	inline static int32_t get_offset_of_objetoAAparecer_2() { return static_cast<int32_t>(offsetof(Shooting_t3467275689, ___objetoAAparecer_2)); }
	inline GameObject_t1756533147 * get_objetoAAparecer_2() const { return ___objetoAAparecer_2; }
	inline GameObject_t1756533147 ** get_address_of_objetoAAparecer_2() { return &___objetoAAparecer_2; }
	inline void set_objetoAAparecer_2(GameObject_t1756533147 * value)
	{
		___objetoAAparecer_2 = value;
		Il2CppCodeGenWriteBarrier(&___objetoAAparecer_2, value);
	}

	inline static int32_t get_offset_of_particleEffect_3() { return static_cast<int32_t>(offsetof(Shooting_t3467275689, ___particleEffect_3)); }
	inline GameObject_t1756533147 * get_particleEffect_3() const { return ___particleEffect_3; }
	inline GameObject_t1756533147 ** get_address_of_particleEffect_3() { return &___particleEffect_3; }
	inline void set_particleEffect_3(GameObject_t1756533147 * value)
	{
		___particleEffect_3 = value;
		Il2CppCodeGenWriteBarrier(&___particleEffect_3, value);
	}

	inline static int32_t get_offset_of_toggleButton_4() { return static_cast<int32_t>(offsetof(Shooting_t3467275689, ___toggleButton_4)); }
	inline GameObject_t1756533147 * get_toggleButton_4() const { return ___toggleButton_4; }
	inline GameObject_t1756533147 ** get_address_of_toggleButton_4() { return &___toggleButton_4; }
	inline void set_toggleButton_4(GameObject_t1756533147 * value)
	{
		___toggleButton_4 = value;
		Il2CppCodeGenWriteBarrier(&___toggleButton_4, value);
	}

	inline static int32_t get_offset_of_crossHair_5() { return static_cast<int32_t>(offsetof(Shooting_t3467275689, ___crossHair_5)); }
	inline GameObject_t1756533147 * get_crossHair_5() const { return ___crossHair_5; }
	inline GameObject_t1756533147 ** get_address_of_crossHair_5() { return &___crossHair_5; }
	inline void set_crossHair_5(GameObject_t1756533147 * value)
	{
		___crossHair_5 = value;
		Il2CppCodeGenWriteBarrier(&___crossHair_5, value);
	}

	inline static int32_t get_offset_of_bullet_6() { return static_cast<int32_t>(offsetof(Shooting_t3467275689, ___bullet_6)); }
	inline GameObject_t1756533147 * get_bullet_6() const { return ___bullet_6; }
	inline GameObject_t1756533147 ** get_address_of_bullet_6() { return &___bullet_6; }
	inline void set_bullet_6(GameObject_t1756533147 * value)
	{
		___bullet_6 = value;
		Il2CppCodeGenWriteBarrier(&___bullet_6, value);
	}

	inline static int32_t get_offset_of_bulletSound_7() { return static_cast<int32_t>(offsetof(Shooting_t3467275689, ___bulletSound_7)); }
	inline AudioSource_t1135106623 * get_bulletSound_7() const { return ___bulletSound_7; }
	inline AudioSource_t1135106623 ** get_address_of_bulletSound_7() { return &___bulletSound_7; }
	inline void set_bulletSound_7(AudioSource_t1135106623 * value)
	{
		___bulletSound_7 = value;
		Il2CppCodeGenWriteBarrier(&___bulletSound_7, value);
	}

	inline static int32_t get_offset_of_muzzleFlashObject_8() { return static_cast<int32_t>(offsetof(Shooting_t3467275689, ___muzzleFlashObject_8)); }
	inline GameObject_t1756533147 * get_muzzleFlashObject_8() const { return ___muzzleFlashObject_8; }
	inline GameObject_t1756533147 ** get_address_of_muzzleFlashObject_8() { return &___muzzleFlashObject_8; }
	inline void set_muzzleFlashObject_8(GameObject_t1756533147 * value)
	{
		___muzzleFlashObject_8 = value;
		Il2CppCodeGenWriteBarrier(&___muzzleFlashObject_8, value);
	}

	inline static int32_t get_offset_of_muzzleFlashTimer_9() { return static_cast<int32_t>(offsetof(Shooting_t3467275689, ___muzzleFlashTimer_9)); }
	inline float get_muzzleFlashTimer_9() const { return ___muzzleFlashTimer_9; }
	inline float* get_address_of_muzzleFlashTimer_9() { return &___muzzleFlashTimer_9; }
	inline void set_muzzleFlashTimer_9(float value)
	{
		___muzzleFlashTimer_9 = value;
	}

	inline static int32_t get_offset_of_muzzleFlashTimerStart_10() { return static_cast<int32_t>(offsetof(Shooting_t3467275689, ___muzzleFlashTimerStart_10)); }
	inline float get_muzzleFlashTimerStart_10() const { return ___muzzleFlashTimerStart_10; }
	inline float* get_address_of_muzzleFlashTimerStart_10() { return &___muzzleFlashTimerStart_10; }
	inline void set_muzzleFlashTimerStart_10(float value)
	{
		___muzzleFlashTimerStart_10 = value;
	}

	inline static int32_t get_offset_of_muzzleFlashEnabled_11() { return static_cast<int32_t>(offsetof(Shooting_t3467275689, ___muzzleFlashEnabled_11)); }
	inline bool get_muzzleFlashEnabled_11() const { return ___muzzleFlashEnabled_11; }
	inline bool* get_address_of_muzzleFlashEnabled_11() { return &___muzzleFlashEnabled_11; }
	inline void set_muzzleFlashEnabled_11(bool value)
	{
		___muzzleFlashEnabled_11 = value;
	}

	inline static int32_t get_offset_of_canShoot_12() { return static_cast<int32_t>(offsetof(Shooting_t3467275689, ___canShoot_12)); }
	inline bool get_canShoot_12() const { return ___canShoot_12; }
	inline bool* get_address_of_canShoot_12() { return &___canShoot_12; }
	inline void set_canShoot_12(bool value)
	{
		___canShoot_12 = value;
	}

	inline static int32_t get_offset_of_toggled_13() { return static_cast<int32_t>(offsetof(Shooting_t3467275689, ___toggled_13)); }
	inline bool get_toggled_13() const { return ___toggled_13; }
	inline bool* get_address_of_toggled_13() { return &___toggled_13; }
	inline void set_toggled_13(bool value)
	{
		___toggled_13 = value;
	}

	inline static int32_t get_offset_of_timeElapsed_14() { return static_cast<int32_t>(offsetof(Shooting_t3467275689, ___timeElapsed_14)); }
	inline float get_timeElapsed_14() const { return ___timeElapsed_14; }
	inline float* get_address_of_timeElapsed_14() { return &___timeElapsed_14; }
	inline void set_timeElapsed_14(float value)
	{
		___timeElapsed_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
