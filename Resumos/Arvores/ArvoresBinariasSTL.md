# Resumo: Árvores Binárias de Busca STL

## Árvore Binária de Busca STL
- **Definição**:
  - A biblioteca padrão do C++ (`STL`) oferece contêineres como `set` e `map`, que utilizam internamente uma árvore binária de busca balanceada (geralmente implementada como Red-Black Tree).
  - Proporcionam operações eficientes com complexidade **`O(log N)`** para inserção, remoção e busca.

---

## Set
- **Definição**:
  - Contêiner que armazena elementos únicos em ordem crescente (por padrão).
  - Implementado como uma árvore binária de busca balanceada.

### Construção de um Set
- **Código Exemplo**:
  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {
      set<int> s = {10, 20, 30};

      // Adicionando elementos
      s.insert(15);
      s.insert(20);  // Não será adicionado (elementos únicos)

      // Imprimindo os elementos
      for (int x : s) {
          cout << x << " ";  // Saída: 10 15 20 30
      }

      return 0;
  }
  ```

---

### Principais Operações
- **Inserção**:
  - Adiciona elementos únicos ao conjunto.
  - Exemplo:
    ```cpp
    s.insert(25);
    ```

- **Busca**:
  - Verifica se um elemento está no conjunto.
  - Exemplo:
    ```cpp
    if (s.find(15) != s.end()) {
        cout << "15 encontrado!" << endl;
    }
    ```

- **Remoção**:
  - Remove um elemento do conjunto.
  - Exemplo:
    ```cpp
    s.erase(10);
    ```

---

### Operações Relevantes
- **Tamanho**:
  - Retorna o número de elementos.
  - Exemplo:
    ```cpp
    cout << "Tamanho: " << s.size() << endl;
    ```

- **Acesso ao Menor e Maior Elemento**:
  - `*s.begin()`: Menor elemento.
  - `*s.rbegin()`: Maior elemento.
  - Exemplo:
    ```cpp
    cout << "Menor: " << *s.begin() << ", Maior: " << *s.rbegin() << endl;
    ```

- **Lower Bound e Upper Bound**:
  - `lower_bound(x)`: Retorna o menor elemento >= `x`.
  - `upper_bound(x)`: Retorna o menor elemento > `x`.
  - Exemplo:
    ```cpp
    auto lb = s.lower_bound(15);  // Iterador para 15
    auto ub = s.upper_bound(15);  // Iterador para 20
    ```

---

## Multiset
- **Definição**:
  - Permite armazenar múltiplas cópias de um mesmo elemento.
  - Implementado como uma árvore binária de busca balanceada.

- **Diferença para Set**:
  - No `set`, cada elemento é único.
  - No `multiset`, elementos repetidos são permitidos.

- **Código Exemplo**:
  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {
      multiset<int> ms = {10, 20, 10, 30};

      // Contagem de um elemento
      cout << "10 aparece " << ms.count(10) << " vezes." << endl;  // Saída: 2

      // Removendo todas as ocorrências de 10
      ms.erase(10);

      for (int x : ms) {
          cout << x << " ";  // Saída: 20 30
      }

      return 0;
  }
  ```

---

## Map
- **Definição**:
  - Contêiner que armazena pares de chave e valor em ordem crescente pela chave.
  - Implementado como uma árvore binária de busca balanceada.

- **Diferença para Set**:
  - `set`: Contém apenas elementos individuais.
  - `map`: Contém pares (`chave, valor`).

- **Principais Operações**:
  - **Inserção**:
    ```cpp
    map<string, int> m;
    m["Alice"] = 25;
    m["Bob"] = 30;
    ```

  - **Busca**:
    ```cpp
    if (m.find("Alice") != m.end()) {
        cout << "Alice está no mapa." << endl;
    }
    ```

  - **Remoção**:
    ```cpp
    m.erase("Alice");
    ```

- **Código Exemplo**:
  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {
      map<string, int> m;

      // Inserindo elementos
      m["Alice"] = 25;
      m["Bob"] = 30;

      // Imprimindo os pares
      for (auto [key, value] : m) {
          cout << key << ": " << value << endl;
      }

      // Busca
      cout << "Idade de Alice: " << m["Alice"] << endl;  // Saída: 25

      return 0;
  }
  ```

---