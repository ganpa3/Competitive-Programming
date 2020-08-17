/*
* Problem Statement: https://codeforces.com/problemset/problem/1324/B
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
    int tc;
    scanf("%d", &tc);
    while (tc--)
    {
        int n, m = 0;
        scanf("%d", &n);
        int arr[n];
        for (int i = 0; i < n; ++i)
            scanf("%d", &arr[i]);
        for (int i = 0; i < n - 2; ++i)
        {
            for (int j = i + 2; j < n; ++j)
            {
                if (arr[i] == arr[j])
                    m = 1;
            }
        }
        puts(m == 1 ? "YES" : "NO");
    }
}