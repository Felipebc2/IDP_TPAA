# Resumo: Árvores Red-Black

## O que é uma Árvore Red-Black?
- **Definição**:
  - Tipo de árvore binária de busca autobalanceada.
  - Garante equilíbrio para operações de busca, inserção e remoção com complexidade **`O(log N)`**.

- **Regras**:
  1. Todo nó é vermelho ou preto.
  2. A raiz é sempre preta.
  3. Um nó vermelho não pode ter filhos vermelhos (propriedade de "não dois vermelhos consecutivos").
  4. Todos os caminhos da raiz até as folhas têm o mesmo número de nós pretos.

---

## Elementos Importantes
- **Cor**:
  - Cada nó é marcado como vermelho ou preto.
- **Tio**:
  - O nó irmão do pai de um nó.
- **Altura preta**:
  - Número de nós pretos em qualquer caminho da raiz até uma folha.

---

## Árvores Red-Black - Rotações
- Rotações são usadas para reestruturar a árvore e corrigir desbalanceamentos.

### Rotação à Direita
- Move o filho esquerdo para ser a nova raiz da subárvore.
- **Exemplo**:
  ```cpp
  Node* rotateRight(Node* root) {
      Node* newRoot = root->left;
      root->left = newRoot->right;
      newRoot->right = root;
      return newRoot;
  }
  ```

### Rotação à Esquerda
- Move o filho direito para ser a nova raiz da subárvore.
- **Exemplo**:
  ```cpp
  Node* rotateLeft(Node* root) {
      Node* newRoot = root->right;
      root->right = newRoot->left;
      newRoot->left = root;
      return newRoot;
  }
  ```

---

## Inserções na Árvore Red-Black
### Cenário A: Árvore Vazia
- **Ação**:
  - O primeiro nó inserido torna-se a raiz e é pintado de **preto**.
- **Código Exemplo**:
  ```cpp
  Node* insertRedBlack(Node* root, int val) {
      if (!root) return new Node(val, /*cor=*/"preto");
      // Continuação das inserções
      return root;
  }
  ```

---

### Cenário B: Pai do Nó é Preto
- **Ação**:
  - A árvore continua válida, nenhuma mudança é necessária.
- **Motivo**:
  - Inserir um nó vermelho não viola nenhuma regra quando o pai é preto.

---

### Cenário C: Pai e Tio do Nó São Vermelhos
- **Ação**:
  1. Recolore o pai e o tio para preto.
  2. Recolore o avô para vermelho.
  3. Continua a verificar o equilíbrio a partir do avô.

- **Código Exemplo**:
  ```cpp
  void recolor(Node* pai, Node* tio, Node* avo) {
      pai->cor = "preto";
      tio->cor = "preto";
      avo->cor = "vermelho";
  }
  ```

---

### Cenário D: Pai é Vermelho e o Tio é Preto
- **Ação**:
  1. Caso o nó esteja "na direção oposta do pai" (situação em L ou em Z), realiza uma **rotação simples**.
  2. Recolore o pai e o avô.
  3. Realiza uma **rotação dupla** para corrigir a árvore.

- **Código Exemplo**:
  ```cpp
  Node* handleRedUncle(Node* root, Node* node) {
      if (node == node->pai->right && node->pai == node->pai->pai->left) {
          root = rotateLeft(node->pai);
          node = node->left;
      } else if (node == node->pai->left && node->pai == node->pai->pai->right) {
          root = rotateRight(node->pai);
          node = node->right;
      }

      node->pai->cor = "preto";
      node->pai->pai->cor = "vermelho";

      if (node == node->pai->left) {
          root = rotateRight(node->pai->pai);
      } else {
          root = rotateLeft(node->pai->pai);
      }

      return root;
  }
  ```

---

### Exemplo Completo: Inserção com Rebalanceamento
```cpp
Node* insertRedBlack(Node* root, int val) {
    Node* novo = new Node(val, "vermelho");

    if (!root) return novo;  // Cenário A: Árvore vazia

    // Inserção em uma ABB padrão
    root = insert(root, val);

    // Rebalanceamento
    Node* node = novo;
    while (node != root && node->pai->cor == "vermelho") {
        Node* tio = getTio(node);
        if (tio && tio->cor == "vermelho") {  // Cenário C
            recolor(node->pai, tio, node->pai->pai);
            node = node->pai->pai;
        } else {  // Cenário D
            root = handleRedUncle(root, node);
        }
    }

    root->cor = "preto";  // Garante que a raiz sempre seja preta
    return root;
}
```

