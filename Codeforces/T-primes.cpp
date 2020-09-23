/*
* Problem Statement: https://codeforces.com/problemset/problem/230/B
* Author: ganpa
*/
#include <bits/stdc++.h>

#define sz(x) (int)(x).size()
#define all(v) v.begin(), v.end()
#define endl '\n'
#define int long long
using namespace std;

const int MAX = 1000002;
vector<int> is_prime(MAX, 1);

void sieve()
{
    is_prime[0] = is_prime[1] = 0;
    for (int i = 2; i * i < MAX; i++)
        for (int j = i * i; j < MAX; j += i)
            is_prime[j] = 0;
}

void solve()
{
    set<int> s;
    for (int i = 2; i < MAX; i++)
        if (is_prime[i])
            s.insert(i * i);

    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (s.count(x))
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}

int32_t main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    sieve();
    solve();
}
