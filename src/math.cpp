#include "math.h"

namespace micont
{
    namespace math
    {

#pragma region float_math
        float pow(float base, int power)
        {
            float result = 1;
            bool negative = power < 0;

            if (negative)
                power = -power;

            for (int i = 0; i < power; i++)
                result *= base;

            return negative ? 1 / result : result;
        }

        inline float square(float base)
        {
            return base * base;
        }

#pragma endregion float_math
#pragma region int_math

        int pow(int base, int power)
        {
            int result = 1;

            for (int i = 0; i < power; i++)
                result *= base;

            return result;
        }

        inline int square(int base)
        {
            return base * base;
        }

#pragma endregion int_math
    }
}