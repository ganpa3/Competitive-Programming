/*
 * Problem Statement: https://www.codechef.com/SEPT20B/problems/TREE2
 * Author: ganpa
 */
#include <bits/stdc++.h>

#define sz(x) (int)(x).size()
#define endl '\n'
using namespace std;

void solve() {
    int n;
    cin >> n;
    set<int> s;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (x == 0) continue;
        s.insert(x);
    }
    cout << sz(s) << endl;
}

int main() {
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int tc;
    cin >> tc;
    while (tc--) solve();
}
