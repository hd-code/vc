
#pragma once

// namespace Data

class CEntityIterator
{
    public:

        CEntity& GetEntity();

    public:

        CEntityIterator Next(const AABB& _rAABB);
        CEntityIterator Next(const AABB& _rAABB, SEntityCategory::Enum _Category);

    private:

        // intrusive list
        CEntity* m_pEntity;
};

class CMapSystem
{
    public:

        // Singleton

        void Add(CEntity& _rEntity);
        void Remove(CEntity& _rEntity);
        void Move(CEntity& _rEntity);

        CEntityIterator Begin(const AABB& _rAABB);
        CEntityIterator End(const AABB& _rAABB);

        CEntityIterator Begin(const AABB& _rAABB, SEntityCategory::Enum _Category);
        CEntityIterator End(const AABB& _rAABB, SEntityCategory::Enum _Category);

    private:

        CSector m_Sectors[8 * 4];

};

const CEntityIterator EndIterator = MapSystem::End(AABB);

for (CEntityIterator Iterator = MapSystem::Begin(AABB); Iterator != EndIterator; Iterator = Iterator.Next(AABB))
{
    CEntity& rEntity = Iterator.GetEntity();

    ...
}