/*
* Problem Statement: https://codeforces.com/problemset/problem/339/A
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
    int len = s.length();
    int n = (len / 2) + 1;
    for (int j = 0; j < n; j++)
    {
        for (int i = 0; i < len - 2; i += 2)
        {
            if (s[i] > s[i + 2])
                swap(s[i], s[i + 2]);
        }
    }
    cout << s;
}