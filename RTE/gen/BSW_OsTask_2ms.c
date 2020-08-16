/** @file     BSW_OsTask_2ms.c
  *
  * @brief    Task BSW_OsTask_2ms body
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
#include "BSW_OsTask_2ms.h"
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
#define IoHwAb_START_SEC_CODE
#include "IoHwAb_MemMap.h" /*lint !e537 permit multiple inclusion */
//FUNC(void, IoHwAb_CODE) IoHwAb_MainFunction(void);
#define IoHwAb_STOP_SEC_CODE
#include "IoHwAb_MemMap.h" /*lint !e537 permit multiple inclusion */
#define OS_START_SEC_CODE
#include "Os_MemMap.h" /*lint !e537 permit multiple inclusion */
FUNC(void, OS_CODE) RE_BSW_OsTask_2ms(void);
#define OS_STOP_SEC_CODE
#include "Os_MemMap.h" /*lint !e537 permit multiple inclusion */

#define RTE_START_SEC_CODE
#include "Rte_MemMap.h" /*lint !e537 permit multiple inclusion */
TASK(BSW_OsTask_2ms)
{
   /* Box: Implicit Buffer Initialization begin */
   /* Box: Implicit Buffer Initialization end */
   /* Box: Implicit Buffer Fill begin */
   /* Box: Implicit Buffer Fill end */
   {
      /* Box: BSWImpl0_Os begin */

	   RE_BSW_OsTask_2ms();
      /* Box: BSWImpl0_Os end */
   }
   {
      /* Box: CPT_IoHwAb begin */
//      IoHwAb_MainFunction();
      /* Box: CPT_IoHwAb end */
   }
   /* Box: Implicit Buffer Flush begin */
   /* Box: Implicit Buffer Flush end */
   TerminateTask();
} /* BSW_OsTask_2ms */
#define RTE_STOP_SEC_CODE
#include "Rte_MemMap.h" /*lint !e537 permit multiple inclusion */

