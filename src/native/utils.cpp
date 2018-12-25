#include "gameboard.h"

int add(int value1, int value2) {
    return value1 + value2;
}

int* getRandomBlock(GameBoard &board) {
	static int result[3];
	result[0] = 0;
	result[1] = 0;
	result[2] = 0;

	return result;
}