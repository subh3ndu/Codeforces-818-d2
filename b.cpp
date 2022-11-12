#include<bits/stdc++.h>
using namespace std;

#define ll long long

// B. Madoka and Underground Competitions

void solve() {
    int n, k, r, c;
    cin >> n >> k >> r >> c;
    char a[n + 1][n + 1];
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            if(i == r and j == c) 
                a[i][j] = 'X';
            else if((i + j) % k == (r + c) % k)
                a[i][j] = 'X';
            else 
                a[i][j] = '.';
        }
    }

    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) 
            cout << a[i][j];
        cout << "\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int tc = 1;
    cin >> tc;
    while(tc--) {
        // cout << "Case #" << i << ": ";
        solve();
    }

    return 0;
}
