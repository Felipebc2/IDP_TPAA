# G. Reunião Mágica

**Time limit per test:** 2 seconds  
**Memory limit per test:** 256 megabytes  

Um dos jogos de baralho mais famosos do mundo é o Reunião Mágica. Jogado por dois jogadores, cada um trás o seu próprio baralho de cartas para a partida e ganha quem conseguir derrotar o adversário. O que faz muito sucesso nesse jogo é que cada baralho é composto por monstros, magias e armadilhas e dos mais diversos tipos, então os jogadores vivem montando diferentes baralhos para jogar.  

Um dos modos de jogo do Reunião Mágica é o Unika, onde mesmo os jogadores tendo seu próprio baralho, não é permitido que ambos tenham alguma mesma carta em seus baralhos durante aquela partida. Então, antes de cada partida de Unika, os jogadores devem verificar as cartas de ambos para saber se seus baralhos estão aptos para a partida ou não.  

Como essa tarefa demora muito tempo, você foi contratado para criar um programa que identifique as cartas inválidas de um par de baralhos para uma partida de Unika.

---

### **Input**
A entrada consiste de múltiplos casos de testes.  
A primeira linha contém um inteiro `T` (1 ≤ T ≤ 10000) que indica o número de casos de testes.  
As `T` linhas seguintes contêm duas strings `R` e `S` (1 ≤ |R|, |S| ≤ 1000), separadas por um espaço, que são os baralhos de cada jogador, onde cada carta, que pode ser uma letra ou um dígito, representa uma carta.

---

### **Output**
A saída deve conter `T` linhas onde, para cada caso de teste, deve imprimir **"Baralhos prontos para o duelo"** se não houver cartas que estejam presentes nos dois baralhos ao mesmo tempo, ou uma string, sem repetições e em ordem lexicográfica (alfabética), que são as cartas que aparecem nos dois baralhos ao mesmo tempo, conforme os exemplos.

---

### **Examples**

#### **Input**
```
2
ABCDE FGHIJKL
abcde fghijkb
```

#### **Output**
```
Baralhos prontos para o duelo
b
```

---

#### **Input**
```
2
123abc bca228
159abcA 149BADBBB9b
```

#### **Output**
```
2abc
19Ab
```