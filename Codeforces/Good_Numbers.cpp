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

void solve() {
    ll n;
    cin >> n;
    string s;
    while (n) {
        s += to_string(n % 3);
        n /= 3;
    }
    s += "0";
    reverse(all(s));
    for (int i = 0; i < sz(s); i++) {
        if (s[i] == '2') {
            int j = i;
            while (j >= 0) {
                if (s[j] == '0') {
                    s[j] = '1';
                    j++;
                    for (; j < sz(s); j++) s[j] = '0';
                    break;
                }
                j--;
            }
            break;
        }
    }
    ll res = 0;
    for (int i = sz(s) - 1; i >= 0; i--) {
        ll temp = 1, exp = sz(s) - 1 - i;
        for (int j = 0; j < exp; j++) temp *= 3;
        res += (s[i] - '0') * temp;
    }
    cout << res << endl;
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
