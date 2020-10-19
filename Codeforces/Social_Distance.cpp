/*
 * Problem Statement: https://codeforces.com/problemset/problem/1367/C
 * Author: ganpa
 */
#include <bits/stdc++.h>

#define sz(x) (int)(x).size()
#define all(v) v.begin(), v.end()
#define endl '\n'
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    vector<int> v;
    for (int i = 0; i < n; i++) {
        if (s[i] == '1') v.push_back(i + 1);
    }
    int ans = 0;
    if (v.empty())
        ans = n / (k + 1) + (n % (k + 1) ? 1 : 0);
    else {
        for (int i = 0; i < sz(v) - 1; i++) {
            int temp = v[i + 1] - v[i] - 1 - 2 * k;
            if (temp > 0) ans += temp / (k + 1) + (temp % (k + 1) ? 1 : 0);
        }
        int c = v[0] - k - 1;
        if (c > 0) ans += c / (k + 1) + (c % (k + 1) ? 1 : 0);
        c = n - v.back() - k;
        if (c > 0) ans += c / (k + 1) + (c % (k + 1) ? 1 : 0);
    }
    cout << ans << endl;
}

int main() {
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int tc;
    cin >> tc;
    while (tc--) solve();
}
