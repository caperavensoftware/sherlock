emcc --bind -o2 .\src\native\api.cpp .\src\native\utils.cpp .\src\native\gameboard.cpp -o .\bin\engine.js

g++ .\src\native\api.cpp .\src\native\utils.cpp .\src\native\gameboard.cpp
