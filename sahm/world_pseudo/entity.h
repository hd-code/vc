
#pragma once

// namespace Data

class CEntity
{
    public:

        using BID = int;

    private:

        BID      m_ID;
        CEntity* m_pNext;
        CEntity* m_pPrevious;

        // Position 2D
        // Richtung Vektor 2D oder Winkel
        // Geschwindigkeit
        // AABB Worldspace
        // Pointer auf besitzenden EntityFolder
};
