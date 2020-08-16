/** @file     Rte_WdgM.h
  *
  * @brief    Application header file
  *
  * @note     AUTOMATICALLY GENERATED FILE! DO NOT EDIT!
  *
  * @note     Generated by ETAS RTA-RTE
  * @note     Version 6.4.1 
  */

#ifndef RTE_WDGM_H
#define RTE_WDGM_H

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
#include "Rte_WdgM_Type.h"

#include "Rte_DataHandleType.h"

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

#if defined(RTE_RUNNABLEAPI_CheckpointReached)
   /* Do nothing for this and all elif clauses below (rte_sws_2751) */
#elif defined(RTE_RUNNABLEAPI_MainFunction)
#else
   /* None of above defined so define value including all APIs (rte_sws_2751) */
   #define RTE_PRV_ALL_API
#endif

/*******************************************************
 ***
 *** Constants
 ***
 *******************************************************/

#ifndef RTE_CORE
#define RTE_E_WdgM_AliveSupervision_E_NOT_OK ((Std_ReturnType)1)
#endif /* RTE_CORE */

/*******************************************************
 ***
 *** Public Types
 ***
 *******************************************************/

/* BEGIN: SWC types (core visible) */
struct Rte_PDS_WdgM_WdgM_IndividualMode_P {
   Rte_SwitchAckFP_WdgM_WdgM_IndividualMode_currentMode SwitchAck_currentMode;
   Rte_SwitchFP_WdgM_WdgM_IndividualMode_currentMode    Switch_currentMode;
};
typedef struct Rte_PDS_WdgM_WdgM_IndividualMode_P Rte_PDS_WdgM_WdgM_IndividualMode_P;
typedef struct Rte_PDS_WdgM_WdgM_IndividualMode_P Rte_PDS_WdgM_WdgM_IndividualMode_PA[7];
struct Rte_CDS_WdgM {
   /* Port Data Structure Arrays */
   Rte_PDS_WdgM_WdgM_IndividualMode_PA mode_WdgMAliveSupervisedEntity_Asw_5ms;
};
typedef struct Rte_CDS_WdgM Rte_CDS_WdgM;
/* END: SWC types (core visible) */

/*******************************************************
 ***
 *** Private Types
 ***
 *******************************************************/

/* BEGIN: SWC types (private) */
#ifndef RTE_CORE
typedef P2CONST(struct Rte_PDS_WdgM_WdgM_IndividualMode_P, AUTOMATIC, RTE_CONST) Rte_PortHandle_WdgM_IndividualMode_P;
#endif /* RTE_CORE */

/* END: SWC types (private) */

/*******************************************************
 ***
 *** Instance Declarations
 ***
 *******************************************************/

#define RTE_START_SEC_CONST_UNSPECIFIED
#include "Rte_MemMap.h" /*lint !e537 permit multiple inclusion */
extern CONST(struct Rte_CDS_WdgM, RTE_CONST) Rte_Inst_WdgM;
#define RTE_STOP_SEC_CONST_UNSPECIFIED
#include "Rte_MemMap.h" /*lint !e537 permit multiple inclusion */


#ifndef RTE_CORE
typedef CONSTP2CONST(struct Rte_CDS_WdgM, AUTOMATIC, RTE_CONST) Rte_Instance;
#endif /* RTE_CORE */

/*******************************************************
 ***
 *** API Mapping macros
 ***
 *******************************************************/

/* API Mapping Macros */
#ifndef RTE_CORE

