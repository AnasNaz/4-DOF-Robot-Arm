/*
 Name:		_3_DOF_Robot_Arm.ino
 Created:	2/2/2020 6:23:41 PM
 Author:	anas8
*/
#include "MiniMaxAI.h"
#include "RobotArm.h"
#include "TicTacToeBoard.h"

//#include "Robfkine/Robfkine.h"
// the setup function runs once when you press reset or power the board
void setup() {
	Serial.begin(9600);
	//Serial.println("Hello World");
	//MiniMaxAI AI;
	RobotArm MK2_ARM;
	/*double output[3];
	Robfkine(0, 0, 0, output);
	Serial.println(*(output));
	Serial.println(*(output+1));
	Serial.println(*(output + 2));*/
	//TicTacToeBoard TTT;
}

// the loop function runs over and over again until power down or reset
void loop() {
  
}
void Robfkine(double th1, double th2, double th3, double output[3])
{
	double output_tmp;
	double b_output_tmp;
	double c_output_tmp;
	double d_output_tmp;
	output_tmp = th1 + th2;
	b_output_tmp = th1 - th2;
	c_output_tmp = output_tmp + th3;
	d_output_tmp = (th2 - th1) + th3;
	output[0] = ((68.0 * cos(b_output_tmp) + 124.0 * cos(c_output_tmp)) + 124.0 *
		cos(d_output_tmp)) + 68.0 * cos(output_tmp);
	output[1] = ((68.0 * sin(b_output_tmp) + 124.0 * sin(c_output_tmp)) - 124.0 *
		sin(d_output_tmp)) + 68.0 * sin(output_tmp);
	output[2] = (248.0 * sin(th2 + th3) + 136.0 * sin(th2)) + 93.6;
}
