/*
 * Problem Statement: https://www.codechef.com/LRNDSA01/problems/MULTHREE
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
        ll k, a, b;
        cin >> k >> a >> b;
        ll p = a + b;
        if (k > 3) {
            ll sum = (2 * p) % 10 + (4 * p) % 10 + (8 * p) % 10 + (6 * p) % 10;
            ll n = p + (p % 10);  // sum of first threee digits
            ll m = (k - 3) % 4;
            for (int i = 1; i <= m; ++i) n += ((p * (ll)pow(2, i)) % 10);
            n += (((k - 3) / 4) * sum);
            cout << ((n % 3 == 0) ? "YES" : "NO") << "\n";
        } else {
            if (k == 2)
                cout << ((p % 3 == 0) ? "YES" : "NO") << "\n";
            else {
                int n = p + (p % 10);
                cout << ((n % 3 == 0) ? "YES" : "NO") << "\n";
            }
        }
    }
}
