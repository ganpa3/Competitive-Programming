/*
* Problem Statement: https://codeforces.com/problemset/problem/271/B
* Author: ganpa
*/
#include <bits/stdc++.h>

#define sz(x) (int)(x).size()
#define all(v) v.begin(), v.end()
#define endl '\n'
#define int long long
using namespace std;

const int MAX = 100005;
int a[1000][1000];
vector<int> is_prime(MAX, 1);
void sieve()
{
    is_prime[0] = is_prime[1] = 0;
    for (int i = 2; i * i < MAX; i++)
        for (int j = i * i; j < MAX; j += i)
            is_prime[j] = 0;
}

int32_t main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    sieve();
    int n, m, ans = MAX;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> a[i][j];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (is_prime[a[i][j]])
            {
                a[i][j] = 0;
                continue;
            }
            int k = a[i][j];
            while (k < MAX && !is_prime[k])
                k++;
            a[i][j] = k - a[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        int c = 0;
        for (int j = 0; j < m; j++)
            c += a[i][j];
        ans = min(ans, c);
    }
    for (int i = 0; i < m; i++)
    {
        int r = 0;
        for (int j = 0; j < n; j++)
            r += a[j][i];
        ans = min(ans, r);
    }
    cout << ans << endl;
}
