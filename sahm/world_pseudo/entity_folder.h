
#pragma once

// namespace data

class CEntityFolder
{
    private:
        
        SEntityCategory::Enum m_Category;
        std::list<CEntity*>   m_EntityList;     // besser intrusive list
        // Pointer auf besitzenden Sector
};
