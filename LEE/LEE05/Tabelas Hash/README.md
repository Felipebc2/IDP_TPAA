# B. Tabela de Hash

**Time limit per test:** 1 second  
**Memory limit per test:** 256 megabytes  

Tabelas de Hash, também conhecidas como tabelas de dispersão, armazenam elementos com base no valor absoluto de suas chaves e em técnicas de tratamento de colisões. Para o cálculo do endereço onde deve ser armazenada uma determinada chave, utiliza-se uma função denominada função de dispersão, que transforma a chave em um dos endereços disponíveis na tabela.

### Exemplo de Dispersão
Suponha que uma aplicação utilize uma tabela de dispersão com 13 endereços-base (índices de 0 a 12) e empregue a função de dispersão h(x) = x mod 13, onde mod é a operação que calcula o resto da divisão de x por 13, e x representa a chave do elemento cujo endereço-base deve ser calculado.

Se x = 49, a função de dispersão retornará o valor 10, indicando o local onde esta chave deverá ser armazenada. Caso a mesma aplicação considere a inserção da chave 88, o cálculo retornará o mesmo valor 10, ocorrendo neste caso uma colisão. O tratamento de colisões serve para resolver os conflitos nos casos onde mais de uma chave é mapeada para um mesmo endereço-base da tabela.

Nesta questão, sua tarefa é escrever um programa que calcula o endereço para inserções de diversas chaves em algumas tabelas, com funções de dispersão e tratamento de colisão por encadeamento exterior.

---

## Input
A entrada contém um único caso de teste único. A primeira linha da entrada contém um valor M (1 ≤ M ≤ 1000), que indica a quantidade de endereços-base na tabela seguido por um espaço e um valor C (1 ≤ C ≤ 2000), que indica a quantidade de chaves a serem armazenadas. A segunda linha contém cada uma das C chaves V (0 ≤ V ≤ 1000), separadas por um espaço em branco.

---

## Output
A saída deve conter M linhas, onde cada linha irá informar a posição da estrutura e as chaves que foram armazenadas para cada uma, terminando com o caractere `\` e todos os elementos separados por `" -> "`.

---

## Examples

### Input
```
13 9
44 45 49 70 27 73 92 97 95
```

### Output
```
0 -> \
1 -> 27 -> 92 -> \
2 -> \
3 -> \
4 -> 95 -> \
5 -> 44 -> 97 -> \
6 -> 45 -> \
7 -> 73 -> \
8 -> \
9 -> \
10 -> 49 -> \
11 -> \
12 -> \
```

---

### Input
```
7 8
35 12 2 17 19 51 88 86
```

### Output
```
0 -> 35 -> \
1 -> \
2 -> 2 -> 51 -> 86 -> \
3 -> 17 -> \
4 -> 88 -> \
5 -> 12 -> 19 -> \
6 -> \
```