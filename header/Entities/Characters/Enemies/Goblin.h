#ifndef GOBLIN_H
#define GOBLIN_H

#define GOBLIN_TEXTURE "../assets/Monsters/Goblin/goblin.png"

#include "Enemy.h"
using namespace std;
namespace Enemies{
    class Goblin: public Enemy{
    
    private:

    public:
        Goblin();
        ~Goblin();
    };
}
#endif