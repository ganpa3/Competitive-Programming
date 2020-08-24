/*
* Problem Statement: https://codeforces.com/problemset/problem/1327/B
* Author: ganpa
*/
#include <bits/stdc++.h>

#define endl '\n'
typedef long long int ll;
typedef long double ld;
typedef unsigned long long int ull;
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
#endif
    ios_base::sync_with_stdio(false), cin.tie(0);
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        bool check[n + 1] = {0};
        vector<int> unmarried;
        for (int j = 0; j < n; j++)
        {
            bool married = false;
            int k;
            cin >> k;
            vector<int> a(k);
            for (int &it : a)
                cin >> it;
            for (int i = 0; i < k; i++)
            {
                if (!check[a[i]])
                {
                    married = true;
                    check[a[i]] = 1;
                    break;
                }
            }
            if (!married)
                unmarried.push_back(j + 1);
        }
        int prince = 0;
        for (int q = 1; q <= n; q++)
        {
            if (check[q] == 0)
            {
                prince = q;
                break;
            }
        }
        if (unmarried.empty())
            cout << "OPTIMAL" << endl;
        else
            cout << "IMPROVE\n"
                 << unmarried[0] << " " << prince << endl;
    }
}