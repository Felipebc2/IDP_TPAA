#include <bits/stdc++.h>
using namespace std;

int find(vector<int>& parent, int x) {
    if (parent[x] != x) { parent[x] = find(parent, parent[x]); }
    return parent[x];
}

void unite(vector<int>& parent, vector<int>& rank, vector<int>& size, int x, int y) {
    int rootX = find(parent, x);
    int rootY = find(parent, y);

    if (rootX != rootY) {
        if (rank[rootX] > rank[rootY]) {
            parent[rootY] = rootX;
            size[rootX] += size[rootY];
        } else if (rank[rootX] < rank[rootY]) {
            parent[rootX] = rootY;
            size[rootY] += size[rootX];
        } else {
            parent[rootY] = rootX;
            size[rootX] += size[rootY];
            rank[rootX]++;
        }
    }
}

int main() {
    int N, M;
    cin >> N >> M;
    vector<int> parent(N + 1), rank(N + 1, 0), size(N + 1, 1);
    for (int i = 1; i <= N; i++) {
        parent[i] = i;
    }

    for (int i = 0; i < M; i++) {
        int A, B;
        cin >> A >> B;
        unite(parent, rank, size, A, B);
    }

    int maxGroup = 0;

    for (int i = 1; i <= N; i++) {
        if (find(parent, i) == i) { maxGroup = max(maxGroup, size[i]); }
    }

    cout << "O grupo mais numeroso tem " << maxGroup << " aluno(s)" << endl;
    return 0;
}