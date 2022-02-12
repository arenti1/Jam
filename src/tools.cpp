#include "../include/main.hpp"

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
        return (get_moving_bg_sprite(M));
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
        return (get_moving_bg_sprite(M));
    }
}

sf::Sprite get_bg_sprite(bool a, Main *M)
{
    if (M->office){
       return(fancy_office(a, M));
    } else {
        return(normal_office(a, M));
    }
}

sf::Sprite get_moving_bg_sprite(Main *M)
{
    if (M->current >= M->count){
        M->current = 0;
    }
    M->current++;
    if (M->office){
        return M->fancy_bg_s[M->current];
    } 
    return M->bg_s[M->current];
}

void close_window(sf::RenderWindow *window, Main *M)
{
    if (M->event.type == sf::Event::Closed){
        window->close();
        exit(0);
    }
}