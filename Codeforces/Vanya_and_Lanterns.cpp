/*
 * Problem Statement: https://codeforces.com/problemset/problem/492/B
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
    int n, l;
    cin >> n >> l;
    double a, b, m = 0;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    sort(v.begin(), v.end());
    a = v[0];
    b = l - v[n - 1];
    if (n != 1)
    {
        vector<int> v1;
        for (int i = 1; i < n; i++)
        {
            v1.push_back(v[i] - v[i - 1]);
        }
        m = (*max_element(v1.begin(), v1.end())) / (double)2;
    }
    double z = max(max(a, b), m);
    cout << fixed << setprecision(10) << z;
}