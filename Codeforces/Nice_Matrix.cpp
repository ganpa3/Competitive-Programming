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

const int N = 105;
int v[N][N];

ll calc(vector<ll>& curr) {
    sort(all(curr));
    int size = sz(curr);
    ll res = 0;
    for (int i = 0; i < size; i++) res += abs(curr[i] - curr[size / 2]);
    return res;
}

void solve() {
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> v[i][j];
        }
    }

    ll ans = 0;
    int up_row = 0, down_row = n - 1;
    while (up_row <= down_row) {
        int left_columnn = 0, right_column = m - 1;
        while (left_columnn <= right_column) {
            vector<ll> curr = {v[up_row][left_columnn]};
            if (up_row != down_row) {
                curr.push_back(v[down_row][left_columnn]);
            }
            if (left_columnn != right_column) {
                curr.push_back(v[up_row][right_column]);
            }
            if (left_columnn != right_column && up_row != down_row) {
                curr.push_back(v[down_row][right_column]);
            }
            left_columnn++, right_column--;
            ans += calc(curr);
        }
        up_row++, down_row--;
    }
    cout << ans << endl;
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
