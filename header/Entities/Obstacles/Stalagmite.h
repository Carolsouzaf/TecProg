//
// Created by carolsfer on 15/11/2021.
//

#ifndef STALAGMITE_H
#define STALAGMITE_H

#include "Entity.h"
#include "Obstacle.h"

using namespace std;

namespace Entities {
    class Stalagmite : public Obstacle  {
    private:

    public:
        Stalagmite();

        ~Stalagmite();
    };
}

#endif
