#ifndef _GAME_HPP
#define _GAME_HPP


#include <SFML/Graphics.hpp>
#include <string>
#include <vector>
#include <assert.h> // to assert that the length of the array matches criteria
#include <chrono> // for random seed generation for shuffle()
#include <algorithm> // for shuffle()
#include <random> // for random seed generation for shuffle()
#include "Draw.hpp"
#include "Algorithms.hpp"
#include "constants.hpp"

/* sorting algorithms */
#include "BubbleSort.hpp"
#include "InsertionSort.hpp"
#include "SelectionSort.hpp"
#include "CocktailShakerSort.hpp"

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