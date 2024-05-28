#include <stdio.h>
#include <stdlib.h>

void leitura(int choice){
	char text[500];
	
		if(choice==1){//Lista de funcionarios
		FILE * file = fopen("Funcionarios.txt", "r");
		if(file==NULL)
				printf("Erro ao abrir o arquivo\nDica: crie um arquivo por meio do cadastro.");
		if(file){
			if(choice==1){
				while(!feof(file)){
				if(fgets(text,500,file))	
					printf("%s", text);
				}
			}
		}
		fclose(file);
	}
	/*
	int i=0;
		if(choice==1){//Lista de funcionarios
		FILE * file = fopen("Funcionarios.txt", "r");
		if(file==NULL)
				printf("Erro ao abrir o arquivo\nDica: crie um arquivo por meio do cadastro.");
		if(file){
			if(choice==1){
				while(!feof(file)){
				if(fgets(text[i],100,file))	
					
					printf("%s", text[0]);
				}
			}
		}
		fclose(file);
	}*/
	
	if(choice==2){//Lista de produtos
		FILE * file = fopen("Produtos.txt", "r");
	if(file==NULL)
			printf("Erro ao abrir o arquivo\nDica: crie um arquivo por meio do cadastro.");
	if(file){
		if(choice==2){
			while(!feof(file)){
			if(fgets(text,500,file))	
				printf("%s", text);
			}
		}
	}
	fclose(file);
	}
}
int main(){
	int choice=1;
	leitura(choice);
}