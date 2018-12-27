#include "gameboard.h"
#include <iostream>
#include "datastructures.h"

int add(int value1, int value2) {
    return value1 + value2;
}

int getCellId(int row, int column) {
	return (row * 10) + column;
}

void nullBlockValues(ColumnBlock &columnBlock) {
	columnBlock.column = -1;
	columnBlock.row = -1;
	columnBlock.id = -1;
}

ColumnBlock* getRandomBlock(GameBoard &board, bool requiresAll) {
	static ColumnBlock columnBlock[3];
	columnBlock[0].row = rand() % 6;
	columnBlock[1].row = rand() % 6;
	columnBlock[2].row = rand() % 6;

	int column = rand() % (requiresAll == true ? 3 : 6);

	if (column == 5 || column == 4) {
		nullBlockValues(columnBlock[0]);
		columnBlock[0].value = -1;
		columnBlock[1].column = 4;
		columnBlock[2].column = 5;
	}
	else {
		columnBlock[0].column = column;
		columnBlock[1].column = column + 1;
		columnBlock[2].column = column + 2;
	}

	auto boardValues = board.getBoard();
	for (int i = 0; i < 3; i++) {
		int row = columnBlock[i].row;
		int column = columnBlock[i].column;

		if (row != -1) {
			int value = boardValues.board[row][column];
			columnBlock[i].value = value;
			columnBlock[i].id = getCellId(row, value);
		}
	}
	
	return columnBlock;
}