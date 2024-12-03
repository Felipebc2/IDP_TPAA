# Resumo: Caminhos Mínimos e Algoritmo de Dijkstra

## Caminhos Mínimos
- **Definição**:
  - Determinar o menor custo ou menor número de arestas necessário para ir de um vértice inicial (`s`) a outro vértice (`v`) em um grafo.

---

## Caminhos Mínimos em Grafos Não Ponderados
- **Definição**:
  - Para grafos onde todas as arestas têm o mesmo peso (geralmente **1**), o problema pode ser resolvido com **BFS (Breadth-First Search)**.

- **Algoritmo**:
  1. Use uma fila para explorar o grafo nível por nível.
  2. Marque os vértices visitados e atualize suas distâncias a partir da origem.
  3. Retorne a distância mínima para cada vértice.

- **Código Exemplo**:
  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  void bfsShortestPath(vector<vector<int>>& adj, int start, vector<int>& dist) {
      queue<int> q;
      dist[start] = 0;
      q.push(start);

      while (!q.empty()) {
          int v = q.front();
          q.pop();

          for (int u : adj[v]) {
              if (dist[u] == -1) {  // Não visitado
                  dist[u] = dist[v] + 1;
                  q.push(u);
              }
          }
      }
  }

  int main() {
      int n = 5;
      vector<vector<int>> adj(n);

      // Adicionando arestas (grafo não direcionado)
      adj[0].push_back(1);
      adj[1].push_back(0);
      adj[0].push_back(2);
      adj[2].push_back(0);
      adj[1].push_back(3);
      adj[3].push_back(1);
      adj[2].push_back(4);
      adj[4].push_back(2);

      vector<int> dist(n, -1);
      bfsShortestPath(adj, 0, dist);

      for (int i = 0; i < n; i++) {
          cout << "Distância de 0 para " << i << ": " << dist[i] << endl;
      }

      return 0;
  }
  ```

---

## Algoritmo de Dijkstra

### Definição
- **Descrição**:
  - Resolve o problema de caminho mínimo em grafos **ponderados** com pesos **não negativos**.
  - Usa uma fila de prioridade (ou heap) para selecionar o próximo vértice com menor distância.

- **Ideia Geral**:
  1. Inicie com o vértice inicial (`s`) com distância 0 e todos os outros vértices com distância infinita.
  2. Relaxe as arestas: atualize a menor distância conhecida para os vizinhos de um vértice.
  3. Repita até que todos os vértices tenham suas distâncias mínimas calculadas.

---

### Pseudocódigo
1. Inicialize as distâncias para todos os vértices como infinito (`∞`), exceto a origem (`dist[s] = 0`).
2. Adicione o vértice inicial à fila de prioridade.
3. Enquanto a fila não estiver vazia:
   - Extraia o vértice com a menor distância.
   - Para cada vizinho:
     - Relaxe a aresta (atualize a distância se encontrar um caminho mais curto).
4. Retorne as distâncias mínimas.

---

### Código Exemplo (Dijkstra com Fila de Prioridade)
```cpp
#include <bits/stdc++.h>
using namespace std;

void dijkstra(vector<vector<pair<int, int>>>& adj, int start, vector<int>& dist) {
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    dist[start] = 0;
    pq.push({0, start});

    while (!pq.empty()) {
        int d = pq.top().first;
        int v = pq.top().second;
        pq.pop();

        if (d > dist[v]) continue;

        for (auto [u, w] : adj[v]) {
            if (dist[v] + w < dist[u]) {
                dist[u] = dist[v] + w;
                pq.push({dist[u], u});
            }
        }
    }
}

int main() {
    int n = 5;
    vector<vector<pair<int, int>>> adj(n);

    // Adicionando arestas (grafo ponderado)
    adj[0].push_back({1, 2});
    adj[0].push_back({2, 4});
    adj[1].push_back({2, 1});
    adj[1].push_back({3, 7});
    adj[2].push_back({4, 3});
    adj[3].push_back({4, 1});

    vector<int> dist(n, INT_MAX);
    dijkstra(adj, 0, dist);

    for (int i = 0; i < n; i++) {
        cout << "Distância de 0 para " << i << ": " << dist[i] << endl;
    }

    return 0;
  }
```

---

### Identificação do Vértice Mais Próximo
- Durante a execução do Dijkstra:
  - A fila de prioridade mantém os vértices a serem processados.
  - O vértice com a menor distância é extraído no topo da fila.
- **Implementação**:
  - Use a fila de prioridade (min-heap) para armazenar pares `(distância, vértice)`.
  - A extração do topo fornece o vértice mais próximo.

---

## Árvore Geradora Mínima (MST)

### Definição
- Uma **Árvore Geradora Mínima (MST)** de um grafo conectado e não direcionado é um subgrafo que:
  - Conecta todos os vértices.
  - Não possui ciclos.
  - Minimiza a soma dos pesos das arestas.

### Propriedades
- Para um grafo com `V` vértices, a MST contém exatamente `V - 1` arestas.
- Um grafo pode ter múltiplas MSTs se houver arestas com o mesmo peso.

---