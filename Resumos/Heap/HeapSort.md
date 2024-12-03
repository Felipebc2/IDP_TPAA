# Resumo: Heap Sort e Ordenação com Heaps

## Heap Sort
- **Definição**:
  - Algoritmo de ordenação baseado no uso de uma **heap binária**.
  - Dois passos principais:
    1. Construir uma heap (Max-Heap ou Min-Heap).
    2. Repetidamente extrair o maior (ou menor) elemento e reorganizar a heap.

- **Características**:
  - **Complexidade de Tempo**:
    - Construção da heap: **`O(N)`**.
    - Extração repetida: **`O(N log N)`**.
    - Total: **`O(N log N)`**.
  - **Espaço**:
    - Ordenação in-place (se implementado corretamente, sem memória adicional).
  - **Não estável**:
    - A ordem relativa de elementos iguais pode ser alterada.

---

### Algoritmo do Heap Sort
1. **Construir uma Max-Heap**:
   - Garante que o maior elemento esteja no topo.
2. **Ordenar os Elementos**:
   - Troca o maior elemento (raiz) com o último elemento.
   - Reduz o tamanho da heap e reorganiza (heapify) para manter a propriedade de Max-Heap.

---

### Código Exemplo: Heap Sort (Max-Heap)
```cpp
#include <bits/stdc++.h>
using namespace std;

void heapify(vector<int>& arr, int n, int i) {
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < n && arr[left] > arr[largest]) {
        largest = left;
    }
    if (right < n && arr[right] > arr[largest]) {
        largest = right;
    }

    if (largest != i) {
        swap(arr[i], arr[largest]);
        heapify(arr, n, largest);
    }
}

void heapSort(vector<int>& arr) {
    int n = arr.size();

    // Passo 1: Construir a Max-Heap
    for (int i = n / 2 - 1; i >= 0; i--) {
        heapify(arr, n, i);
    }

    // Passo 2: Extrair elementos da heap
    for (int i = n - 1; i > 0; i--) {
        swap(arr[0], arr[i]);
        heapify(arr, i, 0);
    }
}

int main() {
    vector<int> arr = {4, 10, 3, 5, 1};
    heapSort(arr);

    for (int x : arr) {
        cout << x << " ";  // Saída: 1 3 4 5 10
    }
    return 0;
}
```

---

## Ordenação e Heaps
- **Como funciona**:
  - **Max-Heap**:
    - Ordena os elementos em ordem crescente.
  - **Min-Heap**:
    - Ordena os elementos em ordem decrescente.

- **Uso com STL**:
  - A biblioteca padrão do C++ fornece funções como **`make_heap`**, **`push_heap`**, e **`pop_heap`** para manipulação de heaps e ordenação.

### Código Exemplo: Ordenação com Heaps usando STL
```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr = {4, 10, 3, 5, 1};

    // Construindo a Max-Heap
    make_heap(arr.begin(), arr.end());

    // Ordenando os elementos
    sort_heap(arr.begin(), arr.end());

    for (int x : arr) {
        cout << x << " ";  // Saída: 1 3 4 5 10
    }

    return 0;
}
```

---

### Comparação entre Heap Sort e Outros Algoritmos de Ordenação
- **Vantagens**:
  - Complexidade garantida de **`O(N log N)`**, mesmo no pior caso.
  - Ordenação in-place (não requer espaço extra significativo).
- **Desvantagens**:
  - Não é estável, o que pode ser uma limitação dependendo do caso de uso.
  - Geralmente mais lento na prática do que o Quick Sort, devido ao maior número de operações de troca.

---