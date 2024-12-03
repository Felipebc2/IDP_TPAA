# Resumo: Hashes

## Motivação
- **Problema**:
  - Estruturas de dados tradicionais, como arrays e árvores, podem ser ineficientes para certas operações de busca, inserção e remoção.
  - Busca em árvores binárias: **`O(log N)`** (em média).
  - Busca sequencial: **`O(N)`** no pior caso.

- **Solução**:
  - Usar **tabelas hash**, que permitem realizar operações de busca, inserção e remoção em **tempo constante (`O(1)`)** no caso médio.

---

## Hashes
- **Definição**:
  - Estruturas de dados que usam uma **função hash** para mapear chaves a índices em um array.
  - Armazena pares chave-valor.

- **Vantagens**:
  - Operações rápidas.
  - Ideal para grandes conjuntos de dados onde operações de busca são frequentes.

- **Limitações**:
  - Possibilidade de colisões.
  - Desempenho depende de uma boa função hash.

---

## Exemplo de Função Hash
- **Função hash básica**:
  - Converte uma chave (por exemplo, string ou número) em um índice de um array.
  - Exemplo com inteiros:
    ```cpp
    int hashFunction(int key, int tableSize) {
        return key % tableSize;  // Retorna o índice no intervalo [0, tableSize-1]
    }
    ```

- **Código Exemplo**:
  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int hashFunction(int key, int tableSize) {
      return key % tableSize;
  }

  int main() {
      int tableSize = 10;
      int key = 123;
      cout << "Índice da chave: " << hashFunction(key, tableSize) << endl;  // Saída: 3
      return 0;
  }
  ```

---

## Colisão
- **Definição**:
  - Ocorre quando duas ou mais chaves diferentes são mapeadas para o mesmo índice.
- **Soluções para colisões**:
  1. **Encadeamento**:
     - Cada posição da tabela é uma lista vinculada que armazena todas as chaves que colidem nesse índice.
     - Exemplo:
       ```cpp
       vector<list<int>> hashTable(10);

       void insert(int key) {
           int idx = key % 10;
           hashTable[idx].push_back(key);
       }
       ```
  2. **Endereçamento aberto**:
     - Procura a próxima posição disponível na tabela.
     - Métodos:
       - Linear (`h(x) + i`).
       - Quadrático (`h(x) + i^2`).
       - Dupla hash (`h1(x) + i * h2(x)`).

---

## Outros Exemplos de Funções de Hash
1. **Para Strings**:
   - Exemplo básico:
     ```cpp
     int hashString(string key, int tableSize) {
         int hash = 0;
         for (char c : key) {
             hash = (hash * 31 + c) % tableSize;
         }
         return hash;
     }
     ```

   - **Código Exemplo**:
     ```cpp
     #include <bits/stdc++.h>
     using namespace std;

     int hashString(string key, int tableSize) {
         int hash = 0;
         for (char c : key) {
             hash = (hash * 31 + c) % tableSize;
         }
         return hash;
     }

     int main() {
         string key = "OpenAI";
         int tableSize = 10;
         cout << "Índice da string: " << hashString(key, tableSize) << endl;  // Saída: Exemplo, 7
         return 0;
     }
     ```

2. **Hash de Números Flutuantes**:
   - Converte o número em um inteiro usando a representação de bits antes de calcular o hash.
   - Exemplo:
     ```cpp
     int hashFloat(float key, int tableSize) {
         int intKey = *reinterpret_cast<int*>(&key);
         return intKey % tableSize;
     }
     ```

---

# Resumo: Endereçamento Aberto

## Endereçamento Aberto - Definição
- **Definição**:
  - Método de resolução de colisões em tabelas hash.
  - Em vez de armazenar múltiplas chaves no mesmo índice (como no encadeamento), as chaves são armazenadas diretamente na tabela.
  - Quando ocorre uma colisão:
    - Procura-se uma posição alternativa na tabela usando uma **função de sondagem**.

- **Características**:
  - Reduz a necessidade de memória extra para listas encadeadas.
  - Requer uma boa função de sondagem para evitar longas cadeias de colisões (aglomeração).

- **Funcionamento**:
  - O índice inicial é calculado pela função hash.
  - Se a posição estiver ocupada, utiliza-se uma função de sondagem para encontrar a próxima posição disponível.

---

## Tipos de Sondagem

### 1. Sondagem Linear
- **Descrição**:
  - Procura a próxima posição disponível incrementando o índice de forma linear.
  - Fórmula: **`h(k, i) = (h(k) + i) % tableSize`**, onde:
    - `k`: chave.
    - `i`: tentativa (0, 1, 2, ...).
    - `tableSize`: tamanho da tabela.

- **Vantagem**:
  - Simples de implementar.
- **Desvantagem**:
  - Pode causar **aglomeração primária**: longas sequências de índices ocupados.

- **Exemplo de Código**:
  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int hashFunction(int key, int tableSize) {
      return key % tableSize;
  }

  int linearProbing(vector<int>& table, int key) {
      int idx = hashFunction(key, table.size());
      int i = 0;

      while (table[(idx + i) % table.size()] != -1) {
          i++;
      }

      return (idx + i) % table.size();
  }

  int main() {
      vector<int> hashTable(10, -1);  // Inicializa a tabela com -1 (vazia)
      int key = 23;
      int idx = linearProbing(hashTable, key);
      hashTable[idx] = key;

      cout << "Chave 23 inserida na posição: " << idx << endl;
      return 0;
  }
  ```

