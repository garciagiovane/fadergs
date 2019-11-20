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

int main (void) {
	setlocale(LC_ALL, "portuguese");
	ARVORE *r;			//ARVORE *r
	int codigo=1,res, viagem;		//c�digo inicia em 2 para a pergunta; 
	
	cria_ARVORE(&r);
	
	printf("Voc� quer viajar?\n 2 - 'Sim!'\n 0 - 'Nao'");
	scanf("%i", &viagem);
	
	if(viagem == 0)
		printf("Adeus! Estamos � sua disposi��o!\n");
	else
	  if(viagem == 2)	
		while(codigo != 0) {	//enquanto for diferente de 0 continua o la�o
			res = insere(&r,codigo); 	//res recebe o retorno da fun��o insere (i)
			switch(res)	{				//dependendo do retorno da fun��o insere, a pr�xima pergunta da �rvore � puxada, conforme a escolha indicada
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
				default:
					printf("Resposta inv�lida");
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
			question = fopen("q1.txt","r");
			while(fgets(text,100,question)!=NULL)
				printf("%s",text);
			fclose(question);
			break;
		case 2:
			question = fopen("q2.txt","r");
			while(fgets(text,100,question)!=NULL)
				printf("%s",text);
			fclose(question);
			break;
		case 3:
			question = fopen("q3.txt","r");
			while(fgets(text,100,question)!=NULL)
				printf("%s",text);
			fclose(question);
			break;
		case 4:
			question = fopen("q4.txt","r");
			while(fgets(text,100,question)!=NULL)
				printf("%s",text);
			fclose(question);
			break;
		case 5:
			question = fopen("q5.txt","r");
			while(fgets(text,100,question)!=NULL)
				printf("%s",text);
			fclose(question);
			break;
		case 6:
			question = fopen("q6.txt","r");
			while(fgets(text,100,question)!=NULL)
				printf("%s",text);
			fclose(question);
			break;
		case 7:
			question = fopen("q7.txt","r");
			while(fgets(text,100,question)!=NULL)
				printf("%s",text);
			fclose(question);
			break;
		case 8:
			question = fopen("q8.txt","r");
			while(fgets(text,100,question)!=NULL)
				printf("%s",text);
			fclose(question);
			break;
		case 9:
			question = fopen("q9.txt","r");
			while(fgets(text,100,question)!=NULL)
				printf("%s",text);
			fclose(question);
			break;
		case 10:
			question = fopen("q10.txt","r");
			while(fgets(text,100,question)!=NULL)
				printf("%s",text);
			fclose(question);
			break;
		case 11:
			question = fopen("q11.txt","r");
			while(fgets(text,100,question)!=NULL)
				printf("%s",text);
			fclose(question);
			break;
	    case 12:
			question = fopen("q12.txt","r");
			while(fgets(text,100,question)!=NULL)
				printf("%s",text);
			fclose(question);
			break;
		case 13:
			question = fopen("q13.txt","r");
			while(fgets(text,100,question)!=NULL)
				printf("%s",text);
			fclose(question);
			break;
		 case 14:
			question = fopen("q14.txt","r");
			while(fgets(text,100,question)!=NULL)
				printf("%s",text);
			fclose(question);
			break;
		 case 15:
			question = fopen("q15.txt","r");
			while(fgets(text,100,question)!=NULL)
				printf("%s",text);
			fclose(question);
			break;
		default:
			printf("Saindo");
			break;
	}
}

void cria_ARVORE( ARVORE** r ) {
    *r = NULL; // arvore criada, raiz nao aponta
}

//FUN��O CONCATENA A ESCOLHA COM A RESPOSTA GRAVADA EM ARQUIVO

char* concatena(int n) {
	char resposta[10] = "r.txt"; 		//digito da resposta
	char IntToStr[30];  		//resultado da concatenacao
	sprintf(IntToStr,"%d",n);	// converte o n em string
	strcat(IntToStr,resposta);	//junta o n�mero da resposta com r.txt = (numero)r.txt
	
	return IntToStr;		//retorno 
}

//ENTRADA DE DADOS
void entrada_dados( ARVORE* aux ) {  
    aux->subd = NULL;    // n�o aponta
    aux->sube = NULL;    // n�o aponta
}

//FUN��O INSERE = Insere os valores das respostas em �rvore
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
			scanf("%i",&i); //Op��o escolhida
			strcpy(resposta,concatena(i)); //copia para resposta o valor de retorno da fun��o concatena
			f = fopen(resposta,"r");	//abrindo arquivo (numero)r.txt 			 
			while(fgets(no->info.word,50,f)!=NULL)
			{
				entrada_dados( no );  // entrada do usu�rio
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
                    
			 	printf("Valor inserido na vari�vel word: %s\n",no->info.word);
			 	fclose(f);	//Fecha arquivo	
			}		
		}
		return i;
}
void imprime_ARVORE( ARVORE* aux ){    
     
    if( aux != NULL )
	{              // verifica se a raiz � diferente de vazio
        printf( "\n Raiz: %s", aux->info.word );    
		getchar();
        printf( "\n >> sube" );
        imprime_ARVORE( aux->sube ); // recursivo, segue pelo caminho da esquerda
        printf( "\n >> subd" );
        imprime_ARVORE( aux->subd ); // recursivo, segue pelo caminho da direita
    }
    else
       printf("\n �rvore vazia!");
}
