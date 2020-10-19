/*
 * Problem Statement: https://codeforces.com/problemset/problem/1015/B
 * Author: ganpa
 */
#include <bits/stdc++.h>

#define all(v) v.begin(), v.end()
#define sz(x) (int)(x).size()
#define endl '\n'
typedef long long ll;
typedef long double ld;
typedef unsigned long long ull;
using namespace std;

int main() {
    int n;
    cin >> n;
    string s, t;
    cin >> s >> t;
    vector<int> ans;

    for (int i = 0; i < n; i++) {
        if (s[i] == t[i]) continue;
        int pos = -1;
        for (int j = i + 1; j < n; j++) {
            if (s[j] == t[i]) {
                pos = j;
                break;
            }
        }
        if (pos == -1) {
            cout << pos << endl;
            return 0;
        }
        for (int j = pos - 1; j >= i; j--) {
            ans.push_back(j);
            swap(s[j], s[j + 1]);
        }
    }
    cout << sz(ans) << endl;
    for (int &it : ans) cout << it + 1 << " ";
}