---

# Resumo: Árvores Red-Black e Remoções

## Árvores Red-Black
- Estruturas de árvores binárias balanceadas que mantêm operações eficientes (**`O(log N)`**).
- Regras básicas:
  - Todo nó é vermelho ou preto.
  - A raiz é sempre preta.
  - Nós vermelhos não podem ter filhos vermelhos.
  - Todos os caminhos da raiz até as folhas têm o mesmo número de nós pretos.

---

## Árvores Red-Black - Remoções
- A remoção em Árvores Red-Black pode causar desbalanceamento ou violação das regras de cor.
- Os casos de remoção ajustam a árvore para manter suas propriedades.

---

### Caso Trivial de Remoção
- **Descrição**:
  - Remove-se um nó folha vermelho diretamente.
- **Ação**:
  - Como um nó vermelho não afeta o balanceamento, nenhuma ação adicional é necessária.

---

### Remoção de Nó Vermelho
- **Descrição**:
  - Remove-se o nó diretamente, como em uma árvore binária de busca comum.
- **Motivo**:
  - A remoção de um nó vermelho não altera a altura preta.

---

### Remoção de Nó Preto com Filho Vermelho
- **Descrição**:
  - Substitui-se o nó preto pelo seu único filho vermelho.
- **Ação**:
  - O filho vermelho é pintado de preto para manter a altura preta.

- **Código Exemplo**:
  ```cpp
  Node* removeNodeWithRedChild(Node* root, Node* target) {
      Node* child = target->left ? target->left : target->right;
      if (child) {
          child->color = "preto";
      }
      return child;
  }
  ```

---

### Remoção de Nó Preto com Filho Preto
- **Descrição**:
  - Cenário mais complexo: a remoção de um nó preto pode alterar a altura preta e violar as regras da árvore.
- **Ação Geral**:
  - Os cenários subsequentes detalham os ajustes necessários.

---

#### Cenário A: Após a troca de `N` e `C`, `C` é a raiz
- **Descrição**:
  - Após a remoção, o nó substituto (`C`) é promovido como raiz.
- **Ação**:
  - O novo nó raiz é pintado de preto para manter a propriedade da raiz preta.

---

#### Cenário B: Irmão Vermelho
- **Descrição**:
  - O nó irmão é vermelho.
- **Ação**:
  1. Realiza uma rotação para transformar o irmão em preto.
  2. Reaplica os ajustes para os novos nós afetados.

---

#### Cenário C: Pai, Irmão e Sobrinhos Pretos
- **Descrição**:
  - Pai, irmão e ambos os sobrinhos do nó removido são pretos.
- **Ação**:
  - O irmão é pintado de vermelho, e a análise continua no nível superior da árvore.

---

#### Cenário D: Irmão e Sobrinhos Pretos, Pai Vermelho
- **Descrição**:
  - O pai é vermelho e o irmão e os sobrinhos são pretos.
- **Ação**:
  - O irmão é pintado de vermelho, e o pai é pintado de preto.

---

#### Cenário E: Irmão Preto, Sobrinho à Esquerda Vermelho
- **Descrição**:
  - O irmão é preto e o sobrinho esquerdo é vermelho.
- **Ação**:
  1. Realiza uma rotação à direita no irmão.
  2. Recolore para corrigir as relações de cor.

---

#### Cenário F: Irmão Preto, Sobrinho à Direita Vermelho
- **Descrição**:
  - O irmão é preto e o sobrinho direito é vermelho.
- **Ação**:
  1. Realiza uma rotação à esquerda no nó pai.
  2. Recolore os nós para corrigir as relações de cor.

- **Código Exemplo para Cenário F**:
  ```cpp
  Node* handleBlackSiblingRedRightNephew(Node* root, Node* sibling, Node* parent) {
      sibling->right->color = sibling->color;
      sibling->color = parent->color;
      parent->color = "preto";
      root = rotateLeft(parent);
      return root;
  }
  ```

---
