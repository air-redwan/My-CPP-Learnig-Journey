#include <iostream>
int main () 

{
    int num, sum=0 , i =1;
    do {

        std::cout << "Input." << i ;
        i++;

        std::cout << "\nEnter a number : ";
        std::cin >> num;

        std::cout << "You Entered : " << num << std::endl;

        std::cout << "The Value of sum was : " << sum << std::endl;

        sum += num;
        std::cout << "The value of sum is now : " << sum << std::endl;
        std::cout << "_________________________________________" << std::endl;
        std::cout << "\n" << std::endl;

    } while (num >= 0) ;

    std::cout << "Summation : " << sum << std::endl;
    std::cout << "\n\nEnd of the code...." << "\n" <<std::endl;

    return 0;
}