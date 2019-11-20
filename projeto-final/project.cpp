#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <stdlib.h>
#include "modelo.h"
#include <locale.h>

FILE open_file(int cod);
void cria_ARVORE( ARVORE** r );
char* concatena(int n);
void entrada_dados( ARVORE* aux );
int insere( ARVORE** r,int codigo);
void imprime_ARVORE( ARVORE* aux );
void abrir_arquivo(char arquivo[20], FILE *question, char text[100]);

int main (void) {
	setlocale(LC_ALL, "portuguese");
	ARVORE *r;			//ARVORE *r
	int codigo=1,res, viagem;		//código inicia em 2 para a pergunta; 
	
	FILE *question;
	char text[100];
	
	cria_ARVORE(&r);
	
	printf("Você quer viajar?\n 2 - 'Sim!'\n 0 - 'Nao'");
	scanf("%i", &viagem);
	
	if(viagem == 0)
		printf("Adeus! Estamos à sua disposição!\n");
	else
	  if(viagem == 2)	
		while(codigo != 0) {	//enquanto for diferente de 0 continua o laço
			res = insere(&r,codigo); 	//res recebe o retorno da função insere (i)
			switch(res)	{				//dependendo do retorno da função insere, a próxima pergunta da árvore é puxada, conforme a escolha indicada
				case 2:
					codigo = 2;
					break;
				case 3:
					codigo = 3;
					break;
				case 4:
					codigo = 4;
					break;
				case 5:
					codigo = 5;
					break;
				case 6:
					codigo = 6;
					break;
				case 7:
					codigo = 7;
					break;
				case 8:
					codigo = 8;
					break;
				case 9:
					codigo = 9;
					break;
				case 10:
					codigo = 10;
					break;
				case 11:
					codigo = 11;
					break;
				case 12:
					codigo = 12;
					break;
				case 13:
					codigo = 13;
					break;
				case 14:
					codigo = 14;
					break;
				case 15:
					codigo = 15;
					break;
				case 16:
					codigo = 16;
					break;
				case 17:
					codigo = 17;
					break;
				case 20:
					codigo = 20;
					break;
				case 21:
					codigo = 21;
					break;
				case 22:
					codigo = 22;
					break;
				case 23:
					codigo = 23;
					break;
				default:
					printf("Resposta inválida");
					imprime_ARVORE(r);
					break;					
				}
			} else {
			printf("Volte mais tarde!\n");	
		}
}	

FILE open_file(int cod) {
	FILE *question;
	char text[100];
	switch(cod) {
		case 1:
			abrir_arquivo("q1.txt", question, text);
			break;
		case 2:
			abrir_arquivo("q2.txt", question, text);
			break;
		case 3:
			abrir_arquivo("q3.txt", question, text);
			break;
		case 4:
			abrir_arquivo("q4.txt", question, text);
			break;
		case 5:
			abrir_arquivo("q5.txt", question, text);
			break;
		case 6:
			abrir_arquivo("q6.txt", question, text);
			break;
		case 7:
			abrir_arquivo("q7.txt", question, text);
			break;
		case 8:
			abrir_arquivo("q8.txt", question, text);
			break;
		case 9:
			abrir_arquivo("q9.txt", question, text);
			break;
		case 10:
			abrir_arquivo("q10.txt", question, text);
			break;
		case 11:
			abrir_arquivo("q11.txt", question, text);
			break;
	    case 12:
	    	abrir_arquivo("q12.txt", question, text);
			break;
		case 13:
			abrir_arquivo("q13.txt", question, text);
		break;
		case 14:
			abrir_arquivo("q14.txt", question, text);
		break;
		case 15:
			abrir_arquivo("r15.txt", question, text);
		break;
		case 16:
			abrir_arquivo("r16.txt", question, text);
		break;
		case 17:
			abrir_arquivo("r17.txt", question, text);
		break;
		case 20:
			abrir_arquivo("r20.txt", question, text);
		break;
		case 21:
			abrir_arquivo("r21.txt", question, text);
		break;
		case 22:
			abrir_arquivo("r22.txt", question, text);
		break;
		case 23:
			abrir_arquivo("r23.txt", question, text);
		break;
		default:
			printf("Saindo");
			break;
	}
}

void abrir_arquivo(char arquivo[20], FILE *question, char text[100]) {
	question = fopen(arquivo,"r");
	while(fgets(text,100,question)!=NULL)
		printf("%s",text);
	fclose(question);
}

void cria_ARVORE( ARVORE** r ) {
    *r = NULL; // arvore criada, raiz nao aponta
}

//FUNÇÃO CONCATENA A ESCOLHA COM A RESPOSTA GRAVADA EM ARQUIVO

char* concatena(int n) {
	char resposta[10] = "r.txt"; 		//digito da resposta
	char IntToStr[30];  		//resultado da concatenacao
	sprintf(IntToStr,"%d",n);	// converte o n em string
	strcat(IntToStr,resposta);	//junta o número da resposta com r.txt = (numero)r.txt
	
	return IntToStr;		//retorno 
}

//ENTRADA DE DADOS
void entrada_dados( ARVORE* aux ) {  
    aux->subd = NULL;    // não aponta
    aux->sube = NULL;    // não aponta
}

//FUNÇÃO INSERE = Insere os valores das respostas em árvore
int insere( ARVORE** r,int codigo){
    ARVORE* p;      // ponteiro auxiliar
    ARVORE* a;      // ponteiro auxiliar para anterior de p
    FILE* f; 
    int i;
	char resposta[100];
    p = *r;                            // posiciona ponteiro auxiliar
	ARVORE* no = (ARVORE*) malloc (sizeof(ARVORE));
		if(no !=NULL)
		{
			open_file(codigo);	//ABRE A PRIMEIRA PERGUNTA DA FUNCAO OPEN_FILE
			printf("\nResposta: ");
			scanf("%i",&i); //Opção escolhida
			strcpy(resposta,concatena(i)); //copia para resposta o valor de retorno da função concatena
			f = fopen(resposta,"r");	//abrindo arquivo (numero)r.txt 			 
			while(fgets(no->info.word,50,f)!=NULL)
			{
				entrada_dados( no );  // entrada do usuário
			 	if(*r == NULL)
			 		*r = no;	
				else 
				{
					if (i%2==1)
					{
						(*r)->subd = no; // insere a direita do registro folha
						printf("Armazenou na folha\n");
					}
                    else
                         (*r)->sube = no; // insere a esquerda do registro folha		
				}
                    
			 	printf("Valor inserido na variável word: %s\n",no->info.word);
			 	fclose(f);	//Fecha arquivo	
			}		
		}
		return i;
}
void imprime_ARVORE( ARVORE* aux ){    
     
    if( aux != NULL )
	{              // verifica se a raiz é diferente de vazio
        printf( "\n Raiz: %s", aux->info.word );    
		getchar();
        printf( "\n >> sube" );
        imprime_ARVORE( aux->sube ); // recursivo, segue pelo caminho da esquerda
        printf( "\n >> subd" );
        imprime_ARVORE( aux->subd ); // recursivo, segue pelo caminho da direita
    }
    else
       printf("\n Árvore vazia!");
}
