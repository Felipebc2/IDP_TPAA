# C. Pai

**Time limit per test:** 1 second  
**Memory limit per test:** 256 megabytes  

Árvores binárias podem ser representadas de duas formas distintas: a primeira, mais utilizada, se dá por meio do uso de ponteiros onde cada nó possui dois ponteiros para os filhos esquerdo e direito. A segunda forma, menos comum, é com o uso de um vetor onde cada posição do vetor representa um nó e cada posição do vetor possui dois índices que representam os filhos esquerdo e direito do nó.

Por exemplo, uma árvore dada pelo vetor:
```
[5 8 4 -1 -1 -1 -1]
```
Pode ser representada pela seguinte árvore binária:

```
      5
     / \
    8   4
```

Onde o valor -1 representa filhos com o valor nulo nesse vetor.

Nessa atividade sua tarefa é, dado um vetor que representa uma árvore binária, e uma consulta a um determinado nó, informar qual é o conteúdo do pai desse nó consultado.

---

### **Input**
A entrada possui um único caso de teste.  
A primeira linha possui dois inteiros N e C (1 ≤ N, C ≤ 1000) que representam, respectivamente, a quantidade de nós da árvore (incluindo os nós nulos) e a quantidade de consultas a serem realizadas.  
A segunda linha contém N inteiros V (-1 ≤ V ≤ 100000), separados por espaço, que indicam a informação do nó i que será -1 apenas se esse nó for um nó nulo.  

Em seguida, virão C linhas com um inteiro cada, o nó cujo pai deverá ser mostrado.

---

### **Output**
A saída deve conter C linhas. Cada linha deverá conter uma informação, que é o conteúdo do pai desse nó, devendo exibir `RAIZ`, caso esse nó seja a raiz da árvore, ou `NULL` se for um nó nulo ou não houver pai.

---

### **Examples**

#### **Input**
```
7 2
5 8 4 -1 -1 -1 -1
1
5
```

#### **Output**
```
RAIZ
8
```

#### **Input**
```
11 2
1 2 4 8 3 7 -1 -1 -1 -1 -1
2
8
```

#### **Output**
```
1
8
```

#### **Input**
```
9 3
6 4 8 -1 -1 -1 -1 -1 -1
3
4
9
```

#### **Output**
```
6
4
2
```

#### **Input**
```
1 1
-1
1
```

#### **Output**
```
NULL
```

---

### **Note**
O primeiro caso de testes é o exemplo na descrição do problema. O nó da primeira posição é a raiz da árvore. Já o nó da quinta posição é um nó do tipo nulo, e é o filho direito do pai que está na posição 2, cujo conteúdo é 8, que será o impresso.
