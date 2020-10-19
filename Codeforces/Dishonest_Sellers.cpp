/*
 * Problem Statement: https://codeforces.com/problemset/problem/779/C
 * Author: ganpa
 */
#include <bits/stdc++.h>

using namespace std;

const int MAX = 200005;
int a[MAX], b[MAX];
pair<int, pair<int, int>> p[MAX];

int main() {
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int n, k;
    cin >> n >> k;
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];
    for (int i = 0; i < n; i++) {
        p[i].first = a[i] - b[i];
        p[i].second.first = a[i], p[i].second.second = b[i];
    }
    sort(p, p + n);
    int j = 0, sum = 0;
    while ((k || p[j].first <= 0) && j < n) {
        sum += p[j].second.first;
        ++j;
        if (k > 0) k--;
    }
    while (j < n) {
        sum += p[j].second.second;
        j++;
    }
    cout << sum << endl;
}
