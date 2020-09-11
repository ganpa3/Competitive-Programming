/*
* Problem Statement: https://www.codechef.com/SEPT20B/problems/ADAMAT
* Author: ganpa
*/
#include <bits/stdc++.h>

#define all(v) v.begin(), v.end()
using namespace std;

int a[100][100];

void solve()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> a[i][j];
    int cnt = 0;
    vector<int> v;
    bool check = 1;
    if (a[0][1] == 2)
        check = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[0][i] == i + 1)
            v.push_back(1);
        else
        {
            cnt++;
            if (v.empty() || v.back() != 0)
                v.push_back(0);
        }
    }
    if (cnt == n - 1)
        cout << 1 << endl;
    else
        cout << count(all(v), 0) * 2 - (check ? 1 : 0) << endl;
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0);
    int tc;
    cin >> tc;
    while (tc--)
        solve();
}
