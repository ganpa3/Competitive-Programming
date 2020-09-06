/*
* Problem Statement: https://codeforces.com/problemset/problem/961/B
* Author: ganpa
*/
#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> v1(n), v2(n);
    for (int i = 0; i < n; i++)
        cin >> v1[i];
    for (int i = 0; i < n; i++)
        cin >> v2[i];

    int sum = 0;
    vector<int> pr(n);
    for (int i = 0; i < n; i++)
    {
        if (i)
            pr[i] += pr[i - 1];
        if (v2[i])
            sum += v1[i];
        else
            pr[i] += v1[i];
    }
    int temp = 0;
    for (int i = 0; i < n; i++)
        temp = max(temp, pr[i] - (i >= k ? pr[i - k] : 0));
    cout << sum + temp << endl;
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    solve();
}
