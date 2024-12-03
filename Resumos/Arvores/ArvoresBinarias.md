# Resumo: Árvores e Árvores Binárias de Busca

## Árvores - Definição
- **Estrutura de Dados Hierárquica**:
  - Formada por **nós**:
    - **Raiz**: Nó principal da árvore.
    - **Filhos**: Nós diretamente conectados ao nó pai.
    - **Folhas**: Nós sem filhos.
  - **Altura**: Número máximo de arestas entre a raiz e uma folha.

- **Propriedades**:
  - Uma árvore com `N` nós possui `N - 1` arestas.
  - Cada nó (exceto a raiz) possui exatamente um nó pai.

---

## Árvores Binárias
- **Definição**:
  - Estrutura em que cada nó possui no máximo dois filhos:
    - Filho **esquerdo**.
    - Filho **direito**.

- **Tipos**:
  1. **Completa**: Todos os níveis estão preenchidos, exceto possivelmente o último.
  2. **Cheia**: Todos os nós têm exatamente 0 ou 2 filhos.
  3. **Balanceada**: Diferença de altura entre as subárvores de qualquer nó é no máximo 1.

---

## Árvore Binária - Implementação
### Estrutura do Nó
```cpp
#include <bits/stdc++.h>
using namespace std;

struct Node {
    int value;
    Node* left;
    Node* right;

    Node(int val) : value(val), left(nullptr), right(nullptr) {}
};
```

---

## Árvore Binária de Busca (ABB)
- **Definição**:
  - Árvore binária em que, para cada nó:
    - Valores menores ficam na subárvore esquerda.
    - Valores maiores ficam na subárvore direita.

---

## Operações em Árvore Binária de Busca
### Inserção
- **Descrição**:
  - Percorre a árvore recursivamente até encontrar a posição correta para inserir o novo nó.

- **Código Exemplo**:
  ```cpp
  Node* insert(Node* root, int val) {
      if (!root) return new Node(val);

      if (val < root->value) {
          root->left = insert(root->left, val);
      } else if (val > root->value) {
          root->right = insert(root->right, val);
      }

      return root;
  }

  int main() {
      Node* root = nullptr;
      root = insert(root, 10);
      insert(root, 5);
      insert(root, 15);

      cout << "Árvore criada!" << endl;
      return 0;
  }
  ```

---

### Busca
- **Descrição**:
  - Procura um valor específico percorrendo a árvore:
    - Vai para a subárvore esquerda se o valor for menor.
    - Vai para a subárvore direita se for maior.

- **Código Exemplo**:
  ```cpp
  bool search(Node* root, int val) {
      if (!root) return false;

      if (root->value == val) return true;

      if (val < root->value) {
          return search(root->left, val);
      } else {
          return search(root->right, val);
      }
  }

  int main() {
      Node* root = nullptr;
      root = insert(root, 10);
      insert(root, 5);
      insert(root, 15);

      cout << (search(root, 5) ? "Encontrado" : "Não encontrado") << endl;  // Saída: Encontrado
      return 0;
  }
  ```

---

### Remoção
- **Descrição**:
  - Três casos principais:
    1. **Nó folha**: Simplesmente remove o nó.
    2. **Nó com um filho**: Substitui o nó pelo filho.
    3. **Nó com dois filhos**: Substitui o valor pelo menor valor na subárvore direita (ou maior na esquerda) e remove o sucessor.

- **Código Exemplo**:
  ```cpp
  Node* findMin(Node* root) {
      while (root->left) root = root->left;
      return root;
  }

  Node* remove(Node* root, int val) {
      if (!root) return nullptr;

      if (val < root->value) {
          root->left = remove(root->left, val);
      } else if (val > root->value) {
          root->right = remove(root->right, val);
      } else {
          // Caso 1: Sem filhos
          if (!root->left && !root->right) {
              delete root;
              return nullptr;
          }
          // Caso 2: Um filho
          if (!root->left) {
              Node* temp = root->right;
              delete root;
              return temp;
          }
          if (!root->right) {
              Node* temp = root->left;
              delete root;
              return temp;
          }
          // Caso 3: Dois filhos
          Node* temp = findMin(root->right);
          root->value = temp->value;
          root->right = remove(root->right, temp->value);
      }

      return root;
  }

  int main() {
      Node* root = nullptr;
      root = insert(root, 10);
      insert(root, 5);
      insert(root, 15);
      root = remove(root, 10);

      cout << (search(root, 10) ? "Encontrado" : "Não encontrado") << endl;  // Saída: Não encontrado
      return 0;
  }
  ```

---

# Resumo: Travessias e Balanceamento em Árvores Binárias de Busca

## Árvores Binária de Busca - Travessias
- **Definição**:
  - Operações que percorrem todos os nós da árvore de maneira específica.

---

