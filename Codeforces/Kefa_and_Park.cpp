#include <bits/stdc++.h>

using namespace std;

#define sz(x) (int)(x).size()
#define all(v) v.begin(), v.end()
#define endl '\n'
typedef long long ll;
typedef long double ld;
typedef unsigned long long ull;

const int N = 1e5 + 5;
vector<int> graph[N];
bool cats[N];
int n, m, ans = 0;

void DFS(int a, int parent, int curr, int max_so_far) {
    bool leaf = true;
    curr = (cats[a] ? curr + 1 : 0);
    max_so_far = max(max_so_far, curr);
    for (auto x : graph[a]) {
        if (x == parent) continue;
        leaf = false;
        DFS(x, a, curr, max_so_far);
    }
    if (leaf && max_so_far <= m) ans++;
}

int32_t main() {
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        cin >> cats[i];
    }

    for (int i = 0; i < n - 1; i++) {
        int a, b;
        cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }
    DFS(1, 0, 0, 0);
    cout << ans << endl;
}
