# Resumo: Busca Binária

## Busca Binária
- **Definição**:
  - Algoritmo eficiente para encontrar um elemento em um vetor **ordenado**.
  - Divide o vetor em duas partes a cada iteração, reduzindo o espaço de busca.
  - Complexidade: **`O(log N)`**, onde `N` é o número de elementos.

- **Funcionamento**:
  - Compare o elemento buscado com o elemento no meio:
    - Se for menor, procure na metade esquerda.
    - Se for maior, procure na metade direita.
    - Se for igual, o elemento foi encontrado.

- **Implementação Manual**:
  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int buscaBinaria(vector<int>& vetor, int chave) {
      int esquerda = 0, direita = vetor.size() - 1;

      while (esquerda <= direita) {
          int meio = esquerda + (direita - esquerda) / 2;

          if (vetor[meio] == chave) {
              return meio;  // Elemento encontrado
          }

          if (vetor[meio] < chave) {
              esquerda = meio + 1;  // Busca na metade direita
          } else {
              direita = meio - 1;  // Busca na metade esquerda
          }
      }

      return -1;  // Elemento não encontrado
  }

  int main() {
      vector<int> vetor = {1, 3, 5, 7, 9, 11};
      int chave = 7;

      int resultado = buscaBinaria(vetor, chave);
      if (resultado != -1) {
          cout << "Elemento encontrado na posição: " << resultado << endl;
      } else {
          cout << "Elemento não encontrado." << endl;
      }

      return 0;
  }
  ```

---

## Busca Binária em C++
- A STL do C++ oferece a função **`binary_search`** na biblioteca `<algorithm>`.

- **Exemplo**:
  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {
      vector<int> vetor = {1, 3, 5, 7, 9, 11};
      int chave = 7;

      if (binary_search(vetor.begin(), vetor.end(), chave)) {
          cout << "Elemento encontrado!" << endl;
      } else {
          cout << "Elemento não encontrado." << endl;
      }

      return 0;
  }
  ```

- **Observação**:
  - `binary_search` retorna apenas um valor booleano (`true` ou `false`).
  - Para encontrar a posição do elemento, use **`lower_bound`** ou **`upper_bound`**:
    ```cpp
    auto it = lower_bound(vetor.begin(), vetor.end(), chave);
    if (it != vetor.end() && *it == chave) {
        cout << "Elemento encontrado na posição: " << it - vetor.begin() << endl;
    } else {
        cout << "Elemento não encontrado." << endl;
    }
    ```

---

## Eficiência da Busca Binária
- **Comparação com Busca Sequencial**:
  - Busca Binária é muito mais eficiente para vetores ordenados grandes.
  - Busca Sequencial: **`O(N)`** no pior caso.
  - Busca Binária: **`O(log N)`**, reduz drasticamente o número de comparações.

- **Requisitos**:
  - O vetor deve estar ordenado.
  - Não é eficiente para pequenos vetores ou quando o vetor não está ordenado.

- **Casos de Uso**:
  - Ideal para buscas repetitivas em grandes coleções de dados.
  - Combinada com algoritmos como `sort` para garantir a ordenação prévia.

---