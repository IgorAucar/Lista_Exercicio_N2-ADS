FEITO POR IGOR ABDALLA AUCAR


1. O que significa alocação estática de memória para um conjunto de elementos?
    R= Alocação estática de memória é quando o espaço necessário para armazenar dados é definido antes da execução do programa, geralmente na compilação. O tamanho é fixo e não pode ser alterado depois. Isso torna o acesso rápido e simples, mas limita a flexibilidade e pode desperdiçar memória se o tamanho não for bem calculado
    MAZIERO, Carlos. Sistemas Operacionais: Conceitos e Mecanismos. Curitiba: UFPR, 2019.

2. Qual a diferença entre alocação estática e alocação dinâmica?
    R=A alocação estática de memória ocorre quando o espaço necessário para armazenar dados é reservado durante a compilação do programa. Isso significa que o tamanho do conjunto de elementos deve ser definido previamente e não pode ser alterado em tempo de execução. Esse tipo de alocação é feito nas áreas Data e BSS da memória de um processo, em que ficam variáveis globais e estáticas. A principal vantagem da alocação estática é a simplicidade e a velocidade de acesso, mas ela oferece pouca flexibilidade e pode levar ao desperdício de memória se o tamanho não for bem dimensionado.
    Já a alocação dinâmica de memória acontece durante a execução do programa, geralmente na área Heap. Ela permite que o programa solicite memória conforme a necessidade, oferecendo maior flexibilidade para lidar com dados de tamanho variável. No entanto, exige que o programador controle manualmente a liberação da memória, o que pode causar vazamentos se não for bem gerenciado.
    Essas diferenças são fundamentais para entender como os programas utilizam a memória e como o sistema operacional organiza os recursos disponíveis.
    Maziero, Carlos. Sistemas Operacionais: Conceitos e Mecanismos. Curitiba: Universidade Federal do Paraná.

3.O que é um ponteiro?
    R= Um ponteiro é uma variável que armazena o endereço de memória de outra variável. Em vez de conter diretamente um valor, um ponteiro aponta para a localização onde esse valor está armazenado na memória. Isso permite manipular e acessar dados de forma eficiente, especialmente em estruturas de dados dinâmicas, como listas encadeadas e árvores.
    Maziero, Carlos. Sistemas Operacionais: Conceitos e Mecanismos. Curitiba: Universidade Federal do Paraná.

4.O que é uma estrutura de dados homogêneos?
    R= Uma estrutura de dados homogênea é aquela que armazena, em uma única variável, diversos elementos do mesmo tipo, como por exemplo um vetor de inteiros ou uma matriz de caracteres. Esse tipo de estrutura é muito útil quando se deseja manipular um conjunto de dados semelhantes de forma organizada e eficiente, permitindo aplicar operações como ordenação, busca e iteração de maneira uniforme. Segundo o material da Universidade de Brasília (UnB), estruturas homogêneas podem ser unidimensionais, como vetores, ou bidimensionais, como matrizes, e são amplamente utilizadas em algoritmos e programas que exigem o processamento de grandes volumes de dados do mesmo tipo. Essa uniformidade facilita tanto o armazenamento quanto o acesso aos dados, otimizando o desempenho e a clareza do código.
    UNIVERSIDADE DE BRASÍLIA. Estrutura de dados homogênea. 

5.O que é uma estrutura de dados heterogêneos?
    R= Uma estrutura de dados heterogênea é aquela que pode armazenar elementos de diferentes tipos de dados em uma única variável. Exemplos comuns incluem registros (structs) em linguagens como C, onde um registro pode conter um inteiro, um caractere e um float, todos juntos. Essas estruturas são úteis para representar entidades complexas que possuem múltiplas características distintas. De acordo com o material da Universidade de Brasília (UnB), estruturas heterogêneas permitem uma organização mais flexível dos dados, facilitando o acesso e a manipulação de informações variadas dentro de um mesmo contexto. Elas são amplamente utilizadas em aplicações que requerem a modelagem de objetos do mundo real, onde diferentes atributos precisam ser agrupados.
    UNIVERSIDADE DE BRASÍLIA. Estrutura de dados heterogênea.    

