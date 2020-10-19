/*
 * Problem Statement: https://codeforces.com/problemset/problem/1355/A
 * Author: ganpa
 */
#include <bits/stdc++.h>

typedef long long ll;
typedef long double ld;
typedef unsigned long long ull;

using namespace std;

int solve(ull n) {
    ull smallest = 9;
    ull largest = 0;
    while (n) {
        ull r = n % 10;
        largest = max(r, largest);
        smallest = min(r, smallest);
        n = n / 10;
    }
    return smallest * largest;
}
int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
#endif
    ios_base::sync_with_stdio(false), cin.tie(0);
    int tc;
    cin >> tc;
    while (tc--) {
        ull a1, k;
        cin >> a1 >> k;
        while (k != 1) {
            ull y = solve(a1);
            if (y == 0) break;
            a1 += y;
            k--;
        }
        cout << a1 << "\n";
    }
}