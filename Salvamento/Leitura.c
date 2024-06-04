#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "flush.c"
#include "fileOpenPrint.c"

void leitura(int choice){
	char text[30][30], text2[50], text3[50];
	int i = 0, canCopy=0, twoAFactor=0;
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
			
			while(!feof(file)){
				if(fgets(text[i],500,file)){	 					
					int b=0;
					//printf("\ni: %d\n", i);
					do{
						if(text[i][b]=='#'){
							//printf("teste %d\n", i);
							//printf("##%c##", text[i][b]);
							text[i][b]='\0';
							break;
							
						}
						
						//printf(" %d ", b);
						b++;
					}while(text[i][b]!='\n');
					i++;
				}
			}
			//strcpy(text3, text[2]);
			while(canCopy==0){
				//printf("%s",text3);
				printf("#TEST#%s#TEST#", text[2]);
				printf("Digite seu nome: ");
				gets(text2);
				fflush(stdin);
				strupr(text2);
				printf("%d\n", strcmp(text[2],text2));
					//if(strcmp(text3,text2)==0 && twoAFactor==0){
				if(strcmp(text[2],text2)==0 && twoAFactor==0){
					twoAFactor=1;
					if(twoAFactor==1){
						fflush(stdin);
						printf("Agora digite o codigo: ");
						gets(text2);
						if(strcmp(text[4],text2)==0 && twoAFactor==1){
							canCopy=1;
						}
					}
				}
			}
				
		fclose(file);
	}
	
}

int main(){
	int choice=3;
	leitura(choice);
}