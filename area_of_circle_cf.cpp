#include <iostream>
#include <iomanip>
int main () {

    double R , pie , Area;
    std::cin >> R;

    pie = 3.141592653;
    Area = pie * (R * R);

    std::cout << std::fixed << std::setprecision (9);
    std::cout << Area << std::endl;


    return 0;
}