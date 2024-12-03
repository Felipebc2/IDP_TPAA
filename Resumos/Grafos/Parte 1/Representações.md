# Resumo: Representações em Grafos

## Representações em Grafos
Grafos podem ser representados de diversas formas dependendo do contexto e dos requisitos de espaço e tempo para as operações.

---

### 1. Matriz de Adjacência
- **Definição**:
  - Representa o grafo com uma matriz `n x n`, onde `n` é o número de vértices.
  - O elemento `(i, j)`:
    - É `1` ou o peso da aresta se existir uma conexão entre os vértices `i` e `j`.
    - É `0` se não existir conexão.

- **Características**:
  - Representação compacta para grafos densos.
  - Fácil acesso a arestas específicas.
  - Requer **`O(n^2)`** de espaço.

- **Exemplo**:
  Grafo:
  ```
    (A)----(B)
     |      |
    (C)----(D)
  ```
  Matriz de Adjacência:
  ```
      A B C D
    A 0 1 1 0
    B 1 0 0 1
    C 1 0 0 1
    D 0 1 1 0
  ```

- **Código Exemplo**:
  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {
      int n = 4;  // Número de vértices
      vector<vector<int>> mat(n, vector<int>(n, 0));

      // Adicionando arestas
      mat[0][1] = mat[1][0] = 1;  // A-B
      mat[0][2] = mat[2][0] = 1;  // A-C
      mat[1][3] = mat[3][1] = 1;  // B-D
      mat[2][3] = mat[3][2] = 1;  // C-D

      // Imprimindo a matriz
      for (auto row : mat) {
          for (int val : row) cout << val << " ";
          cout << endl;
      }
      return 0;
  }
  ```

---

### 2. Lista de Adjacência
- **Definição**:
  - Cada vértice tem uma lista que armazena os vértices adjacentes a ele.
  - Representado como:
    - Array de listas.
    - Vetor de vetores ou vetor de listas em C++.

- **Características**:
  - Eficiente em espaço para grafos esparsos.
  - Operações como iteração sobre vizinhos são rápidas.
  - Requer **`O(n + m)`** de espaço, onde `m` é o número de arestas.

- **Exemplo**:
  Grafo:
  ```
    (A)----(B)
     |      |
    (C)----(D)
  ```
  Lista de Adjacência:
  ```
  A: B, C
  B: A, D
  C: A, D
  D: B, C
  ```

- **Código Exemplo**:
  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {
      int n = 4;  // Número de vértices
      vector<vector<int>> adj(n);

      // Adicionando arestas
      adj[0].push_back(1);  // A-B
      adj[1].push_back(0);
      adj[0].push_back(2);  // A-C
      adj[2].push_back(0);
      adj[1].push_back(3);  // B-D
      adj[3].push_back(1);
      adj[2].push_back(3);  // C-D
      adj[3].push_back(2);

      // Imprimindo a lista
      for (int i = 0; i < n; i++) {
          cout << i << ": ";
          for (int v : adj[i]) cout << v << " ";
          cout << endl;
      }
      return 0;
  }
  ```

---

### 3. Lista de Arestas
- **Definição**:
  - Representa o grafo como uma lista de todas as arestas.
  - Cada aresta é representada como um par (ou tupla) `(u, v, peso)`.

- **Características**:
  - Simples de implementar.
  - Útil para algoritmos baseados em arestas, como Kruskal.
  - Requer **`O(m)`** de espaço.

- **Exemplo**:
  Grafo:
  ```
    (A)----(B)
     |      |
    (C)----(D)
  ```
  Lista de Arestas:
  ```
  (A, B)
  (A, C)
  (B, D)
  (C, D)
  ```

- **Código Exemplo**:
  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {
      vector<tuple<int, int, int>> edges;

      // Adicionando arestas
      edges.push_back({0, 1, 1});  // A-B
      edges.push_back({0, 2, 1});  // A-C
      edges.push_back({1, 3, 1});  // B-D
      edges.push_back({2, 3, 1});  // C-D

      // Imprimindo a lista de arestas
      for (auto [u, v, w] : edges) {
          cout << u << " -> " << v << " (peso: " << w << ")" << endl;
      }

      return 0;
  }
  ```

---

### Comparação entre Representações
| Representação          | Espaço             | Vantagens                                | Desvantagens                       |
|------------------------|--------------------|------------------------------------------|------------------------------------|
| Matriz de Adjacência   | `O(n^2)`          | Fácil acesso a arestas                  | Ineficiente para grafos esparsos  |
| Lista de Adjacência    | `O(n + m)`        | Eficiente para grafos esparsos          | Mais complexa para verificação direta de arestas |
| Lista de Arestas       | `O(m)`            | Simples de implementar                  | Não eficiente para verificar vizinhos |

---