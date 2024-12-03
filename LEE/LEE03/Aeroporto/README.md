# D. Aeroporto

**Time limit per test:** 1 second  
**Memory limit per test:** 256 megabytes  

O aeroporto de Brasília recebe todos os dias uma média de 400 pousos e decolagens. No último ano, foram realizados em torno de 144.000 movimentos aéreos.

Para organizar todo o fluxo de aviões que chegam e saem de lá, a torre de controle funciona o tempo inteiro com nível máximo de atenção. Para descartar qualquer possibilidade de erro humano, o chefe do controle de tráfego aéreo contratou você para desenvolver um programa que organize automaticamente o fluxo de aviões no campo de pouso.  

Para isso, basta seguir o seguinte protocolo: os aviões que vêm do **Norte** da pista têm maior prioridade de serem colocados na fila, pois são aqueles que estão mais próximos do localizador (início da pista); em seguida, a ordem de prioridade dos aviões é **Sul**, **Leste** e **Oeste**.  

Assim, dada essa ordem de prioridades, os aviões são inseridos na fila 1 por vez, ou seja, insere-se 1 avião do lado **Norte**, depois um avião do lado **Sul**, em seguida 1 avião do lado **Leste** e, por último, 1 avião do lado **Oeste**, até que não haja mais aviões para serem inseridos na fila.

Dessa forma, o seu programa deve receber as informações de todos os aviões que chegarão ao aeroporto de Brasília e organizar a fila de aviões que irão pousar na pista.

---

### **Input**
A entrada é composta por um único caso de testes.  
A primeira linha contém um caractere D, que poderá ser `"N"`, `"S"`, `"L"` ou `"O"`, representando o ponto cardeal do avião que está solicitando entrar na fila de pouso.  

Em seguida, serão lidas um número desconhecido de linhas onde cada uma terá o prefixo `"BX"`, onde `"B"` é um caractere que indica se trata de um voo, e `"X"` é um número inteiro que representa o identificador do avião.  

Sucessivamente, aparecem linhas com o caractere de identificação de ponto cardeal, indicando que as linhas a seguir são referentes a aviões que desejam entrar na fila de pouso por aquela direção. As informações de entrada terminam com uma linha contendo o caractere `"0"`.

---

### **Output**
A saída é composta de uma única linha contendo as aeronaves enfileiradas pela ordem do protocolo estabelecido pelo aeroporto.

---

### **Examples**

#### **Input**
```
N
B1
B26
B38
B23
L
B357
B2
B99
O
B3
B4
B8
B74
S
B44
B6
0
```

#### **Output**
```
B1 B44 B357 B3 B26 B6 B2 B4 B38 B99 B8 B23 B74
```

#### **Input**
```
N
B10
S
B9
B8
O
B7
L
B6
S
B5
B4
N
B3
B2
B1
0
```

#### **Output**
```
B10 B9 B6 B7 B3 B8 B2 B5 B1 B4
```