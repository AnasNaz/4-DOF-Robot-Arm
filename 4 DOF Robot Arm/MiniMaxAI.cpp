#include "MiniMaxAI.h"
#include "DEFINITIONS.h"
#include "Arduino.h"
/*Constructor: Initializes gridArray from TicTacToeBoard object
			   (TicTacToeBoard Class will also provide methods
			   to update the positions of the GridArray)*/
MiniMaxAI::MiniMaxAI()
{
	//this->updateGrid();
	//MiniMaxAI::Move bestMove;
	//bestMove = MiniMaxAI::findBestMove();
	//Serial.println("Row" + bestMove.row);
	//Serial.println("Column" + bestMove.col);
	//this->playerPiece = board.GetplayerPiece(); //Set the player piece based on player's choice X or O
	//for now lets assign it manually
	this->playerPiece = X_PIECE;
	if (O_PIECE == playerPiece)// Accordingly, set the AI piece 
	{
		aiPiece = X_PIECE;
	}
	else
	{
		aiPiece = O_PIECE;
	}
	/*Serial.println("Move magnet");
	delay(1200);
	this->updateGrid();
	bestMove = MiniMaxAI::findBestMove();
	delay(1200);
	this->updateGrid();
	bestMove = MiniMaxAI::findBestMove();
	delay(1200);
	this->updateGrid();
	bestMove = MiniMaxAI::findBestMove();*/
}
/* Returns true if there are moves remaining on the board and
   false if there are no moves left to play.*/
bool MiniMaxAI::isMovesLeft()
{
	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 3; j++)
			if (this->_gridArray[i][j] == EMPTY_PIECE)
				return true;
	return false;
}
/*Returns a value based on who is winning (AI or human player)
  If AI wins on the board we give it a positive value of +10.
  If Player wins on the board we give it a negative value of -10.
  If no one has won or the game results in a draw then we give a value of +0*/
