#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include<stdbool.h>
#include<locale.h>

#define MAX_NOME 50

void cadastroClientes(){
	setlocale(LC_ALL,"");
	int idade;
	char escolha, nome[MAX_NOME], email[MAX_NOME], senha[MAX_NOME];
		system("cls");
		fflush(stdin);
		printf("Você já tem cadastro?\nSim\nNao\n");
		scanf("%c", &escolha);
		switch(escolha){
			case 'N':
				system("cls");
				fflush(stdin);
				printf("\nPara começar o cadastro digite seu nome: ");
				scanf("%s", nome);
				printf("\nAgora digite sua idade: ");
				scanf("%d", &idade);
				printf("\nDigite o email que deseja cadastrar: ");
				scanf("%s", email);
				printf("\nAgora digite uma senha forte: ");
				scanf("%s", senha);
				while(1){
					if(strlen(senha)<5){
					printf("\nSenha fraca, digite uma nova senha: ");
					scanf("%s", senha);
					}
					else 
					break;
				}
				break;
			case 'S':
				system("cls");
				printf("\nInforme o email cadastrado: ");
				scanf("%s", email);
				printf("\nAgora digite a senha: ");
				scanf("%s", senha);
				break;
		}	
}
