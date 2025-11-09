#include <iostream>
int main () {

    int n;
    std::cout << "Enter a number greater than 6 : ";
    std::cin >> n;

    while (n <= 6) {
        std::cout << "Please enter a number greater than 6 : ";
        std::cin >> n;
    }

    std::cout << "\nYou Entered (the value of 'n') : " << n << std::endl;

    
    return 0;
}
