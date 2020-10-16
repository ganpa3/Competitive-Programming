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
    string s;
    cin >> n >> s;
    pair<int, int> curr = {0, 0};
    pair<int, int> ans = {-1, -1};
    map<pair<int, int>, int> visited;
    visited[curr] = 0;

    int temp = sz(s) + 1;
    for (int i = 0; i < sz(s); i++) {
        if (s[i] == 'L')
            curr.first--;
        else if (s[i] == 'R')
            curr.first++;
        else if (s[i] == 'U')
            curr.second++;
        else if (s[i] == 'D')
            curr.second--;

        if (visited.count(curr)) {
            if (i - visited[curr] < temp) {
                ans = {visited[curr] + 1, i + 1};
                temp = i - visited[curr];
            }
        }
        visited[curr] = i + 1;
    }
    if (ans.first != -1)
        cout << ans.first << " " << ans.second << endl;
    else
        cout << -1 << endl;
}

int32_t main() {
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int tc;
    cin >> tc;
    while (tc--) {
        solve();
    }
}
