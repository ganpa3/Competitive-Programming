/*
* Problem Statement: https://codeforces.com/problemset/problem/1401/A
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
        int n, k;
        cin >> n >> k;
        if (n < k)
            cout << k - n << endl;
        else if (n % 2 == k % 2)
            cout << 0 << endl;
        else
            cout << 1 << endl;
    }
}