#include "../include/main.hpp"

void check_events(Main *M, Button *B)
{
    if ((M->event.mouseButton.x > B->x) &&
       (M->event.mouseButton.x < B->x + B->width) &&
       (M->event.mouseButton.y > B->y) &&
       (M->event.mouseButton.y < B->y + B->height)){
           M->office = true;
           M->MONEY -= 100;
           M->raise += 5;
    } else if (M->event.type == sf::Event::MouseButtonPressed &&
        M->event.mouseButton.button == sf::Mouse::Left){
        M->bttn_clicked = true;
    } else {
        M->bttn_clicked = false;
    }
}

void close_window(sf::RenderWindow *window, Main *M)
{
    if (M->event.type == sf::Event::Closed){
        window->close();
        exit(0);
    }
}
