/*
 * Problem Statement: https://www.codechef.com/JULY20B/problems/CHEFSTR1
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

long long ans(int &n)
{
    long long a, b, ans = 0;
    cin >> a;
    for (int i = 0; i < n - 1; i++)
    {
        scanf("%lli", &b);
        ans += (abs(b - a)) - (long long)1;
        a = b;
    }
    return ans;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
#endif
    int tc, z;
    cin >> tc;
    for (int j = 0; j < tc; j++)
    {
        cin >> z;
        cout << ans(z) << "\n";
    }
}
