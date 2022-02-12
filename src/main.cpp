#include "../include/main.hpp"

void main_loop(Main *M)
{
    M->bttn_clicked = false;
    sf::RenderWindow window(sf::VideoMode(1200, 675), "MyGKrellm");

    while (window.isOpen()){
        while (window.pollEvent(M->event)){
            check_events(M);
            close_window(&window, M); 
        }
        draw_background(&window, M->bttn_clicked, M);        
        draw_money(&window, M);
        window.draw(M->S.button_s);
        window.display();
    }
}

int main()
{
    Main M;
    main_loop(&M);
}