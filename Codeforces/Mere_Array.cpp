/*
* Problem Statement: https://codeforces.com/problemset/problem/1401/C
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
    int n;
    cin >> n;
    vector<int> v(n), u;
    for (auto &it : v)
        cin >> it;
    u = v;
    sort(all(u));
    int min = *min_element(all(v));
    bool ok = true;
    for (int i = 0; i < n; i++)
    {
        if (v[i] != u[i] && v[i] % min)
            ok = false;
    }
    puts(ok ? "YES" : "NO");
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int tc;
    cin >> tc;
    while (tc--)
        solve();
}
