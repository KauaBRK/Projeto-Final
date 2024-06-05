#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<locale.h>
#include<ctype.h>

#include"saida.c"

void menu(){
	int op;
	char op2;
	setlocale(LC_ALL, "");
		
		while(getOut != 1){
			printf("\t\t##################\n\t\t#\t\t #\n\t\t#      MENU      #\n\t\t#\t\t #\n\t\t##################\n\nBem vindo(a) à loja [PLACEHOLDER]!!");
			printf("\n\n[1] - Login / Cadastro\n[2] - Visualizar catálogo\n[3] - Carrinho\n[4] - Área restrita\n[5] - Fechar aplicação\nPor favor, escolha uma opção: ");
			scanf("%d", &op);
			fflush(stdin);
			
			switch(op){
				case 1:
					break;
				case 2:
					break;
				case 3:
					break;
				case 4:
					break;
				case 5:
					getOut();
                	break;
				default:
					break;
			}
			system("cls");
		} 
}
int main(){
	menu();
}