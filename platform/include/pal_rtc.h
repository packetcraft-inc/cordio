/*************************************************************************************************/
/*!
 *  \file
 *
 *  \brief      RTC timer interface file.
 *
 *  Copyright (c) 2018 Arm Ltd.
 *
 *  Copyright (c) 2019 Packetcraft, Inc.
 *
 *  Licensed under the Apache License, Version 2.0 (the "License");
 *  you may not use this file except in compliance with the License.
 *  You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 *  Unless required by applicable law or agreed to in writing, software
 *  distributed under the License is distributed on an "AS IS" BASIS,
 *  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *  See the License for the specific language governing permissions and
 *  limitations under the License.
 */
/*************************************************************************************************/

#ifndef PAL_RTC_H
#define PAL_RTC_H

#include "pal_types.h"

#ifdef __cplusplus
extern "C" {
#endif

/*! \addtogroup PAL_RTC
 *  \{ */

/**************************************************************************************************
  Macros
**************************************************************************************************/

/*! \brief  Max value of RTC. */
#define PAL_MAX_RTC_COUNTER_VAL     (0x00FFFFFF)

/*! \brief  Clock frequency of the RTC timer used. */
#define PAL_RTC_TICKS_PER_SEC       (32768) /* RTC ticks per second (with prescaler) */

/**************************************************************************************************
  Function Declarations
**************************************************************************************************/

/* Initialization */
void PalRtcInit(void);

/* Control and Status */
void PalRtcEnableCompareIrq(void);
void PalRtcDisableCompareIrq(void);
uint32_t PalRtcCounterGet(void);
void PalRtcCompareSet(uint32_t value);
uint32_t PalRtcCompareGet(void);

/*! \} */    /* PAL_RTC */

#ifdef __cplusplus
};
#endif

#endif
