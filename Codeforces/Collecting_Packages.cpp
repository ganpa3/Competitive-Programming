/*
* Problem Statement: https://codeforces.com/problemset/problem/1294/B
* Author: ganpa
*/
#include <bits/stdc++.h>

#define sz(x) (int)(x).size()
#define endl '\n'
typedef long long int ll;
typedef long double ld;
typedef unsigned long long int ull;
using namespace std;

bool check(vector<pair<int, int> > a)
{
    int l = sz(a);
    for (int i = 1; i < l; i++)
    {
        if (a[i].second < a[i - 1].second)
            return true;
    }
    return false;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
#endif
    ios_base::sync_with_stdio(false), cin.tie(0);
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        vector<pair<int, int> > v(n + 1);
        v[0].first = v[0].second = 0;
        for (int i = 1; i <= n; i++)
        {
            cin >> v[i].first;
            cin >> v[i].second;
        }
        sort(v.begin(), v.end());
        if (check(v))
        {
            cout << "NO\n";
        }
        else
        {
            string s;
            for (int i = 1; i <= n; i++)
            {
                int x = v[i].first - v[i - 1].first;
                int y = v[i].second - v[i - 1].second;
                while (x--)
                    s += 'R';
                while (y--)
                    s += 'U';
            }
            cout << "YES\n"
                 << s << endl;
        }
    }
}