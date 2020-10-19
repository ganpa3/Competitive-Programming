/*
 * Problem Statement: https://codeforces.com/problemset/problem/282/A
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
    int tc, x = 0;
    cin >> tc;
    string s;
    for (int i = 0; i < tc; i++) {
        cin >> s;
        if (s == "X++" || s == "++X")
            x++;
        else
            x--;
    }
    cout << x;
}
