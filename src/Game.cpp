#include "Game.hpp"
using namespace game;

/* constructors and destructors */

/*
 * Creates window object with width, height and title given
 * @param width: width of window
 * @param height: height of window
 * @param title: title of window
 * @param length: length of array to visualize
 */
Game::Game(unsigned int width, unsigned int height, const std::string title, unsigned int length) noexcept
    : width(width), height(height), title(title), length(length)
{ 
    window = new sf::RenderWindow(sf::VideoMode(width, height), title, sf::Style::Close | sf::Style::Titlebar);

    randomizeArray();

    /* check array */
    assert(array.size() % 5 == 0);  // assert that the array's length is a multiple of 5
    assert(array.size() >= 5);
    assert(array.size() <= 300);
}

Game::~Game() noexcept
{

}

/*
 * Runs application
 * @param array: the array that is going to be drawn and sorted
 */
void Game::run() noexcept
{
    bool visualized = false;
    while (window->isOpen())
    {
        sf::Event event;
        while (window->pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window->close();

            if (event.type == sf::Event::KeyPressed)
            {
                if (!visualized)
                    if (event.key.code == sf::Keyboard::Enter) // if enter is pressed
                    {
                        Algorithms::bubbleSort(array, *window);
                        visualized = true;
                    }
                
                if (event.key.code == sf::Keyboard::Space)
                {
                    randomizeArray();
                    visualized = false;  // this is so you don't re-sort a sorted array
                }
            }
        }

        // draw
        Draw::draw(array, *window, {});
    } 
}

/* extras */

/*
 * 
 */
void Game::randomizeArray() noexcept
{
    array = {};

    for (int i = 1; i <= length; i++)
        array.push_back(i);
    
    shuffle(array.begin(), array.end(), std::default_random_engine(
            std::chrono::system_clock::now().time_since_epoch().count()
        )
    );
}
