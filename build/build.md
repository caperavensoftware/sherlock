emcc --bind -o2 .\src\native\api.cpp .\src\native\utils.cpp .\src\native\gameboard.cpp .\src\native\rules.cpp -o .\bin\engine.js

g++ .\src\native\api.cpp .\src\native\utils.cpp .\src\native\gameboard.cpp .\src\native\rules.cpp
