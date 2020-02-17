#pragma once
#include "Arduino.h"
class TicTacToeBoard
{
public:
	TicTacToeBoard();//Constructor
	int* GetGameBoard();//Returns updated _gridArray upon request (allows MiniMaxAI to access the private member _gridArray)
	int GetplayerPiece();//Returns which piece the player chose (X or O)
private:
	int _gridArray[3][3];//Stores the locations of pieces on the tic tac toe game board
	void updateBoard();//Reads hall effect sensors and checks players turns, gets the location of placed piece and updates _gridArray[3][3]
	void notificationLED();//Lights up appropriate LEDS based on occupied locations in the gameboard
	void pinSetup();//Initializes inputs and outputs for the game board based on PIN definitions from the DEFINITIONS.h header
	void CheckPlayerPiece();//Checks whether player chose the X or O piece to play with
	//int _playerPiece;//Stores player piece (X or O)
	int count = 0;
	int LED_Array[9] = { 0,0,0,0,0,0,0,0,0 }; //Stores 0 or 1 to indicate which LED should be on or off which correspond to the X or O piece on the board
};

