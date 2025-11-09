/***************************************************
 * Author: Your Name
 * Created: 2025-08-19
 * Purpose: Standard C++ Competitive Programming Template
 * Notes: Designed for speed, clarity, and reusability
 ***************************************************/

#include <bits/stdc++.h>
using namespace std;

//----------------------//
//   Type Definitions   //
//----------------------//
using ll = long long;
using ld = long double;
using pii = pair<int,int>;
using pll = pair<ll,ll>;
using vi = vector<int>;
using vl = vector<ll>;
using vpii = vector<pii>;
using vpll = vector<pll>;


//----------------------//
//   Constants          //
//----------------------//
const ll INF = 1e18;
const int MOD = 1e9 + 7;
const ld EPS = 1e-9;

//----------------------//
//   Macros             //
//----------------------//
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr)
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define pb push_back
#define ff first
#define ss second
#define sz(x) ((int)(x).size())
#define rep(i,a,b) for (int i = (a); i < (b); i++)
#define rrep(i,a,b) for (int i = (a); i >= (b); i--)

//----------------------//
//   Random Generator   //
//----------------------//
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
#define randInt(l, r) uniform_int_distribution<int>(l, r)(rng)

//----------------------//
//   Debug Utilities    //
//----------------------//
template<class T> void _print(const T &x) { cerr << x; }
template<class T, class U> void _print(const pair<T,U> &p) { cerr << "{"; _print(p.first); cerr << ","; _print(p.second); cerr << "}"; }
template<class T> void _print(const vector<T> &v) { cerr << "["; for (auto &i : v) { _print(i); cerr << " "; } cerr << "]"; }

#ifdef LOCAL
#define debug(x) cerr << #x << " = "; _print(x); cerr << "\n";
#else
#define debug(x)
#endif

//----------------------//
//   Helper Functions   //
//----------------------//
ll gcdll(ll a, ll b) { return b ? gcdll(b, a % b) : a; }
ll lcmll(ll a, ll b) { return a / gcdll(a,b) * b; }
ll modpow(ll a, ll b, ll m = MOD) {
    ll res = 1; a %= m;
    while (b > 0) {
        if (b & 1) res = (res * a) % m;
        a = (a * a) % m;
        b >>= 1;
    }
    return res;
}
ll modinv(ll a, ll m = MOD) { return modpow(a, m-2, m); }
ll addmod(ll a, ll b, ll m = MOD) { return (a + b) % m; }
ll submod(ll a, ll b, ll m = MOD) { return (a - b + m) % m; }
ll mulmod(ll a, ll b, ll m = MOD) { return (a * b) % m; }

//----------------------//
//   IO Helper          //
//----------------------//
template<typename T> void read(T &x) { cin >> x; }
template<typename T> void read(vector<T> &v) { for (auto &x : v) cin >> x; }

template<typename T> void print(const T &x) { cout << x << " "; }
template<typename T> void print(const vector<T> &v) { for (auto &x : v) cout << x << " "; cout << "\n"; }

//----------------------//
//   Grid Directions    //
//----------------------//
const int dx[4] = {1, -1, 0, 0};
const int dy[4] = {0, 0, 1, -1};
const int dx8[8] = {1,1,1,0,0,-1,-1,-1};
const int dy8[8] = {1,0,-1,1,-1,1,0,-1};

//----------------------//
//   Main Solve Logic   //
//----------------------//
void solve() {
     int a ;
        cout <<"Enter the value of 'A' : ";
        cin >> a;
        

        cout <<"The Value of 'A' is : " << a << endl;
    // Your solution code for each test case goes here
}

//----------------------//
//   Main Function      //
//----------------------//
int main() {
    fastio;

    int T = 1; 
    //cin >> T; // uncomment if multiple test cases
    while (T--) {
        solve();

    }
    return 0;
}
