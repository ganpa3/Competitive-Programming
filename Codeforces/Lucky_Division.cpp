/*
 * Problem Statement: https://codeforces.com/problemset/problem/122/A
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

int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
#endif
    ios_base::sync_with_stdio(false), cin.tie(NULL);
    vector<int> arr = {4,   7,   47,  74,  44,  77,  444,
                       777, 447, 477, 474, 774, 747, 744};
    int n;
    cin >> n;
    int m = 0;
    for (int i : arr) {
        if (n % i == 0) {
            m = i;
            break;
        }
    }
    if (find(arr.begin(), arr.end(), n) != arr.end())
        cout << "YES";
    else if (m != 0)
        cout << "YES";
    else
        cout << "NO";
}