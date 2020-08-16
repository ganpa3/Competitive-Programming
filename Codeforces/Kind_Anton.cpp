/*
 * Problem Statement: https://codeforces.com/problemset/problem/1333/B
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
        int n, m1 = 0, m2 = 0, ans = 1;
        cin >> n;
        int a[n], b[n];
        for (int i = 0; i < n; ++i)
            cin >> a[i];
        for (int i = 0; i < n; ++i)
            cin >> b[i];
        if (a[0] != b[0])
            cout << "NO\n";
        else
        {
            for (int i = 1; i < n; ++i)
            {
                if (a[i - 1] == 1)
                    m1 = 1;
                else if (a[i - 1] == -1)
                    m2 = 1;
                if (a[i] > b[i] && m2 != 1)
                {
                    ans = 0;
                    break;
                }
                else if (a[i] < b[i] && m1 != 1)
                {
                    ans = 0;
                    break;
                }
            }
            cout << ((ans) ? "YES\n" : "NO\n");
        }
    }
}