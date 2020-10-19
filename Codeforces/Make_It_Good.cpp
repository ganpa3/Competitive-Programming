/*
 * Problem Statement: https://codeforces.com/problemset/problem/1385/C
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
        vector<int> v(n);
        for (int &it : v) cin >> it;
        int pos = n - 1;
        while (pos > 0 && v[pos - 1] >= v[pos]) pos--;
        while (pos > 0 && v[pos - 1] <= v[pos]) pos--;
        cout << pos << endl;
    }
}