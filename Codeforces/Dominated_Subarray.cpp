/*
 * Problem Statement: https://codeforces.com/problemset/problem/1257/C
 * Author: ganpa
 */
#include <bits/stdc++.h>

#define sz(x) (int)(x).size()
#define endl '\n'
using namespace std;

int main() {
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int tc;
    cin >> tc;
    while (tc--) {
        int n;
        cin >> n;
        vector<int> v(n), last(n + 1, -1);
        for (int &it : v) cin >> it;

        int ans = n + 5;
        for (int i = 0; i < n; i++) {
            if (last[v[i]] != -1) ans = min(ans, i - last[v[i]] + 1);
            last[v[i]] = i;
        }
        cout << (ans > n ? -1 : ans) << endl;
    }
}
