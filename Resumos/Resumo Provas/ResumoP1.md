# Resumo de Tecnicas para a Prova
---------------------------------
##### 1. Introdução

<a href="https://ibb.co/x6fCMcD"><img src="https://i.ibb.co/gJPjDX3/imagem-2024-10-07-142417114.png" alt="imagem-2024-10-07-142417114" border="0"></a>

- C++ (e outras linguagens) suporta a atribuição de inteiros
representados em diferentes bases

- Utiliza-se o prefixo 0x para hexadecimal e 0b para binário
~~~c++
int a = 0x41;     // 65
int b = 0b101010; // 42
~~~

○ Em C e C++ há dois tipos float e double para ponto flutuante

○ O tipo float representa valores em ponto flutuante com
precisão simples (7 dı ́gitos de precisão)

○ O tipo double representa valores em ponto flutuante com
precisão dupla (15 casas dı ́gitos de precisão)

○ Em ponto flutuante, nem todo número pode ser representado

~~~c++
int main() {
    float x = 123456789.0;
    double y = 123456789.0;
    cout.precision(7);
    cout << fixed << x << endl; // 123456792.0000000
    cout << fixed << y << endl; // 123456789.0000000

    return 0;
}
~~~

- Ponto Flutuante
  - Na prática, o ideal é evitar utilizar ponto flutuante
        ■ Exemplo
    -  Em unidades monetárias, trabalhar com múltiplos de centavos, de modos que todos os valores sejam inteiros

- Booleano
Nativamente o C++ suporta o tipo bool , que pode assumir
dois valores:
  - true - equivalente ao valor numérico 1
  - false - equivalente ao valor numérico 0

- Referências
  - C++ possui suporte às referências, que são um apelido para outra variável
  - Referências devem ser inicializadas no momento da sua declaração, não podendo ter o seu valor atualizado
  - O símbolo & é utilizado após o nome do tipo para indicar que a declaração se trata de uma referência para aquele tipo

~~~C++
int main() {
    int a = 42;
    int &b = a;

    cout << "A = " << a << endl;
    b = 1337;
    cout << "A = " << a << endl;
    cout << "B = " << b << endl;

    return 0;
}
~~~

##### 2. Funções
- Por referência
<a href="https://imgbb.com/"><img src="https://i.ibb.co/YcWnRZq/imagem-2024-10-07-154456776.png" alt="imagem-2024-10-07-154456776" border="0" width="30%"></a>

- Quando utilizar?
  - Para modificar a variável original, passada para a função
  - Para passar variáveis grandes: realizar uma cópia é muito mais custoso do que utilizar uma referência

##### 3. Bit a Bit
<a href="https://ibb.co/2hDxMZ0"><img src="https://i.ibb.co/9gF64Zm/imagem-2024-10-07-154937846.png" alt="imagem-2024-10-07-154937846" border="0" width="70%"></a>

~x - Operação de Complemento
~~~c++
uint8_t x = 170; // x = 0b1010'1010
uint8_t y = 170; // y = 0b0101'0101
uint8_t z = ~x;  // z = 0b0101'0101 (85)
~~~

##### EXTRA - Complemento de 2
- Em C++, os números negativos são representados via
complemento de dois
- O complemento de dois é obtido a partir do complemento de um
somado de uma unidade
- **Propriedade: -x == ~x+1**

##### E, OU e XOR

~~~c++
int8_t x = 0b10101010; // 170
int8_t y = 0b00001111; // 15

printf("%hhd\n", x & y); // 0000'1010 (10)
printf("%hhd\n", x | y); // 1010'1111 (-81)
printf("%hhd\n", x ^ y); // 1010'0101 (-91)
~~~

##### Deslocamento à Esquerda (<<) e Direita (>>)

- Seja o inteiro x composto pelos bits e um inteiro
- O operador << desloca todos os bits de , posições para a
esquerda
- A cada deslocamento, temos que
<a href="https://ibb.co/nwYQwb2"><img src="https://i.ibb.co/RgsQg9n/imagem-2024-10-07-160617035.png" alt="imagem-2024-10-07-160617035" border="0" width="50%"></a><br /><a target='_blank' href='https://imgbb.com/'></a><br />
- O deslocamento a direita é a mesma lógica, só que deslocando para direita.

