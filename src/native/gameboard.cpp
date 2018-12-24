#include <iostream>
#include "gameboard.h"

GameBoard::GameBoard() {
	resetToDefault();
}

void GameBoard::print() {
	for (int i = 0; i < 6; i++) {
		for (int j = 0; j < 6; j++) {
			std::cout << this->board[i][j];
		}
		std::cout << std::endl;
	}
}

void GameBoard::resetToDefault() {
	int row, column;

	for (int i = 0; i < 6; i++) {
		row = i;
		for (int j = 0; j < 6; j++) {
			column = j;
			this->board[row][column] = column;
		}
	}
}