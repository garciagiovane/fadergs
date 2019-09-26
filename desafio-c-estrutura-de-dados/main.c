#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "modelo.h"
#include "incluir_dados.h"
#include "ordena_lista.h"

void limpaLista(LISTAENC **lista);

int main() {
    LISTAENC *lista = NULL;
    int quantidadeRegistros = 0;    //vai receber a quantidade de registros

    do {
        fflush(stdin);  //limpa buffer
        scanf("%d", &quantidadeRegistros);  //le o numero de registros a serem incluidos
        
        if(quantidadeRegistros == 0)	//se a quantidade de registros for zero, encerra o programa
        	exit(1);

        int i;
        for (i = 0; i < quantidadeRegistros; ++i) { //executa o registro conforme  quantidade informada pelo usuario
            incluir(&lista);    //executa rotina para incluir na lista
        }
        
        ordenar(&lista); //executa rotina para ordenar a lista        
        limpaLista(&lista);   //lista recebe mull para limpar os registros
    } while (quantidadeRegistros > 0 && quantidadeRegistros <= 60); //executa a quantidade de vezes informada pelo usuario
    return 0;
}

void limpaLista(LISTAENC **lista) {
    LISTAENC *aux = *lista;	//recebe o endereço da lista
    while (aux != NULL) {      // ponteiro auxiliar para percorrer a lista
        *lista = aux->prox;     // aponta para o prï¿½ximo registro da lista
        free(aux);        // libera memï¿½ria
        aux = *lista;           // reposiciona ponteiro auxiliar no inï¿½cio
    } // fim if( aux == NULL )
}
