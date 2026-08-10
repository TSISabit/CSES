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
    if(n % 4 == 1 or n % 4 == 2){
        no 
        return; 
    }
    yes
    if(n % 4 == 0){
        cout << n / 2 << nn; 
        for(int i = 1; i <= n; i += 4) cout << i << " " << i + 3 << " "; 
        cout << nn; 
        cout << n / 2 << nn; 
        for(int i = 2; i <= n; i += 4) cout << i << " " << i + 1 << " "; 
        cout << nn;   
    }
    else if(n % 4 == 3){
        cout << (n + 1) / 2 << nn; 
        cout << "1 2 "; 
        for(int i = 4; i <= n; i += 4) cout << i << " " << i + 3 << " "; 
        cout << nn; 
        cout << (n - 1) / 2 << nn; 
        cout << "3 "; 
        for(int i = 5; i <= n; i += 4) cout << i << " " << i + 1 << " "; 
        cout << nn; 
    }
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