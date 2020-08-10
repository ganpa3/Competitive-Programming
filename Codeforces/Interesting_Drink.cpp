#include <algorithm>
#include <cmath>
#include <iostream>
#include <map>
#include <math.h>
#include <string>
#include <vector>
typedef long long int ll;
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
#endif
    ios_base::sync_with_stdio(false), cin.tie(NULL);
    ll n, q, m;
    cin >> n;
    vector<ll>::iterator up;
    vector<ll> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    cin >> q;
    sort(v.begin(), v.end());
    while (q--)
    {
        cin >> m;
        if (m >= v[n - 1])
            cout << n << "\n";
        else
        {
            up = upper_bound(v.begin(), v.end(), m);
            cout << (up - v.begin()) << "\n";
        }
    }
}