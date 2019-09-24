void ordenar(LISTAENC *lista) {
    while (lista != NULL) {
        printf("Cor: %s, tamanho: %s, dono: %s\n", lista->info.cor, lista->info.tamanho, lista->info.nome_dono);
        lista = lista->prox;
    }
    printf("\n");
};