/*
 * Problem Statement: https://codeforces.com/problemset/problem/1272/C
 * Author: ganpa
 */
#include <bits/stdc++.h>

typedef long long int ll;
using namespace std;

int main() {
    ios_base::sync_with_stdio(false), cin.tie(0);
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    set<char> st;
    for (int i = 0; i < k; i++) {
        char c;
        cin >> c;
        st.insert(c);
    }
    for (int i = 0; i < n; i++) s[i] = (st.find(s[i]) == st.end()) ? '0' : '1';
    ll ans = 0;
    for (int i = 0; i < n; i++) {
        int j = i;
        while (s[j] == '1' && j < n) j++;
        ll l = j - i;
        ans += l * (l + 1) / 2;
        i = j;
    }
    cout << ans << endl;
}