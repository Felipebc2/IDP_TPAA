## Algoritmo de Prim

### Descrição
- O **Algoritmo de Prim** encontra a MST adicionando vértices ao conjunto conectado a partir de uma raiz inicial.
- Escolhe iterativamente a **aresta de menor peso** que conecta um vértice já incluído na MST a um vértice fora dela.

### Passos do Algoritmo
1. Inicie com qualquer vértice como raiz e adicione-o à MST.
2. Mantenha um conjunto de vértices já incluídos na MST.
3. Encontre a menor aresta que conecta um vértice dentro da MST a um vértice fora.
4. Adicione o novo vértice à MST.
5. Repita até que todos os vértices estejam incluídos.

### Complexidade
- Usando uma fila de prioridade: **`O((V + E) log V)`**, onde `V` é o número de vértices e `E` é o número de arestas.

---

### Pseudocódigo do Algoritmo de Prim
1. Inicialize um vetor de custos com infinito (`∞`), exceto o vértice inicial (`custo[raiz] = 0`).
2. Use uma fila de prioridade para armazenar pares `(custo, vértice)`.
3. Enquanto a fila não estiver vazia:
   - Extraia o vértice com menor custo.
   - Para cada aresta adjacente, atualize o custo se a aresta for menor do que o valor atual no vetor.
4. Retorne a soma dos custos para formar a MST.

---

### Código Exemplo (Algoritmo de Prim com Fila de Prioridade)
```cpp
#include <bits/stdc++.h>
using namespace std;

int primMST(vector<vector<pair<int, int>>>& adj, int n) {
    vector<int> cost(n, INT_MAX);  // Custo mínimo para incluir cada vértice
    vector<bool> inMST(n, false); // Vértices já incluídos na MST
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

    int totalCost = 0;
    cost[0] = 0; // Começando pelo vértice 0
    pq.push({0, 0}); // (custo, vértice)

    while (!pq.empty()) {
        int v = pq.top().second;
        int currCost = pq.top().first;
        pq.pop();

        if (inMST[v]) continue; // Ignorar se já estiver na MST
        inMST[v] = true;
        totalCost += currCost;

        for (auto [u, weight] : adj[v]) {
            if (!inMST[u] && weight < cost[u]) {
                cost[u] = weight;
                pq.push({cost[u], u});
            }
        }
    }

    return totalCost;
}

int main() {
    int n = 5; // Número de vértices
    vector<vector<pair<int, int>>> adj(n);

    // Adicionando arestas (grafo ponderado)
    adj[0].push_back({1, 2});
    adj[1].push_back({0, 2});
    adj[0].push_back({3, 6});
    adj[3].push_back({0, 6});
    adj[1].push_back({2, 3});
    adj[2].push_back({1, 3});
    adj[1].push_back({3, 8});
    adj[3].push_back({1, 8});
    adj[1].push_back({4, 5});
    adj[4].push_back({1, 5});
    adj[2].push_back({4, 7});
    adj[4].push_back({2, 7});

    cout << "Custo Total da MST: " << primMST(adj, n) << endl;
    return 0;
}
```

---

### Identificação do Vértice Mais Próximo
- A fila de prioridade (min-heap) armazena os custos mínimos para incluir os vértices na MST.
- O vértice com o menor custo é sempre extraído no topo da fila, garantindo que o próximo vértice incluído minimize o custo total da MST.

---