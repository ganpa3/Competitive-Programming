/*
 * Problem Statement: https://codeforces.com/problemset/problem/220/A
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
    vector<int> v(n), u;
    for (auto &it : v) cin >> it;
    u = v;
    sort(all(u));
    int cnt = 0;
    for (int i = 0; i < n; i++)
        if (u[i] != v[i]) cnt++;
    puts(cnt < 3 ? "YES" : "NO");
}
