#define N_MAX 60 //tamanho do vetor info

typedef struct {    //estrutura do tipo INFORMACAO
    char nome_dono[30]; //variável que armazenará o nome do dono da camiseta
    char cor[15];   //variável que armazenará a cor da camiseta
    char tamanho[2];    //variável que armazenará o tamanho da camiseta
} INFORMACAO;   //tipo da estrutura

typedef struct {    //estrutura do tipo NODO
    INFORMACAO info[N_MAX]; //vetor de info (lista)
    int p;  //variável que armazenará a quantidade de registros
} NODO; //tipo da estrutura