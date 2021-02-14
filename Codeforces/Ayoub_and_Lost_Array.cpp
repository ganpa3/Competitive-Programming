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

string to_string(string s) {
    return '"' + s + '"';
}

string to_string(const char* s) {
    return to_string((string)s);
}

string to_string(bool b) {
    return (b ? "true" : "false");
}

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

void debug_out() {
    cerr << endl;
}

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

const ll N = 2e5 + 5, mod = 1e9 + 7;
ll dp[N][3];
vector<ll> cnt(3);

void solve(ll l, ll r) {
    while (l % 3 && l <= r) {
        cnt[l % 3]++;
        l++;
    }
    while (r % 3 != 2 && l <= r) {
        cnt[r % 3]++;
        r--;
    }
    for (int i = 0; i < 3; i++) {
        cnt[i] += (r - l + 1) / 3;
    }
}

int32_t main() {
    ios_base::sync_with_stdio(false), cin.tie(0);
    ll n, l, r;
    cin >> n >> l >> r;
    solve(l, r);

    dp[0][0] = 1;
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 3; k++) {
                dp[i][(j + k) % 3] += (dp[i - 1][j] * cnt[k]) % mod;
            }
        }
    }
    cout << dp[n][0] % mod << endl;
    return 0;
}