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
    vector<int> v(n);
    int sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        sum += v[i];
    }
    if (sum == 0)
        cout << "NO\n";
    else {
        cout << "YES\n";
        if (sum < 0) {
            sort(all(v));
            for (auto &x : v) cout << x << " ";
            cout << endl;
        } else {
            sort(all(v), greater<int>());
            for (auto &x : v) cout << x << " ";
            cout << endl;
        }
    }
}
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        solve();
    }
}
