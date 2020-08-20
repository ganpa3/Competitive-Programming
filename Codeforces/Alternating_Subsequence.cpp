/*
* Problem Statement: https://codeforces.com/problemset/problem/1343/C
* Author: ganpa
*/
#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
#endif
    ios_base::sync_with_stdio(false), cin.tie(0);
    auto check = [&](int x) {
        if (x > 0)
            return 1;
        else
            return -1;
    };
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int &it : v)
            cin >> it;
        ll sum = 0;
        for (int i = 0; i < n; i++)
        {
            int j = i;
            int curr = v[i];
            while (j < n && check(v[i]) == check(v[j]))
            {
                curr = max(curr, v[j]);
                j++;
            }
            sum += curr;
            i = j - 1;
        }
        cout << sum << "\n";
    }
}