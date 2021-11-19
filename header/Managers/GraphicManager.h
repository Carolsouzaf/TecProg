#ifndef GRAPHICMANAGER_H
#define GRAPHICMANAGER_H

#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>


class GraphicManager {
private:
//    std::map<const char*, uniqueId> loadedTextures;
//    sf::RenderWindow window;
//    sf::View view;
    int screenWidth;
    int screenHeight;

//    std::vector<sf::Texture*> textures;
//    std::vector<sf::Sprite*> sprites;
//    std::vector<sf::Font*> fonts;
//    std::vector<sf::Text*> texts;
//    sf::Event event;
//    uniqueId backgroundSprite;
public:
    GraphicManager(int screenWidth, int screenHeight, const char *windowText);
    ~GraphicManager();
    //void draw();
    //sf::Event getEvent();
};


#endif
