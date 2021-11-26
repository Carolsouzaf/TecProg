//
// Created by carolsfer on 15/11/2021.
//

#ifndef PLATFORM_H
#define PLATFORM_H
#include "Entity.h"
#include "Obstacle.h"

using namespace std;

namespace Entities::Obstacles {

    class Platform: public Obstacle {
    private:

    public:
        Platform();

        ~Platform();
    };
}

#endif