6. Qual a vantagem das listas sobre os vetores em termos de consumo de memória? Exemplifique.
    R=Listas encadeadas consomem menos memória que vetores em situações de dados variáveis, pois alocam espaço apenas conforme necessário, enquanto vetores reservam blocos fixos que podem ser subutilizados.
    Essa vantagem é destacada por autores como Waldemar Celes e José L. Rangel, que explicam que vetores ocupam um espaço contíguo de memória, exigindo uma estimativa prévia de tamanho. Já as listas encadeadas permitem inserções e remoções com maior eficiência, sem desperdício de espaço, pois cada elemento é alocado dinamicamente.
    Exemplo:
    Ao declarar int vet[1000], o programa reserva espaço para mil inteiros, mesmo que apenas cem sejam usados. Com uma lista encadeada, apenas cem nós seriam criados, economizando memória.
    CELES, Waldemar, RANGEL, José L. Listas Encadeadas. Universidade Federal Fluminense.

7. O que é uma lista simplesmente encadeada? Apresente um diagrama para ilustrar essa estrutura de dados.
    R=Uma lista simplesmente encadeada é uma estrutura de dados dinâmica composta por nós, onde cada nó armazena um valor e um ponteiro para o próximo nó da lista. O primeiro nó é chamado de cabeça (head), e o último nó aponta para NULL, indicando o fim da lista. Essa estrutura permite inserções e remoções eficientes no início da lista, mas o acesso a elementos intermediários exige percorrer os nós sequencialmente.
    Diagrama:
    [10 | * ] → [20 | * ] → [30 | * ] → NULL
8. O que é uma lista duplamente encadeada? Apresente um diagrama para ilustrar
essa estrutura de dados.
    R= Uma lista duplamente encadeada é uma estrutura de dados onde cada nó contém três campos: um valor, um ponteiro para o próximo nó e um ponteiro para o nó anterior. Isso permite percorrer a lista em ambas as direções (frente e verso), facilitando operações como inserção e remoção em qualquer posição da lista.
    Diagrama:
    NULL ← [ | 10 | ] ↔ [ | 20 | ] ↔ [ | 30 | ] → NULL

9. O que é uma lista duplamente encadeada? Apresente um diagrama para ilustrar
essa estrutura de dados.
    R= Uma lista duplamente encadeada é uma estrutura de dados onde cada nó contém três campos: um valor, um ponteiro para o próximo nó e um ponteiro para o nó anterior. Isso permite percorrer a lista em ambas as direções (frente e verso), facilitando operações como inserção e remoção em qualquer posição da lista.
    Diagrama:
    NULL ← [ | 10 | ] ↔ [ | 20 | ] ↔ [ | 30 | ] → NULL
10. Explique o funcionamento do algoritmo de busca binária e sequencial.
    R= A busca sequencial percorre os elementos de uma lista um a um, comparando cada item com a chave desejada até encontrá-la ou atingir o fim da lista. É simples e funciona em listas não ordenadas, mas pode ser ineficiente em grandes volumes de dados.
    Já a busca binária é mais eficiente, mas exige que a lista esteja ordenada. Ela compara a chave com o elemento central da lista e, dependendo do resultado, descarta metade da lista, repetindo o processo até encontrar o elemento ou concluir que ele não existe.
    Esses algoritmos são fundamentais em programação e têm aplicações em diversas áreas, como sistemas de cadastro e bancos de dados.
    MAZIERO, Carlos. Sistemas Operacionais: Conceitos e Mecanismos. Curitiba: Universidade Federal do Paraná.
11. Explique o funcionamento dos seguintes algoritmos de ordenação: Insertion sort,
Selection sort, Merge sort, Count sort, Quicksort.
    R=
     Insertion Sort: Insere cada elemento na posição correta em relação aos anteriores, como se estivesse organizando cartas. É eficiente para listas pequenas ou quase ordenadas.
     Selection Sort: Encontra o menor elemento da lista e o coloca na primeira posição, repetindo o processo com o restante. Simples, mas pouco eficiente para grandes volumes.
     Merge Sort: Divide a lista em partes menores, ordena cada uma e depois as combina. É eficiente e estável, com complexidade O(n log n).
    Count Sort: Conta a frequência de cada valor e usa essa contagem para ordenar. Funciona bem com inteiros em intervalos pequenos e conhecidos.
    Quicksort: Escolhe um pivô, separa os menores à esquerda e os maiores à direita, e aplica o processo recursivamente. Muito eficiente na prática, com complexidade média O(n log n).
    Esses algoritmos são amplamente utilizados em aplicações que exigem ordenação rápida e eficiente de dados.
    MAZIERO, Carlos. Sistemas Operacionais: Conceitos e Mecanismos. Curitiba: Universidade Federal do Paraná.

