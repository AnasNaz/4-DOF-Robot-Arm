#pragma once
/*
	Description: DEFINITIONS.h is a header file that defines useful variables that will be available throughout the whole program such as
				 the values for the X or O piece, gamestates (playing state, game over, game won, game draw) and even PIN definitions
				 for each component which will help in setting up outputs and inputs.
	Purpose:	 Greatly improves readability and allows for easy adjustments to such variables.
*/

/*Pin Definitions*/
//Hall Effect Sensors
const int HallPin1 = 2;
const int HallPin2 = 3;
const int HallPin3 = 4;
const int HallPin4 = 5;
const int HallPin5 = 6;
const int HallPin6 = 7;
const int HallPin7 = 8;
const int HallPin8 = 9;
const int HallPin9 = 10;
//LED Pins
const int LEDPins[10] = { 22,24,26,28,30,32,34,36,38 };
/*const int LED1 = 22;
const int LED2 = 24;
const int LED3 = 26;
const int LED4 = 28;
const int LED5 = 30;
const int LED6 = 32;
const int LED7 = 34;
const int LED8 = 36;
const int LED9 = 38;*/
//Potentiometers
const int POT1 = 0;
const int POT2 = 1;
const int POT3 = 2;
/*Definitions for game states*/

/*Tic Tac Toe Board definitions*/
#define X_PIECE 1
#define O_PIECE 0
#define EMPTY_PIECE -1
#define PLAYER_PIECE X_PIECE
#define AI_PIECE O_PIECE
