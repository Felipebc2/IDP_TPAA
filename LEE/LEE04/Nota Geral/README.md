# A. Nota Geral

**Time limit per test:** 3 seconds  
**Memory limit per test:** 256 megabytes  

O IDP resolveu classificar todos os alunos de todos os cursos de todas as unidades do Brasil em uma classificação geral.

Todo aluno possui uma nota que é a média de todas as notas que ele já obteve cursando disciplinas até o momento. Dessa forma, você recebeu a atribuição de, dadas as notas de todos os alunos da instituição, ordenar todo mundo em ordem crescente por essas notas.

---

### **Input**
A primeira linha da entrada possui um inteiro A (1 ≤ A ≤ 7.000.000) que indica a quantidade de alunos no total.  
As A linhas seguintes possuem um inteiro N (0 ≤ N ≤ 10) cada, que são as notas de cada um dos alunos.

---

### **Output**
A saída deve conter A linhas, onde cada linha é um inteiro e todas as linhas estão ordenadas em ordem crescente de acordo com a nota de cada aluno.

---

### **Examples**

#### **Input**
```
5
6
10
7
8
5
```

#### **Output**
```
5
6
7
8
10
```

#### **Input**
```
4
5
4
6
5
```

#### **Output**
```
4
5
5
6
```

---

### **Note**
Observação: Os tempos de resolução desse problema são muito restritos. Assim, linguagens não compiladas poderão não ser suficientes, além de ser necessário a leitura e impressão de conteúdos de maneira eficiente (exemplo: em C++, utilizar `sync_with_stdio(false)` e realizar a leitura e escrita com `scanf` e `printf`).
```