# Resumo: Travessias em Grafos

## Travessias
- **Definição**:
  - Algoritmos para visitar todos os vértices e arestas de um grafo.
  - Utilizados para resolver problemas como:
    - Verificar conectividade.
    - Encontrar caminhos.
    - Detectar ciclos.

---

## Travessia por Profundidade (DFS - Depth-First Search)
- **Definição**:
  - Explora o grafo o mais profundo possível antes de retroceder.
  - Funciona como uma **pilha** (pode ser implementada recursivamente ou iterativamente com uma pilha explícita).

- **Algoritmo**:
  1. Comece em um vértice inicial.
  2. Marque-o como visitado.
  3. Explore recursivamente os vértices adjacentes ainda não visitados.

- **Complexidade**:
  - Tempo: **`O(V + E)`**, onde `V` é o número de vértices e `E` o número de arestas.
  - Espaço: Depende da recursão ou da pilha usada.

- **Código Exemplo**:
  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  void dfs(vector<vector<int>>& adj, vector<bool>& visited, int v) {
      visited[v] = true;
      cout << v << " ";

      for (int u : adj[v]) {
          if (!visited[u]) {
              dfs(adj, visited, u);
          }
      }
  }

  int main() {
      int n = 5;
      vector<vector<int>> adj(n);

      // Adicionando arestas (grafo não direcionado)
      adj[0].push_back(1);
      adj[0].push_back(2);
      adj[1].push_back(3);
      adj[1].push_back(4);

      vector<bool> visited(n, false);
      cout << "DFS: ";
      dfs(adj, visited, 0);  // Saída: 0 1 3 4 2
      return 0;
  }
  ```

- **Visualização**:
  - Utilize o [DFS Visualizer](https://www.cs.usfca.edu/~galles/visualization/DFS.html) para acompanhar o funcionamento do algoritmo.

---

## Travessia por Largura (BFS - Breadth-First Search)
- **Definição**:
  - Explora o grafo nível por nível, começando pelo vértice inicial.
  - Funciona como uma **fila** (os vértices a serem visitados são enfileirados).

- **Algoritmo**:
  1. Comece em um vértice inicial e marque-o como visitado.
  2. Enfileire-o.
  3. Enquanto a fila não estiver vazia:
     - Retire o vértice da frente da fila.
     - Para cada vértice adjacente não visitado:
       - Marque-o como visitado e enfileire-o.

- **Complexidade**:
  - Tempo: **`O(V + E)`**.
  - Espaço: **`O(V)`** para a fila e lista de visitados.

- **Código Exemplo**:
  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  void bfs(vector<vector<int>>& adj, int start) {
      vector<bool> visited(adj.size(), false);
      queue<int> q;

      visited[start] = true;
      q.push(start);

      while (!q.empty()) {
          int v = q.front();
          q.pop();
          cout << v << " ";

          for (int u : adj[v]) {
              if (!visited[u]) {
                  visited[u] = true;
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
      adj[0].push_back(2);
      adj[1].push_back(3);
      adj[1].push_back(4);

      cout << "BFS: ";
      bfs(adj, 0);  // Saída: 0 1 2 3 4
      return 0;
  }
  ```

- **Visualização**:
  - Utilize o [BFS Visualizer](https://www.cs.usfca.edu/~galles/visualization/BFS.html) para acompanhar o funcionamento do algoritmo.

---

## Diferenças entre DFS e BFS
| Característica      | DFS                           | BFS                          |
|---------------------|-------------------------------|------------------------------|
| Estrutura           | Pilha (recursiva ou explícita)| Fila                         |
| Estratégia          | Vai fundo antes de voltar     | Explora por níveis           |
| Uso comum           | Detectar ciclos, caminhos     | Menor caminho em grafos não ponderados |
| Complexidade        | **`O(V + E)`**               | **`O(V + E)`**               |

---