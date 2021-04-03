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
    static void swap(std::vector<unsigned int>&, unsigned int, unsigned int) noexcept;

    static void sort(std::vector<unsigned int>&, sf::RenderWindow&) noexcept;
};

}

#endif