##### Ativação do i-ésimo bit
- Para ligar o i-ésimo bit menos significativo de um inteiro x, basta fazer: x = x | (1 << i)
  - É o equivalente a x |= (1 << i)
  - 1 << i é exatamente o número em que todos os bits são zeros, exceto aquele que ocupa a posição i, então, ao aplicar a operação OU, a posição i passar a ser 1

<a href="https://ibb.co/gyCZR9G"><img src="https://i.ibb.co/tB5pJKS/imagem-2024-10-07-160948453.png" alt="imagem-2024-10-07-160948453" border="0" width="50%"></a><br /><a target='_blank' href='https://imgbb.com/'></a><br />

##### Desativação do i-ésimo bit

- Para desligar o i-ésimo bit menos significativo de um inteiro x,
basta fazer: x = x & ~(1 << i)
  - É o equivalente a x &= ~(1 << i)
  - ~(1 << i) é exatamente o número em que todos os bits são uns, exceto aquele que ocupa a posição i, então, ao aplicar a operação E, a posição i passar a ser 0

<a href="https://ibb.co/Vjs43PZ"><img src="https://i.ibb.co/WxLJsYw/imagem-2024-10-07-161130079.png" alt="imagem-2024-10-07-161130079" border="0" width="50%"></a><br /><a target='_blank' href='https://imgbb.com/'></a><br />

---------------------------------------------

### Vector

Um vector em C++ é um vetor redimensionável
- Pertence a biblioteca <vector>
- Ele é totalmente parametrizável
    - Pode ser de qualquer tipo
    - Pode ser de qualquer tipo criado pelo usuário
- Elementos são acessados por meio do operador []

<a href="https://imgbb.com/"><img src="https://i.ibb.co/tX6Kd60/imagem-2024-10-07-161943486.png" alt="imagem-2024-10-07-161943486" border="0" width="70%"></a><br /><a target='_blank' href='https://imgbb.com/'></a><br />

- Alguns métodos mais utilizados
  - size(): retorna o número de elementos (O(1))
  - resize(n): redimensiona o vetor para o tamanho n (O(n))
  - push_back(x): insere o elemento x ao final do vetor (O(1) ???)
  - pop_back(); remove o elemento do final do vetor (O(1))
  - clear(): limpa o vetor (O(n))
  - emplace_back(x): similar ao push_back, porém in-place (O(1))
  - assign(n, x): atribui o valor x a n elementos do vetor (O(n))

### String

- C++ possui o tipo string, que facilita a operação sobre palavras
- Assim como o vector, um objeto string também pode ser
redimensionado
~~~c++
int main() {
std::string s;
}
~~~

- Alguns métodos mais utilizados
  - size(): retorna o número de elementos (O(1))
  - push_back(c): insere o char c ao final da string (O(1) ???)
  - pop_back(); remove o elemento do final da string (O(1))
  - clear(): limpa a string (O(n))
  - c_str(): obtém a string em C equivalente (O(1))
  - ==: compara duas strings (O(n))
  - =: copia uma string (O(n))
  - +: concatena duas strings (O(n))

#### String - Leitura
Strings podem ser lidas através do operador >> do stream cin
- A leitura irá parar assim que encontrar um espaço em branco, tabulação ou fim de linha
  - Similar ao scanf
- Para ler uma linha inteira, pode-se usar o getline:
  - getline(cin,str);
  - O '\n' não é inserido ao final de str

### Range Based Loops
#### Iterador
- Um iterador é um objeto que pode iterar em elementos em uma estrutura de dados complexa (container) e fornecer acesso a elementos individuais
- Os contêineres da biblioteca padrão do C++ fornecem iteradores de modo que todos os algoritmos possam acessar seus elementos de maneira padrão sem precisar se preocupar com o tipo do contêiner em que os elementos estão armazenados

<a href="https://ibb.co/yXtShzD"><img src="https://i.ibb.co/SPbrQk2/imagem-2024-10-07-163212801.png" alt="imagem-2024-10-07-163212801" border="0" width="70%"></a><br /><a target='_blank' href='https://imgbb.com/'>leo jaime tom brasil</a><br />