### Travessia por Extensão (Breadth-First Search - BFS)
- **Descrição**:
  - Percorre a árvore nível por nível, da esquerda para a direita.

- **Implementação**:
  - Utiliza uma fila para armazenar os nós a serem visitados.

- **Código Exemplo**:
  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  void bfs(Node* root) {
      if (!root) return;

      queue<Node*> fila;
      fila.push(root);

      while (!fila.empty()) {
          Node* atual = fila.front();
          fila.pop();

          cout << atual->value << " ";

          if (atual->left) fila.push(atual->left);
          if (atual->right) fila.push(atual->right);
      }
  }

  int main() {
      Node* root = nullptr;
      root = insert(root, 10);
      insert(root, 5);
      insert(root, 15);
      bfs(root);  // Saída: 10 5 15
      return 0;
  }
  ```

---

### Travessia por Profundidade (Depth-First Search - DFS)
- **Tipos**:
  1. **Pré-Ordem**:
     - Processa o nó atual antes de seus filhos.
     - Ordem: **raiz -> esquerda -> direita**.
  2. **In-Ordem**:
     - Processa o nó esquerdo, depois o atual e, por fim, o direito.
     - Ordem: **esquerda -> raiz -> direita**.
     - Em Árvores Binárias de Busca, retorna os elementos em ordem crescente.
  3. **Pós-Ordem**:
     - Processa os filhos antes do nó atual.
     - Ordem: **esquerda -> direita -> raiz**.

- **Código Exemplo**:
  ```cpp
  void preOrder(Node* root) {
      if (!root) return;
      cout << root->value << " ";
      preOrder(root->left);
      preOrder(root->right);
  }

  void inOrder(Node* root) {
      if (!root) return;
      inOrder(root->left);
      cout << root->value << " ";
      inOrder(root->right);
  }

  void postOrder(Node* root) {
      if (!root) return;
      postOrder(root->left);
      postOrder(root->right);
      cout << root->value << " ";
  }

  int main() {
      Node* root = nullptr;
      root = insert(root, 10);
      insert(root, 5);
      insert(root, 15);

      cout << "Pré-Ordem: ";
      preOrder(root);  // Saída: 10 5 15
      cout << "\nIn-Ordem: ";
      inOrder(root);   // Saída: 5 10 15
      cout << "\nPós-Ordem: ";
      postOrder(root); // Saída: 5 15 10

      return 0;
  }
  ```

---

## Árvores Binária de Busca - Balanceamento
- **Definição**:
  - Árvores desbalanceadas (com muitas inserções em um lado) têm desempenho degradado para **`O(N)`**.
  - O balanceamento mantém a árvore aproximadamente equilibrada, garantindo **`O(log N)`** para buscas e inserções.

---

### Balanceamento por Inserção
- **Métodos de Balanceamento**:
  - **Rotação à Esquerda**:
    - Move o nó direito para ser a nova raiz, ajustando as subárvores.
  - **Rotação à Direita**:
    - Move o nó esquerdo para ser a nova raiz, ajustando as subárvores.

- **Exemplo: Rotação à Direita**:
  ```cpp
  Node* rotateRight(Node* root) {
      Node* newRoot = root->left;
      root->left = newRoot->right;
      newRoot->right = root;
      return newRoot;
  }
  ```

- **Exemplo: Rotação à Esquerda**:
  ```cpp
  Node* rotateLeft(Node* root) {
      Node* newRoot = root->right;
      root->right = newRoot->left;
      newRoot->left = root;
      return newRoot;
  }
  ```

- **Aplicação em Inserção**:
  - Após cada inserção, verifica-se se a árvore está desbalanceada.
  - Caso desbalanceada, realiza-se a rotação necessária.

- **Exemplo Completo com Balanceamento**:
  ```cpp
  int height(Node* root) {
      if (!root) return 0;
      return 1 + max(height(root->left), height(root->right));
  }

  int balanceFactor(Node* root) {
      if (!root) return 0;
      return height(root->left) - height(root->right);
  }

  Node* insertBalanced(Node* root, int val) {
      if (!root) return new Node(val);

      if (val < root->value) {
          root->left = insertBalanced(root->left, val);
      } else if (val > root->value) {
          root->right = insertBalanced(root->right, val);
      }

      int balance = balanceFactor(root);

      // Rotação à Direita
      if (balance > 1 && val < root->left->value) {
          return rotateRight(root);
      }

      // Rotação à Esquerda
      if (balance < -1 && val > root->right->value) {
          return rotateLeft(root);
      }

      // Rotação Dupla Direita-Esquerda
      if (balance > 1 && val > root->left->value) {
          root->left = rotateLeft(root->left);
          return rotateRight(root);
      }

      // Rotação Dupla Esquerda-Direita
      if (balance < -1 && val < root->right->value) {
          root->right = rotateRight(root->right);
          return rotateLeft(root);
      }

      return root;
  }
  ```

---

