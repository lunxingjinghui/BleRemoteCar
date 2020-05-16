#ifndef __MOTOR_DEV_H
#define __MOTOR_DEV_H


#define MOTOR_LEFT_PIN_A        17
#define MOTOR_LEFT_PIN_B        18
#define MOTOR_RIGHT_PIN_A       19
#define MOTOR_RIGHT_PIN_B       20


void MotorStop(void);
void MotorGoStraight(void);
void MotorGoBack(void);
void MotorTrunLeft(void);
void MotorTrunRight(void);

void MotorInit(void);

#endif  // __MOTOR_DEV_H
