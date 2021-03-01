/*
 * Problem Statement: https://codeforces.com/problemset/problem/1167/B
 * Author: ganpa
 */
#include "bits/stdc++.h"

using namespace std;

#pragma GCC target("avx,avx2,fma")
#pragma GCC optimize("Ofast")

#define all(v) (v).begin(), (v).end()
#define endl '\n'

using ll = long long;
using ld = long double;
using ull = unsigned long long;

template <typename T>
constexpr int sz(T container) {
    return static_cast<int>(container.size());
}

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

vector<int> v = {4, 8, 15, 16, 23, 42};
vector<int> ans(6);

void ask(int a, int b) {
    cout << "? " << a << " " << b << endl;
    cout.flush();
}

void find(int x, int& a, int& b) {
    for (const auto& i : v) {
        for (const auto& j : v) {
            if (i * j == x) {
                a = i;
                b = j;
                return;
            }
        }
    }
}

int common(int a, int b) {
    int x1, x2, y1, y2;
    find(a, x1, y1);
    find(b, x2, y2);
    return (x1 == x2 || x1 == y2 ? x1 : y1);
}

void solve(int i) {
    int a, b;
    ask(3 * i + 1, 3 * i + 2);
    cin >> a;
    ask(3 * i + 1, 3 * i + 3);
    cin >> b;
    ans[3 * i + 0] = common(a, b);
    ans[3 * i + 1] = a / ans[3 * i + 0];
    ans[3 * i + 2] = b / ans[3 * i + 0];
}

int32_t main() {
    solve(0);
    solve(1);
    cout << "! ";
    for (const auto& x : ans) cout << x << " ";
    cout << endl;
    cout.flush();
    return 0;
}
