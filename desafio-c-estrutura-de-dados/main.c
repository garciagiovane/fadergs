#include <stdio.h>	// entrada e saída padrão: printf, scanf
#include <stdlib.h>	// exit, malloc, system

/*Bibliotecas incluídas*/
#include "modelo.h"	//modelo de dados
#include "incluir_dados.h"	//função que recebe os dados do usuário
#include "ordena_lista.h"	//função que ordena a lista

int main() {
    NODO lista; //variável do tipo NODO
    
    incluir(&lista);	//passa o endereço na memória, da variável lista (passa um ponteiro) para a função

    return 0;
}
