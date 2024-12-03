#include <bits/stdc++.h>
using namespace std;

int main() {
    // A = Alunos || Q = Consultas
    int A, Q;
    cin >> A >> Q;

    // V = Notas
    vector<int> V(A);

    for (int i = 0; i < A; i++) {
        cin >> V[i];
    }

    // Iteradores para Inicio e Fim do vetor
    auto ini = V.begin();
    auto fim = V.end();

    for (int i = 0; i < Q; i++) {
        // C = Corte
        int C;
        cin >> C;

        auto it = upper_bound(ini, fim, C);
        int count = fim - it;

        cout << count << " notas maiores que " << C << endl;
    }

    return 0;
}
