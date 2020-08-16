/** @file     ASW_OsTask_5ms.c
  *
  * @brief    Task ASW_OsTask_5ms body
  *
  * @note     AUTOMATICALLY GENERATED FILE! DO NOT EDIT!
  *
  * @note     Generated by ETAS RTA-RTE
  * @note     Version 6.4.1 
  */

#define RTE_CORE

#include "Rte_Const.h"
#if !defined(RTE_VENDOR_MODE)
#pragma message "Compiling an individual task file but RTE_VENDOR_MODE not defined. Compiling a stale file?"
#endif /* !defined(RTE_VENDOR_MODE) */
#if defined(RTE_USE_TASK_HEADER)
#include "ASW_OsTask_5ms.h"
#else /* !defined(RTE_USE_TASK_HEADER) */
#include "Os.h"
#endif /* !defined(RTE_USE_TASK_HEADER) */
#if defined(RTE_REQUIRES_IOC)
#include "Ioc.h"
#endif /* defined(RTE_REQUIRES_IOC) */
#include "Rte.h"
#include "Rte_Intl.h"
#include "Rte_Type.h"
#include "Rte_DataHandleType.h"



/* Runnable entity prototypes */
#define Os_SWC_START_SEC_CODE
#include "Os_SWC_MemMap.h" /*lint !e537 permit multiple inclusion */
FUNC(void, Os_SWC_CODE) RE_ASW_OsTask_5ms(void);
#define Os_SWC_STOP_SEC_CODE
#include "Os_SWC_MemMap.h" /*lint !e537 permit multiple inclusion */

#define RTE_START_SEC_CODE
#include "Rte_MemMap.h" /*lint !e537 permit multiple inclusion */
#include "sbc_65xx.h"
#include "typedefs.h"
void DCDC_MSG_Send_5ms(void);
TASK(ASW_OsTask_5ms)
{
  static uint8 asw_delay_cnt = 0;
	static uint32_t count = 19;
   /* Box: Implicit Buffer Initialization begin */
   /* Box: Implicit Buffer Initialization end */
   /* Box: Implicit Buffer Fill begin */
   /* Box: Implicit Buffer Fill end */
  DCDC_MSG_Send_5ms();
   {
      /* Box: CPT_Os_SWC begin */
      RE_ASW_OsTask_5ms();
	count++;
	if(count%20 == 0)  //default window=128ms,  open slot=64<window<128, fresh prior=100
	{
		count = 0;
		sbc_65xx_fresh_watchdog();
	}
      /* Box: CPT_Os_SWC end */
   }

   {
//      asw_delay_cnt++;
//
//      if(asw_delay_cnt > 10)                  //delay 50ms to start ASW 
//      {
//
//        if(DPTest_DisableASW != DPTEST_CONST)
//        {
//          Asw_MainFunction();
//        }
//        
//        asw_delay_cnt = 10;
      
      
   }  
   /* Box: Implicit Buffer Flush begin */
   /* Box: Implicit Buffer Flush end */
   TerminateTask();
} /* ASW_OsTask_5ms */
#define RTE_STOP_SEC_CODE
#include "Rte_MemMap.h" /*lint !e537 permit multiple inclusion */
