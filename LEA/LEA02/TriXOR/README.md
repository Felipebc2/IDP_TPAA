# LEA02 - Lista de Exercícios de Atividade em Aula 02

---

## Problem A. TriXOR

**Time limit:** 1000 ms  
**Mem limit:** 262144 kB  
**OS:** Windows

Neste exercício, três inteiros A, B e C foram utilizados para gerar um quarto inteiro Y, que é a aplicação da operação XOR bit-a-bit desses três números, da seguinte forma:

Y = (A ⨁ B ⨁ C)

Sua tarefa é, dados apenas dois dos inteiros (A e B) e o resultado da operação (Y), descobrir qual o inteiro faltante (C), se for possível. Por exemplo, dados os valores A = 26, B = 10 e Y = 25, pode-se verificar que C = 9 é uma resposta válida para o inteiro faltante, pois:

```
11010  -> 26 (A)
01010  -> 10 (B)
01001  ->  9 (C)
_____
11001  -> 25 (Y)
```

Assim, além de encontrar o inteiro faltante, este deve ser a menor resposta válida possível, se esta existir.

---

### **Input**

A primeira linha da entrada contém um inteiro T (1 ≤ T ≤ 1000) que representa o número de casos de teste.

Em seguida, há T pares de linhas onde na primeira dessas linhas há dois inteiros A e B (0 ≤ A, B ≤ 10⁷), que são os números dos quais se tem acesso. A segunda linha do caso de teste contém um inteiro Y (0 ≤ Y ≤ 10⁷), que é o resultado da operação.

---

### **Output**

A saída deve conter T linhas, onde cada uma deve conter um inteiro C (0 ≤ C ≤ 10⁸) que é o mínimo valor possível para a solução da operação, ou -1 se tal número não existir.

---

### **Examples**

#### **Input**
```
1
26 10
25
```

#### **Output**
```
9
```

#### **Input**
```
2
4 8
15
13 5
22
```

#### **Output**
```
3
30
```

---

### **Note**

A operação XOR bit-a-bit, representada pelo símbolo ⨁ , é uma operação lógica que compara cada par de bits em duas sequências binárias e retorna um resultado onde um bit no resultado é definido como 1 apenas se o 1 aparecer em apenas uma das sequências naquela posição ou, caso contrário, o valor é zero. Por exemplo, dados A = 1010 e B = 1100:

A ⨁ B = 0110