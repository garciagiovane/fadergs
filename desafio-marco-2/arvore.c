#include <stdio.h>
#include <string.h>
#include <limits.h>
#include <unistd.h>

typedef struct {
	int codigo;
	int respostaUsuario;
	char pergunta[50];
} INFORMACAO;

typedef struct arv {
	INFORMACAO info;
	struct arv *subd;
	struct arv *sube;
} ARVORE;

int main() {
	FILE *file;
	char local_do_arquivo[150];
	char conteudo[255];

	file = fopen("perguntas.txt", "r");
	fscanf(file, "%s", conteudo);
	
	printf(conteudo);
	
	fclose(file);

	return 0;
}
