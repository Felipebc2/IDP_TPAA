# C. Vencedor Não é o Primeiro

**Time limit per test:** 1 second  
**Memory limit per test:** 256 megabytes  

Os cinemas estão com uma promoção para tentar atrair mais clientes. A promoção é a seguinte: em uma determinada sessão, o cliente que comprar o ingresso premiado ganhará o direito de assistir qualquer filme que estiver em cartaz naquele dia de graça. Porém, as regras para o ingresso premiado são um pouco diferentes, pois dependem da cadeira que o cliente escolher para sentar, que possuem numeração única.

Antes da sessão abrir, o cinema sorteia um número R, que indica o ranking do cliente sorteado. A partir desse sorteio, os funcionários acompanham a entrada de cada cliente para saber em qual cadeira ele irá sentar. Dados os números das cadeiras que os clientes escolheram de maneira ordenada, a cadeira premiada é aquela que aparece na posição R dessa lista ordenada. Caso o número do ranking sorteado for maior do que a maior numeração de cadeira escolhida por algum cliente, ganha o cliente que está com a maior numeração.

Como o gerente é muito impaciente, ele não quer esperar que todos os clientes se sentem para verificar o vencedor, ele quer a sua ajuda para informar a cada novo cliente que entra na sessão, quem é o atual possível ganhador daquele sorteio até o momento. Assim, escreva um programa realizar esse controle.

---

### **Input**
A entrada contém um único caso de teste.  
A primeira linha contém dois inteiros P e R (1 ≤ R ≤ P ≤ 20000), que indicam o número de pessoas que entrarão na sessão e o ranking do cliente sorteado, respectivamente.  
A segunda linha contém P inteiros C_i (1 ≤ C_i ≤ 100000), separados por um espaço, que indicam a numeração da cadeira escolhida por cada cliente, em ordem de chegada.

---

### **Output**
A saída deverá conter P linhas, onde a i-ésima deverá conter o atual possível vencedor do sorteio após a entrada do i-ésimo cliente.

---

### **Examples**

#### **Input**
```
7 2
1 8 4 5 3 2 15
```

#### **Output**
```
1
8
8
4
3
2
2
```

#### **Input**
```
8 3
12 2 3 21 7 9 5 6
```

#### **Output**
```
12
12
12
12
12
7
5
5
```

---

### **Note**
No primeiro caso de testes, 7 clientes entrarão na sessão e o ranking sorteado foi 2. A partir disso:

1. O primeiro cliente escolheu a cadeira 1 e é o atual possível vencedor.
2. O segundo cliente escolheu a cadeira 8, que passa a ser o vencedor.
3. O terceiro cliente escolheu a cadeira 4, que não altera o vencedor (ainda 8).
4. O quarto cliente escolheu a cadeira 5, que também não altera o vencedor.
5. O quinto cliente escolheu a cadeira 3, que não altera o vencedor.
6. O sexto cliente escolheu a cadeira 2, que passa a ser o vencedor.
7. O sétimo cliente escolheu a cadeira 15, que mantém o vencedor na cadeira 2.

Os resultados são exibidos em cada linha após a entrada de cada cliente.