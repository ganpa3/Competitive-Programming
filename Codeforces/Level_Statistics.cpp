/*
 * Problem Statement: https://codeforces.com/problemset/problem/1334/A
 * Author: ganpa
 */
#include <bits/stdc++.h>

typedef long long int ll;
typedef long double ld;
typedef unsigned long long int ull;

using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
#endif
    ios_base::sync_with_stdio(false), cin.tie(0);
    int tc;
    cin >> tc;
    while (tc--) {
        int n, t1 = 0, t2 = 0;
        cin >> n;
        bool flag = true;
        for (int i = 0; i < n; i++) {
            int p, c;
            cin >> p >> c;
            if (c - t2 > p - t1 || t1 > p || t2 > c) flag = false;
            t1 = p, t2 = c;
        }
        puts(flag ? "YES" : "NO");
    }
}