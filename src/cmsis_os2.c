/*
 * @file    cmsis_os2.c
 * @author  Frederic Pillon <frederic.pillon@st.com> for STMicroelectronics.
 * @brief   Include source of FreeRTOS portable layer file to match Arduino library format
 */
#include "FreeRTOS.h"

/* Fix SVCall_IRQn not defined on STM32L0xx, STM32L1xx, and STM32F0 devices */
#if !defined(SVCall_IRQn)
#define SVCall_IRQn (IRQn_Type) -5 /* SVCall handler name is not the same for CM0 and for all other CMx */
#endif

#include "../portable/CMSIS_RTOS_V2/cmsis_os2.c"
