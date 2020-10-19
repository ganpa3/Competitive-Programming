/*
 * Problem Statement: https://codeforces.com/problemset/problem/25/A
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
    int n, a, b, m;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) cin >> arr[i];
    vector<int> v;
    for (int i : arr) v.push_back(i % 2);
    a = count(v.begin(), v.end(), 1);
    b = count(v.begin(), v.end(), 0);
    if (a > b)
        m = 0;
    else
        m = 1;
    vector<int>::iterator p = find(v.begin(), v.end(), m);
    p++;
    cout << p - v.begin();
}