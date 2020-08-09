/*
* Problem Statement: https://codeforces.com/problemset/problem/263/A
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
    int arr[5][5];
    for (int a = 0; a < 5; a++)
    {
        for (int b = 0; b < 5; b++)
        {
            cin >> arr[a][b];
        }
    }
    int i, j, m, n;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            if (arr[i][j] == 1)
            {
                m = i;
                n = j;
            }
        }
    }
    int s = 0;
    s += abs(2 - m) + abs(2 - n);
    cout << s;
}
