/*
 * homework4.h
 *
 *  Created on: 4/8/2020
 *      Author: Mithil Adsul
 */

#ifndef HOMEWORK4_H_
#define HOMEWORK4_H_

//Struct Declaration for UART
typedef struct _eUSCI_eUSCI_UART_Config
{
    uint_fast8_t selectClockSource;
    uint_fast16_t clockPrescalar;
    uint_fast8_t firstModReg;
    uint_fast8_t secondModReg;
    uint_fast8_t parity;
    uint_fast16_t msborLsbFirst;
    uint_fast16_t numberofStopBits;
    uint_fast16_t uartMode;
    uint_fast8_t overSampling;
    uint_fast8_t dataLength;
} eUSCI_UART_Config;




// This function initializes the board by turning off the Watchdog Timer.
void initBoard();
bool charFSM(char rChar); //Character Checker - Finite State Machine

// TODO: Define any constants that are local to homework.c using #define


#endif /* HOMEWORK4_H_ */
