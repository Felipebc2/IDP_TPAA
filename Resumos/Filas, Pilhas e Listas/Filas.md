# Resumo: Filas

## O que é uma Fila?
- **Definição**:
  - Estrutura de dados linear que segue a regra **FIFO** (First In, First Out).
  - O primeiro elemento inserido é o primeiro a ser removido.

- **Operações principais**:
  1. **`push`**: Adiciona um elemento ao final da fila.
  2. **`pop`**: Remove o elemento no início da fila.
  3. **`front`**: Acessa o elemento no início da fila.
  4. **`back`**: Acessa o elemento no final da fila.

---

## Implementação com a STL
A biblioteca padrão do C++ (`<queue>`) oferece uma implementação eficiente de filas.

### Exemplo básico
```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    queue<int> fila;

    // Adicionando elementos na fila
    fila.push(10);
    fila.push(20);
    fila.push(30);

    // Acessando o primeiro elemento
    cout << "Primeiro elemento: " << fila.front() << endl;  // Saída: 10

    // Acessando o último elemento
    cout << "Último elemento: " << fila.back() << endl;  // Saída: 30

    // Removendo o primeiro elemento
    fila.pop();
    cout << "Novo primeiro elemento: " << fila.front() << endl;  // Saída: 20

    return 0;
}
```

---

## Implementação Manual
### Classe para Fila com Vetor Dinâmico
```cpp
#include <bits/stdc++.h>
using namespace std;

class Fila {
    vector<int> elementos;

public:
    void push(int val) {
        elementos.push_back(val);
    }

    void pop() {
        if (!elementos.empty()) {
            elementos.erase(elementos.begin());
        } else {
            cout << "Fila vazia!" << endl;
        }
    }

    int front() {
        if (!elementos.empty()) {
            return elementos.front();
        } else {
            throw runtime_error("Fila vazia!");
        }
    }

    bool empty() {
        return elementos.empty();
    }
};

int main() {
    Fila fila;

    fila.push(10);
    fila.push(20);
    cout << "Primeiro elemento: " << fila.front() << endl;  // Saída: 10

    fila.pop();
    cout << "Primeiro elemento após pop: " << fila.front() << endl;  // Saída: 20

    return 0;
}
```

---

## Aplicação de Filas: Simulação de Atendimento
### Exemplo: Simulação de uma fila de clientes
```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    queue<string> fila;

    // Adicionando clientes na fila
    fila.push("Cliente 1");
    fila.push("Cliente 2");
    fila.push("Cliente 3");

    // Atendendo os clientes
    while (!fila.empty()) {
        cout << "Atendendo: " << fila.front() << endl;
        fila.pop();
    }

    return 0;
}
```

---