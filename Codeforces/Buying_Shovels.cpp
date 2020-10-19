/*
 * Problem Statement: https://codeforces.com/problemset/problem/1360/D
 * Author: ganpa
 */
#include <bits/stdc++.h>

#define endl '\n'
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    int ans = n;
    for (int i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            if (n / i <= k)
                ans = min(ans, i);
            else if (i <= k)
                ans = min(ans, n / i);
        }
    }
    cout << ans << endl;
}

int main() {
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int tc;
    cin >> tc;
    while (tc--) solve();
}