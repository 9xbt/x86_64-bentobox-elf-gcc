/* { dg-final { check-function-bodies "**" "" "-DCHECK_ASM" } } */

#include "test_sve_acle.h"

/*
** reinterpret_u64_mf8_tied1:
**	ret
*/
TEST_DUAL_Z_REV (reinterpret_u64_mf8_tied1, svuint64_t, svmfloat8_t,
		 z0_res = svreinterpret_u64_mf8 (z0),
		 z0_res = svreinterpret_u64 (z0))

/*
** reinterpret_u64_mf8_untied:
**	mov	z0\.d, z4\.d
**	ret
*/
TEST_DUAL_Z (reinterpret_u64_mf8_untied, svuint64_t, svmfloat8_t,
	     z0 = svreinterpret_u64_mf8 (z4),
	     z0 = svreinterpret_u64 (z4))

/*
** reinterpret_u64_bf16_tied1:
**	ret
*/
TEST_DUAL_Z_REV (reinterpret_u64_bf16_tied1, svuint64_t, svbfloat16_t,
		 z0_res = svreinterpret_u64_bf16 (z0),
		 z0_res = svreinterpret_u64 (z0))

/*
** reinterpret_u64_bf16_untied:
**	mov	z0\.d, z4\.d
**	ret
*/
TEST_DUAL_Z (reinterpret_u64_bf16_untied, svuint64_t, svbfloat16_t,
	     z0 = svreinterpret_u64_bf16 (z4),
	     z0 = svreinterpret_u64 (z4))

/*
** reinterpret_u64_f16_tied1:
**	ret
*/
TEST_DUAL_Z_REV (reinterpret_u64_f16_tied1, svuint64_t, svfloat16_t,
		 z0_res = svreinterpret_u64_f16 (z0),
		 z0_res = svreinterpret_u64 (z0))

/*
** reinterpret_u64_f16_untied:
**	mov	z0\.d, z4\.d
**	ret
*/
TEST_DUAL_Z (reinterpret_u64_f16_untied, svuint64_t, svfloat16_t,
	     z0 = svreinterpret_u64_f16 (z4),
	     z0 = svreinterpret_u64 (z4))

/*
** reinterpret_u64_f32_tied1:
**	ret
*/
TEST_DUAL_Z_REV (reinterpret_u64_f32_tied1, svuint64_t, svfloat32_t,
		 z0_res = svreinterpret_u64_f32 (z0),
		 z0_res = svreinterpret_u64 (z0))

/*
** reinterpret_u64_f32_untied:
**	mov	z0\.d, z4\.d
**	ret
*/
TEST_DUAL_Z (reinterpret_u64_f32_untied, svuint64_t, svfloat32_t,
	     z0 = svreinterpret_u64_f32 (z4),
	     z0 = svreinterpret_u64 (z4))

/*
** reinterpret_u64_f64_tied1:
**	ret
*/
TEST_DUAL_Z_REV (reinterpret_u64_f64_tied1, svuint64_t, svfloat64_t,
		 z0_res = svreinterpret_u64_f64 (z0),
		 z0_res = svreinterpret_u64 (z0))

/*
** reinterpret_u64_f64_untied:
**	mov	z0\.d, z4\.d
**	ret
*/
TEST_DUAL_Z (reinterpret_u64_f64_untied, svuint64_t, svfloat64_t,
	     z0 = svreinterpret_u64_f64 (z4),
	     z0 = svreinterpret_u64 (z4))

/*
** reinterpret_u64_s8_tied1:
**	ret
*/
TEST_DUAL_Z_REV (reinterpret_u64_s8_tied1, svuint64_t, svint8_t,
		 z0_res = svreinterpret_u64_s8 (z0),
		 z0_res = svreinterpret_u64 (z0))

/*
** reinterpret_u64_s8_untied:
**	mov	z0\.d, z4\.d
**	ret
*/
TEST_DUAL_Z (reinterpret_u64_s8_untied, svuint64_t, svint8_t,
	     z0 = svreinterpret_u64_s8 (z4),
	     z0 = svreinterpret_u64 (z4))

