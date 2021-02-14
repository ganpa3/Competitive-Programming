/*
 * Problem Statement: https://codeforces.com/problemset/problem/1327/A
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
    int tc;
    cin >> tc;
    while (tc--) {
        int n, k;
        cin >> n >> k;
        // both n and k should either be even or odd and k shoud not exceed n/k
        bool check = ((n % 2 == 0 && k % 2 == 0) || (n % 2 != 0 && k % 2 != 0)) && (n / k >= k);
        cout << (check ? "YES" : "NO") << "\n";
    }
}