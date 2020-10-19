/*
 * Problem Statement: https://codeforces.com/problemset/problem/545/D
 * Author: ganpa
 */
#include <bits/stdc++.h>

#define sz(x) (int)(x).size()
#define all(v) v.begin(), v.end()
#define endl '\n'
typedef long long ll;
typedef long double ld;
typedef unsigned long long ull;
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int &it : v) cin >> it;
    sort(all(v));

    int ans = 1, sum = v[0];
    for (int i = 1; i < n; i++) {
        if (sum > v[i]) continue;
        ans++;
        sum += v[i];
    }
    cout << ans << endl;
}

int main() {
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    solve();
}
