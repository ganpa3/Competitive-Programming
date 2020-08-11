/*
 * Problem Statement: https://codeforces.com/problemset/problem/131/A
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
    string s;
    cin >> s;
    int m = 1;
    int l = s.length();
    for (int i = 1; i < l; i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            m = 0;
            break;
        }
    }
    if (m == 1)
    {
        if (s[0] >= 'a' && s[0] <= 'z')
            s[0] -= 32;
        else
            s[0] += 32;

        for (int i = 1; i < l; i++)
        {
            s[i] += 32;
        }
    }
    cout << s;
}