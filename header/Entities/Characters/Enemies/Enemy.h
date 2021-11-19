#ifndef ENEMY_H
#define ENEMY_H
class Enemy{

#include "Character.h"
using namespace std;

namespace Enemies{
    class Enemy: public Character{

    private:

    public:
        Enemy();
        ~Enemy();
    };
}

#endif