#include <iostream>
#include <iomanip>
int main () {

    long long A , B , C , D , X;

    std::cout << "\nEnter the values of A , B , C , D : ";
    std::cin >> A >> B >> C >> D;


    X = (A * B) - (C * D) ;

    std::cout << "Defference = " << X << std::endl;

    return 0;
}