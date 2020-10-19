/*
 * Problem Statement: https://codeforces.com/problemset/problem/266/B
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
    int n, t, l;
    cin >> n >> t;
    string s;
    cin >> s;
    l = s.length();
    vector<int> v;
    for (int i = 0; i < t; i++) {
        for (int j = 0; j < l - 1; j++) {
            if (s[j] == 'B' && s[j + 1] == 'G') v.push_back(j);
        }
        for (int g : v) swap(s[g], s[g + 1]);
        v.clear();
    }
    cout << s;
}