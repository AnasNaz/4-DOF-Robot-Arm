#pragma once
#include "MiniMaxAI.h"
#include "Servo/src/Servo.h"
#include "DEFINITIONS.h"
class RobotArm
{
public:
	RobotArm();//Constructor that calibrates the Robot Arm and calls the Run function which listens to the useer request for the desired mode, manual control, teaching mode or playing tic tac toe
private:
	void pinSetup(); //Initializes inputs and outputs for the game board based on PIN definitions from the DEFINITIONS.h header
	void calibration();//Calibrates servo positions and offsets
	void home();//Returns the robot arm back to rest position
	void CheckUserInput();//Checks whether user chose manual mode, teaching mode or play TicTacToe against the robot arm
	void TeachMode();//Detaches servos, gets servos' positions from feedback hack and stores the values on the EEPROM storage to play the same movements set manually by user again.
	void ManualMode();//Allows user to manually control the robot arm through 4 potentiometers
	void playTicTacToe();//Autonomously plays tic tac toe against the player using the MiniMaxAI and TicTacToeboard classes
	int GetServoPosition();//Gets current servos positions, and filters the reading due to noise introduced by the wire feedback hack.
	void moveTo();//Still unsure what this should do for now.
	int _gridArrayPositions[3][3];//Stores predefined angles to pick and place an X or O piece to the appropriate location.
	MiniMaxAI gameAI;//MiniMaxAI object. gameAI informs the Robot Arm of the optimal play to perform if applicable and also updates gameState.
	int _gameState;//Tracks the state of the game, player playing, robot playing, game over, or draw state.
	void Run();//Starts the Robot Arm and includes the Main logic of the system as described in the UML Activity diagram.
};

