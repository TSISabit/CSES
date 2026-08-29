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
    readv(a, n); 
    int sum = accumulate(all(a), 0LL); 

    int ans = LLONG_MAX; 

    for(int i = 0; i < (1 << n); i++){
        int g1 = 0; 

        for(int j = 0; j < n; j++){
            if(i & (1 << j)) g1 += a[j]; 
        }

        int g2 = sum - g1; 
        ans = min(ans, abs(g1 - g2)); 
    }

    cout << ans << nn; 
    
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