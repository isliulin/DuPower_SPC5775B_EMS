/********************************************************************************************************************/
/*                                                                                                                  */
/* TOOL-GENERATED SOURCECODE, DO NOT CHANGE                                                                         */
/*                                                                                                                  */
/********************************************************************************************************************/

#ifndef DEM_CFG_ENABLECONDITION_H
#define DEM_CFG_ENABLECONDITION_H

#include "Std_Types.h"

#define DEM_CFG_ENABLECONDITION_ON    STD_ON
#define DEM_CFG_ENABLECONDITION_OFF   STD_OFF
#define DEM_CFG_ENABLECONDITION       DEM_CFG_ENABLECONDITION_OFF

#define DEM_ENABLECONDITION_COUNT         0u
#define DEM_ENABLECONDITION_ARRAYLENGTH   (DEM_ENABLECONDITION_COUNT)

/* define type depends on projectspecific number of storageconditions */
/* if no storage conditions are support use uint8 to allow empty inline functions */
#if (DEM_ENABLECONDITION_ARRAYLENGTH <= 8) \
	|| (DEM_CFG_ENABLECONDITION == DEM_CFG_ENABLECONDITION_OFF)
typedef uint8 Dem_EnCoList;
#elif (DEM_ENABLECONDITION_ARRAYLENGTH <= 16)
typedef uint16 Dem_EnCoList;
#elif (DEM_ENABLECONDITION_ARRAYLENGTH <= 32)
typedef uint32 Dem_EnCoList;
#else
#error DEM currently only supports up to 32 EnableConditions
#endif

#if (DEM_CFG_ENABLECONDITION == DEM_CFG_ENABLECONDITION_ON)

