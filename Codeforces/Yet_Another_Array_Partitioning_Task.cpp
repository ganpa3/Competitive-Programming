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

int32_t main() {
    ios_base::sync_with_stdio(false), cin.tie(0);
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        a[i] = b[i] = x;
    }
    sort(all(a));

    ll sum = 0;
    map<int, int> ma;
    for (int i = n - 1; i >= n - m * k; i--) {
        ma[a[i]]++;
        sum += a[i];
    }
    cout << sum << endl;

    k--;
    int temp = 0;
    for (int i = 0; i < n && k; i++) {
        if (ma[b[i]]) {
            ma[b[i]]--;
            temp++;
        }
        if (temp == m) {
            temp = 0;
            cout << i + 1 << " ";
            k--;
        }
    }
    return 0;
}
