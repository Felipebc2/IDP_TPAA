# E. Anagramas

**Time Limit per Test:** 2 seconds  
**Memory Limit per Test:** 256 megabytes  

Anagrama é uma palavra ou frase formada pela transposição ou rearranjo das letras de outra palavra ou frase, utilizando todas as letras originais exatamente a mesma quantidade de vezes. Por exemplo, a palavra "amor" é um anagrama da palavra "roma", ou a palavra "brasil" é um anagrama da palavra "libras".

Neste exercício, sua tarefa é escrever um programa para determinar se duas palavras são anagramas uma da outra ou não.

---

## **Input**

A primeira linha da entrada contém um inteiro \( T \) (1 ≤ \( T \) ≤ 400), que indica a quantidade de casos de testes. Cada caso de teste possui uma linha composta por duas strings \( R \) e \( S \) (1 ≤ |\( R \), \( S \)| ≤ 80000), separadas por um espaço, que representam as palavras que devem ser analisadas.

---

## **Output**

Para cada caso de teste, imprima uma linha com a palavra **"ANAGRAMAS"** se as palavras são anagramas uma da outra, ou **"DIFERENTES"** caso contrário.

---

### **Examples**

#### **Input**
```
3
ovo voo
pedra padre
alegria galera
```

#### **Output**
```
ANAGRAMAS
ANAGRAMAS
DIFERENTES
```

#### **Input**
```
5
carro corar
rota ratos
iracema america
norte treno
imersao mesario
```

#### **Output**
```
ANAGRAMAS
DIFERENTES
ANAGRAMAS
ANAGRAMAS
ANAGRAMAS
```

#### **Input**
```
6
angle angel
rats star
abc dac
decimal medical
35519 15935
serpent present
```

#### **Output**
```
ANAGRAMAS
ANAGRAMAS
DIFERENTES
ANAGRAMAS
ANAGRAMAS
ANAGRAMAS
```