# D - Primos Gêmeos 

Um número inteiro primo é aquele que tem "'somente"' quatro divisores distintos, p∈Z:±1 e ±𝑝. 
Já um número natural primo tem "'unicamente"' dois divisores naturais distintos: o número um e ele mesmo.

Além disso, na matemática, existem diversas outras propriedades advindas dos números primos. Uma delas, por exemplo, são os números primos gêmeos. 
Dois números são considerados primos gêmeos se ambos são primos, e a diferença entre eles é de apenas 2 posições. São exemplos de primos gêmeos:

~~~~
(3,5), (5,7), (11,13), (17,19), (29,31)
~~~~

Há inclusive uma conjectura que diz que há infinitos primos gêmeos, mas essa será uma disucussão para outra hora. Nesta tarefa, estamos interessados em saber se dado um número inteiro, se ele é um primo gêmeo ou não.

### **Input**
A primeira linha da entrada contém um inteiro N (1 ≤ N ≤ 10000), que indica a quantidade de números a serem verificados. 
Em seguida haverá 𝑁 linhas onde cada linha contem um inteiro V (1 ≤ V ≤ 10^6) com cada um dos valores a serem verificados.

### **Output**
Para cada inteiro V, imprima uma linha de saída com a mensagem "O numero X eh um primo gemeo" ou "O numero X nao eh um primo gemeo", onde X é o inteiro verificado de acordo com a entrada e a especificação do problema.

~~~
Input1
3
5
7
9
~~~

~~~
Output1
O numero 5 eh um primo gemeo
O numero 7 eh um primo gemeo
O numero 9 nao eh um primo gemeo
~~~

~~~
Input2
6
11
23
31
33
2
3
~~~

~~~
Output2
O numero 11 eh um primo gemeo
O numero 23 nao eh um primo gemeo
O numero 31 eh um primo gemeo
O numero 33 nao eh um primo gemeo
O numero 2 nao eh um primo gemeo
O numero 3 eh um primo gemeo
~~~
