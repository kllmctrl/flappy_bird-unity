#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Sprite[]
struct SpriteU5BU5D_t3359083662;
// UnityEngine.SpriteRenderer
struct SpriteRenderer_t1209076198;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BatAnimator
struct  BatAnimator_t2548155946  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Sprite[] BatAnimator::Sprites
	SpriteU5BU5D_t3359083662* ___Sprites_2;
	// System.Single BatAnimator::framespPerSec
	float ___framespPerSec_3;
	// UnityEngine.SpriteRenderer BatAnimator::spriterender
	SpriteRenderer_t1209076198 * ___spriterender_4;

public:
	inline static int32_t get_offset_of_Sprites_2() { return static_cast<int32_t>(offsetof(BatAnimator_t2548155946, ___Sprites_2)); }
	inline SpriteU5BU5D_t3359083662* get_Sprites_2() const { return ___Sprites_2; }
	inline SpriteU5BU5D_t3359083662** get_address_of_Sprites_2() { return &___Sprites_2; }
	inline void set_Sprites_2(SpriteU5BU5D_t3359083662* value)
	{
		___Sprites_2 = value;
		Il2CppCodeGenWriteBarrier(&___Sprites_2, value);
	}

	inline static int32_t get_offset_of_framespPerSec_3() { return static_cast<int32_t>(offsetof(BatAnimator_t2548155946, ___framespPerSec_3)); }
	inline float get_framespPerSec_3() const { return ___framespPerSec_3; }
	inline float* get_address_of_framespPerSec_3() { return &___framespPerSec_3; }
	inline void set_framespPerSec_3(float value)
	{
		___framespPerSec_3 = value;
	}

	inline static int32_t get_offset_of_spriterender_4() { return static_cast<int32_t>(offsetof(BatAnimator_t2548155946, ___spriterender_4)); }
	inline SpriteRenderer_t1209076198 * get_spriterender_4() const { return ___spriterender_4; }
	inline SpriteRenderer_t1209076198 ** get_address_of_spriterender_4() { return &___spriterender_4; }
	inline void set_spriterender_4(SpriteRenderer_t1209076198 * value)
	{
		___spriterender_4 = value;
		Il2CppCodeGenWriteBarrier(&___spriterender_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
