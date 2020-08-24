/*
* Problem Statement: https://codeforces.com/problemset/problem/1213/C
* Author: ganpa
*/
#include <bits/stdc++.h>

#define sz(x) (int)(x).size()
#define endl '\n'
typedef long long int ll;
typedef long double ld;
typedef unsigned long long int ull;
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
#endif
    ios_base::sync_with_stdio(false), cin.tie(0);
    int tc;
    cin >> tc;
    while (tc--)
    {
        ll n, m;
        cin >> n >> m;
        if (m > n)
            cout << 0 << endl;
        else if (n == m)
            cout << m % 10 << endl;
        else
        {
            int x = m % 10;
            vector<int> a(10);
            for (int i = 0; i < 10; i++)
                a[i] = (x * (i + 1)) % 10;
            ll z = n / m;
            ll times = z / 10;
            ll sum = accumulate(a.begin(), a.end(), 0) * times;
            for (int i = 0; i < z % 10; i++)
                sum += a[i];
            cout << sum << endl;
        }
    }
}