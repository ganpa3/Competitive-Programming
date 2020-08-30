/*
* Problem Statement: https://codeforces.com/problemset/problem/1131/C 
* Author: ganpa
*/
#include <bits/stdc++.h>

#define sz(x) (int)(x).size()
#define endl '\n'
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0);
    int n;
    cin >> n;
    vector<int> a(n), f, b;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    if (n == 1)
        cout << a[0] << endl;
    else
    {
        sort(a.begin(), a.begin() + n);
        for (int i = 0; i < n; i++)
        {
            if (i % 2)
                b.push_back(a[i]);
            else
                f.push_back(a[i]);
        }
        for (int i = 0; i < sz(f); i++)
            cout << f[i] << " ";
        for (int i = sz(b) - 1; i >= 0; i--)
            cout << b[i] << " ";
    }
}
