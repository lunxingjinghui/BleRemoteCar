#include "PotocolParser.h"
#include "MotorDev.h"
#include <stdint.h>


extern uint8_t BleFifo[];
extern uint8_t BleRecLen;
extern volatile uint8_t BleRecFlag;


/**@brief  –≠“ÈΩ‚Œˆ
 */
void PotocolParser(void)
{
    if (BleRecFlag)
    {
        if (POTOCAL_HEAD == BleFifo[0] && POTOCAL_TAIL == BleFifo[2] && POTOCAL_LEN == BleRecLen)
        {
            switch(BleFifo[1])
            {
                case 0x01:
                    MotorGoStraight();
                break;

                case 0x02:
                    MotorGoBack();
                break;

                case 0x03:
                    MotorTrunLeft();
                break;

                case 0x04:
                    MotorTrunRight();
                break;

                default:
                    MotorStop();
                break;
            }
        }

        BleRecLen = 0;
        BleRecFlag = 0;
    }
}

/** 
 * @}
 */
