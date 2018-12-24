#include <iostream>
#include "utils.h"
#include "gameboard.h"

int main() {
	// GameBoard board;
	// board.print();
    return 0;
}

#include <emscripten/bind.h>
using namespace emscripten;

EMSCRIPTEN_BINDINGS(my_module) {
    function("add", &add);
}

EMSCRIPTEN_BINDINGS(my_class_example) {
   class_<GameBoard>("GameBoard")
    .constructor<>()
    .function("print", &GameBoard::print)
    .function("resetToDefault", &GameBoard::resetToDefault);
}