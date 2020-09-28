/*
* Problem Statement: https://codeforces.com/problemset/problem/1407/B
* Author: ganpa
*/
#include <bits/stdc++.h>

#define sz(x) (int)(x).size()
#define all(v) v.begin(), v.end()
#define endl '\n'
typedef long long int ll;
typedef long double ld;
typedef unsigned long long int ull;
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n), cnt(1005), res;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        cnt[v[i]]++;
    }
    int m = *max_element(all(v));
    res.push_back(m);
    cnt[m]--;
    while (true)
    {
        int g = 1, t = 0;
        for (int i = 0; i < n; i++)
        {
            if (!cnt[v[i]])
                continue;
            int temp = __gcd(v[i], m);
            if (temp > g)
            {
                g = temp;
                t = v[i];
            }
        }
        if (g == 1)
            break;
        m = g;
        cnt[t]--;
        res.push_back(t);
    }
    for (const int &x : res)
        cout << x << " ";
    for (int i = 0; i < n; i++)
    {
        if (cnt[v[i]])
        {
            cout << v[i] << " ";
            cnt[v[i]]--;
        }
    }
    cout << endl;
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int tc;
    cin >> tc;
    while (tc--)
        solve();
}
