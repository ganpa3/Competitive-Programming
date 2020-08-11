/*
 * Problem Statement: https://codeforces.com/problemset/problem/339/B
 * Author: ganpa
*/
#include <algorithm>
#include <array>
#include <cassert>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <deque>
#include <iomanip>
#include <iostream>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <tuple>
#include <unordered_map>
#include <unordered_set>
#include <vector>

typedef long long ll;

using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
#endif
    ios_base::sync_with_stdio(false), cin.tie(NULL);
    ll n, m, c = 1, d, a = 0;
    cin >> n >> m;
    vector<ll> v(m);
    for (ll i = 0; i < m; i++)
        cin >> v[i];
    for (ll i = 0; i < m; i++)
    {
        d = v[i];
        if (c <= d)
            a += d - c;
        else
            a += n - c + d;
        c = v[i];
    }
    cout << a;
}