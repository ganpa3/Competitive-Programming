/*
* Problem Statement: https://codeforces.com/problemset/problem/1392/C 
* Author: ganpa
*/
#include <bits/stdc++.h>

#define sz(x) (int)(x).size()
#define endl '\n'
typedef long long int ll;
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0);
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int &it : a)
            cin >> it;
        a.resize(unique(a.begin(), a.end()) - a.begin());
        int l = sz(a);
        ll ans = 0;
        for (int i = 1; i < l; i++)
        {
            if (a[i] < a[i - 1])
                ans += a[i - 1] - a[i];
        }
        cout << ans << endl;
    }
}
