#include <stdio.h>

void mudarValor(int variavel){
	printf("Endereço da variavel dentro do metodo: %p\n", &variavel);
}

int main(){
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
