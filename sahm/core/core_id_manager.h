
#pragma once

#include "core/core_uncopyable.h"

#include <string>
#include <unordered_map>
#include <vector>

namespace Core
{
    class CIDManager : private CUncopyable
    {
        public:

            typedef unsigned int BID;

        public:

            static const BID s_InvalidID = BID(-1);

        public:

            CIDManager();
           ~CIDManager();

        public:

            BID Register(const std::string& _rString);

            bool ContainsName(const std::string& _rString) const;

            const std::string& GetName(BID _ID) const;

            unsigned int GetNumberOfNames() const;

        public:

            void Clear();

        private:

            typedef std::unordered_map<std::string, BID> CIDsByName;
            typedef std::pair<std::string, BID>          SIDsByNameItem;
            typedef CIDsByName::iterator                 CIDsByNameIterator;
            typedef std::pair<CIDsByNameIterator, bool>  CIDsByNameResult;

            typedef std::vector<CIDsByNameIterator>      CNamesByID;

        private:

            CIDsByName m_IDsByName;
            CNamesByID m_NamesByID;
    };
} // namespace Core
