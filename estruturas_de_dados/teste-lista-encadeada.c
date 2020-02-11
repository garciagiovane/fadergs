#include <stdio.h>
#include <stdlib.h>

typedef struct nodo{
	int a;
	struct nodo *proxima;
}NODO;

int main(){
	NODO *lista = malloc(sizeof(NODO));	//recebe o endere�o de um espa�o na mem�ria
	NODO *inicio; 	//inicio vai receber o endere�o de mem�ria inicial da lista, ou seja, onde a lista come�a
	
	if(lista == NULL)
		exit(1);
	inicio = lista;
	
	printf("chegou no for");
	int i;
	for(i = 0; i < 5; i++){
		printf("dentro do for");
		lista->a = 2;	//a vai receber o valor de i
		lista->proxima = (NODO*) malloc(sizeof(NODO));	//a pr�xima posi��o vai receber um novo endere�o de mem�ria
		lista = lista->proxima;	//lista agora aponta para um novo endere�o de mem�ria que est� vazio
	}
	lista->proxima = NULL;	//quando n�o for mais preciso registrar, o pr�ximo registro recebe NULL
	lista = inicio;	//lista agora recebe o seu endere�o inicial
	
	while(lista != NULL){
		printf("%d\n", lista->a);
		lista = lista->proxima;
	}
	return 0;
}
