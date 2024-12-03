# C. Soma Simples

**time limit per test**: 2 seconds  
**memory limit per test**: 256 megabytes  

Dado um conjunto de elementos não ordenados, verifique se existe algum par de elementos cuja soma seja igual a um valor K.

---

## Input

A entrada consiste em um único caso de testes. A primeira linha contém dois inteiros N (2 ≤ N ≤ 10⁶) e K (1 ≤ K ≤ 5 * 10⁸), representando o número de elementos no conjunto e o valor K que representa o valor cujo o par deve ser encontrado.  
A segunda linha contém N inteiros A_i (1 ≤ A_i ≤ 5 * 10^8), representando os elementos do conjunto.

---

## Output

A saída deve conter um par de inteiros A_i e A_j (1 ≤ i, j ≤ N) com i \neq j, em qualquer ordem e separados por um espaço, tal que A_i + A_j = K. Caso não exista tal par, a saída deve conter a palavra `"Nao existe"`.

---

## Examples

### Input
```
6 10
8 7 2 5 3 1
```

### Output
```
2 8
```

---

### Input
```
6 12
5 2 6 8 1 9
```

### Output
```
Nao existe
```

---

## Note

No primeiro caso de testes, o objetivo sendo o valor 10, qualquer um dos pares [(8,2), (2,8), (7,3), (3,7)] constitui uma resposta válida.