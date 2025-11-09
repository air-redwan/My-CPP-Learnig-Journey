#include <iostream>
int main () {

    int T;
    std::cin >> T;

    while (T--) {

        long long A, B, C;
        std::cin >> A >> B >> C;

        if ( A + B > 2*C ) {

            std::cout << "YES" << std::endl;
        }

        else {

            std::cout << "NO" <<std::endl;
        }


    }

    return 0;
}