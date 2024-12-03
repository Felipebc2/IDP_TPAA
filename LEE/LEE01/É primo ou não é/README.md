# C - É primo ou não é 
"'Número primo"' é qualquer número 𝑝 cujo conjunto dos divisores não inversíveis não é vazio, e todos os seus 
elementos são produtos de 𝑝 por números inteiros inversíveis. De acordo com esta definição, 0, 1 e  −1 não são 
números primos.

Um número inteiro primo é aquele que tem "'somente"' quatro divisores distintos, p ∈ Z : ± 1 ± p. 
Já um número natural primo tem "'unicamente"' dois divisores naturais distintos: **o número um e ele mesmo.**

Nesta tarefa, estamos interessados em saber, dada uma lista de inteiros naturais, quais destes números são
primos e quais não são.



### **Input**
A primeira linha da entrada contém um inteiro N(1 ≤ N ≤ 1000), que é o valor inicial, que indica a quantidade de 
números a serem verificados. Em seguida haverá 𝑁 linhas onde cada linha contem um inteiro V(1 ≤ V ≤ 10^7)
com cada um dos valores cujo a primalidade deverá ser verificada.

### **Output**
Para cada inteiro V, imprima uma linha de saída com a mensagem "o numero X eh primo" ou "o numero X nao eh primo", onde 
𝑋 é o inteiro verificado de acordo com a entrada e a especificação do problema.

~~~
Input1
3
5
7
9
~~~

~~~
Output1
o numero 5 eh primo
o numero 7 eh primo
o numero 9 nao eh primo
~~~

~~~
Input2
6
5
5
15
51
19
32
~~~

~~~
Output2
o numero 5 eh primo
o numero 5 eh primo
o numero 15 nao eh primo
o numero 51 nao eh primo
o numero 19 eh primo
o numero 32 nao eh primo
~~~
