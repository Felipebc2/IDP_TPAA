# Resumo: Filas de Prioridade

## O que é uma Fila de Prioridade?
- **Definição**:
  - Estrutura de dados que processa elementos com base em sua **prioridade**.
  - Pode ser implementada usando uma **heap binária**.
  - Existem dois tipos:
    1. **Max-Heap**: O maior elemento tem a maior prioridade.
    2. **Min-Heap**: O menor elemento tem a maior prioridade.

- **Operações Principais**:
  - **Inserção** (`push`): Adiciona um elemento à fila mantendo a ordem de prioridade.
  - **Remoção** (`pop`): Remove o elemento de maior prioridade.
  - **Consulta** (`top`): Retorna o elemento de maior prioridade sem removê-lo.

---

## Filas de Prioridade - Implementação Manual
- Usando uma **heap binária**.

### Código Exemplo (Max-Heap)
```cpp
#include <bits/stdc++.h>
using namespace std;

class PriorityQueue {
    vector<int> heap;

    void heapifyUp(int idx) {
        while (idx > 0 && heap[(idx - 1) / 2] < heap[idx]) {
            swap(heap[idx], heap[(idx - 1) / 2]);
            idx = (idx - 1) / 2;
        }
    }

    void heapifyDown(int idx) {
        int n = heap.size();
        int largest = idx;
        int left = 2 * idx + 1, right = 2 * idx + 2;

        if (left < n && heap[left] > heap[largest]) largest = left;
        if (right < n && heap[right] > heap[largest]) largest = right;

        if (largest != idx) {
            swap(heap[idx], heap[largest]);
            heapifyDown(largest);
        }
    }

public:
    void push(int val) {
        heap.push_back(val);
        heapifyUp(heap.size() - 1);
    }

    int top() {
        if (!heap.empty()) return heap[0];
        throw runtime_error("Fila vazia!");
    }

    void pop() {
        if (heap.empty()) throw runtime_error("Fila vazia!");
        heap[0] = heap.back();
        heap.pop_back();
        heapifyDown(0);
    }

    bool empty() {
        return heap.empty();
    }
};

int main() {
    PriorityQueue pq;
    pq.push(10);
    pq.push(20);
    pq.push(15);

    cout << "Topo: " << pq.top() << endl;  // Saída: 20
    pq.pop();
    cout << "Novo Topo: " << pq.top() << endl;  // Saída: 15

    return 0;
}
```

---

## Filas de Prioridade - STL
- A STL do C++ fornece o contêiner **`priority_queue`** para implementar filas de prioridade.

### Características:
- Por padrão, implementa uma **Max-Heap**.
- Para criar uma **Min-Heap**, é necessário usar um comparador customizado.

---

### Código Exemplo (Max-Heap - Padrão)
```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    priority_queue<int> pq;

    // Inserindo elementos
    pq.push(10);
    pq.push(20);
    pq.push(15);

    // Consultando e removendo o topo
    cout << "Topo: " << pq.top() << endl;  // Saída: 20
    pq.pop();
    cout << "Novo Topo: " << pq.top() << endl;  // Saída: 15

    return 0;
}
```

---

### Código Exemplo (Min-Heap)
- Utiliza o comparador **`greater`** para transformar a fila em uma Min-Heap.
```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    priority_queue<int, vector<int>, greater<int>> pq;

    // Inserindo elementos
    pq.push(10);
    pq.push(20);
    pq.push(15);

    // Consultando e removendo o topo
    cout << "Topo: " << pq.top() << endl;  // Saída: 10
    pq.pop();
    cout << "Novo Topo: " << pq.top() << endl;  // Saída: 15

    return 0;
}
```

---

### Operações Comuns:
- **Inserção (`push`)**:
  ```cpp
  pq.push(25);
  ```
- **Consulta do Topo (`top`)**:
  ```cpp
  int maior = pq.top();
  ```
- **Remoção do Topo (`pop`)**:
  ```cpp
  pq.pop();
  ```
- **Tamanho da Fila**:
  ```cpp
  cout << "Tamanho: " << pq.size() << endl;
  ```
- **Verificar se está vazia**:
  ```cpp
  cout << (pq.empty() ? "Vazia" : "Não vazia") << endl;
  ```

---