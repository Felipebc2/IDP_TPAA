#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, M, Q;
    cin >> N >> M >> Q;

    vector<vector<int>> matriz(N, vector<int>(M));
    // matriz[0] -> [0, 0, 0]
    // matriz[1] -> [0, 0, 0]
    // matriz[2] -> [0, 0, 0]

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> matriz[i][j];
        }
    }

    for (int i = 0; i < Q; i++) {
        int V;
        cin >> V;

        bool found = false;

        for (int x = 0; x < N; x++) {
            for (int y = 0; y < M; y++) {
                if(matriz[x][y] == V) {
                    cout << x << " " << y << endl;
                    found = true;
                    break;
                }
            }
            if(found) break;
        }
        if(!found) {
            cout << "-1 -1" << endl;
        }
    }

    return 0;
}
