/*
 * Problem Statement: https://codeforces.com/problemset/problem/313/A
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
    int n, a, b;
    cin >> n;
    if (n < 0) {
        a = n / 10;
        b = n % 10;
        n /= 100;
        n *= 10;
        b += n;
        cout << max(a, b);
    } else
        cout << n;
}