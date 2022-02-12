#include "../include/main.hpp"

void draw_startbackground(sf::RenderWindow *window, Start *S)
{
    //float x = sf::Mouse::getPosition(window).x
    //float y = sf::Mouse::getPosition(window).y
   /* if (x > && x < && y > && y < ){
        window.draw(s1);
    } else {
        window.draw(s2);
    }*/
}

void start_screen(sf::RenderWindow *window, Main *M)
{
    Start S;
    while (window->isOpen()){
        while (window->pollEvent(M->event)){
            close_window(window, M); 

            draw_startbackground(window, &S);
        }
        window->display();
    }
}