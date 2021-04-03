#include "RadixSort.hpp"
using namespace game::algorithms;

/*
 * Swaps elements at idx1 and idx2 in array
 */
void RadixSort::swap(std::vector<unsigned int>& array, unsigned int idx1, unsigned int idx2) noexcept
{
    unsigned int tmp = array[idx1];
    array[idx1] = array[idx2];
    array[idx2] = tmp;
}

/*
 * Performs selection sort on array
 * @param window: window used for visualizing array mid sort
 */
void RadixSort::sort(std::vector<unsigned int>& array, sf::RenderWindow& window) noexcept
{
    int i, j, min;

    // One by one move boundary of unsorted subarray 
    for (i = 0; i < array.size() - 1; i++)
    {
        // Find the minimum element in unsorted array
        min = i;
        for (j = i + 1; j < array.size(); j++)
        {
            // draw
            Draw::draw(array, window, { (unsigned int)i, (unsigned int)j });
            if (array[j] < array[min])
                min = j;
        }
        // Swap the found minimum element with the first element
        swap(array, min, i);
    }
}