#define DEM_ENCO_DemEventParameter_Can_Network_1_BusOff  (0u)
#define DEM_ENCO_DemEventParameter_Can_Network_2_BusOff  (0u)
#define DEM_ENCO_DemEventParameter_Can_Network_3_BusOff  (0u)
#define DEM_ENCO_DemEventParameter_Can_Network_4_BusOff  (0u)
#define DEM_ENCO_DemEventParameter_Can_Network_5_BusOff  (0u)
#define DEM_ENCO_DemEventParameter_Can_Network_6_BusOff  (0u)
#define DEM_ENCO_DemEventParameter_P0101F0      (0u)
#define DEM_ENCO_DemEventParameter_P0101F1      (0u)
#define DEM_ENCO_DemEventParameter_P0102F0      (0u)
#define DEM_ENCO_DemEventParameter_P0102F1      (0u)
#define DEM_ENCO_DemEventParameter_P010300      (0u)
#define DEM_ENCO_DemEventParameter_P010400      (0u)
#define DEM_ENCO_DemEventParameter_P010500      (0u)
#define DEM_ENCO_DemEventParameter_P010600      (0u)
#define DEM_ENCO_DemEventParameter_P010700      (0u)
#define DEM_ENCO_DemEventParameter_P010800      (0u)
#define DEM_ENCO_DemEventParameter_P010900      (0u)
#define DEM_ENCO_DemEventParameter_P011000      (0u)
#define DEM_ENCO_DemEventParameter_P011100      (0u)
#define DEM_ENCO_DemEventParameter_P011200      (0u)
#define DEM_ENCO_DemEventParameter_P011300      (0u)
#define DEM_ENCO_DemEventParameter_P011400      (0u)
#define DEM_ENCO_DemEventParameter_P011500      (0u)
#define DEM_ENCO_DemEventParameter_P011600      (0u)
#define DEM_ENCO_DemEventParameter_P0117F0      (0u)
#define DEM_ENCO_DemEventParameter_P0117F1      (0u)
#define DEM_ENCO_DemEventParameter_P0117F2      (0u)
#define DEM_ENCO_DemEventParameter_P0118F0      (0u)
#define DEM_ENCO_DemEventParameter_P0118F1      (0u)
#define DEM_ENCO_DemEventParameter_P0118F2      (0u)
#define DEM_ENCO_DemEventParameter_P0119F0      (0u)
#define DEM_ENCO_DemEventParameter_P0119F1      (0u)
#define DEM_ENCO_DemEventParameter_P0119F2      (0u)
#define DEM_ENCO_DemEventParameter_P0120F0      (0u)
#define DEM_ENCO_DemEventParameter_P0120F1      (0u)
#define DEM_ENCO_DemEventParameter_P0120F2      (0u)
#define DEM_ENCO_DemEventParameter_P0121F0      (0u)
#define DEM_ENCO_DemEventParameter_P0121F1      (0u)
#define DEM_ENCO_DemEventParameter_P0121F2      (0u)
#define DEM_ENCO_DemEventParameter_P0122F0      (0u)
#define DEM_ENCO_DemEventParameter_P0122F1      (0u)
#define DEM_ENCO_DemEventParameter_P0122F2      (0u)
#define DEM_ENCO_DemEventParameter_P0123F0      (0u)
#define DEM_ENCO_DemEventParameter_P0123F1      (0u)
#define DEM_ENCO_DemEventParameter_P0123F2      (0u)
#define DEM_ENCO_DemEventParameter_P012400      (0u)
#define DEM_ENCO_DemEventParameter_P012500      (0u)
#define DEM_ENCO_DemEventParameter_P012600      (0u)
#define DEM_ENCO_DemEventParameter_P012700      (0u)
#define DEM_ENCO_DemEventParameter_P012800      (0u)
#define DEM_ENCO_DemEventParameter_P012801      (0u)
#define DEM_ENCO_DemEventParameter_P012900      (0u)
#define DEM_ENCO_DemEventParameter_P013000      (0u)
#define DEM_ENCO_DemEventParameter_P013100      (0u)
#define DEM_ENCO_DemEventParameter_P013200      (0u)
#define DEM_ENCO_DemEventParameter_P013300      (0u)
#define DEM_ENCO_DemEventParameter_P013400      (0u)
#define DEM_ENCO_DemEventParameter_P0135F0      (0u)
#define DEM_ENCO_DemEventParameter_P0135F1      (0u)
#define DEM_ENCO_DemEventParameter_P0135F2      (0u)
#define DEM_ENCO_DemEventParameter_P0136F0      (0u)
#define DEM_ENCO_DemEventParameter_P0136F1      (0u)
#define DEM_ENCO_DemEventParameter_P0136F2      (0u)
#define DEM_ENCO_DemEventParameter_P0137F0      (0u)
#define DEM_ENCO_DemEventParameter_P0137F1      (0u)
#define DEM_ENCO_DemEventParameter_P0137F2      (0u)
#define DEM_ENCO_DemEventParameter_P013800      (0u)
#define DEM_ENCO_DemEventParameter_P013900      (0u)
#define DEM_ENCO_DemEventParameter_P014000      (0u)
#define DEM_ENCO_DemEventParameter_P014100      (0u)
#define DEM_ENCO_DemEventParameter_P014200      (0u)
#define DEM_ENCO_DemEventParameter_P014300      (0u)
#define DEM_ENCO_DemEventParameter_P014400      (0u)
#define DEM_ENCO_DemEventParameter_P014500      (0u)
#define DEM_ENCO_DemEventParameter_P014600      (0u)
#define DEM_ENCO_DemEventParameter_P014700      (0u)
#define DEM_ENCO_DemEventParameter_P014800      (0u)
#define DEM_ENCO_DemEventParameter_P014900      (0u)
#define DEM_ENCO_DemEventParameter_P015000      (0u)
#define DEM_ENCO_DemEventParameter_P015100      (0u)
#define DEM_ENCO_DemEventParameter_P015200      (0u)
#define DEM_ENCO_DemEventParameter_P015300      (0u)
#define DEM_ENCO_DemEventParameter_P015400      (0u)
#define DEM_ENCO_DemEventParameter_P015500      (0u)
#define DEM_ENCO_DemEventParameter_P015600      (0u)
#define DEM_ENCO_DemEventParameter_P015700      (0u)
#define DEM_ENCO_DemEventParameter_P015800      (0u)
#define DEM_ENCO_DemEventParameter_P015900      (0u)
#define DEM_ENCO_DemEventParameter_P016000      (0u)
#define DEM_ENCO_DemEventParameter_P016100      (0u)
#define DEM_ENCO_DemEventParameter_P016200      (0u)
#define DEM_ENCO_DemEventParameter_P016300      (0u)
#define DEM_ENCO_DemEventParameter_P016400      (0u)
#define DEM_ENCO_DemEventParameter_P016500      (0u)
#define DEM_ENCO_DemEventParameter_P016600      (0u)
#define DEM_ENCO_DemEventParameter_P016700      (0u)
#define DEM_ENCO_DemEventParameter_P016800      (0u)
#define DEM_ENCO_DemEventParameter_P016900      (0u)
#define DEM_ENCO_DemEventParameter_P017000      (0u)
#define DEM_ENCO_DemEventParameter_P017100      (0u)
#define DEM_ENCO_DemEventParameter_P017200      (0u)
#define DEM_ENCO_DemEventParameter_P017300      (0u)
#define DEM_ENCO_DemEventParameter_P017400      (0u)
#define DEM_ENCO_DemEventParameter_P017500      (0u)
#define DEM_ENCO_DemEventParameter_P017600      (0u)
#define DEM_ENCO_DemEventParameter_P017700      (0u)
#define DEM_ENCO_DemEventParameter_P017800      (0u)
#define DEM_ENCO_DemEventParameter_P017900      (0u)
#define DEM_ENCO_DemEventParameter_P018000      (0u)
#define DEM_ENCO_DemEventParameter_P018100      (0u)
#define DEM_ENCO_DemEventParameter_P018200      (0u)
#define DEM_ENCO_DemEventParameter_P018300      (0u)
#define DEM_ENCO_DemEventParameter_P018400      (0u)
#define DEM_ENCO_DemEventParameter_P018500      (0u)
#define DEM_ENCO_DemEventParameter_P018600      (0u)
#define DEM_ENCO_DemEventParameter_P018700      (0u)
#define DEM_ENCO_DemEventParameter_P018800      (0u)
#define DEM_ENCO_DemEventParameter_P018900      (0u)
#define DEM_ENCO_DemEventParameter_P019000      (0u)
#define DEM_ENCO_DemEventParameter_P019100      (0u)
#define DEM_ENCO_DemEventParameter_P019200      (0u)
#define DEM_ENCO_DemEventParameter_P019300      (0u)
#define DEM_ENCO_DemEventParameter_P019400      (0u)
#define DEM_ENCO_DemEventParameter_P019500      (0u)
#define DEM_ENCO_DemEventParameter_P019600      (0u)
#define DEM_ENCO_DemEventParameter_P019700      (0u)
#define DEM_ENCO_DemEventParameter_P019800      (0u)
#define DEM_ENCO_DemEventParameter_P019900      (0u)
#define DEM_ENCO_DemEventParameter_P020000      (0u)
#define DEM_ENCO_DemEventParameter_P020100      (0u)
#define DEM_ENCO_DemEventParameter_P020200      (0u)
#define DEM_ENCO_DemEventParameter_P020300      (0u)
#define DEM_ENCO_DemEventParameter_P020400      (0u)
#define DEM_ENCO_DemEventParameter_P020500      (0u)
#define DEM_ENCO_DemEventParameter_P020600      (0u)
#define DEM_ENCO_DemEventParameter_P020700      (0u)
#define DEM_ENCO_DemEventParameter_P020800      (0u)
#define DEM_ENCO_DemEventParameter_P020900      (0u)
#define DEM_ENCO_DemEventParameter_P021000      (0u)
#define DEM_ENCO_DemEventParameter_P021100      (0u)
#define DEM_ENCO_DemEventParameter_P021200      (0u)
#define DEM_ENCO_DemEventParameter_P021300      (0u)
#define DEM_ENCO_DemEventParameter_P021400      (0u)
#define DEM_ENCO_DemEventParameter_P021500      (0u)
#define DEM_ENCO_DemEventParameter_P021600      (0u)
#define DEM_ENCO_DemEventParameter_P021700      (0u)
#define DEM_ENCO_DemEventParameter_P021800      (0u)
#define DEM_ENCO_DemEventParameter_P021900      (0u)
#define DEM_ENCO_DemEventParameter_P022000      (0u)
#define DEM_ENCO_DemEventParameter_P022100      (0u)
#define DEM_ENCO_DemEventParameter_P022200      (0u)
#define DEM_ENCO_DemEventParameter_P022300      (0u)
#define DEM_ENCO_DemEventParameter_P022400      (0u)
#define DEM_ENCO_DemEventParameter_P022500      (0u)
#define DEM_ENCO_DemEventParameter_P022600      (0u)
#define DEM_ENCO_DemEventParameter_P022700      (0u)
#define DEM_ENCO_DemEventParameter_P022800      (0u)
#define DEM_ENCO_DemEventParameter_P022900      (0u)
#define DEM_ENCO_DemEventParameter_P023000      (0u)
#define DEM_ENCO_DemEventParameter_P023100      (0u)
#define DEM_ENCO_DemEventParameter_P023200      (0u)
#define DEM_ENCO_DemEventParameter_P023300      (0u)
#define DEM_ENCO_DemEventParameter_P023400      (0u)
#define DEM_ENCO_DemEventParameter_P023500      (0u)
#define DEM_ENCO_DemEventParameter_P023600      (0u)
#define DEM_ENCO_DemEventParameter_P023700      (0u)
#define DEM_ENCO_DemEventParameter_P023800      (0u)
#define DEM_ENCO_DemEventParameter_P023900      (0u)
#define DEM_ENCO_DemEventParameter_P024000      (0u)
#define DEM_ENCO_DemEventParameter_P0241F0      (0u)
#define DEM_ENCO_DemEventParameter_P0242F1      (0u)
#define DEM_ENCO_DemEventParameter_P0243F0      (0u)
#define DEM_ENCO_DemEventParameter_P024400      (0u)
#define DEM_ENCO_DemEventParameter_P024500      (0u)
#define DEM_ENCO_DemEventParameter_P024600      (0u)
#define DEM_ENCO_DemEventParameter_P024700      (0u)
#define DEM_ENCO_DemEventParameter_P024800      (0u)
#define DEM_ENCO_DemEventParameter_P024900      (0u)
#define DEM_ENCO_DemEventParameter_P025000      (0u)
#define DEM_ENCO_DemEventParameter_P025100      (0u)
#define DEM_ENCO_DemEventParameter_P025200      (0u)
#define DEM_ENCO_DemEventParameter_P025300      (0u)
#define DEM_ENCO_DemEventParameter_P025400      (0u)
#define DEM_ENCO_DemEventParameter_P025500      (0u)
#define DEM_ENCO_DemEventParameter_P025600      (0u)
#define DEM_ENCO_DemEventParameter_U010100      (0u)
#define DEM_ENCO_DemEventParameter_U010200      (0u)
#define DEM_ENCO_DemEventParameter_U010300      (0u)
#define DEM_ENCO_DemEventParameter_U010400      (0u)
#define DEM_ENCO_DemEventParameter_U010500      (0u)
#define DEM_ENCO_DemEventParameter_U010600      (0u)
#define DEM_ENCO_DemEventParameter_U010700      (0u)
#define DEM_ENCO_DemEventParameter_U010800      (0u)
#define DEM_ENCO_DemEventParameter_U010900      (0u)
#define DEM_ENCO_DemEventParameter_U011000      (0u)
#define DEM_ENCO_DemEventParameter_U011100      (0u)
#define DEM_ENCO_DemEventParameter_U011200      (0u)
#define DEM_ENCO_DemEventParameter_U011300      (0u)
#define DEM_ENCO_DemEventParameter_U011400      (0u)
#define DEM_ENCO_DemEventParameter_U011500      (0u)
#define DEM_ENCO_DemEventParameter_U011600      (0u)
#define DEM_ENCO_DemEventParameter_U011700      (0u)
#define DEM_ENCO_DemEventParameter_U011800      (0u)
#define DEM_ENCO_DemEventParameter_U011900      (0u)
#define DEM_ENCO_DemEventParameter_U012000      (0u)
#define DEM_ENCO_DemEventParameter_U012100      (0u)
#define DEM_ENCO_DemEventParameter_U012288      (0u)

#define DEM_CFG_ENCO_INITIALSTATE    (   0u \
                                      )

#endif

#endif

