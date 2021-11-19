#ifndef STAGE_H
#define STAGE_H

#include "Being.h"

    class Stage: public Being{

    public:
        Stage();
        ~Stage();
        void collisionManager();
        virtual void execute();
    };

#endif