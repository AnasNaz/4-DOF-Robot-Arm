#include "RobotArm.h"
#include "Arduino.h"
/*RobotArm.cpp
  Description: Include the function definitions and main logic of the robot arm
 */

/*Constructor that calibrates the Robot Arm and calls the Run function which listens to the useer request for the desired mode, manual control, teaching mode or playing tic tac toe*/
RobotArm::RobotArm()
{
	Serial.println("Setting up pins");
	this->pinSetup();
	Serial.println("Calibrating Robot Arm");
	this->calibration();
	Serial.println("Going to rest position");
	this->home();
	Serial.println("Calling Run Function");
	this->Run();
}
/*Initializes inputs and outputs for the game board based on PIN definitions from the DEFINITIONS.h header*/
void RobotArm::pinSetup()
{
	pinMode(POT1, INPUT);
	pinMode(POT2, INPUT);
	pinMode(POT3, INPUT);
}

/*Calibrates servo positions and offsets*/
void  RobotArm::calibration()
{

}

/*Returns the robot arm back to rest position*/
void  RobotArm::home()
{

}

/*Checks whether user chose manual mode, teaching mode or play TicTacToe against the robot arm*/
void RobotArm::CheckUserInput()
{
	bool flag = false; //Variable to check input
	/* Checking user input; This could be implemented with buttons instead of using Serial Monitor*/
	int UserInput; 
	Serial.println("Please enter desired mode: M (Manual Control), T (Teach Mode) & P (Play Tic Tac Toe)");
	do 
	{
		while (Serial.available() == 0)
		{

		}
		UserInput = Serial.read();
		//Serial.println("You entered: ");Serial.println(UserInput);
		switch (UserInput)
		{
		case(77):
			Serial.println("Manual Mode");
			flag = true;
			this->ManualMode();
			break;
		case(84):
			Serial.println("Teach Mode");
			flag = true;
			this->TeachMode();
			break;
		case(80):
			Serial.println("Play Tic Tac Toe Mode");
			flag = true;
			this->playTicTacToe();
		default:
			Serial.println("Invalid Input! Enter M, T or P only");
			break;
		}
	} while (!flag);
	
}

/*Detaches servos, gets servos' positions from feedback hack and stores the values on the EEPROM storage to play the same movements set manually by user again.*/
void RobotArm::TeachMode()
{

}

/*Allows user to manually control the robot arm through 4 potentiometers*/
void RobotArm::ManualMode()
{
	Servo base1;
	Servo base2;
	Servo base3;
	base1.attach(11);
	base2.attach(13);
	base3.attach(50);
	int val = 0;
	int val2 = 0;
	int val3 = 0;
	while (1)
	{
		val = analogRead(POT1);
		val = map(val, 0, 1023, 0, 180);
		Serial.println(val);
		base1.write(val);
		delay(25);
		val2 = analogRead(POT2);
		val2 = map(val2, 0, 1023, 0, 180);
		Serial.println(val2);
		base2.write(val2);
		delay(25);
		val3 = analogRead(POT3);
		val3 = map(val3, 0, 1023, 0, 180);
		Serial.println(val3);
		base3.write(val3);
		delay(25);
	}
}

/*Autonomously plays tic tac toe against the player using the MiniMaxAI and TicTacToeboard classes*/
void RobotArm::playTicTacToe()
{

}

/*Gets current servos positions, and filters the reading due to noise introduced by the wire feedback hack*/
int RobotArm::GetServoPosition()
{

}

/*Still unsure what this should do for now*/
void RobotArm::moveTo()
{

}

/*Starts the Robot Arm and includes the Main logic of the system as described in the UML Activity diagram*/
void RobotArm::Run()
{
	this->CheckUserInput();
}