/*
* Problem Statement: https://codeforces.com/problemset/problem/1405/B
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
    int n;
    cin >> n;
    vector<int> v(n);
    for (int &it : v)
        cin >> it;

    ll ans = 0, sum=0;
    for (int i = n - 1; i >= 0; i--)
        {
            sum += v[i];
            ans = max(sum, ans);
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