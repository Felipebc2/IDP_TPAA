#include <bits/stdc++.h>
using namespace std;

int main() {
    int A;
    cin >> A;
    map<string, bool> churrasco;
    vector<string> ordem;

    for (int i = 0; i < A; i++) {
        int P;
        cin >> P;

        for (int i = 0; i < P; i++) {
            string item;
            cin >> item;

            if(churrasco.find(item) == churrasco.end()) {
                cout << "adicionando " << item << endl;
                churrasco[item] = true;
                ordem.push_back(item);
            } else {
                cout << item << " ja tem" << endl;
            }
        }
    }

    sort(ordem.begin(), ordem.end());
    cout << "Itens do churrasco:" << endl;
    for (const auto& item : ordem) {
        cout << item << endl;
    }

    return 0;
}