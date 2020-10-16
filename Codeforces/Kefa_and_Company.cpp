#include <bits/stdc++.h>

using namespace std;

#define sz(x) (int)(x).size()
#define all(v) v.begin(), v.end()
#define endl '\n'
typedef long long ll;
typedef long double ld;
typedef unsigned long long ull;

int32_t main() {
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    ll n, d;
    cin >> n >> d;
    vector<pair<ll, ll>> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i].first >> v[i].second;
    }
    sort(all(v));
    ll j = 1, curr = v[0].first, temp = v[0].second;
    while (j < n) {
        if (v[j].first - curr < d) {
            temp += v[j].second;
            j++;
        } else
            break;
    }
    ll ans = temp;
    for (int i = 1; i < n && j != n; i++) {
        curr = v[i].first;
        temp -= v[i - 1].second;
        while (j < n) {
            if (v[j].first - curr < d) {
                temp += v[j].second;
                j++;
            } else
                break;
        }
        ans = max(ans, temp);
    }
    cout << ans << endl;
}
