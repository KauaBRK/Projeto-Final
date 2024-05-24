#include<stdio.h>
#include<stdlib.h>

#define MAX_NOME 80

int main(){
    int codigo;
    char nomeProduto[MAX_NOME], opcao;
    
    
    
    while(opcao!='N' && opcao !='n'){
    		FILE * arquivo = fopen("Produtos.txt", "w");
    		fflush(stdin);
		printf("Digite o nome do produto a ser cadastrado: ");
		scanf("%s", nomeProduto);
		fprintf(arquivo, "%s\n",nomeProduto);
		printf("Agora digite o codigo do produto a ser cadastrado: ");
		scanf("%d", &codigo);
		fprintf(arquivo, "%d\n", codigo);
		fclose(arquivo);
		
		fflush(stdin);
		printf("\nProduto: %s\nCodigo: %d\n", nomeProduto, codigo);
		printf("\nDeseja cadastrar mais algum produto?\nSim\nNao\n");
		scanf("%c", &opcao);
		system("cls");
    }
    printf("Obrigado por usar a plataforma de cadastro :)");
    system("pause");
    
}