/*
 * Problem Statement: https://codeforces.com/problemset/problem/1352/B
 * Author: ganpa
 */
#include <bits/stdc++.h>

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
        int n, k;
        cin >> n >> k;
        if (k > n)
            cout << "NO\n";
        else if (n % 2 == 0 && n / k >= 2) {
            cout << "YES\n";
            for (int i = 0; i < k - 1; ++i) cout << "2 ";
            cout << n - ((k - 1) * 2) << "\n";
        } else if ((n % 2 != 0 && k % 2 != 0) || (n % 2 == 0 && k % 2 == 0)) {
            cout << "YES\n";
            for (int i = 0; i < k - 1; ++i) cout << "1 ";
            cout << n - (k - 1) << "\n";
        } else
            cout << "NO\n";
    }
}