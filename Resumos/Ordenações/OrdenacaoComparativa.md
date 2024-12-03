# Resumo: Algoritmos Baseados em Comparação e Ordenação em Tempo Linear

## Algoritmos Baseados em Comparação
- **Definição**:
  - Algoritmos que determinam a ordem relativa de dois elementos comparando-os diretamente.
  - Exemplo: Bubble Sort, Merge Sort, Quick Sort, etc.

- **Limitação Teórica**:
  - Qualquer algoritmo baseado em comparação tem limite inferior de complexidade **`O(N log N)`**.
  - Isso ocorre porque um processo de comparação precisa, no mínimo, distinguir entre **N!** permutações possíveis.

- **Propriedades**:
  - Funcionam em qualquer tipo de dado que possua uma relação de comparação definida.
  - Exemplo: Inteiros, Strings, Estruturas customizadas com operadores de comparação.

---

## Counting Sort
- **Definição**:
  - Algoritmo de ordenação não baseado em comparação.
  - Conta a frequência de cada elemento e usa essas informações para ordenar.
  - Complexidade: **`O(N + K)`**, onde:
    - `N` é o número de elementos.
    - `K` é o valor máximo do elemento no vetor.

- **Funcionamento**:
  1. Crie um vetor auxiliar para armazenar as frequências dos elementos.
  2. Atualize o vetor para armazenar as posições acumuladas.
  3. Construa o vetor ordenado usando as frequências.

- **Limitações**:
  - Requer que os elementos sejam inteiros não negativos ou mapeáveis para inteiros.
  - Ineficiente para valores muito grandes de `K`.

- **Código Exemplo**:
  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  void countingSort(vector<int>& arr) {
      int maxVal = *max_element(arr.begin(), arr.end());
      vector<int> count(maxVal + 1, 0);

      // Contando as ocorrências
      for (int x : arr) {
          count[x]++;
      }

      // Construindo o vetor ordenado
      int idx = 0;
      for (int i = 0; i <= maxVal; i++) {
          while (count[i]--) {
              arr[idx++] = i;
          }
      }
  }

  int main() {
      vector<int> arr = {4, 2, 2, 8, 3, 3, 1};
      countingSort(arr);

      for (int x : arr) cout << x << " ";  // Saída: 1 2 2 3 3 4 8
      return 0;
  }
  ```

---

## Radix Sort
- **Definição**:
  - Algoritmo de ordenação não baseado em comparação.
  - Ordena elementos dígito por dígito, começando pelo menos significativo (LSD - Least Significant Digit).
  - Usa um algoritmo de ordenação estável, como Counting Sort, para cada dígito.
  - Complexidade: **`O(N * D)`**, onde:
    - `N` é o número de elementos.
    - `D` é o número de dígitos do maior elemento.

- **Funcionamento**:
  1. Ordene os elementos com base no dígito menos significativo.
  2. Continue ordenando para os dígitos mais significativos, garantindo a estabilidade.

- **Limitações**:
  - Funciona melhor com inteiros ou strings de tamanho fixo.
  - Requer ordenação estável como sub-rotina.

- **Código Exemplo**:
  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  void countingSortRadix(vector<int>& arr, int exp) {
      int n = arr.size();
      vector<int> output(n);
      vector<int> count(10, 0);

      // Contando os dígitos no lugar 'exp'
      for (int x : arr) {
          count[(x / exp) % 10]++;
      }

      // Atualizando as posições acumuladas
      for (int i = 1; i < 10; i++) {
          count[i] += count[i - 1];
      }

      // Construindo o vetor ordenado
      for (int i = n - 1; i >= 0; i--) {
          int digit = (arr[i] / exp) % 10;
          output[--count[digit]] = arr[i];
      }

      // Copiando de volta para o vetor original
      for (int i = 0; i < n; i++) {
          arr[i] = output[i];
      }
  }

  void radixSort(vector<int>& arr) {
      int maxVal = *max_element(arr.begin(), arr.end());
      for (int exp = 1; maxVal / exp > 0; exp *= 10) {
          countingSortRadix(arr, exp);
      }
  }

  int main() {
      vector<int> arr = {170, 45, 75, 90, 802, 24, 2, 66};
      radixSort(arr);

      for (int x : arr) cout << x << " ";  // Saída: 2 24 45 66 75 90 170 802
      return 0;
  }
  ```

---
