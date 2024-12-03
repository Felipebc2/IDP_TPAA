#include <bits/stdc++.h>
using namespace std;

struct Pokemon {
    string name;
    int strength;

    bool operator<(const Pokemon& other) const {
        if (strength == other.strength) {
            return name < other.name;
        }
        return strength < other.strength;
    }
};

void battle(priority_queue<Pokemon>& pq) {
    while (pq.size() > 1) {
        Pokemon p1 = pq.top(); pq.pop();
        Pokemon p2 = pq.top(); pq.pop();
        cout << p1.name << " (" << p1.strength << ") x (" << p2.strength << ") " << p2.name << " : ";

        if (p1.strength > p2.strength) {
            cout << p1.name << " venceu" << endl;
            p1.strength -= p2.strength;
            pq.push(p1);
        } else if (p2.strength > p1.strength) {
            cout << p2.name << " venceu" << endl;
            p2.strength -= p1.strength;
            pq.push(p2);
        } else {
            cout << "empate" << endl;
        }
    }

    if (pq.empty()) { cout << "nenhum vencedor" << endl; }
    else {
        Pokemon winner = pq.top();
        cout << winner.name << " venceu com " << winner.strength << endl;
    }
}

int main() {
    int P;
    cin >> P;

    priority_queue<Pokemon> pq;
    for (int i = 0; i < P; i++) {
        string name;
        int strength;
        cin >> name >> strength;
        pq.push({name, strength});
    }

    battle(pq);

    return 0;
}