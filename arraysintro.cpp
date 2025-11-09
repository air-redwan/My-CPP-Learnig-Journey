#include <iostream>
using namespace std;
int main ()
{

    int roll_no[5];
    cout<<"enter the roll nos:";
    for(int i=0; i < 5; i++)
    {
    cin>>roll_no[i];
    }

    cout <<"the roll no first student is : " <<roll_no[5];
    
   /* for(int i = 0; i<5; i++)
    {

        cout <<"______roll______" <<roll_no[i] << endl; 

    }
*/
      
    return 0;
}