/*
* Problem Statement: https://codeforces.com/problemset/problem/1409/C
* Author: ganpa
*/
#include <bits/stdc++.h>

#define endl '\n'
using namespace std;

void solve()
{
    int n, x, y;
    cin >> n >> x >> y;
    for (int i = 1; i <= y - x; i++)
    {
        if ((y - x) % i || (y - x) / i > n - 1)
            continue;
        int k = n;
        int num = y;
        while (k>0 && num>0)
        {
            cout << num << " ";
            num -= i;
            k--;
        }
        num = y;
        while (k>0)
        {
            num += i;
            cout << num << " ";
            k--;
        }
        break;
    }
    cout << endl;
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int tc;
    cin >> tc;
    while (tc--)
        solve();
}
