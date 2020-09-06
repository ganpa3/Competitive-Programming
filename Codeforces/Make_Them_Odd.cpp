/*
* Problem Statement: https://codeforces.com/contest/1277/problem/B
* Author: ganpa
*/
#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n;
    cin >> n;
    set<int> s;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        s.insert(x);
    }
    int ans = 0;
    while (!s.empty())
    {
        int temp = *s.rbegin();
        if (temp % 2)
            s.erase(temp);
        while (temp % 2 == 0)
        {
            s.erase(temp);
            temp /= 2;
            ans++;
        }
    }
    cout << ans << endl;
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int tc;
    cin >> tc;
    while (tc--)
        solve();
}