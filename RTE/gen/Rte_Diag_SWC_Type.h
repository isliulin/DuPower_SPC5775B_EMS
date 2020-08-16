/** @file     Rte_Diag_SWC_Type.h
  *
  * @brief    Application types header file
  *
  * @note     AUTOMATICALLY GENERATED FILE! DO NOT EDIT!
  *
  * @note     Generated by ETAS RTA-RTE
  * @note     Version 6.4.1 
  */

#ifndef RTE_Diag_SWC_TYPE_H
#define RTE_Diag_SWC_TYPE_H

#include "Rte_Type.h"

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

/* BEGIN: SWC specific types */
/* END: SWC specific types */

/* BEGIN: SWC specific definitions */
#if !defined(RTE_CORE)

/* Box: /AUTOSAR_Dem/ImplementationDataTypes/Dem_DTCFormatType begin */
/* Box: DEM_DTC_FORMAT_OBD ("DEM_DTC_FORMAT_OBD") begin */
#ifndef DEM_DTC_FORMAT_OBD
#define DEM_DTC_FORMAT_OBD (0U)
#endif /* !DEM_DTC_FORMAT_OBD */
/* Box: DEM_DTC_FORMAT_OBD ("DEM_DTC_FORMAT_OBD") end */
/* Box: DEM_DTC_FORMAT_UDS ("DEM_DTC_FORMAT_UDS") begin */
#ifndef DEM_DTC_FORMAT_UDS
#define DEM_DTC_FORMAT_UDS (1U)
#endif /* !DEM_DTC_FORMAT_UDS */
/* Box: DEM_DTC_FORMAT_UDS ("DEM_DTC_FORMAT_UDS") end */
/* Box: DEM_DTC_FORMAT_J1939 ("DEM_DTC_FORMAT_J1939") begin */
#ifndef DEM_DTC_FORMAT_J1939
#define DEM_DTC_FORMAT_J1939 (2U)
#endif /* !DEM_DTC_FORMAT_J1939 */
/* Box: DEM_DTC_FORMAT_J1939 ("DEM_DTC_FORMAT_J1939") end */
/* Box: /AUTOSAR_Dem/ImplementationDataTypes/Dem_DTCFormatType end */

/* Box: /AUTOSAR_Dem/ImplementationDataTypes/Dem_DebounceResetStatusType begin */
/* Box: DEM_DEBOUNCE_STATUS_FREEZE ("DEM_DEBOUNCE_STATUS_FREEZE") begin */
#ifndef DEM_DEBOUNCE_STATUS_FREEZE
#define DEM_DEBOUNCE_STATUS_FREEZE (0U)
#endif /* !DEM_DEBOUNCE_STATUS_FREEZE */
/* Box: DEM_DEBOUNCE_STATUS_FREEZE ("DEM_DEBOUNCE_STATUS_FREEZE") end */
/* Box: DEM_DEBOUNCE_STATUS_RESET ("DEM_DEBOUNCE_STATUS_RESET") begin */
#ifndef DEM_DEBOUNCE_STATUS_RESET
#define DEM_DEBOUNCE_STATUS_RESET (1U)
#endif /* !DEM_DEBOUNCE_STATUS_RESET */
/* Box: DEM_DEBOUNCE_STATUS_RESET ("DEM_DEBOUNCE_STATUS_RESET") end */
/* Box: /AUTOSAR_Dem/ImplementationDataTypes/Dem_DebounceResetStatusType end */

