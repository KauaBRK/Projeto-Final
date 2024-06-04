#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>

#include "flush.c"

#define MAX_CHAR 80

typedef struct{
	int code;
	float price;
	char productName[MAX_CHAR];
}Produtos;

typedef struct{
	int code;
	char employeeName[MAX_CHAR];
}Funcionarios;

int salvamento(int option){
	int choice, i=0, codeAux;
	char text[30][30], text2[20], text3[20];
	
	
	if(option==1){
		Funcionarios funcionarios[1];
		while(choice!=2){
			
	    		FILE * file = fopen("Funcionarios.txt", "a+");
	    		if(file==NULL){
				printf("Erro ao abrir o arquivo\nCriando um arquivo novo :)");
				FILE * file = fopen("Funcionarios.txt", "w");
				system("pause");
				system("cls");
			}
	    		fflush(stdin);
			printf("Digite o nome do Funcionario a ser cadastrado: ");
			gets(funcionarios[0].employeeName);
			strupr(funcionarios[0].employeeName);
			printf("Digite o codigo do funcionario a ser cadastrado: ");
			scanf("%d", &funcionarios[0].code);
			sprintf(text2,"%d",funcionarios[0].code);
			
			i=0;
			while(!feof(file)){
				if(fgets(text[i],500,file)){	 					
					int b=0;
					do{
						if(text[i][b]=='#'){
							text[i][b]='\0';
							break;
							
						}
						b++;
					}while(text[i][b]!='\n');
					i++;
				}
			}
			
			strcpy(text3, text[4]);
			printf("##1 %s ##", text3);
			printf("\n##3 %d ##", strcmp(text[4],text2));
			int canCopy=0;
			
			while(canCopy==0){
			
				if(strcmp(text[4], text2)==0){
					printf("Codigo de funcionario já existe.");
					printf("\nDigite o codigo do funcionario a ser cadastrado: ");
					scanf("%d", &funcionarios[0].code);
					sprintf(text2,"%d",funcionarios[0].code);
				}
				else{
					canCopy=1;
				}
				
				
			}
			
			/*while(canCopy==0){
				
				for(int a=0;a<i;a++){
					if(strcmp(text3,text2)==0 || codeAux==funcionarios[0].code){
					
						printf("Codigo do funcionario já foi cadastrado, use outro.\n");
					}
				}
				flush();
			
			}*/
			
			codeAux=funcionarios[0].code;
			fprintf(file,"\nFuncionario: \n%s#\n", funcionarios[0].employeeName);
			fprintf(file, "Codigo: \n%d#\n", funcionarios[0].code);
			flush();
			fclose(file);
			printf("\nFuncionario: %s\nCodigo: %d\n", funcionarios[0].employeeName, funcionarios[0].code);
			printf("\nDeseja cadastrar mais algum funcionario?\n[1]Sim\n[2]Nao\n");
			scanf("%d", &choice);
			system("cls");
	    }
	    printf("Obrigado por usar a plataforma de cadastro de funcionarios:)\n\n");
	    system("pause");
	}
	if(option==2){
		Produtos produtos[1];
    		while(choice!=2){
	    		FILE * file = fopen("Produtos.txt", "a+");
	    		if(file==NULL){
				printf("Erro ao abrir o arquivo\nCriando um arquivo novo :)");
				FILE * file = fopen("Produtos.txt", "w");
				system("pause");
				system("cls");
			}
	    		fflush(stdin);
			printf("Digite o nome do produto a ser cadastrado: ");
			scanf("%s", produtos[0].productName);
			strupr(produtos[0].productName);
			fprintf(file, "\nProduto: \n%s\n",produtos[0].productName);
			printf("Digite o preco do produto: R$");
			scanf("%f", &produtos[0].price);
			fprintf(file, "Preco: \n%.2f\n", produtos[0].price);
			flush();
			printf("Digite o codigo do produto a ser cadastrado: ");
			scanf("%d", &produtos[0].code);
			fprintf(file, "Codigo: %d\n", produtos[0].code);
			flush();
			fclose(file);
			
			printf("\nProduto: %s\nCodigo: %d\nPreco: %.2f\n", produtos[0].productName, produtos[0].code, produtos[0].price);
			printf("\nDeseja cadastrar mais algum produto?\n[1]Sim\n[2]Nao\n");
			scanf("%d", &choice);
			system("cls");
	    }
	    printf("Obrigado por usar a plataforma de cadastro de produtos :)\n\n");
	    system("pause");
    }
}
int main(){
	int option=1;
	salvamento(option);
}