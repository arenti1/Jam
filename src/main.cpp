#include "../include/main.hpp"

void main_loop(Main *M)
{
    M->bttn_clicked = false;
    sf::RenderWindow window(sf::VideoMode(1200, 675), "MyGKrellm");
    while (window.isOpen()){
        while (window.pollEvent(M->event)){
            if (M->event.type == sf::Event::MouseButtonPressed &&
                M->event.mouseButton.button == sf::Mouse::Left){
                M->bttn_clicked = true;
            } else {
                M->bttn_clicked = false;
            }
            close_window(&window, M);
            
        }
        window.draw(get_bg_sprite(M->bttn_clicked, M));
        window.display();
    }
}

int main()
{
    Main M;
    main_loop(&M);
}