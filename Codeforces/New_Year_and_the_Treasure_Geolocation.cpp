/*
 * Problem Statement: https://codeforces.com/problemset/problem/1091/B
 * Author: ganpa
 */
#include <bits/stdc++.h>

#define sz(x) (int)(x).size()
#define all(v) v.begin(), v.end()
#define endl '\n'
#define int long long
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(2 * n), b(2 * n);
    for (int i = 0; i < n; i++) cin >> a[i] >> b[i];
    for (int i = n; i < 2 * n; i++) cin >> a[i] >> b[i];

    int c1 = accumulate(all(a), 0LL);
    int c2 = accumulate(all(b), 0LL);
    cout << c1 / n << " " << c2 / n << endl;
}

int32_t main() {
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    solve();
}