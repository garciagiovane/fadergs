void imprime(LISTAENC *lista);	//declaracao da funcao

void ordenar(LISTAENC **lista) {
    if (*lista == NULL)	//verifica se lista esta vazia
        printf("lista vazia\n");
    else {
        if ((*lista)->prox == NULL)	//verifica se a existe o proximo item
            printf("apenas um registro");
        else {
            INFORMACAO aux; //auxiliar para troca de dados
            LISTAENC *atual = *lista;   //recebe o ponteiro lista
            LISTAENC *proximo = atual->prox;    //atribui o proximo ao ponteiro proximo

            while (atual->prox != NULL){    //percorre enquanto nao estiver vazia
                while (proximo != NULL) {   //percorre enquanto nao estiver vazia
                    if (strcmp(atual->info.cor, proximo->info.cor) > 0){    //compara as duas strings (cores) da camiseta
                        aux = proximo->info;    //aux vai receber a informacao
                        proximo->info = atual->info;	//aqui inicia a troca de posicao, proximo recebe o atual
                        atual->info = aux;	//aqui termina a troca, atual recebe o aux, que está apontando para próximo
                    } else if (strcmp(atual->info.cor, proximo->info.cor) == 0 && strcmp(atual->info.tamanho, proximo->info.tamanho) < 0){
                    	
                    	aux = proximo->info;    //aux vai receber a informacao
                        proximo->info = atual->info;	//aqui inicia a troca de posicao, proximo recebe o atual
                        atual->info = aux;	//aqui termina a troca, atual recebe o aux, que está apontando para próximo
                        
					} else if (strcmp(atual->info.cor, proximo->info.cor) == 0 && strcmp(atual->info.tamanho, proximo->info.tamanho) == 0 && strcmp(atual->info.nome_dono, proximo->info.nome_dono) > 0) {
						
						aux = proximo->info;    //aux vai receber a informacao
                        proximo->info = atual->info;	//aqui inicia a troca de posicao, proximo recebe o atual
                        atual->info = aux;	//aqui termina a troca, atual recebe o aux, que está apontando para próximo
						
					}
                    proximo = proximo->prox;	//incrementa o próximo, para andar a lista e verificar se ainda existem registros
                }
                atual = atual->prox;	//atual recebe o próximo para voltar a percorrer a lista
                proximo = atual->prox;	//incrementa um próximo para percorrer a lista e comparar
            }
        }
    }
    
    imprime(*lista);	//imprime a lista
    printf("\n");
}

void imprime(LISTAENC *lista){	//função para imprimir a lista
	while (lista != NULL){	//roda enquanto a lista não estiver vazia
		printf("%s %s %s\n", lista->info.cor, lista->info.tamanho, lista->info.nome_dono);	//printa os dados
		lista = lista->prox;	//aponta para o proximo, para percorrer a lista
	}
}
