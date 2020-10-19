/*
 * Problem Statement: https://codeforces.com/problemset/problem/1339/B
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
        vector<int> v(n), v1;
        for (int &it : v) cin >> it;
        sort(v.begin(), v.end());
        int a = 0, b = n - 1;
        while (a <= b) {
            v1.push_back(v[a++]);
            if (b >= a) v1.push_back(v[b--]);
        }
        reverse(v1.begin(), v1.end());
        for (int i : v1) cout << i << " ";
        cout << endl;
    }
}