# Resumo: Heaps

## O que é uma Heap?
- **Definição**:
  - Estrutura de dados baseada em árvore binária que mantém a propriedade de **ordem de heap**.
  - Existem dois tipos:
    1. **Min-Heap**: O valor mínimo é sempre a raiz.
    2. **Max-Heap**: O valor máximo é sempre a raiz.

- **Aplicações**:
  - Fila de prioridade.
  - Algoritmos de ordenação (Heap Sort).
  - Algoritmos de caminho mínimo (Dijkstra, Prim).

---

## Heap Binária
- **Definição**:
  - Implementada como uma árvore binária completa:
    - Todos os níveis estão preenchidos, exceto possivelmente o último.
    - Os nós são preenchidos da esquerda para a direita no último nível.

---

## Propriedade Fundamental da Heap Binária
- **Min-Heap**:
  - Para cada nó `i`:
    - O valor de `i` é menor ou igual ao valor de seus filhos.
- **Max-Heap**:
  - Para cada nó `i`:
    - O valor de `i` é maior ou igual ao valor de seus filhos.

---

## Heap como Árvores
- Representada como uma árvore binária:
  - **Min-Heap**: A raiz tem o menor valor.
  - **Max-Heap**: A raiz tem o maior valor.

### Exemplo (Max-Heap):
```
         50
       /    \
      30     40
     /  \   /  \
    10  20 35  25
```

---

## Heap como Vetores
- Implementada como um vetor:
  - O nó pai de um índice `i` está em `(i-1)/2`.
  - O filho esquerdo de `i` está em `2*i + 1`.
  - O filho direito de `i` está em `2*i + 2`.

### Exemplo:
- Max-Heap `[50, 30, 40, 10, 20, 35, 25]`.

---

## Inserção em Heaps
- **Processo**:
  1. Adiciona o elemento no final do vetor.
  2. Sobe o elemento pela árvore enquanto ele violar a propriedade de heap.

- **Código Exemplo (Inserção em Max-Heap)**:
  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  void heapifyUp(vector<int>& heap, int idx) {
      while (idx > 0 && heap[(idx - 1) / 2] < heap[idx]) {
          swap(heap[idx], heap[(idx - 1) / 2]);
          idx = (idx - 1) / 2;
      }
  }

  void insert(vector<int>& heap, int val) {
      heap.push_back(val);
      heapifyUp(heap, heap.size() - 1);
  }

  int main() {
      vector<int> heap = {50, 30, 40, 10, 20, 35, 25};
      insert(heap, 45);

      for (int x : heap) cout << x << " ";  // Saída: 50 45 40 30 20 35 25 10
      return 0;
  }
  ```

---

## Extração do Elemento Mínimo (Min-Heap)
- **Processo**:
  1. Remove a raiz (menor elemento).
  2. Substitui a raiz pelo último elemento.
  3. Desce o elemento pela árvore para restaurar a propriedade de heap.

- **Código Exemplo (Extração de Min-Heap)**:
  ```cpp
  void heapifyDown(vector<int>& heap, int idx) {
      int n = heap.size();
      int smallest = idx;
      int left = 2 * idx + 1, right = 2 * idx + 2;

      if (left < n && heap[left] < heap[smallest]) smallest = left;
      if (right < n && heap[right] < heap[smallest]) smallest = right;

      if (smallest != idx) {
          swap(heap[idx], heap[smallest]);
          heapifyDown(heap, smallest);
      }
  }

  int extractMin(vector<int>& heap) {
      int minVal = heap[0];
      heap[0] = heap.back();
      heap.pop_back();
      heapifyDown(heap, 0);
      return minVal;
  }

  int main() {
      vector<int> heap = {10, 20, 15, 30, 40};
      cout << "Mínimo extraído: " << extractMin(heap) << endl;  // Saída: 10
      return 0;
  }
  ```

---

## Construção de Heap em Tempo Linear
- **Definição**:
  - Constrói uma heap a partir de um vetor desordenado.
  - Utiliza o processo de heapificação (heapify) para cada nó não folha, de baixo para cima.

- **Código Exemplo**:
  ```cpp
  void buildHeap(vector<int>& heap) {
      int n = heap.size();
      for (int i = n / 2 - 1; i >= 0; i--) {
          heapifyDown(heap, i);
      }
  }

  int main() {
      vector<int> heap = {40, 20, 10, 30, 50, 15, 25};
      buildHeap(heap);

      for (int x : heap) cout << x << " ";  // Saída (Max-Heap): 50 40 25 30 20 15 10
      return 0;
  }
  ```

---