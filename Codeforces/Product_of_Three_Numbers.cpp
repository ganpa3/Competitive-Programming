/*
* Problem Statement: https://codeforces.com/contest/1294/problem/C
* Author: ganpa
*/
#include <bits/stdc++.h>

#define sz(x) (int)(x).size()
#define all(v) v.begin(), v.end()
#define endl '\n'
typedef long long int ll;
typedef long double ld;
typedef unsigned long long int ull;
using namespace std;

void solve()
{
    int n;
    cin >> n;
    set<int> used;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0 && !used.count(i))
        {
            used.insert(i);
            n /= i;
            break;
        }
    }
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0 && !used.count(i))
        {
            used.insert(i);
            n /= i;
            break;
        }
    }
    if (sz(used) < 2 || n == 1 || used.count(n))
        cout << "NO\n";
    else
    {
        cout << "YES\n";
        used.insert(n);
        for (auto x : used)
            cout << x << " ";
        cout << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int tc;
    cin >> tc;
    while (tc--)
        solve();
}