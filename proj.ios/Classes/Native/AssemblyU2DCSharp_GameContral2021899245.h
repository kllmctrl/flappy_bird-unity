#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Texture2D
struct Texture2D_t3542995729;
// UnityEngine.GUIStyle
struct GUIStyle_t1799908754;
// UnityEngine.GameObject
struct GameObject_t1756533147;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameContral
struct  GameContral_t2021899245  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Texture2D GameContral::reStart
	Texture2D_t3542995729 * ___reStart_2;
	// UnityEngine.Texture2D GameContral::exit
	Texture2D_t3542995729 * ___exit_3;
	// System.Boolean GameContral::isOver
	bool ___isOver_4;
	// UnityEngine.GUIStyle GameContral::myStyle
	GUIStyle_t1799908754 * ___myStyle_5;
	// UnityEngine.GameObject GameContral::BAT
	GameObject_t1756533147 * ___BAT_6;

public:
	inline static int32_t get_offset_of_reStart_2() { return static_cast<int32_t>(offsetof(GameContral_t2021899245, ___reStart_2)); }
	inline Texture2D_t3542995729 * get_reStart_2() const { return ___reStart_2; }
	inline Texture2D_t3542995729 ** get_address_of_reStart_2() { return &___reStart_2; }
	inline void set_reStart_2(Texture2D_t3542995729 * value)
	{
		___reStart_2 = value;
		Il2CppCodeGenWriteBarrier(&___reStart_2, value);
	}

	inline static int32_t get_offset_of_exit_3() { return static_cast<int32_t>(offsetof(GameContral_t2021899245, ___exit_3)); }
	inline Texture2D_t3542995729 * get_exit_3() const { return ___exit_3; }
	inline Texture2D_t3542995729 ** get_address_of_exit_3() { return &___exit_3; }
	inline void set_exit_3(Texture2D_t3542995729 * value)
	{
		___exit_3 = value;
		Il2CppCodeGenWriteBarrier(&___exit_3, value);
	}

	inline static int32_t get_offset_of_isOver_4() { return static_cast<int32_t>(offsetof(GameContral_t2021899245, ___isOver_4)); }
	inline bool get_isOver_4() const { return ___isOver_4; }
	inline bool* get_address_of_isOver_4() { return &___isOver_4; }
	inline void set_isOver_4(bool value)
	{
		___isOver_4 = value;
	}

	inline static int32_t get_offset_of_myStyle_5() { return static_cast<int32_t>(offsetof(GameContral_t2021899245, ___myStyle_5)); }
	inline GUIStyle_t1799908754 * get_myStyle_5() const { return ___myStyle_5; }
	inline GUIStyle_t1799908754 ** get_address_of_myStyle_5() { return &___myStyle_5; }
	inline void set_myStyle_5(GUIStyle_t1799908754 * value)
	{
		___myStyle_5 = value;
		Il2CppCodeGenWriteBarrier(&___myStyle_5, value);
	}

	inline static int32_t get_offset_of_BAT_6() { return static_cast<int32_t>(offsetof(GameContral_t2021899245, ___BAT_6)); }
	inline GameObject_t1756533147 * get_BAT_6() const { return ___BAT_6; }
	inline GameObject_t1756533147 ** get_address_of_BAT_6() { return &___BAT_6; }
	inline void set_BAT_6(GameObject_t1756533147 * value)
	{
		___BAT_6 = value;
		Il2CppCodeGenWriteBarrier(&___BAT_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
