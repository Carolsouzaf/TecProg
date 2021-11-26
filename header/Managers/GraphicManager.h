#ifndef GRAPHICMANAGER_H
#define GRAPHICMANAGER_H

#include <iostream>
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>

#include "Being.h"

using namespace std;
namespace Managers {

    class GraphicManager {
    private:
        int screenWidth;
        int screenHeight;
        sf::RenderWindow* window;
        sf::VideoMode videomode ;
        sf::Event event;

        //Private Functions
        void initVariables();
        void initWindow();
//    std::map<const char*, uniqueId> loadedTextures;

//    sf::View view;
//    std::vector<sf::Texture*> textures;
//    std::vector<sf::Sprite*> sprites;
//    std::vector<sf::Font*> fonts;
//    std::vector<sf::Text*> texts;

//    uniqueId backgroundSprite;
    public:
        GraphicManager(int screenWidth, int screenHeight, const char *windowText);

        ~GraphicManager();
        void drawBeing(Being *b);
        void update();
        void render();
        sf::Event getEvent();
    };
}

#endif