---

### 2. Sondagem Quadrática
- **Descrição**:
  - Aumenta o índice com incrementos quadráticos.
  - Fórmula: **`h(k, i) = (h(k) + c1 * i + c2 * i^2) % tableSize`**, onde:
    - `c1` e `c2` são constantes.
- **Vantagem**:
  - Reduz a aglomeração primária.
- **Desvantagem**:
  - Pode causar **aglomeração secundária** (chaves que colidem no mesmo índice inicial).

- **Exemplo de Código**:
  ```cpp
  int quadraticProbing(vector<int>& table, int key, int c1, int c2) {
      int idx = hashFunction(key, table.size());
      int i = 0;

      while (table[(idx + c1 * i + c2 * i * i) % table.size()] != -1) {
          i++;
      }

      return (idx + c1 * i + c2 * i * i) % table.size();
  }
  ```

---

### 3. Duplo Hashing
- **Descrição**:
  - Usa uma segunda função hash para determinar o incremento.
  - Fórmula: **`h(k, i) = (h1(k) + i * h2(k)) % tableSize`**, onde:
    - `h1(k)` e `h2(k)` são funções hash independentes.
    - `h2(k)` não pode ser zero para evitar laços infinitos.

- **Vantagem**:
  - Evita tanto aglomeração primária quanto secundária.
- **Desvantagem**:
  - Mais complexo de implementar.

- **Exemplo de Código**:
  ```cpp
  int hashFunction2(int key) {
      return 7 - (key % 7);  // Exemplo de segunda função hash
  }

  int doubleHashing(vector<int>& table, int key) {
      int idx1 = hashFunction(key, table.size());
      int idx2 = hashFunction2(key);
      int i = 0;

      while (table[(idx1 + i * idx2) % table.size()] != -1) {
          i++;
      }

      return (idx1 + i * idx2) % table.size();
  }
  ```

---

