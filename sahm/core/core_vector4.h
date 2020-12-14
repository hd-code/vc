
////////////////////////////////////////////////////////////////////////////////
/// \file    core_vector4.h
///
/// \author  Joerg Sahm
/// \author  Copyright (c) Joerg Sahm. All rights reserved.
///
/// \date    2011
///
/// \version 1.0
///
/// \brief   A brief file description.
///
/// A detailed file description.
////////////////////////////////////////////////////////////////////////////////

#pragma once

#include "core/core_constants.h"
#include "core/core_operations.h"

#include <assert.h>

namespace Core
{
    template <typename T>
    class CMatrix4x4;
} // namespace Core

namespace Core
{
    template <typename T>
    class CVector4
    {
        public:

            static const CVector4<T> s_Zero;
            static const CVector4<T> s_One;
            static const CVector4<T> s_AxisX;
            static const CVector4<T> s_AxisY;
            static const CVector4<T> s_AxisZ;
            static const CVector4<T> s_AxisW;

        public:

            typedef CVector4<T> CThis;
            typedef T           X;

        public:

            static const size_t s_NumberOfComponents = 4;

        public:

            enum EUninitialized  
            { 
                Uninitialized,
            };

        public:

            inline CVector4();
            inline CVector4(const CThis& _rVector);
            inline explicit CVector4(EUninitialized);
            inline explicit CVector4(X _Value);
            inline CVector4(X _Value0, X _Value1, X _Value2, X _Value3);

        public:

            inline CThis& operator = (const CThis& _rVector);

        public:

            inline X& operator [] (size_t _Index);
            inline const X& operator [] (size_t _Index) const;

        public:

            inline CThis& operator += (const CThis& _rVector);
            inline CThis& operator -= (const CThis& _rVector);
            inline CThis& operator *= (const CThis& _rVector);
            inline CThis& operator /= (const CThis& _rVector);

            inline CThis& operator *= (X _Scalar);
            inline CThis& operator /= (X _Scalar);

            inline CThis& operator *= (const CMatrix4x4<X>& _rMatrix);

            inline CThis operator + (const CThis& _rVector) const;
            inline CThis operator - (const CThis& _rVector) const;
            inline CThis operator * (const CThis& _rVector) const;
            inline CThis operator / (const CThis& _rVector) const;

            inline CThis operator * (X _Scalar) const;
            inline CThis operator / (X _Scalar) const;

            inline CThis operator * (const CMatrix4x4<X>& _rMatrix) const;

            inline CThis operator - () const;

        public:

            inline bool operator == (const CThis& _rVector) const;
            inline bool operator != (const CThis& _rVector) const;
            inline bool operator <  (const CThis& _rVector) const;
            inline bool operator <= (const CThis& _rVector) const;
            inline bool operator >  (const CThis& _rVector) const;
            inline bool operator >= (const CThis& _rVector) const;

        public:

            inline CThis& Set(const CThis& _rVector);
            inline CThis& Set(X _Value);
            inline CThis& Set(X _Value0, X _Value1, X _Value2, X _Value3);

        public:

            inline CThis& Normalize();
            inline CThis& Normalize2();
            inline CThis& Normalize3();
            inline CThis& Normalize4();
            inline CThis GetNormalized() const;
            inline CThis GetNormalized2() const;
            inline CThis GetNormalized3() const;
            inline CThis GetNormalized4() const;

            inline bool IsNormalized() const;

            inline X GetLength() const;
            inline X GetLength2() const;
            inline X GetLength3() const;
            inline X GetLength4() const;

            inline X GetSquaredLength() const;
            inline X GetSquaredLength2() const;
            inline X GetSquaredLength3() const;
            inline X GetSquaredLength4() const;

            inline CThis& Reciprocal();
            inline CThis GetReciprocal() const;

            inline CThis& Round();
            inline CThis GetRounded() const;

            inline CThis& Clamp(const CThis& _rMin, const CThis& _rMax);
            inline CThis GetClamped(const CThis& _rMin, const CThis& _rMax) const;

            inline CThis& Saturate();
            inline CThis GetSaturated() const;

            inline CThis& Min(const CThis& _rVector);
            inline CThis GetMin(const CThis& _rVector) const;

            inline CThis& Max(const CThis& _rVector);
            inline CThis GetMax(const CThis& _rVector) const;

            inline CThis& Neg();
            inline CThis GetNeg() const;

            inline CThis& MulAdd(const CThis& _rVector1, const CThis& _rVector2);
            inline CThis GetMulAdd(const CThis& _rVector1, const CThis& _rVector2) const;

            inline CThis& MulSub(const CThis& _rVector1, const CThis& _rVector2);
            inline CThis GetMulSub(const CThis& _rVector1, const CThis& _rVector2) const;

            inline CThis& Lerp(const CThis& _rTarget, const CThis& _rWeight);
            inline CThis GetLerped(const CThis& _rTarget, const CThis& _rWeight) const;
            inline CThis& Lerp(const CThis& _rTarget, X _Weight);
            inline CThis GetLerped(const CThis& _rTarget, X _Weight) const;

            inline CThis& Splat(X _Value);
            inline CThis GetSplatted(X _Value) const;

            inline CThis& CrossProduct(const CThis& _rVector);
            inline CThis GetCrossProduct(const CThis& _rVector) const;

            inline X GetDotProduct(const CThis& _rVector) const;
            inline X GetDotProduct2(const CThis& _rVector) const;
            inline X GetDotProduct3(const CThis& _rVector) const;
            inline X GetDotProduct4(const CThis& _rVector) const;

            template <size_t TIndex0, size_t TIndex1, size_t TIndex2, size_t TIndex3>
            inline CThis& Swizzle();
            template <size_t TIndex0, size_t TIndex1, size_t TIndex2, size_t TIndex3>
            inline CThis GetSwizzled() const;

            template <size_t TIndex0, size_t TIndex1, size_t TIndex2, size_t TIndex3>
            inline CThis& Permute(const CThis& _rVector);
            template <size_t TIndex0, size_t TIndex1, size_t TIndex2, size_t TIndex3>
            inline CThis GetPermuted(const CThis& _rVector) const;

            inline CThis& TestEqual(const CThis& _rVector);
            inline CThis GetTestEqual(const CThis& _rVector) const;

            inline CThis& TestNotEqual(const CThis& _rVector);
            inline CThis GetTestNotEqual(const CThis& _rVector) const;

            inline CThis& TestLesser(const CThis& _rVector);
            inline CThis GetTestLesser(const CThis& _rVector) const;

            inline CThis& TestLesserEqual(const CThis& _rVector);
            inline CThis GetTestLesserEqual(const CThis& _rVector) const;

            inline CThis& TestGreater(const CThis& _rVector);
            inline CThis GetTestGreater(const CThis& _rVector) const;

            inline CThis& TestGreaterEqual(const CThis& _rVector);
            inline CThis GetTestGreaterEqual(const CThis& _rVector) const;

