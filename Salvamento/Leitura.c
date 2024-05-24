#include <stdio.h>
#include <stdlib.h>

int main(){
	FILE * arquivo = fopen("Produtos.txt", "r");
	char texto[500];
	
	if(arquivo){
		printf("\nArquivo lido");
		while(!feof(arquivo)){
			if(fgets(texto,500,arquivo))
			printf("\n%s", texto);
		}
	}
}