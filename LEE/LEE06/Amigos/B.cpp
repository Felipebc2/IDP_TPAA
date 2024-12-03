#include <bits/stdc++.h>
using namespace std;

void dfs(int node, vector<vector<int>> &adj, vector<bool> &visited) {
    visited[node] = true;
    for (int neighbor : adj[node]) {
        if (!visited[neighbor]) {
            dfs(neighbor, adj, visited);
        }
    }
}

int main() {
    int N, M;
    cin >> N >> M;

    vector<vector<int>> adj(N + 1);
    for (int i = 0; i < M; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    vector<bool> visited(N + 1, false);
    int components = 0;

    for (int i = 1; i <= N; i++) {
        if (!visited[i]) {
            components++;
            dfs(i, adj, visited);
        }
    }

    if (components == 1) { cout << "Todo mundo eh amigo de todo mundo" << endl; } 
    else { cout << "Varios grupos de amigos" << endl; }

    return 0;
}