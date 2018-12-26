#pragma once
#include "datastructures.h"

class GameBoard {
private:
	GameBoardData boardData;
	void shuffelBoard();
	void shuffelRow(int &row);
public:
	GameBoard();
	void print();
	void resetToDefault();
	GameBoardData getBoard();
};
