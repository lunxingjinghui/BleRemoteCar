/* Copyright (c) 2012 Nordic Semiconductor. All Rights Reserved.
 *
 * The information contained herein is property of Nordic Semiconductor ASA.
 * Terms and conditions of usage are described in detail in NORDIC
 * SEMICONDUCTOR STANDARD SOFTWARE LICENSE AGREEMENT.
 *
 * Licensees are granted free, non-transferable use of the information. NO
 * WARRANTY of ANY KIND is provided. This heading must NOT be removed from
 * the file.
 *
 */

/** @file
 *
 * @defgroup ble_sdk_uart_over_ble_main main.c
 * @{
 * @ingroup  ble_sdk_app_nus_eval
 * @brief    UART over BLE application main file.
 *
 * This file contains the source code for a sample application that uses the Nordic UART service.
 * This application uses the @ref srvlib_conn_params module.
 */

#include <stdint.h>
#include "BleInit.h"


extern uint8_t BleFifo[];
extern volatile uint8_t BleRecFlag;

/**@brief  Application main function.
 */
int main(void)
{
    timers_init();
    BleInit();
    
    // Enter main loop
    while (1)
    {
        if (BleRecFlag)
        {
            if (0x31 == BleFifo[0])//–≠“ÈÕ∑
            {
                switch(BleFifo[1])
                {
                    case 0x32://√¸¡Ó
                        if(BleFifo[2]==0x30)
                        {

                        }
                    break;

                    case 0x33://√¸¡Ó
                            if(BleFifo[2]==0x30)
                            {

                            }
                    break;

                    case 0x34://√¸¡Ó
                         if(BleFifo[2]==0x30)
                         {

                         }
                    break;
                }
            }

            BleRecFlag = 0;
        }

        power_manage();
    }
}

/** 
 * @}
 */