        private:

            X m_V[s_NumberOfComponents];
    };
} // namespace Core

namespace Core
{
    typedef CVector4<signed char>      SChar4;
    typedef CVector4<unsigned char>    UChar4;
    typedef CVector4<signed short>     SShort4;
    typedef CVector4<unsigned short>   UShort4;
    typedef CVector4<signed int>       SInt4;
    typedef CVector4<unsigned int>     UInt4;
    typedef CVector4<signed long>      SLong4;
    typedef CVector4<unsigned long>    ULong4;
    typedef CVector4<signed long long> SLongLong4;
    typedef CVector4<unsigned long>    ULongLong4;
    typedef CVector4<float>            Float4;
    typedef CVector4<double>           Double4;
} // namespace Core

#include "core/core_matrix4x4.h"

namespace Core
{
    template <typename T>
    const CVector4<T> CVector4<T>::s_Zero  = CVector4(T(0));
    template <typename T>
    const CVector4<T> CVector4<T>::s_One   = CVector4(T(1));
    template <typename T>
    const CVector4<T> CVector4<T>::s_AxisX = CVector4(T(1), T(0), T(0), T(0));
    template <typename T>
    const CVector4<T> CVector4<T>::s_AxisY = CVector4(T(0), T(1), T(0), T(0));
    template <typename T>
    const CVector4<T> CVector4<T>::s_AxisZ = CVector4(T(0), T(0), T(1), T(0));
    template <typename T>
    const CVector4<T> CVector4<T>::s_AxisW = CVector4(T(0), T(0), T(0), T(1));
} // namespace Core

namespace Core
{
    template <typename T>
    inline CVector4<T>::CVector4()
    {
        m_V[0] = 0;
        m_V[1] = 0;
        m_V[2] = 0;
        m_V[3] = 0;
    }

    // -----------------------------------------------------------------------------

    template <typename T>
    inline CVector4<T>::CVector4(const CThis& _rVector)
    {
        m_V[0] = _rVector.m_V[0];
        m_V[1] = _rVector.m_V[1];
        m_V[2] = _rVector.m_V[2];
        m_V[3] = _rVector.m_V[3];
   }

    // -----------------------------------------------------------------------------

    template <typename T>
    inline CVector4<T>::CVector4(EUninitialized)
    {
    }

    // -----------------------------------------------------------------------------

    template <typename T>
    inline CVector4<T>::CVector4(X _Value)
    {
        m_V[0] = _Value;
        m_V[1] = _Value;
        m_V[2] = _Value;
        m_V[3] = _Value;
    }

    // -----------------------------------------------------------------------------

    template <typename T>
    inline CVector4<T>::CVector4(X _Value0, X _Value1, X _Value2, X _Value3)
    {
        m_V[0] = _Value0;
        m_V[1] = _Value1;
        m_V[2] = _Value2;
        m_V[3] = _Value3;
    }

    // -----------------------------------------------------------------------------

    template <typename T>
    inline typename CVector4<T>::CThis& CVector4<T>::operator = (const CThis& _rVector)
    {
        m_V[0] = _rVector.m_V[0];
        m_V[1] = _rVector.m_V[1];
        m_V[2] = _rVector.m_V[2];
        m_V[3] = _rVector.m_V[3];

        return *this;
    }

    // -----------------------------------------------------------------------------

    template <typename T>
    inline typename CVector4<T>::X& CVector4<T>::operator [] (size_t _Index)
    {
        assert(_Index < s_NumberOfComponents);

        return m_V[_Index];
    }

    // -----------------------------------------------------------------------------

    template <typename T>
    inline const typename CVector4<T>::X& CVector4<T>::operator [] (size_t _Index) const
    {
        assert(_Index < s_NumberOfComponents);

        return m_V[_Index];
    }

    // -----------------------------------------------------------------------------

    template <typename T>
    inline typename CVector4<T>::CThis& CVector4<T>::operator += (const CThis& _rVector)
    {
        m_V[0] += _rVector.m_V[0];
        m_V[1] += _rVector.m_V[1];
        m_V[2] += _rVector.m_V[2];
        m_V[3] += _rVector.m_V[3];

        return *this;
    }

    // -----------------------------------------------------------------------------

    template <typename T>
    inline typename CVector4<T>::CThis& CVector4<T>::operator -= (const CThis& _rVector)
    {
        m_V[0] -= _rVector.m_V[0];
        m_V[1] -= _rVector.m_V[1];
        m_V[2] -= _rVector.m_V[2];
        m_V[3] -= _rVector.m_V[3];

        return *this;
    }

    // -----------------------------------------------------------------------------

    template <typename T>
    inline typename CVector4<T>::CThis& CVector4<T>::operator *= (const CThis& _rVector)
    {
        m_V[0] *= _rVector.m_V[0];
        m_V[1] *= _rVector.m_V[1];
        m_V[2] *= _rVector.m_V[2];
        m_V[3] *= _rVector.m_V[3];

        return *this;
    }

    // -----------------------------------------------------------------------------

    template <typename T>
    inline typename CVector4<T>::CThis& CVector4<T>::operator /= (const CThis& _rVector)
    {
        m_V[0] /= _rVector.m_V[0];
        m_V[1] /= _rVector.m_V[1];
        m_V[2] /= _rVector.m_V[2];
        m_V[3] /= _rVector.m_V[3];

        return *this;
    }

    // -----------------------------------------------------------------------------

    template <typename T>
    inline typename CVector4<T>::CThis& CVector4<T>::operator *= (X _Scalar)
    {
        m_V[0] *= _Scalar;
        m_V[1] *= _Scalar;
        m_V[2] *= _Scalar;
        m_V[3] *= _Scalar;

        return *this;
    }

    // -----------------------------------------------------------------------------

    template <typename T>
    inline typename CVector4<T>::CThis& CVector4<T>::operator /= (X _Scalar)
    {
        m_V[0] /= _Scalar;
        m_V[1] /= _Scalar;
        m_V[2] /= _Scalar;
        m_V[3] /= _Scalar;

        return *this;
    }

    // -----------------------------------------------------------------------------

    template <typename T>
    inline typename CVector4<T>::CThis& CVector4<T>::operator *= (const CMatrix4x4<X>& _rMatrix)
    {
        X V[s_NumberOfComponents];

        V[0] = m_V[0] * _rMatrix[0][0] + m_V[1] * _rMatrix[1][0] + m_V[2] * _rMatrix[2][0] + m_V[3] * _rMatrix[3][0];
        V[1] = m_V[0] * _rMatrix[0][1] + m_V[1] * _rMatrix[1][1] + m_V[2] * _rMatrix[2][1] + m_V[3] * _rMatrix[3][1];
        V[2] = m_V[0] * _rMatrix[0][2] + m_V[1] * _rMatrix[1][2] + m_V[2] * _rMatrix[2][2] + m_V[3] * _rMatrix[3][2];
        V[3] = m_V[0] * _rMatrix[0][3] + m_V[1] * _rMatrix[1][3] + m_V[2] * _rMatrix[2][3] + m_V[3] * _rMatrix[3][3];

        return Set(V[0], V[1], V[2], V[3]);
    }

