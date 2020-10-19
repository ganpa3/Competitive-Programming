/*
 * Problem Statement: https://codeforces.com/problemset/problem/489/B
 * Author: ganpa
 */
#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

vector<int> v1(100, 1000), v2(100, 1000);

int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
#endif
    ios_base::sync_with_stdio(false), cin.tie(0);
    int n, m, pairs = 0;
    cin >> n;
    for (int i = 0; i < n; ++i) cin >> v1[i];
    cin >> m;
    for (int i = 0; i < m; ++i) cin >> v2[i];
    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end());
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (v1[i] == v2[j] || abs(v1[i] - v2[j]) == 1) {
                v1[i] = 1000, v2[j] = 1000;
                pairs++;
                break;
            }
        }
    }
    cout << pairs << endl;
}