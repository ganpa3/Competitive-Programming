/*
* Problem Statement: https://codeforces.com/problemset/problem/1304/B
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
    string s[100];
    set<string> dict;
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; ++i)
    {
        cin >> s[i];
        dict.insert(s[i]);
    }
    vector<string> left, right;
    string mid;
    for (int i = 0; i < n; ++i)
    {
        string t = s[i];
        reverse(t.begin(), t.end());
        if (t == s[i])
            mid = t;
        else if (dict.find(t) != dict.end())
        {
            left.push_back(s[i]);
            right.push_back(t);
            dict.erase(s[i]);
            dict.erase(t);
        }
    }
    cout << left.size() * m * 2 + mid.size() << "\n";
    for (string x : left)
        cout << x;
    cout << mid;
    reverse(right.begin(), right.end());
    for (string x : right)
        cout << x;
}