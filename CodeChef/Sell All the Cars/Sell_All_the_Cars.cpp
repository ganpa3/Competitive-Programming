/*
 * Problem Statement: https://www.codechef.com/problems/CARSELL
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
    for (int q = 0; q < tc; q++)
    {
        int n;
        ll p = 0;
        ll m = 1000000007;
        cin >> n;
        vector<ll> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr.begin(), arr.end(), greater<int>());
        for (int i = 0; i < n; i++)
        {
            if (arr[i] - (ll)i > 0)
                p = p + arr[i] - (ll)i;
        }
        cout << p % m << "\n";
    }
}
