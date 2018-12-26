#pragma once
#include "gameboard.h"
#include "datastructures.h"

int add(int value1, int value2);

int getCellId(int row, int column);
ColumnBlock* getRandomBlock(GameBoard &board);
