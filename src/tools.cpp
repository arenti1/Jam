#include "../include/main.hpp"

void close_window(sf::RenderWindow *window, Main *M)
{
    if (M->event.type == sf::Event::Closed){
        window->close();
        exit(0);
    }
}

sf::Sprite get_bg_sprite(bool a, Main *M)
{
    if (!a){
        M->bg_t = M->clock.getElapsedTime();
        if (M->bg_t >= sf::seconds(1) && M->bg_t < sf::seconds(1.2f)){
            return M->S.calm_bg_2s;
        } else {
            if (M->bg_t >= sf::seconds(1.2f)){
                M->clock.restart();
            }
            return M->S.calm_bg_1s;
        }
    } else {
        return M->S.calm_bg_1s;
    }
}