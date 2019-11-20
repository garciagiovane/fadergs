typedef struct{
	char word[100];
}INFORMACAO;

typedef struct arv{
	INFORMACAO info;
	struct arv* sube;
	struct arv* subd;
}ARVORE;
