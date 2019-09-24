#define N_MAX 60 //tamanho do vetor info

typedef struct {    //estrutura do tipo INFORMACAO
    char nome_dono[30]; //variavel que armazenara o nome do dono da camiseta
    char cor[15];   //variavel que armazenara a cor da camiseta
    char tamanho[1];    //variável que armazenara o tamanho da camiseta
} INFORMACAO;   //tipo da estrutura

typedef struct LISTA {    //estrutura do tipo NODO
    INFORMACAO info; //vetor de info (lista)
    struct LISTA *prox;  //variavel que armazenara a quantidade de registros
} LISTAENC; //tipo da estrutura