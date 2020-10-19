/*
 * Problem Statement: https://codeforces.com/problemset/problem/1354/B
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
        string s;
        cin >> s;
        vector<pair<char, int> > v;
        for (char i : s) {
            if (v.empty() || v.back().first != i)
                v.push_back(make_pair(i, 1));
            else
                v.back().second++;
        }
        int m = v.size(), ans = s.size() + 1;
        for (int i = 1; i < m - 1; i++) {
            if (v[i - 1].first != v[i + 1].first)
                ans = min(ans, v[i].second + 2);
        }
        if (ans == s.size() + 1)
            cout << 0 << endl;
        else
            cout << ans << endl;
    }
}