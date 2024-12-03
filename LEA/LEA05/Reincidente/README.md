# B. Reincidente

**Time limit per test:** 1 second  
**Memory limit per test:** 256 megabytes  

O Instituto de Departamento de Polícia (IDP) é uma instituição que tem como objetivo a manutenção da ordem pública e a segurança de toda a população. Como o crime tem aumentado significativamente em todos os estados do Brasil, o IDP gerou uma nova demanda que é unificar as bases de dados de todos os estados para que seja possível identificar reincidentes em crimes. Dessa forma, sempre que algum suspeito for detido, o IDP deve consultar a base de dados para verificar se o suspeito é reincidente em algum crime ou não.

Você, como parte essencial da equipe de desenvolvimento do IDP, foi designado para implementar um sistema que seja capaz de realizar essa consulta. Sempre que alguém for detido, o sistema deve informar se a pessoa já se encontra na base de dados ou não e inserir a pessoa na base de dados caso ela não esteja.

---

### **Input**
A entrada é composta por um único caso de testes.  
Cada linha contém uma string S e um inteiro A (1 ≤ |S| ≤ 100 e 0 ≤ A ≤ 361), onde S é o nome da pessoa detida e A é o número do artigo referente ao crime cometido.  

A entrada termina com uma linha contendo a string `"fim"` e o número `0`.  

É garantido que a entrada não conterá mais do que 100000 linhas.

---

### **Output**
Para cada linha da entrada, você deve imprimir uma linha com a frase `"S eh reu primario"`, onde S é o nome da pessoa, caso a pessoa não esteja na base de dados, ou `"S eh reincidente com X crime(s)"`, caso a pessoa já esteja na base de dados, onde X é o número de crimes cometidos pela pessoa.

---

### **Examples**

#### **Input**
```
lucas 25
jeremias 154
eduardo 137
klayton 153
marcelo 140
jeremias 154
eduardo 171
fim 0
```

#### **Output**
```
lucas eh reu primario
jeremias eh reu primario
eduardo eh reu primario
klayton eh reu primario
marcelo eh reu primario
jeremias eh reincidente com 1 crime(s)
eduardo eh reincidente com 1 crime(s)
```

#### **Input**
```
alvaro 157
jeremias 154
lucas 129
jeremias 129
jeremias 155
jeremias 297
alvaro 330
jeremias 304
fim 0
```

#### **Output**
```
alvaro eh reu primario
jeremias eh reu primario
lucas eh reu primario
jeremias eh reincidente com 1 crime(s)
jeremias eh reincidente com 2 crime(s)
jeremias eh reincidente com 3 crime(s)
alvaro eh reincidente com 1 crime(s)
jeremias eh reincidente com 4 crime(s)
```