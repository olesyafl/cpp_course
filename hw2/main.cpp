#include "fraction.h"

int main()
{
    Fraction fraction_1(5, 6);
    Fraction fraction_2(2, 3);
    Fraction result;
//    fraction_1.show();
//    fraction_2.show();
//    result.show();

    result = fraction_1.add(fraction_2);
    result.show();

    result = fraction_1.sub(fraction_2);
    result.show();

    result = fraction_1.mul(fraction_2);
    result.show();

    result = fraction_1.div(fraction_2);
    result.show();

    std::cout << fraction_1.is_equal(fraction_2) << std::endl;

    return 0;
}
