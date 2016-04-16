#ifndef __SIM_CORE_DECL_H__
#define __SIM_CORE_DECL_H__

#include "sim_core_config.h"
#if CONFIG_TINY44
extern avr_kind_t tiny44;
#endif
#if CONFIG_MEGA164
extern avr_kind_t mega164;
#endif
#if CONFIG_MEGA1280
extern avr_kind_t mega1280;
#endif
#if CONFIG_90USB162
extern avr_kind_t usb162;
#endif
#if CONFIG_TINY85
extern avr_kind_t tiny85;
#endif
#if CONFIG_TINY84
extern avr_kind_t tiny84;
#endif
#if CONFIG_TINY45
extern avr_kind_t tiny45;
#endif
#if CONFIG_TINY25
extern avr_kind_t tiny25;
#endif
#if CONFIG_TINY2313
extern avr_kind_t tiny2313;
#endif
#if CONFIG_MEGA128RFA1
extern avr_kind_t mega128rfa1;
#endif
#if CONFIG_MEGA1284
extern avr_kind_t mega1284;
#endif
#if CONFIG_MEGA328
extern avr_kind_t mega328;
#endif
#if CONFIG_MEGA644
extern avr_kind_t mega644;
#endif
#if CONFIG_MEGA16M1
extern avr_kind_t mega16m1;
#endif
#if CONFIG_MEGA32
extern avr_kind_t mega32;
#endif
#if CONFIG_MEGA48
extern avr_kind_t mega48;
#endif
#if CONFIG_MEGA2560
extern avr_kind_t mega2560;
#endif
#if CONFIG_MEGA16
extern avr_kind_t mega16;
#endif
#if CONFIG_MEGA168
extern avr_kind_t mega168;
#endif
#if CONFIG_MEGA169
extern avr_kind_t mega169p;
#endif
#if CONFIG_MEGA324
extern avr_kind_t mega324;
#endif
#if CONFIG_MEGA128
extern avr_kind_t mega128;
#endif
#if CONFIG_MEGA8
extern avr_kind_t mega8;
#endif
#if CONFIG_TINY13
extern avr_kind_t tiny13;
#endif
#if CONFIG_MEGA88
extern avr_kind_t mega88;
#endif
#if CONFIG_MEGA1281
extern avr_kind_t mega1281;
#endif
#if CONFIG_TINY24
extern avr_kind_t tiny24;
#endif

extern avr_kind_t * avr_kind[];
#ifdef AVR_KIND_DECL
avr_kind_t * avr_kind[] = {
#if CONFIG_TINY44
	&tiny44,
#endif
#if CONFIG_MEGA164
	&mega164,
#endif
#if CONFIG_MEGA1280
	&mega1280,
#endif
#if CONFIG_90USB162
	&usb162,
#endif
#if CONFIG_TINY85
	&tiny85,
#endif
#if CONFIG_TINY84
	&tiny84,
#endif
#if CONFIG_TINY45
	&tiny45,
#endif
#if CONFIG_TINY25
	&tiny25,
#endif
#if CONFIG_TINY2313
	&tiny2313,
#endif
#if CONFIG_MEGA128RFA1
	&mega128rfa1,
#endif
#if CONFIG_MEGA1284
	&mega1284,
#endif
#if CONFIG_MEGA328
	&mega328,
#endif
#if CONFIG_MEGA644
	&mega644,
#endif
#if CONFIG_MEGA16M1
	&mega16m1,
#endif
#if CONFIG_MEGA32
	&mega32,
#endif
#if CONFIG_MEGA48
	&mega48,
#endif
#if CONFIG_MEGA2560
	&mega2560,
#endif
#if CONFIG_MEGA16
	&mega16,
#endif
#if CONFIG_MEGA168
	&mega168,
#endif
#if CONFIG_MEGA169
	&mega169p,
#endif
#if CONFIG_MEGA324
	&mega324,
#endif
#if CONFIG_MEGA128
	&mega128,
#endif
#if CONFIG_MEGA8
	&mega8,
#endif
#if CONFIG_TINY13
	&tiny13,
#endif
#if CONFIG_MEGA88
	&mega88,
#endif
#if CONFIG_MEGA1281
	&mega1281,
#endif
#if CONFIG_TINY24
	&tiny24,
#endif
	NULL
};
#endif
#endif
