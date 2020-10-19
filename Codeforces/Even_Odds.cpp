/*
 * Problem Statement: https://codeforces.com/problemset/problem/318/A
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

int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
#endif
    ios_base::sync_with_stdio(false), cin.tie(NULL);
    long long n, k, m;
    cin >> n >> k;
    if (n % 2 == 0)
        m = n / 2;
    else
        m = n / 2 + 1;
    if (k <= m)
        cout << 2 * k - 1;
    else
        cout << 2 * (k - m);
}