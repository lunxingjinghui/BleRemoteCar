#include "MotorDev.h"
#include "nrf_gpio.h"


/**@brief  MotorStop.
 */
void MotorStop(void)
{
    nrf_gpio_pin_clear(MOTOR_LEFT_PIN_A);
    nrf_gpio_pin_clear(MOTOR_LEFT_PIN_B);
    nrf_gpio_pin_clear(MOTOR_RIGHT_PIN_A);
    nrf_gpio_pin_clear(MOTOR_RIGHT_PIN_B);
}

/**@brief  MotorGoStraight.
 */
void MotorGoStraight(void)
{
    nrf_gpio_pin_set(MOTOR_LEFT_PIN_A);
    nrf_gpio_pin_clear(MOTOR_LEFT_PIN_B);
    nrf_gpio_pin_set(MOTOR_RIGHT_PIN_A);
    nrf_gpio_pin_clear(MOTOR_RIGHT_PIN_B);
}

/**@brief  MotorGoStraight.
 */
void MotorGoBack(void)
{
    nrf_gpio_pin_clear(MOTOR_LEFT_PIN_A);
    nrf_gpio_pin_set(MOTOR_LEFT_PIN_B);
    nrf_gpio_pin_clear(MOTOR_RIGHT_PIN_A);
    nrf_gpio_pin_set(MOTOR_RIGHT_PIN_B);
}

/**@brief  MotorTrunLeft.
 */
void MotorTrunLeft(void)
{
    nrf_gpio_pin_clear(MOTOR_LEFT_PIN_A);
    nrf_gpio_pin_clear(MOTOR_LEFT_PIN_B);
    nrf_gpio_pin_set(MOTOR_RIGHT_PIN_A);
    nrf_gpio_pin_clear(MOTOR_RIGHT_PIN_B);
}

/**@brief  MotorTrunRight.
 */
void MotorTrunRight(void)
{
    nrf_gpio_pin_set(MOTOR_LEFT_PIN_A);
    nrf_gpio_pin_clear(MOTOR_LEFT_PIN_B);
    nrf_gpio_pin_clear(MOTOR_RIGHT_PIN_A);
    nrf_gpio_pin_clear(MOTOR_RIGHT_PIN_B);
}


/**@brief  Motor Init.
 */
void MotorInit(void)
{
    nrf_gpio_cfg_output(MOTOR_LEFT_PIN_A);
    nrf_gpio_cfg_output(MOTOR_LEFT_PIN_B);
    nrf_gpio_cfg_output(MOTOR_RIGHT_PIN_A);
    nrf_gpio_cfg_output(MOTOR_RIGHT_PIN_B);

    MotorStop();
}

/** 
 * @}
 */
