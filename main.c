/* ========================================
 *
 * Copyright YOUR COMPANY, THE YEAR
 * All Rights Reserved
 * UNPUBLISHED, LICENSED SOFTWARE.
 *
 * CONFIDENTIAL AND PROPRIETARY INFORMATION
 * WHICH IS THE PROPERTY OF your company.
 *
 * ========================================
*/
#include "project.h"
#include <time.h>

void forward();
void back();
void left();
void right();
void stop();
//void obstacle(void);
//uint8 turned =0;
//uint8 obstacleSide =0;

CY_ISR_PROTO(isr_1);

int turned=0;

CY_ISR(GPIO_PSOC1_In_Handler){
   stop();
   CyDelay(100);
   //back();
   //CyDelay(100);
   forward();
   CyDelay(100);
    LED_pin_Write(0);
   //left();
   if(turned==0){
        left();
        turned = 1;
        CyDelay(1000);
        stop();
        GPIO_PSOC1_Out_Write(1);
        CyDelay(100);
        GPIO_PSOC1_In_ClearInterrupt();
        //stop();
    }
    else if(turned==1){
        right();//right();//180 degree turn
        turned=2;
        CyDelay(1000);
        stop();
        GPIO_PSOC1_Out_Write(1);
        CyDelay(100);
        GPIO_PSOC1_In_ClearInterrupt();
        //stop();
    }
    else{
        right();
        turned=0;
        CyDelay(1000);
        stop();
        GPIO_PSOC1_Out_Write(1);
        CyDelay(100);
        GPIO_PSOC1_In_ClearInterrupt();
        //stop();
    }
    CyDelay(500);
    turned++;
    GPIO_PSOC1_Out_Write(1);
    GPIO_PSOC1_In_ClearInterrupt();
}

int main(void)
{
    CyGlobalIntEnable; /* Enable global interrupts. */

    isr_1_StartEx(GPIO_PSOC1_In_Handler);
    /* Place your initialization/startup code here (e.g. MyInst_Start()) */
    PWM_1_Enable();
    PWM_1_Init();
    PWM_2_Enable();
    PWM_2_Init();
    PWM_1_Start();
    PWM_2_Start();
    

    for(;;)
    {
        GPIO_PSOC1_Out_Write(0);
        LED_pin_Write(1);
        forward();
        //CyDelay(1000);
        
    }
}

void forward(){
    PWM_1_Start();
    PWM_2_Start();
    Pin_1_Write(1);
    Pin_4_Write(1);
}
void back(){
    PWM_1_Start();
    PWM_2_Start();
    Pin_2_Write(1);
    Pin_3_Write(1);
}
void stop(){
    PWM_1_Stop();
    PWM_2_Stop();
    Pin_1_Write(0);
    Pin_2_Write(0);
    Pin_3_Write(0);
    Pin_4_Write(0);
}
void left(){
    PWM_1_Start();
    PWM_2_Start();      
    Pin_1_Write(0);
    Pin_4_Write(1);
    Pin_3_Write(0);
    Pin_2_Write(1);
}
void right(){
    PWM_1_Start();
    PWM_2_Start();
    Pin_1_Write(1);
    Pin_4_Write(0);
    Pin_3_Write(1);
    Pin_2_Write(0);
}


/* [] END OF FILE */
