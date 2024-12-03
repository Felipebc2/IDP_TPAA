#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int A;
    cin >> A;
    vector<int> notas(A);


    int MAX_NOTA = 0;
    for (int i = 0; i < A; i++) {
        cin >> notas[i];
        if(notas[i] > MAX_NOTA) {
            MAX_NOTA = notas[i];
        }
    }
    
    vector<int> contador(MAX_NOTA + 1, 0);
    for (int i = 0; i < A; i++) {
        contador[notas[i]]++;
    }

    for (int i = 0; i <= MAX_NOTA; i++) {
        while (contador[i] > 0) {
            cout << i << "\n";
            contador[i]--;
        }
    }
    
    return 0;
}