/*
 * Problem Statement: https://www.codechef.com/AUG20B/problems/CRDGAME3
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
    while (tc--)
    {
        int pc, pr;
        cin >> pc >> pr;
        int c = (pc + 8) / 9, r = (pr + 8) / 9; // ceiling function of pc/9 to find no of digits
        if (pc < 10 && pr < 10)
            cout << "1 1"
                 << "\n";
        else if (r <= c)
            cout << 1 << " " << r << "\n";
        else
            cout << 0 << " " << c << "\n";
    }
}
