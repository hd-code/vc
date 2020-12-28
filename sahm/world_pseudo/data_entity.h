
#pragma once

#include "data_entity_link.h"

namespace Data
{
    class CEntity
    {
        private:

            CEntityLink m_Link;

        private:

            friend class CEntityLink;
            friend class CEntityList;
    };
}
