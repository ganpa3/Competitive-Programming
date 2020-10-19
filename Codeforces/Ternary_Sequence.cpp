/*
 * Problem Statement: https://codeforces.com/problemset/problem/1401/B
 * Author: ganpa
 */
#include <bits/stdc++.h>

#define endl "\n"
typedef long long int ll;
typedef long double ld;
typedef unsigned long long int ull;
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
#endif
    ios_base::sync_with_stdio(false), cin.tie(0);
    int tc;
    cin >> tc;
    while (tc--) {
        int x1, y1, z1, x2, y2, z2, b1, b2, ans = 0;
        cin >> x1 >> y1 >> z1 >> x2 >> y2 >> z2;
        b1 = z1 - y2;
        if (b1 > 0)
            b2 = z2 - x1 - b1;
        else
            b2 = b2 = z2 - x1;
        if (b2 > 0)
            ans += 2 * min(z1, y2) - 2 * b2;
        else
            ans += 2 * min(z1, y2);
        cout << ans << endl;
    }
}