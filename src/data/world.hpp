#pragma once

#include "core/singleton.hpp"
#include "data/entity.hpp"
#include "data/sector.hpp"

// -----------------------------------------------------------------------------

namespace data {

class CWorld : public core::CSingleton<CWorld> {
    public:
        void add(CEntity& entity);
        void remove(CEntity& entity);
        void onMove(CEntity& entity);

    private:
        template<class T>
        friend class core::CSingleton;

        CWorld();
        ~CWorld();

    private:
        const static int MAX_NUM_OF_SECTORS_X = 2;
        const static int MAX_NUM_OF_SECTORS_Y = 2;
        
        CSector sectors[MAX_NUM_OF_SECTORS_X * MAX_NUM_OF_SECTORS_Y];
};

}