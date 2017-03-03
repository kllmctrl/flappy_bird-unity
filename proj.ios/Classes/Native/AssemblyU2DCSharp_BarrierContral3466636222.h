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

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BarrierContral
struct  BarrierContral_t3466636222  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject[] BarrierContral::zhuzi
	GameObjectU5BU5D_t3057952154* ___zhuzi_2;
	// UnityEngine.Vector3 BarrierContral::positionBuffer
	Vector3_t2243707580  ___positionBuffer_3;
	// System.Single BarrierContral::down
	float ___down_4;
	// System.Single BarrierContral::upper
	float ___upper_5;

public:
	inline static int32_t get_offset_of_zhuzi_2() { return static_cast<int32_t>(offsetof(BarrierContral_t3466636222, ___zhuzi_2)); }
	inline GameObjectU5BU5D_t3057952154* get_zhuzi_2() const { return ___zhuzi_2; }
	inline GameObjectU5BU5D_t3057952154** get_address_of_zhuzi_2() { return &___zhuzi_2; }
	inline void set_zhuzi_2(GameObjectU5BU5D_t3057952154* value)
	{
		___zhuzi_2 = value;
		Il2CppCodeGenWriteBarrier(&___zhuzi_2, value);
	}

	inline static int32_t get_offset_of_positionBuffer_3() { return static_cast<int32_t>(offsetof(BarrierContral_t3466636222, ___positionBuffer_3)); }
	inline Vector3_t2243707580  get_positionBuffer_3() const { return ___positionBuffer_3; }
	inline Vector3_t2243707580 * get_address_of_positionBuffer_3() { return &___positionBuffer_3; }
	inline void set_positionBuffer_3(Vector3_t2243707580  value)
	{
		___positionBuffer_3 = value;
	}

	inline static int32_t get_offset_of_down_4() { return static_cast<int32_t>(offsetof(BarrierContral_t3466636222, ___down_4)); }
	inline float get_down_4() const { return ___down_4; }
	inline float* get_address_of_down_4() { return &___down_4; }
	inline void set_down_4(float value)
	{
		___down_4 = value;
	}

	inline static int32_t get_offset_of_upper_5() { return static_cast<int32_t>(offsetof(BarrierContral_t3466636222, ___upper_5)); }
	inline float get_upper_5() const { return ___upper_5; }
	inline float* get_address_of_upper_5() { return &___upper_5; }
	inline void set_upper_5(float value)
	{
		___upper_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
