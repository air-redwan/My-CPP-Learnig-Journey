#include <iostream>
int main () {

    int n;
    std::cout << "\nEnter a number greater than 6 : ";
    std::cin >> n;

    while (n <= 6) 
    {
        std::cout << "\nPlease enter a number greater than 6 ( " << n << " is not greater than 6 ) : ";
        std::cin >> n;  
    }
    
    std::cout << "\nYou entered the value of n : " << n << std::endl;


    std::cout << "\n\nEnd of the code ..... " << std::endl;
    std::cout << " " << std::endl; 

    return 0;
}
