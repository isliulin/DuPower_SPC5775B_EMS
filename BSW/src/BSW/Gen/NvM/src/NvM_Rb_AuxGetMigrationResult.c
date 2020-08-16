

/*
 **********************************************************************************************************************
 * Includes
 **********************************************************************************************************************
*/

#include "NvM.h"

#include "Rte_NvM.h"

#if (NVM_DEV_ERROR_DETECT == STD_ON)
# include "Det.h"    // TRACE[NVM556] NvM module shall include Det.h
// TRACE[NVM089] Check version compatibility of included header files
# if (!defined(DET_AR_RELEASE_MAJOR_VERSION) || (DET_AR_RELEASE_MAJOR_VERSION != NVM_AR_RELEASE_MAJOR_VERSION))
#  error "AUTOSAR major version undefined or mismatched"
# endif
#if (!defined(DET_AR_RELEASE_MINOR_VERSION) || ((DET_AR_RELEASE_MINOR_VERSION != 0) && (DET_AR_RELEASE_MINOR_VERSION != 2)))
#error "AUTOSAR minor version undefined or mismatched"
#endif
#endif

#include "NvM_Prv.h"

/*
 **********************************************************************************************************************
 * Code
 **********************************************************************************************************************
*/

#if (NVM_RB_AUX_INTERFACE == STD_ON)

#define NVM_START_SEC_CODE
#include "NvM_MemMap.h"

Std_ReturnType NvM_Rb_AuxGetMigrationResult(NvM_Rb_MigrationResult_ten *MigrationResultPtr)
{
    // TRACE[BSW_SWS_AR4_0_R2_NVRAMManager_Ext-3053] Service to read the auxiliary migration result.
    Std_ReturnType stReturn_u8 = E_NOT_OK;

    if (NvM_Prv_Main_st.isInitialized_rAM_b != TRUE)
    {
        // TRACE[BSW_SWS_AR4_0_R2_NVRAMManager_Ext-3113] Set block ID used in NvM service causing last DET error
        NvM_Prv_SetBlockIdCausingLastDetError(NVM_PRV_AUX_ADMIN_BLOCK);
        // TRACE[NVM610] Report the DET error NVM_E_NOT_INITIALIZED when the NVM is not yet initialized
        NVM_PRV_REPORT_DET_ERROR(NVM_SERVICE_ID_RB_AUX_GET_MIGRATION_RESULT, NVM_E_NOT_INITIALIZED);
    }

    // Check provided parameters
    else if (MigrationResultPtr == NULL_PTR)
    {
        // TRACE[BSW_SWS_AR4_0_R2_NVRAMManager_Ext-3113] Set block ID used in NvM service causing last DET error
        NvM_Prv_SetBlockIdCausingLastDetError(NVM_PRV_AUX_ADMIN_BLOCK);
        // TRACE[NVM188] If the NvMDevErrorDetect switch is enabled API parameter checking is enabled
        // TRACE[NVM612] Report the DET error NVM_E_PARAM_DATA when a NULL pointer is passed via the parameter RequestResultPtr
        NVM_PRV_REPORT_DET_ERROR(NVM_SERVICE_ID_RB_AUX_GET_MIGRATION_RESULT, NVM_E_PARAM_DATA);
    }
    else
    {
        // Parameters are valid
        // Read out the selected block specific migration state from the administrative block
        // No SchM lock can and should be done here to allow calling this function from NvM callbacks without deadlocks

        *MigrationResultPtr = NvM_Prv_AuxMigrationResult;

        stReturn_u8 = E_OK;
    }

    // Return whether this operation was successful
    return stReturn_u8;
}

#define NVM_STOP_SEC_CODE
#include "NvM_MemMap.h"

#endif
