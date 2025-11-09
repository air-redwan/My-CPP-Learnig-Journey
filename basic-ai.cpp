#include<iostream>
#include<string>
#include<algorithm>

using namespace std;
int main () {


    string choice;
    string name;

    while(true) {

    cout << "If your are ready to test me them type 'Start': " ;
    cin >>  choice;

          if (choice == "Start" || choice == "start" || choice == "yes" || choice== "Yes") {

            cout<<"Enter Your Name : ";
            cin>> name; 

            cout << "Welcome " << name<< endl;



          break;

    }
    
        else {
         cout << "You Entered wrong command!, check it." << endl;
            }
    }
























































































































    return 0;
}