# E. Planejamento de Estudos

**Time limit per test:** 1 second  
**Memory limit per test:** 256 megabytes  

Todo livro de cálculo costuma possuir uma grande quantidade de exercícios para praticar os conceitos apresentados. A ideia é que o aluno resolva esses exercícios gradativamente para cada novo conteúdo.

Santana pensa de uma maneira diferente. Ele acredita que a melhor forma de estudar é deixar o conteúdo acumular e resolver todos os exercícios de uma vez só, em várias sessões, utilizando uma estratégia pomodoro de estudo até a hora da prova. O único problema é que às vezes ele não consegue resolver todos os exercícios de um único capítulo de uma vez só em uma única sessão, ou o tamanho do tempo das sessões seriam diferentes e ele não conseguiria se organizar direito. Assim, ele resolveu se organizar da seguinte forma:

Dada a quantidade restante de horas que ele tem para estudar até a prova, ele vai escolher uma quantidade fixa de exercícios que ele quer resolver em uma sessão e, a partir disso, ele vai dividir os exercícios em várias sessões de forma que nunca exercícios de capítulos diferentes sejam resolvidos na mesma sessão (para não ficar confuso nesses conteúdos). Essa divisão de tempo será feita até o momento da prova.

Assim, ele pediu a sua ajuda para saber qual a melhor quantidade de exercícios que ele deve resolver em cada sessão para que ele consiga distribuir bem as sessões e estudar todo o conteúdo até o momento da prova.

---

### **Input**
A entrada é composta por um único caso de testes.  
A primeira linha contém dois inteiros N (1 ≤ N ≤ 10⁵) e H (1 ≤ H ≤ 10⁹), representando a quantidade de capítulos do livro e a quantidade de horas que ele tem para estudar até a prova.  
A segunda linha contém N inteiros E_i (1 ≤ E_i ≤ 10⁹), representando a quantidade de exercícios do capítulo i.

---

### **Output**
A saída é composta por um inteiro que representa a quantidade de exercícios máxima que ele deve resolver em cada sessão.

---

### **Examples**

#### **Input**
```
4 8
3 6 7 11
```

#### **Output**
```
4
```

#### **Input**
```
5 5
30 11 23 4 20
```

#### **Output**
```
30
```

#### **Input**
```
5 6
30 11 23 4 20
```

#### **Output**
```
23
```

---

### **Note**
No primeiro caso de testes, ele tem 8 sessões para estudar até a prova em um livro com quatro capítulos. Dessa forma, o número ideal de exercícios por sessão é 4, cuja distribuição é a seguinte:

- **Primeira sessão**: Ele faz todos os 3 exercícios do primeiro capítulo (porque tem menos do que 4).  
- **Segunda sessão**: Ele resolve 4 exercícios do segundo capítulo.  
- **Terceira sessão**: Ele resolve os 2 exercícios restantes do capítulo 2.  
- **Quarta sessão**: Ele resolve 4 exercícios do capítulo 3.  
- **Quinta sessão**: Ele resolve os 3 exercícios restantes do capítulo 3.  
- **Sexta sessão**: Ele resolve 4 exercícios do capítulo 4.  
- **Sétima sessão**: Ele também resolve 4 exercícios do capítulo 4.  
- **Oitava sessão**: Ele resolve os 3 últimos exercícios restantes do capítulo 4.

A resposta para o número ideal de exercícios por sessão neste caso é **4**.