#ifndef _SELECTIONSORT_HPP
#define _SELECTIONSORT_HPP

#include <vector>
#include <SFML/Graphics.hpp>
#include "Draw.hpp"

namespace game::algorithms
{

    class SelectionSort
    {
    public:
        /*
         * Swaps elements at idx1 and idx2 in array
         */
        static void swap(std::vector<unsigned int> &, unsigned int, unsigned int) noexcept;

        /*
         * Performs selection sort on array
         * @param window: window used for visualizing array mid sort
         */
        static void sort(std::vector<unsigned int> &, sf::RenderWindow &) noexcept;
    };

}

#endif