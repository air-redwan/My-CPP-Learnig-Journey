#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--) {
        int n, m, q;
        cin >> n >> m >> q;
        vector<ll> a(n), b(m);
        for(int i = 0; i < n; i++) cin >> a[i];
        for(int i = 0; i < m; i++) cin >> b[i];

        sort(a.rbegin(), a.rend());
        sort(b.rbegin(), b.rend());

        vector<ll> prefA(n+1, 0), prefB(m+1, 0);
        for(int i = 1; i <= n; i++) prefA[i] = prefA[i-1] + a[i-1];
        for(int i = 1; i <= m; i++) prefB[i] = prefB[i-1] + b[i-1];

        while(q--) {
            int xi, yi, zi;
            cin >> xi >> yi >> zi;
            ll res = 0;
            int low = max(0, zi - yi);
            int high = min(xi, zi);
            for(int v_pick = low; v_pick <= high; v_pick++) {
                int k_pick = zi - v_pick;
                if(k_pick > yi) continue;
                ll sum = prefA[v_pick] + prefB[k_pick];
                res = max(res, sum);
            }
            cout << res << "\n";
        }
    }
    return 0;
}