    // -----------------------------------------------------------------------------

    template <typename T>
    inline typename CVector4<T>::CThis CVector4<T>::operator + (const CThis& _rVector) const
    {
        X V[s_NumberOfComponents];

        V[0] = m_V[0] + _rVector.m_V[0];
        V[1] = m_V[1] + _rVector.m_V[1];
        V[2] = m_V[2] + _rVector.m_V[2];
        V[3] = m_V[3] + _rVector.m_V[3];

        return CVector4(V[0], V[1], V[2], V[3]);
    }

    // -----------------------------------------------------------------------------

    template <typename T>
    inline typename CVector4<T>::CThis CVector4<T>::operator - (const CThis& _rVector) const
    {
        X V[s_NumberOfComponents];

        V[0] = m_V[0] - _rVector.m_V[0];
        V[1] = m_V[1] - _rVector.m_V[1];
        V[2] = m_V[2] - _rVector.m_V[2];
        V[3] = m_V[3] - _rVector.m_V[3];

        return CVector4(V[0], V[1], V[2], V[3]);
    }

    // -----------------------------------------------------------------------------

    template <typename T>
    inline typename CVector4<T>::CThis CVector4<T>::operator * (const CThis& _rVector) const
    {
        X V[s_NumberOfComponents];

        V[0] = m_V[0] * _rVector.m_V[0];
        V[1] = m_V[1] * _rVector.m_V[1];
        V[2] = m_V[2] * _rVector.m_V[2];
        V[3] = m_V[3] * _rVector.m_V[3];

        return CVector4(V[0], V[1], V[2], V[3]);
    }

    // -----------------------------------------------------------------------------

    template <typename T>
    inline typename CVector4<T>::CThis CVector4<T>::operator / (const CThis& _rVector) const
    {
        X V[s_NumberOfComponents];

        V[0] = m_V[0] / _rVector.m_V[0];
        V[1] = m_V[1] / _rVector.m_V[1];
        V[2] = m_V[2] / _rVector.m_V[2];
        V[3] = m_V[3] / _rVector.m_V[3];

        return CVector4(V[0], V[1], V[2], V[3]);
    }

    // -----------------------------------------------------------------------------

    template <typename T>
    inline typename CVector4<T>::CThis CVector4<T>::operator * (X _Scalar) const
    {
        X V[s_NumberOfComponents];

        V[0] = m_V[0] * _Scalar;
        V[1] = m_V[1] * _Scalar;
        V[2] = m_V[2] * _Scalar;
        V[3] = m_V[3] * _Scalar;

        return CVector4(V[0], V[1], V[2], V[3]);
    }

    // -----------------------------------------------------------------------------

    template <typename T>
    inline typename CVector4<T>::CThis CVector4<T>::operator / (X _Scalar) const
    {
        X V[s_NumberOfComponents];

        V[0] = m_V[0] / _Scalar;
        V[1] = m_V[1] / _Scalar;
        V[2] = m_V[2] / _Scalar;
        V[3] = m_V[3] / _Scalar;

        return CVector4(V[0], V[1], V[2], V[3]);
    }

    // -----------------------------------------------------------------------------

    template <typename T>
    inline typename CVector4<T>::CThis CVector4<T>::operator * (const CMatrix4x4<X>& _rMatrix) const
    {
        X V[s_NumberOfComponents];

        V[0] = m_V[0] * _rMatrix[0][0] + m_V[1] * _rMatrix[1][0] + m_V[2] * _rMatrix[2][0] + m_V[3] * _rMatrix[3][0];
        V[1] = m_V[0] * _rMatrix[0][1] + m_V[1] * _rMatrix[1][1] + m_V[2] * _rMatrix[2][1] + m_V[3] * _rMatrix[3][1];
        V[2] = m_V[0] * _rMatrix[0][2] + m_V[1] * _rMatrix[1][2] + m_V[2] * _rMatrix[2][2] + m_V[3] * _rMatrix[3][2];
        V[3] = m_V[0] * _rMatrix[0][3] + m_V[1] * _rMatrix[1][3] + m_V[2] * _rMatrix[2][3] + m_V[3] * _rMatrix[3][3];

        return CVector4(V[0], V[1], V[2], V[3]);
    }

    // -----------------------------------------------------------------------------

    template <typename T>
    inline typename CVector4<T>::CThis CVector4<T>::operator - () const
    {
        return GetNeg();
    }

    // -----------------------------------------------------------------------------

    template <typename T>
    inline bool CVector4<T>::operator == (const CThis& _rVector) const
    {
        return (m_V[0] == _rVector.m_V[0]) && (m_V[1] == _rVector.m_V[1]) && (m_V[2] == _rVector.m_V[2]) && (m_V[3] == _rVector.m_V[3]);
    }

    // -----------------------------------------------------------------------------

    template <typename T>
    inline bool CVector4<T>::operator != (const CThis& _rVector) const
    {
        return (m_V[0] != _rVector.m_V[0]) || (m_V[1] != _rVector.m_V[1]) || (m_V[2] != _rVector.m_V[2]) || (m_V[3] != _rVector.m_V[3]);
    }

    // -----------------------------------------------------------------------------

    template <typename T>
    inline bool CVector4<T>::operator < (const CThis& _rVector) const
    {
        return (m_V[0] < _rVector.m_V[0]) && (m_V[1] < _rVector.m_V[1]) && (m_V[2] < _rVector.m_V[2]) && (m_V[3] < _rVector.m_V[3]);
    }

    // -----------------------------------------------------------------------------

    template <typename T>
    inline bool CVector4<T>::operator <= (const CThis& _rVector) const
    {
        return (m_V[0] <= _rVector.m_V[0]) && (m_V[1] <= _rVector.m_V[1]) && (m_V[2] <= _rVector.m_V[2]) && (m_V[3] <= _rVector.m_V[3]);
    }

    // -----------------------------------------------------------------------------

    template <typename T>
    inline bool CVector4<T>::operator > (const CThis& _rVector) const
    {
        return (m_V[0] > _rVector.m_V[0]) && (m_V[1] > _rVector.m_V[1]) && (m_V[2] > _rVector.m_V[2]) && (m_V[3] > _rVector.m_V[3]);
    }

    // -----------------------------------------------------------------------------

    template <typename T>
    inline bool CVector4<T>::operator >= (const CThis& _rVector) const
    {
        return (m_V[0] >= _rVector.m_V[0]) && (m_V[1] >= _rVector.m_V[1]) && (m_V[2] >= _rVector.m_V[2]) && (m_V[3] >= _rVector.m_V[3]);
    }

