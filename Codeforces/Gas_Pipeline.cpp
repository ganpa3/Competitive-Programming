#include "bits/stdc++.h"

using namespace std;

#pragma GCC target("avx,avx2,fma")
#pragma GCC optimize("Ofast")
#define sz(x) (int)(x).size()
#define all(v) v.begin(), v.end()
#define endl "\n"
typedef long long ll;
typedef long double ld;
typedef unsigned long long ull;

string to_string(string s) { return '"' + s + '"'; }

string to_string(const char* s) { return to_string((string)s); }

string to_string(bool b) { return (b ? "true" : "false"); }

template <typename A, typename B>
string to_string(pair<A, B> p) {
    return "(" + to_string(p.first) + ", " + to_string(p.second) + ")";
}

template <typename A>
string to_string(A v) {
    bool first = true;
    string res = "{";
    for (const auto& x : v) {
        if (!first) {
            res += ", ";
        }
        first = false;
        res += to_string(x);
    }
    res += "}";
    return res;
}

void debug_out() { cerr << endl; }

template <typename Head, typename... Tail>
void debug_out(Head H, Tail... T) {
    cerr << " " << to_string(H);
    debug_out(T...);
}

#ifdef GANPA
#define debug(...) cerr << "[" << #__VA_ARGS__ << "]:", debug_out(__VA_ARGS__)
#else
#define debug(...) 42
#endif

ll INF = 1e17;

void solve() {
    ll n, a, b;
    string s;
    cin >> n >> a >> b >> s;
    vector<vector<ll> > dp(n + 1, vector<ll>(2, INF));

    dp[0][0] = b;
    for (int i = 0; i < n; i++) {
        if (s[i] == '0') {
            dp[i + 1][0] = min(dp[i + 1][0], dp[i][0] + a + b);
            dp[i + 1][1] = min(dp[i + 1][1], dp[i][0] + 2 * (a + b));

            dp[i + 1][0] = min(dp[i + 1][0], dp[i][1] + 2 * a + b);
            dp[i + 1][1] = min(dp[i + 1][1], dp[i][1] + a + 2 * b);
        } else {
            dp[i + 1][1] = min(dp[i + 1][1], dp[i][1] + a + 2 * b);
        }
    }
    debug(dp);
    cout << dp[n][0] << endl;
}

int32_t main() {
    ios_base::sync_with_stdio(false), cin.tie(0);
    int tc;
    cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}
