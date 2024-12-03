#include <bits/stdc++.h>
using namespace std;

vector<int> parent, rankArr;

int find(int x) {
    if(parent[x] != x) {
        parent[x] = find(parent[x]);
    }
    return parent[x];
}

void unite(int x, int y) {
    int rootX = find(x);
    int rootY = find(y);
    if (rootX != rootY) {
        if (rankArr[rootX] > rankArr[rootY]) {
            parent[rootY] = rootX;
        } else if (rankArr[rootX] < rankArr[rootY]) {
            parent[rootX] = rootY;
        } else {
            parent[rootY] = rootX;
            rankArr[rootX]++;
        }
    }
}

int main() {
    int N, M;
    cin >> N >> M;

    parent.resize(N + 1);
    rankArr.resize(N + 1, 0);
    for (int i = 1; i <= N; i++) {
        parent[i] = i;
    }

    for (int i = 0; i < M; i++) {
        int U, V;
        cin >> U >> V;
        unite(U, V);
    }

    int gangs = 0;
    for (int i = 1; i <= N; i++) {
        if (find(i) == i) {
            gangs++;
        }
    }
    
    cout << gangs << " gangue(s) no clube da briga" << endl;

    return 0;
}