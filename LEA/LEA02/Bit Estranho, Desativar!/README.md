# LEA02 - Lista de Exercícios de Atividade em Aula 02


---

## Problem C. Bit Estranho, Desativar!

**Time limit:** 1000 ms  
**Mem limit:** 262144 kB  
**OS:** Windows

A cada segundo, milhares de partículas chamadas raios cósmicos, viajando perto da velocidade da luz, atingem cada metro quadrado da atmosfera da Terra, lançando uma cascata de partículas carregadas que caem na superfície do planeta. Quando essas partículas atingem os transistores de microchips, elas podem causar falhas e até mesmo provocar travamentos de computadores. Esse é um fenômeno raro, mas bits podem ser invertidos devido a uma ou várias dessas interferências.

Dessa vez, o problema é de excesso! A empresa **Inovação em Dispositivos Periféricos** pediu sua ajuda para consertar possíveis excessos causados por essa interferência cósmica. Sua tarefa é a seguinte: após detectar que em um número um bit está estranho, você deve desativar esse bit, transformando-o em 0, caso não o seja.

Por exemplo, se na memória encontra-se o número 46, que está com problema no bit 3 (começando a contagem de zero e do bit menos significativo), a desativação desse bit será feita da seguinte forma:

```
Posições: 7 6 5 4 3 2 1 0
Binário:  0 0 1 0 1 1 1 0  <- 46 em binário
          ______-______
Binário:  0 0 1 0 0 1 1 0  <- 38 em binário
```

---

### **Input**

A primeira linha da entrada possui dois inteiros N (0 < N ≤ 100000) e B (0 ≤ B ≤ 31), separados por espaço.  

As N linhas seguintes possuem N inteiros V (0 ≤ V ≤ 10⁹) cada, que são os números cujo bit na posição B deve ser desativado.

---

### **Output**

A saída deve possuir N linhas, onde cada linha é o inteiro V com o respectivo bit desativado, conforme os exemplos.

---

### **Examples**

#### **Input**
```
1 3
46
```

#### **Output**
```
38
```

#### **Input**
```
3 2
7
48
18
```

#### **Output**
```
3
48
18
```