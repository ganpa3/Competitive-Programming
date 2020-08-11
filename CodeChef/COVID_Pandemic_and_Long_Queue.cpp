/*
 * Problem Statement: https://www.codechef.com/problems/COVIDLQ
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
    for (int _ = 0; _ < tc; _++)
    {
        int temp = -6;
        int n, f = 1;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == 1)
            {
                if (i - temp < 6)
                    f = 0;
                temp = i;
            }
        }
        if (f == 1)
            cout << "YES"
                 << "\n";
        else
            cout << "NO"
                 << "\n";
    }
}
