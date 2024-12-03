### F. Huber

#### Descrição

Sem carro e sem carona do IDP após um dia de trabalho, Lucas resolveu chamar um Huber para chegar em casa. O único problema é que no momento em que o carro chegou, ocorreu um problema a nível mundial e toda a internet do planeta parou de funcionar.

O motorista então, sem saber dirigir por Brasília, avisou Lucas que ele teria que dizer o caminho a ser seguido. Por causa disso, Lucas, que também só conhece o caminho para casa utilizando GPS e estava com receio de indicar uma rota que gastasse muito dinheiro, resolveu pedir a sua ajuda, dadas as suas habilidades em programação, para calcular a menor rota do IDP para a casa dele, a partir de um mapa com as distâncias que ele tinha salvo no computador.

#### Input

A entrada contém um único caso de teste. A primeira linha contém dois inteiros \( N \) e \( M \) (2 ≤ \( N \) ≤ 800, 1 ≤ \( M \) ≤ \( N \times (N - 1) / 2 \)), onde \( N \) é o número locais conhecidos no mapa pelo qual o Huber poderá passar e \( M \) é a quantidade de ligações entre dois locais conhecidos. Em seguida virão \( M \) linhas com três inteiros \( U, V, W \) (1 ≤ \( U, V \) ≤ \( N \), 1 ≤ \( W \) ≤ 200), separados por um espaço, que indicam respectivamente que existe uma rota entre \( U \) e \( V \) com distância \( W \). Nessa representação, o IDP encontra-se sempre no local de índice 1 e a casa de Lucas é o índice \( N \), conforme pode ser visto nas imagens de exemplo.

#### Output

A saída deverá conter a frase `"Distancia para chegar em casa: X"`, onde \( X \) é a menor distância para Lucas chegar em casa, ou `"Preso no IDP"`, se não for possível para Lucas chegar em casa utilizando as rotas do mapa.

---

#### Exemplos

**Input**
```
6 8
1 2 4
1 3 8
3 8 2
3 4 1
3 5 2
4 2 2
4 6 7
5 6 2
```

**Output**
```
Distancia para chegar em casa: 11
```

---

**Input**
```
5 4
2 5 1
2 3 1
5 3 1
1 4 7
```

**Output**
```
Preso no IDP
```

---

#### Note

A imagem abaixo descreve as rotas dos casos de testes, para cada exemplo, onde o índice 1 representa o ponto de partida, que é o IDP (na cor verde), e o valor \( N \) (na cor amarela) é a casa de Lucas:

![Mapa dos casos de teste](https://i.ibb.co/fvftC13/imagem-2024-12-03-003936265.png)