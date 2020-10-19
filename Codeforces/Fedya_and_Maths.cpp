/*
 * Problem Statement: https://codeforces.com/problemset/problem/456/B
 * Author: ganpa
 */
#include <bits/stdc++.h>

#define all(v) v.begin(), v.end()
#define sz(x) (int)(x).size()
#define endl '\n'
typedef long long ll;
typedef long double ld;
typedef unsigned long long ull;
using namespace std;

int main() {
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    string s;
    cin >> s;
    int l = sz(s);
    if (l == 1) {
        int m = stoi(s);
        if (m % 4)
            cout << 0 << endl;
        else
            cout << 4 << endl;
    } else {
        string temp = s.substr(l - 2, 2);
        int m = stoi(temp);
        if (m % 4)
            cout << 0 << endl;
        else
            cout << 4 << endl;
    }
}
