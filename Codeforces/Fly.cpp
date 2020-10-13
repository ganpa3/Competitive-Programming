#include <bits/stdc++.h>

using namespace std;

#pragma GCC target("avx,avx2,fma")
#pragma GCC optimize("Ofast")
#define sz(x) (int)(x).size()
#define all(v) v.begin(), v.end()
#define endl '\n'
typedef long long ll;
typedef long double ld;
typedef unsigned long long ull;

int32_t main() {
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int n;
    ld m;
    cin >> n >> m;
    vector<ld> a(n), b(n);
    ld s = m;
    bool ok = true;
    for (auto &it : a) {
        cin >> it;
        if ((int)it == 1) ok = false;
    }
    for (auto &it : b) {
        cin >> it;
        if ((int)it == 1) ok = false;
    }
    if (!ok)
        cout << "-1\n";
    else {
        m *= b[0] / (b[0] - 1);
        for (int i = n - 1; i > 0; i--) {
            m *= a[i] / (a[i] - 1);
            m *= b[i] / (b[i] - 1);
        }
        m *= a[0] / (a[0] - 1);
        cout << fixed << setprecision(10) << double(m - s) << endl;
    }
}
