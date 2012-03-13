// Preliminary dokumentation of the support "board"


/****************************************************************************************
* Arduino pin assignment
*
*                  ATMega168
*                   +-\/-+
*  RST        PC6  1|    |28  PC5 (AI 5 / D19)  SDA
*  Rx   (D 0) PD0  2|    |27  PC4 (AI 4 / D18)  SDL
*  Tx   (D 1) PD1  3|    |26  PC3 (AI 3 / D17)
*       (D 2) PD2  4|    |25  PC2 (AI 2 / D16)
*  PWM+ (D 3) PD3  5|    |24  PC1 (AI 1 / D15)
*       (D 4) PD4  6|    |23  PC0 (AI 0 / D14)
*             VCC  7|    |22  GND
*             GND  8|    |21  AREF
*  osc        PB6  9|    |20  AVCC
*  osc        PB7 10|    |19  PB5 (D 13)         SCK
*  PWM+ (D 5) PD5 11|    |18  PB4 (D 12)         MISO
*  PWM+ (D 6) PD6 12|    |17  PB3 (D 11) PWM     MOSI
*       (D 7) PD7 13|    |16  PB2 (D 10) PWM     (SS)
*       (D 8) PB0 14|    |15  PB1 (D 9)  PWM
*                   +----+
****************************************************************************************/


/*

MOSFETs
   A    D3   Heated Bed
   B    D5   ?
   C    D6   ?
   D    D9   ?

Connector section
   12V
   5V
   GND

   GND
   D4     Bed ON button   LOW = Active  (internal pull-up is activated)
   D2
   D7
   D8
   A0


  RS-485
    _Re  A3
    Di   A2
    
    
    
