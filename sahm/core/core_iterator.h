
#pragma once

#include "core/core_link.h"

#include <assert.h>

namespace Core
{
	template <typename T, Core::CLink T::* TMtr>
    class CIterator
    {
        public:
            
            typedef CIterator<T, TMtr> CThis;
			typedef T                  X;
			typedef T*                 XPtr;
			typedef const T*           XConstPtr;
			typedef T&	               XRef;
			typedef const T&           XConstRef;

		public:
            
            CIterator()
                : m_pLink(nullptr)
            {
            }

            explicit CIterator(CLink* _pLink)
                : m_pLink(_pLink)
            {
            }

        public:

            CThis& operator = (CLink* _pLink)
            {
                m_pLink = _pLink;

                return *this;
            }

            XRef operator * () const
            {
                assert(m_pLink != nullptr);

                return CLink::GetOwner<X>(*m_pLink, TMtr);
            }

            XPtr operator -> () const
            {
                return &CLink::GetOwner<X>(*m_pLink, TMtr);
            }

            CThis& operator ++ ()
            {
                assert(m_pLink != nullptr);

                m_pLink = m_pLink->GetNext();

                return *this;
            }

            CThis operator ++ (int)
            {
                CThis Iterator(m_pLink);

                ++ (*this);

                return Iterator;
            }

            bool operator == (const CThis& _rIterator) const
            {
                return m_pLink == _rIterator.m_pLink;
            }

            bool operator != (const CThis& _rIterator) const
            {
                return m_pLink != _rIterator.m_pLink;
            }

        private:

            CLink* m_pLink;
    };
} // namespace Core
