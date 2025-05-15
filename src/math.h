#include <concepts>
namespace micont
{
    namespace math
    {

        int pow(int base, int power);
        float pow(float base, int power);
        inline int square(int base);
        float square(float base);

        template <typename TMin>
        inline TMin min(const TMin first, const TMin second)
        {
            return first <= second ? first : second;
        }

        template <typename TMax>
        inline TMax max(const TMax first, const TMax second)
        {
            return first >= second ? first : second;
        }
    }
}