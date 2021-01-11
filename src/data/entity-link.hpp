#pragma once

namespace data {

class CEntity;

class CEntityLink {
    public:
        CEntityLink();
        ~CEntityLink();

    public:
        CEntity& getEntity();
        const CEntity& getEntity() const;

    public:
        // The link will be appended to the anchor
        void link(CEntityLink &anchor);
        void unlink();

        bool isLinked() const;

        CEntityLink& getPrevious();
        CEntityLink& getNext();

    private:
        CEntityLink* previous;
        CEntityLink* next;
};

}