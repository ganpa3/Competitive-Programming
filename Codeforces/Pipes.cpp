/*
 * Problem Statement: https://codeforces.com/problemset/problem/1234/C
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
    int n;
    cin >> n;
    array<string, 2> s;
    cin >> s[0] >> s[1];

    int i = 0, p = 0;
    char water_came_from = 'l';
    while (i != n + 1) {
        if (i == n && p == 1) {
            cout << "YES\n";
            return;
        }
        if (s[p][i] < '3') {
            if (water_came_from == 'u' || water_came_from == 'd') break;
            i++;
            water_came_from = 'l';
        } else {
            if (p) {
                if (water_came_from == 'l') {
                    p = 0;
                    water_came_from = 'd';
                } else if (water_came_from == 'u') {
                    i++;
                    water_came_from = 'l';
                }
            } else {
                if (water_came_from == 'd') {
                    i++;
                    water_came_from = 'l';
                } else if (water_came_from == 'l') {
                    p = 1;
                    water_came_from = 'u';
                }
            }
        }
    }
    cout << "NO\n";
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
