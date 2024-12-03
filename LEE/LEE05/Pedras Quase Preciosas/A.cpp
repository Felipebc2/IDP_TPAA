#include <bits/stdc++.h>
using namespace std;

int countGems(const string& catalogo, const string& pedras) {
    unordered_set<char> conjuntoCatalogo(catalogo.begin(), catalogo.end());
    int count = 0;
    for (char pedra : pedras) {
        if (conjuntoCatalogo.count(pedra)) { count++; }
    }
    return count;
}

int main() {
    int T;
    cin >> T;

    for (int i = 0; i < T; i++) {
        string C, P;
        cin >> C >> P;

        int result = countGems(C, P);
        cout << "Contem " << result << " pedras negociaveis" << endl;
    }

    return 0;
}