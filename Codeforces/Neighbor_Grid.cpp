/*
 * Problem Statement: https://codeforces.com/contest/1375/problem/B
 * Author: ganpa
 */
#include <bits/stdc++.h>
using namespace std;

int a[300][300];

int main() {
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int tc;
    cin >> tc;
    while (tc--) {
        int n, m;
        cin >> n >> m;
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++) cin >> a[i][j];
        bool check = true;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                int temp = 4;
                if (!j || j == m - 1 || !i || i == n - 1) temp = 3;
                if ((!j || j == m - 1) && (!i || i == n - 1)) temp = 2;
                if (a[i][j] > temp) {
                    check = false;
                    break;
                }
                a[i][j] = temp;
            }
        }
        cout << (check ? "YES" : "NO") << "\n";
        if (check) {
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < m; j++) {
                    cout << a[i][j] << " ";
                }
                cout << endl;
            }
        }
    }
}
