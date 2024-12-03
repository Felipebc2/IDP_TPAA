# Resumo: Componentes Conectados

## Componentes Conectados

### Definição
- Um **componente conectado** em um grafo não direcionado é um subgrafo no qual:
  - Todos os vértices estão conectados direta ou indiretamente.
  - Não existem arestas conectando vértices deste subgrafo a outros vértices fora dele.

- Em grafos direcionados, utiliza-se o conceito de **componentes fortemente conectados**, onde todos os vértices em um componente são mutuamente alcançáveis.

---

## Exemplos
1. Grafo Não Direcionado:
   ```
   (A)----(B)    (D)----(E)
     |               |
    (C)             (F)
   ```
   Componentes conectados:
   - {A, B, C}
   - {D, E, F}

2. Grafo Direcionado:
   ```
   (A) --> (B) --> (C)
     ^      |
     |      v
    (D) <--(E)
   ```
   Componentes fortemente conectados:
   - {A, B, D, E}
   - {C}

---

## Determinação dos Componentes Conectados

### Grafo Não Direcionado
- **Método**:
  1. Use **DFS** ou **BFS** para explorar o grafo.
  2. Cada execução completa da busca encontra um componente conectado.
  3. Marque todos os vértices visitados como pertencentes ao mesmo componente.

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
      int n = 6;
      vector<vector<int>> adj(n);

      // Adicionando arestas
      adj[0].push_back(1);  // A-B
      adj[1].push_back(0);
      adj[0].push_back(2);  // A-C
      adj[2].push_back(0);
      adj[3].push_back(4);  // D-E
      adj[4].push_back(3);
      adj[4].push_back(5);  // E-F
      adj[5].push_back(4);

      vector<bool> visited(n, false);
      int count = 0;

      cout << "Componentes conectados:" << endl;
      for (int i = 0; i < n; i++) {
          if (!visited[i]) {
              cout << "Componente " << ++count << ": ";
              dfs(adj, visited, i);
              cout << endl;
          }
      }

      return 0;
  }
  ```
  **Saída**:
  ```
  Componente 1: 0 1 2
  Componente 2: 3 4 5
  ```

---

### Grafo Direcionado: Componentes Fortemente Conectados
- **Definição**:
  - Um componente fortemente conectado é um subgrafo no qual todos os vértices são mutuamente alcançáveis.

- **Método (Algoritmo de Kosaraju)**:
  1. Execute uma DFS para determinar a ordem de saída dos vértices.
  2. Inverta as direções das arestas do grafo.
  3. Execute uma nova DFS na ordem de saída do primeiro passo, identificando os componentes fortemente conectados.

- **Código Simplificado**:
  ```cpp
  void dfs(vector<vector<int>>& adj, vector<bool>& visited, int v, stack<int>& finishOrder) {
      visited[v] = true;
      for (int u : adj[v]) {
          if (!visited[u]) dfs(adj, visited, u, finishOrder);
      }
      finishOrder.push(v);
  }

  void dfsTranspose(vector<vector<int>>& adjT, vector<bool>& visited, int v) {
      visited[v] = true;
      cout << v << " ";
      for (int u : adjT[v]) {
          if (!visited[u]) dfsTranspose(adjT, visited, u);
      }
  }

  int main() {
      int n = 5;
      vector<vector<int>> adj(n), adjT(n);

      // Adicionando arestas
      adj[0].push_back(2); adj[2].push_back(0);
      adj[2].push_back(1); adj[1].push_back(3);
      adj[3].push_back(4); adj[4].push_back(1);

      // Preparando a transposta
      for (int v = 0; v < n; v++) {
          for (int u : adj[v]) {
              adjT[u].push_back(v);
          }
      }

      vector<bool> visited(n, false);
      stack<int> finishOrder;

      // Passo 1: Determinar ordem de término
      for (int i = 0; i < n; i++) {
          if (!visited[i]) dfs(adj, visited, i, finishOrder);
      }

      // Passo 2: Identificar componentes fortemente conectados
      fill(visited.begin(), visited.end(), false);
      cout << "Componentes fortemente conectados:" << endl;

      while (!finishOrder.empty()) {
          int v = finishOrder.top();
          finishOrder.pop();
          if (!visited[v]) {
              dfsTranspose(adjT, visited, v);
              cout << endl;
          }
      }

      return 0;
  }
  ```

---