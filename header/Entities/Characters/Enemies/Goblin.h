#ifndef GOBLIN_H
#define GOBLIN_H

#define GOBLIN_TEXTURE "../assets/Monsters/Goblin/goblin.png"

#include "Enemy.h"
#include "Entity.h"
using namespace std;

namespace Entities {
    class Goblin : public Enemy {

    private:

    public:
        Goblin();

        ~Goblin();
    };
}
#endif