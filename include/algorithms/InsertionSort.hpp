#ifndef _INSERTIONSORT_HPP
#define _INSERTIONSORT_HPP

#include <vector>
#include <SFML/Graphics.hpp>
#include "Draw.hpp"

namespace game::algorithms
{

    class InsertionSort
    {
    public:
        /*
         * Performs insertion sort on array
         * @param window: window used for visualizing array mid sort
         */
        static void sort(std::vector<unsigned int> &, sf::RenderWindow &) noexcept;
    };

}

#endif