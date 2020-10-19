/*
 * Problem Statement: https://codeforces.com/problemset/problem/701/B
 * Author: ganpa
 */
#include <bits/stdc++.h>

#define int long long
using namespace std;

const int MAX = 100001;
vector<bool> row(MAX), column(MAX);

int32_t main() {
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int n, m;
    cin >> n >> m;
    int r = n, c = n;
    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        if (!row[a]) r--;
        if (!column[b]) c--;
        cout << r * c << " ";
        row[a] = column[b] = 1;
    }
}