int getOut(){
	int i = 1;
	char op[1];
		
	printf("Deseja sair?(S/N): ");
    scanf("%c", &op);
    fflush(stdin);
	strupr(op);
	
	switch(op[0]){
		case 'S':
			system("cls");
	        printf("Até o seu próximo acesso :]");
			abort();
		case 'N':
			return 0;
		default:
			printf("Opção inválida\n");
			system("pause");
			return 0;
	}
}