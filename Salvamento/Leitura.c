#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "flush.c"
#include "fileOpenPrint.c"

int leitura(int choice){
	int codigos=0, funcionarios=2, b=0, c=0;
	char text[30][30], text2[50], text3[50], funcionario[30][50], codigo[30][50];
	
	int i = 0, canCopy=0, twoAFactor;
		if(choice==1){//Lista de funcionarios
		FILE * file = fopen("Funcionarios.txt", "r");
		if(file==NULL)
			printf("Erro ao abrir o arquivo\nDica: crie um arquivo por meio do cadastro.");
			
		fileOpenPrint(file);
		fclose(file);
	}
		if(choice==2){//Lista de produtos
		FILE * file = fopen("Produtos.txt", "r");
		if(file==NULL)
			printf("Erro ao abrir o arquivo\nDica: crie um arquivo por meio do cadastro.");
			
		fileOpenPrint(file);
		fclose(file);
	}
	if(choice==3){//Login de funcionario
		FILE * file = fopen("Funcionarios.txt", "r");
		if(file==NULL)
			printf("Erro ao abrir o arquivo\nDica: crie um arquivo por meio do cadastro.");
			
			twoAFactor=0;
			while(!feof(file)){
				if(fgets(text[i],500,file)){
				int d=0;
					do{
						if(text[i][d]=='#'){
							text[i][d]='\0';
							break;
						}
						d++;
					}while(text[i][d]!='\n');
				
				
					if(codigos!=0 || funcionarios!=-0){
						codigos++;
						funcionarios++;
					}
					if(codigos%5==0){
						strcpy(codigo[b], text[i]);
						
						b++;
						
					}
					if(funcionarios%5==0){
						strcpy(funcionario[c], text[i]);
						
						c++;
						
					}
						
					
					i++;
				}
			}
			int aux=i;
			
			
			while(canCopy==0){
				if(twoAFactor==0){
					printf("Digite seu nome: ");
					gets(text2);
					fflush(stdin);
					strupr(text2);
				}

				for(i=0;i<aux;i++){
					if(strcmp(funcionario[i],text2)==0 && twoAFactor==0)
						twoAFactor=1;
				}
					if(twoAFactor==0){
						printf("\nUsuario nao cadastrado\n\n");
						system("pause");
						system("cls");
					}

					if(twoAFactor==1){
						fflush(stdin);
						printf("Agora digite o codigo: ");
						gets(text2);
						if(strcmp(text[4],text2)==0 && twoAFactor==1){
							return 1;
						}
						else{
							printf("Codigo incorreto, digite novamente.\n");
							system("pause");
						}
					}
				system("cls");
			}
				
		fclose(file);
	}
	
}

int main(){
	int choice=3;
	leitura(choice);
}