/**
 * To build a classic triangle (5 levels) you need 15 balls.
 * With 3 balls you can build a 2-level triangle, etc.
 *
 * For more examples,
 * pyramid(1)  == 1
 * pyramid(3)  == 2
 * pyramid(6)  == 3
 * pyramid(10) == 4
 * pyramid(15) == 5
 *
 * Write a function that takes number of balls (≥ 1) and calculates
 * how many levels you can build a triangle.
 */

#include <iostream>
#include <cassert>

int pyramid(int value)
{
    int count = 0;
    for (int i = value + 1; i > 0; --i)
    {
        i -= count;
        count++;
    }

    return count - 1;
}

void test_pyramid()
{
    assert(pyramid(1)    == 1);
    assert(pyramid(4)    == 2);
    assert(pyramid(20)   == 5);
    assert(pyramid(100)  == 13);
    assert(pyramid(9999) == 140);
    std::cout << "Test passed!" << std::endl;
}


int main()
{
//    test_pyramid();
    std::cout << pyramid(1)  << "\n" <<
                 pyramid(3)  << "\n" <<
                 pyramid(6)  << "\n" <<
                 pyramid(10) << "\n" <<
                 pyramid(15) << std::endl;

    return 0;
}
