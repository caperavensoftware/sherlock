#include <iostream>
#include "utils.h"
#include "gameboard.h"

int main() {
    std::cout << "Hello world" << std::endl;
    std::cout << add(1,2) << std::endl;

    GameBoard g;
	g.print();

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
    .function("print", &GameBoard::print);
}