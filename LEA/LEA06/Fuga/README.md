# C. Fuga

**Time limit per test:** 3 seconds  
**Memory limit per test:** 256 megabytes  

Os detentos da prisão da Suprema Justiça Federal do Instituto de Departamento de Polícia estão planejando uma fuga em massa. Para isso, eles precisam de um plano de fuga para roubar a chave da porta de saída, evitando as câmeras de segurança, passando por diversos pontos de acesso. Nessa prisão os pontos de acesso possuem a mesma distância entre si (valor 1).

Como você é o preso mais inteligente da prisão, a gangue mais perigosa exigiu que você bolasse e executasse esse plano de fuga. Durante o banho de sol, todos os presos irão para o pátio, enquanto você irá roubar a chave da porta de saída, utilizando a rota mais curta possível, a partir do pátio, evitando as câmeras de segurança. Assim que você roubar a chave, você deverá retornar para o pátio e entregar a chave para o líder da gangue e todo mundo irá fugir pela porta de saída utilizando a rota mais curta entre o pátio e a porta de saída, dessa vez ignorando a presença das câmeras de segurança, pois todo mundo está fugindo em massa.

Apesar do plano parecer perfeito, a gangue quer primeiro saber de você qual a menor distância total que deverá ser percorrida, para o plano de fuga dar certo.

---

### **Input**
A entrada é composta por um único caso de testes.  
A primeira linha da entrada contém três inteiros N, M e C (2 ≤ N ≤ 10³, 1 ≤ M ≤ 10⁴, 0 ≤ C ≤ N) que representam, respectivamente, os pontos de acesso da prisão, o número de corredores que ligam os pontos de acesso de maneira bidirecional e o número de câmeras de segurança.  

Em seguida, C linhas contêm um inteiro P (1 ≤ P ≤ N) indicando a posição de uma câmera de segurança.  

As próximas M linhas contêm dois inteiros A e B (1 ≤ A, B ≤ N) de cada uma, indicando que existe um corredor de acesso entre os pontos A e B.  

A última linha contém três inteiros E, S e K (1 ≤ E, S, K ≤ N), indicando a posição do pátio, a posição da porta de saída e a posição da chave da porta de saída, respectivamente.

---

### **Output**
A saída deve conter dois inteiros, separados por um espaço, indicando a menor distância total que você deverá percorrer saindo do pátio até encontrar a chave e de volta ao pátio, evitando as câmeras de segurança, e a distância que os presos deverão percorrer saindo do pátio, ou então a frase `"impossivel fugir"`, caso não seja possível pegar a chave e sair, conforme os exemplos.

---

### **Examples**

#### **Input**
```
8 9 2
2 8
1 2
3 8
1 3
4 5
3 6
4 6
2 7
5 1
5 1 7
```

#### **Output**
```
8 3
```

#### **Input**
```
8 9 5
2 8 3 5 4
1 2
3 8
1 3
4 5
3 6
4 6
2 7
5 1
5 1 7
```

#### **Output**
```
impossivel fugir
```

---

### **Note**
Os casos de testes podem ser visualizados na seguinte imagem:

![Casos de Testes](https://i.ibb.co/fpT9XJs/imagem-2024-12-02-234516553.png)

No primeiro caso de testes, o pátio está representado pelo vértice 5 (em cinza) e a saída pelo vértice 1 (em azul). Já as câmeras encontram-se em vermelho (vértices 2 e 8). A menor distância para buscar a chave e retornar para o pátio, sem passar por nenhuma câmera é de 8, e a distância para fugir a partir do pátio até a saída é de 3.