# Resumo: Listas

## Lista Encadeada
- **Definição**:
  - Estrutura composta por **nós**, onde cada nó contém:
    - Um valor (informação).
    - Um ponteiro para o próximo nó.
  - Acesso sequencial: conhecido o primeiro elemento (head), é possível acessar todos os outros.

- **Características**:
  - Estrutura linear.
  - Alternativa aos vetores:
    - Desempenho inferior em acesso aleatório (`O(N)`).
    - Superior em inserções e remoções (`O(1)`).

---

### Operações Básicas
#### Inserção no Início (`push_front`)
- Complexidade: **`O(1)`**.
- Passos:
  1. Criar um novo nó.
  2. Preencher o valor (`info`).
  3. Apontar o `next` para o atual `head`.
  4. Atualizar o `head` para o novo nó.

- **Caso especial**:
  - Se a lista estiver vazia, o `tail` também deve apontar para o novo nó.

---

#### Inserção no Final (`push_back`)
- Complexidade: **`O(1)`** (se `tail` for mantido).
- Passos:
  1. Criar um novo nó.
  2. Preencher o valor (`info`).
  3. Apontar o `next` do `tail` para o novo nó.
  4. Atualizar o `tail` para o novo nó.

- **Caso especial**:
  - Se a lista estiver vazia, o `head` também deve apontar para o novo nó.

---

#### Inserção em Posição Arbitrária
- Complexidade: **`O(N)`**.
- Passos:
  1. Localizar a posição de inserção.
  2. Criar um novo nó.
  3. Atualizar os ponteiros:
     - O `next` do nó anterior deve apontar para o novo nó.
     - O `next` do novo nó deve apontar para o próximo nó.

- **Casos especiais**:
  - Inserção em uma lista vazia.
  - Inserção na primeira posição.
  - Inserção em uma posição inválida.

---

#### Remoção no Início (`pop_front`)
- Complexidade: **`O(1)`**.
- Passos:
  1. Armazenar o `head` em uma variável temporária.
  2. Atualizar o `head` para o próximo nó.
  3. Deletar o nó armazenado na variável temporária.

- **Caso especial**:
  - Se a lista ficar vazia, o `tail` deve ser atualizado para `nullptr`.

---

#### Remoção no Final (`pop_back`)
- Complexidade: **`O(N)`** (mesmo com `tail`).
- Passos:
  1. Localizar o penúltimo nó (anterior ao `tail`).
  2. Deletar o nó apontado pelo `tail`.
  3. Atualizar o `tail` para o penúltimo nó.

---

#### Remoção em Posição Arbitrária
- Complexidade: **`O(N)`**.
- Passos:
  1. Localizar o nó anterior ao nó a ser removido.
  2. Atualizar os ponteiros:
     - O `next` do nó anterior deve apontar para o próximo do nó a ser removido.
  3. Deletar o nó desejado.

---

### Implementação em C++
#### Usando `forward_list`
- Contêiner para listas encadeadas simples da STL.
- **Exemplo**:
  ```cpp
  #include <forward_list>
  #include <iostream>

  int main() {
      std::forward_list<int> L;
      L.push_front(10);
      L.push_front(20);
      L.pop_front();
      
      for (auto v : L) {
          std::cout << v << " ";
      }
      return 0;
  }

## Lista Duplamente Encadeada
- **Definição**:
  - Cada nó contém:
    - Valor (`info`).
    - Ponteiro para o próximo nó (`next`).
    - Ponteiro para o nó anterior (`prev`).

- **Características**:
  - Acesso bidirecional.
  - Consome mais memória devido aos ponteiros adicionais.

---

### Operações Básicas
#### Inserção no Início
- Atualiza o `prev` do antigo `head` para o novo nó.
- Complexidade: **`O(1)`**.

#### Inserção no Final
- Atualiza o `next` do antigo `tail` e o `prev` do novo nó.
- Complexidade: **`O(1)`**.

#### Remoção
- Atualiza os ponteiros `next` e `prev` dos nós vizinhos.
- Complexidade: **`O(1)`** (início e fim) ou **`O(N)`** (posição arbitrária).

---

# Exemplos: Listas

## Lista Encadeada - Operações Básicas

### Inserção no Início (`push_front`)
```cpp
#include <iostream>

