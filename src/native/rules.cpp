#include "rules.h"
#include "utils.h"

Rule RuleFactory::getLeftOf(GameBoard &board) {
	int* block = getRandomBlock(board);
	/*
		JHR: todo
		This is not correct.
		You need it create unique id for each image and return those image id values
	*/
    Rule result;
    result.p1 = block[0];
    result.p2 = block[1];
    result.p3 = block[2];
	result.ruleType = RuleType::leftOf;
	return result;
};

Rule RuleFactory::getRightOf(GameBoard &board) {
	Rule result;
	result.p1 = 0;
	result.p2 = 0;
	result.p3 = 0;
	result.ruleType = RuleType::rightOf;
	return result;
};

Rule RuleFactory::getBetween(GameBoard &board) {
	Rule result;
	result.p1 = 0;
	result.p2 = 0;
	result.p3 = 0;
	result.ruleType = RuleType::between;
	return result;
};

Rule RuleFactory::getNotLeftOf(GameBoard &board) {
	Rule result;
	result.p1 = 0;
	result.p2 = 0;
	result.p3 = 0;
	result.ruleType = RuleType::notLeftOf;
	return result;
};

Rule RuleFactory::getNotRightOf(GameBoard &board) {
	Rule result;
	result.p1 = 0;
	result.p2 = 0;
	result.p3 = 0;
	result.ruleType = RuleType::notRightOf;
	return result;
};

Rule RuleFactory::getNotBetween(GameBoard &board) {
	Rule result;
	result.p1 = 0;
	result.p2 = 0;
	result.p3 = 0;
	result.ruleType = RuleType::notBetween;
	return result;
};