/*
** reinterpret_u64_s16_tied1:
**	ret
*/
TEST_DUAL_Z_REV (reinterpret_u64_s16_tied1, svuint64_t, svint16_t,
		 z0_res = svreinterpret_u64_s16 (z0),
		 z0_res = svreinterpret_u64 (z0))

/*
** reinterpret_u64_s16_untied:
**	mov	z0\.d, z4\.d
**	ret
*/
TEST_DUAL_Z (reinterpret_u64_s16_untied, svuint64_t, svint16_t,
	     z0 = svreinterpret_u64_s16 (z4),
	     z0 = svreinterpret_u64 (z4))

/*
** reinterpret_u64_s32_tied1:
**	ret
*/
TEST_DUAL_Z_REV (reinterpret_u64_s32_tied1, svuint64_t, svint32_t,
		 z0_res = svreinterpret_u64_s32 (z0),
		 z0_res = svreinterpret_u64 (z0))

/*
** reinterpret_u64_s32_untied:
**	mov	z0\.d, z4\.d
**	ret
*/
TEST_DUAL_Z (reinterpret_u64_s32_untied, svuint64_t, svint32_t,
	     z0 = svreinterpret_u64_s32 (z4),
	     z0 = svreinterpret_u64 (z4))

/*
** reinterpret_u64_s64_tied1:
**	ret
*/
TEST_DUAL_Z_REV (reinterpret_u64_s64_tied1, svuint64_t, svint64_t,
		 z0_res = svreinterpret_u64_s64 (z0),
		 z0_res = svreinterpret_u64 (z0))

/*
** reinterpret_u64_s64_untied:
**	mov	z0\.d, z4\.d
**	ret
*/
TEST_DUAL_Z (reinterpret_u64_s64_untied, svuint64_t, svint64_t,
	     z0 = svreinterpret_u64_s64 (z4),
	     z0 = svreinterpret_u64 (z4))

/*
** reinterpret_u64_u8_tied1:
**	ret
*/
TEST_DUAL_Z_REV (reinterpret_u64_u8_tied1, svuint64_t, svuint8_t,
		 z0_res = svreinterpret_u64_u8 (z0),
		 z0_res = svreinterpret_u64 (z0))

/*
** reinterpret_u64_u8_untied:
**	mov	z0\.d, z4\.d
**	ret
*/
TEST_DUAL_Z (reinterpret_u64_u8_untied, svuint64_t, svuint8_t,
	     z0 = svreinterpret_u64_u8 (z4),
	     z0 = svreinterpret_u64 (z4))

/*
** reinterpret_u64_u16_tied1:
**	ret
*/
TEST_DUAL_Z_REV (reinterpret_u64_u16_tied1, svuint64_t, svuint16_t,
		 z0_res = svreinterpret_u64_u16 (z0),
		 z0_res = svreinterpret_u64 (z0))

/*
** reinterpret_u64_u16_untied:
**	mov	z0\.d, z4\.d
**	ret
*/
TEST_DUAL_Z (reinterpret_u64_u16_untied, svuint64_t, svuint16_t,
	     z0 = svreinterpret_u64_u16 (z4),
	     z0 = svreinterpret_u64 (z4))

/*
** reinterpret_u64_u32_tied1:
**	ret
*/
TEST_DUAL_Z_REV (reinterpret_u64_u32_tied1, svuint64_t, svuint32_t,
		 z0_res = svreinterpret_u64_u32 (z0),
		 z0_res = svreinterpret_u64 (z0))

/*
** reinterpret_u64_u32_untied:
**	mov	z0\.d, z4\.d
**	ret
*/
TEST_DUAL_Z (reinterpret_u64_u32_untied, svuint64_t, svuint32_t,
	     z0 = svreinterpret_u64_u32 (z4),
	     z0 = svreinterpret_u64 (z4))

