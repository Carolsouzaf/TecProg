#ifndef STAGE_H
#define STAGE_H

#include "Being.h"
using namespace std;
namespace Stages {
    class Stage : public Being {

    public:
        Stage();

        ~Stage();

        void collisionManager();

        virtual void execute();
    };
}
#endif