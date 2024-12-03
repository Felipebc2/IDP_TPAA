# D. Navegação em Árvores Binárias de Busca

**Time limit per test:** 1 second  
**Memory limit per test:** 256 megabytes  

Árvore Binária de Busca (ABB ou BST) é uma estrutura baseada em nós, onde todos os nós da subárvore esquerda possuem um valor numérico inferior ao nó raiz e todos os nós da subárvore direita possuem um valor superior ao nó raiz (e assim sucessivamente).

Como a organização de uma BST depende da ordem de inserção dos elementos, é possível que uma mesma sequência de elementos possa gerar diferentes BSTs. Por exemplo, ao inserir em uma BST os elementos `8, 3, 1, 6, 10, 14, 13, 4, 7` nessa ordem, obtemos a seguinte árvore:

```
      8
     / \
    3   10
   / \     \
  1   6     14
     / \    /
    4   7  13
```

Dada a estrutura, percorrer os elementos de uma árvore tem diversas aplicações. Um exemplo é que o percurso em ordem (infixo) resulta em uma sequência ordenada dos elementos.

Nesta atividade, você receberá a ordem de inserção dos elementos em uma BST e deverá construir uma árvore binária de busca e imprimir os elementos nas ordens infixa, prefixa e posfixa.

---

### **Input**
A entrada contém um único caso de teste.  
A primeira linha contém um inteiro `N` (1 ≤ N ≤ 500) que indica a quantidade de nós que deve compor a árvore e a segunda linha contém `N` inteiros distintos e não negativos `V` (0 ≤ V ≤ 10⁹), separados por um espaço em branco, que são os valores dos nós na ordem em que foram inseridos na árvore.

---

### **Output**
A saída deve conter três linhas:  
A primeira linha deve conter os valores dos nós da árvore em ordem infixa,  
A segunda linha deve conter os valores dos nós da árvore em ordem prefixa, e  
A terceira linha deve conter os valores dos nós da árvore em ordem posfixa, conforme os exemplos.

---

### **Examples**

#### **Input**
```
9
8 3 1 6 10 14 13 4 7
```

#### **Output**
```
In.: 1 3 4 6 7 8 10 13 14
Pre.: 8 3 1 6 4 7 10 14 13
Pos.: 1 4 7 6 3 13 14 10 8
```

#### **Input**
```
5
1 2 3 4 5
```

#### **Output**
```
In.: 1 2 3 4 5
Pre.: 1 2 3 4 5
Pos.: 5 4 3 2 1
```

#### **Input**
```
5
5 4 3 2 1
```

#### **Output**
```
In.: 1 2 3 4 5
Pre.: 5 4 3 2 1
Pos.: 1 2 3 4 5
```

#### **Input**
```
5
1 2 5 4 3
```

#### **Output**
```
In.: 1 2 3 4 5
Pre.: 1 2 5 4 3
Pos.: 3 4 5 2 1
```

---

### **Note**
Este exercício provavelmente demandará a implementação da BST. Recomenda-se utilizar a linguagem que esteja mais confortável para a implementação.