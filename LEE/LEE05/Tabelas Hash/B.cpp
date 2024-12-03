#include <bits/stdc++.h>
using namespace std;

int main() {
    int M, C;
    cin >> M >> C;

    vector<list<int>> hashTable(M);

    for (int i = 0; i < C; i++) {
        int value;
        cin >> value;

        int key = value % M;
        hashTable[key].push_back(value);
    }

    for (int i = 0; i < M; i++) {
        cout << i << " -> ";
        for (int val : hashTable[i]) {
            cout << val << " -> ";
        }
        cout << "\\" << endl;
    }

    return 0;
}