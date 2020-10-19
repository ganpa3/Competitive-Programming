/*
 * Problem Statement: https://codeforces.com/problemset/problem/1270/B
 * Author: ganpa
 */
#include <bits/stdc++.h>

#define sz(x) (int)(x).size()
#define all(v) v.begin(), v.end()
#define endl '\n'
typedef long long int ll;
typedef long double ld;
typedef unsigned long long int ull;
using namespace std;

int a[200005];

void solve() {
    int n, ans[2];
    cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i];
    bool check = false;
    for (int i = 0; i < n - 1; i++) {
        if (abs(a[i] - a[i + 1]) >= 2)
            check = 1, ans[0] = i + 1, ans[1] = i + 2;
    }
    if (check) {
        cout << "YES\n";
        cout << ans[0] << " " << ans[1] << endl;
    } else
        cout << "NO\n";
}

int main() {
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int tc;
    cin >> tc;
    while (tc--) solve();
}