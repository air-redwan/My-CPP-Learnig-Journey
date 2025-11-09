#include <iostream>
int main () {

    int a , b, c;
    double sum, average;
    
    std::cout<<"\nEnter your first number (the value of a) :" ;
    std::cin >> a ;
    std::cout<<"You entered (the value of a) : "<< a << std::endl;


    std::cout<<"\nEnter your second number (the value of b) :" ;
    std::cin >> b;
    std::cout<<"You entered (the value of b) : "<< b << std::endl;


    std::cout<<"\nEnter your third number (the value of c) :" ;
    std::cin >> c ;
    std::cout<<"You entered (the value of c) : "<< c << std::endl;

    sum = a + b + c;
    average = sum / 3;

    std::cout << "\n\n\nThe average of the three number you entered is : " << average << std::endl;

    std::cout << "\nThankYou" << std::endl;

return 0;
}