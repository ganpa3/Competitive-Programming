/*
* Problem Statement: https://codeforces.com/problemset/problem/1305/B
* Author: ganpa
*/
#include <bits/stdc++.h>

#define sz(x) (int)(x).size()
#define all(v) v.begin(), v.end()
#define endl '\n'
using namespace std;

void solve()
{
    string s;
    cin >> s;
    int size = sz(s);
    vector<int> ll, rr;
    int l = 0, r = size - 1;
    
    while (l < r)
    {
        while (l < size && s[l] == ')')
            l++;
        while (r >= 0 && s[r] == '(')
            r--;
        if (l < size && r >= 0 && l < r)
        {
            ll.push_back(l + 1);
            rr.push_back(r + 1);
            l++;
            r--;
        }
    }
    if (ll.empty())
    {
        cout << "0\n";
        return;
    }
    cout << "1\n";
    cout << 2 * sz(ll) << endl;
    for (auto &it : ll)
        cout << it << " ";
    reverse(all(rr));
    for (auto &it : rr)
        cout << it << " ";
    cout << endl;
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    solve();
}
