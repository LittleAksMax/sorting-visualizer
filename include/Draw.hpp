#ifndef _DRAW_HPP
#define _DRAW_HPP

#include <SFML/Graphics.hpp>
#include <vector>

namespace game
{

    class Draw
    {
    public:
        /*
         * Draws the array as bars, along with the visited bar in green
         * @param array: the array being sorted
         * @param examined: the node/s currently being examined
         * @param window: the window to draw on
         */
        static void draw(std::vector<unsigned int>, sf::RenderWindow &, std::vector<unsigned int>) noexcept;
    };

}

#endif