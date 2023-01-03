#include <algorithm>
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

// C. Madoka and Formal Statements

void solve(int tt) {
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    for(auto &x : a) cin >> x;
    for(auto &x : b) cin >> x;

    for(int i = 0; i < n; i++) {
        if(a[i] > b[i]) {
            cout << "NO\n";
            return ;
        }

        if(b[i] > a[i] and b[i] > b[(i+1) % n] + 1) {
            cout << "NO\n";
            return;
        }
    }

    cout << "YES\n";
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int tt = 1;
    cin >> tt;
    for(int i=1; i<=tt; i++) {
        solve(tt);
    }

    return 0;
}
