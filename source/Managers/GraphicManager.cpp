//
// Created by carolsfer on 18/11/2021.
//

#include "GraphicManager.h"
using namespace Managers;
GraphicManager::GraphicManager(int screenWidth, int screenHeight, const char *windowText) {

    this->initVariables();
    this->initWindow();

    screenWidth = 200;
    screenHeight = 200;
    windowText = "My Game";
    sf::RenderWindow window;
    window.create(sf::VideoMode(screenWidth, screenHeight), windowText);
    sf::Event event = getEvent;

    while (window.isOpen()) {

        while (window.pollEvent(event)) {
            switch (event.type) {
                case sf::Event::Closed:
                    window.close();
                    break;
                case sf::Event::KeyPressed:
                    if (event.key.code == sf::Keyboard::Escape)
                        window.close();
                    break;
            }
        }
        //Update
        window.clear(sf::Color(255, 255, 255, 255));
        //this.draw();
        window.display();
    }
}
GraphicManager::~GraphicManager(){
delete this->window;
}
sf::Event GraphicManager::getEvent(){
    return event;
}

void GraphicManager::update(){

}

void GraphicManager::render(){

}

void GraphicManager::drawBeing(Being *b){
        // void* Fig = b->getFigura();
        // comandos da biblioteca gráfica para desenhar o derivado de ente a partir de sua figua ou coisa que o valha.
}

void GraphicManager::initVariables(){
this->window = nullptr;
}
void GraphicManager::initWindow(int screenWidth, int screenHeight, const char *windowText){
    this->videomode.width = screenWidth;
    this->videomode.height = screenHeight;
    this->window = new sf::RenderWindow(sf::VideoMode(videomode.width, videomode.height), windowText);
}

//        window.draw(shape);
//
//    }
//    if(window.isOpen())
//    {
//        window.display();
//        window.clear();
//        if(backgroundSprite >= 0)
//        {
//            (*sprites[backgroundSprite]).setPosition(sf::Vector2f(view.getCenter().x - view.getSize().x/2, 0));
//            window.draw(*sprites[backgroundSprite]);
//        }
//    }