/*
 * Problem Statement: https://codeforces.com/problemset/problem/1133/B
 * Author: ganpa
 */
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int n, k;
    cin >> n >> k;
    vector<int> cnt(k);
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        ++cnt[x % k];
    }
    int ans = cnt[0] / 2;
    if (k % 2 == 0) ans += cnt[k / 2] / 2;
    for (int i = 1; i < (k + 1) / 2; i++) {
        int j = k - i;
        ans += min(cnt[i], cnt[j]);
    }
    cout << ans * 2 << endl;
}