#include <iostream>
#include "Circle.h"

bool operator>(Circle& c, Circle& c2) {
    return c.GetLenth() > c2.GetLenth();
}

int main()
{
    Circle circle1(5);
    Circle circle2(6);

    circle1 += 1;
    if (circle1 == circle2) std::cout << "Equals" << std::endl;
    else std::cout << "Non equals" << std::endl;
    

    if (circle1 > circle2) std::cout << "circle1" << std::endl;
    else std::cout << "circle2" << std::endl;
}
