/*
 * Problem Statement: https://codeforces.com/contest/1076/problem/B
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

ll get(ll n) {
    for (ll i = 2; i * i <= n; i++)
        if (n % i == 0) return i;
    return n;
}

void solve() {
    ll n, ans = 0;
    cin >> n;
    if (n % 2) {
        n -= get(n);
        ans++;
    }
    cout << ans + n / 2 << endl;
}

int main() {
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    solve();
}