    // -----------------------------------------------------------------------------

    template <typename T>
    inline typename CVector4<T>::CThis& CVector4<T>::Set(const CThis& _rVector)
    {
        m_V[0] = _rVector.m_V[0];
        m_V[1] = _rVector.m_V[1];
        m_V[2] = _rVector.m_V[2];
        m_V[3] = _rVector.m_V[3];

        return *this;
    }

    // -----------------------------------------------------------------------------

    template <typename T>
    inline typename CVector4<T>::CThis& CVector4<T>::Set(X _Value)
    {
        m_V[0] = _Value;
        m_V[1] = _Value;
        m_V[2] = _Value;
        m_V[3] = _Value;

        return *this;
    }

    // -----------------------------------------------------------------------------

    template <typename T>
    inline typename CVector4<T>::CThis& CVector4<T>::Set(X _Value0, X _Value1, X _Value2, X _Value3)
    {
        m_V[0] = _Value0;
        m_V[1] = _Value1;
        m_V[2] = _Value2;
        m_V[3] = _Value3;

        return *this;
    }

    // -----------------------------------------------------------------------------

    template <typename T>
    inline typename CVector4<T>::CThis& CVector4<T>::Normalize()
    {
        return Normalize4();
    }

    // -----------------------------------------------------------------------------

    template <typename T>
    inline typename CVector4<T>::CThis& CVector4<T>::Normalize2()
    {
        X Length;

        Length = GetLength2();

        m_V[0] /= Length;
        m_V[1] /= Length;
        m_V[2] /= Length;
        m_V[3] /= Length;

        return *this;
    }

    // -----------------------------------------------------------------------------

    template <typename T>
    inline typename CVector4<T>::CThis& CVector4<T>::Normalize3()
    {
        X Length;

        Length = GetLength3();

        m_V[0] /= Length;
        m_V[1] /= Length;
        m_V[2] /= Length;
        m_V[3] /= Length;

        return *this;
    }

    // -----------------------------------------------------------------------------

    template <typename T>
    inline typename CVector4<T>::CThis& CVector4<T>::Normalize4()
    {
        X Length;

        Length = GetLength4();

        m_V[0] /= Length;
        m_V[1] /= Length;
        m_V[2] /= Length;
        m_V[3] /= Length;

        return *this;
    }

    // -----------------------------------------------------------------------------

    template <typename T>
    inline typename CVector4<T>::CThis CVector4<T>::GetNormalized() const
    {
        return GetNormalized4();
    }

    // -----------------------------------------------------------------------------

    template <typename T>
    inline typename CVector4<T>::CThis CVector4<T>::GetNormalized2() const
    {
        X Length;
        X V[s_NumberOfComponents];

        Length = GetLength2();

        V[0] = m_V[0] / Length;
        V[1] = m_V[1] / Length;
        V[2] = m_V[2] / Length;
        V[3] = m_V[3] / Length;

        return CVector4(V[0], V[1], V[2], V[3]);
    }

    // -----------------------------------------------------------------------------

    template <typename T>
    inline typename CVector4<T>::CThis CVector4<T>::GetNormalized3() const
    {
        X Length;
        X V[s_NumberOfComponents];

        Length = GetLength3();

        V[0] = m_V[0] / Length;
        V[1] = m_V[1] / Length;
        V[2] = m_V[2] / Length;
        V[3] = m_V[3] / Length;

        return CVector4(V[0], V[1], V[2], V[3]);
    }

    // -----------------------------------------------------------------------------

    template <typename T>
    inline typename CVector4<T>::CThis CVector4<T>::GetNormalized4() const
    {
        X Length;
        X V[s_NumberOfComponents];

        Length = GetLength4();

        V[0] = m_V[0] / Length;
        V[1] = m_V[1] / Length;
        V[2] = m_V[2] / Length;
        V[3] = m_V[3] / Length;

        return CVector4(V[0], V[1], V[2], V[3]);
    }

    // -----------------------------------------------------------------------------

    template <typename T>
    inline bool CVector4<T>::IsNormalized() const
    {
        X Length;

        Length = GetLength4();

        return ::Core::IsEqual(Length, static_cast<X>(1), SConstants<X>::s_EpsilonSquare);
    }

    // -----------------------------------------------------------------------------

    template <typename T>
    inline typename CVector4<T>::X CVector4<T>::GetLength() const
    {
        return GetLength4();
    }

    // -----------------------------------------------------------------------------

    template <typename T>
    inline typename CVector4<T>::X CVector4<T>::GetLength2() const
    {
        return SquareRoot(GetSquaredLength2());
    }

    // -----------------------------------------------------------------------------

    template <typename T>
    inline typename CVector4<T>::X CVector4<T>::GetLength3() const
    {
        return SquareRoot(GetSquaredLength3());
    }

    // -----------------------------------------------------------------------------

    template <typename T>
    inline typename CVector4<T>::X CVector4<T>::GetLength4() const
    {
        return SquareRoot(GetSquaredLength4());
    }

    // -----------------------------------------------------------------------------

    template <typename T>
    inline typename CVector4<T>::X CVector4<T>::GetSquaredLength() const
    {
        return GetSquaredLength4();
    }

    // -----------------------------------------------------------------------------

    template <typename T>
    inline typename CVector4<T>::X CVector4<T>::GetSquaredLength2() const
    {
        return GetDotProduct2(*this);
    }

    // -----------------------------------------------------------------------------

    template <typename T>
    inline typename CVector4<T>::X CVector4<T>::GetSquaredLength3() const
    {
        return GetDotProduct3(*this);
    }

    // -----------------------------------------------------------------------------

    template <typename T>
    inline typename CVector4<T>::X CVector4<T>::GetSquaredLength4() const
    {
        return GetDotProduct4(*this);
    }

    // -----------------------------------------------------------------------------

    template <typename T>
    inline typename CVector4<T>::CThis& CVector4<T>::Reciprocal()
    {
        assert(m_V[0] != static_cast<X>(0));
        assert(m_V[1] != static_cast<X>(0));
        assert(m_V[2] != static_cast<X>(0));
        assert(m_V[3] != static_cast<X>(0));

        m_V[0] = static_cast<X>(1) / m_V[0];
        m_V[1] = static_cast<X>(1) / m_V[1];
        m_V[2] = static_cast<X>(1) / m_V[2];
        m_V[3] = static_cast<X>(1) / m_V[3];

        return *this;
    }

    // -----------------------------------------------------------------------------

    template <typename T>
    inline typename CVector4<T>::CThis CVector4<T>::GetReciprocal() const
    {
        X V[s_NumberOfComponents];

        assert(m_V[0] != static_cast<X>(0));
        assert(m_V[1] != static_cast<X>(0));
        assert(m_V[2] != static_cast<X>(0));
        assert(m_V[3] != static_cast<X>(0));

        V[0] = static_cast<X>(1) / m_V[0];
        V[1] = static_cast<X>(1) / m_V[1];
        V[2] = static_cast<X>(1) / m_V[2];
        V[3] = static_cast<X>(1) / m_V[3];

        return CVector4(V[0], V[1], V[2], V[3]);
    }

