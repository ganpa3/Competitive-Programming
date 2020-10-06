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
    int n;
    cin >> n;
    vector<int> v(n);
    int cnt0 = 0, cnt1 = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        if (v[i])
            cnt1++;
        else
            cnt0++;
    }
    if (cnt1 <= n / 2)
    {
        cout << cnt0 << endl;
        for (int i = 0; i < cnt0; i++)
            cout << "0 ";
        cout << endl;
    }
    else
    {
        if (cnt1 % 2)
            cnt1--;
        cout << cnt1 << endl;
        for (int i = 0; i < cnt1; i++)
            cout << "1 ";
        cout << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int tc = 1;
    cin >> tc;
    while (tc--)
        solve();
}
