/*
* Problem Statement: https://codeforces.com/problemset/problem/1285/B
* Author: ganpa
*/
#include <bits/stdc++.h>

#define sz(x) (int)(x).size()
#define all(v) v.begin(), v.end()
#define endl '\n'
#define int long long
using namespace std;

void solve()
{
    int n, ok = 1, sum = 0;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        sum += v[i];
        if (sum <= 0)
            ok = 0;
    }
    sum = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        sum += v[i];
        if (sum <= 0)
            ok = 0;
    }
    puts(ok ? "YES" : "NO");
}

int32_t main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int tc;
    cin >> tc;
    while (tc--)
        solve();
}
