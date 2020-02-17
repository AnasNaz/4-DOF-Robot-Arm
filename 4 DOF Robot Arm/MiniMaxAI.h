#pragma once
#include "TicTacToeBoard.h"
class MiniMaxAI
{
public:
	//MiniMaxAI(TicTacToeBoard board); //Constructor that is initialized with a TicTacToeBoard object
	MiniMaxAI();//Maybe initialize tictactoe board in the constructor itself ?
	void FindOptimalPlay(); //Finds optimal move to place X or O piece to ensure a win or at most a draw
	struct Move { int row, col; };//Structure to store the calculated move in rows and columns
	Move findBestMove(); // This will return the best possible move for the player 
private:
	int evaluate(); // Returns a value based on who is winning (AI or human player)
	bool isMovesLeft();//Checks if there is any more moves left on the Tic Tac Toe board
	int minimax(int depth, bool isMax);//Goes through all possible ways the game can go and returns the best value for that move
    int _gridArray[3][3]; //Stores the piece locations (X or O) detected on the TicTacToe Board
	int gameState; //Tracks the state of the game, player playing, robot playing, game over, or draw state
	void updateGrid();//Gets latest X or O piece positions from the Tic Tac Toe board
	//Variables that stores which player is holding which piece X or O
	int aiPiece;
	int playerPiece;
	TicTacToeBoard board;
};

