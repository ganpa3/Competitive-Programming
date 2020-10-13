#include <bits/stdc++.h>

using namespace std;

#define sz(x) (int)(x).size()
#define all(v) v.begin(), v.end()
#define endl '\n'
typedef long long ll;
typedef long double ld;
typedef unsigned long long ull;

void solve() {
    int n;
    cin >> n;
    vector<int> v(n + 1);
    for (int i = 1; i <= n; i++) {
        cin >> v[i];
    }
    int l = 1, r = n;
    while (l <= n && v[l] == l) l++;
    while (r >= 1 && v[r] == r) r--;

    if (l == n + 1)
        cout << 0 << endl;
    else {
        bool ok = true;
        for (int i = l; i <= r; i++) {
            if (v[i] == i) {
                ok = false;
                break;
            }
        }
        cout << (ok ? 1 : 2) << endl;
    }
}

int32_t main() {
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int tc;
    cin >> tc;
    while (tc--) {
        solve();
    }
}
