#ifndef ENTITY_H
#define ENTITY_H

#include "Being.h"


using namespace std;
    namespace Entities {
        class Entity : public Being {
        protected:
            int x;
            int y;
            sf::RectangleShape shape;
            sf::Texture texture*; 
        public:
            Entity();

            ~Entity();

            virtual void execute();

        };
    }

#endif