    // -----------------------------------------------------------------------------

    template <typename T>
    inline typename CVector4<T>::CThis& CVector4<T>::Round()
    {
        m_V[0] = ::Core::Round(m_V[0]);
        m_V[1] = ::Core::Round(m_V[1]);
        m_V[2] = ::Core::Round(m_V[2]);
        m_V[3] = ::Core::Round(m_V[3]);

        return *this;
    }

    // -----------------------------------------------------------------------------

    template <typename T>
    inline typename CVector4<T>::CThis CVector4<T>::GetRounded() const
    {
        X V[s_NumberOfComponents];

        V[0] = ::Core::Round(m_V[0]);
        V[1] = ::Core::Round(m_V[1]);
        V[2] = ::Core::Round(m_V[2]);
        V[3] = ::Core::Round(m_V[3]);

        return CVector4(V[0], V[1], V[2], V[3]);
    }

    // -----------------------------------------------------------------------------

    template <typename T>
    inline typename CVector4<T>::CThis& CVector4<T>::Clamp(const CThis& _rMin, const CThis& _rMax)
    {
        m_V[0] = ::Core::Clamp(m_V[0], _rMin.m_V[0], _rMax.m_V[0]);
        m_V[1] = ::Core::Clamp(m_V[1], _rMin.m_V[1], _rMax.m_V[1]);
        m_V[2] = ::Core::Clamp(m_V[2], _rMin.m_V[2], _rMax.m_V[2]);
        m_V[3] = ::Core::Clamp(m_V[3], _rMin.m_V[3], _rMax.m_V[3]);

        return *this;
    }

    // -----------------------------------------------------------------------------

    template <typename T>
    inline typename CVector4<T>::CThis CVector4<T>::GetClamped(const CThis& _rMin, const CThis& _rMax) const
    {
        X V[s_NumberOfComponents];

        V[0] = ::Core::Clamp(m_V[0], _rMin.m_V[0], _rMax.m_V[0]);
        V[1] = ::Core::Clamp(m_V[1], _rMin.m_V[1], _rMax.m_V[1]);
        V[2] = ::Core::Clamp(m_V[2], _rMin.m_V[2], _rMax.m_V[2]);
        V[3] = ::Core::Clamp(m_V[3], _rMin.m_V[3], _rMax.m_V[3]);

        return CVector4(V[0], V[1], V[2], V[3]);
    }

    // -----------------------------------------------------------------------------

    template <typename T>
    inline typename CVector4<T>::CThis& CVector4<T>::Saturate()
    {
        m_V[0] = ::Core::Clamp(m_V[0], static_cast<X>(0), static_cast<X>(1));
        m_V[1] = ::Core::Clamp(m_V[1], static_cast<X>(0), static_cast<X>(1));
        m_V[2] = ::Core::Clamp(m_V[2], static_cast<X>(0), static_cast<X>(1));
        m_V[3] = ::Core::Clamp(m_V[3], static_cast<X>(0), static_cast<X>(1));

        return *this;
    }

    // -----------------------------------------------------------------------------

    template <typename T>
    inline typename CVector4<T>::CThis CVector4<T>::GetSaturated() const
    {
        X V[s_NumberOfComponents];

        V[0] = ::Core::Clamp(m_V[0], static_cast<X>(0), static_cast<X>(1));
        V[1] = ::Core::Clamp(m_V[1], static_cast<X>(0), static_cast<X>(1));
        V[2] = ::Core::Clamp(m_V[2], static_cast<X>(0), static_cast<X>(1));
        V[3] = ::Core::Clamp(m_V[3], static_cast<X>(0), static_cast<X>(1));

        return CVector4(V[0], V[1], V[2], V[3]);
    }

    // -----------------------------------------------------------------------------

    template <typename T>
    inline typename CVector4<T>::CThis& CVector4<T>::Min(const CThis& _rVector)
    {
        m_V[0] = ::Core::Min(m_V[0], _rVector.m_V[0]);
        m_V[1] = ::Core::Min(m_V[1], _rVector.m_V[1]);
        m_V[2] = ::Core::Min(m_V[2], _rVector.m_V[2]);
        m_V[3] = ::Core::Min(m_V[3], _rVector.m_V[3]);

        return *this;
    }

    // -----------------------------------------------------------------------------

    template <typename T>
    inline typename CVector4<T>::CThis CVector4<T>::GetMin(const CThis& _rVector) const
    {
        X V[s_NumberOfComponents];

        V[0] = ::Core::Min(m_V[0], _rVector.m_V[0]);
        V[1] = ::Core::Min(m_V[1], _rVector.m_V[1]);
        V[2] = ::Core::Min(m_V[2], _rVector.m_V[2]);
        V[3] = ::Core::Min(m_V[3], _rVector.m_V[3]);

        return CVector4(V[0], V[1], V[2], V[3]);
    }

    // -----------------------------------------------------------------------------

    template <typename T>
    inline typename CVector4<T>::CThis& CVector4<T>::Max(const CThis& _rVector)
    {
        m_V[0] = ::Core::Max(m_V[0], _rVector.m_V[0]);
        m_V[1] = ::Core::Max(m_V[1], _rVector.m_V[1]);
        m_V[2] = ::Core::Max(m_V[2], _rVector.m_V[2]);
        m_V[3] = ::Core::Max(m_V[3], _rVector.m_V[3]);

        return *this;
    }

    // -----------------------------------------------------------------------------

    template <typename T>
    inline typename CVector4<T>::CThis CVector4<T>::GetMax(const CThis& _rVector) const
    {
        X V[s_NumberOfComponents];

        V[0] = ::Core::Max(m_V[0], _rVector.m_V[0]);
        V[1] = ::Core::Max(m_V[1], _rVector.m_V[1]);
        V[2] = ::Core::Max(m_V[2], _rVector.m_V[2]);
        V[3] = ::Core::Max(m_V[3], _rVector.m_V[3]);

        return CVector4(V[0], V[1], V[2], V[3]);
    }

    // -----------------------------------------------------------------------------

    template <typename T>
    inline typename CVector4<T>::CThis& CVector4<T>::Neg()
    {
        m_V[0] = ::Core::Neg(m_V[0]);
        m_V[1] = ::Core::Neg(m_V[1]);
        m_V[2] = ::Core::Neg(m_V[2]);
        m_V[3] = ::Core::Neg(m_V[3]);

        return *this;
    }

    // -----------------------------------------------------------------------------

    template <typename T>
    inline typename CVector4<T>::CThis CVector4<T>::GetNeg() const
    {
        X V[s_NumberOfComponents];

        V[0] = ::Core::Neg(m_V[0]);
        V[1] = ::Core::Neg(m_V[1]);
        V[2] = ::Core::Neg(m_V[2]);
        V[3] = ::Core::Neg(m_V[3]);

        return CVector4(V[0], V[1], V[2], V[3]);
    }

