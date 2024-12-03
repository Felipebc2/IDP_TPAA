# A - Distância Binária

Na Teoria da Informação, a distância de hamming entre duas strings de mesmo comprimento é o número de posições nas quais elas diferem entre si. De uma maneira simplificada, essa distância corresponde ao menor número de substituições necessárias para transformar uma string na outra. Por exemplo, a distância de hamming para as palavras "cebola" e "cevada", pode ser calculada da seguinte forma:

c e b o l a  
c e v a d a  
0 1 2 3 4 5  
{2, 3, 4} 

Ou seja, para transformar cebola em cevada, bata alterar, na palavra "cevada", as posições 2, 3 e 4. Assim, a distância de hamming para essas duas palavras é 3.

Essa distância é amplamente utilizada em computação, em áreas como teoria da informação, teoria da codificação, telecomunicações e criptografia. Em telecomunicações ela é utilizada para contar o número de bits corrompidos na transmissão de uma mensagem de um determinado comprimento. Neste caso, a distância é calculada a partir do alfabeto binário {0,1} (palavras compostas por zeros e uns). Por exemplo, os números binários 101 e 011 tem distância igual a dois porque é necessário alterar dois bits para transformar um no outro.

Assim, sua tarefa é dados dois números inteiros positivos, calcular a distância Hamming entre eles.

#### **Input**
A primeira linha contém um inteiro T(1 ≤ T ≤ 100000), que representa o número de casos de teste. Cada uma das N linhas seguintes contém dois inteiros positivos, separados por espaço, na base decimal X e Y (0 ≤ X , Y ≤ 2^63), que representam os números cujo a distância de hamming deve ser calculada.

#### **Output**
A saída deve possuir N linhas, sendo uma para cada caso de teste contendo a distância hamming das representações binárias de X e Y.

```
Input1
1
6 7
```

```
Output1
1
```

```
Input2
2
8 23
15 8
```

```
Output2
5
3
```
