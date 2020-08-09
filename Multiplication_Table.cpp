#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("error.txt", "w", stderr);
#endif
    ios_base::sync_with_stdio(false), cin.tie(NULL);

    int n, x, c = 0;
    cin >> n >> x;
    for (int i = 1; i <= n; ++i)
    {
        if (x % i == 0 && (x / i) <= n)
            c++;
    }
    cout << c;
}
