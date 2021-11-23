#ifndef ENTITY_H
#define ENTITY_H
using namespace std;
    namespace Entities {
        class Entity : public Being {
        protected:
            int x;
            int y;
        public:
            Entity();

            ~Entity();

            virtual void execute();

        };
    }

#endif