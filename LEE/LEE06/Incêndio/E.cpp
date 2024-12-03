#include <bits/stdc++.h>
using namespace std;

int findShortestPath(int n, vector<pair<int, int>> adj[], int start, int middle, int end) {
    vector<int> distStart(n + 1, INT_MAX);
    vector<int> distMiddle(n + 1, INT_MAX);

    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<>> pq;
    distStart[start] = 0;
    pq.push({0, start});

    while (!pq.empty()) {
        auto [dist, node] = pq.top();
        pq.pop();
        if (dist > distStart[node]) continue;
        for (auto &[neighbor, weight] : adj[node]) {
            if (distStart[neighbor] > dist + weight) {
                distStart[neighbor] = dist + weight;
                pq.push({distStart[neighbor], neighbor});
            }
        }
    }

    distMiddle[middle] = 0;
    pq.push({0, middle});

    while (!pq.empty()) {
        auto [dist, node] = pq.top();
        pq.pop();
        if (dist > distMiddle[node]) continue;
        for (auto &[neighbor, weight] : adj[node]) {
            if (distMiddle[neighbor] > dist + weight) {
                distMiddle[neighbor] = dist + weight;
                pq.push({distMiddle[neighbor], neighbor});
            }
        }
    }
    return distStart[middle] + distMiddle[end];
}


int main() {
    int N, M;
    cin >> N >> M;

    vector<pair<int, int>> adj[N + 1];
    for (int i = 0; i < M; i++) {
        int A, B;
        cin >> A >> B;
        adj[A].emplace_back(B, 1);
        adj[B].emplace_back(A, 1);
    }

    int C, E, F;
    cin >> C >> E >> F;

    cout << findShortestPath(N, adj, C, E, F) << endl;

    return 0;
}