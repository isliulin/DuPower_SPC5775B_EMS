/** @file     SchM_IpduM.h
  *
  * @brief    Basic Software Scheduler Module Interlink header file
  *
  * @note     AUTOMATICALLY GENERATED FILE! DO NOT EDIT!
  *
  * @note     Generated by ETAS RTA-RTE
  * @note     Version 6.4.1 
  */

#ifndef SchM_IpduM
#define SchM_IpduM

#include "SchM_IpduM_Type.h"
#include "Rte_Intl.h"
#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

#if defined(RTE_RUNNABLEAPI_BSWSE_MainFunctionRx)
   /* Do nothing for this and all elif clauses below (rte_sws_2751) */
#elif defined(RTE_RUNNABLEAPI_BSWSE_MainFunctionTx)
#else
   /* None of above defined so define value including all APIs (rte_sws_2751) */
   #define RTE_PRV_ALL_API
#endif

/* API Mapping Macros */
#ifndef RTE_CORE

#endif /* RTE_CORE */

/*******************************************************
 ***
 *** Schedulable Entity Prototypes
 ***
 *******************************************************/

#define IPDUM_START_SEC_CODE
#include "IpduM_MemMap.h" /*lint !e537 permit multiple inclusion */
FUNC(void, IPDUM_CODE) IpduM_MainFunctionRx(void);
#define IPDUM_STOP_SEC_CODE
#include "IpduM_MemMap.h" /*lint !e537 permit multiple inclusion */
#define IPDUM_START_SEC_CODE
#include "IpduM_MemMap.h" /*lint !e537 permit multiple inclusion */
FUNC(void, IPDUM_CODE) IpduM_MainFunctionTx(void);
#define IPDUM_STOP_SEC_CODE
#include "IpduM_MemMap.h" /*lint !e537 permit multiple inclusion */

#ifdef __cplusplus
} /* extern C */
#endif /* __cplusplus */

#endif /* !SchM_IpduM */
