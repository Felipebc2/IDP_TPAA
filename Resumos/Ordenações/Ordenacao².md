# Resumo: Ordenação Parcial, Ordenação Total e Ordenações Quadráticas

## Ordenação Parcial e Total
### Ordenação Parcial
- **Definição**:
  - Uma relação de ordem é dita **parcial** quando nem todos os elementos de um conjunto podem ser comparados.
  - Exemplo: Strings ordenadas por comprimento:
    - `"abc" < "abcd"`, mas `"abc"` e `"xyz"` não podem ser comparadas diretamente.

- **Propriedades**:
  1. Reflexividade: Para todo elemento `a`, temos `a ≤ a`.
  2. Antissimetria: Se `a ≤ b` e `b ≤ a`, então `a = b`.
  3. Transitividade: Se `a ≤ b` e `b ≤ c`, então `a ≤ c`.

---

### Ordenação Total
- **Definição**:
  - Uma relação de ordem é dita **total** quando todos os elementos podem ser comparados entre si.
  - Exemplo: Números inteiros ordenados.

- **Implementação na Prática**:
  - Em C++, a relação de ordem total é definida por uma função de comparação:
    ```cpp
    bool comparar(int a, int b) {
        return a < b;
    }
    ```

---

## Características de um Algoritmo de Ordenação
- **Interno vs. Externo**:
  - **Interno**: Todos os dados estão na memória principal.
  - **Externo**: Parte dos dados está em memória secundária.

- **In-place vs. Not-in-place**:
  - **In-place**: Usa apenas a memória adicional mínima.
  - **Not-in-place**: Requer memória auxiliar adicional significativa.

- **Estável vs. Instável**:
  - **Estável**: Mantém a ordem relativa de elementos iguais.
  - **Instável**: Não mantém a ordem relativa de elementos iguais.

---

## Ordenações Quadráticas
### Bubble Sort
- **Definição**:
  - Algoritmo estável e in-place.
  - Compara pares de elementos adjacentes e os troca se estiverem fora de ordem.
  - Complexidade: **`O(N^2)`**.

- **Código Exemplo**:
  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  void bubbleSort(vector<int>& arr) {
      int n = arr.size();
      for (int i = 0; i < n - 1; i++) {
          for (int j = 0; j < n - i - 1; j++) {
              if (arr[j] > arr[j + 1]) {
                  swap(arr[j], arr[j + 1]);
              }
          }
      }
  }

  int main() {
      vector<int> arr = {5, 3, 8, 6, 2};
      bubbleSort(arr);

      for (int x : arr) cout << x << " ";  // Saída: 2 3 5 6 8
      return 0;
  }
  ```

---

### Selection Sort
- **Definição**:
  - Algoritmo in-place e instável.
  - Seleciona o menor elemento e o coloca na posição correta.
  - Complexidade: **`O(N^2)`**.

- **Código Exemplo**:
  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  void selectionSort(vector<int>& arr) {
      int n = arr.size();
      for (int i = 0; i < n - 1; i++) {
          int minIdx = i;
          for (int j = i + 1; j < n; j++) {
              if (arr[j] < arr[minIdx]) {
                  minIdx = j;
              }
          }
          swap(arr[i], arr[minIdx]);
      }
  }

  int main() {
      vector<int> arr = {5, 3, 8, 6, 2};
      selectionSort(arr);

      for (int x : arr) cout << x << " ";  // Saída: 2 3 5 6 8
      return 0;
  }
  ```

---

### Insertion Sort
- **Definição**:
  - Algoritmo estável e in-place.
  - Insere cada elemento na posição correta em relação aos anteriores.
  - Complexidade: **`O(N^2)`** no pior caso, **`O(N)`** no melhor caso (vetor já ordenado).

- **Código Exemplo**:
  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  void insertionSort(vector<int>& arr) {
      int n = arr.size();
      for (int i = 1; i < n; i++) {
          int key = arr[i];
          int j = i - 1;
          while (j >= 0 && arr[j] > key) {
              arr[j + 1] = arr[j];
              j--;
          }
          arr[j + 1] = key;
      }
  }

  int main() {
      vector<int> arr = {5, 3, 8, 6, 2};
      insertionSort(arr);

      for (int x : arr) cout << x << " ";  // Saída: 2 3 5 6 8
      return 0;
  }
  ```

---