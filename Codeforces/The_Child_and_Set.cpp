/*
 * Problem Statement: https://codeforces.com/problemset/problem/437/B
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

int L(int x) {
    return x ^ (x & (x - 1));
}

int32_t main() {
    ios_base::sync_with_stdio(false), cin.tie(0);
    int s, l;
    cin >> s >> l;
    vector<pair<int, int>> v(l + 1);
    vector<int> res;
    for (int i = 1; i <= l; i++) {
        v[i].first = L(i);
        v[i].second = i;
    }
    sort(all(v));
    for (int i = l; i > 0; i--) {
        if (s >= v[i].first) {
            s -= v[i].first;
            res.push_back(v[i].second);
        }
    }
    if (s) {
        cout << -1 << endl;
    } else {
        cout << sz(res) << endl;
        for (auto& x : res) cout << x << " ";
        cout << endl;
    }
    return 0;
}
