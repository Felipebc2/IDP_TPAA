# F. Rinha de Pokémon

Rinha é um esporte proibido em muitos lugares, mas não em Kanto, onde os próprios pokémons podem decidir se querem ou não participar da atividade.

A rinha de pokémons funciona de uma maneira peculiar. Cada pokémon utiliza apenas o seu status de força para lutar. Assim, os pokémons se cadastram em um torneio e as batalhas ocorrem em duelos (PVP). De todos os pokémons participantes, lutam primeiro os dois pokémons mais fortes. Com o resultado da luta, o pokémon perdedor é eliminado do torneio e o vencedor avança para a próxima fase, perdendo em força o valor da força do pokémon perdedor. Caso ocorra uma batalha onde dois pokémons possuam a mesma força, ambos são eliminados. Assim, a batalha seguinte recebe os status de todos os pokémons restantes atualizados e a próxima batalha ocorre entre os dois pokémons mais fortes daquele instante, até que reste apenas um pokémon.

Você foi contratado pelo ginásio de IDPeridian para simular o torneio de rinha de pokémons. Dada a lista de pokémons participantes e a força de cada um, você deverá escrever um programa para organizar todas as batalhas e determinar o vencedor do torneio, quando houver um.

---

## Input
A entrada contém um único caso de teste. A primeira linha contém um inteiro `P` (1 ≤ P ≤ 2 × 10⁴) que indica o número de pokémons que irão participar do torneio. As próximas `P` linhas contêm uma string `Sᵢ` (1 ≤ |Sᵢ| ≤ 25) e um inteiro `F` (1 ≤ F ≤ 10⁵), separados por um espaço, que indicam o nome do pokémon e a sua respectiva força.

---

## Output
A saída irá conter uma ou mais linhas descrevendo cada uma das batalhas que ocorreram. Cada linha deverá conter o nome dos dois pokémons, suas respectivas forças e o nome do vencedor, conforme os exemplos. A última linha deverá conter a frase `"S venceu com F"`, onde `S` é o nome do pokémon vencedor e `F` é a sua força restante, caso exista um vencedor, ou `"nenhum vencedor"`, caso contrário.

---

## Exemplos

### Exemplo 1
**Input**
```
4
Pikachu 55
Charizard 88
Gengar 60
Muk 40
```

**Output**
```
Charizard (88) x (60) Gengar : Charizard venceu
Pikachu (55) x (40) Muk : Pikachu venceu
Charizard (28) x (15) Pikachu : Charizard venceu
Charizard venceu com 13
```

---

### Exemplo 2
**Input**
```
6
Cubone 60
Pikachu 35
Magmar 27
Abra 25
Metapod 0
Magmar 28
```

**Output**
```
Cubone (60) x (35) Pikachu : Cubone venceu
Magmar (28) x (27) Magmar : Magmar venceu
Cubone (25) x (25) Abra : empate
Magmar (1) x (0) Metapod : Magmar venceu
Magmar venceu com 1
```

---

### Exemplo 3
**Input**
```
4
Arbok 44
Articuno 87
Pikachu 44
Ratata 1
```

**Output**
```
Articuno (87) x (44) Pikachu : Articuno venceu
Arbok (44) x (43) Articuno : Arbok venceu
Ratata (1) x (1) Arbok : empate
nenhum vencedor
```