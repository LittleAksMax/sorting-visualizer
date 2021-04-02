#include "Game.hpp"
#include "constants.hpp"
#include <vector>
#include <assert.h>

#define LENGTH 200

int main()
{
    std::vector<unsigned int> array;

    game::Game game(WIDTH, HEIGHT, TITLE, LENGTH);

    game.run();


    return 0;
}