#include <iostream>
int main() {

    double lenght ,width, perimeter;

    std::cout << "\nEnter the value of lenght : ";
    std::cin >> lenght;
    
    std::cout << "\nEnter the value of width : ";
    std::cin >> width;

    std::cout << "\nLenght : " << lenght << std::endl;
    std::cout << "Width : " << width << std::endl;

    perimeter = 2 * (lenght + width);

    std::cout << "\n\nPerimeter : " << perimeter << std::endl;

    std::cout << "\n\nThankYou.\n\n" << std::endl;

    return 0;
}