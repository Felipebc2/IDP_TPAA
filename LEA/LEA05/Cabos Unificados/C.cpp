#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    priority_queue<int, vector<int>, greater<int>> pq;

    // Lê os comprimentos dos cabos e adiciona na fila de prioridade
    for (int i = 0; i < n; ++i) {
        int cable;
        cin >> cable;
        pq.push(cable);
    }

    int total_cost = 0;

    // Enquanto houver mais de um cabo na fila
    while (pq.size() > 1) {
        int cable1 = pq.top(); pq.pop();
        int cable2 = pq.top(); pq.pop();

        int cost = max(cable1, cable2); // Custo da conexão
        total_cost += cost;

        pq.push(cable1 + cable2); // Insere o novo cabo na fila
    }

    cout << total_cost << endl;
    return 0;
}
