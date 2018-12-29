#include "rules.h"
#include "utils.h"
#include "datastructures.h"
#include <vector>

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
	ColumnBlock* block = getRandomBlock(board);
	Rule result;
	result.id1 = block[0];
	result.id2 = block[1];
	result.id3 = block[2];
	result.ruleType = RuleType::rightOf;
	return result;
};

Rule RuleFactory::getBetween(GameBoard &board) {
	ColumnBlock* block = getRandomBlock(board, true);
	Rule result;
	result.id1 = block[0];
	result.id2 = block[1];
	result.id3 = block[2];
	result.ruleType = RuleType::leftOf;
	return result;
};

Rule RuleFactory::getNotLeftOf(GameBoard &board) {
	ColumnBlock* block = getRandomBlock(board);
	Rule result;
	result.id1 = block[2];
	result.id2 = block[1];
	result.id3 = block[0];
	result.ruleType = RuleType::leftOf;
	return result;
};

Rule RuleFactory::getNotRightOf(GameBoard &board) {
	ColumnBlock* block = getRandomBlock(board);
	Rule result;
	result.id1 = block[2];
	result.id2 = block[1];
	result.id3 = block[0];
	result.ruleType = RuleType::leftOf;
	return result;
};

Rule RuleFactory::getNotBetween(GameBoard &board) {
	ColumnBlock* block = getRandomBlock(board, true);
	Rule result;
	result.id1 = block[0];
	result.id2 = block[2];
	result.id3 = block[1];
	result.ruleType = RuleType::leftOf;
	return result;
};

std::vector<Rule> RuleFactory::getRules(GameBoard &board, int numberOfRules) {
	std::vector<Rule> list;
	for (int i = 0; i < numberOfRules; i++) {
		Rule r = RuleFactory::getLeftOf(board);
		list.push_back(r);
	}

	return list;
}