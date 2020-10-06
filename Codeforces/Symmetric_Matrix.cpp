#include <bits/stdc++.h>

#define sz(x) (int)(x).size()
#define all(v) v.begin(), v.end()
#define endl '\n'
typedef long long ll;
typedef long double ld;
typedef unsigned long long ull;
using namespace std;

void solve()
{
    int n, m;
    cin >> n >> m;
    bool ok = false;
    int a, b, c, d;
    while (n--)
    {
        cin >> a >> b >> c >> d;
        if (b == c)
            ok = true;
    }
    puts(ok && m % 2 == 0 ? "YES" : "NO");
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int tc = 1;
    cin >> tc;
    while (tc--)
        solve();
}