#define RTE_START_SEC_CODE
#include "Rte_MemMap.h" /*lint !e537 permit multiple inclusion */
FUNC(Std_ReturnType, RTE_CODE) Rte_SwitchAck_WdgM_globalMode_currentMode(void);
FUNC(Std_ReturnType, RTE_CODE) Rte_Switch_WdgM_globalMode_currentMode(VAR(uint8, AUTOMATIC) data);
#define RTE_STOP_SEC_CODE
#include "Rte_MemMap.h" /*lint !e537 permit multiple inclusion */
#if defined(RTE_PRV_ALL_API) || defined(RTE_RUNNABLEAPI_MainFunction)
#define Rte_SwitchAck_globalMode_currentMode Rte_SwitchAck_WdgM_globalMode_currentMode /* enableTakeAddress */
#endif
#if defined(RTE_PRV_ALL_API) || defined(RTE_RUNNABLEAPI_MainFunction)
/* Inline read optimization; Rte_SwitchAck_mode_WdgMAliveSupervisedEntity_Asw_5ms_currentMode to direct read */
#define Rte_SwitchAck_mode_WdgMAliveSupervisedEntity_Asw_5ms_currentMode()  ( ((VAR(Std_ReturnType, AUTOMATIC))RTE_E_UNCONNECTED) )
#endif
#if defined(RTE_PRV_ALL_API) || defined(RTE_RUNNABLEAPI_MainFunction)
/* Inline read optimization; Rte_SwitchAck_mode_WdgMAliveSupervisedEntity_Bsw_1000ms_currentMode to direct read */
#define Rte_SwitchAck_mode_WdgMAliveSupervisedEntity_Bsw_1000ms_currentMode()  ( ((VAR(Std_ReturnType, AUTOMATIC))RTE_E_UNCONNECTED) )
#endif
#if defined(RTE_PRV_ALL_API) || defined(RTE_RUNNABLEAPI_MainFunction)
/* Inline read optimization; Rte_SwitchAck_mode_WdgMAliveSupervisedEntity_Bsw_100ms_currentMode to direct read */
#define Rte_SwitchAck_mode_WdgMAliveSupervisedEntity_Bsw_100ms_currentMode()  ( ((VAR(Std_ReturnType, AUTOMATIC))RTE_E_UNCONNECTED) )
#endif
#if defined(RTE_PRV_ALL_API) || defined(RTE_RUNNABLEAPI_MainFunction)
/* Inline read optimization; Rte_SwitchAck_mode_WdgMAliveSupervisedEntity_Bsw_10ms_currentMode to direct read */
#define Rte_SwitchAck_mode_WdgMAliveSupervisedEntity_Bsw_10ms_currentMode()  ( ((VAR(Std_ReturnType, AUTOMATIC))RTE_E_UNCONNECTED) )
#endif
#if defined(RTE_PRV_ALL_API) || defined(RTE_RUNNABLEAPI_MainFunction)
/* Inline read optimization; Rte_SwitchAck_mode_WdgMAliveSupervisedEntity_Bsw_20ms_currentMode to direct read */
#define Rte_SwitchAck_mode_WdgMAliveSupervisedEntity_Bsw_20ms_currentMode()  ( ((VAR(Std_ReturnType, AUTOMATIC))RTE_E_UNCONNECTED) )
#endif
#if defined(RTE_PRV_ALL_API) || defined(RTE_RUNNABLEAPI_MainFunction)
/* Inline read optimization; Rte_SwitchAck_mode_WdgMAliveSupervisedEntity_Bsw_50ms_currentMode to direct read */
#define Rte_SwitchAck_mode_WdgMAliveSupervisedEntity_Bsw_50ms_currentMode()  ( ((VAR(Std_ReturnType, AUTOMATIC))RTE_E_UNCONNECTED) )
#endif
#if defined(RTE_PRV_ALL_API) || defined(RTE_RUNNABLEAPI_MainFunction)
/* Inline read optimization; Rte_SwitchAck_mode_WdgMAliveSupervisedEntity_Bsw_5ms_currentMode to direct read */
#define Rte_SwitchAck_mode_WdgMAliveSupervisedEntity_Bsw_5ms_currentMode()  ( ((VAR(Std_ReturnType, AUTOMATIC))RTE_E_UNCONNECTED) )
#endif
#if defined(RTE_PRV_ALL_API) || defined(RTE_RUNNABLEAPI_MainFunction)
#define Rte_Switch_globalMode_currentMode Rte_Switch_WdgM_globalMode_currentMode /* enableTakeAddress */
#endif
#if defined(RTE_PRV_ALL_API) || defined(RTE_RUNNABLEAPI_MainFunction)
/* Inline read optimization; Rte_Switch_mode_WdgMAliveSupervisedEntity_Asw_5ms_currentMode to direct read */
#define Rte_Switch_mode_WdgMAliveSupervisedEntity_Asw_5ms_currentMode( data )  ( ((VAR(Std_ReturnType, AUTOMATIC))RTE_E_OK) )
#endif
#if defined(RTE_PRV_ALL_API) || defined(RTE_RUNNABLEAPI_MainFunction)
/* Inline read optimization; Rte_Switch_mode_WdgMAliveSupervisedEntity_Bsw_1000ms_currentMode to direct read */
#define Rte_Switch_mode_WdgMAliveSupervisedEntity_Bsw_1000ms_currentMode( data )  ( ((VAR(Std_ReturnType, AUTOMATIC))RTE_E_OK) )
#endif
#if defined(RTE_PRV_ALL_API) || defined(RTE_RUNNABLEAPI_MainFunction)
/* Inline read optimization; Rte_Switch_mode_WdgMAliveSupervisedEntity_Bsw_100ms_currentMode to direct read */
#define Rte_Switch_mode_WdgMAliveSupervisedEntity_Bsw_100ms_currentMode( data )  ( ((VAR(Std_ReturnType, AUTOMATIC))RTE_E_OK) )
#endif
#if defined(RTE_PRV_ALL_API) || defined(RTE_RUNNABLEAPI_MainFunction)
/* Inline read optimization; Rte_Switch_mode_WdgMAliveSupervisedEntity_Bsw_10ms_currentMode to direct read */
#define Rte_Switch_mode_WdgMAliveSupervisedEntity_Bsw_10ms_currentMode( data )  ( ((VAR(Std_ReturnType, AUTOMATIC))RTE_E_OK) )
#endif
#if defined(RTE_PRV_ALL_API) || defined(RTE_RUNNABLEAPI_MainFunction)
/* Inline read optimization; Rte_Switch_mode_WdgMAliveSupervisedEntity_Bsw_20ms_currentMode to direct read */
#define Rte_Switch_mode_WdgMAliveSupervisedEntity_Bsw_20ms_currentMode( data )  ( ((VAR(Std_ReturnType, AUTOMATIC))RTE_E_OK) )
#endif
#if defined(RTE_PRV_ALL_API) || defined(RTE_RUNNABLEAPI_MainFunction)
/* Inline read optimization; Rte_Switch_mode_WdgMAliveSupervisedEntity_Bsw_50ms_currentMode to direct read */
#define Rte_Switch_mode_WdgMAliveSupervisedEntity_Bsw_50ms_currentMode( data )  ( ((VAR(Std_ReturnType, AUTOMATIC))RTE_E_OK) )
#endif
#if defined(RTE_PRV_ALL_API) || defined(RTE_RUNNABLEAPI_MainFunction)
/* Inline read optimization; Rte_Switch_mode_WdgMAliveSupervisedEntity_Bsw_5ms_currentMode to direct read */
#define Rte_Switch_mode_WdgMAliveSupervisedEntity_Bsw_5ms_currentMode( data )  ( ((VAR(Std_ReturnType, AUTOMATIC))RTE_E_OK) )
#endif

