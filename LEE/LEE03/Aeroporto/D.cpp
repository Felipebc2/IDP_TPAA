#include <bits/stdc++.h>
using namespace std;

int main() {
    queue<string> norte, sul, leste, oeste;
    char direction;

    while (cin >> direction && direction != '0') {
        string aviao;
        while (cin >> aviao && aviao[0] == 'B') {
            if(direction == 'N') {
                norte.push(aviao);
            } else if (direction == 'S') {
                sul.push(aviao);
            } else if (direction == 'L') {
                leste.push(aviao);
            } else if (direction == 'O') {
                oeste.push(aviao);
            }
        }
        cin.putback(aviao[0]);
    }

    int tam = norte.size() + sul.size() + leste.size() + oeste.size();
    bool first = true;  // Flag para controlar o primeiro elemento

    for (int i = 0; i < tam; i++) {
        if(!norte.empty()) {
            if (!first) cout << " ";  // Apenas imprime espaço se não for o primeiro elemento
            cout << norte.front();
            norte.pop();
            first = false;
        }
        if (!sul.empty()) {
            if (!first) cout << " ";
            cout << sul.front();
            sul.pop();
            first = false;
        }
        if (!leste.empty()) {
            if (!first) cout << " ";
            cout << leste.front();
            leste.pop();
            first = false;
        }
        if (!oeste.empty()) {
            if (!first) cout << " ";
            cout << oeste.front();
            oeste.pop();
            first = false;
        }
    }

    cout << endl;

    return 0;
}
