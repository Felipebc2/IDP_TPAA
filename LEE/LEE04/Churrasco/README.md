# E. Churrasco

**Time limit per test:** 2 seconds  
**Memory limit per test:** 256 megabytes  

Todo fim de semestre rola o tradicional churrasco do curso de Arquitetura do IDQ.  

Esse ano, você foi excepcionalmente convidado para participar, porém reparou que falta um pouco de organização na organização do evento, e cada um dos participantes leva aquilo que quiser para o churrasco.  

Percebendo o problema e tentando ajudar para que o evento seja um sucesso, os alunos do curso pediram a sua ajuda escrever um programa para registrar o que cada um dos participantes vai levar para o churrasco, detectando repetições nos itens do churrasco como um todo, e também gerar uma listagem final de todos os itens distintos que serão levados ao evento.

---

### **Input**
A entrada contém um único caso de testes.  
A primeira linha contém um inteiro `A` (1 ≤ A ≤ 1000) que indica o número de alunos que irão participar do churrasco.  

Em seguida, serão apresentados conjuntos de dados para cada aluno `Aᵢ`, da seguinte forma:  
- Primeiro uma linha com um inteiro `Pᵢ` (1 ≤ Pᵢ ≤ 100) que é a quantidade de itens ou produtos que o aluno `i` irá levar para o churrasco.  
- Em seguida, virão `Pᵢ` linhas com uma string `S` cada (1 ≤ |S| ≤ 25), composta por letras em minúsculo ou dígitos, que é o nome de cada componente sendo levado por aquele aluno.

---

### **Output**
A saída deve conter o seguinte:  
- Para cada produto de cada aluno, deverá ter uma linha com a frase **"adicionando `<ingrediente>`"**, onde `<ingrediente>` é o nome do novo produto adicionado ao churrasco, ou **"<ingrediente> já tem"** caso alguém já tenha adicionado esse item anteriormente nos componentes do churrasco.  

Após essa listagem, deverá vir uma linha com a frase **"Itens do churrasco:"** e mais `M` linhas, onde cada linha deverá conter uma string com o nome de cada um dos itens do churrasco em ordem lexicográfica (alfabética), conforme os exemplos.

---

### **Examples**

#### **Input**
```
2
3
carne
cerveja
suco
2
carne
paodealho
```

#### **Output**
```
adicionando carne
adicionando cerveja
adicionando suco
carne já tem
adicionando paodealho
Itens do churrasco:
carne
cerveja
paodealho
suco
```

#### **Input**
```
3
2
arroz
suco
2
abacaxi
carne
3
vinagrete
carvao
suco
```

#### **Output**
```
adicionando arroz
adicionando suco
adicionando abacaxi
adicionando carne
adicionando vinagrete
adicionando carvao
suco já tem
Itens do churrasco:
abacaxi
arroz
carne
carvao
suco
vinagrete
```