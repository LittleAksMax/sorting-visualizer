#include "MergeSort.hpp"
using namespace game::algorithms;

/*
 * Merges subarrays from lower to mid, and mid to higher in array
 */
void MergeSort::merge(std::vector<unsigned int>& array, unsigned int lower, unsigned int mid, unsigned int higher, sf::RenderWindow& window) noexcept
{
    int n1 = mid - lower + 1;
    int n2 = higher - mid;

    // Create temp arrays
    int* L = new int[n1];
    int* R = new int[n2];
 
    // Copy data to temp arrays L[] and R[]
    for (int i = 0; i < n1; i++)
        L[i] = array[lower + i];
    for (int j = 0; j < n2; j++)
        R[j] = array[mid + 1 + j];
 
    // Merge the temp arrays back into arr[l..r]
 
    // Initial index of first subarray
    int i = 0;
 
    // Initial index of second subarray
    int j = 0;
 
    // Initial index of merged subarray
    int k = lower;
 
    while (i < n1 && j < n2) 
    {
        if (L[i] <= R[j]) 
        {
            array[k] = L[i];
            i++;
        } else 
        {
            array[k] = R[j];
            j++;
        }
        k++;
        Draw::draw(array, window, { lower, mid, higher, (unsigned int)k, (unsigned int)i, (unsigned int)j });
    }
 
    // Copy the remaining elements of
    // L[], if there are any
    while (i < n1) 
    {
        array[k] = L[i];
        i++;
        k++;
    }
 
    // Copy the remaining elements of
    // R[], if there are any
    while (j < n2) 
    {
        array[k] = R[j];
        j++;
        k++;
    }    
}

/*
 * Performs merge sort on array
 * @param lower: lower bound (as it is recursive)
 * @param higher: higher bound (as it is recursive)
 * @param window: window used for visualizing array mid sort
 */
void MergeSort::sort(std::vector<unsigned int>& array, unsigned int lower, unsigned int higher, sf::RenderWindow& window) noexcept
{
    if (lower >= higher)
        return;  // returns recursively

    unsigned int mid = lower + (higher - lower) / 2;
    Draw::draw(array, window, { lower, mid, higher });
    sort(array, lower, mid, window);
    Draw::draw(array, window, { lower, mid, higher });
    sort(array, mid + 1, higher, window);
    Draw::draw(array, window, { lower, mid, higher });
    merge(array, lower, mid, higher, window);
    Draw::draw(array, window, { lower, mid, higher });
}