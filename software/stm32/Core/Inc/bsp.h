#ifndef __BSP_H_
#define __BSP_H_

#ifdef __cplusplus
extern "C" {
#endif

#include "main.h"

int TCRT_READ();

int Infr_READ();

void LED1_ON();
void LED1_OFF();
void LED1_TOGGLE();
void LED2_ON();
void LED2_OFF();
void LED2_TOGGLE();

#ifdef __cplusplus
}
#endif
#endif