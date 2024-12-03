# D. Soma Não Tão Simples

**Time limit per test:** 2 seconds  
**Memory limit per test:** 1024 megabytes  

Dado um conjunto de elementos não ordenados, verifique se existe alguma **tripla** de elementos cuja soma seja igual a um valor \( K \).

---

## Input
A entrada consiste em um único caso de testes. A primeira linha contém dois inteiros \( N \) \( (3 \leq N \leq 3000) \) e \( K \) \( (1 \leq K \leq 5 \times 10^7) \), representando o número de elementos no conjunto e o valor \( K \) que representa o valor cujo a tripla deve ser encontrada. A segunda linha contém \( N \) inteiros \( A_i \) \( (1 \leq A_i \leq 5 \times 10^7) \), representando os elementos do conjunto.

---

## Output
A saída deve conter uma tripla de inteiros \( A_h, A_i, A_j \) \( (1 \leq h, i, j \leq N) \) com \( h \neq i \neq j \), em qualquer ordem e separados por um espaço, tal que \( A_h + A_i + A_j = K \). Caso não exista tal tripla, a saída deve conter a palavra `"Nao existe"`.

---

## Examples

### Input
```
6 10
8 7 2 5 3 1
```

### Output
```
7 2 1
```

---

### Input
```
6 12
5 2 6 8 9 7
```

### Output
```
Nao existe
```

---

### Input
```
7 11
3 5 2 1 12 7 3
```

### Output
```
3 5 3
```

---

## Note
No primeiro caso de testes, o objetivo sendo o valor \( K = 10 \), qualquer uma das triplas \( (7, 2, 1) \), \( (2, 7, 1) \), \( (2, 1, 7) \), \( (1, 7, 2) \), \( (1, 2, 7) \), \( (7, 3, 5) \), \( (2, 3, 5) \), \( (2, 5, 3) \), \( (5, 3, 2) \), \( (5, 2, 3) \) constitui uma resposta válida.