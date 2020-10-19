/*
 * Problem Statement: https://codeforces.com/problemset/problem/977/C
 * Author: ganpa
 */
#include <bits/stdc++.h>

#define endl '\n'
typedef long long int ll;
typedef long double ld;
typedef unsigned long long int ull;
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
#endif
    ios_base::sync_with_stdio(false), cin.tie(0);
    int n, k, ans = 0;
    cin >> n >> k;
    vector<int> v(n);
    for (int &it : v) cin >> it;
    sort(v.begin(), v.end());
    if (k == 0)
        ans = v[0] - 1;
    else {
        if (v[k - 1] == v[k])
            ans = -1;
        else
            ans = v[k - 1];
    }
    if (ans >= 1 && ans <= 1000 * 1000 * 1000)
        cout << ans << endl;
    else
        cout << -1 << endl;
}