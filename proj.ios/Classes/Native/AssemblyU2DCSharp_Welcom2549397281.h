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

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Welcom
struct  Welcom_t2549397281  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Texture2D Welcom::title
	Texture2D_t3542995729 * ___title_2;
	// UnityEngine.Texture2D Welcom::begin
	Texture2D_t3542995729 * ___begin_3;
	// UnityEngine.GUIStyle Welcom::myStyle
	GUIStyle_t1799908754 * ___myStyle_4;

public:
	inline static int32_t get_offset_of_title_2() { return static_cast<int32_t>(offsetof(Welcom_t2549397281, ___title_2)); }
	inline Texture2D_t3542995729 * get_title_2() const { return ___title_2; }
	inline Texture2D_t3542995729 ** get_address_of_title_2() { return &___title_2; }
	inline void set_title_2(Texture2D_t3542995729 * value)
	{
		___title_2 = value;
		Il2CppCodeGenWriteBarrier(&___title_2, value);
	}

	inline static int32_t get_offset_of_begin_3() { return static_cast<int32_t>(offsetof(Welcom_t2549397281, ___begin_3)); }
	inline Texture2D_t3542995729 * get_begin_3() const { return ___begin_3; }
	inline Texture2D_t3542995729 ** get_address_of_begin_3() { return &___begin_3; }
	inline void set_begin_3(Texture2D_t3542995729 * value)
	{
		___begin_3 = value;
		Il2CppCodeGenWriteBarrier(&___begin_3, value);
	}

	inline static int32_t get_offset_of_myStyle_4() { return static_cast<int32_t>(offsetof(Welcom_t2549397281, ___myStyle_4)); }
	inline GUIStyle_t1799908754 * get_myStyle_4() const { return ___myStyle_4; }
	inline GUIStyle_t1799908754 ** get_address_of_myStyle_4() { return &___myStyle_4; }
	inline void set_myStyle_4(GUIStyle_t1799908754 * value)
	{
		___myStyle_4 = value;
		Il2CppCodeGenWriteBarrier(&___myStyle_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
