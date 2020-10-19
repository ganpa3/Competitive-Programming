/*
 * Problem Statement: https://codeforces.com/problemset/problem/1221/C
 * Author: ganpa
 */
#include <bits/stdc++.h>

#define endl '\n'
using namespace std;

int main() {
    ios_base::sync_with_stdio(false), cin.tie(0);
    int tc;
    cin >> tc;
    while (tc--) {
        int c, m, x;
        cin >> c >> m >> x;
        int ans = min({c, m, x});
        c -= ans, m -= ans, x -= ans;
        if (c == 0 || m == 0)
            cout << ans << endl;
        else
            cout << ans + min({c, m, (c + m) / 3}) << endl;
    }
}
