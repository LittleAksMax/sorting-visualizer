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
    static void swap(std::vector<unsigned int>&, unsigned int, unsigned int) noexcept;

    static void sort(std::vector<unsigned int>&, sf::RenderWindow&) noexcept;
};

}

#endif