#include <bits/stdc++.h>
using namespace std;

int main() {
    int numNos, consultas;
    cin >> numNos >> consultas;

    vector<int> arvore(numNos);
    for (int i = 0; i < numNos; i++) {
        cin >> arvore[i];
    }

    if (arvore[0] == -1) {
        cout << "NULL" << endl;
        return 0;
    }

    for (int i = 0; i < consultas; i++) {
        int node;
        cin >> node;
        node--;
        int left = 2 * node + 1;
        int right = 2 * node + 2;
        int pai = (node - 1) / 2;

        if (node == 0) {
            cout << "RAIZ - ";
        } else {
            if (pai >= 0 && pai < numNos) {
                cout << arvore[pai] << " - ";
            } else {
                cout << "NULL - ";
            }
        }

        if (left < numNos && arvore[left] != -1) {
            cout << arvore[left] << " ";
        } else {
            cout << "NULL ";
        }

        if (right < numNos && arvore[right] != -1) {
            cout << arvore[right];
        } else {
            cout << "NULL";
        }

        cout << endl;
    }

    return 0;
}