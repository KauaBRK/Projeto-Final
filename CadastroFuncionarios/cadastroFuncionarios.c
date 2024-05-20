#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

#define MAX_NOME 50

void cadastroFuncionarios(){
	setlocale(LC_ALL,"");
	int codigoDeAcesso;
	char senha[MAX_NOME];
	
		printf("Digite seu codigo de acesso: ");
		scanf("%d", &codigoDeAcesso);
		printf("\nAgora digite a senha fornecida pelo admnistrador: ");
		scanf("%s", senha);
}
