/*
 * Problem Statement: https://codeforces.com/problemset/problem/158/B
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
    int n, m, d = 0, ans = 0;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++) {
        cin >> m;
        v.push_back(m);
    }
    int n1 = count(v.begin(), v.end(), 1);
    int n2 = count(v.begin(), v.end(), 2);
    int n3 = count(v.begin(), v.end(), 3);
    int n4 = count(v.begin(), v.end(), 4);
    n2 *= 2;
    ans += n3 + n4 + (n2 / 4);
    d += n2 % 4;
    if (n1 > n3) d += n1 - n3;
    if (d % 4 == 0)
        ans += d / 4;
    else
        ans += (d / 4) + 1;
    cout << ans;
}