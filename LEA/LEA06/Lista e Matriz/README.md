# A. Lista e Matriz

**Time limit per test:** 1 second  
**Memory limit per test:** 256 megabytes  

Existem diversas formas diferentes de se representar um grafo. Uma delas é a lista de adjacências. Nela, cada vértice do grafo é representado por uma lista de vértices adjacentes a ele. Por exemplo, o grafo não-direcionado abaixo:

![Caso de Teste 1](https://i.ibb.co/TgzDNkx/imagem-2024-12-02-233950759.png)

Pode ser representado pela seguinte lista de adjacências:
```
1 -> 2, 4
2 -> 3
3 -> 4
4 -> 1, 3
```

Comparativamente, pode-se gerar uma matriz de adjacência para o mesmo grafo:
```
  1 2 3 4
1 0 1 0 1
2 0 0 1 0
3 0 0 0 1
4 1 0 1 0
```

Neste exercício sua tarefa é, dado um grafo, em formato de lista de adjacências, representá-lo como uma matriz de adjacência.

---

### **Input**
A entrada é composta por um único caso de testes.  
A primeira linha da entrada contém um inteiro V (2 ≤ V ≤ 100), que representa o número de vértices do grafo.  

As próximas V linhas contêm primeiro um inteiro E (1 ≤ E ≤ V), que representa o número de vértices adjacentes ao vértice V, seguido de E inteiros A (1 ≤ A ≤ V), separados por um espaço, indicando que o vértice V está conectado ao vértice A.

---

### **Output**
A saída deve conter uma matriz de adjacência do grafo, com V linhas e V colunas, com os valores separados por um espaço.

---

### **Examples**

#### **Input**
```
4
2 2 4
1 3
1 4
2 3 1
```

#### **Output**
```
0 1 0 1
0 0 1 0
0 0 0 1
1 0 1 0
```

#### **Input**
```
5
3 2 4 5
1 4
1 5
1 1
1 1
```

#### **Output**
```
0 1 0 1 1
0 0 0 1 0
0 0 0 1 0
0 0 0 0 0
0 0 0 0 0
```

#### **Input**
```
4
2 2 3
3 1 3 4
0
2 1 2
```

#### **Output**
```
0 0 1 1
1 0 0 1
0 0 0 0
1 1 0 0
```

---

### **Note**
Os respectivos grafos dos casos de testes são:

![Casos de Testes](https://i.ibb.co/h98Y1MT/imagem-2024-12-02-234043207.png)