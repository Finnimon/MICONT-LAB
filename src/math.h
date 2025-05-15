#pragma once
#include <cstddef>
namespace micont
{
    namespace math
    {

        int pow(int base, int power);
        float pow(float base, int power);
        inline int square(int base);
        inline float square(float base);

        template <typename T>
        inline T min(const T first, const T second)
        {
            return first <= second ? first : second;
        }

        template <typename T>
        T min(const T *items, int length)
        {
            if (length <= 0)
                return;
            T min = items[0];
            for (int i = 1; i < length; i++)
                min = min(min, items[i]);
            return min;
        }

        template <typename T>
        T max(const T *items, int length)
        {
            if (length <= 0)
                return;
            T max = items[0];
            for (int i = 1; i < length; i++)
                max = max(max, items[i]);
            return max;
        }

        template <typename T>
        inline T max(const T first, const T second)
        {
            return first >= second ? first : second;
        }
    }
}