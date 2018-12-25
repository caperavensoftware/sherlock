#pragma once
class GameBoard {
private:
	int board[6][6];
	void shuffelBoard();
	void shuffelRow(int &row);
public:
	GameBoard();
	void print();
	void resetToDefault();
};
