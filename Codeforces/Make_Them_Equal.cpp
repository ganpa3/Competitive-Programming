/*
 * Problem Statement: https://codeforces.com/problemset/problem/1154/B
 * Author: ganpa
 */
#include <bits/stdc++.h>

#define sz(x) (int)(x).size()
#define endl '\n'
using namespace std;

int main() {
    ios_base::sync_with_stdio(false), cin.tie(0);
    int n;
    cin >> n;
    set<int> s;
    for (int i = 0; i <= n; i++) {
        int x;
        cin >> x;
        s.insert(x);
    }
    int l = sz(s);
    if (l == 1)
        cout << 0 << endl;
    else if (l == 2) {
        int avg = (*s.begin() + *(++s.begin()));
        if (avg & 1)
            cout << abs(*s.begin() - *(++s.begin())) << endl;
        else
            cout << abs(*s.begin() - avg / 2) << endl;
    } else if (l == 3) {
        vector<int> v;
        for (auto itr = s.begin(); itr != s.end(); ++itr) v.push_back(*itr);
        sort(v.begin(), v.end());
        int sum = v[0] + v[2];
        if (sum % 2 == 0 && sum / 2 == v[1])
            cout << v[2] - v[1] << endl;
        else
            cout << -1 << endl;
    } else
        cout << -1 << endl;
}
