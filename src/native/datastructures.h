#pragma once
#include <vector>

struct GameBoardData {
	std::vector<std::vector<int>> board;
	std::vector<std::vector<int>> playerBoard;
};

struct ColumnBlock {
	int id;
	int row;
	int column;
	int value;
};
