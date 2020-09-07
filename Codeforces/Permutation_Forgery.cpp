/*
* Problem Statement: https://codeforces.com/problemset/problem/1405/A
* Author: ganpa
*/
#include <bits/stdc++.h>

#define all(v) v.begin(), v.end()
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int &it : v)
        cin >> it;
    reverse(all(v));
    for (int i = 0; i < n; i++)
        cout << v[i] << " ";
    cout << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int tc;
    cin >> tc;
    while (tc--)
        solve();
}