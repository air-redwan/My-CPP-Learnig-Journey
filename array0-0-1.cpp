#include <iostream>
using namespace std;
int main () {

    int n;
    cout << "\nEnter the validation of number[] : ";
    cin >> n; 
    cout <<"\n";

    int number[n];

    cout <<" ____________Taking Input____________" << endl;
    cout <<"\n";

    for  (int i=0 ; i<n ; i++) {
        cout << "Enter the value of number["<< i <<"] : "; 
        cin >> number[i];
    }


    int defaultNumber = number[0];

    for(int i=1; i<n ; i++) {

        if( number[i] > defaultNumber) {
            defaultNumber = number[i];
            
        }
    }

    cout <<"\n";
    cout <<"___________________Result___________________" << endl;
    
    cout<< "\nMaximum number of this array is : " << defaultNumber << endl; 

    return 0;
}