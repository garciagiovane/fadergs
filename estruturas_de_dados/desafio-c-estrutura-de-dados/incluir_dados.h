void insere_registro(LISTAENC *aux);    //declaracao da funcao

void incluir(LISTAENC **lista) {    //recebe um ponteiro (endereco na memoria) como parametro
    LISTAENC *no = (LISTAENC *) malloc(sizeof(LISTAENC)); // recebe novo espa�o em memoria
    if (no != NULL) {                                 // verifica se tem espa�o
        insere_registro(no);                     // le os dados do registro
        no->prox = *lista;                           // no->prox aponta para o primeiro ou para NULL
        *lista = no;                                 // lista agora aponta para o novo registro
    } // fim if( no != NULL )
    else
        printf("\n Lista cheia!");  //se lista estiver cheia, mostra mensagem
}

void insere_registro(LISTAENC *aux) {   //executa o registro
    fflush(stdin);  //limpa buffer
    gets(aux->info.nome_dono);  //pega o nome com espa�os

    fflush(stdin);  //limpa buffer
    scanf("%s %s", aux->info.cor, aux->info.tamanho);   //le cor e tamanho na mesma vez

    aux->prox = NULL;   //proximo registro sera NULL
}