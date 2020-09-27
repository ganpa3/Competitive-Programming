/*
* Problem Statement: https://codeforces.com/problemset/problem/1194/C
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
    string s, t, p;
    cin >> s >> t >> p;
    bool ok = true;
    vector<int> cnts(26), cntt(26), cntp(26);
    for (int i = 0; i < sz(s); i++)
        cnts[s[i] - 'a']++;
    for (int i = 0; i < sz(t); i++)
        cntt[t[i] - 'a']++;
    for (int i = 0; i < sz(p); i++)
        cntp[p[i] - 'a']++;
    for (int i = 0; i < 26; i++)
        if (cnts[i] > cntt[i] || cnts[i] + cntp[i] < cntt[i])
            ok = false;

    int j = 0;
    for (int i = 0; i < sz(t); i++)
        if (t[i] == s[j])
            j++;
    if (j < sz(s))
        ok = false;
    puts(ok ? "YES" : "NO");
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int tc;
    cin >> tc;
    while (tc--)
        solve();
}
