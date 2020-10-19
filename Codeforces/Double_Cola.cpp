/*
 * Problem Statement: https://codeforces.com/contest/82/problem/A
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
    int n, ans = 0, i = 0;
    cin >> n;
    vector<string> v = {"Sheldon", "Leonard", "Penny", "Rajesh", "Howard"};
    while (true) {
        ans += 5 * pow(2, i);
        if (ans >= n) break;
        i++;
    }
    int j = 0;
    while (true) {
        ans -= pow(2, i);
        if (n > ans) break;
        j++;
    }
    cout << v[4 - j] << "\n";
}
