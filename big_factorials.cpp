#include <iostream>
int main () {

    int N ;
    std::cin >> N;

    long long fact = 1;
    for (int i = 1 ; i <= N ; i++) {
        fact = (fact * i) % 10000;
    }

    std::cout << fact << std::endl;

    return 0;
}