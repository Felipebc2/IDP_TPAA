#include <bits/stdc++.h>
using namespace std;

int bfs_min_bridges(int n, vector<vector<int>>& graph) {
    vector<int> visited(n + 1, 0);
    queue<pair<int, int>> q;

    q.push({1, 0});
    visited[1] = 1;

    while (!q.empty()) {
        auto [current, bridges] = q.front();
        q.pop();
        if (current == n) return bridges;
        for (int neighbor : graph[current]) {
            if (!visited[neighbor]) {
                visited[neighbor] = 1;
                q.push({neighbor, bridges + 1});
            }
        }
    }
    return -1;
}

int main() {
    int m, n;
    cin >> m >> n;
    vector<vector<int>> graph(m + 1);
    for (int i = 0; i < n; ++i) {
        int x, y;
        cin >> x >> y;
        graph[x].push_back(y);
        graph[y].push_back(x);
    }
    int result = bfs_min_bridges(m, graph);
    cout << result << endl;
    return 0;
}