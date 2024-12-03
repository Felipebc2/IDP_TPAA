# A - Função de McCarthy 

John McCarthy (não confundir com John McAfee) foi um cientista da computação muito famoso, por ser um dos fundadores da 
disciplina de Inteligência Artificial.

Ele trabalhou por muito tempo com teoria da computação e, em um de seus trabalhos, ele definiu uma função recursiva 
bem simples, para ser utilizada em testes de verificação formal. A função definida por ele, é a seguinte:

$$$$$$ - 

M(n) = \begin{cases}

n - 10 & \text{se } n > 100 \\ M(M(n + 11)) & \text{se } n \leq 100

\end{cases}

$$$$$$ -

#### **Input**
Assim, sua tarefa é escrever um programa para calcular a função de McCarthy. que indica a quantidade de casos de testes. As 
𝐶 linhas seguintes contém um inteiro N (0 ≤ N ≤ 10000000)A primeira linha da entrada contém um número C (1 ≤ C ≤ 100000) 
que é o valor cujo a função McCarthy deve ser calculada.

#### **Output**
A saída deve conter C linhas, onde cada linha contém um inteiro que é o respectivo resultado da função McCarthy, 
conforme os exemplos.

~~~
Input1
1
98
~~~

~~~
Output1
91
~~~

~~~
Input2
2
35
141
~~~

~~~
Output2
91
131
~~~
