#include "fraction_modified.h"

int main()
{
    Fraction fraction_1(5, 6);
    Fraction fraction_2(2, 3);
    Fraction result;

    result = fraction_1 + fraction_2;
    result.show();

    result = fraction_1 - fraction_2;
    result.show();

    result = fraction_1 * fraction_2;
    result.show();

    result = fraction_1 / fraction_2;
    result.show();

    fraction_1 += fraction_2;
    fraction_1.show();

    fraction_1 /= result;
    fraction_1.show();

    fraction_2 *= Fraction(9, 4);
    fraction_2.show();

    fraction_2 -= Fraction(3, 10);
    fraction_2.show();

    std::cout << (fraction_1 == fraction_2) << "\n" <<
                 (fraction_1 == result)     << std::endl;

    return 0;
}
