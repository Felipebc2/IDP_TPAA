# A. Matriz de Adjacência

**Time limit per test:** 1 second  
**Memory limit per test:** 256 megabytes  

Existem diversas formas diferentes de se representar um grafo. Uma delas é a matriz de adjacência. Nela, cada linha e cada coluna representam um vértice do grafo. Se o vértice da linha  i  está conectado ao vértice da coluna  j , então o valor da matriz na posição  (i, j)  é 1. Caso contrário, o valor é 0.

Por exemplo, o grafo não-direcionado abaixo:

```
1 --- 4
|     |
2 --- 3
```

Pode ser representado pela seguinte matriz de adjacência:

```
    1 2 3 4
1   0 1 0 1
2   1 0 1 0
3   0 1 0 1
4   1 0 1 0
```

Neste exercício, sua tarefa é, dado uma lista de conexões de um grafo, representá-lo como uma matriz de adjacência.

---

## **Input**

A entrada é composta por um único caso de testes.  

- A primeira linha da entrada contém dois inteiros  V  (2 ≤  V  ≤ 100) e  C  (0 ≤  C  ≤ 10,000), que representam o número de vértices do grafo e o número de conexões entre vértices do grafo.  
- As próximas  C  linhas contêm dois inteiros  A  e  B  (1 ≤  A, B  ≤  V ), indicando que os vértices  A  e  B  estão conectados.  

---

## **Output**

A saída deve conter uma matriz de adjacência do grafo, com  N  linhas e  N  colunas, com os valores separados por um espaço.

---

## **Exemplo de Entrada e Saída**

### **Input**
```
4 4
1 2
2 3
3 4
4 1
```

### **Output**
```
0 1 0 1
1 0 1 0
0 1 0 1
1 0 1 0
```

---

### **Input**
```
5 3
1 2
2 4
5 1
```

### **Output**
```
0 1 0 0 1
1 0 0 1 0
0 0 0 0 0
0 1 0 0 0
1 0 0 0 0
```

---

### **Input**
```
4 6
4 1
4 2
4 3
2 3
1 2
1 3
```

### **Output**
```
0 1 1 1
1 0 1 1
1 1 0 1
1 1 1 0
```