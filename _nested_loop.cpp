#include <iostream>
int main () {

    int data[] = {10, 1, 3, -4, 7, 5};
    int n = 6;
    int sum = 0;

    for(int i = 0; i<n ; i++) {

        for (int j = i+1; j< n; j++) {
            sum += data[i] * data [j]; 
        }
    }

    std::cout << "Sum of all pairs : " << sum << std::endl;


    return 0;
}