/*
* Problem Statement: https://codeforces.com/contest/1214/problem/C
* Author: ganpa
*/
#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int ans = 1, temp = 0, c = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '(')
        {
            temp++;
            c++;
        }
        else
        {
            temp--;
            c--;
        }
        if (temp < -1)
            ans = 0;
    }
    if (n % 2 || c || !ans)
        cout << "NO\n";
    else
        cout << "YES\n";
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    solve();
}