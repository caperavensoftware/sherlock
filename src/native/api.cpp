#include <iostream>
#include <list>
#include "utils.h"
#include "gameboard.h"
#include "rules.h"
#include "datastructures.h"
#include <vector>

#ifndef EMSCRIPTEN
int main() {
	GameBoard board;
	RuleFactory factory;

	std::vector<Rule> result = factory.getRules(board, 3);

    return 0;
}
#endif

#ifdef EMSCRIPTEN

#include <emscripten/bind.h>
using namespace emscripten;

EMSCRIPTEN_BINDINGS(my_add_function) {
    function("add", &add);

    class_<GameBoard>("GameBoard")
        .constructor<>()
        .function("print", &GameBoard::print)
        .function("resetToDefault", &GameBoard::resetToDefault);

    class_<RuleFactory>("RuleFactory")
        .constructor<>()
        .class_function("getLeftOf", &RuleFactory::getLeftOf)
        .class_function("getRightOf", &RuleFactory::getRightOf)
        .class_function("getBetween", &RuleFactory::getBetween)
        .class_function("getNotLeftOf", &RuleFactory::getNotLeftOf)
        .class_function("getNotRightOf", &RuleFactory::getNotRightOf)
        .class_function("getNotBetween", &RuleFactory::getNotBetween)
		.class_function("getRules", &RuleFactory::getRules);

    enum_<RuleType>("RuleType")
        .value("leftOf", leftOf)
        .value("rightOf", rightOf)
        .value("between", between)
        .value("notLeftOf", notLeftOf)
        .value("notRightOf", notRightOf)
        .value("notBetween", notBetween);

    value_object<Rule>("Rule")
        .field("ruleType", &Rule::ruleType)
        .field("id1", &Rule::id1)
        .field("id2", &Rule::id2)
        .field("id3", &Rule::id3);

    value_object<GameBoardData>("GameBoardData")
        .field("board", &GameBoardData::board)
        .field("playerBoard", &GameBoardData::playerBoard);

    value_object<ColumnBlock>("ColumnBlock")
        .field("id", &ColumnBlock::id)
        .field("row", &ColumnBlock::row)
        .field("column", &ColumnBlock::column)
        .field("value", &ColumnBlock::value);

	register_vector<Rule>("vector<Rule>");
}

#endif