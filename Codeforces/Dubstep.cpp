/*
 * Problem Statement: https://codeforces.com/problemset/problem/208/A
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
    string s, s2;
    cin >> s;
    s2 = s;
    while (s2.length() != 0) {
        int p = s2.find("WUB");
        if (p == 0)
            s2 = s2.substr(3);
        else if (p != -1) {
            cout << s2.substr(0, p) << " ";
            s2 = s2.substr(p);
        } else {
            cout << s2;
            s2.clear();
        }
    }
}