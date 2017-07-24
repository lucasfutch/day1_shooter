#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "AssemblyU2DCSharp_MenuScript_MenuStates1873875456.h"

// UnityEngine.GameObject
struct GameObject_t1756533147;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MenuScript
struct  MenuScript_t1134262648  : public MonoBehaviour_t1158329972
{
public:
	// MenuScript/MenuStates MenuScript::currentState
	int32_t ___currentState_2;
	// UnityEngine.GameObject MenuScript::mainMenu
	GameObject_t1756533147 * ___mainMenu_3;
	// UnityEngine.GameObject MenuScript::returnMenu
	GameObject_t1756533147 * ___returnMenu_4;

public:
	inline static int32_t get_offset_of_currentState_2() { return static_cast<int32_t>(offsetof(MenuScript_t1134262648, ___currentState_2)); }
	inline int32_t get_currentState_2() const { return ___currentState_2; }
	inline int32_t* get_address_of_currentState_2() { return &___currentState_2; }
	inline void set_currentState_2(int32_t value)
	{
		___currentState_2 = value;
	}

	inline static int32_t get_offset_of_mainMenu_3() { return static_cast<int32_t>(offsetof(MenuScript_t1134262648, ___mainMenu_3)); }
	inline GameObject_t1756533147 * get_mainMenu_3() const { return ___mainMenu_3; }
	inline GameObject_t1756533147 ** get_address_of_mainMenu_3() { return &___mainMenu_3; }
	inline void set_mainMenu_3(GameObject_t1756533147 * value)
	{
		___mainMenu_3 = value;
		Il2CppCodeGenWriteBarrier(&___mainMenu_3, value);
	}

	inline static int32_t get_offset_of_returnMenu_4() { return static_cast<int32_t>(offsetof(MenuScript_t1134262648, ___returnMenu_4)); }
	inline GameObject_t1756533147 * get_returnMenu_4() const { return ___returnMenu_4; }
	inline GameObject_t1756533147 ** get_address_of_returnMenu_4() { return &___returnMenu_4; }
	inline void set_returnMenu_4(GameObject_t1756533147 * value)
	{
		___returnMenu_4 = value;
		Il2CppCodeGenWriteBarrier(&___returnMenu_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
