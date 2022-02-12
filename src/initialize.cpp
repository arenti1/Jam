#include "../include/main.hpp"

void init_sprite(std::string str, sf::Texture *t, sf::Sprite *s)
{
    sf::Image image;
    if (!image.loadFromFile(str.c_str())){
        std::cout << "Cannot load Image\n";
    }
    if (!t->loadFromImage(image)){
        std::cout << "error loading from image\n";
    }
    s->setTexture(*t);
}

Main::Main()
{
    init_sprite("./res/calm_bg_1.gif", &S.calm_bg_1t, &S.calm_bg_1s);
    init_sprite("./res/calm_bg_2.gif", &S.calm_bg_2t, &S.calm_bg_2s);
}