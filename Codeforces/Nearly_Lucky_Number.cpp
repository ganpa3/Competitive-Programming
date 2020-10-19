/*
 * Problem Statement: https://codeforces.com/problemset/problem/110/A
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
    int m = 0;
    string n;
    cin >> n;
    for (char i : n) {
        if (i == '4' || i == '7') m++;
    }
    if (m == 4 || m == 7)
        cout << "YES";
    else
        cout << "NO";
}