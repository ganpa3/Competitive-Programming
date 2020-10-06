#include <bits/stdc++.h>

using namespace std;

#define sz(x) (int)(x).size()
#define all(v) v.begin(), v.end()
#define endl '\n'
#define int long long
typedef long long ll;
typedef long double ld;
typedef unsigned long long ull;

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &it : v)
        cin >> it;
    int currMax = -1e18, maxDrop = 0;
    for (int i = 0; i < n; i++)
    {
        currMax = max(currMax, v[i]);
        maxDrop = max(maxDrop, currMax - v[i]);
    }
    int x = 0;
    while ((1LL << x) - 1 < maxDrop)
        x++;
    cout << x << endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int tc;
    cin >> tc;
    while (tc--)
        solve();
}
