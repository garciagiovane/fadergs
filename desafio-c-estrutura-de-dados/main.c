#include <stdio.h>
#include <string.h>
#include "modelo.h"

int main() {
    int x = 10;
    int *ponteiro;
    ponteiro = &x;  //ponteiro recebe o endereço de memória do x
    *ponteiro = 20; //valor de onde o ponteiro aponta recebe 20, alterando o valor de x

    printf("Endereço de memória do x: %p\n", &x); //print memory address of x
    printf("Valor do x: %i\n", x); //print value of x

    printf("Valor de onde o ponteiro aponta: %d\n", *ponteiro);   //mostra o valor para onde o ponteiro aponta
    printf("Endereço de memória do ponteiro: %p\n", ponteiro);  //mostra o endereço de memória do ponteiro

    INFORMACAO info;
    stpcpy(info.cor, "Vermelho");
    stpcpy(info.nome_dono, "Giovane");
    stpcpy(info.tamanho, "p");

    printf("%s\n", info.tamanho);
    printf("%s\n", info.nome_dono);
    printf("%s\n", info.cor);


    return 0;
}