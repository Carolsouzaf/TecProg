#include "Game.h"
#include "GraphicManager.h"
#include <SFML/Graphics.hpp>
Game::Game(){
    Being::setGraphicManager(&GM);
}
Game::~Game(){

}
void Game::execute(){


}