#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int P, R;
    cin >> P >> R;

    multiset<int> cadeiras;  // Usaremos multiset para manter a ordenação automaticamente
    for (int i = 0; i < P; i++) {
        int C;
        cin >> C;
        cadeiras.insert(C);

        // Encontrar o elemento na posição R-1 (ou o maior elemento disponível)
        if ((int)cadeiras.size() >= R) {
            auto it = next(cadeiras.begin(), R - 1);
            cout << *it << endl;
        } else {
            cout << *cadeiras.rbegin() << endl;  // Último elemento no multiset
        }
    }

    return 0;
}