int MiniMaxAI::evaluate()
{
	// Checking for Rows for X or O victory. 
	for (int row = 0; row < 3; row++)
	{
		if (this->_gridArray[row][0] == this->_gridArray[row][1] &&
			this->_gridArray[row][1] == this->_gridArray[row][2])
		{
			if (this->_gridArray[row][0] == AI_PIECE)
				return +10;
			else if (this->_gridArray[row][0] == PLAYER_PIECE)
				return -10;
		}
	}
	// Checking for Columns for X or O victory. 
	for (int col = 0; col < 3; col++)
	{
		if (this->_gridArray[0][col] == this->_gridArray[1][col] &&
			this->_gridArray[1][col] == this->_gridArray[2][col])
		{
			if (this->_gridArray[0][col] == AI_PIECE)
				return +10;

			else if (this->_gridArray[0][col] == PLAYER_PIECE)
				return -10;
		}
	}
	// Checking for Diagonals for X or O victory. 
	if (this->_gridArray[0][0] == this->_gridArray[1][1] && this->_gridArray[1][1] == this->_gridArray[2][2])
	{
		if (this->_gridArray[0][0] == AI_PIECE)
			return +10;
		else if (this->_gridArray[0][0] == PLAYER_PIECE)
			return -10;
	}
	if (this->_gridArray[0][2] == this->_gridArray[1][1] && this->_gridArray[1][1] == this->_gridArray[2][0])
	{
		if (this->_gridArray[0][2] == AI_PIECE)
			return +10;
		else if (this->_gridArray[0][2] == PLAYER_PIECE)
			return -10;
	}
	// Else if none of the players have won then return 0 
	return 0;
}
/*Goes through all possible ways the game can go and returns the best value for that move*/
int MiniMaxAI::minimax(int depth, bool isMax)
{
	int score = this->evaluate(); //Get Score of board
	// If Maximizer has won the game return his/her 
		// evaluated score 
	if (score == 10)
		return score;

	// If Minimizer has won the game return his/her 
	// evaluated score 
	if (score == -10)
		return score;

	// If there are no more moves and no winner then 
	// it is a tie 
	if (isMovesLeft() == false)
		return 0;

	// If this is maximizer's move 
	if (isMax)
	{
		int best = -1000;

		// Traverse all cells 
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				// Check if cell is empty 
				if (this->_gridArray[i][j] == EMPTY_PIECE)
				{
					// Make the move 
					this->_gridArray[i][j] = AI_PIECE;

					// Call minimax recursively and choose 
					// the maximum value 
					best = max(best,
						minimax(depth + 1, !isMax));

					// Undo the move 
					this->_gridArray[i][j] = EMPTY_PIECE;
				}
			}
		}
		return best;
	}

	// If this is minimizer's move 
	else
	{
		int best = 1000;

		// Traverse all cells 
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				// Check if cell is empty 
				if (this->_gridArray[i][j] == EMPTY_PIECE)
				{
					// Make the move 
					this->_gridArray[i][j] = PLAYER_PIECE;

					// Call minimax recursively and choose 
					// the minimum value 
					best = min(best,
						minimax(depth + 1, !isMax));

					// Undo the move 
					this->_gridArray[i][j] = EMPTY_PIECE;
				}
			}
		}
		return best;
	}
}
/*This will return the best possible move for the player */
MiniMaxAI::Move MiniMaxAI::findBestMove()
{
	int bestVal = -1000;
	MiniMaxAI::Move bestMove;
	bestMove.row = 0;
	bestMove.col = 0;
	Serial.println("\nI am in here");
	// Traverse all cells, evaluate minimax function for 
	// all empty cells. And return the cell with optimal 
	// value. 
	for (int i = 0; i < 3; i++)
	{
		Serial.println("I am in the for loop");
		for (int j = 0; j < 3; j++)
		{
			// Check if cell is empty 
			if (this->_gridArray[i][j] == EMPTY_PIECE)
			{
				// Make the move 
				this->_gridArray[i][j] = AI_PIECE;

				// compute evaluation function for this 
				// move. 
				int moveVal = MiniMaxAI::minimax(0, false);

				// Undo the move 
				this->_gridArray[i][j] = EMPTY_PIECE;

				// If the value of the current move is 
				// more than the best value, then update 
				// best/ 
				Serial.println(moveVal);
				if (moveVal > bestVal)
				{
					bestMove.row = i;
					bestMove.col = j;
					//this->_gridArray[i][j] = AI_PIECE;
					bestVal = moveVal;
				}
			}
		}
	}
	this->_gridArray[bestMove.row][bestMove.col] = AI_PIECE;
	Serial.println("I am at the end here");
	Serial.println("The value of the best Move is :");Serial.println(bestVal);
	Serial.println("The Optimal Move is :");
	Serial.print("ROW:");Serial.println(bestMove.row); Serial.print("COL: ");Serial.println(bestMove.col);
	return bestMove;
}
void MiniMaxAI::FindOptimalPlay()
{
	MiniMaxAI::Move bestMove;
	bestMove = MiniMaxAI::findBestMove();
	//this->gameState = STATE_PLAYING; Logic for this will be derived later
}
/*Updates X or O piece positions from the Tic Tac Toe board*/
void MiniMaxAI::updateGrid()
{
	static bool flag = false;
	//TicTacToeBoard board;
	int* boardPointer; //pointer to the gameboard array sent from the TicTacToe board
	boardPointer = board.GetGameBoard();
	delay(1000); 
	if(!flag)
	{
		Serial.print(*(boardPointer));
		Serial.print(*(boardPointer + 1));
		Serial.println(*(boardPointer + 2));
		Serial.print(*(boardPointer + 3));
		Serial.print(*(boardPointer + 4));
		Serial.println(*(boardPointer + 5));
		Serial.print(*(boardPointer + 6));
		Serial.print(*(boardPointer + 7));
		Serial.print(*(boardPointer + 8));
		this->_gridArray[0][0] = *(boardPointer);
		this->_gridArray[0][1] = *(boardPointer + 1);
		this->_gridArray[0][2] = *(boardPointer + 2);
		this->_gridArray[1][0] = *(boardPointer + 3);
		this->_gridArray[1][1] = *(boardPointer + 4);
		this->_gridArray[1][2] = *(boardPointer + 5);
		this->_gridArray[2][0] = *(boardPointer + 6);
		this->_gridArray[2][1] = *(boardPointer + 7);
		this->_gridArray[2][2] = *(boardPointer + 8);
		flag = true;
		Serial.println("\nDone");
	}else
	{
		Serial.println("No more counts");
		if (this->_gridArray[0][0] == AI_PIECE)
		{

		}
		else
		{
			this->_gridArray[0][0] = *(boardPointer);
		}
		if (this->_gridArray[0][1] == AI_PIECE)
		{

		}
		else
		{
			this->_gridArray[0][1] = *(boardPointer+1);
		}
		if (this->_gridArray[0][2] == AI_PIECE)
		{

		}
		else
		{
			this->_gridArray[0][2] = *(boardPointer+2);
		}
		if (this->_gridArray[1][0] == AI_PIECE)
		{

		}
		else
		{
			this->_gridArray[1][0] = *(boardPointer + 3);
		}
		if (this->_gridArray[1][1] == AI_PIECE)
		{

		}
		else
		{
			this->_gridArray[1][1] = *(boardPointer + 4);
		}
		if (this->_gridArray[1][2] == AI_PIECE)
		{

		}
		else
		{
			this->_gridArray[1][2] = *(boardPointer + 5);
		}
		if (this->_gridArray[2][0] == AI_PIECE)
		{

		}
		else
		{
			this->_gridArray[2][0] = *(boardPointer + 6);
		}
		if (this->_gridArray[2][1] == AI_PIECE)
		{

		}
		else
		{
			this->_gridArray[2][1] = *(boardPointer + 7);
		}
		if (this->_gridArray[2][2] == AI_PIECE)
		{

		}
		else
		{
			this->_gridArray[2][2] = *(boardPointer+8);
		}
		Serial.print(this->_gridArray[0][0]);
		Serial.print(this->_gridArray[0][1]);
		Serial.println(this->_gridArray[0][2]);
		Serial.print(this->_gridArray[1][0]);
		Serial.print(this->_gridArray[1][1]);
		Serial.println(this->_gridArray[1][2]);
		Serial.print(this->_gridArray[2][0]);
		Serial.print(this->_gridArray[2][1]);
		Serial.print(this->_gridArray[2][2]);
		delay(3000);
	}
}
