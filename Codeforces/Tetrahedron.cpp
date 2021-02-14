#include <bits/stdc++.h>

using namespace std;

#define sz(x) (int)(x).size()
#define all(v) v.begin(), v.end()
#define int long long
#define endl '\n'
typedef long long ll;
typedef long double ld;
typedef unsigned long long ull;

const int MOD = 1e9 + 7;

int32_t main() {
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int n;
    cin >> n;
    vector<int> dp = {1, 1, 1, 0};
    for (int i = 0; i < n - 1; i++) {
        vector<int> nw = {(dp[1] + dp[2] + dp[3]) % MOD, (dp[0] + dp[2] + dp[3]) % MOD,
                          (dp[0] + dp[1] + dp[3]) % MOD, (dp[0] + dp[1] + dp[2]) % MOD};
        dp = nw;
    }
    cout << dp[3] << endl;
}
