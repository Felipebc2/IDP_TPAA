# A. Pais e Filhos

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
     / \
    8   3
       / \
      7   7
```

Onde o valor `-1` representa filhos com o valor nulo nesse vetor.

Nessa atividade sua tarefa é, dado um vetor que representa uma árvore binária, e uma consulta a um determinado nó, informar o conteúdo do pai e dos filhos esquerdo e direito do nó consultado.

---

### **Input**
A entrada possui um único caso de teste.  
A primeira linha possui dois inteiros N e C (1 ≤ N, C ≤ 1000) que representam, respectivamente, a quantidade de nós da árvore (incluindo os nós nulos) e a quantidade de consultas a serem realizadas.  

A segunda linha contém N inteiros V (-1 ≤ V_i ≤ 100000), separados por espaço, que indicam a informação do nó i, que será `-1` apenas se esse nó for um nó nulo.  

Em seguida, virão C linhas com um inteiro cada, com o nó cujo a informação dos filhos deverá ser mostrada.

---

### **Output**
A saída deve conter C linhas. Cada linha deverá conter três informações, separadas por hifens e espaço, conforme os exemplos, que é o conteúdo do nó pai, e conteúdos dos nós esquerdo e direito.  

Deve-se exibir `RAIZ`, quando o nó da consulta já for a raiz, `NULL` caso o filho seja um nó nulo, e apenas `NULL` se a árvore for uma árvore vazia.

---

### **Examples**

#### **Input**
```
7 2
5 8 4 -1 -1 -1 -1 -1
1
2
```

#### **Output**
```
RAIZ - 8 4
5 - NULL NULL
```

#### **Input**
```
11 2
1 2 4 8 3 -1 -1 -1 -1 -1 -1
2
3
```

#### **Output**
```
1 - 8 3
1 - NULL NULL
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
No primeiro caso de testes, o nó consultado na primeira consulta é o próprio pai, o qual é exibido como `RAIZ`.  
Já os filhos esquerdo e direito possuem como filhos esquerdo e direito os valores `8` e `4`.  

Já a segunda consulta (nó da posição 2), possui a informação `8`, o valor do pai que é exibido é `5`, e os seus respectivos filhos sendo `-1` e `-1`, sendo exibidos como `NULL` e `NULL`.

Observação: caso N = 1, essa é uma árvore que possui apenas a raiz nula `(-1)` sem filhos (terceiro caso de testes).