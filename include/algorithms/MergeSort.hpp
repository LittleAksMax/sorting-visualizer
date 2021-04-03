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
    static void merge(std::vector<unsigned int>&, unsigned int, unsigned int, unsigned int, sf::RenderWindow&) noexcept;

    static void sort(std::vector<unsigned int>&, unsigned int, unsigned int, sf::RenderWindow&) noexcept;
};

}

#endif