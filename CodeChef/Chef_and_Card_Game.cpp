/*
 * Problem Statement: https://www.codechef.com/JULY20B/problems/CRDGAME
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

int sum(int &q) {
    int m, s = 0;
    s += (q % 10);
    for (int i = 1; i < 10; i++) {
        m = q / pow(10, i);
        s += (m % 10);
    }
    return s;
}

void ans(int &n) {
    int a, b, s1, s2, c = 0, m = 0;

    for (int i = 0; i < n; i++) {
        cin >> a >> b;
        s1 = sum(a);
        s2 = sum(b);
        if (s1 > s2)
            c++;
        else if (s2 > s1)
            m++;
        else {
            c++;
            m++;
        }
    }
    if (c > m)
        cout << "0 " << c;
    else if (m > c)
        cout << "1 " << m;
    else
        cout << "2 " << c;
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
#endif
    ios_base::sync_with_stdio(false), cin.tie(NULL);
    int tc, z;
    cin >> tc;
    for (int j = 0; j < tc; j++) {
        cin >> z;
        ans(z);
        cout << "\n";
    }
}
