#pragma once

#include "data/entity-link.hpp"

// -----------------------------------------------------------------------------

namespace data {

class CEntity {
    private:
        friend class CEntityList;
        friend class CEntityLink;

    private:
        CEntityLink link;
};

}