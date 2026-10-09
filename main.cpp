#include <iostream>
#include "triangle.h"

int main() {
    double side, height;
    std::cout << "Введите длину стороны: ";
    std::cin >> side;
    std::cout << "Введите высоту, опущенную к этой стороне: ";
    std::cin >> height;
    double area = triangleArea(side, height);
    std::cout << "Площадь треугольника = " << area << std::endl;
    return 0;
}