/*
* Problem Statement: https://codeforces.com/problemset/problem/1335/C
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
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        vector<int> v1(n + 1);
        for (int i = 0; i < n; ++i)
        {
            int x;
            cin >> x;
            ++v1[x];
        }
        int max_frequency = *max_element(v1.begin(), v1.end());
        int unique = n + 1 - count(v1.begin(), v1.end(), 0);
        if (unique == max_frequency)
            cout << unique - 1 << "\n";
        else
            cout << min(unique, max_frequency) << "\n";
    }
}
