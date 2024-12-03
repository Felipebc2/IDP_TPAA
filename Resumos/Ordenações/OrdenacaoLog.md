# Resumo: Ordenações Linearítmicas e Ordenação em C++

## Merge Sort
- **Definição**:
  - Algoritmo baseado no paradigma **dividir e conquistar**.
  - Divide o vetor em duas partes, ordena cada uma delas recursivamente e as combina.
  - Complexidade: **`O(N log N)`** no pior e melhor caso.
  - Não é in-place (requer memória adicional), mas é estável.

- **Funcionamento**:
  1. Divida o vetor em duas metades.
  2. Ordene recursivamente as duas metades.
  3. Funda as metades ordenadas em um único vetor.

- **Código Exemplo**:
  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  void merge(vector<int>& arr, int left, int mid, int right) {
      vector<int> temp(right - left + 1);
      int i = left, j = mid + 1, k = 0;

      while (i <= mid && j <= right) {
          if (arr[i] <= arr[j]) {
              temp[k++] = arr[i++];
          } else {
              temp[k++] = arr[j++];
          }
      }

      while (i <= mid) temp[k++] = arr[i++];
      while (j <= right) temp[k++] = arr[j++];

      for (int i = 0; i < temp.size(); i++) {
          arr[left + i] = temp[i];
      }
  }

  void mergeSort(vector<int>& arr, int left, int right) {
      if (left >= right) return;

      int mid = left + (right - left) / 2;
      mergeSort(arr, left, mid);
      mergeSort(arr, mid + 1, right);
      merge(arr, left, mid, right);
  }

  int main() {
      vector<int> arr = {5, 3, 8, 6, 2, 7};
      mergeSort(arr, 0, arr.size() - 1);

      for (int x : arr) cout << x << " ";  // Saída: 2 3 5 6 7 8
      return 0;
  }
  ```

---

## Quick Sort
- **Definição**:
  - Algoritmo baseado em **dividir e conquistar**, mas com particionamento baseado em um pivô.
  - Escolhe um pivô, posiciona-o na posição correta e organiza os elementos menores à esquerda e os maiores à direita.
  - Complexidade:
    - **Média**: **`O(N log N)`**.
    - **Pior caso**: **`O(N^2)`** (ocorre quando o pivô é mal escolhido, como em um vetor já ordenado).

- **Funcionamento**:
  1. Escolha um pivô (geralmente o último elemento ou aleatório).
  2. Particione o vetor em duas partes.
  3. Aplique o Quick Sort recursivamente em cada partição.

- **Código Exemplo**:
  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int partition(vector<int>& arr, int left, int right) {
      int pivot = arr[right];
      int i = left - 1;

      for (int j = left; j < right; j++) {
          if (arr[j] < pivot) {
              swap(arr[++i], arr[j]);
          }
      }
      swap(arr[i + 1], arr[right]);
      return i + 1;
  }

  void quickSort(vector<int>& arr, int left, int right) {
      if (left < right) {
          int pi = partition(arr, left, right);
          quickSort(arr, left, pi - 1);
          quickSort(arr, pi + 1, right);
      }
  }

  int main() {
      vector<int> arr = {5, 3, 8, 6, 2, 7};
      quickSort(arr, 0, arr.size() - 1);

      for (int x : arr) cout << x << " ";  // Saída: 2 3 5 6 7 8
      return 0;
  }
  ```

---

## Ordenação em C++
- **Definição**:
  - A STL do C++ oferece a função **`sort`** na biblioteca `<algorithm>`.
  - Baseada em uma versão otimizada do Quick Sort chamada IntroSort, que combina Quick Sort, Heap Sort e Insertion Sort.

- **Vantagens**:
  - Altamente otimizada e fácil de usar.
  - Complexidade: **`O(N log N)`**.

- **Código Exemplo**:
  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {
      vector<int> arr = {5, 3, 8, 6, 2, 7};

      // Ordenação padrão (crescente)
      sort(arr.begin(), arr.end());

      cout << "Ordenado (crescente): ";
      for (int x : arr) cout << x << " ";  // Saída: 2 3 5 6 7 8
      cout << endl;

      // Ordenação personalizada (decrescente)
      sort(arr.begin(), arr.end(), greater<int>());

      cout << "Ordenado (decrescente): ";
      for (int x : arr) cout << x << " ";  // Saída: 8 7 6 5 3 2
      cout << endl;

      return 0;
  }
  ```

---