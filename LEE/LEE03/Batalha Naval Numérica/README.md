# G. Batalha Naval Numérica

**Time limit per test:** 3 seconds  
**Memory limit per test:** 1024 megabytes  

Batalha Naval é um jogo clássico de tabuleiro onde dois jogadores têm que adivinhar a localização dos navios do adversário. O jogo é jogado em uma grade bidimensional, onde cada jogador tem navios que eles têm que posicionar estrategicamente. O objetivo do jogo é afundar todos os navios do adversário antes que ele afunde os seus.

Cansado de jogar Batalha Naval, Tom, que é matemático, resolveu criar sua própria versão do jogo que ele resolveu chamar de **Batalha Naval Numérica**. Nesse jogo, ao invés de navios, os jogadores possuem uma grade bidimensional com números inteiros, organizados em ordem crescente por colunas e linhas, e o objetivo é responder rapidamente se um número inteiro está presente na grade do adversário.

Depois de jogar algumas partidas, Tom percebeu que o jogo estava demorando muito e resolveu pedir a sua ajuda para criar um programa que resolva o problema de forma eficiente.

---

### **Input**
A entrada contém um único caso de testes.  
A primeira linha da entrada contém três inteiros N, M e Q (1 ≤ N, M ≤ 10³, 1 ≤ Q ≤ 10⁵), representando respectivamente o número de linhas, o número de colunas da grade e o número de consultas que Tom deseja fazer.  

As próximas N linhas contêm M inteiros V_i (1 ≤ V_i ≤ 10⁹), representando a grade do jogador.  

Por fim, as próximas Q linhas contêm um inteiro V (1 ≤ V ≤ 10⁹) que representam as consultas de Tom.

---

### **Output**
A saída deve conter Q linhas, onde cada linha deve conter dois inteiros X e Y, onde X é a linha e Y é a coluna com a primeira ocorrência do número V na grade do adversário. Caso o número não esteja presente na grade, imprima `-1 -1`, conforme os exemplos.

---

### **Examples**

#### **Input**
```
3 3 2
2 4 6
14 16 18
26 28 30
28
15
```

#### **Output**
```
2 1
-1 -1
```

#### **Input**
```
4 5 3
2 4 6 8 10
11 14 15 16 18
21 22 26 28 30
51 52 53 54 65
28
15
27
```

#### **Output**
```
2 3
1 2
-1 -1
```

---

### **Note**
Atenção para os limites de tempo e memória deste problema.