#include "Draw.hpp"
#include "constants.hpp"
using namespace game;

/*
 * Draws the array as bars, along with the visited bar in green
 * @param array: the array being sorted
 * @param examined: the node/s currently being examined
 * @param window: the window to draw on
 */
void Draw::draw(std::vector<unsigned int> array, sf::RenderWindow& window, std::vector<unsigned int> examined) noexcept
{
    window.clear();

    unsigned int length = array.size();
    for (int i = 0; i < length; i++)
    {
        sf::RectangleShape bar = sf::RectangleShape( sf::Vector2f(WIDTH / length, UNIT_SIZE * array[i]) );
        bar.setPosition( sf::Vector2f(i * WIDTH / length, HEIGHT - UNIT_SIZE * array[i]) );
        for (int j = 0; j < examined.size(); j++)
            if (i == examined[j])
            {
                bar.setFillColor(sf::Color::Green);
                examined.erase(examined.begin() + j);  // remove so it isn't checked again
                break;
            }
        window.draw(bar);
    }
    window.display();

}