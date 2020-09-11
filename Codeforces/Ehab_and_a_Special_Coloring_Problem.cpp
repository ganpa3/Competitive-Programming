/*
* Problem Statement: https://codeforces.com/problemset/problem/1174/C
* Author: ganpa
*/
#include <bits/stdc++.h>

#define sz(x) (int)(x).size()
#define all(v) v.begin(), v.end()
#define endl '\n'
typedef long long ll;
typedef long double ld;
typedef unsigned long long ull;
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int n;
    cin >> n;
    vector<int> v(n + 5);
    int ith_prime = 0;
    for (int i = 2; i <= n; i++)
    {
        if (!v[i])
        {
            ith_prime++;
            for (int j = i; j <= n; j += i)
                v[j] = ith_prime;
        }
    }
    for (int i = 2; i <= n; i++)
        cout << v[i] << " ";
    cout << endl;
}