#include "Game.hpp"
#include "constants.hpp"

#define LENGTH 200

int main()
{
    game::Game game(WIDTH, HEIGHT, TITLE, LENGTH);
    game.run();
    return 0;
}