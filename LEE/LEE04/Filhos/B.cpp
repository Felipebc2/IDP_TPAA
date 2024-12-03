#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, C;
    cin >> N >> C;

    vector<int> tree(N);
    for (int i = 0; i < N; i++) {
        cin >> tree[i];
    }

    if(tree[0] == -1) {
        cout << "NULL" << endl;
        return 0;
    }

    for (int i = 0; i < C; i++) {
        int node;
        cin >> node;

        int left = 2 * (node - 1) + 1;
        int right = 2 * (node - 1) + 2;

        bool printed = false;

        if(left < N && tree[left] != -1) {
            cout << tree[left];
            printed = true;
        } else {
            cout << "NULL";
            printed = true;
        }
        cout << " ";

        if(right < N && tree[right] != -1) { cout << tree[right]; } 
        else { cout << "NULL"; }
        cout << endl;
    }
    return 0;
}