/*
 * Problem Statement: https://codeforces.com/problemset/problem/189/A
 * Author: ganpa
 */
#include <bits/stdc++.h>

#define sz(x) (int)(x).size()
#define all(v) v.begin(), v.end()
#define endl '\n'
typedef long long ll;
typedef long double ld;
typedef unsigned long long ull;
using namespace std;

int main() {
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int n, a, b, c, ans = 0;
    cin >> n >> a >> b >> c;
    for (int i = 0; i <= n; i += a)
        for (int j = 0; j <= n - i; j += b)
            if ((n - i - j) % c == 0)
                ans = max(ans, i / a + j / b + (n - i - j) / c);
    cout << ans << endl;
}
