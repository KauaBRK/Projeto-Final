#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

int getOut(){
	int i = 1;
	char op;
	//while (/*/i != 0*/ op != 'S'){
	    printf("Deseja sair?(S/N): ");
	    scanf("%c", &op);
	    fflush(stdin);
		toupper(op);
		
		switch(op){
			case 'S':
		        printf("Até o seu próximo acesso :]\n");
				abort();
			case 'N':
				return 0;
			default:
				printf("Escolha uma opção válida\n");
				break;
		}
	
	    /*if(op == 'S'){
	        printf("Até seu próximo acesso :]\n");
	    	i = 0;
	    } else if(op == 'N'){
	    	printf("Voltando ao menu...");
	        i = 1;
	    } else {
	        printf("Escolha uma opção válida\n");
	        i = -1;
	    }
	    printf("##%d##", i);
	    system("pause");*/
	//}
}