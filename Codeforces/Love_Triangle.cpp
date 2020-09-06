/*
* Problem Statement: https://codeforces.com/problemset/problem/939/A 
* Author: ganpa
*/
#include <bits/stdc++.h>

#define all(v) v.begin(), v.end()
#define sz(x) (int)(x).size()
#define endl '\n'
typedef long long ll;
typedef long double ld;
typedef unsigned long long ull;
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int n, ans = 0;
    cin >> n;
    vector<int> v(n);
    for(int &it:v) cin >> it;
    for(int i = 0; i < n; i++)
    {
        int a = v[i];
        int b = v[a - 1];
        int c = v[b - 1];
        if(v[c - 1] == a) 
        {
            ans = 1;
            break;
        }
    }
    puts(ans ? "YES" : "NO");
}
