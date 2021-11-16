#ifndef ENTITY_H
#define ENTITY_H
namespace Entities{
    
    class Entity: public Being{
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