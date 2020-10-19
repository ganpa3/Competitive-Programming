/*
 * Problem Statement: https://codeforces.com/problemset/problem/71/A
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
    int n, l;
    cin >> n;
    string s;
    for (int i = 0; i < n; i++) {
        cin >> s;
        l = s.length();
        if (l > 10) {
            cout << s[0] << l - 2 << s[l - 1] << "\n";
        } else {
            cout << s << "\n";
        }
    }
}
