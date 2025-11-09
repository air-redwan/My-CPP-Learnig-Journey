#include <iostream>
#include <cmath>
int main() {

    float length,width,rectangle, a , b , c , s , triangle, totalArea ;
    
    //Area of Recatangle :

    std::cout << "\nEnter the value of lenght and width : ";
    std::cin >> length >> width;

    rectangle = length * width;
    std::cout << "The area of rectangle is : " << rectangle << std::endl;
 
    //Area of Triangle :
    std::cout << " Enter the value of a ,b and c : ";
    std::cin >> a >> b >> c;

    s = (a + b + c) / 2;
    triangle = std::sqrt(s * (s - a) * (s - b) * (s - c));

    std::cout << "The Area of Triangle : " << triangle << std::endl;



    //Total Area : 
    totalArea = rectangle + triangle;
    std::cout << " Total Area : " << totalArea <<std::endl;



    return 0;
}
