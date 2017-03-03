#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.Sprite[]
struct SpriteU5BU5D_t3359083662;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// StoreBoard
struct  StoreBoard_t1992037695  : public MonoBehaviour_t1158329972
{
public:
	// System.Int32 StoreBoard::sco
	int32_t ___sco_2;
	// UnityEngine.GameObject StoreBoard::BAT
	GameObject_t1756533147 * ___BAT_3;
	// UnityEngine.GameObject StoreBoard::NumSprite1
	GameObject_t1756533147 * ___NumSprite1_4;
	// UnityEngine.GameObject StoreBoard::NumSprite2
	GameObject_t1756533147 * ___NumSprite2_5;
	// UnityEngine.Sprite[] StoreBoard::Num
	SpriteU5BU5D_t3359083662* ___Num_6;

public:
	inline static int32_t get_offset_of_sco_2() { return static_cast<int32_t>(offsetof(StoreBoard_t1992037695, ___sco_2)); }
	inline int32_t get_sco_2() const { return ___sco_2; }
	inline int32_t* get_address_of_sco_2() { return &___sco_2; }
	inline void set_sco_2(int32_t value)
	{
		___sco_2 = value;
	}

	inline static int32_t get_offset_of_BAT_3() { return static_cast<int32_t>(offsetof(StoreBoard_t1992037695, ___BAT_3)); }
	inline GameObject_t1756533147 * get_BAT_3() const { return ___BAT_3; }
	inline GameObject_t1756533147 ** get_address_of_BAT_3() { return &___BAT_3; }
	inline void set_BAT_3(GameObject_t1756533147 * value)
	{
		___BAT_3 = value;
		Il2CppCodeGenWriteBarrier(&___BAT_3, value);
	}

	inline static int32_t get_offset_of_NumSprite1_4() { return static_cast<int32_t>(offsetof(StoreBoard_t1992037695, ___NumSprite1_4)); }
	inline GameObject_t1756533147 * get_NumSprite1_4() const { return ___NumSprite1_4; }
	inline GameObject_t1756533147 ** get_address_of_NumSprite1_4() { return &___NumSprite1_4; }
	inline void set_NumSprite1_4(GameObject_t1756533147 * value)
	{
		___NumSprite1_4 = value;
		Il2CppCodeGenWriteBarrier(&___NumSprite1_4, value);
	}

	inline static int32_t get_offset_of_NumSprite2_5() { return static_cast<int32_t>(offsetof(StoreBoard_t1992037695, ___NumSprite2_5)); }
	inline GameObject_t1756533147 * get_NumSprite2_5() const { return ___NumSprite2_5; }
	inline GameObject_t1756533147 ** get_address_of_NumSprite2_5() { return &___NumSprite2_5; }
	inline void set_NumSprite2_5(GameObject_t1756533147 * value)
	{
		___NumSprite2_5 = value;
		Il2CppCodeGenWriteBarrier(&___NumSprite2_5, value);
	}

	inline static int32_t get_offset_of_Num_6() { return static_cast<int32_t>(offsetof(StoreBoard_t1992037695, ___Num_6)); }
	inline SpriteU5BU5D_t3359083662* get_Num_6() const { return ___Num_6; }
	inline SpriteU5BU5D_t3359083662** get_address_of_Num_6() { return &___Num_6; }
	inline void set_Num_6(SpriteU5BU5D_t3359083662* value)
	{
		___Num_6 = value;
		Il2CppCodeGenWriteBarrier(&___Num_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
