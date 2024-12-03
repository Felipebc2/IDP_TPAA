# A. Estágio

**Time limit per test:** 1 second  
**Memory limit per test:** 256 megabytes  

Hoje é o primeiro dia de Mateus em seu novo estágio, e ele recebeu sua primeira tarefa. Ele precisa ler uma string composta por letras maiúsculas de um arquivo, organizar as letras em ordem alfabética, remover letras repetidas e, em seguida, escrever o resultado de volta no arquivo original.  

Por exemplo, organizar a string `"CAIXA"` produziria `"AACIX"`, que se tornaria `"ACIX"` após remover as letras repetidas.

No entanto, como Mateus está muito nervoso em seu primeiro dia, ele cometeu um pequeno erro. Em vez de sobrescrever o arquivo com a string filtrada, ele acidentalmente anexou a nova string. Agora, o arquivo está corrompido, contendo a string original seguida pela versão ordenada e sem duplicatas dela, e Mateus está um pouco em pânico.

Desesperado, ele pediu a sua ajuda para, dado o conteúdo do arquivo corrompido, ajudá-lo a gerar a versão correta do arquivo, com a string que realmente deveria estar lá. Mateus está confiante de que, com sua ajuda, ele será capaz de concluir sua tarefa atribuída e terminar o seu primeiro dia de estágio mais aliviado.

---

### **Input**
A entrada consiste em uma única linha que contém uma string S (2 ≤ |S| ≤ 2000), composta por letras maiúsculas, que é a concatenação da string original (não corrompida) t e a versão ordenada e sem duplicatas de t.

---

### **Output**
A saída deve conter uma string R, que é a string esperada para estar no arquivo, ao final da tarefa de Mateus.

---

### **Examples**

#### **Input**
```
CAIXAACIX
```

#### **Output**
```
ACIX
```

#### **Input**
```
SENADOADENOS
```

#### **Output**
```
ADENOS
```

#### **Input**
```
AAAAA
```

#### **Output**
```
A
```