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
#include <project.h>
#include <stdlib.h>
#include <stdio.h>


#define TRANSMIT_BUFFER_SIZE  16

int read_distance();
int distance = 0;
int canRead=1;

CY_ISR(GPIO_PSOC2_In_Handler){
    canRead=1;
    CyDelay(3000);
//    turn_pin_Write(0);
    GPIO_PSOC2_In_ClearInterrupt();
}

int main( void ) {
	
    UART_1_Start();
    CyGlobalIntEnable; 	
    uint8 counter =0;
    // Uncomment this line to enable global interrupts.
    
    
    
    

    //uint8 p1 = 0;
    int read_distance();
    isr_1_StartEx(GPIO_PSOC2_In_Handler);
    
    
    
    
    //unsigned int i,j;
    //for(i=0;i<100;i++);
    //for(j=0;j<1000;j++)
    
    /*for(i=0;i<10;i++);
    for(j=0;j<100;i++)
    {
        while(1)
        {
            p1=0x3f; //for 0
            CyDelay(100);
            p1=0x06; //for 1
            CyDelay(100);
            p1=0x5b; // for 2
            CyDelay(100);
            
            p1=0x4f; //for 3
            CyDelay(100);
            p1=0x66; //for 4
            CyDelay(100);
            p1=0x6d; // for 5
            CyDelay(100);
            
            p1=0x7d; //for 6
            CyDelay(100);
            p1=0x07; //for 7
            CyDelay(100);
            p1=0x7f; // for 8
            CyDelay(100);
            
            p1=0x6F; // for 9
            CyDelay(100);
            
        }
    }*/
    LCD_Start();
    LCD_ClearDisplay();
    
   // LCD_Position(16,2);
    //LCD_PrintString(" Sensor ");
  //  LCD_Position(1,4);
    //LCD_PrintString(" HC-Sr04" );
    //LCD_Position(2,0);
    //LCD_PrintString("Distance:" );
    
    
	TimeDistMeas_Start( );         				// Start up the distance measuring timer, basically ,measure PW of pulse HC-SRO4 generates

    for(;;) {

        if(canRead==1){
            distance = read_distance();
        }
        if(distance<=5){
            GPIO_PSOC2_Out_Write(1);
            canRead=0;
        }
        GPIO_PSOC2_Out_Write(0);
//        turn_pin_Write(1);
        LCD_Position(0,6);
        LCD_PrintString("Counter: ");
        LCD_PrintNumber(counter);
        counter++;
        CyDelay(500);
	}
  



}

int read_distance(){
    uint16 	TimeDistMeas 	= 0;					// Value read from TimeDistMeas, eg HC-SRO4 PW returned, in 1 uS increments
    float 	distmeas 		= 0.0;					// Value measured, uS / 148 = inches
    char TransmitBuffer[TRANSMIT_BUFFER_SIZE];
    //int value_counter=0;
    //float distance = 0.0;
    char imp[9];
    
    	
	while( DistOutHCSRO4_Read( ) == 0 ) { 					// HC-SRO4 ready for a trigger, to start new measurement cycle ?
		
		Triggen_Write( 1 ); 								// Trigger the HC-SRO4 to issue the 10 uS start pulse, and reset TimeDistMeas
		CyDelayUs( 10 );									// Trigger high for 10 uS
		Triggen_Write( 0 );									// Remove trigger and reset from TimeDistMeas
		CyDelay( 1 );										// Delay 1 mS to see if HC-SRO4 started a measurement, if not issue another trigger to HC-SRO4
		
	}
	while( DistOutHCSRO4_Read( ) == 1 ) { };				// Wait until HC-SRO4 finishes measurement cycle

	TimeDistMeas = 65535 - TimeDistMeas_ReadCounter( );		// Get timer value, PW in uS, of HC-SRO4
	distmeas = (float) TimeDistMeas / 148.0;		
    TimeDistMeas=TimeDistMeas/148;
	
	sprintf( imp, "%.2f cm", distmeas );					// Convert distmeas to a string to print on LCD
    sprintf(TransmitBuffer,"%d\r\n",TimeDistMeas);
    //sprintf(TransmitBuffer,"%d\r\n",TimeDistMeas_ReadCounter( ));
    UART_1_PutString(TransmitBuffer);
	CyDelay( 100 );	
    // Wait 100 mS before triggering the HC-SRO4 module again
    //LCD_Position(3,11);
    //LCD_PrintString(imp);
    
    return TimeDistMeas;
}

/*CY_ISR(isr_1_Interrupt){
    canRead=1;   
}
}/*/
/* [] END OF FILE */
