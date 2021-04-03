#include "CocktailShakerSort.hpp"
using namespace game::algorithms;

/*
 * Swaps elements at idx1 and idx2 in array
 */
void CocktailShakerSort::swap(std::vector<unsigned int>& array, unsigned int idx1, unsigned int idx2) noexcept
{
    unsigned int tmp = array[idx1];
    array[idx1] = array[idx2];
    array[idx2] = tmp;
}

/*
 * Performs selection sort on array
 * @param window: window used for visualizing array mid sort
 */
void CocktailShakerSort::sort(std::vector<unsigned int>& array, sf::RenderWindow& window) noexcept
{
	while (true)
	{
		bool fullPass;
		unsigned int start[2] = { 1, array.size() - 1 };
		unsigned int end[2] = { array.size(), 0 };
		int inc[2] = { 1, -1 };

		for (int it = 0; it < 2; it++)
		{
			fullPass = true;

			for (int i = start[it]; i != end[it]; i += inc[it])
			{
				if (array[i - 1] > array[i])
				{
					swap(array, i - 1, i);
					fullPass = false;
				}
                Draw::draw(array, window, { (unsigned int)i - 1, (unsigned int)i });
			}

			if (fullPass)
				return;
		}
	}  
}