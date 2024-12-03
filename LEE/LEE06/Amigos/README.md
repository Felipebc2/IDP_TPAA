# B. Amigos

Observando o comportamento das turmas de computação, o professor ficou curioso para saber se existem diferentes grupos de amigos entre os alunos dos diferentes semestres do curso. Para levantar essa informação, ele resolveu perguntar a cada aluno qual com quais outros alunos ele se considera amigo.

A partir das respostas, o professor pediu a sua ajuda para escrever um programa que verifique se há pelo menos um grupo de amigos que não interage com nenhum outro grupo, ou se todo mundo é amigo de todo mundo.

---

## Input

A entrada contém um único caso de teste. A primeira linha contém dois inteiros N (3 ≤ N ≤ 800) e M (1 ≤ M ≤ N \times (N - 1) / 2), onde N é o número de alunos e M é a quantidade de relações de amizade coletadas pelo professor. Em seguida virão M linhas com dois inteiros U e V (1 ≤ U, V ≤ N), separados por um espaço, que indica que U e V são amigos.

---

## Output

A saída deverá conter a frase `"Todo mundo eh amigo de todo mundo"` se todo mundo for amigo de todo mundo, ou `"Varios grupos de amigos"`, caso contrário.

---

### Exemplo de Entrada e Saída

#### Input
```
4 6
1 2
1 3
1 4
2 3
2 4
3 4
```

#### Output
```
Todo mundo eh amigo de todo mundo
```

#### Input
```
4 3
1 3
2 4
3 2
```

#### Output
```
Varios grupos de amigos
```

#### Input
```
7 5
1 3
5 7
1 5
2 6
6 4
```

#### Output
```
Varios grupos de amigos
```

---

### Observação

A imagem abaixo descreve as relações de amigos coletadas pelo professor, para cada um dos casos de testes de exemplo:

#### Relações de Amizade:

![Relações de Amizade](https://i.ibb.co/FB1xFfz/imagem-2024-12-03-002722828.png)