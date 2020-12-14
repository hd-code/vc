
#pragma once

namespace Core
{
    class CUncopyable
    {
        protected:

            CUncopyable()
            {
            }

           ~CUncopyable()
            {
            }

        private:

            CUncopyable(const CUncopyable&) = delete;

            CUncopyable& operator = (const CUncopyable&) = delete;
    };
} // namespace Core
