#include "entity-link.hpp"

#include "data/entity.hpp"

#include <stdlib.h>

using namespace data;

// -----------------------------------------------------------------------------

CEntityLink::CEntityLink() {
    previous = this;
    next = this;
}

CEntityLink::~CEntityLink() {
    if (isLinked()) {
        unlink();
    }
}

// -----------------------------------------------------------------------------

CEntity& CEntityLink::getEntity() {
    return *reinterpret_cast<CEntity*>(reinterpret_cast<ptrdiff_t>(this) -
        ( reinterpret_cast<ptrdiff_t>(&(static_cast<CEntity*>(nullptr)->*(&CEntity::link)))
        - reinterpret_cast<ptrdiff_t>(static_cast<void*>(nullptr)))
        );
}

const CEntity& CEntityLink::getEntity() const {
    return *reinterpret_cast<CEntity*>(reinterpret_cast<ptrdiff_t>(this) -
        ( reinterpret_cast<ptrdiff_t>(&(static_cast<CEntity*>(nullptr)->*(&CEntity::link)))
        - reinterpret_cast<ptrdiff_t>(static_cast<void*>(nullptr)))
        );
}

CEntityLink& CEntityLink::getPrevious() {
    return *previous;
}

CEntityLink& CEntityLink::getNext() {
    return *next;
}

// -----------------------------------------------------------------------------

void CEntityLink::link(CEntityLink &anchor) {
    if (isLinked()) {
        unlink();
    }

    previous = &anchor;
    next = anchor.next;

    previous->next = this;
    next->previous = this;
}

void CEntityLink::unlink() {
    previous->next = next;
    next->previous = previous;

    previous = this;
    next = this;
}

bool CEntityLink::isLinked() const {
    return previous != this && next != this;
}
