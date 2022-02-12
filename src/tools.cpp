#include "../include/main.hpp"

sf::Sprite animate_background(Main *M)
{
    M->current++;
    if (M->current >= M->count){
        M->current = 0;
    }
    if (M->office){
        return M->fancy_bg_s[M->current];
    } 
    return M->bg_s[M->current];
}

sf::Sprite normal_office(bool a, Main *M)
{
    if (!a){
        M->bg_time = M->clock.getElapsedTime();
        if (M->bg_time >= sf::seconds(1) && M->bg_time < sf::seconds(1.2f)){
            return M->S.calm_bg_2s;
        } else {
            if (M->bg_time >= sf::seconds(1.2f)){
                M->clock.restart();
            }
            return M->S.calm_bg_1s;
        }
    } else {
        return (animate_background(M));
    }
}

sf::Sprite fancy_office(bool a, Main *M)
{
    if (!a){
        M->bg_time = M->clock.getElapsedTime();
        if (M->bg_time >= sf::seconds(1) && M->bg_time < sf::seconds(1.2f)){
            return M->S.fancy_calm_bg_2s;
        } else {
            if (M->bg_time >= sf::seconds(1.2f)){
                M->clock.restart();
            }
            return M->S.fancy_calm_bg_1s;
        }
    } else {
        return (animate_background(M));
    }
}

void draw_background(sf::RenderWindow *window, bool a, Main *M)
{
    if (M->office){
        window->draw(fancy_office(a, M));
    } else {
        window->draw(normal_office(a, M));
    }
}

void draw_money(sf::RenderWindow *window, Main *M)
{
    if (M->bttn_clicked == true){
        M->money_time = M->money_clock.getElapsedTime();
        if (M->money_time > sf::milliseconds(30)){
            M->money_current++;
            M->money_clock.restart();
        }
        if (M->money_current >= M->money_count){
            M->money_current = 0;
        }
        M->money_s[M->money_current].setPosition(400, 10);
        window->draw(M->money_s[M->money_current]);
    }
}