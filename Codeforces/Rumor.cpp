#include <bits/stdc++.h>

using namespace std;

int c;
void DFS(int x, vector<vector<int>> &graph, vector<int> &cost, vector<bool> &visited)
{
    c = min(c, cost[x]);
    visited[x] = true;
    for (int n = 0; n < (int)graph[x].size(); n++)
    {
        if (!visited[graph[x][n]])
            DFS(graph[x][n], graph, cost, visited);
    }
}

void solve()
{
    int nodes, edges;
    cin >> nodes >> edges;

    vector<int> cost(nodes);
    vector<bool> visited(nodes);
    vector<vector<int>> graph(nodes);

    for (int i = 0; i < nodes; i++)
        cin >> cost[i];

    for (int i = 0; i < edges; i++)
    {
        int a, b;
        cin >> a >> b;
        graph[a - 1].push_back(b - 1);
        graph[b - 1].push_back(a - 1);
    }
    long long ans = 0;
    for (int i = 0; i < nodes; i++)
    {
        if (!visited[i])
        {
            c = cost[i];
            DFS(i, graph, cost, visited);
            ans += c;
        }
    }
    cout << ans << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    solve();
}