/* Box: /AUTOSAR_Dem/ImplementationDataTypes/Dem_DebouncingStateType begin */
/* Box: DEM_TEMPORARILY_DEFECTIVE ("DEM_TEMPORARILY_DEFECTIVE") begin */
#ifndef DEM_TEMPORARILY_DEFECTIVE
#define DEM_TEMPORARILY_DEFECTIVE (1U)
#endif /* !DEM_TEMPORARILY_DEFECTIVE */
/* Box: DEM_TEMPORARILY_DEFECTIVE ("DEM_TEMPORARILY_DEFECTIVE") end */
/* Box: DEM_FINALLY_DEFECTIVE ("DEM_FINALLY_DEFECTIVE") begin */
#ifndef DEM_FINALLY_DEFECTIVE
#define DEM_FINALLY_DEFECTIVE (2U)
#endif /* !DEM_FINALLY_DEFECTIVE */
/* Box: DEM_FINALLY_DEFECTIVE ("DEM_FINALLY_DEFECTIVE") end */
/* Box: DEM_TEMPORARILY_HEALED ("DEM_TEMPORARILY_HEALED") begin */
#ifndef DEM_TEMPORARILY_HEALED
#define DEM_TEMPORARILY_HEALED (4U)
#endif /* !DEM_TEMPORARILY_HEALED */
/* Box: DEM_TEMPORARILY_HEALED ("DEM_TEMPORARILY_HEALED") end */
/* Box: DEM_TEST_COMPLETE ("DEM_TEST_COMPLETE") begin */
#ifndef DEM_TEST_COMPLETE
#define DEM_TEST_COMPLETE (8U)
#endif /* !DEM_TEST_COMPLETE */
/* Box: DEM_TEST_COMPLETE ("DEM_TEST_COMPLETE") end */
/* Box: DEM_DTR_UPDATE ("DEM_DTR_UPDATE") begin */
#ifndef DEM_DTR_UPDATE
#define DEM_DTR_UPDATE (16U)
#endif /* !DEM_DTR_UPDATE */
/* Box: DEM_DTR_UPDATE ("DEM_DTR_UPDATE") end */
/* Box: /AUTOSAR_Dem/ImplementationDataTypes/Dem_DebouncingStateType end */

/* Box: /AUTOSAR_Dem/ImplementationDataTypes/Dem_EventStatusType begin */
/* Box: DEM_EVENT_STATUS_PASSED ("DEM_EVENT_STATUS_PASSED") begin */
#ifndef DEM_EVENT_STATUS_PASSED
#define DEM_EVENT_STATUS_PASSED (0U)
#endif /* !DEM_EVENT_STATUS_PASSED */
/* Box: DEM_EVENT_STATUS_PASSED ("DEM_EVENT_STATUS_PASSED") end */
/* Box: DEM_EVENT_STATUS_FAILED ("DEM_EVENT_STATUS_FAILED") begin */
#ifndef DEM_EVENT_STATUS_FAILED
#define DEM_EVENT_STATUS_FAILED (1U)
#endif /* !DEM_EVENT_STATUS_FAILED */
/* Box: DEM_EVENT_STATUS_FAILED ("DEM_EVENT_STATUS_FAILED") end */
/* Box: DEM_EVENT_STATUS_PREPASSED ("DEM_EVENT_STATUS_PREPASSED") begin */
#ifndef DEM_EVENT_STATUS_PREPASSED
#define DEM_EVENT_STATUS_PREPASSED (2U)
#endif /* !DEM_EVENT_STATUS_PREPASSED */
/* Box: DEM_EVENT_STATUS_PREPASSED ("DEM_EVENT_STATUS_PREPASSED") end */
/* Box: DEM_EVENT_STATUS_PREFAILED ("DEM_EVENT_STATUS_PREFAILED") begin */
#ifndef DEM_EVENT_STATUS_PREFAILED
#define DEM_EVENT_STATUS_PREFAILED (3U)
#endif /* !DEM_EVENT_STATUS_PREFAILED */
/* Box: DEM_EVENT_STATUS_PREFAILED ("DEM_EVENT_STATUS_PREFAILED") end */
/* Box: DEM_EVENT_STATUS_FDC_THRESHOLD_REACHED ("DEM_EVENT_STATUS_FDC_THRESHOLD_REACHED") begin */
#ifndef DEM_EVENT_STATUS_FDC_THRESHOLD_REACHED
#define DEM_EVENT_STATUS_FDC_THRESHOLD_REACHED (4U)
#endif /* !DEM_EVENT_STATUS_FDC_THRESHOLD_REACHED */
/* Box: DEM_EVENT_STATUS_FDC_THRESHOLD_REACHED ("DEM_EVENT_STATUS_FDC_THRESHOLD_REACHED") end */
/* Box: /AUTOSAR_Dem/ImplementationDataTypes/Dem_EventStatusType end */

/* Box: /AUTOSAR_Dem/ImplementationDataTypes/Dem_OperationCycleStateType begin */
/* Box: DEM_CYCLE_STATE_START ("DEM_CYCLE_STATE_START") begin */
#ifndef DEM_CYCLE_STATE_START
#define DEM_CYCLE_STATE_START (0U)
#endif /* !DEM_CYCLE_STATE_START */
/* Box: DEM_CYCLE_STATE_START ("DEM_CYCLE_STATE_START") end */
/* Box: DEM_CYCLE_STATE_END ("DEM_CYCLE_STATE_END") begin */
#ifndef DEM_CYCLE_STATE_END
#define DEM_CYCLE_STATE_END (1U)
#endif /* !DEM_CYCLE_STATE_END */
/* Box: DEM_CYCLE_STATE_END ("DEM_CYCLE_STATE_END") end */
/* Box: /AUTOSAR_Dem/ImplementationDataTypes/Dem_OperationCycleStateType end */

