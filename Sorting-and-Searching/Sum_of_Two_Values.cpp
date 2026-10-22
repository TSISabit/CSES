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
#define pb push_back
#define ppb pop_back

void solve() {
    int n, x; cin >> n >> x; 
    vector<pair<int, int>> a(n); 
    for(int i = 0; i < n; i++){
        cin >> a[i].first; 
        a[i].second = i + 1; 
    }

    sort(all(a)); 
    int l = 0, r = n - 1; 
    while(l < r){
        int sum = a[l].first + a[r].first; 
        if(sum == x){
            cout << a[l].second << " " << a[r].second << nn; 
            return; 
        }
        else if(sum < x) l++; 
        else r--; 
    }

    cout << "IMPOSSIBLE" << nn; 
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