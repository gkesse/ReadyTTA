//===============================================
#ifndef _GTypeDef_
#define _GTypeDef_
//===============================================
#include <at89s53.h>
//===============================================
typedef unsigned char uchar;
typedef unsigned int uint;
typedef unsigned long ulong;
//===============================================
#ifdef GSDCC /* SDCC C Compiler	*/
typedef __bit GBit; 
#else /* Keil �Vision C Compiler */
typedef bit GBit; 
#endif
//===============================================
#define OSC_FREQ (11059200)
#define OSC_PER_INST (12)
//===============================================
#define FALSE (0)
#define TRUE (!FALSE)
//===============================================
#define LOCKED (1)
#define UNLOCKED (!LOCKED)
//===============================================
#define LED_OFF (1)
#define LED_ON (!LED_OFF)
//===============================================
#define WDOG_OFF (0)
#define WDOG_ON (!WDOG_OFF)
//===============================================
#define INTERRUPT_TIMER_T0 1
#define INTERRUPT_TIMER_T1 3
#define INTERRUPT_TIMER_T2 5
//===============================================
#define LIGHT_OFF (1)
#define LIGHT_ON (!LIGHT_OFF)
#define LIGHT_GREEN_DURATION (3)
#define LIGHT_AMBER_DURATION (2)
#define LIGHT_RED_RED_DURATION (1)
#define LIGHT_RED_DURATION (LIGHT_GREEN_DURATION)
#define LIGHT_RED_AMBER_DURATION (LIGHT_AMBER_DURATION)
#define LIGHT_RED_RED_1_DURATION (LIGHT_RED_RED_DURATION)
#define LIGHT_RED_RED_2_DURATION (LIGHT_RED_RED_DURATION)
//===============================================
#endif
//===============================================
