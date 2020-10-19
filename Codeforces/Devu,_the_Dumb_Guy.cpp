/*
 * Problem Statement: https://codeforces.com/problemset/problem/439/B
 * Author: ganpa
 */
#include <bits/stdc++.h>

#define all(v) v.begin(), v.end()
#define sz(x) (int)(x).size()
#define endl '\n'
typedef long long ll;
typedef long double ld;
typedef unsigned long long ull;
using namespace std;

int main() {
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    ll n, x;
    cin >> n >> x;
    vector<ll> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];
    sort(all(v));

    ll ans = 0;
    for (int i = 0; i < n; i++) {
        ans += v[i] * x;
        if (x != 1) x--;
    }
    cout << ans << endl;
}
