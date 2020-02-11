#include <stdio.h>

void mudarValor(int variavel){
	printf("Endereço da variavel dentro do metodo: %p\n", &variavel);
}

int main(){
	int x = 10;
    int *ponteiro;
    ponteiro = &x;  //ponteiro recebe o endereço de memória do x
    *ponteiro = 20; //valor de onde o ponteiro aponta recebe 20, alterando o valor de x

    printf("Endereco de memoria do x: %p\n", &x); //print memory address of x
    printf("Valor do x: %i\n", x); //print value of x

    printf("Valor de onde o ponteiro aponta: %d\n", *ponteiro);   //mostra o valor para onde o ponteiro aponta
    printf("Endereco de memoria do ponteiro: %p\n", ponteiro);  //mostra o endereço de memória do ponteiro

    INFORMACAO info;
    
    strcpy(info.cor, "Vermelho");
    strcpy(info.nome_dono, "Giovane");
    strcpy(info.tamanho, "p");

    printf("%s\n", info.tamanho);
    printf("%s\n", info.nome_dono);
    printf("%s\n", info.cor);
    
	struct horario{
		int hora;
		int minuto;
		int segundo;
	};

	struct horario agora, *depois;

	depois = &agora;
	depois -> hora = 16;
	depois -> minuto = 42;
	depois -> segundo = 50;

	printf("%i\n", depois->hora);
	printf("%i\n", depois->minuto);
	printf("%i\n", depois->segundo);

	struct horario_com_ponteiro{
		int *hora;
		int *minuto;
		int *segundo;
	};

	struct horario_com_ponteiro hora_com_ponteiro;

	int hora = 17;
	int minuto = 05;
	int segundo = 30;

	hora_com_ponteiro.hora = &hora;
	hora_com_ponteiro.minuto = &minuto;
	hora_com_ponteiro.segundo = &segundo;
	
	printf("Hora: %i\n", *hora_com_ponteiro.hora);
	printf("Minuto: %i\n", *hora_com_ponteiro.minuto);
	printf("Segundo: %i\n", *hora_com_ponteiro.segundo);

	int variavel = 10;
	printf("Endereço da variavel fora do método: %p\n", &variavel);
	mudarValor(variavel);

	return 0;
}
