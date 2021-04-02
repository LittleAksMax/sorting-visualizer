#ifndef _ALGORITHMS_HPP
#define _ALGORITHMS_HPP

#include <vector>
#include "Draw.hpp"

namespace game
{

class Algorithms
{
public:
    static void swap(std::vector<unsigned int>&, unsigned int, unsigned int) noexcept;

    static void bubbleSort(std::vector<unsigned int>&, sf::RenderWindow&) noexcept;
};

}

#endif