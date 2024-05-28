void cpf(){
	char cpf[12];
		system("cls");
		printf("Digite o seu CPF:\n");
		scanf("%s", cpf);
		
					do {
					printf("Digite o seu CPF:\n");
					scanf("%s", cpf);
						
						if (strlen(cpf) < 11 || strlen(cpf) > 11){
							printf("Por favor, digite 11 números.\n");
							system("pause");
							system("cls");
							continue;
						}
						for(int i = 0; cpf[i] != '\0';i++){
							if(!isdigit(cpf[i])){
								printf("Por favor, digite apenas números\n\n");
								system("pause");
								break;
							}
						}
					} while (strlen(cpf) < 11 || strlen(cpf) > 11);
}

