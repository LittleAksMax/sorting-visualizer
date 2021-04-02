#ifndef _INSERTIONSORT_HPP
#define _INSERTIONSORT_HPP

#include <vector>
#include "Draw.hpp"

namespace game::algorithms
{

class InsertionSort
{
public:
    static void swap(std::vector<unsigned int>&, unsigned int, unsigned int) noexcept;

    static void sort(std::vector<unsigned int>&, sf::RenderWindow&) noexcept;
};

}

#endif