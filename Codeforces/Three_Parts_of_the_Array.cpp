/*
 * Problem Statement: https://codeforces.com/problemset/problem/1006/C
 * Author: ganpa
 */
#include <bits/stdc++.h>

#define endl '\n'
#define int long long
using namespace std;

int32_t main() {
    ios_base::sync_with_stdio(false), cin.tie(0);
    int n, ans = 0;
    cin >> n;
    vector<int> v(n);
    for (auto &it : v) cin >> it;
    int p1 = 0, p2 = n - 1, sum1 = 0, sum2 = 0;
    while (p1 <= p2) {
        if (sum1 <= sum2)
            sum1 += v[p1++];
        else
            sum2 += v[p2--];
        if (sum1 == sum2) ans = sum1;
    }
    cout << ans << endl;
}
