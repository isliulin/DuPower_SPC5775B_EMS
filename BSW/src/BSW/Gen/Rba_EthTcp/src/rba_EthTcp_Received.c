

/*
 ***************************************************************************************************
 * Includes
 ***************************************************************************************************
 */

#include "TcpIp.h"

#if ( defined(TCPIP_TCP_ENABLED) && ( TCPIP_TCP_ENABLED == STD_ON ) )

#include "TcpIp_Prv.h"

#include "rba_EthTcp.h"
#include "rba_EthTcp_Prv.h"


/*
 ***************************************************************************************************
 * Interface functions
 ***************************************************************************************************
 */

#define RBA_ETHTCP_START_SEC_CODE
#include "rba_EthTcp_MemMap.h"

/*********************************************************************************************************************************/
/** rba_EthTcp_Received() 	- By this API, the reception of data is confirmed to the rba_EthTcp module							**/
/**																																**/
/** Parameters (in):																											**/
/** TcpSockId_uo 		    - Tcp socket id																			            **/
/** DataLen_u16 			- Number of bytes consumed by the upper layer														**/
/**																																**/
/** Parameters (inout):		None																								**/
/**																																**/
/** Parameters (out):		None																								**/
/**																																**/
/** Return value:			Std_ReturnType																						**/
/** 							E_OK: The request has been accepted																**/
/** 							E_NOT_OK: The request has not been accepted														**/
/**																																**/
/*********************************************************************************************************************************/
FUNC( Std_ReturnType, RBA_ETHTCP_CODE ) rba_EthTcp_Received ( 	VAR( TcpIp_SocketIdType, AUTOMATIC ) 	TcpSockId_uo,
																VAR( uint16, AUTOMATIC ) 				DataLen_u16 )
{
	/* Declare local variables */
	P2VAR( rba_EthTcp_DynSockTblType_tst, AUTOMATIC, AUTOMATIC ) 		lTcpDynSockTbl_pst;
	VAR( uint16, AUTOMATIC )                                            lPreviousWindowSize_u16;
	VAR( Std_ReturnType, AUTOMATIC ) 									lFunctionRetVal_en;
#if( TCPIP_DEV_ERROR_DETECT == STD_ON )
    VAR( boolean, AUTOMATIC )                                           lDetErrorFlag_b;
#endif

    /* Initialize the return value of the function to E_NOT_OK */
    lFunctionRetVal_en = E_NOT_OK;

#if( TCPIP_DEV_ERROR_DETECT == STD_ON )
    /* Set DET error flag to FALSE */
    lDetErrorFlag_b = FALSE;

    /* Check for DET errors */
    /* Report DET if rba_EthTcp module is uninitialized */
    rba_EthTcp_CheckDetError( (rba_EthTcp_InitFlag_b == FALSE), RBA_ETHTCP_E_RECEIVED, RBA_ETHTCP_E_NOTINIT, &lDetErrorFlag_b );
    /* Report DET if TcpSockId_uo is invalid */
    rba_EthTcp_CheckDetError( (TcpSockId_uo >= TCPIP_TCPSOCKETMAX), RBA_ETHTCP_E_RECEIVED, RBA_ETHTCP_E_INV_ARG, &lDetErrorFlag_b );

    /* In case no DET error occured */
    if( lDetErrorFlag_b == FALSE )
#endif
    {
        /* Get Tcp dynamic table entry from Tcp socket index */
        lTcpDynSockTbl_pst = ( &( rba_EthTcp_DynSockTbl_ast[TcpSockId_uo] ) );

        /* Check if we are in a state where the Received call is accepted (ESTABLISHED, FIN WAIT 1 or FIN WAIT 2) */
        if ( (lTcpDynSockTbl_pst->State_en == RBA_ETHTCP_CONN_ESTABLISHED_E)    ||
             (lTcpDynSockTbl_pst->State_en == RBA_ETHTCP_CONN_FIN_WAIT_1_E)     ||
             (lTcpDynSockTbl_pst->State_en == RBA_ETHTCP_CONN_FIN_WAIT_2_E) )
        {
#if( TCPIP_DEV_ERROR_DETECT == STD_ON )
            /* Report DET if DataLen_u16 is not valid */
            rba_EthTcp_CheckDetError( (DataLen_u16 > (lTcpDynSockTbl_pst->TcpSockOpt_pst->SORxWindowMax_u16 - lTcpDynSockTbl_pst->SndWndSize_u16)), RBA_ETHTCP_E_RECEIVED, RBA_ETHTCP_E_INV_ARG, &lDetErrorFlag_b );
#endif

            /* If the consumed data length by the Upper Layer is valid */
            if( DataLen_u16 <= (lTcpDynSockTbl_pst->TcpSockOpt_pst->SORxWindowMax_u16 - lTcpDynSockTbl_pst->SndWndSize_u16) )
            {
                /* ------------------------------------- */
                /* Increment local window size           */
                /* ------------------------------------- */

                /* Save the actual window size */
                lPreviousWindowSize_u16 = lTcpDynSockTbl_pst->SndWndSize_u16;

                /* Increment window by the length in argument */
                /* (as per TcpIp Autosar [SWS_TCPIP_00115]) */
                lTcpDynSockTbl_pst->SndWndSize_u16 += DataLen_u16;

                /* ------------------------------------- */
                /* If Window is reopened                 */
                /* ------------------------------------- */

                /* If the local window is now greater than 0, means the window is now opened */
                if( (lPreviousWindowSize_u16 == 0U) && (lTcpDynSockTbl_pst->SndWndSize_u16 > 0U) )
                {
                    /* Send ACK frame in the next MainFunction */
                    /* (this ACK is useful to inform the remote that our window is now reopened and the remote can send data again - see RFC1122 p92) */
                    (void)rba_EthTcp_SetNextSendFrame( TcpSockId_uo, RBA_ETHTCP_SEND_ACK_E );
                }

                /* Set the return value of the function to E_OK */
                lFunctionRetVal_en = E_OK;
            }
        }
	}

	return lFunctionRetVal_en;
}


#define RBA_ETHTCP_STOP_SEC_CODE
#include "rba_EthTcp_MemMap.h"

#endif /* #if ( defined(TCPIP_TCP_ENABLED) && ( TCPIP_TCP_ENABLED == STD_ON ) ) */






















