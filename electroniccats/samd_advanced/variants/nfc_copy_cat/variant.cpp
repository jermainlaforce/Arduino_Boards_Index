/*
  Copyright (c) 2014-2015 Arduino LLC.  All right reserved.
  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.
  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
  See the GNU Lesser General Public License for more details.
  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/


#include "variant.h"

/*
 * Pins descriptions
 */
const PinDescription g_APinDescription[]=
{
  // 0,1
  { PORTA,  0, PIO_MULTI, PIN_ATTR_NONE, NOT_ON_TIMER, No_ADC_Channel, EXTERNAL_INT_NONE }, // NC
  { PORTA,  1, PIO_MULTI, PIN_ATTR_NONE, NOT_ON_TIMER, No_ADC_Channel, EXTERNAL_INT_NONE }, //NC

  //GPIO 2 - IRQ
  { PORTA,  2, PIO_MULTI, PIN_ATTR_DIGITAL, NOT_ON_TIMER, No_ADC_Channel, EXTERNAL_INT_2 }, // IRQ
  
  { PORTA,  3, PIO_MULTI, PIN_ATTR_NONE, NOT_ON_TIMER, No_ADC_Channel, EXTERNAL_INT_NONE },  // NC
  { PORTA,  4, PIO_MULTI, PIN_ATTR_NONE, NOT_ON_TIMER, No_ADC_Channel, EXTERNAL_INT_NONE }, // LED3
  { PORTA,  5, PIO_MULTI, PIN_ATTR_NONE, NOT_ON_TIMER, No_ADC_Channel, EXTERNAL_INT_NONE }, // LED2
  
  // COIL - GPIO 6,7 DIGITAL PINS 
  { PORTA,  6, PIO_MULTI, PIN_ATTR_DIGITAL, NOT_ON_TIMER, No_ADC_Channel, EXTERNAL_INT_6 }, // IN_A
  { PORTA,  7, PIO_MULTI, (PIN_ATTR_DIGITAL|PIN_ATTR_TIMER),  TCC1_CH0, No_ADC_Channel, EXTERNAL_INT_7 }, // IN_B
  
  //SPI FLASH
  { PORTA,  8, PIO_MULTI, PER_ATTR_SERCOM_ALT, NOT_ON_TIMER, No_ADC_Channel, EXTERNAL_INT_NONE }, // MOSI
  { PORTA,  9, PIO_MULTI, PER_ATTR_SERCOM_ALT, NOT_ON_TIMER, No_ADC_Channel, EXTERNAL_INT_NONE }, // SCK
  { PORTA,  10, PIO_MULTI, PIN_ATTR_DIGITAL, NOT_ON_TIMER, No_ADC_Channel, EXTERNAL_INT_NONE }, // SS2
  { PORTA,  11, PIO_MULTI, PER_ATTR_SERCOM_ALT, NOT_ON_TIMER, No_ADC_Channel, EXTERNAL_INT_NONE }, // MISO
  
  //12 and 13 dont exist
  { NOT_A_PORT, 0, PIO_NOT_A_PIN, PIN_ATTR_NONE, NOT_ON_TIMER, No_ADC_Channel, EXTERNAL_INT_NONE },
  { NOT_A_PORT, 0, PIO_NOT_A_PIN, PIN_ATTR_NONE, NOT_ON_TIMER, No_ADC_Channel, EXTERNAL_INT_NONE },

  //Pins 14- LED
  { PORTA, 14, PIO_MULTI, PIN_ATTR_DIGITAL, NOT_ON_TIMER, No_ADC_Channel, EXTERNAL_INT_14 }, // LED1
  
  { PORTA, 15, PIO_MULTI, PIN_ATTR_DIGITAL, NOT_ON_TIMER, No_ADC_Channel, EXTERNAL_INT_NONE },
  
  // 16..19 - SPI
  { PORTA, 16, PIO_MULTI, (PIN_ATTR_DIGITAL|PER_ATTR_SERCOM_ALT), NOT_ON_TIMER, No_ADC_Channel, EXTERNAL_INT_NONE }, //
  { PORTA, 17, PIO_MULTI, (PIN_ATTR_DIGITAL|PER_ATTR_SERCOM_ALT), NOT_ON_TIMER, No_ADC_Channel, EXTERNAL_INT_NONE }, //
  { PORTA, 18, PIO_MULTI, (PIN_ATTR_DIGITAL|PER_ATTR_SERCOM_ALT), NOT_ON_TIMER, No_ADC_Channel, EXTERNAL_INT_NONE }, //
  { PORTA, 19, PIO_MULTI, (PIN_ATTR_DIGITAL|PER_ATTR_SERCOM_ALT), NOT_ON_TIMER, No_ADC_Channel, EXTERNAL_INT_NONE }, //

  //GPIO 20 and 21 dont exist 
  { NOT_A_PORT, 0, PIO_NOT_A_PIN, PIN_ATTR_DIGITAL, NOT_ON_TIMER, No_ADC_Channel, EXTERNAL_INT_NONE },
  { NOT_A_PORT, 0, PIO_NOT_A_PIN, PIN_ATTR_DIGITAL, NOT_ON_TIMER, No_ADC_Channel, EXTERNAL_INT_NONE },

  { PORTA, 22, PIO_MULTI, 0, NOT_ON_TIMER, No_ADC_Channel, EXTERNAL_INT_NONE }, //
  { PORTA, 23, PIO_MULTI, 0, NOT_ON_TIMER, No_ADC_Channel, EXTERNAL_INT_NONE }, // 
  
  // USB - 24,25
  { PORTA, 24, PIO_MULTI, (PIN_ATTR_DIGITAL|PIN_ATTR_COM), NOT_ON_TIMER, No_ADC_Channel, EXTERNAL_INT_NONE }, // USB/DM
  { PORTA, 25, PIO_MULTI, (PIN_ATTR_DIGITAL|PIN_ATTR_COM), NOT_ON_TIMER, No_ADC_Channel, EXTERNAL_INT_NONE }, // USB/DP
  
  //GPIO dont exist 
  { NOT_A_PORT, 0, PIO_NOT_A_PIN, PIN_ATTR_DIGITAL, NOT_ON_TIMER, No_ADC_Channel, EXTERNAL_INT_NONE },
  
  // Switches - 27, 28
  { PORTA, 27, PIO_MULTI, PIN_ATTR_DIGITAL, NOT_ON_TIMER, No_ADC_Channel, EXTERNAL_INT_NONE }, // SWD
  { PORTA, 28, PIO_MULTI, PIN_ATTR_DIGITAL, NOT_ON_TIMER, No_ADC_Channel, EXTERNAL_INT_NONE }, // SWD
  
  //GPIO dont exist 
  { NOT_A_PORT, 0, PIO_NOT_A_PIN, PIN_ATTR_DIGITAL, NOT_ON_TIMER, No_ADC_Channel, EXTERNAL_INT_NONE },
  
  //SWD PORT - 30,31
  { PORTA, 30, PIO_MULTI, PIN_ATTR_DIGITAL, NOT_ON_TIMER, No_ADC_Channel, EXTERNAL_INT_NONE },
  { PORTA, 31, PIO_MULTI, PIN_ATTR_DIGITAL, NOT_ON_TIMER, No_ADC_Channel, EXTERNAL_INT_NONE },

} ;

const void* g_apTCInstances[TCC_INST_NUM+TC_INST_NUM]={ TCC0, TCC1, TCC2, TC3, TC4, TC5 } ;

// Multi-serial objects instantiation
SERCOM sercom0( SERCOM0 ) ;
SERCOM sercom1( SERCOM1 ) ;
SERCOM sercom2( SERCOM2 ) ;
SERCOM sercom3( SERCOM3 ) ;

