/*
 * Problem Statement: https://codeforces.com/problemset/problem/387/B
 * Author: ganpa
 */
#include <bits/stdc++.h>

using namespace std;

const int MAX = 3005;
int a[MAX], b[MAX];

void solve() {
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < m; i++) cin >> b[i];
    int temp = min(n, m);
    for (int i = temp; i >= 0; i--) {
        bool check = true;
        for (int j = 0; j < i; j++) {
            if (a[j] > b[m - i + j]) check = false;
        }
        if (check) {
            cout << n - i << endl;
            return;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    solve();
}
