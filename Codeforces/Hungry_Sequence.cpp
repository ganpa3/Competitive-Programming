/*
* Problem Statement: https://codeforces.com/problemset/problem/327/B
* Author: ganpa
*/
#include <bits/stdc++.h>

#define endl '\n'
typedef long long int ll;
using namespace std;

const ll MAX = 10000000;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int n;
    cin >> n;
    vector<bool> is_prime(MAX + 1, 1);
    is_prime[0] = is_prime[1] = 0;

    for (ll i = 2; i < MAX; i++)
    {
        if (is_prime[i] && (ll)i * i <= MAX)
        {
            for (ll j = i * i; j < MAX; j += i)
            {
                is_prime[j] = 0;
            }
        }
    }
    for (int i = 0; i < MAX; i++)
    {
        if (is_prime[i])
        {
            cout << i << " ";
            n--;
        }
        if (!n)
            break;
    }
}