#ifndef EVILWIZARD_H
#define EVILWIZARD_H

#define EVILWIZARD_TEXTURE "../assets/Evil Wizard/evil_wizard.png"

#include "Entity.h"
#include "Character.h"
#include "Enemy.h"

using namespace std;

namespace Entities::Characters::Enemy {
    class EvilWizard : public Enemy {

    private:

    public:
        EvilWizard();

        ~EvilWizard();

    };
}
#endif