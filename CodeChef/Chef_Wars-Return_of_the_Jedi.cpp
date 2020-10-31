/*
 * Problem Statement: https://www.codechef.com/AUG20B/problems/CHEFWARS
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
        ll h, p;
        cin >> h >> p;
        while (p != 0) {
            h -= p;
            p /= 2;
            if (h <= 0) break;
        }
        cout << ((h <= 0) ? "1" : "0") << endl;
    }
}
