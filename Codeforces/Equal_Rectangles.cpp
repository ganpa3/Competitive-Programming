/*
 * Problem Statement: https://codeforces.com/problemset/problem/1203/B
 * Author: ganpa
 */
#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<long long> v(4 * n);
    for (auto &it : v) cin >> it;
    sort(v.begin(), v.end());

    long long area = v[0] * v[4 * n - 1];
    bool check = true;
    for (int i = 0; i < n; i++) {
        int l = i * 2, r = 4 * n - i * 2 - 1;
        if (v[l] != v[l + 1] || v[r] != v[r - 1] || v[l] * v[r] != area)
            check = false;
    }
    puts(check ? "YES" : "NO");
}

int main() {
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int tc;
    cin >> tc;
    while (tc--) solve();
}