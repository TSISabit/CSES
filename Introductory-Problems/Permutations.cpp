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
    read(n); 
    vi a; 
    if(n == 2 || n == 3){
        cout << "NO SOLUTION\n"; 
        return; 
    }
    else{
        for(int i = 1; i <= n; i++){
            if(i % 2 == 0) a.push_back(i); 
        }
        for(int i = 1; i <= n; i++){
            if(i & 1) a.push_back(i); 
        }
    }

    for(int i : a) cout << i << " "; 
    cout << nn; 
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    // int t; cin >> t;
    // while (t--) {
        solve();
    // }
    return 0;
}