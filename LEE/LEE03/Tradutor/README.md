# A. Tradutor

**Time limit per test:** 1 second  
**Memory limit per test:** 256 megabytes  

Em uma expressão matemática, os pares de parênteses `()`, `[]`, `{}` (sim, todos esses são um tipo diferente de parênteses) são utilizados para indicar a prioridade à qual as operações devem ser realizadas.

Dois parênteses são considerados um par correspondente se um símbolo de abertura `(`, `[`, `{` ocorrer à esquerda do seu respectivo símbolo de fechamento `)`, `]`, `}`.

Um par correspondente de parênteses é considerado não equilibrado se o conjunto de parênteses que ele envolve não estiver correspondente. Por exemplo, `{(})` não é equilibrado porque o conteúdo entre `{}` não está equilibrado.

Dizemos que uma sequência de parênteses é equilibrada se as seguintes condições forem atendidas:

- Ela não contém símbolos de abertura não correspondidos.
- O subconjunto de símbolos contidos dentro de um par correspondente de símbolos também é um par correspondente de símbolos.

Essas são as regras utilizadas para verificar qualquer expressão matemática, principalmente por linguagens de programação, sejam elas compiladas ou interpretadas. Assim, sua tarefa é, dada uma expressão matemática, verificar a sua distribuição de parênteses respondendo se esta é uma expressão válida ou não.

---

### **Input**
A entrada contém uma única linha que é uma string S (0 < |S| ≤ 1000), com uma possível expressão matemática.

---

### **Output**
A saída deve conter `"OK"` se a expressão for uma expressão válida, ou `"SyntaxError"`, caso contrário.

---

### **Examples**

#### **Input**
```
(1+1)
```

#### **Output**
```
OK
```

#### **Input**
```
[1*(2+2)]
```

#### **Output**
```
OK
```

#### **Input**
```
)4+7(
```

#### **Output**
```
SyntaxError
```

#### **Input**
```
(1*[2+2])
```

#### **Output**
```
OK
```