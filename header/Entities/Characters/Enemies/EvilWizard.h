#ifndef EVILWIZARD_H
#define EVILWIZARD_H

#define EVILWIZARD_TEXTURE "../assets/Evil Wizard/evil_wizard.png"

#include "Enemy.h"
#include "Entity.h"
using namespace std;

namespace Entities {
    class EvilWizard : public Enemy {

    private:

    public:
        EvilWizard();

        ~EvilWizard();

    };
}
#endif