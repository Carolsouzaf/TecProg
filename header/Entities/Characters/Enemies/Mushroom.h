#ifndef MUSHROOM_H
#define MUSHROOM_H

#define BOMB_TEXTURE "../assets/Monsters/Mushroom/bomb.png"
#define BOMB_RECT 0, 0, 10, 10

#define MUSHROOM_TEXTURE "../assets/Monsters/Mushroom/mushroom.png"

#include "Enemy.h"

    class Mushroom: public Enemy{

    private:

    public:
        Mushroom();
        ~Mushroom();
    };

#endif