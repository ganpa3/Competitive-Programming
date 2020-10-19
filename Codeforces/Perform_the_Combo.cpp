/*
 * Problem Statement: https://codeforces.com/problemset/problem/1311/C
 * Author: ganpa
 */
#include <bits/stdc++.h>

#define sz(x) (int)(x).size()
#define all(v) v.begin(), v.end()
#define endl '\n'
#define int long long
using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;
    vector<int> u(n), d(n + 1), res(26);
    string s;
    cin >> s;
    vector<int> v(m + 1);
    for (int i = 0; i < m; i++) cin >> v[i];
    v[m] = n;

    for (auto x : v) {
        d[0]++;
        d[x]--;
    }
    for (int i = 0; i < n; i++) {
        if (i)
            u[i] = u[i - 1] + d[i];
        else
            u[i] = d[i];
    }
    for (int i = 0; i < n; i++) res[s[i] - 'a'] += u[i];
    for (auto x : res) cout << x << " ";
    cout << endl;
}

int32_t main() {
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int tc;
    cin >> tc;
    while (tc--) solve();
}
