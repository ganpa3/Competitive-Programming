/*
* Problem Statement: https://codeforces.com/problemset/problem/1108/B
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
    int n, x, y, gcd;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    sort(arr, arr + n);
    x = arr[n - 1];
    for (int i = n - 1; i >= 0; --i)
    {
        if (arr[i] == arr[i - 1])
        {
            gcd = arr[i];
            break;
        }
    }
    for (int i = n - 2; i >= 0; --i)
    {
        if (x % arr[i] == 0 && arr[i] == gcd)
        {
            y = arr[i];
            break;
        }
        else if (x % arr[i] != 0)
        {
            y = arr[i];
            break;
        }
    }
    cout << x << " " << y << endl;
}