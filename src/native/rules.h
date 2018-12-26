#pragma once
#include "gameboard.h"
#include "datastructures.h"

enum RuleType {
    leftOf,
    rightOf,
    between,
    notLeftOf,
    notRightOf,
    notBetween
};

struct Rule {
	RuleType ruleType;
	ColumnBlock id1;
	ColumnBlock id2;
	ColumnBlock id3;
};

class RuleFactory {
public:
    static Rule getLeftOf(GameBoard &board);
    static Rule getRightOf(GameBoard &board);
    static Rule getBetween(GameBoard &board);
    static Rule getNotLeftOf(GameBoard &board);
    static Rule getNotRightOf(GameBoard &board);
    static Rule getNotBetween(GameBoard &board);
};