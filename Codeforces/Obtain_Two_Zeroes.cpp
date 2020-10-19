/*
 * Problem Statement: https://codeforces.com/problemset/problem/1260/B
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
    int a, b, ok = 0;
    cin >> a >> b;
    if ((a + b) % 3 == 0 && 2 * min(a, b) >= max(a, b)) ok = 1;
    puts(ok ? "YES" : "NO");
}

int main() {
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int tc;
    cin >> tc;
    while (tc--) solve();
}
