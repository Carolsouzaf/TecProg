#ifndef GAME_H
#define GAME_H

class Game{
private:
    GraphicManager GM;

public:
    Game();
    virtual ~Game();

    void execute();
};
#endif