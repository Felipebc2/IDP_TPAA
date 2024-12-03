# D - Divisibilidade por 3

Na matemática, um número é divisível por 3 quando a soma dos valores absolutos de seus algarismos resultar em um número 
divisível por 3. Nesse caso, o resto será o mesmo que o deixado na divisão da soma dos valores absolutos do número por 3.

Exemplos:
~~~
51 → 5 + 1 = 6 ✓
101 → 1 + 0 + 1 = 2 ×
234 → 2 + 3 + 4 = 9 ✓
7.851 → 7 + 8 + 5 + 1 = 21 → 2 + 1 = 3 ✓
9.631 → 9 + 6 + 3 + 1 = 19 → 1 + 9 = 10 → 1 + 0 = 1 ×
998.877.665.544 → 9 + 9 + 8 + 8+ 7 + 7 + 6 + 6+ 5 + 5 + 4 + 4 = 78 → 7 + 8 = 15 → 1 + 5 = 6 ✓
~~~

Assim, sua tarefa é, dado um número, dizer se este é divisível por três ou não.

#### **Input**
A entrada contém diversos casos de testes. Cada caso de teste é composto por duas linhas, onde a primeira linha contém um inteiro 
𝐷 (1 ≤ D ≤ 100000) que indica o número de dígitos do número e a segunda linha contém um inteiro N(0 ≤ N ≤ 10^D) que é o 
número a ser verificado. A entrada será finalizada se o valor D lido, for igual a -1.

#### **Output**
A saída deverá conter uma linha para cada valor verificado. Cada linha dever conter um inteiro que é a soma dos 
dígitos e a palavra sim se o número for divisível por 3, ou nao caso contrário, conforme os exemplos.

~~~
Input1
2
15
-1
~~~

~~~
Output1
6 sim
~~~

~~~
Input2
3
300
3
100
-1
~~~

~~~
Output2
3 sim
1 nao
~~~
