# B. Filhos

**Time limit per test:** 1 second  
**Memory limit per test:** 256 megabytes  

Árvores binárias podem ser representadas de duas formas distintas: a primeira, mais utilizada, se dá por meio do uso de ponteiros onde cada nó possui dois ponteiros para os seus filhos esquerdo e direito. A segunda forma, menos comum, é com o uso de um vetor onde cada posição do vetor representa um nó e cada posição do vetor possui dois índices que representam os filhos esquerdo e direito do nó.

Por exemplo, uma árvore dada pelo vetor:
```
[1 2 4 8 3 7 -1 -1 -1 -1 -1]
```
Pode ser representada pela seguinte árvore binária:

```
      1
     / \
    2   4
   /   / \
  8   3   7
```

Onde o valor -1 representa filhos com o valor nulo nesse vetor.

Nessa atividade sua tarefa é, dado um vetor que representa uma árvore binária, e uma consulta a um determinado nó, informar os filhos esquerdo e direito do nó consultado.

---

### **Input**
A entrada possui um único caso de teste.  
A primeira linha possui dois inteiros N e C (1 ≤ N, C ≤ 1000) que representam, respectivamente, a quantidade de nós da árvore (incluindo os nós nulos) e a quantidade de consultas a serem realizadas.  
A segunda linha contém N inteiros V (-1 ≤ V ≤ 100000), separados por espaço, que indicam a informação do nó i que será -1 apenas se esse nó for um nó nulo.  

Em seguida, virão C linhas, com o nó cujo a informação dos filhos deverá ser mostrada.

---

### **Output**
A saída deve conter C linhas. Cada linha deverá conter três informações, separadas por espaço, que é o conteúdo do nó esquerdo e o conteúdo do nó direito, devendo exibir `NULL` caso o filho seja um nó nulo.

---

### **Examples**

#### **Input**
```
11 2
1 2 4 8 3 7 -1 -1 -1 -1 -1
2
3
```

#### **Output**
```
8 3
7 NULL
```

#### **Input**
```
7 2
5 8 4 -1 -1 -1 -1
1
2
```

#### **Output**
```
8 4
NULL NULL
```

#### **Input**
```
9 3
6 4 8 -1 -1 -1 -1 -1 -1
3
4
1
```

#### **Output**
```
NULL NULL
NULL NULL
4 8
```

---

### **Note**
O primeiro caso de testes é o exemplo na descrição do problema. O nó da segunda posição possui a informação 2, e possui como filhos esquerdo e direito, os valores 8 e 3. Já o nó da terceira posição possui a informação 4 e os filhos esquerdo e direito os valores 7 e -1, sendo impresso NULL, no caso do filho direito.

Observação: caso N seja 1, essa é uma árvore que possui apenas a raiz nula (-1) e sem filhos.
```