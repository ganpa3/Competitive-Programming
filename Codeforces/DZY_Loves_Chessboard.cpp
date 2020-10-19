/*
 * Problem Statement: https://codeforces.com/problemset/problem/445/A
 * Author: ganpa
 */
#include <bits/stdc++.h>

#define sz(x) (int)(x).size()
#define endl '\n'
typedef long long int ll;
typedef long double ld;
typedef unsigned long long int ull;
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    freopen("input.in", "r", stdin);
#endif
    ios_base::sync_with_stdio(false), cin.tie(0);
    int n, m;
    cin >> n >> m;
    vector<string> v(n);
    for (int i = 0; i < n; ++i) cin >> v[i];
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (i % 2 && v[i][j] == '.') {
                if (j % 2 == 0)
                    v[i][j] = 'W';
                else
                    v[i][j] = 'B';
            } else if (v[i][j] == '.') {
                if (j % 2 == 0)
                    v[i][j] = 'B';
                else
                    v[i][j] = 'W';
            }
        }
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cout << v[i][j];
        }
        cout << endl;
    }
}