struct Node {
    int value;
    Node* next;
};

class LinkedList {
    Node* head;

public:
    LinkedList() : head(nullptr) {}

    void push_front(int val) {
        Node* newNode = new Node{val, head};
        head = newNode;
    }

    void print() {
        Node* current = head;
        while (current) {
            std::cout << current->value << " -> ";
            current = current->next;
        }
        std::cout << "nullptr" << std::endl;
    }
};

int main() {
    LinkedList list;
    list.push_front(10);
    list.push_front(20);
    list.push_front(30);
    list.print();  // Saída: 30 -> 20 -> 10 -> nullptr
    return 0;
}
```
### Inserção no Final (`push_back`)
```cpp
#include <iostream>

struct Node {
    int value;
    Node* next;
};

class LinkedList {
    Node* head;

public:
    LinkedList() : head(nullptr) {}

    void push_back(int val) {
        Node* newNode = new Node{val, nullptr};
        if (!head) {
            head = newNode;
            return;
        }
        Node* current = head;
        while (current->next) {
            current = current->next;
        }
        current->next = newNode;
    }

    void print() {
        Node* current = head;
        while (current) {
            std::cout << current->value << " -> ";
            current = current->next;
        }
        std::cout << "nullptr" << std::endl;
    }
};

int main() {
    LinkedList list;
    list.push_back(10);
    list.push_back(20);
    list.push_back(30);
    list.print();  // Saída: 10 -> 20 -> 30 -> nullptr
    return 0;
}
```
### Remoção no início (pop_front)
```cpp
#include <iostream>

struct Node {
    int value;
    Node* next;
};

class LinkedList {
    Node* head;

public:
    LinkedList() : head(nullptr) {}

    void push_front(int val) {
        Node* newNode = new Node{val, head};
        head = newNode;
    }

    void pop_front() {
        if (!head) return;
        Node* temp = head;
        head = head->next;
        delete temp;
    }

    void print() {
        Node* current = head;
        while (current) {
            std::cout << current->value << " -> ";
            current = current->next;
        }
        std::cout << "nullptr" << std::endl;
    }
};

int main() {
    LinkedList list;
    list.push_front(10);
    list.push_front(20);
    list.pop_front();
    list.print();  // Saída: 10 -> nullptr
    return 0;
}
```
# Lista Duplamente Encadeada - Operações Básicas
### Inserção no Início
```cpp
#include <iostream>

struct Node {
    int value;
    Node* next;
    Node* prev;
};

class DoublyLinkedList {
    Node* head;

public:
    DoublyLinkedList() : head(nullptr) {}

    void push_front(int val) {
        Node* newNode = new Node{val, head, nullptr};
        if (head) head->prev = newNode;
        head = newNode;
    }

    void print() {
        Node* current = head;
        while (current) {
            std::cout << current->value << " <-> ";
            current = current->next;
        }
        std::cout << "nullptr" << std::endl;
    }
};

int main() {
    DoublyLinkedList list;
    list.push_front(10);
    list.push_front(20);
    list.print();  // Saída: 20 <-> 10 <-> nullptr
    return 0;
}
```
### Inserção no Final
```cpp
#include <iostream>

struct Node {
    int value;
    Node* next;
    Node* prev;
};

class DoublyLinkedList {
    Node* head;
    Node* tail;

public:
    DoublyLinkedList() : head(nullptr), tail(nullptr) {}

    void push_back(int val) {
        Node* newNode = new Node{val, nullptr, tail};
        if (!head) {
            head = tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }

    void print() {
        Node* current = head;
        while (current) {
            std::cout << current->value << " <-> ";
            current = current->next;
        }
        std::cout << "nullptr" << std::endl;
    }
};

int main() {
    DoublyLinkedList list;
    list.push_back(10);
    list.push_back(20);
    list.print();  // Saída: 10 <-> 20 <-> nullptr
    return 0;
}
```