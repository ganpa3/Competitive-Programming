/*
* Problem Statement: https://codeforces.com/problemset/problem/552/B
* Author: ganpa
*/
#include <bits/stdc++.h>

#define endl '\n'
typedef long long int ll;
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0);
    ll n;
    cin >> n;
    if (n < 10)
        cout << n << endl;
    else
    {
        ll x = 0;
        ll number_of_digits = 2;
        for (; number_of_digits < 10; number_of_digits++)
            if (n / (ll)pow(10, number_of_digits) == 0)
                break;
        for (int i = 0; i < number_of_digits; i++)
            x += (ll)pow(10, i);
        ll ans = number_of_digits * (n + 1) - x;
        cout << ans << endl;
    }
}