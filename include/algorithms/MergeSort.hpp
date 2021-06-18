#ifndef _MERGESORT_HPP
#define _MERGESORT_HPP

#include <vector>
#include <SFML/Graphics.hpp>
#include "Draw.hpp"

namespace game::algorithms
{

    class MergeSort
    {
    public:
        /*
         * Merges subarrays from lower to mid, and mid to higher in array
         */
        static void merge(std::vector<unsigned int> &, unsigned int, unsigned int, unsigned int, sf::RenderWindow &) noexcept;

        /*
         * Performs merge sort on array
         * @param lower: lower bound (as it is recursive)
         * @param higher: higher bound (as it is recursive)
         * @param window: window used for visualizing array mid sort
         */
        static void sort(std::vector<unsigned int> &, unsigned int, unsigned int, sf::RenderWindow &) noexcept;
    };

}

#endif