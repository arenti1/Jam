#include "../include/main.hpp"

void check_events(Main *M)
{
    if (M->event.type == sf::Event::MouseButtonPressed &&
        M->event.mouseButton.button == sf::Mouse::Left){
        M->bttn_clicked = true;
    } else {
        M->bttn_clicked = false;
    }
}