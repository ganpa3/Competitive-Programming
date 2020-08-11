/*
 * Problem Statement: https://codeforces.com/problemset/problem/58/A
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
    string s, s2, s1 = "hello";
    cin >> s;
    s2 = s;
    int m = 1;
    size_t pos;
    for (int i = 0; i < 5; i++)
    {
        pos = s2.find(s1[i]);
        if (pos == string::npos)
        {
            m = 0;
            break;
        }
        else
            s2 = s2.substr(pos + 1);
    }
    if (m)
        cout << "YES";
    else
        cout << "NO";
}