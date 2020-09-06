/*
* Problem Statement: https://codeforces.com/problemset/problem/1102/C
* Author: ganpa
*/
#include <bits/stdc++.h>

#define all(v) v.begin(), v.end()
using namespace std;

void solve()
{
    int n, x, y;
    cin >> n >> x >> y;
    vector<int> v(n);
    for (int &it : v)
        cin >> it;
    if (x > y)
        cout << n << endl;
    else
    {
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            if (v[i] <= x)
                cnt++;
        }
        cout << (cnt + 1) / 2 << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    solve();
}