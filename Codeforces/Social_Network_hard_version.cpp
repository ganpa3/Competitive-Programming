/*
* Problem Statement: https://codeforces.com/problemset/problem/1234/B2
* Author: ganpa
*/
#include <bits/stdc++.h>

#define sz(x) (int)(x).size()
#define all(v) v.begin(), v.end()
#define endl '\n'
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;
    queue<int> q;
    set<int> s;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (s.find(x) == s.end())
        {
            if (sz(q) >= k)
            {
                int temp = q.front();
                q.pop();
                s.erase(temp);
            }
            q.push(x);
            s.insert(x);
        }
    }

    vector<int> ans;
    while (!q.empty())
    {
        ans.push_back(q.front());
        q.pop();
    }
    reverse(all(ans));
    cout << sz(ans) << endl;
    for (auto x : ans)
        cout << x << " ";
    cout << endl;
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    solve();
}
