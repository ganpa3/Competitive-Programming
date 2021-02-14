/*
 * Problem Statement: https://codeforces.com/problemset/problem/1278/B
 * Author: ganpa
 */
#include "bits/stdc++.h"

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

void solve() {
    int a, b;
    cin >> a >> b;
    vector<ll> v(N);
    ++v[1];
    for (int i = 2; i < N; i++) {
        v[i] = i + v[i - 1];
    }
    ll diff = 2 * max(a, b) - (a + b);

    auto l = lower_bound(all(v), diff) - v.begin();
    if ((a + b) & 1) {
        while (v[l] % 2 == 0) l++;
    } else {
        while (v[l] & 1) l++;
    }
    cout << l << endl;
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
