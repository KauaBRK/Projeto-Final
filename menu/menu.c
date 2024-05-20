#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include<stdbool.h>

#define MAX_NOME 50

//#include "carrinho.c"

void menu(){
	int escolha, escolhaAux, idade, codigoDeAcesso;
	int *carrinho;
	char sexo, escolhas, nome[MAX_NOME], email[MAX_NOME], senha[MAX_NOME];
	bool logado = false;
	
		printf("Bem vindo! O que deseja fazer?\n\n1-Area de Clientes\n2-Area de Funcionarios\n");
		scanf("%d", &escolha);
		
		switch(escolha){
			case 1:
				printf("O que deseja fazer?\n1-Ver produtos\n2-Login\n");
				scanf("%d", &escolhaAux);
				switch(escolhaAux){
					case 1:
						printf("Produtos...");
						/*carrinho(&carrinho){
							carrinho+=1;
						}*/
						break;
					case 2:
						system("cls");
						fflush(stdin);
						printf("Você já tem cadastro?\nSim\nNao\n");
						scanf("%c", &escolhas);
						switch(escolhas){
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
			case 2:
				printf("Digite seu codigo de acesso: ");
				scanf("%d", &codigoDeAcesso);
				printf("\nAgora digite a senha fornecida pelo admnistrador: ");
				scanf("%s", senha);
				
		}
}
int main(){
	menu();
}