#ifndef _INSERTIONSORT_HPP
#define _INSERTIONSORT_HPP

#include <vector>
#include <SFML/Graphics.hpp>
#include "Draw.hpp"

namespace game::algorithms
{

class InsertionSort
{
public:

    static void sort(std::vector<unsigned int>&, sf::RenderWindow&) noexcept;
    
};

}

#endif