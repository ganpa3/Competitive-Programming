/*
 * Problem Statement: https://codeforces.com/problemset/problem/1296/B
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
        int n, m, s = 0;
        cin >> n;

        while (n != 0) {
            if (n > 10)
                m = n - (n % 10);
            else
                m = n;
            n -= m;
            s += m;
            n += (m / 10);
        }
        cout << s << "\n";
    }
}