/* Rte_Port API */
#define Rte_Port_mode_WdgMAliveSupervisedEntity_Asw_5ms() ((Rte_PortHandle_WdgM_IndividualMode_P)&(Rte_Inst_WdgM.mode_WdgMAliveSupervisedEntity_Asw_5ms[0]))
#define Rte_Port_mode_WdgMAliveSupervisedEntity_Bsw_1000ms() ((Rte_PortHandle_WdgM_IndividualMode_P)&(Rte_Inst_WdgM.mode_WdgMAliveSupervisedEntity_Asw_5ms[1]))
#define Rte_Port_mode_WdgMAliveSupervisedEntity_Bsw_100ms() ((Rte_PortHandle_WdgM_IndividualMode_P)&(Rte_Inst_WdgM.mode_WdgMAliveSupervisedEntity_Asw_5ms[2]))
#define Rte_Port_mode_WdgMAliveSupervisedEntity_Bsw_10ms() ((Rte_PortHandle_WdgM_IndividualMode_P)&(Rte_Inst_WdgM.mode_WdgMAliveSupervisedEntity_Asw_5ms[3]))
#define Rte_Port_mode_WdgMAliveSupervisedEntity_Bsw_20ms() ((Rte_PortHandle_WdgM_IndividualMode_P)&(Rte_Inst_WdgM.mode_WdgMAliveSupervisedEntity_Asw_5ms[4]))
#define Rte_Port_mode_WdgMAliveSupervisedEntity_Bsw_50ms() ((Rte_PortHandle_WdgM_IndividualMode_P)&(Rte_Inst_WdgM.mode_WdgMAliveSupervisedEntity_Asw_5ms[5]))
#define Rte_Port_mode_WdgMAliveSupervisedEntity_Bsw_5ms() ((Rte_PortHandle_WdgM_IndividualMode_P)&(Rte_Inst_WdgM.mode_WdgMAliveSupervisedEntity_Asw_5ms[6]))

/* Rte_NPorts API */
#define Rte_NPorts_WdgM_IndividualMode_P() ((uint8)7)

/* Rte_Ports API */
#define Rte_Ports_WdgM_IndividualMode_P() ((Rte_PortHandle_WdgM_IndividualMode_P)&(Rte_Inst_WdgM.mode_WdgMAliveSupervisedEntity_Asw_5ms[0]))

#endif /* RTE_CORE */

/*******************************************************
 ***
 *** RE Prototypes
 ***
 *******************************************************/

#define WdgM_START_SEC_CODE
#include "WdgM_MemMap.h" /*lint !e537 permit multiple inclusion */
FUNC(Std_ReturnType, WdgM_CODE) WdgM_CheckpointReached(VAR(WdgM_SupervisedEntityIdType, AUTOMATIC) Rte_PDAV0,
                                                       VAR(WdgM_CheckpointIdType, AUTOMATIC) CheckpointID);
#define WdgM_STOP_SEC_CODE
#include "WdgM_MemMap.h" /*lint !e537 permit multiple inclusion */

/* Initial values for data element prototypes */

#ifdef __cplusplus
} /* extern C */
#endif /* __cplusplus */

#endif /* !RTE_WDGM_H */
