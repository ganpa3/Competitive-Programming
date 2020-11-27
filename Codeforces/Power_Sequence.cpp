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

const ll INF = 1e17;

inline ll mul(ll a, ll b) { return (INF / a < b ? INF : a * b); }

inline ll add(ll a, ll b) { return (a + b > INF ? INF : a + b); }

int32_t main() {
    ios_base::sync_with_stdio(false), cin.tie(0);
    ll n;
    cin >> n;
    vector<ll> v(n);
    for (auto& it : v) cin >> it;
    sort(all(v));

    ll sum = accumulate(all(v), 0LL) - n;
    ll ans = 1e18, x = 1;

    while (1) {
        ll curr_cost = 0, curr_power = 1;
        for (int i = 0; i < n; i++) {
            curr_cost = add(curr_cost, abs(v[i] - curr_power));
            curr_power = mul(curr_power, x);
        }

        if (curr_power == INF || curr_power / x > sum + v.back()) break;
        ans = min(ans, curr_cost);
        x++;
    }
    cout << ans << endl;
    return 0;
}
