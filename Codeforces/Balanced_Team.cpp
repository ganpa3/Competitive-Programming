/*
 * Problem Statement: https://codeforces.com/problemset/problem/1133/C
 * Author: ganpa
 */
#include <bits/stdc++.h>

#define endl '\n'
using namespace std;

int v[200001];

int main() {
    ios_base::sync_with_stdio(false), cin.tie(0);
    int n, ans = 1;
    cin >> n;
    for (int i = 0; i < n; i++) cin >> v[i];
    sort(v, v + n);
    int j = 0;
    for (int i = 0; i < n - 1; i++) {
        while (j < n && v[j] - v[i] <= 5) j++;
        ans = max(ans, j - i);
    }
    cout << ans << endl;
}
