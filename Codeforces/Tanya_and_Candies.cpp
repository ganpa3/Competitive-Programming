/*
* Problem Statement: https://codeforces.com/problemset/problem/1118/B 
* Author: ganpa
*/
#include <bits/stdc++.h>

#define sz(x) (int)(x).size()
#define endl '\n'
typedef long long int ll;
typedef long double ld;
typedef unsigned long long int ull;
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0);
    int n;
    cin >> n;
    vector<int> v(n);
    int ep, es, op, os;
    ep = es = op = os = 0;
    for(int i = 0; i < n; i++)
    {
    	cin >> v[i];
	if(i % 2) es += v[i];
	else os += v[i];
    }
    int ans = 0;
    for(int i = 0; i < n; i++)
    {
    	if(i % 2) es -= v[i];
	else os -= v[i];
	if(os + ep == es + op) ans++;
	if(i % 2) ep += v[i];
	else op += v[i];
    }
    cout << ans << endl;
}