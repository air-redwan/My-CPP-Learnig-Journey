#include <iostream>
#include <iomanip>
int main() {

    double year, month , day;

    std::cout << "\nEnter Your Total Years : ";
    std::cin >> year;

    month = year * 12;
    day = year * 365;

    std::cout << std::fixed << std::setprecision (3);
    std::cout << "Month : " << month  << std::endl;
    std::cout << " Day : " <<  day << std::endl;




    return 0;
}