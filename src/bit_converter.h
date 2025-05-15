#include <cstddef>
#include "math.h"
#include <bit>
#include <cstdint>
#include <cstring>
namespace micont
{
    namespace bitwise
    {
        template <typename From>
        bool *to_bits(const From from, size_t *bit_length)
        {
            size_t size_local = sizeof(from) * 8;
            bit_length[0] = size_local;
            bool *bits = new bool[size_local];
            for (int i = 0; i < size_local; i++)
                bits[i] = (from >> i) & 1;
            return bits;
        }
        // Template function to cast from bool array to any type (To) considering length
        template <typename To>
        To from_bits(const bool *bits,const size_t length)
        {
            To result = 0;
            for (size_t i = 0; i < length && i < sizeof(To) * 8; ++i)
            { // Use sizeof(To) * 8 for bits
                if (bits[i])
                {
                    result |= (1 << i); // Set the i-th bit if bits[i] is true
                }
            }
            return result;
        }

        // Template function to cast from bool array to any type (To) with default length
        template <typename To>
        To from_bits(const bool *bits)
        {
            return from_bits<To>(bits, sizeof(To) * 8);
        }

        template <typename From, typename To>
        To reinterpret(const From from)
        {
            size_t bit_length;
            const bool *bits = to_bits<From>(from, &bit_length);
            const size_t target_length=sizeof(To)*8;
            const size_t min=micont::math::min<size_t>(target_length,bit_length);
            return from_bits<To>(bits, min);
        }

    }
}