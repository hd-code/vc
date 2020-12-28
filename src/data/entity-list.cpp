#include "entity-list.hpp"

#include "data/entity.hpp"

using namespace data;

// -----------------------------------------------------------------------------

CEntityList::CEntityList() {
    
}

CEntityList::~CEntityList() {
    while (!isEmpty()) {
        anchor.getNext().unlink();
    }
}

// -----------------------------------------------------------------------------

void CEntityList::append(CEntity &entity) {
    entity.link.link(anchor.getPrevious());
}

void CEntityList::prepend(CEntity &entity) {
    entity.link.link(anchor);
}

bool CEntityList::isEmpty() {
    return &anchor == &anchor.getNext();
}