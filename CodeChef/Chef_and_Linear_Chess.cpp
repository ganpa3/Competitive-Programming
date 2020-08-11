/*
 * Problem Statement: https://www.codechef.com/AUG20B/problems/LINCHESS
 * Author: ganpa
*/
#include <algorithm>
#include <array>
#include <cassert>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <deque>
#include <iomanip>
#include <iostream>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <tuple>
#include <unordered_map>
#include <unordered_set>
#include <vector>

typedef long long ll;

using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
#endif
    ios_base::sync_with_stdio(false), cin.tie(NULL);
    int tc;
    cin >> tc;
    while (tc--)
    {
        ll n, k, m = 1000000000;
        cin >> n >> k;
        vector<ll> v(n);
        for (auto &it : v)
            cin >> it;
        for (int i : v)
        {
            if (k % i == 0)
                m = min(m, k / i);
        }
        cout << ((m == 1000000000) ? -1 : k / m) << endl;
    }
}
