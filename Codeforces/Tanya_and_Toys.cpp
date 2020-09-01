/*
* Problem Statement: https://codeforces.com/problemset/problem/659/C
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

const int MAX = 1000000000;
int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int n, m;
    cin >> n >> m;
    vector<int> v(n), ans;
    for (int i = 0; i < n; i++)
        cin >> v[i];
    sort(all(v));
    int sum = 0, j = 0;
    for (int i = 1; i <= MAX; i++)
    {
        if (i == v[j])
        {
            if (j < n - 1)
                j++;
            continue;
        }
        if (sum + i <= m)
            sum += i;
        else
            break;
        ans.push_back(i);
    }
    cout << sz(ans) << endl;
    for (auto it : ans)
        cout << it << " ";
}