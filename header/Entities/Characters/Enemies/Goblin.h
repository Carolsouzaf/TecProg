#ifndef GOBLIN_H
#define GOBLIN_H

#define GOBLIN_TEXTURE "../assets/Monsters/Goblin/goblin.png"

#include "Entity.h"
#include "Character.h"
#include "Enemy.h"

using namespace std;

namespace Entities::Characters::Enemy {
    class Goblin : public Enemy {

    private:

    public:
        Goblin();

        ~Goblin();
    };
}
#endif