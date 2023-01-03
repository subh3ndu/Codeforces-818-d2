#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

// A. Madoka and Strange Thoughts

void solve(int tt) {
    int n, k, r, c;
    cin >> n >> k >> r >> c;
    char a[n + 1][n + 1];
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            if(i == r and j == c) {
                a[i][j] = 'X';
            } else if((i + j) % k == (r + c) % k){
                a[i][j] = 'X';
            } else {
                a[i][j] = '.';
            }
        }
    }

    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            cout << a[i][j] << " ";
        }
        cout << "\n";
    }
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
