#ifndef _GAME_HPP
#define _GAME_HPP


#include <SFML/Graphics.hpp>
#include <string>
#include <vector>
#include <assert.h>
#include <chrono>
#include <algorithm>
#include <random>
#include "Draw.hpp"
#include "Algorithms.hpp"
#include "constants.hpp"

/* sorting algorithms */
#include "BubbleSort.hpp"


namespace game
{

class Game
{
private:
    unsigned int width, height;
    std::string title;
    sf::RenderWindow* window;
    std::vector<unsigned int> array;
    unsigned int length; 
public:
    /* constructors and destructors */
    Game(unsigned int, unsigned int, const std::string, unsigned int) noexcept;

    ~Game() noexcept;

    /* State methods */

    void run() noexcept;

    /* extra */

    void randomizeArray() noexcept;
};

}

#endif