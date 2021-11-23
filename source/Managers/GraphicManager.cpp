//
// Created by carolsfer on 18/11/2021.
//

#include "GraphicManager.h"
using namespace Managers;

GraphicManager::GraphicManager(int screenWidth, int screenHeight, const char *windowText) {
    screenWidth = 200;
    screenHeight = 200;
    windowText = "My Game";
    sf::Window window;
    window.create(sf::VideoMode(screenWidth, screenHeight), windowText);


    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed) {
                window.close();
            }
        }
    }
}
GraphicManager::~GraphicManager(){

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