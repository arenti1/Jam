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

    sf::Sprite calm_bg_1s;
    sf::Sprite calm_bg_2s;
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
    Main();

};
sf::Sprite get_bg_sprite(bool a, Main *M);
void close_window(sf::RenderWindow *window, Main *M);
#endif /* !MAIN_HPP_ */
