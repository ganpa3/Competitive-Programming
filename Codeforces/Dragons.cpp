/*
 * Problem Statement: https://codeforces.com/problemset/problem/230/A
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
    int s, n, a, b, m = 1;
    cin >> s >> n;
    int arr[n][2];
    for (int i = 0; i < n; i++) {
        cin >> a >> b;
        arr[i][0] = a, arr[i][1] = b;
    }
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i][0] > arr[j][0]) swap(arr[j], arr[i]);
        }
    }
    for (int i = 0; i < n; i++) {
        if (s > arr[i][0])
            s += arr[i][1];
        else {
            m = 0;
            break;
        }
    }
    if (m == 1)
        cout << "YES";
    else
        cout << "NO";
}