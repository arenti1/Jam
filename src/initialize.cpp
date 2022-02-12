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

void init_button(std::string str, sf::Texture *t, sf::Sprite *s)
{
    sf::Image image;
    sf::Sprite Sprite;

    if (!image.loadFromFile(str.c_str()))
        std::cout << "Cannot load image\n";
    if (!t->loadFromImage(image))
        std::cout << "error loading from image\n";
    s->setTexture(*t);
    s->setScale(sf::Vector2f(0.4, 0.5));
    s->setPosition(sf::Vector2f(800, 50));
}

Main::Main()
{
    //BUTTON INIT
    init_button("./res/button.png", &S.button_t, &S.button_s);
    //NORMAL OFFICE
    init_sprite("./res/calm_bg_1.gif", &S.calm_bg_1t, &S.calm_bg_1s);
    init_sprite("./res/calm_bg_2.gif", &S.calm_bg_2t, &S.calm_bg_2s);
    init_sprite("./res/bg_01.gif", &bg_t[0], &bg_s[0]);
    init_sprite("./res/bg_02.gif", &bg_t[1], &bg_s[1]);
    init_sprite("./res/bg_03.gif", &bg_t[2], &bg_s[2]);
    init_sprite("./res/bg_04.gif", &bg_t[3], &bg_s[3]);
    init_sprite("./res/bg_05.gif", &bg_t[4], &bg_s[4]);
    init_sprite("./res/bg_06.gif", &bg_t[5], &bg_s[5]);
    init_sprite("./res/bg_07.gif", &bg_t[6], &bg_s[6]);
    init_sprite("./res/bg_08.gif", &bg_t[7], &bg_s[7]);
    init_sprite("./res/bg_09.gif", &bg_t[8], &bg_s[8]);
    init_sprite("./res/bg_10.gif", &bg_t[9], &bg_s[9]);
    init_sprite("./res/bg_11.gif", &bg_t[10], &bg_s[10]);

    //FANCY OFFICE
    init_sprite("./res/fancy_calm_bg_1.gif", &S.fancy_calm_bg_1t, &S.fancy_calm_bg_1s);
    init_sprite("./res/fancy_calm_bg_2.gif", &S.fancy_calm_bg_2t, &S.fancy_calm_bg_2s);
    init_sprite("./res/fancy_bg_01.gif", &fancy_bg_t[0], &fancy_bg_s[0]);
    init_sprite("./res/fancy_bg_02.gif", &fancy_bg_t[1], &fancy_bg_s[1]);
    init_sprite("./res/fancy_bg_03.gif", &fancy_bg_t[2], &fancy_bg_s[2]);
    init_sprite("./res/fancy_bg_04.gif", &fancy_bg_t[3], &fancy_bg_s[3]);
    init_sprite("./res/fancy_bg_05.gif", &fancy_bg_t[4], &fancy_bg_s[4]);
    init_sprite("./res/fancy_bg_06.gif", &fancy_bg_t[5], &fancy_bg_s[5]);
    init_sprite("./res/fancy_bg_07.gif", &fancy_bg_t[6], &fancy_bg_s[6]);
    init_sprite("./res/fancy_bg_08.gif", &fancy_bg_t[7], &fancy_bg_s[7]);
    init_sprite("./res/fancy_bg_09.gif", &fancy_bg_t[8], &fancy_bg_s[8]);
    init_sprite("./res/fancy_bg_10.gif", &fancy_bg_t[9], &fancy_bg_s[9]);
    init_sprite("./res/fancy_bg_11.gif", &fancy_bg_t[10], &fancy_bg_s[10]);
    count = 11;
    current = 0;

    init_sprite("./res/m/m1.png", &money_t[0], &money_s[0]);
    init_sprite("./res/m/m2.png", &money_t[1], &money_s[1]);
    init_sprite("./res/m/m3.png", &money_t[2], &money_s[2]);
    init_sprite("./res/m/m4.png", &money_t[3], &money_s[3]);
    init_sprite("./res/m/m5.png", &money_t[4], &money_s[4]);
    init_sprite("./res/m/m6.png", &money_t[5], &money_s[5]);
    init_sprite("./res/m/m7.png", &money_t[6], &money_s[6]);
    init_sprite("./res/m/m8.png", &money_t[7], &money_s[7]);
    init_sprite("./res/m/m9.png", &money_t[8], &money_s[8]);
    init_sprite("./res/m/m10.png", &money_t[9], &money_s[9]);
    init_sprite("./res/m/m11.png", &money_t[10], &money_s[10]);
    init_sprite("./res/m/m12.png", &money_t[11], &money_s[11]);
    init_sprite("./res/m/m13.png", &money_t[12], &money_s[12]);
    init_sprite("./res/m/m14.png", &money_t[13], &money_s[12]);
    init_sprite("./res/m/m15.png", &money_t[14], &money_s[14]);
    init_sprite("./res/m/m16.png", &money_t[15], &money_s[15]);
    init_sprite("./res/m/m17.png", &money_t[16], &money_s[16]);
    init_sprite("./res/m/m18.png", &money_t[17], &money_s[17]);
    init_sprite("./res/m/m19.png", &money_t[18], &money_s[18]);
    init_sprite("./res/m/m20.png", &money_t[19], &money_s[19]);
    init_sprite("./res/m/m21.png", &money_t[20], &money_s[20]);
    init_sprite("./res/m/m22.png", &money_t[21], &money_s[21]);
    init_sprite("./res/m/m23.png", &money_t[22], &money_s[22]);
    init_sprite("./res/m/m24.png", &money_t[23], &money_s[23]);

    money_count = 24;
    money_current = 0;    
}