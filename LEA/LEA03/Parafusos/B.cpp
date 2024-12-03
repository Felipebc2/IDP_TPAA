#include <bits/stdc++.h>
using namespace std;

int main() {
    int C, Q;
    cin >> C >> Q;
    vector<int> parafusos(1001, 0);

    for (int i = 0; i < C; ++i) {
        int A, B;
        cin >> A >> B;
        for (int j = A; j <= B; ++j) {
            parafusos[j]++;
        }
    }

    for (int i = 0; i < Q; ++i) {
        int tam;
        cin >> tam;
        if(parafusos[tam] == 0) {
            cout << "Nao contem parafusos do tipo " << tam << endl;
        } else {
            cout << "Contem " << parafusos[tam] << " parafuso(s) do tipo " << tam << endl;
        }
    }

    return 0;
}
