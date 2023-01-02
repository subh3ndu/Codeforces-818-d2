#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

// A. Madoka and Strange Thoughts

void solve(int tt) {
    int n;
    cin >> n;
    cout << n + 2*(n/2 + n/3) << "\n";
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int test = 1;
    cin >> test;
    for(int i=1; i<=test; i++) {
        solve(test);
        cout << "\n";
    }

    return 0;
}
