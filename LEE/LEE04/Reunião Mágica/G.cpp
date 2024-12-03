#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int T;
    cin >> T;
    cin.ignore(); // Ignora o caractere de nova linha após T

    for (int i = 0; i < T; i++) {
        string R, S;
        cin >> R >> S;

        set<char> baralhoR(R.begin(), R.end());
        set<char> baralhoS(S.begin(), S.end());
        set<char> interseccao;

        for (char c : baralhoR) {
            if (baralhoS.count(c)) {
                interseccao.insert(c);
            }
        } if (interseccao.empty()) {
            cout << "Baralhos prontos para o duelo" << endl;
        } else {
            for (char c : interseccao) {
                cout << c;
            }
            cout << endl;
        }
    }

    return 0;
}