    // -----------------------------------------------------------------------------

    template <typename T>
    inline typename CVector4<T>::CThis& CVector4<T>::MulAdd(const CThis& _rVector1, const CThis& _rVector2)
    {
        m_V[0] = m_V[0] * _rVector1.m_V[0] + _rVector2.m_V[0];
        m_V[1] = m_V[1] * _rVector1.m_V[1] + _rVector2.m_V[1];
        m_V[2] = m_V[2] * _rVector1.m_V[2] + _rVector2.m_V[2];
        m_V[3] = m_V[3] * _rVector1.m_V[3] + _rVector2.m_V[3];

        return *this;
    }

    // -----------------------------------------------------------------------------

    template <typename T>
    inline typename CVector4<T>::CThis CVector4<T>::GetMulAdd(const CThis& _rVector1, const CThis& _rVector2) const
    {
        X V[s_NumberOfComponents];

        V[0] = m_V[0] * _rVector1.m_V[0] + _rVector2.m_V[0];
        V[1] = m_V[1] * _rVector1.m_V[1] + _rVector2.m_V[1];
        V[2] = m_V[2] * _rVector1.m_V[2] + _rVector2.m_V[2];
        V[3] = m_V[3] * _rVector1.m_V[3] + _rVector2.m_V[3];

        return CVector4(V[0], V[1], V[2], V[3]);
    }

    // -----------------------------------------------------------------------------

    template <typename T>
    inline typename CVector4<T>::CThis& CVector4<T>::MulSub(const CThis& _rVector1, const CThis& _rVector2)
    {
        m_V[0] = m_V[0] * _rVector1.m_V[0] - _rVector2.m_V[0];
        m_V[1] = m_V[1] * _rVector1.m_V[1] - _rVector2.m_V[1];
        m_V[2] = m_V[2] * _rVector1.m_V[2] - _rVector2.m_V[2];
        m_V[3] = m_V[3] * _rVector1.m_V[3] - _rVector2.m_V[3];

        return *this;
    }

    // -----------------------------------------------------------------------------

    template <typename T>
    inline typename CVector4<T>::CThis CVector4<T>::GetMulSub(const CThis& _rVector1, const CThis& _rVector2) const
    {
        X V[s_NumberOfComponents];

        V[0] = m_V[0] * _rVector1.m_V[0] - _rVector2.m_V[0];
        V[1] = m_V[1] * _rVector1.m_V[1] - _rVector2.m_V[1];
        V[2] = m_V[2] * _rVector1.m_V[2] - _rVector2.m_V[2];
        V[3] = m_V[3] * _rVector1.m_V[3] - _rVector2.m_V[3];

        return CVector4(V[0], V[1], V[2], V[3]);
    }

    // -----------------------------------------------------------------------------

    template <typename T>
    inline typename CVector4<T>::CThis& CVector4<T>::Lerp(const CThis& _rTarget, const CThis& _rWeight)
    {
        m_V[0] = ::Core::Lerp(m_V[0], _rTarget.m_V[0], _rWeight.m_V[0]);
        m_V[1] = ::Core::Lerp(m_V[1], _rTarget.m_V[1], _rWeight.m_V[1]);
        m_V[2] = ::Core::Lerp(m_V[2], _rTarget.m_V[2], _rWeight.m_V[2]);
        m_V[3] = ::Core::Lerp(m_V[3], _rTarget.m_V[3], _rWeight.m_V[3]);

        return *this;
    }

    // -----------------------------------------------------------------------------

    template <typename T>
    inline typename CVector4<T>::CThis CVector4<T>::GetLerped(const CThis& _rTarget, const CThis& _rWeight) const
    {
        X V[s_NumberOfComponents];

        V[0] = ::Core::Lerp(m_V[0], _rTarget.m_V[0], _rWeight.m_V[0]);
        V[1] = ::Core::Lerp(m_V[1], _rTarget.m_V[1], _rWeight.m_V[1]);
        V[2] = ::Core::Lerp(m_V[2], _rTarget.m_V[2], _rWeight.m_V[2]);
        V[3] = ::Core::Lerp(m_V[3], _rTarget.m_V[3], _rWeight.m_V[3]);

        return CVector4(V[0], V[1], V[2], V[3]);
    }

    // -----------------------------------------------------------------------------

    template <typename T>
    inline typename CVector4<T>::CThis& CVector4<T>::Lerp(const CThis& _rTarget, X _Weight)
    {
        m_V[0] = ::Core::Lerp(m_V[0], _rTarget.m_V[0], _Weight);
        m_V[1] = ::Core::Lerp(m_V[1], _rTarget.m_V[1], _Weight);
        m_V[2] = ::Core::Lerp(m_V[2], _rTarget.m_V[2], _Weight);
        m_V[3] = ::Core::Lerp(m_V[3], _rTarget.m_V[3], _Weight);

        return *this;
    }

    // -----------------------------------------------------------------------------

    template <typename T>
    inline typename CVector4<T>::CThis CVector4<T>::GetLerped(const CThis& _rTarget, X _Weight) const
    {
        X V[s_NumberOfComponents];

        V[0] = ::Core::Lerp(m_V[0], _rTarget.m_V[0], _Weight);
        V[1] = ::Core::Lerp(m_V[1], _rTarget.m_V[1], _Weight);
        V[2] = ::Core::Lerp(m_V[2], _rTarget.m_V[2], _Weight);
        V[3] = ::Core::Lerp(m_V[3], _rTarget.m_V[3], _Weight);

        return CVector4(V[0], V[1], V[2], V[3]);
    }

    // -----------------------------------------------------------------------------

    template <typename T>
    inline typename CVector4<T>::CThis& CVector4<T>::Splat(const X _Value)
    {
        m_V[0] = _Value;
        m_V[1] = _Value;
        m_V[2] = _Value;
        m_V[3] = _Value;

        return *this;
    }

    // -----------------------------------------------------------------------------

    template <typename T>
    inline typename CVector4<T>::CThis CVector4<T>::GetSplatted(const X _Value) const
    {
        return CThis(_Value);
    }

    // -----------------------------------------------------------------------------

    template <typename T>
    inline typename CVector4<T>::CThis& CVector4<T>::CrossProduct(const CThis& _rVector)
    {
        return (*this) = GetCrossProduct(_rVector);
    }

    // -----------------------------------------------------------------------------

    template <typename T>
    inline typename CVector4<T>::CThis CVector4<T>::GetCrossProduct(const CThis& _rVector) const
    {
        X V[s_NumberOfComponents - 1];

        V[0] = m_V[1] * _rVector.m_V[2] - m_V[2] * _rVector.m_V[1];
        V[1] = m_V[2] * _rVector.m_V[0] - m_V[0] * _rVector.m_V[2];
        V[2] = m_V[0] * _rVector.m_V[1] - m_V[1] * _rVector.m_V[0];

        return CVector4(V[0], V[1], V[2], static_cast<X>(1));
    }

