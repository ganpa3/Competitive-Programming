/*
 * Problem Statement: https://codeforces.com/problemset/problem/1291/B
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
    int n, ok = 1;
    cin >> n;
    vector<int> v(n);
    for (auto &it : v)
        cin >> it;
    int l = -1, r = n;
    for (int i = 0; i < n; i++)
    {
        if (v[i] < i)
            break;
        l = i;
    }
    for (int i = n - 1; i >= 0; i--)
    {
        if (v[i] < n - i - 1)
            break;
        r = i;
    }
    if (r > l)
        ok = 0;
    puts(ok ? "Yes" : "No");
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int tc;
    cin >> tc;
    while (tc--)
        solve();
}
