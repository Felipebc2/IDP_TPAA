#include <bits/stdc++.h>
using namespace std;

int main() {
    int V, C;
    cin >> V >> C;

    vector<vector<int>> adjMatrix(V, vector<int>(V, 0));
    for (int i = 0; i < C; ++i) {
        int A, B;
        cin >> A >> B;
        adjMatrix[A - 1][B - 1] = 1;
        adjMatrix[B - 1][A - 1] = 1;
    }

    for (int i = 0; i < V; ++i) {
        for (int j = 0; j < V; ++j) {
            cout << adjMatrix[i][j];
            if (j != V - 1) cout << " ";
        }
        cout << endl;
    }

    return 0;
}