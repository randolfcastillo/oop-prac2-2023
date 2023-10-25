
    #include <iostream>
#include "Game.h"

int main() {
    // Create a game with 3 ships and 2 mines on a 10x10 grid
    Game game;
    game.initGame(3, 2, 10, 10);

    // Run the game loop for 5 iterations with a mine distance threshold of 3.0
    game.gameLoop(5, 3.0);

    return 0;
}
