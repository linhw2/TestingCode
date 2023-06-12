/*
 * Test about factory mode.
 */
#include <iostream>

class ATest {
public:
    float a;
    int b;
    ATest() : a(1.0), b(2) {}
};

class MoreTest {
    double a;
    double b;
    MoreTest() : a(1.2), b(2.2) {}
};


int main()
{
    ATest atest;
    std::cout << atest.a << ' ' << atest.b << std::endl;
    return 0;
}