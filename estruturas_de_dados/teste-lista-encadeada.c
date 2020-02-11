#include <stdio.h>
#include <stdlib.h>

typedef struct nodo{
	int a;
	struct nodo *proxima;
}NODO;

int main(){
	NODO *lista = malloc(sizeof(NODO));	//recebe o endereço de um espaço na memória
	NODO *inicio; 	//inicio vai receber o endereço de memória inicial da lista, ou seja, onde a lista começa
	
	if(lista == NULL)
		exit(1);
	inicio = lista;
	
	printf("chegou no for");
	int i;
	for(i = 0; i < 5; i++){
		printf("dentro do for");
		lista->a = 2;	//a vai receber o valor de i
		lista->proxima = (NODO*) malloc(sizeof(NODO));	//a próxima posição vai receber um novo endereço de memória
		lista = lista->proxima;	//lista agora aponta para um novo endereço de memória que está vazio
	}
	lista->proxima = NULL;	//quando não for mais preciso registrar, o próximo registro recebe NULL
	lista = inicio;	//lista agora recebe o seu endereço inicial
	
	while(lista != NULL){
		printf("%d\n", lista->a);
		lista = lista->proxima;
	}
	return 0;
}
