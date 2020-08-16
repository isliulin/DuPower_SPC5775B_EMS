/** @file     Rte_BswM.h
  *
  * @brief    Application header file
  *
  * @note     AUTOMATICALLY GENERATED FILE! DO NOT EDIT!
  *
  * @note     Generated by ETAS RTA-RTE
  * @note     Version 6.4.1 
  */

#ifndef RTE_BSWM_H
#define RTE_BSWM_H

#ifndef RTE_CORE
#ifdef RTE_APPLICATION_HEADER_FILE
#error Multiple application header files included.
#endif /* RTE_APPLICATION_HEADER_FILE */
#define RTE_APPLICATION_HEADER_FILE
#endif /* RTE_CORE */

/*******************************************************
 ***
 *** Includes
 ***
 *******************************************************/

#include "Rte.h"
#include "Rte_Intl.h"
#include "Rte_BswM_Type.h"

#include "Rte_DataHandleType.h"

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

#if defined(RTE_RUNNABLEAPI_RE_BswM_Cfg_DfrdSwcReqst_BswM_MRP_SwcModeRequest)
   /* Do nothing for this and all elif clauses below (rte_sws_2751) */
#else
   /* None of above defined so define value including all APIs (rte_sws_2751) */
   #define RTE_PRV_ALL_API
#endif

/*******************************************************
 ***
 *** Constants
 ***
 *******************************************************/


/*******************************************************
 ***
 *** Public Types
 ***
 *******************************************************/

/* BEGIN: SWC types (core visible) */
struct Rte_CDS_BswM {
   uint8 Rte_Dummy;
};
typedef struct Rte_CDS_BswM Rte_CDS_BswM;
/* END: SWC types (core visible) */

/*******************************************************
 ***
 *** Private Types
 ***
 *******************************************************/

/* BEGIN: SWC types (private) */
/* END: SWC types (private) */

/*******************************************************
 ***
 *** Instance Declarations
 ***
 *******************************************************/

#define RTE_START_SEC_CONST_UNSPECIFIED
#include "Rte_MemMap.h" /*lint !e537 permit multiple inclusion */
extern CONST(struct Rte_CDS_BswM, RTE_CONST) Rte_Inst_BswM;
#define RTE_STOP_SEC_CONST_UNSPECIFIED
#include "Rte_MemMap.h" /*lint !e537 permit multiple inclusion */


#ifndef RTE_CORE
typedef CONSTP2CONST(struct Rte_CDS_BswM, AUTOMATIC, RTE_CONST) Rte_Instance;
#endif /* RTE_CORE */

/*******************************************************
 ***
 *** API Mapping macros
 ***
 *******************************************************/

/* API Mapping Macros */
#ifndef RTE_CORE
#define RTE_START_SEC_VAR_CLEARED_16
#include "Rte_MemMap.h" /*lint !e537 permit multiple inclusion */
extern VAR(uint16, RTE_DATA) Rte_Rx_001207;
#define RTE_STOP_SEC_VAR_CLEARED_16
#include "Rte_MemMap.h" /*lint !e537 permit multiple inclusion */
#if defined(RTE_PRV_ALL_API) || defined(RTE_RUNNABLEAPI_RE_BswM_Cfg_DfrdSwcReqst_BswM_MRP_SwcModeRequest)
/* Inline read optimization; Rte_Read_RP_BswMArbitration_BswM_MRP_SwcModeRequest_VDP_uint16 to direct access */
#define Rte_Read_RP_BswMArbitration_BswM_MRP_SwcModeRequest_VDP_uint16( data )  ( RTE_ATOMIC16((*(data)) = Rte_Rx_001207),((VAR(Std_ReturnType, AUTOMATIC))RTE_E_OK) )
#endif

#endif /* RTE_CORE */

/*******************************************************
 ***
 *** RE Prototypes
 ***
 *******************************************************/

#define BswM_START_SEC_CODE
#include "BswM_MemMap.h" /*lint !e537 permit multiple inclusion */
FUNC(void, BswM_CODE) BswM_Cfg_DfrdSwcReqst_BswM_MRP_SwcModeRequest(void);
#define BswM_STOP_SEC_CODE
#include "BswM_MemMap.h" /*lint !e537 permit multiple inclusion */

/* Initial values for data element prototypes */

#ifdef __cplusplus
} /* extern C */
#endif /* __cplusplus */

#endif /* !RTE_BSWM_H */
