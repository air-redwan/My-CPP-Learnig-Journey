#include <bits/stdc++.h>
using namespace std;
int main () {
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int i;
    int sum = 0;

    for (int i = 1; i <= 5 ; i++)
    {
        if (i%2 != 0) {
            sum += i;
        }
    }

    cout << "Sum : " << sum << endl;
    
    return 0;
}