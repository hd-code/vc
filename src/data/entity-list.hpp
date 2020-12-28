#pragma once

#include "data/entity-link.hpp"

// -----------------------------------------------------------------------------

namespace data {

class CEntityList {
    public:
        CEntityList();
        ~CEntityList();

    public:
        void append(CEntity &entity);
        void prepend(CEntity &entity);

        bool isEmpty();

    private:
        CEntityLink anchor;
};

}