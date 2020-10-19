/*
 * Problem Statement: https://codeforces.com/problemset/problem/1369/B
 * Author: ganpa
 */
#include <bits/stdc++.h>

typedef long long int ll;
typedef long double ld;
typedef unsigned long long int ull;

using namespace std;

bool check(string s) {
    for (int i = 1; i < s.length(); i++) {
        if (s[i] == '0' && s[i - 1] == '1') return true;
    }
    return false;
}
// break the array into three parts. First part consists of 0, middle part
// consists of 1 followed by 0 and third part consists of 1.
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
        string s, ans;
        cin >> s;
        int l = s.length();
        for (int i = 0; i < l; i++) {
            if (s[i] == '0')
                ans += '0';
            else
                break;
        }
        if (check(s)) ans += '0';
        for (int i = l - 1; i >= 0; i--) {
            if (s[i] == '1')
                ans += '1';
            else
                break;
        }
        cout << ans << endl;
    }
}