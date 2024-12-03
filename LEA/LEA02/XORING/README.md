# LEA02 - Lista de Exercícios de Atividade em Aula 02

---

## Problem D. XORING

**Time limit:** 1000 ms  
**Mem limit:** 262144 kB  
**OS:** Windows

Vamos definir uma nova operação sobre duas strings R e S chamada de **XORING**. Dadas duas strings R e S de mesmo tamanho N, a operação XORING é definida como a string T de tamanho N, tal que dois caracteres R_i e S_i são sempre a mesma letra, podendo diferenciar-se apenas em caixa alta ou baixa.  

Considerando C e c como a mesma letra em caixa alta e baixa, temos que a operação XORING, representada por ⊕, é definida como:

- C ⊕ C = C  
- C ⊕ c = c  
- c ⊕ C = c  
- c ⊕ c = C

Sua tarefa é, dado duas strings R e S de tamanho N, calcular a string T resultante da operação XORING entre R e S.

---

### **Input**

A primeira linha da entrada contém um inteiro N (1 ≤ N ≤ 100), que representa o número de casos de testes.  
Cada uma das próximas N linhas contém duas strings R e S de mesmo tamanho N (1 ≤ |R| = |S| ≤ 100), separadas por um espaço.

---

### **Output**

A saída deverá conter N linhas, cada uma contendo uma string T de tamanho N, que representa a string resultante da operação XORING entre R e S.

---

### **Examples**

#### **Input**
```
3
idp IDP
idP IDP
idP idp
```

#### **Output**
```
idp
idP
IDp
```

#### **Input**
```
2
bAnAnA BaNaNa
xor xor
```

#### **Output**
```
banana
XOR
```