/*
 * Problem Statement: https://codeforces.com/problemset/problem/573/A
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

int main() {
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        while (v[i] % 2 == 0) v[i] /= 2;
        while (v[i] % 3 == 0) v[i] /= 3;
    }
    bool ok = true;
    for (int i = 0; i < n; i++)
        if (v[i] != v[0]) ok = false;
    puts(ok ? "Yes" : "No");
}
