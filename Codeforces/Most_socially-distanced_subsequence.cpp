/*
* Problem Statement: https://codeforces.com/problemset/problem/1364/B
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
    vector<int> v(n), res;
    for (auto &it : v)
        cin >> it;

    for (int i = 0; i < n; i++)
        if (i == 0 || i == n - 1 || (v[i] > v[i - 1]) != (v[i] < v[i + 1]))
            res.push_back(v[i]);
			
    cout << sz(res) << endl;
    for (int i = 0; i < sz(res); ++i)
        cout << res[i] << " ";
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
