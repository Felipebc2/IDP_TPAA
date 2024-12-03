# B. Maiores Notas

**Time limit per test:** 1 second  
**Memory limit per test:** 256 megabytes  

O IDP resolveu classificar todos os alunos de todos os cursos de todas as unidades do Brasil em uma classificação geral.

Pensando em recompensar os melhores alunos, foi solicitada a sua ajuda para verificar quantos alunos ficaram acima de uma determinada nota de corte da recompensa.

Assim, sua tarefa é escrever um programa para, dada a classificação geral dos alunos e algumas consultas, responder quantos alunos estão acima desse valor consultado.

---

### **Input**
A primeira linha da entrada possui dois inteiros A (1 ≤ A ≤ 100000) e Q (1 ≤ Q ≤ 10000), separados por um espaço, que indicam a quantidade de alunos e a quantidade de consultas a serem realizadas.  

A segunda linha contém A inteiros V (0 ≤ V_i ≤ 4000000), separados por espaço, **e ordenados em ordem não-decrescente**, que são as notas de cada um dos alunos.  

Por último, há Q linhas, cada uma com um inteiro C_j (0 ≤ C_j ≤ 4000000), que é uma nota de corte para ser consultada.

---

### **Output**
A saída deve conter Q linhas, onde cada linha deve conter a frase:  
`"X notas maiores que Cj"`,  
em que X é a quantidade de notas maiores do que o valor da consulta C_j, conforme os exemplos.

---

### **Examples**

#### **Input**
```
5 3
4 8 10 15
0
5
8
```

#### **Output**
```
5 notas maiores que 0
4 notas maiores que 5
2 notas maiores que 8
```

#### **Input**
```
8 5
2 5 8 25 28 29 30 50
5
7
9
30
50
```

#### **Output**
```
6 notas maiores que 5
5 notas maiores que 7
5 notas maiores que 9
1 notas maiores que 30
0 notas maiores que 50
```