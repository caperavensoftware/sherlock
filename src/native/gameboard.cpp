#include <iostream>
#include "gameboard.h"

GameBoard::GameBoard() {
	resetToDefault();
}

void GameBoard::print() {	
	for (int i = 0; i < 6; i++) {
		for (int j = 0; j < 6; j++) {
			std::cout << this->boardData.board[i][j];
		}
		std::cout << std::endl;
	}
}

void GameBoard::resetToDefault() {
	for (int i = 0; i < 6; i++) {
		std::vector<int> row;

		for (int column = 0; column < 6; column++) {
			row.push_back(column);
		}

		this->boardData.board.push_back(row);
	}

	this->shuffelBoard();
}

GameBoardData GameBoard::getBoard()
{
	return boardData;
}

void GameBoard::shuffelBoard() {
	for (int row = 0; row < 6; row++) {
		for (int count = 0; count < 6; count++) {
			this->shuffelRow(row);
		}
	}
}

void GameBoard::shuffelRow(int &row)
{
	for (int column = 0; column < 6; column++) {
		int column1 = rand() % 6;
		int column2 = rand() % 6;

		int value1 = this->boardData.board[row][column1];
		int value2 = this->boardData.board[row][column2];
		
		this->boardData.board[row][column1] = value2;
		this->boardData.board[row][column2] = value1;
	}
}
