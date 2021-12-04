/**
  * Given a Divisor and a Bound, find the largest integer N, such that:
  * Conditions:
  * ~ N is divisible by divisor;
  * ~ N is less than or equal to bound
  * ~ N is greater than 0.
  * Notes:
  * ~ The parameters (divisor, bound) passed to the function are only positive values.
  * ~ It's guaranteed that a divisor is Found .
  *
  * Input >> Output Examples:
  * maxMultiple (2,7) ==> return (6)
  * Explanation:
  * (6) is divisible by (2), (6) is less than or equal to bound (7), and (6) is > 0 .
  */


#include <iostream>
#include <cassert>

int maxMultiple(int divisor, int bound)
{
    int result = 0;
    for (int i = 1; i <= bound; ++i)
    {
        if (i % divisor == 0)
            result = i;
    }

    return result;
}

void test_max_multiple()
{
    assert(maxMultiple(2, 7)    == 6);
    assert(maxMultiple(3, 10)   == 9);
    assert(maxMultiple(7, 17)   == 14);
    assert(maxMultiple(10, 50)  == 50);
    assert(maxMultiple(37, 200) == 185);
    assert(maxMultiple(7, 100)  == 98);
    std::cout << "Test passed!" << std::endl;
}

int main()
{
//    test_max_multiple();

    std::cout << maxMultiple(2, 7)    << "\n" <<
                 maxMultiple(10, 50)  << "\n" <<
                 maxMultiple(37, 200) << std::endl;

    return 0;
}
