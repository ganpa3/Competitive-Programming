/*
 * Problem Statement: https://codeforces.com/problemset/problem/118/A
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

void con(string &ss) {
    int q = ss.length();
    for (int i = 0; i < q; i++) {
        if (ss[i] >= 'A' && ss[i] <= 'Z') {
            ss[i] += 32;
        }
    }
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
#endif
    ios_base::sync_with_stdio(false), cin.tie(NULL);
    string str;
    cin >> str;
    string v = "AEIOUYaeiouy";
    string str1 = str;
    int n = str1.length();
    for (char i : str1) {
        size_t p = v.find(i);
        int pp = str.find(i);
        if (p != string::npos) {
            str.erase(str.begin() + pp);
        }
    }
    str1 = str;
    int m = str1.length();
    for (int i = 0; i < m; i++) {
        str.insert((i * 2), ".");
    }
    con(str);
    cout << str;
}
