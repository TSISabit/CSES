#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define nn "\n" 
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define read(x) int x; cin >> x;
#define readv(v, n) vector<int> v(n); for (auto &i : v) cin >> i;
#define sz(x) (int)(x).size()
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) ((a) / gcd(a, b) * (b))
#define vi vector<int>

void solve() {
    int y, x; 
    cin >> y >> x; 
    // int mx = max(x, y); 
    if(y > x){
        if(y % 2 == 0){
            // cout << pow(y, 2) - (x - 1) << nn; 
            cout << (y * y) - x + 1 << nn; 
        }
        else{
            // cout << pow(y, 2) + 1 + (x + 1) << nn; 
            // cout << (y * y) + 1 + (x + 1) << nn; 
            cout << ((y - 1) * (y - 1)) + x << nn; 
        }
    }
    else{
        if(x % 2 == 0){
            // cout << pow(x - 1, 2) + 1 + (y - 1) << nn; 
            // cout << ((x - 1) * (x - 1)) + 1 + (y - 1) << nn; 
            cout << ((x - 1) * (x - 1)) + y << nn;
        }
        else{
            // cout << pow(x, 2) - (y - 1) << nn; 
            cout << (x * x) - y + 1 << nn; 
        }
    }
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}