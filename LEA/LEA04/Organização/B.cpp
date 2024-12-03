#include <bits/stdc++.h>
using namespace std;

int main(){
    int before, after;
    cin >> before >> after;
    map<string, vector<string>> choices;
    vector<pair<string, string>> results;

    for (int i = 0; i < before; i++) {
        string name, op1, op2, op3;
        cin >> name >> op1 >> op2 >> op3;
        choices[name] = {op1, op2, op3};
    }

    for (int i = 0; i < after; i++) {
        string name, prize;
        cin >> name >> prize;
        results.push_back({name, prize});
    }

    for (const auto& [name, prize] : results) {
        if(choices.count(name)) {
            auto& ops = choices[name];
            if (find(ops.begin(), ops.end(), prize) != ops.end()) {
                cout << name << " conseguiu ganhar " << prize << "!" << endl;
            } else {
                cout << name << " infelizmente ganhou " << prize << "..." << endl;
            }
        } else {
            cout << name << " queria ganhar qualquer coisa e ganhou " << prize << "!" << endl;
        }
    }

    return 0;
}