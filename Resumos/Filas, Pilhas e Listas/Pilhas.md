# Resumo: Pilhas

## O que é uma Pilha?
- **Definição**:
  - Estrutura de dados linear que segue a regra **LIFO** (Last In, First Out).
  - O último elemento inserido é o primeiro a ser removido.

- **Operações principais**:
  1. **`push`**: Adiciona um elemento no topo da pilha.
  2. **`pop`**: Remove o elemento do topo da pilha.
  3. **`top`**: Acessa o elemento no topo sem removê-lo.

---

## Implementação com a STL
A biblioteca padrão do C++ (`<stack>`) oferece uma implementação de pilhas.

### Exemplo básico
```cpp
#include <iostream>
#include <stack>

int main() {
    std::stack<int> pilha;

    // Adicionando elementos na pilha
    pilha.push(10);
    pilha.push(20);
    pilha.push(30);

    // Acessando o elemento do topo
    std::cout << "Topo: " << pilha.top() << std::endl;  // Saída: 30

    // Removendo elementos da pilha
    pilha.pop();
    std::cout << "Novo topo: " << pilha.top() << std::endl;  // Saída: 20

    return 0;
}
```

---

## Implementação Manual
### Classe para Pilha com Vetor Dinâmico
```cpp
#include <iostream>
#include <vector>

class Pilha {
    std::vector<int> elementos;

public:
    void push(int val) {
        elementos.push_back(val);
    }

    void pop() {
        if (!elementos.empty()) {
            elementos.pop_back();
        } else {
            std::cout << "Pilha vazia!" << std::endl;
        }
    }

    int top() {
        if (!elementos.empty()) {
            return elementos.back();
        } else {
            throw std::runtime_error("Pilha vazia!");
        }
    }

    bool empty() {
        return elementos.empty();
    }
};

int main() {
    Pilha pilha;

    pilha.push(10);
    pilha.push(20);

    std::cout << "Topo: " << pilha.top() << std::endl;  // Saída: 20

    pilha.pop();
    std::cout << "Topo após pop: " << pilha.top() << std::endl;  // Saída: 10

    return 0;
}
```

---

## Aplicação de Pilhas: Verificação de Parênteses
### Exemplo: Validar expressões com parênteses balanceados
```cpp
#include <iostream>
#include <stack>
#include <string>

bool verificaParenteses(const std::string& expressao) {
    std::stack<char> pilha;

    for (char c : expressao) {
        if (c == '(') {
            pilha.push(c);
        } else if (c == ')') {
            if (pilha.empty() || pilha.top() != '(') {
                return false;
            }
            pilha.pop();
        }
    }

    return pilha.empty();
}

int main() {
    std::string expressao = "(a + b) * (c - d)";

    if (verificaParenteses(expressao)) {
        std::cout << "Expressão válida!" << std::endl;
    } else {
        std::cout << "Expressão inválida!" << std::endl;
    }

    return 0;
}
```

---