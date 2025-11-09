#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    string a;
    cin >> a;

    int m;
    cin >> m;
    string b, c;
    cin >> b >> c;

    string res = a;

    for(int i = 0; i < m; i++) {
        if(c[i] == 'V') {
            res = b[i] + res; 
        } else {
            res += b[i]; 
        }
    }

    cout << res << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--) {
        solve();
    }

    return 0;
}
