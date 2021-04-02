#ifndef _GAME_HPP
#define _GAME_HPP


#include <SFML/Graphics.hpp>
#include <string>
#include <vector>
#include <assert.h>
#include <random>
#include <algorithm>
#include <chrono>
#include "Draw.hpp"
#include "Algorithms.hpp"


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