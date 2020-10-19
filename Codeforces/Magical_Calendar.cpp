/*
 * Problem Statement: https://codeforces.com/problemset/problem/1371/B
 * Author: ganpa
 */
#include <bits/stdc++.h>

#define endl '\n'
typedef long long int ll;
typedef long double ld;
typedef unsigned long long int ull;
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
#endif
    ios_base::sync_with_stdio(false), cin.tie(0);
    int tc;
    cin >> tc;
    while (tc--) {
        ll n, r;
        cin >> n >> r;
        ll x = n * (n + 1) / 2;
        ll y = r * (r + 1) / 2;
        if (n <= r)
            cout << x - (n - 1) << endl;
        else
            cout << y << endl;
    }
}