/*
 * Problem Statement: https://codeforces.com/problemset/problem/1328/C
 * Author: ganpa
 */
#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
#endif
    ios_base::sync_with_stdio(false), cin.tie(0);
    int tc;
    cin >> tc;
    while (tc--) {
        int n;
        cin >> n;
        string x;
        cin >> x;
        string a = "1", b = "1";
        for (int i = 1; i < n; ++i) {
            if (x[i] == '0')
                a += '0', b += '0';
            else if (x[i] == '1') {
                if (a < b)
                    a += '1', b += '0';
                else
                    a += '0', b += '1';
            } else if (x[i] == '2') {
                if (a < b)
                    a += '2', b += '0';
                else
                    a += '1', b += '1';
            }
        }
        cout << a << "\n" << b << "\n";
    }
}