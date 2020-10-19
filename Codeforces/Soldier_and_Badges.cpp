/*
 * Problem Statement: https://codeforces.com/contest/546/problem/B
 * Author: ganpa
 */
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false), cin.tie(0);
    int n, ans = 0;
    cin >> n;
    vector<int> v(n);
    for (int &it : v) cin >> it;
    sort(v.begin(), v.end());
    for (int i = 1; i < n; i++) {
        if (v[i] <= v[i - 1]) {
            int x = v[i - 1] - v[i] + 1;
            v[i] += x;
            ans += x;
        }
    }
    cout << ans << endl;
}