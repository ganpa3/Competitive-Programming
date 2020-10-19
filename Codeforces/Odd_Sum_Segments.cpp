/*
 * Problem Statement: https://codeforces.com/problemset/problem/1196/B
 * Author: ganpa
 */
#include <bits/stdc++.h>

#define sz(x) (int)(x).size()
#define endl '\n'
typedef long long int ll;
using namespace std;

int a[200001];

int main() {
    ios_base::sync_with_stdio(false), cin.tie(0);
    int tc;
    cin >> tc;
    while (tc--) {
        int n, k;
        cin >> n >> k;
        for (int i = 0; i < n; i++) cin >> a[i];
        vector<int> pos;
        ll sum = 0;
        for (int i = 0; i < n; i++) {
            if (k == 1) {
                while (i < n) {
                    sum += a[i];
                    i++;
                }
                pos.push_back(n);
                break;
            } else if (a[i] % 2) {
                pos.push_back(i + 1);
                k--;
            }
        }
        if (sum % 2) {
            cout << "YES" << endl;
            for (int i = 0; i < sz(pos); i++) cout << pos[i] << " ";
            cout << endl;
        } else
            cout << "NO" << endl;
    }
}
