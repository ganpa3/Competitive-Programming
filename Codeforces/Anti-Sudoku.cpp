/*
 * Problem Statement: https://codeforces.com/problemset/problem/1335/D
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

void solve()
{
    cout << endl;
    vector<string> v(9);
    for (auto &it : v)
        cin >> it;
    v[1][0] = v[0][0], v[2][3] = v[1][3], v[0][6] = v[1][6];
    v[4][1] = v[3][1], v[5][4] = v[4][4], v[3][7] = v[4][7];
    v[7][2] = v[6][2], v[8][5] = v[7][5], v[6][8] = v[7][8];
    for (auto x : v)
        cout << x << endl;
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int tc;
    cin >> tc;
    while (tc--)
        solve();
}
