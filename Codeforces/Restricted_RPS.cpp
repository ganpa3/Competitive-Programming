/*
* Problem Statement: https://codeforces.com/problemset/problem/1245/B
* Author: ganpa
*/
#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n, a, b, c;
    cin >> n >> a >> b >> c;
    string s, t;
    cin >> s;
    vector<int> cnt(26);
    for (int i = 0; i < n; i++)
        ++cnt[s[i] - 'A'];
    int wins = min(a, cnt['S' - 'A']) + min(b, cnt['R' - 'A']) + min(c, cnt['P' - 'A']);

    if (2 * wins < n)
    {
        cout << "NO\n";
        return;
    }
    cout << "YES\n";
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'R' && b)
        {
            t += 'P';
            b--;
        }
        else if (s[i] == 'P' && c)
        {
            t += 'S';
            c--;
        }
        else if (s[i] == 'S' && a)
        {
            t += 'R';
            a--;
        }
        else
            t += '-';
    }
    for (int i = 0; i < n; i++)
    {
        if (t[i] == '-' && a)
        {
            t[i] = 'R';
            a--;
        }
        else if (t[i] == '-' && b)
        {
            t[i] = 'P';
            b--;
        }
        else if (t[i] == '-' && c)
        {
            t[i] = 'S';
            c--;
        }
    }
    cout << t << endl;
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int tc;
    cin >> tc;
    while (tc--)
        solve();
}