#### Auto
~~~c++
auto x = 5; // int
auto y = 5.0; // double
auto z = "IDP"; //const char *
~~~

#### Range Based Loops com iteradores
- A cada iteração, x recebe o próximo valor da coleção V, Esse valor é uma cópia.

~~~c++
for (auto x: V) {
    // ...
}
~~~

- É possível utilizar range based loops alterando o conteúdo do container, por meio de referências:

~~~c++
for (auto &x: V) {
    // ...
}
~~~

- Se a intenção for evitar a cópia, e ainda assim acessar o conteúdo original sem modificá-lo, é possível utilizar const

~~~c++
for(const auto &x: V) {
    // ...
}
~~~

### Pares e Tuplas

- Pares
  - Pares permitem agregar dois objetos em uma única estrutura
    - Acesso aos membros é feito por .first e .second
~~~c++
pair<int, int> p1 = {1, 2};
pair<int, double> p2 = {1, 2.5};
pair<double, string> p3 = make_pair(2.5, "IDP");
pair<vector<int>, pair<int, double>> p4 = {{1, 2, 3}, p2};
~~~

- Tuplas
  - São uma generalização de pares para 2 ou mais elementos
~~~c++
pair<int, double> p1 = {1, 2.5};
tuple<int, double, char, string> t1 = {1, 2.5, 'a', "IDP"};
tuple<int, double, char, string> t2 = make_pair(1, 2.5, 'a', "IDP");

auto[r, s, t, u] = t1;
auto [i, d] = p1;
~~~

<a href="https://ibb.co/cFgxt2G"><img src="https://i.ibb.co/d2W76kd/imagem-2024-10-07-164644901.png" alt="imagem-2024-10-07-164644901" border="0" width="80%"></a><br /><a target='_blank' href='https://imgbb.com/'></a><br />

### Alocação Dinâmica

<a href="https://ibb.co/6JQc8QH"><img src="https://i.ibb.co/NnRgrR9/imagem-2024-10-07-165000061.png" alt="imagem-2024-10-07-165000061" border="0" width="80%"></a><br /><a target='_blank' href='https://imgbb.com/'></a><br />

-------

# Listas, Pilhas e Filas

### Lista Encadeada
- Uma lista encadeada, ou simplesmente lista, é uma estrutura composta por nós, onde cada nó armazenada uma informação e um ponteiro para o próximo nó da lista
- Conhecido o primeiro elemento da lista (head), é possivel acessar todos os demais elementos
- Uma lista é uma estrutura de dados linear, devido a travessia sequencial e ordenada de seus elementos

<a href="https://ibb.co/RgtSmwy"><img src="https://i.ibb.co/6yGZxCB/imagem-2024-10-07-165245716.png" alt="imagem-2024-10-07-165245716" border="0"></a><br /><a target='_blank' href='https://imgbb.com/'></a><br />

##### Funções da Lista Encadeada
- assign(): Esta função é usada para atribuir valores à lista forward, sua outra variante é usada para atribuir elementos repetidos e usando os valores de outra lista.

- push_front(): This function is used to insert the element at the first position on forward list. The value from this function is copied to the space before first element in the container. The size of forward list increases by 1.
- emplace_front(): This function is similar to the previous function but in this no copying operation occurs, the element is created directly at the memory before the first element of the forward list.
- pop_front(): This function is used to delete the first element of the list.
- insert_after(): This function gives us a choice to insert elements at any position in forward list. The arguments in this function are copied at the desired position.
- emplace_after(): This function also does the same operation as the above function but the elements are directly made without any copy operation.
- erase_after(): This function is used to erase elements from a particular position in the forward list. There are two variants of ‘erase after’ function.
- remove(): This function removes the particular element from the forward list mentioned in its argument.
- remove_if(): This function removes according to the condition in its argument.
- clear(): This function deletes all the elements from the list.
- splice_after(): This function transfers elements from one forward list to other.

<a href="https://ibb.co/yNgTYJM"><img src="https://i.ibb.co/Fh8v0tf/imagem-2024-10-07-170139401.png" alt="imagem-2024-10-07-170139401" border="0" width="80%"></a><br /><a target='_blank' href='https://imgbb.com/'></a><br />

