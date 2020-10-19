/*
 * Problem Statement: https://codeforces.com/problemset/problem/474/B
 * Author: ganpa
 */
#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
#endif
    ios_base::sync_with_stdio(false), cin.tie(0);
    int n, m;
    cin >> n;
    vector<int> a(n + 1);
    for (int i = 1; i <= n; i++) {
        int x;
        cin >> x;
        a[i] = a[i - 1] + x;
    }
    cin >> m;
    vector<int> b(m);
    for (int i = 0; i < m; i++) cin >> b[i];
    for (int i = 0; i < m; i++) {
        auto up = lower_bound(a.begin(), a.end(), b[i]);
        if (up == a.end())
            cout << n << "\n";
        else
            cout << up - a.begin() << "\n";
    }
}