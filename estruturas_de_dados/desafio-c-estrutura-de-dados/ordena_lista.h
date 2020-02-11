void ordenar(LISTAENC **lista) {
    if (*lista == NULL)
        printf("lista vazia\n");
    else {
        if ((*lista)->prox == NULL)
            printf("apenas um registro");
        else {
            INFORMACAO aux; //auxiliar para troca de dados
            LISTAENC *atual = *lista;   //recebe o ponteiro lista
            LISTAENC *proximo = atual->prox;    //atribui o proximo ao ponteiro proximo

            while (atual->prox != NULL){    //percorre enquanto não estiver vazia
                while (proximo != NULL) {   //percorre enquanto não estiver vazia
                    if (strcmp(atual->info.cor, proximo->info.cor) > 0){    //compara as duas strings (cores) da camiseta
                        aux = proximo->info;    //
                        proximo->info = atual->info;
                        atual->info = aux;
                    }
                    proximo = proximo->prox;
                }
                atual = atual->prox;
                proximo = atual->prox;
            }
        }
    }
    printf("\n");
};