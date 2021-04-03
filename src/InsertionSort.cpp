#include "InsertionSort.hpp"
using namespace game::algorithms;

/*
 * Swaps elements at idx1 and idx2 in array
 */
void InsertionSort::swap(std::vector<unsigned int>& array, unsigned int idx1, unsigned int idx2) noexcept
{
    unsigned int tmp = array[idx1];
    array[idx1] = array[idx2];
    array[idx2] = tmp;
}

/*
 * Performs insertion sort on array
 * @param window: window used for visualizing array mid sort
 */
void InsertionSort::sort(std::vector<unsigned int>& array, sf::RenderWindow& window) noexcept
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
            Draw::draw(array, window, { (unsigned int)i, (unsigned int)j });
        }
        array[j + 1] = key;
    }
}