### Lista Duplamente Encadeada
<a href="https://ibb.co/6yTyDGd"><img src="https://i.ibb.co/2FCFcRb/imagem-2024-10-07-170239274.png" alt="imagem-2024-10-07-170239274" border="0" width="80%"></a><br /><a target='_blank' href='https://imgbb.com/'></a><br />

<a href="https://ibb.co/WBrQDpv"><img src="https://i.ibb.co/8PyJz4g/imagem-2024-10-07-170318805.png" alt="imagem-2024-10-07-170318805" border="0" width="80%"></a><br /><a target='_blank' href='https://imgbb.com/'></a><br />

<a href="https://ibb.co/FwGyrZc"><img src="https://i.ibb.co/yyLZ9vK/imagem-2024-10-07-170354578.png" alt="imagem-2024-10-07-170354578" border="0" width="80%"></a><br /><a target='_blank' href='https://imgbb.com/'></a><br />
<a href="https://ibb.co/s35G7NS"><img src="https://i.ibb.co/w6JXtPH/imagem-2024-10-07-170410791.png" alt="imagem-2024-10-07-170410791" border="0" width="80%"></a><br /><a target='_blank' href='https://imgbb.com/'></a><br />

<a href="https://ibb.co/3NbWtbb"><img src="https://i.ibb.co/xjbGVbb/imagem-2024-10-07-170445710.png" alt="imagem-2024-10-07-170445710" border="0" width="80%"></a><br /><a target='_blank' href='https://imgbb.com/'></a><br />

### Pilha
<a href="https://ibb.co/YW1Cp77"><img src="https://i.ibb.co/0X67hjj/imagem-2024-10-07-170855926.png" alt="imagem-2024-10-07-170855926" border="0" width="80%"></a><br /><a target='_blank' href='https://imgbb.com/'></a><br />

<a href="https://imgbb.com/"><img src="https://i.ibb.co/K2m4f2b/imagem-2024-10-07-171802174.png" alt="imagem-2024-10-07-171802174" border="0" width="40%"></a><br /><a target='_blank' href='https://imgbb.com/'></a><br />

### Fila
<a href="https://ibb.co/fnC5Lq3"><img src="https://i.ibb.co/xfM0dXn/imagem-2024-10-07-171845279.png" alt="imagem-2024-10-07-171845279" border="0" width="70%"></a><br /><a target='_blank' href='https://imgbb.com/'></a><br />

<a href="https://imgbb.com/"><img src="https://i.ibb.co/1sPKxg8/imagem-2024-10-07-171920857.png" alt="imagem-2024-10-07-171920857" border="0" width="40%"></a><br /><a target='_blank' href='https://imgbb.com/'></a><br />

----------
# Busca Sequencial
~~~c++
int buscasequencial(int *vetor, int tamanho, int chave) {
    int i;
    for (i = 0; i < tamanho; i++) {
        if (vetor[i] == chave) {
            return i;
        }
    }
    return -1;
}
~~~

~~~c++
vector<int> V {3, 2, 8, 1, 0, 7, 1, 5, 6};
int x = 7;

auto it = find(V.begin(), V.end(), x);

if (it == V.end()) {
    cout << "Valor nao encontrado" << endl;
} else {
    cout << "Valor encontrado na posicao " << it - V.begin() << endl;
}
~~~

# Busca Binária

~~~c++
int busca_binaria(vector<int>& V, int x) {

int ini = 0, fim = V.size() - 1;
    while (ini <= fim) {
        int meio = ini + (fim - ini) / 2;
        if (V[meio] == x) {
        return meio;
        } else if (V[meio] > x) {
            fim = meio - 1;
        } else {
            ini = meio + 1;
        }
    }
    return -1;
}
~~~

- A biblioteca algorithm do C++ traz três funções associadas à busca binária
  - binary_search() retorna verdadeiro se encontrar
  - lower_bound() retorna um iterator para o primeiro encontrado mais a esquerda se encontrar, ou primeiro maior
  - upper_bound() retorna um iterador para o último elemento maior ou igual a x, ou estritamente maior