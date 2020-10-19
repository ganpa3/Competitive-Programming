/*
 * Problem Statement: https://codeforces.com/problemset/problem/1029/B
 * Author: ganpa
 */
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int n;
    cin >> n;
    vector<int> v(n);
    for (int &it : v) cin >> it;

    int ans = 1, temp = 1;
    for (int i = 1; i < n; i++) {
        if (v[i] > v[i - 1] * 2) {
            ans = max(ans, temp);
            temp = 0;
        }
        temp++;
    }
    cout << max(ans, temp) << endl;
}
