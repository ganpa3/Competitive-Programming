/*
 * Problem Statement: https://codeforces.com/problemset/problem/1352/C
 * Author: ganpa
 */
#include <bits/stdc++.h>

typedef long long ll;

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
        int need = (k - 1) / (n - 1);
        cout << k + need << endl;
    }
}