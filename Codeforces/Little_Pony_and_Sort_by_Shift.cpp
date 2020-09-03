/*
* Problem Statement: https://codeforces.com/problemset/problem/454/B
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
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int n;
    cin >> n;
    int a[n], cnt = 0, s = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] < a[i - 1] && i)
            cnt++, s = i;
    }
    if (!cnt)
        cout << 0 << endl;
    else if (cnt == 1 && a[0] >= a[n - 1])
        cout << n - s << endl;
    else
        cout << -1 << endl;
}