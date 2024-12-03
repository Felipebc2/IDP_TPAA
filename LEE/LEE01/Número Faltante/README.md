# A - Número Faltante

Uma permutação de 𝑁 inteiros é uma reorganização específica dos números inteiros de 1 a 𝑁, de modo que cada número 
apareça exatamente uma vez na sequência resultante. Por exemplo, se utilizarmos 𝑁 = 10, uma permutação válida de 
𝑁 seria:

9, 4, 7, 2, 10, 1, 6, 8, 3, 5

Neste exercício, dada uma permutação de 𝑁 inteiros, um inteiro dessa permutação foi removido e sua tarefa é identificar 
qual é esse número faltante dessa permutação.

#### **Input**
A primeira linha contém um inteiro N(2 ≤ N ≤ 100000), que representa o tamanho da permutação. 
A segunda linha possui N − 1 inteiros, separados por espaço, que são a lista de números a qual o 
número faltante deverá ser identificado.

#### **Output**
A saída deverá conter um único inteiro que é o número faltante dessa permutação.

~~~
Input1
10
3 8 2 4 1 10 6 7 9
~~~

~~~
Output1
5
~~~

~~~
Input2
12
3 5 10 2 4 11 1 12 6 7 9
~~~

~~~
Output2
8
~~~
