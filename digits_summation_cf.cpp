#include <iostream>
int main () {

    long long N , M;
    std::cin >> N >> M;

    int lastNumber1 = N % 10;
    int lastNumber2 = M % 10;

    std::cout << ( lastNumber1 + lastNumber2 ) << std::endl;


    return 0;
}