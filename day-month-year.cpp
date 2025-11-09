#include<iostream>
#include <iomanip>
int main () {

    double d,m,y;

    std::cout<<"Enter your total days : ";
    std::cin >> d;

    m = d / 30;
    y = d / 365;

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "\nMonth : " << m << std::endl;
    std::cout << "Year : " << y << std::endl;


    return 0;
}