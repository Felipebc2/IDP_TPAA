# B. Organização

**Time limit per test:** 1 second  
**Memory limit per test:** 256 megabytes  

O **ViraTaça IDP** é um evento que ocorre todo semestre ao fim das atividades esportivas da instituição. Esse ano, a organização quis inovar e entregar alguns brindes mais personalizados para os participantes, e por isso eles resolveram ouvir as pessoas sobre o que elas gostariam de receber.

Para isso, durante a semana que antecede o evento, a organização disponibilizou um formulário online para que as pessoas pudessem escrever três opções de brindes, só que eles não esperavam que as pessoas pudessem preencher o formulário mais de uma vez, e o sistema de registro acaba sobrescrevendo as opções anteriores de uma pessoa, caso ela preencha o formulário mais de uma vez (pensando bem, isso talvez seja até uma opção boa). Como consequência, nem todo mundo que preencheu conseguiu receber o que queria.

Após a competição, a organização resolveu coletar o feedback de alguns dos participantes, checando se eles receberam um dos brindes que escolheram, ou não. Porém, como no término do evento as pessoas estavam muito cansadas para responder algo monótono e mais cansativo, eles pediram a sua ajuda para escrever um programa que, dada as escolhas dos participantes que preencheram o formulário e o feedback coletado de alguns dos participantes, para checar se as pessoas receberam um dos brindes que escolheram.

---

### **Input**
A entrada contém um único caso de teste.  
A primeira linha contém dois inteiros \(P\) e \(S\) (\(1 \leq P, S \leq 10000\)), que indicam o número de vezes que o formulário foi preenchido antes do evento e o número de participantes que responderam ao feedback após o evento, respectivamente.  

As próximas \(P\) linhas contêm quatro strings \(F_i\), \(D_1\), \(D_2\), e \(D_3\) (\(1 \leq |F_i, D_1, D_2, D_3| \leq 100\)), separadas por um espaço e contendo apenas letras maiúsculas ou minúsculas, indicando o nome do participante que preencheu o formulário e as três opções de brindes que ele escolheu, respectivamente.  

As próximas \(S\) linhas contêm duas strings \(N_i\) e \(B_i\) (\(1 \leq |N_i, B_i| \leq 100\)), separadas por um espaço e contendo apenas letras maiúsculas ou minúsculas, indicando o nome do participante que respondeu o feedback e o brinde que ele recebeu, respectivamente.

---

### **Output**
A saída deverá conter \(S\) linhas.  
A \(i\)-ésima linha deverá conter a string `"S_i conseguiu ganhar B_i"`, onde \(S_i\) é o nome do participante que respondeu o feedback e \(B_i\) é o brinde que ele conseguiu ganhar, caso ele tenha recebido algum dos brindes que escolheu.  

Se ele não recebeu um dos brindes que escolheu, a saída deverá conter a string `"S_i infelizmente ganhou B_i"`.  

Por último, se o participante não preencheu o formulário antes de responder ao feedback, a saída deverá conter a string `"S_i queria qualquer coisa e ganhou B_i"`.

---

### **Examples**

#### **Input**
```
4 3
lucas caneta chaveiro mochila
joao caneca mochila termica
guilherme mochila termica carro
lucas controle voucher viagem
guilherme caneca
lucas caneta
joao termica
```

#### **Output**
```
guilherme infelizmente ganhou caneca...
lucas infelizmente ganhou caneta...
joao conseguiu ganhar termica!
```

#### **Input**
```
2 3
klayton carro dinheiro passagem
lucas ferias moto dinheiro
lucas carro
patricia moto
klayton dinheiro
```

#### **Output**
```
lucas infelizmente ganhou carro...
patricia queria ganhar qualquer coisa e ganhou moto!
klayton conseguiu ganhar dinheiro!
```