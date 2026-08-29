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

void hanoi(int n, int from, int via, int to){
    if(n == 1){
        cout << from << " " << to << nn; 
        return; 
    }

    hanoi(n - 1, from, to, via); 
    cout << from << " " << to << nn; 

    hanoi(n - 1, via, from, to); 
}
void solve() {
    read(n); 

    int mx = (1 << n) - 1; 
    cout << mx << nn; 
    hanoi(n, 1, 2, 3); 
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