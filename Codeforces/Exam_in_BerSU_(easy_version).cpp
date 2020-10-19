/*
 * Problem Statement: https://codeforces.com/problemset/problem/1185/C1
 * Author: ganpa
 */
#include <bits/stdc++.h>

#define endl '\n'
using namespace std;

int main() {
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int n, M;
    cin >> n >> M;
    vector<int> v(n);
    for (int &it : v) cin >> it;
    int sum = 0, i = 0;
    while (i < n && sum + v[i] <= M) {
        sum += v[i];
        i++;
    }
    if (i == n) {
        while (i--) cout << "0 ";
    } else {
        for (int z = 0; z < i; z++) cout << "0 ";
        for (; i < n; i++) {
            sort(v.begin(), v.begin() + i);
            sum = v[i];
            int j = 0;
            while (j < i && sum + v[j] <= M) {
                sum += v[j];
                j++;
            }
            cout << i - j << " ";
        }
        cout << endl;
    }
}