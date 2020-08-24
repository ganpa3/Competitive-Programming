/*
* Problem Statement: https://www.codechef.com/COOK121B/problems/CHEFNWRK
* Author: ganpa
*/
#include <bits/stdc++.h>

#define endl '\n'
typedef long long int ll;
typedef long double ld;
typedef unsigned long long int ull;
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    for (int i : v) {
        if (i > k) {
            cout << -1 << endl;
            return;
        }
    }
    int i = 0, ans = 0;
    while (i < n) {
        ans++;
        int curr = 0;
        while (i < n && (curr + v[i] <= k)) {
            curr += v[i];
            i++;
        }
    }
    cout << ans << endl;
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
#endif
    ios_base::sync_with_stdio(false), cin.tie(0);
    int tc;
    cin >> tc;
    while (tc--) {
        solve();
    }
}