    // -----------------------------------------------------------------------------

    template <typename T>
    inline typename CVector4<T>::X CVector4<T>::GetDotProduct(const CThis& _rVector) const
    {
        return GetDotProduct4(_rVector);
    }

    // -----------------------------------------------------------------------------

    template <typename T>
    inline typename CVector4<T>::X CVector4<T>::GetDotProduct2(const CThis& _rVector) const
    {
        return m_V[0] * _rVector.m_V[0] + m_V[1] * _rVector.m_V[1];
    }

    // -----------------------------------------------------------------------------

    template <typename T>
    inline typename CVector4<T>::X CVector4<T>::GetDotProduct3(const CThis& _rVector) const
    {
        return m_V[0] * _rVector.m_V[0] + m_V[1] * _rVector.m_V[1] + m_V[2] * _rVector.m_V[2];
    }

    // -----------------------------------------------------------------------------

    template <typename T>
    inline typename CVector4<T>::X CVector4<T>::GetDotProduct4(const CThis& _rVector) const
    {
        return m_V[0] * _rVector.m_V[0] + m_V[1] * _rVector.m_V[1] + m_V[2] * _rVector.m_V[2] + m_V[3] * _rVector.m_V[3];
    }

    // -----------------------------------------------------------------------------

    template <typename T>
    template <size_t TIndex0, size_t TIndex1, size_t TIndex2, size_t TIndex3>
    inline typename CVector4<T>::CThis& CVector4<T>::Swizzle()
    {
        return (*this) = GetSwizzled<TIndex0, TIndex1, TIndex2, TIndex3>();
    }

    // -----------------------------------------------------------------------------

    template <typename T>
    template <size_t TIndex0, size_t TIndex1, size_t TIndex2, size_t TIndex3>
    inline typename CVector4<T>::CThis CVector4<T>::GetSwizzled() const
    {
        X V[s_NumberOfComponents];

        CORE_STATIC_ASSERT(TIndex0 < s_NumberOfComponents);
        CORE_STATIC_ASSERT(TIndex1 < s_NumberOfComponents);
        CORE_STATIC_ASSERT(TIndex2 < s_NumberOfComponents);
        CORE_STATIC_ASSERT(TIndex3 < s_NumberOfComponents);

        V[0] = m_V[TIndex0];
        V[1] = m_V[TIndex1];
        V[2] = m_V[TIndex2];
        V[3] = m_V[TIndex3];

        return CVector4(V[0], V[1], V[2], V[3]);
    }

    // -----------------------------------------------------------------------------

    template <typename T>
    template <size_t TIndex0, size_t TIndex1, size_t TIndex2, size_t TIndex3>
    inline typename CVector4<T>::CThis& CVector4<T>::Permute(const CThis& _rVector)
    {
        m_V[0] = (TIndex0 < s_NumberOfComponents) ? m_V[TIndex0] : _rVector.m_V[TIndex0 % s_NumberOfComponents];
        m_V[1] = (TIndex1 < s_NumberOfComponents) ? m_V[TIndex1] : _rVector.m_V[TIndex1 % s_NumberOfComponents];
        m_V[2] = (TIndex2 < s_NumberOfComponents) ? m_V[TIndex2] : _rVector.m_V[TIndex2 % s_NumberOfComponents];
        m_V[3] = (TIndex3 < s_NumberOfComponents) ? m_V[TIndex3] : _rVector.m_V[TIndex3 % s_NumberOfComponents];

        return *this;
    }

    // -----------------------------------------------------------------------------

    template <typename T>
    template <size_t TIndex0, size_t TIndex1, size_t TIndex2, size_t TIndex3>
    inline typename CVector4<T>::CThis CVector4<T>::GetPermuted(const CThis& _rVector) const
    {
        X V[s_NumberOfComponents];

        V[0] = (TIndex0 < s_NumberOfComponents) ? m_V[TIndex0] : _rVector.m_V[TIndex0 % s_NumberOfComponents];
        V[1] = (TIndex1 < s_NumberOfComponents) ? m_V[TIndex1] : _rVector.m_V[TIndex1 % s_NumberOfComponents];
        V[2] = (TIndex2 < s_NumberOfComponents) ? m_V[TIndex2] : _rVector.m_V[TIndex2 % s_NumberOfComponents];
        V[3] = (TIndex3 < s_NumberOfComponents) ? m_V[TIndex3] : _rVector.m_V[TIndex3 % s_NumberOfComponents];

        return CVector4(V[0], V[1], V[2], V[3]);
    }

    template <typename T>
    inline typename CVector4<T>::CThis& CVector4<T>::TestEqual(const CThis& _rVector)
    {
        m_V[0] = (m_V[0] == _rVector.m_V[0]) ? static_cast<X>(1) : static_cast<X>(0);
        m_V[1] = (m_V[1] == _rVector.m_V[1]) ? static_cast<X>(1) : static_cast<X>(0);
        m_V[2] = (m_V[2] == _rVector.m_V[2]) ? static_cast<X>(1) : static_cast<X>(0);
        m_V[3] = (m_V[3] == _rVector.m_V[3]) ? static_cast<X>(1) : static_cast<X>(0);

        return *this;
    }

    // -----------------------------------------------------------------------------

    template <typename T>
    inline typename CVector4<T>::CThis CVector4<T>::GetTestEqual(const CThis& _rVector) const
    {
        X V[s_NumberOfComponents];

        V[0] = (m_V[0] == _rVector.m_V[0]) ? static_cast<X>(1) : static_cast<X>(0);
        V[1] = (m_V[1] == _rVector.m_V[1]) ? static_cast<X>(1) : static_cast<X>(0);
        V[2] = (m_V[2] == _rVector.m_V[2]) ? static_cast<X>(1) : static_cast<X>(0);
        V[3] = (m_V[3] == _rVector.m_V[3]) ? static_cast<X>(1) : static_cast<X>(0);

        return CVector4(V[0], V[1], V[2], V[3]);
    }

    // -----------------------------------------------------------------------------

    template <typename T>
    inline typename CVector4<T>::CThis& CVector4<T>::TestNotEqual(const CThis& _rVector)
    {
        m_V[0] = (m_V[0] != _rVector.m_V[0]) ? static_cast<X>(1) : static_cast<X>(0);
        m_V[1] = (m_V[1] != _rVector.m_V[1]) ? static_cast<X>(1) : static_cast<X>(0);
        m_V[2] = (m_V[2] != _rVector.m_V[2]) ? static_cast<X>(1) : static_cast<X>(0);
        m_V[3] = (m_V[3] != _rVector.m_V[3]) ? static_cast<X>(1) : static_cast<X>(0);

        return *this;
    }

