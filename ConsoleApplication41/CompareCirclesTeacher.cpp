#include <iostream>
#include "circle.h"
using namespace std;

int main()
{
    Circle c1(5);
    Circle c2(2);
    Circle c3(2);

    c3 += 3;
    std::cout << (c1 == c2);
    cout << c1;
}

