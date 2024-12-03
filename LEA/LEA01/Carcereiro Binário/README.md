# B - Carcereiro Binário 

No Instituto de Detenção Permanente, os priosioneiros são motivados a ler para reduzir a própria pena. Por causa disso, dentro das suas próprias celas, que são individuais, 
eles possuem interruptores para acender e apagar a luz da cela.

![CarcereiroBinario](https://i.pinimg.com/564x/4a/b9/76/4ab976f9b7dbd39396eaf830abf88ac6.jpg)

Apesar do controle ser dos prisioneiros, os carcereiros possuem um sistema de monitoramento que permite que eles saibam se a luz está acesa ou apagada. O único problema desse sistema é que ele 
economiza muita memória e, por isso, o estado de todas as lâmpadas é armazenado em um único inteiro onde cada bit representa o estado de uma lâmpada. Por exemplo, se o inteiro mostrado no painel for 58, 
a organização da prisão é a seguinte:

7 6 5 4 3 2 1 0      <- Números das celas
0 0 1 1 1 0 1 0      <- Celas com a luz acessa
             58      <- Valor no painel dos carcereiros
             
Como os carcereiros tem dificuldade em interpretar o valor no painel, eles contrataram você para escrever um progrma que, dado o valor do painel, e o número da cela, informe se a luz da cela está acesa ou apagada.

### **Input**
A entrada contém um caso de teste. A primeira linha contém dois inteiros N (0 ≤ N ≤ 2^64 - 1) e Q (1 ≤ Q ≤ 100), o número de celas e o número de consultas, respectivamente. As próximas Q linhas contém um inteiro 
C (0 ≤ C ≤ 63), o número da cela a ser consultada.

### **Output**
A saída deve conter Q linhas, cada uma contendo a palavra "acesa" ou "apagada", indicando o estado da luz da cela consultada.

~~~
Input1
241 3
0
3
6
~~~

~~~
Output1
acesa
apagada
acesa
~~~

~~~
Input2
4611686014132453376 3
16
32
38
~~~

~~~
Output2
apagada
acesa
acesa
~~~
