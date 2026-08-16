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
    string s; cin >> s; 
    vi cnt(26, 0); 
    for(char c : s){
        cnt[c - 'A']++; 
    }

    int odd = 0; 
    char mid = '\0'; 

    for(int i = 0; i < 26; i++){
        if(cnt[i] % 2 != 0){
            odd++; 
            mid = char('A' + i); 
        }
    }

    if(odd > 1){
        cout << "NO SOLUTION\n"; 
        return; 
    }

    string left = ""; 
    for(int i = 0; i < 26; i++){
        left += string(cnt[i] / 2, char('A' + i)); 
    }

    string right = left; 
    reverse(all(right)); 

    cout << left; 
    if(mid != '\0') cout << mid; 
    cout << right << nn; 
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