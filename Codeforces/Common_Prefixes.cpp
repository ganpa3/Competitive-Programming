/*
 * Problem Statement: https://codeforces.com/problemset/problem/1384/A
 * Author: ganpa
 */
#include <bits/stdc++.h>

#define endl '\n'
using namespace std;

int main() {
    ios_base::sync_with_stdio(false), cin.tie(0);
    int tc;
    cin >> tc;
    while (tc--) {
        int n;
        cin >> n;
        string s(100, 'a');
        cout << s << endl;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            s[x] = s[x] == 'a' ? 'b' : 'a';
            cout << s << endl;
        }
    }
}