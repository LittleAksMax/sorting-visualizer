#ifndef _BUBBLESORT_HPP
#define _BUBBLESORT_HPP

#include <vector>
#include <SFML/Graphics.hpp>
#include "Draw.hpp"

namespace game::algorithms
{

    class BubbleSort
    {
    public:
        /*
         * Swaps elements at idx1 and idx2 in array
         */
        static void swap(std::vector<unsigned int> &, unsigned int, unsigned int) noexcept;

        /*
         * Performs bubble sort on array
         * @param window: window used for visualizing array mid sort
         */
        static void sort(std::vector<unsigned int> &, sf::RenderWindow &) noexcept;
    };

}

#endif