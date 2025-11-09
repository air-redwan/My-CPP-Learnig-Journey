#include<iostream>
int main () {

    double c , f;

    std::cout<< "\nEnter today's temperature in celsius : ";
    std::cin >> c;

    f = c*9/5 + 32;


    std::cout << "\n\nCalculation : " << std::endl;
    std::cout << "___________________" << std::endl;
    std::cout << "\nCelsius : " << c << std::endl;
    std::cout<< "Fahrenheit : " << f << std::endl;


    return 0;
}