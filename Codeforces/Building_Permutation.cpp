/*
* Problem Statement: https://codeforces.com/contest/285/problem/C
* Author: ganpa
*/
#include <bits/stdc++.h>

#define sz(x) (int)(x).size()
#define endl '\n'
typedef long long int ll;
typedef long double ld;
typedef unsigned long long int ull;
using namespace std;

int arr[300001];

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.in", "r", stdin);
#endif
    ios_base::sync_with_stdio(false), cin.tie(0);
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    sort(arr, arr + n);
    ll ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > i)
            ans += arr[i] - i - 1;
        else
            ans += i + 1 - arr[i];
    }
    cout << ans << endl;
}