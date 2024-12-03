# B. Clube da Briga

**Time limit per test:** 1 second  
**Memory limit per test:** 256 megabytes  

A primeira regra do Clube da Briga é: você não fala sobre o Clube da Briga.

Por causa dessa regra, ninguém sabe quem está na gangue de quem. Porém, Lucas observou que alguns dos membros do clube sempre chegam em pares e, a partir disso, passou a registrar esses pares. Agora ele pediu a sua ajuda para, usando esses registros, descobrir a quantidade de gangues que existem no clube.

---

### **Input**
A entrada contém um único caso de teste.  
A primeira linha contém dois inteiros N (3 ≤ N ≤ 800) e M (1 ≤ M ≤ N * (N - 1) / 2), onde N é o número de participantes do clube e M é a quantidade de pares que foram anotados por Lucas.  

Em seguida, virão M linhas com dois inteiros U e V (1 ≤ U, V ≤ N), separados por um espaço, que indica que U e V chegaram juntos alguma vez no clube da briga.

---

### **Output**
A saída deverá conter a frase `"X gangue(s) no clube da briga"`, onde X é a quantidade de gangues descobertas pelas anotações de Lucas.

---

### **Examples**

#### **Input**
```
8 5
1 2
3 4
6 5
7 8
4 6
```

#### **Output**
```
3 gangue(s) no clube da briga
```

#### **Input**
```
10 7
8 7
4 2
7 4
2 3
4 6
8 10
10 7
```

#### **Output**
```
4 gangue(s) no clube da briga
```

---

### **Note**
A imagem abaixo descreve as gangues descobertas pelas anotações dos dois casos de testes:

![Casos de Testes](https://i.ibb.co/0hc0zyj/imagem-2024-12-02-234303644.png)