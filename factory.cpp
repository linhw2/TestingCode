/*
 * Test about factory mode.
 */
#include <iostream>

class ATest {
public:
    int a;
    int b;
    ATest() : a(1), b(2) {}
};

int main()
{
    ATest atest;
    std::cout << atest.a << ' ' << atest.b << std::endl;
    return 0;
}