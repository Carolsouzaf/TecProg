#ifndef ENTITYLIST_H
#define ENTITYLIST_H

#include "List.h"
#include "Entity.h"
using namespace std;

namespace Lists {
    class EntityList {
    public:
        List<Entities::Entity> LEs;
    public:
        EntityList();

        ~EntityList();

        List<Entities::Entity> *getList();
    };
}

#endif
