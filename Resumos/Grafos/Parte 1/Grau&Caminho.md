# Resumo: Grau de um Grafo e Caminho de um Grafo

## Grau de um Grafo

### Definição
- O **grau** de um vértice é o número de arestas que incidem sobre ele.
- Representa a conectividade do vértice com outros vértices no grafo.

### Tipos de Grau
1. **Grafo Não Direcionado**:
   - Grau de um vértice: Número total de arestas conectadas a ele.
   - Exemplo:
     ```
       (A)----(B)
        |      |
       (C)----(D)
     ```
     Graus:
     - A: 2
     - B: 2
     - C: 2
     - D: 2

2. **Grafo Direcionado**:
   - **Grau de Entrada**: Número de arestas que entram no vértice.
   - **Grau de Saída**: Número de arestas que saem do vértice.
   - Exemplo:
     ```
       (A) --> (B)
        ^       |
        |       v
       (C) <-- (D)
     ```
     Graus:
     - A: Entrada = 1, Saída = 1
     - B: Entrada = 1, Saída = 1
     - C: Entrada = 1, Saída = 1
     - D: Entrada = 1, Saída = 1

---

## Caminho de um Grafo

### Definição
- Um **caminho** é uma sequência de vértices conectados por arestas.
- Pode ser:
  - **Simples**: Não repete vértices (exceto o inicial e o final, se for um ciclo).
  - **Composto**: Permite repetir vértices ou arestas.

### Tipos de Caminho
1. **Caminho em Grafos Não Direcionados**:
   - Pode percorrer as arestas em qualquer direção.
   - Exemplo:
     ```
       (A)----(B)
        |      |
       (C)----(D)
     ```
     Caminho entre A e D:
     - A -> C -> D ou A -> B -> D.

2. **Caminho em Grafos Direcionados**:
   - Deve seguir a direção das arestas.
   - Exemplo:
     ```
       (A) --> (B)
        ^       |
        |       v
       (C) <-- (D)
     ```
     Caminho entre A e D:
     - A -> B -> D.

3. **Caminho Ponderado**:
   - Cada aresta possui um peso (custo) associado.
   - Exemplo:
     ```
       (A) --5--> (B)
        |          |
       10         15
        v          v
       (C) --3--> (D)
     ```
     Caminho de A para D:
     - A -> B -> D com custo total = 5 + 15 = 20.

---

### Comprimento do Caminho
- **Definição**:
  - Número de arestas no caminho.
- **Exemplo**:
  - No grafo:
    ```
      (A)----(B)
       |      |
      (C)----(D)
    ```
    Caminho A -> C -> D tem comprimento 2.

---

### Ciclo
- Um caminho que começa e termina no mesmo vértice.
- Exemplo:
  ```
    (A)----(B)
     |      |
    (C)----(A)
  ```
  Ciclo: A -> B -> C -> A.

---