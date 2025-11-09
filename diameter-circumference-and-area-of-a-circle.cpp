#include <iostream>
int main () {

    double radius , diameter , circumference , area ;

    std::cout << "\nEnter the radius : ";
    std::cin >> radius;


    std::cout << "The Radius Is : " << radius << std::endl;


    diameter = 2 * radius;
    circumference = 2 * 3.1416 * radius;
    area = 3.1416 * (radius * radius);

    std::cout << "\n\nCalcutation Report : " << std::endl;

    std::cout << "\nDiameter : " << diameter << std::endl;
    std::cout << "Circumference : " << circumference << std::endl;
    std::cout << "Area : " << area << std::endl;

    return 0;
}