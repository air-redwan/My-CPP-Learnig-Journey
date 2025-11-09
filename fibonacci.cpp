#include <iostream>
int main () {

    int N;
    std::cin >> N;

    if ( N == 1 || N == 2 ) {
        std::cout << "1" << std::endl;

    return 0;
}

    int a = 1 , b = 1, fib; 

    for (int i = 3 ; i <= N ; i++) {
    
       fib = a + b; 
        a = b;
        b = fib;

    }

    std::cout << fib << std::endl;

    return 0;
}