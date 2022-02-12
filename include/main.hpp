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

    sf::Texture fancy_calm_bg_1t;
    sf::Texture fancy_calm_bg_2t;
    
    sf::Sprite fancy_calm_bg_1s;
    sf::Sprite fancy_calm_bg_2s;
    
    sf::Sprite button_s;
    sf::Texture button_t;
};

class Main 
{
public:

    int MONEY;
    

    Sprites S;
    sf::Event event;

    bool bttn_clicked;
    sf::Clock clock;
    sf::Clock money_clock;
    sf::Time bg_time;
    sf::Time money_time;
    short count; //number of background sprites
    short current; //on what sprite we are currently in
    short money_count;
    short money_current;
    bool office = false; //normal office or fancy office background

    sf::Texture bg_t[11];
    sf::Sprite bg_s[11];

    sf::Texture fancy_bg_t[11];
    sf::Sprite fancy_bg_s[11];

    sf::Texture money_t[24];
    sf::Sprite money_s[24];

    Main();
};
void close_window(sf::RenderWindow *window, Main *M);
void draw_background(sf::RenderWindow *window, bool a, Main *M);
void check_events(Main *M);
void draw_money(sf::RenderWindow *window, Main *M);
#endif /* !MAIN_HPP_ */
