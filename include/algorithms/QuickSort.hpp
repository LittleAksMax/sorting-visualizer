#ifndef _QUICKSORT_HPP
#define _QUICKSORT_HPP

#include <vector>
#include <SFML/Graphics.hpp>
#include "Draw.hpp"

namespace game::algorithms
{

    class QuickSort
    {
    public:
        /*
         * Swaps elements at idx1 and idx2 in array
         */
        static void swap(std::vector<unsigned int> &, unsigned int, unsigned int) noexcept;

        /*
         * takes last element as pivot, places the pivot element at its correct position in sorted array, and places all smaller
         * to left of pivot and all greater to the right of it
         */
        static unsigned int partition(std::vector<unsigned int> &, unsigned int, unsigned int, sf::RenderWindow &) noexcept;

        /*
         * Performs quick sort on array
         * @param window: window used for visualizing array mid sort
         */
        static void sort(std::vector<unsigned int> &, unsigned int, unsigned int, sf::RenderWindow &) noexcept;
    };

}

#endif