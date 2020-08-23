/*
* Problem Statement: https://codeforces.com/problemset/problem/1355/B
* Author: ganpa
*/
#include <bits/stdc++.h>

#define endl '\n'
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
        int n, groups = 0, curr = 0;
        cin >> n;
        vector<int> v(n);
        for (int &it : v) cin >> it;
        sort(v.begin(), v.end());
        for (int i = 0; i < n; i++) {
            curr++;
            if (curr == v[i]) {
                groups++;
                curr = 0;
            }
        }
        cout << groups << endl;
    }
}
