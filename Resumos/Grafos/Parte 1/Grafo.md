# Resumo: Introdução e Tipos de Grafos

## Introdução
- **Definição**:
  - Um **grafo** é uma estrutura matemática usada para modelar relações entre pares de objetos.
  - É composto por:
    - **Vértices** (ou nós): Representam os objetos.
    - **Arestas**: Representam as conexões entre os vértices.

- **Representação**:
  - Graficamente: Vértices como círculos e arestas como linhas conectando os círculos.
  - Computacionalmente:
    - **Matriz de adjacência**.
    - **Lista de adjacência**.

- **Aplicações**:
  - Redes sociais, rotas de transporte, redes de computadores, grafos moleculares, entre outros.

---

## Tipos de Grafo

### 1. Grafo
- Estrutura geral que conecta vértices usando arestas.

#### Exemplo:
```
    (A)----(B)
     |      |
    (C)----(D)
```

---

### 2. Grafo Simples
- Não possui arestas paralelas (duas arestas conectando os mesmos vértices).
- Não possui laços (aresta conectando um vértice a si mesmo).

#### Exemplo:
```
    (A)----(B)
     |      |
    (C)----(D)
```

---

### 3. Multigrafo
- Permite arestas paralelas (múltiplas arestas entre os mesmos vértices).

#### Exemplo:
```
    (A)====(B)
     ||     |
    (C)----(D)
```

---

### 4. Grafo Completo
- Cada par de vértices está conectado por uma aresta.
- Para `n` vértices, possui `n(n-1)/2` arestas.

#### Exemplo (4 vértices):
```
    (A)----(B)
     |\    /|
     | (D)  |
     |/    \|
    (C)----(D)
```

---

### 5. Subgrafo
- Um subconjunto dos vértices e arestas de um grafo maior.

#### Exemplo:
- Grafo original:
```
    (A)----(B)
     |      |
    (C)----(D)
```
- Subgrafo:
```
    (A)----(B)
```

---

### 6. Grafo Não Direcionado
- As arestas não têm direção; podem ser percorridas em ambos os sentidos.

#### Exemplo:
```
    (A)----(B)
     |      |
    (C)----(D)
```

---

### 7. Grafo Direcionado (Digrafo)
- Cada aresta possui uma direção, representada por uma seta.

#### Exemplo:
```
    (A) --> (B)
     ^       |
     |       v
    (C) <-- (D)
```

---

### 8. Grafo Ponderado
- Cada aresta tem um peso associado, representando, por exemplo, distância ou custo.

#### Exemplo:
```
    (A) --5-- (B)
     |        |
    10       15
     |        |
    (C) --3-- (D)
```

---

### 9. Grafo Esparso
- Possui poucas arestas em comparação com o número total possível de arestas.

#### Exemplo (5 vértices, 3 arestas):
```
    (A)----(B)

    (C)----(D)

    (E)
```

---

### 10. Grafo Denso
- Possui muitas arestas, próximo ao número máximo possível de arestas.

#### Exemplo (5 vértices, 10 arestas):
```
    (A)----(B)
     |\    /|
     | (E)  |
     |/    \|
    (C)----(D)
```

---

## Representação Computacional
- **Matriz de Adjacência**:
  - Usa uma matriz `n x n` onde `n` é o número de vértices.
  - Exemplo (para 4 vértices):
    ```
    Matriz:
    0 1 1 0
    1 0 0 1
    1 0 0 1
    0 1 1 0
    ```
- **Lista de Adjacência**:
  - Usa listas para armazenar os vizinhos de cada vértice.
  - Exemplo:
    ```
    A: B, C
    B: A, D
    C: A, D
    D: B, C
    ```

---