/*
 * Problem Statement: https://codeforces.com/problemset/problem/96/A
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
    string s, s1;
    cin >> s;
    int n = s.length() - 7;
    int ans = 0;
    for (int i = 0; i <= n; i++) {
        s1 = s.substr(i, 7);
        if (s1[0] == '0' && s1.find('1') == string::npos) ans = 1;
        if (s1[0] == '1' && s1.find('0') == string::npos) ans = 1;
    }
    if (ans)
        cout << "YES";
    else
        cout << "NO";
}