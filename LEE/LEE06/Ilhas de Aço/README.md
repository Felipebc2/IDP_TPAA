# D. Ilhas de Aço

**Time limit per test:** 1 second  
**Memory limit per test:** 1024 megabytes  

Ilhas de Aço é um conglomerado de ilhas no meio do oceano onde Teo Cinza vive. Nesse conglomerado, todas as N ilhas são conectadas por pontes, que são feitas de aço, daí o nome do conglomerado. As pontes são bidirecionais e passam sobre a água. Eduardo, que está visitando seu primo Teo, odeia atravessar essas pontes, pois elas exigem muito esforço, porém esse é o único meio de se locomover entre as ilhas.

Atualmente, Eduardo encontra-se na ilha número 1 e escutou que irá haver uma festa na ilha número N . Ele deseja chegar à ilha número N o mais rápido possível, tentando utilizar o menor número de pontes possíveis.

De posse de um mapa com as pontes das ilhas, Eduardo pediu a sua ajuda para determinar o número mínimo de pontes que ele terá que cruzar para chegar até a festa.

---

## Input

A entrada é composta por um único caso de testes. A primeira linha contém dois inteiros M e N (2 ≤ M ≤ 500 e 0 ≤ N ≤ 200000), representando o número de ilhas e o número de pontes, respectivamente. As próximas N linhas contêm dois inteiros X e Y (1 ≤ X, Y ≤ M), indicando que as ilhas X e Y estão conectadas por uma ponte.

---

## Output

A saída deve conter um inteiro representando o número mínimo de pontes que Eduardo terá que cruzar para chegar até a festa. Caso não seja possível chegar até a festa, imprima a resposta como `-1`.

---

## Examples

### Input
```
4 3
1 2
2 3
3 4
```

### Output
```
3
```

### Input
```
5 3
1 2
3 5
5 4
```

### Output
```
-1
```

### Input
```
4 6
4 1
4 2
4 3
3 2
1 2
1 3
```

### Output
```
1
```

---

## Note

Abaixo seguem as imagens formadas pelas pontes das ilhas para os três casos de testes:

### Imagem Representativa:
![Casos de Teste](https://i.ibb.co/D4RHbYz/imagem-2024-12-03-003049758.png)