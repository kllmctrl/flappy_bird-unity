#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.AudioSource
struct AudioSource_t1135106623;
// UnityEngine.GUIStyle
struct GUIStyle_t1799908754;
// UnityEngine.AudioClip
struct AudioClip_t1932558630;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_t502193897;
// UnityEngine.Texture2D
struct Texture2D_t3542995729;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BatContral
struct  BatContral_t3854161798  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.AudioSource BatContral::source
	AudioSource_t1135106623 * ___source_2;
	// UnityEngine.GUIStyle BatContral::myStyle
	GUIStyle_t1799908754 * ___myStyle_3;
	// UnityEngine.AudioClip BatContral::fly
	AudioClip_t1932558630 * ___fly_4;
	// UnityEngine.AudioClip BatContral::point
	AudioClip_t1932558630 * ___point_5;
	// UnityEngine.AudioClip BatContral::die
	AudioClip_t1932558630 * ___die_6;
	// UnityEngine.Vector2 BatContral::force
	Vector2_t2243707579  ___force_7;
	// UnityEngine.Vector3 BatContral::initPos
	Vector3_t2243707580  ___initPos_8;
	// System.Int32 BatContral::score
	int32_t ___score_9;
	// UnityEngine.Rigidbody2D BatContral::body
	Rigidbody2D_t502193897 * ___body_10;
	// System.Boolean BatContral::isOver
	bool ___isOver_11;
	// UnityEngine.Texture2D BatContral::reStart
	Texture2D_t3542995729 * ___reStart_12;

public:
	inline static int32_t get_offset_of_source_2() { return static_cast<int32_t>(offsetof(BatContral_t3854161798, ___source_2)); }
	inline AudioSource_t1135106623 * get_source_2() const { return ___source_2; }
	inline AudioSource_t1135106623 ** get_address_of_source_2() { return &___source_2; }
	inline void set_source_2(AudioSource_t1135106623 * value)
	{
		___source_2 = value;
		Il2CppCodeGenWriteBarrier(&___source_2, value);
	}

	inline static int32_t get_offset_of_myStyle_3() { return static_cast<int32_t>(offsetof(BatContral_t3854161798, ___myStyle_3)); }
	inline GUIStyle_t1799908754 * get_myStyle_3() const { return ___myStyle_3; }
	inline GUIStyle_t1799908754 ** get_address_of_myStyle_3() { return &___myStyle_3; }
	inline void set_myStyle_3(GUIStyle_t1799908754 * value)
	{
		___myStyle_3 = value;
		Il2CppCodeGenWriteBarrier(&___myStyle_3, value);
	}

	inline static int32_t get_offset_of_fly_4() { return static_cast<int32_t>(offsetof(BatContral_t3854161798, ___fly_4)); }
	inline AudioClip_t1932558630 * get_fly_4() const { return ___fly_4; }
	inline AudioClip_t1932558630 ** get_address_of_fly_4() { return &___fly_4; }
	inline void set_fly_4(AudioClip_t1932558630 * value)
	{
		___fly_4 = value;
		Il2CppCodeGenWriteBarrier(&___fly_4, value);
	}

	inline static int32_t get_offset_of_point_5() { return static_cast<int32_t>(offsetof(BatContral_t3854161798, ___point_5)); }
	inline AudioClip_t1932558630 * get_point_5() const { return ___point_5; }
	inline AudioClip_t1932558630 ** get_address_of_point_5() { return &___point_5; }
	inline void set_point_5(AudioClip_t1932558630 * value)
	{
		___point_5 = value;
		Il2CppCodeGenWriteBarrier(&___point_5, value);
	}

	inline static int32_t get_offset_of_die_6() { return static_cast<int32_t>(offsetof(BatContral_t3854161798, ___die_6)); }
	inline AudioClip_t1932558630 * get_die_6() const { return ___die_6; }
	inline AudioClip_t1932558630 ** get_address_of_die_6() { return &___die_6; }
	inline void set_die_6(AudioClip_t1932558630 * value)
	{
		___die_6 = value;
		Il2CppCodeGenWriteBarrier(&___die_6, value);
	}

	inline static int32_t get_offset_of_force_7() { return static_cast<int32_t>(offsetof(BatContral_t3854161798, ___force_7)); }
	inline Vector2_t2243707579  get_force_7() const { return ___force_7; }
	inline Vector2_t2243707579 * get_address_of_force_7() { return &___force_7; }
	inline void set_force_7(Vector2_t2243707579  value)
	{
		___force_7 = value;
	}

	inline static int32_t get_offset_of_initPos_8() { return static_cast<int32_t>(offsetof(BatContral_t3854161798, ___initPos_8)); }
	inline Vector3_t2243707580  get_initPos_8() const { return ___initPos_8; }
	inline Vector3_t2243707580 * get_address_of_initPos_8() { return &___initPos_8; }
	inline void set_initPos_8(Vector3_t2243707580  value)
	{
		___initPos_8 = value;
	}

	inline static int32_t get_offset_of_score_9() { return static_cast<int32_t>(offsetof(BatContral_t3854161798, ___score_9)); }
	inline int32_t get_score_9() const { return ___score_9; }
	inline int32_t* get_address_of_score_9() { return &___score_9; }
	inline void set_score_9(int32_t value)
	{
		___score_9 = value;
	}

	inline static int32_t get_offset_of_body_10() { return static_cast<int32_t>(offsetof(BatContral_t3854161798, ___body_10)); }
	inline Rigidbody2D_t502193897 * get_body_10() const { return ___body_10; }
	inline Rigidbody2D_t502193897 ** get_address_of_body_10() { return &___body_10; }
	inline void set_body_10(Rigidbody2D_t502193897 * value)
	{
		___body_10 = value;
		Il2CppCodeGenWriteBarrier(&___body_10, value);
	}

	inline static int32_t get_offset_of_isOver_11() { return static_cast<int32_t>(offsetof(BatContral_t3854161798, ___isOver_11)); }
	inline bool get_isOver_11() const { return ___isOver_11; }
	inline bool* get_address_of_isOver_11() { return &___isOver_11; }
	inline void set_isOver_11(bool value)
	{
		___isOver_11 = value;
	}

	inline static int32_t get_offset_of_reStart_12() { return static_cast<int32_t>(offsetof(BatContral_t3854161798, ___reStart_12)); }
	inline Texture2D_t3542995729 * get_reStart_12() const { return ___reStart_12; }
	inline Texture2D_t3542995729 ** get_address_of_reStart_12() { return &___reStart_12; }
	inline void set_reStart_12(Texture2D_t3542995729 * value)
	{
		___reStart_12 = value;
		Il2CppCodeGenWriteBarrier(&___reStart_12, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
