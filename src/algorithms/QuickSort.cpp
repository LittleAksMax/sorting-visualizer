#include "QuickSort.hpp"
using namespace game::algorithms;

void QuickSort::swap(std::vector<unsigned int> &array, unsigned int idx1, unsigned int idx2) noexcept
{
    unsigned int tmp = array[idx1];
    array[idx1] = array[idx2];
    array[idx2] = tmp;
}

unsigned int QuickSort::partition(std::vector<unsigned int> &array, unsigned int lower, unsigned int higher, sf::RenderWindow &window) noexcept
{
    // pivot (element to be placed at right position)
    unsigned int pivot = array[higher];

    unsigned int i = (lower - 1); // Index of smaller element and indicates the
                                  // right position of pivot found so far

    for (int j = lower; j < higher; j++)
    {
        // If current element is smaller than the pivot
        if (array[j] <= pivot)
        {
            i++; // increment index of smaller element
            swap(array, i, j);
        }
        Draw::draw(array, window, {(unsigned int)j, (unsigned int)pivot, (unsigned int)i});
    }
    swap(array, i + 1, higher);
    return i + 1;
}

void QuickSort::sort(std::vector<unsigned int> &array, unsigned int lower, unsigned int higher, sf::RenderWindow &window) noexcept
{
    if ((int)lower < (int)higher) // have to cast to int as higher continuously decreases, and (unsigned int)-1 = UINTMAX
    {
        // pi is partitioning index
        unsigned int pi = partition(array, lower, higher, window);
        Draw::draw(array, window, {pi, (unsigned int)lower, (unsigned int)higher});
        sort(array, lower, pi - 1, window); // Before pi
        Draw::draw(array, window, {pi, (unsigned int)lower, (unsigned int)higher});
        sort(array, pi + 1, higher, window); // After pi
        Draw::draw(array, window, {pi, (unsigned int)lower, (unsigned int)higher});
    }
}