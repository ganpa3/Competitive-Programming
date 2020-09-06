/*
* Problem Statement: https://codeforces.com/problemset/problem/1140/B
* Author: ganpa
*/
#include <bits/stdc++.h>

#define endl '\n'
using namespace std;

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int a = 0, b = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '>')
        {
            a = i;
            break;
        }
    }
    for (int i = n - 1; i >= 0; i--)
    {
        if (s[i] == '<')
        {
            b = i;
            break;
        }
    }
    cout << min(a, n - b - 1) << endl;
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int tc;
    cin >> tc;
    while (tc--)
        solve();
}