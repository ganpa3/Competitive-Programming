/*
* Problem Statement: https://codeforces.com/problemset/problem/433/B
* Author: ganpa
*/
#include <bits/stdc++.h>

#define sz(x) (int)(x).size()
#define int long long
#define endl '\n'
using namespace std;

int32_t main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
#endif
    ios_base::sync_with_stdio(false), cin.tie(0);
    int n, m;
    cin >> n;
    vector<int> v(n + 1);
    for (int i = 1; i <= n; i++)
        cin >> v[i];
    vector<int> u(v);
    sort(u.begin(), u.end());
    for (int i = 1; i <= n; i++)
    {
        v[i] += v[i - 1];
        u[i] += u[i - 1];
    }
    cin >> m;
    while (m--)
    {
        int type, l, r;
        cin >> type >> l >> r;
        if (type == 1)
            cout << v[r] - v[l - 1] << endl;
        else
            cout << u[r] - u[l - 1] << endl;
    }
    return 0;
}