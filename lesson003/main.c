/*
* lesson003.c
*
* Created: 09.03.2022 11:55:30
* Author : Alex Ch
* FILE:    HCMODU0082_Serial_7_Segment_Module_Example1
   DATE:    19/03/15
   VERSION: 0.2

PINOUT:

MODULE.....UNO/NANO.....MEGA
VCC........+5V..........+5V
GND........GND..........GND
DIN........11...........51
CS (LOAD)..10...........10
CLK........13...........52
*/

/* Include the HCMAX7219 and SPI library */
#include "HCMAX7219.h"
#include "SPI.h"
#include <avr/io.h>

/* Set the LOAD (CS) digital pin number*/
#define LOAD 10
 
/* Create an instance of the library */
HCMAX7219 HCMAX7219(LOAD);


void setup() 
{        
}

/* Main program */
void loop() 
{
  /* Clear the output buffer */
  HCMAX7219.Clear();
  /* Write some text to the output buffer */
  HCMAX7219.print7Seg("012345",8);
  /* Send the output buffer to the display */
  HCMAX7219.Refresh();  
  
  while(1);

}
