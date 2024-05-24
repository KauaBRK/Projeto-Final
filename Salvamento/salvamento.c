#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define MAX_CHAR 80

int salvamento(){
    int code, option;
    float price;
    char productName[MAX_CHAR];
    
    while(option!=2){
    		FILE * file = fopen("Produtos.txt", "a+");
    		if(file==NULL){
			printf("Erro ao abrir o arquivo\nCriando um arquivo novo :)");
			FILE * file = fopen("Produtos.txt", "w");
			system("pause");
			system("cls");
		}
    		fflush(stdin);
		printf("Digite o nome do produto a ser cadastrado: ");
		scanf("%s", productName);
		strupr(productName);
		fprintf(file, "\nProduto: %s\n",productName);
		printf("Digite o preco do produto: R$");
		scanf("%f", &price);
		fprintf(file, "Preco: %.2f\n", price);
		printf("Digite o codigo do produto a ser cadastrado: ");
		scanf("%d", &code);
		fprintf(file, "Codigo: %d\n", code);
		fclose(file);

		fflush(stdin);
		printf("\nProduto: %s\nCodigo: %d\nPreco: %.2f\n", productName, code, price);
		printf("\nDeseja cadastrar mais algum produto?\n[1]Sim\n[2]Nao\n");
		scanf("%d", &option);
		system("cls");
    }
    printf("Obrigado por usar a plataforma de cadastro :)\n\n");
    system("pause");
}
int main(){
	salvamento();
}