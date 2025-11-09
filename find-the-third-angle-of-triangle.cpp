#include<iostream>
int main () {

    double a1 , a2 , a3 , sum ;

    std::cout <<"Enter The Value Of a1 and a2 : ";
    std::cin >> a1 >> a2;

    sum = a1 + a2;
    a3 = 180 - sum ;

    std::cout << "Value of the third angle of this triangle is : " << a3 << std::endl;

    return 0;
}