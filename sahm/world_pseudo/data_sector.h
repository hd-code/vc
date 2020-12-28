
#pragma once

#include "data_entity_category.h"
#include "data_entity_folder.h"

namespace Data
{
    class CSector
    {
        private:

            int           m_PositionX;
            int           m_PositionY;
            CEntityFolder m_Folders[SEntityCategory::NumberOfMembers];
    };
}
