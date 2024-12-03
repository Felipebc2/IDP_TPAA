# C. Representante de Classe

**Time Limit per Test**: 1 second  
**Memory Limit per Test**: 256 megabytes  

---

As eleições para representante de classe estão chegando e o coordenador do curso pediu para que os próprios alunos se organizassem para escolher um novo representante.

Para tentar evitar a formação explícita de panelinhas, o coordenador decidiu impor a seguinte regra: alunos só podem se juntar no máximo em duplas para confirmar em quem irão votar e nenhuma pessoa pode mudar de voto. Uma vez conversado com uma pessoa, essa pessoa pode conversar com outra pessoa que também compartilha do mesmo voto para representante. Assim, os alunos começaram uma rede de amizades, onde cada aluno tem um amigo e cada amigo tem um amigo, de forma que todos votam no mesmo representante.

O IDP, Instituto de Dados e Política, quer divulgar estatísticas sobre a eleição para representante de classe, porém com essa regra de duplas, não é possível saber diretamente quantos grupos diferentes para escolha de representante existem. Assim, eles pediram a sua ajuda, para que, a partir dos registros de duplas, você consiga determinar qual é o maior grupo de alunos que votam no mesmo representante e quantos alunos fazem parte desse grupo.

---

## Input

A entrada é composta por um único caso de testes. A primeira linha contém dois inteiros M e N (2≤M≤500 e 0≤N≤200000), representando o número de ilhas e o número de pontes, respectivamente. As próximas N linhas contém dois inteiros X e Y (1≤X,Y≤M), indicando que as ilhas X e Y estão conectadas por uma ponte.

---

## Output

A saída deve conter a frase `"O grupo mais numeroso tem X aluno(s)"`, onde ( X ) é o número de alunos que estão no maior grupo de votação.

---

### Examples

#### Input
```
7 4
4 2
1 2
4 5
6 7
```

#### Output
```
O grupo mais numeroso tem 4 aluno(s)
```

---

#### Input
```
10 8
9 2
1 8
2 4
3 6
2 10
6 2
8 10
8 10
```

#### Output
```
O grupo mais numeroso tem 7 aluno(s)
```

---

### Note

Os respectivos grafos dos casos de testes são:

Caso de Teste 1                 | Caso de Teste 2
:------------------------------:|:------------------------------:
![Caso de Teste 1](https://i.ibb.co/kD6XS6M/imagem-2024-12-03-002953497.png) | ![Caso de Teste 2](https://i.ibb.co/kD6XS6M/imagem-2024-12-03-002953497.png)