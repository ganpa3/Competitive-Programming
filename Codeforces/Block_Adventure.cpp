/*
* Problem Statement: https://codeforces.com/problemset/problem/1200/B 
* Author: ganpa
*/
#include <bits/stdc++.h>

#define endl '\n'
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n, m, k;
        cin >> n >> m >> k;
        vector<int> v(n);
        for (int &it : v)
            cin >> it;
        bool check = true;

        for (int i = 0; i < n - 1; i++)
        {
            int temp = max(0, v[i + 1] - k);
            if (v[i] >= temp)
                m += v[i] - temp;
            else
                m -= temp - v[i];
            if (m < 0)
            {
                check = false;
                break;
            }
        }
        cout << (check ? "YES" : "NO") << endl;
    }
}
