#ifndef FIREWORM_H
#define FIREWORM_H

#define FIREBALL_TEXTURE "../assets/Monsters/Fire Worm/fire_ball.png"
#define FIREBALL_RECT 0, 0, 17, 13

#define FIREWORM_TEXTURE "../assets/Monsters/Fire Worm/fire_worm.png"

#include "Enemy.h"

namespace Enemies{
    class FireWorm: public Enemy{

    private:

    public:
        FireWorm();
        ~FireWorm();
    };
}

#endif
