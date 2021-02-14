// Author: ganpa

#include <bits/stdc++.h>

#define sz(x) (int)(x).size()
#define all(v) v.begin(), v.end()
#define endl '\n'
typedef long long int ll;
typedef long double ld;
typedef unsigned long long int ull;
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> even, odd;
    for (int i = 1; i <= 2 * n; i++) {
        int x;
        cin >> x;
        if (x % 2)
            odd.push_back(i);
        else
            even.push_back(i);
    }
    vector<pair<int, int> > ans;
    for (int i = 0; i < sz(odd) - 1; i += 2) ans.push_back(make_pair(odd[i], odd[i + 1]));
    for (int i = 0; i < sz(even) - 1; i += 2) ans.push_back(make_pair(even[i], even[i + 1]));
    for (int i = 0; i < n - 1; i++) cout << ans[i].first << " " << ans[i].second << endl;
}

int main() {
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int tc = 1;
    cin >> tc;
    while (tc--) solve();
}
