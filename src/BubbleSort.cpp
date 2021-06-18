#include "BubbleSort.hpp"
using namespace game::algorithms;

void BubbleSort::swap(std::vector<unsigned int> &array, unsigned int idx1, unsigned int idx2) noexcept
{
    unsigned int tmp = array[idx1];
    array[idx1] = array[idx2];
    array[idx2] = tmp;
}

void BubbleSort::sort(std::vector<unsigned int> &array, sf::RenderWindow &window) noexcept
{
    bool fullPass = false;
    while (!fullPass)
    {
        fullPass = true;
        for (int i = 1; i < array.size(); i++)
        {
            if (array[i - 1] > array[i])
            {
                swap(array, i - 1, i);
                fullPass = false;
            }

            // draw
            Draw::draw(array, window, {(unsigned int)i - 1, (unsigned int)i});
        }
    }
}