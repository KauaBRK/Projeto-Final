#include <stdio.h>
#include <stdlib.h>

void leitura(int choice){
	char text[30][30];
	int i = 0;
		if(choice==1){//Lista de funcionarios
		FILE * file = fopen("Funcionarios.txt", "r");
		if(file==NULL)
				printf("Erro ao abrir o arquivo\nDica: crie um arquivo por meio do cadastro.");
		if(file){
			if(choice==1){
				while(!feof(file)){
					if(fgets(text[i],30,file)){
						printf("%s", text[i]);
						i++;
						system("pause");
					}						
				}
			}
		}
		fclose(file);
	}
		if(choice==2){//Lista de produtos
		FILE * file = fopen("Produtos.txt", "r");
		if(file==NULL)
				printf("Erro ao abrir o arquivo\nDica: crie um arquivo por meio do cadastro.");
		if(file){
			if(choice==1){
				while(!feof(file)){
					if(fgets(text[i],500,file)){
						printf("%s", text[i]);
						i++;
						system("pause");
					}	
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