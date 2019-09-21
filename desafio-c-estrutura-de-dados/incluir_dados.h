void incluir(NODO *lista){	//recebe um ponteiro (endereço na memória) como parâmetro
	lista->p = 0;	//inicializa a lista
	
	do {	//solicita informações do usuário até que ele digite 0 na quantidade
		fflush(stdin);	//limpa o buffer
		scanf("%d", &lista->p);	//recebe a quantidade de registros
		
		int i;	//variavel pra iniciar o for
		for(i = 0; i < lista->p; i++){	//solicita informações do usuário até que atinja o número de registros
			fflush(stdin);	//limpa o buffer
			scanf("%[^\n]s", lista->info[i].nome_dono);	//recebe nome do dono da camiseta com espaços e guarda na lista
			
			fflush(stdin);	//limpa o buffer
			scanf("%s %s", lista->info[i].cor, lista->info[i].tamanho);	//lê a cor e o tamanho da camiseta, estes estando separados por espaço
		}
		ordena(lista);	//vai ordenar a lista
	} while(lista->p > 0 && lista->p <= 60); //executa as instruções acima enquanto satisfazer a condição de número de registros ser maior que 0 e menor ou igual a 60 
}
