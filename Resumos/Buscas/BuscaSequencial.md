# Resumo: Busca Sequencial, Travessias e Transformações

## Busca Sequencial
- **Definição**:
  - Algoritmo simples que percorre um vetor comparando cada elemento com o valor buscado.
  - Complexidade: **`O(N)`**, onde `N` é o número de elementos no vetor.
  - Funciona em vetores **ordenados** ou **não ordenados**.

- **Exemplo Manual**:
  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int buscaSequencial(vector<int>& vetor, int chave) {
      for (int i = 0; i < vetor.size(); i++) {
          if (vetor[i] == chave) {
              return i;  // Retorna o índice do elemento encontrado
          }
      }
      return -1;  // Retorna -1 se não encontrar
  }

  int main() {
      vector<int> vetor = {10, 20, 30, 40, 50};
      int chave = 30;
      int resultado = buscaSequencial(vetor, chave);

      if (resultado != -1) {
          cout << "Elemento encontrado na posição: " << resultado << endl;
      } else {
          cout << "Elemento não encontrado." << endl;
      }

      return 0;
  }
  ```

- **Usando `find` da STL**:
  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {
      vector<int> vetor = {10, 20, 30, 40, 50};
      int chave = 30;

      auto it = find(vetor.begin(), vetor.end(), chave);
      if (it != vetor.end()) {
          cout << "Elemento encontrado na posição: " << it - vetor.begin() << endl;
      } else {
          cout << "Elemento não encontrado." << endl;
      }

      return 0;
  }
  ```

---

## Travessias e Filtros
- **Travessia**:
  - Processo de visitar cada elemento de um contêiner.
  - A busca sequencial é um exemplo de travessia.
  
- **Filtro**:
  - Seleciona elementos de acordo com uma condição (predicado).
  - O predicado é uma função ou lambda que retorna `true` ou `false`.

- **Exemplo: Encontrar números pares**:
  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {
      vector<int> vetor = {1, 2, 3, 4, 5, 6};
      vector<int> pares;

      copy_if(vetor.begin(), vetor.end(), back_inserter(pares), [](int x) {
          return x % 2 == 0;  // Condição para ser par
      });

      cout << "Números pares: ";
      for (int x : pares) {
          cout << x << " ";
      }
      cout << endl;

      return 0;
  }
  ```

---

## Transformações
- **Definição**:
  - Operação que visita cada elemento de um contêiner e o substitui pelo resultado de uma função.
  - Implementada na STL com `transform`.

- **Exemplo: Multiplicar elementos por 10**:
  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {
      vector<int> vetor = {1, 2, 3, 4, 5};
      vector<int> transformado(vetor.size());

      transform(vetor.begin(), vetor.end(), transformado.begin(), [](int x) {
          return x * 10;  // Multiplica cada elemento por 10
      });

      cout << "Vetor transformado: ";
      for (int x : transformado) {
          cout << x << " ";
      }
      cout << endl;

      return 0;
  }
  ```

---