#include <iostream>
#include "utils.h"

#include <emscripten/bind.h>
using namespace emscripten;

int main() {
    std::cout << "Hello world" << std::endl;
    std::cout << sherlockgame::add(1,2) << std::endl;
    return 0;
}

EMSCRIPTEN_BINDINGS(my_module) {
    function("add", &sherlockgame::add);
}