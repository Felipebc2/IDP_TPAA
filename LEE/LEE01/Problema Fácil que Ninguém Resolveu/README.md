# B - Problema Fácil que Ninguém Resolveu

Em 1937, o alemão Lothar Collatz, formulou uma hipótese matemática que segue, até hoje, não demonstrada. Pela sua simplicidade, a conjectura tem atraído matemáticos profissionais e amadores, que tentam provar a sua veracidade. Muitos cientistas passaram anos, décadas, tentando resolvê-lo, inutilmente. Durante a guerra a fria, se dizia até que o problema foi inventado pelos soviéticos para atrasar a ciência nos EUA.

Na Ciência da Computação, problemas costumam ser classificados como pertencentes a uma determinada classe de problemas (por exemplo, NP, em aberto, recursivo, etc). Neste exercício você estará analisando uma propriedade de um algoritmo cuja classificação não é conhecida para todas as entradas possíveis, que é o proposto por Collatz e ficou conhecido como Conjectura de Collatz.

A ideia por trás da conjectura é bem simples, dado um inteiro 𝑁, há duas regras a serem aplicadas:

1. Se N for par, divida por 2 → N/2
2. Se N for Ímpar, multiplique por 3 e adicione 1 → 3N + 1

O objetivo é aplicar sucessivamente essas regras até que o resultado seja 1. Por exemplo, para 𝑁 = 11 , a aplicação sucessiva das regras resulta no seguinte:
![CollatzSequence](https://uploads-cdn.omnicalculator.com/images/collatz_11.svg?width=425&enlarge=0&format=jpeg)

A conjectura diz que para qualquer número natural inteiro, a aplicação sucessiva das regras sempre terminará em 1.

Assim, sua tarefa é, dado um inteiro, aplicar as regras apresentadas sucessivamente até que o valor seja 1.

### **Input**
A entrada possui um inteiro N(1 ≤ N ≤ 10), que é o valor inicial.

### **Output**
A saída deve conter a sequência de inteiros, separados por espaço, da aplicação das regras da conjectura até o valor 1, conforme os exemplos.

~~~
Input1
5
~~~

~~~
Output1
5 16 8 4 2 1
~~~

~~~
Input2
11
~~~

~~~
Output2
11 34 17 52 26 13 40 20 10 5 16 8 4 2 1
~~~
