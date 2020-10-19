/*
 * Problem Statement: https://codeforces.com/problemset/problem/1374/B
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

ll ans(ll &n) {
    ll m = 0;
    while (n != 0) {
        if (n % 6 == 0)
            n /= 6;
        else
            n *= 2;
        m++;
        if (n == 1) {
            cout << m << "\n";
            break;
        }
    }
    if (n == 0) cout << -1 << "\n";
    return 0;
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
#endif
    ios_base::sync_with_stdio(false), cin.tie(NULL);
    ll tc, a;
    cin >> tc;
    for (ll i = 0; i < tc; i++) {
        cin >> a;
        if (a == 1)
            cout << 0 << "\n";
        else
            ans(a);
    }
}