/* Box: /AUTOSAR_Dem/ImplementationDataTypes/Dem_UdsStatusByteType begin */
/* Box: DEM_UDS_STATUS_TF ("DEM_UDS_STATUS_TF") begin */
#ifndef DEM_UDS_STATUS_TF
#define DEM_UDS_STATUS_TF (1U)
#endif /* !DEM_UDS_STATUS_TF */
/* Box: DEM_UDS_STATUS_TF ("DEM_UDS_STATUS_TF") end */
/* Box: DEM_UDS_STATUS_TFTOC ("DEM_UDS_STATUS_TFTOC") begin */
#ifndef DEM_UDS_STATUS_TFTOC
#define DEM_UDS_STATUS_TFTOC (2U)
#endif /* !DEM_UDS_STATUS_TFTOC */
/* Box: DEM_UDS_STATUS_TFTOC ("DEM_UDS_STATUS_TFTOC") end */
/* Box: DEM_UDS_STATUS_PDTC ("DEM_UDS_STATUS_PDTC") begin */
#ifndef DEM_UDS_STATUS_PDTC
#define DEM_UDS_STATUS_PDTC (4U)
#endif /* !DEM_UDS_STATUS_PDTC */
/* Box: DEM_UDS_STATUS_PDTC ("DEM_UDS_STATUS_PDTC") end */
/* Box: DEM_UDS_STATUS_CDTC ("DEM_UDS_STATUS_CDTC") begin */
#ifndef DEM_UDS_STATUS_CDTC
#define DEM_UDS_STATUS_CDTC (8U)
#endif /* !DEM_UDS_STATUS_CDTC */
/* Box: DEM_UDS_STATUS_CDTC ("DEM_UDS_STATUS_CDTC") end */
/* Box: DEM_UDS_STATUS_TNCSLC ("DEM_UDS_STATUS_TNCSLC") begin */
#ifndef DEM_UDS_STATUS_TNCSLC
#define DEM_UDS_STATUS_TNCSLC (16U)
#endif /* !DEM_UDS_STATUS_TNCSLC */
/* Box: DEM_UDS_STATUS_TNCSLC ("DEM_UDS_STATUS_TNCSLC") end */
/* Box: DEM_UDS_STATUS_TFSLC ("DEM_UDS_STATUS_TFSLC") begin */
#ifndef DEM_UDS_STATUS_TFSLC
#define DEM_UDS_STATUS_TFSLC (32U)
#endif /* !DEM_UDS_STATUS_TFSLC */
/* Box: DEM_UDS_STATUS_TFSLC ("DEM_UDS_STATUS_TFSLC") end */
/* Box: DEM_UDS_STATUS_TNCTOC ("DEM_UDS_STATUS_TNCTOC") begin */
#ifndef DEM_UDS_STATUS_TNCTOC
#define DEM_UDS_STATUS_TNCTOC (64U)
#endif /* !DEM_UDS_STATUS_TNCTOC */
/* Box: DEM_UDS_STATUS_TNCTOC ("DEM_UDS_STATUS_TNCTOC") end */
/* Box: DEM_UDS_STATUS_WIR ("DEM_UDS_STATUS_WIR") begin */
#ifndef DEM_UDS_STATUS_WIR
#define DEM_UDS_STATUS_WIR (128U)
#endif /* !DEM_UDS_STATUS_WIR */
/* Box: DEM_UDS_STATUS_WIR ("DEM_UDS_STATUS_WIR") end */
/* Box: /AUTOSAR_Dem/ImplementationDataTypes/Dem_UdsStatusByteType end */

/* Box: /AUTOSAR_Platform/ImplementationDataTypes/boolean begin */
/* Box: "FALSE" begin */
#ifndef FALSE
#define FALSE (0U)
#endif /* !FALSE */
/* Box: "FALSE" end */
/* Box: "TRUE" begin */
#ifndef TRUE
#define TRUE (1U)
#endif /* !TRUE */
/* Box: "TRUE" end */
/* Box: /AUTOSAR_Platform/ImplementationDataTypes/boolean end */
#endif /* !defined(RTE_CORE) */
/* END: SWC specific definitions */

#ifdef __cplusplus
} /* extern C */
#endif /* __cplusplus */

#endif /* !RTE_Diag_SWC_TYPE_H */
