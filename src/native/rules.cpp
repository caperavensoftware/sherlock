#include "rules.h"
#include "utils.h"
#include "datastructures.h"

Rule RuleFactory::getLeftOf(GameBoard &board) {
	ColumnBlock* block = getRandomBlock(board);
    Rule result;
	result.id1 = block[0];
	result.id2 = block[1];
	result.id3 = block[2];
	result.ruleType = RuleType::leftOf;
	return result;
};

Rule RuleFactory::getRightOf(GameBoard &board) {
	Rule result;
	result.ruleType = RuleType::rightOf;
	return result;
};

Rule RuleFactory::getBetween(GameBoard &board) {
	Rule result;
	result.ruleType = RuleType::between;
	return result;
};

Rule RuleFactory::getNotLeftOf(GameBoard &board) {
	Rule result;
	result.ruleType = RuleType::notLeftOf;
	return result;
};

Rule RuleFactory::getNotRightOf(GameBoard &board) {
	Rule result;
	result.ruleType = RuleType::notRightOf;
	return result;
};

Rule RuleFactory::getNotBetween(GameBoard &board) {
	Rule result;
	result.ruleType = RuleType::notBetween;
	return result;
};