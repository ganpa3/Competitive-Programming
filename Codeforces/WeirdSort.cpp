/*
* Problem Statement: https://codeforces.com/problemset/problem/1311/B
* Author: ganpa
*/
#include <bits/stdc++.h>

#define all(v) v.begin(), v.end()
#define sz(x) (int)(x).size()
#define endl '\n'
typedef long long ll;
typedef long double ld;
typedef unsigned long long ull;
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n, m;
        cin >> n >> m;
        vector<int> v(n), p(n);
        for (auto &it : v)
            cin >> it;
        for (int i = 0; i < m; i++)
        {
            int x;
            cin >> x;
            p[x - 1] = 1;
        }

        bool ok = true;
        int ma = v[0];
        int ma2 = 0;
        for (int i = 1; i < n && ok; i++)
        {
            if (!p[i - 1])
                ma2 = ma;
            if (ma2 > v[i])
                ok = false;
            ma = max(ma, v[i]);
        }
        puts(ok ? "YES" : "NO");
    }
}