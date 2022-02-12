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
}

/*
    init_sprite("./res/bg_01.gif", &S.bg_01t, &S.bg_01s);
    init_sprite("./res/bg_02.gif", &S.bg_02t, &S.bg_02s);
    init_sprite("./res/bg_03.gif", &S.bg_03t, &S.bg_03s);
    init_sprite("./res/bg_04.gif", &S.bg_04t, &S.bg_04s);
    init_sprite("./res/bg_05.gif", &S.bg_05t, &S.bg_05s);
    init_sprite("./res/bg_06.gif", &S.bg_06t, &S.bg_06s);
    init_sprite("./res/bg_07.gif", &S.bg_07t, &S.bg_07s);
    init_sprite("./res/bg_08.gif", &S.bg_08t, &S.bg_08s);
    init_sprite("./res/bg_09.gif", &S.bg_09t, &S.bg_09s);
    init_sprite("./res/bg_10.gif", &S.bg_10t, &S.bg_10s);
    init_sprite("./res/bg_11.gif", &S.bg_11t, &S.bg_11s);
*/