/*
** reinterpret_u64_u64_tied1:
**	ret
*/
TEST_DUAL_Z_REV (reinterpret_u64_u64_tied1, svuint64_t, svuint64_t,
		 z0_res = svreinterpret_u64_u64 (z0),
		 z0_res = svreinterpret_u64 (z0))

/*
** reinterpret_u64_u64_untied:
**	mov	z0\.d, z4\.d
**	ret
*/
TEST_DUAL_Z (reinterpret_u64_u64_untied, svuint64_t, svuint64_t,
	     z0 = svreinterpret_u64_u64 (z4),
	     z0 = svreinterpret_u64 (z4))

/*
** reinterpret_u64_bf16_x2_tied1:
**	ret
*/
TEST_DUAL_Z_REV (reinterpret_u64_bf16_x2_tied1, svuint64x2_t, svbfloat16x2_t,
		 z0_res = svreinterpret_u64_bf16_x2 (z0),
		 z0_res = svreinterpret_u64 (z0))

/*
** reinterpret_u64_f32_x2_untied:
** (
**	mov	z0\.d, z4\.d
**	mov	z1\.d, z5\.d
** |
**	mov	z0\.d, z4\.d
**	mov	z1\.d, z5\.d
** )
**	ret
*/
TEST_DUAL_XN (reinterpret_u64_f32_x2_untied, svuint64x2_t, svfloat32x2_t, z0,
	      svreinterpret_u64_f32_x2 (z4),
	      svreinterpret_u64 (z4))

/*
** reinterpret_u64_mf8_x3_untied:
**	mov	(z18|z19|z20)\.d, (z23|z24|z25)\.d
**	mov	(z18|z19|z20)\.d, (z23|z24|z25)\.d
**	mov	(z18|z19|z20)\.d, (z23|z24|z25)\.d
**	ret
*/
TEST_DUAL_XN (reinterpret_u64_mf8_x3_untied, svuint64x3_t, svmfloat8x3_t, z18,
	      svreinterpret_u64_mf8_x3 (z23),
	      svreinterpret_u64 (z23))

/*
** reinterpret_u64_s64_x3_tied1:
**	ret
*/
TEST_DUAL_Z_REV (reinterpret_u64_s64_x3_tied1, svuint64x3_t, svint64x3_t,
		 z0_res = svreinterpret_u64_s64_x3 (z0),
		 z0_res = svreinterpret_u64 (z0))

/*
** reinterpret_u64_u8_x3_untied:
**	mov	(z18|z19|z20)\.d, (z23|z24|z25)\.d
**	mov	(z18|z19|z20)\.d, (z23|z24|z25)\.d
**	mov	(z18|z19|z20)\.d, (z23|z24|z25)\.d
**	ret
*/
TEST_DUAL_XN (reinterpret_u64_u8_x3_untied, svuint64x3_t, svuint8x3_t, z18,
	      svreinterpret_u64_u8_x3 (z23),
	      svreinterpret_u64 (z23))

/*
** reinterpret_u64_u32_x4_tied1:
**	ret
*/
TEST_DUAL_Z_REV (reinterpret_u64_u32_x4_tied1, svuint64x4_t, svuint32x4_t,
		 z0_res = svreinterpret_u64_u32_x4 (z0),
		 z0_res = svreinterpret_u64 (z0))

/*
** reinterpret_u64_f64_x4_untied:
**	mov	(z28|z29|z30|z31)\.d, z[4-7]\.d
**	mov	(z28|z29|z30|z31)\.d, z[4-7]\.d
**	mov	(z28|z29|z30|z31)\.d, z[4-7]\.d
**	mov	(z28|z29|z30|z31)\.d, z[4-7]\.d
**	ret
*/
TEST_DUAL_XN (reinterpret_u64_f64_x4_untied, svuint64x4_t, svfloat64x4_t, z28,
	      svreinterpret_u64_f64_x4 (z4),
	      svreinterpret_u64 (z4))
