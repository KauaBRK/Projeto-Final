#include <stdio.h>
#include <stdlib.h>

void leitura(int choice){
	char text[500];
	
	FILE * file = fopen("Produtos.txt", "r");
	if(file==NULL){
			printf("Erro ao abrir o arquivo\nDica: crie um arquivo por meio do cadastro.");
		}
	if(file){
		if(choice==1){//Lista de produtos
			while(!feof(file)){
			if(fgets(text,500,file))	
				printf("%s", text);
			}
		}
	}
	fclose(file);
}
int main(){
	int choice=1;
	leitura(choice);
}