#include<iostream>
using namespace std;
int main () {

    int A[3][4] = {
        {5,6,7,8},
        {15,16,17,18},
        {25,26,27,28}
    };

    for (int i=0 ; i<3 ; i++) {

        for(int j =0 ; j<4 ; j++) 
        {
            cout << A[i][j] << " ";
        }
    cout << endl;
    }

    return 0;
}
