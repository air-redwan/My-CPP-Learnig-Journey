#include<iostream>
int main() {

    double f ,c;

    std::cout<< "\nEnter today's temperature in fahrenheit : ";
    std::cin >> f;

    c = (f-32) * 5/9;


    std::cout << "\n\nCalculation : " << std::endl;
    std::cout << "___________________" << std::endl;
    std::cout << "\nFahrenheit : " << f << std::endl;
    std::cout<< "Celsius : " << c << std::endl;


    return 0;
}