#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3057952154;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t1172311765;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BarrierMove
struct  BarrierMove_t2833612758  : public MonoBehaviour_t1158329972
{
public:
	// System.Single BarrierMove::moveSpeed
	float ___moveSpeed_2;
	// UnityEngine.Vector3 BarrierMove::Init_pos
	Vector3_t2243707580  ___Init_pos_3;
	// UnityEngine.GameObject[] BarrierMove::barrier
	GameObjectU5BU5D_t3057952154* ___barrier_4;
	// UnityEngine.Vector3[] BarrierMove::load_pos
	Vector3U5BU5D_t1172311765* ___load_pos_5;

public:
	inline static int32_t get_offset_of_moveSpeed_2() { return static_cast<int32_t>(offsetof(BarrierMove_t2833612758, ___moveSpeed_2)); }
	inline float get_moveSpeed_2() const { return ___moveSpeed_2; }
	inline float* get_address_of_moveSpeed_2() { return &___moveSpeed_2; }
	inline void set_moveSpeed_2(float value)
	{
		___moveSpeed_2 = value;
	}

	inline static int32_t get_offset_of_Init_pos_3() { return static_cast<int32_t>(offsetof(BarrierMove_t2833612758, ___Init_pos_3)); }
	inline Vector3_t2243707580  get_Init_pos_3() const { return ___Init_pos_3; }
	inline Vector3_t2243707580 * get_address_of_Init_pos_3() { return &___Init_pos_3; }
	inline void set_Init_pos_3(Vector3_t2243707580  value)
	{
		___Init_pos_3 = value;
	}

	inline static int32_t get_offset_of_barrier_4() { return static_cast<int32_t>(offsetof(BarrierMove_t2833612758, ___barrier_4)); }
	inline GameObjectU5BU5D_t3057952154* get_barrier_4() const { return ___barrier_4; }
	inline GameObjectU5BU5D_t3057952154** get_address_of_barrier_4() { return &___barrier_4; }
	inline void set_barrier_4(GameObjectU5BU5D_t3057952154* value)
	{
		___barrier_4 = value;
		Il2CppCodeGenWriteBarrier(&___barrier_4, value);
	}

	inline static int32_t get_offset_of_load_pos_5() { return static_cast<int32_t>(offsetof(BarrierMove_t2833612758, ___load_pos_5)); }
	inline Vector3U5BU5D_t1172311765* get_load_pos_5() const { return ___load_pos_5; }
	inline Vector3U5BU5D_t1172311765** get_address_of_load_pos_5() { return &___load_pos_5; }
	inline void set_load_pos_5(Vector3U5BU5D_t1172311765* value)
	{
		___load_pos_5 = value;
		Il2CppCodeGenWriteBarrier(&___load_pos_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
