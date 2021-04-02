#include "Game.hpp"
#include "constants.hpp"
#include <vector>
#include <assert.h>


int main()
{
    std::vector<unsigned int> array;

    game::Game game(WIDTH, HEIGHT, TITLE, 100);

    game.run();


    return 0;
}