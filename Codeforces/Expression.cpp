/*
 * Problem Statement: https://codeforces.com/problemset/problem/479/A
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
    int a, b, c;
    cin >> a >> b >> c;
    vector<int> v(6);
    v[0] = a * b * c;
    v[1] = a + b + c;
    v[2] = (a + b) * c;
    v[3] = a * (b + c);
    v[4] = a + b * c;
    v[5] = a * b + c;
    cout << *max_element(v.begin(), v.end());
}