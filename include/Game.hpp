#ifndef _GAME_HPP
#define _GAME_HPP

#include <SFML/Graphics.hpp>
#include <string>
#include <vector>
#include <assert.h>  // to assert that the length of the array matches criteria
#include <chrono>    // for random seed generation for shuffle()
#include <algorithm> // for shuffle()
#include <random>    // for random seed generation for shuffle()
#include "Draw.hpp"
#include "Algorithms.hpp"
#include "constants.hpp"

/* sorting algorithms */
#include "BubbleSort.hpp"
#include "InsertionSort.hpp"
#include "SelectionSort.hpp"
#include "CocktailShakerSort.hpp"
#include "MergeSort.hpp"
#include "QuickSort.hpp"

namespace game
{

    class Game
    {
    private:
        unsigned int width, height;
        std::string title;
        sf::RenderWindow *window;
        std::vector<unsigned int> array;
        unsigned int length;

    public:
        /* constructors and destructors */

        /*
         * Creates window object with width, height and title given
         * @param width: width of window
         * @param height: height of window
         * @param title: title of window
         * @param length: length of array to visualize
         */
        Game(unsigned int, unsigned int, const std::string, unsigned int) noexcept;

        ~Game() noexcept;

        /* State methods */

        /*
         * Application mainloop
         * @param array: the array that is going to be drawn and sorted
         */
        void run() noexcept;

        /* extra */

        /*
         * Creates random array to sort
         */
        void randomizeArray() noexcept;
    };

}

#endif