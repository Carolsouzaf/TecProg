#ifndef PLAYER_H
#define PLAYER_H

#include "Character.h"

//#define PLAYER1_TEXTURE_FILE "../assets/Players/Huntress/huntress.png"
//#define PLAYER2_TEXTURE_FILE "../assets/Players/Warrior/warrior.png"

using namespace std;
namespace Entities{
    class Player: public Character {

        private:

        public:
        Player();
        ~Player();

    };
}
#endif