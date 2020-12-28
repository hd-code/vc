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

        CEntityLink& getPrevious();
        CEntityLink& getNext();

    public:
        // The link will be appended to the anchor
        void link(CEntityLink &anchor);
        void unlink();

        bool isLinked() const;

    private:
        CEntityLink* previous;
        CEntityLink* next;
};

}