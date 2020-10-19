/*
 * Problem Statement: https://codeforces.com/problemset/problem/1/A
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
    long long n, m, a, n1, m1;
    cin >> n >> m >> a;
    if (n % a == 0)
        n1 = n / a;
    else
        n1 = n / a + 1;
    if (m % a == 0)
        m1 = m / a;
    else
        m1 = m / a + 1;
    cout << n1 * m1;
}
