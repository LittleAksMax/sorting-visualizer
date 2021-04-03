#ifndef _HEAPSORT_HPP
#define _HEAPSORT_HPP

#include <vector>
#include <SFML/Graphics.hpp>
#include "Draw.hpp"

namespace game::algorithms
{

class HeapSort
{
public:
    static void swap(std::vector<unsigned int>&, unsigned int, unsigned int) noexcept;

    static void sort(std::vector<unsigned int>&, sf::RenderWindow&) noexcept;
};

}

#endif