#include <bits/stdc++.h>
using namespace std;
int main () {

// Practicing For loop

    int i;
    int n;

    cout << "Enter the value of 'n' : " ;
    cin >> n;

    int sum = 0;
    for (int i = 1 ; i <= n ; i++) {

        sum += i; 
    }

    cout << "Sum = " << sum << endl;

    cout << "\nEnd of the code .";


    return 0;
}