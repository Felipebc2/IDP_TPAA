# C. Cabos Unificados

**Time limit per test:** 1 second  
**Memory limit per test:** 256 megabytes  

A empresa Intelligent Data Pipes, famosa por sua obsessão em cortar custos, está com um novo projeto: conectar os prédios da Asa Sul e da Asa Norte utilizando cabos de rede antigos que estavam jogados no depósito (não tente isso em casa). Como uma empresa que preza por cada centavo, eles querem encontrar a maneira mais barata de unir todos os cabos em um único "supercabo" que ligue as duas unidades.

Cada cabo possui um comprimento específico. Quando dois cabos são conectados, eles se transformam em um único cabo cujo comprimento é a soma dos dois cabos conectados. O custo dessa operação é equivalente ao comprimento do maior dos dois cabos conectados.  

O objetivo do IDP é minimizar o custo total de todas as conexões necessárias para montar o "supercabo". Afinal, os conectores são caros!

Considerando que os cabos já foram separados, sua missão é ajudar o IDP a encontrar o menor custo para conectar todos eles de modo a conectar as duas unidades da maneira o mais econômica possível.

---

### **Input**
A primeira linha contém um número inteiro N (2 ≤ N ≤ 10⁵), representando o número de cabos.  
A segunda linha contém N inteiros C (1 ≤ C ≤ 10³), separados por espaços, onde cada inteiro representa o comprimento de um cabo de rede.

---

### **Output**
A saída deve conter um único número inteiro que é o menor custo total para conectar todos os cabos.

---

### **Examples**

#### **Input**
```
4
4 3 2 6
```

#### **Output**
```
17
```

#### **Input**
```
5
1 25 10 3 2
```

#### **Output**
```
40
```

---

### **Note**
No caso de teste 01:
1. Primeiro, conectamos os cabos de comprimento 3 e 2. O custo é 3 e resulta em um novo cabo de tamanho 5. Assim temos agora cabos de comprimento [4, 6, 5].
2. Depois, conectamos os cabos de comprimento 4 e 5. O custo é 5 e o novo cabo possui tamanho 9. Ficamos então com cabos de comprimento [6, 9].
3. Finalmente, conectamos os cabos de comprimento 6 e 9. O custo é 9 e o "supercabo" possui tamanho 15.

O custo total é 3 + 5 + 9 = 17.