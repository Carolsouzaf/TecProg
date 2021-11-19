#ifndef PLAYER_H
#define PLAYER_H

#include "Character.h"
class Player: public Character{

#define PLAYER_JUMP_STATE "PlayerJumpState"
#define PLAYER_REST_STATE "PlayerRestState"
#define PLAYER_WALK_STATE "PlayerWalkState"

#define PLAYER1_TEXTURE_FILE "../assets/Players/Huntress/huntress.png"
#define PLAYER2_TEXTURE_FILE "../assets/Players/Warrior/warrior.png"

class Player{

public:
    Player();
    ~Player();

};
#endif