#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<long long> deals;
    vector<long long> cost;

    
    long long pw = 1;
    while(pw <= 1e9) {
        deals.push_back(pw);
        if(pw == 1) cost.push_back(3); 
        else {
            cost.push_back(pw * 3 + 1); 
        }
        if(pw > 1e9 / 3) break;
        pw *= 3;
    }

    long long ans = 0;
    int remaining = n;

    for(int i = deals.size()-1; i >= 0; i--) {
        long long take = remaining / deals[i];
        ans += take * cost[i];
        remaining -= take * deals[i];
    }

    cout << ans << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--) solve();

    return 0;
}
