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

// UnityEngine.Animator
struct Animator_t69676727;
// UnityEngine.AI.NavMeshAgent
struct NavMeshAgent_t2761625415;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AgentScript
struct  AgentScript_t536016518  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Animator AgentScript::animator
	Animator_t69676727 * ___animator_2;
	// UnityEngine.AI.NavMeshAgent AgentScript::agent
	NavMeshAgent_t2761625415 * ___agent_3;
	// System.Single AgentScript::stateTimeElapsed
	float ___stateTimeElapsed_4;
	// UnityEngine.RaycastHit AgentScript::hitInfo
	RaycastHit_t87180320  ___hitInfo_5;
	// System.Boolean AgentScript::aiActive
	bool ___aiActive_6;
	// System.Boolean AgentScript::aiFinished
	bool ___aiFinished_7;

public:
	inline static int32_t get_offset_of_animator_2() { return static_cast<int32_t>(offsetof(AgentScript_t536016518, ___animator_2)); }
	inline Animator_t69676727 * get_animator_2() const { return ___animator_2; }
	inline Animator_t69676727 ** get_address_of_animator_2() { return &___animator_2; }
	inline void set_animator_2(Animator_t69676727 * value)
	{
		___animator_2 = value;
		Il2CppCodeGenWriteBarrier(&___animator_2, value);
	}

	inline static int32_t get_offset_of_agent_3() { return static_cast<int32_t>(offsetof(AgentScript_t536016518, ___agent_3)); }
	inline NavMeshAgent_t2761625415 * get_agent_3() const { return ___agent_3; }
	inline NavMeshAgent_t2761625415 ** get_address_of_agent_3() { return &___agent_3; }
	inline void set_agent_3(NavMeshAgent_t2761625415 * value)
	{
		___agent_3 = value;
		Il2CppCodeGenWriteBarrier(&___agent_3, value);
	}

	inline static int32_t get_offset_of_stateTimeElapsed_4() { return static_cast<int32_t>(offsetof(AgentScript_t536016518, ___stateTimeElapsed_4)); }
	inline float get_stateTimeElapsed_4() const { return ___stateTimeElapsed_4; }
	inline float* get_address_of_stateTimeElapsed_4() { return &___stateTimeElapsed_4; }
	inline void set_stateTimeElapsed_4(float value)
	{
		___stateTimeElapsed_4 = value;
	}

	inline static int32_t get_offset_of_hitInfo_5() { return static_cast<int32_t>(offsetof(AgentScript_t536016518, ___hitInfo_5)); }
	inline RaycastHit_t87180320  get_hitInfo_5() const { return ___hitInfo_5; }
	inline RaycastHit_t87180320 * get_address_of_hitInfo_5() { return &___hitInfo_5; }
	inline void set_hitInfo_5(RaycastHit_t87180320  value)
	{
		___hitInfo_5 = value;
	}

	inline static int32_t get_offset_of_aiActive_6() { return static_cast<int32_t>(offsetof(AgentScript_t536016518, ___aiActive_6)); }
	inline bool get_aiActive_6() const { return ___aiActive_6; }
	inline bool* get_address_of_aiActive_6() { return &___aiActive_6; }
	inline void set_aiActive_6(bool value)
	{
		___aiActive_6 = value;
	}

	inline static int32_t get_offset_of_aiFinished_7() { return static_cast<int32_t>(offsetof(AgentScript_t536016518, ___aiFinished_7)); }
	inline bool get_aiFinished_7() const { return ___aiFinished_7; }
	inline bool* get_address_of_aiFinished_7() { return &___aiFinished_7; }
	inline void set_aiFinished_7(bool value)
	{
		___aiFinished_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
