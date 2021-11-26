#ifndef ENEMY_H
#define ENEMY_H

#include "Character.h"
#include "Entity.h"
using namespace std;

namespace Entities::Characters::Enemy {

    class Enemy : public Character {

    private:

    public:
        Enemy();

        ~Enemy();
    };
}

#endif