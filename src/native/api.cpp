#include <iostream>
#include "utils.h"
#include "gameboard.h"
#include "rules.h"

#ifndef EMSCRIPTEN
int main() {
	GameBoard board;
	board.print();
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
        .class_function("getNotBetween", &RuleFactory::getNotBetween);

    enum_<RuleType>("RuleType")
        .value("leftOf", leftOf)
        .value("rightOf", rightOf)
        .value("between", between)
        .value("notLeftOf", notLeftOf)
        .value("notRightOf", notRightOf)
        .value("notBetween", notBetween);

    value_object<Rule>("Rule")
        .field("ruleType", &Rule::ruleType)
        .field("p1", &Rule::p1)
        .field("p2", &Rule::p2)
        .field("p3", &Rule::p3);
}

#endif