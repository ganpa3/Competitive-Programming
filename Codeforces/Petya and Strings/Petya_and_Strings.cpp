/*
* Problem Statement: https://codeforces.com/problemset/problem/112/A
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

void con(string &ss)
{
    int len = ss.length();
    for (int j = 0; j < len; j++)
    {
        if (ss[j] >= 'A' && ss[j] <= 'Z')
            ss[j] += 32;
    }
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
#endif
    ios_base::sync_with_stdio(false), cin.tie(NULL);
    string s1, s2;
    cin >> s1 >> s2;
    con(s1);
    con(s2);
    int l = s1.length();
    for (int i = 0; i < l; i++)
    {
        if (s1[i] < s2[i])
        {
            cout << -1;
            break;
        }
        else if (s1[i] > s2[i])
        {
            cout << 1;
            break;
        }
        else if (s1 == s2)
        {
            cout << 0;
            break;
        }
    }
}
