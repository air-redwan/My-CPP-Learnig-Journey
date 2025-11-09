#include <iostream>
int main () {

    for (int a =1; a <= 10 ; a++)
    {
        if ( a == 6 ) {
            break;}
        else {
            std::cout << a << std::endl;
        }
    }


    return 0;
}