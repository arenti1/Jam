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
    bg_s[0] = S.bg_01s;
    bg_s[1] = S.bg_02s;
    bg_s[2] = S.bg_03s;
    bg_s[3] = S.bg_04s;
    bg_s[4] = S.bg_05s;
    bg_s[5] = S.bg_06s;
    bg_s[6] = S.bg_07s;
    bg_s[7] = S.bg_08s;
    bg_s[8] = S.bg_09s;
    bg_s[9] = S.bg_10s;
    bg_s[10] = S.bg_11s;
    count = 11;
    current = 0;
}
