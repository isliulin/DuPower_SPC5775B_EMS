#ifndef SGUS_STATE_H_
#define SGUS_STATE_H_

#include "fsm.h"

typedef parser_t sgus_parser_t;

typedef enum
{
	SGUS_SIG_ENTRY = FSM_SIG_ENTRY,
	SGUS_SIG_EXIT = FSM_SIG_EXIT,

    SGUS_SIG_CONFIRM,
    SGUS_SIG_HOMEPAGE,
    SGUS_SIG_BACK,
    SGUS_SIG_TEST,
	SGUS_SIG_LANGSEL,
	SGUS_SIG_LANG_CN,
	SGUS_SIG_LANG_EN,
	SGUS_SIG_PAYMENTCARD,
	SGUS_SIG_CARDAUTH,
	SGUS_SIG_AUTH_OK,
	SGUS_SIG_AUTH_ERR,
	SGUS_SIG_PAYMENTQRCODE,
    SGUS_SIG_WORKINFO,
    SGUS_SIG_STOPCHARGE,
    SGUS_SIG_BUTTONA,
    SGUS_SIG_BUTTONB,
    SGUS_SIG_TIMOUT,
    SGUS_SIG_FAULT,
    SGUS_SIG_CC_OK,
    SGUS_SIG_RFID_OK,
    SGUS_SIG_RFID_ERR,
    SGUS_SIG_CLOUD,
    SGUS_SIG_MODAUTOFULL,
    SGUS_SIG_MODMONEY,
    SGUS_SIG_MODTIME,
    SGUS_SIG_MODENERGY,
    SGUS_SIG_PLUGUNCONNECT,
    SGUS_SIG_PLUGCONNECT,
    SGUS_SIG_WRONGPLUGCONNECT,
    SGUS_SIG_STARTSUCCEED,
    SGUS_SIG_STARTERR,
	SGUS_SIG_STOPSUCCEED,
	SGUS_SIG_SAFEPOWEROFF_PAGE,
	SGUS_SIG_USERPOWEROFF_PAGE,
	SGUS_SIG_INPUTCONTROL_PAGE,
	SGUS_SIG_POWEROFFSELECT_PAGE,

	SGUS_SIG_CLOUD_START,
	SGUS_SIG_CLOUD_STOP,

	SGUS_SIG_DEFAULT
}sgus_signal_t;

typedef enum
{
    SGUS_STA_HOMEPAGE = 0,
	SGUS_STA_LANGSEL,
    SGUS_STA_WORKINFO,
//    SGUS_STA_DETALFAULT,
    SGUS_STA_WAITRFID,

    SGUS_STA_CARDAUTH,
    SGUS_STA_RFIDINFO,
    SGUS_STA_CARDAUTHFAIL,


	SGUS_STA_PAYMENTMETHOD,
	SGUS_STA_USERLOGIN,
	SGUS_STA_CARDLOGIN,
	SGUS_STA_QRLOGIN,
    SGUS_STA_CHARGEMODSEL,
	SGUS_STA_CHARGEMODMOENY,
	SGUS_STA_CHARGEMODTIME,
	SGUS_STA_CHARGEMODENERGY,
    SGUS_STA_PLUGUNCONNECT,
    SGUS_STA_WRONGPLUGCONNECT,
    SGUS_STA_STARTCHARGE,
    SGUS_STA_STARTCHARGERR,
    SGUS_STA_USERLOGOUT,
	SGUS_STA_CARDLOGOUT,
    SGUS_STA_STOPCHARGE,
    SGUS_STA_STOPINFO,
    SGUS_STA_SYSMANAGERLOGIN,
    SGUS_STA_SYSMANAGER,
	SGUS_STA_POWEROFFSELECT,
    SGUS_STA_SAFEPOWEROFF,
	SGUS_STA_USERPOWEROFF,
    SGUS_STA_INPUTCONTROL,
    SGUS_STA_SYSCONFIGSUCCESS,
    SGUS_STA_SYSCONFIGFAILUE
}sgus_state_t;
    


    


void SGUS_State_Task(void);

#endif
