/*
** EPITECH PROJECT, 2022
** Jam
** File description:
** jam
*/

#ifndef MAIN_HPP_
#define MAIN_HPP_
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <iostream>

class Sprites
{
public:
    sf::Texture calm_bg_1t;
    sf::Texture calm_bg_2t;
    sf::Texture bg_01t;
    sf::Texture bg_02t;
    sf::Texture bg_03t;
    sf::Texture bg_04t;
    sf::Texture bg_05t;
    sf::Texture bg_06t;
    sf::Texture bg_07t;
    sf::Texture bg_08t;
    sf::Texture bg_09t;
    sf::Texture bg_10t;
    sf::Texture bg_11t;
    
    sf::Sprite calm_bg_1s;
    sf::Sprite calm_bg_2s;
    sf::Sprite bg_01s;
    sf::Sprite bg_02s;
    sf::Sprite bg_03s;
    sf::Sprite bg_04s;
    sf::Sprite bg_05s;
    sf::Sprite bg_06s;
    sf::Sprite bg_07s;
    sf::Sprite bg_08s;
    sf::Sprite bg_09s;
    sf::Sprite bg_10s;
    sf::Sprite bg_11s;
};

class Main 
{
public:
    Sprites S;
    sf::Event event;

    bool bttn_clicked;
    sf::Clock clock;
    sf::Time bg_t;
    short i;
    short count;
    short current;

    sf::Sprite bg_s[12];

    Main();

};
sf::Sprite get_bg_sprite(bool a, Main *M);
void close_window(sf::RenderWindow *window, Main *M);
sf::Sprite get_moving_bg_sprite(Main *M);
#endif /* !MAIN_HPP_ */
