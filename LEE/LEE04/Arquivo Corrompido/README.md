# F. Arquivo Corrompido

**Time limit per test:** 1 second  
**Memory limit per test:** 256 megabytes  

Agostinho começou a trabalhar no IPD (Instituto de Processamento de Dados) e na primeira semana de trabalho, recebeu um dos maiores problemas da sua carreira: o banco de dados que mantém o registro dos alunos da faculdade, nas disciplinas que eles estão cursando, naquele semestre foi corrompido.  

Ele sabe que um aluno pode cursar diversas disciplinas em um semestre, mas um mesmo aluno não pode cursar a mesma disciplina mais de uma vez no mesmo semestre. Assim, ele foi requisitado a verificar se isso ocorre em algum arquivo, sendo um sinal de que o arquivo está corrompido.  

Como Agostinho sabe que você é um bom programador, ele pediu a sua ajuda para escrever um programa que, dadas essas condições, verifique se um arquivo está corrompido ou não.

---

### **Input**
A entrada possui diversos casos de testes, cada um representando um arquivo diferente.  
A primeira linha da entrada contém um inteiro `T` (1 ≤ T ≤ 25) que indica o número de arquivos a serem verificados.  

Cada caso de teste começa por uma linha que contém um inteiro `L` (1 ≤ L ≤ 10000) que são a quantidade de linhas do arquivo que será verificado.  
Em seguida virão `L` linhas, onde cada linha contém duas informações separadas por um espaço, um inteiro que representa a matrícula do aluno, e uma string composta por letras maiúsculas, minúsculas ou dígitos, que representam o nome da disciplina que o aluno "pode" estar cursando.

---

### **Output**
Para cada caso de teste, deve-se imprimir uma linha contendo **"Arquivo OK"** se o arquivo não apresentar nenhum problema, ou **"Corrompido com X erro(s)"** onde `X` é o número de inconsistências encontradas no arquivo.

---

### **Examples**

#### **Input**
```
1
6
123456 algoritmos
123456 redes
123456 empreendedorismo
654111 redes
654111 algoritmos
333444 empreendedorismo
```

#### **Output**
```
Arquivo OK
```

---

#### **Input**
```
2
3
112233 alp
112266 c1
112233 alp
4
357159 c2
357159 ia
222222 taa
357159 taa
```

#### **Output**
```
Corrompido com 1 erro(s)
Arquivo OK
```