## Visualização Interativa
- A ferramenta [Visualization: Closed Hashing](https://www.cs.usfca.edu/~galles/visualization/ClosedHash.html) pode ser usada para entender o funcionamento do endereçamento aberto com diferentes tipos de sondagem.

---

# Resumo: Hashes e Encadeamento

## Encadeamento (Chaining)
- **Definição**:
  - Método de resolução de colisões em tabelas hash.
  - Cada posição da tabela hash armazena uma lista vinculada (ou contêiner similar) de elementos que colidem no mesmo índice.

- **Características**:
  - Não há limite no número de elementos por posição.
  - A complexidade para busca, inserção e remoção depende do tamanho das listas.

- **Vantagem**:
  - Evita o problema de aglomeração (como no endereçamento aberto).
- **Desvantagem**:
  - Requer memória adicional para as listas.

---

## Hashes - Encadeamento
### Estrutura da Tabela
- Cada índice contém uma lista que armazena todas as chaves que colidem naquele índice.

### Operações:
1. **Inserção**:
   - Calcula o índice usando a função hash.
   - Adiciona o elemento à lista correspondente.
2. **Busca**:
   - Calcula o índice e percorre a lista vinculada para encontrar o elemento.
3. **Remoção**:
   - Calcula o índice e remove o elemento da lista vinculada.

---

### Código Exemplo: Hash com Encadeamento
```cpp
#include <bits/stdc++.h>
using namespace std;

class HashTable {
    vector<list<int>> table;
    int tableSize;

    int hashFunction(int key) {
        return key % tableSize;
    }

public:
    HashTable(int size) : tableSize(size) {
        table.resize(size);
    }

    void insert(int key) {
        int idx = hashFunction(key);
        table[idx].push_back(key);
    }

    bool search(int key) {
        int idx = hashFunction(key);
        for (int x : table[idx]) {
            if (x == key) return true;
        }
        return false;
    }

    void remove(int key) {
        int idx = hashFunction(key);
        table[idx].remove(key);
    }

    void display() {
        for (int i = 0; i < tableSize; i++) {
            cout << i << ": ";
            for (int x : table[i]) {
                cout << x << " -> ";
            }
            cout << "null" << endl;
        }
    }
};

int main() {
    HashTable ht(10);
    ht.insert(15);
    ht.insert(25);
    ht.insert(35);
    ht.display();

    cout << "15 encontrado: " << (ht.search(15) ? "Sim" : "Não") << endl;

    ht.remove(15);
    ht.display();

    return 0;
}
```

---

## Hashes em C++
### unordered_set
- **Definição**:
  - Contêiner da STL para armazenar elementos únicos.
  - Baseado em tabelas hash.
  - Complexidade média para inserção, busca e remoção: **`O(1)`**.

- **Código Exemplo**:
  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {
      unordered_set<int> uset;

      // Inserindo elementos
      uset.insert(10);
      uset.insert(20);
      uset.insert(30);

      // Busca
      cout << "20 encontrado: " << (uset.count(20) ? "Sim" : "Não") << endl;

      // Removendo elementos
      uset.erase(20);

      for (int x : uset) {
          cout << x << " ";
      }
      // Saída: 10 30 (ordem não garantida)

      return 0;
  }
  ```

---

### unordered_map
- **Definição**:
  - Contêiner da STL para armazenar pares chave-valor.
  - Baseado em tabelas hash.
  - Complexidade média para inserção, busca e remoção: **`O(1)`**.

- **Código Exemplo**:
  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {
      unordered_map<string, int> umap;

      // Inserindo pares chave-valor
      umap["Alice"] = 25;
      umap["Bob"] = 30;

      // Acessando valores
      cout << "Idade de Alice: " << umap["Alice"] << endl;

      // Busca
      if (umap.find("Bob") != umap.end()) {
          cout << "Bob encontrado!" << endl;
      }

      // Iteração
      for (auto [key, value] : umap) {
          cout << key << ": " << value << endl;
      }

      return 0;
  }
  ```

---

## Visualização Interativa
- A ferramenta [Visualization: Open Hashing](https://www.cs.usfca.edu/~galles/visualization/OpenHash.html) pode ser usada para compreender o funcionamento do encadeamento em tabelas hash.

---