    // -----------------------------------------------------------------------------

    template <typename T>
    inline typename CVector4<T>::CThis CVector4<T>::GetTestNotEqual(const CThis& _rVector) const
    {
        X V[s_NumberOfComponents];

        V[0] = (m_V[0] != _rVector.m_V[0]) ? static_cast<X>(1) : static_cast<X>(0);
        V[1] = (m_V[1] != _rVector.m_V[1]) ? static_cast<X>(1) : static_cast<X>(0);
        V[2] = (m_V[2] != _rVector.m_V[2]) ? static_cast<X>(1) : static_cast<X>(0);
        V[3] = (m_V[3] != _rVector.m_V[3]) ? static_cast<X>(1) : static_cast<X>(0);

        return CVector4(V[0], V[1], V[2], V[3]);
    }

    // -----------------------------------------------------------------------------

    template <typename T>
    inline typename CVector4<T>::CThis& CVector4<T>::TestLesser(const CThis& _rVector)
    {
        m_V[0] = (m_V[0] < _rVector.m_V[0]) ? static_cast<X>(1) : static_cast<X>(0);
        m_V[1] = (m_V[1] < _rVector.m_V[1]) ? static_cast<X>(1) : static_cast<X>(0);
        m_V[2] = (m_V[2] < _rVector.m_V[2]) ? static_cast<X>(1) : static_cast<X>(0);
        m_V[3] = (m_V[3] < _rVector.m_V[3]) ? static_cast<X>(1) : static_cast<X>(0);

        return *this;
    }

    // -----------------------------------------------------------------------------

    template <typename T>
    inline typename CVector4<T>::CThis CVector4<T>::GetTestLesser(const CThis& _rVector) const
    {
        X V[s_NumberOfComponents];

        V[0] = (m_V[0] < _rVector.m_V[0]) ? static_cast<X>(1) : static_cast<X>(0);
        V[1] = (m_V[1] < _rVector.m_V[1]) ? static_cast<X>(1) : static_cast<X>(0);
        V[2] = (m_V[2] < _rVector.m_V[2]) ? static_cast<X>(1) : static_cast<X>(0);
        V[3] = (m_V[3] < _rVector.m_V[3]) ? static_cast<X>(1) : static_cast<X>(0);

        return CVector4(V[0], V[1], V[2], V[3]);
    }

    // -----------------------------------------------------------------------------

    template <typename T>
    inline typename CVector4<T>::CThis& CVector4<T>::TestLesserEqual(const CThis& _rVector)
    {
        m_V[0] = (m_V[0] <= _rVector.m_V[0]) ? static_cast<X>(1) : static_cast<X>(0);
        m_V[1] = (m_V[1] <= _rVector.m_V[1]) ? static_cast<X>(1) : static_cast<X>(0);
        m_V[2] = (m_V[2] <= _rVector.m_V[2]) ? static_cast<X>(1) : static_cast<X>(0);
        m_V[3] = (m_V[3] <= _rVector.m_V[3]) ? static_cast<X>(1) : static_cast<X>(0);

        return *this;
    }

    // -----------------------------------------------------------------------------

    template <typename T>
    inline typename CVector4<T>::CThis CVector4<T>::GetTestLesserEqual(const CThis& _rVector) const
    {
        X V[s_NumberOfComponents];

        V[0] = (m_V[0] <= _rVector.m_V[0]) ? static_cast<X>(1) : static_cast<X>(0);
        V[1] = (m_V[1] <= _rVector.m_V[1]) ? static_cast<X>(1) : static_cast<X>(0);
        V[2] = (m_V[2] <= _rVector.m_V[2]) ? static_cast<X>(1) : static_cast<X>(0);
        V[3] = (m_V[3] <= _rVector.m_V[3]) ? static_cast<X>(1) : static_cast<X>(0);

        return CVector4(V[0], V[1], V[2], V[3]);
    }

    // -----------------------------------------------------------------------------

    template <typename T>
    inline typename CVector4<T>::CThis& CVector4<T>::TestGreater(const CThis& _rVector)
    {
        m_V[0] = (m_V[0] > _rVector.m_V[0]) ? static_cast<X>(1) : static_cast<X>(0);
        m_V[1] = (m_V[1] > _rVector.m_V[1]) ? static_cast<X>(1) : static_cast<X>(0);
        m_V[2] = (m_V[2] > _rVector.m_V[2]) ? static_cast<X>(1) : static_cast<X>(0);
        m_V[3] = (m_V[3] > _rVector.m_V[3]) ? static_cast<X>(1) : static_cast<X>(0);

        return *this;
    }

    // -----------------------------------------------------------------------------

    template <typename T>
    inline typename CVector4<T>::CThis CVector4<T>::GetTestGreater(const CThis& _rVector) const
    {
        X V[s_NumberOfComponents];

        V[0] = (m_V[0] > _rVector.m_V[0]) ? static_cast<X>(1) : static_cast<X>(0);
        V[1] = (m_V[1] > _rVector.m_V[1]) ? static_cast<X>(1) : static_cast<X>(0);
        V[2] = (m_V[2] > _rVector.m_V[2]) ? static_cast<X>(1) : static_cast<X>(0);
        V[3] = (m_V[3] > _rVector.m_V[3]) ? static_cast<X>(1) : static_cast<X>(0);

        return CVector4(V[0], V[1], V[2], V[3]);
    }

    // -----------------------------------------------------------------------------

    template <typename T>
    inline typename CVector4<T>::CThis& CVector4<T>::TestGreaterEqual(const CThis& _rVector)
    {
        m_V[0] = (m_V[0] >= _rVector.m_V[0]) ? static_cast<X>(1) : static_cast<X>(0);
        m_V[1] = (m_V[1] >= _rVector.m_V[1]) ? static_cast<X>(1) : static_cast<X>(0);
        m_V[2] = (m_V[2] >= _rVector.m_V[2]) ? static_cast<X>(1) : static_cast<X>(0);
        m_V[3] = (m_V[3] >= _rVector.m_V[3]) ? static_cast<X>(1) : static_cast<X>(0);

        return *this;
    }

    // -----------------------------------------------------------------------------

    template <typename T>
    inline typename CVector4<T>::CThis CVector4<T>::GetTestGreaterEqual(const CThis& _rVector) const
    {
        X V[s_NumberOfComponents];

        V[0] = (m_V[0] >= _rVector.m_V[0]) ? static_cast<X>(1) : static_cast<X>(0);
        V[1] = (m_V[1] >= _rVector.m_V[1]) ? static_cast<X>(1) : static_cast<X>(0);
        V[2] = (m_V[2] >= _rVector.m_V[2]) ? static_cast<X>(1) : static_cast<X>(0);
        V[3] = (m_V[3] >= _rVector.m_V[3]) ? static_cast<X>(1) : static_cast<X>(0);

        return CVector4(V[0], V[1], V[2], V[3]);
    }
} // namespace Core
