/*
 * Problem Statement: https://codeforces.com/problemset/problem/1076/C
 * Author: ganpa
 */
#include <bits/stdc++.h>

#define sz(x) (int)(x).size()
#define all(v) v.begin(), v.end()
#define endl '\n'
typedef long long int ll;
typedef long double ld;
typedef unsigned long long int ull;
using namespace std;

void solve() {
    int n;
    cin >> n;
    double m = n * (n - 4);
    if (m < 0)
        cout << "N\n";
    else {
        cout << "Y ";
        cout << setprecision(9) << fixed;
        double a = (n + sqrt(m)) / 2, b = (n - sqrt(m)) / 2;
        cout << a << " " << b << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int tc;
    cin >> tc;
    while (tc--) solve();
}
