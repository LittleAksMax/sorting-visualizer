#ifndef _DRAW_HPP
#define _DRAW_HPP

#include <SFML/Graphics.hpp>
#include <vector>


namespace game
{

class Draw
{
public:
    static void draw(std::vector<unsigned int>, sf::RenderWindow&, std::vector<unsigned int>, unsigned int length) noexcept;
};

}

#endif 