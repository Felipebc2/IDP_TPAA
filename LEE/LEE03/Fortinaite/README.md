# F. Fortinaite

**Time limit per test:** 1 second  
**Memory limit per test:** 256 megabytes  

Fortinaite é um dos jogos de *battle royale* mais jogados da atualidade.

No jogo, o objetivo é ser o último sobrevivente entre todos os competidores de uma partida. Para alcançar isso, os jogadores devem coletar armas, equipamentos e se mover estrategicamente pelo mapa, eliminando oponentes enquanto permanecem dentro de um círculo de segurança.

Assim, ganha uma partida quem sobrevive por mais tempo, sabendo-se que cada jogador eliminado de uma partida tem o seu tempo de morte registrado.

Os desenvolvedores do jogo decidiram que agora irão exibir o **ranking** dos jogadores ao final de uma partida, exibindo do primeiro para o último lugar, e quando dois jogadores forem eliminados ao mesmo tempo, é priorizado aquele cujo nome vem primeiro na ordem alfabética. Assim, eles pediram a sua ajuda para implementar e exibir esse **ranking**.

---

### **Input**
A primeira linha da entrada contém um valor J (1 ≤ J ≤ 100000) que indica o número de jogadores de uma partida.  
As J linhas seguintes contêm duas informações cada, separadas por um espaço: uma string S (1 ≤ |S| ≤ 50) que é o nick do jogador e um valor T que é a quantidade de tempo (em minutos e segundos, separado por dois pontos) que o jogador permaneceu na partida até ser eliminado.

---

### **Output**
A saída deve exibir J linhas contendo o **ranking** dos jogadores do primeiro até o último, conforme os exemplos.

---

### **Examples**

#### **Input**
```
3
dudu123 03:25
j3r3mias 00:58
NoobMaster69 07:07
```

#### **Output**
```
1. 07:07 - NoobMaster69
2. 03:25 - dudu123
3. 00:58 - j3r3mias
```

#### **Input**
```
5
ExploradorX 01:00
Lendario10 00:59
Astrogamer 01:00
B4talhaad0r 02:01
CyberNinja 02:02
```

#### **Output**
```
1. 02:02 - CyberNinja
2. 02:01 - B4talhaad0r
3. 01:00 - ExploradorX
4. 01:00 - Astrogamer
5. 00:59 - Lendario10
```