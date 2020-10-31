/*
 * Problem Statement: https://www.codechef.com/problems/SKMP
 * Author: ganpa
 */
#include <bits/stdc++.h>

typedef long long int ll;
typedef long double ld;
typedef unsigned long long int ull;

using namespace std;

bool check(string a) {
    int flag = 1;
    for (int i = 1; i < a.size(); i++) {
        if (a[i] == a[i - 1]) continue;
        if (a[i] < a[i - 1]) flag = 0;
        break;
    }
    return flag;
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
#endif
    ios_base::sync_with_stdio(false), cin.tie(0);
    int tc;
    cin >> tc;
    while (tc--) {
        string s, p;
        cin >> s >> p;
        for (int i = 0; i < p.length(); ++i) {
            int pos = s.find(p[i]);
            s.erase(s.begin() + pos);
        }
        sort(s.begin(), s.end());
        int lb = lower_bound(s.begin(), s.end(), p[0]) - s.begin();
        int ub = upper_bound(s.begin(), s.end(), p[0]) - s.begin();
        if (!check(p))
            s.insert(lb, p);
        else
            s.insert(ub, p);
        cout << s << endl;
        cout << check(p) << endl;
    }
}