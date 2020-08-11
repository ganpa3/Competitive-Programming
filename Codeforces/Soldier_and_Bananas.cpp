/*
 * Problem Statement: https://codeforces.com/problemset/problem/546/A
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
    int k, n, w;
    cin >> k >> n >> w;
    int m = w * (w + 1) / 2;
    m *= k;
    if (w == 1 && n < k)
        cout << k - n;
    else if (m > n)
    {
        cout << m - n;
    }
    else
        cout << 0;
}