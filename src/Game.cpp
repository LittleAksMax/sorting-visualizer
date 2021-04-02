#include "Game.hpp"
using namespace game;

#include <iostream>

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

    std::cout << array.size() << std::endl;

    /* check array */
    assert(array.size() % 5 == 0);  // assert that the array's length is a multiple of 5
    assert(WIDTH % array.size() == 0);  // assert that array size is factor of window width
    assert(array.size() >= 5);  // assert minimum array size
    assert(array.size() <= 300); // assert maximum array size
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
    algorithms::Algorithms current = algorithms::Algorithms::BubbleSort;  // used to see which algorithm to run
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
                        switch (current)
                        {
                            case algorithms::Algorithms::BubbleSort:
                                algorithms::BubbleSort::sort(array, *window);
                                break;
                            case algorithms::Algorithms::InsertionSort:
                                break;
                            case algorithms::Algorithms::SelectionSort:
                                break;
                            case algorithms::Algorithms::CocktailShakerSort:
                                break;
                            case algorithms::Algorithms::MergeSort:
                                break;
                            case algorithms::Algorithms::QuickSort:
                                break;
                            case algorithms::Algorithms::HeapSort:
                                break;
                            case algorithms::Algorithms::RadixSort:
                                break;
                            case algorithms::Algorithms::MySort:
                                break;
                        };
                        visualized = true;
                        continue;
                    }
                if (event.key.code == sf::Keyboard::Space)
                {
                    randomizeArray();
                    visualized = false;  // this is so you don't re-sort a sorted array
                } else
                {
                    switch (event.key.code)
                    {
                        case sf::Keyboard::Num1:
                            current = algorithms::Algorithms::BubbleSort;
                            break;
                        case sf::Keyboard::Num2:
                            current = algorithms::Algorithms::InsertionSort;
                            break;
                        case sf::Keyboard::Num3:
                            current = algorithms::Algorithms::SelectionSort;
                            break;
                        case sf::Keyboard::Num4:
                            current = algorithms::Algorithms::CocktailShakerSort;
                            break;
                        case sf::Keyboard::Num5:
                            current = algorithms::Algorithms::MergeSort;
                            break;
                        case sf::Keyboard::Num6:
                            current = algorithms::Algorithms::QuickSort;
                            break;
                        case sf::Keyboard::Num7:
                            current = algorithms::Algorithms::HeapSort;
                            break;
                        case sf::Keyboard::Num8:
                            current = algorithms::Algorithms::RadixSort;
                            break;
                        case sf::Keyboard::Num9:
                            current = algorithms::Algorithms::MySort;
                            break;
                    };
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
    srand(time(NULL));  // seed random number generation
    array = {};

    for (int i = 1; i <= length; i++)
        array.push_back(rand() % (HEIGHT / UNIT_SIZE - 1) + 1);
}
