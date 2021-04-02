#ifndef _BUBBLESORT_HPP
#define _BUBBLESORT_HPP

#include <vector>
#include "Draw.hpp"

namespace game::algorithms
{

class BubbleSort
{
public:
    static void swap(std::vector<unsigned int>&, unsigned int, unsigned int) noexcept;

    static void sort(std::vector<unsigned int>&, sf::RenderWindow&) noexcept;
};

}

#endif