#include "InsertionSort.hpp"
using namespace game::algorithms;

void InsertionSort::sort(std::vector<unsigned int> &array, sf::RenderWindow &window) noexcept
{
    for (int i = 1; i < array.size(); i++)
    {
        unsigned int key = array[i];
        int j = i - 1;
        while (j >= 0 && key < array[j])
        {
            array[j + 1] = array[j];
            j--;
            // draw
            Draw::draw(array, window, {(unsigned int)i, (unsigned int)j});
        }
        array[j + 1] = key;
    }
}