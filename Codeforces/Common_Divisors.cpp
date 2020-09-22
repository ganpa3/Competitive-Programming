/*
* Problem Statement: https://codeforces.com/problemset/problem/1203/C
* Author: ganpa
*/
#include <bits/stdc++.h>

#define sz(x) (int)(x).size()
#define all(v) v.begin(), v.end()
#define endl '\n'
typedef long long ll;
typedef long double ld;
typedef unsigned long long ull;
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int n;
    cin >> n;
    ll g = 0;
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        g = __gcd(g, x);
    }
    int ans = 0;
    for (ll i = 1; i * i <= g; i++)
    {
        if (g % i == 0)
        {
            ans++;
            if (i != g / i)
                ans++;
        }
    }
    cout << ans << endl;
}
