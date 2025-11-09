#include <iostream>
#include <cmath>
int main () {


    int base , power, result;

    std::cout << " Enter the base and power : " ;
    std::cin >> base  >> power ;

    result = pow (base , power);

    std::cout << " Result : " << result ;


    return 0;
}