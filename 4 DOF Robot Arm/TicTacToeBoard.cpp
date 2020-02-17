#include "TicTacToeBoard.h"
#include "DEFINITIONS.h"

TicTacToeBoard::TicTacToeBoard()
{	
	/*this->_gridArray[0][0] = 1;
	this->_gridArray[0][1] = 0;
	this->_gridArray[0][2] = 1;
	this->_gridArray[1][0] = 0;
	this->_gridArray[1][1] = 0;
	this->_gridArray[1][2] = -1;
	this->_gridArray[2][0] = 1;
	this->_gridArray[2][1] = -1;
	this->_gridArray[2][2] = -1;
	/*   char board[3][3] =
	{
		{ 'x', 'o', 'x' },
		{ 'o', 'o', '_' },
		{ 'x', '_', '_' }
	};
  */
	//this->pinSetup();
	for (int i = 0;i < 3;i++)
	{
		for (int j = 0;j < 3;j++)
		{
			this->_gridArray[i][j] = -1;
		}
	}
	//while (1)
	//{
	//	delay(2000);
		//this->updateBoard();

	//}
}

/*Gets updated _gridArray upon request (allows MiniMaxAI to access the private member _gridArray)*/
int* TicTacToeBoard::GetGameBoard()
{
	this->updateBoard();
	return &this->_gridArray[0][0];
}

/*Returns which piece the player chose (X or O)*/
int TicTacToeBoard::GetplayerPiece()
{

}
bool ledState = false;

/*Reads hall effect sensors and checks players turns, gets the location of placed piece and updates _gridArray[3][3]*/
void TicTacToeBoard::updateBoard()
{
	int temp = count;
	do
	{
		delay(1000);
		if (!digitalRead(2))
		{
			// Serial.println("Detected");
			count++;
			//delay(1000);
			Serial.println("0, 0");
			this->_gridArray[0][0] = 1;
			this->LED_Array[0] = 1;
		}
		else if (!digitalRead(3))
		{
			count++;
			Serial.println("0, 1");
			this->_gridArray[0][1] = 1;
			this->LED_Array[1] = 1;
		}
		else if (!digitalRead(4))
		{
			count++;
			Serial.println("0, 2");
			this->_gridArray[0][2] = 1;
			this->LED_Array[2] = 1;
		}
		else if (!digitalRead(5))
		{
			count++;
			Serial.println("1, 0");
			this->_gridArray[1][0] = 1;
			this->LED_Array[3] = 1;
		}
		else if (!digitalRead(6))
		{
			count++;
			Serial.println("1, 1");
			this->_gridArray[1][1] = 1;
			this->LED_Array[4] = 1;
		}
		else if (!digitalRead(7))
		{
			count++;
			Serial.println("1, 2");
			this->_gridArray[1][2] = 1;
			this->LED_Array[5] = 1;
		}
		else if (!digitalRead(8))
		{
			count++;
			Serial.println("2, 0");
			this->_gridArray[2][0] = 1;
			this->LED_Array[6] = 1;
		}
		else if (!digitalRead(9))
		{
			count++;
			Serial.println("2, 1");
			this->_gridArray[2][1] = 1;
			this->LED_Array[7] = 1;
		}
		else if (!digitalRead(10))
		{
			count++;
			Serial.println("2, 2");
			this->_gridArray[2][2] = 1;
			this->LED_Array[8] = 1;
		}
		else
		{
		}
		//digitalWrite(13, ledState);
		//for (int i = 0;i < 3;i++)
		//{
			//for (int j = 0;j < 3;j++)
			//{
				//if (this->_gridArray[i][j] == 1)
				//{
		Serial.println(count);
		if (count == temp)
		{
			Serial.println("No input detected");
		}
	} while (count == temp);
	this->notificationLED();
}

/*Lights up appropriate LEDS based on occupied locations in the gameboard*/
void TicTacToeBoard::notificationLED()
{
	for (int i = 0;i < 9;i++)
	{
		if (this->LED_Array[i] == 1)
		{
			//digitalWrite(LEDPins[i], HIGH);
			Serial.print("Pin ");Serial.print(i);Serial.println(" is ON");
		}
		else
		{
			//digitalWrite(LEDPins[i], LOW);
		}
	}
}
/*Initializes inputs and outputs for the game board based on PIN definitions from the DEFINITIONS.h header*/
void TicTacToeBoard::pinSetup()
{
	pinMode(13, OUTPUT);
	/*Initializing hall effect sensors*/
	pinMode(HallPin1, INPUT);
	pinMode(HallPin2, INPUT);
	pinMode(HallPin3, INPUT);
	pinMode(HallPin4, INPUT);
	pinMode(HallPin5, INPUT);
	pinMode(HallPin6, INPUT);
	pinMode(HallPin7, INPUT);
	pinMode(HallPin8, INPUT);
	pinMode(HallPin9, INPUT);
	/*Initializing LED Pins*/
	for (int i = 0;i < 10;i++)
	{
		pinMode(LEDPins[i], OUTPUT);
	}
	/*pinMode(LED1, OUTPUT);
	pinMode(LED2, OUTPUT);
	pinMode(LED3, OUTPUT);
	pinMode(LED4, OUTPUT);
	pinMode(LED5, OUTPUT);
	pinMode(LED6, OUTPUT);
	pinMode(LED7, OUTPUT);
	pinMode(LED8, OUTPUT);
	pinMode(LED9, OUTPUT);*/
}
