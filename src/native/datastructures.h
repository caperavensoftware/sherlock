#pragma once

struct GameBoardData {
	int board[6][6];
	int playerBoard[6][6];
};

struct ColumnBlock {
	int id;
	int row;
	int column;
	int value;
};
