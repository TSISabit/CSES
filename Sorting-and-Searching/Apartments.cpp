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
    int n, m, k; cin >> n >> m >> k; 
    readv(a, n); readv(b, m); 

    sort(all(a)); sort(all(b)); 

    int i = 0, j = 0, cnt = 0; 
    while(i < n && j < m){
        if(b[j] < a[i] - k) j++; 
        else if(b[j] > a[i] + k) i++; 
        else{
            cnt++; 
            i++; j++; 
        }
    }

    cout << cnt << nn; 
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