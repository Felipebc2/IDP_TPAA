# C. Booyaa

**Time limit per test:** 2 seconds  
**Memory limit per test:** 256 megabytes  

Booyaa é uma plataforma de streaming online cujo foco é o público de e-sports, principalmente de jogos de tiro como o Tiro Livre. Pessoas que transmitem utilizando a plataforma têm ganhado muitos seguidores recentemente e uma curiosidade geral do público é a de gerar previsões de quantos seguidores um streamer terá em um futuro próximo.

No caso específico de Booyaa, foi observado um fenômeno interessante com relação a esse crescimento de seguidores em todos os streamers, que é o seguinte: a cada dia, o número de novos seguidores de um streamer aumenta exatamente a média aritmética do número de seguidores que ele ganhou nos últimos 30 dias.

Assim, a equipe de desenvolvimento de Booyaa pediu a sua ajuda para criar um programa que, dado o número de seguidores atual de um streamer e as quantidades de inscrições nos últimos 30 dias, calcule quantos seguidores ele terá para alguma quantidade de dias no futuro.

---

### **Input**
A entrada possui um único caso de testes.  
A primeira linha da entrada contém dois inteiros F (1 ≤ F ≤ 10^6) e D (1 ≤ D ≤ 3 \cdot 10^6), separados por um espaço, que indicam, respectivamente, o número de seguidores atual de um streamer e a quantidade de dias no futuro para a qual se deseja calcular a previsão de seguidores.  

A segunda linha contém 30 inteiros S (1 ≤ S ≤ 10^6), separados por um espaço, que são os dados referentes a novas inscrições dos últimos 30 dias.

---

### **Output**
A saída deverá conter um único inteiro, que indica a quantidade de seguidores que o streamer terá daqui a D dias.

---

### **Examples**

#### **Input**
```
10 5
2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2
```

#### **Output**
```
20
```

#### **Input**
```
100 8
1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30
```

#### **Output**
```
240
```