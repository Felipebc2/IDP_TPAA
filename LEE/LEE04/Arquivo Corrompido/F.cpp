#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;

    for (int i = 0; i < T; i++) {
        int L;
        int erros = 0;
        cin >> L;

        unordered_map<string, set<string>> registros;

        for (int i = 0; i < L; ++i) {
            string matricula, disciplina;
            cin >> matricula >> disciplina;

            if (registros[matricula].count(disciplina)) {
                erros++;
            } else {
                registros[matricula].insert(disciplina);
            }
        }
        if (erros == 0) { cout << "Arquivo OK" << endl; }
        else { cout << "Corrompido com " << erros << " erro(s)" << endl;}
    }

    return 0;
}