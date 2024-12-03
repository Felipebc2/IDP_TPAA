## A. Pedras Quase Preciosas

**Time limit per test:** 2 seconds  
**Memory limit per test:** 256 megabytes  

O mercado de pedras preciosas esfriou bastante nos últimos anos. Ainda assim, David está buscando alternativas em pedras diferentes de `<>`.

O mercado de pedras aceita pedras de diversos formatos, e David fica meio perdido com tantas opções. Com isso, ele pediu a sua ajuda para, dado o catálogo de pedras preciosas que o mercado está aceitando, e o bloco de pedras que ele encontrou, determinar a quantidade de pedras que são aceitas pelo mercado.

### Input
A primeira linha da entrada contém um inteiro `T` (1 ≤ T ≤ 1000), que indica a quantidade de casos de testes. Cada caso de teste possui uma linha composta por duas strings `C` (1 ≤ |C| ≤ 100) e `P` (1 ≤ |P| ≤ 10000), que representam o catálogo de pedras preciosas aceitas no mercado e o bloco de pedras que David encontrou, respectivamente.

### Output
Para cada caso de teste, imprima uma linha com a seguinte mensagem: `"Contem <X> pedras negociaveis"`, onde `<X>` é a quantidade de pedras que são aceitas pelo mercado, conforme os exemplos.

### Examples

**Input:**
```
3  
ABC aBBcccDDDD  
ABC AbbCCCDddd  
ABC ABBCCCDDDD  
```

**Output:**
```
Contem 2 pedras negociaveis  
Contem 4 pedras negociaveis  
Contem 6 pedras negociaveis  
```

**Input:**
```
4  
a AaAaAaAb  
b AaAaAaAb  
A AaAaAaAb  
ABA AaAaAaAb  
```

**Output:**
```
Contem 3 pedras negociaveis  
Contem 4 pedras negociaveis  
Contem 1 pedra negociavel  
Contem 4 pedras negociaveis  
```

---